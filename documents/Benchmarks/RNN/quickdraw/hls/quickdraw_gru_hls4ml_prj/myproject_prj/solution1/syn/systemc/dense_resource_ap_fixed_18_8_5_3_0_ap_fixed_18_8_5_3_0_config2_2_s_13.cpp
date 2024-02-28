#include "dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_tmp_4203_fu_458837_p4() {
    tmp_4203_fu_458837_p4 = wr2_V_q0.read().range(27557, 27540);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_tmp_4204_fu_459126_p4() {
    tmp_4204_fu_459126_p4 = wr2_V_q0.read().range(27575, 27558);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_tmp_4205_fu_459415_p4() {
    tmp_4205_fu_459415_p4 = wr2_V_q0.read().range(27593, 27576);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_tmp_4206_fu_459704_p4() {
    tmp_4206_fu_459704_p4 = wr2_V_q0.read().range(27611, 27594);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_tmp_4207_fu_459993_p4() {
    tmp_4207_fu_459993_p4 = wr2_V_q0.read().range(27629, 27612);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_tmp_s_fu_16948_p4() {
    tmp_s_fu_16948_p4 = wr2_V_q0.read().range(35, 18);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_trunc_ln56_fu_16661_p1() {
    trunc_ln56_fu_16661_p1 = wr2_V_q0.read().range(18-1, 0);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_w_index_fu_16570_p2() {
    w_index_fu_16570_p2 = (!ap_const_lv5_1.is_01() || !ap_phi_mux_w_index773_phi_fu_7855_p6.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(ap_phi_mux_w_index773_phi_fu_7855_p6.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_wr2_V_address0() {
    wr2_V_address0 =  (sc_lv<5>) (zext_ln56_fu_16576_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_wr2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        wr2_V_ce0 = ap_const_logic_1;
    } else {
        wr2_V_ce0 = ap_const_logic_0;
    }
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_zext_ln43_fu_16587_p1() {
    zext_ln43_fu_16587_p1 = esl_zext<6,5>(w_index773_reg_7851.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_zext_ln56_1_fu_16682_p1() {
    zext_ln56_1_fu_16682_p1 = esl_zext<7,5>(w_index773_reg_7851.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s::thread_zext_ln56_fu_16576_p1() {
    zext_ln56_fu_16576_p1 = esl_zext<64,5>(ap_phi_mux_w_index773_phi_fu_7855_p6.read());
}

}

