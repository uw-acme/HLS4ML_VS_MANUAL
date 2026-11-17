"""
Keras and hls4ml predicted outputs (predict(), no traces) for ONE bit-width config.

Integer-bit convention: QKeras's, i.e. the sign bit is NOT counted.  quantized_bits(8, 2)  <->  ap_fixed<8, 3>.

Outputs, under out_dir (= testing_data/<W>_<I>/):
    keras_out.npy    rebuilt model at this width, Keras predict()          (N, 5)
    hls_out.npy      hls4ml predict() on that model                        (N, 5)
and, once per image set, in the parent folder:
    keras_qat_out_<N>.npy   the trained 8-bit model, width independent
"""
import shutil
from pathlib import Path

import numpy as np

IMAGE_SHAPE = (48, 48, 1)
L1_REG = 1e-4
PART = "xcku035-fbva676-2-e"


# Keras model at a given width ------------
def build_model(bits, int_rest, int_first):
    """The notebook's architecture with quantizers at `bits`.
    int_first = integer bits of conv0's quantizers (0 in the trained design), int_rest = all other layers (2).
    Every layer is named explicitly so Keras's auto-numbering cannot drift when several models share a process."""
    import tensorflow as tf
    from qkeras import QActivation, QConv2DBatchnorm, QDense

    def quant(i):
        return f"quantized_bits({bits},{i},alpha=1)"

    relu = f"quantized_relu({bits}, {int_rest})"

    def conv(name, filters, i, **kw):
        return QConv2DBatchnorm(
            name=name, filters=filters, kernel_size=3, strides=1, padding="valid",
            kernel_quantizer=quant(i), bias_quantizer=quant(i),
            kernel_initializer="lecun_uniform",
            kernel_regularizer=tf.keras.regularizers.l1(L1_REG), use_bias=True, **kw)

    def dense(name, units):
        return QDense(units=units, name=name, kernel_quantizer=quant(int_rest), bias_quantizer=quant(int_rest))

    return tf.keras.Sequential([
        conv("q_conv2d_batchnorm", 6, int_first, input_shape=IMAGE_SHAPE),
        QActivation(relu, name="q_activation"),
        tf.keras.layers.MaxPool2D(pool_size=4, strides=4, name="max_pooling2d"),
        conv("q_conv2d_batchnorm_1", 8, int_rest),
        QActivation(relu, name="q_activation_1"),
        tf.keras.layers.MaxPool2D(pool_size=2, strides=2, name="max_pooling2d_1"),
        conv("q_conv2d_batchnorm_2", 10, int_rest),
        QActivation(relu, name="q_activation_2"),
        tf.keras.layers.MaxPool2D(pool_size=2, strides=2, name="max_pooling2d_2"),
        tf.keras.layers.Flatten(name="flatten"),
        dense("q_dense", 15),
        QActivation(relu, name="q_activation_3"),
        dense("q_dense_1", 10),
        QActivation(relu, name="q_activation_4"),
        dense("q_dense_2", 5),
    ], name="pp_model")


# Hls4ml configuration ------------
def hls_layer_config(bits, int_rest, int_first):
    """Per-layer precisions generalizing the validated 8-bit config (see the notebook's `config['LayerName']`).
    QKeras int bits I (sign not counted) become ap_fixed<W, I+1>; relu outputs are ap_ufixed<W, I>."""
    signed = lambda i: f"ap_fixed<{bits},{i + 1}>"
    result = f"ap_fixed<{bits},{int_rest + 1}>"
    act = f"ap_ufixed<{bits},{int_rest}>"
    rounding = {"RoundingMode": "AP_RND", "SaturationMode": "AP_SAT"}

    def compute(i, reuse):
        return {"Precision": {"weight": signed(i), "bias": signed(i), "result": result},
                "ReuseFactor": reuse, **rounding}

    def relu(reuse):
        return {"Precision": {"result": act}, "ReuseFactor": reuse}

    def pool():
        return {"Precision": {"result": act}, "ReuseFactor": 1}

    return {
        "q_conv2d_batchnorm_input": {"Precision": {"result": f"ap_ufixed<{bits},0>"}},   # mono8 input
        "q_conv2d_batchnorm": compute(int_first, 9),
        "q_activation": relu(8),
        "max_pooling2d": pool(),
        "q_conv2d_batchnorm_1": compute(int_rest, 9),
        "q_activation_1": relu(8),
        "max_pooling2d_1": pool(),
        "q_conv2d_batchnorm_2": compute(int_rest, 8),
        "q_activation_2": relu(8),
        "max_pooling2d_2": pool(),
        "flatten": {"Precision": {"result": act}},
        "q_dense": compute(int_rest, 10),
        "q_activation_3": relu(16),
        "q_dense_1": compute(int_rest, 15),
        "q_activation_4": relu(16),
        "q_dense_2": compute(int_rest, 10),
    }


