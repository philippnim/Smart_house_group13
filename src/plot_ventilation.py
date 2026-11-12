import os

import matplotlib.pyplot as plt
import numpy as np

from config import ReportStyleConfig, generic_save_function, get_repo_root
from load_and_prepare_mat_file import Datahandler

# Prefix of the ventilation channel of room i (1 bathroom, 2 bedroom, 3 kitchen, 4 living room)
C = "houseEnviroment.ventilationUnit.channel[{}]."

T_out = C.format(4) + "Toutdoor"                     # outdoor temperature (same for every channel)
T_sup = C.format(4) + "sensor_T_airIn.sensorValue"   # living-room supply air after heat recovery
T_room = "houseEnviroment.houseVentilation.LivingRoom.Temperature_sensor"

# Heat flows of the 10 heat-exchanger segments of each room
rooms = {1: "Bathroom", 2: "Bedroom", 3: "Kitchen", 4: "Living room"}
Q_names = {room: [C.format(i) + f"bypassHX[{j}].Q_flow" for j in range(1, 11)]
           for i, room in rooms.items()}

# One fixed color per item, used in both figures (C0, C1, ... = colors of the report style)
COLORS = {"Outdoor": "C0", "Supply": "C1", "Living room": "C2",
          "Bathroom": "C3", "Bedroom": "C4", "Kitchen": "C7"}


def day_ticks(ax):
    """Ticks at whole days only (0, 1, ..., 7), no minor ticks in between."""
    ax.xaxis.set_major_locator(plt.MultipleLocator(1))
    ax.xaxis.set_minor_locator(plt.NullLocator())

d = Datahandler("winter_base")

names = [T_out, T_sup, T_room] + [n for lst in Q_names.values() for n in lst]
df = d.to_dataframe(names, dt=300, start=604800, end=1209600)
days = (df["Time"] - 604800) / 86400

# --- Step 2: prepare the data ---------------------------------------------

# Temperatures: if the mean is above 200 the signal must be in K, so convert it to °C
for col in [T_out, T_sup, T_room]:
    if df[col].mean() > 200:
        df[col] = df[col] - 273.15

# Recovered heat per room [W]: add up the 10 HX segments, minus sign so recovery is positive
Q_rec = {room: -df[cols].sum(axis=1) for room, cols in Q_names.items()}

# Energy over week 2 [kWh]: integrate power over time (W·s = J), then J -> kWh (÷ 3.6e6)
E_rooms = {room: np.trapezoid(q, df["Time"]) / 3.6e6 for room, q in Q_rec.items()}
for room, E in E_rooms.items():
    print(f"{room:12s} {E:6.1f} kWh")
print(f"{'Total':12s} {sum(E_rooms.values()):6.1f} kWh")

# --- Step 3: Figure 1 - winter heat recovery --------------------------------

ReportStyleConfig(figure_figsize=(6, 4.5)).apply_style()

# Two panels on top of each other with a shared time axis
fig, (ax1, ax2) = plt.subplots(2, 1, sharex=True)

# Top: temperatures [°C]
ax1.plot(days, df[T_out], color=COLORS["Outdoor"], label="Outdoor")
ax1.plot(days, df[T_sup], color=COLORS["Supply"], label="Supply after heat recovery")
ax1.plot(days, df[T_room], color=COLORS["Living room"], label="Living room")
ax1.set_ylabel(r"Temperature $T$ [°C]")               # $...$ = math text, r"" keeps the backslashes
ax1.legend(fontsize=8, loc="center right")

# Bottom: recovered heat per room [W]
for room in ["Bathroom", "Living room"]:                  # same two rooms as in summer
    ax2.plot(days, Q_rec[room], color=COLORS[room], lw=0.6, label=room)
ax2.set_ylabel(r"Recovered heat $\dot{Q}_\mathrm{rec}$ [W]")
ax2.set_xlabel("Time [days]")
ax2.set_xlim(0, 7)
day_ticks(ax2)                                        # shared x-axis, so this sets both panels
ax2.set_ylim(0, 620)                                  # headroom so the legend doesn't cover data
ax2.legend(fontsize=8, ncol=2, loc="upper center")

fig.tight_layout()
generic_save_function(fig, "winter_heat_recovery",
                      os.path.join(get_repo_root(), "plots", "ventilation"))

# --- Step 4: Figure 2 - summer bypass ----------------------------------------

# Names per room (index i = channel number); room model names differ in capitalization
room_models = {1: "bathroom", 2: "Bedroom", 3: "Kitchen", 4: "LivingRoom"}
V_room = {1: 35, 2: 60, 3: 60, 4: 120}                      # room volumes [m3]

T_rooms = {rooms[i]: f"houseEnviroment.houseVentilation.{m}.Temperature_sensor"
           for i, m in room_models.items()}
