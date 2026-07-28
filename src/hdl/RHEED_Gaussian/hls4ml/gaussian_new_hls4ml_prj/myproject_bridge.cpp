#ifndef MYPROJECT_BRIDGE_H_
#define MYPROJECT_BRIDGE_H_

#include "firmware/myproject.h"
#include "firmware/nnet_utils/nnet_helpers.h"
#include <algorithm>
#include <map>

// hls-fpga-machine-learning insert bram

namespace nnet {
bool trace_enabled = false;
std::map<std::string, void *> *trace_outputs = NULL;
size_t trace_type_size = sizeof(double);
} // namespace nnet

extern "C" {

struct trace_data {
    const char *name;
    void *data;
};

void allocate_trace_storage(size_t element_size) {
    nnet::trace_enabled = true;
    nnet::trace_outputs = new std::map<std::string, void *>;
    nnet::trace_type_size = element_size;
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_conv2d_batchnorm", (void *) malloc(46*46*6 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_activation", (void *) malloc(46*46*6 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("max_pooling2d", (void *) malloc(11*11*6 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_conv2d_batchnorm_1", (void *) malloc(9*9*8 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_activation_1", (void *) malloc(9*9*8 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("max_pooling2d_1", (void *) malloc(4*4*8 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_conv2d_batchnorm_2", (void *) malloc(2*2*10 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_activation_2", (void *) malloc(2*2*10 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("max_pooling2d_2", (void *) malloc(1*1*10 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_dense", (void *) malloc(15 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_activation_3", (void *) malloc(15 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_dense_1", (void *) malloc(10 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_activation_4", (void *) malloc(10 * element_size)));
    nnet::trace_outputs->insert(std::pair<std::string, void *>("q_dense_2", (void *) malloc(5 * element_size)));
}

void free_trace_storage() {
    for (std::map<std::string, void *>::iterator i = nnet::trace_outputs->begin(); i != nnet::trace_outputs->end(); i++) {
        void *ptr = i->second;
        free(ptr);
    }
    nnet::trace_outputs->clear();
    delete nnet::trace_outputs;
    nnet::trace_outputs = NULL;
    nnet::trace_enabled = false;
}

void collect_trace_output(struct trace_data *c_trace_outputs) {
    int ii = 0;
    for (std::map<std::string, void *>::iterator i = nnet::trace_outputs->begin(); i != nnet::trace_outputs->end(); i++) {
        c_trace_outputs[ii].name = i->first.c_str();
        c_trace_outputs[ii].data = i->second;
        ii++;
    }
}

// hls-fpga-machine-learning insert tb_input_writer

// Wrapper of top level function for Python bridge
void myproject_float(
    float *q_conv2d_batchnorm_input,
    float *layer22_out
) {

    hls::stream<input_t> q_conv2d_batchnorm_input_ap("q_conv2d_batchnorm_input");
    nnet::convert_data<float, input_t, 48*48*1>(q_conv2d_batchnorm_input, q_conv2d_batchnorm_input_ap);

    hls::stream<result_t> layer22_out_ap("layer22_out");

    myproject(q_conv2d_batchnorm_input_ap,layer22_out_ap);

    nnet::convert_data<result_t, float, 5>(layer22_out_ap, layer22_out);
}

void myproject_double(
    double *q_conv2d_batchnorm_input,
    double *layer22_out
) {

    hls::stream<input_t> q_conv2d_batchnorm_input_ap("q_conv2d_batchnorm_input");
    nnet::convert_data<double, input_t, 48*48*1>(q_conv2d_batchnorm_input, q_conv2d_batchnorm_input_ap);

    hls::stream<result_t> layer22_out_ap("layer22_out");

    myproject(q_conv2d_batchnorm_input_ap,layer22_out_ap);

    nnet::convert_data<result_t, double, 5>(layer22_out_ap, layer22_out);
}
}

#endif
