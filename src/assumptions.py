"""
assumptions.py
Basic assumptions for all the KPIs are defined here.
Each value needs a source to be referenced in the report
"""


# Evaluation period (1 week adjustment)
SIM_STOP_TIME = 1209600
EVAL_START = 604800
EVAL_STOP = 1209600
DT = 300
# Folder with simulation results, relative to model/SmartHouse/
MAT_SUBDIR = "simulation_results"


# Assumptions for electricity price and grid contract
PRODUCTION = 0.014 # NOK/kWh

PRICE_SUMMER_NOK_PER_KWH = [
    # Mo 11.07.
    1.95, 1.93, 1.93, 1.92, 1.92, 1.93, 2.03, 2.22, 2.45, 2.49, 2.44, 2.41,
    2.40, 2.37, 2.32, 2.32, 2.38, 2.43, 2.41, 2.40, 2.35, 2.33, 2.29, 2.22,
    # Di 12.07.
    2.40, 2.38, 2.34, 2.30, 2.26, 2.33, 2.39, 2.43, 2.43, 2.41, 2.42, 2.41,
    2.40, 2.39, 2.39, 2.39, 2.39, 2.24, 2.30, 2.31, 2.40, 2.29, 2.19, 2.15,
    # Mi 13.07.
    2.27, 2.25, 2.24, 2.22, 2.24, 2.25, 2.29, 2.41, 2.41, 2.42, 2.41, 2.37,
    2.28, 2.25, 2.19, 1.94, 1.95, 1.99, 2.24, 2.28, 2.32, 2.26, 2.25, 2.25,
    # Do 14.07.
    2.14, 2.11, 2.11, 2.10, 2.10, 2.10, 2.13, 2.17, 2.14, 2.18, 2.20, 2.24,
    2.25, 2.25, 2.15, 2.11, 2.10, 2.11, 2.14, 2.15, 2.19, 2.16, 2.16, 2.12,
    # Fr 15.07.
    1.94, 1.76, 1.75, 1.75, 1.79, 1.79, 2.19, 2.15, 2.14, 2.15, 2.08, 2.08,
    2.12, 2.14, 2.13, 2.14, 2.14, 2.14, 2.14, 2.13, 2.12, 2.11, 2.06, 2.03,
    # Sa 16.07.
    2.13, 2.11, 2.10, 2.09, 1.99, 1.93, 1.95, 2.06, 1.78, 0.70, 0.47, 0.38,
    0.14, 0.03, 0.02, 0.02, 0.01, 0.71, 2.12, 2.17, 2.16, 2.15, 2.15, 2.14,
    # So 17.07.
    2.06, 2.04, 2.03, 2.02, 2.03, 2.04, 2.08, 2.08, 2.08, 2.02, 1.66, 1.54,
    1.19, 1.13, 1.56, 1.96, 2.07, 2.07, 2.07, 2.06, 2.06, 2.05, 1.99, 2.02,
]
assert len(PRICE_SUMMER_NOK_PER_KWH) == 168

