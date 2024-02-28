#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 20
#define N_INPUT_2_1 6
#define N_OUT_2 20
#define N_LAYER_3 64
#define N_LAYER_3 64
#define N_LAYER_5 1
#define N_LAYER_5 1

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<18,8> input_t;
typedef ap_fixed<18,8> model_default_t;
typedef ap_fixed<18,8> layer2_t;
typedef ap_fixed<18,8> layer1_table_t;
typedef ap_uint<1> layer2_index;
typedef ap_fixed<18,8> layer3_t;
typedef ap_uint<1> layer3_index;
typedef ap_fixed<18,8> layer4_t;
typedef ap_fixed<18,8> layer3_relu_table_t;
typedef ap_fixed<18,8> layer5_t;
typedef ap_uint<1> layer5_index;
typedef ap_fixed<18,8> result_t;
typedef ap_fixed<18,8> output_sigmoid_sigmoid_table_t;

#endif
