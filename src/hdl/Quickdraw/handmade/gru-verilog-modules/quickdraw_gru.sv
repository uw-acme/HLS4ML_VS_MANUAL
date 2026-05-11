`include "pkg_sel.svh"
`include "defines.svh"

import `RESET_GATE_PKG::*;
import `UPDATE_GATE_PKG::*;
import `CANDIDATE_W_PKG::*;
import `CANDIDATE_U_PKG::*;
import `DENSE3_WEIGHTS::*;
import `DENSE2_WEIGHTS::*;
import `DENSE1_WEIGHTS::*;

`timescale 1ns / 1ps
module quickdraw_gru #(parameter
    WIDTH = 20,
    NINT = 10,
    INPUT_SIZE = 3,
    OUTPUT_SIZE = 5,
    TIMESTEPS = 100
)(
    input  logic clk,
    input  logic reset,
    input  logic input_ready,
    output logic ready,
    output logic output_ready,
    input  logic signed [WIDTH-1:0] input_v [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data
);

    localparam PIPELINING = 16;
    localparam PIPE_OUT = 0;

    localparam GRU_INPUT_SIZE=INPUT_SIZE, GRU_OUTPUT_SIZE=128;
    logic signed [WIDTH-1:0] gru_input_data [GRU_INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] gru_output_data [GRU_OUTPUT_SIZE-1:0];

    logic dense1_input_ready, dense1_output_ready;
    localparam DENSE1_INPUT_SIZE=GRU_OUTPUT_SIZE, DENSE1_OUTPUT_SIZE=256;
    logic signed [WIDTH-1:0] dense1_input_data [DENSE1_INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] dense1_output_data [DENSE1_OUTPUT_SIZE-1:0];

    logic dense2_input_ready, dense2_output_ready;
    localparam DENSE2_INPUT_SIZE=DENSE1_OUTPUT_SIZE, DENSE2_OUTPUT_SIZE=128;
    logic signed [WIDTH-1:0] dense2_input_data [DENSE2_INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] dense2_output_data [DENSE2_OUTPUT_SIZE-1:0];

    logic dense3_input_ready, dense3_output_ready;
    localparam DENSE3_INPUT_SIZE=DENSE2_OUTPUT_SIZE, DENSE3_OUTPUT_SIZE=5;
    logic signed [WIDTH-1:0] dense3_input_data [DENSE3_INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] dense3_output_data [DENSE3_OUTPUT_SIZE-1:0];

    logic signed [WIDTH-1:0] relu1_output_data [DENSE1_OUTPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] relu2_output_data [DENSE2_OUTPUT_SIZE-1:0];

    localparam softmax_INPUT_SIZE=DENSE3_OUTPUT_SIZE, softmax_OUTPUT_SIZE=OUTPUT_SIZE;
    logic signed [WIDTH-1:0] softmax_input_data [softmax_INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] softmax_output_data [softmax_OUTPUT_SIZE-1:0];
    logic softmax_input_ready, softmax_output_ready;

    assign gru_input_data = input_v;
    assign gru_input_ready = input_ready;
    logic gru_ready;
    logic dense1_ready;
    logic dense2_ready;
    logic softmax_ready;
    assign ready = gru_ready;

    gru #(
        .WIDTH          ( WIDTH             ), 
        .NFRAC          ( WIDTH-NINT        ),
        .x_SIZE         ( GRU_INPUT_SIZE    ),
        .TIMESTEPS      ( TIMESTEPS         ),
        .y_SIZE         ( GRU_OUTPUT_SIZE   )
    ) gru_layer (
        .clk,
        .reset,
        .ready          ( gru_ready         ),
        .next_layer_ready(dense1_ready      ),
        .input_valid    ( gru_input_ready   ),
        .output_valid   ( gru_output_ready  ),
        .x_t            ( gru_input_data    ),
        .y_t            ( gru_output_data   )
    );
    always_latch begin : next_dense
        if (gru_output_ready)
            dense1_input_data = gru_output_data;
    end
    assign dense1_input_ready = gru_output_ready;
    denseLayer #(
        .WIDTH       (WIDTH), 
        .NFRAC       (WIDTH-NINT), 
        .INPUT_SIZE  (DENSE1_INPUT_SIZE), 
        .OUTPUT_SIZE (DENSE1_OUTPUT_SIZE),
        .WEIGHTS     ( `DENSE1_WEIGHTS::weights ),
        .BIAS        ( `DENSE1_WEIGHTS::bias    )
        ) dense1 (
        .clk,
        .reset,
        .ready(dense1_ready),
        .next_layer_ready(dense2_ready),
        .input_ready  (  dense1_input_ready),
        .output_ready (  dense1_output_ready),
        .input_data   (  dense1_input_data ),
        .output_data  (  dense1_output_data)
        );

    relu #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( WIDTH-NINT         ),
        .SIZE       ( DENSE1_OUTPUT_SIZE )
    ) relulayer1 (
        .clk,
        .input_data ( dense1_output_data ),
        .output_data( relu1_output_data )
    );
    
        
    assign dense2_input_data = relu1_output_data;
    assign dense2_input_ready = dense1_output_ready;
    denseLayer #(
        .WIDTH(WIDTH), 
        .NFRAC(WIDTH-NINT), 
        .INPUT_SIZE(DENSE2_INPUT_SIZE), 
        .OUTPUT_SIZE(DENSE2_OUTPUT_SIZE),
        .WEIGHTS     ( `DENSE2_WEIGHTS::weights ),
        .BIAS        ( `DENSE2_WEIGHTS::bias    )
        ) dense2 (
        .clk,
        .reset,
        .ready(dense2_ready),
        .next_layer_ready(softmax_ready),
        .input_ready  (  dense2_input_ready),
        .output_ready (  dense2_output_ready),
        .input_data   (  dense2_input_data ),
        .output_data  (  dense2_output_data)
    );
    
    relu #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( WIDTH-NINT         ),
        .SIZE       ( DENSE2_OUTPUT_SIZE )
    ) relulayer2 (
        .clk,
        .input_data ( dense2_output_data ),
        .output_data( relu2_output_data )
    );

    assign dense3_input_data = relu2_output_data;
    assign dense3_input_ready = dense2_output_ready;
    denseLayer #(
        .WIDTH(WIDTH), 
        .NFRAC(WIDTH-NINT), 
        .INPUT_SIZE(DENSE3_INPUT_SIZE), 
        .OUTPUT_SIZE(DENSE3_OUTPUT_SIZE),
        .WEIGHTS     ( `DENSE3_WEIGHTS::weights ),
        .BIAS        ( `DENSE3_WEIGHTS::bias    )
        ) dense3 (
        .clk,
        .reset,
        .ready(dense3_ready),
        .next_layer_ready(softmax_ready),
        .input_ready  (  dense3_input_ready),
        .output_ready (  dense3_output_ready),
        .input_data   (  dense3_input_data ),
        .output_data  (  dense3_output_data)
    );

    assign softmax_input_data = dense3_output_data;
    assign softmax_input_ready = dense3_output_ready;
    softmaxLayerNeg #(
        .WIDTH(WIDTH), 
        .NFRAC(WIDTH-NINT),  
        .N(DENSE3_OUTPUT_SIZE),
        .EXP_TABLE_PATH("weights_n_tables/exp_neg_table_18_17_10_6.dat"),
        .INVERT_TABLE_PATH("weights_n_tables/pos_invert_table_18_17_10_7.dat")
    ) soft_layer
    (
        .clk,
        .reset,
        .ready(softmax_ready),
        .next_layer_ready(1'b1),
        .input_ready  (  softmax_input_ready),
        .output_ready (  softmax_output_ready),
        .input_data   (  softmax_input_data ),
        .output_data  (  softmax_output_data));

    assign output_ready = softmax_output_ready;
    assign output_data = softmax_output_data[0];
endmodule
`define STRINGIFY(x) `"x`"

`define MODELSIM

`ifndef SYNTHESIS
module quickdraw_gru_tb();
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;
    // logic move_next;
    parameter INPUT_SIZE = 3, OUTPUT_SIZE = 5, TIMESTEPS = 100, WIDTH = 16;
    parameter NINT = 6;
    parameter NFRAC = WIDTH-NINT;
    logic signed[WIDTH-1:0] input_v [INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] output_data;
    logic ready;
    quickdraw_gru #(.WIDTH(WIDTH), .NINT(NINT)) dut (.*);
    initial begin
        clk=0;
        forever #1 clk<=~clk;
    end
    // max_tests = 19951;
    localparam num_tests = 5;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][INPUT_SIZE-1:0];
    // logic signed [WIDTH-1:0] x_final [num_tests-1:0][TIMESTEPS]
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests*TIMESTEPS-1];
    integer i, j, k, fd;
    `ifndef TESTFILE
        `define TESTFILE "X_test_16_6.txt"
    `endif
    `ifndef RESULTSFILE
        `define RESULTSFILE "gen_results.csv"
    `endif
    
    initial begin
        `ifndef MODELSIM
        $readmemb(`STRINGIFY(`TESTFILE), flat_mem);
        `else
            $readmemb("testing_data/X_test_16_6.txt", flat_mem);
        `endif
        for (i=0; i<num_tests; i++) begin : tests
            for (j=0; j<TIMESTEPS; j++) begin : steps
                for (k=0; k<INPUT_SIZE; k++) begin : nums
                    x_test[i][j][k] = flat_mem[i*INPUT_SIZE*TIMESTEPS+(j+1)*INPUT_SIZE-k-1];
                end
            end
        end
    end


    localparam write_file=1;
    real out;
    function real to_real(input logic signed [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction
    genvar g;
    generate
    // for (g=0; g<OUTPUT_SIZE; g++) begin
    //     assign out[g] = to_real(ht[g]);
    // end
    assign out=to_real(output_data);
    endgenerate
    always_ff @(posedge clk) begin
        if (write_file&&output_ready) begin
            // for (int ii = 0; ii < OUTPUT_SIZE-1; ii++) begin
            //     $fwrite(fd, "%.15f,",  out[ii]);
            // end
            $fwrite(fd, "%.15f\n", out);
        end
    end
    initial begin
        if (write_file) begin
            `ifndef MODELSIM
                fd = $fopen(`STRINGIFY(`RESULTSFILE), "w");  // "w" = write mode, "a" = append
            `else
                fd = $fopen("gen_results.csv", "w");  // "w" = write mode, "a" = append
            `endif
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        reset=1;
        input_ready<=0;
        @(posedge clk);
        @(posedge clk);
        reset=0;
        i=0;
        input_ready<=1;
        repeat(num_tests) begin
            for (j=0; j<TIMESTEPS; j++) begin
                input_v<=x_test[i][j];
                @(posedge ready)
                reset=0;
            end
            // @(posedge output_ready)
            i++;
        end
        input_ready<=0;
        
        repeat(5) @(posedge clk);
        $stop;
    end
endmodule
`endif

// test module with randomly generated input
module quickdraw_gru_tb_simple();

    logic clk, reset, input_ready, output_ready, ready;
    logic signed [WIDTH-1:0] input_v [INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] output_data;

    quickdraw_gru
        #(.WIDTH(WIDTH), .NINT(NINT), .INPUT_SIZE(INPUT_SIZE), .OUTPUT_SIZE(OUTPUT_SIZE), .TIMESTEPS(TIMESTEPS))
        dut (.*);

    localparam PERIOD = 10;
    initial begin
       clk <= 1'b1;
       forever #(PERIOD/2) clk <= ~clk;
    end

    integer i;
    initial begin
        reset <= 1; repeat(1) @(posedge clk);

        reset <= 0;
        input_ready <= 1;

        x_t <= {{32'b0},
                {32'b0},
                {32'b0},
                {32'b0},
                {32'b0},
                {32'b0}
               };

        repeat(1000) @(posedge clk);

        $stop;
    end

endmodule