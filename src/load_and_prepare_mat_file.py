
"""
Load Dymola MAT files and prepare simulation data for KPI analysis.

Author: Philipp
"""
from functools import cached_property
from pathlib import Path

import DyMat
import numpy as np
import pandas as pd


class Datahandler:
    def __init__(self, mat_file_name: str):
        self.repo_root = Path(__file__).resolve().parent.parent

        if not mat_file_name.lower().endswith(".mat"):
            mat_file_name += ".mat"

        self.mat_file_path = self.repo_root / "model" / "SmartHouse" / mat_file_name

        if not self.mat_file_path.is_file():
            raise FileNotFoundError(self.mat_file_path)

    @cached_property
    def data(self):
        """Load the Dymola MAT file once."""
        return DyMat.DyMatFile(str(self.mat_file_path))

    @cached_property
    def variables(self) -> list[str]:
        """All available variable names."""
        return sorted(self.data.names())

    def search_variables(self, keyword: str) -> list[str]:
        """Find variables by part of their name."""
        return [name for name in self.variables if keyword.lower() in name.lower()]

    def export_variables(self, output_path: Path | None = None):
        """Export all variable names to a TXT file."""
        if output_path is None:
            folder = self.repo_root / "data" / "output" / "variable_overview"
            folder.mkdir(parents=True, exist_ok=True)
            output_path = folder / f"{self.mat_file_path.stem}_variables.txt"

        Path(output_path).write_text("\n".join(self.variables) + "\n", encoding="utf-8")

    def get_signal(self, variable: str) -> pd.DataFrame:
        """Return a signal with its original time axis."""
        if variable not in self.variables:
            raise KeyError(f"Variable not found: {variable}")

        time = np.asarray(self.data.abscissa(variable, valuesOnly=True), dtype=float).ravel()
        values = np.asarray(self.data.data(variable), dtype=float).ravel()

        if len(time) != len(values):
            raise ValueError(f"Invalid signal length: {variable}")

        return pd.DataFrame({"Time": time, variable: values})

    def to_dataframe(
        self,
        variables: list[str],
        dt: float = 300, # 5 minutes
        start: float | None = None,
        end: float | None = None,
        step_variables: set[str] | None = None,
    ) -> pd.DataFrame:
        """Resample selected signals onto a common time grid."""
        if not variables:
            raise ValueError("Select at least one variable.")
        if dt <= 0:
            raise ValueError("dt must be positive.")

        step_variables = step_variables or set()
        signals = {name: self.get_signal(name) for name in variables}

        # Use the shared time interval by default
        common_start = max(signal["Time"].iloc[0] for signal in signals.values())
        common_end = min(signal["Time"].iloc[-1] for signal in signals.values())

        start = common_start if start is None else float(start)
        end = common_end if end is None else float(end)

        if start < common_start or end > common_end or start >= end:
            raise ValueError("Requested time interval is not covered.")

        grid = np.arange(start, end, dt)
        if len(grid) == 0 or not np.isclose(grid[-1], end):
            grid = np.append(grid, end)
        result = pd.DataFrame({"Time": grid})

        for name, signal in signals.items():
            time = signal["Time"].to_numpy()
            values = signal[name].to_numpy()

            if np.any(np.diff(time) < 0):
                raise ValueError(f"Unsorted time axis: {name}")

            # Keep the last value at duplicate event timestamps
            keep = np.r_[np.diff(time) != 0, True]
            time, values = time[keep], values[keep]

            if len(time) == 1:
                result[name] = values[0]
            elif name in step_variables:
                indices = np.searchsorted(time, grid, side="right") - 1
                result[name] = values[np.clip(indices, 0, len(values) - 1)]
            else:
                result[name] = np.interp(grid, time, values)

        return result



if __name__ == "__main__":
    # Example usage
    handler = Datahandler("Simulation_Summer.mat")
    print("Number of variables:", len(handler.variables))


    # Export variable names to a text file
    handler.export_variables()

    # Get a specific signal
    variable_name = "houseEnviroment.houseVentilation.Sauna.unheatedRoom.Temperature_sensor"
    signal_df = handler.get_signal(variable_name)
    print(f"\nSignal for {variable_name}:")
    print(signal_df.head())

    # Resample selected signals onto a common time grid
    selected_vars = ["houseEnviroment.houseVentilation.Sauna.unheatedRoom.Temperature_sensor", 
                     "houseEnviroment.heatPump_ThermalStorage.electricalBoiler.sensor_T.sensorValue"]
    resampled_df = handler.to_dataframe(selected_vars, dt=300)
    print(f"\nResampled signals:")
    print(resampled_df.head())
