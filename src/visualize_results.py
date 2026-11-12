"""
Plotting relevant results from the simulation.
especially the 
1. Temperatures in each room
2 Power generation by PV and Wind and Battery storage discharge/charge and SOC

Author: Philipp
"""


import os
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

from KPIs import KPIs
from load_and_prepare_mat_file import Datahandler

try:
    from config import ReportStyleConfig, generic_save_function, get_repo_root
except ImportError:
    from src.config import ReportStyleConfig, generic_save_function, get_repo_root

ReportStyleConfig().apply_style()

repo_root = get_repo_root()
output_plots_dir = os.path.join(repo_root, "data", "output", "plots")


##################################################
# Code 
##################################################

signal_names = {
    "temperature": {
        "T_sauna": "houseEnviroment.houseVentilation.Sauna.Temperature_sensor",
        "T_bathroom": "houseEnviroment.houseVentilation.bathroom.Temperature_sensor",
        "T_bedroom": "houseEnviroment.houseVentilation.Bedroom.Temperature_sensor",
        "T_kitchen": "houseEnviroment.houseVentilation.Kitchen.Temperature_sensor",
        "T_living_room": "houseEnviroment.houseVentilation.LivingRoom.Temperature_sensor",
        "T_garage": "houseEnviroment.houseVentilation.Garage.Temperature_sensor",
    },
    "heat_load": {
        "heat_generation": "houseEnviroment.currentHeatload.showNumber",
        "total_heat_generation": "houseEnviroment.aggGeneratedHeat.showNumber"
    }
}

room_labels = {
    "T_bedroom": "Bedroom",
    "T_living_room": "Living room",
    "T_bathroom": "Bathroom",
    "T_kitchen": "Kitchen",
    "T_sauna": "Sauna",
    "T_garage": "Garage",
}

relevant_timeframe = [604800, 1209600]  # 1 week in seconds, 2 weeks in seconds this is the second week which needs to be evaluated as the first week is the warmup phase and not relevant for the evaluation of the scenarios 

##################################################
# Functions
##################################################


def _format_weekday_axis(
    ax: plt.Axes,
    eval_start_sec: float,
    eval_end_sec: float,
    n_days: int = 7,
) -> None:
    """
    Center weekday labels ('Mon', 'Tue', ...) in each 24-hour day bin and draw
    a fine grey vertical line at each 00:00 day boundary.
    """
    weekday_names = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
    bin_centers = [eval_start_sec + (d + 0.5) * 86400 for d in range(n_days)]
    tick_labels = [weekday_names[d % 7] for d in range(n_days)]

    ax.set_xticks(bin_centers)
    ax.set_xticklabels(tick_labels)
    ax.tick_params(axis="x", which="both", length=0)
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


