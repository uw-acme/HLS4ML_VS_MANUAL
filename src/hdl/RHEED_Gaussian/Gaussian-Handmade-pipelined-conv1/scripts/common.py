import math
import os
from pathlib import Path

BASE = Path(os.environ.get(
    "RHEED_BASE", "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade"))
HLS_BASE = Path(os.environ.get(
    "RHEED_HLS_BASE", "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS"))
MODEL_FILE = "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Models/gaussian_nov24.keras"


def to_binary(number, bits):
    """LSB-scaled number -> two's-complement string. Round half up, saturate (hls4ml AP_RND, AP_SAT)."""
    rounded = math.floor(float(number) + 0.5)
    clipped = max(-(2 ** (bits - 1)), min(2 ** (bits - 1) - 1, rounded))
    if clipped < 0:
        clipped += 2 ** bits
    return format(clipped, f"0{bits}b")


def load_model(path=MODEL_FILE):
    import tensorflow as tf
    from qkeras.utils import _add_supported_quantized_objects

    custom_objects = {}
    _add_supported_quantized_objects(custom_objects)
    return tf.keras.models.load_model(path, custom_objects=custom_objects, compile=False)
