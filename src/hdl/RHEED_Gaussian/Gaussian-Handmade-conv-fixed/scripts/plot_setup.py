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
HANDMADE_COLOR = "steelblue"
HLS_COLOR = "darkorange"

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
    axis.set_ylabel("Utilization (% of device)")
    axis.set_ylim(0, max(handmade + hls + [1]) * 1.2)
    axis.set_title("Resource Utilization")
    axis.legend()
    figure.savefig(graph_dir / "utilization.png", dpi=150, bbox_inches="tight")


# Graph 2: interval and latency ------------
def plot_timing(row, tag, graph_dir):
    figure, panels = plt.subplots(1, 2, figsize=(12, 6))

    for axis, metric, title in [(panels[0], "interval", "Initiation interval"), (panels[1], "latency", "Total latency")]:
        cycles = [row["handmade_interval_cycles" if metric == "interval" else "handmade_cycles"],
                  row["hls_interval_cycles" if metric == "interval" else "hls_cycles"]]
        microseconds = [row[f"handmade_{metric}_ns"] / 1000, row[f"hls_{metric}_ns"] / 1000]
        labels = [f"{us:.1f} µs\n{c:.0f} cycles" for us, c in zip(microseconds, cycles)]
        bars = axis.bar(["Handmade", "HLS4ML"], microseconds, color=[HANDMADE_COLOR, HLS_COLOR])
        axis.bar_label(bars, labels=labels, padding=3)
        axis.set_ylabel(f"{title} (µs)")
        axis.set_ylim(0, max(microseconds) * 1.25)
        axis.set_title(title)

    figure.suptitle(f"Timing, setup {tag} (clock {row['handmade_period_ns']:g} ns handmade, {row['hls_period_ns']:g} ns HLS4ML)")
    figure.tight_layout()
    figure.savefig(graph_dir / "timing.png", dpi=150, bbox_inches="tight")


# Graph 3: accuracy ------------
def plot_accuracy(row, tag, graph_dir):
    """100 * (1 - mean error / mean |Keras output|); the last bar uses the same scale."""
    names = ["HLS4ML vs Keras", "RTL vs Keras", "RTL vs HLS4ML"]
    values = [row["hls_vs_keras_pct"], row["rtl_vs_keras_pct"], row["rtl_vs_hls_pct"]]

    figure, axis = plt.subplots(figsize=(9, 6))
    bars = axis.bar(names, values, color=["tab:blue", "tab:orange", "tab:green"])
    axis.bar_label(bars, fmt="%.1f%%", padding=3)
    axis.set_ylabel("Accuracy relative to Keras (%)")
    axis.set_ylim(min(0, min(values) * 1.2), 105)
    axis.set_title(f"Accuracy relative to Keras: {tag}")
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