def plot_room_temperatures(
    mat_file_name: str,
    scenario_name: str | None = None,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 300.0,
    in_celsius: bool = False,
    exclude_rooms: list[str] | None = None,
    output_folder: str = output_plots_dir,
    broken_ylim: tuple[tuple[float, float], tuple[float, float]] | None = ((275, 310), (345, 360)),
) -> None:
    """
    Load room temperature signals from `mat_file_name` via `Datahandler` and plot
    all rooms together over the evaluation week (`timeframe`) using weekday bins.

    Args:
        mat_file_name (str): Name of the .mat file in `model/SmartHouse/`.
        scenario_name (str | None): Optional scenario name for plot title and filename.
        timeframe (list | tuple): [start_sec, end_sec] evaluation window (default [604800, 1209600]).
        dt (float): Resampling step in seconds for `Datahandler.to_dataframe` (default 300 s).
        in_celsius (bool): If True, convert temperatures from Kelvin to °C.
        exclude_rooms (list[str] | None): Optional keys from `signal_names["temperature"]` to skip (e.g. ["T_sauna"]).
        output_folder (str): Target directory where `.png` and `pgf/*.pgf` are saved.
        broken_ylim (tuple | None): Lower and upper y-axis intervals `((y_bot_min, y_bot_max), (y_top_min, y_top_max))`.
            Default `((275, 310), (340, 360))` cuts out 310–340 K and starts at 275 K.
    """
    handler = Datahandler(mat_file_name)
    exclude = set(exclude_rooms or [])

    # Resolve available temperature variables in the .mat file (with fallback for Sauna)
    resolved_vars: dict[str, str] = {}
    for key, var_path in signal_names["temperature"].items():
        if key in exclude:
            continue
        if var_path in handler.variables:
            resolved_vars[key] = var_path
        elif key == "T_sauna":
            alt_sauna = "houseEnviroment.houseVentilation.Sauna.unheatedRoom.Temperature_sensor"
            if alt_sauna in handler.variables:
                resolved_vars[key] = alt_sauna

    if not resolved_vars:
        raise ValueError(f"No matching room temperature variables found in {mat_file_name}.")

    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    df = handler.to_dataframe(
        list(resolved_vars.values()),
        dt=dt,
        start=eval_start_sec,
        end=eval_end_sec,
    )

    t_eval = df["Time"].to_numpy(dtype=float)

    preferred_order = ["T_bedroom", "T_living_room", "T_bathroom", "T_kitchen", "T_sauna", "T_garage"]
    ordered_keys = [k for k in preferred_order if k in resolved_vars] + [
        k for k in resolved_vars if k not in preferred_order
    ]

    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)
    stem = scenario_name or os.path.splitext(os.path.basename(mat_file_name))[0]
    title_prefix = f"{scenario_name.replace('_', ' ').capitalize()} - " if scenario_name else ""
    ylabel = "Temperature (°C)" if in_celsius else "Temperature (K)"
    ref_temp = 21.0 if in_celsius else 294.15

    def _add_ref_temp_line_and_ytick(target_ax: plt.Axes, y_min: float, y_max: float) -> None:
        target_ax.axhline(ref_temp, color="gray", linestyle="--", linewidth=1.1, alpha=0.85, zorder=1)
        ticks = [t for t in target_ax.get_yticks() if y_min <= t <= y_max and abs(t - ref_temp) > 1.5]
        ticks = sorted(ticks + [ref_temp])
        tick_labels = [
            f"{ref_temp:g}" if np.isclose(t, ref_temp) else f"{t:g}"
            for t in ticks
        ]
        target_ax.set_yticks(ticks)
        target_ax.set_yticklabels(tick_labels)
        target_ax.set_ylim(y_min, y_max)

    if broken_ylim is not None:
        (y_bot_min, y_bot_max), (y_top_min, y_top_max) = broken_ylim
        if in_celsius and y_bot_min > 150:
            y_bot_min, y_bot_max = y_bot_min - 273.15, y_bot_max - 273.15
            y_top_min, y_top_max = y_top_min - 273.15, y_top_max - 273.15

        ratio_bot = 2.4
        fig, (ax_top, ax_bot) = plt.subplots(
            2,
            1,
            sharex=True,
            gridspec_kw={"height_ratios": [1.0, ratio_bot], "hspace": 0.08},
        )

        for key in ordered_keys:
            var_path = resolved_vars[key]
            vals = df[var_path].to_numpy(dtype=float)
            if in_celsius:
                vals = vals - 273.15
            label = room_labels.get(key, key.removeprefix("T_").replace("_", " ").capitalize())
            ax_top.plot(t_eval, vals, linewidth=1.6, label=label)
            ax_bot.plot(t_eval, vals, linewidth=1.6, label=label)

        ax_top.set_ylim(y_top_min, y_top_max)
        ax_bot.set_ylim(y_bot_min, y_bot_max)
        _add_ref_temp_line_and_ytick(ax_bot, y_bot_min, y_bot_max)

        _format_weekday_axis(ax_top, eval_start_sec, eval_end_sec, n_days=n_days)
        _format_weekday_axis(ax_bot, eval_start_sec, eval_end_sec, n_days=n_days)

        ax_top.spines["bottom"].set_visible(False)
        ax_bot.spines["top"].set_visible(False)
        ax_top.tick_params(axis="x", which="both", bottom=False, top=False, labelbottom=False)

        # Diagonal break marks on left and right spines
        d_x, d_y = 0.012, 0.03
        kwargs_top = dict(transform=ax_top.transAxes, color="black", clip_on=False, linewidth=0.8)
        ax_top.plot((-d_x, +d_x), (-d_y * ratio_bot, +d_y * ratio_bot), **kwargs_top)
        ax_top.plot((1 - d_x, 1 + d_x), (-d_y * ratio_bot, +d_y * ratio_bot), **kwargs_top)

        kwargs_bot = dict(transform=ax_bot.transAxes, color="black", clip_on=False, linewidth=0.8)
        ax_bot.plot((-d_x, +d_x), (1 - d_y, 1 + d_y), **kwargs_bot)
        ax_bot.plot((1 - d_x, 1 + d_x), (1 - d_y, 1 + d_y), **kwargs_bot)

        ax_top.set_title(f"{title_prefix}Room Temperatures")
        fig.supylabel(ylabel, fontsize=plt.rcParams.get("axes.labelsize", 11))
        ax_bot.legend(
            loc="center left",
            bbox_to_anchor=(1.02, 0.72),
            frameon=True,
            ncol=1,
        )
    else:
        fig, ax = plt.subplots()
        for key in ordered_keys:
            var_path = resolved_vars[key]
            vals = df[var_path].to_numpy(dtype=float)
            if in_celsius:
                vals = vals - 273.15
            label = room_labels.get(key, key.removeprefix("T_").replace("_", " ").capitalize())
            ax.plot(t_eval, vals, linewidth=1.6, label=label)

        y_min = 275.0 - 273.15 if in_celsius else 275.0
        ax.set_ylim(bottom=y_min)
        _add_ref_temp_line_and_ytick(ax, y_min, ax.get_ylim()[1])
        _format_weekday_axis(ax, eval_start_sec, eval_end_sec, n_days=n_days)

        ax.set_title(f"{title_prefix}Room Temperatures")
        ax.set_ylabel(ylabel)
        ax.legend(
            loc="center left",
            bbox_to_anchor=(1.02, 0.5),
            frameon=True,
            ncol=1,
        )
        fig.tight_layout()

    generic_save_function(
        fig=fig,
        name=f"{stem}_room_temperatures",
        folder=output_folder,
    )


