import matplotlib.pyplot as plt
import numpy as np
# generate test data
X_test = np.load('data/X_test.npy', allow_pickle=True)
y_test = np.load('data/y_test.npy', allow_pickle=True)

X_testzero = np.zeros((len(X_test), 100, 3))

for x in range(len(X_test)):
    for y in range(100):
        for z in range(3):
            if y >= len(X_test[x]):
                break
            X_testzero[x][y][z] = X_test[x][y][z]

# encode labels for 5 classes
num_classes = 5
y_labhot = np.zeros((len(y_test),5))

y_labhot.shape

num = 0
for x in y_test:
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
import hls4ml
import plotting
from tensorflow.keras.models import load_model, Model

from os.path import isdir
import subprocess
model = load_model('./lstm/Quickdraw5Class1_edit_8020.h5')
def comp_layer(index):
  
  layer = model.get_layer(index=index)
  sub_model = Model(inputs=layer.input, outputs=layer.output)
  f = open("lstm_config_layer.yaml", "r") #Use yml file for finer tuning
  config_name = yaml.safe_load(f)
  f.close()
  model_name = f"Layer_{index}"
  hls_model_name = hls4ml.converters.convert_from_keras_model(
    sub_model, hls_config=config_name, backend='Vivado', output_dir=f'model_1/hls4ml_lstm/{model_name}', part='xc7vx690tffg1761-2', io_type='io_stream'
  )
  hls_model_name.build(csim=False)
  if (isdir(f'model_1/hls4ml_lstm/{model_name}/myproject_prj/solution1/syn')):
    subprocess.run(f'printf "Compilation of {model_name} successful" | mail -s "LSTM" ceravcal@uw.edu', shell=True)
  else:
    subprocess.run(f'printf "Compilation of {model_name} Failed" | mail -s "LSTM" ceravcal@uw.edu', shell=True)


# from concurrent.futures import ThreadPoolExecutor


# with ThreadPoolExecutor(max_workers=10) as executor:
#     # Submit two tasks to run in parallel
#     for i in range(1,11):
#       executor.submit(comp_layer, i)
#       # executor.submit(comp_layer, 2)
# subprocess.run(f'printf "All threads complete" | mail -s "LSTM" ceravcal@uw.edu', shell=True)
# layer = model.get_layer(index=7)
# layer_input = model.get_layer(index=6).output
# model = Model(inputs=layer.input, outputs=layer.output)
# Now you can use feature_extractor to retrieve the output of 'layer_name'
# y_keras = model.predict(X_testzero, batch_size=512)
# i=0
# while (1):
#   try:
#     lay_out = model.get_layer(index=i).output
#     feature_extractor = Model(inputs=model.input, outputs=layer_output)
#     i+=1
#   except:
#     break
# # exit(0)
# create hls4ml model - higher precision (name)
import yaml
from sys import argv
config_name = hls4ml.utils.config_from_keras_model(model, granularity='Model', default_precision='ap_fixed<20,10>', default_reuse_factor=16384)
config_name['Model']['Strategy'] = 'Resource'
config_name['Flows'] = ['vivado:fifo_depth_optimization']
hls4ml.model.optimizer.get_optimizer('vivado:fifo_depth_optimization').configure(profiling_fifo_depth=100_000)
# f = open("lstm_config_layer.yaml", "r") #Use yml file for finer tuning
# config_name = yaml.safe_load(f)
# f.close()

# for layer in config_name['LayerName'].keys():
#     config_name['LayerName'][layer]['Trace'] = True
#     # implementation: list [latency,stable,argmax,legacy] (Default: stable)
#     config_name['LayerName']['output_softmax']['implementation'] = 'argmax'

print("-----------------------------------")
print("Configuration")
plotting.print_dict(config_name)
print("-----------------------------------")
model_name = f"Full"
hls_model_name = hls4ml.converters.convert_from_keras_model(
    model, hls_config=config_name, backend='Vivado', output_dir=f'model_1/hls4ml_lstm/{model_name}', part='xc7vx690tffg1761-2', io_type='io_stream'
)

hls4ml.utils.plot_model(hls_model_name, show_shapes=True, show_precision=True, to_file='lstm.png')
print("Compiling")
# hls_model_name.compile()
# print("Testing")
# y_hls_name = hls_model_name.predict(X_testzero)
# print("Comparing")
# y_pred_name = np.argmax(y_hls_name, axis=1)
# y_true = np.argmax(y_labhot, axis=1)
# from sklearn.metrics import accuracy_score, precision_score, recall_score
# print("hls4ml name Accuracy: {}".format(accuracy_score(np.argmax(y_labhot, axis=1), np.argmax(y_hls_name, axis=1))))

# from sklearn.metrics import classification_report, confusion_matrix

# print(classification_report(y_true, y_pred_name, target_names=['ant', 'bee', 'butterfly', 'mosquito', 'snail']))
# print(y_hls_name)
# print(y_labhot)

# print(y_pred_name)
# print(y_true)
# 
# yam = open("lstm_config_layer.yaml", "w")
# yaml.safe_dump(config_name, yam)
# yam.close()
hls_model_name.build(csim=False)
from os.path import isdir
import subprocess
if (isdir(f'model_1/hls4ml_lstm/{model_name}/myproject_prj/solution1/syn')):
  subprocess.run(f'printf "Compilation of {model_name} successful" | mail -s "LSTM" ceravcal@uw.edu', shell=True)
else:
  subprocess.run(f'printf "Compilation of {model_name} Failed" | mail -s "LSTM" ceravcal@uw.edu', shell=True)
