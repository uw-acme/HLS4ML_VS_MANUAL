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
typedef ap_fixed<16,10> input_t;
typedef ap_fixed<16,10> model_default_t;
typedef ap_fixed<16,10> layer2_t;
typedef ap_fixed<16,10> gru_weight_t;
typedef ap_fixed<16,10> gru_recurrent_weight_t;
typedef ap_fixed<16,10> gru_bias_t;
typedef ap_fixed<16,10> gru_recurrent_bias_t;
typedef ap_fixed<18,8> gru_table_t;
typedef ap_uint<1> layer2_index;
typedef ap_fixed<40,28> dense_0_result_t;
typedef ap_fixed<16,10> dense_0_weight_t;
typedef ap_fixed<16,10> dense_0_bias_t;
typedef ap_uint<1> layer3_index;
typedef ap_fixed<16,10> layer4_t;
typedef ap_fixed<18,8> dense_0_relu_table_t;
typedef ap_fixed<39,27> dense_1_result_t;
typedef ap_fixed<16,10> dense_1_weight_t;
typedef ap_fixed<16,10> dense_1_bias_t;
typedef ap_uint<1> layer5_index;
typedef ap_fixed<16,10> layer6_t;
typedef ap_fixed<18,8> dense_1_relu_table_t;
typedef ap_fixed<37,25> output_softmax_result_t;
typedef ap_fixed<16,10> output_softmax_weight_t;
typedef ap_fixed<16,10> output_softmax_bias_t;
typedef ap_uint<1> layer7_index;
typedef ap_fixed<16,10> result_t;
typedef ap_fixed<18,8> output_softmax_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_softmax_inv_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_softmax_inv_inp_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
