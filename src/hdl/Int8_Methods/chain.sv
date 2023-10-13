`timescale 1ns / 1ps



module chain #(parameter NUM_INPUTS = 1280, WIDTH = 8, SIGN = 1) 
              (clk, inputs, weights_j, weights_k, out_j, out_k);
    input logic clk;
    input logic signed [WIDTH-1:0] inputs [NUM_INPUTS-1:0];
    input logic signed [WIDTH-1:0] weights_j [NUM_INPUTS-1:0];
    input logic signed [WIDTH-1:0] weights_k [NUM_INPUTS-1:0];
    
    localparam MAX_SIGNED_RESULT_WIDTH = $clog2((2**(2*WIDTH-2)) * NUM_INPUTS) + 1;
    localparam MAX_UNSIGNED_RESULT_WIDTH = $clog2((2**(WIDTH)-1)**2 * NUM_INPUTS);
    
    output logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : 
                                        MAX_UNSIGNED_RESULT_WIDTH-1):0] out_j, out_k;
   
    logic signed [2*WIDTH-1:0] ji [NUM_INPUTS-1:0];
    logic signed [2*WIDTH-1:0] ki [NUM_INPUTS-1:0];
    
    // giving enough additional indecies so that we don't run out of indecies in the adder tree
    // should simplify out unused indecies when complied
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : 
                                 MAX_UNSIGNED_RESULT_WIDTH-1):0] temp_j [3*NUM_INPUTS:0];
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 : 
                                 MAX_UNSIGNED_RESULT_WIDTH-1):0] temp_k [3*NUM_INPUTS:0];
    
    initial assert(NUM_INPUTS>0);
    genvar i, j;
    generate
        for (i=0; i < NUM_INPUTS; i++) begin : eachSlice
            macc #(WIDTH, 1) slice (.weight_j(weights_j[i]), .weight_k(weights_k[i]), .input_i(inputs[i]), 
                                    .clk, .ji(ji[NUM_INPUTS-1-i]), .ki(ki[NUM_INPUTS-1-i]));
        end 
        // previous adder tree
        
//        assign temp_j[0] = '0 + ji[0];
//        assign temp_k[0] = '0 + ki[0];
//        for (i=1; i < NUM_INPUTS; i++) begin
//            assign temp_j[i] = ji[i] + temp_j[i-1];
//            assign temp_k[i] = ki[i] + temp_k[i-1];
//        end
        
        
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
            
            automatic int rel_index = index - end_index(NUM_INPUTS, current_depth-1);
            return end_index(NUM_INPUTS, current_depth-2) + (2*rel_index);
        endfunction
        
        
        
        
        
        localparam DEPTH = $clog2(NUM_INPUTS);
        for (genvar i = 0; i < NUM_INPUTS; i++) begin
            // copy results to temp (with sign extension)
            assign temp_j[i] = ((SIGN == 1) ? ((MAX_SIGNED_RESULT_WIDTH > 24 + WIDTH) ? ({{(MAX_SIGNED_RESULT_WIDTH - 24 - WIDTH){ji[i][2*WIDTH-1]}}, ji[i]}) : ji[i]) : ji[i])
                              ;
            assign temp_k[i] = ((SIGN == 1) ? ((MAX_SIGNED_RESULT_WIDTH > 24 - WIDTH) ? ({{(MAX_SIGNED_RESULT_WIDTH - 24 + WIDTH){ki[i][2*WIDTH-1]}}, ki[i]}) : ki[i]) : ki[i])
                              ;
        end 
        // adder tree
        for (genvar i = 1; i < DEPTH; i++) begin : adder_tree
            for (genvar j = end_index(NUM_INPUTS, i-1); j < end_index(NUM_INPUTS, i); j++) begin
                always_ff @(posedge clk) begin
                        // add two previous nodes in tree
                        temp_j[j] <= (temp_j[prev_index(j, i)]) 
                                   // add index after the one returned by prev_index unless the returned index is the last on that level
                                   + ((prev_index(j, i)+1 >= end_index(NUM_INPUTS, i-1)) ? 1'b0 : temp_j[prev_index(j, i)+1]);
                        
                        // same thing for bottom term.
                        temp_k[j] <= temp_k[prev_index(j, i)]
                                   + ((prev_index(j, i)+1 >= end_index(NUM_INPUTS, i-1)) ? 1'b0 : temp_k[prev_index(j, i)+1]);
                end
            end
        end
        
        
    endgenerate
   
   assign out_j = temp_j[end_index(NUM_INPUTS, DEPTH)-2] + temp_j[end_index(NUM_INPUTS, DEPTH)-3];
   assign out_k = temp_k[end_index(NUM_INPUTS, DEPTH)-2] + temp_k[end_index(NUM_INPUTS, DEPTH)-3];
   
endmodule
    
module chain_testbench();
    parameter WIDTH = 8;
    parameter NUM_INPUTS = 11;
    parameter SIGN = 1;
    localparam MAX_SIGNED_RESULT_WIDTH = $clog2((2**(2*WIDTH-2)) * NUM_INPUTS) + 1;
    localparam MAX_UNSIGNED_RESULT_WIDTH = $clog2((2**(WIDTH)-1)**2 * NUM_INPUTS);
    
    logic signed [((SIGN == 1) ? MAX_SIGNED_RESULT_WIDTH-1 :
                                 MAX_UNSIGNED_RESULT_WIDTH-1):0] out_j, out_k;
    logic clk;
    logic signed [WIDTH-1:0] inputs [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0] weights_j [NUM_INPUTS-1:0];
    logic signed [WIDTH-1:0] weights_k [NUM_INPUTS-1:0];
    
    chain #(NUM_INPUTS, WIDTH) dut (.clk, .inputs, .weights_j, .weights_k, .out_j, .out_k);
    
    parameter CLOCK_PERIOD = 10;
    
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) begin
            clk <= ~clk;
        end
    end
    
    
    
    initial begin 
//        inputs =    '{-8'd9,   8'd8,  -8'd7,  -8'd6,   8'd5};
//        weights_j = '{-8'd17, -8'd16,  8'd15, -8'd14,  8'd13};
//        weights_k = '{ 8'd22, -8'd21,  8'd20, -8'd19, -8'd18};

        inputs =    '{ 8'd118,  -8'd86,  -8'd127,  -8'd55,  -8'd93,  -8'd20,  8'd47,  -8'd114,  8'd17,  -8'd32,  -8'd124};
        weights_j = '{-8'd83,  8'd35,  8'd43,  -8'd101,  8'd113,  -8'd104,  8'd55,  8'd65,  8'd37,  -8'd28,  -8'd103};
        weights_k = '{-8'd121,  8'd79,  8'd84,  -8'd43,  -8'd92,  -8'd67,  -8'd109,  -8'd21,  8'd82,  -8'd90,  8'd15};
        repeat(20) @(posedge clk);
    $stop;
    end
    
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
