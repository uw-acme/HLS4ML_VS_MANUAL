/*
    This layer takes SIZE number of fixed point numbers and applies the tanh.


    Parameters:
        WIDTH: Width of fixed point numbers
        NFRAC: Number of fractional bits (must be <= width)
        MEM_WIDTH: Precision of BRAM entries (anything > NFRAC is unnecessary)
        TABLE_SIZE_POW: Determines number of table entries (2^TABLE_SIZE_POW)
        BRAM_FILE: File containing bram entries in binary form;
                   see associated jupyter notebook to generate bin files
    
    Inputs:
        input_data: A single fixed-point number input
    
    Outputs:
        output_data: A single fixe-point number output;
                     Will be a fixed point number between 0 and 1 (not including 1),
                     Integer bits will always be 0
    
    
    A note on BRAM: 
        The transfer function from index to bram range (+/- 8) is:
                val = 2*8*(index - TABLE_SIZE/2)/TABLE_SIZE
        
                -8 ---------------- 0 -------------------- +8     (bram range)
                ^                   ^                       ^
                |                   |                       |
                N/A --------------- 0 ----------- TABLE_SIZE (index)
            
        The value stored at bram[index] is tanh(vald).
        The floating point value must be converted to the appropriate binary
        when stored in bram (see associated jupyter notebook to generate 
        binary files).
        
    What sigmoid does:
        Given an input value X, the sigmoid layer applies the inverse of the
        transfer function for abs value.
                index = X*TABLE_SIZE/8
            
        This index holds tanh(X) without the work of calculating the
        tanh function. If the input is outside [-8, 8], the index value
        will map to a negative index or an index greater than TABLE_SIZE
        and will be set to floor (0) or (TABLE_SIZE-1) respectivly.
*/

