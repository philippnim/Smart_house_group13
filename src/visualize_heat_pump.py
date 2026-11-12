"""
Visualize heat pump pressures, temperatures (evaporator & condenser), and power/heat flows
over the second (evaluation) simulation week.

Author: Philipp
"""

import os
import matplotlib.pyplot as plt
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
    power_in_kw: bool = False,
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
    power_in_kw: bool = False,
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


def plot_heat_pump(
    mat_file_name: str,
    scenario_name: str | None = None,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 60.0,
    pressure_in_bar: bool = True,
    in_celsius: bool = True,
    power_in_kw: bool = False,
    combine_temp_pressure: bool = True,
    output_folder: str = output_plots_dir,
) -> None:
    """
    Plot heat pump thermodynamic states (Evaporator & Condenser pressures and temperatures
    in the upper subplot with 1 °C = 1 bar scaling) and power/heat flows (stacked Fan +
    Compressor power areas and signed Heat Flow in the lower subplot) with a single
    combined legend below the figure.

    Args:
        mat_file_name (str): Name of the .mat file in `model/SmartHouse/`.
        scenario_name (str | None): Scenario name for title and output filename.
        timeframe (list | tuple): Evaluation timeframe in seconds (default [604800, 1209600]).
        dt (float): Resampling step in seconds (default 60 s).
        pressure_in_bar (bool): Plot pressure in bar (True, default) or Pa (False).
        in_celsius (bool): Plot temperatures in °C (True, default so 1 °C = 1 bar ticks match) or K (False).
        power_in_kw (bool): Plot power/heat flow in kW (True) or W (False, default).
        combine_temp_pressure (bool):
            - If True (default): 2 stacked subplots (1: Temperatures on left y-axis + Pressures on right y-axis
              scaled 1:1 with 1 °C = 1 bar, 2: Power & Heat Flow).
            - If False: 3 stacked subplots (1: Pressures, 2: Temperatures, 3: Power & Heat Flow).
        output_folder (str): Target directory for `.png` and `pgf/*.pgf`.
    """
    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)

    stem = scenario_name or os.path.splitext(os.path.basename(mat_file_name))[0]
    title_prefix = f"{scenario_name.replace('_', ' ').capitalize()} - " if scenario_name else ""

    t_eval, data = _load_heat_pump_data(
        mat_file_name=mat_file_name,
        timeframe=timeframe,
        dt=dt,
        pressure_in_bar=pressure_in_bar,
        in_celsius=in_celsius,
        power_in_kw=power_in_kw,
    )
    _print_heat_pump_summary(stem, t_eval, data, power_in_kw=power_in_kw)

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

    if combine_temp_pressure:
        fig, (ax_tp, ax_energy) = plt.subplots(
            2,
            1,
            sharex=True,
            figsize=(base_width, 4.4),
            gridspec_kw={"height_ratios": [1.15, 1.0], "hspace": 0.12},
        )
        ax_press = ax_tp.twinx()
        ax_press.grid(False)

        # Pressures (right y-axis) in distinct colors from temperatures
        if "p_fluid" in data["evaporator"]:
            upper_handles += ax_press.plot(
                t_eval, data["evaporator"]["p_fluid"],
                color=color_evap_p, linestyle=":", linewidth=0.95, label="Evap. $p$",
            )
        if "p_fluid" in data["condenser"]:
            upper_handles += ax_press.plot(
                t_eval, data["condenser"]["p_fluid"],
                color=color_cond_p, linestyle=":", linewidth=0.95, label="Cond. $p$",
            )

        # Temperatures (left y-axis)
        if "T_fluid_in" in data["evaporator"]:
            upper_handles += ax_tp.plot(
                t_eval, data["evaporator"]["T_fluid_in"],
                color=color_evap_t, linestyle="-", linewidth=0.85, label="Evap. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_out" in data["evaporator"]:
            upper_handles += ax_tp.plot(
                t_eval, data["evaporator"]["T_fluid_out"],
                color=color_evap_t, linestyle="--", linewidth=0.85, label="Evap. $T_{\\mathrm{out}}$",
            )
        if "T_fluid_in" in data["condenser"]:
            upper_handles += ax_tp.plot(
                t_eval, data["condenser"]["T_fluid_in"],
                color=color_cond_t, linestyle="-", linewidth=0.85, label="Cond. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_out" in data["condenser"]:
            upper_handles += ax_tp.plot(
                t_eval, data["condenser"]["T_fluid_out"],
                color=color_cond_t, linestyle="--", linewidth=0.85, label="Cond. $T_{\\mathrm{out}}$",
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
    else:
        fig, (ax_press, ax_temp, ax_energy) = plt.subplots(
            3,
            1,
            sharex=True,
            figsize=(base_width, 5.2),
            gridspec_kw={"height_ratios": [0.9, 1.1, 1.1], "hspace": 0.12},
        )

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

        # 2. Temperatures subplot
        if "T_fluid_in" in data["evaporator"]:
            upper_handles += ax_temp.plot(
                t_eval, data["evaporator"]["T_fluid_in"],
                color=color_evap_t, linestyle="-", linewidth=0.85, label="Evap. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_out" in data["evaporator"]:
            upper_handles += ax_temp.plot(
                t_eval, data["evaporator"]["T_fluid_out"],
                color=color_evap_t, linestyle="--", linewidth=0.85, label="Evap. $T_{\\mathrm{out}}$",
            )
        if "T_fluid_in" in data["condenser"]:
            upper_handles += ax_temp.plot(
                t_eval, data["condenser"]["T_fluid_in"],
                color=color_cond_t, linestyle="-", linewidth=0.85, label="Cond. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_out" in data["condenser"]:
            upper_handles += ax_temp.plot(
                t_eval, data["condenser"]["T_fluid_out"],
                color=color_cond_t, linestyle="--", linewidth=0.85, label="Cond. $T_{\\mathrm{out}}$",
            )
        _format_weekday_axis(ax_temp, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
        ax_temp.set_ylabel(t_ylabel)

    # Bottom subplot: Stacked Fan + Compressor power areas and signed Heat Flow line
    p_fan = data["energy"].get("fan_power", np.zeros_like(t_eval))
    p_comp = data["energy"].get("compressor_power", np.zeros_like(t_eval))
    p_total_el = p_fan + p_comp
    q_flow = data["energy"].get("heat_flow", np.zeros_like(t_eval))

    ax_energy.axhline(0.0, color="gray", linestyle="-", linewidth=0.6, alpha=0.6, zorder=1)

    h_heat = ax_energy.plot(
        t_eval, q_flow,
        color=color_heat, linewidth=0.85, zorder=2, label="Heat Flow ($\\dot{Q}$)",
    )

    h_comp = ax_energy.fill_between(
        t_eval, p_fan, p_total_el,
        color=color_comp, alpha=0.65, zorder=3, label="Compressor Power",
    )
    ax_energy.plot(t_eval, p_total_el, color=color_comp, linewidth=0.7, zorder=3)

    h_fan = ax_energy.fill_between(
        t_eval, 0.0, p_fan,
        color=color_fan, alpha=0.75, zorder=4, label="Fan Power",
    )
    ax_energy.plot(t_eval, p_fan, color=color_fan, linewidth=0.65, zorder=4)

    _format_weekday_axis(ax_energy, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=True)
    ax_energy.set_ylabel(e_ylabel)

    # Single combined legend below the entire figure
    all_handles = [*upper_handles, h_fan, h_comp, *h_heat]
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
    power_in_kw: bool = False,
    output_folder: str = output_plots_dir,
    output_name: str = "scenarios_heat_pump_comparison",
) -> None:
    """
    Plot heat pump states and power balance for multiple scenarios side-by-side
    (`2 x N` subplots: Row 1 Temperatures & Pressures with 1 °C = 1 bar scaling,
    Row 2 Power & Heat Flow) sharing the exact same y-axes per row and a single combined legend.
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
    fig, axes = plt.subplots(
        2,
        n_scen,
        sharex="col",
        sharey="row",
        figsize=(base_width, 4.4),
        gridspec_kw={"height_ratios": [1.15, 1.0], "hspace": 0.12, "wspace": 0.08},
    )
    if n_scen == 1:
        axes = axes[:, np.newaxis]

    legend_handles: list = []

    for idx, (scen_name, (t_eval, data)) in enumerate(loaded.items()):
        ax_tp = axes[0, idx]
        ax_press = ax_tp.twinx()
        ax_press.grid(False)
        ax_energy = axes[1, idx]
        col_handles: list = []

        # Row 1: Pressures (right y-axis) & Temperatures (left y-axis) with 1 °C = 1 bar
        if "p_fluid" in data["evaporator"]:
            col_handles += ax_press.plot(
                t_eval, data["evaporator"]["p_fluid"],
                color=color_evap_p, linestyle=":", linewidth=0.9, label="Evap. $p$",
            )
        if "p_fluid" in data["condenser"]:
            col_handles += ax_press.plot(
                t_eval, data["condenser"]["p_fluid"],
                color=color_cond_p, linestyle=":", linewidth=0.9, label="Cond. $p$",
            )
        if "T_fluid_in" in data["evaporator"]:
            col_handles += ax_tp.plot(
                t_eval, data["evaporator"]["T_fluid_in"],
                color=color_evap_t, linestyle="-", linewidth=0.8, label="Evap. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_out" in data["evaporator"]:
            col_handles += ax_tp.plot(
                t_eval, data["evaporator"]["T_fluid_out"],
                color=color_evap_t, linestyle="--", linewidth=0.8, label="Evap. $T_{\\mathrm{out}}$",
            )
        if "T_fluid_in" in data["condenser"]:
            col_handles += ax_tp.plot(
                t_eval, data["condenser"]["T_fluid_in"],
                color=color_cond_t, linestyle="-", linewidth=0.8, label="Cond. $T_{\\mathrm{in}}$",
            )
        if "T_fluid_out" in data["condenser"]:
            col_handles += ax_tp.plot(
                t_eval, data["condenser"]["T_fluid_out"],
                color=color_cond_t, linestyle="--", linewidth=0.8, label="Cond. $T_{\\mathrm{out}}$",
            )

        if pressure_in_bar:
            ax_tp.set_ylim(*temp_ylim)
            ax_press.set_ylim(*press_ylim)

        _format_weekday_axis(ax_tp, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=False)
        ax_tp.set_title(f"{scen_name.replace('_', ' ').capitalize()}")

        # Row 2: Power & Heat Flow
        p_fan = data["energy"].get("fan_power", np.zeros_like(t_eval))
        p_comp = data["energy"].get("compressor_power", np.zeros_like(t_eval))
        p_total_el = p_fan + p_comp
        q_flow = data["energy"].get("heat_flow", np.zeros_like(t_eval))

        ax_energy.axhline(0.0, color="gray", linestyle="-", linewidth=0.6, alpha=0.6, zorder=1)

        h_heat = ax_energy.plot(
            t_eval, q_flow,
            color=color_heat, linewidth=0.8, zorder=2, label="Heat Flow ($\\dot{Q}$)",
        )

        h_comp = ax_energy.fill_between(
            t_eval, p_fan, p_total_el,
            color=color_comp, alpha=0.65, zorder=3, label="Compressor Power",
        )
        ax_energy.plot(t_eval, p_total_el, color=color_comp, linewidth=0.65, zorder=3)

        h_fan = ax_energy.fill_between(
            t_eval, 0.0, p_fan,
            color=color_fan, alpha=0.75, zorder=4, label="Fan Power",
        )
        ax_energy.plot(t_eval, p_fan, color=color_fan, linewidth=0.6, zorder=4)

        _format_weekday_axis(ax_energy, eval_start_sec, eval_end_sec, n_days=n_days, show_labels=True)

        if idx == 0:
            ax_tp.set_ylabel(t_ylabel)
            ax_energy.set_ylabel(e_ylabel)
            legend_handles = [*col_handles, h_fan, h_comp, *h_heat]
        else:
            for r_ax in (ax_tp, ax_energy):
                r_ax.tick_params(axis="y", which="both", left=False, labelleft=False)

        if idx == n_scen - 1:
            ax_press.set_ylabel(p_ylabel)
        else:
            ax_press.tick_params(axis="y", which="both", right=False, labelright=False)

    fig.legend(
        legend_handles,
        [h.get_label() for h in legend_handles],
        loc="upper center",
        bbox_to_anchor=(0.5, 0.02),
        frameon=True,
        ncol=3,
    )

    generic_save_function(
        fig=fig,
        name=output_name,
        folder=output_folder,
    )


def _find_existing_mat_file(preferred: str, fallbacks: list[str]) -> str:
    """Return `preferred` if it exists in `model/SmartHouse/`, else the first existing fallback."""
    mat_dir = os.path.join(repo_root, "model", "SmartHouse")
    for candidate in [preferred, *fallbacks]:
        if os.path.isfile(os.path.join(mat_dir, candidate)):
            if candidate != preferred:
                print(f"[Info] '{preferred}' not found in model/SmartHouse/; using '{candidate}' instead.")
            return candidate
    return preferred


if __name__ == "__main__":
    summer_mat = _find_existing_mat_file("summer_hp.mat", ["summer_base.mat"])
    winter_mat = _find_existing_mat_file(
        "winter_hp.mat",
        ["winter_hp_wind.mat", "winter_hp_wind_bat.mat", "winter_base.mat"],
    )

    for scen, mat_file in [("summer", summer_mat), ("winter", winter_mat)]:
        plot_heat_pump(
            mat_file_name=mat_file,
            scenario_name=scen,
            combine_temp_pressure=True,
        )

    # Side-by-side comparison across Summer & Winter
    plot_heat_pump_comparison(
        scenarios={
            "summer": summer_mat,
            "winter": winter_mat,
        }
    )
