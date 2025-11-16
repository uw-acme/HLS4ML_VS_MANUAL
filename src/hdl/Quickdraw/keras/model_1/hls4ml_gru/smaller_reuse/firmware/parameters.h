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
#include "weights/w4.h"
#include "weights/b4.h"
#include "weights/w7.h"
#include "weights/b7.h"
#include "weights/w10.h"
#include "weights/b10.h"


// hls-fpga-machine-learning insert layer-config
// gru
struct config2_1 : nnet::dense_config {
    static const unsigned n_in = 3;
    static const unsigned n_out = 96;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 144;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 288;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef gru_bias_t bias_t;
    typedef gru_weight_t weight_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseResource_rf_gt_nin_rem0<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config2_2 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 96;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 128;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 3072;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef gru_recurrent_bias_t bias_t;
    typedef gru_recurrent_weight_t weight_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseResource_rf_gt_nin_rem0<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct sigmoid_config2_recr : nnet::activ_config {
    static const unsigned n_in = 64;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 144;
    typedef gru_table_t table_t;
};

struct tanh_config2 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 144;
    typedef gru_table_t table_t;
};

struct config2 : nnet::gru_config {
    typedef model_default_t accum_t;
    typedef gru_weight_t weight_t;  // Matrix
    typedef gru_recurrent_weight_t recurrent_weight_t;  // Matrix
    typedef gru_bias_t bias_t;  // Vector
    typedef gru_recurrent_bias_t recurrent_bias_t;  // Vector
    typedef config2_1 mult_config1;
    typedef config2_2 mult_config2;
    typedef sigmoid_config2_recr ACT_CONFIG_GRU;
    template<class x_T, class y_T, class config_T>
    using activation_recr = nnet::activation::sigmoid<x_T, y_T, config_T>;
    typedef tanh_config2 ACT_CONFIG_T;
    template<class x_T, class y_T, class config_T>
    using activation = nnet::activation::tanh<x_T, y_T, config_T>;
    static const unsigned n_in  = 3;
    static const unsigned n_out = 32;
    static const unsigned n_state = 32;
    static const unsigned n_sequence = 100;
    static const unsigned n_sequence_out = 100;
    static const unsigned io_type = nnet::resource;
    static const unsigned reuse_factor = 144;
    static const bool store_weights_in_bram = false;
    static const bool use_static = true;
    static const bool pytorch_order = false;
};

// dense
struct config4 : nnet::dense_config {
    static const unsigned n_in = 3200;
    static const unsigned n_out = 32;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 128;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 102400;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef dense_bias_t bias_t;
    typedef dense_weight_t weight_t;
    typedef layer4_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseResource_rf_leq_nin<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// relu_0
struct relu_config6 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 128;
    typedef relu_0_table_t table_t;
};

// dense_1
struct config7 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 16;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 128;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 512;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef dense_1_bias_t bias_t;
    typedef dense_1_weight_t weight_t;
    typedef layer7_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseResource_rf_gt_nin_rem0<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// relu_1
struct relu_config9 : nnet::activ_config {
    static const unsigned n_in = 16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 128;
    typedef relu_1_table_t table_t;
};

// rnn_densef
struct config10 : nnet::dense_config {
    static const unsigned n_in = 16;
    static const unsigned n_out = 5;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 80;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 80;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef rnn_densef_bias_t bias_t;
    typedef rnn_densef_weight_t weight_t;
    typedef layer10_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseResource_rf_gt_nin_rem0<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// softmax
struct softmax_config12 : nnet::activ_config {
    static const unsigned n_in = 5;
    static const unsigned n_slice = 5;
    static const unsigned n_outer = 1;
    static const unsigned n_inner = 1;
    static const unsigned parallelization_factor = -1;
    static const unsigned exp_table_size = 1024;
    static const unsigned inv_table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 128;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::argmax;
    static constexpr float exp_scale = 1.0;
    typedef softmax_exp_table_t exp_table_t;
    typedef softmax_inv_table_t inv_table_t;
    typedef model_default_t accum_t;
    typedef softmax_inv_inp_t inv_inp_t;
    typedef ap_fixed<1,0> inp_norm_t;
};



#endif
