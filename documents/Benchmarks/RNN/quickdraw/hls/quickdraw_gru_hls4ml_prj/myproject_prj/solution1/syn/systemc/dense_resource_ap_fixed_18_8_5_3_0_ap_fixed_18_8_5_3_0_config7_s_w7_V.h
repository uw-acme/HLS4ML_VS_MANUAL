// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V_H__
#define __dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 350;
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


   SC_CTOR(dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V_ram) {
        ram[0] = "0b00011100111111111111110110000000000000000011000000000010011101000000000000101101000000000001000010000000000000001010111111111110101101000000000000101100000000000001101111111111111111111111000000000001100101000000000000011001000000000001011110000000000000000110111111111111000111000000000000001111111111111111101011111111111111110110000000000000101101";
        ram[1] = "0b00000000000000000000000101111111111111100100111111111111100110000000000000000000000000000000000010111111111111100010111111111111111101111111111111111100000000000000000110111111111111100010111111111111111100000000000000000011000000000000000001111111111111010011000000000000000010111111111111111001000000000000001001111111111111011101000000000000000011";
        ram[2] = "0b11110111111111111111101101111111111110100001000000000001000011111111111111111101111111111111100010111111111110100010000000000000111011000000000000000110111111111111010110111111111110110010000000000000101011111111111111110111111111111111100001111111111110100110000000000000111000111111111111110000111111111111100011111111111110101010000000000000110010";
        ram[3] = "0b00001110000000000000111000000000000000010001000000000000000001000000000000011011000000000000110110000000000000000110111111111111110101000000000000100001000000000000110110000000000000001010111111111111101110000000000000010001000000000000101100000000000000000101111111111111111001000000000000010101000000000000101011000000000000001010111111111111111101";
        ram[4] = "0b11000101111111111111100000000000000000011110000000000000111001111111111111100010111111111111100101000000000000100010000000000001001100111111111111100010111111111111100001000000000000100010000000000000111100111111111111010111111111111111011110000000000000101000000000000000111001111111111111010000111111111111100100000000000000100110000000000000111101";
        ram[5] = "0b10110100111111111111101100111111111111000010111111111111010111111111111110110111111111111111101100111111111111000110111111111111100011111111111110110111111111111111101111111111111110111011111111111111010011111111111110110001111111111111111010111111111111001000111111111111100001111111111110111111111111111111101100111111111110111101111111111111100001";
        ram[6] = "0b11101110111111111111110001000000000000000100111111111111110110111111111111100110111111111111111000000000000000100000111111111111111000111111111111011111000000000000001000000000000000101000000000000000001001111111111111100010111111111111111000000000000000011101111111111111111100111111111111100000111111111111110100000000000000100010111111111111110110";
        ram[7] = "0b10010101000000000000001011000000000000100010000000000000011001111111111111000110000000000000010011111111111110010100000000000000001011000000000000010001000000000000001010111111111110000001111111111111111001111111111110111001000000000000001111111111111110001110111111111111111101111111111110100011000000000000000111111111111110001101000000000000000001";
        ram[8] = "0b00100011111111111111010001111111111110110001000000000000100100000000000000110101111111111111100000111111111110101111000000000000100110000000000000101101111111111111011111111111111110101000000000000000100111000000000000110110111111111111010001111111111110110010000000000000110111000000000000111011111111111111100001111111111110101011000000000000101001";
        ram[9] = "0b10101000000000000001001110000000000000111101000000000000011001111111111110011001000000000001001110000000000001001000000000000000001101111111111110010000000000000001010111000000000001001101000000000000011011111111111110010000000000000001001101000000000001010110000000000000001111111111111110010011000000000001000110000000000001000111000000000000011000";
        ram[10] = "0b11011111111111111111111101111111111111010011111111111111011000111111111111010011111111111111110100111111111111011001111111111111011110111111111111100011111111111111111010111111111111011101111111111111100100111111111111011111000000000000001010111111111111100001111111111111100000111111111111011011111111111111111011111111111111100001111111111111101010";
        ram[11] = "0b11101000111111111111110100000000000000110000000000000001000111111111111111101001111111111111110000000000000000111011000000000001000101111111111111101110111111111111101100000000000001000011000000000001001010111111111111110001111111111111100111000000000000111010000000000001000111111111111111101001111111111111101100000000000000111001000000000001000001";
        ram[12] = "0b00100011111111111111110010000000000000100101000000000000100010000000000000100001000000000000000000000000000000011011000000000000011110000000000000011100111111111111111100000000000000101111000000000000011010000000000000100000111111111111111011000000000000100000000000000000100001000000000000100100111111111111111101000000000000100101000000000000011100";
        ram[13] = "0b01011000000000000000110011000000000001000000111111111110100001000000000001011001000000000000110111000000000000111011111111111110110001000000000001010001000000000000110000000000000000111011111111111110100110000000000001011000000000000000101101000000000000101000111111111110101111000000000001011111000000000000111000000000000001000100111111111110101111";
        ram[14] = "0b00010010111111111111010000111111111111111011111111111111011111000000000000010101111111111110111101000000000000000111111111111111010011000000000000011111111111111111001101000000000000000100111111111111010110000000000000010110111111111110111101000000000000010111111111111111010010000000000000011001111111111110110011000000000000000110111111111111001110";
        ram[15] = "0b00001001111111111111111010111111111110011100000000000000000011000000000000001111000000000000000111111111111110110100000000000000000010000000000000010111000000000000001110111111111110110010111111111111111111111111111111111111000000000000001101111111111110101010111111111111111110111111111111111110000000000000001011111111111110100010111111111111111000";
        ram[16] = "0b00111101000000000001000111111111111111101111111111111111000010000000000000100101000000000000111000111111111111110110111111111111000100000000000000100111000000000000111111111111111111101110111111111111000011000000000000110110000000000001001011111111111111101001111111111111000111000000000000110011000000000001000011111111111111101110111111111110110010";
        ram[17] = "0b00011010111111111111001000111111111111100100000000000000001000000000000000011111111111111111011001111111111111100000000000000000000001000000000000100011111111111111010110111111111111100110000000000000000000000000000000100000111111111111010010111111111111100000000000000000000100000000000000100010111111111111001101111111111111011001000000000000010100";
        ram[18] = "0b11000001111111111111111101111111111111111100111111111111111010111111111111010000000000000000001001000000000000101110111111111111100110111111111111010010111111111111111011000000000001001010111111111111101100111111111111001000000000000000010001111111111110110111111111111111100000111111111111000001000000000000011011000000000000110110111111111111101001";
        ram[19] = "0b00111111000000000001001100000000000000011001111111111111101111000000000000101011000000000001011011000000000000010010111111111111001111000000000000101001000000000001010111000000000000011000111111111111000101000000000000110101000000000001001011000000000000011010111111111111010001000000000000110011000000000001010001000000000000011110111111111111001100";
        ram[20] = "0b10110101111111111111100010000000000000101101000000000000010101111111111110110101111111111111001100000000000000011100000000000000001000111111111110110100111111111111010000000000000000010010000000000000011100111111111110111101111111111111010011000000000000100001000000000000010000111111111111000011111111111111010000000000000000100011000000000000011001";
        ram[21] = "0b00001011000000000000000101111111111111111111000000000000000111000000000000001011000000000000001100111111111111111111000000000000010000111111111111111011000000000000010111111111111111111110000000000000001100000000000000010001000000000000001010000000000000001000000000000000001011000000000000001111000000000000001110111111111111111100000000000000000110";
        ram[22] = "0b00101101000000000000011101000000000001010011111111111111011001000000000000100110000000000000011010000000000001000111111111111111010011000000000000101010000000000000001010000000000000111100000000000000000110000000000000101010000000000000001111000000000000111001111111111111110110000000000000100000000000000000010011000000000001000101111111111111001001";
        ram[23] = "0b10111110111111111111010101111111111111100101000000000001000001111111111110110010111111111111100001111111111111100100000000000000111111111111111111001000111111111111101011111111111111011110111111111110111011111111111110110010111111111111011101111111111111101111000000000000010111111111111110111010111111111111100000111111111111101100000000000001100110";
        ram[24] = "0b00010001000000000001000110111111111111010110111111111111011010000000000000001110000000000000110101111111111111000101111111111111011011000000000000011010000000000000100111111111111111000100111111111111101010000000000000011001000000000000110001111111111111000100111111111111101010000000000000100010000000000000101100111111111111010101111111111111011110";
        ram[25] = "0b11100111000000000000101000111111111111101100111111111111011001111111111111110001000000000000011101111111111111101011111111111111011010111111111111111000000000000000100110111111111111100101111111111111001001111111111111100111000000000000100000111111111111100101111111111111001010111111111111101111000000000000010011111111111111100101111111111111010010";
        ram[26] = "0b10101100111111111111011100111111111111101101000000000001100010111111111110101011111111111111011111000000000000000011111111111111101111111111111110101001111111111111001100000000000000001010000000000001000001111111111110100100111111111111010010111111111111111001000000000000101010111111111110110000111111111111010001111111111111110101111111111110111110";
        ram[27] = "0b11001001000000000000001001111111111111010100111111111111011010111111111111001100000000000000010011111111111111000011111111111111011101111111111111001101000000000000001010111111111111001100111111111111011100111111111111010000000000000000000111111111111111010001111111111111011111111111111111001000000000000000001000111111111111001101111111111111011100";
        ram[28] = "0b11110000000000000000010000111111111111011011000000000000000111111111111111110111000000000000011001111111111111001001000000000000000010111111111111110110000000000000011000111111111111011100111111111111111011111111111111110101000000000000100100111111111111010100000000000000000001111111111111111101000000000000010001111111111111010111000000000000000010";
        ram[29] = "0b00001101111111111111000011111111111111100101000000000000000111000000000000001011111111111110110001111111111111101111000000000000001111000000000000011011111111111110101100111111111111101010000000000000000111000000000000001010111111111110101111111111111111101101000000000000000110000000000000000100111111111110110111111111111111101110000000000000000101";
        ram[30] = "0b11111100111111111111110000111111111111101111111111111110111001000000000000001010111111111111110000111111111111100100111111111111000111000000000000010000111111111111011001111111111111100001111111111110111110000000000000010110111111111111100110111111111111011100111111111111000011000000000000010000111111111111011101111111111111100001111111111111010000";
        ram[31] = "0b10110110111111111101110000000000000000010010111111111111101001111111111110101100111111111110101011000000000000001001111111111111110010111111111110101100111111111110110100000000000000001001111111111111110011111111111110110100111111111111101111000000000000000000111111111111100010111111111110110100000000000000011001000000000000001011111111111111101000";


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


SC_MODULE(dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V) {


static const unsigned DataWidth = 350;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V) {
meminst = new dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V_ram("dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V() {
    delete meminst;
}


};//endmodule
#endif