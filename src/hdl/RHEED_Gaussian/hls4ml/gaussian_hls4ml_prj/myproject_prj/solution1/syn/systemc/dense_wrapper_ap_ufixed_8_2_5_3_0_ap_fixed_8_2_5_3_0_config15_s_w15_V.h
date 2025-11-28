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
        ram[0] = "0b0010100000011111101111000000000000001111101010000101111111110000000111111110100000000000001010000000100000111111111001";
        ram[1] = "0b0100110001001111100100111100011111100011110011000010001111000011111111000000110000000111100110000010001111101100000010";
        ram[2] = "0b1001010000101000000001111100100001100111111101000010100000011100000010111011001111010111110000111011101110101011110100";
        ram[3] = "0b1111000000101100001111111111111111111100000101111100100001000100001011111111111110100000001011111111111111101011111000";
        ram[4] = "0b0100001111011000001011000000010000011000000011111111101111110011110100111110110000110111100101111100011110111000011101";
        ram[5] = "0b1110010000101011101010111110100001000000000100111011111111000000010001111010110000100100001010111101100000010011111110";
        ram[6] = "0b0001100001010011110110000100111111011000010100111111001111011011111101111111001110011000000011000000100000011111110111";
        ram[7] = "0b0000101111101111111110111101110000011100001111111110001111010000010000111010011110100011101010111110111110101000000110";
        ram[8] = "0b1111000000000011110001000011100000100111101010111111110000010111110010000001111111010011101011111101001110010000000110";
        ram[9] = "0b0010100000101100000110000011100001001111111111000001100000101011110101000001110001010011100111000111011111001000000100";


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
