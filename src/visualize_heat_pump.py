"""
Visualize heat pump pressures, temperatures (evaporator & condenser), and power/heat flows
over the second (evaluation) simulation week.

Author: Philipp
"""

import os
import matplotlib.pyplot as plt
from matplotlib.gridspec import GridSpec, GridSpecFromSubplotSpec
import numpy as np

from load_and_prepare_mat_file import Datahandler

try:
    from config import ReportStyleConfig, generic_save_function, get_repo_root
except ImportError:
    from src.config import ReportStyleConfig, generic_save_function, get_repo_root

ReportStyleConfig().apply_style()

repo_root = get_repo_root()
output_plots_dir = os.path.join(repo_root, "data", "output", "plots")


signals = {
    "evaporator": {
        "p_fluid": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.evaporator.summary.p_vle_A",
        "T_fluid_in": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.evaporator.summary.T_vle_A",
        "T_fluid_out": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.evaporator.summary.T_vle_B",
    },
    "condenser": {
        "p_fluid": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.condenser.summary.path_a.p_vle_A",
        "T_fluid_in": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.condenser.summary.path_a.T_vle_B",
        "T_fluid_out": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.condenser.summary.path_a.T_vle_A",
    },
    "energy": {
        "compressor_power": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.compressor.shaftPower",
        "fan_power": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.fan2ndOrder.P_shaft",
        "heat_flow": "houseEnviroment.heatPump_ThermalStorage.heatPumpCycle1.HeatFlow",
    },
}

relevant_timeframe = [604800, 1209600]  # Second week (evaluation period) in seconds

# Manually adjustable broken y-axis limits for the lower Power / Heat Flow subplot:
# Format: ((y_bot_min, y_bot_max), (y_top_min, y_top_max)) in kW (or W if power_in_kw=False).
# Set a scenario entry to None to disable the broken axis for that scenario.
broken_ylim_config: dict[str, tuple[tuple[float, float], tuple[float, float]] | None] = {
    "summer": ((-0.3, 1.5), (4.0, 25.0)),
    "winter": ((-0.3, 4.8), (8.0, 18.0)),
}


def _format_weekday_axis(
    ax: plt.Axes,
    eval_start_sec: float,
    eval_end_sec: float,
    n_days: int = 7,
    show_labels: bool = True,
) -> None:
    """
    Center weekday labels ('Mon', 'Tue', ...) in each 24-hour day bin and draw
    a fine grey vertical line at each 00:00 day boundary.
    """
    weekday_names = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
    bin_centers = [eval_start_sec + (d + 0.5) * 86400 for d in range(n_days)]
    tick_labels = [weekday_names[d % 7] for d in range(n_days)]

    ax.set_xticks(bin_centers)
    if show_labels:
        ax.set_xticklabels(tick_labels)
    else:
        ax.set_xticklabels([])
    ax.tick_params(axis="x", which="both", length=0, labelbottom=show_labels)
    ax.set_xlim(eval_start_sec, eval_end_sec)

    for d in range(1, n_days):
        ax.axvline(
            eval_start_sec + d * 86400,
            color="gray",
            linestyle="-",
            linewidth=0.6,
            alpha=0.5,
            zorder=1,
        )

    ax.grid(True, axis="y", linestyle="--", alpha=0.5)


def _resolve_var_name(handler: Datahandler, var_name: str) -> str | None:
    """Resolve variable name in .mat file across `houseEnviroment` / `houseEnvironment` spellings."""
    candidates = [
        var_name,
        var_name.replace("houseEnvironment.", "houseEnviroment."),
        var_name.replace("houseEnviroment.", "houseEnvironment."),
        var_name.removeprefix("houseEnvironment.").removeprefix("houseEnviroment."),
    ]
    for cand in candidates:
        if cand in handler.variables:
            return cand
    return None


