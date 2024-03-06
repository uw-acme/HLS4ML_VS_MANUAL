// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx_H__
#define __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 3;
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


   SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx_ram) {
        for (unsigned i = 0; i < 6 ; i = i + 1) {
            ram[i] = "0b000";
        }
        for (unsigned i = 6; i < 12 ; i = i + 1) {
            ram[i] = "0b001";
        }
        for (unsigned i = 12; i < 18 ; i = i + 1) {
            ram[i] = "0b010";
        }
        for (unsigned i = 18; i < 24 ; i = i + 1) {
            ram[i] = "0b011";
        }
        for (unsigned i = 24; i < 30 ; i = i + 1) {
            ram[i] = "0b100";
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


SC_MODULE(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx) {


static const unsigned DataWidth = 3;
static const unsigned AddressRange = 30;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx) {
meminst = new dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx_ram("dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_outidx() {
    delete meminst;
}


};//endmodule
#endif
