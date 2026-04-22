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
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<18,8> gru_table_t;
typedef ap_uint<1> layer2_index;
typedef ap_fixed<16,6> layer3_t;
typedef ap_uint<1> layer3_index;
typedef ap_fixed<16,6> layer4_t;
typedef ap_fixed<18,8> dense_0_relu_table_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_uint<1> layer5_index;
typedef ap_fixed<16,6> layer6_t;
typedef ap_fixed<18,8> dense_1_relu_table_t;
typedef ap_fixed<16,6> layer7_t;
typedef ap_uint<1> layer7_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> output_softmax_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_softmax_inv_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_softmax_softmax_inv_inp_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
