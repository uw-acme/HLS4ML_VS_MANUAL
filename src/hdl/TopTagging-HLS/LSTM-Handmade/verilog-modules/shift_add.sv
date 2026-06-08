`timescale 1ns / 1ps

`include "defines.svh"

/* This file contains the shiftAdd multiplication method.
*/
// The actual shiftAdd module
module shift_add #(parameter signed WEIGHT  = 17'd1,
                   parameter        DEPTH   = 3,
                                    BITS    = 17,
                                    NFRAC   = 8,
                                    DEPTH_FRAC = 5
                   )(
    input logic                 clk,
    input                       ce,
    input logic [BITS-1:0]      data_in,
    output logic [BITS*2-1:0]   data_out
);
    typedef integer signed int_array[DEPTH:0];
    // Constant Function:
    // This function returns the absolute value of an integer
    function integer signed abs_value(input integer signed value);
        abs_value = value >= 0 ? value : -value;
    endfunction

    // Constant Function:
    // Determines the next largest shift term and adds 1 to it.
    // Returns zero if no shift-add term is needed.
    function automatic integer signed determineOneShift(input integer signed number, input integer bits);
        integer n = bits;
        for (integer i = bits; i >= 0; i--) begin
            if (abs_value(abs_value(number) - 2**n) > abs_value(abs_value(number) - 2**i))
                n = i;
        end
        determineOneShift = number != 0 ? n+1 : 0;
    endfunction
    // Constant Function:
    // Returns the number as well as the shift amounts in an array
    function automatic int_array determineShifts(input integer signed number, input integer bits, input integer depth);
        for (integer i = 1; i <= depth; i++) begin
            // determine the shift amount + 1 and add it the output array
            integer n = determineOneShift(number, bits);

            // make sure the shift amount is positive if its meant to be added and negative if meant to be subtracted
            determineShifts[i] = number >= 0 ? n : -n; 

            // update the number
            if (number != 0) number = (number >= 0) ? number - 2**(n-1) : number + 2**(n-1);
        end
        
        // return the remainder of the number. If it is != 0 then the value was too complex
        determineShifts[0] = number;
    endfunction
    function automatic integer unsigned determine_signed_bits(input logic signed [BITS-1:0] weight);
        int num_bits = 0;
        logic sign_bit = weight[BITS-1];
        for (integer i=BITS-1; i>=0; i--) begin
            if (weight[i]==sign_bit)
                num_bits++;
            else
                break;
        end
        return num_bits-1;
    endfunction
    localparam integer signed shift[DEPTH:0] = determineShifts(WEIGHT, BITS, DEPTH);
    localparam integer num_signed_bits = determine_signed_bits(WEIGHT);
    logic signed [BITS*2-1:0]       data_in_ex;
    // logic signed [BITS*2-1:0]       data_out_accum;
    logic signed [BITS+NFRAC-1:0]   data_out_tmp;
    logic signed [BITS-1:0] data_in_reg;
    `ifndef PIPELINE_MULT
        `define PIPELINE_MULT 0
    `endif
    if (`PIPELINE_MULT) begin
        always_ff @(posedge clk) begin
            data_in_ex<=$signed(data_in);
            data_in_reg<=data_in;
        end
    end
    else begin
        assign data_in_ex = $signed(data_in);
        assign data_in_reg=data_in;
    end
   //if (shift[0] == '0) begin // Original 
    if ((shift[0]=='0)&&(( (abs_value(WEIGHT)%10)<DEPTH_FRAC )||(shift[DEPTH]==0))) begin// Modified
        always_comb begin
            // make data_out_tmp an accumulator
            data_out_tmp = '0;

            // iterate through the values and apply shifts and adds/subtracts 
            // importantly, skip any zeros (they represent a term that shouldn't exist)
            // subtracts 1 from shift amount to derive real shift amount
            for(integer i = 1; i <= DEPTH; i++) begin
                if      (shift[i] > 0) begin data_out_tmp = data_out_tmp + (data_in_ex << (shift[i] - 1));  end
                else if (shift[i] < 0) begin data_out_tmp = data_out_tmp - (data_in_ex << (abs_value(shift[i])-1)); end
            end
        end
        always_ff @(posedge clk) begin
            if (ce) data_out <= $signed(data_out_tmp);
        end
    end else begin
    // end, 

    // always_comb begin
    //     data_out_tmp = $signed(data_in_reg) * $signed(WEIGHT[BITS-num_signed_bits-1:0]);
    // end
    // always_ff @(posedge clk) begin
    //     if (ce) data_out <= $signed(data_out_tmp);
    // end
    (* use_dsp = "yes" *) mult_basic #(
                .din_WIDTH(BITS), 
                .dweight_WIDTH(BITS-num_signed_bits),
                .dout_WIDTH(BITS+NFRAC)
                ) 
                shiftAdd_mult
                (
                .num_i(data_in),
                .weight_i(WEIGHT[BITS-num_signed_bits-1:0]),
                .mult_o(data_out),
                .clk,
                .ce
                );
    // (* use_dsp = "yes" *) basic_mult #(.WIDTH(BITS)) mult_m (.a($signed(data_in_reg)), .b(WEIGHT[BITS-num_signed_bits-1:0]), .out(data_out), .clk, .ce);
        end
	
endmodule

// module basic_mult
//         #(parameter WIDTH=16) 
//         (input logic signed [WIDTH-1:0] a,
//         input logic signed [WIDTH-1:0] b, 
//         output logic signed [2*WIDTH-1:0] out,
//         input clk, input ce);

//     always_ff @(posedge clk) begin
//         if (ce) out <= a*b;
//     end
// endmodule
module mult_basic 
#(parameter din_WIDTH, dweight_WIDTH, dout_WIDTH)
    (
    input logic [din_WIDTH-1:0]num_i, 
    input logic [dweight_WIDTH-1:0]weight_i, 
    output logic signed [dout_WIDTH-1:0]mult_o,
    input logic clk,
    input ce
    );
    always_ff @(posedge clk) begin
        if (ce) mult_o<=$signed(num_i)*$signed(weight_i);
    end
endmodule
/*  ------------------------------------
    Testbench for shift-add module
    ------------------------------------
*/
module shift_add_tb();
    localparam WEIGHT = -17'd5,
               DEPTH  = 2,
               BITS   = 17,
               NFRAC  = 10;
    
    logic [BITS-1:0]   data_in;
    logic [2*BITS-1:0] data_out;
    
    shift_add #(.WEIGHT ( WEIGHT ),
                .DEPTH  ( DEPTH  ),
                .BITS   ( BITS   ),
                .NFRAC  ( NFRAC  )
    ) dut (.*);
    
    logic clk;
    localparam CLK_PERIOD = 10;
    
    initial begin
        clk <= '0;
        forever #(CLK_PERIOD/2) clk <= ~clk;
    end
    
    initial begin
        data_in = 17'd5; repeat(3) @(posedge clk);
        $stop;
    end
    
endmodule




