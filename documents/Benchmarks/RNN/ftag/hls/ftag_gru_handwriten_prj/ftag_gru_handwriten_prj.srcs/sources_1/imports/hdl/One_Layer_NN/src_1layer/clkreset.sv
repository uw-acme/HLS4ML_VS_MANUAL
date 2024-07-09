//--------------------------------------------------------------------------
//  File         : clkreset.vhd
//--------------------------------------------------------------------------
//  Description  : Wrapper for clock MCMM reset logic
//                 This version is for a board with a
//                 200 MHz differential clock. 
//--------------------------------------------------------------------------
`timescale 1ns / 1ps

module clkreset(
    // Reset and clock from pads
    input   logic   reset_in    ,
    input   logic   clk_in1_p   ,
    input   logic   clk_in1_n   ,

    // Reset and clock outputs to all internal logic
    output  logic   clk         ,
    output  logic   lock        ,
    output  logic   reset      
);


//------------------------------------------------------------------------
// Architecture for development board with
// 200MHz input clock from oscillator on the board
//----------------------------------------------------------------------

logic           pll_locked;
logic           pll_locked_d1;
logic           clk_i;
logic   [7:0]   cnt_reset;



    // Outputs
    assign clk         = clk_i;
    assign lock        = pll_locked;

    //-------------------------------------------------------------------------------
    // Clock generator. Xilinx IP clock wizard.
    // Generates 160MHz output clock from differential 200MHz input.
    // The 'locked' output is used to generate reset for all other FPGA logic.
    //-------------------------------------------------------------------------------
    clkgen_200to160     u_clkgen160
    (
        .clk_out1       (clk_i       ) , // out std_logic;        
        .reset          (reset_in    ) , // in  std_logic := '0'; 
        .locked         (pll_locked  ) , // out std_logic         
        .clk_in1_p      (clk_in1_p   ) , // in  std_logic := '0'; 
        .clk_in1_n      (clk_in1_n   )   // in  std_logic := '0';
    );


    //-----------------------------------------------------------------------------
    // Keep reset output active until N cycles after PLL locked
    //-----------------------------------------------------------------------------
//    always_ff @(posedge clk_i or reset_in or pll_locked)  // mixed level sesitive and edge triggered event controls are not supported for synthesis
    always_ff @(posedge clk_i)
    begin: pr_reset
    
        if (reset_in | pll_locked == 1'b0) begin 
            reset           <= 1'b1;
            pll_locked_d1   <= 1'b0;
            cnt_reset       <= 8'h00;

        end else begin 

            pll_locked_d1   <= pll_locked;

            if (pll_locked_d1 && (cnt_reset < 8'h0F)) begin
                cnt_reset   <= cnt_reset + 1;
            end;

            if (cnt_reset < 8'h0F) begin
                reset       <= 1'b1;
            end else begin
                reset       <= 1'b0;
            end

        end
    end


endmodule
