
/*
    Parameters:
        WIDTH:              Width of fixed point numbers
        NFRAC:              Number of fractional bits (must be <= width)
        SYS_INPUT_SIZE:     Number of fixed point numbers going into neural net
        PACKING_ENABLE(s):  Forces use of DSPs and packs multiplication for bit widths
                                less than or equal to 8.
        MEM_WIDTH:          Precision of BRAM entries (anything > NFRAC is unnecessary)
        TABLE_SIZE_POW:     Determines number of table entries (2^TABLE_SIZE_POW)
        BRAM_FILE:          String of file name containing bram entries in binary form**
        
        **see associated jupyter notebook to generate mem files
        Note: DLL is short for "Dense Latency Layer"
        
    Inputs:
        input_data: An array of fixed-point numbers
    
    Outputs:
        output_data: A single fixed-point number output;
                     Will be a fixed point number between 0 and 1 (not including 1),
                     Integer bits will always be 0
    
    
    This is the top level module that represents the one layer neural
    network. This module calls submodules reluLayer and sigmoidLayer.
*/

`timescale 1ns / 1ps



module oneLayerNN #(parameter
    WIDTH               = 16,
    NFRAC               = 8,
    SYS_INPUT_SIZE      = 10,
    RELU_OUT_SIZE       = 32,

    // Multiplier packing params
    RELU_PACKING_ENABLE = 0,
    SIG_PACKING_ENABLE  = 0,
    
    // Memory Parameters
    MEM_WIDTH           = 10,
    TABLE_SIZE_POW      = 10,
    BRAM_FILE           = "memw10_tsize1024_sigmoidBRAM.mem"
)(
    input                           clk_p,
    input                           clk_n,
    input                           reset,
    input  logic signed [WIDTH-1:0] input_data  [0:SYS_INPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data
);
    
    logic clk, locked;
    logic rst;
    
    // Differential Clock Input
    clkreset clkrst (
        // Reset and clock from pads
        .reset_in   (reset  ),
        .clk_in1_p  (clk_p  ),
        .clk_in1_n  (clk_n  ),
    
        // outputs
        .clk        (clk    ),
        .lock       (locked ),
        .reset      (rst    )
    );
    
//    assign clk = clk_p;
//    assign rst = reset;
    
    // top-level inputs and outputs of the system
    logic signed [WIDTH-1:0] in  [SYS_INPUT_SIZE];
    logic signed [WIDTH-1:0] out;
    
    // input layer: array of size 10, no work needs to be done
    always_ff @(posedge clk) begin
        if (rst) begin
            in <= '{ default : '0 };
        end else begin
            in <= input_data;
        end
    end
    
    // RELU: Dense Layer, takes in array of size 10 and outputs array of size 32
    logic signed [WIDTH-1:0] relu_out [0:RELU_OUT_SIZE-1];
    reluLayer #(.WIDTH              ( WIDTH                 ),
                .NFRAC              ( NFRAC                 ),
                .INPUT_SIZE         ( SYS_INPUT_SIZE        ),
                .OUTPUT_SIZE        ( RELU_OUT_SIZE         ),
                .PACKING_ENABLE     ( RELU_PACKING_ENABLE   )
             ) relu (
        .clk,
        .reset          ( rst       ),
        .input_data     ( in        ),
        .output_data    ( relu_out  )
    );
    
    // SIGMOID: Dense Layer taking in 32 inputs and performing the sigmoid
    // calculation via look up table for a single output
    sigmoidLayer #(
                .WIDTH              ( WIDTH                 ),
                .NFRAC              ( NFRAC                 ),
                .INPUT_SIZE         ( RELU_OUT_SIZE         ),
                .PACKING_ENABLE     ( SIG_PACKING_ENABLE    ),
                .MEM_WIDTH          ( MEM_WIDTH             ),
                .TABLE_SIZE_POW     ( TABLE_SIZE_POW        ),
                .BRAM_FILE          ( BRAM_FILE             )
                ) sigmoid (
        .clk,
        .reset          ( rst       ),
        .input_data     ( relu_out  ),
        .output_data    ( out       ) // always a single output
    );
    
    always_ff @(posedge clk) begin
        output_data <= out;
    end
    
endmodule

