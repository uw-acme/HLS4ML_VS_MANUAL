/*
    This layer takes SIZE number of fixed point numbers and applies the tanh activation function.
    Similar to sigmoid except a shift is not needed. The absolute value of the input is taken, this
    is shifted to the proper fractional bits and then placed into the table, then the sign is reapplied
    to the output. The absolute value saves space since the absolute value of the function is symmetric
*/

`timescale 1ns / 1ps
module tanh #(parameter
                    WIDTH           = 10, // width of fixed point numbers
                    NFRAC           = 5,  // number of fractional bits (must be <= width)
                    SIZE            = 32, // number of fixed point numbers going into dense latency layer
                    MEM_WIDTH       = 18, // precision of BRAM entries
                    MEM_NFRAC       = 18, // fractional bits in BRAM entries
                    LOOKUP_WIDTH    = 10, // Width of lookup indices
                    LOOKUP_NFRAC    = 7, // Fractional bits in lookup indices
                    BRAM_FILE       = "../weights_n_tables/tanh_table_18_18_10_7.dat",
                    REMOVE_PIPELINES= 0 // Set to 1 to remove some pipelines, 0 to keep them
                 )(
    input clk,
    input reset,
    input input_ready,
    output output_ready,
    output ready,
    input next_layer_ready,
    input logic signed [WIDTH-1:0] input_data [SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [SIZE-1:0]
);
    genvar i;
    logic processing;
    assign processing = !((!next_layer_ready)&&(output_ready));
    assign ready=processing;
    parameter cycle_length=2-REMOVE_PIPELINES;
    logic [cycle_length-1:0] counter;
    logic [cycle_length-1:0] signed_count [SIZE-1:0];
    assign output_ready = counter[0];
    always_ff @(posedge clk) begin
        if (reset)
            counter<=0;
        else if (processing)
            counter<={input_ready, counter}>>1;
    end
     generate
            for (i=0; i<SIZE; i++) begin : volvo
            always_ff @(posedge clk)
            if (processing)
                signed_count[i]<={input_data[i][WIDTH-1], signed_count[i]}>>1;
            end
    endgenerate
    initial begin
        assert(WIDTH >= NFRAC);
        assert(WIDTH > 0 && NFRAC > 0 && MEM_WIDTH > 0 && LOOKUP_WIDTH > 0);
    end
    
    // Determine table size
    localparam TABLE_SIZE = 2**LOOKUP_WIDTH;
    
    // holds table
    logic unsigned [MEM_WIDTH-1:0] bram [TABLE_SIZE];
    
    // input_data*TABLE_SIZE/16 + TABLE_SIZE/2
    logic unsigned [LOOKUP_WIDTH-1:0] index [SIZE-1:0];
    logic unsigned [LOOKUP_WIDTH-1:0] final_index [SIZE-1:0];

    // unsigned tanh(val) value from bram
    logic unsigned [WIDTH-1:0] output_data_unsigned [SIZE-1:0];

    
    // Read in sigmoid values into bram
    initial begin
        $readmemb(BRAM_FILE, bram);
    end
    
    logic signed [WIDTH-1:0] input_data_abs [SIZE-1:0];

    

    generate
      for (i = 0; i < SIZE; i++) begin
        always_comb begin
            if (input_data[i][WIDTH-1] == 1)
                input_data_abs[i] = -input_data[i];
            else
                input_data_abs[i] = input_data[i];
        end
      end
    endgenerate
    
    ////////////////////////////////////////////
    ///// Apply Inverse Transfer Function //////
    ////////////////////////////////////////////
    generate
      for (i = 0; i < SIZE; i++) begin
        always_comb begin
        // (Input value times TABLE_SIZE/16) + 8*TABLE_SIZE/16
        // Since these multiplications are powers of 2, shifting by the exponents
        // has the same overall result.
                // for (int i = 0; i < SIZE; i++) begin
                    if (LOOKUP_NFRAC == NFRAC) 
                        index[i] = input_data_abs[i];
                    else if (LOOKUP_NFRAC < NFRAC)
                        index[i] = (input_data_abs[i] >> (NFRAC - LOOKUP_NFRAC));
                    else
                        index[i] = (input_data_abs[i] << (LOOKUP_NFRAC - NFRAC));
                // end
                // if (LOOKUP_WIDTH < 4)
                //     index[i] = ($signed(input_data_abs[i]) >>> (2-LOOKUP_WIDTH));
                // else
                //     index[i] = (input_data_abs[i] << (LOOKUP_WIDTH-2));
            end
        
        // note: tablesize shifted over NFRAC bits to put result in
        // fixed point notation and divided by 2
    end
    endgenerate
    
    // note to self: may end up putting a pipeline stage here from index -> final_index
    // if this path becomes critical
    
    
    // logic unsigned [NFRAC-1:0] result [SIZE-1:0];
    
    
    
    ////////////////////////////////////////////
    //// Extract final_index and Read BRAM /////
    ////////////////////////////////////////////
    generate
      for (i = 0; i < SIZE; i++) begin
        if (REMOVE_PIPELINES) begin
            always_comb begin
                if ($unsigned(index[i]) > $unsigned(TABLE_SIZE-1))// hits ceiling
                        final_index[i] = TABLE_SIZE-1;
                    else                                                                            // something in the middle
                        final_index[i] = index[i];
            end
            
        end else begin
            always_ff @(posedge clk) begin
                if (processing) begin
                    if ($unsigned(index[i]) > $unsigned(TABLE_SIZE-1))// hits ceiling
                        final_index[i] <= TABLE_SIZE-1;
                    else                                                                            // something in the middle
                        final_index[i] <= index[i];
                        // round up the index for negative input values (rounds towards zero)
                end
            end
        end
                
    end
    endgenerate
    generate
      for (i = 0; i < SIZE; i++) begin
        always_ff @(posedge clk) begin
                // read bram
                // some truncation and filling necessary depending on the relative values of MEM_WIDTH and NFRAC
                if (processing) begin
                    if (MEM_NFRAC == NFRAC)
                        output_data_unsigned[i] <= bram[final_index[i]];
                    else if (MEM_NFRAC < NFRAC)
                        output_data_unsigned[i] <= bram[final_index[i]]<<(NFRAC-MEM_NFRAC);
                    else
                        output_data_unsigned[i] <= bram[final_index[i]]>>(MEM_NFRAC-NFRAC);
    //                    output_data[i] <= {bram[final_index[i]][MEM_WIDTH-1:MEM_WIDTH-NFRAC]};  
                end
        end
      end
    endgenerate
    
    // Convert unsigned output to signed out, if index is greater than half of TABLE_SIZE, output is positive
    // otherwise, output is negative
    generate
        for (i = 0; i < SIZE; i++) begin
            always_comb begin
                if (signed_count[i][0])
                    output_data[i] = -$signed(output_data_unsigned[i]);
                else
                    output_data[i] = output_data_unsigned[i];
            end
        end
    endgenerate


endmodule

module tanh_tb();

    localparam  WIDTH           = 32,
                NFRAC           = 16,
                SIZE            = 1;
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;
    logic ready;
    logic next_layer_ready;
    logic signed [WIDTH-1:0] input_data[0:SIZE-1];
    logic signed [WIDTH-1:0] output_data[0:SIZE-1];
    
    
    // device under test
    tanh #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( SIZE              )
    ) dut (
        .*
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
        next_layer_ready=1;
        input_ready=0;
        @(posedge clk)
        reset = 0;
        input_ready=1;
        for (int i=0; i<$pow(2, WIDTH); i++)begin
            
            @(posedge clk)
            input_data = '{i};
        end
        $stop;
        
    end
    
endmodule