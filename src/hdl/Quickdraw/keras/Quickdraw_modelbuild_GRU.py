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
# from keras.wrappers.scikit_learn import KerasClassifier
from scikeras.wrappers import KerasClassifier
from sklearn.metrics import roc_auc_score
from qkeras import *
import qkeras
from tensorflow.keras.models import load_model
from qkeras.utils import model_quantize
from qkeras.utils import model_save_quantized_weights

import matplotlib.pyplot as plt

X_train = np.load('X_train.npy', allow_pickle=True)
X_test = np.load('X_test.npy', allow_pickle=True)
X_valid = np.load('X_valid.npy', allow_pickle=True)
y_train = np.load('y_train.npy', allow_pickle=True)
y_test = np.load('y_test.npy', allow_pickle=True)
y_valid = np.load('y_valid.npy', allow_pickle=True)

print(X_train.shape)

X_trainzero = np.zeros((X_train.shape[0],100,3))

for x in tqdm(range(len(X_train))):
#     print(len(X_train[x]))
  for y in range(100):
    for z in range(3):
      if y >= len(X_train[x]):
        break
      else:
        X_trainzero[x][y][z] = X_train[x][y][z]

X_validzero = np.zeros((X_valid.shape[0],100,3))

for x in tqdm(range(len(X_valid))):
#     print(len(X_train[x]))
  for y in range(100):
    for z in range(3):
      if y >= len(X_valid[x]):
        break
      else:
        X_validzero[x][y][z] = X_valid[x][y][z]
        
y_labhot = np.zeros((len(y_train),5))

y_labhot.shape

num = 0
for x in y_train:
  if x == 0:
    y_labhot[num][0] = 1
  elif x == 1: 
    y_labhot[num][1] = 1
  elif x == 2: 
    y_labhot[num][2] = 1
  elif x == 3: 
    y_labhot[num][3] = 1
  elif x == 4: 
    y_labhot[num][4] = 1
  num = num + 1

y_labhot

y_vlabhot = np.zeros((len(y_valid),5))

y_vlabhot.shape

num = 0
for x in y_valid:
  if x == 0:
    y_vlabhot[num][0] = 1
  elif x == 1: 
    y_vlabhot[num][1] = 1
  elif x == 2: 
    y_vlabhot[num][2] = 1
  elif x == 3: 
    y_vlabhot[num][3] = 1
  elif x == 4: 
    y_vlabhot[num][4] = 1
  num = num + 1

def makeRoc(features_val, labels_val, labels, model, outputDir='', outputSuffix=''):
    from sklearn.metrics import roc_curve, auc
    labels_pred = model.predict(features_val)
    df = pd.DataFrame()
    fpr = {}
    tpr = {}
    auc1 = {}
    plt.figure(figsize=(10,8))       
    for i, label in enumerate(labels):

        df[label] = labels_val[:,i]
        df[label + '_pred'] = labels_pred[:,i]
        fpr[label], tpr[label], threshold = roc_curve(df[label],df[label+'_pred'])
        auc1[label] = auc(fpr[label], tpr[label])
        plt.plot(fpr[label],tpr[label],label='%s tagger, AUC = %.1f%%'%(label.replace('j_',''),auc1[label]*100.))
        
    plt.plot([0, 1], [0, 1], lw=1, color='black', linestyle='--')
    #plt.semilogy()
    plt.xlabel("Background Efficiency")
    plt.ylabel("Signal Efficiency")
    plt.xlim([-0.05, 1.05])
    plt.ylim(0.001,1.05)
    plt.grid(True)
    plt.legend(loc='lower right')
    plt.figtext(0.25, 0.90,'LSTM ROC Curve',fontweight='bold', wrap=True, horizontalalignment='right', fontsize=14)
    #plt.figtext(0.35, 0.90,'preliminary', style='italic', wrap=True, horizontalalignment='center', fontsize=14) 
    plt.savefig('%sROC_gru%s.pdf'%(outputDir, outputSuffix))
    return labels_pred

def learningCurve(history):
    plt.figure(figsize=(10,8))
    plt.plot(history.history['loss'], linewidth=1)
    plt.plot(history.history['val_loss'], linewidth=1)
    plt.title('Model Loss over Epochs')
    plt.ylabel('Loss')
    plt.xlabel('Epoch')
    plt.legend(['training sample loss','validation sample loss'])
    plt.savefig('GRU_learning_curve.pdf')
    plt.show()
    plt.close()

X_testzero = np.zeros((len(X_test),100,3))

X_testzero[0][0][0]

for x in tqdm(range(len(X_test))):
  for y in range(100):
    for z in range(3):
      if y >= len(X_test[x]):
        break
      else:
        X_testzero[x][y][z] = X_test[x][y][z]
        
y_tlabhot = np.zeros((len(y_test),5))

num = 0
for x in y_test:
  if x == 0:
    y_tlabhot[num][0] = 1
  elif x == 1: 
    y_tlabhot[num][1] = 1
  elif x == 2: 
    y_tlabhot[num][2] = 1
  elif x == 3: 
    y_tlabhot[num][3] = 1
  elif x == 4: 
    y_tlabhot[num][4] = 1
  num = num + 1

shuffler = np.random.permutation(len(X_trainzero))
array1_shuffled = X_trainzero[shuffler]
array2_shuffled = y_labhot[shuffler]

Inputs = Input(shape = (100,3))

x = GRU(32, return_sequences=True)(Inputs)
x = Flatten()(x)
x = Dense(32)(x)
x = Activation('relu', name = 'relu_0')(x)
x = Dropout(rate = 0.5)(x)
x = Dense(16)(x)
x = Activation('relu', name = 'relu_1')(x)
predictions = Dense(5, kernel_initializer='lecun_uniform', name='rnn_densef')(x)
predictions = Activation('softmax', name = 'softmax')(predictions)
gru = Model(inputs=Inputs, outputs=predictions)

gru.summary()

try:
    error=f"model training failed"
    adam = Adam(lr = 0.001)
    gru.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])
    # history = gru.fit(array1_shuffled, array2_shuffled, batch_size = 512, epochs = 50, 
    #                     validation_split = 0.2, shuffle = True, callbacks = None,
    #                     use_multiprocessing=True, workers=4)
    history = gru.fit(array1_shuffled, array2_shuffled, batch_size = 512, epochs = 50, 
                        validation_data=(X_validzero, y_vlabhot), shuffle = True, callbacks = None,
                        use_multiprocessing=True, workers=4)
    labels = ['ant', 'bee', 'butterfly', 'mosquito', 'snail']
    y_pred = makeRoc(X_testzero, y_tlabhot, labels, gru, outputSuffix='two-layer')
    y_keras = gru.predict(X_testzero, batch_size=512)
    auc_score = roc_auc_score(y_tlabhot, y_keras)
    print(auc_score)
    gru.save('./gru/Quickdraw5Class1.h5')
    os.system(f'printf "gru model training finished" | mail -s "hello" chanssen@uw.edu')
except:
    os.system(f'printf "gru model training failed" | mail -s "{error}" chanssen@uw.edu')