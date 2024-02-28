// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1_H__
#define __softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 17;
  static const unsigned AddressRange = 1024;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in <sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in <sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in <sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1_ram) {
        ram[0] = "0b00000010000000000";
        ram[1] = "0b00000010100100011";
        ram[2] = "0b00000011010011000";
        ram[3] = "0b00000100001111000";
        ram[4] = "0b00000101011100000";
        ram[5] = "0b00000110111110110";
        ram[6] = "0b00001000111101101";
        ram[7] = "0b00001011100000101";
        ram[8] = "0b00001110110001110";
        ram[9] = "0b00010010111110011";
        ram[10] = "0b00011000010111011";
        ram[11] = "0b00011111010010010";
        ram[12] = "0b00101000001011000";
        ram[13] = "0b00110011100101001";
        ram[14] = "0b01000010001110110";
        ram[15] = "0b01010101000010110";
        ram[16] = "0b01101101001100101";
        ram[17] = "0b10001100001101100";
        ram[18] = "0b10110100000010010";
        ram[19] = "0b11100111001010110";
        for (unsigned i = 20; i < 512 ; i = i + 1) {
            ram[i] = "0b11111111111111111";
        }
        for (unsigned i = 512; i < 994 ; i = i + 1) {
            ram[i] = "0b00000000000000000";
        }
        ram[994] = "0b00000000000000001";
        ram[995] = "0b00000000000000001";
        ram[996] = "0b00000000000000001";
        ram[997] = "0b00000000000000001";
        ram[998] = "0b00000000000000010";
        ram[999] = "0b00000000000000010";
        ram[1000] = "0b00000000000000011";
        ram[1001] = "0b00000000000000011";
        ram[1002] = "0b00000000000000100";
        ram[1003] = "0b00000000000000101";
        ram[1004] = "0b00000000000000111";
        ram[1005] = "0b00000000000001001";
        ram[1006] = "0b00000000000001011";
        ram[1007] = "0b00000000000001111";
        ram[1008] = "0b00000000000010011";
        ram[1009] = "0b00000000000011000";
        ram[1010] = "0b00000000000011111";
        ram[1011] = "0b00000000000101000";
        ram[1012] = "0b00000000000110011";
        ram[1013] = "0b00000000001000001";
        ram[1014] = "0b00000000001010100";
        ram[1015] = "0b00000000001101100";
        ram[1016] = "0b00000000010001011";
        ram[1017] = "0b00000000010110010";
        ram[1018] = "0b00000000011100100";
        ram[1019] = "0b00000000100100101";
        ram[1020] = "0b00000000101111001";
        ram[1021] = "0b00000000111100100";
        ram[1022] = "0b00000001001101101";
        ram[1023] = "0b00000001100011101";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();


SC_METHOD(prc_write_2);
  sensitive<<clk.pos();


SC_METHOD(prc_write_3);
  sensitive<<clk.pos();


SC_METHOD(prc_write_4);
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


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


void prc_write_2()
{
    if (ce2.read() == sc_dt::Log_1) 
    {
            if(address2.read().is_01() && address2.read().to_uint()<AddressRange)
              q2 = ram[address2.read().to_uint()];
            else
              q2 = sc_lv<DataWidth>();
    }
}


void prc_write_3()
{
    if (ce3.read() == sc_dt::Log_1) 
    {
            if(address3.read().is_01() && address3.read().to_uint()<AddressRange)
              q3 = ram[address3.read().to_uint()];
            else
              q3 = sc_lv<DataWidth>();
    }
}


void prc_write_4()
{
    if (ce4.read() == sc_dt::Log_1) 
    {
            if(address4.read().is_01() && address4.read().to_uint()<AddressRange)
              q4 = ram[address4.read().to_uint()];
            else
              q4 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1) {


static const unsigned DataWidth = 17;
static const unsigned AddressRange = 1024;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in<sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in<sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in<sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1_ram* meminst;


SC_CTOR(softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1) {
meminst = new softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1_ram("softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->address2(address2);
meminst->ce2(ce2);
meminst->q2(q2);

meminst->address3(address3);
meminst->ce3(ce3);
meminst->q3(q3);

meminst->address4(address4);
meminst->ce4(ce4);
meminst->q4(q4);

meminst->reset(reset);
meminst->clk(clk);
}
~softmax_stable_ap_fixed_ap_fixed_18_8_5_3_0_softmax_config8_s_exp_table1() {
    delete meminst;
}


};//endmodule
#endif
