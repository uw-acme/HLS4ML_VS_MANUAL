# This script segment is generated automatically by AutoPilot

set id 3542
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
set ID 3547
set hasByteEnable 0
set MemName dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_46_26_5_3_0_config7_s_w7_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 72
set AddrRange 128
set AddrWd 7
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "111111011110000000000000000101111111111111111101100000000000000001010100" "000000001111111111111111100011001111111111111100100111111111111101011010" "101111001011111111111111100100001111111111111010101111111111111011011000" "111101011000000000000000001111100000000000000001000011111111111011101101" "000001001001000000000000001101101111111111111010011000000000000001010001" "000000100110000000000000000111101111111111111011000111111111111111000001" "111111110001000000000000000001001111111111111011010000000000000000110010" "000000001011111111111111111000001111111111111101111111111111111111100010" "111000001001000000000000011010011111111111101010010100000000000010111111" "111100011000111111111111100001010000000000000111101100000000000010001111" "000010010111111111111111001010011111111111110111010011111111110100101101" "111111110000111111111111110111011111111111111100000100000000000001000011" "000001110100111111111110110100101111111111110110011111111111110010101001" "111110001000000000000000010001010000000000000010111000000000000000001011" "000001111010111111111111010011111111111111101110010111111111111000001101" "000001011001111111111111010001011111111111011001011011111111111101011010" "111101000010000000000000111010101111111111101001110000000000000001011110" "111110100110000000000000001100100000000000000010110100000000000000111101" "111111101100000000000000010011000000000000000001001000000000000000101001" "111100101000000000000000100101111111111111101100100011111111111110100110" "111101111011000000000000010010010000000000000010110100000000000000001010" "111100011010000000000000010001110000000000000001001011111111111110110101" "111100110000000000000000010001100000000000001001010100000000000010111100" "111111011101111111111111000101011111111111101000001100000000000001011100" "111011100101111111111110011011010000000000000000011111111111111111010010" "000000010110111111111111100111001111111111111011010011111111111101110100" "000101010101000000000000010011010000000000000000101111111111111110011011" "111111110110111111111111101101111111111111111010101011111111111101001000" "111101111100111111111111101011100000000000000100011111111111111101100100" "000000101111000000000000001011111111111111111100110000000000000000011011" "000000000111111111111111110010101111111111111001110111111111111110110001" "111001110000111111111100110111001111111111110100011000000000000100100011" "100110010100111111111001101110010000000000011011011111111111111111101000" "110110000100111111111111110011010000000000000010001011111111111111101001" "000000000010111111111111111100011111111111111111001111111111111101010101" "000000010000111111111111101111001111111111111100100100000000000011101000" "100011111111000000000000101110110000000000000110010011111111111111001001" "110011101000000000000000100100010000000000000010100111111111111111011010" "110110110100111111111111100110111111111111101000010111111111111110110011" "100000000000000000000000100011000000000000000011001100000000000000000100" "000000010011000000000000001011110000000000000001111111111111111100100101" "111111101001000000000000010000010000000000000000110100000000000001010000" "111111110100111111111111111101101111111111111110111011111111111111000001" "111100001001000000000000011111010000000000000100101111111111111111000011" "111111110011000000000000000001010000000000000010001011111111111110100111" "111111100111111111111111101000010000000000000010110111111111111111110010" "000000000110000000000000001001000000000000000010101111111111111000110011" "111111110011000000000000000110000000000000000010101111111111110100101011" "000000000011111111111111110011111111111111111110011000000000000011100011" "111111101000111111111111110100011111111111111110101111111111111101110110" "000000100101111111111110111100101111111111101010101011111111111110101010" "000000000100000000000001000010011111111111111010011000000000000001110010" "111111011101111111111111101011110000000000000011000100000000000000001110" "000000000001111111111111100100010000000000000010111000000000000001100011" "000000011011111111111111110110011111111111111101110011111111111110110110" "000000001011111111111111110011101111111111111111010100000000000001011110" "000000110110000000000000111101011111111111111101010100000000000000111011" "111000001000111111111111100110111111111111111111001000000000000000000010" "000000000010111111111111011100011111111111111010011000000000000000101000" "110110100011111111111111011000000000000000000000001100000000000000110111" "111101000100111111111111101101000000000000011100111100000000000101000111" "101110000011000000000000011100010000000000000011110011111111111111111110" "100100100011000000000000101110100000000000000011011011111111111111101001" "000000000101111111111110001010110000000000010010111000000000000001110000" "000000001100000000000000000110000000000000000001100111111111111111110100" "111110110100111111111110100110010000000000000101110100000000000001111001" "000010111000111111111111101010011111111111111101110111111111111100111001" "110101100010000000000000001110111111111111111011000100000000000001000000" "000000001110111111111111111110001111111111110000010100000000000001000001" "111111111011111111111111111100000000000000000110001000000000000000111010" "000000100111000000000001100101111111111111111000100111111111111111101001" "111111111000000000000000000001010000000000000110100100000000000000001100" "000000001000111111111111100010011111111111111101110011111111111110110000" "111110010101000000000000000101111111111111110101001011111111111110100010" "000000000001111111111111111010010000000000000110001000000000000000101101" "000000101110111111111111011101111111111111110100010100000000000000000101" "000000010111111111111111110110110000000000000110011111111111111111001101" "000000001001111111111111100010100000000000000100101111111111111111101011" "000000111010000000000000010001101111111111111111100111111111111110010110" "000001010111000000000000001101011111111111111100001011111111111110100010" "111000101010111111111111111010100000000000001000010111111111110100011011" "110001001111111111111111111000000000000000000100101000000000000001101111" "111110111111111111111111111110011111111111110101110000000000000000100011" "000000001111111111111111011101000000000000000100000100000000000000000101" "000000000101111111111110100101010000000000000011100111111111111111011101" "000001000101111111111111010111001111111111111010000011111111111010101111" "111111010110000000000000000100111111111111111011101100000000000000110011" "111001010101111111111111110100010000000000000011000000000000000011100001" "111110100110111111111111011110101111111111111001100011111111111110110111" "111110100010111111111111011010000000000000000100101000000000000001010111" "000000010101111111111111110101101111111111111010010011111111111100011101" "111110110100111111111110100110010000000000000110111011111111111001001000" "111110101010111111111111010000001111111110000111110111111111111110100101" "111111101101111111111111111101011111111111110000110100000000000000110001" "111111111010111111111111111110110000000000000101001000000000000000011111" "000000101001111111111111101100101111111111111110101111111111111111101110" "111111111001000000000000001001101111111111111110011111111111111111001000" "111010010010111111111111100101001111111111111110100000000000000000110101" "000001001110000000000000001111110000000000001001010000000000000000010101" "111111100010000000000000000010101111111111111001111111111111111111101011" "111110111011000000000000011000001111111111111100101111111111111010100010" "111111011010000000000000000001010000000000000001101011111111111111000111" "111111101000111111111110101011001111111111111100101111111111111101011010" "111111100110000000000000000000100000000000000000101011111111111111001000" "000100100100111111111110000101111111111111110111111011111111111111000100" "111010111111000000000000011000011111111111110001000011111111111101011011" "000100101111000000000000000110000000000000001000010111111111111111110101" "111111001011000000000000011000011111111111111100001111111111111101110010" "111001110000111111111111111110110000000000001011000000000000000001000001" "000100001000111111111101011000111111111111111110101000000000000000101110" "000001000110111111111111111111100000000000000110010111111111111111101110" "000000100000000000000000000011100000000000000101110011111111111111100110" "111111011011000000000000000100110000000000001001010011111111111111111000" "111111100001000000000000000100010000000000000011011011111111111111101100" "111111110100000000000000001000110000000000010001111011111111111111100101" "101011100010111111111101000011000000000000000000100100000000000001110111" "000101001000111111111101101101111111111111111111100000000000000000110101" "000011100110111111111100110100001111111111110010110100000000000000001110" "000000011000111111111111110011101111111111111100010011111111111111110001" "111111100010000000000000000100011111111111111100100011111111111111111111" "000001010111111111111011101000111111111111111000100100000000000001101001" "000001111111111111111111100111000000000000000000101100000000000000000110" "000011000000111111111111110110001111111111111110001100000000000000110111" "110110101011111111111111100010110000000000000010100100000000000000100101" "111110000101111111111111011010100000000000010101001000000000000010100011" "111110111011000000000000010000111111111111111101000011111111111100011010" "111111011001000000000000000000100000000000000001110011111111111111010110" "101110010010111111111100110100111111111111111010010100000000000011011110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.266
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
    id 3548 \
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
    id 3549 \
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
    id 3550 \
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
    id 3551 \
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
    id 3552 \
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
    id 3553 \
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
    id 3554 \
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
    id 3555 \
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
    id 3556 \
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
    id 3557 \
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
    id 3558 \
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
    id 3559 \
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
    id 3560 \
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
    id 3561 \
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
    id 3562 \
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
    id 3563 \
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
    id 3564 \
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
    id 3565 \
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
    id 3566 \
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
    id 3567 \
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
    id 3568 \
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
    id 3569 \
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
    id 3570 \
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
    id 3571 \
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
    id 3572 \
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
    id 3573 \
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
    id 3574 \
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
    id 3575 \
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
    id 3576 \
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
    id 3577 \
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
    id 3578 \
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
    id 3579 \
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


