#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
Bar graphs for ONE setup, from its row in results/sweep_results.csv.
Writes results/<tag>/graphs/{utilization,timing,accuracy}.png.

    python plot_setup.py          # 8_2
    python plot_setup.py 10_3
"""
import csv
import sys

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

from common import BASE
from synth_reports import DEVICE_BRAM_TILES, DEVICE_DSPS, DEVICE_FFS, DEVICE_LUTS

RESULTS_CSV = BASE / "results" / "sweep_results.csv"
HANDMADE_COLOR = "darkorange"
HLS_COLOR = "steelblue"

plt.rcParams.update({"font.size": 14})


# Reading the results ------------
def read_row(tag):
    if not RESULTS_CSV.exists():
        raise SystemExit(f"ERROR: {RESULTS_CSV} not found. Run sweep.py first.")
    bits, int_bits = (int(number) for number in tag.split("_"))
    with open(RESULTS_CSV) as file:
        rows = list(csv.DictReader(file))
    for row in rows:
        if int(row["bits"]) == bits and int(row["int_bits"]) == int_bits:
            if not row.get("handmade_interval_cycles") or not row.get("rtl_vs_keras_pct"):
                raise SystemExit(f"ERROR: setup {tag} has an old-format row. Run sweep.py --setup {bits},{int_bits} again.")
            return {key: float(value) for key, value in row.items()}
    known = [row["bits"] + "_" + row["int_bits"] for row in rows]
    raise SystemExit(f"ERROR: setup {tag} is not in {RESULTS_CSV.name}. It has: {known}")


# Graph 1: utilization ------------
def plot_utilization(row, tag, graph_dir):
    names = ["LUTs", "FFs", "BRAM", "DSPs"]
    parts = [("luts", DEVICE_LUTS), ("ffs", DEVICE_FFS), ("bram_tiles", DEVICE_BRAM_TILES), ("dsps", DEVICE_DSPS)]
    handmade = [100 * row[f"handmade_{name}"] / total for name, total in parts]
    hls = [100 * row[f"hls_{name}"] / total for name, total in parts]

    figure, axis = plt.subplots(figsize=(10, 6))
    positions = range(len(names))
    width = 0.38
    handmade_bars = axis.bar([p - width / 2 for p in positions], handmade, width, label="Handmade", color=HANDMADE_COLOR)
    hls_bars = axis.bar([p + width / 2 for p in positions], hls, width, label="HLS4ML", color=HLS_COLOR)
    axis.bar_label(handmade_bars, fmt="%.1f%%", padding=3)
    axis.bar_label(hls_bars, fmt="%.1f%%", padding=3)
    axis.set_xticks(list(positions))
    axis.set_xticklabels(names)
    axis.set_ylabel("Usage (%)")
    axis.set_ylim(0, max(handmade + hls + [1]) * 1.2)
    axis.set_title("Resource Utilization")
    axis.legend()
    figure.savefig(graph_dir / "utilization.png", dpi=150, bbox_inches="tight")


# Graph 2: latency and initiation interval share one axis (both in µs); clock period (ns) sits to the right ------------
def plot_timing(row, tag, graph_dir):
    width = 0.185
    gap = 0.62 * width  # bar centres sit a little more than one bar width apart so the value labels fit
    designs = [("Handmade", "handmade", HANDMADE_COLOR, -gap), ("HLS4ML", "hls", HLS_COLOR, gap)]
    # panel widths are proportional to the x ranges below, so the bars have the same width in both panels
    figure, (time_axis, clock_axis) = plt.subplots(1, 2, figsize=(15, 6), gridspec_kw={"width_ratios": [2.2, 1.2]})

    groups = [("Latency", "latency"), ("Initiation interval (II)", "interval")]
    tallest = 0
    for position, (name, metric) in enumerate(groups):
        for label, prefix, color, offset in designs:
            microseconds = row[f"{prefix}_{metric}_ns"] / 1000
            bar = time_axis.bar(position + offset, microseconds, width, color=color, label=label if position == 0 else None)
            time_axis.bar_label(bar, labels=[f"{microseconds:.1f} µs"], padding=3, fontsize=12)
            tallest = max(tallest, microseconds)
    time_axis.set_xticks(range(len(groups)))
    time_axis.set_xticklabels([name for name, _ in groups])
    time_axis.set_xlim(-0.6, 1.6)
    time_axis.set_ylim(0, tallest * 1.3)
    time_axis.set_ylabel("Time (µs)")
    time_axis.legend()

    tallest = 0
    for label, prefix, color, offset in designs:
        period = row[f"{prefix}_period_ns"]
        bar = clock_axis.bar(offset, period, width, color=color)
        clock_axis.bar_label(bar, labels=[f"{period:g} ns"], padding=3, fontsize=12)
        tallest = max(tallest, period)
    clock_axis.set_xticks([0])
    clock_axis.set_xticklabels(["Clock period"])
    clock_axis.set_xlim(-0.6, 0.6)
    clock_axis.set_ylim(0, tallest * 1.3)
    clock_axis.set_ylabel("Clock period (ns)")

    figure.suptitle("Performance Comparison")
    figure.tight_layout()
    figure.savefig(graph_dir / "timing.png", dpi=150, bbox_inches="tight")


# Graph 3: accuracy ------------
def plot_accuracy(row, tag, graph_dir):
    """100 * (1 - mean error / mean |Keras output|)."""
    names = ["HLS4ML vs Keras", "RTL vs Keras"]
    values = [row["hls_vs_keras_pct"], row["rtl_vs_keras_pct"]]

    figure, axis = plt.subplots(figsize=(9, 6))
    bars = axis.bar(names, values, width=0.224, color=["tab:blue", "tab:orange"])
    axis.set_xlim(-0.6, 1.6)
    axis.bar_label(bars, fmt="%.1f%%", padding=3)
    axis.set_ylabel("Accuracy relative to Keras (%)")
    axis.set_ylim(min(0, min(values) * 1.2), 105)
    axis.set_title("Accuracy")
    figure.savefig(graph_dir / "accuracy.png", dpi=150, bbox_inches="tight")


def main():
    tag = sys.argv[1] if len(sys.argv) > 1 else "8_2"
    row = read_row(tag)
    graph_dir = BASE / "results" / tag / "graphs"
    graph_dir.mkdir(parents=True, exist_ok=True)
    plot_utilization(row, tag, graph_dir)
    plot_timing(row, tag, graph_dir)
    plot_accuracy(row, tag, graph_dir)
    print(f"wrote 3 graphs for {tag} to {graph_dir}")


if __name__ == "__main__":
    main()
