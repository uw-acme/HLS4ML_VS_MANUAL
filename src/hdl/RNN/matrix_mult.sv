module matrix_mult
    #(parameter WIDTH           = 17,
                NFRAC           = 10,
                INPUT_SIZE      = 32,
                OUTPUT_SIZE     = 1
                )  (
    input  logic signed [WIDTH-1:0] input_data  [0:INPUT_SIZE-1],
    input  logic signed [WIDTH-1:0] weights     [0:INPUT_SIZE*OUTPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
);
    genvar  col, row;
    localparam TOP      = WIDTH+NFRAC-1,
               BOTTOM   = NFRAC;
    // Generate a shift add module for each multiplication, shift-add will do optimizations
    // where it can and leave the rest to Xilinx tools
    generate 
        for(row=0; row<INPUT_SIZE; row++) begin : INPUT_SIZE_rows
            for(col=0; col<OUTPUT_SIZE; col++) begin : OUTPUT_SIZE_cols
                shift_add #(.WEIGHT ( weights[row*OUTPUT_SIZE + col]),
                            .DEPTH  ( `SA_DEPTH                                     ),
                            .BITS   ( WIDTH                                         ),
                            .NFRAC  ( NFRAC                                         )
                            ) sa (
                    .clk,
                    .data_in    ( input_data[row]       ),
                    .data_out   ( mult_temp[row][col]   )
                );
//                assign mult_temp[row][col] = $signed(input_data[row]) * $signed(`SIGMOID_PKG::weights[row*OUTPUT_SIZE + col]);
                assign mult[row][col] = mult_temp[row][col][TOP:BOTTOM];
           end
        end
    endgenerate

endmodule