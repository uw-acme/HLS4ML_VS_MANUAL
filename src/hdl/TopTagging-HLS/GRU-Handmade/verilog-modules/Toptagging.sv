`include "weights_sel.svh"
`include "defines.svh"
// `define MODELSIM

`ifndef SKIP_GRU
import `GRU_X_WEIGHTS::*;
`endif

import `DENSE2_WEIGHTS::*;
import `DENSE1_WEIGHTS::*;

`timescale 1ns / 1ps
module Toptagging #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    OUTPUT_SIZE = 20,
    TIMESTEPS = 20
)
(
    input clk,
    input reset,
    input input_ready,
    output logic ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data
);

    localparam SIGMOID_BRAM_FILE = "sigmoid_table_18_18_10_7.dat";
    localparam TANH_BRAM_FILE    = "tanh_table_18_18_10_7.dat";

    logic dense1_input_ready, dense1_output_ready;
    localparam DENSE1_INPUT_SIZE=20, DENSE1_OUTPUT_SIZE=64;
    logic signed[WIDTH-1:0] dense1_input_data  [DENSE1_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense1_output_data [DENSE1_OUTPUT_SIZE-1:0];

    logic dense2_input_ready, dense2_output_ready;
    localparam DENSE2_INPUT_SIZE=64, DENSE2_OUTPUT_SIZE=1;
    logic signed[WIDTH-1:0] dense2_input_data  [DENSE2_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense2_output_data [DENSE2_OUTPUT_SIZE-1:0];

    logic signed[WIDTH-1:0] relu_output_data [DENSE1_OUTPUT_SIZE-1:0];

    localparam SIGMOID_INPUT_SIZE=1, SIGMOID_OUTPUT_SIZE=1;
    logic signed[WIDTH-1:0] sigmoid_input_data  [SIGMOID_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] sigmoid_output_data [SIGMOID_OUTPUT_SIZE-1:0];
    logic sigmoid_input_ready, sigmoid_output_ready;

    logic dense1_ready;
    logic dense2_ready;
    logic sigmoid_ready;

`ifdef SKIP_GRU
    // ---------------- GRU bypass for pipe-clean ----------------
    // The GRU normally maps input_v [20][6] -> 20-element vector.
    // Slice the first feature of each timestep so the rest of
    // the pipeline (dense1 -> relu -> dense2 -> sigmoid) gets exercised.
    genvar gi;
    generate
        for (gi = 0; gi < DENSE1_INPUT_SIZE; gi++) begin : gru_bypass
            assign dense1_input_data[gi] = input_v[gi][0];
        end
    endgenerate
    assign dense1_input_ready = input_ready;
    assign ready              = dense1_ready;
`else
    // ---------------- Original path with GRU -------------------
    localparam GRU_INPUT_SIZE=6, GRU_OUTPUT_SIZE=20;
    logic signed[WIDTH-1:0] GRU_input_data [TIMESTEPS-1:0][GRU_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] GRU_output_data [GRU_OUTPUT_SIZE-1:0];
    logic GRU_input_ready, GRU_output_ready, GRU_ready;

    assign GRU_input_data  = input_v;
    assign GRU_input_ready = input_ready;
    assign ready           = GRU_ready;

    GRU #(
        .WIDTH     ( WIDTH           ),
        .NFRAC     ( WIDTH-NINT      ),
        .x_SIZE    ( GRU_INPUT_SIZE  ),
        .TIMESTEPS ( TIMESTEPS       ),
        .y_SIZE    ( GRU_OUTPUT_SIZE )
    ) gru_layer (
        .clk(clk),
        .reset(reset),
        .input_valid      (GRU_input_ready),
        .output_valid     (GRU_output_ready),
        .ready            (GRU_ready),
        .next_layer_ready (dense1_ready),
        .x_t(GRU_input_data),
        .y_t(GRU_output_data)
    );

    always_latch begin : next_dense
        if (GRU_output_ready)
            dense1_input_data = GRU_output_data;
    end
    assign dense1_input_ready = GRU_output_ready;
`endif

    denseLayer #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .INPUT_SIZE(DENSE1_INPUT_SIZE),
        .OUTPUT_SIZE(DENSE1_OUTPUT_SIZE),
        .WEIGHTS ( `DENSE1_WEIGHTS::weights ),
        .BIAS    ( `DENSE1_WEIGHTS::bias    )
    ) dense1 (
        .clk, .reset,
        .ready(dense1_ready),
        .next_layer_ready(dense2_ready),
        .input_ready (dense1_input_ready),
        .output_ready(dense1_output_ready),
        .input_data  (dense1_input_data),
        .output_data (dense1_output_data)
    );

    relu #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .SIZE (DENSE1_OUTPUT_SIZE)
    ) relulayer1 (
        .clk,
        .input_data (dense1_output_data),
        .output_data(relu_output_data)
    );

    assign dense2_input_data  = relu_output_data;
    assign dense2_input_ready = dense1_output_ready;

    denseLayer #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .INPUT_SIZE(DENSE2_INPUT_SIZE),
        .OUTPUT_SIZE(DENSE2_OUTPUT_SIZE),
        .WEIGHTS ( `DENSE2_WEIGHTS::weights ),
        .BIAS    ( `DENSE2_WEIGHTS::bias    )
    ) dense2 (
        .clk, .reset,
        .ready(dense2_ready),
        .next_layer_ready(sigmoid_ready),
        .input_ready (dense2_input_ready),
        .output_ready(dense2_output_ready),
        .input_data  (dense2_input_data),
        .output_data (dense2_output_data)
    );

    assign sigmoid_input_data  = dense2_output_data;
    assign sigmoid_input_ready = dense2_output_ready;

    sigmoid #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .SIZE (DENSE2_OUTPUT_SIZE)
    ) sig_layer (
        .clk, .reset,
        .ready(sigmoid_ready),
        .next_layer_ready(1'b1),
        .input_ready (sigmoid_input_ready),
        .output_ready(sigmoid_output_ready),
        .input_data  (sigmoid_input_data),
        .output_data (sigmoid_output_data)
    );

    assign output_ready = sigmoid_output_ready;
    assign output_data  = sigmoid_output_data[0];
endmodule