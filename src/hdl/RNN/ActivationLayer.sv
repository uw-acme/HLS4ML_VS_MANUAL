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
            
        The value stored at bram[index] is sigmoid(val) or 1/(1+e^(-val)).
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
module ActivationLayer #(parameter
                    WIDTH           = 10,
                    NFRAC           = 5,
                    INPUT_SIZE      = 32,
                    MEM_WIDTH       = 10, // precision of BRAM entries
                    TABLE_SIZE_POW  = 10, // power of 2 of the number of table entries (e.g. 5 = 32 entries)
                    BRAM_FILE       = "memw10_size1024_sigmoidBRAM.mem"
                 )(
    input clk,
    input reset,
    input logic signed [WIDTH-1:0] input_data [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [INPUT_SIZE-1:0]
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
    logic [WIDTH+TABLE_SIZE_POW:0] index [INPUT_SIZE-1:0];
    
    // Read in sigmoid values into bram
    initial begin
        $readmemb(BRAM_FILE, bram);
    end
    
    logic signed [WIDTH-1:0] input_val [INPUT_SIZE-1:0];
    assign input_val = input_data;
    
    ////////////////////////////////////////////
    ///// Apply Inverse Transfer Function //////
    ////////////////////////////////////////////
    genvar i;
    generate
   
      for (i = 0; i < INPUT_SIZE; i++) begin
        always_comb begin
        // (Input value times TABLE_SIZE/16) + 8*TABLE_SIZE/16
        // Since these multiplications are powers of 2, shifting by the exponents
        // has the same overall result.

                if (TABLE_SIZE_POW < 4)
                    index[i] = ($signed(input_val[i]) >>> (4-TABLE_SIZE_POW)) + (TABLE_SIZE << (NFRAC-1));
                else
                    index[i] = (input_val[i] << (TABLE_SIZE_POW-4)) + (TABLE_SIZE << (NFRAC-1));
            end
        
        // note: tablesize shifted over NFRAC bits to put result in
        // fixed point notation and divided by 2
    end
    endgenerate
    
    // note to self: may end up putting a pipeline stage here from index -> final_index
    // if this path becomes critical
    
    logic [TABLE_SIZE_POW-1:0] final_index [INPUT_SIZE-1:0];
    logic unsigned [NFRAC-1:0] result [INPUT_SIZE-1:0];
    
    
    
    ////////////////////////////////////////////
    //// Extract final_index and Read BRAM /////
    ////////////////////////////////////////////
    generate
      for (i = 0; i < INPUT_SIZE; i++) begin
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
                output_data[i] <= bram[final_index[i]];
            else if (MEM_WIDTH < NFRAC)
                output_data[i] <= {bram[final_index[i]], {(NFRAC-MEM_WIDTH){'0}}};
            else
                output_data[i] <= {bram[final_index[i][MEM_WIDTH-1:MEM_WIDTH-NFRAC]]};    
    end
    
endmodule



module ActivationLayer_tb();

    localparam  WIDTH           = 8,
                NFRAC           = 12,
                MEM_WIDTH       = 10,
                INPUT_SIZE      = 8,
                TABLE_SIZE_POW  = 10,
                BRAM_FILE       = "memw10_tsize1024_sigmoidBRAM.mem";
    logic clk;
    logic reset;
    logic signed [WIDTH-1:0] input_data[0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_data[0:INPUT_SIZE-1];
    
    
    // device under test
    ActivationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( INPUT_SIZE        ),
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
        input_data =   {{8'd1}, {8'd2}, {8'd3}, {8'd4}, {8'd5}, //{8'd6}, {8'd7},
                        {8'd3}, {8'd4}, {8'd5}, {8'd6}, {8'd7}, //{8'd8}, {8'd9},
                        {8'd5}, {8'd6}, {8'd7}, {8'd8}, {8'd9}, //{8'd0}, {8'd1},
                        {8'd7}, {8'd8}, {8'd9}, {8'd0}, {8'd1}, //{8'd2}, {8'd3},
                        {8'd9}, {8'd0}, {8'd1}, {8'd2}, {8'd3}, //{8'd4}, {8'd5},
                        {8'd1}, {8'd2}, {8'd3}, {8'd4}, {8'd5}, //{8'd6}, {8'd7},
                        {8'd3}, {8'd4}, {8'd5}, {8'd6}, {8'd7}//, //{8'd8}, {8'd9}
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