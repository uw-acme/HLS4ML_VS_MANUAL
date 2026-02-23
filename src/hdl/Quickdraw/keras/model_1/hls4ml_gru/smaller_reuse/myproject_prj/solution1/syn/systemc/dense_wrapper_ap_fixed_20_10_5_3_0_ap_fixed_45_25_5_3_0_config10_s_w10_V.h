// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_H__
#define __dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
  static const unsigned AddressRange = 80;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_ram) {
        ram[0] = "0b00000110111";
        ram[1] = "0b11111000010";
        ram[2] = "0b11110101111";
        ram[3] = "0b11101001101";
        ram[4] = "0b11101100000";
        ram[5] = "0b00011111011";
        ram[6] = "0b11110011000";
        ram[7] = "0b00001010111";
        ram[8] = "0b11101101000";
        ram[9] = "0b00011011010";
        ram[10] = "0b00101011110";
        ram[11] = "0b00100110011";
        ram[12] = "0b00000100010";
        ram[13] = "0b10110011111";
        ram[14] = "0b11110111010";
        ram[15] = "0b11111001000";
        ram[16] = "0b00010110001";
        ram[17] = "0b00001011100";
        ram[18] = "0b00001111001";
        ram[19] = "0b11110100010";
        ram[20] = "0b00100011100";
        ram[21] = "0b00000000100";
        ram[22] = "0b11110001010";
        ram[23] = "0b00011111011";
        ram[24] = "0b11111011110";
        ram[25] = "0b11111010101";
        ram[26] = "0b00001000110";
        ram[27] = "0b00011100101";
        ram[28] = "0b11110111000";
        ram[29] = "0b00100011111";
        ram[30] = "0b11000110001";
        ram[31] = "0b11111010010";
        ram[32] = "0b00001111110";
        ram[33] = "0b00000011011";
        ram[34] = "0b11111011101";
        ram[35] = "0b00011011110";
        ram[36] = "0b00100100110";
        ram[37] = "0b00001111000";
        ram[38] = "0b11101001001";
        ram[39] = "0b11111001111";
        ram[40] = "0b00001001111";
        ram[41] = "0b00011000000";
        ram[42] = "0b11001111101";
        ram[43] = "0b10110000111";
        ram[44] = "0b00001111001";
        ram[45] = "0b00101001111";
        ram[46] = "0b11110111011";
        ram[47] = "0b00010011100";
        ram[48] = "0b11111101100";
        ram[49] = "0b11110100010";
        ram[50] = "0b11111001010";
        ram[51] = "0b00010000000";
        ram[52] = "0b11101100001";
        ram[53] = "0b00000011001";
        ram[54] = "0b11101011110";
        ram[55] = "0b00100001101";
        ram[56] = "0b11101011010";
        ram[57] = "0b11111001011";
        ram[58] = "0b00001010111";
        ram[59] = "0b00011110001";
        ram[60] = "0b00011010111";
        ram[61] = "0b00100100001";
        ram[62] = "0b11110111010";
        ram[63] = "0b00000110001";
        ram[64] = "0b11110101001";
        ram[65] = "0b00000001100";
        ram[66] = "0b00001011010";
        ram[67] = "0b00001101110";
        ram[68] = "0b00000001101";
        ram[69] = "0b00010111001";
        ram[70] = "0b00010111111";
        ram[71] = "0b00100100001";
        ram[72] = "0b11101111000";
        ram[73] = "0b00001010101";
        ram[74] = "0b11011000101";
        ram[75] = "0b11010000010";
        ram[76] = "0b00000000001";
        ram[77] = "0b10110110011";
        ram[78] = "0b11000110010";
        ram[79] = "0b00001011110";


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


SC_MODULE(dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 80;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V) {
meminst = new dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_ram("dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V() {
    delete meminst;
}


};//endmodule
#endif