`timescale 1ns / 1ps
module tanhActivationLayer #(parameter
                    WIDTH           = 10, // width of fixed point numbers
                    NFRAC           = 5,  // number of fractional bits (must be <= width)
                    SIZE            = 32, // number of fixed point numbers going into dense latency layer
                    MEM_WIDTH       = 10, // precision of BRAM entries
                    TABLE_SIZE_POW  = 10, // power of 2 of the number of table entries (e.g. 5 = 32 entries)
                    BRAM_FILE       = "memw10_size1024_sigmoidBRAM.mem"
                 )(
    input clk,
    input reset,
    input logic signed [WIDTH-1:0] input_data [SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [SIZE-1:0]
);
    initial begin
        assert(WIDTH >= NFRAC);
        assert(WIDTH > 0 && NFRAC > 0 && MEM_WIDTH > 0 && TABLE_SIZE_POW > 0);
    end
    
    // Determine table size
    localparam TABLE_SIZE = 2**TABLE_SIZE_POW;
    
    // holds table
    logic signed [MEM_WIDTH-1:0] bram [TABLE_SIZE];
    
    // input_data*TABLE_SIZE/16 + TABLE_SIZE/2
    logic [WIDTH+TABLE_SIZE_POW:0] index [SIZE-1:0];

    // unsigned tanh(val) value from bram
    logic signed [WIDTH-1:0] output_data_unsigned [SIZE-1:0];

    
    // Read in sigmoid values into bram
    initial begin
        $readmemb(BRAM_FILE, bram);
    end
    
    logic signed [WIDTH-1:0] input_val [SIZE-1:0];
    logic signed [WIDTH-1:0] input_val_abs [SIZE-1:0];

    assign input_val = input_data;

    always_comb begin
        if (input_val[i][WIDTH-1] == 1)
            input_val_abs[i] = -input_val[i];
        else
            input_val_abs[i] = input_val[i];
    end
    
    ////////////////////////////////////////////
    ///// Apply Inverse Transfer Function //////
    ////////////////////////////////////////////
    genvar i;
    generate
   
      for (i = 0; i < SIZE; i++) begin
        always_comb begin
        // (Input value times TABLE_SIZE/16) + 8*TABLE_SIZE/16
        // Since these multiplications are powers of 2, shifting by the exponents
        // has the same overall result.

                if (TABLE_SIZE_POW < 4)
                    index[i] = ($signed(input_val_abs[i]) >>> (2-TABLE_SIZE_POW));
                else
                    index[i] = (input_val_abs[i] << (TABLE_SIZE_POW-2));
            end
        
        // note: tablesize shifted over NFRAC bits to put result in
        // fixed point notation and divided by 2
    end
    endgenerate
    
    // note to self: may end up putting a pipeline stage here from index -> final_index
    // if this path becomes critical
    
    logic [TABLE_SIZE_POW-1:0] final_index [SIZE-1:0];
    // logic unsigned [NFRAC-1:0] result [SIZE-1:0];
    
    
    
    ////////////////////////////////////////////
    //// Extract final_index and Read BRAM /////
    ////////////////////////////////////////////
    generate
      for (i = 0; i < SIZE; i++) begin
        always_ff @(posedge clk) begin

                // negative index
                if ($signed(index[i][WIDTH+TABLE_SIZE_POW:NFRAC]) <= 0)                            // hits floor
                    final_index[i] <= '0;
                // index greater than table size
                else if ($unsigned(index[i][WIDTH+TABLE_SIZE_POW:NFRAC]) > $unsigned(TABLE_SIZE-1))// hits ceiling
                    final_index[i] <= TABLE_SIZE-1;
                else                                                                            // something in the middle
                    final_index[i] <= index[i][TABLE_SIZE_POW+NFRAC:NFRAC]
                        + (((input_val[i][WIDTH-1] == 1) & index[i][NFRAC-1:0] != '0) ? 1 : 0);
                    // round up the index for negative input values (rounds towards zero)
        end

                
    end
    endgenerate

    always_ff @(posedge clk) begin
            // read bram
            // some truncation and filling necessary depending on the relative values of MEM_WIDTH and NFRAC
            if (MEM_WIDTH == NFRAC)
                output_data_unsigned[i] <= bram[final_index[i]];
            else if (MEM_WIDTH < NFRAC)
                output_data_unsigned[i] <= {bram[final_index[i]], {(NFRAC-MEM_WIDTH){'0}}};
            else
                output_data_unsigned[i] <= {bram[final_index[i][MEM_WIDTH-1:MEM_WIDTH-NFRAC]]};
    end
    
    // Convert unsigned output to signed out, if index is greater than half of TABLE_SIZE, output is positive
    // otherwise, output is negative
    generate
        for (i = 0; i < SIZE; i++) begin
            always_comb begin
                if (input_val[i][WIDTH-1] == 1)
                    output_data[i] = output_data_unsigned[i];
                else
                    output_data[i] = -output_data_unsigned[i];
            end
        end
    endgenerate


endmodule

module tanhActivationLayer_tb();

    localparam  WIDTH           = 16,
                NFRAC           = 12,
                SIZE            = 8,
                MEM_WIDTH       = 10,
                TABLE_SIZE_POW  = 10,
                BRAM_FILE       = "memw10_tsize1024_tanhBRAM.mem";
    logic clk;
    logic reset;
    logic signed [WIDTH-1:0] input_data[0:SIZE-1];
    logic signed [WIDTH-1:0] output_data[0:SIZE-1];
    
    
    // device under test
    activationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( SIZE              ),
        .MEM_WIDTH      ( MEM_WIDTH         ),
        .TABLE_SIZE_POW ( TABLE_SIZE_POW    ),
        .BRAM_FILE      ( BRAM_FILE         )
    ) dut (
        .clk            ( clk               ),
        .reset          ( reset             ),
        .input_data     ( input_data        ),
        .output_data    ( output_data       )
    );
    
    localparam CLOCK_PERIOD = 10;
    
    // Generate clock
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) begin
            clk <= ~clk;
        end
    end
    
    // Main stimulus
    initial begin
        reset = 1;
        input_data =   {
            'h0000, 'h0001, 'h0002, 'h0003,
            'h0004, 'h0005, 'h0006, 'h0007
                        };
        repeat(3) @(posedge clk);
        reset = 0;
        
        repeat(30) @(posedge clk);
        
        
//        input_data = 'hb900;
//        repeat(1) @(posedge clk);
//        input_data = 'hb901;
//        repeat(1) @(posedge clk);
//        input_data = 'h8000;
//        repeat(1) @(posedge clk);
//        input_data = 'hb900;
//        repeat(1) @(posedge clk);
//        input_data = 'hb901;
        repeat(10) @(posedge clk);
        
        $stop;
        
    end
    
endmodule