PRICE_WINTER_NOK_PER_KWH = [
    # Mo 17.01.
    1.51, 1.49, 1.48, 1.49, 1.50, 1.52, 1.55, 1.57, 1.62, 1.61, 1.60, 1.59,
    1.59, 1.62, 1.68, 1.74, 1.80, 1.88, 1.87, 1.80, 1.79, 1.77, 1.74, 1.73,
    # Di 18.01.
    1.76, 1.74, 1.73, 1.73, 1.74, 1.81, 1.93, 3.23, 3.47, 3.00, 2.42, 1.98,
    1.90, 1.88, 1.86, 1.86, 1.87, 1.88, 1.84, 1.79, 1.74, 1.74, 1.71, 1.66,
    # Mi 19.01.
    1.71, 1.68, 1.68, 1.66, 1.66, 1.69, 1.71, 1.73, 1.74, 1.74, 1.73, 1.73,
    1.72, 1.72, 1.72, 1.71, 1.71, 1.71, 1.70, 1.67, 1.63, 1.64, 1.57, 1.49,
    # Do 20.01.
    1.58, 1.53, 1.48, 1.44, 1.44, 1.54, 1.62, 1.64, 1.69, 1.67, 1.65, 1.65,
    1.61, 1.60, 1.64, 1.65, 1.70, 1.72, 1.70, 1.70, 1.70, 1.70, 1.65, 1.60,
    # Fr 21.01.
    1.60, 1.59, 1.60, 1.61, 1.61, 1.65, 1.67, 1.80, 1.82, 1.81, 1.81, 1.79,
    1.78, 1.82, 1.79, 1.81, 1.83, 1.86, 1.85, 1.79, 1.72, 1.69, 1.68, 1.60,
    # Sa 22.01.
    1.60, 1.56, 1.56, 1.58, 1.60, 1.61, 1.63, 1.73, 1.79, 1.81, 1.83, 1.83,
    1.83, 1.83, 1.82, 1.82, 1.84, 1.87, 1.87, 1.83, 1.81, 1.78, 1.74, 1.69,
    # So 23.01.
    1.65, 1.65, 1.65, 1.65, 1.65, 1.66, 1.66, 1.67, 1.68, 1.73, 1.76, 1.77,
    1.77, 1.76, 1.75, 1.76, 1.79, 1.82, 1.80, 1.76, 1.70, 1.67, 1.66, 1.65,
]
assert len(PRICE_WINTER_NOK_PER_KWH) == 168


PRICES = {"summer": PRICE_SUMMER_NOK_PER_KWH, "winter": PRICE_WINTER_NOK_PER_KWH}


# CO2
CO2_EMISSIONS_NO_GRID = 30.0 # g/kWh
CO2_EMISSIONS_EU_GRID = 256.0355 # g/kWh
CO2_EMISSIONS_RENEWABLE = 0.0 # g/kWh

# Comfort KPIs

# Thermal comfort acc. to EN 16798-1:2019, Category II (residential):
# lower limit = setpoint − 1 K (→ 20 °C living spaces), upper limit 26 °C
COMFORT_BELOW_K = 1.0
COMFORT_T_MAX_C = 26.0

SETPOINTS_C = {
    "LivingRoom": 21.0,
    "Bedroom": 21.0,
    "bathroom": 23.0,
    "Kitchen": 21.0,
}

HUM_BAND = (0.30, 0.60) #rel. humidity



# Flags exakt wie in model/SmartHouse/<season>_<name>.mo (Stand main)
# useBoiler=True in allen Szenarien (Boiler = Backup)
def _s(hp, pcm, pv, wind, bat):
    return dict(useHP=hp, useBoiler=True, usePCM=pcm,
                enablePV=pv, enableWind=wind, enableBattery=bat)

_SCENARIO_TEMPLATES = {
    #                         hp     pcm    pv     wind   bat
    "base":                _s(False, False, False, False, False),
    "pv":                  _s(False, False, True,  False, False),
    "wind":                _s(False, False, False, True,  False),
    "hp":                  _s(True,  False, False, False, False),
    "hp_latent":           _s(True,  True,  False, False, False),
    "hp_pv":               _s(True,  False, True,  False, False),
    "hp_wind":             _s(True,  False, False, True,  False),
    "hp_pv_bat":           _s(True,  False, True,  False, True),
    "hp_wind_bat":         _s(True,  False, False, True,  True),
    "hp_pv_wind_bat":      _s(True,  False, True,  True,  True),
    "hp_pv_wind_bat_latent": _s(True, True, True,  True,  True),  
}

SCENARIOS = {
    f"{season}_{name}": dict(season=season, **flags)
    for season in ("winter", "summer")
    for name, flags in _SCENARIO_TEMPLATES.items()
}

BASELINE = {"winter": "winter_base", "summer": "summer_base"}

