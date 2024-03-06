// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2_H__
#define __tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
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
sc_core::sc_in <sc_lv<AddressWidth> > address5;
sc_core::sc_in <sc_logic> ce5;
sc_core::sc_out <sc_lv<DataWidth> > q5;
sc_core::sc_in <sc_lv<AddressWidth> > address6;
sc_core::sc_in <sc_logic> ce6;
sc_core::sc_out <sc_lv<DataWidth> > q6;
sc_core::sc_in <sc_lv<AddressWidth> > address7;
sc_core::sc_in <sc_logic> ce7;
sc_core::sc_out <sc_lv<DataWidth> > q7;
sc_core::sc_in <sc_lv<AddressWidth> > address8;
sc_core::sc_in <sc_logic> ce8;
sc_core::sc_out <sc_lv<DataWidth> > q8;
sc_core::sc_in <sc_lv<AddressWidth> > address9;
sc_core::sc_in <sc_logic> ce9;
sc_core::sc_out <sc_lv<DataWidth> > q9;
sc_core::sc_in <sc_lv<AddressWidth> > address10;
sc_core::sc_in <sc_logic> ce10;
sc_core::sc_out <sc_lv<DataWidth> > q10;
sc_core::sc_in <sc_lv<AddressWidth> > address11;
sc_core::sc_in <sc_logic> ce11;
sc_core::sc_out <sc_lv<DataWidth> > q11;
sc_core::sc_in <sc_lv<AddressWidth> > address12;
sc_core::sc_in <sc_logic> ce12;
sc_core::sc_out <sc_lv<DataWidth> > q12;
sc_core::sc_in <sc_lv<AddressWidth> > address13;
sc_core::sc_in <sc_logic> ce13;
sc_core::sc_out <sc_lv<DataWidth> > q13;
sc_core::sc_in <sc_lv<AddressWidth> > address14;
sc_core::sc_in <sc_logic> ce14;
sc_core::sc_out <sc_lv<DataWidth> > q14;
sc_core::sc_in <sc_lv<AddressWidth> > address15;
sc_core::sc_in <sc_logic> ce15;
sc_core::sc_out <sc_lv<DataWidth> > q15;
sc_core::sc_in <sc_lv<AddressWidth> > address16;
sc_core::sc_in <sc_logic> ce16;
sc_core::sc_out <sc_lv<DataWidth> > q16;
sc_core::sc_in <sc_lv<AddressWidth> > address17;
sc_core::sc_in <sc_logic> ce17;
sc_core::sc_out <sc_lv<DataWidth> > q17;
sc_core::sc_in <sc_lv<AddressWidth> > address18;
sc_core::sc_in <sc_logic> ce18;
sc_core::sc_out <sc_lv<DataWidth> > q18;
sc_core::sc_in <sc_lv<AddressWidth> > address19;
sc_core::sc_in <sc_logic> ce19;
sc_core::sc_out <sc_lv<DataWidth> > q19;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2_ram) {
        for (unsigned i = 0; i < 25 ; i = i + 1) {
            ram[i] = "0b10000000000";
        }
        for (unsigned i = 25; i < 69 ; i = i + 1) {
            ram[i] = "0b10000000001";
        }
        for (unsigned i = 69; i < 95 ; i = i + 1) {
            ram[i] = "0b10000000010";
        }
        for (unsigned i = 95; i < 113 ; i = i + 1) {
            ram[i] = "0b10000000011";
        }
        for (unsigned i = 113; i < 128 ; i = i + 1) {
            ram[i] = "0b10000000100";
        }
        for (unsigned i = 128; i < 139 ; i = i + 1) {
            ram[i] = "0b10000000101";
        }
        for (unsigned i = 139; i < 149 ; i = i + 1) {
            ram[i] = "0b10000000110";
        }
        for (unsigned i = 149; i < 158 ; i = i + 1) {
            ram[i] = "0b10000000111";
        }
        for (unsigned i = 158; i < 165 ; i = i + 1) {
            ram[i] = "0b10000001000";
        }
        for (unsigned i = 165; i < 172 ; i = i + 1) {
            ram[i] = "0b10000001001";
        }
        for (unsigned i = 172; i < 178 ; i = i + 1) {
            ram[i] = "0b10000001010";
        }
        for (unsigned i = 178; i < 184 ; i = i + 1) {
            ram[i] = "0b10000001011";
        }
        for (unsigned i = 184; i < 189 ; i = i + 1) {
            ram[i] = "0b10000001100";
        }
        for (unsigned i = 189; i < 194 ; i = i + 1) {
            ram[i] = "0b10000001101";
        }
        ram[194] = "0b10000001110";
        ram[195] = "0b10000001110";
        ram[196] = "0b10000001110";
        ram[197] = "0b10000001110";
        ram[198] = "0b10000001111";
        ram[199] = "0b10000001111";
        ram[200] = "0b10000001111";
        ram[201] = "0b10000001111";
        ram[202] = "0b10000010000";
        ram[203] = "0b10000010000";
        ram[204] = "0b10000010000";
        ram[205] = "0b10000010000";
        ram[206] = "0b10000010001";
        ram[207] = "0b10000010001";
        ram[208] = "0b10000010001";
        ram[209] = "0b10000010001";
        ram[210] = "0b10000010010";
        ram[211] = "0b10000010010";
        ram[212] = "0b10000010010";
        ram[213] = "0b10000010010";
        ram[214] = "0b10000010011";
        ram[215] = "0b10000010011";
        ram[216] = "0b10000010011";
        ram[217] = "0b10000010100";
        ram[218] = "0b10000010100";
        ram[219] = "0b10000010100";
        ram[220] = "0b10000010101";
        ram[221] = "0b10000010101";
        ram[222] = "0b10000010101";
        ram[223] = "0b10000010110";
        ram[224] = "0b10000010110";
        ram[225] = "0b10000010110";
        ram[226] = "0b10000010111";
        ram[227] = "0b10000010111";
        ram[228] = "0b10000010111";
        ram[229] = "0b10000011000";
        ram[230] = "0b10000011000";
        ram[231] = "0b10000011001";
        ram[232] = "0b10000011001";
        ram[233] = "0b10000011001";
        ram[234] = "0b10000011010";
        ram[235] = "0b10000011010";
        ram[236] = "0b10000011011";
        ram[237] = "0b10000011011";
        ram[238] = "0b10000011011";
        ram[239] = "0b10000011100";
        ram[240] = "0b10000011100";
        ram[241] = "0b10000011101";
        ram[242] = "0b10000011101";
        ram[243] = "0b10000011110";
        ram[244] = "0b10000011110";
        ram[245] = "0b10000011111";
        ram[246] = "0b10000011111";
        ram[247] = "0b10000100000";
        ram[248] = "0b10000100000";
        ram[249] = "0b10000100001";
        ram[250] = "0b10000100001";
        ram[251] = "0b10000100010";
        ram[252] = "0b10000100010";
        ram[253] = "0b10000100011";
        ram[254] = "0b10000100011";
        ram[255] = "0b10000100100";
        ram[256] = "0b10000100100";
        ram[257] = "0b10000100101";
        ram[258] = "0b10000100101";
        ram[259] = "0b10000100110";
        ram[260] = "0b10000100111";
        ram[261] = "0b10000100111";
        ram[262] = "0b10000101000";
        ram[263] = "0b10000101001";
        ram[264] = "0b10000101001";
        ram[265] = "0b10000101010";
        ram[266] = "0b10000101010";
        ram[267] = "0b10000101011";
        ram[268] = "0b10000101100";
        ram[269] = "0b10000101100";
        ram[270] = "0b10000101101";
        ram[271] = "0b10000101110";
        ram[272] = "0b10000101111";
        ram[273] = "0b10000101111";
        ram[274] = "0b10000110000";
        ram[275] = "0b10000110001";
        ram[276] = "0b10000110010";
        ram[277] = "0b10000110010";
        ram[278] = "0b10000110011";
        ram[279] = "0b10000110100";
        ram[280] = "0b10000110101";
        ram[281] = "0b10000110101";
        ram[282] = "0b10000110110";
        ram[283] = "0b10000110111";
        ram[284] = "0b10000111000";
        ram[285] = "0b10000111001";
        ram[286] = "0b10000111010";
        ram[287] = "0b10000111011";
        ram[288] = "0b10000111100";
        ram[289] = "0b10000111100";
        ram[290] = "0b10000111101";
        ram[291] = "0b10000111110";
        ram[292] = "0b10000111111";
        ram[293] = "0b10001000000";
        ram[294] = "0b10001000001";
        ram[295] = "0b10001000010";
        ram[296] = "0b10001000011";
        ram[297] = "0b10001000100";
        ram[298] = "0b10001000101";
        ram[299] = "0b10001000110";
        ram[300] = "0b10001000111";
        ram[301] = "0b10001001001";
        ram[302] = "0b10001001010";
        ram[303] = "0b10001001011";
        ram[304] = "0b10001001100";
        ram[305] = "0b10001001101";
        ram[306] = "0b10001001110";
        ram[307] = "0b10001001111";
        ram[308] = "0b10001010001";
        ram[309] = "0b10001010010";
        ram[310] = "0b10001010011";
        ram[311] = "0b10001010100";
        ram[312] = "0b10001010110";
        ram[313] = "0b10001010111";
        ram[314] = "0b10001011000";
        ram[315] = "0b10001011010";
        ram[316] = "0b10001011011";
        ram[317] = "0b10001011100";
        ram[318] = "0b10001011110";
        ram[319] = "0b10001011111";
        ram[320] = "0b10001100001";
        ram[321] = "0b10001100010";
        ram[322] = "0b10001100100";
        ram[323] = "0b10001100101";
        ram[324] = "0b10001100111";
        ram[325] = "0b10001101000";
        ram[326] = "0b10001101010";
        ram[327] = "0b10001101011";
        ram[328] = "0b10001101101";
        ram[329] = "0b10001101110";
        ram[330] = "0b10001110000";
        ram[331] = "0b10001110010";
        ram[332] = "0b10001110100";
        ram[333] = "0b10001110101";
        ram[334] = "0b10001110111";
        ram[335] = "0b10001111001";
        ram[336] = "0b10001111011";
        ram[337] = "0b10001111100";
        ram[338] = "0b10001111110";
        ram[339] = "0b10010000000";
        ram[340] = "0b10010000010";
        ram[341] = "0b10010000100";
        ram[342] = "0b10010000110";
        ram[343] = "0b10010001000";
        ram[344] = "0b10010001010";
        ram[345] = "0b10010001100";
        ram[346] = "0b10010001110";
        ram[347] = "0b10010010000";
        ram[348] = "0b10010010010";
        ram[349] = "0b10010010100";
        ram[350] = "0b10010010110";
        ram[351] = "0b10010011001";
        ram[352] = "0b10010011011";
        ram[353] = "0b10010011101";
        ram[354] = "0b10010011111";
        ram[355] = "0b10010100010";
        ram[356] = "0b10010100100";
        ram[357] = "0b10010100110";
        ram[358] = "0b10010101001";
        ram[359] = "0b10010101011";
        ram[360] = "0b10010101110";
        ram[361] = "0b10010110000";
        ram[362] = "0b10010110011";
        ram[363] = "0b10010110101";
        ram[364] = "0b10010111000";
        ram[365] = "0b10010111011";
        ram[366] = "0b10010111101";
        ram[367] = "0b10011000000";
        ram[368] = "0b10011000011";
        ram[369] = "0b10011000110";
        ram[370] = "0b10011001000";
        ram[371] = "0b10011001011";
        ram[372] = "0b10011001110";
        ram[373] = "0b10011010001";
        ram[374] = "0b10011010100";
        ram[375] = "0b10011010111";
        ram[376] = "0b10011011010";
        ram[377] = "0b10011011101";
        ram[378] = "0b10011100000";
        ram[379] = "0b10011100011";
        ram[380] = "0b10011100111";
        ram[381] = "0b10011101010";
        ram[382] = "0b10011101101";
        ram[383] = "0b10011110000";
        ram[384] = "0b10011110100";
        ram[385] = "0b10011110111";
        ram[386] = "0b10011111010";
        ram[387] = "0b10011111110";
        ram[388] = "0b10100000001";
        ram[389] = "0b10100000101";
        ram[390] = "0b10100001001";
        ram[391] = "0b10100001100";
        ram[392] = "0b10100010000";
        ram[393] = "0b10100010100";
        ram[394] = "0b10100010111";
        ram[395] = "0b10100011011";
        ram[396] = "0b10100011111";
        ram[397] = "0b10100100011";
        ram[398] = "0b10100100111";
        ram[399] = "0b10100101011";
        ram[400] = "0b10100101111";
        ram[401] = "0b10100110011";
        ram[402] = "0b10100110111";
        ram[403] = "0b10100111011";
        ram[404] = "0b10100111111";
        ram[405] = "0b10101000011";
        ram[406] = "0b10101001000";
        ram[407] = "0b10101001100";
        ram[408] = "0b10101010000";
        ram[409] = "0b10101010101";
        ram[410] = "0b10101011001";
        ram[411] = "0b10101011110";
        ram[412] = "0b10101100010";
        ram[413] = "0b10101100111";
        ram[414] = "0b10101101100";
        ram[415] = "0b10101110000";
        ram[416] = "0b10101110101";
        ram[417] = "0b10101111010";
        ram[418] = "0b10101111111";
        ram[419] = "0b10110000100";
        ram[420] = "0b10110001001";
        ram[421] = "0b10110001110";
        ram[422] = "0b10110010011";
        ram[423] = "0b10110011000";
        ram[424] = "0b10110011101";
        ram[425] = "0b10110100010";
        ram[426] = "0b10110100111";
        ram[427] = "0b10110101100";
        ram[428] = "0b10110110010";
        ram[429] = "0b10110110111";
        ram[430] = "0b10110111101";
        ram[431] = "0b10111000010";
        ram[432] = "0b10111001000";
        ram[433] = "0b10111001101";
        ram[434] = "0b10111010011";
        ram[435] = "0b10111011000";
        ram[436] = "0b10111011110";
        ram[437] = "0b10111100100";
        ram[438] = "0b10111101010";
        ram[439] = "0b10111110000";
        ram[440] = "0b10111110101";
        ram[441] = "0b10111111011";
        ram[442] = "0b11000000001";
        ram[443] = "0b11000000111";
        ram[444] = "0b11000001101";
        ram[445] = "0b11000010100";
        ram[446] = "0b11000011010";
        ram[447] = "0b11000100000";
        ram[448] = "0b11000100110";
        ram[449] = "0b11000101101";
        ram[450] = "0b11000110011";
        ram[451] = "0b11000111001";
        ram[452] = "0b11001000000";
        ram[453] = "0b11001000110";
        ram[454] = "0b11001001101";
        ram[455] = "0b11001010011";
        ram[456] = "0b11001011010";
        ram[457] = "0b11001100001";
        ram[458] = "0b11001100111";
        ram[459] = "0b11001101110";
        ram[460] = "0b11001110101";
        ram[461] = "0b11001111100";
        ram[462] = "0b11010000011";
        ram[463] = "0b11010001010";
        ram[464] = "0b11010010001";
        ram[465] = "0b11010011000";
        ram[466] = "0b11010011111";
        ram[467] = "0b11010100110";
        ram[468] = "0b11010101101";
        ram[469] = "0b11010110100";
        ram[470] = "0b11010111011";
        ram[471] = "0b11011000010";
        ram[472] = "0b11011001010";
        ram[473] = "0b11011010001";
        ram[474] = "0b11011011000";
        ram[475] = "0b11011011111";
        ram[476] = "0b11011100111";
        ram[477] = "0b11011101110";
        ram[478] = "0b11011110110";
        ram[479] = "0b11011111101";
        ram[480] = "0b11100000101";
        ram[481] = "0b11100001100";
        ram[482] = "0b11100010100";
        ram[483] = "0b11100011011";
        ram[484] = "0b11100100011";
        ram[485] = "0b11100101011";
        ram[486] = "0b11100110010";
        ram[487] = "0b11100111010";
        ram[488] = "0b11101000010";
        ram[489] = "0b11101001001";
        ram[490] = "0b11101010001";
        ram[491] = "0b11101011001";
        ram[492] = "0b11101100001";
        ram[493] = "0b11101101001";
        ram[494] = "0b11101110000";
        ram[495] = "0b11101111000";
        ram[496] = "0b11110000000";
        ram[497] = "0b11110001000";
        ram[498] = "0b11110010000";
        ram[499] = "0b11110011000";
        ram[500] = "0b11110100000";
        ram[501] = "0b11110101000";
        ram[502] = "0b11110110000";
        ram[503] = "0b11110111000";
        ram[504] = "0b11111000000";
        ram[505] = "0b11111001000";
        ram[506] = "0b11111010000";
        ram[507] = "0b11111011000";
        ram[508] = "0b11111100000";
        ram[509] = "0b11111101000";
        ram[510] = "0b11111110000";
        ram[511] = "0b11111111000";
        ram[512] = "0b00000000000";
        ram[513] = "0b00000000111";
        ram[514] = "0b00000001111";
        ram[515] = "0b00000010111";
        ram[516] = "0b00000011111";
        ram[517] = "0b00000100111";
        ram[518] = "0b00000101111";
        ram[519] = "0b00000110111";
        ram[520] = "0b00000111111";
        ram[521] = "0b00001000111";
        ram[522] = "0b00001001111";
        ram[523] = "0b00001010111";
        ram[524] = "0b00001011111";
        ram[525] = "0b00001100111";
        ram[526] = "0b00001101111";
        ram[527] = "0b00001110111";
        ram[528] = "0b00001111111";
        ram[529] = "0b00010000111";
        ram[530] = "0b00010001111";
        ram[531] = "0b00010010110";
        ram[532] = "0b00010011110";
        ram[533] = "0b00010100110";
        ram[534] = "0b00010101110";
        ram[535] = "0b00010110110";
        ram[536] = "0b00010111101";
        ram[537] = "0b00011000101";
        ram[538] = "0b00011001101";
        ram[539] = "0b00011010100";
        ram[540] = "0b00011011100";
        ram[541] = "0b00011100100";
        ram[542] = "0b00011101011";
        ram[543] = "0b00011110011";
        ram[544] = "0b00011111010";
        ram[545] = "0b00100000010";
        ram[546] = "0b00100001001";
        ram[547] = "0b00100010001";
        ram[548] = "0b00100011000";
        ram[549] = "0b00100100000";
        ram[550] = "0b00100100111";
        ram[551] = "0b00100101110";
        ram[552] = "0b00100110101";
        ram[553] = "0b00100111101";
        ram[554] = "0b00101000100";
        ram[555] = "0b00101001011";
        ram[556] = "0b00101010010";
        ram[557] = "0b00101011001";
        ram[558] = "0b00101100000";
        ram[559] = "0b00101100111";
        ram[560] = "0b00101101110";
        ram[561] = "0b00101110101";
        ram[562] = "0b00101111100";
        ram[563] = "0b00110000011";
        ram[564] = "0b00110001010";
        ram[565] = "0b00110010001";
        ram[566] = "0b00110011000";
        ram[567] = "0b00110011110";
        ram[568] = "0b00110100101";
        ram[569] = "0b00110101100";
        ram[570] = "0b00110110010";
        ram[571] = "0b00110111001";
        ram[572] = "0b00110111111";
        ram[573] = "0b00111000110";
        ram[574] = "0b00111001100";
        ram[575] = "0b00111010010";
        ram[576] = "0b00111011001";
        ram[577] = "0b00111011111";
        ram[578] = "0b00111100101";
        ram[579] = "0b00111101011";
        ram[580] = "0b00111110010";
        ram[581] = "0b00111111000";
        ram[582] = "0b00111111110";
        ram[583] = "0b01000000100";
        ram[584] = "0b01000001010";
        ram[585] = "0b01000001111";
        ram[586] = "0b01000010101";
        ram[587] = "0b01000011011";
        ram[588] = "0b01000100001";
        ram[589] = "0b01000100111";
        ram[590] = "0b01000101100";
        ram[591] = "0b01000110010";
        ram[592] = "0b01000110111";
        ram[593] = "0b01000111101";
        ram[594] = "0b01001000010";
        ram[595] = "0b01001001000";
        ram[596] = "0b01001001101";
        ram[597] = "0b01001010011";
        ram[598] = "0b01001011000";
        ram[599] = "0b01001011101";
        ram[600] = "0b01001100010";
        ram[601] = "0b01001100111";
        ram[602] = "0b01001101100";
        ram[603] = "0b01001110001";
        ram[604] = "0b01001110110";
        ram[605] = "0b01001111011";
        ram[606] = "0b01010000000";
        ram[607] = "0b01010000101";
        ram[608] = "0b01010001010";
        ram[609] = "0b01010001111";
        ram[610] = "0b01010010011";
        ram[611] = "0b01010011000";
        ram[612] = "0b01010011101";
        ram[613] = "0b01010100001";
        ram[614] = "0b01010100110";
        ram[615] = "0b01010101010";
        ram[616] = "0b01010101111";
        ram[617] = "0b01010110011";
        ram[618] = "0b01010110111";
        ram[619] = "0b01010111100";
        ram[620] = "0b01011000000";
        ram[621] = "0b01011000100";
        ram[622] = "0b01011001000";
        ram[623] = "0b01011001100";
        ram[624] = "0b01011010000";
        ram[625] = "0b01011010100";
        ram[626] = "0b01011011000";
        ram[627] = "0b01011011100";
        ram[628] = "0b01011100000";
        ram[629] = "0b01011100100";
        ram[630] = "0b01011101000";
        ram[631] = "0b01011101011";
        ram[632] = "0b01011101111";
        ram[633] = "0b01011110011";
        ram[634] = "0b01011110110";
        ram[635] = "0b01011111010";
        ram[636] = "0b01011111110";
        ram[637] = "0b01100000001";
        ram[638] = "0b01100000101";
        ram[639] = "0b01100001000";
        ram[640] = "0b01100001011";
        ram[641] = "0b01100001111";
        ram[642] = "0b01100010010";
        ram[643] = "0b01100010101";
        ram[644] = "0b01100011000";
        ram[645] = "0b01100011100";
        ram[646] = "0b01100011111";
        ram[647] = "0b01100100010";
        ram[648] = "0b01100100101";
        ram[649] = "0b01100101000";
        ram[650] = "0b01100101011";
        ram[651] = "0b01100101110";
        ram[652] = "0b01100110001";
        ram[653] = "0b01100110100";
        ram[654] = "0b01100110111";
        ram[655] = "0b01100111001";
        ram[656] = "0b01100111100";
        ram[657] = "0b01100111111";
        ram[658] = "0b01101000010";
        ram[659] = "0b01101000100";
        ram[660] = "0b01101000111";
        ram[661] = "0b01101001010";
        ram[662] = "0b01101001100";
        ram[663] = "0b01101001111";
        ram[664] = "0b01101010001";
        ram[665] = "0b01101010100";
        ram[666] = "0b01101010110";
        ram[667] = "0b01101011001";
        ram[668] = "0b01101011011";
        ram[669] = "0b01101011101";
        ram[670] = "0b01101100000";
        ram[671] = "0b01101100010";
        ram[672] = "0b01101100100";
        ram[673] = "0b01101100110";
        ram[674] = "0b01101101001";
        ram[675] = "0b01101101011";
        ram[676] = "0b01101101101";
        ram[677] = "0b01101101111";
        ram[678] = "0b01101110001";
        ram[679] = "0b01101110011";
        ram[680] = "0b01101110101";
        ram[681] = "0b01101110111";
        ram[682] = "0b01101111001";
        ram[683] = "0b01101111011";
        ram[684] = "0b01101111101";
        ram[685] = "0b01101111111";
        ram[686] = "0b01110000001";
        ram[687] = "0b01110000011";
        ram[688] = "0b01110000100";
        ram[689] = "0b01110000110";
        ram[690] = "0b01110001000";
        ram[691] = "0b01110001010";
        ram[692] = "0b01110001011";
        ram[693] = "0b01110001101";
        ram[694] = "0b01110001111";
        ram[695] = "0b01110010001";
        ram[696] = "0b01110010010";
        ram[697] = "0b01110010100";
        ram[698] = "0b01110010101";
        ram[699] = "0b01110010111";
        ram[700] = "0b01110011000";
        ram[701] = "0b01110011010";
        ram[702] = "0b01110011011";
        ram[703] = "0b01110011101";
        ram[704] = "0b01110011110";
        ram[705] = "0b01110100000";
        ram[706] = "0b01110100001";
        ram[707] = "0b01110100011";
        ram[708] = "0b01110100100";
        ram[709] = "0b01110100101";
        ram[710] = "0b01110100111";
        ram[711] = "0b01110101000";
        ram[712] = "0b01110101001";
        ram[713] = "0b01110101011";
        ram[714] = "0b01110101100";
        ram[715] = "0b01110101101";
        ram[716] = "0b01110101110";
        ram[717] = "0b01110110000";
        ram[718] = "0b01110110001";
        ram[719] = "0b01110110010";
        ram[720] = "0b01110110011";
        ram[721] = "0b01110110100";
        ram[722] = "0b01110110101";
        ram[723] = "0b01110110110";
        ram[724] = "0b01110111000";
        ram[725] = "0b01110111001";
        ram[726] = "0b01110111010";
        ram[727] = "0b01110111011";
        ram[728] = "0b01110111100";
        ram[729] = "0b01110111101";
        ram[730] = "0b01110111110";
        ram[731] = "0b01110111111";
        ram[732] = "0b01111000000";
        ram[733] = "0b01111000001";
        ram[734] = "0b01111000010";
        ram[735] = "0b01111000011";
        ram[736] = "0b01111000011";
        ram[737] = "0b01111000100";
        ram[738] = "0b01111000101";
        ram[739] = "0b01111000110";
        ram[740] = "0b01111000111";
        ram[741] = "0b01111001000";
        ram[742] = "0b01111001001";
        ram[743] = "0b01111001010";
        ram[744] = "0b01111001010";
        ram[745] = "0b01111001011";
        ram[746] = "0b01111001100";
        ram[747] = "0b01111001101";
        ram[748] = "0b01111001101";
        ram[749] = "0b01111001110";
        ram[750] = "0b01111001111";
        ram[751] = "0b01111010000";
        ram[752] = "0b01111010000";
        ram[753] = "0b01111010001";
        ram[754] = "0b01111010010";
        ram[755] = "0b01111010011";
        ram[756] = "0b01111010011";
        ram[757] = "0b01111010100";
        ram[758] = "0b01111010101";
        ram[759] = "0b01111010101";
        ram[760] = "0b01111010110";
        ram[761] = "0b01111010110";
        ram[762] = "0b01111010111";
        ram[763] = "0b01111011000";
        ram[764] = "0b01111011000";
        ram[765] = "0b01111011001";
        ram[766] = "0b01111011010";
        ram[767] = "0b01111011010";
        ram[768] = "0b01111011011";
        ram[769] = "0b01111011011";
        ram[770] = "0b01111011100";
        ram[771] = "0b01111011100";
        ram[772] = "0b01111011101";
        ram[773] = "0b01111011101";
        ram[774] = "0b01111011110";
        ram[775] = "0b01111011110";
        ram[776] = "0b01111011111";
        ram[777] = "0b01111011111";
        ram[778] = "0b01111100000";
        ram[779] = "0b01111100000";
        ram[780] = "0b01111100001";
        ram[781] = "0b01111100001";
        ram[782] = "0b01111100010";
        ram[783] = "0b01111100010";
        ram[784] = "0b01111100011";
        ram[785] = "0b01111100011";
        ram[786] = "0b01111100100";
        ram[787] = "0b01111100100";
        ram[788] = "0b01111100100";
        ram[789] = "0b01111100101";
        ram[790] = "0b01111100101";
        ram[791] = "0b01111100110";
        ram[792] = "0b01111100110";
        ram[793] = "0b01111100110";
        ram[794] = "0b01111100111";
        ram[795] = "0b01111100111";
        ram[796] = "0b01111101000";
        ram[797] = "0b01111101000";
        ram[798] = "0b01111101000";
        ram[799] = "0b01111101001";
        ram[800] = "0b01111101001";
        ram[801] = "0b01111101001";
        ram[802] = "0b01111101010";
        ram[803] = "0b01111101010";
        ram[804] = "0b01111101010";
        ram[805] = "0b01111101011";
        ram[806] = "0b01111101011";
        ram[807] = "0b01111101011";
        ram[808] = "0b01111101100";
        ram[809] = "0b01111101100";
        ram[810] = "0b01111101100";
        ram[811] = "0b01111101101";
        ram[812] = "0b01111101101";
        ram[813] = "0b01111101101";
        ram[814] = "0b01111101101";
        ram[815] = "0b01111101110";
        ram[816] = "0b01111101110";
        ram[817] = "0b01111101110";
        ram[818] = "0b01111101110";
        ram[819] = "0b01111101111";
        ram[820] = "0b01111101111";
        ram[821] = "0b01111101111";
        ram[822] = "0b01111101111";
        ram[823] = "0b01111110000";
        ram[824] = "0b01111110000";
        ram[825] = "0b01111110000";
        ram[826] = "0b01111110000";
        ram[827] = "0b01111110001";
        ram[828] = "0b01111110001";
        ram[829] = "0b01111110001";
        ram[830] = "0b01111110001";
        for (unsigned i = 831; i < 836 ; i = i + 1) {
            ram[i] = "0b01111110010";
        }
        for (unsigned i = 836; i < 841 ; i = i + 1) {
            ram[i] = "0b01111110011";
        }
        for (unsigned i = 841; i < 847 ; i = i + 1) {
            ram[i] = "0b01111110100";
        }
        for (unsigned i = 847; i < 853 ; i = i + 1) {
            ram[i] = "0b01111110101";
        }
        for (unsigned i = 853; i < 860 ; i = i + 1) {
            ram[i] = "0b01111110110";
        }
        for (unsigned i = 860; i < 867 ; i = i + 1) {
            ram[i] = "0b01111110111";
        }
        for (unsigned i = 867; i < 876 ; i = i + 1) {
            ram[i] = "0b01111111000";
        }
        for (unsigned i = 876; i < 886 ; i = i + 1) {
            ram[i] = "0b01111111001";
        }
        for (unsigned i = 886; i < 897 ; i = i + 1) {
            ram[i] = "0b01111111010";
        }
        for (unsigned i = 897; i < 912 ; i = i + 1) {
            ram[i] = "0b01111111011";
        }
        for (unsigned i = 912; i < 930 ; i = i + 1) {
            ram[i] = "0b01111111100";
        }
        for (unsigned i = 930; i < 956 ; i = i + 1) {
            ram[i] = "0b01111111101";
        }
        for (unsigned i = 956; i < 1000 ; i = i + 1) {
            ram[i] = "0b01111111110";
        }
        for (unsigned i = 1000; i < 1024 ; i = i + 1) {
            ram[i] = "0b01111111111";
        }


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


SC_METHOD(prc_write_5);
  sensitive<<clk.pos();


SC_METHOD(prc_write_6);
  sensitive<<clk.pos();


SC_METHOD(prc_write_7);
  sensitive<<clk.pos();


SC_METHOD(prc_write_8);
  sensitive<<clk.pos();


SC_METHOD(prc_write_9);
  sensitive<<clk.pos();


SC_METHOD(prc_write_10);
  sensitive<<clk.pos();


SC_METHOD(prc_write_11);
  sensitive<<clk.pos();


SC_METHOD(prc_write_12);
  sensitive<<clk.pos();


SC_METHOD(prc_write_13);
  sensitive<<clk.pos();


SC_METHOD(prc_write_14);
  sensitive<<clk.pos();


SC_METHOD(prc_write_15);
  sensitive<<clk.pos();


SC_METHOD(prc_write_16);
  sensitive<<clk.pos();


SC_METHOD(prc_write_17);
  sensitive<<clk.pos();


SC_METHOD(prc_write_18);
  sensitive<<clk.pos();


SC_METHOD(prc_write_19);
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


void prc_write_5()
{
    if (ce5.read() == sc_dt::Log_1) 
    {
            if(address5.read().is_01() && address5.read().to_uint()<AddressRange)
              q5 = ram[address5.read().to_uint()];
            else
              q5 = sc_lv<DataWidth>();
    }
}


void prc_write_6()
{
    if (ce6.read() == sc_dt::Log_1) 
    {
            if(address6.read().is_01() && address6.read().to_uint()<AddressRange)
              q6 = ram[address6.read().to_uint()];
            else
              q6 = sc_lv<DataWidth>();
    }
}


void prc_write_7()
{
    if (ce7.read() == sc_dt::Log_1) 
    {
            if(address7.read().is_01() && address7.read().to_uint()<AddressRange)
              q7 = ram[address7.read().to_uint()];
            else
              q7 = sc_lv<DataWidth>();
    }
}


void prc_write_8()
{
    if (ce8.read() == sc_dt::Log_1) 
    {
            if(address8.read().is_01() && address8.read().to_uint()<AddressRange)
              q8 = ram[address8.read().to_uint()];
            else
              q8 = sc_lv<DataWidth>();
    }
}


void prc_write_9()
{
    if (ce9.read() == sc_dt::Log_1) 
    {
            if(address9.read().is_01() && address9.read().to_uint()<AddressRange)
              q9 = ram[address9.read().to_uint()];
            else
              q9 = sc_lv<DataWidth>();
    }
}


void prc_write_10()
{
    if (ce10.read() == sc_dt::Log_1) 
    {
            if(address10.read().is_01() && address10.read().to_uint()<AddressRange)
              q10 = ram[address10.read().to_uint()];
            else
              q10 = sc_lv<DataWidth>();
    }
}


void prc_write_11()
{
    if (ce11.read() == sc_dt::Log_1) 
    {
            if(address11.read().is_01() && address11.read().to_uint()<AddressRange)
              q11 = ram[address11.read().to_uint()];
            else
              q11 = sc_lv<DataWidth>();
    }
}


void prc_write_12()
{
    if (ce12.read() == sc_dt::Log_1) 
    {
            if(address12.read().is_01() && address12.read().to_uint()<AddressRange)
              q12 = ram[address12.read().to_uint()];
            else
              q12 = sc_lv<DataWidth>();
    }
}


void prc_write_13()
{
    if (ce13.read() == sc_dt::Log_1) 
    {
            if(address13.read().is_01() && address13.read().to_uint()<AddressRange)
              q13 = ram[address13.read().to_uint()];
            else
              q13 = sc_lv<DataWidth>();
    }
}


void prc_write_14()
{
    if (ce14.read() == sc_dt::Log_1) 
    {
            if(address14.read().is_01() && address14.read().to_uint()<AddressRange)
              q14 = ram[address14.read().to_uint()];
            else
              q14 = sc_lv<DataWidth>();
    }
}


void prc_write_15()
{
    if (ce15.read() == sc_dt::Log_1) 
    {
            if(address15.read().is_01() && address15.read().to_uint()<AddressRange)
              q15 = ram[address15.read().to_uint()];
            else
              q15 = sc_lv<DataWidth>();
    }
}


void prc_write_16()
{
    if (ce16.read() == sc_dt::Log_1) 
    {
            if(address16.read().is_01() && address16.read().to_uint()<AddressRange)
              q16 = ram[address16.read().to_uint()];
            else
              q16 = sc_lv<DataWidth>();
    }
}


void prc_write_17()
{
    if (ce17.read() == sc_dt::Log_1) 
    {
            if(address17.read().is_01() && address17.read().to_uint()<AddressRange)
              q17 = ram[address17.read().to_uint()];
            else
              q17 = sc_lv<DataWidth>();
    }
}


void prc_write_18()
{
    if (ce18.read() == sc_dt::Log_1) 
    {
            if(address18.read().is_01() && address18.read().to_uint()<AddressRange)
              q18 = ram[address18.read().to_uint()];
            else
              q18 = sc_lv<DataWidth>();
    }
}


void prc_write_19()
{
    if (ce19.read() == sc_dt::Log_1) 
    {
            if(address19.read().is_01() && address19.read().to_uint()<AddressRange)
              q19 = ram[address19.read().to_uint()];
            else
              q19 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2) {


static const unsigned DataWidth = 11;
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
sc_core::sc_in <sc_lv<AddressWidth> > address5;
sc_core::sc_in<sc_logic> ce5;
sc_core::sc_out <sc_lv<DataWidth> > q5;
sc_core::sc_in <sc_lv<AddressWidth> > address6;
sc_core::sc_in<sc_logic> ce6;
sc_core::sc_out <sc_lv<DataWidth> > q6;
sc_core::sc_in <sc_lv<AddressWidth> > address7;
sc_core::sc_in<sc_logic> ce7;
sc_core::sc_out <sc_lv<DataWidth> > q7;
sc_core::sc_in <sc_lv<AddressWidth> > address8;
sc_core::sc_in<sc_logic> ce8;
sc_core::sc_out <sc_lv<DataWidth> > q8;
sc_core::sc_in <sc_lv<AddressWidth> > address9;
sc_core::sc_in<sc_logic> ce9;
sc_core::sc_out <sc_lv<DataWidth> > q9;
sc_core::sc_in <sc_lv<AddressWidth> > address10;
sc_core::sc_in<sc_logic> ce10;
sc_core::sc_out <sc_lv<DataWidth> > q10;
sc_core::sc_in <sc_lv<AddressWidth> > address11;
sc_core::sc_in<sc_logic> ce11;
sc_core::sc_out <sc_lv<DataWidth> > q11;
sc_core::sc_in <sc_lv<AddressWidth> > address12;
sc_core::sc_in<sc_logic> ce12;
sc_core::sc_out <sc_lv<DataWidth> > q12;
sc_core::sc_in <sc_lv<AddressWidth> > address13;
sc_core::sc_in<sc_logic> ce13;
sc_core::sc_out <sc_lv<DataWidth> > q13;
sc_core::sc_in <sc_lv<AddressWidth> > address14;
sc_core::sc_in<sc_logic> ce14;
sc_core::sc_out <sc_lv<DataWidth> > q14;
sc_core::sc_in <sc_lv<AddressWidth> > address15;
sc_core::sc_in<sc_logic> ce15;
sc_core::sc_out <sc_lv<DataWidth> > q15;
sc_core::sc_in <sc_lv<AddressWidth> > address16;
sc_core::sc_in<sc_logic> ce16;
sc_core::sc_out <sc_lv<DataWidth> > q16;
sc_core::sc_in <sc_lv<AddressWidth> > address17;
sc_core::sc_in<sc_logic> ce17;
sc_core::sc_out <sc_lv<DataWidth> > q17;
sc_core::sc_in <sc_lv<AddressWidth> > address18;
sc_core::sc_in<sc_logic> ce18;
sc_core::sc_out <sc_lv<DataWidth> > q18;
sc_core::sc_in <sc_lv<AddressWidth> > address19;
sc_core::sc_in<sc_logic> ce19;
sc_core::sc_out <sc_lv<DataWidth> > q19;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2_ram* meminst;


SC_CTOR(tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2) {
meminst = new tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2_ram("tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2_ram");
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

meminst->address5(address5);
meminst->ce5(ce5);
meminst->q5(q5);

meminst->address6(address6);
meminst->ce6(ce6);
meminst->q6(q6);

meminst->address7(address7);
meminst->ce7(ce7);
meminst->q7(q7);

meminst->address8(address8);
meminst->ce8(ce8);
meminst->q8(q8);

meminst->address9(address9);
meminst->ce9(ce9);
meminst->q9(q9);

meminst->address10(address10);
meminst->ce10(ce10);
meminst->q10(q10);

meminst->address11(address11);
meminst->ce11(ce11);
meminst->q11(q11);

meminst->address12(address12);
meminst->ce12(ce12);
meminst->q12(q12);

meminst->address13(address13);
meminst->ce13(ce13);
meminst->q13(q13);

meminst->address14(address14);
meminst->ce14(ce14);
meminst->q14(q14);

meminst->address15(address15);
meminst->ce15(ce15);
meminst->q15(q15);

meminst->address16(address16);
meminst->ce16(ce16);
meminst->q16(q16);

meminst->address17(address17);
meminst->ce17(ce17);
meminst->q17(q17);

meminst->address18(address18);
meminst->ce18(ce18);
meminst->q18(q18);

meminst->address19(address19);
meminst->ce19(ce19);
meminst->q19(q19);

meminst->reset(reset);
meminst->clk(clk);
}
~tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table2() {
    delete meminst;
}


};//endmodule
#endif
