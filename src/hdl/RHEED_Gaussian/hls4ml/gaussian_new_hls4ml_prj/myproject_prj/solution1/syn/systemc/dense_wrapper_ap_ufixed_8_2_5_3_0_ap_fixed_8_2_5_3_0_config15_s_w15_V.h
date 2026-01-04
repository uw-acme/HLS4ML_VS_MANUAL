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

  static const unsigned DataWidth = 118;
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
        ram[0] = "0b0111111111110111110011000100000001001100011000111110011110110111111101111100100000001011110110111110111110100100010010";
        ram[1] = "0b1111101111010100001111111110011111011111111111110111111111001011100101000001100000111000011001000001000000001011111111";
        ram[2] = "0b1100101111011111110110001001011110110111100111111110100000100100000100000000011111101111101111111111110000010100000100";
        ram[3] = "0b1010110000010011110100000000011111100100000011111010101111011111100000000101110000000100000111000100111111101100001001";
        ram[4] = "0b0001111111100100000100111100100001000000001100111111110000001111101111000000101111011011101011111110001110110111111110";
        ram[5] = "0b0110000000100100001001111110111111011111101011111101000001111011100110000100010000001100010001000101111111111111111100";
        ram[6] = "0b0011110001011100000011000000101111101011101011111010101110100111111111000000100001010100011000111101100001000100001100";
        ram[7] = "0b1111101111101011101100000001001111011011110000111010011111010000000001000000110000110000001010000010010000001111111111";
        ram[8] = "0b1110111111010011111001111010111110011000000001111101011110110111111010111100111111100011111011000111010001010011111101";
        ram[9] = "0b1011101110001100000001000000101110111111110010000110000001001011011011000001000000000000001101000001001110010100001110";


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


static const unsigned DataWidth = 118;
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
