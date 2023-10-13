`timescale 1ns / 1ps

// if "SIGN" parameter is preciscly 1, the module will treat the 8-bit integers 
// as signed 2's comp numbers (ranging from -128 to 127),
// if NOT 1, the module will interpret the 8-bit integers as unsigned (0 to 255 range)
module macc #(parameter WIDTH = 8, SIGN = 1) (
    input logic signed [WIDTH-1:0] weight_j,
    input logic signed [WIDTH-1:0] weight_k,
    input logic signed [WIDTH-1:0] input_i,
    input logic signed             clk,
    output logic signed [(24+WIDTH)-1:0] ji,
    output logic signed [(24-WIDTH)-1:0] ki
);
    // we have some invariants we have to maintain
    initial assert((WIDTH < 9) && (WIDTH > 0));
    
    // in_i * (w_k + w_j)
    generate
        // A and D are inputs to pre-adder
        if (SIGN == 1)
            xbip_dsp48_macro_0 dsp_slice (
                .CLK(clk),
                .A($signed({weight_j[WIDTH-1], weight_j, {(24 - WIDTH){1'b0}}})),
                .B($signed({{(18-WIDTH){input_i[WIDTH-1]}}, input_i})),
                .C((weight_k[WIDTH-1] ^ input_i[WIDTH-1]) ? ({{(48-2*WIDTH-1){1'b0}}, 1'b1, {(2*WIDTH){1'b0}}}) : 0),
                .D($signed({{(25-WIDTH){weight_k[WIDTH-1]}}, weight_k})),
                .P({ji, ki})
            );
        else
            xbip_dsp48_macro_0 dsp_slice (
                .CLK(clk),
                .A({1'b0, weight_j, {(24 - WIDTH){1'b0}}}),
                .B({{(18-WIDTH){1'b0}}, input_i}),
                .C(48'd0),
                .D({{(25-WIDTH){1'b1}}, weight_k}),
                .P({ji, ki})
            );
        /*
        if (SIGN == 1)
            xbip_dsp48_macro_0 dsp_slice (
                .CLK(clk),
                .A($signed({weight_j, {(25 - WIDTH){1'b0}}}) >>> 1),
                .B($signed({input_i, {(18-WIDTH){1'b0}}})    >>> (18-WIDTH)),
                // *** If the lower bit term is negative, add one to the upper bit term ***
                .C((weight_k[WIDTH-1] ^ input_i[WIDTH-1]) ? (48'd1 << (24 - WIDTH)) : 0),
                .D($signed({weight_k, {(25-WIDTH){1'b0}}})   >>> (25-WIDTH)),
                .P({ji, ki})
            );
        else
            xbip_dsp48_macro_0 dsp_slice (
                .CLK(clk),
                .A({weight_j, {(25 - WIDTH){1'b0}}} >> 1),
                .B({input_i,  {(18-WIDTH){1'b0}}}   >> (18-WIDTH)),
                .C(48'd0),
                .D({weight_k, {(25-WIDTH){1'b0}}}   >> (25-WIDTH)),
                .P({ji, ki})
            );
            */
    endgenerate
    
    
endmodule


module macc_testbench();
    localparam WIDTH = 8;
    localparam SIGN = 1; // 1 for signed two's comp, not 1 for unsigned
    logic clk;
    logic [WIDTH-1:0] weight_j;
    logic [WIDTH-1:0] weight_k;
    logic [WIDTH-1:0] input_i;
    //logic [47:0] accum;     // NO LONGER IN USE (used internally to correct for quirks)
    
    
    logic signed [(24+WIDTH-1):0] ji;
    logic signed [(24-WIDTH-1):0] ki;
    
    macc #(.WIDTH(WIDTH), .SIGN(SIGN)) dut (.weight_j, .weight_k, .input_i, .clk, .ji, .ki);
    
    parameter CLOCK_PERIOD = 10;
    
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) clk <= ~clk;
    end
    
    initial begin
        weight_j = 8'd10;
        weight_k = -8'd8;
        input_i  = 8'd5;
        // P = (j + k)*i + accum = P
        
        repeat(20) @(posedge clk);
        
        $stop;
    end  
endmodule
