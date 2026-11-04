"""
Handling and Generation of the profiles for the simulation for the desired timeframes.

Weather data is taken for the year 2022 for the Location of Lillehammer, Norway.



Author: Philipp
"""
import pandas as pd
import numpy as np
import sys
import os
import tsam #Time series clustering

repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__))) 
data_dir = os.path.join(repo_root, "data")
raw_profiles_dir = os.path.join(data_dir, "raw_profiles")
occupancy_profiles_dir = os.path.join(data_dir, "occupancy")
power_profiles_dir = os.path.join(data_dir, "power")
weather_data_dir = os.path.join(data_dir, "weather")

def load_occupancy_profile(file_name: str) -> pd.DataFrame:
    """
    Load the occupancy profile from a CSV file.

    Args:
        file_name (str): The filename of the CSV file containing the occupancy profile.

    """
    pass

def load_weather_data(file_name: str) -> pd.DataFrame:
    """
    Load the weather data from a txt file.

    Args:
        file_name (str): The filename of the txt file containing the weather data.

    """
    pass


def load_power_profile(file_name: str) -> pd.DataFrame:
    """
    Load the power profile from a CSV file.

    Args:
        file_name (str): The filename of the CSV file containing the power profile.

    Returns:
        pd.DataFrame: The loaded power profile.

    """
    pass


if __name__ == "__main__":
    pass