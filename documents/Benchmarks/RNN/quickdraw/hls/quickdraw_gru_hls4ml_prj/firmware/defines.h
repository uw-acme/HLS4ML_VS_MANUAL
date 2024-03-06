#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 100
#define N_INPUT_2_1 3
#define N_OUT_2 128
#define N_LAYER_3 256
#define N_LAYER_5 128
#define N_LAYER_7 5
#define N_LAYER_7 5

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<18,8> gru_13_table_t;
typedef ap_uint<1> layer2_index;
typedef ap_fixed<16,6> layer3_t;
typedef ap_uint<1> layer3_index;
typedef ap_fixed<16,6> layer5_t;
typedef ap_uint<1> layer5_index;
typedef ap_fixed<16,6> layer7_t;
typedef ap_uint<1> layer7_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> rnn_densef_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> rnn_densef_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> rnn_densef_softmax_inv_table_t;

#endif
