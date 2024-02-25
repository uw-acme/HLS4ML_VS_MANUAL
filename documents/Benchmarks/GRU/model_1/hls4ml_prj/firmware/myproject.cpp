#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t layer1_input[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer6_out[N_LAYER_5]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=layer1_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=layer1_input,layer6_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 90>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 75>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<model_default_t, 15>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 15>(br2, "br2.txt");
        nnet::load_weights_from_txt<model_default_t, 25>(w3, "w3.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(b3, "b3.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(w5, "w5.txt");
        nnet::load_weights_from_txt<model_default_t, 1>(b5, "b5.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[N_OUT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::gru_stack<input_t, layer2_t, config2>(layer1_input, layer2_out, w2, wr2, b2, br2); // layer1

    layer3_t layer3_out[N_LAYER_3];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0
    nnet::dense<layer2_t, layer3_t, config3>(layer2_out, layer3_out, w3, b3); // layer2

    layer4_t layer4_out[N_LAYER_3];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<layer3_t, layer4_t, relu_config4>(layer3_out, layer4_out); // layer2_relu

    layer5_t layer5_out[N_LAYER_5];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::dense<layer4_t, layer5_t, config5>(layer4_out, layer5_out, w5, b5); // output_sigmoid

    nnet::sigmoid<layer5_t, result_t, sigmoid_config6>(layer5_out, layer6_out); // output_sigmoid_sigmoid

}
