# This script segment is generated automatically by AutoPilot

set id 1
set name myproject_mux_967_20_1_1
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
set din16_width 20
set din16_signed 0
set din17_width 20
set din17_signed 0
set din18_width 20
set din18_signed 0
set din19_width 20
set din19_signed 0
set din20_width 20
set din20_signed 0
set din21_width 20
set din21_signed 0
set din22_width 20
set din22_signed 0
set din23_width 20
set din23_signed 0
set din24_width 20
set din24_signed 0
set din25_width 20
set din25_signed 0
set din26_width 20
set din26_signed 0
set din27_width 20
set din27_signed 0
set din28_width 20
set din28_signed 0
set din29_width 20
set din29_signed 0
set din30_width 20
set din30_signed 0
set din31_width 20
set din31_signed 0
set din32_width 20
set din32_signed 0
set din33_width 20
set din33_signed 0
set din34_width 20
set din34_signed 0
set din35_width 20
set din35_signed 0
set din36_width 20
set din36_signed 0
set din37_width 20
set din37_signed 0
set din38_width 20
set din38_signed 0
set din39_width 20
set din39_signed 0
set din40_width 20
set din40_signed 0
set din41_width 20
set din41_signed 0
set din42_width 20
set din42_signed 0
set din43_width 20
set din43_signed 0
set din44_width 20
set din44_signed 0
set din45_width 20
set din45_signed 0
set din46_width 20
set din46_signed 0
set din47_width 20
set din47_signed 0
set din48_width 20
set din48_signed 0
set din49_width 20
set din49_signed 0
set din50_width 20
set din50_signed 0
set din51_width 20
set din51_signed 0
set din52_width 20
set din52_signed 0
set din53_width 20
set din53_signed 0
set din54_width 20
set din54_signed 0
set din55_width 20
set din55_signed 0
set din56_width 20
set din56_signed 0
set din57_width 20
set din57_signed 0
set din58_width 20
set din58_signed 0
set din59_width 20
set din59_signed 0
set din60_width 20
set din60_signed 0
set din61_width 20
set din61_signed 0
set din62_width 20
set din62_signed 0
set din63_width 20
set din63_signed 0
set din64_width 20
set din64_signed 0
set din65_width 20
set din65_signed 0
set din66_width 20
set din66_signed 0
set din67_width 20
set din67_signed 0
set din68_width 20
set din68_signed 0
set din69_width 20
set din69_signed 0
set din70_width 20
set din70_signed 0
set din71_width 20
set din71_signed 0
set din72_width 20
set din72_signed 0
set din73_width 20
set din73_signed 0
set din74_width 20
set din74_signed 0
set din75_width 20
set din75_signed 0
set din76_width 20
set din76_signed 0
set din77_width 20
set din77_signed 0
set din78_width 20
set din78_signed 0
set din79_width 20
set din79_signed 0
set din80_width 20
set din80_signed 0
set din81_width 20
set din81_signed 0
set din82_width 20
set din82_signed 0
set din83_width 20
set din83_signed 0
set din84_width 20
set din84_signed 0
set din85_width 20
set din85_signed 0
set din86_width 20
set din86_signed 0
set din87_width 20
set din87_signed 0
set din88_width 20
set din88_signed 0
set din89_width 20
set din89_signed 0
set din90_width 20
set din90_signed 0
set din91_width 20
set din91_signed 0
set din92_width 20
set din92_signed 0
set din93_width 20
set din93_signed 0
set din94_width 20
set din94_signed 0
set din95_width 20
set din95_signed 0
set din96_width 7
set din96_signed 0
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
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
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
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 2
set name myproject_mul_mul_20s_14s_30_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 20
set in0_signed 1
set in1_width 14
set in1_signed 1
set out_width 30
set exp i0*i1
set arg_lists {i0 {20 1 +} i1 {14 1 +} p {30 1 +} acc {0} }
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
set ID 5
set hasByteEnable 0
set MemName dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 7
set AddrRange 288
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "0000000" "0000000" "0000000" "0000001" "0000001" "0000001" "0000010" "0000010" "0000010" "0000011" "0000011" "0000011" "0000100" "0000100" "0000100" "0000101" "0000101" "0000101" "0000110" "0000110" "0000110" "0000111" "0000111" "0000111" "0001000" "0001000" "0001000" "0001001" "0001001" "0001001" "0001010" "0001010" "0001010" "0001011" "0001011" "0001011" "0001100" "0001100" "0001100" "0001101" "0001101" "0001101" "0001110" "0001110" "0001110" "0001111" "0001111" "0001111" "0010000" "0010000" "0010000" "0010001" "0010001" "0010001" "0010010" "0010010" "0010010" "0010011" "0010011" "0010011" "0010100" "0010100" "0010100" "0010101" "0010101" "0010101" "0010110" "0010110" "0010110" "0010111" "0010111" "0010111" "0011000" "0011000" "0011000" "0011001" "0011001" "0011001" "0011010" "0011010" "0011010" "0011011" "0011011" "0011011" "0011100" "0011100" "0011100" "0011101" "0011101" "0011101" "0011110" "0011110" "0011110" "0011111" "0011111" "0011111" "0100000" "0100000" "0100000" "0100001" "0100001" "0100001" "0100010" "0100010" "0100010" "0100011" "0100011" "0100011" "0100100" "0100100" "0100100" "0100101" "0100101" "0100101" "0100110" "0100110" "0100110" "0100111" "0100111" "0100111" "0101000" "0101000" "0101000" "0101001" "0101001" "0101001" "0101010" "0101010" "0101010" "0101011" "0101011" "0101011" "0101100" "0101100" "0101100" "0101101" "0101101" "0101101" "0101110" "0101110" "0101110" "0101111" "0101111" "0101111" "0110000" "0110000" "0110000" "0110001" "0110001" "0110001" "0110010" "0110010" "0110010" "0110011" "0110011" "0110011" "0110100" "0110100" "0110100" "0110101" "0110101" "0110101" "0110110" "0110110" "0110110" "0110111" "0110111" "0110111" "0111000" "0111000" "0111000" "0111001" "0111001" "0111001" "0111010" "0111010" "0111010" "0111011" "0111011" "0111011" "0111100" "0111100" "0111100" "0111101" "0111101" "0111101" "0111110" "0111110" "0111110" "0111111" "0111111" "0111111" "1000000" "1000000" "1000000" "1000001" "1000001" "1000001" "1000010" "1000010" "1000010" "1000011" "1000011" "1000011" "1000100" "1000100" "1000100" "1000101" "1000101" "1000101" "1000110" "1000110" "1000110" "1000111" "1000111" "1000111" "1001000" "1001000" "1001000" "1001001" "1001001" "1001001" "1001010" "1001010" "1001010" "1001011" "1001011" "1001011" "1001100" "1001100" "1001100" "1001101" "1001101" "1001101" "1001110" "1001110" "1001110" "1001111" "1001111" "1001111" "1010000" "1010000" "1010000" "1010001" "1010001" "1010001" "1010010" "1010010" "1010010" "1010011" "1010011" "1010011" "1010100" "1010100" "1010100" "1010101" "1010101" "1010101" "1010110" "1010110" "1010110" "1010111" "1010111" "1010111" "1011000" "1011000" "1011000" "1011001" "1011001" "1011001" "1011010" "1011010" "1011010" "1011011" "1011011" "1011011" "1011100" "1011100" "1011100" "1011101" "1011101" "1011101" "1011110" "1011110" "1011110" "1011111" "1011111" "1011111" }
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
set ID 6
set hasByteEnable 0
set MemName dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0cud
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 14
set AddrRange 288
set AddrWd 9
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "11111111011100" "11111111101001" "00000111010010" "11111111111101" "11111111110111" "11111011100011" "00000000000011" "00000000010100" "11111111000101" "11111110010010" "00000001001010" "11100001000111" "11111111111101" "11111111011001" "11111101001100" "00000000000111" "00000001000111" "11110011000100" "00000001000011" "00000000111100" "11110110010110" "00000000110001" "11111111110111" "11111101000110" "00000000010100" "11111111101111" "00001001010011" "11111111100001" "00000000001111" "11110101110110" "00000000001000" "11111111100100" "11110110101110" "00000000101101" "00000000000111" "11100011101011" "00000000010100" "00000000101000" "00000010101000" "00000000001100" "11111110011011" "11110100001101" "00000001010100" "00000000011110" "11111001110100" "11111111110010" "11111111010011" "00000011000111" "00000000011001" "11111111011101" "11111100110000" "11111111111101" "11111111110011" "00000111110111" "00000000001100" "11111111101010" "11111111000011" "11111111111101" "11111111110111" "11011100101000" "11111111111100" "11111111110010" "11111110110011" "11111111111110" "00000000001010" "11110010010101" "11111111111100" "11111111110000" "11111000001001" "11111111011111" "11111111111101" "00000001010110" "11111111000110" "11111111110111" "11110110111101" "11111111101101" "11111111110111" "11111101000011" "11111111111011" "00000000011101" "11111110101011" "11111111001101" "11111111011111" "11111100000010" "11111111110101" "11111111000101" "11111100001000" "00000000011111" "11111111101110" "11110110110011" "00000000000011" "11111111111111" "00000110110110" "11111111110010" "00000000011000" "00001110001001" "11111101001010" "00000010011010" "11101001111000" "00000000011011" "11111111001000" "00010110010000" "11111111111000" "11111111001110" "11111000011111" "00000000101011" "00000000110011" "10111111010001" "00000000010110" "11111101011110" "11111110100011" "11111101110010" "00000010001001" "11110110110001" "00000000001100" "00000000000011" "00000100111111" "00000001010100" "11111111101010" "11101100011101" "11111111110110" "00000000010101" "11111011011010" "00000001111011" "11111101010101" "00010100011110" "00000001100000" "00000010110101" "11111100101010" "11111111101100" "11111001110001" "00000011101011" "11111110011000" "00000000100011" "11000011001101" "11111111001111" "11111110100000" "00000100011101" "00000000011010" "11111111110110" "11111011011000" "00000000011101" "11111110111101" "00001101001001" "00000000000001" "11111111100100" "00000111110110" "00000001111111" "00000000100101" "00000110010111" "00000000010100" "00000000101010" "11101000111000" "11111111000111" "00000000100101" "11110011011110" "00000000101001" "11111111111000" "00001101011010" "11111111011111" "00000000010000" "11111111111101" "11111110110010" "00000000000111" "00000001110000" "00000000101110" "11111110101000" "00000000110011" "00000000010000" "11111101001010" "00011001001100" "00000000100000" "00000010001000" "00010101101100" "11111111111110" "11111111111111" "11100011101010" "11111011110100" "11111110101111" "11111001000001" "11111111111111" "11111111110110" "11110100000010" "11111110010101" "00000000001010" "00010001010101" "11111111001010" "00000000110000" "11110110010000" "00000000101000" "11111111010001" "11110100000110" "11111111001110" "11111111010011" "11101000101100" "00000000011000" "00000000001100" "00000000000011" "11111111111001" "11111111011111" "00000100100110" "11111111110101" "00000000001010" "11110100011010" "11111111111011" "11111111001110" "00000000001000" "00000000111100" "00000000001101" "11100011001101" "11111111110000" "00000000001011" "00011011111011" "11111111101101" "11111111100011" "11111110000100" "00000000000110" "00000000000100" "11110101111001" "11111111101110" "11111111101101" "00000001110101" "11111111111110" "11111111100101" "00010000011111" "11111111011100" "00000000000100" "11100010110010" "00000000011111" "00000000001110" "11000000111001" "00000000101111" "00000001011010" "00100000110111" "11111111110011" "00000000100100" "11111100111001" "00000000001000" "11111111100001" "11110000010010" "11111110111101" "11111111100010" "00000110100011" "00000000001111" "11111111101101" "00000010001111" "11111111110010" "00000000000011" "11110111110011" "11111111110110" "11111111111111" "00011111011111" "00000000000110" "00000000011010" "00000110010000" "11111111111100" "11111111101010" "00001010111110" "00000000001111" "11111111011001" "11111011111000" "11111111111111" "00000000010101" "11110111001110" "00000000010011" "00000000101101" "11110001010010" "11111111111011" "00000000010100" "11111001101111" "11111111111100" "11111111110110" "11100110000010" "00000001000001" "11111111011010" "11110111101110" "11111111000101" "00000000011000" "11110111100100" "11111111111100" "00000000000110" "00000111100101" "11111111111100" "11111111110000" "00000000000101" "00000000001011" "11111111011110" "00000000001011" }
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

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name data_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename data_V \
    op interface \
    ports { data_V_address0 { O 2 vector } data_V_ce0 { O 1 bit } data_V_q0 { I 20 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'data_V'"
}
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


