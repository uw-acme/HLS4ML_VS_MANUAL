#include <iostream>

#include "myproject.h"
#include "parameters.h"


void myproject(
    hls::stream<input_t> &q_conv2d_batchnorm_input,
    hls::stream<result_t> &layer22_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=q_conv2d_batchnorm_input,layer22_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<weight2_t, 54>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 6>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight6_t, 432>(w6, "w6.txt");
        nnet::load_weights_from_txt<bias6_t, 8>(b6, "b6.txt");
        nnet::load_weights_from_txt<weight10_t, 720>(w10, "w10.txt");
        nnet::load_weights_from_txt<bias10_t, 10>(b10, "b10.txt");
        nnet::load_weights_from_txt<weight15_t, 150>(w15, "w15.txt");
        nnet::load_weights_from_txt<bias15_t, 15>(b15, "b15.txt");
        nnet::load_weights_from_txt<weight18_t, 150>(w18, "w18.txt");
        nnet::load_weights_from_txt<bias18_t, 10>(b18, "b18.txt");
        nnet::load_weights_from_txt<weight21_t, 50>(w21, "w21.txt");
        nnet::load_weights_from_txt<bias21_t, 5>(b21, "b21.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=2116

    hls::stream<layer3_t> layer3_out("layer3_out");
    #pragma HLS STREAM variable=layer3_out depth=2116

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=2116

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=121

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=81

    hls::stream<layer7_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=81

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=81

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=16

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=4

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=4

    hls::stream<layer12_t> layer12_out("layer12_out");
    #pragma HLS STREAM variable=layer12_out depth=4

    hls::stream<layer13_t> layer13_out("layer13_out");
    #pragma HLS STREAM variable=layer13_out depth=1

    auto& layer14_out = layer13_out;
    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=1

    hls::stream<layer16_t> layer16_out("layer16_out");
    #pragma HLS STREAM variable=layer16_out depth=1

    hls::stream<layer17_t> layer17_out("layer17_out");
    #pragma HLS STREAM variable=layer17_out depth=1

    hls::stream<layer18_t> layer18_out("layer18_out");
    #pragma HLS STREAM variable=layer18_out depth=1

    hls::stream<layer19_t> layer19_out("layer19_out");
    #pragma HLS STREAM variable=layer19_out depth=1

    hls::stream<layer20_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=1

    hls::stream<layer21_t> layer21_out("layer21_out");
    #pragma HLS STREAM variable=layer21_out depth=1

    nnet::conv_2d_cl<input_t, layer2_t, config2>(q_conv2d_batchnorm_input, layer2_out, w2, b2); // q_conv2d_batchnorm

    nnet::linear<layer2_t, layer3_t, linear_config3>(layer2_out, layer3_out); // q_conv2d_batchnorm_linear

    nnet::relu<layer3_t, layer4_t, relu_config4>(layer3_out, layer4_out); // q_activation

    nnet::pooling2d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out); // max_pooling2d

    nnet::conv_2d_cl<layer5_t, layer6_t, config6>(layer5_out, layer6_out, w6, b6); // q_conv2d_batchnorm_1

    nnet::linear<layer6_t, layer7_t, linear_config7>(layer6_out, layer7_out); // q_conv2d_batchnorm_1_linear

    nnet::relu<layer7_t, layer8_t, relu_config8>(layer7_out, layer8_out); // q_activation_1

    nnet::pooling2d_cl<layer8_t, layer9_t, config9>(layer8_out, layer9_out); // max_pooling2d_1

    nnet::conv_2d_cl<layer9_t, layer10_t, config10>(layer9_out, layer10_out, w10, b10); // q_conv2d_batchnorm_2

    nnet::linear<layer10_t, layer11_t, linear_config11>(layer10_out, layer11_out); // q_conv2d_batchnorm_2_linear

    nnet::relu<layer11_t, layer12_t, relu_config12>(layer11_out, layer12_out); // q_activation_2

    nnet::pooling2d_cl<layer12_t, layer13_t, config13>(layer12_out, layer13_out); // max_pooling2d_2

    nnet::dense<layer13_t, layer15_t, config15>(layer14_out, layer15_out, w15, b15); // q_dense

    nnet::linear<layer15_t, layer16_t, linear_config16>(layer15_out, layer16_out); // q_dense_linear

    nnet::relu<layer16_t, layer17_t, relu_config17>(layer16_out, layer17_out); // q_activation_3

    nnet::dense<layer17_t, layer18_t, config18>(layer17_out, layer18_out, w18, b18); // q_dense_1

    nnet::linear<layer18_t, layer19_t, linear_config19>(layer18_out, layer19_out); // q_dense_1_linear

    nnet::relu<layer19_t, layer20_t, relu_config20>(layer19_out, layer20_out); // q_activation_4

    nnet::dense<layer20_t, layer21_t, config21>(layer20_out, layer21_out, w21, b21); // q_dense_2

    nnet::linear<layer21_t, result_t, linear_config22>(layer21_out, layer22_out); // q_dense_2_linear

}

