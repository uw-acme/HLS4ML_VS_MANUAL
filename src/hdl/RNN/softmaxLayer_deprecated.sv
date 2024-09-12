`timescale 1ns / 1ps

// module softmaxLayer # (parameter N=10, WIDTH=16, SIZE=10, NFRAC=10) (
//     input logic signed [WIDTH-1:0] dataIn [N-1:0],
//     input logic clk,
//     output logic signed [WIDTH-1:0] dataOut [N-1:0]
//     );

module softmaxLayer #(parameter
                    WIDTH           = 10, // width of fixed point numbers
                    NFRAC           = 5,  // number of fractional bits (must be <= width)
                    SIZE            = 32, // number of fixed point numbers going into dense latency layer
                    MEM_WIDTH       = 10, // precision of BRAM entries
                    TABLE_SIZE_POW  = 10, // power of 2 of the number of table entries (e.g. 5 = 32 entries)
                    exp_BRAM_FILE       = "memw10_size512_tanhBRAM.mem", // TODO: change file path
                    invert_BRAM_FILE       = "memw10_size512_tanhBRAM.mem"
                 )(
    input clk,
    input logic signed [WIDTH-1:0] dataIn [SIZE-1:0],
    output logic signed [WIDTH-1:0] dataOut [SIZE-1:0]
);

    // logic signed [2*N-1:0] exp_table [2**N-1:0];
    // logic signed [2*N-1:0] invert_table [2**N-1:0]; // the tables are 1024 values of 20 bit numbers
    // logic signed [WIDTH-1:0] dataIn1 [N-1:0];
    // localparam MEM_WIDTH = 10;
    // logic signed [2*MEM_WIDTH-1:0] tempSum;

    logic signed [MEM_WIDTH-1:0] exp_table [2**TABLE_SIZE_POW-1:0];
    logic signed [MEM_WIDTH-1:0] invert_table [2**TABLE_SIZE_POW-1:0]; // the tables are 1024 values of 20 bit numbers
    logic signed [WIDTH-1:0] dataIn1 [SIZE-1:0];
    logic signed [MEM_WIDTH-1:0] tempSum;
    
    // Init tables
    initial begin
        $readmemh("C:/Users/stlp/Desktop/HLS_SOFTMAX_FILES/expTable20_10.txt", exp_table, 0, 2**TABLE_SIZE_POW-1); // default table size
        $readmemh("C:/Users/stlp/Desktop/HLS_SOFTMAX_FILES/invertTable20_10.txt", invert_table, 0, 2**TABLE_SIZE_POW-1); // default table size
    end
    logic signed [(20+(WIDTH/2))-1:0] buffer [SIZE-1:0];    // TODO: determine the best value for the mult buffer.
    logic signed [MEM_WIDTH-1:0] expResult [SIZE-1:0];      // exp value for each score.
    logic signed [17:0] expSum;                             // sum of all exp values for all scores.
    logic signed [13:0] invertVal;                          // invert of sum of all exp values.
    logic signed [TABLE_SIZE_POW-1:0] lookupIndexes [SIZE-1:0]; // index for the exp table.
    logic [TABLE_SIZE_POW-1:0] lookupIndex;
    logic [TABLE_SIZE_POW-1:0] invertIndex;
    always_comb begin
        
        //expSum = 0;
        for (int i = 0; i < SIZE; i++) begin
            // Notice: the table here is defined to be input -> output
            if(MEM_WIDTH == NFRAC) lookupIndex = dataIn[i][WIDTH-1:WIDTH-NFRAC]; // default : 15:5
            else if (MEM_WIDTH < NFRAC) lookupIndex = dataIn[i][17:8];//dataIn[i][WIDTH-2:WIDTH-MEM_WIDTH-1]; // top 10 bits
            else begin
                if(WIDTH < MEM_WIDTH) lookupIndex = dataIn[i][WIDTH-1];//{dataIn[i][WIDTH-1:0], {(MEM_WIDTH - WIDTH){'0}}};
                else lookupIndex = dataIn[i][WIDTH-1:WIDTH-MEM_WIDTH];//{dataIn1[i][WIDTH-1:WIDTH-NFRAC], {(MEM_WIDTH-NFRAC){'0}}}; // too small,fill with zeros at the end, NEED TO CHECK
            end
            lookupIndexes[i] = lookupIndex;
            expResult[i] = exp_table[lookupIndex];
           // expSum = expSum + expResult[i];
        end
    end
    
    adderTree_1D #(32, 2*MEM_WIDTH, SIZE) add (.clk,.input_data(expResult),.output_data(tempSum));

    assign  invertIndex = tempSum[17:8]; ///always the same
    
    assign  invertVal = invert_table[invertIndex];
    
    //CHANGED
//    always_ff @(posedge clk) begin
//        for(int i=0; i<N; i++) begin
//            buffer[i] <= invertVal * expResult[i];
//        end
//    end
        
    genvar i;
        generate
            for(i=0; i<N; i++)begin
                mult_op_wrap #(.din_WIDTH       ( 2*MEM_WIDTH      ),
                               .dweight_WIDTH   ( 14        ),
                               .dout_WIDTH      ( 20+(WIDTH/2))
                               ) mow(
                            .clk,
                            .reset  ( '0            ),
                            .ce     ( '1            ), // constant enable
                            .din    ( expResult[i]      ),
                            .dweight( invertVal  ),
                            .dout   ( buffer[i]  )
                        );    
        end
    endgenerate
    
    always_ff @(posedge clk) begin
        for(int i=0; i<N; i++) begin
            dataOut[i] <= buffer[i][(20+(WIDTH/2))-1:(20+(WIDTH/2))-WIDTH]; //25:10 for 16 bits, 26:9 for 18 bits //24:11 for 14 bits //23:12 for 12 bits //21:14 for 8 bits
            // 16 + 9, 18 + 8, 14 + 10
        end
    end
endmodule

//module softmax_testbench();
//    logic signed[15:0] dataIn [0:9];
//    logic signed [15:0] dataOut [0:9];
//    logic clk;
    
//    parameter CLOCK_PERIOD = 100;
//    initial begin
//		clk <= 0;
//		forever #(CLOCK_PERIOD/2) clk <= ~clk;
//	end
    
//    softmaxFunction2 sf(.dataIn(dataIn), .clk(clk), .dataOut(dataOut));
//    initial begin
//        dataIn = { 16'h00c4,
//16'hff5b,
//16'h00d6,
//16'h00ea,
//16'hfe09,
//                 16'hfed9,
//16'hff29,16'h0145,
//16'hff0c, 
//16'hfec1}; @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        $stop;
//    end
//endmodule