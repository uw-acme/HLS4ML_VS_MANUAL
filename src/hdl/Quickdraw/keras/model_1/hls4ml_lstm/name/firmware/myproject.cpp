#include <iostream>

#include "myproject.h"
#include "parameters.h"


void myproject(
    input_t input_1[100*3],
    result_t layer15_out[5]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=input_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer15_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=input_1,layer15_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<model_default_t, 2304>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 24576>(w5, "w5.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b5, "b5.txt");
        nnet::load_weights_from_txt<model_default_t, 4096>(w8, "w8.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b8, "b8.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(w11, "w11.txt");
        nnet::load_weights_from_txt<model_default_t, 65536>(wr11, "wr11.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b11, "b11.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(br11, "br11.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(w12, "w12.txt");
        nnet::load_weights_from_txt<model_default_t, 16384>(wr12, "wr12.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b12, "b12.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(br12, "br12.txt");
        nnet::load_weights_from_txt<model_default_t, 320>(w13, "w13.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(b13, "b13.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[95*128];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0

    layer4_t layer4_out[95*128];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0

    layer5_t layer5_out[93*64];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0

    layer7_t layer7_out[93*64];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0

    layer8_t layer8_out[93*64];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0

    layer10_t layer10_out[93*64];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0

    layer11_t layer11_out[93*128];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0

    layer12_t layer12_out[64];
    #pragma HLS ARRAY_PARTITION variable=layer12_out complete dim=0

    layer13_t layer13_out[5];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0

    nnet::conv_1d_cl<input_t, layer2_t, config2>(input_1, layer2_out, w2, b2); // conv1d

    nnet::relu<layer2_t, layer4_t, relu_config4>(layer2_out, layer4_out); // relu_0

    nnet::conv_1d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out, w5, b5); // conv1d_1

    nnet::relu<layer5_t, layer7_t, relu_config7>(layer5_out, layer7_out); // relu_1

    nnet::pointwise_conv_1d_cl<layer7_t, layer8_t, config16>(layer7_out, layer8_out, w8, b8); // conv1d_2

    nnet::relu<layer8_t, layer10_t, relu_config10>(layer8_out, layer10_out); // relu_2

    nnet::lstm_stack<layer10_t, layer11_t, config11>(layer10_out, layer11_out, w11, wr11, b11, br11); // lstm_10

    nnet::lstm_stack<layer11_t, layer12_t, config12>(layer11_out, layer12_out, w12, wr12, b12, br12); // lstm_11

    nnet::dense<layer12_t, layer13_t, config13>(layer12_out, layer13_out, w13, b13); // rnn_densef

    nnet::softmax<layer13_t, result_t, softmax_config15>(layer13_out, layer15_out); // output_softmax

}

