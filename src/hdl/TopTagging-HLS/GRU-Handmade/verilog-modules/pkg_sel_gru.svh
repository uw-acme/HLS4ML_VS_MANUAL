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

// Dense 0
`ifndef DENSE_0_PKG
    `define DENSE_0_PKG layer3_pkg_16_6_0
`endif

// Dense 1
`ifndef DENSE_1_PKG
    `define DENSE_1_PKG output_sigmoid_pkg_16_6_0
`endif
