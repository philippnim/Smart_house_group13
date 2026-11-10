"""
Handling and Generation of the profiles for the simulation for the desired timeframes.

Weather data is taken for the year 2022 for the Location of Lillehammer, Norway.



Author: Philipp
"""
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import io
import sys
import os
import time
import tsam #Time series clustering
try: from generate_pcm_charge_window import make_charge_schedule
except ImportError: from src.generate_pcm_charge_window import make_charge_schedule

try:
    from config import ReportStyleConfig, generic_save_function, get_repo_root
except ImportError:
    from src.config import ReportStyleConfig, generic_save_function, get_repo_root

ReportStyleConfig().apply_style()

repo_root = get_repo_root() 
data_dir = os.path.join(repo_root, "data")
raw_profiles_dir = os.path.join(data_dir, "raw_profiles")
occupancy_profiles_dir = os.path.join(raw_profiles_dir, "occupancy")
power_profiles_dir = os.path.join(raw_profiles_dir, "power")
weather_data_dir = os.path.join(data_dir, "weather")


scenarios_dir = os.path.join(data_dir, "scenarios")


file_names_occ = ( # format: {name}_occupancy.csv
    "Bathroom",
    "Bedroom",
    "Garage",
    "Kitchen",
    "Living_room",
    "Sauna"
)

file_names_power = ( # format: {name}_power.csv Note: Sauna has no power profile
    "Bathroom",
    "Bedroom",
    "Garage",
    "Kitchen",
    "Living_room",
    "EV_charging"
)

weather_file_names = {
    "solar": "lillehammer_solar_2022.txt",
    "temperature": "lillehammer_temp_2022.txt",
    "wind": "lillehammer_wind_2022.txt",
    "rad_north": "lillehammer_wall_north_2022.txt",
    "rad_east": "lillehammer_wall_east_2022.txt",
    "rad_south": "lillehammer_wall_south_2022.txt",
    "rad_west": "lillehammer_wall_west_2022.txt"
}

def load_occupancy_profile(name: str) -> pd.DataFrame:
    """
    Load the occupancy profile from a CSV file.

    Args:
        name (str): The name of the occupancy profile to load.

    Returns:
        pd.DataFrame: The loaded occupancy profile with columns ['time', 'value'].

    """
    file_path = os.path.join(occupancy_profiles_dir, f"{name}_occupancy.csv")
    df = pd.read_csv(file_path, header=None, names=["time", "value"])
    return df

def load_power_profile(name: str) -> pd.DataFrame:
    """
    Load the power profile from a CSV file.

    Args:
        name (str): The name of the power profile to load.

    Returns:
        pd.DataFrame: The loaded power profile with columns ['time', 'value'].

    """
    file_path = os.path.join(power_profiles_dir, f"{name}_power.csv")
    df = pd.read_csv(file_path, header=None, names=["time", "value"])
    return df

def load_sauna_switch() -> pd.DataFrame:
    """
    Load the sauna switch profile (0/1 values) from data/raw_profiles/Sauna_switch.csv.

    Returns:
        pd.DataFrame: The loaded sauna switch profile with columns ['time', 'value'].

    """
    file_path = os.path.join(raw_profiles_dir, "Sauna_switch.csv")
    df = pd.read_csv(file_path, header=None, names=["time", "value"])
    return df

def load_shower_switch() -> pd.DataFrame:
    """Load the shower switch profile from data/raw_profiles/Shower_switch.csv."""
    file_path = os.path.join(raw_profiles_dir, "Shower_switch.csv")
    df = pd.read_csv(file_path, header=None, names=["time", "value"])
    return df


def load_weather_data(file_name: str) -> pd.DataFrame:
    """
    Load the weather data from a txt file.

    Args:
        file_name (str): The filename of the txt file containing the weather data.

    Returns:
        pd.DataFrame: The loaded weather data indexed by hourly 2022 timestamps
            with columns ['hour', 'value'].

    """
    file_path = os.path.join(weather_data_dir, file_name)
    df = pd.read_csv(file_path, sep="\t", skiprows=2, header=None, names=["hour", "value"])
    df.index = pd.date_range(start="2022-01-01", periods=len(df), freq="h")
    df.index.name = "timestamp"
    return df


