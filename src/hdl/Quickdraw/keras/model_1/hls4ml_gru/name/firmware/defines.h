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
typedef ap_fixed<20,10> layer2_t;
typedef ap_fixed<20,10> gru_weight_t;
typedef ap_fixed<20,10> gru_recurrent_weight_t;
typedef ap_fixed<20,10> gru_bias_t;
typedef ap_fixed<20,10> gru_recurrent_bias_t;
typedef ap_fixed<18,8> gru_table_t;
typedef ap_uint<1> layer2_index;
typedef ap_fixed<48,28> dense_result_t;
typedef ap_fixed<20,10> dense_weight_t;
typedef ap_fixed<20,10> dense_bias_t;
typedef ap_uint<1> layer3_index;
typedef ap_fixed<20,10> layer5_t;
typedef ap_fixed<18,8> activation_table_t;
typedef ap_fixed<49,29> dense_1_result_t;
typedef ap_fixed<20,10> dense_1_weight_t;
typedef ap_fixed<20,10> dense_1_bias_t;
typedef ap_uint<1> layer6_index;
typedef ap_fixed<20,10> layer8_t;
typedef ap_fixed<18,8> activation_1_table_t;
typedef ap_fixed<48,28> dense_2_result_t;
typedef ap_fixed<20,10> dense_2_weight_t;
typedef ap_fixed<20,10> dense_2_bias_t;
typedef ap_uint<1> layer9_index;
typedef ap_fixed<32,16> activation_2_exp_table_t;
typedef ap_fixed<32,16> activation_2_inv_table_t;
typedef ap_fixed<20,10> result_t;
typedef ap_fixed<18,8> activation_2_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> activation_2_inv_inp_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
