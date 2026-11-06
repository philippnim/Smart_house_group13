"""
This file serves as a module to determine the KPIs of the individual scenarios. It contains funtions to
1. Total energy Consumption (el. and heat)
2. Calculate CO2 emissions and Energy Cost by Scenario and compare them
3. Determine the Autaky and share of Renewable Energy (Using for both weeks the scenario without PV/Battery/Wind as a baseline) 
    and grid feed-in and demand. 

Author: Philipp
"""

from load_and_prepare_mat_file import Datahandler


class KPIs:

    def __init__(self, data: Datahandler):
        pass


    def calculate_all_kpis(self):
        """Calculate all KPIs for the given scenario."""
        pass

    
    # TODO: Add functions






if __name__ == "__main__":

    try:
        example_KPIs = KPIs()

    except Exception as e:
        print(f"An error occurred instanciating a object: {e}")