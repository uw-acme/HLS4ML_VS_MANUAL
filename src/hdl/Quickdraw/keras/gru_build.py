import json
import pandas as pd
import h5py
import numpy as np
import tensorflow as tf
import keras
from keras.layers import Input, Dense, Dropout, LSTM, Flatten, GRU,TimeDistributed, Conv1D, BatchNormalization
from keras.models import Model, Sequential
from keras.optimizers import Adam, SGD
from sklearn.model_selection import train_test_split
import os
import h5py
import matplotlib.pyplot as plt
from keras import regularizers
from tensorflow.keras.regularizers import l1
import ast
from tqdm import tqdm
from sklearn.model_selection import RandomizedSearchCV
from scipy.stats import uniform, truncnorm, randint
from sklearn.metrics import make_scorer
from sklearn.metrics import accuracy_score, precision_score, recall_score
from sklearn.model_selection import RepeatedStratifiedKFold
from scipy.stats import loguniform
from pandas import read_csv
from scikeras.wrappers import KerasClassifier
from sklearn.metrics import roc_auc_score
from qkeras import *
import qkeras
from tensorflow.keras.models import load_model
import matplotlib.pyplot as plt
import hls4ml
import plotting

model = load_model('./gru/QuickdrawEH.h5')

# fixed<x,y> where x is total number, y is integer
config = hls4ml.utils.config_from_keras_model(
    model,
    granularity='model',
    default_precision='ap_fixed<20,10>',
    default_reuse_factor=64
)

config["Model"]["Strategy"] = "Resource"

print("-----------------------------------")
print("Configuration")
plotting.print_dict(config)
print("-----------------------------------")
hls_model = hls4ml.converters.convert_from_keras_model(
    model,
    hls_config=config,
    backend='Vivado',
    output_dir='model_1/hls4ml_gru/EH',
    part='xcu250-figd2104-2-e',
    io_type='io_stream',
)

try:
    hls_model.build(csim=False)
    os.system(f'printf "gru build finished" | mail -s "complete" chanssen@uw.edu')
except:
    os.system(f'printf "gru build failed" | mail -s "error" chanssen@uw.edu')