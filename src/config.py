import io
import os
import shutil
import subprocess
import tempfile
import time
import warnings
from typing import ClassVar

import matplotlib
import matplotlib.pyplot as plt
from pydantic import BaseModel, Field

try:
    import scienceplots  # noqa: F401
except ImportError:
    pass

try:
    import RWTHColors  # noqa: F401
except ImportError:
    pass

_LATEX_WARNING_SHOWN = False
_PGF_CHECKED = False
_PGF_AVAILABLE = False


def _ensure_pgf_ready() -> bool:
    """
    Verify once per Python session whether `pdflatex` works with the configured `pgf.preamble`
    (e.g. `\\usepackage{siunitx}`).
    - If `siunitx` (or another preamble package) is missing in MiKTeX/TeXLive or times out,
      automatically falls back to an empty `pgf.preamble` so `.pgf` files can still be exported.
    - If `pdflatex` is missing or broken altogether, disables `.pgf` export cleanly.
    """
    global _PGF_CHECKED, _PGF_AVAILABLE, _LATEX_WARNING_SHOWN
    if _PGF_CHECKED:
        return _PGF_AVAILABLE
    _PGF_CHECKED = True

    if shutil.which("pdflatex") is None:
        if not _LATEX_WARNING_SHOWN:
            warnings.warn(
                "pdflatex was not found in PATH. Skipping .pgf export (saving .png only).",
                RuntimeWarning,
                stacklevel=3,
            )
            _LATEX_WARNING_SHOWN = True
        _PGF_AVAILABLE = False
        return False

    preamble = plt.rcParams.get("pgf.preamble", "")

    def _test_compile(tex_preamble: str) -> bool:
        tex_doc = (
            "\\documentclass{minimal}\n"
            f"{tex_preamble}\n"
            "\\begin{document}\n"
            "test\n"
            "\\end{document}\n"
        )
        with tempfile.TemporaryDirectory() as tmpdir:
            tex_file = os.path.join(tmpdir, "pgf_check.tex")
            with open(tex_file, "w", encoding="utf-8") as f:
                f.write(tex_doc)
            try:
                res = subprocess.run(
                    ["pdflatex", "-interaction=nonstopmode", "-halt-on-error", "pgf_check.tex"],
                    cwd=tmpdir,
                    stdout=subprocess.PIPE,
                    stderr=subprocess.PIPE,
                     stdin=subprocess.DEVNULL,
                    timeout=12,
                )
                return res.returncode == 0
            except Exception:
                return False

    # 1. Test with configured preamble (e.g. \usepackage{siunitx})
    if _test_compile(preamble):
        _PGF_AVAILABLE = True
        return True

    # 2. If a package like siunitx is missing in MiKTeX, test without custom preamble
    if preamble and _test_compile(""):
        plt.rcParams["pgf.preamble"] = ""
        plt.rcParams["text.latex.preamble"] = ""
        warnings.warn(
            f"LaTeX preamble '{preamble}' failed (missing MiKTeX package?). "
            "Falling back to empty preamble so .pgf export still works.",
            RuntimeWarning,
            stacklevel=3,
        )
        _PGF_AVAILABLE = True
        return True

    # 3. pdflatex cannot compile even a minimal document
    if not _LATEX_WARNING_SHOWN:
        warnings.warn(
            "pdflatex is installed but failed to compile a minimal document. "
            "Skipping .pgf export (saving .png only).",
            RuntimeWarning,
            stacklevel=3,
        )
        _LATEX_WARNING_SHOWN = True
    _PGF_AVAILABLE = False
    return False

###############################################################################
# Plotting configuration and logic
###############################################################################


