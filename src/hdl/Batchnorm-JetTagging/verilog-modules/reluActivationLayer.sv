/*
 The relu activation layer (no dense).
*/

`timescale 1ns / 1ps
module reluActivationLayer #(parameter
                    WIDTH           = 10, // width of fixed point numbers
                    NFRAC           = 5,  // number of fractional bits (must be <= width)
                    SIZE            = 32  // number of fixed point numbers going into dense latency layer
                 )(
    input clk,
    input logic signed [WIDTH-1:0] input_data [SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [SIZE-1:0]
);
    logic signed [WIDTH-1:0] out_buffer [SIZE-1:0];

    // Activation fuction
    integer j;
    
//    for (j = 0; j<SIZE; j++) begin
//        assign out_buffer[j] = ((input_data[j][WIDTH-1]==1'b1) ? 0 : input_data[j]);
//    end
    
    always_comb begin
        for (j = 0; j < SIZE; j++) begin
            if (input_data[j][WIDTH-1]) begin
                out_buffer[j] = 0;
            end else begin
                out_buffer[j] = input_data[j];
            end
        end
    end
    
    assign output_data=out_buffer;
    // Send output through register
//    always_ff @(posedge clk) begin
//        output_data <= out_buffer;
//    end

endmodule