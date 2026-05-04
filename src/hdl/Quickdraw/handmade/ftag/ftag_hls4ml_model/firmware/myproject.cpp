#include <iostream>

#include "myproject.h"
#include "parameters.h"


void myproject(
    input_t input_1[15*6],
    result_t layer8_out[3]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=input_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=input_1,layer8_out 
    #pragma HLS PIPELINE

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<gru_weight_t, 2160>(w2, "w2.txt");
        nnet::load_weights_from_txt<gru_recurrent_weight_t, 43200>(wr2, "wr2.txt");
        nnet::load_weights_from_txt<gru_bias_t, 360>(b2, "b2.txt");
        nnet::load_weights_from_txt<gru_recurrent_bias_t, 360>(br2, "br2.txt");
        nnet::load_weights_from_txt<dense_0_weight_t, 6000>(w3, "w3.txt");
        nnet::load_weights_from_txt<dense_0_bias_t, 50>(b3, "b3.txt");
        nnet::load_weights_from_txt<dense_1_weight_t, 500>(w5, "w5.txt");
        nnet::load_weights_from_txt<dense_1_bias_t, 10>(b5, "b5.txt");
        nnet::load_weights_from_txt<output_softmax_weight_t, 30>(w7, "w7.txt");
        nnet::load_weights_from_txt<output_softmax_bias_t, 3>(b7, "b7.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[120];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0

    dense_0_result_t layer3_out[50];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0

    layer4_t layer4_out[50];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0

    dense_1_result_t layer5_out[10];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0

    layer6_t layer6_out[10];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0

    output_softmax_result_t layer7_out[3];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0

    nnet::gru_stack<input_t, layer2_t, config2>(input_1, layer2_out, w2, wr2, b2, br2); // gru
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer2_t>(layer2_out, "gru", 120);
#endif

    nnet::dense<layer2_t, dense_0_result_t, config3>(layer2_out, layer3_out, w3, b3); // dense_0
#ifndef __SYNTHESIS__
    nnet::save_layer_output<dense_0_result_t>(layer3_out, "dense_0", 50);
#endif

    nnet::relu<dense_0_result_t, layer4_t, relu_config4>(layer3_out, layer4_out); // dense_0_relu
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer4_t>(layer4_out, "dense_0_relu", 50);
#endif

    nnet::dense<layer4_t, dense_1_result_t, config5>(layer4_out, layer5_out, w5, b5); // dense_1
#ifndef __SYNTHESIS__
    nnet::save_layer_output<dense_1_result_t>(layer5_out, "dense_1", 10);
#endif

    nnet::relu<dense_1_result_t, layer6_t, relu_config6>(layer5_out, layer6_out); // dense_1_relu
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer6_t>(layer6_out, "dense_1_relu", 10);
#endif

    nnet::dense<layer6_t, output_softmax_result_t, config7>(layer6_out, layer7_out, w7, b7); // output_softmax
#ifndef __SYNTHESIS__
    nnet::save_layer_output<output_softmax_result_t>(layer7_out, "output_softmax", 3);
#endif

    nnet::softmax<output_softmax_result_t, result_t, softmax_config8>(layer7_out, layer8_out); // output_softmax_softmax
#ifndef __SYNTHESIS__
    nnet::save_layer_output<result_t>(layer8_out, "output_softmax_softmax", 3);
#endif

}

