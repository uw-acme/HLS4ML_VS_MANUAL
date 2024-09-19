// Hand written VNN of GRU ftag model
//
// Architecture:
// _________________________________________________________________
//  Layer (type)                Output Shape              Param #   
// =================================================================
//  input_1 (InputLayer)        [(None, 15, 6)]           0         
                                                                 
//  gru (GRU)                   (None, 120)               46080     
                                                                 
//  dense_0 (Dense)             (None, 50)                6050      
                                                                 
//  dense_1 (Dense)             (None, 10)                510       
                                                                 
//  output_softmax (Dense)      (None, 3)                 33        
                                                                 
// =================================================================
// Total params: 52,673
// Trainable params: 52,673
// Non-trainable params: 0

`timescale 1ns / 10ps
`include "pkg_sel_gru.svh"

import `DENSE_0_PKG::*;
import `DENSE_1_PKG::*;
import `OUTPUT_LAYER_PKG::*;

module ftag_gru #(parameter
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
    output logic signed [WIDTH-1:0] y_t [0:OUTPUT_SIZE-1]
);

    // Internal signals
    logic signed [WIDTH-1:0] x_t_buffer [0:x_SIZE-1];
    logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1];       
    logic signed [WIDTH-1:0] h_t [0:h_SIZE-1];
    logic signed [WIDTH-1:0] gru_out [0:h_SIZE-1];
    logic signed [WIDTH-1:0] dense_0_temp [0:DENSE_0_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] dense_0_out [0:DENSE_0_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] dense_1_temp [0:DENSE_1_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] dense_1_out [0:DENSE_1_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_temp [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_buffer [0:OUTPUT_SIZE-1];

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
            if (seq_counter == 14) begin // Notice that the sequence length is 15 (hardcoded by the model architecture)
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
                        gru_out[i] <= gru_out[i];
                    end
                end
            end
        end
    endgenerate

    // Dense 0 
    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( DENSE_0_INPUT_SIZE                    ),
        .OUTPUT_SIZE    ( DENSE_0_OUTPUT_SIZE                   ),
        .WEIGHTS        ( `DENSE_0_PKG::weights                 ),
        .BIAS           ( `DENSE_0_PKG::bias                    )
    ) dense_0 (
        .clk(clk),
        .reset(reset),
        .input_data(gru_out),
        .output_data(dense_0_temp)
    );

    // relu activation
    reluActivationLayer #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( DENSE_0_OUTPUT_SIZE       )
    ) relu_0 (
        .clk(clk),
        .input_data(dense_0_temp),
        .output_data(dense_0_out)
    );
    
    // Dense 1
    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( DENSE_1_INPUT_SIZE                    ),
        .OUTPUT_SIZE    ( DENSE_1_OUTPUT_SIZE                   ),
        .WEIGHTS        ( `DENSE_1_PKG::weights                 ),
        .BIAS           ( `DENSE_1_PKG::bias                    )
    ) dense_1 (
        .clk(clk),
        .reset(reset),
        .input_data(dense_0_out),
        .output_data(dense_1_temp)
    );

    // relu activation
    reluActivationLayer #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( DENSE_1_OUTPUT_SIZE       )
    ) relu_1 (
        .clk(clk),
        .input_data(dense_1_temp),
        .output_data(dense_1_out)
    );

    // Output layer (dense followed by softmax)
    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( DENSE_1_OUTPUT_SIZE                   ),
        .OUTPUT_SIZE    ( OUTPUT_SIZE                           ),
        .WEIGHTS        ( `OUTPUT_LAYER_PKG::weights            ),
        .BIAS           ( `OUTPUT_LAYER_PKG::bias               )
    ) output_layer (
        .clk(clk),
        .reset(reset),
        .input_data(dense_1_out),
        .output_data(output_temp)
    );


    // Softmax
    //    parameter N = 10,                // Number of inputs
    // parameter WIDTH = 16,            // Width of input words
    // parameter NFRAC = 10,            // Number of fractional bits
    // parameter MEM_WIDTH = 10,        // Width of the memory lookup indices
    // parameter MEM_NFRAC_EXP = 4,        // Number of fractional bits in the memory lookup indices
    // parameter MEM_NFRAC_INV = 2,        // Number of fractional bits in the memory lookup indices
    // parameter TABLE_WIDTH = 18,      // Width of the table entries
    // parameter TABLE_NFRAC = 10             // Number of fractional bits
    softmaxLayer # (
        .N             ( OUTPUT_SIZE ),
        .WIDTH         ( WIDTH       ),
        .NFRAC         ( NFRAC       ),
        .MEM_WIDTH     ( 10          ),
        .MEM_NFRAC_EXP( 4           ),
        .MEM_NFRAC_INV( 2           ),
        .TABLE_WIDTH   ( 18          ),
        .TABLE_NFRAC   ( 10          )
    ) softmax_layer (
        .dataIn ( output_temp ),
        .clk    ( clk        ),
        .reset  ( reset      ),
        .dataOut( output_buffer )
    );

    always_ff @(posedge clk) begin
        y_t <= output_buffer;
    end

endmodule

module ftag_gru_tb;
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