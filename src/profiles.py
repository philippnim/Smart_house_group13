"""
Handling and Generation of the profiles for the simulation for the desired timeframes.

Weather data is taken for the year 2022 for the Location of Lillehammer, Norway.



Author: Philipp
"""
import pandas as pd
import numpy as np
import sys
import os

repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__))) 

def load_occupancy_profile(file_name: str) -> pd.DataFrame:
    """
    Load the occupancy profile from a CSV file.

    Args:
        file_name (str): The path to the CSV file containing the occupancy profile.

    """
    pass


if __name__ == "__main__":
    print(repo_root)