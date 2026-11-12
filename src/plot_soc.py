"""Battery operation in the summer week (HP + PV + Bat): power balance and SOC."""
import sys
from pathlib import Path

import matplotlib.pyplot as plt

ROOT = Path(__file__).resolve().parent.parent
if len(sys.argv) > 1:
    ROOT = Path(sys.argv[1])
OUT = Path(sys.argv[2]) if len(sys.argv) > 2 else ROOT / "data" / "output" / "plots"
sys.path.insert(0, str(ROOT / "src"))

import assumptions as A
from config import ReportStyleConfig, generic_save_function
from load_and_prepare_mat_file import Datahandler
from profiles import _format_weekday_axis
from signals import SIGNALS

ReportStyleConfig().apply_style()

SCENARIO = "summer_hp_pv_bat"
Y_MAX = 10  # kW, sauna peaks above are clipped and annotated
keys = ["P_PV", "P_load", "P_import", "P_export", "SOC"]

data = Datahandler(f"{SCENARIO}.mat")
df = data.to_dataframe([SIGNALS[k] for k in keys], dt=A.DT, start=A.EVAL_START, end=A.EVAL_STOP)
df = df.rename(columns={SIGNALS[k]: k for k in keys})
t = df.Time.to_numpy()
kW = lambda c: df[c].to_numpy() / 1e3

fig, (ax1, ax2) = plt.subplots(2, 1, sharex=True, figsize=(6.3, 4.6),
                               gridspec_kw={"height_ratios": [2, 1]})

# --- top: power balance ---
ax1.fill_between(t, kW("P_PV"), color="#f2a900", alpha=0.45, lw=0, label="PV generation")
ax1.fill_between(t, kW("P_import"), color="#cc071e", alpha=0.35, lw=0, label="Grid import")
ax1.fill_between(t, -kW("P_export"), color="#57ab27", alpha=0.5, lw=0, label="Grid export")
ax1.plot(t, kW("P_load"), color="#00549f", lw=0.7, label="Total electric load")
ax1.axhline(0, color="black", lw=0.5)
ax1.set_ylim(-4, Y_MAX)
ax1.set_ylabel("Power (kW)")

# annotate clipped peaks (one label per day)
load = kW("P_load")
for d in range(7):
    m = (t >= A.EVAL_START + d * 86400) & (t < A.EVAL_START + (d + 1) * 86400)
    if load[m].max() > Y_MAX:
        i = load[m].argmax()
        ax1.annotate(f"{load[m][i]:.0f} kW", xy=(t[m][i], Y_MAX), xytext=(0, -9),
                     textcoords="offset points", ha="center", fontsize=7)

# --- bottom: SOC ---
ax2.plot(t, df.SOC * 100, color="#612158", lw=1.2, label="Battery SOC")
for lim in (10, 90):
    ax2.axhline(lim, color="gray", ls="--", lw=0.7)
ax2.set_ylim(0, 100)
ax2.set_ylabel("SOC (%)")

for ax in (ax1, ax2):
    _format_weekday_axis(ax, A.EVAL_START, A.EVAL_STOP, 7)

h1, l1 = ax1.get_legend_handles_labels()
h2, l2 = ax2.get_legend_handles_labels()
fig.legend(h1 + h2, l1 + l2, loc="lower center", ncol=3, frameon=True,
           bbox_to_anchor=(0.5, -0.04), fontsize=8)
fig.tight_layout(rect=(0, 0.09, 1, 1))

generic_save_function(fig, f"{SCENARIO}_soc", str(OUT))
print("saved to", OUT)