def _load_heat_load_data(
    mat_file_name: str,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 300.0,
    power_in_kw: bool = True,
) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Load time, thermal power, and cumulative thermal energy (kWh) for the evaluation window."""
    handler = Datahandler(mat_file_name)

    power_candidates = [
        signal_names["heat_load"]["heat_generation"],
        "houseEnviroment.heatPump_ThermalStorage.HeatFlow",
    ]
    energy_candidates = [
        signal_names["heat_load"]["total_heat_generation"],
        "houseEnviroment.integratorHeatLoad.y",
    ]

    power_var = next((v for v in power_candidates if v in handler.variables), None)
    energy_var = next((v for v in energy_candidates if v in handler.variables), None)

    if power_var is None:
        raise ValueError(f"No heat load power variable found in {mat_file_name}.")

    vars_to_load = [power_var] + ([energy_var] if energy_var is not None else [])
    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    df = handler.to_dataframe(
        vars_to_load,
        dt=dt,
        start=eval_start_sec,
        end=eval_end_sec,
    )

    t_eval = df["Time"].to_numpy(dtype=float)
    power_vals = df[power_var].to_numpy(dtype=float)
    if power_in_kw:
        power_vals = power_vals / 1000.0

    # Cumulative thermal energy in kWh starting at 0 kWh at eval_start_sec (in Modelica integrator is in J)
    if energy_var is not None:
        raw_energy_j = df[energy_var].to_numpy(dtype=float)
        energy_kwh = (raw_energy_j - raw_energy_j[0]) / 3.6e6
    else:
        power_w = df[power_var].to_numpy(dtype=float)
        dt_arr = np.diff(t_eval)
        avg_p = 0.5 * (power_w[:-1] + power_w[1:])
        energy_kwh = np.concatenate(([0.0], np.cumsum(avg_p * dt_arr) / 3.6e6))

    return t_eval, power_vals, energy_kwh


def plot_heat_load(
    mat_file_name: str,
    scenario_name: str | None = None,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 300.0,
    power_in_kw: bool = True,
    output_folder: str = output_plots_dir,
) -> None:
    """
    Plot instantaneous thermal power (left y-axis, shaded curve) together with
    cumulative generated thermal energy in kWh for the evaluation week (right y-axis,
    zeroed at the start of the evaluation week).
    """
    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    t_eval, power_vals, energy_kwh = _load_heat_load_data(
        mat_file_name, timeframe=timeframe, dt=dt, power_in_kw=power_in_kw
    )

    stem = scenario_name or os.path.splitext(os.path.basename(mat_file_name))[0]
    unit_str = "kW" if power_in_kw else "W"
    avg_power = float(np.mean(power_vals))
    peak_power = float(np.max(power_vals))
    total_energy = float(energy_kwh[-1])
    print(
        f"[{stem}] Average Heat Load: {avg_power:.2f} {unit_str} | "
        f"Peak Heat Load: {peak_power:.2f} {unit_str} | "
        f"Total Weekly Heat Energy: {total_energy:.2f} kWh"
    )

    fig, ax_power = plt.subplots()
    ax_energy = ax_power.twinx()
    ax_energy.grid(False)

    prop_cycle = plt.rcParams["axes.prop_cycle"].by_key().get("color", ["#00549F", "#E30066"])
    color_power = prop_cycle[0]
    color_energy = prop_cycle[1] if len(prop_cycle) > 1 else "#E30066"

    line_power = ax_power.plot(
        t_eval,
        power_vals,
        color=color_power,
        linewidth=1.5,
        label="Heat Load (Power)",
    )
    ax_power.fill_between(t_eval, power_vals, 0.0, color=color_power, alpha=0.15)

    line_energy = ax_energy.plot(
        t_eval,
        energy_kwh,
        color=color_energy,
        linewidth=1.8,
        linestyle="--",
        label="Cumulative Thermal Energy",
    )

    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)
    _format_weekday_axis(ax_power, eval_start_sec, eval_end_sec, n_days=n_days)

    ax_power.set_ylim(bottom=0.0)
    ax_energy.set_ylim(bottom=0.0)

    stem = scenario_name or os.path.splitext(os.path.basename(mat_file_name))[0]
    title_prefix = f"{scenario_name.replace('_', ' ').capitalize()} - " if scenario_name else ""
    ax_power.set_title(f"{title_prefix}Heat Load and Cumulative Thermal Energy")
    ax_power.set_ylabel("Thermal Power (kW)" if power_in_kw else "Thermal Power (W)")
    ax_energy.set_ylabel("Cumulative Thermal Energy (kWh)")

    lines = line_power + line_energy
    labels = [l.get_label() for l in lines]
    ax_power.legend(
        lines,
        labels,
        loc="upper center",
        bbox_to_anchor=(0.5, -0.10),
        frameon=True,
        ncol=2,
    )

    fig.tight_layout()
    generic_save_function(
        fig=fig,
        name=f"{stem}_heat_load",
        folder=output_folder,
    )


def plot_heat_load_comparison(
    scenarios: dict[str, str],
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 300.0,
    power_in_kw: bool = True,
    output_folder: str = output_plots_dir,
    output_name: str = "scenarios_heat_load_comparison",
) -> None:
    """
    Plot heat load (power) and cumulative thermal energy for multiple scenarios
    side-by-side (`1 x N` subplots) sharing the exact same left (Power) and right (Energy) y-axes.

    Args:
        scenarios (dict[str, str]): Mapping `{scenario_name: mat_file_name}`,
            e.g. `{"summer": "summer_base.mat", "winter": "winter_base.mat"}`.
    """
    if not scenarios:
        return

    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)

    loaded = {}
    max_power = 0.0
    max_energy = 0.0
    unit_str = "kW" if power_in_kw else "W"
    for scen_name, mat_file in scenarios.items():
        t_eval, p_vals, e_kwh = _load_heat_load_data(
            mat_file, timeframe=timeframe, dt=dt, power_in_kw=power_in_kw
        )
        loaded[scen_name] = (t_eval, p_vals, e_kwh)
        max_power = max(max_power, float(np.nanmax(p_vals)))
        max_energy = max(max_energy, float(np.nanmax(e_kwh)))
        print(
            f"[{scen_name}] Average Heat Load: {float(np.mean(p_vals)):.2f} {unit_str} | "
            f"Peak Heat Load: {float(np.max(p_vals)):.2f} {unit_str} | "
            f"Total Weekly Heat Energy: {float(e_kwh[-1]):.2f} kWh"
        )

    power_top = max_power * 1.08 if max_power > 0 else 1.0
    energy_top = max_energy * 1.08 if max_energy > 0 else 1.0

    n_scen = len(loaded)
    fig, axes_power = plt.subplots(
        1,
        n_scen,
        sharey=True,
        gridspec_kw={"wspace": 0.08},
    )
    if n_scen == 1:
        axes_power = [axes_power]

    prop_cycle = plt.rcParams["axes.prop_cycle"].by_key().get("color", ["#00549F", "#E30066"])
    color_power = prop_cycle[0]
    color_energy = prop_cycle[1] if len(prop_cycle) > 1 else "#E30066"

    legend_lines = []
    for idx, (scen_name, (t_eval, p_vals, e_kwh)) in enumerate(loaded.items()):
        ax_p = axes_power[idx]
        ax_e = ax_p.twinx()
        ax_e.grid(False)

        l_p = ax_p.plot(
            t_eval,
            p_vals,
            color=color_power,
            linewidth=1.4,
            label="Heat Load (Power)",
        )
        ax_p.fill_between(t_eval, p_vals, 0.0, color=color_power, alpha=0.15)

        l_e = ax_e.plot(
            t_eval,
            e_kwh,
            color=color_energy,
            linewidth=1.7,
            linestyle="--",
            label="Cumulative Thermal Energy",
        )
        if idx == 0:
            legend_lines = l_p + l_e

        _format_weekday_axis(ax_p, eval_start_sec, eval_end_sec, n_days=n_days)
        ax_p.set_ylim(0.0, power_top)
        ax_e.set_ylim(0.0, energy_top)
        ax_p.set_title(f"{scen_name.replace('_', ' ').capitalize()}")

        if idx == 0:
            ax_p.set_ylabel("Thermal Power (kW)" if power_in_kw else "Thermal Power (W)")
        else:
            ax_p.tick_params(axis="y", which="both", left=False, labelleft=False)

        if idx == n_scen - 1:
            ax_e.set_ylabel("Cumulative Thermal Energy (kWh)")
        else:
            ax_e.tick_params(axis="y", which="both", right=False, labelright=False)

    labels = [l.get_label() for l in legend_lines]
    fig.legend(
        legend_lines,
        labels,
        loc="upper center",
        bbox_to_anchor=(0.5, 0),
        frameon=True,
        ncol=2,
    )

    generic_save_function(
        fig=fig,
        name=output_name,
        folder=output_folder,
    )


if __name__ == "__main__":
    plot_room_temperatures(
        mat_file_name="summer_base.mat",
        scenario_name="summer",
    )
    plot_heat_load(
        mat_file_name="summer_base.mat",
        scenario_name="summer",
    )

    plot_room_temperatures(
        mat_file_name="winter_base.mat",
        scenario_name="winter",
    )
    plot_heat_load(
        mat_file_name="winter_base.mat",
        scenario_name="winter",
    )

    plot_heat_load_comparison(
        scenarios={
            "summer": "summer_base.mat",
            "winter": "winter_base.mat",
        }
    )




