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
typedef nnet::array<ap_fixed<20,10>, 128*1> layer2_t;
typedef ap_fixed<20,10> gru_13_weight_t;
typedef ap_fixed<20,10> gru_13_recurrent_weight_t;
typedef ap_fixed<20,10> gru_13_bias_t;
typedef ap_fixed<20,10> gru_13_recurrent_bias_t;
typedef ap_fixed<18,8> gru_13_table_t;
typedef ap_uint<1> layer2_index;
typedef nnet::array<ap_fixed<48,28>, 256*1> dense_27_result_t;
typedef ap_fixed<20,10> dense_27_weight_t;
typedef ap_fixed<20,10> dense_27_bias_t;
typedef ap_uint<1> layer3_index;
typedef nnet::array<ap_fixed<77,47>, 128*1> dense_28_result_t;
typedef ap_fixed<20,10> dense_28_weight_t;
typedef ap_fixed<20,10> dense_28_bias_t;
typedef ap_uint<1> layer5_index;
typedef nnet::array<ap_fixed<105,65>, 5*1> rnn_densef_result_t;
typedef ap_fixed<20,10> rnn_densef_weight_t;
typedef ap_fixed<20,10> rnn_densef_bias_t;
typedef ap_uint<1> layer7_index;
typedef nnet::array<ap_fixed<20,10>, 5*1> result_t;
typedef ap_fixed<18,8> rnn_densef_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> rnn_densef_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> rnn_densef_softmax_inv_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> rnn_densef_softmax_inv_inp_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
