`include "pkg_sel_gru.svh"
`include "defines.svh"
// `define MODELSIM

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
    input logic signed [WIDTH-1:0] input_v [INPUT_SIZE-1:0],
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

    localparam GRU_INPUT_SIZE=6, GRU_OUTPUT_SIZE=20;

    logic signed[WIDTH-1:0] gru_input_data [GRU_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] gru_output_data [GRU_OUTPUT_SIZE-1:0];
    logic gru_input_valid, gru_output_valid, gru_ready;
    logic [$clog2(TIMESTEPS)-1:0] timestep;

    assign gru_input_valid = input_ready;
    assign dense1_input_data = gru_output_data;
    assign gru_input_data = input_v;
    assign dense1_input_ready =  gru_output_valid;
    assign ready = gru_ready;

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

    denseLayer #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .INPUT_SIZE(DENSE1_INPUT_SIZE),
        .OUTPUT_SIZE(DENSE1_OUTPUT_SIZE),
        .WEIGHTS ( `DENSE_1_PKG::weights ),
        .BIAS    ( `DENSE_1_PKG::bias    )
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
        .WEIGHTS ( `DENSE_2_PKG::weights ),
        .BIAS    ( `DENSE_2_PKG::bias    )
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

`ifndef SYNTHESIS
`define STRINGIFY(x) `"x`"
module Toptagging_tb;
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;
    logic ready;
    // logic move_next;
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 20;
    parameter OUTPUT_SIZE = 1;
    parameter WIDTH = 16;
    parameter NINT = 6;
    parameter NFRAC = WIDTH-NINT;
    logic signed[WIDTH-1:0] input_v [INPUT_SIZE-1:0];   // 1-D: one timestep per clk (matches Toptagging port)
    logic signed[WIDTH-1:0] output_data;
    integer i, j, k, fd, count;
    Toptagging #(.WIDTH(WIDTH), .NINT(NINT)) dut (.*);
    initial begin
        clk=0;
        count=0;
        forever #1 begin
            if (~clk)
                count<=count+1'b1;
            clk<=~clk;
        end
    end
    // max_tests = 19951;
    localparam num_tests = 19951;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests*TIMESTEPS-1];
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
            $readmemb("../testing_data/X_test_16_6.txt", flat_mem);
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
        if (count>30000)
            $stop;
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

        repeat(num_tests) begin
            input_ready<=1;
            for (int j=0; j<TIMESTEPS; j++) begin
                input_v<=x_test[i][j];   // stream one timestep per clk (Toptagging's input_v is 1-D)
                @(posedge clk)
                reset<=0;
            end
            input_ready<=0;
            @(posedge ready)             // wait for DUT to return to ready
            count=0;
            i++;
        end
        input_ready<=0;

        repeat(5) @(posedge clk);
        $stop;
    end
endmodule
`endif