"""
Summary table of the ventilation results (winter_base vs summer_base, week 2).
Prints the numbers and a LaTeX table (booktabs) for the report.
"""
import numpy as np

from load_and_prepare_mat_file import Datahandler

# --- Settings ----------------------------------------------------------------
START, END, DT = 604800, 1209600, 300          # week 2, 5-min grid
RHO, CP = 1.2, 1006                             # air: kg/m3, J/(kg K)

rooms = {1: "Bathroom", 2: "Bedroom", 3: "Kitchen", 4: "Living room"}
room_models = {1: "bathroom", 2: "Bedroom", 3: "Kitchen", 4: "LivingRoom"}
C = "houseEnviroment.ventilationUnit.channel[{}]."
HP = "houseEnviroment.heatPump_ThermalStorage."

# --- Signal names (one dict per quantity, key = room) -------------------------
T_out = C.format(4) + "Toutdoor"
T_room = {rooms[i]: f"houseEnviroment.houseVentilation.{m}.Temperature_sensor"
          for i, m in room_models.items()}
T_sup = {rooms[i]: C.format(i) + "sensor_T_airIn.sensorValue" for i in rooms}
V_flow = {rooms[i]: C.format(i) + "ventilationController.V_flow" for i in rooms}
Q_hx = {rooms[i]: [C.format(i) + f"bypassHX[{j}].Q_flow" for j in range(1, 11)] for i in rooms}
bypass = {rooms[i]: C.format(i) + "and1.y" for i in rooms}
phi = {rooms[i]: C.format(i) + "sensor_phi.sensorValue" for i in rooms}
P_fan = {rooms[i]: C.format(i) + "P_fan" for i in rooms}
Q_heat = HP + "HeatFlow"
DHW = HP + "thermalstorageController.DHWmode"

temperatures = [T_out] + list(T_room.values()) + list(T_sup.values())
switches = list(bypass.values()) + [DHW]       # on/off signals: no interpolation
names = (temperatures + list(V_flow.values()) + [n for l in Q_hx.values() for n in l]
         + switches + list(phi.values()) + list(P_fan.values()) + [Q_heat])


def kwh(power_w, time_s):
    """Integrate a power [W] over time [s] and convert J -> kWh."""
    return np.trapezoid(power_w, time_s) / 3.6e6


def hours(mask):
    """Hours a True/False signal is on. [:-1] drops the extra sample at t = END,
    so exactly 2016 steps of 5 min (= 168 h) are counted."""
    return mask.to_numpy()[:-1].sum() * DT / 3600


def evaluate(case):
    """Return a dict with all table values for one simulation case."""
    df = Datahandler(case).to_dataframe(names, dt=DT, start=START, end=END,
                                        step_variables=set(switches))
    t = df["Time"]

    # K -> °C where needed (mean above 200 can only be Kelvin)
    for col in temperatures:
        if df[col].mean() > 200:
            df[col] = df[col] - 273.15

    r = {}
    r["T_out"] = df[T_out].mean()

    # Heat source split by DHW mode: DHW while charging the tank, space heating otherwise
    dhw_on = df[DHW] > 0.5
    r["Q_SH"] = kwh(df[Q_heat].where(~dhw_on, 0), t)
    r["Q_DHW"] = kwh(df[Q_heat].where(dhw_on, 0), t)

    loss, rec, fan, cool = 0, 0, 0, 0
    r["bypass_h"] = {}
    for room in rooms.values():
        m_cp = RHO * df[V_flow[room]].abs() * CP              # heat capacity flow [W/K]
        # Loss without heat recovery: outdoor air heated to room temperature (only > 0)
        loss += kwh((m_cp * (df[T_room[room]] - df[T_out])).clip(lower=0), t)
        # Recovered heat: sum of the 10 HX segments, sign flipped
        rec += kwh(-df[Q_hx[room]].sum(axis=1), t)
        fan += kwh(df[P_fan[room]], t)
        # Free cooling: supply cooler than room, only while bypass is on (only > 0)
        on = df[bypass[room]] > 0.5
        cool += kwh((m_cp * (df[T_room[room]] - df[T_sup[room]])).clip(lower=0).where(on, 0), t)
        r["bypass_h"][room] = hours(on)
    r["loss"], r["rec"], r["fan"], r["cool"] = loss, rec, fan, cool

    # Humidity: lowest value of all rooms, and range of the per-room weekly means
    r["phi_min"] = min(df[c].min() for c in phi.values())
    means = [df[c].mean() for c in phi.values()]
    r["phi_mean_lo"], r["phi_mean_hi"] = min(means), max(means)

    r["h25_kitchen"] = hours(df[T_room["Kitchen"]] > 25)
    r["h25_bathroom"] = hours(df[T_room["Bathroom"]] > 25)
    return r


w = evaluate("winter_base")
s = evaluate("summer_base")

# --- Print raw numbers (for checking) ------------------------------------------
for name, r in [("Winter", w), ("Summer", s)]:
    print(f"\n{name}")
    for k, v in r.items():
        print(f"  {k:14s}", {a: round(b, 1) for a, b in v.items()} if isinstance(v, dict) else round(v, 2))


# --- LaTeX table -----------------------------------------------------------------
def bp(r):
    return " / ".join(f"{r['bypass_h'][room]:.0f}" for room in rooms.values())


rows = [
    (r"Floor heating [kWh]", f"{w['Q_SH']:.0f}", f"{s['Q_SH']:.0f}"),
    (r"Ventilation heat loss without heat recovery [kWh]", f"{w['loss']:.0f}", "--"),
    (r"Recovered heat [kWh]", f"{w['rec']:.0f}", f"{s['rec']:.0f}"),
    (r"Bypass hours bathroom / bedroom / kitchen / living room [h]", bp(w), bp(s)),
    (r"Free cooling [kWh]", f"{w['cool']:.0f}", f"{s['cool']:.0f}"),
    (r"Fan electricity [kWh]", f"{w['fan']:.1f}", f"{s['fan']:.1f}"),
    (r"Relative humidity min / range of room means [\%]",
     f"{w['phi_min']:.0f} / {w['phi_mean_lo']:.0f}--{w['phi_mean_hi']:.0f}",
     f"{s['phi_min']:.0f} / {s['phi_mean_lo']:.0f}--{s['phi_mean_hi']:.0f}"),
]

lines = [
    r"\begin{table}[H]",
    r"    \centering",
    r"    \caption{Ventilation results of the base case (week 2) in winter and summer.}",
    r"    \label{tab:vent_results}",
    r"    \begin{tabular}{lcc}",
    r"        \toprule",
    r"        Quantity & Winter & Summer \\",
    r"        \midrule",
    *[f"        {q} & {a} & {b} \\\\" for q, a, b in rows],
    r"        \bottomrule",
    r"    \end{tabular}",
    r"\end{table}",
]
print("\n" + "\n".join(lines))
