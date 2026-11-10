#!/usr/bin/env python3
"""
Compares RTL, hls4ml and Keras final outputs for one setup (ULP = 2**-NFRAC).

    python compare.py
    TAG=16_6 NFRAC=9 python compare.py
"""
import os
from pathlib import Path

import numpy as np


# Settings ------------
TAG = os.environ.get("TAG", "8_2")
NFRAC = int(os.environ.get("NFRAC", "5"))      # fractional bits of the final layer's output

PROJECT_DIR = Path(os.environ.get(
    "PROJECT_DIR", "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade"))

RTL_FILE = PROJECT_DIR / "results" / TAG / "rtl_final.csv"

# optional regression check: cp results/<TAG>/rtl_final.csv results/<TAG>/rtl_final_baseline.csv
PREVIOUS_RTL = Path(os.environ.get(
    "PREVIOUS_RTL", str(PROJECT_DIR / "results" / TAG / "rtl_final_baseline.csv")))

SUMMARY_FILE = PROJECT_DIR / "results" / TAG / "accuracy_summary.csv"
HLS_FILE = PROJECT_DIR / "testing_data" / TAG / "hls_out.npy"
KERAS_FILE = PROJECT_DIR / "testing_data" / TAG / "keras_out.npy"

ULP = 2.0 ** -NFRAC


# Helpers ------------
def check_file_exists(path, hint):
    if not path.exists():
        raise SystemExit(f"ERROR: {path} not found. {hint}")


def load_rtl_integers(path):
    """Rows of "image, out0..out4" -> integer outputs ordered by image."""
    rows = np.loadtxt(path, delimiter=",", ndmin=2)
    rows = rows[np.argsort(rows[:, 0])]
    return rows[:, 1:].astype(int)


def print_error_line(name, difference_in_ulp):
    absolute = np.abs(difference_in_ulp)
    print(f"  {name:<16s} {absolute.mean():8.3f} {absolute.max():10.3f}")


def correlation_per_output(values, reference):
    """Per output: correlation across images (nan if either is constant)."""
    result = []
    for output in range(values.shape[1]):
        if values[:, output].std() == 0 or reference[:, output].std() == 0:
            result.append(np.nan)
        else:
            result.append(np.corrcoef(values[:, output], reference[:, output])[0, 1])
    return np.array(result)


# Load the three results ------------
check_file_exists(RTL_FILE, "Run run_acc.sh first.")
check_file_exists(HLS_FILE, "Run gen_test_data.py (without --skip-hls) first.")
check_file_exists(KERAS_FILE, "Run gen_test_data.py first.")

rtl_integers = load_rtl_integers(RTL_FILE)
rtl = rtl_integers * ULP
hls = np.load(HLS_FILE)
keras = np.load(KERAS_FILE)

if not (rtl.shape == hls.shape == keras.shape):
    raise SystemExit(f"ERROR: the shapes differ: RTL {rtl.shape}, hls4ml {hls.shape}, Keras {keras.shape}")

num_images, num_outputs = rtl.shape
print(f"Setup {TAG}: {num_images} images, {num_outputs} outputs each, 1 ULP = {ULP}")


# The first few images ------------
print("\nFirst 3 images (real values):")
for image in range(3):
    print(f"  image {image}")
    print(f"    RTL    {np.round(rtl[image], 4)}")
    print(f"    hls4ml {np.round(hls[image], 4)}")
    print(f"    Keras  {np.round(keras[image], 4)}")


# Error summary ------------
print("\nError over all outputs, in ULP:")
print(f"  {'':<16s} {'mean':>8s} {'max':>10s}")
print_error_line("RTL vs hls4ml", (rtl - hls) / ULP)
print_error_line("RTL vs Keras", (rtl - keras) / ULP)
print_error_line("hls4ml vs Keras", (hls - keras) / ULP)

keras_scale = np.abs(keras).mean()
print("\nAccuracy relative to Keras: 100 * (1 - mean error / mean |Keras|)")
print(f"  RTL    {100 * (1 - np.abs(rtl - keras).mean() / keras_scale):.2f} %")
print(f"  hls4ml {100 * (1 - np.abs(hls - keras).mean() / keras_scale):.2f} %")


# RTL vs hls4ml in detail ------------
hls_on_grid = np.allclose(hls / ULP, np.round(hls / ULP))
print(f"\nhls4ml outputs are exact multiples of 1 ULP: {hls_on_grid}")