class ReportStyleConfig(BaseModel):
    """Report/Scientific style configuration using Pydantic validation"""

    # Default figure size (width, height)
    FIG_SIZE: ClassVar[tuple[float, float]] = (6, 3.5)

    figure_figsize: tuple[float, float] = Field(
        default=FIG_SIZE, description="Figure size in inches"
    )
    font_size: int = Field(default=11, description="Base font size")
    axes_titlesize: int = Field(default=11, description="Axes title font size")
    axes_labelsize: int = Field(default=11, description="Axes label font size")
    xtick_labelsize: int = Field(default=9, description="X-axis tick label size")
    ytick_labelsize: int = Field(default=9, description="Y-axis tick label size")
    legend_fontsize: int = Field(default=10, description="Legend font size")
    use_pgf_backend: bool = Field(
        default=False,
        description="Only set global backend to 'pgf' if explicitly desired; savefig('.pgf') works without it.",
    )

    def apply_style(self):
        """Apply report style to matplotlib"""
        global _PGF_CHECKED
        _PGF_CHECKED = False
        has_latex = shutil.which("pdflatex") is not None

        # Select available styles gracefully (fall back to 'no-latex' if pdflatex is missing)
        available_styles = plt.style.available
        styles_to_use = []
        if "science" in available_styles:
            styles_to_use.append("science")
            if not has_latex and "no-latex" in available_styles:
                styles_to_use.append("no-latex")
        if "rwth" in available_styles:
            styles_to_use.append("rwth")

        if styles_to_use:
            plt.style.use(styles_to_use)

        if self.use_pgf_backend and has_latex:
            matplotlib.use("pgf")

        # Base configuration
        style_config = {
            "figure.figsize": self.figure_figsize,
            "font.family": "serif",
            "text.usetex": False,  # Keep PNG rendering fast & robust; PGF export still uses pdflatex
            "pgf.texsystem": "pdflatex",
            "pgf.rcfonts": False,
            "pgf.preamble": r"\usepackage[utf8]{inputenc}" + "\n" + r"\usepackage[T1]{fontenc}" + "\n" + r"\usepackage{siunitx}",
            "text.latex.preamble": r"\usepackage[utf8]{inputenc}" + "\n" + r"\usepackage[T1]{fontenc}" + "\n" + r"\usepackage{siunitx}",
            "font.size": self.font_size,
            "axes.titlesize": self.axes_titlesize,
            "axes.labelsize": self.axes_labelsize,
            "xtick.labelsize": self.xtick_labelsize,
            "ytick.labelsize": self.ytick_labelsize,
            "legend.fontsize": self.legend_fontsize,
        }

        plt.rcParams.update(style_config)

        return self


def _write_bytes_with_retry(filepath: str, data: bytes, retries: int = 5) -> None:
    """Write binary data with retry loop to avoid transient Windows/OneDrive file locks."""
    for attempt in range(retries):
        try:
            with open(filepath, "wb") as f:
                f.write(data)
            return
        except OSError:
            if attempt < retries - 1:
                try:
                    if os.path.exists(filepath):
                        os.remove(filepath)
                except OSError:
                    pass
                time.sleep(0.15)
            else:
                raise


def generic_save_function(
    fig: plt.Figure,
    name: str,
    folder: str,
    dpi: int = 300,
    save_pgf: bool = True,
    close_fig: bool = True,
) -> None:
    """
    Save the figure to `folder` as `.png` and (if pdflatex is available and `save_pgf=True`) as `.pgf`.
    Automatically strips any existing `.png`/`.pgf` extension from `name`.
    """
    global _LATEX_WARNING_SHOWN
    os.makedirs(folder, exist_ok=True)
    stem = os.path.splitext(name)[0]

    # 1. Always save PNG via in-memory buffer + retry loop (avoids Windows Errno 22 locks)
    png_path = os.path.join(folder, f"{stem}.png")
    buf = io.BytesIO()
    fig.savefig(buf, format="png", dpi=dpi, bbox_inches="tight")
    _write_bytes_with_retry(png_path, buf.getvalue())

    # 2. Save PGF in a 'pgf' subfolder if requested and pdflatex is ready
    if save_pgf and _ensure_pgf_ready():
        pgf_folder = os.path.join(folder, "pgf")
        os.makedirs(pgf_folder, exist_ok=True)
        pgf_path = os.path.join(pgf_folder, f"{stem}.pgf")
        try:
            pgf_buf = io.BytesIO()
            fig.savefig(pgf_buf, format="pgf", bbox_inches="tight")
            _write_bytes_with_retry(pgf_path, pgf_buf.getvalue())
        except Exception as e:
            if not _LATEX_WARNING_SHOWN:
                warnings.warn(
                    f"Could not export '{stem}.pgf' ({e}). Continuing with .png only.",
                    RuntimeWarning,
                    stacklevel=2,
                )
                _LATEX_WARNING_SHOWN = True

    if close_fig:
        plt.close(fig)


def get_repo_root() -> str:
    """Get the root directory of the repository."""
    return os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


if __name__ == "__main__":
    print(get_repo_root())

