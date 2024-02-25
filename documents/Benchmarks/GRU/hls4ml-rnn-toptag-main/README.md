# hls4ml-rnn-toptag
This repository contains the training and validation codes relevant for the `hls4ml` RNN top-tag model

## Training and Testing data

The binary classifier training and testing data are stored here:
https://cernbox.cern.ch/index.php/s/0CBn5SsUPb5KDnX


* `x_train.npy` : Training input features. This is a 3D array. For each event there are 20 particles and for each particle there six variables.
* `y_train.npy` : Contains 5 class labels for each event. Use the 5th column for training and testing purpose.


* `x_test.npy` : Testing features. Same format as the training data.
* `y_test.npy` : Same as the training data. Use the 5th column for testing.



## Trained models
Trainied models are stored inside the `models` directory

### Small GRU models
`model_toptag_gru.h5`
* Total parameters: 231
* 1 GRU layer (5 units) + 1 Dense (5 nodes) + 1 output node


### Small LSTM models 


## Training and testing scrips
All the training and testing scripts are inside the `scripts` directory
