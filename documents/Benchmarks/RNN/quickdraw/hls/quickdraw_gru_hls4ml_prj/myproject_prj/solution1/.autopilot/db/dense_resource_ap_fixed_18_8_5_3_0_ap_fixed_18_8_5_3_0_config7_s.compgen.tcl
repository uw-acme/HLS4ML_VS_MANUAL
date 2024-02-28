# This script segment is generated automatically by AutoPilot

set id 8566
set name myproject_mul_mul_18s_8s_26_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 18
set in0_signed 1
set in1_width 8
set in1_signed 1
set out_width 26
set exp i0*i1
set arg_lists {i0 {18 1 +} i1 {8 1 +} p {26 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 8568
set hasByteEnable 0
set MemName dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config7_s_w7_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 350
set AddrRange 32
set AddrWd 5
set TrueReset 0
set IsROM 1
set ROMData { "00011100111111111111110110000000000000000011000000000010011101000000000000101101000000000001000010000000000000001010111111111110101101000000000000101100000000000001101111111111111111111111000000000001100101000000000000011001000000000001011110000000000000000110111111111111000111000000000000001111111111111111101011111111111111110110000000000000101101" "00000000000000000000000101111111111111100100111111111111100110000000000000000000000000000000000010111111111111100010111111111111111101111111111111111100000000000000000110111111111111100010111111111111111100000000000000000011000000000000000001111111111111010011000000000000000010111111111111111001000000000000001001111111111111011101000000000000000011" "11110111111111111111101101111111111110100001000000000001000011111111111111111101111111111111100010111111111110100010000000000000111011000000000000000110111111111111010110111111111110110010000000000000101011111111111111110111111111111111100001111111111110100110000000000000111000111111111111110000111111111111100011111111111110101010000000000000110010" "00001110000000000000111000000000000000010001000000000000000001000000000000011011000000000000110110000000000000000110111111111111110101000000000000100001000000000000110110000000000000001010111111111111101110000000000000010001000000000000101100000000000000000101111111111111111001000000000000010101000000000000101011000000000000001010111111111111111101" "11000101111111111111100000000000000000011110000000000000111001111111111111100010111111111111100101000000000000100010000000000001001100111111111111100010111111111111100001000000000000100010000000000000111100111111111111010111111111111111011110000000000000101000000000000000111001111111111111010000111111111111100100000000000000100110000000000000111101" "10110100111111111111101100111111111111000010111111111111010111111111111110110111111111111111101100111111111111000110111111111111100011111111111110110111111111111111101111111111111110111011111111111111010011111111111110110001111111111111111010111111111111001000111111111111100001111111111110111111111111111111101100111111111110111101111111111111100001" "11101110111111111111110001000000000000000100111111111111110110111111111111100110111111111111111000000000000000100000111111111111111000111111111111011111000000000000001000000000000000101000000000000000001001111111111111100010111111111111111000000000000000011101111111111111111100111111111111100000111111111111110100000000000000100010111111111111110110" "10010101000000000000001011000000000000100010000000000000011001111111111111000110000000000000010011111111111110010100000000000000001011000000000000010001000000000000001010111111111110000001111111111111111001111111111110111001000000000000001111111111111110001110111111111111111101111111111110100011000000000000000111111111111110001101000000000000000001" "00100011111111111111010001111111111110110001000000000000100100000000000000110101111111111111100000111111111110101111000000000000100110000000000000101101111111111111011111111111111110101000000000000000100111000000000000110110111111111111010001111111111110110010000000000000110111000000000000111011111111111111100001111111111110101011000000000000101001" "10101000000000000001001110000000000000111101000000000000011001111111111110011001000000000001001110000000000001001000000000000000001101111111111110010000000000000001010111000000000001001101000000000000011011111111111110010000000000000001001101000000000001010110000000000000001111111111111110010011000000000001000110000000000001000111000000000000011000" "11011111111111111111111101111111111111010011111111111111011000111111111111010011111111111111110100111111111111011001111111111111011110111111111111100011111111111111111010111111111111011101111111111111100100111111111111011111000000000000001010111111111111100001111111111111100000111111111111011011111111111111111011111111111111100001111111111111101010" "11101000111111111111110100000000000000110000000000000001000111111111111111101001111111111111110000000000000000111011000000000001000101111111111111101110111111111111101100000000000001000011000000000001001010111111111111110001111111111111100111000000000000111010000000000001000111111111111111101001111111111111101100000000000000111001000000000001000001" "00100011111111111111110010000000000000100101000000000000100010000000000000100001000000000000000000000000000000011011000000000000011110000000000000011100111111111111111100000000000000101111000000000000011010000000000000100000111111111111111011000000000000100000000000000000100001000000000000100100111111111111111101000000000000100101000000000000011100" "01011000000000000000110011000000000001000000111111111110100001000000000001011001000000000000110111000000000000111011111111111110110001000000000001010001000000000000110000000000000000111011111111111110100110000000000001011000000000000000101101000000000000101000111111111110101111000000000001011111000000000000111000000000000001000100111111111110101111" "00010010111111111111010000111111111111111011111111111111011111000000000000010101111111111110111101000000000000000111111111111111010011000000000000011111111111111111001101000000000000000100111111111111010110000000000000010110111111111110111101000000000000010111111111111111010010000000000000011001111111111110110011000000000000000110111111111111001110" "00001001111111111111111010111111111110011100000000000000000011000000000000001111000000000000000111111111111110110100000000000000000010000000000000010111000000000000001110111111111110110010111111111111111111111111111111111111000000000000001101111111111110101010111111111111111110111111111111111110000000000000001011111111111110100010111111111111111000" "00111101000000000001000111111111111111101111111111111111000010000000000000100101000000000000111000111111111111110110111111111111000100000000000000100111000000000000111111111111111111101110111111111111000011000000000000110110000000000001001011111111111111101001111111111111000111000000000000110011000000000001000011111111111111101110111111111110110010" "00011010111111111111001000111111111111100100000000000000001000000000000000011111111111111111011001111111111111100000000000000000000001000000000000100011111111111111010110111111111111100110000000000000000000000000000000100000111111111111010010111111111111100000000000000000000100000000000000100010111111111111001101111111111111011001000000000000010100" "11000001111111111111111101111111111111111100111111111111111010111111111111010000000000000000001001000000000000101110111111111111100110111111111111010010111111111111111011000000000001001010111111111111101100111111111111001000000000000000010001111111111110110111111111111111100000111111111111000001000000000000011011000000000000110110111111111111101001" "00111111000000000001001100000000000000011001111111111111101111000000000000101011000000000001011011000000000000010010111111111111001111000000000000101001000000000001010111000000000000011000111111111111000101000000000000110101000000000001001011000000000000011010111111111111010001000000000000110011000000000001010001000000000000011110111111111111001100" "10110101111111111111100010000000000000101101000000000000010101111111111110110101111111111111001100000000000000011100000000000000001000111111111110110100111111111111010000000000000000010010000000000000011100111111111110111101111111111111010011000000000000100001000000000000010000111111111111000011111111111111010000000000000000100011000000000000011001" "00001011000000000000000101111111111111111111000000000000000111000000000000001011000000000000001100111111111111111111000000000000010000111111111111111011000000000000010111111111111111111110000000000000001100000000000000010001000000000000001010000000000000001000000000000000001011000000000000001111000000000000001110111111111111111100000000000000000110" "00101101000000000000011101000000000001010011111111111111011001000000000000100110000000000000011010000000000001000111111111111111010011000000000000101010000000000000001010000000000000111100000000000000000110000000000000101010000000000000001111000000000000111001111111111111110110000000000000100000000000000000010011000000000001000101111111111111001001" "10111110111111111111010101111111111111100101000000000001000001111111111110110010111111111111100001111111111111100100000000000000111111111111111111001000111111111111101011111111111111011110111111111110111011111111111110110010111111111111011101111111111111101111000000000000010111111111111110111010111111111111100000111111111111101100000000000001100110" "00010001000000000001000110111111111111010110111111111111011010000000000000001110000000000000110101111111111111000101111111111111011011000000000000011010000000000000100111111111111111000100111111111111101010000000000000011001000000000000110001111111111111000100111111111111101010000000000000100010000000000000101100111111111111010101111111111111011110" "11100111000000000000101000111111111111101100111111111111011001111111111111110001000000000000011101111111111111101011111111111111011010111111111111111000000000000000100110111111111111100101111111111111001001111111111111100111000000000000100000111111111111100101111111111111001010111111111111101111000000000000010011111111111111100101111111111111010010" "10101100111111111111011100111111111111101101000000000001100010111111111110101011111111111111011111000000000000000011111111111111101111111111111110101001111111111111001100000000000000001010000000000001000001111111111110100100111111111111010010111111111111111001000000000000101010111111111110110000111111111111010001111111111111110101111111111110111110" "11001001000000000000001001111111111111010100111111111111011010111111111111001100000000000000010011111111111111000011111111111111011101111111111111001101000000000000001010111111111111001100111111111111011100111111111111010000000000000000000111111111111111010001111111111111011111111111111111001000000000000000001000111111111111001101111111111111011100" "11110000000000000000010000111111111111011011000000000000000111111111111111110111000000000000011001111111111111001001000000000000000010111111111111110110000000000000011000111111111111011100111111111111111011111111111111110101000000000000100100111111111111010100000000000000000001111111111111111101000000000000010001111111111111010111000000000000000010" "00001101111111111111000011111111111111100101000000000000000111000000000000001011111111111110110001111111111111101111000000000000001111000000000000011011111111111110101100111111111111101010000000000000000111000000000000001010111111111110101111111111111111101101000000000000000110000000000000000100111111111110110111111111111111101110000000000000000101" "11111100111111111111110000111111111111101111111111111110111001000000000000001010111111111111110000111111111111100100111111111111000111000000000000010000111111111111011001111111111111100001111111111110111110000000000000010110111111111111100110111111111111011100111111111111000011000000000000010000111111111111011101111111111111100001111111111111010000" "10110110111111111101110000000000000000010010111111111111101001111111111110101100111111111110101011000000000000001001111111111111110010111111111110101100111111111110110100000000000000001001111111111111110011111111111110110100111111111111101111000000000000000000111111111111100010111111111110110100000000000000011001000000000000001011111111111111101000" }
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


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8569 \
    name data_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V_read \
    op interface \
    ports { data_0_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8570 \
    name data_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V_read \
    op interface \
    ports { data_1_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8571 \
    name data_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V_read \
    op interface \
    ports { data_2_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8572 \
    name data_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V_read \
    op interface \
    ports { data_3_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8573 \
    name data_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V_read \
    op interface \
    ports { data_4_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8574 \
    name data_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V_read \
    op interface \
    ports { data_5_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8575 \
    name data_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V_read \
    op interface \
    ports { data_6_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8576 \
    name data_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V_read \
    op interface \
    ports { data_7_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8577 \
    name data_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V_read \
    op interface \
    ports { data_8_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8578 \
    name data_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V_read \
    op interface \
    ports { data_9_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8579 \
    name data_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_10_V_read \
    op interface \
    ports { data_10_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8580 \
    name data_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_11_V_read \
    op interface \
    ports { data_11_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8581 \
    name data_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_12_V_read \
    op interface \
    ports { data_12_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8582 \
    name data_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_13_V_read \
    op interface \
    ports { data_13_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8583 \
    name data_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_14_V_read \
    op interface \
    ports { data_14_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8584 \
    name data_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_15_V_read \
    op interface \
    ports { data_15_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8585 \
    name data_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_16_V_read \
    op interface \
    ports { data_16_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8586 \
    name data_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_17_V_read \
    op interface \
    ports { data_17_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8587 \
    name data_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_18_V_read \
    op interface \
    ports { data_18_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8588 \
    name data_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_19_V_read \
    op interface \
    ports { data_19_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8589 \
    name data_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_20_V_read \
    op interface \
    ports { data_20_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8590 \
    name data_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_21_V_read \
    op interface \
    ports { data_21_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8591 \
    name data_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_22_V_read \
    op interface \
    ports { data_22_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8592 \
    name data_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_23_V_read \
    op interface \
    ports { data_23_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8593 \
    name data_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_24_V_read \
    op interface \
    ports { data_24_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8594 \
    name data_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_25_V_read \
    op interface \
    ports { data_25_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8595 \
    name data_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_26_V_read \
    op interface \
    ports { data_26_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8596 \
    name data_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_27_V_read \
    op interface \
    ports { data_27_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8597 \
    name data_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_28_V_read \
    op interface \
    ports { data_28_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8598 \
    name data_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_29_V_read \
    op interface \
    ports { data_29_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8599 \
    name data_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_30_V_read \
    op interface \
    ports { data_30_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8600 \
    name data_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_31_V_read \
    op interface \
    ports { data_31_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8601 \
    name data_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_32_V_read \
    op interface \
    ports { data_32_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8602 \
    name data_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_33_V_read \
    op interface \
    ports { data_33_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8603 \
    name data_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_34_V_read \
    op interface \
    ports { data_34_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8604 \
    name data_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_35_V_read \
    op interface \
    ports { data_35_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8605 \
    name data_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_36_V_read \
    op interface \
    ports { data_36_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8606 \
    name data_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_37_V_read \
    op interface \
    ports { data_37_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8607 \
    name data_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_38_V_read \
    op interface \
    ports { data_38_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8608 \
    name data_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_39_V_read \
    op interface \
    ports { data_39_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8609 \
    name data_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_40_V_read \
    op interface \
    ports { data_40_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8610 \
    name data_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_41_V_read \
    op interface \
    ports { data_41_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8611 \
    name data_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_42_V_read \
    op interface \
    ports { data_42_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8612 \
    name data_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_43_V_read \
    op interface \
    ports { data_43_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8613 \
    name data_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_44_V_read \
    op interface \
    ports { data_44_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8614 \
    name data_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_45_V_read \
    op interface \
    ports { data_45_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8615 \
    name data_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_46_V_read \
    op interface \
    ports { data_46_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8616 \
    name data_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_47_V_read \
    op interface \
    ports { data_47_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8617 \
    name data_48_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_48_V_read \
    op interface \
    ports { data_48_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8618 \
    name data_49_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_49_V_read \
    op interface \
    ports { data_49_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8619 \
    name data_50_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_50_V_read \
    op interface \
    ports { data_50_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8620 \
    name data_51_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_51_V_read \
    op interface \
    ports { data_51_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8621 \
    name data_52_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_52_V_read \
    op interface \
    ports { data_52_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8622 \
    name data_53_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_53_V_read \
    op interface \
    ports { data_53_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8623 \
    name data_54_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_54_V_read \
    op interface \
    ports { data_54_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8624 \
    name data_55_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_55_V_read \
    op interface \
    ports { data_55_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8625 \
    name data_56_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_56_V_read \
    op interface \
    ports { data_56_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8626 \
    name data_57_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_57_V_read \
    op interface \
    ports { data_57_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8627 \
    name data_58_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_58_V_read \
    op interface \
    ports { data_58_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8628 \
    name data_59_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_59_V_read \
    op interface \
    ports { data_59_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8629 \
    name data_60_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_60_V_read \
    op interface \
    ports { data_60_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8630 \
    name data_61_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_61_V_read \
    op interface \
    ports { data_61_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8631 \
    name data_62_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_62_V_read \
    op interface \
    ports { data_62_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8632 \
    name data_63_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_63_V_read \
    op interface \
    ports { data_63_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8633 \
    name data_64_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_64_V_read \
    op interface \
    ports { data_64_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8634 \
    name data_65_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_65_V_read \
    op interface \
    ports { data_65_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8635 \
    name data_66_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_66_V_read \
    op interface \
    ports { data_66_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8636 \
    name data_67_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_67_V_read \
    op interface \
    ports { data_67_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8637 \
    name data_68_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_68_V_read \
    op interface \
    ports { data_68_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8638 \
    name data_69_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_69_V_read \
    op interface \
    ports { data_69_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8639 \
    name data_70_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_70_V_read \
    op interface \
    ports { data_70_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8640 \
    name data_71_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_71_V_read \
    op interface \
    ports { data_71_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8641 \
    name data_72_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_72_V_read \
    op interface \
    ports { data_72_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8642 \
    name data_73_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_73_V_read \
    op interface \
    ports { data_73_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8643 \
    name data_74_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_74_V_read \
    op interface \
    ports { data_74_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8644 \
    name data_75_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_75_V_read \
    op interface \
    ports { data_75_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8645 \
    name data_76_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_76_V_read \
    op interface \
    ports { data_76_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8646 \
    name data_77_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_77_V_read \
    op interface \
    ports { data_77_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8647 \
    name data_78_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_78_V_read \
    op interface \
    ports { data_78_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8648 \
    name data_79_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_79_V_read \
    op interface \
    ports { data_79_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8649 \
    name data_80_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_80_V_read \
    op interface \
    ports { data_80_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8650 \
    name data_81_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_81_V_read \
    op interface \
    ports { data_81_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8651 \
    name data_82_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_82_V_read \
    op interface \
    ports { data_82_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8652 \
    name data_83_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_83_V_read \
    op interface \
    ports { data_83_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8653 \
    name data_84_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_84_V_read \
    op interface \
    ports { data_84_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8654 \
    name data_85_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_85_V_read \
    op interface \
    ports { data_85_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8655 \
    name data_86_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_86_V_read \
    op interface \
    ports { data_86_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8656 \
    name data_87_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_87_V_read \
    op interface \
    ports { data_87_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8657 \
    name data_88_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_88_V_read \
    op interface \
    ports { data_88_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8658 \
    name data_89_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_89_V_read \
    op interface \
    ports { data_89_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8659 \
    name data_90_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_90_V_read \
    op interface \
    ports { data_90_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8660 \
    name data_91_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_91_V_read \
    op interface \
    ports { data_91_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8661 \
    name data_92_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_92_V_read \
    op interface \
    ports { data_92_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8662 \
    name data_93_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_93_V_read \
    op interface \
    ports { data_93_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8663 \
    name data_94_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_94_V_read \
    op interface \
    ports { data_94_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8664 \
    name data_95_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_95_V_read \
    op interface \
    ports { data_95_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8665 \
    name data_96_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_96_V_read \
    op interface \
    ports { data_96_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8666 \
    name data_97_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_97_V_read \
    op interface \
    ports { data_97_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8667 \
    name data_98_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_98_V_read \
    op interface \
    ports { data_98_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8668 \
    name data_99_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_99_V_read \
    op interface \
    ports { data_99_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8669 \
    name data_100_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_100_V_read \
    op interface \
    ports { data_100_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8670 \
    name data_101_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_101_V_read \
    op interface \
    ports { data_101_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8671 \
    name data_102_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_102_V_read \
    op interface \
    ports { data_102_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8672 \
    name data_103_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_103_V_read \
    op interface \
    ports { data_103_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8673 \
    name data_104_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_104_V_read \
    op interface \
    ports { data_104_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8674 \
    name data_105_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_105_V_read \
    op interface \
    ports { data_105_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8675 \
    name data_106_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_106_V_read \
    op interface \
    ports { data_106_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8676 \
    name data_107_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_107_V_read \
    op interface \
    ports { data_107_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8677 \
    name data_108_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_108_V_read \
    op interface \
    ports { data_108_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8678 \
    name data_109_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_109_V_read \
    op interface \
    ports { data_109_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8679 \
    name data_110_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_110_V_read \
    op interface \
    ports { data_110_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8680 \
    name data_111_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_111_V_read \
    op interface \
    ports { data_111_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8681 \
    name data_112_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_112_V_read \
    op interface \
    ports { data_112_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8682 \
    name data_113_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_113_V_read \
    op interface \
    ports { data_113_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8683 \
    name data_114_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_114_V_read \
    op interface \
    ports { data_114_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8684 \
    name data_115_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_115_V_read \
    op interface \
    ports { data_115_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8685 \
    name data_116_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_116_V_read \
    op interface \
    ports { data_116_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8686 \
    name data_117_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_117_V_read \
    op interface \
    ports { data_117_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8687 \
    name data_118_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_118_V_read \
    op interface \
    ports { data_118_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8688 \
    name data_119_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_119_V_read \
    op interface \
    ports { data_119_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8689 \
    name data_120_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_120_V_read \
    op interface \
    ports { data_120_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8690 \
    name data_121_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_121_V_read \
    op interface \
    ports { data_121_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8691 \
    name data_122_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_122_V_read \
    op interface \
    ports { data_122_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8692 \
    name data_123_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_123_V_read \
    op interface \
    ports { data_123_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8693 \
    name data_124_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_124_V_read \
    op interface \
    ports { data_124_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8694 \
    name data_125_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_125_V_read \
    op interface \
    ports { data_125_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8695 \
    name data_126_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_126_V_read \
    op interface \
    ports { data_126_V_read { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8696 \
    name data_127_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_127_V_read \
    op interface \
    ports { data_127_V_read { I 18 vector } } \
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


