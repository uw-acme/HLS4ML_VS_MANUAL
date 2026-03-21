from tensorflow.keras.utils import to_categorical
from sklearn.datasets import fetch_openml
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder, StandardScaler

# %matplotlib inline
import tensorflow as tf

import os

from tensorflow.keras.models import load_model, Model
from tensorflow.keras.utils import plot_model

model = load_model('model_toptag_lstm.h5')

import hls4ml


config = hls4ml.utils.config_from_keras_model(model, granularity='name', default_precision='ap_fixed<16,6>')
# config['LayerName']['layer1']['Trace'] = True
# for layer in config['LayerName'].keys():
#     config['LayerName'][layer]['Trace'] = True
hls_model = hls4ml.converters.convert_from_keras_model(
    model, hls_config=config, output_dir='model_lstm_hls/hls4ml_prj', part='xc7vx690tffg1761-2'
)
hls_model.build(csim=False, synth=True, vsynth=True)
