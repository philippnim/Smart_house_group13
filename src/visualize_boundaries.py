"""
Visualize the heat flows (W) leaving the house through the floor, roof, and external walls
for each room over the second (evaluation) simulation week.

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


signals = {
    "floor": {
        "Sauna": "houseEnviroment.houseVentilation.SaunaFloor.heatPort_down.Q_flow",
        "Kitchen": "houseEnviroment.houseVentilation.KitchenFloor.heatPort_down.Q_flow",
        "Bathroom": "houseEnviroment.houseVentilation.BathroomFloor.heatPort_down.Q_flow",
        "LivingRoom": "houseEnviroment.houseVentilation.LivingRoomFloor.heatPort_down.Q_flow",
        "Bedroom": "houseEnviroment.houseVentilation.BedroomFloor.heatPort_down.Q_flow",
    },
    "roof": {
        "Sauna": "houseEnviroment.houseVentilation.SaunaRoof.heatPort_up.Q_flow",
        "Kitchen": "houseEnviroment.houseVentilation.KitchenRoof.heatPort_up.Q_flow",
        "Bathroom": "houseEnviroment.houseVentilation.BathroomRoof.heatPort_up.Q_flow",
        "LivingRoom": "houseEnviroment.houseVentilation.LivingRoomRoof.heatPort_up.Q_flow",
        "Bedroom": "houseEnviroment.houseVentilation.BedroomRoof.heatPort_up.Q_flow",
    },
    "external walls": {
        "Sauna": "houseEnviroment.houseVentilation.compositeWall.heatPort_A.Q_flow",
        "Kitchen": "houseEnviroment.houseVentilation.compositeWall1.heatPort_A.Q_flow",
        "Bathroom": "houseEnviroment.houseVentilation.compositeWall5.heatPort_A.Q_flow",
        "LivingRoom": [
            "houseEnviroment.houseVentilation.compositeWall2.heatPort_A.Q_flow",
            "houseEnviroment.houseVentilation.compositeWall6.heatPort_B.Q_flow",
        ],
        "Bedroom": "houseEnviroment.houseVentilation.compositeWall4.heatPort_A.Q_flow",
    },
}

boundary_labels = {
    "floor": "Floor",
    "roof": "Roof",
    "external walls": "External Walls",
}

relevant_timeframe = [604800, 1209600]  # Second week (evaluation period) in seconds


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


def _load_boundary_heat_flows(
    mat_file_name: str,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 300.0,
    positive_outflow: bool = True,
) -> tuple[np.ndarray, dict[str, np.ndarray]]:
    """
    Load time array and summed boundary heat flows (W) per boundary category
    ('floor', 'roof', 'external walls') for the evaluation window.
    """
    handler = Datahandler(mat_file_name)
    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    sign_factor = -1.0 if positive_outflow else 1.0

    boundary_vars: dict[str, list[str]] = {}
    all_vars_to_load: list[str] = []

    for boundary_key, room_map in signals.items():
        resolved_for_boundary: list[str] = []
        for raw_entry in room_map.values():
            var_list = [raw_entry] if isinstance(raw_entry, str) else list(raw_entry)
            for v in var_list:
                res_v = _resolve_var_name(handler, v)
                if res_v is not None:
                    resolved_for_boundary.append(res_v)
                    if res_v not in all_vars_to_load:
                        all_vars_to_load.append(res_v)
        if resolved_for_boundary:
            boundary_vars[boundary_key] = resolved_for_boundary

    if not all_vars_to_load:
        raise ValueError(f"No matching boundary heat flow variables found in {mat_file_name}.")

    df = handler.to_dataframe(
        all_vars_to_load,
        dt=dt,
        start=eval_start_sec,
        end=eval_end_sec,
    )
    t_eval = df["Time"].to_numpy(dtype=float)

    summed_flows: dict[str, np.ndarray] = {}
    for boundary_key, var_cols in boundary_vars.items():
        total_boundary_q_flow = np.zeros_like(t_eval, dtype=float)
        for col in var_cols:
            total_boundary_q_flow += sign_factor * df[col].to_numpy(dtype=float)
        summed_flows[boundary_key] = total_boundary_q_flow

    return t_eval, summed_flows


def plot_boundary_heat_flows(
    mat_file_name: str,
    scenario_name: str | None = None,
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 300.0,
    positive_outflow: bool = True,
    output_folder: str = output_plots_dir,
) -> None:
    """
    Plot the total heat flow (W) leaving the house through Floor, Roof, and External Walls
    (each summed across all rooms) in a single plot per scenario over the evaluation week.
    """
    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)

    stem = scenario_name or os.path.splitext(os.path.basename(mat_file_name))[0]
    title_prefix = f"{scenario_name.replace('_', ' ').capitalize()} - " if scenario_name else ""

    t_eval, summed_flows = _load_boundary_heat_flows(
        mat_file_name=mat_file_name,
        timeframe=timeframe,
        dt=dt,
        positive_outflow=positive_outflow,
    )

    fig, ax = plt.subplots()

    for boundary_key, total_boundary_q_flow in summed_flows.items():
        label = boundary_labels.get(boundary_key, boundary_key.capitalize())
        ax.plot(t_eval, total_boundary_q_flow, linewidth=1.6, label=label)

        avg_loss_w = float(np.mean(total_boundary_q_flow))
        total_loss_kwh = float(np.trapezoid(total_boundary_q_flow, t_eval) / 3.6e6)
        print(
            f"[{stem} | {label}] Avg Heat Loss: {avg_loss_w:.2f} W | "
            f"Weekly Total: {total_loss_kwh:.2f} kWh"
        )

    _format_weekday_axis(ax, eval_start_sec, eval_end_sec, n_days=n_days)

    ax.set_title(f"{title_prefix}Boundary Heat Losses")
    ax.set_ylabel("Heat Loss (W)" if positive_outflow else "Heat Flow (W)")
    ax.legend(
        loc="upper center",
        bbox_to_anchor=(0.5, -0.10),
        frameon=True,
        ncol=3,
    )

    fig.tight_layout()
    generic_save_function(
        fig=fig,
        name=f"{stem}_boundary_heat_loss",
        folder=output_folder,
    )


def plot_boundary_heat_flows_comparison(
    scenarios: dict[str, str],
    timeframe: list[float] | tuple[float, float] = relevant_timeframe,
    dt: float = 300.0,
    positive_outflow: bool = True,
    output_folder: str = output_plots_dir,
    output_name: str = "scenarios_boundary_heat_loss_comparison",
) -> None:
    """
    Plot total boundary heat flows (Floor, Roof, External Walls summed across all rooms)
    for multiple scenarios side-by-side (`1 x N` subplots) sharing the same y-axis.

    Args:
        scenarios (dict[str, str]): Mapping `{scenario_name: mat_file_name}`,
            e.g. `{"summer": "summer_base.mat", "winter": "winter_base.mat"}`.
    """
    if not scenarios:
        return

    eval_start_sec, eval_end_sec = float(timeframe[0]), float(timeframe[1])
    n_days = max(int(round((eval_end_sec - eval_start_sec) / 86400)), 1)

    loaded: dict[str, tuple[np.ndarray, dict[str, np.ndarray]]] = {}
    for scen_name, mat_file in scenarios.items():
        t_eval, summed_flows = _load_boundary_heat_flows(
            mat_file_name=mat_file,
            timeframe=timeframe,
            dt=dt,
            positive_outflow=positive_outflow,
        )
        loaded[scen_name] = (t_eval, summed_flows)
        for boundary_key, q_vals in summed_flows.items():
            label = boundary_labels.get(boundary_key, boundary_key.capitalize())
            avg_loss_w = float(np.mean(q_vals))
            total_loss_kwh = float(np.trapezoid(q_vals, t_eval) / 3.6e6)
            print(
                f"[{scen_name} | {label}] Avg Heat Loss: {avg_loss_w:.2f} W | "
                f"Weekly Total: {total_loss_kwh:.2f} kWh"
            )

    n_scen = len(loaded)
    fig, axes = plt.subplots(
        1,
        n_scen,
        sharey=True,
        gridspec_kw={"wspace": 0.08},
    )
    if n_scen == 1:
        axes = [axes]

    legend_lines = []
    for idx, (scen_name, (t_eval, summed_flows)) in enumerate(loaded.items()):
        ax = axes[idx]
        current_lines = []
        for boundary_key, q_vals in summed_flows.items():
            label = boundary_labels.get(boundary_key, boundary_key.capitalize())
            line = ax.plot(t_eval, q_vals, linewidth=1.5, label=label)
            current_lines.extend(line)

        if idx == 0:
            legend_lines = current_lines

        _format_weekday_axis(ax, eval_start_sec, eval_end_sec, n_days=n_days)
        ax.set_title(f"{scen_name.replace('_', ' ').capitalize()}")

        if idx == 0:
            ax.set_ylabel("Heat Loss (W)" if positive_outflow else "Heat Flow (W)")
        else:
            ax.tick_params(axis="y", which="both", left=False, labelleft=False)

    labels = [l.get_label() for l in legend_lines]
    fig.legend(
        legend_lines,
        labels,
        loc="upper center",
        bbox_to_anchor=(0.5, 0),
        frameon=True,
        ncol=len(labels) if labels else 3,
    )

    generic_save_function(
        fig=fig,
        name=output_name,
        folder=output_folder,
    )


if __name__ == "__main__":
    # Scenarios "summer_base.mat" and "winter_base.mat" are used for the visualization of the heat flows leaving the house.
    plot_boundary_heat_flows(
        mat_file_name="summer_base.mat",
        scenario_name="summer",
    )

    plot_boundary_heat_flows(
        mat_file_name="winter_base.mat",
        scenario_name="winter",
    )

    plot_boundary_heat_flows_comparison(
        scenarios={
            "summer": "summer_base.mat",
            "winter": "winter_base.mat",
        }
    )
