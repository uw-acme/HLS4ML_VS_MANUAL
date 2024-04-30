// Package with weights and biases for pre-sigmoid dense latency layer
`ifndef SIGMOID_PKG
    `define SIGMOID_PKG sigmoid16_8
`endif

// Package with weights and biases for pre-relu dense latency layer
`ifndef RELU_PKG
    `define RELU_PKG relu16_8
`endif

// Determines whether multipliers in dense latency layer translate
// to a single cycle or 3 cycle configuration
`ifndef THREE_CYCLE_MULT
    `define THREE_CYCLE_MULT 0
`endif

// Shift-Add module depth
// The higher the depth, the more complex the weights that will be transformed
// into shift-adds (done in LUTs) rather than DSPs
`ifndef SA_DEPTH
    `define SA_DEPTH 4
`endif