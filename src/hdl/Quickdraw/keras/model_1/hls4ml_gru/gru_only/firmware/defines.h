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
typedef nnet::array<ap_fixed<20,10>, 3*1> input_t;
typedef ap_fixed<20,10> model_default_t;
typedef nnet::array<ap_fixed<20,10>, 32*1> layer2_t;
typedef ap_fixed<20,10> gru_weight_t;
typedef ap_fixed<20,10> gru_recurrent_weight_t;
typedef ap_fixed<20,10> gru_bias_t;
typedef ap_fixed<20,10> gru_recurrent_bias_t;
typedef ap_fixed<18,8> gru_table_t;
typedef ap_uint<1> layer2_index;
typedef nnet::array<ap_fixed<53,33>, 32*1> dense_result_t;
typedef ap_fixed<20,10> dense_weight_t;
typedef ap_fixed<20,10> dense_bias_t;
typedef ap_uint<1> layer4_index;
typedef nnet::array<ap_fixed<20,10>, 32*1> layer6_t;
typedef ap_fixed<18,8> relu_0_table_t;
typedef nnet::array<ap_fixed<46,26>, 16*1> dense_1_result_t;
typedef ap_fixed<20,10> dense_1_weight_t;
typedef ap_fixed<20,10> dense_1_bias_t;
typedef ap_uint<1> layer7_index;
typedef nnet::array<ap_fixed<20,10>, 16*1> layer9_t;
typedef ap_fixed<18,8> relu_1_table_t;
typedef nnet::array<ap_fixed<45,25>, 5*1> rnn_densef_result_t;
typedef ap_fixed<20,10> rnn_densef_weight_t;
typedef ap_fixed<20,10> rnn_densef_bias_t;
typedef ap_uint<1> layer10_index;
typedef nnet::array<ap_fixed<20,10>, 5*1> result_t;
typedef ap_fixed<18,8> softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> softmax_inv_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> softmax_inv_inp_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
