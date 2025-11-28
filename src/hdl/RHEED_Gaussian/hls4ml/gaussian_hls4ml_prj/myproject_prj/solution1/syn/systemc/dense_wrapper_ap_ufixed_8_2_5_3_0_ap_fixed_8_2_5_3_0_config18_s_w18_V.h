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
        ram[0] = "0b111110111100111111101011111010111101001111000000000010000101100000000000000000";
        ram[1] = "0b010000000010001111000000000000000011010001011011100110111011011111111100001011";
        ram[2] = "0b000011111100010000011100000000111111000000010100000111111100101111010111110000";
        ram[3] = "0b111000111110000000011011111010000011011111010011101100000001110000011100001010";
        ram[4] = "0b000001111111110000110111101111111110101111011100000100111101100000011011111100";
        ram[5] = "0b001001000001000000001111101100111101101111110100001010000000010001001000010000";
        ram[6] = "0b110100000011000000011011110100000100100000100000000101000010011111110000001101";
        ram[7] = "0b111011111101010000011111101001111111000001001000000011000110001110101011101111";
        ram[8] = "0b000111000001110000100011110100111101000000110100000111111111110001000000000100";
        ram[9] = "0b001011111101010001101011111001000101111111010100001011111100001111110011110000";
        ram[10] = "0b000110111111111111011000000110111001011111100011110110111111101111000100000101";
        ram[11] = "0b111001111111110000111111110010000000011111111000010101000000100000010111100111";
        ram[12] = "0b111000000010100000010011111010111111011111101011111001111101001111111000001010";
        ram[13] = "0b000000111110001110100011111110111011011111100011110100111101101111001100000011";
        ram[14] = "0b111000000000010000100100000111000010100001010000001100000010100001000000001001";


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
