/*
 The relu activation layer (no dense).
*/

`timescale 1ns / 1ps
module relu #(parameter
                    WIDTH           = 16, // width of fixed point numbers
                    NFRAC           = 10,  // number of fractional bits (must be <= width)
                    SIZE            = 64  // number of fixed point numbers going into dense latency layer
                 )(
    input clk,
    input logic signed [WIDTH-1:0] input_data [SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [SIZE-1:0]
);
    logic signed [WIDTH-1:0] out_buffer [SIZE-1:0];

    // Activation function
    genvar j;
    generate
        for (j = 0; j<SIZE; j++) begin : buffer
            assign out_buffer[j] = ((input_data[j][WIDTH-1]==1'b1) ? 0 : input_data[j]);
        end
    endgenerate
    
    assign output_data=out_buffer;
    // Send output through register
//    always_ff @(posedge clk) begin
//        output_data <= out_buffer;
//    end

endmodule

/*  ------------------------------------
    Testbench for relu module
    ------------------------------------
*/
module relu_tb();
    localparam WIDTH = 16,
               NFRAC = 10,
               SIZE  = 8;
    
    logic signed [WIDTH-1:0] input_data  [SIZE-1:0];
    logic signed [WIDTH-1:0] output_data [SIZE-1:0];
    
    relu  #(.WIDTH  ( WIDTH ),
            .NFRAC  ( NFRAC  ),
            .SIZE   ( SIZE   )
    ) dut (.*);
    
    logic clk;
    localparam CLK_PERIOD = 10;
    
     // Make a clock
    initial begin
        clk <= '0;
        forever #(CLK_PERIOD/2) clk <= ~clk;
    end
    
     // The actual testbench
    initial begin
        // Mixed signals
        input_data = '{
            16'sd1024,  // 1.0
            16'sd512,   // 0.5
            16'sd0,     // 0.0
            -16'sd512,  // -0.5
            -16'sd1024, // -1.0
            16'sd2048,  // 2.0
            -16'sd1,    // -1/1024
            16'sd1      // 1/1024
        }; @(posedge clk);

        // Large magnitudes
        input_data = '{
            16'sd32767,  // largest positive
            16'sd30000,
            16'sd1,
            16'sd0,
            -16'sd1,
            -16'sd30000,
            -16'sd32768, // most negative
            16'sd12345
        }; @(posedge clk);

        // Values close to zero
        input_data = '{
            -16'sd4,   // -4/1024
            -16'sd3,
            -16'sd2,
            -16'sd1,
            16'sd0,
            16'sd1,
            16'sd2,
            16'sd3
        }; @(posedge clk);
        $stop;
    end
    
endmodule