def _load_heat_pump_data(
    mat_file_name: str,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 60.0,
    pressure_in_bar: bool = True,
    in_celsius: bool = True,
    power_in_kw: bool = True,
) -> tuple[np.ndarray, dict[str, dict[str, np.ndarray]]]:
    """
    Load and unit-convert all heat pump signals (evaporator, condenser, energy)
    for the evaluation window. Keeps the signed `heat_flow` so negative values
    (heat extracted from the water side) remain visible.
    """
    handler = Datahandler(mat_file_name)
    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])

    resolved_map: dict[str, dict[str, str]] = {}
    all_vars: list[str] = []

    for group_key, group_signals in signals.items():
        resolved_map[group_key] = {}
        for sig_key, raw_var in group_signals.items():
            res_var = _resolve_var_name(handler, raw_var)
            if res_var is not None:
                resolved_map[group_key][sig_key] = res_var
                if res_var not in all_vars:
                    all_vars.append(res_var)

    if not all_vars:
        raise ValueError(f"No heat pump variables found in {mat_file_name}.")

    df = handler.to_dataframe(
        all_vars,
        dt=dt,
        start=eval_start_sec,
        end=eval_end_sec,
    )
    t_eval = df["Time"].to_numpy(dtype=float)

    data: dict[str, dict[str, np.ndarray]] = {
        "evaporator": {},
        "condenser": {},
        "energy": {},
    }

    for comp in ("evaporator", "condenser"):
        for sig_key, col in resolved_map.get(comp, {}).items():
            vals = df[col].to_numpy(dtype=float)
            if sig_key == "p_fluid" and pressure_in_bar:
                vals = vals / 1e5  # Pa -> bar
            elif sig_key.startswith("T_") and in_celsius:
                vals = vals - 273.15  # K -> °C
            data[comp][sig_key] = vals

    power_scale = 1e-3 if power_in_kw else 1.0
    for sig_key, col in resolved_map.get("energy", {}).items():
        vals = df[col].to_numpy(dtype=float) * power_scale
        if sig_key != "heat_flow":
            vals = np.maximum(vals, 0.0)
        data["energy"][sig_key] = vals

    return t_eval, data


def _compute_matched_tp_limits(
    data_list: list[dict[str, dict[str, np.ndarray]]],
    in_celsius: bool = True,
) -> tuple[tuple[float, float], tuple[float, float]]:
    """
    Compute y-axis limits `(temp_ylim, press_ylim)` so that 1 °C = 1 bar
    (i.e. identical numerical scale in °C and bar: 0 °C <-> 0 bar, 20 °C <-> 20 bar, etc.).
    """
    vals_c_and_bar: list[float] = []
    for data in data_list:
        for comp in ("evaporator", "condenser"):
            for sig_key in ("p_fluid", "T_fluid_in"):
                arr = data.get(comp, {}).get(sig_key)
                if arr is None or arr.size == 0:
                    continue
                if sig_key.startswith("T_"):
                    arr_c = arr if in_celsius else (arr - 273.15)
                    vals_c_and_bar.extend([float(np.nanmin(arr_c)), float(np.nanmax(arr_c))])
                elif sig_key == "p_fluid":
                    vals_c_and_bar.extend([float(np.nanmin(arr)), float(np.nanmax(arr))])

    if not vals_c_and_bar:
        c_min, c_max = 0.0, 100.0
    else:
        raw_min = min(vals_c_and_bar)
        raw_max = max(vals_c_and_bar)
        span = max(raw_max - raw_min, 10.0)
        c_min = raw_min - 0.06 * span
        c_max = raw_max + 0.06 * span

    press_ylim = (c_min, c_max)
    temp_ylim = (c_min, c_max) if in_celsius else (c_min + 273.15, c_max + 273.15)
    return temp_ylim, press_ylim


def _print_heat_pump_summary(
    stem: str,
    t_eval: np.ndarray,
    data: dict[str, dict[str, np.ndarray]],
    power_in_kw: bool = True,
) -> None:
    """Print summary statistics (powers, energies, ambient heat gain, COP) to the terminal."""
    p_unit = "kW" if power_in_kw else "W"
    to_w = 1000.0 if power_in_kw else 1.0

    p_fan = data["energy"].get("fan_power", np.zeros_like(t_eval))
    p_comp = data["energy"].get("compressor_power", np.zeros_like(t_eval))
    q_flow = data["energy"].get("heat_flow", np.zeros_like(t_eval))
    p_el_total = p_fan + p_comp
    q_amb = q_flow - p_el_total

    e_el_kwh = float(np.trapezoid(p_el_total * to_w, t_eval) / 3.6e6)
    e_th_kwh = float(np.trapezoid(q_flow * to_w, t_eval) / 3.6e6)
    e_amb_kwh = float(np.trapezoid(q_amb * to_w, t_eval) / 3.6e6)
    cop_avg = e_th_kwh / e_el_kwh if e_el_kwh > 1e-9 else 0.0

    print(
        f"[{stem}] Avg Fan: {float(np.mean(p_fan)):.2f} {p_unit} | "
        f"Avg Compressor: {float(np.mean(p_comp)):.2f} {p_unit} | "
        f"Avg Heat Flow: {float(np.mean(q_flow)):.2f} {p_unit} | "
        f"Avg Net Ambient Heat: {float(np.mean(q_amb)):.2f} {p_unit}\n"
        f"         Weekly El. Energy: {e_el_kwh:.2f} kWh | "
        f"Weekly Net Ambient Energy: {e_amb_kwh:.2f} kWh | "
        f"Weekly Net Heat Output: {e_th_kwh:.2f} kWh | "
        f"Weekly COP: {cop_avg:.2f}"
    )


