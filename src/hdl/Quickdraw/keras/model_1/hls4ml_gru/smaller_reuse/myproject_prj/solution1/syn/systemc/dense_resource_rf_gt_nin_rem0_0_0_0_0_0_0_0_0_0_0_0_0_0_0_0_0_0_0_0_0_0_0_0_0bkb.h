// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_H__
#define __dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 6;
  static const unsigned AddressRange = 144;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_ram) {
        ram[0] = "0b000000";
        ram[1] = "0b000000";
        ram[2] = "0b000000";
        ram[3] = "0b000001";
        ram[4] = "0b000001";
        ram[5] = "0b000001";
        ram[6] = "0b000010";
        ram[7] = "0b000010";
        ram[8] = "0b000010";
        ram[9] = "0b000011";
        ram[10] = "0b000011";
        ram[11] = "0b000011";
        ram[12] = "0b000100";
        ram[13] = "0b000100";
        ram[14] = "0b000100";
        ram[15] = "0b000101";
        ram[16] = "0b000101";
        ram[17] = "0b000101";
        ram[18] = "0b000110";
        ram[19] = "0b000110";
        ram[20] = "0b000110";
        ram[21] = "0b000111";
        ram[22] = "0b000111";
        ram[23] = "0b000111";
        ram[24] = "0b001000";
        ram[25] = "0b001000";
        ram[26] = "0b001000";
        ram[27] = "0b001001";
        ram[28] = "0b001001";
        ram[29] = "0b001001";
        ram[30] = "0b001010";
        ram[31] = "0b001010";
        ram[32] = "0b001010";
        ram[33] = "0b001011";
        ram[34] = "0b001011";
        ram[35] = "0b001011";
        ram[36] = "0b001100";
        ram[37] = "0b001100";
        ram[38] = "0b001100";
        ram[39] = "0b001101";
        ram[40] = "0b001101";
        ram[41] = "0b001101";
        ram[42] = "0b001110";
        ram[43] = "0b001110";
        ram[44] = "0b001110";
        ram[45] = "0b001111";
        ram[46] = "0b001111";
        ram[47] = "0b001111";
        ram[48] = "0b010000";
        ram[49] = "0b010000";
        ram[50] = "0b010000";
        ram[51] = "0b010001";
        ram[52] = "0b010001";
        ram[53] = "0b010001";
        ram[54] = "0b010010";
        ram[55] = "0b010010";
        ram[56] = "0b010010";
        ram[57] = "0b010011";
        ram[58] = "0b010011";
        ram[59] = "0b010011";
        ram[60] = "0b010100";
        ram[61] = "0b010100";
        ram[62] = "0b010100";
        ram[63] = "0b010101";
        ram[64] = "0b010101";
        ram[65] = "0b010101";
        ram[66] = "0b010110";
        ram[67] = "0b010110";
        ram[68] = "0b010110";
        ram[69] = "0b010111";
        ram[70] = "0b010111";
        ram[71] = "0b010111";
        ram[72] = "0b011000";
        ram[73] = "0b011000";
        ram[74] = "0b011000";
        ram[75] = "0b011001";
        ram[76] = "0b011001";
        ram[77] = "0b011001";
        ram[78] = "0b011010";
        ram[79] = "0b011010";
        ram[80] = "0b011010";
        ram[81] = "0b011011";
        ram[82] = "0b011011";
        ram[83] = "0b011011";
        ram[84] = "0b011100";
        ram[85] = "0b011100";
        ram[86] = "0b011100";
        ram[87] = "0b011101";
        ram[88] = "0b011101";
        ram[89] = "0b011101";
        ram[90] = "0b011110";
        ram[91] = "0b011110";
        ram[92] = "0b011110";
        ram[93] = "0b011111";
        ram[94] = "0b011111";
        ram[95] = "0b011111";
        ram[96] = "0b100000";
        ram[97] = "0b100000";
        ram[98] = "0b100000";
        ram[99] = "0b100001";
        ram[100] = "0b100001";
        ram[101] = "0b100001";
        ram[102] = "0b100010";
        ram[103] = "0b100010";
        ram[104] = "0b100010";
        ram[105] = "0b100011";
        ram[106] = "0b100011";
        ram[107] = "0b100011";
        ram[108] = "0b100100";
        ram[109] = "0b100100";
        ram[110] = "0b100100";
        ram[111] = "0b100101";
        ram[112] = "0b100101";
        ram[113] = "0b100101";
        ram[114] = "0b100110";
        ram[115] = "0b100110";
        ram[116] = "0b100110";
        ram[117] = "0b100111";
        ram[118] = "0b100111";
        ram[119] = "0b100111";
        ram[120] = "0b101000";
        ram[121] = "0b101000";
        ram[122] = "0b101000";
        ram[123] = "0b101001";
        ram[124] = "0b101001";
        ram[125] = "0b101001";
        ram[126] = "0b101010";
        ram[127] = "0b101010";
        ram[128] = "0b101010";
        ram[129] = "0b101011";
        ram[130] = "0b101011";
        ram[131] = "0b101011";
        ram[132] = "0b101100";
        ram[133] = "0b101100";
        ram[134] = "0b101100";
        ram[135] = "0b101101";
        ram[136] = "0b101101";
        ram[137] = "0b101101";
        ram[138] = "0b101110";
        ram[139] = "0b101110";
        ram[140] = "0b101110";
        ram[141] = "0b101111";
        ram[142] = "0b101111";
        ram[143] = "0b101111";


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


SC_MODULE(dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb) {


static const unsigned DataWidth = 6;
static const unsigned AddressRange = 144;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_ram* meminst;


SC_CTOR(dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb) {
meminst = new dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_ram("dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb() {
    delete meminst;
}


};//endmodule
#endif
