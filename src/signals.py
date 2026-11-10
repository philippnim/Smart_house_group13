"""
The signals from the modelica file can change with every adjustment
in the model, so this file is used to define them sepearetly and
make it easier to change
"""


SIGNALS = {
    "E_import":  "houseEnviroment.electricSystem.pV_Battery_Simple.E_import.y",    # kWh
    "E_export":  "houseEnviroment.electricSystem.pV_Battery_Simple.E_export.y",    # kWh
    "P_import":  "houseEnviroment.electricSystem.pV_Battery_Simple.importPower.y", # W
    "P_export":  "houseEnviroment.electricSystem.pV_Battery_Simple.exportPower.y", # W
    "P_PV":      "houseEnviroment.electricSystem.pV_Battery_Simple.P_PV",          # W
    "P_wind":    "houseEnviroment.electricSystem.pV_Battery_Simple.homeWindTurbine.P_wind",  # W
    "P_load":    "houseEnviroment.electricSystem.powerLoad",                       # W
    "E_wind": "houseEnviroment.electricSystem.pV_Battery_Simple.homeWindTurbine.E_wind.y",  # kWh
    "E_PV":   "houseEnviroment.electricSystem.pV_Battery_Simple.E_PV",                      # J!
    "SOC":       "houseEnviroment.electricSystem.pV_Battery_Simple.Battery_SOC.y", # 
    "heat_flow": "houseEnviroment.heatPump_ThermalStorage.HeatFlow",               # W
    "P_el_heat": "houseEnviroment.heatPump_ThermalStorage.P_el",                   # W
    "T_room":    "houseEnviroment.houseVentilation.{room}.Temperature_sensor",     # K!
}

