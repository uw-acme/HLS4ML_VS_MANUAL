#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <array>
#include <cstddef>
#include <cstdio>
#include <tuple>
#include <tuple>


// hls-fpga-machine-learning insert numbers

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<20,10> input_t;
typedef ap_fixed<20,10> model_default_t;
typedef ap_fixed<46,26> conv1d_result_t;
typedef ap_fixed<20,10> conv1d_weight_t;
typedef ap_fixed<20,10> conv1d_bias_t;
typedef ap_fixed<20,10> layer4_t;
typedef ap_fixed<18,8> relu_0_table_t;
typedef ap_fixed<50,30> conv1d_1_result_t;
typedef ap_fixed<20,10> conv1d_1_weight_t;
typedef ap_fixed<20,10> conv1d_1_bias_t;
typedef ap_fixed<20,10> layer7_t;
typedef ap_fixed<18,8> relu_1_table_t;
typedef ap_fixed<47,27> conv1d_2_result_t;
typedef ap_fixed<20,10> conv1d_2_weight_t;
typedef ap_fixed<20,10> conv1d_2_bias_t;
typedef ap_fixed<20,10> layer10_t;
typedef ap_fixed<18,8> relu_2_table_t;
typedef ap_fixed<20,10> layer11_t;
typedef ap_fixed<20,10> lstm_10_weight_t;
typedef ap_fixed<20,10> lstm_10_recurrent_weight_t;
typedef ap_fixed<20,10> lstm_10_bias_t;
typedef ap_fixed<20,10> lstm_10_recurrent_bias_t;
typedef ap_fixed<18,8> lstm_10_table_t;
typedef ap_uint<1> layer11_index;
typedef ap_fixed<20,10> layer12_t;
typedef ap_fixed<20,10> lstm_11_weight_t;
typedef ap_fixed<20,10> lstm_11_recurrent_weight_t;
typedef ap_fixed<20,10> lstm_11_bias_t;
typedef ap_fixed<20,10> lstm_11_recurrent_bias_t;
typedef ap_fixed<18,8> lstm_11_table_t;
typedef ap_uint<1> layer12_index;
typedef ap_fixed<47,27> rnn_densef_result_t;
typedef ap_fixed<20,10> rnn_densef_weight_t;
typedef ap_fixed<20,10> rnn_densef_bias_t;
typedef ap_uint<1> layer13_index;
typedef ap_fixed<20,10> result_t;
typedef ap_fixed<18,8> output_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_inv_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_inv_inp_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
