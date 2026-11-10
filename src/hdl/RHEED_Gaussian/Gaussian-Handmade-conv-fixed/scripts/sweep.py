#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
Runs the whole flow for each (bits, int) setup, appends a row to results/sweep_results.csv
and emails the results. A step whose result file exists is skipped; --redo repeats everything.
Sweeps can run in parallel (one tmux each).

    sweep.py                  # setups in CONFIGS
    sweep.py --setup 10,3     # repeatable
    sweep.py --redo
"""
import argparse
import csv
import fcntl
import os
import subprocess

import numpy as np

import synth_reports
from common import BASE, HLS_BASE


# Settings ------------
# (total bits, integer bits without the sign bit): ap_fixed<16,6> is (16, 5)
CONFIGS = [(8, 2)]
N_IMAGES = 50

# clock-period search (ns); starts tight because Vivado stops optimizing once a target is met
START_PERIOD = 6.0
MARGIN = 0.1
TOLERANCE = 0.3           # meeting timing by less than this counts as the limit
MAX_RUNS = 4              # Vivado runs per design and setup

EMAIL = "aburpee@uw.edu"

PYTHON = os.environ.get("RHEED_PYTHON", "/home/aya/miniconda3/envs/tf211-env/bin/python")


# Folders and files ------------
HANDMADE_SCRIPTS = BASE / "scripts"
HLS_SCRIPTS = HLS_BASE / "scripts"
RESULTS_CSV = BASE / "results" / "sweep_results.csv"

COLUMNS = [
    "bits", "int_bits", "images",
    # mean absolute error of the final outputs, and % accuracy relative to Keras
    "rtl_vs_keras_error", "hls_vs_keras_error", "rtl_vs_hls_error",
    "rtl_vs_keras_error_ulp", "hls_vs_keras_error_ulp",
    "rtl_vs_keras_pct", "hls_vs_keras_pct", "rtl_vs_hls_pct",
]
for design in ("handmade", "hls"):
    COLUMNS += [f"{design}_{name}" for name in (
        "period_ns", "slack_ns", "luts", "ffs", "bram_tiles", "dsps",
        "cycles", "latency_ns", "interval_cycles", "interval_ns")]

REDO = False


# The numbers one setup needs ------------
def settings_for(bits, int_bits):
    """Environment variables for the run_*.sh scripts."""
    return {
        "TAG": f"{bits}_{int_bits}",
        "PROJECT_DIR": str(BASE),
        "BIT_WIDTH": str(bits),
        "NFRAC": str(bits - int_bits - 1),
        "NFRAC_FIRST": str(bits - 1),
        "INPUT_BITS": str(bits),
        "OUTPUT_BITS": str(max(16, 2 * bits)),
    }


# Running scripts ------------
def run_step(name, command, log_file, extra_env=None):
    """Runs a script, logging to log_file. Raises with the log tail if it fails."""
    print(f"  {name} ...", flush=True)
    log_file.parent.mkdir(parents=True, exist_ok=True)

    environment = dict(os.environ)
    environment.update(extra_env or {})

    with open(log_file, "w") as log:
        result = subprocess.run([str(part) for part in command], env=environment,
                                stdout=log, stderr=subprocess.STDOUT)

    if result.returncode != 0:
        with open(log_file) as log:
            tail = "".join(log.readlines()[-15:])
        raise RuntimeError(f"{name} failed (log: {log_file}):\n{tail}")


def run_if_needed(name, command, log_file, result_file, extra_env=None):
    """run_step, unless result_file exists."""
    if result_file.exists() and not REDO:
        print(f"  {name}: already done, skipping")
        return
    run_step(name, command, log_file, extra_env)


def read_number(path):
    return int(path.read_text().strip())


def percent_of_keras(error, keras):
    """100 * (1 - mean error / mean |Keras output|)"""
    return 100 * (1 - error / np.abs(keras).mean())


# The clock-period search ------------
def find_period(try_period):
    """Smallest clock period that meets timing. try_period(period) runs Vivado, returns the slack (ns).
    Failed: raise the period by the shortfall + MARGIN. Met: stop if slack < TOLERANCE, else go
    tighter (by the slack, or half way to the highest failed period). Returns (period, slack)."""

    period = START_PERIOD
    best = None
    highest_failed = None
    tried = set()

    for run in range(MAX_RUNS):
        slack = try_period(period)
        tried.add(period)
        last_period, last_slack = period, slack
        print(f"    {period:g} ns: slack {slack:+.3f} ns")

        if slack >= 0:
            if best is None or period < best[0]:
                best = (period, slack)

            if slack < TOLERANCE:
                break
            elif highest_failed is None:
                next_period = round(period - slack, 1)
            elif period - highest_failed > TOLERANCE:
                next_period = round((period + highest_failed) / 2, 1)
            else:
                break
        else:
            if highest_failed is None or period > highest_failed:
                highest_failed = period
            next_period = round(period - slack + MARGIN, 1)
            if best is not None and next_period >= best[0]:
                break

        if next_period in tried:
            break
        period = next_period

    if best is None:
        raise RuntimeError(f"timing was not met in {MAX_RUNS} Vivado runs "
                           f"(the last one: slack {last_slack:+.3f} ns at {last_period:g} ns)")
    return best


def handmade_synthesis(settings, log_dir):
    """Returns (period, slack, utilization)."""
    tag = settings["TAG"]

    def try_period(period):
        timing_report = BASE / "reports" / f"{tag}_{period:g}ns_timing.rpt"
        run_if_needed(f"handmade Vivado at {period:g} ns",
                      ["bash", HANDMADE_SCRIPTS / "run_synth.sh"],
                      log_dir / f"handmade_synth_{period:g}ns.log", timing_report,
                      dict(settings, CLOCK_PERIOD=f"{period:g}"))
        wns, tns = synth_reports.read_timing(timing_report)
        return wns

    period, slack = find_period(try_period)
    util = synth_reports.read_util(BASE / "reports" / f"{tag}_{period:g}ns_util.rpt", "rheedGaussianWrapper")
    return period, slack, util


def hls_synthesis(settings, log_dir):
    """Every period needs its own build (HLS pipelines for the period it is built for).
    Returns (period, slack, utilization, latency cycles, interval cycles)."""
    tag = settings["TAG"]
    bits, int_bits = settings["BIT_WIDTH"], settings["TAG"].split("_")[1]

    def try_period(period):
        project = HLS_BASE / "hls_projects" / f"{tag}_{period:g}ns"
        run_if_needed(f"hls4ml build for {period:g} ns",
                      [PYTHON, HLS_SCRIPTS / "build_hls.py", "--bits", bits, "--int", int_bits,
                       "--clock-period", f"{period:g}"],
                      log_dir / f"hls_build_{period:g}ns.log",
                      project / "myproject_prj" / "solution1" / "syn" / "verilog" / "myproject.v")

        timing_report = HLS_BASE / "reports" / f"{tag}_{period:g}ns_timing.rpt"
        run_if_needed(f"hls4ml Vivado at {period:g} ns",
                      ["bash", HLS_SCRIPTS / "run_synth.sh"],
                      log_dir / f"hls_synth_{period:g}ns.log", timing_report,
                      dict(settings, PROJECT_DIR=str(HLS_BASE), CLOCK_PERIOD=f"{period:g}"))
        wns, tns = synth_reports.read_timing(timing_report)
        return wns

    period, slack = find_period(try_period)
    util = synth_reports.read_util(HLS_BASE / "reports" / f"{tag}_{period:g}ns_util.rpt", "myproject")

    result_dir = HLS_BASE / "results" / f"{tag}_{period:g}ns"
    run_if_needed(f"hls4ml latency of the {period:g} ns build",
                  ["bash", HLS_SCRIPTS / "run_hls_lat.sh"],
                  log_dir / f"hls_latency_{period:g}ns.log", result_dir / "interval.txt",
                  dict(settings, PROJECT_DIR=str(HLS_BASE), CLOCK_PERIOD=f"{period:g}"))
    return period, slack, util, read_number(result_dir / "latency.txt"), read_number(result_dir / "interval.txt")


# One setup ------------
def run_setup(bits, int_bits):
    """Runs every step for one setup, returns its row."""
    settings = settings_for(bits, int_bits)
    tag = settings["TAG"]
    result_dir = BASE / "results" / tag
    log_dir = result_dir / "sweep_logs"

    run_step("weights", [PYTHON, HANDMADE_SCRIPTS / "gen_weights.py", "--bits", bits, "--int", int_bits],
             log_dir / "gen_weights.log")
    run_if_needed("test data and references",
                  [PYTHON, HANDMADE_SCRIPTS / "gen_test_data.py", "--bits", bits, "--int", int_bits,
                   "--n-images", N_IMAGES],
                  log_dir / "gen_test_data.log", BASE / "testing_data" / tag / "hls_out.npy")

    run_if_needed("accuracy simulation", ["bash", HANDMADE_SCRIPTS / "run_acc.sh"],
                  log_dir / "run_acc.log", result_dir / "rtl_final.csv", settings)
    run_if_needed("accuracy comparison", [PYTHON, HANDMADE_SCRIPTS / "compare.py"],
                  log_dir / "compare.log", result_dir / "accuracy_summary.csv", settings)
    run_if_needed("handmade latency", ["bash", HANDMADE_SCRIPTS / "run_lat.sh"],
                  log_dir / "run_lat.log", result_dir / "interval.txt", settings)

    handmade_period, handmade_slack, handmade_util = handmade_synthesis(settings, log_dir)
    hls_period, hls_slack, hls_util, hls_cycles, hls_interval = hls_synthesis(settings, log_dir)

    with open(result_dir / "accuracy_summary.csv") as file:
        accuracy = next(csv.DictReader(file))
    handmade_cycles = read_number(result_dir / "latency.txt")
    handmade_interval = read_number(result_dir / "interval.txt")

    keras = np.load(BASE / "testing_data" / tag / "keras_out.npy")
    rtl_keras, hls_keras, rtl_hls = (float(accuracy[key]) for key in
                                     ("rtl_vs_keras_mean", "hls_vs_keras_mean", "rtl_vs_hls_mean"))

    return {
        "bits": bits, "int_bits": int_bits, "images": accuracy["images"],
        "rtl_vs_keras_error": accuracy["rtl_vs_keras_mean"],
        "hls_vs_keras_error": accuracy["hls_vs_keras_mean"],
        "rtl_vs_hls_error": accuracy["rtl_vs_hls_mean"],
        "rtl_vs_keras_error_ulp": accuracy["rtl_vs_keras_mean_ulp"],
        "hls_vs_keras_error_ulp": accuracy["hls_vs_keras_mean_ulp"],
        "rtl_vs_keras_pct": percent_of_keras(rtl_keras, keras),
        "hls_vs_keras_pct": percent_of_keras(hls_keras, keras),
        "rtl_vs_hls_pct": percent_of_keras(rtl_hls, keras),

        "handmade_period_ns": handmade_period, "handmade_slack_ns": handmade_slack,
        "handmade_luts": handmade_util["total_luts"], "handmade_ffs": handmade_util["ffs"],
        "handmade_bram_tiles": synth_reports.bram_tiles(handmade_util), "handmade_dsps": handmade_util["dsp48"],
        "handmade_cycles": handmade_cycles, "handmade_latency_ns": round(handmade_cycles * handmade_period, 1),
        "handmade_interval_cycles": handmade_interval,
        "handmade_interval_ns": round(handmade_interval * handmade_period, 1),

        "hls_period_ns": hls_period, "hls_slack_ns": hls_slack,
        "hls_luts": hls_util["total_luts"], "hls_ffs": hls_util["ffs"],
        "hls_bram_tiles": synth_reports.bram_tiles(hls_util), "hls_dsps": hls_util["dsp48"],
        "hls_cycles": hls_cycles, "hls_latency_ns": round(hls_cycles * hls_period, 1),
        "hls_interval_cycles": hls_interval, "hls_interval_ns": round(hls_interval * hls_period, 1),
    }


# Results and email ------------
def finished_setups():
    """Setups with a complete row (rows from before the interval/% columns count as unfinished)."""
    if not RESULTS_CSV.exists():
        return set()
    with open(RESULTS_CSV) as file:
        return {(int(row["bits"]), int(row["int_bits"])) for row in csv.DictReader(file)
                if row.get("handmade_interval_cycles") and row.get("rtl_vs_keras_pct")}


def save_row(row):
    """Adds the row (replacing the setup's old one). Locked, since sweeps run in parallel."""
    RESULTS_CSV.parent.mkdir(parents=True, exist_ok=True)

    with open(RESULTS_CSV.with_suffix(".lock"), "w") as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)

        rows = []
        if RESULTS_CSV.exists():
            with open(RESULTS_CSV) as file:
                for old_row in csv.DictReader(file):
                    same_setup = int(old_row["bits"]) == row["bits"] and int(old_row["int_bits"]) == row["int_bits"]
                    if not same_setup:
                        rows.append(old_row)
        rows.append(row)

        with open(RESULTS_CSV, "w", newline="") as file:
            writer = csv.DictWriter(file, fieldnames=COLUMNS)
            writer.writeheader()
            writer.writerows(rows)


