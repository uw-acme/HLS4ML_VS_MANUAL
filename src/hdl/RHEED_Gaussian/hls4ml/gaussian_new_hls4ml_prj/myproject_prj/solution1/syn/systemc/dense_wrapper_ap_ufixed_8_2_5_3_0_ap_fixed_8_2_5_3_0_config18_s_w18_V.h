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
        ram[0] = "0b111011111010011111011011111011111101011110111000011010000000010000001111110000";
        ram[1] = "0b011000111110011111100111111000000010000000001000001101000010111111100100000111";
        ram[2] = "0b000100111101010001001100000000000000010000100100010000000000101110100011110101";
        ram[3] = "0b110000000010101110110000001001000000111110101011110110000100100000111011101100";
        ram[4] = "0b010111111010101111011011111001111110010001000011110110111111011110101000000010";
        ram[5] = "0b101101000100001111101011110111111011011111010000011000111010111111100000001001";
        ram[6] = "0b111101000011101111010100010110000001000000000111110111000000111110110111111111";
        ram[7] = "0b000000000110010000000100010010000001010001010011111011000010111111100000000110";
        ram[8] = "0b011010111101110000111000001100111100101111011000000000111101010001001000000100";
        ram[9] = "0b010010111111010000000111110111111010010000010100000010111100110000010100000101";
        ram[10] = "0b000010000010100000001011111101111111101111001011110110000001011111010011110001";
        ram[11] = "0b001111111111010000010000000111111111001111111000000101000000100000100111110110";
        ram[12] = "0b101000111100111111011000000010000000100000001100000100111101110000111100001101";
        ram[13] = "0b000000000001010000000111110000000100010000000111110010111100100000010111101111";
        ram[14] = "0b001110111010011111101111110101000101110000000011111000000000111111011000000000";


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
