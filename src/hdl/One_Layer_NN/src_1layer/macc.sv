// Helper module
//
// Descriptor
//  Module forcing the use of DSP48E1 Slice in order to perform the operation
//      ji = weight_j * input_i
//      ki = weight_k * input_i
//
//  DSP module used is xbip_dsp48_macro_0 with customization options:
//      Operation: '(A+D)*B+C'
//      A port width: '25'      (weight_j)
//      B port width: '18'      (input_i)
//      C port width: '48'      (correction logic)
//      D port width: '25'      (weight_k)
//      P port width: '48'      ({ji, ki} concatenated output)
//      Pipeling stages: (Using default of 3)
//      
//  Correction Logic:
//      If weight_k and input_i are different signs (and neither are zero),
//      then add 1 to the upper bit term (i.e. apply correction).
//      
//  
// Inputs:
//      - weight_j: Fixed point number
//      - weight_k: Fixed point number
//      - input_i: Fixed point number
//      - clk: Clock signal
//
// Outputs:
//      - ji: Result of weight_j * input_i
//      - ki: Result of weight_k * input_i
//
//  Parameters:
//      - WIDTH: Width of fixed point number regardless of fractional bits
//                  (Truncation of result is done outside this module)*
//      - SIGN: If '1', then the number are treated as signed numbers,
//                  otherwise treated as unsigned
//
//      * WIDTH is limited to 0 < 0 < 9

`timescale 1ns / 1ps


module macc #(parameter WIDTH = 8, SIGN = 1) (
    input  logic signed [WIDTH-1:0]      weight_j,
    input  logic signed [WIDTH-1:0]      weight_k,
    input  logic signed [WIDTH-1:0]      input_i,
    input  logic signed                  clk,
    output logic signed [(24+WIDTH-1):0] ji,
    output logic signed [(24-WIDTH-1):0] ki
);
    initial assert((WIDTH > 0) && (WIDTH < 9));
    
    // if weight_k and input_i are different signs (and neither are zero), then add 1 to 
    // the upper bit term (i.e. apply correction)
    logic [47:0] corr;
    assign corr = ((weight_k[WIDTH-1] ^ input_i[WIDTH-1]) & ((weight_k != '0) & (input_i != '0))) ?
                  ({{(48-2*WIDTH-1){1'b0}}, 1'b1, {(2*WIDTH){1'b0}}}) : 0;
    // this is equivalent to adding 1 to upper bit term
    // 48'b00000...0001000...0000
    
    
    // in_i * (w_k + w_j)
    if (SIGN == 1)
        xbip_dsp48_macro_0 dsp_slice (
            .CLK(   clk                                                             ),
            .A(     $signed({weight_j[WIDTH-1], weight_j, {(24 - WIDTH){1'b0}}})    ),
            .B(     $signed({{(18-WIDTH){input_i[WIDTH-1]}}, input_i})              ),
            .C(     corr                                                            ),
            .D(     $signed({{(25-WIDTH){weight_k[WIDTH-1]}}, weight_k})            ),
            .P(     {ji, ki}                                                        )
        );
    else
        // for unsigned, no corrections are necessary
        xbip_dsp48_macro_0 dsp_slice (
            .CLK(   clk                                     ),
            .A(     {1'b0, weight_j, {(24 - WIDTH){1'b0}}}  ),
            .B(     {{(18-WIDTH){1'b0}}, input_i}           ),
            .C(     48'd0                                   ),
            .D(     {{(25-WIDTH){1'b1}}, weight_k}          ),
            .P(     {ji, ki}                                )
        );
    
    
endmodule


module macc_testbench();
    localparam WIDTH = 8,
                SIGN = 1; // 1 for signed two's comp, not 1 for unsigned
    
    logic             clk;
    logic [WIDTH-1:0] weight_j;
    logic [WIDTH-1:0] weight_k;
    logic [WIDTH-1:0] input_i;
    
    
    logic signed [(2*WIDTH-1):0] ji;
    logic signed [(2*WIDTH-1):0] ki;
    
    macc #(.WIDTH(WIDTH)) dut (
        .weight_j,
        .weight_k,
        .input_i,
        .clk,
        .ji,
        .ki
    );
    
    parameter CLOCK_PERIOD = 10;
    
    // Generate Clock
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) clk <= ~clk;
    end
    
    // Main stimulus
    initial begin
        weight_j = 8'd10;
        weight_k = -8'd10;
        input_i  = 8'd1;
        // P = (j + k)*i + accum = P
        repeat(20) @(posedge clk);
        
        $stop;
    end  
endmodule
   