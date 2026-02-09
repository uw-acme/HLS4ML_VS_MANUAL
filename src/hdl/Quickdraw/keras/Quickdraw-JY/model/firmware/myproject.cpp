#include <iostream>

#include "myproject.h"
#include "parameters.h"


void myproject(
    hls::stream<input_t> &input_16,
    hls::stream<result_t> &layer8_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_16,layer8_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<gru_13_weight_t, 1152>(w2, "w2.txt");
        nnet::load_weights_from_txt<gru_13_recurrent_weight_t, 49152>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<gru_13_bias_t, 384>(b2, "b2.txt");
        nnet::load_weights_from_txt<gru_13_recurrent_bias_t, 384>(br2, "br2.txt");
        nnet::load_weights_from_txt<dense_27_weight_t, 32768>(w3, "w3.txt");
        nnet::load_weights_from_txt<dense_27_bias_t, 256>(b3, "b3.txt");
        nnet::load_weights_from_txt<dense_28_weight_t, 32768>(w5, "w5.txt");
        nnet::load_weights_from_txt<dense_28_bias_t, 128>(b5, "b5.txt");
        nnet::load_weights_from_txt<rnn_densef_weight_t, 640>(w7, "w7.txt");
        nnet::load_weights_from_txt<rnn_densef_bias_t, 5>(b7, "b7.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=1

    hls::stream<dense_27_result_t> layer3_out("layer3_out");
    #pragma HLS STREAM variable=layer3_out depth=1

    hls::stream<dense_28_result_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=1

    hls::stream<rnn_densef_result_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=1

    nnet::gru_stack<input_t, layer2_t, config2>(input_16, layer2_out, w2, wr2, b2, br2); // gru_13

    nnet::dense<layer2_t, dense_27_result_t, config3>(layer2_out, layer3_out, w3, b3); // dense_27

    nnet::dense<dense_27_result_t, dense_28_result_t, config5>(layer3_out, layer5_out, w5, b5); // dense_28

    nnet::dense<dense_28_result_t, rnn_densef_result_t, config7>(layer5_out, layer7_out, w7, b7); // rnn_densef

    nnet::softmax<rnn_densef_result_t, result_t, softmax_config8>(layer7_out, layer8_out); // rnn_densef_softmax

}