V_names = {rooms[i]: C.format(i) + "ventilationController.V_flow" for i in rooms}
BP_names = {rooms[i]: C.format(i) + "and1.y" for i in rooms}

# Load week 2 of the summer run. Bypass signals are on/off, so they are passed as
# step_variables: they keep their last value instead of being interpolated to 0.5
ds = Datahandler("summer_base")
names_s = ([T_out, T_sup] + list(T_rooms.values()) + list(V_names.values())
           + list(BP_names.values()))
dfs = ds.to_dataframe(names_s, dt=300, start=604800, end=1209600,
                      step_variables=set(BP_names.values()))
days_s = (dfs["Time"] - 604800) / 86400

# Temperatures K -> °C (same check as in winter)
for col in [T_out, T_sup] + list(T_rooms.values()):
    if dfs[col].mean() > 200:
        dfs[col] = dfs[col] - 273.15

# Air change rate [1/h] = volume flow [m3/s] * 3600 s/h / room volume [m3]
ACH = {rooms[i]: dfs[V_names[rooms[i]]].abs() * 3600 / V_room[i] for i in rooms}

# Bypass on/off as True/False; hours = number of 5-min steps that are on * 300 s / 3600
# ([:-1] drops the extra last sample at t = end so exactly 2016 steps = 168 h are counted)
bypass = {room: dfs[col] > 0.5 for room, col in BP_names.items()}
for room, on in bypass.items():
    print(f"Bypass {room:12s} {on.iloc[:-1].sum() * 300 / 3600:6.1f} h")
print("Max ACH [1/h]:", {room: round(a.max(), 1) for room, a in ACH.items()})

# Cooling power delivered by the living-room supply air [W]:
# P = rho * V_flow * c_p * (T_room - T_supply); positive = supply air cools the room
rho, cp = 1.2, 1005                                   # air: kg/m3, J/(kg K)
V_liv = dfs[V_names["Living room"]].abs()
P_cool = rho * V_liv * cp * (dfs[T_rooms["Living room"]] - dfs[T_sup])

fig, (ax1, ax2) = plt.subplots(2, 1, sharex=True)

# Shade the periods where the living-room bypass is on, in both panels.
# np.diff on the 0/1 signal is +1 where the bypass switches on and -1 where it switches off
on = bypass["Living room"].to_numpy().astype(int)
edges = np.diff(np.r_[0, on, 0])
starts = np.where(edges == 1)[0]
stops = np.where(edges == -1)[0] - 1
for ax in (ax1, ax2):
    for k, (a, b) in enumerate(zip(starts, stops)):
        ax.axvspan(days_s[a], days_s[b], color="0.85", lw=0,
                   label="Bypass on (living room)" if k == 0 else None)  # one legend entry only

# Top: temperatures of two rooms and outdoor. Kitchen instead of bathroom: its bypass is
# on all week, so its peaks (up to ~31 °C) show the limit of bypass cooling
ax1.plot(days_s, dfs[T_out], color=COLORS["Outdoor"], label="Outdoor")
for room in ["Kitchen", "Living room"]:
    ax1.plot(days_s, dfs[T_rooms[room]], color=COLORS[room], label=room)
ax1.set_ylabel(r"Temperature $T$ [°C]")
ax1.set_ylim(5, 33)                                   # max is 30.7 °C, small headroom
# White legend background, otherwise the grey patch disappears on top of a grey band
ax1.legend(fontsize=8, ncol=4, loc="lower center",     # one row in the empty band below 10 °C
           frameon=True, facecolor="white", framealpha=1, edgecolor="none")

# Bottom: living-room air change rate (left axis) and cooling power (right axis)
l1, = ax2.plot(days_s, ACH["Living room"], color=COLORS["Living room"], lw=0.6,
               label="Air change rate")
ax2.set_ylabel("Air change rate [ACH]")
ax2.set_xlabel("Time [days]")
ax2.set_xlim(0, 7)
ax2.set_ylim(-0.5, 8)                                 # headroom for the legend
day_ticks(ax2)

ax3 = ax2.twinx()                                     # second y-axis sharing the time axis
l2, = ax3.plot(days_s, P_cool, color="k", lw=0.6, label="Cooling power")
ax3.set_ylabel(r"Cooling power $\dot{Q}_\mathrm{cool}$ [W]")
ax3.set_ylim(-0.5 * 175, 8 * 175)                     # 1 1/h <-> 175 W, so both zeros line up

# Legend: collect entries from both axes so they appear in one box
span = ax2.get_legend_handles_labels()[0][0]          # the grey bypass patch
ax2.legend([span, l1, l2], ["Bypass on (living room)", "Air change rate", "Cooling power"],
           fontsize=8, ncol=3, loc="upper center",
           frameon=True, facecolor="white", framealpha=1, edgecolor="none")

fig.tight_layout()
generic_save_function(fig, "summer_bypass",
                      os.path.join(get_repo_root(), "plots", "ventilation"))
