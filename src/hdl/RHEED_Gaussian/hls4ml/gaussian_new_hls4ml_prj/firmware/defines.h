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
typedef nnet::array<ap_ufixed<8,0>, 1*1> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef nnet::array<ap_fixed<8,2>, 6*1> layer2_t;
typedef ap_fixed<8,1> weight2_t;
typedef ap_fixed<8,1> bias2_t;
typedef nnet::array<ap_fixed<16,6>, 6*1> layer3_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_linear_table_t;
typedef nnet::array<ap_ufixed<8,2>, 6*1> layer4_t;
typedef ap_fixed<18,8> q_activation_table_t;
typedef nnet::array<ap_ufixed<8,2>, 6*1> layer5_t;
typedef nnet::array<ap_fixed<8,2>, 8*1> layer6_t;
typedef ap_fixed<8,3> weight6_t;
typedef ap_fixed<8,3> bias6_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer7_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_1_linear_table_t;
typedef nnet::array<ap_ufixed<8,2>, 8*1> layer8_t;
typedef ap_fixed<18,8> q_activation_1_table_t;
typedef nnet::array<ap_ufixed<8,2>, 8*1> layer9_t;
typedef nnet::array<ap_fixed<8,2>, 10*1> layer10_t;
typedef ap_fixed<8,3> weight10_t;
typedef ap_fixed<8,3> bias10_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer11_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_2_linear_table_t;
typedef nnet::array<ap_ufixed<8,2>, 10*1> layer12_t;
typedef ap_fixed<18,8> q_activation_2_table_t;
typedef nnet::array<ap_ufixed<8,2>, 10*1> layer13_t;
typedef nnet::array<ap_fixed<8,2>, 15*1> layer15_t;
typedef ap_fixed<8,3> weight15_t;
typedef ap_fixed<8,3> bias15_t;
typedef ap_uint<1> layer15_index;
typedef nnet::array<ap_fixed<16,6>, 15*1> layer16_t;
typedef ap_fixed<18,8> q_dense_linear_table_t;
typedef nnet::array<ap_ufixed<8,2>, 15*1> layer17_t;
typedef ap_fixed<18,8> q_activation_3_table_t;
typedef nnet::array<ap_fixed<8,2>, 10*1> layer18_t;
typedef ap_fixed<8,3> weight18_t;
typedef ap_fixed<8,3> bias18_t;
typedef ap_uint<1> layer18_index;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer19_t;
typedef ap_fixed<18,8> q_dense_1_linear_table_t;
typedef nnet::array<ap_ufixed<8,2>, 10*1> layer20_t;
typedef ap_fixed<18,8> q_activation_4_table_t;
typedef nnet::array<ap_fixed<8,2>, 5*1> layer21_t;
typedef ap_fixed<8,3> weight21_t;
typedef ap_fixed<8,3> bias21_t;
typedef ap_uint<1> layer21_index;
typedef nnet::array<ap_fixed<16,6>, 5*1> result_t;
typedef ap_fixed<18,8> q_dense_2_linear_table_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
