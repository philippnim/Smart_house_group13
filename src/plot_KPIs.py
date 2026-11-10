"""
Functions to plot the relevant KPIs and compared them between the different scenarios.

Author: Philipp
"""

from KPIs import KPIs
from load_and_prepare_mat_file import Datahandler

try:
    from config import ReportStyleConfig, generic_save_function, get_repo_root
except ImportError:
    from src.config import ReportStyleConfig, generic_save_function, get_repo_root

ReportStyleConfig().apply_style()

repo_root = get_repo_root()


##################################################
# Code 
##################################################

SCENARIOS = { # mat file names
    "winter_base": "mat file name here",
    "summer_base": "mat file name here",
}

if __name__ == "__main__":
    kpis = dict()  # Dictionary to store KPIs for each scenario
    for scenario_name, mat_file_name in SCENARIOS.items():
        data = Datahandler(mat_file_name)
        c = KPIs(data=data)
        c.calculate_all_kpis()
        kpis[scenario_name] = c
        