def load_all_profiles() -> dict:
    """Load all occupancy, power and weather profiles into a dictionary."""
    profiles = {
        "seconds": {
            "occupancy": {},
            "power": {},
            "sauna_switch": None,
            "shower_switch": None,
        },
        "hourly": {
            "weather": {}
        }
    }
    for name in file_names_occ:
        profiles["seconds"]["occupancy"][name] = load_occupancy_profile(name)

    for name in file_names_power:
        profiles["seconds"]["power"][name] = load_power_profile(name)

    profiles["seconds"]["sauna_switch"] = load_sauna_switch()
    profiles["seconds"]["shower_switch"] = load_shower_switch()

    for key, file_name in weather_file_names.items():
        profiles["hourly"]["weather"][key] = load_weather_data(file_name)

    return profiles



def _save_dymola_table(df: pd.DataFrame, file_path: str, table_name: str = "data") -> None:
    """
    Save a 2-column DataFrame (time, value) as a Dymola-compatible ASCII table.
    """
    os.makedirs(os.path.dirname(file_path), exist_ok=True)
    n_rows, n_cols = df.shape
    body = df.to_csv(sep="\t", header=False, index=False, lineterminator="\n")
    content = f"#1\ndouble {table_name} ({n_rows}, {n_cols})\n{body}"

    for attempt in range(3):
        try:
            with open(file_path, "w", encoding="utf-8", newline="\n") as f:
                f.write(content)
            return
        except OSError:
            if attempt < 2:
                try:
                    if os.path.exists(file_path):
                        os.remove(file_path)
                except OSError:
                    pass
                time.sleep(0.1)
            else:
                raise


def _prepare_seconds_profile(
    df: pd.DataFrame,
    startdate: pd.Timestamp,
    length: int = 168,
    n_cycles: int = 2,
) -> pd.DataFrame:
    """
    Shift a 1-week profile (in seconds) to match the weekday/time of startdate,
    extract a period of `length` hours (linearly interpolating at the cut boundaries
    if a cut falls between two support points), and repeat it `n_cycles` times.
    """
    week_sec = 604800
    period_sec = int(length * 3600)
    offset_sec = (
        startdate.weekday() * 86400
        + startdate.hour * 3600
        + startdate.minute * 60
        + startdate.second
    ) % week_sec

    if offset_sec == 0 and period_sec == week_sec:
        single_period = df[["time", "value"]].copy()
    else:
        # Tile the 1-week profile across enough weeks to cover [offset_sec, offset_sec + period_sec]
        n_weeks = (offset_sec + period_sec) // week_sec + 2
        tiled_dfs = []
        for w in range(n_weeks):
            w_offset = w * week_sec
            w_df = df[["time", "value"]].copy()
            w_df["time"] = w_df["time"] + w_offset
            if w > 0:
                prev_end_val = tiled_dfs[-1]["value"].iloc[-1]
                curr_start_val = w_df["value"].iloc[0]
                if curr_start_val == prev_end_val:
                    w_df = w_df.iloc[1:].copy()
                else:
                    w_df.iloc[0, w_df.columns.get_loc("time")] = w_offset + 1
            tiled_dfs.append(w_df)

        tiled = pd.concat(tiled_dfs, ignore_index=True)
        t_tiled = tiled["time"].to_numpy(dtype=float)
        v_tiled = tiled["value"].to_numpy(dtype=float)

        win_start = float(offset_sec)
        win_end = float(offset_sec + period_sec)
        inner_mask = (t_tiled > win_start) & (t_tiled < win_end)

        # Cut [win_start, win_end] and linearly interpolate boundary values via np.interp
        t_cut = np.concatenate(([win_start], t_tiled[inner_mask], [win_end]))
        v_cut = np.interp(t_cut, t_tiled, v_tiled)
        if pd.api.types.is_integer_dtype(df["value"].dtype) and np.all(np.isclose(v_cut, np.round(v_cut))):
            v_cut = np.round(v_cut).astype(df["value"].dtype)

        single_period = pd.DataFrame(
            {"time": np.round(t_cut - win_start).astype(int), "value": v_cut}
        )

    # Repeat single_period for n_cycles
    cycle_dfs = []
    for c in range(n_cycles):
        cycle_offset = c * period_sec
        c_df = single_period.copy()
        c_df["time"] = c_df["time"] + cycle_offset
        if c > 0:
            prev_end_val = cycle_dfs[-1]["value"].iloc[-1]
            curr_start_val = c_df["value"].iloc[0]
            if curr_start_val == prev_end_val:
                # Value stays constant across the cycle boundary; drop duplicate timestamp
                c_df = c_df.iloc[1:].copy()
            else:
                # Step change at the cycle boundary
                c_df.iloc[0, c_df.columns.get_loc("time")] = cycle_offset + 1
        cycle_dfs.append(c_df)

    result = pd.concat(cycle_dfs, ignore_index=True)
    result["time"] = result["time"].astype(int)
    return result


