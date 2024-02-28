#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_fixed.h"
#include "ap_int.h"

#include "nnet_utils/nnet_code_gen.h"
#include "nnet_utils/nnet_helpers.h"
// hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_recurrent.h"

// hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/wr2.h"
#include "weights/b2.h"
#include "weights/br2.h"
#include "weights/w3.h"
#include "weights/b3.h"
#include "weights/w5.h"
#include "weights/b5.h"
#include "weights/w7.h"
#include "weights/b7.h"

// hls-fpga-machine-learning insert layer-config
// gru_13
struct config2_1 : nnet::dense_config {
    static const unsigned n_in = N_INPUT_2_1;
    static const unsigned n_out = N_OUT_2 * 3;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 1152;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer2_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config2_2 : nnet::dense_config {
    static const unsigned n_in = N_OUT_2;
    static const unsigned n_out = N_OUT_2 * 3;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 49152;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer2_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct sigmoid_config2_recr : nnet::activ_config {
    static const unsigned n_in = N_OUT_2 * 2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef gru_13_table_t table_t;
};

struct tanh_config2 : nnet::activ_config {
    static const unsigned n_in = N_OUT_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef gru_13_table_t table_t;
};

struct config2 : nnet::gru_config {
    typedef model_default_t accum_t;
    typedef model_default_t weight_t;  // Matrix
    typedef model_default_t bias_t;  // Vector
    typedef config2_1 mult_config1;
    typedef config2_2 mult_config2;
    typedef sigmoid_config2_recr ACT_CONFIG_GRU;
    template<class x_T, class y_T, class config_T>
    using activation_recr = nnet::activation::sigmoid<x_T, y_T, config_T>;
    typedef tanh_config2 ACT_CONFIG_T;
    template<class x_T, class y_T, class config_T>
    using activation = nnet::activation::tanh<x_T, y_T, config_T>;
    static const unsigned n_in  = N_INPUT_2_1;
    static const unsigned n_out = N_OUT_2;
    static const unsigned n_state = N_OUT_2;
    static const unsigned n_sequence = N_INPUT_1_1;
    static const unsigned n_sequence_out = 1;
    static const unsigned io_type = nnet::resource;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const bool use_static = true;
};

// dense_27
struct config3 : nnet::dense_config {
    static const unsigned n_in = 128;
    static const unsigned n_out = 256;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 32768;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer3_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// dense_28
struct config5 : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 128;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 32768;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer5_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// rnn_densef
struct config7 : nnet::dense_config {
    static const unsigned n_in = 128;
    static const unsigned n_out = 5;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 640;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer7_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// rnn_densef_softmax
struct softmax_config8 : nnet::activ_config {
    static const unsigned n_in = 5;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::stable;
    typedef rnn_densef_softmax_exp_table_t exp_table_t;
    typedef rnn_densef_softmax_inv_table_t inv_table_t;
};


#endif