def design_email(design, prefix, row):
    luts, ffs = float(row[f"{prefix}_luts"]), float(row[f"{prefix}_ffs"])
    bram, dsps = float(row[f"{prefix}_bram_tiles"]), float(row[f"{prefix}_dsps"])
    key = "rtl" if prefix == "handmade" else "hls"

    lines = [
        f"Gen {design}_{row['bits']}_{row['int_bits']} finished. Results:",
        f"LUTs: {100 * luts / synth_reports.DEVICE_LUTS:.2f}",
        f"Registers: {100 * ffs / synth_reports.DEVICE_FFS:.2f}",
        f"Block RAM Tile: {100 * bram / synth_reports.DEVICE_BRAM_TILES:.2f}",
        f"DSPs: {100 * dsps / synth_reports.DEVICE_DSPS:.2f}",
        f"Timing: {row[prefix + '_period_ns']}",
        f"Cycle Latency: {row[prefix + '_cycles']}",
        f"Total Latency: {row[prefix + '_latency_ns']}",
        f"Initiation Interval: {row[prefix + '_interval_cycles']}",
        f"Accuracy: {float(row[key + '_vs_keras_pct']):.2f}% relative to Keras "
        f"({float(row[key + '_vs_keras_error']):.4f} mean error, {float(row[key + '_vs_keras_error_ulp']):.2f} ULP)",
    ]
    if prefix == "handmade":
        lines.append(f"RTL vs hls4ml: {float(row['rtl_vs_hls_error']):.4f} mean error")
    lines.append(f"Counts: {luts:.0f} LUTs, {ffs:.0f} FFs, {bram:g} BRAM tiles, {dsps:.0f} DSPs")
    return "\n".join(lines)


