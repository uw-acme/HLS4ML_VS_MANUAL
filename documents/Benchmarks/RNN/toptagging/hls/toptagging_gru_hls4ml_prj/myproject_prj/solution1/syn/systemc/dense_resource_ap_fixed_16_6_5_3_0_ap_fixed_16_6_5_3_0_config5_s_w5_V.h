// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_H__
#define __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 29;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_ram) {
        ram[0] = "0b00101000111011111111011011001";
        ram[1] = "0b11110100101011111101011011101";
        ram[2] = "0b00001100001010000000111011010";
        ram[3] = "0b11101011010000000000011110111";
        ram[4] = "0b11100100010011111110101001111";
        ram[5] = "0b00101111100100000010100000011";
        ram[6] = "0b11010000111110000010110101011";
        ram[7] = "0b00010001101010000000001000111";
        ram[8] = "0b11000100100010000001000110110";
        ram[9] = "0b10011101011011111110101001011";
        ram[10] = "0b00111000001111111111010111101";
        ram[11] = "0b11101111001100000000101110110";
        ram[12] = "0b00100111111100000001000111011";
        ram[13] = "0b11101101111000000000110111010";
        ram[14] = "0b11101011011100000011100110101";
        ram[15] = "0b11101111001000000000111110000";
        ram[16] = "0b11000101011101111110011101011";
        ram[17] = "0b11110000011011111110100010000";
        ram[18] = "0b00001001111000000001100101111";
        ram[19] = "0b11101111011010000000011110010";
        ram[20] = "0b11001100110101111110001000110";
        ram[21] = "0b11110011001101111111001000001";
        ram[22] = "0b10111101000011111101110101010";
        ram[23] = "0b00001100110111111101000001100";
        ram[24] = "0b11110001111010000000100110101";
        ram[25] = "0b11110001100111111110011101101";
        ram[26] = "0b11110011000110000001000010011";
        ram[27] = "0b00011011001110000001100000010";
        ram[28] = "0b11101100010011111111000101101";
        ram[29] = "0b10111110101010000100110110100";
        ram[30] = "0b00000111110010000100010110100";
        ram[31] = "0b11110101101011111110101111010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V) {


static const unsigned DataWidth = 29;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V) {
meminst = new dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_ram("dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V() {
    delete meminst;
}


};//endmodule
#endif
