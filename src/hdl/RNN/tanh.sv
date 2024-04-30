/*
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
                0 ----------- TABLE_SIZE/2 ----------- TABLE_SIZE (index)
            
        The value stored at bram[index] is tanh(val) or 1/(1+e^(-val)).
        The floating point value must be converted to the appropriate binary
        when stored in bram (see associated jupyter notebook to generate 
        binary files).
        
    What sigmoid does:
        Given an input value X, the sigmoid layer applies the inverse of the
        transfer function:
                index = X*TABLE_SIZE/16 + TABLE_SIZE/2
            
        This index holds sigmoid(X) without the work of calculating the
        sigmoid function. If the input is outside [-8, 8], the index value
        will map to a negative index or an index greater than TABLE_SIZE
        and will be set to floor (0) or (TABLE_SIZE-1) respectivly.
*/

`timescale 1ns / 1ps
module tanh #(parameter
                    WIDTH           = 10,
                    NFRAC           = 5,
                    MEM_WIDTH       = 10, // precision of BRAM entries
                    TABLE_SIZE_POW  = 10, // power of 2 of the number of table entries (e.g. 5 = 32 entries)
                    BRAM_FILE       = "memw10_size1024_tanhBRAM.mem"
                 )(
    input clk,
    input reset,
    input logic signed [WIDTH-1:0] input_data,
    output logic signed [WIDTH-1:0] output_data
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
    logic [WIDTH+TABLE_SIZE_POW:0] index;
    
    // Read in tanh values into bram
    initial begin
        $readmemb(BRAM_FILE, bram);
    end
    
    logic signed [WIDTH-1:0] input_val;
    assign input_val = input_data;
    
    ////////////////////////////////////////////
    ///// Apply Inverse Transfer Function //////
    ////////////////////////////////////////////
    always_comb begin
        // (Input value times TABLE_SIZE/16) + 8*TABLE_SIZE/16
        // Since these multiplications are powers of 2, shifting by the exponents
        // has the same overall result.
        if (TABLE_SIZE_POW < 4)
            index = ($signed(input_val) >>> (4-TABLE_SIZE_POW)) + (TABLE_SIZE << (NFRAC-1));
        else
            index = (input_val << (TABLE_SIZE_POW-4)) + (TABLE_SIZE << (NFRAC-1));
        
        // note: tablesize shifted over NFRAC bits to put result in
        // fixed point notation and divided by 2
    end
    
    // note to self: may end up putting a pipeline stage here from index -> final_index
    // if this path becomes critical
    
    logic [TABLE_SIZE_POW-1:0] final_index;
    logic signed [NFRAC-1:0] result;
    
    ////////////////////////////////////////////
    //// Extract final_index and Read BRAM /////
    ////////////////////////////////////////////
    always_ff @(posedge clk) begin
        // negative index
        if ($signed(index[WIDTH+TABLE_SIZE_POW:NFRAC]) <= 0)                            // hits floor
            final_index <= '0;
        // index greater than table size
        else if ($unsigned(index[WIDTH+TABLE_SIZE_POW:NFRAC]) > $unsigned(TABLE_SIZE-1))// hits ceiling
            final_index <= TABLE_SIZE-1;
        else                                                                            // something in the middle
            final_index <= index[TABLE_SIZE_POW+NFRAC:NFRAC]
                + (((input_val[WIDTH-1] == 1) & index[NFRAC-1:0] != '0) ? 1 : 0);
            // round up the index for negative input values (rounds towards zero)
        
        // read bram
        // some truncation and filling necessary depending on the relative values of MEM_WIDTH and NFRAC
        if (MEM_WIDTH == NFRAC)
            result = bram[final_index];
        else if (MEM_WIDTH < NFRAC)
            result = {bram[final_index], {(NFRAC-MEM_WIDTH){'0}}};
        else
            result = {bram[final_index][MEM_WIDTH-1:MEM_WIDTH-NFRAC]};
        
    end


    
endmodule
