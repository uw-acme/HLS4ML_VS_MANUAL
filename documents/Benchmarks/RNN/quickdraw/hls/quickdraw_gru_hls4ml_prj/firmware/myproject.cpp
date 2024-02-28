#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t input_16[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer8_out[N_LAYER_7]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=input_16 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=input_16,layer8_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 1152>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 49152>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<model_default_t, 384>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 384>(br2, "br2.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(w3, "w3.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b3, "b3.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(w5, "w5.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b5, "b5.txt");
        nnet::load_weights_from_txt<model_default_t, 640>(w7, "w7.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(b7, "b7.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[N_OUT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::gru_stack<input_t, layer2_t, config2>(input_16, layer2_out, w2, wr2, b2, br2); // gru_13

    layer3_t layer3_out[N_LAYER_3];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0
    nnet::dense<layer2_t, layer3_t, config3>(layer2_out, layer3_out, w3, b3); // dense_27

    layer5_t layer5_out[N_LAYER_5];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::dense<layer3_t, layer5_t, config5>(layer3_out, layer5_out, w5, b5); // dense_28

    layer7_t layer7_out[N_LAYER_7];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::dense<layer5_t, layer7_t, config7>(layer5_out, layer7_out, w7, b7); // rnn_densef

    nnet::softmax<layer7_t, result_t, softmax_config8>(layer7_out, layer8_out); // rnn_densef_softmax

}
