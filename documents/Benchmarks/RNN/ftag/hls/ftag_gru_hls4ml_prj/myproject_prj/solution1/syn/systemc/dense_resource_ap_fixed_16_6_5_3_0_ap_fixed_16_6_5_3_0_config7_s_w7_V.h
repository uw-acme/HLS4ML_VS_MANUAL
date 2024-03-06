// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V_H__
#define __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
  static const unsigned AddressRange = 30;
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


   SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V_ram) {
        ram[0] = "0b000001011011";
        ram[1] = "0b001101000010";
        ram[2] = "0b110111000001";
        ram[3] = "0b000000101010";
        ram[4] = "0b111100011011";
        ram[5] = "0b000100010101";
        ram[6] = "0b001111001011";
        ram[7] = "0b100110110010";
        ram[8] = "0b110000010000";
        ram[9] = "0b000111001100";
        ram[10] = "0b110110011111";
        ram[11] = "0b001010001101";
        ram[12] = "0b111101000011";
        ram[13] = "0b001001111101";
        ram[14] = "0b000110011101";
        ram[15] = "0b110111101100";
        ram[16] = "0b000010100111";
        ram[17] = "0b001000000000";
        ram[18] = "0b001001010101";
        ram[19] = "0b110111100001";
        ram[20] = "0b000100101110";
        ram[21] = "0b101111101100";
        ram[22] = "0b000100010000";
        ram[23] = "0b111000100001";
        ram[24] = "0b000101101110";
        ram[25] = "0b000001110110";
        ram[26] = "0b110011110010";
        ram[27] = "0b000101111010";
        ram[28] = "0b111011010000";
        ram[29] = "0b110110011100";


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


SC_MODULE(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 30;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V) {
meminst = new dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V_ram("dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config7_s_w7_V() {
    delete meminst;
}


};//endmodule
#endif
