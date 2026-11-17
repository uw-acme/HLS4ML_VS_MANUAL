#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
Graphs against bit width, from results/sweep_results.csv, in the Toptagging style.
Writes results/graphs/{utilization,timing,error}.png. Handmade is solid, HLS4ML dashed.

    python plot_results.py
"""
import csv

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import numpy as np

from common import BASE
from synth_reports import DEVICE_BRAM_TILES, DEVICE_DSPS, DEVICE_FFS, DEVICE_LUTS

RESULTS_CSV = BASE / "results" / "sweep_results.csv"
GRAPH_DIR = BASE / "results" / "graphs"

ORANGE = (255 / 255, 165 / 255, 0)
RESOURCE_COLORS = {"LUTs": "r", "DFFs": "b", "BRAM": ORANGE, "DSPs": "c"}
DESIGNS = [("handmade", "Handmade", "-", "o"), ("hls", "HLS4ML", "--", "s")]


# Reading the results ------------
def read_rows():
    if not RESULTS_CSV.exists():
        raise SystemExit(f"ERROR: {RESULTS_CSV} not found. Run sweep.py first.")
    with open(RESULTS_CSV) as file:
        rows = [{key: float(value) if value != "" else np.nan for key, value in row.items()}
                for row in csv.DictReader(file)]
    if not rows:
        raise SystemExit(f"ERROR: {RESULTS_CSV} has no rows.")
    return sorted(rows, key=lambda row: row["bits"])


def set_bit_axis(axis, bits):
    axis.set_xticks(bits)
    axis.set_xlim(min(bits) - 1, max(bits) + 1)
    axis.set_xlabel("Bitwidth")


def design_legend(axis):
    """Solid = Handmade, dashed = HLS4ML (empty lines, only for the legend)."""
    handles = [axis.plot([], [], label=name, linestyle=style, color="k", marker=marker)[0]
               for _, name, style, marker in DESIGNS]
    return axis.legend(handles=handles, loc="upper left")


# Graph 1: utilization ------------
def plot_utilization(rows):
    bits = [row["bits"] for row in rows]
    figure, axis = plt.subplots()
    resource_lines = []
    highest = 0

    for resource, color in RESOURCE_COLORS.items():
        suffix = {"LUTs": ("luts", DEVICE_LUTS), "DFFs": ("ffs", DEVICE_FFS),
                  "BRAM": ("bram_tiles", DEVICE_BRAM_TILES), "DSPs": ("dsps", DEVICE_DSPS)}[resource]
        series = {prefix: [100 * row[f"{prefix}_{suffix[0]}"] / suffix[1] for row in rows]
                  for prefix, _, _, _ in DESIGNS}
        if np.nanmax(series["handmade"] + series["hls"]) == 0:
            print(f"  {resource} is 0 for both designs, left out")
            continue
        highest = max(highest, np.nanmax(series["handmade"] + series["hls"]))
        for prefix, _, style, marker in DESIGNS:
            axis.plot(bits, series[prefix], linestyle=style, color=color, marker=marker)
        resource_lines.append(axis.plot([], [], label=resource, linestyle="-", color=color, marker="o")[0])

    axis.add_artist(axis.legend(handles=resource_lines, loc="upper right"))
    design_legend(axis)
    axis.set_title("Resource Utilization")
    set_bit_axis(axis, bits)
    axis.set_ylim(0, max(highest * 1.4, 1))
    axis.set_ylabel("Utilization (%)")
    figure.savefig(GRAPH_DIR / "utilization.png", dpi=150, bbox_inches="tight")


# Graph 2: interval and latency ------------
def plot_timing(rows):
    """Teammate's format: initiation interval (red, left axis) and total latency (blue, right axis), in ns."""
    bits = [row["bits"] for row in rows]
    figure, interval_axis = plt.subplots()
    latency_axis = interval_axis.twinx()
    highest_interval = highest_latency = 0

    for prefix, name, style, marker in DESIGNS:
        interval = [row[f"{prefix}_interval_ns"] for row in rows]
        latency = [row[f"{prefix}_latency_ns"] for row in rows]
        interval_axis.plot(bits, interval, linestyle=style, color="r", marker=marker)
        latency_axis.plot(bits, latency, label=name, linestyle=style, color="b", marker=marker)
        highest_interval = max(highest_interval, np.nanmax(interval))
        highest_latency = max(highest_latency, np.nanmax(latency))

    latency_axis.legend(loc="upper left")
    interval_axis.set_title("Timing Handmade vs HLS")
    set_bit_axis(interval_axis, bits)
    interval_axis.set_ylabel("Initiation Interval (ns)", color="r")
    interval_axis.tick_params(axis="y", labelcolor="r")
    latency_axis.set_ylabel("Latency (ns)", color="b")
    latency_axis.tick_params(axis="y", labelcolor="b")
    top = max(highest_interval, highest_latency) * 1.4      # same range on both axes, as in the teammate's graph
    interval_axis.set_ylim(0, top)
    latency_axis.set_ylim(0, top)
    figure.savefig(GRAPH_DIR / "timing.png", dpi=150, bbox_inches="tight")


# Graph 3: error ------------
def plot_error(rows):
    """Teammate's format: error in %, Handmade solid red, HLS4ML dashed blue. Error = 100 - accuracy relative to Keras."""
    bits = [row["bits"] for row in rows]
    figure, axis = plt.subplots()
    lines = [("Handmade", "-", "o", "r", "rtl_vs_keras_pct"), ("HLS4ML", "--", "s", "b", "hls_vs_keras_pct")]
    for name, style, marker, color, column in lines:
        axis.plot(bits, [100 - row[column] for row in rows], label=name, linestyle=style, color=color, marker=marker)
    axis.legend(loc="upper right")
    axis.set_title("Error Rate")
    set_bit_axis(axis, bits)
    axis.set_ylabel("Error (%)")
    figure.savefig(GRAPH_DIR / "error.png", dpi=150, bbox_inches="tight")


def main():
    rows = read_rows()
    GRAPH_DIR.mkdir(parents=True, exist_ok=True)
    plot_utilization(rows)
    plot_timing(rows)
    plot_error(rows)
    print(f"wrote 3 graphs for {len(rows)} setups to {GRAPH_DIR}")


if __name__ == "__main__":
    main()