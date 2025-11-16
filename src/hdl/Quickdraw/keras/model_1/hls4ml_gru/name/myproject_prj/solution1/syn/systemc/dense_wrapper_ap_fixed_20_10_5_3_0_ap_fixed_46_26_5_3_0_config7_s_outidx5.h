// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5_H__
#define __dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 4;
  static const unsigned AddressRange = 512;
  static const unsigned AddressWidth = 9;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5_ram) {
        for (unsigned i = 0; i < 32 ; i = i + 1) {
            ram[i] = "0b0000";
        }
        for (unsigned i = 32; i < 64 ; i = i + 1) {
            ram[i] = "0b0001";
        }
        for (unsigned i = 64; i < 96 ; i = i + 1) {
            ram[i] = "0b0010";
        }
        for (unsigned i = 96; i < 128 ; i = i + 1) {
            ram[i] = "0b0011";
        }
        for (unsigned i = 128; i < 160 ; i = i + 1) {
            ram[i] = "0b0100";
        }
        for (unsigned i = 160; i < 192 ; i = i + 1) {
            ram[i] = "0b0101";
        }
        for (unsigned i = 192; i < 224 ; i = i + 1) {
            ram[i] = "0b0110";
        }
        for (unsigned i = 224; i < 256 ; i = i + 1) {
            ram[i] = "0b0111";
        }
        for (unsigned i = 256; i < 288 ; i = i + 1) {
            ram[i] = "0b1000";
        }
        for (unsigned i = 288; i < 320 ; i = i + 1) {
            ram[i] = "0b1001";
        }
        for (unsigned i = 320; i < 352 ; i = i + 1) {
            ram[i] = "0b1010";
        }
        for (unsigned i = 352; i < 384 ; i = i + 1) {
            ram[i] = "0b1011";
        }
        for (unsigned i = 384; i < 416 ; i = i + 1) {
            ram[i] = "0b1100";
        }
        for (unsigned i = 416; i < 448 ; i = i + 1) {
            ram[i] = "0b1101";
        }
        for (unsigned i = 448; i < 480 ; i = i + 1) {
            ram[i] = "0b1110";
        }
        for (unsigned i = 480; i < 512 ; i = i + 1) {
            ram[i] = "0b1111";
        }


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


SC_MODULE(dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5) {


static const unsigned DataWidth = 4;
static const unsigned AddressRange = 512;
static const unsigned AddressWidth = 9;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5_ram* meminst;


SC_CTOR(dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5) {
meminst = new dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5_ram("dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5() {
    delete meminst;
}


};//endmodule
#endif
