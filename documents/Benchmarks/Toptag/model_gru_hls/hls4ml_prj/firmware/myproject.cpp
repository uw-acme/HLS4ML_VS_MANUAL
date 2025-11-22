#include <iostream>

#include "myproject.h"
#include "parameters.h"


void myproject(
    input_t layer1_input[20*6],
    result_t layer7_out[1]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=layer1_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=layer1_input,layer7_out 
    #pragma HLS PIPELINE

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<model_default_t, 360>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 1200>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<model_default_t, 60>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 60>(br2, "br2.txt");
        nnet::load_weights_from_txt<model_default_t, 1280>(w3, "w3.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b3, "b3.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(w6, "w6.txt");
        nnet::load_weights_from_txt<model_default_t, 1>(b6, "b6.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[20];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0

    layer3_t layer3_out[64];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0

    layer5_t layer5_out[64];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0

    layer6_t layer6_out[1];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0

    nnet::gru_stack<input_t, layer2_t, config2>(layer1_input, layer2_out, w2, wr2, b2, br2); // layer1

    nnet::dense<layer2_t, layer3_t, config3>(layer2_out, layer3_out, w3, b3); // layer3

    nnet::relu<layer3_t, layer5_t, relu_config5>(layer3_out, layer5_out); // relu_0

    nnet::dense<layer5_t, layer6_t, config6>(layer5_out, layer6_out, w6, b6); // output_sigmoid

    nnet::sigmoid<layer6_t, result_t, sigmoid_config7>(layer6_out, layer7_out); // output_sigmoid_sigmoid

}

