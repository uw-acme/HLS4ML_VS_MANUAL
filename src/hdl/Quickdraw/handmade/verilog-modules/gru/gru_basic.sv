
`timescale 1ns / 10ps
`include "pkg_sel_gru.svh"

import `DENSE_0_PKG::*;
import `DENSE_1_PKG::*;
import `OUTPUT_LAYER_PKG::*;

module gru_basic #(parameter
    x_SIZE              = 6,
    h_SIZE              = 120,
    OUTPUT_SIZE         = 3,
    DENSE_0_INPUT_SIZE  = h_SIZE,
    DENSE_0_OUTPUT_SIZE = 50,
    DENSE_1_INPUT_SIZE  = DENSE_0_OUTPUT_SIZE,
    DENSE_1_OUTPUT_SIZE = 10,

    WIDTH               = 16,   // Data width
    NFRAC               = 10,   // Number of fractional bits

    SIGMOID_TABLE_SIZE_POW = 10,
    TANH_TABLE_SIZE_POW    = 9,
    SIGMOID_BRAM_FILE   = "memw10_size1024_sigmoidBRAM.mem",
    TANH_BRAM_FILE      = "memw10_size512_tanhBRAM.mem"
) (
    input clk,
    input reset,

    // Input of the model, sequence length of 15 and diminsion of 6
    // For now the x_t should be change every 18 cycles
    input  logic signed [WIDTH-1:0] x_t [0:x_SIZE-1],
    output logic signed [WIDTH-1:0] y_t [0:h_SIZE-1]
);    
    local parameter SEQUENCE_LENGTH = 15;

    // Internal signals
    logic signed [WIDTH-1:0] x_t_buffer [0:x_SIZE-1];
    logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1];       
    logic signed [WIDTH-1:0] h_t [0:h_SIZE-1];
    logic signed [WIDTH-1:0] gru_out [0:h_SIZE-1];

    genvar i;
    generate
        for (i = 0; i < x_SIZE; i = i + 1) begin
            always_ff @(posedge clk) begin
                if (reset) begin
                    x_t_buffer[i] <= 0;
                end else begin
                    x_t_buffer[i] <= x_t[i];
                end
            end
        end
    endgenerate

    // This file uses static methods to implement the GRU model
    // One gru cell, reuse 15 times for each sequence of inputs

    // for now, ignore the handshake between layers

    // GRU cell (delay 18 cycles)
    gruCell #(
        .WIDTH              ( WIDTH                     ),
        .NFRAC              ( NFRAC                     ),
        .x_SIZE             ( x_SIZE                    ),
        .h_SIZE             ( h_SIZE                    ),
        .SIGMOID_TABLE_SIZE_POW ( SIGMOID_TABLE_SIZE_POW ),
        .TANH_TABLE_SIZE_POW    ( TANH_TABLE_SIZE_POW    ),
        .SIGMOID_BRAM_FILE  ( SIGMOID_BRAM_FILE         ),
        .TANH_BRAM_FILE     ( TANH_BRAM_FILE            )
    ) gru_cell (
        .clk(clk),
        .reset(reset),
        .x_t(x_t_buffer),
        .h_t_minus_1(h_t_minus_1),
        .h_t(h_t)
    );


    logic [4:0] gru_delay_counter = 0;

    always_ff @(posedge clk) begin
        if (reset) begin
            gru_delay_counter <= 0;
        end else begin
            if (gru_delay_counter == 18) begin
                gru_delay_counter <= 0;
            end else begin
                gru_delay_counter <= gru_delay_counter + 1;
            end
        end
    end

    // logics counter that keeps track of the sequence length
    logic [3:0] seq_counter = 0;

    // every time when gru_delay_counter is set to 0, increment the seq_counter

    always_ff @(negedge gru_delay_counter[4]) begin
        if (reset) begin
            seq_counter <= 0;
        end else begin
            if (seq_counter == SEQUENCE_LENGTH - 1) begin // Notice that the sequence length is 15 (hardcoded by the model architecture)
                seq_counter <= 0;
            end else begin
                seq_counter <= seq_counter + 1;
            end
        end
    end

    // Feed x and h_t_minus_1 to the gru cell for 15 times, update h_t_minus_1 with h_t
    // always_ff @(posedge clk) begin
    //     if (reset) begin
    //         h_t_minus_1 <= 0;
    //     end else begin
    //         if (seq_counter == 0) begin
    //             h_t_minus_1 <= 0;
    //             gru_out <= h_t;
    //         end else begin
    //             h_t_minus_1 <= h_t;
    //             // set output of gru to random value
    //             gru_out <= {h_SIZE{1'bx}};
    //         end
    //     end
    // end

    generate
        for (i = 0; i < h_SIZE; i = i + 1) begin
            always_ff @(negedge gru_delay_counter[4]) begin
                if (reset) begin
                    h_t_minus_1[i] <= 0;
                end else begin
                    if (seq_counter == 0) begin
                        h_t_minus_1[i] <= 0;
                        gru_out[i] <= h_t[i];
                    end else begin
                        h_t_minus_1[i] <= h_t[i];
                        // set output of gru to random value
                        gru_out[i] <= 0;
                    end
                end
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        y_t <= gru_out;
    end

endmodule

module gru_basic_tb;
    // Parameters
    localparam N = 6;                // Number of inputs
    localparam WIDTH = 16;        // Width of input words
    localparam NFRAC = 10;            // Number of fractional bits

    // Testbench signals
    logic signed [WIDTH-1:0] dataIn [N-1:0];
    logic clk;
    logic reset;

    // Instantiate the DUT
    ftag_gru #(
        .x_SIZE              ( 6 ),
        .h_SIZE              ( 120 ),
        .OUTPUT_SIZE         ( 3 ),
        .DENSE_0_INPUT_SIZE  ( 120 ),
        .DENSE_0_OUTPUT_SIZE ( 50 ),
        .DENSE_1_INPUT_SIZE  ( 50 ),
        .DENSE_1_OUTPUT_SIZE ( 10 ),
        .WIDTH               ( 16 ),
        .NFRAC               ( 10 ),
        .SIGMOID_TABLE_SIZE_POW ( 10 ),
        .TANH_TABLE_SIZE_POW    ( 9 ),
        .SIGMOID_BRAM_FILE   ( "memw10_size1024_sigmoidBRAM.mem" ),
        .TANH_BRAM_FILE      ( "memw10_size512_tanhBRAM.mem" )
    ) dut (
        .clk(clk),
        .reset(reset),
        .x_t(dataIn),
        .y_t()
    );

    // Clock generation
    initial begin
        clk = 1;
        forever #5 clk = ~clk;  // 100 MHz clock
    end

    // Testbench
    initial begin

        reset <= 1'b1;

        @(posedge clk);
        reset <= 1'b0;

        // Initialize inputs
        dataIn[0] <= 16'b1111111111111111;
        dataIn[1] <= 16'b1111111111111111;
        dataIn[2] <= 16'b1111111111111111;
        dataIn[3] <= 16'b1111111111111111;
        dataIn[4] <= 16'b1111111111111111;
        dataIn[5] <= 16'b1111111111111111;

        // Run the simulation
        repeat(10000) @(posedge clk);
        $finish;
    end

endmodule