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
        ram[0] = "0b110100000000100000111000000101111100111110100011111010111100110000010011111100";
        ram[1] = "0b010001000011111111101100001000111111110001100111110001111110001111101100000111";
        ram[2] = "0b110001000000100000101100001110000000000000000100001110111101111111111111111000";
        ram[3] = "0b000001111110101111111011110111111111101111100011111010000001101111111000001010";
        ram[4] = "0b110100000000001111010111110101111111110000001100000011000010000000000111100101";
        ram[5] = "0b101001000001000000001011111001000100111111111100000011000000000000000011111100";
        ram[6] = "0b110011000010010000010000000000111100001110111100010001111110101111010111110101";
        ram[7] = "0b100110000000111111010111111010000000101110010000000010000010100000101111110101";
        ram[8] = "0b000000000011110000100111111000111101100001001000000010000010011111110111111011";
        ram[9] = "0b111101000100101111011011111110111110110000100111110111000100010000000100000110";
        ram[10] = "0b000011000101011110111011110100000010011111001111101110000000001110101100000101";
        ram[11] = "0b000011111111011111111011101100111110110001000111111011111111010000110000000100";
        ram[12] = "0b111010111111101111101000000100111110101110111100000010000000110000011000000100";
        ram[13] = "0b111010000000001111110011111111111101101111110000000001111111100000001000000001";
        ram[14] = "0b111000000000111110110000000111000010011111111100000110111110010000011011110000";


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
