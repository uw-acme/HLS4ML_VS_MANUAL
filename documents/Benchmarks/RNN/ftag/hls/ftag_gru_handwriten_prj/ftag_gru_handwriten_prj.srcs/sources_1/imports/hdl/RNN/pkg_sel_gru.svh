// Package with weights and biases for reset gate dense latency layer
`ifndef RESET_GATE_PKG
    `define RESET_GATE_PKG reset_gate_4_2
`endif

// Package with weights and biases for update gate dense latency layer
`ifndef UPDATE_GATE_PKG
    `define UPDATE_GATE_PKG update_gate_4_2
`endif

// Package with weights and biases for candidate gate dense latency layer
`ifndef CANDIDATE_HIDDEN_STATE_PKG
    `define CANDIDATE_HIDDEN_STATE_PKG candidate_gate_4_2
`endif

// Shift-Add module depth
// The higher the depth, the more complex the weights that will be transformed
// into shift-adds (done in LUTs) rather than DSPs
`ifndef SA_DEPTH
    `define SA_DEPTH 4
`endif

// Determines whether multipliers in dense latency layer translate
// to a single cycle or 3 cycle configuration
`ifndef THREE_CYCLE_MULT
    `define THREE_CYCLE_MULT 0
`endif