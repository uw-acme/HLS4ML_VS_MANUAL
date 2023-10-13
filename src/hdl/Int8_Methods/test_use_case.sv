`timescale 1ns / 1ps

module test_use_case(
    clk, result_T, result_B
);
    localparam WIDTH = 8, NUM_INPUTS = 1024, SIGN = 1;
    localparam SIGNED_WIDTH = $clog2((2**(WIDTH-1))**2 * NUM_INPUTS)+1,
               UNSIGNED_WIDTH = $clog2((2**(WIDTH)-1)**2 * NUM_INPUTS);
               
               
    input logic clk;
    output logic signed [((SIGN == 1) ? SIGNED_WIDTH-1 : UNSIGNED_WIDTH):0] result_T;
    output logic signed [((SIGN == 1) ? SIGNED_WIDTH-1 : UNSIGNED_WIDTH):0] result_B;
    
    
    
    
    logic signed [WIDTH-1:0]  inputs     [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_T  [NUM_INPUTS-1:0]; // TOP
    logic signed [WIDTH-1:0]  weights_B  [NUM_INPUTS-1:0]; // BOTTOM
    
    localparam  INPUT_FILE = "./input_vals.mem",
                WEIGHT_T_FILE = "./weights_T.mem",
                WEIGHT_B_FILE = "./weights_B.mem";
    
    initial begin
        $readmemh(INPUT_FILE, inputs);
        $readmemh(WEIGHT_T_FILE, weights_T);
        $readmemh(WEIGHT_B_FILE, weights_B);
    end
    
//    chained_adder_tree #(.WIDTH(WIDTH), .NUM_INPUTS(NUM_INPUTS), .SIGN(SIGN)) chains (
//        .inputs, .weights_T, .weights_B, .clk,
//        .result_T, .result_B
//    );
    
    chain #(NUM_INPUTS, WIDTH, SIGN) dut (
        .clk, .inputs, .weights_j(weights_T), .weights_k(weights_B), 
        .out_j(result_T), .out_k(result_B)
    );
    
    
endmodule



module test_use_case_testbench();
    localparam WIDTH = 8, NUM_INPUTS = 1024, SIGN = 1;
    localparam SIGNED_WIDTH = $clog2((2**(WIDTH-1))**2 * NUM_INPUTS)+1,
               UNSIGNED_WIDTH = $clog2((2**(WIDTH)-1)**2 * NUM_INPUTS);
    
    logic clk, write;
    logic signed [((SIGN == 1) ? SIGNED_WIDTH-1 : UNSIGNED_WIDTH):0] result_T;
    logic signed [((SIGN == 1) ? SIGNED_WIDTH-1 : UNSIGNED_WIDTH):0] result_B;
    logic [WIDTH-1:0] data_in;
    logic [$clog2(NUM_INPUTS)-1:0] addr;
    
    localparam CLOCK_PERIOD = 10;
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) clk <= ~clk;
    end
    
    
    test_use_case dut (
        write, clk, addr, data_in, result_T, result_B
    );
    
    initial begin
        addr = 10'd5; data_in = 8'd23; write = 0; repeat(30) @(posedge clk);
    end
    
endmodule