def _draw_energy_curves(
    ax: plt.Axes,
    t_eval: np.ndarray,
    p_fan: np.ndarray,
    p_total_el: np.ndarray,
    q_flow: np.ndarray,
    color_fan: str,
    color_comp: str,
    color_heat: str,
    lw_heat: float = 0.65,
    lw_comp: float = 0.5,
    lw_fan: float = 0.5,
) -> tuple:
    """Plot stacked Fan + Compressor areas and signed Heat Flow on top (`zorder=5`) on `ax`."""
    ax.axhline(0.0, color="gray", linestyle="-", linewidth=0.6, alpha=0.6, zorder=1)

    h_fan = ax.fill_between(
        t_eval, 0.0, p_fan,
        color=color_fan, alpha=0.75, zorder=2, label="Fan Power",
    )
    ax.plot(t_eval, p_fan, color=color_fan, linewidth=lw_fan, zorder=2)

    h_comp = ax.fill_between(
        t_eval, p_fan, p_total_el,
        color=color_comp, alpha=0.65, zorder=3, label="Compressor Power",
    )
    ax.plot(t_eval, p_total_el, color=color_comp, linewidth=lw_comp, zorder=3)

    h_heat = ax.plot(
        t_eval, q_flow,
        color=color_heat, linewidth=lw_heat, zorder=5, label="Heat Flow ($\\dot{Q}$)",
    )

    return h_fan, h_comp, h_heat[0]


def _style_broken_energy_axes(
    ax_top: plt.Axes,
    ax_bot: plt.Axes,
    y_bot_min: float,
    y_bot_max: float,
    y_top_min: float,
    y_top_max: float,
    ratio_bot: float = 2.4,
    show_left_ticks: bool = True,
) -> None:
    """Apply limits, spine hiding, and diagonal break marks to a broken y-axis pair."""
    ax_top.set_ylim(y_top_min, y_top_max)
    ax_bot.set_ylim(y_bot_min, y_bot_max)

    ax_top.spines["bottom"].set_visible(False)
    ax_bot.spines["top"].set_visible(False)
    ax_top.tick_params(axis="x", which="both", bottom=False, top=False, labelbottom=False)

    if not show_left_ticks:
        ax_top.tick_params(axis="y", which="both", left=False, labelleft=False)
        ax_bot.tick_params(axis="y", which="both", left=False, labelleft=False)

    d_x, d_y = 0.012, 0.035
    kwargs_top = dict(transform=ax_top.transAxes, color="black", clip_on=False, linewidth=0.8)
    ax_top.plot((-d_x, +d_x), (-d_y * ratio_bot, +d_y * ratio_bot), **kwargs_top)
    ax_top.plot((1 - d_x, 1 + d_x), (-d_y * ratio_bot, +d_y * ratio_bot), **kwargs_top)

    kwargs_bot = dict(transform=ax_bot.transAxes, color="black", clip_on=False, linewidth=0.8)
    ax_bot.plot((-d_x, +d_x), (1 - d_y, 1 + d_y), **kwargs_bot)
    ax_bot.plot((1 - d_x, 1 + d_x), (1 - d_y, 1 + d_y), **kwargs_bot)


BrokenYlimType = tuple[tuple[float, float], tuple[float, float]]


def _slugify(text: str) -> str:
    """Convert a scenario label into a clean lowercase filename token."""
    return "_".join(text.strip().lower().replace("-", "_").split())


def _resolve_broken_ylim(
    scenario_name: str | None,
    mat_file_name: str,
    broken_ylim: BrokenYlimType | dict[str, BrokenYlimType | None] | None,
) -> BrokenYlimType | None:
    """
    Resolve broken y-axis limits for a given scenario.
    Supports:
      - `None`: no broken axis
      - a 2-tuple `((y_bot_min, y_bot_max), (y_top_min, y_top_max))`: used directly
      - a dict `{key: limits}`: matched by exact key, case-insensitive key, or substring
        match against `scenario_name` or `mat_file_name` (e.g. 'test Winter' or
        'winter_hp_wind_bat.mat' automatically matches 'winter').
    """
    if broken_ylim is None:
        return None
    if not isinstance(broken_ylim, dict):
        return broken_ylim

    if scenario_name and scenario_name in broken_ylim:
        return broken_ylim[scenario_name]

    lower_map = {k.lower(): v for k, v in broken_ylim.items()}
    if scenario_name and scenario_name.lower() in lower_map:
        return lower_map[scenario_name.lower()]

    search_targets = [
        (scenario_name or "").lower(),
        os.path.splitext(os.path.basename(mat_file_name))[0].lower(),
    ]
    for target in search_targets:
        for key_lower, val in lower_map.items():
            if key_lower and key_lower in target:
                return val

    return None