def accum_precision(bits, int_rest):
    """Model-level default (accumulators, final linear cast).  8 bits -> ap_fixed<16,6>, the validated value.
    ASSUMPTION for other widths: twice the width, int_rest+4 integer bits, so accumulation is not the bottleneck."""
    return f"ap_fixed<{max(16, 2 * bits)},{int_rest + 4}>"


def rebuild_model(trained, bits, int_rest, int_first):
    """The architecture with quantizers at `bits`, holding the same trained weights."""
    model = build_model(bits, int_rest, int_first)
    model.set_weights(trained.get_weights())
    return model


def convert_to_hls(model, bits, int_rest, int_first, out_dir, clock_period=10):
    """Converts the model with hls4ml into a project in out_dir and returns the hls4ml model.
    clock_period (ns) is the target HLS schedules its pipeline for. It changes the cycle count, not the results."""
    import hls4ml

    config = hls4ml.utils.config_from_keras_model(
        model, granularity="name", default_precision="fixed<32,16>", default_reuse_factor=32)
    config["Model"]["Strategy"] = "Resource"
    config["Model"]["ReuseFactor"] = 16
    config["Model"]["Precision"] = accum_precision(bits, int_rest)
    config["IOType"] = "io_stream"
    config["LayerName"] = hls_layer_config(bits, int_rest, int_first)

    out_dir = Path(out_dir).resolve()          # absolute on purpose: a relative path once created a nested copy
    shutil.rmtree(out_dir, ignore_errors=True)
    return hls4ml.converters.convert_from_keras_model(
        model, hls_config=config, output_dir=str(out_dir), backend="Vivado", part=PART,
        clock_period=clock_period, io_type="io_stream")


def hls_predict(model, images, bits, int_rest, int_first, out_dir):
    """hls4ml's C simulation (predict) on the images. The values do not depend on the clock period."""
    hls_model = convert_to_hls(model, bits, int_rest, int_first, out_dir)
    hls_model.compile()
    return np.asarray(hls_model.predict(np.ascontiguousarray(images, dtype=np.float32)))


# Entry point ------------
def make_references(trained, images, bits, int_rest, int_first, out_dir, hls_dir, run_hls=True):
    """Save Keras (trained and rebuilt-at-width) and hls4ml predictions for `images` (N,48,48,1)."""
    out_dir = Path(out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)
    x = np.ascontiguousarray(images, dtype=np.float32)

    qat = trained.predict(x, verbose=0)
    qat_path = out_dir.parent / f"keras_qat_out_{len(x)}.npy"
    np.save(qat_path, qat)
    print(f"keras  : trained (8-bit QAT) model {qat.shape} -> {qat_path}")

    model = rebuild_model(trained, bits, int_rest, int_first)      # same trained weights, quantizers now at `bits`
    keras_out = model.predict(x, verbose=0)
    np.save(out_dir / "keras_out.npy", keras_out)
    print(f"keras  : rebuilt at {bits} bits, int {int_first}/{int_rest} {keras_out.shape} -> {out_dir / 'keras_out.npy'}")

    if (bits, int_rest, int_first) == (8, 2, 0):      # the rebuilt model IS the trained model here
        worst = float(np.abs(keras_out - qat).max())
        if worst > 1e-6:
            raise RuntimeError(f"rebuilt 8-bit model differs from the trained model (max diff {worst}); "
                               "check build_model() against the training notebook")
        print("keras  : rebuilt 8-bit model reproduces the trained model exactly")

    if run_hls:
        hls_out = hls_predict(model, x, bits, int_rest, int_first, hls_dir)
        np.save(out_dir / "hls_out.npy", hls_out)
        print(f"hls4ml : predict() {hls_out.shape} -> {out_dir / 'hls_out.npy'}")
    return qat, keras_out
