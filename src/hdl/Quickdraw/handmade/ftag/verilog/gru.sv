`timescale 1ns / 1ps

module gru #(parameter
    WIDTH               = 10,   // data width
    NFRAC               = 6,    // number of fractional bits in data
    x_SIZE              = 6,    // input dimensionality (d)
    TIMESTEPS           = 15,
    y_SIZE              = 120,  // hidden state / output dimensionality (e)

    // lookup table parameters - should just leave these as defaults unless you want to get fancy with it
    MEM_WIDTH           = 18,   // precision of BRAM entries
    MEM_NFRAC           = 18,   // number of fractional bits in BRAM entries
    LOOKUP_WIDTH        = 10,   // width of lookup indices
    LOOKUP_NFRAC        = 7,    // fractional bits in lookup indices
    SIGMOID_BRAM_FILE   = "sigmoid_table_18_18_10_7.dat",
    TANH_BRAM_FILE      = "tanh_table_18_18_10_7.dat"
)(
    input  logic clk,
    input  logic reset,

    // handshake signals
    input  logic input_ready,        // input data valid
    output logic output_ready,       // GRU output is valid
    output logic ready,              // GRU is ready to accept new data from previous layer
    input  logic next_layer_ready,   // next layer is ready for input

    // data input/output
    input  logic signed [WIDTH-1:0] x_t [0:x_SIZE-1],                // x_t: R^{d}
    output logic signed [WIDTH-1:0] y_t [0:y_SIZE-1]                // y_t: R^{e}
)



endmodule
