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
        ram[0] = "0b001111111001100000000111110000111101110001010011111101000001010000110011110010";
        ram[1] = "0b000110000100000000101100000011111101111111111000001111000001010000010011111010";
        ram[2] = "0b001001111110011111100100001101111111101111010000001011111110111111110011111111";
        ram[3] = "0b000001111110011111101000001100111110011111101111110100111111011111110000000001";
        ram[4] = "0b111100000001110000001100001101111111001111101100010001111100110000100000000010";
        ram[5] = "0b110111111101001110111000010011111101101111001011110101111111110000100111110101";
        ram[6] = "0b110010111011100000001100010000000010000000101100000000111100010000101100010100";
        ram[7] = "0b001010111111100000001000001111111100011111011000000011000000011110101011111110";
        ram[8] = "0b111011111110010000001111101100000000000000100011111111111110001110100000001000";
        ram[9] = "0b101110111101000000011100000011000000110001011011111100000000011111101011111010";
        ram[10] = "0b111111111100110000111100001111111101001111111111111010111110101111100000000111";
        ram[11] = "0b101100111101010001011000000010000010110000100011110100000001100000111111111110";
        ram[12] = "0b000100000000100001100011101100000011101111110011111111000001111110101011110100";
        ram[13] = "0b000001111011100000100011110101111111000001010111111100000010000000001111111100";
        ram[14] = "0b111000000011111110101111110010111111101111100000000000000100111111000111110101";


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
