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
        ram[0] = "0b0100010000101111110000000011000000010000001010111011010000001000001001111111100000001111111010111111111111001000010101";
        ram[1] = "0b1110011111010000000000000000001111000000001101000001111111100111110001111011111111100100001000000011001111011111110101";
        ram[2] = "0b1111110000001011110101000010100000011000000101111010101111001000001011000010101111101000000101111101000001011111111110";
        ram[3] = "0b0010001110111111110010111100011111010011110100111101100001011000001010000101000000001011111000111100000000101100000010";
        ram[4] = "0b0011011111111011101011000010011111001100001000000010111110110100001000111111111111100011111101111110111111101000001000";
        ram[5] = "0b0100110001010000000010000010000000001100000000000011011110010011111010000011010000100100000110111111101111001000100000";
        ram[6] = "0b1110101111010000011001111111010000100011111100000001100000011100000000111100111110110000001100000010111110110011110111";
        ram[7] = "0b0000111111011011110101000100000000001000001010111100110000110111111101111100101111011111111011000000011111011111101000";
        ram[8] = "0b0100111110000011100110111111101110010100100000000001000000000000010000000100000000001000001000000011010000011111111100";
        ram[9] = "0b0011101111001011110101000001110000000111110001000001111111110100010000111111010000010100000000000001100000000011101111";


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
