// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
(* rom_style = "block" *) module dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_wHfu_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 381;
parameter AWIDTH = 4;
parameter MEM_SIZE = 9;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_wHfu_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule

`timescale 1 ns / 1 ps
module dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_wHfu(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd381;
parameter AddressRange = 32'd9;
parameter AddressWidth = 32'd4;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_wHfu_rom dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_wHfu_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule

