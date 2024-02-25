
import pandas as pd
import numpy as np
import time
import h5py
import tensorflow as tf
from tensorflow.keras.layers import Input, Dense, Dropout, LSTM, Flatten, GRU,TimeDistributed, Conv1D
from tensorflow.keras.models import Model, Sequential, load_model
from tensorflow.keras.optimizers import Adam, SGD
from tensorflow.keras.callbacks import ModelCheckpoint,EarlyStopping
from sklearn.model_selection import train_test_split
import os
import matplotlib.pyplot as plt
from tensorflow.keras import regularizers
from tensorflow.keras.regularizers import l1
import ast
# from tqdm import tqdm
from sklearn.model_selection import RandomizedSearchCV
from scipy.stats import uniform, truncnorm, randint
from sklearn.metrics import make_scorer
from sklearn.metrics import accuracy_score, precision_score, recall_score
from sklearn.model_selection import RepeatedStratifiedKFold
from scipy.stats import loguniform
# from pandas import read_csv
from tensorflow.keras.wrappers.scikit_learn import KerasClassifier
from datetime import datetime
today = datetime.date(datetime.now())




def makeRoc(features_val, labels_val, labels, model, outputDir='', outputSuffix=''):
    from sklearn.metrics import roc_curve, auc
    labels_pred = model.predict(features_val)
    # print(labels_pred[:100])
    df = pd.DataFrame()
    fpr = {}
    tpr = {}
    auc1 = {}
    plt.figure(figsize=(10,8))       
    for i, label in enumerate(labels):
        if i==5:
            break
        df[label] = labels_val[:,i]
        df[label + '_pred'] = labels_pred[:,i]
        fpr[label], tpr[label], threshold = roc_curve(df[label],df[label+'_pred'])
        auc1[label] = auc(fpr[label], tpr[label])
        plt.plot(fpr[label],tpr[label],label='%s tagger, AUC = %.1f%%'%(label.replace('j_',''),auc1[label]*100.))
        
    plt.plot([0, 1], [0, 1], lw=1, color='black', linestyle='--')
    #plt.semilogy()
    plt.xticks(fontsize=15)
    plt.yticks(fontsize=15)
    plt.xlabel("Background Efficiency", fontsize=20)
    plt.ylabel("Signal Efficiency", fontsize=20)
    plt.xlim([-0.05, 1.05])
    plt.ylim(0.001,1.05)
    plt.grid(True)
    plt.legend(frameon=False,loc='lower right',fontsize=15)
    #plt.figtext(0.25, 0.90,'GRU ROC Curve',fontweight='bold', wrap=True, horizontalalignment='center', fontsize=14)
    plt.title('GRU ROC Curve',fontweight='bold',fontsize=20)
    #plt.figtext(0.35, 0.90,'preliminary', style='italic', wrap=True, horizontalalignment='center', fontsize=14) 
    plt.savefig('%s/ROC_%s.png'%(outputDir, outputSuffix))
    return labels_pred





outdir = "/global/homes/e/elham/rnn_hls4ml/results/"
outpath = outdir+"gru_training_%s/"%today
comd = "mkdir -p "+outpath
os.system(comd)


# inputdir = 'rnn_hls4ml_data_scaled'
inputdir = 'rnn_hls4ml_data_scaled_2class'



x_test = np.load('/global/cscratch1/sd/elham/'+inputdir+'/x_test.npy', 'r')
y_test = np.load('/global/cscratch1/sd/elham/'+inputdir+'/y_test.npy', 'r')
y_test = y_test[:,4:5]
plt.hist(y_test)
plt.savefig('%s/y_test.png'%(outpath))

print("y-shape: ", y_test.shape)

gru_model = load_model("%s/model_toptag_gru.h5"%outpath)

print(gru_model.summary())

# labels = ['j_g', 'j_q', 'j_w', 'j_z', 'j_t', 'j_index']
labels = ['j_t']
y_keras = gru_model.predict(x_test)


y_pred = makeRoc(x_test, y_test, labels, gru_model, outputDir=outpath,outputSuffix='gru')