def send_email(subject, body):
    """Email with `mail`; a failure does not stop the sweep."""
    try:
        subprocess.run(["mail", "-s", subject, EMAIL], input=body, text=True, check=True)
    except (OSError, subprocess.CalledProcessError) as error:
        print(f"(the email could not be sent: {error})")


# Main ------------
def main():
    global REDO

    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--redo", action="store_true", help="redo every step, even if its result exists")
    parser.add_argument("--setup", action="append", metavar="BITS,INT",
                        help="a setup to run, for example --setup 10,3 (repeat it for several); default: CONFIGS")
    args = parser.parse_args()
    REDO = args.redo

    setups = CONFIGS
    if args.setup:
        try:
            setups = [tuple(int(number) for number in text.split(",")) for text in args.setup]
            assert all(len(setup) == 2 for setup in setups)
        except (ValueError, AssertionError):
            parser.error("--setup needs two whole numbers, like --setup 10,3")

    done = []
    failed = []

    print(f"setups: {setups}")
    for bits, int_bits in setups:
        tag = f"{bits}_{int_bits}"

        if (bits, int_bits) in finished_setups() and not REDO:
            print(f"{tag}: already in {RESULTS_CSV.name}, skipping")
            continue

        print(f"== {tag}")
        try:
            row = run_setup(bits, int_bits)
            save_row(row)
            send_email(f"Handmade {tag} finished", design_email("handmade", "handmade", row))
            send_email(f"HLS4ML {tag} finished", design_email("hls4ml", "hls", row))
            done.append(tag)
        except Exception as error:
            print(f"{tag} FAILED: {error}")
            send_email("Sweep Failure", f"[SKIP] {(bits, int_bits)} failed: {error}")
            failed.append(tag)

    print(f"finished: {done}   failed: {failed}")
    send_email("Sweep Done", f"Finished setups: {done}\nFailed setups: {failed}\nResults: {RESULTS_CSV}")


if __name__ == "__main__":
    main()
