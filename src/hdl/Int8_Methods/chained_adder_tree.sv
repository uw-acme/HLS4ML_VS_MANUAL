`timescale 1ns / 1ns

module chained_adder_tree #(parameter WIDTH = 8, NUM_INPUTS = 30, SIGN = 1) (
    inputs, weights_T, weights_B, clk, result_T, result_B
);
    
    input  logic signed [WIDTH-1:0]  inputs     [NUM_INPUTS-1:0];
    input  logic signed [WIDTH-1:0]  weights_T  [NUM_INPUTS-1:0]; // TOP
    input  logic signed [WIDTH-1:0]  weights_B  [NUM_INPUTS-1:0]; // BOTTOM
    input  logic                     clk;
    /*
    Note: 'W' is a standin for 'WIDTH', as is 'Ni' for 'NUM_INPUTS'
    
    MAX_SIGNED_RESULT_WIDTH:
    Maximum result of single multiplication = -2^(W-1) * -2^(W-1) = 2^(2W-2)
    If all of the inputs and weights are the worst case: result = 2^(2W-2)*Ni (MAX_SIGNED_RESULT value)
    Need an additional bit for the sign, so MAX_SIGNED_RESULT_WIDTH = $clog2((2^(2*W-2)) * Ni) + 1
    */
    localparam MAX_SIGNED_RESULT_WIDTH = $clog2((2**(2*WIDTH-2)) * NUM_INPUTS) + 1;
    /*
    Note: 'W' is a standin for 'WIDTH', as is 'Ni' for 'NUM_INPUTS'
    
    MAX_UNSIGNED_RESULT_WIDTH:
    Maximum result of single multiplication = (2^(W)-1) * (2^(W)-1) = (2^(W)-1)^2
    If all of the inputs and weights are the worst case: result = (2^(W)-1)^2 * Ni (MAX_UNSIGNED_RESULT value)
    No additional sign bit is needed, so MAX_UNSIGNED_RESULT_WIDTH = $clog2((2^(W)-1)^2 * Ni)
    */
    localparam MAX_UNSIGNED_RESULT_WIDTH = $clog2((2**(WIDTH)-1)**2 * NUM_INPUTS);
    
    output logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : 
                                        MAX_UNSIGNED_RESULT_WIDTH-1):0] result_T;
    output logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : 
                                        MAX_UNSIGNED_RESULT_WIDTH-1):0] result_B;
    // ******************************** END OF IO SIGNALS *********************************************************
    
    // Width must be between 0 and 9 (though there may be some weird behavior with edge cases if you try WIDTH = 1, 
    // we haven't tested that scenario since that width isn't useful for our purposes)
    initial assert(WIDTH > 0);
    initial assert(WIDTH < 9);
    initial assert(NUM_INPUTS > 0); // we cannot have a negative number of inputs
    // Chaining UNSIGNED INT8 has a high probability of overflow, chaining SIGNED INT8 should not overflow except
    // in the specific case of -128*-128 + -128*-128.
    initial assert(!((WIDTH == 8) && (SIGN != 1)));  // assert checks that we are not trying to instansiate UNSIGNED INT8
    // ******************************** END OF PARAMETER ASSERTIONS *********************************************************
    
    localparam IS_ODD = (NUM_INPUTS % 2 == 1);
    
    // stores the output of every dsp block (will feed some into the accum port of other dsp slices, hence the chaining)
    logic [(24+WIDTH)-1:0] ji [NUM_INPUTS-1:0];
    logic [(24-WIDTH)-1:0] ki [NUM_INPUTS-1:0];
    
    // summation arrays for the top and bottom sums
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : MAX_UNSIGNED_RESULT_WIDTH-1):0]
                                    sum_terms_ji
                                 [((IS_ODD == 1) ? ((NUM_INPUTS+1)/2) : NUM_INPUTS/2)-1:0];
    
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : MAX_UNSIGNED_RESULT_WIDTH-1):0]
                                    sum_terms_ki
                                 [((IS_ODD == 1) ? ((NUM_INPUTS+1)/2) : NUM_INPUTS/2)-1:0];
    
    // giving enough additional indecies so that we don't run out of indecies in the adder tree
    // should simplify out unused indecies when complied
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : 
                                 MAX_UNSIGNED_RESULT_WIDTH-1):0] temp_j [3*NUM_INPUTS:0];
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : 
                                 MAX_UNSIGNED_RESULT_WIDTH-1):0] temp_k [3*NUM_INPUTS:0];
    
    // Worst case is that all of the corrections are all 1 or all -1
    // so we need to be able to hold the values NUM_INPUTS and -NUM_INPUTS which will be $clog2(NUM_INPUTS) + 1 sign bit
    logic signed [$clog2(NUM_INPUTS):0] correction_terms [((IS_ODD == 1) ? ((NUM_INPUTS+1)/2) : NUM_INPUTS/2)-1:0];
    logic signed [$clog2(NUM_INPUTS):0] corr_terms [3*NUM_INPUTS:0];
    // ******************************** END OF ACCUMULATION TERMS *********************************************************
    
    logic signed [WIDTH-1:0]  inputs_buf1  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  inputs_buf2  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  inputs_buf3  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  inputs_buf4  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  inputs_buf5  [NUM_INPUTS-1:0];
    logic signed              inputs_sign_buf1 [NUM_INPUTS-1:0];
    logic signed              inputs_sign_buf2 [NUM_INPUTS-1:0];
    logic signed              inputs_sign_buf3 [NUM_INPUTS-1:0];
    logic signed              inputs_sign_buf4 [NUM_INPUTS-1:0];
    logic signed              inputs_sign_buf5 [NUM_INPUTS-1:0];
    
    always_ff @(posedge clk) begin
        inputs_buf1 <= inputs;
        inputs_buf2 <= inputs_buf1;
        inputs_buf3 <= inputs_buf2;
        inputs_buf4 <= inputs_buf3;
        inputs_buf5 <= inputs_buf4;
        
        for (int j=0; j < NUM_INPUTS; j++) begin
            inputs_sign_buf1[j] <= inputs_buf4[j][WIDTH-1];
        end
        inputs_sign_buf2 <= inputs_sign_buf1;
        inputs_sign_buf3 <= inputs_sign_buf2;
        inputs_sign_buf4 <= inputs_sign_buf3;
        inputs_sign_buf5 <= inputs_sign_buf4;
    end
    
    
    
    logic signed [WIDTH-1:0]  weights_T_buf1  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_T_buf2  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_T_buf3  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_T_buf4  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_T_buf5  [NUM_INPUTS-1:0];
    
    always_ff @(posedge clk) begin
        weights_T_buf1 <= weights_T;
        weights_T_buf2 <= weights_T_buf1;
        weights_T_buf3 <= weights_T_buf2;
        weights_T_buf4 <= weights_T_buf3;
        weights_T_buf5 <= weights_T_buf4;
    end
    
    
    
    logic signed [WIDTH-1:0]  weights_B_buf1  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_B_buf2  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_B_buf3  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_B_buf4  [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_B_buf5  [NUM_INPUTS-1:0];
    logic signed              WB_sign_buf1 [NUM_INPUTS-1:0];
    logic signed              WB_sign_buf2 [NUM_INPUTS-1:0];
    logic signed              WB_sign_buf3 [NUM_INPUTS-1:0];
    logic signed              WB_sign_buf4 [NUM_INPUTS-1:0];
    
    always_ff @(posedge clk) begin
        weights_B_buf1 <= weights_B;
        weights_B_buf2 <= weights_B_buf1;
        weights_B_buf3 <= weights_B_buf2;
        weights_B_buf4 <= weights_B_buf3;
        weights_B_buf5 <= weights_B_buf4;
        
        for (int j=0; j < NUM_INPUTS; j++) begin
            WB_sign_buf1[j] <= weights_B_buf4[j][WIDTH-1];
        end
        WB_sign_buf2 <= WB_sign_buf1;
        WB_sign_buf3 <= WB_sign_buf2;
        WB_sign_buf4 <= WB_sign_buf3;
    end
    
    
    logic signed              ki_sign_buf1 [NUM_INPUTS-1:0];
    logic signed              ki_sign_buf2 [NUM_INPUTS-1:0];
    logic signed              ki_sign_buf3 [NUM_INPUTS-1:0];
    logic signed              ki_sign_buf4 [NUM_INPUTS-1:0];
    always_ff @(posedge clk) begin
        for (int j=0; j < NUM_INPUTS; j++) begin
            ki_sign_buf1[j] <= ki[j][2*WIDTH-1];
        end
        ki_sign_buf2 <= ki_sign_buf1;
        ki_sign_buf3 <= ki_sign_buf2;
        ki_sign_buf4 <= ki_sign_buf3;
    end
    // ******************************** END OF DELAY BALANCE TERMS *********************************************************
    
    /*
    Laying down the dsp slices, we want uncorrected chained_macc modules every even index and interally corrected macc modules
    will be odd indecies and have their outputs fed to the accum ports of the chained_macc
    */
    genvar i;
    generate
        for(i = 0; i < NUM_INPUTS; i++) begin : maccs
            // This handles the specific situation where there is an odd number of inputs so the last dsp slice can just be an internally 
            // corrected macc module instead of a chained_macc (whose accum port would go unused otherwise)
            if ((IS_ODD == 1) && (i == NUM_INPUTS-1))
                macc #(.WIDTH(WIDTH), .SIGN(SIGN)) last_macc (
                    .weight_j(weights_T_buf5[i]),
                    .weight_k(weights_B_buf5[i]),
                    .input_i(inputs_buf5[i]),
                    .clk,
                    .ji(ji[i]),
                    .ki(ki[i])
                );
            // even indecies become chained_maccs and have the next odd index fed into their accum port
            else if (i % 2 == 0)
                chained_macc #(.WIDTH(WIDTH), .SIGN(SIGN)) even_macc (
                    .weight_j(weights_T_buf5[i]),
                    .weight_k(weights_B_buf5[i]),
                    .input_i(inputs_buf5[i]),
                    .ji_accum(ji[i+1]),
                    .ki_accum(ki[i+1]),
                    .clk,
                    .ji(ji[i]),
                    .ki(ki[i])
                );
            else
                // odd indecies become interally corrected macc modules (whose result is fed to the dsp slice at i-1)
                macc #(.WIDTH(WIDTH), .SIGN(SIGN)) odd_macc (
                    .weight_j(weights_T[i]),
                    .weight_k(weights_B[i]),
                    .input_i(inputs[i]),
                    .clk,
                    .ji(ji[i]),
                    .ki(ki[i])
                );
        end
        
        
        
        
        // ******************** Tree Function Definitions ******************** 
        localparam HALF_NUM_INPUTS = (NUM_INPUTS+1)/2;
        localparam DEPTH = $clog2(HALF_NUM_INPUTS);
        
        // function to calculate current top index
        function int end_index;
            input int num_in, depth;
            
            automatic int result = num_in;
            for (int i = (num_in+1)/2, int j = 0; j < depth; i = (i+1)/2, j++) begin
                result += i;
                if (i == 1) break;
            end
            
            if (depth < 0) return 0;
            return result;
        endfunction
        
        
        // function that calculates previous index to be added in (along with index after the one returned by this function)
        function int prev_index;
            input int index, current_depth;
            
            automatic int rel_index = index - end_index(HALF_NUM_INPUTS, current_depth-1);
            return end_index(HALF_NUM_INPUTS, current_depth-2) + (2*rel_index);
        endfunction
        
        
        
        
        
        // ********************  Correction tree ******************** 
        /*
        Correction accumulation happens here.
        There are 2 scenarios where corrections need to be applied to the upper bit term 
        (refering only to SIGNED mode and to chained_maccs, macc modules are internally corrected):
            1) Top lower bit result is negative, accum is positive and their sum is negative
                Effect: Subtracts 1 from upper bit term (add 1 to correct for error)
            2) Top lower bit result is positive, accum is negative and their sum is positive
                Effect: Adds 1 to upper bit term (Subtract 1 to correct for error)
        */
        
        
        for (genvar i = 0; i < NUM_INPUTS; i += 2) begin
            assign corr_terms[i/2] = ((SIGN == 1 && (i != NUM_INPUTS-1)) ? ((~(inputs_sign_buf5[i] ^ WB_sign_buf4[i]) & (ki_sign_buf4[i+1]) & ~(ki[i][2*WIDTH-1])) ? ({($clog2(NUM_INPUTS)+1){1'b1}}) : 1'b0) : 1'b0)
                                   + ((SIGN == 1 && (i != NUM_INPUTS-1)) ? (((inputs_sign_buf5[i] ^ WB_sign_buf4[i])  & ~(ki_sign_buf4[i+1]) & (ki[i][2*WIDTH-1])) ? 1'b1                             : 1'b0) : 1'b0)
                                 ;
        end
        
        // correction tree
        for (genvar i = 1; i < DEPTH; i++) begin : correction_tree
            for (genvar j = end_index(HALF_NUM_INPUTS, i-1); j < end_index(HALF_NUM_INPUTS, i); j++) begin
                always_ff @(posedge clk) begin
                        // add two previous nodes in tree
                        corr_terms[j] <= (corr_terms[prev_index(j, i)])
                                   // add index after the one returned by prev_index unless the returned index is the last on that level
                                   + ((prev_index(j, i)+1 >= end_index(HALF_NUM_INPUTS, i-1)) ? 1'b0 : corr_terms[prev_index(j, i)+1]);
                end
            end
        end
        
        
        // ********************  Adder tree ******************** 
        for (genvar i = 0; i < HALF_NUM_INPUTS; i++) begin
            // copy results to temp (with sign extension)
            assign temp_j[i] = ((SIGN == 1) ? ((MAX_SIGNED_RESULT_WIDTH > 24 + WIDTH) ? ({{(MAX_SIGNED_RESULT_WIDTH - 24 - WIDTH){ji[2*i][2*WIDTH-1]}}, ji[2*i]}) : ji[2*i]) : ji[2*i])
                              ;
            assign temp_k[i] = ((SIGN == 1) ? ((MAX_SIGNED_RESULT_WIDTH > 24 - WIDTH) ? ({{(MAX_SIGNED_RESULT_WIDTH - 24 + WIDTH){ki[2*i][2*WIDTH-1]}}, ki[2*i]}) : ki[2*i]) : ki[2*i])
                              ;
        end
        
        // adder tree
        for (genvar i = 1; i < DEPTH; i++) begin : adder_tree
            for (genvar j = end_index(HALF_NUM_INPUTS, i-1); j < end_index(HALF_NUM_INPUTS, i); j++) begin
                always_ff @(posedge clk) begin
                        // add two previous nodes in tree
                        temp_j[j] <= (temp_j[prev_index(j, i)]) 
                                   // add index after the one returned by prev_index unless the returned index is the last on that level
                                   + ((prev_index(j, i)+1 >= end_index(HALF_NUM_INPUTS, i-1)) ? 1'b0 : temp_j[prev_index(j, i)+1]);
                        
                        // same thing for bottom term.
                        temp_k[j] <= temp_k[prev_index(j, i)]
                                   + ((prev_index(j, i)+1 >= end_index(HALF_NUM_INPUTS, i-1)) ? 1'b0 : temp_k[prev_index(j, i)+1]);
                end
            end
        end
        
        
    endgenerate
    
    
   assign result_T = temp_j[end_index(HALF_NUM_INPUTS, DEPTH)-2]
                   + temp_j[end_index(HALF_NUM_INPUTS, DEPTH)-3]
                   + corr_terms[end_index(HALF_NUM_INPUTS, DEPTH)-2]
                   + corr_terms[end_index(HALF_NUM_INPUTS, DEPTH)-3]
                   ;
   
   
   assign result_B = temp_k[end_index(HALF_NUM_INPUTS, DEPTH)-2] 
                   + temp_k[end_index(HALF_NUM_INPUTS, DEPTH)-3];
    
    
endmodule


module chained_adder_tree_testbench();
    localparam WIDTH = 8, NUM_INPUTS = 4, SIGN = 1;
    localparam MAX_SIGNED_RESULT_WIDTH = $clog2((2**(2*WIDTH-2)) * NUM_INPUTS) + 1;
    localparam MAX_UNSIGNED_RESULT_WIDTH = $clog2((2**(WIDTH)-1)**2 * NUM_INPUTS);
    
    logic signed [WIDTH-1:0]  inputs     [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0]  weights_T  [NUM_INPUTS-1:0]; // TOP
    logic signed [WIDTH-1:0]  weights_B  [NUM_INPUTS-1:0]; // BOTTOM
    logic                     clk;
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : MAX_UNSIGNED_RESULT_WIDTH-1):0] result_T;
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : MAX_UNSIGNED_RESULT_WIDTH-1):0] result_B;
    
    localparam CLOCK_PERIOD = 10;
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) clk <= ~clk;
    end
    
    chained_adder_tree #(.WIDTH(WIDTH), .NUM_INPUTS(NUM_INPUTS), .SIGN(SIGN)) dut (
        .inputs, .weights_T, .weights_B, .clk,
        .result_T, .result_B
    );
    
    initial begin
        inputs =    '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_T = '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_B = '{ 8'd2,   8'd2, 8'd2,  -8'd4};
//        inputs =    '{-8'd9,   8'd8,  -8'd7,  -8'd6,   8'd5};
//        weights_T = '{-8'd17, -8'd16,  8'd15, -8'd14,  8'd13};
//        weights_B = '{ 8'd22, -8'd21,  8'd20, -8'd19, -8'd18};
//        inputs =    '{ 8'd118,  -8'd86,  -8'd127,  -8'd55,  -8'd93,  -8'd20,  8'd47,  -8'd114,  8'd17,  -8'd32,  -8'd124};
//        weights_T = '{-8'd83,  8'd35,  8'd43,  -8'd101,  8'd113,  -8'd104,  8'd55,  8'd65,  8'd37,  -8'd28,  -8'd103};
//        weights_B = '{-8'd121,  8'd79,  8'd84,  -8'd43,  -8'd92,  -8'd67,  -8'd109,  -8'd21,  8'd82,  -8'd90,  8'd15};
        
        repeat(1) @(posedge clk);
        
        
        inputs =    '{ 8'd5,  -8'd5, 8'd3,   8'd3};
        weights_T = '{ 8'd5,  8'd10,-8'd3,   8'd3};
        weights_B = '{-8'd2,  -8'd5, 8'd3,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        inputs =    '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_T = '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_B = '{ 8'd2,   8'd4, 8'd2,   8'd4};
        
        repeat(1) @(posedge clk);
        
        
        inputs =    '{ 8'd5,  -8'd5, 8'd3,   8'd3};
        weights_T = '{ 8'd5,  8'd10,-8'd3,   8'd3};
        weights_B = '{-8'd2,  -8'd5, 8'd3,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        inputs =    '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_T = '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_B = '{ 8'd2,  -8'd4, 8'd2,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        
        inputs =    '{ 8'd5,  -8'd5, 8'd3,   8'd3};
        weights_T = '{ 8'd5,  8'd10,-8'd3,   8'd3};
        weights_B = '{-8'd2,  -8'd5, 8'd3,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        inputs =    '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_T = '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_B = '{ 8'd2,  -8'd4, 8'd2,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        inputs =    '{ 8'd6,  -8'd6, 8'd6,   8'd6};
        weights_T = '{ 8'd6,   8'd6, 8'd6,   8'd6};
        weights_B = '{-8'd2,  -8'd4,  8'd3,  -8'd6};
        
        repeat(1) @(posedge clk);
        
        inputs =    '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_T = '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_B = '{ 8'd2,  -8'd4, 8'd2,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        
        inputs =    '{ 8'd5,  -8'd5, 8'd3,   8'd3};
        weights_T = '{ 8'd5,  8'd10,-8'd3,   8'd3};
        weights_B = '{-8'd2,  -8'd5, 8'd3,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        inputs =    '{ 8'd2,  -8'd2,-8'd2,   8'd2};
        weights_T = '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_B = '{ 8'd2,  -8'd4, 8'd2,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        
        inputs =    '{ 8'd5,  -8'd5, 8'd3,   8'd3};
        weights_T = '{ 8'd5,  8'd10,-8'd3,   8'd3};
        weights_B = '{-8'd2,  -8'd5, 8'd3,  -8'd4};
        
        repeat(1) @(posedge clk);
        
        inputs =    '{ 8'd2,   8'd2,-8'd2,   8'd2};
        weights_T = '{ 8'd2,   8'd2, 8'd2,   8'd2};
        weights_B = '{ 8'd2,  -8'd4, 8'd2,  -8'd4};
        
        repeat(20) @(posedge clk);
        
        $stop;
    end
    
    
    localparam HALF_NUM_INPUTS = (NUM_INPUTS+1)/2;
    localparam DEPTH = $clog2(HALF_NUM_INPUTS);
    
    // testing that the function returns the desired values
    logic [MAX_SIGNED_RESULT_WIDTH-1:0] out;
    function int end_index;
            input int num_in, depth;
            
            automatic int result = num_in;
            for (int i = (num_in+1)/2, int j = 0; j < depth; i = (i+1)/2, j++) begin
                result += i;
                if (i == 1) break;
            end
            
            if (depth < 0) return 0;
            return result;
        endfunction
        
        
        
        function int prev_index;
            input int index, current_depth;
            
            automatic int rel_index = index - end_index(NUM_INPUTS, current_depth-1);
            return end_index(NUM_INPUTS, current_depth-2) + (2*rel_index);
        endfunction
        
    
    assign out = end_index(NUM_INPUTS, $clog2(NUM_INPUTS))-1;
    
    
    
endmodule
