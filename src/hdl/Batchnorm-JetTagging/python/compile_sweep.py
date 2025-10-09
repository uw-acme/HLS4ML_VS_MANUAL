import sys
import numpy as np
import hls4ml
from tensorflow.keras.models import load_model # type: ignore
model = load_model('model.h5', compile=False)
acc = []
for i in range(2,10):
    acc.append(({3*i-2},{i}))
# HLS4ML Model gen
def HLS4ML_gen(acc):
    try:
        error=f"HLS4ML Script {acc} Failed"
        model = load_model('model.h5', compile=False)
        config = hls4ml.utils.config_from_keras_model(model, granularity='model')
        config['Model']['Precision'] = f'ap_fixed<{acc}>'
        hls_model = hls4ml.converters.convert_from_keras_model(model, bit_exact=False, backend='Vivado', hls_config=config,
                                                                output_dir=f'model_5/sweep_{acc[0]}_{acc[1]}',
                                                                # part='xcu280-fsvh2892-2L-e')
                                                                part='xc7vx690tffg1761-2')
        hls_model.build()
        error=f"HLS4ML Script {acc} Completed"
    finally:
        import os
        os.system(f'printf "HLS4ML gen finished at %b with parameters {acc}" "$(date)" | mail -s "{error}" ceravcal@uw.edu')