def _prepare_hourly_profile(
    df: pd.DataFrame,
    startdate: pd.Timestamp,
    length: int = 168,
    n_cycles: int = 2,
) -> pd.DataFrame:
    """
    Slice `length` hours starting at `startdate` from an hourly weather DataFrame
    (linearly interpolating if `startdate` or the end cut falls between two hours),
    repeat it `n_cycles` times, and convert the time axis to simulation seconds.
    """
    start_ts = pd.Timestamp(startdate)
    base_ts = df.index[0]
    period_sec = int(length * 3600)
    year_sec = len(df) * 3600

    win_start = (start_ts - base_ts).total_seconds() % year_sec
    win_end = win_start + period_sec

    # Build a 2-year wrapped time axis in seconds so windows crossing year-end work seamlessly
    v_raw = df["value"].to_numpy(dtype=float)
    v_ext = np.concatenate([v_raw, v_raw, [v_raw[0]]])
    t_ext = np.arange(len(v_ext), dtype=float) * 3600.0

    # Keep all interior hourly points in (win_start, win_end) and interpolate at win_start
    inner_mask = (t_ext > win_start) & (t_ext < win_end)
    t_period = np.concatenate(([win_start], t_ext[inner_mask]))
    v_period = np.interp(t_period, t_ext, v_ext)
    t_rel = np.round(t_period - win_start).astype(int)

    cycle_times = []
    cycle_vals = []
    for c in range(n_cycles):
        cycle_times.append(t_rel + c * period_sec)
        cycle_vals.append(v_period)

    # Closing point at t = n_cycles * period_sec (wraps back to the start of the period)
    cycle_times.append(np.array([n_cycles * period_sec], dtype=int))
    cycle_vals.append(np.array([v_period[0]], dtype=float))

    return pd.DataFrame(
        {
            "time": np.concatenate(cycle_times),
            "value": np.concatenate(cycle_vals),
        }
    )


weather_titles = {
    "solar": "Solar Irradiance",
    "temperature": "Outdoor Temperature",
    "wind": "Wind Speed",
    "rad_north": "Wall Irradiance North",
    "rad_east": "Wall Irradiance East",
    "rad_south": "Wall Irradiance South",
    "rad_west": "Wall Irradiance West",
}

weather_ylabels = {
    "solar": "Solar Irradiance (W/m$^2$)",
    "temperature": "Outdoor Temperature (K)",
    "wind": "Wind Speed (m/s)",
    "rad_north": "Wall Irradiance North (W/m$^2$)",
    "rad_east": "Wall Irradiance East (W/m$^2$)",
    "rad_south": "Wall Irradiance South (W/m$^2$)",
    "rad_west": "Wall Irradiance West (W/m$^2$)",
}


def _format_weekday_axis(
    ax: plt.Axes,
    eval_start_sec: float,
    eval_end_sec: float,
    n_days: int,
    startdate: pd.Timestamp | None = None,
) -> None:
    """
    Center weekday labels ('Mon', 'Tue', ...) in each 24-hour day bin and draw
    a fine grey vertical line at each 00:00 day boundary.
    """
    weekday_names = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
    bin_centers = [eval_start_sec + (d + 0.5) * 86400 for d in range(n_days)]
    if startdate is not None:
        tick_labels = [
            (startdate + pd.Timedelta(days=d)).strftime("%a") for d in range(n_days)
        ]
    else:
        tick_labels = [weekday_names[d % 7] for d in range(n_days)]

    ax.set_xticks(bin_centers)
    ax.set_xticklabels(tick_labels)
    ax.tick_params(axis="x", which="both", length=0)
    ax.set_xlim(eval_start_sec, eval_end_sec)

    # Fine grey vertical line at 00:00 between consecutive days
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


