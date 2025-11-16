# This script segment is generated automatically by AutoPilot

set id 3517
set name myproject_mux_164_20_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 20
set din0_signed 0
set din1_width 20
set din1_signed 0
set din2_width 20
set din2_signed 0
set din3_width 20
set din3_signed 0
set din4_width 20
set din4_signed 0
set din5_width 20
set din5_signed 0
set din6_width 20
set din6_signed 0
set din7_width 20
set din7_signed 0
set din8_width 20
set din8_signed 0
set din9_width 20
set din9_signed 0
set din10_width 20
set din10_signed 0
set din11_width 20
set din11_signed 0
set din12_width 20
set din12_signed 0
set din13_width 20
set din13_signed 0
set din14_width 20
set din14_signed 0
set din15_width 20
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 20
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 3520
set hasByteEnable 0
set MemName dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_outidx5
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 4
set AddrRange 512
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0000" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0001" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0010" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0011" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0100" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0101" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0110" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "0111" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1000" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1001" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1010" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1011" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1100" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1101" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1110" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" "1111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 3521
set hasByteEnable 0
set MemName dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_w7_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 512
set AddrWd 9
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "000001010100" "111101011010" "111011011000" "111011101101" "000001010001" "111111000001" "000000110010" "111111100010" "000010111111" "000010001111" "110100101101" "000001000011" "110010101001" "000000001011" "111000001101" "111101011010" "000001011110" "000000111101" "000000101001" "111110100110" "000000001010" "111110110101" "000010111100" "000001011100" "111111010010" "111101110100" "111110011011" "111101001000" "111101100100" "000000011011" "111110110001" "000100100011" "111111101000" "111111101001" "111101010101" "000011101000" "111111001001" "111111011010" "111110110011" "000000000100" "111100100101" "000001010000" "111111000001" "111111000011" "111110100111" "111111110010" "111000110011" "110100101011" "000011100011" "111101110110" "111110101010" "000001110010" "000000001110" "000001100011" "111110110110" "000001011110" "000000111011" "000000000010" "000000101000" "000000110111" "000101000111" "111111111110" "111111101001" "000001110000" "111111110100" "000001111001" "111100111001" "000001000000" "000001000001" "000000111010" "111111101001" "000000001100" "111110110000" "111110100010" "000000101101" "000000000101" "111111001101" "111111101011" "111110010110" "111110100010" "110100011011" "000001101111" "000000100011" "000000000101" "111111011101" "111010101111" "000000110011" "000011100001" "111110110111" "000001010111" "111100011101" "111001001000" "111110100101" "000000110001" "000000011111" "111111101110" "111111001000" "000000110101" "000000010101" "111111101011" "111010100010" "111111000111" "111101011010" "111111001000" "111111000100" "111101011011" "111111110101" "111101110010" "000001000001" "000000101110" "111111101110" "111111100110" "111111111000" "111111101100" "111111100101" "000001110111" "000000110101" "000000001110" "111111110001" "111111111111" "000001101001" "000000000110" "000000110111" "000000100101" "000010100011" "111100011010" "111111010110" "000011011110" "111111011000" "111111001001" "111110101011" "000000010000" "111110100110" "111110110001" "111110110100" "111111011111" "111010100101" "000001111011" "111101110100" "111111000001" "111101100111" "000000101110" "111011100101" "110110010110" "111010011100" "000000101101" "000000010010" "111011001000" "000000101101" "000000010010" "000010010101" "111010000011" "000000000111" "111110110100" "000000001011" "111110101010" "000001000111" "111111001100" "111110011101" "111101000110" "000110110111" "000000100010" "111111110011" "111111001001" "000001100100" "000000101001" "111010000101" "000000110011" "000000011111" "000000001101" "111111101110" "000001001011" "000000100010" "000000101101" "000000101011" "000000101011" "111111100110" "111111101011" "111010101010" "111110100110" "000000110001" "000000101110" "111111011100" "111111110101" "111111010101" "111111110010" "111110100110" "000000000011" "000111001111" "000000111100" "000000110110" "000100101110" "000000011001" "000001011101" "111111011101" "111110110001" "111100000101" "000001100010" "111110001001" "000001101001" "111111011100" "111101010010" "000001100010" "111101000101" "000001100111" "000001001011" "111111111001" "111111000010" "000010000101" "000001001010" "111101011100" "000001000001" "000000111001" "111110100000" "111110111011" "000000110000" "111110011000" "000001001010" "111110100100" "000001101110" "100001111101" "111100001101" "000001010010" "111111101011" "111111100111" "111111101000" "000010010100" "111110011111" "111111001011" "000000011010" "111111001011" "000000001010" "111101111110" "111100010000" "000010000101" "111111000011" "000010110000" "111111101010" "000001100101" "000001011100" "000010010100" "000000110110" "000100011110" "000000001001" "111111111000" "111100101101" "111111000100" "111111001000" "111110001001" "000000001011" "111111100011" "000000101001" "000101010010" "111111010000" "000000011100" "111110100101" "000000010111" "111110001100" "111110010000" "000000111110" "000000110110" "000000011110" "000000000100" "111111100000" "000001101001" "111110000101" "111100101001" "111111011101" "111011010010" "000001000101" "111101001111" "111101000101" "000011101010" "000000110010" "000001001100" "000010010111" "000001001001" "000001000111" "000001000110" "111100010101" "111001101101" "111110011100" "000001001101" "111110110111" "111110101110" "000000101111" "111111001010" "110011011100" "100110111001" "111111001101" "111111110001" "111110111100" "000010111011" "000010010001" "111110011011" "000010001100" "000000101111" "000001000001" "111111110110" "000001111101" "000000000101" "111110100001" "000000100100" "000000011000" "111111001111" "111111010001" "111011110010" "000100001001" "111110101111" "111110010001" "111111011001" "111111001110" "000011110101" "111110011011" "111101110001" "111101100000" "111110110100" "000001110001" "000010111010" "111000101011" "000000011000" "111010011001" "111110101001" "000000111011" "111111111000" "111111110000" "000110010111" "000000000101" "111110001001" "000000010111" "111111101001" "111101110111" "111111011011" "111110001010" "000001000110" "000000110101" "111111101010" "111111100000" "111111111001" "111101110100" "111010010101" "111101011100" "000000010011" "111111010001" "111101111010" "111101101000" "111111010110" "111010011001" "111101000000" "111111110101" "111111111011" "111110110010" "000000100110" "111110010100" "000000111111" "000000001010" "000001100000" "000000000101" "111010101100" "000000000010" "111000010111" "000001100001" "000000011000" "000001100001" "111111111011" "110101100011" "111111111110" "000000001110" "000000010011" "000000010001" "000000100011" "110100001100" "110110110111" "110011010000" "111111001110" "000000010001" "101110100011" "111110011100" "111111011000" "111110001011" "111101101010" "000001000011" "000000000010" "110011010011" "111111011110" "000000001111" "101111001011" "111101011000" "000001001001" "000000100110" "111111110001" "000000001011" "111000001001" "111100011000" "000010010111" "111111110000" "000001110100" "111110001000" "000001111010" "000001011001" "111101000010" "111110100110" "111111101100" "111100101000" "111101111011" "111100011010" "111100110000" "111111011101" "111011100101" "000000010110" "000101010101" "111111110110" "111101111100" "000000101111" "000000000111" "111001110000" "100110010100" "110110000100" "000000000010" "000000010000" "100011111111" "110011101000" "110110110100" "100000000000" "000000010011" "111111101001" "111111110100" "111100001001" "111111110011" "111111100111" "000000000110" "111111110011" "000000000011" "111111101000" "000000100101" "000000000100" "111111011101" "000000000001" "000000011011" "000000001011" "000000110110" "111000001000" "000000000010" "110110100011" "111101000100" "101110000011" "100100100011" "000000000101" "000000001100" "111110110100" "000010111000" "110101100010" "000000001110" "111111111011" "000000100111" "111111111000" "000000001000" "111110010101" "000000000001" "000000101110" "000000010111" "000000001001" "000000111010" "000001010111" "111000101010" "110001001111" "111110111111" "000000001111" "000000000101" "000001000101" "111111010110" "111001010101" "111110100110" "111110100010" "000000010101" "111110110100" "111110101010" "111111101101" "111111111010" "000000101001" "111111111001" "111010010010" "000001001110" "111111100010" "111110111011" "111111011010" "111111101000" "111111100110" "000100100100" "111010111111" "000100101111" "111111001011" "111001110000" "000100001000" "000001000110" "000000100000" "111111011011" "111111100001" "111111110100" "101011100010" "000101001000" "000011100110" "000000011000" "111111100010" "000001010111" "000001111111" "000011000000" "110110101011" "111110000101" "111110111011" "111111011001" "101110010010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP_BRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3522 \
    name data_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V_read \
    op interface \
    ports { data_0_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3523 \
    name data_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V_read \
    op interface \
    ports { data_1_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3524 \
    name data_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V_read \
    op interface \
    ports { data_2_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3525 \
    name data_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V_read \
    op interface \
    ports { data_3_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3526 \
    name data_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V_read \
    op interface \
    ports { data_4_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3527 \
    name data_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V_read \
    op interface \
    ports { data_5_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3528 \
    name data_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V_read \
    op interface \
    ports { data_6_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3529 \
    name data_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V_read \
    op interface \
    ports { data_7_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3530 \
    name data_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V_read \
    op interface \
    ports { data_8_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3531 \
    name data_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V_read \
    op interface \
    ports { data_9_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3532 \
    name data_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_10_V_read \
    op interface \
    ports { data_10_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3533 \
    name data_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_11_V_read \
    op interface \
    ports { data_11_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3534 \
    name data_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_12_V_read \
    op interface \
    ports { data_12_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3535 \
    name data_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_13_V_read \
    op interface \
    ports { data_13_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3536 \
    name data_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_14_V_read \
    op interface \
    ports { data_14_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3537 \
    name data_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_15_V_read \
    op interface \
    ports { data_15_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3538 \
    name data_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_16_V_read \
    op interface \
    ports { data_16_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3539 \
    name data_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_17_V_read \
    op interface \
    ports { data_17_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3540 \
    name data_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_18_V_read \
    op interface \
    ports { data_18_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3541 \
    name data_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_19_V_read \
    op interface \
    ports { data_19_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3542 \
    name data_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_20_V_read \
    op interface \
    ports { data_20_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3543 \
    name data_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_21_V_read \
    op interface \
    ports { data_21_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3544 \
    name data_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_22_V_read \
    op interface \
    ports { data_22_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3545 \
    name data_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_23_V_read \
    op interface \
    ports { data_23_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3546 \
    name data_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_24_V_read \
    op interface \
    ports { data_24_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3547 \
    name data_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_25_V_read \
    op interface \
    ports { data_25_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3548 \
    name data_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_26_V_read \
    op interface \
    ports { data_26_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3549 \
    name data_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_27_V_read \
    op interface \
    ports { data_27_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3550 \
    name data_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_28_V_read \
    op interface \
    ports { data_28_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3551 \
    name data_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_29_V_read \
    op interface \
    ports { data_29_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3552 \
    name data_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_30_V_read \
    op interface \
    ports { data_30_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3553 \
    name data_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_31_V_read \
    op interface \
    ports { data_31_V_read { I 20 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


