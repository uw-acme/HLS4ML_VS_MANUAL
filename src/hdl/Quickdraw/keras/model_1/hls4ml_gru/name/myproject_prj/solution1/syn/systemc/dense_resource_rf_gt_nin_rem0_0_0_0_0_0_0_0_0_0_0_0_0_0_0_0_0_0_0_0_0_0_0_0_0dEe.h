// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_H__
#define __dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 7;
  static const unsigned AddressRange = 3072;
  static const unsigned AddressWidth = 12;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_ram) {
        for (unsigned i = 0; i < 32 ; i = i + 1) {
            ram[i] = "0b0000000";
        }
        for (unsigned i = 32; i < 64 ; i = i + 1) {
            ram[i] = "0b0000001";
        }
        for (unsigned i = 64; i < 96 ; i = i + 1) {
            ram[i] = "0b0000010";
        }
        for (unsigned i = 96; i < 128 ; i = i + 1) {
            ram[i] = "0b0000011";
        }
        for (unsigned i = 128; i < 160 ; i = i + 1) {
            ram[i] = "0b0000100";
        }
        for (unsigned i = 160; i < 192 ; i = i + 1) {
            ram[i] = "0b0000101";
        }
        for (unsigned i = 192; i < 224 ; i = i + 1) {
            ram[i] = "0b0000110";
        }
        for (unsigned i = 224; i < 256 ; i = i + 1) {
            ram[i] = "0b0000111";
        }
        for (unsigned i = 256; i < 288 ; i = i + 1) {
            ram[i] = "0b0001000";
        }
        for (unsigned i = 288; i < 320 ; i = i + 1) {
            ram[i] = "0b0001001";
        }
        for (unsigned i = 320; i < 352 ; i = i + 1) {
            ram[i] = "0b0001010";
        }
        for (unsigned i = 352; i < 384 ; i = i + 1) {
            ram[i] = "0b0001011";
        }
        for (unsigned i = 384; i < 416 ; i = i + 1) {
            ram[i] = "0b0001100";
        }
        for (unsigned i = 416; i < 448 ; i = i + 1) {
            ram[i] = "0b0001101";
        }
        for (unsigned i = 448; i < 480 ; i = i + 1) {
            ram[i] = "0b0001110";
        }
        for (unsigned i = 480; i < 512 ; i = i + 1) {
            ram[i] = "0b0001111";
        }
        for (unsigned i = 512; i < 544 ; i = i + 1) {
            ram[i] = "0b0010000";
        }
        for (unsigned i = 544; i < 576 ; i = i + 1) {
            ram[i] = "0b0010001";
        }
        for (unsigned i = 576; i < 608 ; i = i + 1) {
            ram[i] = "0b0010010";
        }
        for (unsigned i = 608; i < 640 ; i = i + 1) {
            ram[i] = "0b0010011";
        }
        for (unsigned i = 640; i < 672 ; i = i + 1) {
            ram[i] = "0b0010100";
        }
        for (unsigned i = 672; i < 704 ; i = i + 1) {
            ram[i] = "0b0010101";
        }
        for (unsigned i = 704; i < 736 ; i = i + 1) {
            ram[i] = "0b0010110";
        }
        for (unsigned i = 736; i < 768 ; i = i + 1) {
            ram[i] = "0b0010111";
        }
        for (unsigned i = 768; i < 800 ; i = i + 1) {
            ram[i] = "0b0011000";
        }
        for (unsigned i = 800; i < 832 ; i = i + 1) {
            ram[i] = "0b0011001";
        }
        for (unsigned i = 832; i < 864 ; i = i + 1) {
            ram[i] = "0b0011010";
        }
        for (unsigned i = 864; i < 896 ; i = i + 1) {
            ram[i] = "0b0011011";
        }
        for (unsigned i = 896; i < 928 ; i = i + 1) {
            ram[i] = "0b0011100";
        }
        for (unsigned i = 928; i < 960 ; i = i + 1) {
            ram[i] = "0b0011101";
        }
        for (unsigned i = 960; i < 992 ; i = i + 1) {
            ram[i] = "0b0011110";
        }
        for (unsigned i = 992; i < 1024 ; i = i + 1) {
            ram[i] = "0b0011111";
        }
        for (unsigned i = 1024; i < 1056 ; i = i + 1) {
            ram[i] = "0b0100000";
        }
        for (unsigned i = 1056; i < 1088 ; i = i + 1) {
            ram[i] = "0b0100001";
        }
        for (unsigned i = 1088; i < 1120 ; i = i + 1) {
            ram[i] = "0b0100010";
        }
        for (unsigned i = 1120; i < 1152 ; i = i + 1) {
            ram[i] = "0b0100011";
        }
        for (unsigned i = 1152; i < 1184 ; i = i + 1) {
            ram[i] = "0b0100100";
        }
        for (unsigned i = 1184; i < 1216 ; i = i + 1) {
            ram[i] = "0b0100101";
        }
        for (unsigned i = 1216; i < 1248 ; i = i + 1) {
            ram[i] = "0b0100110";
        }
        for (unsigned i = 1248; i < 1280 ; i = i + 1) {
            ram[i] = "0b0100111";
        }
        for (unsigned i = 1280; i < 1312 ; i = i + 1) {
            ram[i] = "0b0101000";
        }
        for (unsigned i = 1312; i < 1344 ; i = i + 1) {
            ram[i] = "0b0101001";
        }
        for (unsigned i = 1344; i < 1376 ; i = i + 1) {
            ram[i] = "0b0101010";
        }
        for (unsigned i = 1376; i < 1408 ; i = i + 1) {
            ram[i] = "0b0101011";
        }
        for (unsigned i = 1408; i < 1440 ; i = i + 1) {
            ram[i] = "0b0101100";
        }
        for (unsigned i = 1440; i < 1472 ; i = i + 1) {
            ram[i] = "0b0101101";
        }
        for (unsigned i = 1472; i < 1504 ; i = i + 1) {
            ram[i] = "0b0101110";
        }
        for (unsigned i = 1504; i < 1536 ; i = i + 1) {
            ram[i] = "0b0101111";
        }
        for (unsigned i = 1536; i < 1568 ; i = i + 1) {
            ram[i] = "0b0110000";
        }
        for (unsigned i = 1568; i < 1600 ; i = i + 1) {
            ram[i] = "0b0110001";
        }
        for (unsigned i = 1600; i < 1632 ; i = i + 1) {
            ram[i] = "0b0110010";
        }
        for (unsigned i = 1632; i < 1664 ; i = i + 1) {
            ram[i] = "0b0110011";
        }
        for (unsigned i = 1664; i < 1696 ; i = i + 1) {
            ram[i] = "0b0110100";
        }
        for (unsigned i = 1696; i < 1728 ; i = i + 1) {
            ram[i] = "0b0110101";
        }
        for (unsigned i = 1728; i < 1760 ; i = i + 1) {
            ram[i] = "0b0110110";
        }
        for (unsigned i = 1760; i < 1792 ; i = i + 1) {
            ram[i] = "0b0110111";
        }
        for (unsigned i = 1792; i < 1824 ; i = i + 1) {
            ram[i] = "0b0111000";
        }
        for (unsigned i = 1824; i < 1856 ; i = i + 1) {
            ram[i] = "0b0111001";
        }
        for (unsigned i = 1856; i < 1888 ; i = i + 1) {
            ram[i] = "0b0111010";
        }
        for (unsigned i = 1888; i < 1920 ; i = i + 1) {
            ram[i] = "0b0111011";
        }
        for (unsigned i = 1920; i < 1952 ; i = i + 1) {
            ram[i] = "0b0111100";
        }
        for (unsigned i = 1952; i < 1984 ; i = i + 1) {
            ram[i] = "0b0111101";
        }
        for (unsigned i = 1984; i < 2016 ; i = i + 1) {
            ram[i] = "0b0111110";
        }
        for (unsigned i = 2016; i < 2048 ; i = i + 1) {
            ram[i] = "0b0111111";
        }
        for (unsigned i = 2048; i < 2080 ; i = i + 1) {
            ram[i] = "0b1000000";
        }
        for (unsigned i = 2080; i < 2112 ; i = i + 1) {
            ram[i] = "0b1000001";
        }
        for (unsigned i = 2112; i < 2144 ; i = i + 1) {
            ram[i] = "0b1000010";
        }
        for (unsigned i = 2144; i < 2176 ; i = i + 1) {
            ram[i] = "0b1000011";
        }
        for (unsigned i = 2176; i < 2208 ; i = i + 1) {
            ram[i] = "0b1000100";
        }
        for (unsigned i = 2208; i < 2240 ; i = i + 1) {
            ram[i] = "0b1000101";
        }
        for (unsigned i = 2240; i < 2272 ; i = i + 1) {
            ram[i] = "0b1000110";
        }
        for (unsigned i = 2272; i < 2304 ; i = i + 1) {
            ram[i] = "0b1000111";
        }
        for (unsigned i = 2304; i < 2336 ; i = i + 1) {
            ram[i] = "0b1001000";
        }
        for (unsigned i = 2336; i < 2368 ; i = i + 1) {
            ram[i] = "0b1001001";
        }
        for (unsigned i = 2368; i < 2400 ; i = i + 1) {
            ram[i] = "0b1001010";
        }
        for (unsigned i = 2400; i < 2432 ; i = i + 1) {
            ram[i] = "0b1001011";
        }
        for (unsigned i = 2432; i < 2464 ; i = i + 1) {
            ram[i] = "0b1001100";
        }
        for (unsigned i = 2464; i < 2496 ; i = i + 1) {
            ram[i] = "0b1001101";
        }
        for (unsigned i = 2496; i < 2528 ; i = i + 1) {
            ram[i] = "0b1001110";
        }
        for (unsigned i = 2528; i < 2560 ; i = i + 1) {
            ram[i] = "0b1001111";
        }
        for (unsigned i = 2560; i < 2592 ; i = i + 1) {
            ram[i] = "0b1010000";
        }
        for (unsigned i = 2592; i < 2624 ; i = i + 1) {
            ram[i] = "0b1010001";
        }
        for (unsigned i = 2624; i < 2656 ; i = i + 1) {
            ram[i] = "0b1010010";
        }
        for (unsigned i = 2656; i < 2688 ; i = i + 1) {
            ram[i] = "0b1010011";
        }
        for (unsigned i = 2688; i < 2720 ; i = i + 1) {
            ram[i] = "0b1010100";
        }
        for (unsigned i = 2720; i < 2752 ; i = i + 1) {
            ram[i] = "0b1010101";
        }
        for (unsigned i = 2752; i < 2784 ; i = i + 1) {
            ram[i] = "0b1010110";
        }
        for (unsigned i = 2784; i < 2816 ; i = i + 1) {
            ram[i] = "0b1010111";
        }
        for (unsigned i = 2816; i < 2848 ; i = i + 1) {
            ram[i] = "0b1011000";
        }
        for (unsigned i = 2848; i < 2880 ; i = i + 1) {
            ram[i] = "0b1011001";
        }
        for (unsigned i = 2880; i < 2912 ; i = i + 1) {
            ram[i] = "0b1011010";
        }
        for (unsigned i = 2912; i < 2944 ; i = i + 1) {
            ram[i] = "0b1011011";
        }
        for (unsigned i = 2944; i < 2976 ; i = i + 1) {
            ram[i] = "0b1011100";
        }
        for (unsigned i = 2976; i < 3008 ; i = i + 1) {
            ram[i] = "0b1011101";
        }
        for (unsigned i = 3008; i < 3040 ; i = i + 1) {
            ram[i] = "0b1011110";
        }
        for (unsigned i = 3040; i < 3072 ; i = i + 1) {
            ram[i] = "0b1011111";
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


SC_MODULE(dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe) {


static const unsigned DataWidth = 7;
static const unsigned AddressRange = 3072;
static const unsigned AddressWidth = 12;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_ram* meminst;


SC_CTOR(dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe) {
meminst = new dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_ram("dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe() {
    delete meminst;
}


};//endmodule
#endif
