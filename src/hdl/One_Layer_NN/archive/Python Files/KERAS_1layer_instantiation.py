# HLS4ML Research
#
# This is a Python file that:
#       instantiates the simple one-layer neural network model,
#       loads the model with weights and biases,
#       prints out information reagrding model,
#       runs the model with sample input data obtained from GitHub.
# 
# Last edited: 06/02/21

# Imports
from numpy import loadtxt
from keras.models import load_model
import keras
import tensorflow
from keras import backend as K
from keras.models import model_from_config, Sequential
from keras.models import model_from_json
from keras.models import Sequential
from keras.layers import Dense
from keras.utils.vis_utils import plot_model
import pandas as pd
import numpy as np
import tensorflow as tf
from tensorflow.keras import layers
from tensorflow.keras.layers.experimental import preprocessing

# Instantiates + loads model from KERAS_layer.json
json_file = open('KERAS_1layer.json', 'r')
loaded_model_json = json_file.read()
json_file.close()
loaded_model = model_from_json(loaded_model_json)
loaded_model.load_weights("KERAS_1layer_weights.h5")

# Prints model summary
print()
print("------------------MODEL SUMMARY------------------ \n")
loaded_model.summary()
print()

# Prints information on the layers
print("LAYER #1: input[10] --> input[10]")
print(loaded_model.get_layer('input_1').output)
print()
print("LAYER #2: input[10] --> relu[32][10]")
print(loaded_model.get_layer('fc1_relu').output)
print()
print("LAYER #3: relu[32] --> sigmoid[1]")
print(loaded_model.get_layer('output_sigmoid').output)

# Plots model and saves plot as 'KERAS_1layer_plot.png'
plot_model(loaded_model, to_file = 'KERAS_1layer_plot.png', show_shapes = True, show_layer_names = True)

# Pull 3 rows of data from GitHub
x = pd.read_csv('inputs.csv')
x_array = np.array(x)
y = pd.read_csv('outputs.csv')
y_array = np.array(y)
print()
print("------------------3 ROWS OF INPUT------------------ \n")
print(x_array)
print()
print("------------------3 ROWS OF OUTPUT------------------ \n")
print(y_array)
print()

# Manually computes what the One-Layer Model is doing
# Defines ReLu function
def relu(x):
    return np.maximum(0, x)

# Defines Sigmoid function
def sigmoid(x):
    return 1 / (1 + np.exp(-x))

# Recall: output = activation(dot(input, kernel) + bias)
    # For each layer:
    # 1: Find the input array[0:9] and the weights array [0:9[0:31]]
    # 2: Take the dot product with "np.dot(input, kernel)"
    # 3: Add the bias 1x32
    # 4: Take the activation equation
    # 5: Output

# Layer 1 - 'input_1'
print("------------------INPUT_1------------------ \n")
weight_1 = loaded_model.get_layer('input_1').get_weights()
# No weight, print statement below will output []
#print(weight_1) 
print("No computation, simply input --> input")
print()

# Layer 2 - 'fc1_relu'
print("------------------FC1_RELU------------------ \n")
# Prep arrays
weight = loaded_model.get_layer('fc1_relu').get_weights()
# Inputs
x0 = np.array([-0.5999865, 0.49528775, -0.86947435, -0.7755444, -0.0033234, -0.0033234, 1.5731839, 1.100351, -0.9850744, -0.0719832])
# Weights
kernel = weight[0]
# Bias
bias = weight[1]

# Calculates dot product
dot_product = np.dot(x0, kernel)
print('DOT PRODUCT')
print(dot_product)
print()

# Calculates with bias
added_bias = dot_product + bias
print('BIAS ADDED')
print(added_bias)
print()

# Activation
fc1_relu_output = relu(added_bias)
print("RELU LAYER OUTPUTS")
print(fc1_relu_output)
print()

# Layer 3 - 'output_sigmoid'
print("------------------OUTPUT_SIGMOID------------------ \n")

# Gets kernel and bias
weight_3 = loaded_model.get_layer('output_sigmoid').get_weights()
kernel_3 = weight_3[0]
bias_3 = weight_3[1]

# Calculates dot product
dot_product_3 = np.dot(fc1_relu_output, kernel_3)
print('DOT PRODUCT')
print(dot_product_3)
print()

# Adds bias
added_bias_3 = dot_product_3 + bias_3
print('BIAS ADDED')
print(added_bias_3)
print()

# Passes through activation function
print('FINAL RESULT')
print(sigmoid(added_bias_3))
print()

print("------------------END REPORT------------------ \n")
