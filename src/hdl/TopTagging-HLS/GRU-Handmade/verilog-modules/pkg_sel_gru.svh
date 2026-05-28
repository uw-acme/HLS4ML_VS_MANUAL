// Package with weights and biases for reset gate dense latency layer
`ifndef RESET_GATE_PKG
    `define RESET_GATE_PKG reset_gate_16_6
`endif

// Package with weights and biases for update gate dense latency layer
`ifndef UPDATE_GATE_PKG
    `define UPDATE_GATE_PKG update_gate_16_6
`endif

// Package with weights and biases for candidate gate W dense layer
`ifndef CANDIDATE_W_PKG
    `define CANDIDATE_W_PKG candidate_gate_W_16_6
`endif

// Package with weights and biases for candidate gate U dense layer
`ifndef CANDIDATE_U_PKG
    `define CANDIDATE_U_PKG candidate_gate_U_16_6
`endif

// Dense 1
`ifndef DENSE1_WEIGHTS
    `define DENSE1_WEIGHTS layer3_0_16_6
`endif
`define DENSE_1_PKG `DENSE1_WEIGHTS

// Dense 2
`ifndef DENSE2_WEIGHTS
    `define DENSE2_WEIGHTS output_sigmoid_0_16_6
`endif
`define DENSE_2_PKG `DENSE2_WEIGHTS