`include "pkg_sel_gru.svh"
`include "defines.svh"
// `define MODELSIM

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
    assign dense1_input_ready = input_ready;
    logic ready_internal;
    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            ready_internal <= 1'b1;
        else if (input_ready)
            ready_internal <= 1'b0;
        else if (sigmoid_output_ready)
            ready_internal <= 1'b1;
    end
    assign ready = ready_internal;
`else
    localparam GRU_INPUT_SIZE=6, GRU_OUTPUT_SIZE=20;

    logic signed[WIDTH-1:0] gru_input_data [GRU_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] gru_output_data [GRU_OUTPUT_SIZE-1:0];
    logic gru_input_valid, gru_output_valid, gru_ready;
    logic [$clog2(TIMESTEPS)-1:0] timestep;

    typedef enum logic [2:0] {
        TOP_IDLE,
        TOP_STREAM_GRU,
        TOP_WAIT_GRU,
        TOP_SEND_DENSE,
        TOP_WAIT_OUTPUT
    } top_state_t;
    top_state_t ps, ns;

    assign ready = (ps == TOP_IDLE);
    assign gru_input_valid = (ps == TOP_STREAM_GRU) || (ps == TOP_WAIT_GRU);
    assign dense1_input_ready = (ps == TOP_SEND_DENSE);

    always_comb begin
        for (int i = 0; i < GRU_INPUT_SIZE; i++) begin
            gru_input_data[i] = input_v[timestep][i];
        end
    end

    gru #(
        .WIDTH     ( WIDTH           ),
        .NFRAC     ( WIDTH-NINT      ),
        .x_SIZE    ( GRU_INPUT_SIZE  ),
        .TIMESTEPS ( TIMESTEPS       ),
        .y_SIZE    ( GRU_OUTPUT_SIZE )
    ) gru_layer (
        .clk(clk),
        .reset(reset),
        .input_valid      (gru_input_valid),
        .output_valid     (gru_output_valid),
        .ready            (gru_ready),
        .next_layer_ready (dense1_ready),
        .x_t(gru_input_data),
        .y_t(gru_output_data)
    );

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            ps <= TOP_IDLE;
            timestep <= '0;
            dense1_input_data <= '{default: '0};
        end else begin
            ps <= ns;

            if (ps == TOP_IDLE && input_ready) begin
                timestep <= '0;
            end else if (ps == TOP_STREAM_GRU && gru_ready && timestep != TIMESTEPS - 1) begin
                timestep <= timestep + 1'b1;
            end

            if (ps == TOP_WAIT_GRU && gru_output_valid) begin
                dense1_input_data <= gru_output_data;
            end
        end
    end

    always_comb begin

        unique case (ps)
            TOP_IDLE: begin
                ns = ps;
                if (input_ready)
                    ns = TOP_STREAM_GRU;
            end

            TOP_STREAM_GRU: begin
                ns = ps;
                if (gru_ready && timestep == TIMESTEPS - 1)
                    ns = TOP_WAIT_GRU;
            end

            TOP_WAIT_GRU: begin
                ns = ps;
                if (gru_output_valid)
                    ns = TOP_SEND_DENSE;
            end

            TOP_SEND_DENSE: begin
                ns = ps;
                if (dense1_ready)
                    ns = TOP_WAIT_OUTPUT;
            end

            TOP_WAIT_OUTPUT: begin
                ns = ps;
                if (sigmoid_output_ready)
                    ns = TOP_IDLE;
            end

            default: begin
                ns = TOP_IDLE;
            end
        endcase
    end
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

    // `ifndef SYNTHESIS
    // always_ff @(posedge clk) begin
    //     if (!reset) begin
    //         if (input_ready || gru_ready || gru_output_valid || dense1_input_ready || sigmoid_output_ready) begin
    //             $display(
    //                 "TOP t=%0t ps=%0d timestep=%0d input_ready=%0b gru_valid=%0b gru_ready=%0b gru_out=%0b dense1_in=%0b dense1_ready=%0b sig_out=%0b",
    //                 $time, ps, timestep, input_ready, gru_input_valid, gru_ready,
    //                 gru_output_valid, dense1_input_ready, dense1_ready, sigmoid_output_ready
    //             );
    //         end
    //     end
    // end
    // `endif

endmodule