difference = np.round((rtl - hls) / ULP).astype(int)

print("\nRTL minus hls4ml, how many outputs differ by each amount:")
for amount in range(difference.min(), difference.max() + 1):
    count = int((difference == amount).sum())
    print(f"  {amount:+3d} ULP: {count:4d} of {difference.size}")

print("\nAverage of (RTL minus hls4ml) for each output, in ULP:")
print("  ", np.round(difference.mean(axis=0), 2))
print("   (a value far from 0 means that output is shifted, not just noisy)")


# How much each output changes from image to image ------------
print("\nSpread of each output across the images (standard deviation, in ULP):")
print("  Keras ", np.round(keras.std(axis=0) / ULP, 2))
print("  hls4ml", np.round(hls.std(axis=0) / ULP, 2))
print("  RTL   ", np.round(rtl.std(axis=0) / ULP, 2))
print("   (if Keras hardly changes between images, errors against it mostly measure offset and noise)")


# Constant offset from Keras ------------
print("\nAverage offset from Keras for each output (signed, in ULP):")
print("  RTL   ", np.round((rtl - keras).mean(axis=0) / ULP, 2))
print("  hls4ml", np.round((hls - keras).mean(axis=0) / ULP, 2))


# Does it follow Keras from image to image ------------
print("\nCorrelation with Keras across the images, per output:")
print("  RTL   ", np.round(correlation_per_output(rtl, keras), 2))
print("  hls4ml", np.round(correlation_per_output(hls, keras), 2))
print("   (1 = follows Keras, 0 = unrelated, nan = the output is constant)")


# Which one is closer to Keras ------------
rtl_error = np.abs(rtl - keras).mean(axis=1)      # one number per image
hls_error = np.abs(hls - keras).mean(axis=1)
rtl_wins = int((rtl_error < hls_error).sum())
print(f"\nRTL is closer to Keras than hls4ml is on {rtl_wins} of {num_images} images")
print(f"  mean error vs Keras:  RTL {rtl_error.mean() / ULP:.3f} ULP,  hls4ml {hls_error.mean() / ULP:.3f} ULP")


# Regression check against an earlier RTL run ------------
print("\nCompared with the earlier RTL run:")
if not PREVIOUS_RTL.exists():
    print(f"  (skipped, no baseline at {PREVIOUS_RTL})")
else:
    previous = load_rtl_integers(PREVIOUS_RTL)
    if previous.shape != rtl_integers.shape:
        print(f"  (skipped, shapes differ: {previous.shape} vs {rtl_integers.shape})")
    else:
        changed = previous != rtl_integers
        images_changed = np.where(changed.any(axis=1))[0]
        print(f"  {len(images_changed)} of {num_images} images have a different output "
              f"({int(changed.sum())} of {changed.size} values)")
        for image in images_changed[:5]:
            print(f"    image {image}: earlier {previous[image]}  now {rtl_integers[image]}")


# Save the numbers for the graphs ------------
def mean_and_max(difference):
    absolute = np.abs(difference)
    return absolute.mean(), absolute.max()


rtl_keras_mean, rtl_keras_max = mean_and_max(rtl - keras)
hls_keras_mean, hls_keras_max = mean_and_max(hls - keras)
rtl_hls_mean, rtl_hls_max = mean_and_max(rtl - hls)

summary = {
    "tag": TAG,
    "images": num_images,
    "ulp": ULP,
    "rtl_vs_keras_mean": rtl_keras_mean,   "rtl_vs_keras_max": rtl_keras_max,
    "hls_vs_keras_mean": hls_keras_mean,   "hls_vs_keras_max": hls_keras_max,
    "rtl_vs_hls_mean": rtl_hls_mean,       "rtl_vs_hls_max": rtl_hls_max,
    "rtl_vs_keras_mean_ulp": rtl_keras_mean / ULP,
    "hls_vs_keras_mean_ulp": hls_keras_mean / ULP,
    "rtl_vs_hls_mean_ulp": rtl_hls_mean / ULP,
    "rtl_closer_to_keras": rtl_wins,
}

with open(SUMMARY_FILE, "w") as file:
    file.write(",".join(summary.keys()) + "\n")
    file.write(",".join(str(value) for value in summary.values()) + "\n")

print(f"\nSaved {SUMMARY_FILE}")
