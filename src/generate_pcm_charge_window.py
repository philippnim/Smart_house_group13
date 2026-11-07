#!/usr/bin/env python3
"""Generate a Dymola charge permission table for the 6 warmest hours per day.

Example from repository root:
  python generate_pcm_charge_window.py data/scenarios/summer/temperature_weather.txt --days 7
  python generate_pcm_charge_window.py data/scenarios/winter/temperature_weather.txt --days 14

Output: pcm_charge_window.txt in the same directory as the input.
"""
from pathlib import Path
import argparse
import re
import numpy as np


def read_dymola_table(path):
    rows = []
    for line in Path(path).read_text(encoding="utf-8-sig").splitlines():
        line = line.strip()
        if not line or line.startswith(("#", "//")) or line.lower().startswith("double"):
            continue
        parts = re.split(r"[\s;,]+", line)
        if len(parts) >= 2:
            try:
                rows.append((float(parts[0]), float(parts[1])))
            except ValueError:
                continue
    if len(rows) < 2:
        raise ValueError(f"No numeric time/temperature pairs in {path}")
    a = np.array(rows, dtype=float)
    if not np.all(np.diff(a[:, 0]) > 0):
        raise ValueError("Temperature timestamps must be strictly increasing")
    if a[0, 0] > 0:
        raise ValueError("Weather table must include the start of the simulation (t=0)")
    return a[:, 0], a[:, 1]


def make_charge_schedule(times, temperatures, n_days, n_warm_hours):
    n_hours = n_days * 24
    sample_times = np.arange(n_hours, dtype=float) * 3600
    if sample_times[-1] > times[-1]:
        raise ValueError("Temperature table does not cover the requested period")
    hourly_temp = np.interp(sample_times, times, temperatures)
    selected = np.zeros(n_hours, dtype=int)
    for day in range(n_days):
        start = day * 24
        # Stable tie breaking: earlier hour wins for identical temperatures.
        ranked = sorted(range(24), key=lambda h: (-hourly_temp[start+h], h))
        for hour in ranked[:n_warm_hours]:
            selected[start + hour] = 1
    return hourly_temp, selected


def write_dymola_table(path, selected):
    n_hours = len(selected)
    # Last row at t_end is 0 to close the final interval.
    with Path(path).open("w", encoding="utf-8") as out:
        out.write("#1\n")
        out.write(f"double data({n_hours+1},2)\n")
        for hour, enabled in enumerate(selected):
            out.write(f"{3600*hour} {enabled}\n")
        out.write(f"{3600*n_hours} 0\n")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("weather_file", type=Path,
                        help="Dymola temperature_weather.txt with table named data")
    parser.add_argument("--days", type=int, default=None,
                        help="Number of complete 24-hour days (7 summer, 14 winter)")
    parser.add_argument("--hours", type=int, default=6,
                        help="Number of warmest hours per day (default 6)")
    args = parser.parse_args()
    times, temps = read_dymola_table(args.weather_file)
    if not 1 <= args.hours <= 24:
        parser.error("--hours must be 1..24")
    # If the final timestamp is 23:00, it still covers all hours of that day.
    days = args.days or int((times[-1] + 3600) // 86400)
    if days < 1:
        parser.error("Weather file contains less than one complete day")
    hourly_temp, schedule = make_charge_schedule(times, temps, days, args.hours)
    output = args.weather_file.with_name("pcm_charge_window.txt")
    write_dymola_table(output, schedule)
    print(f"Created: {output} ({days} days, {args.hours} charging hours/day)")
    for day in range(days):
        hours = np.flatnonzero(schedule[day*24:(day+1)*24])
        msg = ", ".join(f"{h:02d}-{h+1:02d}" for h in hours)
        print(f"  Day {day+1}: {msg}")


if __name__ == "__main__":
    main()