def plot_simulation_profile(
    sim_df: pd.DataFrame,
    plot_path: str,
    title: str,
    ylabel: str,
    startdate: pd.Timestamp,
    length: int = 168,
    n_cycles: int = 2,
) -> None:
    """
    Plot the evaluation period (second/final week) directly from the in-memory
    DataFrame `sim_df` using linear interpolation between time steps.
    """
    period_sec = int(length * 3600)
    eval_start_sec = (max(n_cycles, 1) - 1) * period_sec
    eval_end_sec = max(n_cycles, 1) * period_sec

    times = sim_df["time"].to_numpy(dtype=float)
    values = sim_df["value"].to_numpy(dtype=float)

    # Extract all support points inside (eval_start_sec, eval_end_sec) and linearly
    # interpolate the exact boundary values at eval_start_sec and eval_end_sec
    inner_mask = (times > eval_start_sec) & (times < eval_end_sec)
    t_eval = np.concatenate(([eval_start_sec], times[inner_mask], [eval_end_sec]))
    v_eval = np.interp(t_eval, times, values)

    fig, ax = plt.subplots()
    # Standard line plot linearly connects consecutive support points just like Dymola
    ax.plot(t_eval, v_eval, linewidth=1.6)
    ax.fill_between(t_eval, v_eval, v_eval.min(), alpha=0.12)

    n_days = max(int(length // 24), 1)
    _format_weekday_axis(ax, eval_start_sec, eval_end_sec, n_days, startdate=startdate)

    ax.set_title(f"{title}")
    ax.set_xlabel("Weekday")
    ax.set_ylabel(ylabel)

    fig.tight_layout()
    generic_save_function(
        fig=fig,
        name=os.path.basename(plot_path),
        folder=os.path.dirname(plot_path),
    )


def plot_stacked_house_profiles(
    sim_dfs: dict[str, pd.DataFrame],
    plot_path: str,
    title: str,
    ylabel: str,
    startdate: pd.Timestamp,
    length: int = 168,
    n_cycles: int = 2,
) -> None:
    """
    Create a stacked area plot across all rooms/consumers for the evaluation period
    (second/final week) directly from the in-memory DataFrames `sim_dfs`.
    """
    if not sim_dfs:
        return

    period_sec = int(length * 3600)
    eval_start_sec = (max(n_cycles, 1) - 1) * period_sec
    eval_end_sec = max(n_cycles, 1) * period_sec

    # Build the exact union of all support timestamps across all rooms in [eval_start_sec, eval_end_sec]
    time_Arrays = [np.array([eval_start_sec, eval_end_sec], dtype=float)]
    for df in sim_dfs.values():
        t = df["time"].to_numpy(dtype=float)
        inner = t[(t > eval_start_sec) & (t < eval_end_sec)]
        time_Arrays.append(inner)
    t_eval = np.unique(np.concatenate(time_Arrays))

    labels = []
    series_list = []
    preferred_order = ["Bedroom", "Living_room", "Bathroom", "Kitchen", "Sauna", "Garage"]
    order_map = {k: i for i, k in enumerate(preferred_order)}
    ordered_items = sorted(sim_dfs.items(), key=lambda item: order_map.get(item[0], len(preferred_order) - 1))

    for name, df in ordered_items:
        t = df["time"].to_numpy(dtype=float)
        v = df["value"].to_numpy(dtype=float)
        series_list.append(np.interp(t_eval, t, v))
        labels.append(name.replace("_", " "))

    fig, ax = plt.subplots()
    ax.stackplot(t_eval, *series_list, labels=labels, alpha=0.82)

    n_days = max(int(length // 24), 1)
    _format_weekday_axis(ax, eval_start_sec, eval_end_sec, n_days, startdate=startdate)

    ax.set_title(title)
    ax.set_xlabel("Weekday")
    ax.set_ylabel(ylabel)
    ax.legend(
        loc="upper center",
        bbox_to_anchor=(0.5, -0.18),
        frameon=True,
        ncol=3,
    )

    fig.tight_layout()
    generic_save_function(
        fig=fig,
        name=os.path.basename(plot_path),
        folder=os.path.dirname(plot_path),
    )


def prepare_simulation_profiles(
    profiles: dict,
    scenario_name: str,
    startdate: pd.Timestamp,
    length: int = 168,
    n_cycles: int = 2,
) -> None:
    """
    Prepare the profiles for the simulation by selecting the proper timeframe and saving them in the proper txt format.
    Also saves the profiles in a subfolder with the name of the scenario in the scenarios_dir folder and generates a plot of each profile 
    for visual inspection of the profiles in the scenario/plots subfolder.

    Args:
        profiles (dict): A dictionary containing all occupancy, power and weather profiles.
        scenario_name (str): The name of the scenario for which the profiles are being prepared. 
            All profiles are saved in a subfolder with the name of the scenario in the scenarios_dir folder.
        startdate (pd.Timestamp): The start date of the simulation.
        length (int): The length of the simulation in hours. Default is 168 hours (1 week).
        n_cycles (int): Number of times the timeframe is repeated consecutively (default 2: warm-up + evaluation).

    Returns:
        None
    """
    startdate = pd.Timestamp(startdate)
    scenario_folder = os.path.join(scenarios_dir, scenario_name)
    plots_folder = os.path.join(scenario_folder, "plots")
    os.makedirs(plots_folder, exist_ok=True)

    # 1. Prepare, save and plot occupancy profiles (seconds)
    occ_sim_dfs = {}
    for name, df in profiles["seconds"]["occupancy"].items():
        sim_df = _prepare_seconds_profile(df, startdate, length=length, n_cycles=n_cycles)
        occ_sim_dfs[name] = sim_df
        out_path = os.path.join(scenario_folder, f"{name}_occupancy.txt")
        _save_dymola_table(sim_df, out_path)
        plot_path = os.path.join(plots_folder, f"{name}_occupancy.png")
        plot_simulation_profile(
            sim_df,
            plot_path,
            title=f"{scenario_name.capitalize()} - {name.replace('_', ' ')} Occupancy",
            ylabel="Occupancy",
            startdate=startdate,
            length=length,
            n_cycles=n_cycles,
        )

    plot_stacked_house_profiles(
        occ_sim_dfs,
        os.path.join(plots_folder, "House_occupancy_stacked.png"),
        title=f"{scenario_name.capitalize()} - Total Occupancy",
        ylabel="Occupancy",
        startdate=startdate,
        length=length,
        n_cycles=n_cycles,
    )
    plot_stacked_house_profiles(
        occ_sim_dfs,
        os.path.join(scenarios_dir, "House_occupancy_stacked.png"),
        title="Total Occupancy",
        ylabel="Occupancy",
        startdate=startdate,
        length=length,
        n_cycles=n_cycles,
    )

    # 2. Prepare, save and plot power profiles (seconds)
    power_sim_dfs = {}
    for name, df in profiles["seconds"]["power"].items():
        sim_df = _prepare_seconds_profile(df, startdate, length=length, n_cycles=n_cycles)
        if name != "EV_charging": # EV chargin profile already included in the garage power profile
            power_sim_dfs[name] = sim_df
        out_path = os.path.join(scenario_folder, f"{name}_power.txt")
        _save_dymola_table(sim_df, out_path)
        plot_path = os.path.join(plots_folder, f"{name}_power.png")
        plot_simulation_profile(
            sim_df,
            plot_path,
            title=f"{scenario_name.capitalize()} - {name.replace('_', ' ')} Power",
            ylabel="Electrical Power (W)",
            startdate=startdate,
            length=length,
            n_cycles=n_cycles,
        )

    plot_stacked_house_profiles(
        power_sim_dfs,
        os.path.join(plots_folder, "House_power_stacked.png"),
        title=f"{scenario_name.capitalize()} - Total Power Demands",
        ylabel="Electrical Power (W)",
        startdate=startdate,
        length=length,
        n_cycles=n_cycles,
    )
    plot_stacked_house_profiles(
        power_sim_dfs,
        os.path.join(scenarios_dir, "House_power_stacked.png"),
        title="Total Power Demands",
        ylabel="Electrical Power (W)",
        startdate=startdate,
        length=length,
        n_cycles=n_cycles,
    )

    # 3. Prepare, save and plot sauna switch profile (seconds, 0/1)
    if profiles["seconds"].get("sauna_switch") is not None:
        sim_df = _prepare_seconds_profile(
            profiles["seconds"]["sauna_switch"], startdate, length=length, n_cycles=n_cycles
        )
        out_path = os.path.join(scenario_folder, "Sauna_switch.txt")
        _save_dymola_table(sim_df, out_path)
        plot_path = os.path.join(plots_folder, "Sauna_switch.png")
        plot_simulation_profile(
            sim_df,
            plot_path,
            title=f"{scenario_name.capitalize()} - Sauna Switch",
            ylabel="Sauna Switch [0/1]",
            startdate=startdate,
            length=length,
            n_cycles=n_cycles,
        )

    # 3b. Prepare, save and plot shower switch profile (seconds)
    if profiles["seconds"].get("shower_switch") is not None:
        sim_df = _prepare_seconds_profile(
            profiles["seconds"]["shower_switch"], startdate, length=length, n_cycles=n_cycles
        )
        out_path = os.path.join(scenario_folder, "Shower_switch.txt")
        _save_dymola_table(sim_df, out_path)
        plot_path = os.path.join(plots_folder, "Shower_switch.png")
        plot_simulation_profile(
            sim_df,
            plot_path,
            title=f"{scenario_name.capitalize()} - Shower Switch",
            ylabel="Shower Switch",
            startdate=startdate,
            length=length,
            n_cycles=n_cycles,
        )

    # 4. Prepare, save and plot weather profiles (hourly -> converted to seconds for Dymola)
    for key, df in profiles["hourly"]["weather"].items():
        sim_df = _prepare_hourly_profile(df, startdate, length=length, n_cycles=n_cycles)
        out_path = os.path.join(scenario_folder, f"{key}_weather.txt")
        _save_dymola_table(sim_df, out_path)
        plot_path = os.path.join(plots_folder, f"{key}_weather.png")
        plot_simulation_profile(
            sim_df,
            plot_path,
            title=f"{scenario_name.capitalize()} - {weather_titles.get(key, key)}",
            ylabel=weather_ylabels.get(key, key),
            startdate=startdate,
            length=length,
            n_cycles=n_cycles,
        )

    # 5. Prepare, save and plot PCM charge window profile (6 warmest hours/day)
    if "temperature" in profiles["hourly"]["weather"]:
        temp_sim_df = _prepare_hourly_profile(
            profiles["hourly"]["weather"]["temperature"],
            startdate,
            length=length,
            n_cycles=n_cycles,
        )
        n_days = max(int((length * n_cycles) // 24), 1)
        _, schedule = make_charge_schedule(
            temp_sim_df["time"].to_numpy(dtype=float),
            temp_sim_df["value"].to_numpy(dtype=float),
            n_days=n_days,
            n_warm_hours=6,
        )
        n_hours = len(schedule)
        pcm_df = pd.DataFrame(
            {
                "time": np.arange(n_hours + 1, dtype=int) * 3600,
                "value": np.append(schedule, 0).astype(int),
            }
        )
        pcm_out_path = os.path.join(scenario_folder, "pcm_charge_window.txt")
        _save_dymola_table(pcm_df, pcm_out_path)
        pcm_plot_path = os.path.join(plots_folder, "pcm_charge_window.png")
        plot_simulation_profile(
            pcm_df,
            pcm_plot_path,
            title=f"{scenario_name.capitalize()} - PCM Charge Window",
            ylabel="Charge Permission [0/1]",
            startdate=startdate,
            length=length,
            n_cycles=n_cycles,
        )


def plot_scenarios_weather_comparison(profiles: dict, scenarios: dict) -> None:
    """
    Create an overarching comparison plot for each weather variable across all
    scenarios and save the plots directly in the top-level `scenarios_dir` folder.
    """
    for key, df in profiles["hourly"]["weather"].items():
        fig, ax = plt.subplots()

        ref_length = 168
        ref_cycles = 2
        for scenario_name, params in scenarios.items():
            startdate = pd.Timestamp(params["startdate"])
            length = int(params.get("length", 168))
            n_cycles = int(params.get("n_cycles", 2))
            ref_length = length
            ref_cycles = n_cycles

            sim_df = _prepare_hourly_profile(df, startdate, length=length, n_cycles=n_cycles)
            period_sec = int(length * 3600)
            eval_start_sec = (max(n_cycles, 1) - 1) * period_sec
            eval_end_sec = max(n_cycles, 1) * period_sec

            times = sim_df["time"].to_numpy(dtype=float)
            values = sim_df["value"].to_numpy(dtype=float)
            inner_mask = (times > eval_start_sec) & (times < eval_end_sec)
            t_eval = np.concatenate(([eval_start_sec], times[inner_mask], [eval_end_sec]))
            v_eval = np.interp(t_eval, times, values)

            label = f"{scenario_name.capitalize()}"
            ax.plot(t_eval, v_eval, linewidth=1.7, label=label)

        period_sec = int(ref_length * 3600)
        eval_start_sec = (max(ref_cycles, 1) - 1) * period_sec
        eval_end_sec = max(ref_cycles, 1) * period_sec
        n_days = max(int(ref_length // 24), 1)
        _format_weekday_axis(ax, eval_start_sec, eval_end_sec, n_days)

        ax.set_title(f"Scenario Comparison - {weather_titles.get(key, key)}")
        ax.set_xlabel("Weekday")
        ax.set_ylabel(weather_ylabels.get(key, key))
        ax.legend(
            loc="upper center",
            bbox_to_anchor=(0.5, -0.18),
            frameon=True,
            ncol=min(max(len(scenarios), 1), 3),
        )

        fig.tight_layout()
        generic_save_function(
            fig=fig,
            name=f"{key}_weather_comparison",
            folder=scenarios_dir,
        )

def cluster_time_series(
    profiles: dict,
    n_clusters: int,
    cluster_names: list[str] | None = None,
    weights: dict[str, float] | None = None,
) -> dict:
    """
    Cluster the time series data using the k-medoids algorithm.

    Args:
        profiles (dict): A dictionary containing all occupancy, power and weather profiles.
        n_clusters (int): The number of clusters to form. Default is 2.
        cluster_names (list[str] | None): Optional custom names for the clusters (sorted from coldest to warmest).
            If None, defaults to ["cluster_1", "cluster_2", ..., f"cluster_{n_clusters}"].
        weights (dict[str, float] | None): Optional column weights for clustering
            (e.g. {"temperature": 3.0, "solar": 1.0}).

    Returns:
        dict: A dictionary containing the clustered time series data for the clusters.
        Format: {cluster_name: {"profiles": data, "mean_temp": float, "cluster_info": info}}
    """
    # Combine all hourly weather profiles into one DataFrame indexed by timestamp
    weather_df = pd.DataFrame(
        {key: df["value"] for key, df in profiles["hourly"]["weather"].items()}
    )

    # Slice to complete Monday-to-Sunday weeks (168h each) so every candidate week starts on Monday 00:00
    monday_mask = (weather_df.index.weekday == 0) & (weather_df.index.hour == 0)
    first_monday = weather_df.index[monday_mask][0]
    remaining_hours = len(weather_df.loc[first_monday:])
    n_full_weeks = remaining_hours // 168
    end_ts = first_monday + pd.Timedelta(hours=n_full_weeks * 168 - 1)
    weekly_weather_df = weather_df.loc[first_monday:end_ts].copy()

    # Run k-medoids clustering via tsam without rescaling so medoids stay true historical weeks
    agg_result = tsam.aggregate(
        weekly_weather_df,
        n_clusters=n_clusters,
        period_duration=168,
        cluster=tsam.ClusterConfig(method="kmedoids", representation="medoid"),
        weights=weights,
        preserve_column_means=False,
    )

    assignments = np.asarray(agg_result.cluster_assignments, dtype=int)
    center_indices = agg_result.clustering.cluster_centers

    # Determine the medoid week index for each cluster
    cluster_entries = []
    for cluster_id in agg_result.period_index:
        if center_indices is not None and cluster_id < len(center_indices):
            medoid_week_idx = int(center_indices[cluster_id])
        else:
            rep_vals = agg_result.cluster_representatives.loc[cluster_id].to_numpy()
            dists = [
                np.linalg.norm(
                    weekly_weather_df.iloc[w * 168 : (w + 1) * 168].to_numpy() - rep_vals
                )
                for w in range(n_full_weeks)
            ]
            medoid_week_idx = int(np.argmin(dists))

        medoid_start = first_monday + pd.Timedelta(weeks=medoid_week_idx)
        medoid_end = medoid_start + pd.Timedelta(hours=167)
        medoid_data = weekly_weather_df.loc[medoid_start:medoid_end].copy()
        mean_temp = (
            float(medoid_data["temperature"].mean())
            if "temperature" in medoid_data
            else float(cluster_id)
        )

        member_weeks = np.where(assignments == cluster_id)[0]
        weight = float(agg_result.cluster_counts.get(cluster_id, len(member_weeks)))

        cluster_entries.append(
            {
                "cluster_id": int(cluster_id),
                "mean_temp": mean_temp,
                "profiles": medoid_data,
                "cluster_info": {
                    "startdate": medoid_start,
                    "enddate": medoid_end,
                    "timeframe": (medoid_start, medoid_end),
                    "medoid_week_index": medoid_week_idx,
                    "mean_temp": mean_temp,
                    "cluster_weight": weight,
                    "cluster_share": weight / n_full_weeks,
                    "week_indices": member_weeks,
                    "week_startdates": [
                        first_monday + pd.Timedelta(weeks=int(w)) for w in member_weeks
                    ],
                },
            }
        )

    # Sort clusters from coldest to warmest
    cluster_entries.sort(key=lambda item: item["mean_temp"])

    if cluster_names is None or len(cluster_names) != len(cluster_entries):
        cluster_names = [f"cluster_{i + 1}" for i in range(len(cluster_entries))]

    clustered_data = {}
    for name, entry in zip(cluster_names, cluster_entries):
        clustered_data[name] = {
            "profiles": entry["profiles"],
            "mean_temp": entry["mean_temp"],
            "cluster_info": entry["cluster_info"],
        }

    return clustered_data


if __name__ == "__main__":
    # Load all profiles
    profiles = load_all_profiles()
    print("Profiles loaded successfully.")

    scenarios = {
        "winter": {
            "startdate": "2022-01-17 00:00:00",
            "length": 168,
            "n_cycles": 2
        },
        "summer": {
            "startdate": "2022-06-06 00:00:00",
            "length": 168,
            "n_cycles": 2
        }
    }

    for scenario_name, scenario_params in scenarios.items():
        prepare_simulation_profiles(
            profiles=profiles,
            scenario_name=scenario_name,
            startdate=scenario_params["startdate"],
            length=scenario_params["length"],
            n_cycles=scenario_params["n_cycles"],
        )

    plot_scenarios_weather_comparison(profiles=profiles, scenarios=scenarios)
    print("Simulation profiles prepared and saved successfully.")

    # Clustering: simply change n_clusters here (e.g. 2, 3, 4, ...)
    n_clusters = 3
    weights = {
    "temperature": 3.0,
    "solar": 1.0,
    "rad_north": 0,
    "rad_east": 0,
    "rad_south": 0,
    "rad_west": 0,
    "wind": 0.5,
}
    
    clustered_weeks = cluster_time_series(profiles, weights = weights, n_clusters=n_clusters)

    print(f"\nClustering completed ({n_clusters} representative weeks, sorted coldest -> warmest):")
    for cluster_name, cluster_data in clustered_weeks.items():
        info = cluster_data["cluster_info"]
        startdate = info["startdate"]
        enddate = info["enddate"]
        mean_temp = cluster_data["mean_temp"]
        mean_temp_c = mean_temp - 273.15
        weight = info["cluster_weight"]
        share = info["cluster_share"]
        print(
            f"{cluster_name} - Start: {startdate}, End: {enddate}, "
            f"Mean Temp: {mean_temp:.2f} K ({mean_temp_c:.1f} °C), "
            f"Weight: {weight:.0f} weeks, Share: {share:.2%}"
        )