def _fit_broken_ylim_to_data(
    b_ylim: BrokenYlimType,
    data_list: list[dict[str, dict[str, np.ndarray]]],
) -> BrokenYlimType:
    """Ensure outer bounds `y_bot_min` and `y_top_max` encompass all data peaks without clipping."""
    (y_bot_min, y_bot_max), (y_top_min, y_top_max) = b_ylim
    mins: list[float] = []
    maxs: list[float] = []
    for d in data_list:
        p_fan = d["energy"].get("fan_power")
        p_comp = d["energy"].get("compressor_power")
        q_flow = d["energy"].get("heat_flow")
        if p_fan is not None and p_comp is not None and p_fan.size > 0:
            p_tot = p_fan + p_comp
            mins.append(float(np.nanmin(p_tot)))
            maxs.append(float(np.nanmax(p_tot)))
        if q_flow is not None and q_flow.size > 0:
            mins.append(float(np.nanmin(q_flow)))
            maxs.append(float(np.nanmax(q_flow)))
    if mins:
        data_min = min(mins)
        if data_min < y_bot_min:
            y_bot_min = data_min * 1.05 if data_min < 0 else data_min * 0.95
    if maxs:
        data_max = max(maxs)
        if data_max > y_top_max:
            y_top_max = data_max * 1.05
    return ((y_bot_min, y_bot_max), (y_top_min, y_top_max))


