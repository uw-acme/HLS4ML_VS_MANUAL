#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
Weight packages for one setup: weights_n_tables/<bits>_<int>/<layer>_pkg.sv

    /home/aya/miniconda3/envs/tf211-env/bin/python gen_weights.py --bits 8 --int 2

--int excludes the sign bit, so nfrac = bits - int - 1. conv0 uses --first-int (default --int - 1).
Rounds half up and clips values that do not fit (reported per layer).
"""
import argparse

import numpy as np

from common import BASE, MODEL_FILE, load_model, to_binary


WEIGHTS_DIR = BASE / "weights_n_tables"


def read_layer(layer):
    """(weights, biases, is_conv) as flat arrays in the RTL's order, or None if the layer has no weights."""

    if "conv2d_batchnorm" in layer.name.lower():
        kernel, biases = layer.get_folded_weights()
        # Keras (h, w, in, out) -> RTL (out, in, h, w)
        kernel = np.transpose(np.asarray(kernel), (3, 2, 0, 1))
        return kernel.reshape(-1), np.asarray(biases), True

    arrays = layer.get_weights()
    if not arrays:
        return None

    # dense: (in, out), row by row
    return np.asarray(arrays[0]).reshape(-1), np.asarray(arrays[1]), False


def to_words(values, bits, nfrac):
    words = []
    for value in values:
        words.append(f"{bits}'b" + to_binary(value * 2 ** nfrac, bits))
    return words


def count_clipped(values, bits, nfrac):
    rounded = np.floor(np.asarray(values, dtype=np.float64) * 2 ** nfrac + 0.5)
    largest = 2 ** (bits - 1) - 1
    smallest = -(2 ** (bits - 1))
    return int(((rounded > largest) | (rounded < smallest)).sum())


def package_text(layer_name, bits, int_bits, weight_name, bias_name, weight_words, bias_words):
    lines = []
    lines.append("`timescale 1ns / 1ps")
    lines.append(f"//Width: {bits}")
    lines.append(f"//Int: {int_bits}")
    lines.append(f"package {layer_name}_0;")
    lines.append("")
    lines.append(f"localparam logic signed [{bits - 1}:0] {weight_name} [0:{len(weight_words) - 1}] = '{{")
    lines.append(",\n".join(weight_words))
    lines.append("};")
    lines.append(f"localparam logic signed [{bits - 1}:0] {bias_name} [{len(bias_words)}] = '{{")
    lines.append(",\n".join(bias_words))
    lines.append("};")
    lines.append("endpackage")
    return "\n".join(lines) + "\n"


def parse_arguments():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--bits", type=int, required=True, help="total bit width")
    parser.add_argument("--int", type=int, required=True, dest="int_bits",
                        help="integer bits (sign not counted) of every layer after conv0")
    parser.add_argument("--first-int", type=int, default=None,
                        help="integer bits of conv0 (default: --int minus 1)")
    parser.add_argument("--model", default=MODEL_FILE, help="the trained .keras model")
    return parser.parse_args()


def main():
    args = parse_arguments()

    first_int = args.first_int if args.first_int is not None else args.int_bits - 1
    out_dir = WEIGHTS_DIR / f"{args.bits}_{args.int_bits}"

    out_dir.mkdir(parents=True, exist_ok=True)
    for old_file in out_dir.glob("*.sv"):
        old_file.unlink()

    model = load_model(args.model)

    print(f"{'layer':<24s} {'format':<8s} {'words':>6s} {'largest |value|':>16s} {'limit':>8s} {'clipped':>8s}")

    total_clipped = 0
    first_conv_done = False

    for layer in model.layers:
        layer_data = read_layer(layer)
        if layer_data is None:
            continue
        weights, biases, is_conv = layer_data

        int_bits = args.int_bits
        if is_conv and not first_conv_done:
            int_bits = first_int
            first_conv_done = True

        bits = args.bits
        nfrac = bits - int_bits - 1

        weight_name, bias_name = ("convWeights", "convBiases") if is_conv else ("dlWeights", "bias")

        everything = np.concatenate([weights.astype(np.float64), biases.astype(np.float64)])
        largest_value = float(np.abs(everything).max())
        limit = (2 ** (bits - 1) - 1) / 2 ** nfrac
        clipped = count_clipped(weights, bits, nfrac) + count_clipped(biases, bits, nfrac)
        total_clipped += clipped
        print(f"{layer.name:<24s} ({bits},{int_bits}){'':<3s} {everything.size:6d} {largest_value:16.3f} {limit:8.3f} {clipped:8d}")

        text = package_text(layer.name, bits, int_bits, weight_name, bias_name,
                            to_words(weights, bits, nfrac), to_words(biases, bits, nfrac))
        (out_dir / f"{layer.name}_pkg.sv").write_text(text)

    print(f"\nwrote {len(list(out_dir.glob('*.sv')))} packages to {out_dir}")
    if total_clipped > 0:
        print(f"WARNING: {total_clipped} values did not fit and were clipped. Use a larger --int (or --first-int).")
    else:
        print("no values were clipped")


if __name__ == "__main__":
    main()
