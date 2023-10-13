`timescale 1ns / 1ps

module chained_macc #(parameter WIDTH = 8, SIGN = 1)(
    input logic signed [WIDTH-1:0]       weight_j,
    input logic signed [WIDTH-1:0]       weight_k,
    input logic signed [WIDTH-1:0]       input_i,
    input logic signed [(24+WIDTH-1):0]  ji_accum,
    input logic signed [(24-WIDTH-1):0]  ki_accum,
    input logic signed                   clk,
    output logic signed [(24+WIDTH-1):0] ji,
    output logic signed [(24-WIDTH-1):0] ki
);
    // we have some invariants we have to maintain
    initial assert((WIDTH < 9) & (WIDTH > 0));
    
    // in_i * (w_k + w_j)
    generate
        if (SIGN == 1)
            xbip_dsp48_macro_0 dsp_slice (
                .CLK(clk),
                .A($signed({weight_j[WIDTH-1], weight_j, {(24 - WIDTH){1'b0}}})),
                .B($signed({{(18-WIDTH){input_i[WIDTH-1]}}, input_i})),
                .C({ji_accum, ki_accum}),
                .D($signed({{(25-WIDTH){weight_k[WIDTH-1]}}, weight_k})),
                .P({ji, ki})
            );
        else
            xbip_dsp48_macro_0 dsp_slice (
                .CLK(clk),
                .A({1'b0, weight_j, {(24 - WIDTH){1'b0}}}),
                .B({{(18-WIDTH){1'b0}}, input_i}),
                .C({ji_accum, ki_accum}),
                .D({{(25-WIDTH){1'b1}}, weight_k}),
                .P({ji, ki})
            );
    endgenerate
endmodule



module chained_macc_testbench();
    localparam WIDTH = 8;
    localparam SIGN = 1; // 1 for signed two's comp, not 1 for unsigned
    
    logic clk;
    logic [WIDTH-1:0] weight_j;
    logic [WIDTH-1:0] weight_k;
    logic [WIDTH-1:0] input_i;
    
    /*
      Note: For a WIDTH 'W', the range of expected values for the '_accum' terms is:
              (-2^(W-1))*(2^(W-1) - 1)    to   (-2^(W-1))*(-2^(W-1))       (SIGNED)
              0                           to   (2^W - 1)*(2^W - 1)         (UNSIGNED)
      So the range for INT8 is -16,256 to 16,384   (-128*127 to -128*-128) for signed 
      and 0 to 65,025 for unsigned
    */
    logic signed [(24+WIDTH-1):0] ji_accum;
    logic signed [(24-WIDTH-1):0] ki_accum;
    
    logic signed [(24+WIDTH-1):0] ji;
    logic signed [(24-WIDTH-1):0] ki;
    
    chained_macc #(.WIDTH(WIDTH), .SIGN(SIGN)) dut (
        .weight_j, .weight_k, .input_i, .ji_accum, .ki_accum, .clk, .ji, .ki
    );
    
    parameter CLOCK_PERIOD = 10;
    
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) clk <= ~clk;
    end
    
    initial begin
        weight_j = 8'd50;
        weight_k = -8'd20;
        input_i  = 8'd3;
        {ji_accum, ki_accum} = {32'd3, 16'd2};
        
        repeat(20) @(posedge clk);
        
        $stop;
    end  
endmodule

