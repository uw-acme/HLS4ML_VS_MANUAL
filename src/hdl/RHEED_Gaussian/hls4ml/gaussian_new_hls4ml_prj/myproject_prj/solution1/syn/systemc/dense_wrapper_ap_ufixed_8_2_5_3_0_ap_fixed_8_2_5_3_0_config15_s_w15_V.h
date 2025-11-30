// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_H__
#define __dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 119;
  static const unsigned AddressRange = 10;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_ram) {
        ram[0] = "0b00010110000110011110000000000110010000111110001111010110000000111111110111100110000001011110110101110100000110011101111";
        ram[1] = "0b00010011111100000001100111010101110110100000110000011110000101111100110000010011110111000010110000101011110010100000000";
        ram[2] = "0b10111011110110111111100000000111110011100000001111111111110111111110010111100110000000000001101111100011111110011111101";
        ram[3] = "0b11000101111000000000111000000010001000011101101000011110001000011110001000000000000111100000101000101110001010111101111";
        ram[4] = "0b11101011110010111111111000010100000100111110001111101001111100011111000111011010000010011111110111111001110101011111111";
        ram[5] = "0b10110110001001100000100000010101110000011100011000101010001000000001001000001001110011111110111000001100000101011101110";
        ram[6] = "0b00011010000010111110111111100111111100000001110111110000001101111110110111011111110111000000101111011010001101111111100";
        ram[7] = "0b00110100000011100000111000100111110111000010000111110010000111111111101111110001111010111111101111011111110101000001011";
        ram[8] = "0b11100000000011011111011000001010000001011111011000101100000001100000110111111010000010011100100000001011111110100010000";
        ram[9] = "0b11110001111101000010101111101111111110011110111000011000000111011101011000011101110010111110001111000010000100000010000";


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


SC_MODULE(dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V) {


static const unsigned DataWidth = 119;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V) {
meminst = new dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_ram("dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V() {
    delete meminst;
}


};//endmodule
#endif
