// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_H__
#define __dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 78;
  static const unsigned AddressRange = 15;
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


   SC_CTOR(dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_ram) {
        ram[0] = "0b000001000010111111010000001001111100111111010011111011111100000000001000001101";
        ram[1] = "0b001111000000101111011111100100111010101111100111101111111101011111000011101101";
        ram[2] = "0b111010111101000000101011111101000001001111100000000001000000110000000100001101";
        ram[3] = "0b101000000001100000010100010000111101110001000100000001111111101111011111111100";
        ram[4] = "0b111101000000100000101100000111111101111111000011111101000011101111010000001110";
        ram[5] = "0b110010000000101111001011110110111111011111011011101011111111011111010000001100";
        ram[6] = "0b001011111111110000101100000111111011001111101100001101000010011111111111111011";
        ram[7] = "0b100111000000101110110111101111000001110000010111110111111110010000100011111100";
        ram[8] = "0b110111111110011110111100001001111101110000011011101001000010001111100100001101";
        ram[9] = "0b110100111011001111101011111110000000110000100011100111000101001110100100000101";
        ram[10] = "0b111011000010000000111100001101111011111111100011111110111101111111011000000001";
        ram[11] = "0b010000000000101111010100001101000100001111101111111111111111101111110011111001";
        ram[12] = "0b111011111101010000101111110110000000001110100100000001000011001111110111101111";
        ram[13] = "0b101001000011010000001011101100000000001111100111110101000100010000011111110100";
        ram[14] = "0b111111000001100000011000000100000001110000111111110011000000111111100000001000";


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


SC_MODULE(dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V) {


static const unsigned DataWidth = 78;
static const unsigned AddressRange = 15;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V) {
meminst = new dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_ram("dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V() {
    delete meminst;
}


};//endmodule
#endif
