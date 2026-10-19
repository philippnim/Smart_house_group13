# Smart_house_group13
Github repository for handling the Dymola Project

Report link : https://www.overleaf.com/project/6ade149ccb7fef15df08fa6c/share#b341c1f47d9812f3b2ec4252a0e09c1e565b0f95b71dc271
This repository contains the simulation models and analysis scripts for a smart house energy model for group 13. The project integrates physical building modeling using Modelica (Dymola) with data processing and visualization in Python.

The building is simulated using weather data from Lillehammer - Sætherengen

## Repository Structure

* **`docs/`**: Project assignments and reference materials for building modeling.
* **`data/`**: Contains required datasets
* **`modelica/`**: Modelica source code (`.mo` files) for the smart house and room components.
* **`plots/`**: Output directory for generated visualizations.
* **`src/`**: Python scripts for data processing, simulation control, and plotting.

## Prerequisites

* **Dymola**: Required to compile and simulate the Modelica models.
* **Python 3.14+**: Required for data analysis and visualization.

## Setup and Installation

### Python:


1. **Clone the repository** to your local machine and navigate into it.

2. **Create and activate a virtual environment** (recommended). 
   You can set this up through your preferred IDE (like VS Code or PyCharm), or manually via your terminal:

   ```bash
   # Create the virtual environment
   python -m venv .venv

   # Activate it on Windows:
   .venv\Scripts\activate

   # Activate it on macOS/Linux:
   source .venv/bin/activate

3. Install the project dependencies using the `pyproject.toml` configuration from the root directory:
   ```bash
   pip install -e .

### Dymola:
1. Open Dymola on your machine.
2. Set the Working Directory in Dymola to the `model/` folder within your cloned repository. This ensures that any output files are generated in the correct folder.
3. Load the Models by navigating to File > Open and selecting the `.mo` files 
4. Everything else is done within Dymola