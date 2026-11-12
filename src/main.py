from pathlib import Path
import pandas as pd
import assumptions as A
from KPIs import KPIs, compare_to_baseline

ROOT = Path(__file__).resolve().parent.parent
MAT_DIR = ROOT / "model" / "SmartHouse" / A.MAT_SUBDIR
OUT_DIR = ROOT / "data" / "output" / "kpis"

if __name__ == "__main__":
    results = []
    for name in A.SCENARIOS:
        if not (MAT_DIR / f"{name}.mat").exists():
            print(f"skip {name}: no .mat yet")
            continue
        print(f"--- {name}")
        results.append(KPIs.from_mat(name).calculate_all_kpis())

    res = pd.DataFrame(results)
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    res.to_csv(OUT_DIR / "kpis.csv")
    compare_to_baseline(res).to_csv(OUT_DIR / "kpis_vs_baseline.csv")
    print(res.T.round(2))