#include <iostream>

#include "myproject.h"
#include "parameters.h"


void myproject(
    input_t input_1[100*3],
    result_t layer11_out[5]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=input_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=input_1,layer11_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<gru_weight_t, 1152>(w2, "w2.txt");
        nnet::load_weights_from_txt<gru_recurrent_weight_t, 49152>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<gru_bias_t, 384>(b2, "b2.txt");
        nnet::load_weights_from_txt<gru_recurrent_bias_t, 384>(br2, "br2.txt");
        nnet::load_weights_from_txt<dense_weight_t, 32768>(w3, "w3.txt");
        nnet::load_weights_from_txt<dense_bias_t, 256>(b3, "b3.txt");
        nnet::load_weights_from_txt<dense_1_weight_t, 32768>(w6, "w6.txt");
        nnet::load_weights_from_txt<dense_1_bias_t, 128>(b6, "b6.txt");
        nnet::load_weights_from_txt<dense_2_weight_t, 640>(w9, "w9.txt");
        nnet::load_weights_from_txt<dense_2_bias_t, 5>(b9, "b9.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[128];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0

    dense_result_t layer3_out[256];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0

    layer5_t layer5_out[256];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0

    dense_1_result_t layer6_out[128];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0

    layer8_t layer8_out[128];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0

    dense_2_result_t layer9_out[5];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0

    nnet::gru_stack<input_t, layer2_t, config2>(input_1, layer2_out, w2, wr2, b2, br2); // gru

    nnet::dense<layer2_t, dense_result_t, config3>(layer2_out, layer3_out, w3, b3); // dense

    nnet::relu<dense_result_t, layer5_t, relu_config5>(layer3_out, layer5_out); // activation

    nnet::dense<layer5_t, dense_1_result_t, config6>(layer5_out, layer6_out, w6, b6); // dense_1

    nnet::relu<dense_1_result_t, layer8_t, relu_config8>(layer6_out, layer8_out); // activation_1

    nnet::dense<layer8_t, dense_2_result_t, config9>(layer8_out, layer9_out, w9, b9); // dense_2

    nnet::softmax<dense_2_result_t, result_t, softmax_config11>(layer9_out, layer11_out); // activation_2

}