def plot_heat_pump(
    mat_file_name: str,
    scenario_name: str | None = None,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 60.0,
    pressure_in_bar: bool = True,
    in_celsius: bool = True,
    power_in_kw: bool = True,
    combine_temp_pressure: bool = True,
    broken_ylim: BrokenYlimType | dict[str, BrokenYlimType | None] | None = broken_ylim_config,
    output_folder: str = output_plots_dir,
) -> None:
    """
    Plot heat pump thermodynamic states (Evaporator & Condenser pressures and inlet temperatures
    in the upper subplot with 1 °C = 1 bar scaling) and power/heat flows (stacked Fan +
    Compressor power areas and signed Heat Flow in the lower subplot, optionally with a broken
    y-axis `broken_ylim=((y_bot_min, y_bot_max), (y_top_min, y_top_max))`) and a single
    combined legend below the figure.

    Args:
        mat_file_name (str): Name of the .mat file in `model/SmartHouse/`.
        scenario_name (str | None): Scenario name for title and output filename.
        timeframe (list | tuple): Evaluation timeframe in seconds (default [604800, 1209600]).
        dt (float): Resampling step in seconds (default 60 s).
        pressure_in_bar (bool): Plot pressure in bar (True, default) or Pa (False).
        in_celsius (bool): Plot temperatures in °C (True, default so 1 °C = 1 bar ticks match) or K (False).
        power_in_kw (bool): Plot power/heat flow in kW (True, default) or W (False).
        combine_temp_pressure (bool):
            - If True (default): Upper subplot combines Temperatures (left y-axis) & Pressures (right y-axis)
              scaled 1:1 with 1 °C = 1 bar.
            - If False: Separate subplots for Pressures and Temperatures.
        broken_ylim (tuple | dict | None): Broken y-axis limits for the Power / Heat Flow subplot:
            `((y_bot_min, y_bot_max), (y_top_min, y_top_max))`, a dict like `broken_ylim_config`
            (matched automatically via `scenario_name` / `mat_file_name`), or `None`.
        output_folder (str): Target directory for `.png` and `pgf/*.pgf`.
    """
    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)

    stem = _slugify(scenario_name) if scenario_name else os.path.splitext(os.path.basename(mat_file_name))[0]
    title_prefix = f"{scenario_name.replace('_', ' ').capitalize()} - " if scenario_name else ""
    resolved_broken_ylim = _resolve_broken_ylim(scenario_name, mat_file_name, broken_ylim)

    t_eval, data = _load_heat_pump_data(
        mat_file_name=mat_file_name,
        timeframe=timeframe,
        dt=dt,
        pressure_in_bar=pressure_in_bar,
        in_celsius=in_celsius,
        power_in_kw=power_in_kw,
    )
    _print_heat_pump_summary(stem, t_eval, data, power_in_kw=power_in_kw)
    if resolved_broken_ylim is not None:
        resolved_broken_ylim = _fit_broken_ylim_to_data(resolved_broken_ylim, [data])

    prop_cycle = plt.rcParams["axes.prop_cycle"].by_key().get(
        "color", ["#00549F", "#F6A800", "#57AB27", "#CC071E", "#612158", "#0098A1"]
    )
    color_evap_t = prop_cycle[0]
    color_cond_t = prop_cycle[1] if len(prop_cycle) > 1 else "#F6A800"
    color_evap_p = prop_cycle[5] if len(prop_cycle) > 5 else "#0098A1"
    color_cond_p = prop_cycle[4] if len(prop_cycle) > 4 else "#612158"
    color_fan = prop_cycle[3] if len(prop_cycle) > 3 else "#CC071E"
    color_comp = prop_cycle[0]
    color_heat = prop_cycle[2] if len(prop_cycle) > 2 else "#57AB27"

    p_ylabel = "Pressure (bar)" if pressure_in_bar else "Pressure (Pa)"
    t_ylabel = "Temperature (°C)" if in_celsius else "Temperature (K)"
    e_ylabel = "Power / Heat Flow (kW)" if power_in_kw else "Power / Heat Flow (W)"

    base_width = ReportStyleConfig.FIG_SIZE[0]
    upper_handles: list = []
    ratio_bot = 2.4

    if combine_temp_pressure:
        fig = plt.figure(figsize=(base_width, 4.7 if resolved_broken_ylim is not None else 4.4))
        outer_gs = GridSpec(2, 1, figure=fig, height_ratios=[1.1, 1.25], hspace=0.14)
        ax_tp = fig.add_subplot(outer_gs[0])
        ax_press = ax_tp.twinx()
        ax_press.grid(False)

        # Pressures (right y-axis) as continuous lines in distinct colors from temperatures
        if "p_fluid" in data["evaporator"]:
            upper_handles += ax_press.plot(
                t_eval, data["evaporator"]["p_fluid"],
                color=color_evap_p, linestyle="-", linewidth=0.9, label="Evap. $p$",
            )
        if "p_fluid" in data["condenser"]:
            upper_handles += ax_press.plot(
                t_eval, data["condenser"]["p_fluid"],
                color=color_cond_p, linestyle="-", linewidth=0.9, label="Cond. $p$",
            )

        # Inlet temperatures only (left y-axis)
        if "T_fluid_in" in data["evaporator"]:
            upper_handles += ax_tp.plot(
                t_eval, data["evaporator"]["T_fluid_in"],
                color=color_evap_t, linestyle="-", linewidth=0.5, label="Evap. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_in" in data["condenser"]:
            upper_handles += ax_tp.plot(
                t_eval, data["condenser"]["T_fluid_in"],
                color=color_cond_t, linestyle="-", linewidth=0.5, label="Cond. $T_{\\mathrm{in}}$",
            )

        # Scale left (°C) and right (bar) y-axes identically: 1 °C = 1 bar
        if pressure_in_bar:
            temp_ylim, press_ylim = _compute_matched_tp_limits([data], in_celsius=in_celsius)
            ax_tp.set_ylim(*temp_ylim)
            ax_press.set_ylim(*press_ylim)

        _format_weekday_axis(ax_tp, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
        ax_tp.set_title(f"{title_prefix}Heat Pump States and Power Balance")
        ax_tp.set_ylabel(t_ylabel)
        ax_press.set_ylabel(p_ylabel)
        energy_spec = outer_gs[1]
    else:
        fig = plt.figure(figsize=(base_width, 5.4 if resolved_broken_ylim is not None else 5.2))
        outer_gs = GridSpec(3, 1, figure=fig, height_ratios=[0.9, 1.1, 1.25], hspace=0.14)
        ax_press = fig.add_subplot(outer_gs[0])
        ax_temp = fig.add_subplot(outer_gs[1], sharex=ax_press)

        # 1. Pressures subplot
        if "p_fluid" in data["evaporator"]:
            upper_handles += ax_press.plot(
                t_eval, data["evaporator"]["p_fluid"],
                color=color_evap_p, linestyle="-", linewidth=0.9, label="Evaporator $p$",
            )
        if "p_fluid" in data["condenser"]:
            upper_handles += ax_press.plot(
                t_eval, data["condenser"]["p_fluid"],
                color=color_cond_p, linestyle="-", linewidth=0.9, label="Condenser $p$",
            )
        _format_weekday_axis(ax_press, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
        ax_press.set_title(f"{title_prefix}Heat Pump States and Power Balance")
        ax_press.set_ylabel(p_ylabel)

        # 2. Inlet temperatures subplot
        if "T_fluid_in" in data["evaporator"]:
            upper_handles += ax_temp.plot(
                t_eval, data["evaporator"]["T_fluid_in"],
                color=color_evap_t, linestyle="-", linewidth=0.5, label="Evap. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_in" in data["condenser"]:
            upper_handles += ax_temp.plot(
                t_eval, data["condenser"]["T_fluid_in"],
                color=color_cond_t, linestyle="-", linewidth=0.5, label="Cond. $T_{\\mathrm{in}}$",
            )
        _format_weekday_axis(ax_temp, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
        ax_temp.set_ylabel(t_ylabel)
        energy_spec = outer_gs[2]

    # Bottom subplot: Stacked Fan + Compressor power areas and signed Heat Flow line
    p_fan = data["energy"].get("fan_power", np.zeros_like(t_eval))
    p_comp = data["energy"].get("compressor_power", np.zeros_like(t_eval))
    p_total_el = p_fan + p_comp
    q_flow = data["energy"].get("heat_flow", np.zeros_like(t_eval))

    if resolved_broken_ylim is not None:
        (y_bot_min, y_bot_max), (y_top_min, y_top_max) = resolved_broken_ylim
        inner_gs = GridSpecFromSubplotSpec(
            2, 1, subplot_spec=energy_spec, height_ratios=[1.0, ratio_bot], hspace=0.08
        )
        ax_e_top = fig.add_subplot(inner_gs[0])
        ax_e_bot = fig.add_subplot(inner_gs[1], sharex=ax_e_top)

        _draw_energy_curves(
            ax_e_top, t_eval, p_fan, p_total_el, q_flow, color_fan, color_comp, color_heat
        )
        h_fan, h_comp, h_heat = _draw_energy_curves(
            ax_e_bot, t_eval, p_fan, p_total_el, q_flow, color_fan, color_comp, color_heat
        )

        _format_weekday_axis(ax_e_top, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
        _format_weekday_axis(ax_e_bot, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=True)
        _style_broken_energy_axes(
            ax_e_top, ax_e_bot, y_bot_min, y_bot_max, y_top_min, y_top_max, ratio_bot=ratio_bot
        )
        ax_e_bot.set_ylabel(e_ylabel)
        ax_e_bot.yaxis.set_label_coords(-0.11, 0.5 * (1.0 + 1.0 / ratio_bot))
    else:
        ax_energy = fig.add_subplot(energy_spec)
        h_fan, h_comp, h_heat = _draw_energy_curves(
            ax_energy, t_eval, p_fan, p_total_el, q_flow, color_fan, color_comp, color_heat
        )
        _format_weekday_axis(ax_energy, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=True)
        ax_energy.set_ylabel(e_ylabel)

    # Single combined legend below the entire figure
    all_handles = [*upper_handles, h_fan, h_comp, h_heat]
    all_labels = [h.get_label() for h in all_handles]
    fig.legend(
        all_handles,
        all_labels,
        loc="upper center",
        bbox_to_anchor=(0.5, 0.02),
        frameon=True,
        ncol=3,
    )

    suffix = "_heat_pump" if combine_temp_pressure else "_heat_pump_3panel"
    generic_save_function(
        fig=fig,
        name=f"{stem}{suffix}",
        folder=output_folder,
    )


def plot_heat_pump_comparison(
    scenarios: dict[str, str],
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 60.0,
    pressure_in_bar: bool = True,
    in_celsius: bool = True,
    power_in_kw: bool = True,
    broken_ylim: (
        BrokenYlimType
        | dict[str, BrokenYlimType | None]
        | None
    ) = broken_ylim_config,
    output_folder: str = output_plots_dir,
    output_name: str | None = None,
) -> None:
    """
    Plot heat pump states and power balance for arbitrary scenarios side-by-side
    (`2 x N` subplots: Row 1 Temperatures & Pressures with 1 °C = 1 bar scaling,
    Row 2 Power & Heat Flow, optionally with a broken y-axis) and a single combined legend.

    `broken_ylim` can be:
        - `None`: standard continuous y-axis
        - a single tuple `((y_bot_min, y_bot_max), (y_top_min, y_top_max))` shared across all scenarios
        - a dict `{key: ((y_bot_min, y_bot_max), (y_top_min, y_top_max))}` (default: `broken_ylim_config`),
          automatically matched per scenario by exact name, case-insensitive name, or substring in
          `scenario_name` / `mat_file_name` (e.g. 'test Winter' -> 'winter').
    If `output_name` is `None` (default), a unique filename is generated from the compared scenario names
    (e.g. `summer_vs_winter_heat_pump_comparison` or `test_winter_vs_winter_heat_pump_comparison`) so
    multiple comparison calls never overwrite each other.
    """
    if not scenarios:
        return

    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)

    loaded: dict[str, tuple[np.ndarray, dict[str, dict[str, np.ndarray]]]] = {}
    for scen_name, mat_file in scenarios.items():
        t_eval, data = _load_heat_pump_data(
            mat_file_name=mat_file,
            timeframe=timeframe,
            dt=dt,
            pressure_in_bar=pressure_in_bar,
            in_celsius=in_celsius,
            power_in_kw=power_in_kw,
        )
        loaded[scen_name] = (t_eval, data)
        _print_heat_pump_summary(scen_name, t_eval, data, power_in_kw=power_in_kw)

    temp_ylim, press_ylim = _compute_matched_tp_limits(
        [d for _, d in loaded.values()],
        in_celsius=in_celsius,
    )

    prop_cycle = plt.rcParams["axes.prop_cycle"].by_key().get(
        "color", ["#00549F", "#F6A800", "#57AB27", "#CC071E", "#612158", "#0098A1"]
    )
    color_evap_t = prop_cycle[0]
    color_cond_t = prop_cycle[1] if len(prop_cycle) > 1 else "#F6A800"
    color_evap_p = prop_cycle[5] if len(prop_cycle) > 5 else "#0098A1"
    color_cond_p = prop_cycle[4] if len(prop_cycle) > 4 else "#612158"
    color_fan = prop_cycle[3] if len(prop_cycle) > 3 else "#CC071E"
    color_comp = prop_cycle[0]
    color_heat = prop_cycle[2] if len(prop_cycle) > 2 else "#57AB27"

    p_ylabel = "Pressure (bar)" if pressure_in_bar else "Pressure (Pa)"
    t_ylabel = "Temperature (°C)" if in_celsius else "Temperature (K)"
    e_ylabel = "Power / Heat Flow (kW)" if power_in_kw else "Power / Heat Flow (W)"

    n_scen = len(loaded)
    base_width = ReportStyleConfig.FIG_SIZE[0]
    ratio_bot = 2.4

    # Resolve broken_ylim per scenario (supports exact match, case-insensitive, or substring match)
    raw_broken: dict[str, BrokenYlimType | None] = {
        scen_name: _resolve_broken_ylim(scen_name, scenarios[scen_name], broken_ylim)
        for scen_name in loaded
    }

    # Group scenarios that share the same base broken_ylim so they get identical fitted outer bounds
    per_scen_broken: dict[str, BrokenYlimType | None] = {}
    for scen_name, b_lim in raw_broken.items():
        if b_lim is None:
            per_scen_broken[scen_name] = None
        else:
            same_group_data = [
                loaded[s][1] for s, other_lim in raw_broken.items() if other_lim == b_lim
            ]
            per_scen_broken[scen_name] = _fit_broken_ylim_to_data(b_lim, same_group_data)

    unique_limits = {per_scen_broken[s] for s in loaded}
    shared_energy_scale = len(unique_limits) == 1
    has_any_broken = any(v is not None for v in per_scen_broken.values())

    fig = plt.figure(figsize=(base_width, 4.7 if has_any_broken else 4.4))
    outer_gs = GridSpec(
        2,
        n_scen,
        figure=fig,
        height_ratios=[1.1, 1.25],
        hspace=0.14,
        wspace=0.08 if shared_energy_scale else 0.24,
    )

    legend_handles: list = []
    shared_ax_energy = None

    for idx, (scen_name, (t_eval, data)) in enumerate(loaded.items()):
        ax_tp = fig.add_subplot(outer_gs[0, idx])
        ax_press = ax_tp.twinx()
        ax_press.grid(False)
        col_handles: list = []

        # Row 1: Pressures (right y-axis) & Inlet Temperatures (left y-axis) with 1 °C = 1 bar
        if "p_fluid" in data["evaporator"]:
            col_handles += ax_press.plot(
                t_eval, data["evaporator"]["p_fluid"],
                color=color_evap_p, linestyle="-", linewidth=0.7, label="Evap. $p$",
            )
        if "p_fluid" in data["condenser"]:
            col_handles += ax_press.plot(
                t_eval, data["condenser"]["p_fluid"],
                color=color_cond_p, linestyle="-", linewidth=0.7, label="Cond. $p$",
            )
        if "T_fluid_in" in data["evaporator"]:
            col_handles += ax_tp.plot(
                t_eval, data["evaporator"]["T_fluid_in"],
                color=color_evap_t, linestyle="-", linewidth=0.4, label="Evap. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_in" in data["condenser"]:
            col_handles += ax_tp.plot(
                t_eval, data["condenser"]["T_fluid_in"],
                color=color_cond_t, linestyle="-", linewidth=0.4, label="Cond. $T_{\\mathrm{in}}$",
            )

        if pressure_in_bar:
            ax_tp.set_ylim(*temp_ylim)
            ax_press.set_ylim(*press_ylim)

        _format_weekday_axis(ax_tp, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
        ax_tp.set_title(f"{scen_name.replace('_', ' ').capitalize()}")

        if idx == 0:
            ax_tp.set_ylabel(t_ylabel)
        else:
            ax_tp.tick_params(axis="y", which="both", left=False, labelleft=False)

        if idx == n_scen - 1:
            ax_press.set_ylabel(p_ylabel)
        else:
            ax_press.tick_params(axis="y", which="both", right=False, labelright=False)

        # Row 2: Power & Heat Flow
        p_fan = data["energy"].get("fan_power", np.zeros_like(t_eval))
        p_comp = data["energy"].get("compressor_power", np.zeros_like(t_eval))
        p_total_el = p_fan + p_comp
        q_flow = data["energy"].get("heat_flow", np.zeros_like(t_eval))

        scen_b_ylim = per_scen_broken[scen_name]
        show_left = (idx == 0) or (not shared_energy_scale)
        if scen_b_ylim is not None:
            (y_bot_min, y_bot_max), (y_top_min, y_top_max) = scen_b_ylim
            inner_gs = GridSpecFromSubplotSpec(
                2, 1, subplot_spec=outer_gs[1, idx], height_ratios=[1.0, ratio_bot], hspace=0.08
            )
            ax_e_top = fig.add_subplot(inner_gs[0])
            ax_e_bot = fig.add_subplot(inner_gs[1], sharex=ax_e_top)

            _draw_energy_curves(
                ax_e_top, t_eval, p_fan, p_total_el, q_flow, color_fan, color_comp, color_heat,
                lw_heat=0.5, lw_comp=0.5, lw_fan=0.5,
            )
            h_fan, h_comp, h_heat = _draw_energy_curves(
                ax_e_bot, t_eval, p_fan, p_total_el, q_flow, color_fan, color_comp, color_heat,
                lw_heat=0.5, lw_comp=0.5, lw_fan=0.5,
            )

            _format_weekday_axis(ax_e_top, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
            _format_weekday_axis(ax_e_bot, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=True)
            _style_broken_energy_axes(
                ax_e_top, ax_e_bot, y_bot_min, y_bot_max, y_top_min, y_top_max,
                ratio_bot=ratio_bot, show_left_ticks=show_left,
            )
            if idx == 0:
                ax_e_bot.set_ylabel(e_ylabel)
                ax_e_bot.yaxis.set_label_coords(-0.18, 0.5 * (1.0 + 1.0 / ratio_bot))
        else:
            ax_energy = fig.add_subplot(
                outer_gs[1, idx],
                sharey=shared_ax_energy if shared_energy_scale else None,
            )
            if shared_ax_energy is None and shared_energy_scale:
                shared_ax_energy = ax_energy
            h_fan, h_comp, h_heat = _draw_energy_curves(
                ax_energy, t_eval, p_fan, p_total_el, q_flow, color_fan, color_comp, color_heat,
                lw_heat=0.8, lw_comp=0.65, lw_fan=0.6,
            )
            _format_weekday_axis(ax_energy, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=True)
            if idx == 0:
                ax_energy.set_ylabel(e_ylabel)
            elif not show_left:
                ax_energy.tick_params(axis="y", which="both", left=False, labelleft=False)

        if idx == 0:
            legend_handles = [*col_handles, h_fan, h_comp, h_heat]

    fig.legend(
        legend_handles,
        [h.get_label() for h in legend_handles],
        loc="upper center",
        bbox_to_anchor=(0.5, 0.02),
        frameon=True,
        ncol=3,
    )

    if output_name is None:
        scen_slug = "_vs_".join(_slugify(k) for k in scenarios.keys())
        resolved_output_name = f"{scen_slug}_heat_pump_comparison"
    else:
        resolved_output_name = output_name

    generic_save_function(
        fig=fig,
        name=resolved_output_name,
        folder=output_folder,
    )


def _find_existing_mat_file(mat_file_name: str) -> str:
    """Verify that `mat_file_name` exists in `model/SmartHouse/` and return it."""
    mat_path = os.path.join(repo_root, "model", "SmartHouse", mat_file_name)
    if not os.path.isfile(mat_path):
        raise FileNotFoundError(f"'{mat_file_name}' not found in {os.path.dirname(mat_path)}")
    return mat_file_name


if __name__ == "__main__":
    summer_mat = _find_existing_mat_file("summer_hp.mat")
    winter_mat = _find_existing_mat_file("winter_hp.mat")

    for scen, mat_file in [("summer", summer_mat), ("winter", winter_mat)]:
        plot_heat_pump(
            mat_file_name=mat_file,
            scenario_name=scen,
            combine_temp_pressure=True,
            broken_ylim=broken_ylim_config.get(scen),
        )

    # Side-by-side comparison across Summer & Winter (uses per-scenario broken_ylim_config;
    # pass a single tuple `((y_bot_min, y_bot_max), (y_top_min, y_top_max))` if both should share one scale)
    plot_heat_pump_comparison(
        scenarios={
            "summer": summer_mat,
            "winter": winter_mat,
        },
        broken_ylim=broken_ylim_config,
    )

    test_mat = _find_existing_mat_file("winter_hp_wind_bat.mat")
    plot_heat_pump(
        mat_file_name=test_mat,
        scenario_name="test Winter",
        combine_temp_pressure=True,
        broken_ylim=broken_ylim_config.get("winter"),
    )

    plot_heat_pump_comparison(
            scenarios={
                "test Winter": test_mat,
                "winter": winter_mat,
            },
            broken_ylim=broken_ylim_config,
        )