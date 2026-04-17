// `define MODELSIM

`timescale 1ns / 1ps
module Toptagging_top #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    TIMESTEPS = 20,
    OUTPUT_SIZE = 20
)(
    input clk,
    input shiftClk,
    input reset,
    input input_ready,
    output ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_step [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data
);
    logic signed [WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic input_ready_toptagging, output_ready_toptagging, Toptagging_ready;
    assign output_ready = output_ready_toptagging;
    logic [$clog2(TIMESTEPS):0] step=0;
    assign ready = Toptagging_ready;
    always_ff @(posedge shiftClk) begin
        input_ready_toptagging<=0;
        if (input_ready) begin
            input_v[step]<=input_step;
            step<=(step!=(TIMESTEPS-1) ? step+1 : 0);
            input_ready_toptagging<=step==(TIMESTEPS-1);
        end
    end
    Toptagging #(.WIDTH(WIDTH), .NINT(NINT)) toptag (.clk, .reset, .ready(Toptagging_ready), .input_ready(input_ready_toptagging), .output_ready(output_ready_toptagging), .input_v, .output_data);
endmodule

`ifndef SYNTHESIS
`define STRINGIFY(x) `"x`"
module Toptagging_top_tb;
    logic clk, shiftClk;
    logic reset;
    logic input_ready;
    logic output_ready;
    logic ready;
    // logic move_next;
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 20;
    parameter OUTPUT_SIZE = 1;
    parameter WIDTH = 19;
    parameter NINT = 7;
    parameter NFRAC = WIDTH-NINT;
    logic signed[WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] input_step [INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] output_data;
    Toptagging_top #(.WIDTH(WIDTH), .NINT(NINT)) dut (.*);
    initial begin
        clk=0;
        forever #1 clk<=~clk;
    end
    assign shiftClk=clk;
    // max_tests = 19951;
    localparam num_tests = 800;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][INPUT_SIZE-1:0];
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
            $readmemb("../testing_data/X_test_19_7.txt", flat_mem);
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
        
        repeat(num_tests) begin
            input_ready<=1;
            for (int j=0; j<TIMESTEPS; j++) begin
                input_step<=x_test[i][j];
                @(posedge shiftClk)
                reset<=0;
            end
            input_ready<=0;
            input_v<=x_test[i];
            @(posedge ready)
            i++;
        end
        input_ready<=0;
        
        repeat(5) @(posedge clk);
        $stop;
    end
endmodule
`endif