// Helper module
//
// Descriptor
//  Module forcing the use of DSP48E1 Slice in order to perform three multiplication
//      operations. Bit width MUST be <= 5.
//
//  DSP module used is dsp48_macro_0 with customization options:
//      Operation: '(A+D)*B+C'
//      A port width: '25'      (weight_x (shifted) + weight_y)
//      B port width: '18'      (input)
//      C port width: '48'      (correction)
//      D port width: '25'      (weight_z)
//      P port width: '48'      ({ax, ay, az} concatenated output)
//      
//  Correction Logic:
//      Applies conditional +1 to certain terms depending on signs of weights and
//      whether certain terms are zero (different behavior from positive numbers).
//      
//  
// Inputs:
//      - weight_x: Fixed point number
//      - weight_y: Fixed point number
//      - weight_z: Fixed point number
//      - input_a: Fixed point number
//      - clk: Clock signal
//
// Outputs:
//      - out_ax: Result of input_a * weight_x
//      - out_ay: Result of input_a * weight_y
//      - out_az: Result of input_a * weight_z

`timescale 1ns / 1ps

// Integers are signed 2's comp numbers
module macc_small #(parameter WIDTH = 5) (
    input logic signed  [WIDTH-1:0]     weight_x,
    input logic signed  [WIDTH-1:0]     weight_y,
    input logic signed  [WIDTH-1:0]     weight_z,
    input logic signed  [WIDTH-1:0]     input_a,
    input logic                         clk,
    output logic signed [2*WIDTH-1:0]   out_ax,
    output logic signed [2*WIDTH-1:0]   out_ay,
    output logic signed [2*WIDTH-1:0]   out_az
);
    initial assert((WIDTH <= 5) && (WIDTH > 0));
    
    // =================================================
    // Pre-adder inputs (pA + pD), contains 3 weights
    wire signed [24:0] portA;
    wire signed [24:0] portA_w5;   // WIDTH == 5
    wire signed [24:0] portA_wn5;  // WIDTH != 5
    wire signed [24:0] portD;
    
    assign portA_w5 =                                 {weight_x, {(4*WIDTH){1'b0}}} + 
                      {{(3*WIDTH){weight_y[WIDTH-1]}}, weight_y, {(2*WIDTH){1'b0}}};
    
    // need to sign extend weight_x if WIDTH != 5
    assign portA_wn5 = {{(25-(5*WIDTH)){weight_x[WIDTH-1]}}, weight_x, {(4*WIDTH){1'b0}}} + 
                       {{(25-(3*WIDTH)){weight_y[WIDTH-1]}}, weight_y, {(2*WIDTH){1'b0}}};
    
    // A and D are inputs to pre-adder (weight_x (<<'ed) + weight_y (less <<'ed) + weight_z)
    assign portA = (WIDTH == 5) ? portA_w5 : portA_wn5;
    
    assign portD = {{(25-WIDTH){weight_z[WIDTH-1]}}, weight_z};
    
    // =================================================
    // input port
    logic signed [17:0] portB;
    assign portB = {{(18-WIDTH){input_a[WIDTH-1]}}, input_a};
    
    // =================================================
    // filler bits
    logic [48-(6*WIDTH)-1:0] extra;
    
    // =================================================
    // correction logic
    logic [2*WIDTH-1:0]         ax_corr;
    logic [2*WIDTH-1:0]         ay_corr;
    logic [(48-(6*WIDTH)-1):0]  filler_corr_front;
    logic [2*WIDTH-1:0]         filler_corr_back;
    logic                       a_zero,
                                y_zero,
                                z_zero;
    
    // detect zeros
    assign a_zero = input_a  == '0;
    assign y_zero = weight_y == '0;
    assign z_zero = weight_z == '0;
    
    // correction logic
    assign ax_corr = (weight_y[WIDTH-1] ^ input_a[WIDTH-1]) & ~(y_zero | a_zero);
    assign ay_corr = (weight_z[WIDTH-1] ^ input_a[WIDTH-1]) & ~(z_zero | a_zero);
    
    // filler of zeros for correction term
    assign filler_corr_front = '0;
    assign filler_corr_back  = '0;
    
    // =================================================
    // DSP slice
    xbip_dsp48_macro_0 dsp_slice (
        .CLK ( clk                                                      ),
        .A   ( portA                                                    ),
        .B   ( portB                                                    ),
        .C   ( {filler_corr_front, ax_corr, ay_corr, filler_corr_back}  ),
        .D   ( portD                                                    ),
        .P   ( {extra, out_ax, out_ay, out_az}                          )
    );
    
endmodule


module macc_small_testbench();
    localparam WIDTH = 4;
    logic signed  [WIDTH-1:0]     weight_x;
    logic signed  [WIDTH-1:0]     weight_y;
    logic signed  [WIDTH-1:0]     weight_z;
    logic signed  [WIDTH-1:0]     input_a;
    logic                         clk;
    logic signed  [2*WIDTH-1:0]   out_ax;
    logic signed  [2*WIDTH-1:0]   out_ay;
    logic signed  [2*WIDTH-1:0]   out_az;
    
    
    // Device under test
    macc_small #(.WIDTH(WIDTH)) dut (
        .weight_x,
        .weight_y,
        .weight_z,
        .input_a,
        .clk,
        .out_ax,
        .out_ay,
        .out_az
    );
    
    parameter CLOCK_PERIOD = 10;
    
    // Generate Clock
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) clk <= ~clk;
    end
    
    // Main Stimulus
    initial begin
        weight_x = 4'd3; weight_y = 4'd4; weight_z = 4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = 4'd3; weight_y = 4'd4; weight_z = 4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = 4'd3; weight_y = 4'd4; weight_z = -4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = 4'd3; weight_y = 4'd4; weight_z = -4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = 4'd3; weight_y = -4'd4; weight_z = 4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = 4'd3; weight_y = -4'd4; weight_z = 4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = 4'd3; weight_y = -4'd4; weight_z = -4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = 4'd3; weight_y = -4'd4; weight_z = -4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = 4'd4; weight_z = 4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = 4'd4; weight_z = 4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = 4'd4; weight_z = -4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = 4'd4; weight_z = -4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = -4'd4; weight_z = 4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = -4'd4; weight_z = 4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = -4'd4; weight_z = -4'd5;
        input_a =  4'd2;
        repeat(20) @(posedge clk);
        
        weight_x = -4'd3; weight_y = -4'd4; weight_z = -4'd5;
        input_a =  -4'd2;
        repeat(20) @(posedge clk);
        
        $stop;
    end  
endmodule
   