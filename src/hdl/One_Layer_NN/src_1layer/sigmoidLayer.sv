

/*
    Parameters:
        WIDTH: Width of fixed point numbers
        NFRAC: Number of fractional bits (must be <= width)
        INPUT_SIZE: Number of fixed point numbers going into dense latency layer
       *MEM_WIDTH: Precision of BRAM entries (anything > NFRAC is unnecessary)
       *TABLE_SIZE_POW: Determines number of table entries (2^TABLE_SIZE_POW)
       *BRAM_FILE: File containing bram entries in binary form**
        WEIGHTS_FILE: File containing dense latency layer weights in binary form**
        BIAS_FILE: File containing dense latency layer biases in binary form**
        
        * Some parameters (to do with BRAM) are just passed down to module instance
        **see associated jupyter notebook to generate bin files
    
    Inputs:
        input_data: An array of fixed-point numbers into dense latency layer
    
    Outputs:
        output_data: A single fixed-point number output;
                     Will be a fixed point number between 0 and 1 (not including 1),
                     Integer bits will always be 0
    
    
    Input numbers first enter a dense latency layer (weights and biases provided by
    file name parameters) with a single output (DLL_out). This is the input to the
    sigmoid activation function which produces a single output.
    
*/

`timescale 1ns / 1ps
module sigmoidLayer #(parameter
    WIDTH               = 17,
    NFRAC               = 10,
    INPUT_SIZE          = 32,
    PACKING_ENABLE      = 1,
    MEM_WIDTH           = 10, // precision of BRAM entries
    TABLE_SIZE_POW      = 10, // power of 2 of the number of table entries (e.g. 5 = 32 entries)
    BRAM_FILE           = "memw10_tsize1024_sigmoidBRAM.mem"
)
(
    input clk,
    input reset,
    input  logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data
);

    // Check parameters are valid
    initial begin
        assert(WIDTH >= NFRAC);
        assert(WIDTH > 0 && NFRAC > 0 && MEM_WIDTH > 0 && TABLE_SIZE_POW > 0 && INPUT_SIZE > 0);
    end

    
    // Dense Latency Layer (DLL) output
    logic signed [WIDTH-1:0] DLL_out [1];
    
    // Select one of three DLL methods depending on WIDTH
    // OUTPUT_SIZE hard-coded to 1
    if (WIDTH < 6 && PACKING_ENABLE == 1) begin
        sigmoidDenseLatencyLayer_PACKED_small #(
            .WIDTH          ( WIDTH             ),
            .NFRAC          ( NFRAC             ),
            .INPUT_SIZE     ( INPUT_SIZE        ),
            .OUTPUT_SIZE    ( 1                 )
        )
        dotprod (
            .clk,
            .reset, 
            .input_data,
            .output_data    ( DLL_out           )
        );
    end else if (WIDTH <= 8 && PACKING_ENABLE == 1)
        sigmoidDenseLatencyLayer_PACKED #(
            .WIDTH          ( WIDTH             ),
            .NFRAC          ( NFRAC             ),
            .INPUT_SIZE     ( INPUT_SIZE        ),
            .OUTPUT_SIZE    ( 1                 )
        )
        dotprod (
            .clk,
            .reset,
            .input_data,
            .output_data    ( DLL_out           )
        );
    else begin
        sigmoidDenseLatencyLayer #(
            .WIDTH          ( WIDTH             ),
            .NFRAC          ( NFRAC             ),
            .INPUT_SIZE     ( INPUT_SIZE        ),
            .OUTPUT_SIZE    ( 1                 )
        )
        dotprod (
            .clk,
            .reset,
            .input_data,
            .output_data    ( DLL_out           )
        );
    end

    
    // Sigmoid activation function (implemented as look-up table)
    sigmoid #(
        .WIDTH              ( WIDTH             ),
        .NFRAC              ( NFRAC             ),
        .MEM_WIDTH          ( MEM_WIDTH         ),
        .TABLE_SIZE_POW     ( TABLE_SIZE_POW    ),
        .BRAM_FILE          ( BRAM_FILE         )
    ) sig (
        .clk,
        .reset,
        .input_data         ( DLL_out[0]        ),
        .output_data
    );
    
endmodule


//--------------------------------------------------------------
// Testbench for sigmoidLayer
//--------------------------------------------------------------
module sigmoidLayer_tb();
    localparam  WIDTH           = 16,
                NFRAC           = 12,
                INPUT_SIZE      = 32,
                MEM_WIDTH       = 10,
                TABLE_SIZE_POW  = 10,
                BRAM_FILE       = "memw10_tsize1024_sigmoidBRAM.mem";
    logic clk;
    logic reset;
    logic signed [WIDTH-1:0] input_data [INPUT_SIZE];
    logic signed [WIDTH-1:0] output_data;
    
    //--------------------------------------------------------------
    // Device under test
    //--------------------------------------------------------------
    sigmoidLayer #( 
                .WIDTH(WIDTH),
                .NFRAC          ( NFRAC             ),
                .INPUT_SIZE     ( INPUT_SIZE        ),
                .MEM_WIDTH      ( MEM_WIDTH         ),
                .TABLE_SIZE_POW ( TABLE_SIZE_POW    ),
                .BRAM_FILE      ( BRAM_FILE         )
                ) dut (
        .clk,
        .reset,
        .input_data,
        .output_data
    );

    // Generate Clock
    localparam CLOCK_PERIOD = 10;
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) begin
            clk <= ~clk;
        end
    end
    
    // main stimulus
    initial begin
        reset = 1; input_data[0] = '0; repeat(1) @(posedge clk);
        reset = 0;
        for (int i = 0; i < 2**WIDTH; i++) begin
            input_data[0] = i;
            repeat(1) @(posedge clk);
        end
        
        repeat(10) @(posedge clk);
        $stop;
    end
    
endmodule
