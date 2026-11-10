"""
This file serves as a module to determine the KPIs of the individual scenarios. It contains funtions to
1. Total energy Consumption (el. and heat)
2. Calculate CO2 emissions and Energy Cost by Scenario and compare them
3. Determine the Autaky and share of Renewable Energy (Using for both weeks the scenario without PV/Battery/Wind as a baseline) 
    and grid feed-in and demand. 

Prep: the simulation reults (.mat) need to be in /model/SmartHouse/

Author: Janik
"""
import numpy as np
import pandas as pd
from signals import SIGNALS
import assumptions as A
from load_and_prepare_mat_file import Datahandler


class KPIs:

    def __init__(self, scenario: str, df: pd.DataFrame):
        self.scenario = scenario
        self.season = A.SCENARIOS[scenario]["season"]
        self.df = df


    #------ Load Data, needs .mat file -------
    @classmethod
    def from_mat(cls, scenario: str) -> "KPIs":
        """Create a KPIs object from a .mat file for the given scenario."""
        data = Datahandler(f"{scenario}.mat")
    
        paths = {k: v for k, v in SIGNALS.items() if k != "T_room"}
        paths |= {f"T_room_{r}": SIGNALS["T_room"].format(room=r) for r in A.SETPOINTS_C}

        available = {k: v for k, v in paths.items() if v in data.variables}
        df = data.to_dataframe(list(available.values()), dt=A.DT,
                               start=A.EVAL_START, end=A.EVAL_STOP)
        df = df.rename(columns={v: k for k, v in available.items()})

        print(set(paths) - set(available)) # check to see if read-in was succesfull. correct: set(). if there anything else, the signals were not found at the values were set to 0. Bad

        for k in paths:
            if k not in df:
                df[k] = np.nan if k.startswith("T_") else 0.0
        return cls(scenario, df)

    def _delta(self, col: str) -> float:
        return self.df[col].iloc[-1] - self.df[col].iloc[0]

    def _hourly(self, col: str) -> np.ndarray:
        on_hour = self.df.Time % 3600 == 0
        return np.diff(self.df.loc[on_hour, col].to_numpy())


    # ------ Energy -------
    def energy_import_export(self) -> dict:
        return {"E_import_kWh": self._delta("E_import"), "E_export_kWh": self._delta("E_export")}

    def heating_demand(self) -> dict:
        """Calculate the total heating demand for the given scenario."""
        return {"Q_heat_kWh": np.trapezoid(self.df.heat_flow, self.df.Time) / 3.6e6}

    def renewable_share(self) -> dict: 
        """Calculate the share of renewable energy for the given scenario."""
        E_gen  = self._delta("E_PV") / 3.6e6 + self._delta("E_wind")
        E_exp  = self._delta("E_export")
        E_load = np.trapz(self.df.P_load, self.df.Time) / 3.6e6
        return {"E_gen_kWh": E_gen,
            "self_consumption": (E_gen - E_exp) / E_gen if E_gen > 0 else np.nan,
            "autarky": 1 - self._delta("E_import") / E_load if E_load > 0 else np.nan}

    # ------ Costs / CO2 -------
    def cost(self) -> dict:
        """Calculate the total cost of electricity consumption for the given scenario."""
        cost_imp = (self._hourly("E_import") * np.array(A.PRICES[self.season])).sum()
        rev_exp = self._delta("E_export") * A.PRODUCTION
        return {"cost_import_NOK": cost_imp, "revenue_export_NOK": rev_exp, "cost_net_NOK": cost_imp - rev_exp}


    def co2(self) -> dict:
        """Calculate the total CO2 emissions for the given scenario."""
        E_imp = self._delta("E_import")
        return {"CO2_NO_kg": E_imp * A.CO2_EMISSIONS_NO_GRID / 1000,
            "CO2_EU_kg": E_imp * A.CO2_EMISSIONS_EU_GRID / 1000}
    
    # ----- Power -------
    def peaks(self) -> dict:
        """Calculate the peak power import and export for the given scenario."""
        peak_import_kW = self._hourly("E_import").max()
        peak_export_kW = self._hourly("E_export").max()
        return{"peak_import_kW": peak_import_kW, "peak_export_kW": peak_export_kW}

    # ---- Comfort -------
    def comfort(self) -> dict:
        """Calculate the comfort KPIs for the given scenario."""
        out = {}
        for room, sp in A.SETPOINTS_C.items():
            dev = (self.df[f"T_room_{room}"] - 273.15 - sp).abs()
            out[f"comfort_{room}_pct"] = (dev <= A.COMFORT_BAND).mean() * 100
            out[f"discomfort_{room}_Kh"] = (dev - A.COMFORT_BAND).clip(lower=0).sum() * A.DT / 3600
        return out

    #--------------------------

    def calculate_all_kpis(self):
        """Calculate all KPIs for the given scenario."""
        out = {}
        for f in [self.energy_import_export, self.heating_demand, self.renewable_share, self.cost, self.co2, self.peaks, self.comfort]:
            out.update(f())
        return pd.Series(out, name=self.scenario)


def compare_to_baseline(results: pd.DataFrame) -> pd.DataFrame:
    """Compare the KPIs of the given scenario to the baseline scenario."""
    rows = []
    for name, row in results.iterrows():
        base = results.loc[A.BASELINE[A.SCENARIOS[name]["season"]]]
        rows.append((row - base).rename(name))
    return pd.DataFrame(rows)


if __name__ == "__main__":
    k = KPIs.from_mat("winter_base")
    print(k.calculate_all_kpis())