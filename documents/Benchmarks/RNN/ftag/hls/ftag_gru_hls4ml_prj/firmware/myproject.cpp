#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t input_1[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer2_out[N_OUT_2]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=input_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=input_1,layer2_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 2160>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 43200>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<model_default_t, 360>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 360>(br2, "br2.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    nnet::gru_stack<input_t, result_t, config2>(input_1, layer2_out, w2, wr2, b2, br2); // gru_1

}
