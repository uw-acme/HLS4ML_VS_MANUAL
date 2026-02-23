#include <iostream>

#include "myproject.h"
#include "parameters.h"


void myproject(
    hls::stream<input_t> &input_1,
    hls::stream<result_t> &layer12_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_1,layer12_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<gru_weight_t, 288>(w2, "w2.txt");
        nnet::load_weights_from_txt<gru_recurrent_weight_t, 3072>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<gru_bias_t, 96>(b2, "b2.txt");
        nnet::load_weights_from_txt<gru_recurrent_bias_t, 96>(br2, "br2.txt");
        nnet::load_weights_from_txt<dense_weight_t, 102400>(w4, "w4.txt");
        nnet::load_weights_from_txt<dense_bias_t, 32>(b4, "b4.txt");
        nnet::load_weights_from_txt<dense_1_weight_t, 512>(w7, "w7.txt");
        nnet::load_weights_from_txt<dense_1_bias_t, 16>(b7, "b7.txt");
        nnet::load_weights_from_txt<rnn_densef_weight_t, 80>(w10, "w10.txt");
        nnet::load_weights_from_txt<rnn_densef_bias_t, 5>(b10, "b10.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=100

    auto& layer3_out = layer2_out;
    hls::stream<dense_result_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=1

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=1

    hls::stream<dense_1_result_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=1

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=1

    hls::stream<rnn_densef_result_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=1

    nnet::gru_stack<input_t, layer2_t, config2>(input_1, layer2_out, w2, wr2, b2, br2); // gru

    nnet::dense<layer2_t, dense_result_t, config4>(layer3_out, layer4_out, w4, b4); // dense

    nnet::relu<dense_result_t, layer6_t, relu_config6>(layer4_out, layer6_out); // relu_0

    nnet::dense<layer6_t, dense_1_result_t, config7>(layer6_out, layer7_out, w7, b7); // dense_1

    nnet::relu<dense_1_result_t, layer9_t, relu_config9>(layer7_out, layer9_out); // relu_1

    nnet::dense<layer9_t, rnn_densef_result_t, config10>(layer9_out, layer10_out, w10, b10); // rnn_densef

    nnet::softmax<rnn_densef_result_t, result_t, softmax_config12>(layer10_out, layer12_out); // softmax

}

