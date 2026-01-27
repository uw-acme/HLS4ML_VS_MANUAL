#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_451_V_read521_phi_phi_fu_79882_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_451_V_read521_phi_phi_fu_79882_p4 = ap_phi_mux_data_451_V_read521_rewind_phi_fu_35519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_451_V_read521_phi_phi_fu_79882_p4 = data_451_V_read.read();
        } else {
            ap_phi_mux_data_451_V_read521_phi_phi_fu_79882_p4 = ap_phi_reg_pp0_iter0_data_451_V_read521_phi_reg_79878.read();
        }
    } else {
        ap_phi_mux_data_451_V_read521_phi_phi_fu_79882_p4 = ap_phi_reg_pp0_iter0_data_451_V_read521_phi_reg_79878.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_451_V_read521_rewind_phi_fu_35519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_451_V_read521_rewind_phi_fu_35519_p6 = data_451_V_read521_phi_reg_79878.read();
    } else {
        ap_phi_mux_data_451_V_read521_rewind_phi_fu_35519_p6 = data_451_V_read521_rewind_reg_35515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_452_V_read522_phi_phi_fu_79895_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_452_V_read522_phi_phi_fu_79895_p4 = ap_phi_mux_data_452_V_read522_rewind_phi_fu_35533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_452_V_read522_phi_phi_fu_79895_p4 = data_452_V_read.read();
        } else {
            ap_phi_mux_data_452_V_read522_phi_phi_fu_79895_p4 = ap_phi_reg_pp0_iter0_data_452_V_read522_phi_reg_79891.read();
        }
    } else {
        ap_phi_mux_data_452_V_read522_phi_phi_fu_79895_p4 = ap_phi_reg_pp0_iter0_data_452_V_read522_phi_reg_79891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_452_V_read522_rewind_phi_fu_35533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_452_V_read522_rewind_phi_fu_35533_p6 = data_452_V_read522_phi_reg_79891.read();
    } else {
        ap_phi_mux_data_452_V_read522_rewind_phi_fu_35533_p6 = data_452_V_read522_rewind_reg_35529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_453_V_read523_phi_phi_fu_79908_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_453_V_read523_phi_phi_fu_79908_p4 = ap_phi_mux_data_453_V_read523_rewind_phi_fu_35547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_453_V_read523_phi_phi_fu_79908_p4 = data_453_V_read.read();
        } else {
            ap_phi_mux_data_453_V_read523_phi_phi_fu_79908_p4 = ap_phi_reg_pp0_iter0_data_453_V_read523_phi_reg_79904.read();
        }
    } else {
        ap_phi_mux_data_453_V_read523_phi_phi_fu_79908_p4 = ap_phi_reg_pp0_iter0_data_453_V_read523_phi_reg_79904.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_453_V_read523_rewind_phi_fu_35547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_453_V_read523_rewind_phi_fu_35547_p6 = data_453_V_read523_phi_reg_79904.read();
    } else {
        ap_phi_mux_data_453_V_read523_rewind_phi_fu_35547_p6 = data_453_V_read523_rewind_reg_35543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_454_V_read524_phi_phi_fu_79921_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_454_V_read524_phi_phi_fu_79921_p4 = ap_phi_mux_data_454_V_read524_rewind_phi_fu_35561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_454_V_read524_phi_phi_fu_79921_p4 = data_454_V_read.read();
        } else {
            ap_phi_mux_data_454_V_read524_phi_phi_fu_79921_p4 = ap_phi_reg_pp0_iter0_data_454_V_read524_phi_reg_79917.read();
        }
    } else {
        ap_phi_mux_data_454_V_read524_phi_phi_fu_79921_p4 = ap_phi_reg_pp0_iter0_data_454_V_read524_phi_reg_79917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_454_V_read524_rewind_phi_fu_35561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_454_V_read524_rewind_phi_fu_35561_p6 = data_454_V_read524_phi_reg_79917.read();
    } else {
        ap_phi_mux_data_454_V_read524_rewind_phi_fu_35561_p6 = data_454_V_read524_rewind_reg_35557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_455_V_read525_phi_phi_fu_79934_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_455_V_read525_phi_phi_fu_79934_p4 = ap_phi_mux_data_455_V_read525_rewind_phi_fu_35575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_455_V_read525_phi_phi_fu_79934_p4 = data_455_V_read.read();
        } else {
            ap_phi_mux_data_455_V_read525_phi_phi_fu_79934_p4 = ap_phi_reg_pp0_iter0_data_455_V_read525_phi_reg_79930.read();
        }
    } else {
        ap_phi_mux_data_455_V_read525_phi_phi_fu_79934_p4 = ap_phi_reg_pp0_iter0_data_455_V_read525_phi_reg_79930.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_455_V_read525_rewind_phi_fu_35575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_455_V_read525_rewind_phi_fu_35575_p6 = data_455_V_read525_phi_reg_79930.read();
    } else {
        ap_phi_mux_data_455_V_read525_rewind_phi_fu_35575_p6 = data_455_V_read525_rewind_reg_35571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_456_V_read526_phi_phi_fu_79947_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_456_V_read526_phi_phi_fu_79947_p4 = ap_phi_mux_data_456_V_read526_rewind_phi_fu_35589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_456_V_read526_phi_phi_fu_79947_p4 = data_456_V_read.read();
        } else {
            ap_phi_mux_data_456_V_read526_phi_phi_fu_79947_p4 = ap_phi_reg_pp0_iter0_data_456_V_read526_phi_reg_79943.read();
        }
    } else {
        ap_phi_mux_data_456_V_read526_phi_phi_fu_79947_p4 = ap_phi_reg_pp0_iter0_data_456_V_read526_phi_reg_79943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_456_V_read526_rewind_phi_fu_35589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_456_V_read526_rewind_phi_fu_35589_p6 = data_456_V_read526_phi_reg_79943.read();
    } else {
        ap_phi_mux_data_456_V_read526_rewind_phi_fu_35589_p6 = data_456_V_read526_rewind_reg_35585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_457_V_read527_phi_phi_fu_79960_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_457_V_read527_phi_phi_fu_79960_p4 = ap_phi_mux_data_457_V_read527_rewind_phi_fu_35603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_457_V_read527_phi_phi_fu_79960_p4 = data_457_V_read.read();
        } else {
            ap_phi_mux_data_457_V_read527_phi_phi_fu_79960_p4 = ap_phi_reg_pp0_iter0_data_457_V_read527_phi_reg_79956.read();
        }
    } else {
        ap_phi_mux_data_457_V_read527_phi_phi_fu_79960_p4 = ap_phi_reg_pp0_iter0_data_457_V_read527_phi_reg_79956.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_457_V_read527_rewind_phi_fu_35603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_457_V_read527_rewind_phi_fu_35603_p6 = data_457_V_read527_phi_reg_79956.read();
    } else {
        ap_phi_mux_data_457_V_read527_rewind_phi_fu_35603_p6 = data_457_V_read527_rewind_reg_35599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_458_V_read528_phi_phi_fu_79973_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_458_V_read528_phi_phi_fu_79973_p4 = ap_phi_mux_data_458_V_read528_rewind_phi_fu_35617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_458_V_read528_phi_phi_fu_79973_p4 = data_458_V_read.read();
        } else {
            ap_phi_mux_data_458_V_read528_phi_phi_fu_79973_p4 = ap_phi_reg_pp0_iter0_data_458_V_read528_phi_reg_79969.read();
        }
    } else {
        ap_phi_mux_data_458_V_read528_phi_phi_fu_79973_p4 = ap_phi_reg_pp0_iter0_data_458_V_read528_phi_reg_79969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_458_V_read528_rewind_phi_fu_35617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_458_V_read528_rewind_phi_fu_35617_p6 = data_458_V_read528_phi_reg_79969.read();
    } else {
        ap_phi_mux_data_458_V_read528_rewind_phi_fu_35617_p6 = data_458_V_read528_rewind_reg_35613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_459_V_read529_phi_phi_fu_79986_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_459_V_read529_phi_phi_fu_79986_p4 = ap_phi_mux_data_459_V_read529_rewind_phi_fu_35631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_459_V_read529_phi_phi_fu_79986_p4 = data_459_V_read.read();
        } else {
            ap_phi_mux_data_459_V_read529_phi_phi_fu_79986_p4 = ap_phi_reg_pp0_iter0_data_459_V_read529_phi_reg_79982.read();
        }
    } else {
        ap_phi_mux_data_459_V_read529_phi_phi_fu_79986_p4 = ap_phi_reg_pp0_iter0_data_459_V_read529_phi_reg_79982.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_459_V_read529_rewind_phi_fu_35631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_459_V_read529_rewind_phi_fu_35631_p6 = data_459_V_read529_phi_reg_79982.read();
    } else {
        ap_phi_mux_data_459_V_read529_rewind_phi_fu_35631_p6 = data_459_V_read529_rewind_reg_35627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_45_V_read115_phi_phi_fu_74604_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_45_V_read115_phi_phi_fu_74604_p4 = ap_phi_mux_data_45_V_read115_rewind_phi_fu_29835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_45_V_read115_phi_phi_fu_74604_p4 = data_45_V_read.read();
        } else {
            ap_phi_mux_data_45_V_read115_phi_phi_fu_74604_p4 = ap_phi_reg_pp0_iter0_data_45_V_read115_phi_reg_74600.read();
        }
    } else {
        ap_phi_mux_data_45_V_read115_phi_phi_fu_74604_p4 = ap_phi_reg_pp0_iter0_data_45_V_read115_phi_reg_74600.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_45_V_read115_rewind_phi_fu_29835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_45_V_read115_rewind_phi_fu_29835_p6 = data_45_V_read115_phi_reg_74600.read();
    } else {
        ap_phi_mux_data_45_V_read115_rewind_phi_fu_29835_p6 = data_45_V_read115_rewind_reg_29831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_460_V_read530_phi_phi_fu_79999_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_460_V_read530_phi_phi_fu_79999_p4 = ap_phi_mux_data_460_V_read530_rewind_phi_fu_35645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_460_V_read530_phi_phi_fu_79999_p4 = data_460_V_read.read();
        } else {
            ap_phi_mux_data_460_V_read530_phi_phi_fu_79999_p4 = ap_phi_reg_pp0_iter0_data_460_V_read530_phi_reg_79995.read();
        }
    } else {
        ap_phi_mux_data_460_V_read530_phi_phi_fu_79999_p4 = ap_phi_reg_pp0_iter0_data_460_V_read530_phi_reg_79995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_460_V_read530_rewind_phi_fu_35645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_460_V_read530_rewind_phi_fu_35645_p6 = data_460_V_read530_phi_reg_79995.read();
    } else {
        ap_phi_mux_data_460_V_read530_rewind_phi_fu_35645_p6 = data_460_V_read530_rewind_reg_35641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_461_V_read531_phi_phi_fu_80012_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_461_V_read531_phi_phi_fu_80012_p4 = ap_phi_mux_data_461_V_read531_rewind_phi_fu_35659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_461_V_read531_phi_phi_fu_80012_p4 = data_461_V_read.read();
        } else {
            ap_phi_mux_data_461_V_read531_phi_phi_fu_80012_p4 = ap_phi_reg_pp0_iter0_data_461_V_read531_phi_reg_80008.read();
        }
    } else {
        ap_phi_mux_data_461_V_read531_phi_phi_fu_80012_p4 = ap_phi_reg_pp0_iter0_data_461_V_read531_phi_reg_80008.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_461_V_read531_rewind_phi_fu_35659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_461_V_read531_rewind_phi_fu_35659_p6 = data_461_V_read531_phi_reg_80008.read();
    } else {
        ap_phi_mux_data_461_V_read531_rewind_phi_fu_35659_p6 = data_461_V_read531_rewind_reg_35655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_462_V_read532_phi_phi_fu_80025_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_462_V_read532_phi_phi_fu_80025_p4 = ap_phi_mux_data_462_V_read532_rewind_phi_fu_35673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_462_V_read532_phi_phi_fu_80025_p4 = data_462_V_read.read();
        } else {
            ap_phi_mux_data_462_V_read532_phi_phi_fu_80025_p4 = ap_phi_reg_pp0_iter0_data_462_V_read532_phi_reg_80021.read();
        }
    } else {
        ap_phi_mux_data_462_V_read532_phi_phi_fu_80025_p4 = ap_phi_reg_pp0_iter0_data_462_V_read532_phi_reg_80021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_462_V_read532_rewind_phi_fu_35673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_462_V_read532_rewind_phi_fu_35673_p6 = data_462_V_read532_phi_reg_80021.read();
    } else {
        ap_phi_mux_data_462_V_read532_rewind_phi_fu_35673_p6 = data_462_V_read532_rewind_reg_35669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_463_V_read533_phi_phi_fu_80038_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_463_V_read533_phi_phi_fu_80038_p4 = ap_phi_mux_data_463_V_read533_rewind_phi_fu_35687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_463_V_read533_phi_phi_fu_80038_p4 = data_463_V_read.read();
        } else {
            ap_phi_mux_data_463_V_read533_phi_phi_fu_80038_p4 = ap_phi_reg_pp0_iter0_data_463_V_read533_phi_reg_80034.read();
        }
    } else {
        ap_phi_mux_data_463_V_read533_phi_phi_fu_80038_p4 = ap_phi_reg_pp0_iter0_data_463_V_read533_phi_reg_80034.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_463_V_read533_rewind_phi_fu_35687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_463_V_read533_rewind_phi_fu_35687_p6 = data_463_V_read533_phi_reg_80034.read();
    } else {
        ap_phi_mux_data_463_V_read533_rewind_phi_fu_35687_p6 = data_463_V_read533_rewind_reg_35683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_464_V_read534_phi_phi_fu_80051_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_464_V_read534_phi_phi_fu_80051_p4 = ap_phi_mux_data_464_V_read534_rewind_phi_fu_35701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_464_V_read534_phi_phi_fu_80051_p4 = data_464_V_read.read();
        } else {
            ap_phi_mux_data_464_V_read534_phi_phi_fu_80051_p4 = ap_phi_reg_pp0_iter0_data_464_V_read534_phi_reg_80047.read();
        }
    } else {
        ap_phi_mux_data_464_V_read534_phi_phi_fu_80051_p4 = ap_phi_reg_pp0_iter0_data_464_V_read534_phi_reg_80047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_464_V_read534_rewind_phi_fu_35701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_464_V_read534_rewind_phi_fu_35701_p6 = data_464_V_read534_phi_reg_80047.read();
    } else {
        ap_phi_mux_data_464_V_read534_rewind_phi_fu_35701_p6 = data_464_V_read534_rewind_reg_35697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_465_V_read535_phi_phi_fu_80064_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_465_V_read535_phi_phi_fu_80064_p4 = ap_phi_mux_data_465_V_read535_rewind_phi_fu_35715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_465_V_read535_phi_phi_fu_80064_p4 = data_465_V_read.read();
        } else {
            ap_phi_mux_data_465_V_read535_phi_phi_fu_80064_p4 = ap_phi_reg_pp0_iter0_data_465_V_read535_phi_reg_80060.read();
        }
    } else {
        ap_phi_mux_data_465_V_read535_phi_phi_fu_80064_p4 = ap_phi_reg_pp0_iter0_data_465_V_read535_phi_reg_80060.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_465_V_read535_rewind_phi_fu_35715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_465_V_read535_rewind_phi_fu_35715_p6 = data_465_V_read535_phi_reg_80060.read();
    } else {
        ap_phi_mux_data_465_V_read535_rewind_phi_fu_35715_p6 = data_465_V_read535_rewind_reg_35711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_466_V_read536_phi_phi_fu_80077_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_466_V_read536_phi_phi_fu_80077_p4 = ap_phi_mux_data_466_V_read536_rewind_phi_fu_35729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_466_V_read536_phi_phi_fu_80077_p4 = data_466_V_read.read();
        } else {
            ap_phi_mux_data_466_V_read536_phi_phi_fu_80077_p4 = ap_phi_reg_pp0_iter0_data_466_V_read536_phi_reg_80073.read();
        }
    } else {
        ap_phi_mux_data_466_V_read536_phi_phi_fu_80077_p4 = ap_phi_reg_pp0_iter0_data_466_V_read536_phi_reg_80073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_466_V_read536_rewind_phi_fu_35729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_466_V_read536_rewind_phi_fu_35729_p6 = data_466_V_read536_phi_reg_80073.read();
    } else {
        ap_phi_mux_data_466_V_read536_rewind_phi_fu_35729_p6 = data_466_V_read536_rewind_reg_35725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_467_V_read537_phi_phi_fu_80090_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_467_V_read537_phi_phi_fu_80090_p4 = ap_phi_mux_data_467_V_read537_rewind_phi_fu_35743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_467_V_read537_phi_phi_fu_80090_p4 = data_467_V_read.read();
        } else {
            ap_phi_mux_data_467_V_read537_phi_phi_fu_80090_p4 = ap_phi_reg_pp0_iter0_data_467_V_read537_phi_reg_80086.read();
        }
    } else {
        ap_phi_mux_data_467_V_read537_phi_phi_fu_80090_p4 = ap_phi_reg_pp0_iter0_data_467_V_read537_phi_reg_80086.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_467_V_read537_rewind_phi_fu_35743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_467_V_read537_rewind_phi_fu_35743_p6 = data_467_V_read537_phi_reg_80086.read();
    } else {
        ap_phi_mux_data_467_V_read537_rewind_phi_fu_35743_p6 = data_467_V_read537_rewind_reg_35739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_468_V_read538_phi_phi_fu_80103_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_468_V_read538_phi_phi_fu_80103_p4 = ap_phi_mux_data_468_V_read538_rewind_phi_fu_35757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_468_V_read538_phi_phi_fu_80103_p4 = data_468_V_read.read();
        } else {
            ap_phi_mux_data_468_V_read538_phi_phi_fu_80103_p4 = ap_phi_reg_pp0_iter0_data_468_V_read538_phi_reg_80099.read();
        }
    } else {
        ap_phi_mux_data_468_V_read538_phi_phi_fu_80103_p4 = ap_phi_reg_pp0_iter0_data_468_V_read538_phi_reg_80099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_468_V_read538_rewind_phi_fu_35757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_468_V_read538_rewind_phi_fu_35757_p6 = data_468_V_read538_phi_reg_80099.read();
    } else {
        ap_phi_mux_data_468_V_read538_rewind_phi_fu_35757_p6 = data_468_V_read538_rewind_reg_35753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_469_V_read539_phi_phi_fu_80116_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_469_V_read539_phi_phi_fu_80116_p4 = ap_phi_mux_data_469_V_read539_rewind_phi_fu_35771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_469_V_read539_phi_phi_fu_80116_p4 = data_469_V_read.read();
        } else {
            ap_phi_mux_data_469_V_read539_phi_phi_fu_80116_p4 = ap_phi_reg_pp0_iter0_data_469_V_read539_phi_reg_80112.read();
        }
    } else {
        ap_phi_mux_data_469_V_read539_phi_phi_fu_80116_p4 = ap_phi_reg_pp0_iter0_data_469_V_read539_phi_reg_80112.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_469_V_read539_rewind_phi_fu_35771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_469_V_read539_rewind_phi_fu_35771_p6 = data_469_V_read539_phi_reg_80112.read();
    } else {
        ap_phi_mux_data_469_V_read539_rewind_phi_fu_35771_p6 = data_469_V_read539_rewind_reg_35767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_46_V_read116_phi_phi_fu_74617_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_46_V_read116_phi_phi_fu_74617_p4 = ap_phi_mux_data_46_V_read116_rewind_phi_fu_29849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_46_V_read116_phi_phi_fu_74617_p4 = data_46_V_read.read();
        } else {
            ap_phi_mux_data_46_V_read116_phi_phi_fu_74617_p4 = ap_phi_reg_pp0_iter0_data_46_V_read116_phi_reg_74613.read();
        }
    } else {
        ap_phi_mux_data_46_V_read116_phi_phi_fu_74617_p4 = ap_phi_reg_pp0_iter0_data_46_V_read116_phi_reg_74613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_46_V_read116_rewind_phi_fu_29849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_46_V_read116_rewind_phi_fu_29849_p6 = data_46_V_read116_phi_reg_74613.read();
    } else {
        ap_phi_mux_data_46_V_read116_rewind_phi_fu_29849_p6 = data_46_V_read116_rewind_reg_29845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_470_V_read540_phi_phi_fu_80129_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_470_V_read540_phi_phi_fu_80129_p4 = ap_phi_mux_data_470_V_read540_rewind_phi_fu_35785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_470_V_read540_phi_phi_fu_80129_p4 = data_470_V_read.read();
        } else {
            ap_phi_mux_data_470_V_read540_phi_phi_fu_80129_p4 = ap_phi_reg_pp0_iter0_data_470_V_read540_phi_reg_80125.read();
        }
    } else {
        ap_phi_mux_data_470_V_read540_phi_phi_fu_80129_p4 = ap_phi_reg_pp0_iter0_data_470_V_read540_phi_reg_80125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_470_V_read540_rewind_phi_fu_35785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_470_V_read540_rewind_phi_fu_35785_p6 = data_470_V_read540_phi_reg_80125.read();
    } else {
        ap_phi_mux_data_470_V_read540_rewind_phi_fu_35785_p6 = data_470_V_read540_rewind_reg_35781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_471_V_read541_phi_phi_fu_80142_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_471_V_read541_phi_phi_fu_80142_p4 = ap_phi_mux_data_471_V_read541_rewind_phi_fu_35799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_471_V_read541_phi_phi_fu_80142_p4 = data_471_V_read.read();
        } else {
            ap_phi_mux_data_471_V_read541_phi_phi_fu_80142_p4 = ap_phi_reg_pp0_iter0_data_471_V_read541_phi_reg_80138.read();
        }
    } else {
        ap_phi_mux_data_471_V_read541_phi_phi_fu_80142_p4 = ap_phi_reg_pp0_iter0_data_471_V_read541_phi_reg_80138.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_471_V_read541_rewind_phi_fu_35799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_471_V_read541_rewind_phi_fu_35799_p6 = data_471_V_read541_phi_reg_80138.read();
    } else {
        ap_phi_mux_data_471_V_read541_rewind_phi_fu_35799_p6 = data_471_V_read541_rewind_reg_35795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_472_V_read542_phi_phi_fu_80155_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_472_V_read542_phi_phi_fu_80155_p4 = ap_phi_mux_data_472_V_read542_rewind_phi_fu_35813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_472_V_read542_phi_phi_fu_80155_p4 = data_472_V_read.read();
        } else {
            ap_phi_mux_data_472_V_read542_phi_phi_fu_80155_p4 = ap_phi_reg_pp0_iter0_data_472_V_read542_phi_reg_80151.read();
        }
    } else {
        ap_phi_mux_data_472_V_read542_phi_phi_fu_80155_p4 = ap_phi_reg_pp0_iter0_data_472_V_read542_phi_reg_80151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_472_V_read542_rewind_phi_fu_35813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_472_V_read542_rewind_phi_fu_35813_p6 = data_472_V_read542_phi_reg_80151.read();
    } else {
        ap_phi_mux_data_472_V_read542_rewind_phi_fu_35813_p6 = data_472_V_read542_rewind_reg_35809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_473_V_read543_phi_phi_fu_80168_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_473_V_read543_phi_phi_fu_80168_p4 = ap_phi_mux_data_473_V_read543_rewind_phi_fu_35827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_473_V_read543_phi_phi_fu_80168_p4 = data_473_V_read.read();
        } else {
            ap_phi_mux_data_473_V_read543_phi_phi_fu_80168_p4 = ap_phi_reg_pp0_iter0_data_473_V_read543_phi_reg_80164.read();
        }
    } else {
        ap_phi_mux_data_473_V_read543_phi_phi_fu_80168_p4 = ap_phi_reg_pp0_iter0_data_473_V_read543_phi_reg_80164.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_473_V_read543_rewind_phi_fu_35827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_473_V_read543_rewind_phi_fu_35827_p6 = data_473_V_read543_phi_reg_80164.read();
    } else {
        ap_phi_mux_data_473_V_read543_rewind_phi_fu_35827_p6 = data_473_V_read543_rewind_reg_35823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_474_V_read544_phi_phi_fu_80181_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_474_V_read544_phi_phi_fu_80181_p4 = ap_phi_mux_data_474_V_read544_rewind_phi_fu_35841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_474_V_read544_phi_phi_fu_80181_p4 = data_474_V_read.read();
        } else {
            ap_phi_mux_data_474_V_read544_phi_phi_fu_80181_p4 = ap_phi_reg_pp0_iter0_data_474_V_read544_phi_reg_80177.read();
        }
    } else {
        ap_phi_mux_data_474_V_read544_phi_phi_fu_80181_p4 = ap_phi_reg_pp0_iter0_data_474_V_read544_phi_reg_80177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_474_V_read544_rewind_phi_fu_35841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_474_V_read544_rewind_phi_fu_35841_p6 = data_474_V_read544_phi_reg_80177.read();
    } else {
        ap_phi_mux_data_474_V_read544_rewind_phi_fu_35841_p6 = data_474_V_read544_rewind_reg_35837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_475_V_read545_phi_phi_fu_80194_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_475_V_read545_phi_phi_fu_80194_p4 = ap_phi_mux_data_475_V_read545_rewind_phi_fu_35855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_475_V_read545_phi_phi_fu_80194_p4 = data_475_V_read.read();
        } else {
            ap_phi_mux_data_475_V_read545_phi_phi_fu_80194_p4 = ap_phi_reg_pp0_iter0_data_475_V_read545_phi_reg_80190.read();
        }
    } else {
        ap_phi_mux_data_475_V_read545_phi_phi_fu_80194_p4 = ap_phi_reg_pp0_iter0_data_475_V_read545_phi_reg_80190.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_475_V_read545_rewind_phi_fu_35855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_475_V_read545_rewind_phi_fu_35855_p6 = data_475_V_read545_phi_reg_80190.read();
    } else {
        ap_phi_mux_data_475_V_read545_rewind_phi_fu_35855_p6 = data_475_V_read545_rewind_reg_35851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_476_V_read546_phi_phi_fu_80207_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_476_V_read546_phi_phi_fu_80207_p4 = ap_phi_mux_data_476_V_read546_rewind_phi_fu_35869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_476_V_read546_phi_phi_fu_80207_p4 = data_476_V_read.read();
        } else {
            ap_phi_mux_data_476_V_read546_phi_phi_fu_80207_p4 = ap_phi_reg_pp0_iter0_data_476_V_read546_phi_reg_80203.read();
        }
    } else {
        ap_phi_mux_data_476_V_read546_phi_phi_fu_80207_p4 = ap_phi_reg_pp0_iter0_data_476_V_read546_phi_reg_80203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_476_V_read546_rewind_phi_fu_35869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_476_V_read546_rewind_phi_fu_35869_p6 = data_476_V_read546_phi_reg_80203.read();
    } else {
        ap_phi_mux_data_476_V_read546_rewind_phi_fu_35869_p6 = data_476_V_read546_rewind_reg_35865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_477_V_read547_phi_phi_fu_80220_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_477_V_read547_phi_phi_fu_80220_p4 = ap_phi_mux_data_477_V_read547_rewind_phi_fu_35883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_477_V_read547_phi_phi_fu_80220_p4 = data_477_V_read.read();
        } else {
            ap_phi_mux_data_477_V_read547_phi_phi_fu_80220_p4 = ap_phi_reg_pp0_iter0_data_477_V_read547_phi_reg_80216.read();
        }
    } else {
        ap_phi_mux_data_477_V_read547_phi_phi_fu_80220_p4 = ap_phi_reg_pp0_iter0_data_477_V_read547_phi_reg_80216.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_477_V_read547_rewind_phi_fu_35883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_477_V_read547_rewind_phi_fu_35883_p6 = data_477_V_read547_phi_reg_80216.read();
    } else {
        ap_phi_mux_data_477_V_read547_rewind_phi_fu_35883_p6 = data_477_V_read547_rewind_reg_35879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_478_V_read548_phi_phi_fu_80233_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_478_V_read548_phi_phi_fu_80233_p4 = ap_phi_mux_data_478_V_read548_rewind_phi_fu_35897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_478_V_read548_phi_phi_fu_80233_p4 = data_478_V_read.read();
        } else {
            ap_phi_mux_data_478_V_read548_phi_phi_fu_80233_p4 = ap_phi_reg_pp0_iter0_data_478_V_read548_phi_reg_80229.read();
        }
    } else {
        ap_phi_mux_data_478_V_read548_phi_phi_fu_80233_p4 = ap_phi_reg_pp0_iter0_data_478_V_read548_phi_reg_80229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_478_V_read548_rewind_phi_fu_35897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_478_V_read548_rewind_phi_fu_35897_p6 = data_478_V_read548_phi_reg_80229.read();
    } else {
        ap_phi_mux_data_478_V_read548_rewind_phi_fu_35897_p6 = data_478_V_read548_rewind_reg_35893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_479_V_read549_phi_phi_fu_80246_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_479_V_read549_phi_phi_fu_80246_p4 = ap_phi_mux_data_479_V_read549_rewind_phi_fu_35911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_479_V_read549_phi_phi_fu_80246_p4 = data_479_V_read.read();
        } else {
            ap_phi_mux_data_479_V_read549_phi_phi_fu_80246_p4 = ap_phi_reg_pp0_iter0_data_479_V_read549_phi_reg_80242.read();
        }
    } else {
        ap_phi_mux_data_479_V_read549_phi_phi_fu_80246_p4 = ap_phi_reg_pp0_iter0_data_479_V_read549_phi_reg_80242.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_479_V_read549_rewind_phi_fu_35911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_479_V_read549_rewind_phi_fu_35911_p6 = data_479_V_read549_phi_reg_80242.read();
    } else {
        ap_phi_mux_data_479_V_read549_rewind_phi_fu_35911_p6 = data_479_V_read549_rewind_reg_35907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_47_V_read117_phi_phi_fu_74630_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_47_V_read117_phi_phi_fu_74630_p4 = ap_phi_mux_data_47_V_read117_rewind_phi_fu_29863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_47_V_read117_phi_phi_fu_74630_p4 = data_47_V_read.read();
        } else {
            ap_phi_mux_data_47_V_read117_phi_phi_fu_74630_p4 = ap_phi_reg_pp0_iter0_data_47_V_read117_phi_reg_74626.read();
        }
    } else {
        ap_phi_mux_data_47_V_read117_phi_phi_fu_74630_p4 = ap_phi_reg_pp0_iter0_data_47_V_read117_phi_reg_74626.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_47_V_read117_rewind_phi_fu_29863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_47_V_read117_rewind_phi_fu_29863_p6 = data_47_V_read117_phi_reg_74626.read();
    } else {
        ap_phi_mux_data_47_V_read117_rewind_phi_fu_29863_p6 = data_47_V_read117_rewind_reg_29859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_480_V_read550_phi_phi_fu_80259_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_480_V_read550_phi_phi_fu_80259_p4 = ap_phi_mux_data_480_V_read550_rewind_phi_fu_35925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_480_V_read550_phi_phi_fu_80259_p4 = data_480_V_read.read();
        } else {
            ap_phi_mux_data_480_V_read550_phi_phi_fu_80259_p4 = ap_phi_reg_pp0_iter0_data_480_V_read550_phi_reg_80255.read();
        }
    } else {
        ap_phi_mux_data_480_V_read550_phi_phi_fu_80259_p4 = ap_phi_reg_pp0_iter0_data_480_V_read550_phi_reg_80255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_480_V_read550_rewind_phi_fu_35925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_480_V_read550_rewind_phi_fu_35925_p6 = data_480_V_read550_phi_reg_80255.read();
    } else {
        ap_phi_mux_data_480_V_read550_rewind_phi_fu_35925_p6 = data_480_V_read550_rewind_reg_35921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_481_V_read551_phi_phi_fu_80272_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_481_V_read551_phi_phi_fu_80272_p4 = ap_phi_mux_data_481_V_read551_rewind_phi_fu_35939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_481_V_read551_phi_phi_fu_80272_p4 = data_481_V_read.read();
        } else {
            ap_phi_mux_data_481_V_read551_phi_phi_fu_80272_p4 = ap_phi_reg_pp0_iter0_data_481_V_read551_phi_reg_80268.read();
        }
    } else {
        ap_phi_mux_data_481_V_read551_phi_phi_fu_80272_p4 = ap_phi_reg_pp0_iter0_data_481_V_read551_phi_reg_80268.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_481_V_read551_rewind_phi_fu_35939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_481_V_read551_rewind_phi_fu_35939_p6 = data_481_V_read551_phi_reg_80268.read();
    } else {
        ap_phi_mux_data_481_V_read551_rewind_phi_fu_35939_p6 = data_481_V_read551_rewind_reg_35935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_482_V_read552_phi_phi_fu_80285_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_482_V_read552_phi_phi_fu_80285_p4 = ap_phi_mux_data_482_V_read552_rewind_phi_fu_35953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_482_V_read552_phi_phi_fu_80285_p4 = data_482_V_read.read();
        } else {
            ap_phi_mux_data_482_V_read552_phi_phi_fu_80285_p4 = ap_phi_reg_pp0_iter0_data_482_V_read552_phi_reg_80281.read();
        }
    } else {
        ap_phi_mux_data_482_V_read552_phi_phi_fu_80285_p4 = ap_phi_reg_pp0_iter0_data_482_V_read552_phi_reg_80281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_482_V_read552_rewind_phi_fu_35953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_482_V_read552_rewind_phi_fu_35953_p6 = data_482_V_read552_phi_reg_80281.read();
    } else {
        ap_phi_mux_data_482_V_read552_rewind_phi_fu_35953_p6 = data_482_V_read552_rewind_reg_35949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_483_V_read553_phi_phi_fu_80298_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_483_V_read553_phi_phi_fu_80298_p4 = ap_phi_mux_data_483_V_read553_rewind_phi_fu_35967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_483_V_read553_phi_phi_fu_80298_p4 = data_483_V_read.read();
        } else {
            ap_phi_mux_data_483_V_read553_phi_phi_fu_80298_p4 = ap_phi_reg_pp0_iter0_data_483_V_read553_phi_reg_80294.read();
        }
    } else {
        ap_phi_mux_data_483_V_read553_phi_phi_fu_80298_p4 = ap_phi_reg_pp0_iter0_data_483_V_read553_phi_reg_80294.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_483_V_read553_rewind_phi_fu_35967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_483_V_read553_rewind_phi_fu_35967_p6 = data_483_V_read553_phi_reg_80294.read();
    } else {
        ap_phi_mux_data_483_V_read553_rewind_phi_fu_35967_p6 = data_483_V_read553_rewind_reg_35963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_484_V_read554_phi_phi_fu_80311_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_484_V_read554_phi_phi_fu_80311_p4 = ap_phi_mux_data_484_V_read554_rewind_phi_fu_35981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_484_V_read554_phi_phi_fu_80311_p4 = data_484_V_read.read();
        } else {
            ap_phi_mux_data_484_V_read554_phi_phi_fu_80311_p4 = ap_phi_reg_pp0_iter0_data_484_V_read554_phi_reg_80307.read();
        }
    } else {
        ap_phi_mux_data_484_V_read554_phi_phi_fu_80311_p4 = ap_phi_reg_pp0_iter0_data_484_V_read554_phi_reg_80307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_484_V_read554_rewind_phi_fu_35981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_484_V_read554_rewind_phi_fu_35981_p6 = data_484_V_read554_phi_reg_80307.read();
    } else {
        ap_phi_mux_data_484_V_read554_rewind_phi_fu_35981_p6 = data_484_V_read554_rewind_reg_35977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_485_V_read555_phi_phi_fu_80324_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_485_V_read555_phi_phi_fu_80324_p4 = ap_phi_mux_data_485_V_read555_rewind_phi_fu_35995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_485_V_read555_phi_phi_fu_80324_p4 = data_485_V_read.read();
        } else {
            ap_phi_mux_data_485_V_read555_phi_phi_fu_80324_p4 = ap_phi_reg_pp0_iter0_data_485_V_read555_phi_reg_80320.read();
        }
    } else {
        ap_phi_mux_data_485_V_read555_phi_phi_fu_80324_p4 = ap_phi_reg_pp0_iter0_data_485_V_read555_phi_reg_80320.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_485_V_read555_rewind_phi_fu_35995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_485_V_read555_rewind_phi_fu_35995_p6 = data_485_V_read555_phi_reg_80320.read();
    } else {
        ap_phi_mux_data_485_V_read555_rewind_phi_fu_35995_p6 = data_485_V_read555_rewind_reg_35991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_486_V_read556_phi_phi_fu_80337_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_486_V_read556_phi_phi_fu_80337_p4 = ap_phi_mux_data_486_V_read556_rewind_phi_fu_36009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_486_V_read556_phi_phi_fu_80337_p4 = data_486_V_read.read();
        } else {
            ap_phi_mux_data_486_V_read556_phi_phi_fu_80337_p4 = ap_phi_reg_pp0_iter0_data_486_V_read556_phi_reg_80333.read();
        }
    } else {
        ap_phi_mux_data_486_V_read556_phi_phi_fu_80337_p4 = ap_phi_reg_pp0_iter0_data_486_V_read556_phi_reg_80333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_486_V_read556_rewind_phi_fu_36009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_486_V_read556_rewind_phi_fu_36009_p6 = data_486_V_read556_phi_reg_80333.read();
    } else {
        ap_phi_mux_data_486_V_read556_rewind_phi_fu_36009_p6 = data_486_V_read556_rewind_reg_36005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_487_V_read557_phi_phi_fu_80350_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_487_V_read557_phi_phi_fu_80350_p4 = ap_phi_mux_data_487_V_read557_rewind_phi_fu_36023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_487_V_read557_phi_phi_fu_80350_p4 = data_487_V_read.read();
        } else {
            ap_phi_mux_data_487_V_read557_phi_phi_fu_80350_p4 = ap_phi_reg_pp0_iter0_data_487_V_read557_phi_reg_80346.read();
        }
    } else {
        ap_phi_mux_data_487_V_read557_phi_phi_fu_80350_p4 = ap_phi_reg_pp0_iter0_data_487_V_read557_phi_reg_80346.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_487_V_read557_rewind_phi_fu_36023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_487_V_read557_rewind_phi_fu_36023_p6 = data_487_V_read557_phi_reg_80346.read();
    } else {
        ap_phi_mux_data_487_V_read557_rewind_phi_fu_36023_p6 = data_487_V_read557_rewind_reg_36019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_488_V_read558_phi_phi_fu_80363_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_488_V_read558_phi_phi_fu_80363_p4 = ap_phi_mux_data_488_V_read558_rewind_phi_fu_36037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_488_V_read558_phi_phi_fu_80363_p4 = data_488_V_read.read();
        } else {
            ap_phi_mux_data_488_V_read558_phi_phi_fu_80363_p4 = ap_phi_reg_pp0_iter0_data_488_V_read558_phi_reg_80359.read();
        }
    } else {
        ap_phi_mux_data_488_V_read558_phi_phi_fu_80363_p4 = ap_phi_reg_pp0_iter0_data_488_V_read558_phi_reg_80359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_488_V_read558_rewind_phi_fu_36037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_488_V_read558_rewind_phi_fu_36037_p6 = data_488_V_read558_phi_reg_80359.read();
    } else {
        ap_phi_mux_data_488_V_read558_rewind_phi_fu_36037_p6 = data_488_V_read558_rewind_reg_36033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_489_V_read559_phi_phi_fu_80376_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_489_V_read559_phi_phi_fu_80376_p4 = ap_phi_mux_data_489_V_read559_rewind_phi_fu_36051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_489_V_read559_phi_phi_fu_80376_p4 = data_489_V_read.read();
        } else {
            ap_phi_mux_data_489_V_read559_phi_phi_fu_80376_p4 = ap_phi_reg_pp0_iter0_data_489_V_read559_phi_reg_80372.read();
        }
    } else {
        ap_phi_mux_data_489_V_read559_phi_phi_fu_80376_p4 = ap_phi_reg_pp0_iter0_data_489_V_read559_phi_reg_80372.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_489_V_read559_rewind_phi_fu_36051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_489_V_read559_rewind_phi_fu_36051_p6 = data_489_V_read559_phi_reg_80372.read();
    } else {
        ap_phi_mux_data_489_V_read559_rewind_phi_fu_36051_p6 = data_489_V_read559_rewind_reg_36047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_48_V_read118_phi_phi_fu_74643_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_48_V_read118_phi_phi_fu_74643_p4 = ap_phi_mux_data_48_V_read118_rewind_phi_fu_29877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_48_V_read118_phi_phi_fu_74643_p4 = data_48_V_read.read();
        } else {
            ap_phi_mux_data_48_V_read118_phi_phi_fu_74643_p4 = ap_phi_reg_pp0_iter0_data_48_V_read118_phi_reg_74639.read();
        }
    } else {
        ap_phi_mux_data_48_V_read118_phi_phi_fu_74643_p4 = ap_phi_reg_pp0_iter0_data_48_V_read118_phi_reg_74639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_48_V_read118_rewind_phi_fu_29877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_48_V_read118_rewind_phi_fu_29877_p6 = data_48_V_read118_phi_reg_74639.read();
    } else {
        ap_phi_mux_data_48_V_read118_rewind_phi_fu_29877_p6 = data_48_V_read118_rewind_reg_29873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_490_V_read560_phi_phi_fu_80389_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_490_V_read560_phi_phi_fu_80389_p4 = ap_phi_mux_data_490_V_read560_rewind_phi_fu_36065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_490_V_read560_phi_phi_fu_80389_p4 = data_490_V_read.read();
        } else {
            ap_phi_mux_data_490_V_read560_phi_phi_fu_80389_p4 = ap_phi_reg_pp0_iter0_data_490_V_read560_phi_reg_80385.read();
        }
    } else {
        ap_phi_mux_data_490_V_read560_phi_phi_fu_80389_p4 = ap_phi_reg_pp0_iter0_data_490_V_read560_phi_reg_80385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_490_V_read560_rewind_phi_fu_36065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_490_V_read560_rewind_phi_fu_36065_p6 = data_490_V_read560_phi_reg_80385.read();
    } else {
        ap_phi_mux_data_490_V_read560_rewind_phi_fu_36065_p6 = data_490_V_read560_rewind_reg_36061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_491_V_read561_phi_phi_fu_80402_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_491_V_read561_phi_phi_fu_80402_p4 = ap_phi_mux_data_491_V_read561_rewind_phi_fu_36079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_491_V_read561_phi_phi_fu_80402_p4 = data_491_V_read.read();
        } else {
            ap_phi_mux_data_491_V_read561_phi_phi_fu_80402_p4 = ap_phi_reg_pp0_iter0_data_491_V_read561_phi_reg_80398.read();
        }
    } else {
        ap_phi_mux_data_491_V_read561_phi_phi_fu_80402_p4 = ap_phi_reg_pp0_iter0_data_491_V_read561_phi_reg_80398.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_491_V_read561_rewind_phi_fu_36079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_491_V_read561_rewind_phi_fu_36079_p6 = data_491_V_read561_phi_reg_80398.read();
    } else {
        ap_phi_mux_data_491_V_read561_rewind_phi_fu_36079_p6 = data_491_V_read561_rewind_reg_36075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_492_V_read562_phi_phi_fu_80415_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_492_V_read562_phi_phi_fu_80415_p4 = ap_phi_mux_data_492_V_read562_rewind_phi_fu_36093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_492_V_read562_phi_phi_fu_80415_p4 = data_492_V_read.read();
        } else {
            ap_phi_mux_data_492_V_read562_phi_phi_fu_80415_p4 = ap_phi_reg_pp0_iter0_data_492_V_read562_phi_reg_80411.read();
        }
    } else {
        ap_phi_mux_data_492_V_read562_phi_phi_fu_80415_p4 = ap_phi_reg_pp0_iter0_data_492_V_read562_phi_reg_80411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_492_V_read562_rewind_phi_fu_36093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_492_V_read562_rewind_phi_fu_36093_p6 = data_492_V_read562_phi_reg_80411.read();
    } else {
        ap_phi_mux_data_492_V_read562_rewind_phi_fu_36093_p6 = data_492_V_read562_rewind_reg_36089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_493_V_read563_phi_phi_fu_80428_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_493_V_read563_phi_phi_fu_80428_p4 = ap_phi_mux_data_493_V_read563_rewind_phi_fu_36107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_493_V_read563_phi_phi_fu_80428_p4 = data_493_V_read.read();
        } else {
            ap_phi_mux_data_493_V_read563_phi_phi_fu_80428_p4 = ap_phi_reg_pp0_iter0_data_493_V_read563_phi_reg_80424.read();
        }
    } else {
        ap_phi_mux_data_493_V_read563_phi_phi_fu_80428_p4 = ap_phi_reg_pp0_iter0_data_493_V_read563_phi_reg_80424.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_493_V_read563_rewind_phi_fu_36107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_493_V_read563_rewind_phi_fu_36107_p6 = data_493_V_read563_phi_reg_80424.read();
    } else {
        ap_phi_mux_data_493_V_read563_rewind_phi_fu_36107_p6 = data_493_V_read563_rewind_reg_36103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_494_V_read564_phi_phi_fu_80441_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_494_V_read564_phi_phi_fu_80441_p4 = ap_phi_mux_data_494_V_read564_rewind_phi_fu_36121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_494_V_read564_phi_phi_fu_80441_p4 = data_494_V_read.read();
        } else {
            ap_phi_mux_data_494_V_read564_phi_phi_fu_80441_p4 = ap_phi_reg_pp0_iter0_data_494_V_read564_phi_reg_80437.read();
        }
    } else {
        ap_phi_mux_data_494_V_read564_phi_phi_fu_80441_p4 = ap_phi_reg_pp0_iter0_data_494_V_read564_phi_reg_80437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_494_V_read564_rewind_phi_fu_36121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_494_V_read564_rewind_phi_fu_36121_p6 = data_494_V_read564_phi_reg_80437.read();
    } else {
        ap_phi_mux_data_494_V_read564_rewind_phi_fu_36121_p6 = data_494_V_read564_rewind_reg_36117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_495_V_read565_phi_phi_fu_80454_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_495_V_read565_phi_phi_fu_80454_p4 = ap_phi_mux_data_495_V_read565_rewind_phi_fu_36135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_495_V_read565_phi_phi_fu_80454_p4 = data_495_V_read.read();
        } else {
            ap_phi_mux_data_495_V_read565_phi_phi_fu_80454_p4 = ap_phi_reg_pp0_iter0_data_495_V_read565_phi_reg_80450.read();
        }
    } else {
        ap_phi_mux_data_495_V_read565_phi_phi_fu_80454_p4 = ap_phi_reg_pp0_iter0_data_495_V_read565_phi_reg_80450.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_495_V_read565_rewind_phi_fu_36135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_495_V_read565_rewind_phi_fu_36135_p6 = data_495_V_read565_phi_reg_80450.read();
    } else {
        ap_phi_mux_data_495_V_read565_rewind_phi_fu_36135_p6 = data_495_V_read565_rewind_reg_36131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_496_V_read566_phi_phi_fu_80467_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_496_V_read566_phi_phi_fu_80467_p4 = ap_phi_mux_data_496_V_read566_rewind_phi_fu_36149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_496_V_read566_phi_phi_fu_80467_p4 = data_496_V_read.read();
        } else {
            ap_phi_mux_data_496_V_read566_phi_phi_fu_80467_p4 = ap_phi_reg_pp0_iter0_data_496_V_read566_phi_reg_80463.read();
        }
    } else {
        ap_phi_mux_data_496_V_read566_phi_phi_fu_80467_p4 = ap_phi_reg_pp0_iter0_data_496_V_read566_phi_reg_80463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_496_V_read566_rewind_phi_fu_36149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_496_V_read566_rewind_phi_fu_36149_p6 = data_496_V_read566_phi_reg_80463.read();
    } else {
        ap_phi_mux_data_496_V_read566_rewind_phi_fu_36149_p6 = data_496_V_read566_rewind_reg_36145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_497_V_read567_phi_phi_fu_80480_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_497_V_read567_phi_phi_fu_80480_p4 = ap_phi_mux_data_497_V_read567_rewind_phi_fu_36163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_497_V_read567_phi_phi_fu_80480_p4 = data_497_V_read.read();
        } else {
            ap_phi_mux_data_497_V_read567_phi_phi_fu_80480_p4 = ap_phi_reg_pp0_iter0_data_497_V_read567_phi_reg_80476.read();
        }
    } else {
        ap_phi_mux_data_497_V_read567_phi_phi_fu_80480_p4 = ap_phi_reg_pp0_iter0_data_497_V_read567_phi_reg_80476.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_497_V_read567_rewind_phi_fu_36163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_497_V_read567_rewind_phi_fu_36163_p6 = data_497_V_read567_phi_reg_80476.read();
    } else {
        ap_phi_mux_data_497_V_read567_rewind_phi_fu_36163_p6 = data_497_V_read567_rewind_reg_36159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_498_V_read568_phi_phi_fu_80493_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_498_V_read568_phi_phi_fu_80493_p4 = ap_phi_mux_data_498_V_read568_rewind_phi_fu_36177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_498_V_read568_phi_phi_fu_80493_p4 = data_498_V_read.read();
        } else {
            ap_phi_mux_data_498_V_read568_phi_phi_fu_80493_p4 = ap_phi_reg_pp0_iter0_data_498_V_read568_phi_reg_80489.read();
        }
    } else {
        ap_phi_mux_data_498_V_read568_phi_phi_fu_80493_p4 = ap_phi_reg_pp0_iter0_data_498_V_read568_phi_reg_80489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_498_V_read568_rewind_phi_fu_36177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_498_V_read568_rewind_phi_fu_36177_p6 = data_498_V_read568_phi_reg_80489.read();
    } else {
        ap_phi_mux_data_498_V_read568_rewind_phi_fu_36177_p6 = data_498_V_read568_rewind_reg_36173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_499_V_read569_phi_phi_fu_80506_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_499_V_read569_phi_phi_fu_80506_p4 = ap_phi_mux_data_499_V_read569_rewind_phi_fu_36191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_499_V_read569_phi_phi_fu_80506_p4 = data_499_V_read.read();
        } else {
            ap_phi_mux_data_499_V_read569_phi_phi_fu_80506_p4 = ap_phi_reg_pp0_iter0_data_499_V_read569_phi_reg_80502.read();
        }
    } else {
        ap_phi_mux_data_499_V_read569_phi_phi_fu_80506_p4 = ap_phi_reg_pp0_iter0_data_499_V_read569_phi_reg_80502.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_499_V_read569_rewind_phi_fu_36191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_499_V_read569_rewind_phi_fu_36191_p6 = data_499_V_read569_phi_reg_80502.read();
    } else {
        ap_phi_mux_data_499_V_read569_rewind_phi_fu_36191_p6 = data_499_V_read569_rewind_reg_36187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_49_V_read119_phi_phi_fu_74656_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_49_V_read119_phi_phi_fu_74656_p4 = ap_phi_mux_data_49_V_read119_rewind_phi_fu_29891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_49_V_read119_phi_phi_fu_74656_p4 = data_49_V_read.read();
        } else {
            ap_phi_mux_data_49_V_read119_phi_phi_fu_74656_p4 = ap_phi_reg_pp0_iter0_data_49_V_read119_phi_reg_74652.read();
        }
    } else {
        ap_phi_mux_data_49_V_read119_phi_phi_fu_74656_p4 = ap_phi_reg_pp0_iter0_data_49_V_read119_phi_reg_74652.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_49_V_read119_rewind_phi_fu_29891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_49_V_read119_rewind_phi_fu_29891_p6 = data_49_V_read119_phi_reg_74652.read();
    } else {
        ap_phi_mux_data_49_V_read119_rewind_phi_fu_29891_p6 = data_49_V_read119_rewind_reg_29887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_4_V_read74_phi_phi_fu_74071_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_4_V_read74_phi_phi_fu_74071_p4 = ap_phi_mux_data_4_V_read74_rewind_phi_fu_29261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_4_V_read74_phi_phi_fu_74071_p4 = data_4_V_read.read();
        } else {
            ap_phi_mux_data_4_V_read74_phi_phi_fu_74071_p4 = ap_phi_reg_pp0_iter0_data_4_V_read74_phi_reg_74067.read();
        }
    } else {
        ap_phi_mux_data_4_V_read74_phi_phi_fu_74071_p4 = ap_phi_reg_pp0_iter0_data_4_V_read74_phi_reg_74067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_4_V_read74_rewind_phi_fu_29261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_4_V_read74_rewind_phi_fu_29261_p6 = data_4_V_read74_phi_reg_74067.read();
    } else {
        ap_phi_mux_data_4_V_read74_rewind_phi_fu_29261_p6 = data_4_V_read74_rewind_reg_29257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_500_V_read570_phi_phi_fu_80519_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_500_V_read570_phi_phi_fu_80519_p4 = ap_phi_mux_data_500_V_read570_rewind_phi_fu_36205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_500_V_read570_phi_phi_fu_80519_p4 = data_500_V_read.read();
        } else {
            ap_phi_mux_data_500_V_read570_phi_phi_fu_80519_p4 = ap_phi_reg_pp0_iter0_data_500_V_read570_phi_reg_80515.read();
        }
    } else {
        ap_phi_mux_data_500_V_read570_phi_phi_fu_80519_p4 = ap_phi_reg_pp0_iter0_data_500_V_read570_phi_reg_80515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_500_V_read570_rewind_phi_fu_36205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_500_V_read570_rewind_phi_fu_36205_p6 = data_500_V_read570_phi_reg_80515.read();
    } else {
        ap_phi_mux_data_500_V_read570_rewind_phi_fu_36205_p6 = data_500_V_read570_rewind_reg_36201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_501_V_read571_phi_phi_fu_80532_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_501_V_read571_phi_phi_fu_80532_p4 = ap_phi_mux_data_501_V_read571_rewind_phi_fu_36219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_501_V_read571_phi_phi_fu_80532_p4 = data_501_V_read.read();
        } else {
            ap_phi_mux_data_501_V_read571_phi_phi_fu_80532_p4 = ap_phi_reg_pp0_iter0_data_501_V_read571_phi_reg_80528.read();
        }
    } else {
        ap_phi_mux_data_501_V_read571_phi_phi_fu_80532_p4 = ap_phi_reg_pp0_iter0_data_501_V_read571_phi_reg_80528.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_501_V_read571_rewind_phi_fu_36219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_501_V_read571_rewind_phi_fu_36219_p6 = data_501_V_read571_phi_reg_80528.read();
    } else {
        ap_phi_mux_data_501_V_read571_rewind_phi_fu_36219_p6 = data_501_V_read571_rewind_reg_36215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_502_V_read572_phi_phi_fu_80545_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_502_V_read572_phi_phi_fu_80545_p4 = ap_phi_mux_data_502_V_read572_rewind_phi_fu_36233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_502_V_read572_phi_phi_fu_80545_p4 = data_502_V_read.read();
        } else {
            ap_phi_mux_data_502_V_read572_phi_phi_fu_80545_p4 = ap_phi_reg_pp0_iter0_data_502_V_read572_phi_reg_80541.read();
        }
    } else {
        ap_phi_mux_data_502_V_read572_phi_phi_fu_80545_p4 = ap_phi_reg_pp0_iter0_data_502_V_read572_phi_reg_80541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_502_V_read572_rewind_phi_fu_36233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_502_V_read572_rewind_phi_fu_36233_p6 = data_502_V_read572_phi_reg_80541.read();
    } else {
        ap_phi_mux_data_502_V_read572_rewind_phi_fu_36233_p6 = data_502_V_read572_rewind_reg_36229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_503_V_read573_phi_phi_fu_80558_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_503_V_read573_phi_phi_fu_80558_p4 = ap_phi_mux_data_503_V_read573_rewind_phi_fu_36247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_503_V_read573_phi_phi_fu_80558_p4 = data_503_V_read.read();
        } else {
            ap_phi_mux_data_503_V_read573_phi_phi_fu_80558_p4 = ap_phi_reg_pp0_iter0_data_503_V_read573_phi_reg_80554.read();
        }
    } else {
        ap_phi_mux_data_503_V_read573_phi_phi_fu_80558_p4 = ap_phi_reg_pp0_iter0_data_503_V_read573_phi_reg_80554.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_503_V_read573_rewind_phi_fu_36247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_503_V_read573_rewind_phi_fu_36247_p6 = data_503_V_read573_phi_reg_80554.read();
    } else {
        ap_phi_mux_data_503_V_read573_rewind_phi_fu_36247_p6 = data_503_V_read573_rewind_reg_36243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_504_V_read574_phi_phi_fu_80571_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_504_V_read574_phi_phi_fu_80571_p4 = ap_phi_mux_data_504_V_read574_rewind_phi_fu_36261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_504_V_read574_phi_phi_fu_80571_p4 = data_504_V_read.read();
        } else {
            ap_phi_mux_data_504_V_read574_phi_phi_fu_80571_p4 = ap_phi_reg_pp0_iter0_data_504_V_read574_phi_reg_80567.read();
        }
    } else {
        ap_phi_mux_data_504_V_read574_phi_phi_fu_80571_p4 = ap_phi_reg_pp0_iter0_data_504_V_read574_phi_reg_80567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_504_V_read574_rewind_phi_fu_36261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_504_V_read574_rewind_phi_fu_36261_p6 = data_504_V_read574_phi_reg_80567.read();
    } else {
        ap_phi_mux_data_504_V_read574_rewind_phi_fu_36261_p6 = data_504_V_read574_rewind_reg_36257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_505_V_read575_phi_phi_fu_80584_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_505_V_read575_phi_phi_fu_80584_p4 = ap_phi_mux_data_505_V_read575_rewind_phi_fu_36275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_505_V_read575_phi_phi_fu_80584_p4 = data_505_V_read.read();
        } else {
            ap_phi_mux_data_505_V_read575_phi_phi_fu_80584_p4 = ap_phi_reg_pp0_iter0_data_505_V_read575_phi_reg_80580.read();
        }
    } else {
        ap_phi_mux_data_505_V_read575_phi_phi_fu_80584_p4 = ap_phi_reg_pp0_iter0_data_505_V_read575_phi_reg_80580.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_505_V_read575_rewind_phi_fu_36275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_505_V_read575_rewind_phi_fu_36275_p6 = data_505_V_read575_phi_reg_80580.read();
    } else {
        ap_phi_mux_data_505_V_read575_rewind_phi_fu_36275_p6 = data_505_V_read575_rewind_reg_36271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_506_V_read576_phi_phi_fu_80597_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_506_V_read576_phi_phi_fu_80597_p4 = ap_phi_mux_data_506_V_read576_rewind_phi_fu_36289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_506_V_read576_phi_phi_fu_80597_p4 = data_506_V_read.read();
        } else {
            ap_phi_mux_data_506_V_read576_phi_phi_fu_80597_p4 = ap_phi_reg_pp0_iter0_data_506_V_read576_phi_reg_80593.read();
        }
    } else {
        ap_phi_mux_data_506_V_read576_phi_phi_fu_80597_p4 = ap_phi_reg_pp0_iter0_data_506_V_read576_phi_reg_80593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_506_V_read576_rewind_phi_fu_36289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_506_V_read576_rewind_phi_fu_36289_p6 = data_506_V_read576_phi_reg_80593.read();
    } else {
        ap_phi_mux_data_506_V_read576_rewind_phi_fu_36289_p6 = data_506_V_read576_rewind_reg_36285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_507_V_read577_phi_phi_fu_80610_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_507_V_read577_phi_phi_fu_80610_p4 = ap_phi_mux_data_507_V_read577_rewind_phi_fu_36303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_507_V_read577_phi_phi_fu_80610_p4 = data_507_V_read.read();
        } else {
            ap_phi_mux_data_507_V_read577_phi_phi_fu_80610_p4 = ap_phi_reg_pp0_iter0_data_507_V_read577_phi_reg_80606.read();
        }
    } else {
        ap_phi_mux_data_507_V_read577_phi_phi_fu_80610_p4 = ap_phi_reg_pp0_iter0_data_507_V_read577_phi_reg_80606.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_507_V_read577_rewind_phi_fu_36303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_507_V_read577_rewind_phi_fu_36303_p6 = data_507_V_read577_phi_reg_80606.read();
    } else {
        ap_phi_mux_data_507_V_read577_rewind_phi_fu_36303_p6 = data_507_V_read577_rewind_reg_36299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_508_V_read578_phi_phi_fu_80623_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_508_V_read578_phi_phi_fu_80623_p4 = ap_phi_mux_data_508_V_read578_rewind_phi_fu_36317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_508_V_read578_phi_phi_fu_80623_p4 = data_508_V_read.read();
        } else {
            ap_phi_mux_data_508_V_read578_phi_phi_fu_80623_p4 = ap_phi_reg_pp0_iter0_data_508_V_read578_phi_reg_80619.read();
        }
    } else {
        ap_phi_mux_data_508_V_read578_phi_phi_fu_80623_p4 = ap_phi_reg_pp0_iter0_data_508_V_read578_phi_reg_80619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_508_V_read578_rewind_phi_fu_36317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_508_V_read578_rewind_phi_fu_36317_p6 = data_508_V_read578_phi_reg_80619.read();
    } else {
        ap_phi_mux_data_508_V_read578_rewind_phi_fu_36317_p6 = data_508_V_read578_rewind_reg_36313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_509_V_read579_phi_phi_fu_80636_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_509_V_read579_phi_phi_fu_80636_p4 = ap_phi_mux_data_509_V_read579_rewind_phi_fu_36331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_509_V_read579_phi_phi_fu_80636_p4 = data_509_V_read.read();
        } else {
            ap_phi_mux_data_509_V_read579_phi_phi_fu_80636_p4 = ap_phi_reg_pp0_iter0_data_509_V_read579_phi_reg_80632.read();
        }
    } else {
        ap_phi_mux_data_509_V_read579_phi_phi_fu_80636_p4 = ap_phi_reg_pp0_iter0_data_509_V_read579_phi_reg_80632.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_509_V_read579_rewind_phi_fu_36331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_509_V_read579_rewind_phi_fu_36331_p6 = data_509_V_read579_phi_reg_80632.read();
    } else {
        ap_phi_mux_data_509_V_read579_rewind_phi_fu_36331_p6 = data_509_V_read579_rewind_reg_36327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_50_V_read120_phi_phi_fu_74669_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_50_V_read120_phi_phi_fu_74669_p4 = ap_phi_mux_data_50_V_read120_rewind_phi_fu_29905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_50_V_read120_phi_phi_fu_74669_p4 = data_50_V_read.read();
        } else {
            ap_phi_mux_data_50_V_read120_phi_phi_fu_74669_p4 = ap_phi_reg_pp0_iter0_data_50_V_read120_phi_reg_74665.read();
        }
    } else {
        ap_phi_mux_data_50_V_read120_phi_phi_fu_74669_p4 = ap_phi_reg_pp0_iter0_data_50_V_read120_phi_reg_74665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_50_V_read120_rewind_phi_fu_29905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_50_V_read120_rewind_phi_fu_29905_p6 = data_50_V_read120_phi_reg_74665.read();
    } else {
        ap_phi_mux_data_50_V_read120_rewind_phi_fu_29905_p6 = data_50_V_read120_rewind_reg_29901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_510_V_read580_phi_phi_fu_80649_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_510_V_read580_phi_phi_fu_80649_p4 = ap_phi_mux_data_510_V_read580_rewind_phi_fu_36345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_510_V_read580_phi_phi_fu_80649_p4 = data_510_V_read.read();
        } else {
            ap_phi_mux_data_510_V_read580_phi_phi_fu_80649_p4 = ap_phi_reg_pp0_iter0_data_510_V_read580_phi_reg_80645.read();
        }
    } else {
        ap_phi_mux_data_510_V_read580_phi_phi_fu_80649_p4 = ap_phi_reg_pp0_iter0_data_510_V_read580_phi_reg_80645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_510_V_read580_rewind_phi_fu_36345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_510_V_read580_rewind_phi_fu_36345_p6 = data_510_V_read580_phi_reg_80645.read();
    } else {
        ap_phi_mux_data_510_V_read580_rewind_phi_fu_36345_p6 = data_510_V_read580_rewind_reg_36341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_511_V_read581_phi_phi_fu_80662_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_511_V_read581_phi_phi_fu_80662_p4 = ap_phi_mux_data_511_V_read581_rewind_phi_fu_36359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_511_V_read581_phi_phi_fu_80662_p4 = data_511_V_read.read();
        } else {
            ap_phi_mux_data_511_V_read581_phi_phi_fu_80662_p4 = ap_phi_reg_pp0_iter0_data_511_V_read581_phi_reg_80658.read();
        }
    } else {
        ap_phi_mux_data_511_V_read581_phi_phi_fu_80662_p4 = ap_phi_reg_pp0_iter0_data_511_V_read581_phi_reg_80658.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_511_V_read581_rewind_phi_fu_36359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_511_V_read581_rewind_phi_fu_36359_p6 = data_511_V_read581_phi_reg_80658.read();
    } else {
        ap_phi_mux_data_511_V_read581_rewind_phi_fu_36359_p6 = data_511_V_read581_rewind_reg_36355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_512_V_read582_phi_phi_fu_80675_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_512_V_read582_phi_phi_fu_80675_p4 = ap_phi_mux_data_512_V_read582_rewind_phi_fu_36373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_512_V_read582_phi_phi_fu_80675_p4 = data_512_V_read.read();
        } else {
            ap_phi_mux_data_512_V_read582_phi_phi_fu_80675_p4 = ap_phi_reg_pp0_iter0_data_512_V_read582_phi_reg_80671.read();
        }
    } else {
        ap_phi_mux_data_512_V_read582_phi_phi_fu_80675_p4 = ap_phi_reg_pp0_iter0_data_512_V_read582_phi_reg_80671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_512_V_read582_rewind_phi_fu_36373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_512_V_read582_rewind_phi_fu_36373_p6 = data_512_V_read582_phi_reg_80671.read();
    } else {
        ap_phi_mux_data_512_V_read582_rewind_phi_fu_36373_p6 = data_512_V_read582_rewind_reg_36369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_513_V_read583_phi_phi_fu_80688_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_513_V_read583_phi_phi_fu_80688_p4 = ap_phi_mux_data_513_V_read583_rewind_phi_fu_36387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_513_V_read583_phi_phi_fu_80688_p4 = data_513_V_read.read();
        } else {
            ap_phi_mux_data_513_V_read583_phi_phi_fu_80688_p4 = ap_phi_reg_pp0_iter0_data_513_V_read583_phi_reg_80684.read();
        }
    } else {
        ap_phi_mux_data_513_V_read583_phi_phi_fu_80688_p4 = ap_phi_reg_pp0_iter0_data_513_V_read583_phi_reg_80684.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_513_V_read583_rewind_phi_fu_36387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_513_V_read583_rewind_phi_fu_36387_p6 = data_513_V_read583_phi_reg_80684.read();
    } else {
        ap_phi_mux_data_513_V_read583_rewind_phi_fu_36387_p6 = data_513_V_read583_rewind_reg_36383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_514_V_read584_phi_phi_fu_80701_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_514_V_read584_phi_phi_fu_80701_p4 = ap_phi_mux_data_514_V_read584_rewind_phi_fu_36401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_514_V_read584_phi_phi_fu_80701_p4 = data_514_V_read.read();
        } else {
            ap_phi_mux_data_514_V_read584_phi_phi_fu_80701_p4 = ap_phi_reg_pp0_iter0_data_514_V_read584_phi_reg_80697.read();
        }
    } else {
        ap_phi_mux_data_514_V_read584_phi_phi_fu_80701_p4 = ap_phi_reg_pp0_iter0_data_514_V_read584_phi_reg_80697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_514_V_read584_rewind_phi_fu_36401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_514_V_read584_rewind_phi_fu_36401_p6 = data_514_V_read584_phi_reg_80697.read();
    } else {
        ap_phi_mux_data_514_V_read584_rewind_phi_fu_36401_p6 = data_514_V_read584_rewind_reg_36397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_515_V_read585_phi_phi_fu_80714_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_515_V_read585_phi_phi_fu_80714_p4 = ap_phi_mux_data_515_V_read585_rewind_phi_fu_36415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_515_V_read585_phi_phi_fu_80714_p4 = data_515_V_read.read();
        } else {
            ap_phi_mux_data_515_V_read585_phi_phi_fu_80714_p4 = ap_phi_reg_pp0_iter0_data_515_V_read585_phi_reg_80710.read();
        }
    } else {
        ap_phi_mux_data_515_V_read585_phi_phi_fu_80714_p4 = ap_phi_reg_pp0_iter0_data_515_V_read585_phi_reg_80710.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_515_V_read585_rewind_phi_fu_36415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_515_V_read585_rewind_phi_fu_36415_p6 = data_515_V_read585_phi_reg_80710.read();
    } else {
        ap_phi_mux_data_515_V_read585_rewind_phi_fu_36415_p6 = data_515_V_read585_rewind_reg_36411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_516_V_read586_phi_phi_fu_80727_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_516_V_read586_phi_phi_fu_80727_p4 = ap_phi_mux_data_516_V_read586_rewind_phi_fu_36429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_516_V_read586_phi_phi_fu_80727_p4 = data_516_V_read.read();
        } else {
            ap_phi_mux_data_516_V_read586_phi_phi_fu_80727_p4 = ap_phi_reg_pp0_iter0_data_516_V_read586_phi_reg_80723.read();
        }
    } else {
        ap_phi_mux_data_516_V_read586_phi_phi_fu_80727_p4 = ap_phi_reg_pp0_iter0_data_516_V_read586_phi_reg_80723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_516_V_read586_rewind_phi_fu_36429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_516_V_read586_rewind_phi_fu_36429_p6 = data_516_V_read586_phi_reg_80723.read();
    } else {
        ap_phi_mux_data_516_V_read586_rewind_phi_fu_36429_p6 = data_516_V_read586_rewind_reg_36425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_517_V_read587_phi_phi_fu_80740_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_517_V_read587_phi_phi_fu_80740_p4 = ap_phi_mux_data_517_V_read587_rewind_phi_fu_36443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_517_V_read587_phi_phi_fu_80740_p4 = data_517_V_read.read();
        } else {
            ap_phi_mux_data_517_V_read587_phi_phi_fu_80740_p4 = ap_phi_reg_pp0_iter0_data_517_V_read587_phi_reg_80736.read();
        }
    } else {
        ap_phi_mux_data_517_V_read587_phi_phi_fu_80740_p4 = ap_phi_reg_pp0_iter0_data_517_V_read587_phi_reg_80736.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_517_V_read587_rewind_phi_fu_36443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_517_V_read587_rewind_phi_fu_36443_p6 = data_517_V_read587_phi_reg_80736.read();
    } else {
        ap_phi_mux_data_517_V_read587_rewind_phi_fu_36443_p6 = data_517_V_read587_rewind_reg_36439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_518_V_read588_phi_phi_fu_80753_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_518_V_read588_phi_phi_fu_80753_p4 = ap_phi_mux_data_518_V_read588_rewind_phi_fu_36457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_518_V_read588_phi_phi_fu_80753_p4 = data_518_V_read.read();
        } else {
            ap_phi_mux_data_518_V_read588_phi_phi_fu_80753_p4 = ap_phi_reg_pp0_iter0_data_518_V_read588_phi_reg_80749.read();
        }
    } else {
        ap_phi_mux_data_518_V_read588_phi_phi_fu_80753_p4 = ap_phi_reg_pp0_iter0_data_518_V_read588_phi_reg_80749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_518_V_read588_rewind_phi_fu_36457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_518_V_read588_rewind_phi_fu_36457_p6 = data_518_V_read588_phi_reg_80749.read();
    } else {
        ap_phi_mux_data_518_V_read588_rewind_phi_fu_36457_p6 = data_518_V_read588_rewind_reg_36453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_519_V_read589_phi_phi_fu_80766_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_519_V_read589_phi_phi_fu_80766_p4 = ap_phi_mux_data_519_V_read589_rewind_phi_fu_36471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_519_V_read589_phi_phi_fu_80766_p4 = data_519_V_read.read();
        } else {
            ap_phi_mux_data_519_V_read589_phi_phi_fu_80766_p4 = ap_phi_reg_pp0_iter0_data_519_V_read589_phi_reg_80762.read();
        }
    } else {
        ap_phi_mux_data_519_V_read589_phi_phi_fu_80766_p4 = ap_phi_reg_pp0_iter0_data_519_V_read589_phi_reg_80762.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_519_V_read589_rewind_phi_fu_36471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_519_V_read589_rewind_phi_fu_36471_p6 = data_519_V_read589_phi_reg_80762.read();
    } else {
        ap_phi_mux_data_519_V_read589_rewind_phi_fu_36471_p6 = data_519_V_read589_rewind_reg_36467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_51_V_read121_phi_phi_fu_74682_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_51_V_read121_phi_phi_fu_74682_p4 = ap_phi_mux_data_51_V_read121_rewind_phi_fu_29919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_51_V_read121_phi_phi_fu_74682_p4 = data_51_V_read.read();
        } else {
            ap_phi_mux_data_51_V_read121_phi_phi_fu_74682_p4 = ap_phi_reg_pp0_iter0_data_51_V_read121_phi_reg_74678.read();
        }
    } else {
        ap_phi_mux_data_51_V_read121_phi_phi_fu_74682_p4 = ap_phi_reg_pp0_iter0_data_51_V_read121_phi_reg_74678.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_51_V_read121_rewind_phi_fu_29919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_51_V_read121_rewind_phi_fu_29919_p6 = data_51_V_read121_phi_reg_74678.read();
    } else {
        ap_phi_mux_data_51_V_read121_rewind_phi_fu_29919_p6 = data_51_V_read121_rewind_reg_29915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_520_V_read590_phi_phi_fu_80779_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_520_V_read590_phi_phi_fu_80779_p4 = ap_phi_mux_data_520_V_read590_rewind_phi_fu_36485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_520_V_read590_phi_phi_fu_80779_p4 = data_520_V_read.read();
        } else {
            ap_phi_mux_data_520_V_read590_phi_phi_fu_80779_p4 = ap_phi_reg_pp0_iter0_data_520_V_read590_phi_reg_80775.read();
        }
    } else {
        ap_phi_mux_data_520_V_read590_phi_phi_fu_80779_p4 = ap_phi_reg_pp0_iter0_data_520_V_read590_phi_reg_80775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_520_V_read590_rewind_phi_fu_36485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_520_V_read590_rewind_phi_fu_36485_p6 = data_520_V_read590_phi_reg_80775.read();
    } else {
        ap_phi_mux_data_520_V_read590_rewind_phi_fu_36485_p6 = data_520_V_read590_rewind_reg_36481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_521_V_read591_phi_phi_fu_80792_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_521_V_read591_phi_phi_fu_80792_p4 = ap_phi_mux_data_521_V_read591_rewind_phi_fu_36499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_521_V_read591_phi_phi_fu_80792_p4 = data_521_V_read.read();
        } else {
            ap_phi_mux_data_521_V_read591_phi_phi_fu_80792_p4 = ap_phi_reg_pp0_iter0_data_521_V_read591_phi_reg_80788.read();
        }
    } else {
        ap_phi_mux_data_521_V_read591_phi_phi_fu_80792_p4 = ap_phi_reg_pp0_iter0_data_521_V_read591_phi_reg_80788.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_521_V_read591_rewind_phi_fu_36499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_521_V_read591_rewind_phi_fu_36499_p6 = data_521_V_read591_phi_reg_80788.read();
    } else {
        ap_phi_mux_data_521_V_read591_rewind_phi_fu_36499_p6 = data_521_V_read591_rewind_reg_36495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_522_V_read592_phi_phi_fu_80805_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_522_V_read592_phi_phi_fu_80805_p4 = ap_phi_mux_data_522_V_read592_rewind_phi_fu_36513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_522_V_read592_phi_phi_fu_80805_p4 = data_522_V_read.read();
        } else {
            ap_phi_mux_data_522_V_read592_phi_phi_fu_80805_p4 = ap_phi_reg_pp0_iter0_data_522_V_read592_phi_reg_80801.read();
        }
    } else {
        ap_phi_mux_data_522_V_read592_phi_phi_fu_80805_p4 = ap_phi_reg_pp0_iter0_data_522_V_read592_phi_reg_80801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_522_V_read592_rewind_phi_fu_36513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_522_V_read592_rewind_phi_fu_36513_p6 = data_522_V_read592_phi_reg_80801.read();
    } else {
        ap_phi_mux_data_522_V_read592_rewind_phi_fu_36513_p6 = data_522_V_read592_rewind_reg_36509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_523_V_read593_phi_phi_fu_80818_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_523_V_read593_phi_phi_fu_80818_p4 = ap_phi_mux_data_523_V_read593_rewind_phi_fu_36527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_523_V_read593_phi_phi_fu_80818_p4 = data_523_V_read.read();
        } else {
            ap_phi_mux_data_523_V_read593_phi_phi_fu_80818_p4 = ap_phi_reg_pp0_iter0_data_523_V_read593_phi_reg_80814.read();
        }
    } else {
        ap_phi_mux_data_523_V_read593_phi_phi_fu_80818_p4 = ap_phi_reg_pp0_iter0_data_523_V_read593_phi_reg_80814.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_523_V_read593_rewind_phi_fu_36527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_523_V_read593_rewind_phi_fu_36527_p6 = data_523_V_read593_phi_reg_80814.read();
    } else {
        ap_phi_mux_data_523_V_read593_rewind_phi_fu_36527_p6 = data_523_V_read593_rewind_reg_36523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_524_V_read594_phi_phi_fu_80831_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_524_V_read594_phi_phi_fu_80831_p4 = ap_phi_mux_data_524_V_read594_rewind_phi_fu_36541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_524_V_read594_phi_phi_fu_80831_p4 = data_524_V_read.read();
        } else {
            ap_phi_mux_data_524_V_read594_phi_phi_fu_80831_p4 = ap_phi_reg_pp0_iter0_data_524_V_read594_phi_reg_80827.read();
        }
    } else {
        ap_phi_mux_data_524_V_read594_phi_phi_fu_80831_p4 = ap_phi_reg_pp0_iter0_data_524_V_read594_phi_reg_80827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_524_V_read594_rewind_phi_fu_36541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_524_V_read594_rewind_phi_fu_36541_p6 = data_524_V_read594_phi_reg_80827.read();
    } else {
        ap_phi_mux_data_524_V_read594_rewind_phi_fu_36541_p6 = data_524_V_read594_rewind_reg_36537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_525_V_read595_phi_phi_fu_80844_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_525_V_read595_phi_phi_fu_80844_p4 = ap_phi_mux_data_525_V_read595_rewind_phi_fu_36555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_525_V_read595_phi_phi_fu_80844_p4 = data_525_V_read.read();
        } else {
            ap_phi_mux_data_525_V_read595_phi_phi_fu_80844_p4 = ap_phi_reg_pp0_iter0_data_525_V_read595_phi_reg_80840.read();
        }
    } else {
        ap_phi_mux_data_525_V_read595_phi_phi_fu_80844_p4 = ap_phi_reg_pp0_iter0_data_525_V_read595_phi_reg_80840.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_525_V_read595_rewind_phi_fu_36555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_525_V_read595_rewind_phi_fu_36555_p6 = data_525_V_read595_phi_reg_80840.read();
    } else {
        ap_phi_mux_data_525_V_read595_rewind_phi_fu_36555_p6 = data_525_V_read595_rewind_reg_36551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_526_V_read596_phi_phi_fu_80857_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_526_V_read596_phi_phi_fu_80857_p4 = ap_phi_mux_data_526_V_read596_rewind_phi_fu_36569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_526_V_read596_phi_phi_fu_80857_p4 = data_526_V_read.read();
        } else {
            ap_phi_mux_data_526_V_read596_phi_phi_fu_80857_p4 = ap_phi_reg_pp0_iter0_data_526_V_read596_phi_reg_80853.read();
        }
    } else {
        ap_phi_mux_data_526_V_read596_phi_phi_fu_80857_p4 = ap_phi_reg_pp0_iter0_data_526_V_read596_phi_reg_80853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_526_V_read596_rewind_phi_fu_36569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_526_V_read596_rewind_phi_fu_36569_p6 = data_526_V_read596_phi_reg_80853.read();
    } else {
        ap_phi_mux_data_526_V_read596_rewind_phi_fu_36569_p6 = data_526_V_read596_rewind_reg_36565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_527_V_read597_phi_phi_fu_80870_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_527_V_read597_phi_phi_fu_80870_p4 = ap_phi_mux_data_527_V_read597_rewind_phi_fu_36583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_527_V_read597_phi_phi_fu_80870_p4 = data_527_V_read.read();
        } else {
            ap_phi_mux_data_527_V_read597_phi_phi_fu_80870_p4 = ap_phi_reg_pp0_iter0_data_527_V_read597_phi_reg_80866.read();
        }
    } else {
        ap_phi_mux_data_527_V_read597_phi_phi_fu_80870_p4 = ap_phi_reg_pp0_iter0_data_527_V_read597_phi_reg_80866.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_527_V_read597_rewind_phi_fu_36583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_527_V_read597_rewind_phi_fu_36583_p6 = data_527_V_read597_phi_reg_80866.read();
    } else {
        ap_phi_mux_data_527_V_read597_rewind_phi_fu_36583_p6 = data_527_V_read597_rewind_reg_36579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_528_V_read598_phi_phi_fu_80883_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_528_V_read598_phi_phi_fu_80883_p4 = ap_phi_mux_data_528_V_read598_rewind_phi_fu_36597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_528_V_read598_phi_phi_fu_80883_p4 = data_528_V_read.read();
        } else {
            ap_phi_mux_data_528_V_read598_phi_phi_fu_80883_p4 = ap_phi_reg_pp0_iter0_data_528_V_read598_phi_reg_80879.read();
        }
    } else {
        ap_phi_mux_data_528_V_read598_phi_phi_fu_80883_p4 = ap_phi_reg_pp0_iter0_data_528_V_read598_phi_reg_80879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_528_V_read598_rewind_phi_fu_36597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_528_V_read598_rewind_phi_fu_36597_p6 = data_528_V_read598_phi_reg_80879.read();
    } else {
        ap_phi_mux_data_528_V_read598_rewind_phi_fu_36597_p6 = data_528_V_read598_rewind_reg_36593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_529_V_read599_phi_phi_fu_80896_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_529_V_read599_phi_phi_fu_80896_p4 = ap_phi_mux_data_529_V_read599_rewind_phi_fu_36611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_529_V_read599_phi_phi_fu_80896_p4 = data_529_V_read.read();
        } else {
            ap_phi_mux_data_529_V_read599_phi_phi_fu_80896_p4 = ap_phi_reg_pp0_iter0_data_529_V_read599_phi_reg_80892.read();
        }
    } else {
        ap_phi_mux_data_529_V_read599_phi_phi_fu_80896_p4 = ap_phi_reg_pp0_iter0_data_529_V_read599_phi_reg_80892.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_529_V_read599_rewind_phi_fu_36611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_529_V_read599_rewind_phi_fu_36611_p6 = data_529_V_read599_phi_reg_80892.read();
    } else {
        ap_phi_mux_data_529_V_read599_rewind_phi_fu_36611_p6 = data_529_V_read599_rewind_reg_36607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_52_V_read122_phi_phi_fu_74695_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_52_V_read122_phi_phi_fu_74695_p4 = ap_phi_mux_data_52_V_read122_rewind_phi_fu_29933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_52_V_read122_phi_phi_fu_74695_p4 = data_52_V_read.read();
        } else {
            ap_phi_mux_data_52_V_read122_phi_phi_fu_74695_p4 = ap_phi_reg_pp0_iter0_data_52_V_read122_phi_reg_74691.read();
        }
    } else {
        ap_phi_mux_data_52_V_read122_phi_phi_fu_74695_p4 = ap_phi_reg_pp0_iter0_data_52_V_read122_phi_reg_74691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_52_V_read122_rewind_phi_fu_29933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_52_V_read122_rewind_phi_fu_29933_p6 = data_52_V_read122_phi_reg_74691.read();
    } else {
        ap_phi_mux_data_52_V_read122_rewind_phi_fu_29933_p6 = data_52_V_read122_rewind_reg_29929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_530_V_read600_phi_phi_fu_80909_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_530_V_read600_phi_phi_fu_80909_p4 = ap_phi_mux_data_530_V_read600_rewind_phi_fu_36625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_530_V_read600_phi_phi_fu_80909_p4 = data_530_V_read.read();
        } else {
            ap_phi_mux_data_530_V_read600_phi_phi_fu_80909_p4 = ap_phi_reg_pp0_iter0_data_530_V_read600_phi_reg_80905.read();
        }
    } else {
        ap_phi_mux_data_530_V_read600_phi_phi_fu_80909_p4 = ap_phi_reg_pp0_iter0_data_530_V_read600_phi_reg_80905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_530_V_read600_rewind_phi_fu_36625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_530_V_read600_rewind_phi_fu_36625_p6 = data_530_V_read600_phi_reg_80905.read();
    } else {
        ap_phi_mux_data_530_V_read600_rewind_phi_fu_36625_p6 = data_530_V_read600_rewind_reg_36621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_531_V_read601_phi_phi_fu_80922_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_531_V_read601_phi_phi_fu_80922_p4 = ap_phi_mux_data_531_V_read601_rewind_phi_fu_36639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_531_V_read601_phi_phi_fu_80922_p4 = data_531_V_read.read();
        } else {
            ap_phi_mux_data_531_V_read601_phi_phi_fu_80922_p4 = ap_phi_reg_pp0_iter0_data_531_V_read601_phi_reg_80918.read();
        }
    } else {
        ap_phi_mux_data_531_V_read601_phi_phi_fu_80922_p4 = ap_phi_reg_pp0_iter0_data_531_V_read601_phi_reg_80918.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_531_V_read601_rewind_phi_fu_36639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_531_V_read601_rewind_phi_fu_36639_p6 = data_531_V_read601_phi_reg_80918.read();
    } else {
        ap_phi_mux_data_531_V_read601_rewind_phi_fu_36639_p6 = data_531_V_read601_rewind_reg_36635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_532_V_read602_phi_phi_fu_80935_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_532_V_read602_phi_phi_fu_80935_p4 = ap_phi_mux_data_532_V_read602_rewind_phi_fu_36653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_532_V_read602_phi_phi_fu_80935_p4 = data_532_V_read.read();
        } else {
            ap_phi_mux_data_532_V_read602_phi_phi_fu_80935_p4 = ap_phi_reg_pp0_iter0_data_532_V_read602_phi_reg_80931.read();
        }
    } else {
        ap_phi_mux_data_532_V_read602_phi_phi_fu_80935_p4 = ap_phi_reg_pp0_iter0_data_532_V_read602_phi_reg_80931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_532_V_read602_rewind_phi_fu_36653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_532_V_read602_rewind_phi_fu_36653_p6 = data_532_V_read602_phi_reg_80931.read();
    } else {
        ap_phi_mux_data_532_V_read602_rewind_phi_fu_36653_p6 = data_532_V_read602_rewind_reg_36649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_533_V_read603_phi_phi_fu_80948_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_533_V_read603_phi_phi_fu_80948_p4 = ap_phi_mux_data_533_V_read603_rewind_phi_fu_36667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_533_V_read603_phi_phi_fu_80948_p4 = data_533_V_read.read();
        } else {
            ap_phi_mux_data_533_V_read603_phi_phi_fu_80948_p4 = ap_phi_reg_pp0_iter0_data_533_V_read603_phi_reg_80944.read();
        }
    } else {
        ap_phi_mux_data_533_V_read603_phi_phi_fu_80948_p4 = ap_phi_reg_pp0_iter0_data_533_V_read603_phi_reg_80944.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_533_V_read603_rewind_phi_fu_36667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_533_V_read603_rewind_phi_fu_36667_p6 = data_533_V_read603_phi_reg_80944.read();
    } else {
        ap_phi_mux_data_533_V_read603_rewind_phi_fu_36667_p6 = data_533_V_read603_rewind_reg_36663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_534_V_read604_phi_phi_fu_80961_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_534_V_read604_phi_phi_fu_80961_p4 = ap_phi_mux_data_534_V_read604_rewind_phi_fu_36681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_534_V_read604_phi_phi_fu_80961_p4 = data_534_V_read.read();
        } else {
            ap_phi_mux_data_534_V_read604_phi_phi_fu_80961_p4 = ap_phi_reg_pp0_iter0_data_534_V_read604_phi_reg_80957.read();
        }
    } else {
        ap_phi_mux_data_534_V_read604_phi_phi_fu_80961_p4 = ap_phi_reg_pp0_iter0_data_534_V_read604_phi_reg_80957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_534_V_read604_rewind_phi_fu_36681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_534_V_read604_rewind_phi_fu_36681_p6 = data_534_V_read604_phi_reg_80957.read();
    } else {
        ap_phi_mux_data_534_V_read604_rewind_phi_fu_36681_p6 = data_534_V_read604_rewind_reg_36677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_535_V_read605_phi_phi_fu_80974_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_535_V_read605_phi_phi_fu_80974_p4 = ap_phi_mux_data_535_V_read605_rewind_phi_fu_36695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_535_V_read605_phi_phi_fu_80974_p4 = data_535_V_read.read();
        } else {
            ap_phi_mux_data_535_V_read605_phi_phi_fu_80974_p4 = ap_phi_reg_pp0_iter0_data_535_V_read605_phi_reg_80970.read();
        }
    } else {
        ap_phi_mux_data_535_V_read605_phi_phi_fu_80974_p4 = ap_phi_reg_pp0_iter0_data_535_V_read605_phi_reg_80970.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_535_V_read605_rewind_phi_fu_36695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_535_V_read605_rewind_phi_fu_36695_p6 = data_535_V_read605_phi_reg_80970.read();
    } else {
        ap_phi_mux_data_535_V_read605_rewind_phi_fu_36695_p6 = data_535_V_read605_rewind_reg_36691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_536_V_read606_phi_phi_fu_80987_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_536_V_read606_phi_phi_fu_80987_p4 = ap_phi_mux_data_536_V_read606_rewind_phi_fu_36709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_536_V_read606_phi_phi_fu_80987_p4 = data_536_V_read.read();
        } else {
            ap_phi_mux_data_536_V_read606_phi_phi_fu_80987_p4 = ap_phi_reg_pp0_iter0_data_536_V_read606_phi_reg_80983.read();
        }
    } else {
        ap_phi_mux_data_536_V_read606_phi_phi_fu_80987_p4 = ap_phi_reg_pp0_iter0_data_536_V_read606_phi_reg_80983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_536_V_read606_rewind_phi_fu_36709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_536_V_read606_rewind_phi_fu_36709_p6 = data_536_V_read606_phi_reg_80983.read();
    } else {
        ap_phi_mux_data_536_V_read606_rewind_phi_fu_36709_p6 = data_536_V_read606_rewind_reg_36705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_537_V_read607_phi_phi_fu_81000_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_537_V_read607_phi_phi_fu_81000_p4 = ap_phi_mux_data_537_V_read607_rewind_phi_fu_36723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_537_V_read607_phi_phi_fu_81000_p4 = data_537_V_read.read();
        } else {
            ap_phi_mux_data_537_V_read607_phi_phi_fu_81000_p4 = ap_phi_reg_pp0_iter0_data_537_V_read607_phi_reg_80996.read();
        }
    } else {
        ap_phi_mux_data_537_V_read607_phi_phi_fu_81000_p4 = ap_phi_reg_pp0_iter0_data_537_V_read607_phi_reg_80996.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_537_V_read607_rewind_phi_fu_36723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_537_V_read607_rewind_phi_fu_36723_p6 = data_537_V_read607_phi_reg_80996.read();
    } else {
        ap_phi_mux_data_537_V_read607_rewind_phi_fu_36723_p6 = data_537_V_read607_rewind_reg_36719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_538_V_read608_phi_phi_fu_81013_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_538_V_read608_phi_phi_fu_81013_p4 = ap_phi_mux_data_538_V_read608_rewind_phi_fu_36737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_538_V_read608_phi_phi_fu_81013_p4 = data_538_V_read.read();
        } else {
            ap_phi_mux_data_538_V_read608_phi_phi_fu_81013_p4 = ap_phi_reg_pp0_iter0_data_538_V_read608_phi_reg_81009.read();
        }
    } else {
        ap_phi_mux_data_538_V_read608_phi_phi_fu_81013_p4 = ap_phi_reg_pp0_iter0_data_538_V_read608_phi_reg_81009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_538_V_read608_rewind_phi_fu_36737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_538_V_read608_rewind_phi_fu_36737_p6 = data_538_V_read608_phi_reg_81009.read();
    } else {
        ap_phi_mux_data_538_V_read608_rewind_phi_fu_36737_p6 = data_538_V_read608_rewind_reg_36733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_539_V_read609_phi_phi_fu_81026_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_539_V_read609_phi_phi_fu_81026_p4 = ap_phi_mux_data_539_V_read609_rewind_phi_fu_36751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_539_V_read609_phi_phi_fu_81026_p4 = data_539_V_read.read();
        } else {
            ap_phi_mux_data_539_V_read609_phi_phi_fu_81026_p4 = ap_phi_reg_pp0_iter0_data_539_V_read609_phi_reg_81022.read();
        }
    } else {
        ap_phi_mux_data_539_V_read609_phi_phi_fu_81026_p4 = ap_phi_reg_pp0_iter0_data_539_V_read609_phi_reg_81022.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_539_V_read609_rewind_phi_fu_36751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_539_V_read609_rewind_phi_fu_36751_p6 = data_539_V_read609_phi_reg_81022.read();
    } else {
        ap_phi_mux_data_539_V_read609_rewind_phi_fu_36751_p6 = data_539_V_read609_rewind_reg_36747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_53_V_read123_phi_phi_fu_74708_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_53_V_read123_phi_phi_fu_74708_p4 = ap_phi_mux_data_53_V_read123_rewind_phi_fu_29947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_53_V_read123_phi_phi_fu_74708_p4 = data_53_V_read.read();
        } else {
            ap_phi_mux_data_53_V_read123_phi_phi_fu_74708_p4 = ap_phi_reg_pp0_iter0_data_53_V_read123_phi_reg_74704.read();
        }
    } else {
        ap_phi_mux_data_53_V_read123_phi_phi_fu_74708_p4 = ap_phi_reg_pp0_iter0_data_53_V_read123_phi_reg_74704.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_53_V_read123_rewind_phi_fu_29947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_53_V_read123_rewind_phi_fu_29947_p6 = data_53_V_read123_phi_reg_74704.read();
    } else {
        ap_phi_mux_data_53_V_read123_rewind_phi_fu_29947_p6 = data_53_V_read123_rewind_reg_29943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_540_V_read610_phi_phi_fu_81039_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_540_V_read610_phi_phi_fu_81039_p4 = ap_phi_mux_data_540_V_read610_rewind_phi_fu_36765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_540_V_read610_phi_phi_fu_81039_p4 = data_540_V_read.read();
        } else {
            ap_phi_mux_data_540_V_read610_phi_phi_fu_81039_p4 = ap_phi_reg_pp0_iter0_data_540_V_read610_phi_reg_81035.read();
        }
    } else {
        ap_phi_mux_data_540_V_read610_phi_phi_fu_81039_p4 = ap_phi_reg_pp0_iter0_data_540_V_read610_phi_reg_81035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_540_V_read610_rewind_phi_fu_36765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_540_V_read610_rewind_phi_fu_36765_p6 = data_540_V_read610_phi_reg_81035.read();
    } else {
        ap_phi_mux_data_540_V_read610_rewind_phi_fu_36765_p6 = data_540_V_read610_rewind_reg_36761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_541_V_read611_phi_phi_fu_81052_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_541_V_read611_phi_phi_fu_81052_p4 = ap_phi_mux_data_541_V_read611_rewind_phi_fu_36779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_541_V_read611_phi_phi_fu_81052_p4 = data_541_V_read.read();
        } else {
            ap_phi_mux_data_541_V_read611_phi_phi_fu_81052_p4 = ap_phi_reg_pp0_iter0_data_541_V_read611_phi_reg_81048.read();
        }
    } else {
        ap_phi_mux_data_541_V_read611_phi_phi_fu_81052_p4 = ap_phi_reg_pp0_iter0_data_541_V_read611_phi_reg_81048.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_541_V_read611_rewind_phi_fu_36779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_541_V_read611_rewind_phi_fu_36779_p6 = data_541_V_read611_phi_reg_81048.read();
    } else {
        ap_phi_mux_data_541_V_read611_rewind_phi_fu_36779_p6 = data_541_V_read611_rewind_reg_36775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_542_V_read612_phi_phi_fu_81065_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_542_V_read612_phi_phi_fu_81065_p4 = ap_phi_mux_data_542_V_read612_rewind_phi_fu_36793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_542_V_read612_phi_phi_fu_81065_p4 = data_542_V_read.read();
        } else {
            ap_phi_mux_data_542_V_read612_phi_phi_fu_81065_p4 = ap_phi_reg_pp0_iter0_data_542_V_read612_phi_reg_81061.read();
        }
    } else {
        ap_phi_mux_data_542_V_read612_phi_phi_fu_81065_p4 = ap_phi_reg_pp0_iter0_data_542_V_read612_phi_reg_81061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_542_V_read612_rewind_phi_fu_36793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_542_V_read612_rewind_phi_fu_36793_p6 = data_542_V_read612_phi_reg_81061.read();
    } else {
        ap_phi_mux_data_542_V_read612_rewind_phi_fu_36793_p6 = data_542_V_read612_rewind_reg_36789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_543_V_read613_phi_phi_fu_81078_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_543_V_read613_phi_phi_fu_81078_p4 = ap_phi_mux_data_543_V_read613_rewind_phi_fu_36807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_543_V_read613_phi_phi_fu_81078_p4 = data_543_V_read.read();
        } else {
            ap_phi_mux_data_543_V_read613_phi_phi_fu_81078_p4 = ap_phi_reg_pp0_iter0_data_543_V_read613_phi_reg_81074.read();
        }
    } else {
        ap_phi_mux_data_543_V_read613_phi_phi_fu_81078_p4 = ap_phi_reg_pp0_iter0_data_543_V_read613_phi_reg_81074.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_543_V_read613_rewind_phi_fu_36807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_543_V_read613_rewind_phi_fu_36807_p6 = data_543_V_read613_phi_reg_81074.read();
    } else {
        ap_phi_mux_data_543_V_read613_rewind_phi_fu_36807_p6 = data_543_V_read613_rewind_reg_36803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_544_V_read614_phi_phi_fu_81091_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_544_V_read614_phi_phi_fu_81091_p4 = ap_phi_mux_data_544_V_read614_rewind_phi_fu_36821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_544_V_read614_phi_phi_fu_81091_p4 = data_544_V_read.read();
        } else {
            ap_phi_mux_data_544_V_read614_phi_phi_fu_81091_p4 = ap_phi_reg_pp0_iter0_data_544_V_read614_phi_reg_81087.read();
        }
    } else {
        ap_phi_mux_data_544_V_read614_phi_phi_fu_81091_p4 = ap_phi_reg_pp0_iter0_data_544_V_read614_phi_reg_81087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_544_V_read614_rewind_phi_fu_36821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_544_V_read614_rewind_phi_fu_36821_p6 = data_544_V_read614_phi_reg_81087.read();
    } else {
        ap_phi_mux_data_544_V_read614_rewind_phi_fu_36821_p6 = data_544_V_read614_rewind_reg_36817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_545_V_read615_phi_phi_fu_81104_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_545_V_read615_phi_phi_fu_81104_p4 = ap_phi_mux_data_545_V_read615_rewind_phi_fu_36835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_545_V_read615_phi_phi_fu_81104_p4 = data_545_V_read.read();
        } else {
            ap_phi_mux_data_545_V_read615_phi_phi_fu_81104_p4 = ap_phi_reg_pp0_iter0_data_545_V_read615_phi_reg_81100.read();
        }
    } else {
        ap_phi_mux_data_545_V_read615_phi_phi_fu_81104_p4 = ap_phi_reg_pp0_iter0_data_545_V_read615_phi_reg_81100.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_545_V_read615_rewind_phi_fu_36835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_545_V_read615_rewind_phi_fu_36835_p6 = data_545_V_read615_phi_reg_81100.read();
    } else {
        ap_phi_mux_data_545_V_read615_rewind_phi_fu_36835_p6 = data_545_V_read615_rewind_reg_36831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_546_V_read616_phi_phi_fu_81117_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_546_V_read616_phi_phi_fu_81117_p4 = ap_phi_mux_data_546_V_read616_rewind_phi_fu_36849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_546_V_read616_phi_phi_fu_81117_p4 = data_546_V_read.read();
        } else {
            ap_phi_mux_data_546_V_read616_phi_phi_fu_81117_p4 = ap_phi_reg_pp0_iter0_data_546_V_read616_phi_reg_81113.read();
        }
    } else {
        ap_phi_mux_data_546_V_read616_phi_phi_fu_81117_p4 = ap_phi_reg_pp0_iter0_data_546_V_read616_phi_reg_81113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_546_V_read616_rewind_phi_fu_36849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_546_V_read616_rewind_phi_fu_36849_p6 = data_546_V_read616_phi_reg_81113.read();
    } else {
        ap_phi_mux_data_546_V_read616_rewind_phi_fu_36849_p6 = data_546_V_read616_rewind_reg_36845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_547_V_read617_phi_phi_fu_81130_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_547_V_read617_phi_phi_fu_81130_p4 = ap_phi_mux_data_547_V_read617_rewind_phi_fu_36863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_547_V_read617_phi_phi_fu_81130_p4 = data_547_V_read.read();
        } else {
            ap_phi_mux_data_547_V_read617_phi_phi_fu_81130_p4 = ap_phi_reg_pp0_iter0_data_547_V_read617_phi_reg_81126.read();
        }
    } else {
        ap_phi_mux_data_547_V_read617_phi_phi_fu_81130_p4 = ap_phi_reg_pp0_iter0_data_547_V_read617_phi_reg_81126.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_547_V_read617_rewind_phi_fu_36863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_547_V_read617_rewind_phi_fu_36863_p6 = data_547_V_read617_phi_reg_81126.read();
    } else {
        ap_phi_mux_data_547_V_read617_rewind_phi_fu_36863_p6 = data_547_V_read617_rewind_reg_36859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_548_V_read618_phi_phi_fu_81143_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_548_V_read618_phi_phi_fu_81143_p4 = ap_phi_mux_data_548_V_read618_rewind_phi_fu_36877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_548_V_read618_phi_phi_fu_81143_p4 = data_548_V_read.read();
        } else {
            ap_phi_mux_data_548_V_read618_phi_phi_fu_81143_p4 = ap_phi_reg_pp0_iter0_data_548_V_read618_phi_reg_81139.read();
        }
    } else {
        ap_phi_mux_data_548_V_read618_phi_phi_fu_81143_p4 = ap_phi_reg_pp0_iter0_data_548_V_read618_phi_reg_81139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_548_V_read618_rewind_phi_fu_36877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_548_V_read618_rewind_phi_fu_36877_p6 = data_548_V_read618_phi_reg_81139.read();
    } else {
        ap_phi_mux_data_548_V_read618_rewind_phi_fu_36877_p6 = data_548_V_read618_rewind_reg_36873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_549_V_read619_phi_phi_fu_81156_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_549_V_read619_phi_phi_fu_81156_p4 = ap_phi_mux_data_549_V_read619_rewind_phi_fu_36891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_549_V_read619_phi_phi_fu_81156_p4 = data_549_V_read.read();
        } else {
            ap_phi_mux_data_549_V_read619_phi_phi_fu_81156_p4 = ap_phi_reg_pp0_iter0_data_549_V_read619_phi_reg_81152.read();
        }
    } else {
        ap_phi_mux_data_549_V_read619_phi_phi_fu_81156_p4 = ap_phi_reg_pp0_iter0_data_549_V_read619_phi_reg_81152.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_549_V_read619_rewind_phi_fu_36891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_549_V_read619_rewind_phi_fu_36891_p6 = data_549_V_read619_phi_reg_81152.read();
    } else {
        ap_phi_mux_data_549_V_read619_rewind_phi_fu_36891_p6 = data_549_V_read619_rewind_reg_36887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_54_V_read124_phi_phi_fu_74721_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_54_V_read124_phi_phi_fu_74721_p4 = ap_phi_mux_data_54_V_read124_rewind_phi_fu_29961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_54_V_read124_phi_phi_fu_74721_p4 = data_54_V_read.read();
        } else {
            ap_phi_mux_data_54_V_read124_phi_phi_fu_74721_p4 = ap_phi_reg_pp0_iter0_data_54_V_read124_phi_reg_74717.read();
        }
    } else {
        ap_phi_mux_data_54_V_read124_phi_phi_fu_74721_p4 = ap_phi_reg_pp0_iter0_data_54_V_read124_phi_reg_74717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_54_V_read124_rewind_phi_fu_29961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_54_V_read124_rewind_phi_fu_29961_p6 = data_54_V_read124_phi_reg_74717.read();
    } else {
        ap_phi_mux_data_54_V_read124_rewind_phi_fu_29961_p6 = data_54_V_read124_rewind_reg_29957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_550_V_read620_phi_phi_fu_81169_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_550_V_read620_phi_phi_fu_81169_p4 = ap_phi_mux_data_550_V_read620_rewind_phi_fu_36905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_550_V_read620_phi_phi_fu_81169_p4 = data_550_V_read.read();
        } else {
            ap_phi_mux_data_550_V_read620_phi_phi_fu_81169_p4 = ap_phi_reg_pp0_iter0_data_550_V_read620_phi_reg_81165.read();
        }
    } else {
        ap_phi_mux_data_550_V_read620_phi_phi_fu_81169_p4 = ap_phi_reg_pp0_iter0_data_550_V_read620_phi_reg_81165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_550_V_read620_rewind_phi_fu_36905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_550_V_read620_rewind_phi_fu_36905_p6 = data_550_V_read620_phi_reg_81165.read();
    } else {
        ap_phi_mux_data_550_V_read620_rewind_phi_fu_36905_p6 = data_550_V_read620_rewind_reg_36901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_551_V_read621_phi_phi_fu_81182_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_551_V_read621_phi_phi_fu_81182_p4 = ap_phi_mux_data_551_V_read621_rewind_phi_fu_36919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_551_V_read621_phi_phi_fu_81182_p4 = data_551_V_read.read();
        } else {
            ap_phi_mux_data_551_V_read621_phi_phi_fu_81182_p4 = ap_phi_reg_pp0_iter0_data_551_V_read621_phi_reg_81178.read();
        }
    } else {
        ap_phi_mux_data_551_V_read621_phi_phi_fu_81182_p4 = ap_phi_reg_pp0_iter0_data_551_V_read621_phi_reg_81178.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_551_V_read621_rewind_phi_fu_36919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_551_V_read621_rewind_phi_fu_36919_p6 = data_551_V_read621_phi_reg_81178.read();
    } else {
        ap_phi_mux_data_551_V_read621_rewind_phi_fu_36919_p6 = data_551_V_read621_rewind_reg_36915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_552_V_read622_phi_phi_fu_81195_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_552_V_read622_phi_phi_fu_81195_p4 = ap_phi_mux_data_552_V_read622_rewind_phi_fu_36933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_552_V_read622_phi_phi_fu_81195_p4 = data_552_V_read.read();
        } else {
            ap_phi_mux_data_552_V_read622_phi_phi_fu_81195_p4 = ap_phi_reg_pp0_iter0_data_552_V_read622_phi_reg_81191.read();
        }
    } else {
        ap_phi_mux_data_552_V_read622_phi_phi_fu_81195_p4 = ap_phi_reg_pp0_iter0_data_552_V_read622_phi_reg_81191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_552_V_read622_rewind_phi_fu_36933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_552_V_read622_rewind_phi_fu_36933_p6 = data_552_V_read622_phi_reg_81191.read();
    } else {
        ap_phi_mux_data_552_V_read622_rewind_phi_fu_36933_p6 = data_552_V_read622_rewind_reg_36929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_553_V_read623_phi_phi_fu_81208_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_553_V_read623_phi_phi_fu_81208_p4 = ap_phi_mux_data_553_V_read623_rewind_phi_fu_36947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_553_V_read623_phi_phi_fu_81208_p4 = data_553_V_read.read();
        } else {
            ap_phi_mux_data_553_V_read623_phi_phi_fu_81208_p4 = ap_phi_reg_pp0_iter0_data_553_V_read623_phi_reg_81204.read();
        }
    } else {
        ap_phi_mux_data_553_V_read623_phi_phi_fu_81208_p4 = ap_phi_reg_pp0_iter0_data_553_V_read623_phi_reg_81204.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_553_V_read623_rewind_phi_fu_36947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_553_V_read623_rewind_phi_fu_36947_p6 = data_553_V_read623_phi_reg_81204.read();
    } else {
        ap_phi_mux_data_553_V_read623_rewind_phi_fu_36947_p6 = data_553_V_read623_rewind_reg_36943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_554_V_read624_phi_phi_fu_81221_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_554_V_read624_phi_phi_fu_81221_p4 = ap_phi_mux_data_554_V_read624_rewind_phi_fu_36961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_554_V_read624_phi_phi_fu_81221_p4 = data_554_V_read.read();
        } else {
            ap_phi_mux_data_554_V_read624_phi_phi_fu_81221_p4 = ap_phi_reg_pp0_iter0_data_554_V_read624_phi_reg_81217.read();
        }
    } else {
        ap_phi_mux_data_554_V_read624_phi_phi_fu_81221_p4 = ap_phi_reg_pp0_iter0_data_554_V_read624_phi_reg_81217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_554_V_read624_rewind_phi_fu_36961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_554_V_read624_rewind_phi_fu_36961_p6 = data_554_V_read624_phi_reg_81217.read();
    } else {
        ap_phi_mux_data_554_V_read624_rewind_phi_fu_36961_p6 = data_554_V_read624_rewind_reg_36957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_555_V_read625_phi_phi_fu_81234_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_555_V_read625_phi_phi_fu_81234_p4 = ap_phi_mux_data_555_V_read625_rewind_phi_fu_36975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_555_V_read625_phi_phi_fu_81234_p4 = data_555_V_read.read();
        } else {
            ap_phi_mux_data_555_V_read625_phi_phi_fu_81234_p4 = ap_phi_reg_pp0_iter0_data_555_V_read625_phi_reg_81230.read();
        }
    } else {
        ap_phi_mux_data_555_V_read625_phi_phi_fu_81234_p4 = ap_phi_reg_pp0_iter0_data_555_V_read625_phi_reg_81230.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_555_V_read625_rewind_phi_fu_36975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_555_V_read625_rewind_phi_fu_36975_p6 = data_555_V_read625_phi_reg_81230.read();
    } else {
        ap_phi_mux_data_555_V_read625_rewind_phi_fu_36975_p6 = data_555_V_read625_rewind_reg_36971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_556_V_read626_phi_phi_fu_81247_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_556_V_read626_phi_phi_fu_81247_p4 = ap_phi_mux_data_556_V_read626_rewind_phi_fu_36989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_556_V_read626_phi_phi_fu_81247_p4 = data_556_V_read.read();
        } else {
            ap_phi_mux_data_556_V_read626_phi_phi_fu_81247_p4 = ap_phi_reg_pp0_iter0_data_556_V_read626_phi_reg_81243.read();
        }
    } else {
        ap_phi_mux_data_556_V_read626_phi_phi_fu_81247_p4 = ap_phi_reg_pp0_iter0_data_556_V_read626_phi_reg_81243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_556_V_read626_rewind_phi_fu_36989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_556_V_read626_rewind_phi_fu_36989_p6 = data_556_V_read626_phi_reg_81243.read();
    } else {
        ap_phi_mux_data_556_V_read626_rewind_phi_fu_36989_p6 = data_556_V_read626_rewind_reg_36985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_557_V_read627_phi_phi_fu_81260_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_557_V_read627_phi_phi_fu_81260_p4 = ap_phi_mux_data_557_V_read627_rewind_phi_fu_37003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_557_V_read627_phi_phi_fu_81260_p4 = data_557_V_read.read();
        } else {
            ap_phi_mux_data_557_V_read627_phi_phi_fu_81260_p4 = ap_phi_reg_pp0_iter0_data_557_V_read627_phi_reg_81256.read();
        }
    } else {
        ap_phi_mux_data_557_V_read627_phi_phi_fu_81260_p4 = ap_phi_reg_pp0_iter0_data_557_V_read627_phi_reg_81256.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_557_V_read627_rewind_phi_fu_37003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_557_V_read627_rewind_phi_fu_37003_p6 = data_557_V_read627_phi_reg_81256.read();
    } else {
        ap_phi_mux_data_557_V_read627_rewind_phi_fu_37003_p6 = data_557_V_read627_rewind_reg_36999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_558_V_read628_phi_phi_fu_81273_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_558_V_read628_phi_phi_fu_81273_p4 = ap_phi_mux_data_558_V_read628_rewind_phi_fu_37017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_558_V_read628_phi_phi_fu_81273_p4 = data_558_V_read.read();
        } else {
            ap_phi_mux_data_558_V_read628_phi_phi_fu_81273_p4 = ap_phi_reg_pp0_iter0_data_558_V_read628_phi_reg_81269.read();
        }
    } else {
        ap_phi_mux_data_558_V_read628_phi_phi_fu_81273_p4 = ap_phi_reg_pp0_iter0_data_558_V_read628_phi_reg_81269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_558_V_read628_rewind_phi_fu_37017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_558_V_read628_rewind_phi_fu_37017_p6 = data_558_V_read628_phi_reg_81269.read();
    } else {
        ap_phi_mux_data_558_V_read628_rewind_phi_fu_37017_p6 = data_558_V_read628_rewind_reg_37013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_559_V_read629_phi_phi_fu_81286_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_559_V_read629_phi_phi_fu_81286_p4 = ap_phi_mux_data_559_V_read629_rewind_phi_fu_37031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_559_V_read629_phi_phi_fu_81286_p4 = data_559_V_read.read();
        } else {
            ap_phi_mux_data_559_V_read629_phi_phi_fu_81286_p4 = ap_phi_reg_pp0_iter0_data_559_V_read629_phi_reg_81282.read();
        }
    } else {
        ap_phi_mux_data_559_V_read629_phi_phi_fu_81286_p4 = ap_phi_reg_pp0_iter0_data_559_V_read629_phi_reg_81282.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_559_V_read629_rewind_phi_fu_37031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_559_V_read629_rewind_phi_fu_37031_p6 = data_559_V_read629_phi_reg_81282.read();
    } else {
        ap_phi_mux_data_559_V_read629_rewind_phi_fu_37031_p6 = data_559_V_read629_rewind_reg_37027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_55_V_read125_phi_phi_fu_74734_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_55_V_read125_phi_phi_fu_74734_p4 = ap_phi_mux_data_55_V_read125_rewind_phi_fu_29975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_55_V_read125_phi_phi_fu_74734_p4 = data_55_V_read.read();
        } else {
            ap_phi_mux_data_55_V_read125_phi_phi_fu_74734_p4 = ap_phi_reg_pp0_iter0_data_55_V_read125_phi_reg_74730.read();
        }
    } else {
        ap_phi_mux_data_55_V_read125_phi_phi_fu_74734_p4 = ap_phi_reg_pp0_iter0_data_55_V_read125_phi_reg_74730.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_55_V_read125_rewind_phi_fu_29975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_55_V_read125_rewind_phi_fu_29975_p6 = data_55_V_read125_phi_reg_74730.read();
    } else {
        ap_phi_mux_data_55_V_read125_rewind_phi_fu_29975_p6 = data_55_V_read125_rewind_reg_29971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_560_V_read630_phi_phi_fu_81299_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_560_V_read630_phi_phi_fu_81299_p4 = ap_phi_mux_data_560_V_read630_rewind_phi_fu_37045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_560_V_read630_phi_phi_fu_81299_p4 = data_560_V_read.read();
        } else {
            ap_phi_mux_data_560_V_read630_phi_phi_fu_81299_p4 = ap_phi_reg_pp0_iter0_data_560_V_read630_phi_reg_81295.read();
        }
    } else {
        ap_phi_mux_data_560_V_read630_phi_phi_fu_81299_p4 = ap_phi_reg_pp0_iter0_data_560_V_read630_phi_reg_81295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_560_V_read630_rewind_phi_fu_37045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_560_V_read630_rewind_phi_fu_37045_p6 = data_560_V_read630_phi_reg_81295.read();
    } else {
        ap_phi_mux_data_560_V_read630_rewind_phi_fu_37045_p6 = data_560_V_read630_rewind_reg_37041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_561_V_read631_phi_phi_fu_81312_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_561_V_read631_phi_phi_fu_81312_p4 = ap_phi_mux_data_561_V_read631_rewind_phi_fu_37059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_561_V_read631_phi_phi_fu_81312_p4 = data_561_V_read.read();
        } else {
            ap_phi_mux_data_561_V_read631_phi_phi_fu_81312_p4 = ap_phi_reg_pp0_iter0_data_561_V_read631_phi_reg_81308.read();
        }
    } else {
        ap_phi_mux_data_561_V_read631_phi_phi_fu_81312_p4 = ap_phi_reg_pp0_iter0_data_561_V_read631_phi_reg_81308.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_561_V_read631_rewind_phi_fu_37059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_561_V_read631_rewind_phi_fu_37059_p6 = data_561_V_read631_phi_reg_81308.read();
    } else {
        ap_phi_mux_data_561_V_read631_rewind_phi_fu_37059_p6 = data_561_V_read631_rewind_reg_37055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_562_V_read632_phi_phi_fu_81325_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_562_V_read632_phi_phi_fu_81325_p4 = ap_phi_mux_data_562_V_read632_rewind_phi_fu_37073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_562_V_read632_phi_phi_fu_81325_p4 = data_562_V_read.read();
        } else {
            ap_phi_mux_data_562_V_read632_phi_phi_fu_81325_p4 = ap_phi_reg_pp0_iter0_data_562_V_read632_phi_reg_81321.read();
        }
    } else {
        ap_phi_mux_data_562_V_read632_phi_phi_fu_81325_p4 = ap_phi_reg_pp0_iter0_data_562_V_read632_phi_reg_81321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_562_V_read632_rewind_phi_fu_37073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_562_V_read632_rewind_phi_fu_37073_p6 = data_562_V_read632_phi_reg_81321.read();
    } else {
        ap_phi_mux_data_562_V_read632_rewind_phi_fu_37073_p6 = data_562_V_read632_rewind_reg_37069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_563_V_read633_phi_phi_fu_81338_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_563_V_read633_phi_phi_fu_81338_p4 = ap_phi_mux_data_563_V_read633_rewind_phi_fu_37087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_563_V_read633_phi_phi_fu_81338_p4 = data_563_V_read.read();
        } else {
            ap_phi_mux_data_563_V_read633_phi_phi_fu_81338_p4 = ap_phi_reg_pp0_iter0_data_563_V_read633_phi_reg_81334.read();
        }
    } else {
        ap_phi_mux_data_563_V_read633_phi_phi_fu_81338_p4 = ap_phi_reg_pp0_iter0_data_563_V_read633_phi_reg_81334.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_563_V_read633_rewind_phi_fu_37087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_563_V_read633_rewind_phi_fu_37087_p6 = data_563_V_read633_phi_reg_81334.read();
    } else {
        ap_phi_mux_data_563_V_read633_rewind_phi_fu_37087_p6 = data_563_V_read633_rewind_reg_37083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_564_V_read634_phi_phi_fu_81351_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_564_V_read634_phi_phi_fu_81351_p4 = ap_phi_mux_data_564_V_read634_rewind_phi_fu_37101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_564_V_read634_phi_phi_fu_81351_p4 = data_564_V_read.read();
        } else {
            ap_phi_mux_data_564_V_read634_phi_phi_fu_81351_p4 = ap_phi_reg_pp0_iter0_data_564_V_read634_phi_reg_81347.read();
        }
    } else {
        ap_phi_mux_data_564_V_read634_phi_phi_fu_81351_p4 = ap_phi_reg_pp0_iter0_data_564_V_read634_phi_reg_81347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_564_V_read634_rewind_phi_fu_37101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_564_V_read634_rewind_phi_fu_37101_p6 = data_564_V_read634_phi_reg_81347.read();
    } else {
        ap_phi_mux_data_564_V_read634_rewind_phi_fu_37101_p6 = data_564_V_read634_rewind_reg_37097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_565_V_read635_phi_phi_fu_81364_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_565_V_read635_phi_phi_fu_81364_p4 = ap_phi_mux_data_565_V_read635_rewind_phi_fu_37115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_565_V_read635_phi_phi_fu_81364_p4 = data_565_V_read.read();
        } else {
            ap_phi_mux_data_565_V_read635_phi_phi_fu_81364_p4 = ap_phi_reg_pp0_iter0_data_565_V_read635_phi_reg_81360.read();
        }
    } else {
        ap_phi_mux_data_565_V_read635_phi_phi_fu_81364_p4 = ap_phi_reg_pp0_iter0_data_565_V_read635_phi_reg_81360.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_565_V_read635_rewind_phi_fu_37115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_565_V_read635_rewind_phi_fu_37115_p6 = data_565_V_read635_phi_reg_81360.read();
    } else {
        ap_phi_mux_data_565_V_read635_rewind_phi_fu_37115_p6 = data_565_V_read635_rewind_reg_37111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_566_V_read636_phi_phi_fu_81377_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_566_V_read636_phi_phi_fu_81377_p4 = ap_phi_mux_data_566_V_read636_rewind_phi_fu_37129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_566_V_read636_phi_phi_fu_81377_p4 = data_566_V_read.read();
        } else {
            ap_phi_mux_data_566_V_read636_phi_phi_fu_81377_p4 = ap_phi_reg_pp0_iter0_data_566_V_read636_phi_reg_81373.read();
        }
    } else {
        ap_phi_mux_data_566_V_read636_phi_phi_fu_81377_p4 = ap_phi_reg_pp0_iter0_data_566_V_read636_phi_reg_81373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_566_V_read636_rewind_phi_fu_37129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_566_V_read636_rewind_phi_fu_37129_p6 = data_566_V_read636_phi_reg_81373.read();
    } else {
        ap_phi_mux_data_566_V_read636_rewind_phi_fu_37129_p6 = data_566_V_read636_rewind_reg_37125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_567_V_read637_phi_phi_fu_81390_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_567_V_read637_phi_phi_fu_81390_p4 = ap_phi_mux_data_567_V_read637_rewind_phi_fu_37143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_567_V_read637_phi_phi_fu_81390_p4 = data_567_V_read.read();
        } else {
            ap_phi_mux_data_567_V_read637_phi_phi_fu_81390_p4 = ap_phi_reg_pp0_iter0_data_567_V_read637_phi_reg_81386.read();
        }
    } else {
        ap_phi_mux_data_567_V_read637_phi_phi_fu_81390_p4 = ap_phi_reg_pp0_iter0_data_567_V_read637_phi_reg_81386.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_567_V_read637_rewind_phi_fu_37143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_567_V_read637_rewind_phi_fu_37143_p6 = data_567_V_read637_phi_reg_81386.read();
    } else {
        ap_phi_mux_data_567_V_read637_rewind_phi_fu_37143_p6 = data_567_V_read637_rewind_reg_37139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_568_V_read638_phi_phi_fu_81403_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_568_V_read638_phi_phi_fu_81403_p4 = ap_phi_mux_data_568_V_read638_rewind_phi_fu_37157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_568_V_read638_phi_phi_fu_81403_p4 = data_568_V_read.read();
        } else {
            ap_phi_mux_data_568_V_read638_phi_phi_fu_81403_p4 = ap_phi_reg_pp0_iter0_data_568_V_read638_phi_reg_81399.read();
        }
    } else {
        ap_phi_mux_data_568_V_read638_phi_phi_fu_81403_p4 = ap_phi_reg_pp0_iter0_data_568_V_read638_phi_reg_81399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_568_V_read638_rewind_phi_fu_37157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_568_V_read638_rewind_phi_fu_37157_p6 = data_568_V_read638_phi_reg_81399.read();
    } else {
        ap_phi_mux_data_568_V_read638_rewind_phi_fu_37157_p6 = data_568_V_read638_rewind_reg_37153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_569_V_read639_phi_phi_fu_81416_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_569_V_read639_phi_phi_fu_81416_p4 = ap_phi_mux_data_569_V_read639_rewind_phi_fu_37171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_569_V_read639_phi_phi_fu_81416_p4 = data_569_V_read.read();
        } else {
            ap_phi_mux_data_569_V_read639_phi_phi_fu_81416_p4 = ap_phi_reg_pp0_iter0_data_569_V_read639_phi_reg_81412.read();
        }
    } else {
        ap_phi_mux_data_569_V_read639_phi_phi_fu_81416_p4 = ap_phi_reg_pp0_iter0_data_569_V_read639_phi_reg_81412.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_569_V_read639_rewind_phi_fu_37171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_569_V_read639_rewind_phi_fu_37171_p6 = data_569_V_read639_phi_reg_81412.read();
    } else {
        ap_phi_mux_data_569_V_read639_rewind_phi_fu_37171_p6 = data_569_V_read639_rewind_reg_37167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_56_V_read126_phi_phi_fu_74747_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_56_V_read126_phi_phi_fu_74747_p4 = ap_phi_mux_data_56_V_read126_rewind_phi_fu_29989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_56_V_read126_phi_phi_fu_74747_p4 = data_56_V_read.read();
        } else {
            ap_phi_mux_data_56_V_read126_phi_phi_fu_74747_p4 = ap_phi_reg_pp0_iter0_data_56_V_read126_phi_reg_74743.read();
        }
    } else {
        ap_phi_mux_data_56_V_read126_phi_phi_fu_74747_p4 = ap_phi_reg_pp0_iter0_data_56_V_read126_phi_reg_74743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_56_V_read126_rewind_phi_fu_29989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_56_V_read126_rewind_phi_fu_29989_p6 = data_56_V_read126_phi_reg_74743.read();
    } else {
        ap_phi_mux_data_56_V_read126_rewind_phi_fu_29989_p6 = data_56_V_read126_rewind_reg_29985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_570_V_read640_phi_phi_fu_81429_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_570_V_read640_phi_phi_fu_81429_p4 = ap_phi_mux_data_570_V_read640_rewind_phi_fu_37185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_570_V_read640_phi_phi_fu_81429_p4 = data_570_V_read.read();
        } else {
            ap_phi_mux_data_570_V_read640_phi_phi_fu_81429_p4 = ap_phi_reg_pp0_iter0_data_570_V_read640_phi_reg_81425.read();
        }
    } else {
        ap_phi_mux_data_570_V_read640_phi_phi_fu_81429_p4 = ap_phi_reg_pp0_iter0_data_570_V_read640_phi_reg_81425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_570_V_read640_rewind_phi_fu_37185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_570_V_read640_rewind_phi_fu_37185_p6 = data_570_V_read640_phi_reg_81425.read();
    } else {
        ap_phi_mux_data_570_V_read640_rewind_phi_fu_37185_p6 = data_570_V_read640_rewind_reg_37181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_571_V_read641_phi_phi_fu_81442_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_571_V_read641_phi_phi_fu_81442_p4 = ap_phi_mux_data_571_V_read641_rewind_phi_fu_37199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_571_V_read641_phi_phi_fu_81442_p4 = data_571_V_read.read();
        } else {
            ap_phi_mux_data_571_V_read641_phi_phi_fu_81442_p4 = ap_phi_reg_pp0_iter0_data_571_V_read641_phi_reg_81438.read();
        }
    } else {
        ap_phi_mux_data_571_V_read641_phi_phi_fu_81442_p4 = ap_phi_reg_pp0_iter0_data_571_V_read641_phi_reg_81438.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_571_V_read641_rewind_phi_fu_37199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_571_V_read641_rewind_phi_fu_37199_p6 = data_571_V_read641_phi_reg_81438.read();
    } else {
        ap_phi_mux_data_571_V_read641_rewind_phi_fu_37199_p6 = data_571_V_read641_rewind_reg_37195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_572_V_read642_phi_phi_fu_81455_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_572_V_read642_phi_phi_fu_81455_p4 = ap_phi_mux_data_572_V_read642_rewind_phi_fu_37213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_572_V_read642_phi_phi_fu_81455_p4 = data_572_V_read.read();
        } else {
            ap_phi_mux_data_572_V_read642_phi_phi_fu_81455_p4 = ap_phi_reg_pp0_iter0_data_572_V_read642_phi_reg_81451.read();
        }
    } else {
        ap_phi_mux_data_572_V_read642_phi_phi_fu_81455_p4 = ap_phi_reg_pp0_iter0_data_572_V_read642_phi_reg_81451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_572_V_read642_rewind_phi_fu_37213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_572_V_read642_rewind_phi_fu_37213_p6 = data_572_V_read642_phi_reg_81451.read();
    } else {
        ap_phi_mux_data_572_V_read642_rewind_phi_fu_37213_p6 = data_572_V_read642_rewind_reg_37209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_573_V_read643_phi_phi_fu_81468_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_573_V_read643_phi_phi_fu_81468_p4 = ap_phi_mux_data_573_V_read643_rewind_phi_fu_37227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_573_V_read643_phi_phi_fu_81468_p4 = data_573_V_read.read();
        } else {
            ap_phi_mux_data_573_V_read643_phi_phi_fu_81468_p4 = ap_phi_reg_pp0_iter0_data_573_V_read643_phi_reg_81464.read();
        }
    } else {
        ap_phi_mux_data_573_V_read643_phi_phi_fu_81468_p4 = ap_phi_reg_pp0_iter0_data_573_V_read643_phi_reg_81464.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_573_V_read643_rewind_phi_fu_37227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_573_V_read643_rewind_phi_fu_37227_p6 = data_573_V_read643_phi_reg_81464.read();
    } else {
        ap_phi_mux_data_573_V_read643_rewind_phi_fu_37227_p6 = data_573_V_read643_rewind_reg_37223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_574_V_read644_phi_phi_fu_81481_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_574_V_read644_phi_phi_fu_81481_p4 = ap_phi_mux_data_574_V_read644_rewind_phi_fu_37241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_574_V_read644_phi_phi_fu_81481_p4 = data_574_V_read.read();
        } else {
            ap_phi_mux_data_574_V_read644_phi_phi_fu_81481_p4 = ap_phi_reg_pp0_iter0_data_574_V_read644_phi_reg_81477.read();
        }
    } else {
        ap_phi_mux_data_574_V_read644_phi_phi_fu_81481_p4 = ap_phi_reg_pp0_iter0_data_574_V_read644_phi_reg_81477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_574_V_read644_rewind_phi_fu_37241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_574_V_read644_rewind_phi_fu_37241_p6 = data_574_V_read644_phi_reg_81477.read();
    } else {
        ap_phi_mux_data_574_V_read644_rewind_phi_fu_37241_p6 = data_574_V_read644_rewind_reg_37237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_575_V_read645_phi_phi_fu_81494_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_575_V_read645_phi_phi_fu_81494_p4 = ap_phi_mux_data_575_V_read645_rewind_phi_fu_37255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_575_V_read645_phi_phi_fu_81494_p4 = data_575_V_read.read();
        } else {
            ap_phi_mux_data_575_V_read645_phi_phi_fu_81494_p4 = ap_phi_reg_pp0_iter0_data_575_V_read645_phi_reg_81490.read();
        }
    } else {
        ap_phi_mux_data_575_V_read645_phi_phi_fu_81494_p4 = ap_phi_reg_pp0_iter0_data_575_V_read645_phi_reg_81490.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_575_V_read645_rewind_phi_fu_37255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_575_V_read645_rewind_phi_fu_37255_p6 = data_575_V_read645_phi_reg_81490.read();
    } else {
        ap_phi_mux_data_575_V_read645_rewind_phi_fu_37255_p6 = data_575_V_read645_rewind_reg_37251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_576_V_read646_phi_phi_fu_81507_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_576_V_read646_phi_phi_fu_81507_p4 = ap_phi_mux_data_576_V_read646_rewind_phi_fu_37269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_576_V_read646_phi_phi_fu_81507_p4 = data_576_V_read.read();
        } else {
            ap_phi_mux_data_576_V_read646_phi_phi_fu_81507_p4 = ap_phi_reg_pp0_iter0_data_576_V_read646_phi_reg_81503.read();
        }
    } else {
        ap_phi_mux_data_576_V_read646_phi_phi_fu_81507_p4 = ap_phi_reg_pp0_iter0_data_576_V_read646_phi_reg_81503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_576_V_read646_rewind_phi_fu_37269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_576_V_read646_rewind_phi_fu_37269_p6 = data_576_V_read646_phi_reg_81503.read();
    } else {
        ap_phi_mux_data_576_V_read646_rewind_phi_fu_37269_p6 = data_576_V_read646_rewind_reg_37265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_577_V_read647_phi_phi_fu_81520_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_577_V_read647_phi_phi_fu_81520_p4 = ap_phi_mux_data_577_V_read647_rewind_phi_fu_37283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_577_V_read647_phi_phi_fu_81520_p4 = data_577_V_read.read();
        } else {
            ap_phi_mux_data_577_V_read647_phi_phi_fu_81520_p4 = ap_phi_reg_pp0_iter0_data_577_V_read647_phi_reg_81516.read();
        }
    } else {
        ap_phi_mux_data_577_V_read647_phi_phi_fu_81520_p4 = ap_phi_reg_pp0_iter0_data_577_V_read647_phi_reg_81516.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_577_V_read647_rewind_phi_fu_37283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_577_V_read647_rewind_phi_fu_37283_p6 = data_577_V_read647_phi_reg_81516.read();
    } else {
        ap_phi_mux_data_577_V_read647_rewind_phi_fu_37283_p6 = data_577_V_read647_rewind_reg_37279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_578_V_read648_phi_phi_fu_81533_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_578_V_read648_phi_phi_fu_81533_p4 = ap_phi_mux_data_578_V_read648_rewind_phi_fu_37297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_578_V_read648_phi_phi_fu_81533_p4 = data_578_V_read.read();
        } else {
            ap_phi_mux_data_578_V_read648_phi_phi_fu_81533_p4 = ap_phi_reg_pp0_iter0_data_578_V_read648_phi_reg_81529.read();
        }
    } else {
        ap_phi_mux_data_578_V_read648_phi_phi_fu_81533_p4 = ap_phi_reg_pp0_iter0_data_578_V_read648_phi_reg_81529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_578_V_read648_rewind_phi_fu_37297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_578_V_read648_rewind_phi_fu_37297_p6 = data_578_V_read648_phi_reg_81529.read();
    } else {
        ap_phi_mux_data_578_V_read648_rewind_phi_fu_37297_p6 = data_578_V_read648_rewind_reg_37293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_579_V_read649_phi_phi_fu_81546_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_579_V_read649_phi_phi_fu_81546_p4 = ap_phi_mux_data_579_V_read649_rewind_phi_fu_37311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_579_V_read649_phi_phi_fu_81546_p4 = data_579_V_read.read();
        } else {
            ap_phi_mux_data_579_V_read649_phi_phi_fu_81546_p4 = ap_phi_reg_pp0_iter0_data_579_V_read649_phi_reg_81542.read();
        }
    } else {
        ap_phi_mux_data_579_V_read649_phi_phi_fu_81546_p4 = ap_phi_reg_pp0_iter0_data_579_V_read649_phi_reg_81542.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_579_V_read649_rewind_phi_fu_37311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_579_V_read649_rewind_phi_fu_37311_p6 = data_579_V_read649_phi_reg_81542.read();
    } else {
        ap_phi_mux_data_579_V_read649_rewind_phi_fu_37311_p6 = data_579_V_read649_rewind_reg_37307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_57_V_read127_phi_phi_fu_74760_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_57_V_read127_phi_phi_fu_74760_p4 = ap_phi_mux_data_57_V_read127_rewind_phi_fu_30003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_57_V_read127_phi_phi_fu_74760_p4 = data_57_V_read.read();
        } else {
            ap_phi_mux_data_57_V_read127_phi_phi_fu_74760_p4 = ap_phi_reg_pp0_iter0_data_57_V_read127_phi_reg_74756.read();
        }
    } else {
        ap_phi_mux_data_57_V_read127_phi_phi_fu_74760_p4 = ap_phi_reg_pp0_iter0_data_57_V_read127_phi_reg_74756.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_57_V_read127_rewind_phi_fu_30003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_57_V_read127_rewind_phi_fu_30003_p6 = data_57_V_read127_phi_reg_74756.read();
    } else {
        ap_phi_mux_data_57_V_read127_rewind_phi_fu_30003_p6 = data_57_V_read127_rewind_reg_29999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_580_V_read650_phi_phi_fu_81559_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_580_V_read650_phi_phi_fu_81559_p4 = ap_phi_mux_data_580_V_read650_rewind_phi_fu_37325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_580_V_read650_phi_phi_fu_81559_p4 = data_580_V_read.read();
        } else {
            ap_phi_mux_data_580_V_read650_phi_phi_fu_81559_p4 = ap_phi_reg_pp0_iter0_data_580_V_read650_phi_reg_81555.read();
        }
    } else {
        ap_phi_mux_data_580_V_read650_phi_phi_fu_81559_p4 = ap_phi_reg_pp0_iter0_data_580_V_read650_phi_reg_81555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_580_V_read650_rewind_phi_fu_37325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_580_V_read650_rewind_phi_fu_37325_p6 = data_580_V_read650_phi_reg_81555.read();
    } else {
        ap_phi_mux_data_580_V_read650_rewind_phi_fu_37325_p6 = data_580_V_read650_rewind_reg_37321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_581_V_read651_phi_phi_fu_81572_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_581_V_read651_phi_phi_fu_81572_p4 = ap_phi_mux_data_581_V_read651_rewind_phi_fu_37339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_581_V_read651_phi_phi_fu_81572_p4 = data_581_V_read.read();
        } else {
            ap_phi_mux_data_581_V_read651_phi_phi_fu_81572_p4 = ap_phi_reg_pp0_iter0_data_581_V_read651_phi_reg_81568.read();
        }
    } else {
        ap_phi_mux_data_581_V_read651_phi_phi_fu_81572_p4 = ap_phi_reg_pp0_iter0_data_581_V_read651_phi_reg_81568.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_581_V_read651_rewind_phi_fu_37339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_581_V_read651_rewind_phi_fu_37339_p6 = data_581_V_read651_phi_reg_81568.read();
    } else {
        ap_phi_mux_data_581_V_read651_rewind_phi_fu_37339_p6 = data_581_V_read651_rewind_reg_37335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_582_V_read652_phi_phi_fu_81585_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_582_V_read652_phi_phi_fu_81585_p4 = ap_phi_mux_data_582_V_read652_rewind_phi_fu_37353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_582_V_read652_phi_phi_fu_81585_p4 = data_582_V_read.read();
        } else {
            ap_phi_mux_data_582_V_read652_phi_phi_fu_81585_p4 = ap_phi_reg_pp0_iter0_data_582_V_read652_phi_reg_81581.read();
        }
    } else {
        ap_phi_mux_data_582_V_read652_phi_phi_fu_81585_p4 = ap_phi_reg_pp0_iter0_data_582_V_read652_phi_reg_81581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_582_V_read652_rewind_phi_fu_37353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_582_V_read652_rewind_phi_fu_37353_p6 = data_582_V_read652_phi_reg_81581.read();
    } else {
        ap_phi_mux_data_582_V_read652_rewind_phi_fu_37353_p6 = data_582_V_read652_rewind_reg_37349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_583_V_read653_phi_phi_fu_81598_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_583_V_read653_phi_phi_fu_81598_p4 = ap_phi_mux_data_583_V_read653_rewind_phi_fu_37367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_583_V_read653_phi_phi_fu_81598_p4 = data_583_V_read.read();
        } else {
            ap_phi_mux_data_583_V_read653_phi_phi_fu_81598_p4 = ap_phi_reg_pp0_iter0_data_583_V_read653_phi_reg_81594.read();
        }
    } else {
        ap_phi_mux_data_583_V_read653_phi_phi_fu_81598_p4 = ap_phi_reg_pp0_iter0_data_583_V_read653_phi_reg_81594.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_583_V_read653_rewind_phi_fu_37367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_583_V_read653_rewind_phi_fu_37367_p6 = data_583_V_read653_phi_reg_81594.read();
    } else {
        ap_phi_mux_data_583_V_read653_rewind_phi_fu_37367_p6 = data_583_V_read653_rewind_reg_37363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_584_V_read654_phi_phi_fu_81611_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_584_V_read654_phi_phi_fu_81611_p4 = ap_phi_mux_data_584_V_read654_rewind_phi_fu_37381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_584_V_read654_phi_phi_fu_81611_p4 = data_584_V_read.read();
        } else {
            ap_phi_mux_data_584_V_read654_phi_phi_fu_81611_p4 = ap_phi_reg_pp0_iter0_data_584_V_read654_phi_reg_81607.read();
        }
    } else {
        ap_phi_mux_data_584_V_read654_phi_phi_fu_81611_p4 = ap_phi_reg_pp0_iter0_data_584_V_read654_phi_reg_81607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_584_V_read654_rewind_phi_fu_37381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_584_V_read654_rewind_phi_fu_37381_p6 = data_584_V_read654_phi_reg_81607.read();
    } else {
        ap_phi_mux_data_584_V_read654_rewind_phi_fu_37381_p6 = data_584_V_read654_rewind_reg_37377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_585_V_read655_phi_phi_fu_81624_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_585_V_read655_phi_phi_fu_81624_p4 = ap_phi_mux_data_585_V_read655_rewind_phi_fu_37395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_585_V_read655_phi_phi_fu_81624_p4 = data_585_V_read.read();
        } else {
            ap_phi_mux_data_585_V_read655_phi_phi_fu_81624_p4 = ap_phi_reg_pp0_iter0_data_585_V_read655_phi_reg_81620.read();
        }
    } else {
        ap_phi_mux_data_585_V_read655_phi_phi_fu_81624_p4 = ap_phi_reg_pp0_iter0_data_585_V_read655_phi_reg_81620.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_585_V_read655_rewind_phi_fu_37395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_585_V_read655_rewind_phi_fu_37395_p6 = data_585_V_read655_phi_reg_81620.read();
    } else {
        ap_phi_mux_data_585_V_read655_rewind_phi_fu_37395_p6 = data_585_V_read655_rewind_reg_37391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_586_V_read656_phi_phi_fu_81637_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_586_V_read656_phi_phi_fu_81637_p4 = ap_phi_mux_data_586_V_read656_rewind_phi_fu_37409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_586_V_read656_phi_phi_fu_81637_p4 = data_586_V_read.read();
        } else {
            ap_phi_mux_data_586_V_read656_phi_phi_fu_81637_p4 = ap_phi_reg_pp0_iter0_data_586_V_read656_phi_reg_81633.read();
        }
    } else {
        ap_phi_mux_data_586_V_read656_phi_phi_fu_81637_p4 = ap_phi_reg_pp0_iter0_data_586_V_read656_phi_reg_81633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_586_V_read656_rewind_phi_fu_37409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_586_V_read656_rewind_phi_fu_37409_p6 = data_586_V_read656_phi_reg_81633.read();
    } else {
        ap_phi_mux_data_586_V_read656_rewind_phi_fu_37409_p6 = data_586_V_read656_rewind_reg_37405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_587_V_read657_phi_phi_fu_81650_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_587_V_read657_phi_phi_fu_81650_p4 = ap_phi_mux_data_587_V_read657_rewind_phi_fu_37423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_587_V_read657_phi_phi_fu_81650_p4 = data_587_V_read.read();
        } else {
            ap_phi_mux_data_587_V_read657_phi_phi_fu_81650_p4 = ap_phi_reg_pp0_iter0_data_587_V_read657_phi_reg_81646.read();
        }
    } else {
        ap_phi_mux_data_587_V_read657_phi_phi_fu_81650_p4 = ap_phi_reg_pp0_iter0_data_587_V_read657_phi_reg_81646.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_587_V_read657_rewind_phi_fu_37423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_587_V_read657_rewind_phi_fu_37423_p6 = data_587_V_read657_phi_reg_81646.read();
    } else {
        ap_phi_mux_data_587_V_read657_rewind_phi_fu_37423_p6 = data_587_V_read657_rewind_reg_37419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_588_V_read658_phi_phi_fu_81663_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_588_V_read658_phi_phi_fu_81663_p4 = ap_phi_mux_data_588_V_read658_rewind_phi_fu_37437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_588_V_read658_phi_phi_fu_81663_p4 = data_588_V_read.read();
        } else {
            ap_phi_mux_data_588_V_read658_phi_phi_fu_81663_p4 = ap_phi_reg_pp0_iter0_data_588_V_read658_phi_reg_81659.read();
        }
    } else {
        ap_phi_mux_data_588_V_read658_phi_phi_fu_81663_p4 = ap_phi_reg_pp0_iter0_data_588_V_read658_phi_reg_81659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_588_V_read658_rewind_phi_fu_37437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_588_V_read658_rewind_phi_fu_37437_p6 = data_588_V_read658_phi_reg_81659.read();
    } else {
        ap_phi_mux_data_588_V_read658_rewind_phi_fu_37437_p6 = data_588_V_read658_rewind_reg_37433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_589_V_read659_phi_phi_fu_81676_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_589_V_read659_phi_phi_fu_81676_p4 = ap_phi_mux_data_589_V_read659_rewind_phi_fu_37451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_589_V_read659_phi_phi_fu_81676_p4 = data_589_V_read.read();
        } else {
            ap_phi_mux_data_589_V_read659_phi_phi_fu_81676_p4 = ap_phi_reg_pp0_iter0_data_589_V_read659_phi_reg_81672.read();
        }
    } else {
        ap_phi_mux_data_589_V_read659_phi_phi_fu_81676_p4 = ap_phi_reg_pp0_iter0_data_589_V_read659_phi_reg_81672.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_589_V_read659_rewind_phi_fu_37451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_589_V_read659_rewind_phi_fu_37451_p6 = data_589_V_read659_phi_reg_81672.read();
    } else {
        ap_phi_mux_data_589_V_read659_rewind_phi_fu_37451_p6 = data_589_V_read659_rewind_reg_37447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_58_V_read128_phi_phi_fu_74773_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_58_V_read128_phi_phi_fu_74773_p4 = ap_phi_mux_data_58_V_read128_rewind_phi_fu_30017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_58_V_read128_phi_phi_fu_74773_p4 = data_58_V_read.read();
        } else {
            ap_phi_mux_data_58_V_read128_phi_phi_fu_74773_p4 = ap_phi_reg_pp0_iter0_data_58_V_read128_phi_reg_74769.read();
        }
    } else {
        ap_phi_mux_data_58_V_read128_phi_phi_fu_74773_p4 = ap_phi_reg_pp0_iter0_data_58_V_read128_phi_reg_74769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_58_V_read128_rewind_phi_fu_30017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_58_V_read128_rewind_phi_fu_30017_p6 = data_58_V_read128_phi_reg_74769.read();
    } else {
        ap_phi_mux_data_58_V_read128_rewind_phi_fu_30017_p6 = data_58_V_read128_rewind_reg_30013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_590_V_read660_phi_phi_fu_81689_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_590_V_read660_phi_phi_fu_81689_p4 = ap_phi_mux_data_590_V_read660_rewind_phi_fu_37465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_590_V_read660_phi_phi_fu_81689_p4 = data_590_V_read.read();
        } else {
            ap_phi_mux_data_590_V_read660_phi_phi_fu_81689_p4 = ap_phi_reg_pp0_iter0_data_590_V_read660_phi_reg_81685.read();
        }
    } else {
        ap_phi_mux_data_590_V_read660_phi_phi_fu_81689_p4 = ap_phi_reg_pp0_iter0_data_590_V_read660_phi_reg_81685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_590_V_read660_rewind_phi_fu_37465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_590_V_read660_rewind_phi_fu_37465_p6 = data_590_V_read660_phi_reg_81685.read();
    } else {
        ap_phi_mux_data_590_V_read660_rewind_phi_fu_37465_p6 = data_590_V_read660_rewind_reg_37461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_591_V_read661_phi_phi_fu_81702_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_591_V_read661_phi_phi_fu_81702_p4 = ap_phi_mux_data_591_V_read661_rewind_phi_fu_37479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_591_V_read661_phi_phi_fu_81702_p4 = data_591_V_read.read();
        } else {
            ap_phi_mux_data_591_V_read661_phi_phi_fu_81702_p4 = ap_phi_reg_pp0_iter0_data_591_V_read661_phi_reg_81698.read();
        }
    } else {
        ap_phi_mux_data_591_V_read661_phi_phi_fu_81702_p4 = ap_phi_reg_pp0_iter0_data_591_V_read661_phi_reg_81698.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_591_V_read661_rewind_phi_fu_37479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_591_V_read661_rewind_phi_fu_37479_p6 = data_591_V_read661_phi_reg_81698.read();
    } else {
        ap_phi_mux_data_591_V_read661_rewind_phi_fu_37479_p6 = data_591_V_read661_rewind_reg_37475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_592_V_read662_phi_phi_fu_81715_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_592_V_read662_phi_phi_fu_81715_p4 = ap_phi_mux_data_592_V_read662_rewind_phi_fu_37493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_592_V_read662_phi_phi_fu_81715_p4 = data_592_V_read.read();
        } else {
            ap_phi_mux_data_592_V_read662_phi_phi_fu_81715_p4 = ap_phi_reg_pp0_iter0_data_592_V_read662_phi_reg_81711.read();
        }
    } else {
        ap_phi_mux_data_592_V_read662_phi_phi_fu_81715_p4 = ap_phi_reg_pp0_iter0_data_592_V_read662_phi_reg_81711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_592_V_read662_rewind_phi_fu_37493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_592_V_read662_rewind_phi_fu_37493_p6 = data_592_V_read662_phi_reg_81711.read();
    } else {
        ap_phi_mux_data_592_V_read662_rewind_phi_fu_37493_p6 = data_592_V_read662_rewind_reg_37489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_593_V_read663_phi_phi_fu_81728_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_593_V_read663_phi_phi_fu_81728_p4 = ap_phi_mux_data_593_V_read663_rewind_phi_fu_37507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_593_V_read663_phi_phi_fu_81728_p4 = data_593_V_read.read();
        } else {
            ap_phi_mux_data_593_V_read663_phi_phi_fu_81728_p4 = ap_phi_reg_pp0_iter0_data_593_V_read663_phi_reg_81724.read();
        }
    } else {
        ap_phi_mux_data_593_V_read663_phi_phi_fu_81728_p4 = ap_phi_reg_pp0_iter0_data_593_V_read663_phi_reg_81724.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_593_V_read663_rewind_phi_fu_37507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_593_V_read663_rewind_phi_fu_37507_p6 = data_593_V_read663_phi_reg_81724.read();
    } else {
        ap_phi_mux_data_593_V_read663_rewind_phi_fu_37507_p6 = data_593_V_read663_rewind_reg_37503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_594_V_read664_phi_phi_fu_81741_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_594_V_read664_phi_phi_fu_81741_p4 = ap_phi_mux_data_594_V_read664_rewind_phi_fu_37521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_594_V_read664_phi_phi_fu_81741_p4 = data_594_V_read.read();
        } else {
            ap_phi_mux_data_594_V_read664_phi_phi_fu_81741_p4 = ap_phi_reg_pp0_iter0_data_594_V_read664_phi_reg_81737.read();
        }
    } else {
        ap_phi_mux_data_594_V_read664_phi_phi_fu_81741_p4 = ap_phi_reg_pp0_iter0_data_594_V_read664_phi_reg_81737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_594_V_read664_rewind_phi_fu_37521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_594_V_read664_rewind_phi_fu_37521_p6 = data_594_V_read664_phi_reg_81737.read();
    } else {
        ap_phi_mux_data_594_V_read664_rewind_phi_fu_37521_p6 = data_594_V_read664_rewind_reg_37517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_595_V_read665_phi_phi_fu_81754_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_595_V_read665_phi_phi_fu_81754_p4 = ap_phi_mux_data_595_V_read665_rewind_phi_fu_37535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_595_V_read665_phi_phi_fu_81754_p4 = data_595_V_read.read();
        } else {
            ap_phi_mux_data_595_V_read665_phi_phi_fu_81754_p4 = ap_phi_reg_pp0_iter0_data_595_V_read665_phi_reg_81750.read();
        }
    } else {
        ap_phi_mux_data_595_V_read665_phi_phi_fu_81754_p4 = ap_phi_reg_pp0_iter0_data_595_V_read665_phi_reg_81750.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_595_V_read665_rewind_phi_fu_37535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_595_V_read665_rewind_phi_fu_37535_p6 = data_595_V_read665_phi_reg_81750.read();
    } else {
        ap_phi_mux_data_595_V_read665_rewind_phi_fu_37535_p6 = data_595_V_read665_rewind_reg_37531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_596_V_read666_phi_phi_fu_81767_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_596_V_read666_phi_phi_fu_81767_p4 = ap_phi_mux_data_596_V_read666_rewind_phi_fu_37549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_596_V_read666_phi_phi_fu_81767_p4 = data_596_V_read.read();
        } else {
            ap_phi_mux_data_596_V_read666_phi_phi_fu_81767_p4 = ap_phi_reg_pp0_iter0_data_596_V_read666_phi_reg_81763.read();
        }
    } else {
        ap_phi_mux_data_596_V_read666_phi_phi_fu_81767_p4 = ap_phi_reg_pp0_iter0_data_596_V_read666_phi_reg_81763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_596_V_read666_rewind_phi_fu_37549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_596_V_read666_rewind_phi_fu_37549_p6 = data_596_V_read666_phi_reg_81763.read();
    } else {
        ap_phi_mux_data_596_V_read666_rewind_phi_fu_37549_p6 = data_596_V_read666_rewind_reg_37545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_597_V_read667_phi_phi_fu_81780_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_597_V_read667_phi_phi_fu_81780_p4 = ap_phi_mux_data_597_V_read667_rewind_phi_fu_37563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_597_V_read667_phi_phi_fu_81780_p4 = data_597_V_read.read();
        } else {
            ap_phi_mux_data_597_V_read667_phi_phi_fu_81780_p4 = ap_phi_reg_pp0_iter0_data_597_V_read667_phi_reg_81776.read();
        }
    } else {
        ap_phi_mux_data_597_V_read667_phi_phi_fu_81780_p4 = ap_phi_reg_pp0_iter0_data_597_V_read667_phi_reg_81776.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_597_V_read667_rewind_phi_fu_37563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_597_V_read667_rewind_phi_fu_37563_p6 = data_597_V_read667_phi_reg_81776.read();
    } else {
        ap_phi_mux_data_597_V_read667_rewind_phi_fu_37563_p6 = data_597_V_read667_rewind_reg_37559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_598_V_read668_phi_phi_fu_81793_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_598_V_read668_phi_phi_fu_81793_p4 = ap_phi_mux_data_598_V_read668_rewind_phi_fu_37577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_598_V_read668_phi_phi_fu_81793_p4 = data_598_V_read.read();
        } else {
            ap_phi_mux_data_598_V_read668_phi_phi_fu_81793_p4 = ap_phi_reg_pp0_iter0_data_598_V_read668_phi_reg_81789.read();
        }
    } else {
        ap_phi_mux_data_598_V_read668_phi_phi_fu_81793_p4 = ap_phi_reg_pp0_iter0_data_598_V_read668_phi_reg_81789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_598_V_read668_rewind_phi_fu_37577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_598_V_read668_rewind_phi_fu_37577_p6 = data_598_V_read668_phi_reg_81789.read();
    } else {
        ap_phi_mux_data_598_V_read668_rewind_phi_fu_37577_p6 = data_598_V_read668_rewind_reg_37573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_599_V_read669_phi_phi_fu_81806_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_599_V_read669_phi_phi_fu_81806_p4 = ap_phi_mux_data_599_V_read669_rewind_phi_fu_37591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_599_V_read669_phi_phi_fu_81806_p4 = data_599_V_read.read();
        } else {
            ap_phi_mux_data_599_V_read669_phi_phi_fu_81806_p4 = ap_phi_reg_pp0_iter0_data_599_V_read669_phi_reg_81802.read();
        }
    } else {
        ap_phi_mux_data_599_V_read669_phi_phi_fu_81806_p4 = ap_phi_reg_pp0_iter0_data_599_V_read669_phi_reg_81802.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_599_V_read669_rewind_phi_fu_37591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_599_V_read669_rewind_phi_fu_37591_p6 = data_599_V_read669_phi_reg_81802.read();
    } else {
        ap_phi_mux_data_599_V_read669_rewind_phi_fu_37591_p6 = data_599_V_read669_rewind_reg_37587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_59_V_read129_phi_phi_fu_74786_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_59_V_read129_phi_phi_fu_74786_p4 = ap_phi_mux_data_59_V_read129_rewind_phi_fu_30031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_59_V_read129_phi_phi_fu_74786_p4 = data_59_V_read.read();
        } else {
            ap_phi_mux_data_59_V_read129_phi_phi_fu_74786_p4 = ap_phi_reg_pp0_iter0_data_59_V_read129_phi_reg_74782.read();
        }
    } else {
        ap_phi_mux_data_59_V_read129_phi_phi_fu_74786_p4 = ap_phi_reg_pp0_iter0_data_59_V_read129_phi_reg_74782.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_59_V_read129_rewind_phi_fu_30031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_59_V_read129_rewind_phi_fu_30031_p6 = data_59_V_read129_phi_reg_74782.read();
    } else {
        ap_phi_mux_data_59_V_read129_rewind_phi_fu_30031_p6 = data_59_V_read129_rewind_reg_30027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_5_V_read75_phi_phi_fu_74084_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_5_V_read75_phi_phi_fu_74084_p4 = ap_phi_mux_data_5_V_read75_rewind_phi_fu_29275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_5_V_read75_phi_phi_fu_74084_p4 = data_5_V_read.read();
        } else {
            ap_phi_mux_data_5_V_read75_phi_phi_fu_74084_p4 = ap_phi_reg_pp0_iter0_data_5_V_read75_phi_reg_74080.read();
        }
    } else {
        ap_phi_mux_data_5_V_read75_phi_phi_fu_74084_p4 = ap_phi_reg_pp0_iter0_data_5_V_read75_phi_reg_74080.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_5_V_read75_rewind_phi_fu_29275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_5_V_read75_rewind_phi_fu_29275_p6 = data_5_V_read75_phi_reg_74080.read();
    } else {
        ap_phi_mux_data_5_V_read75_rewind_phi_fu_29275_p6 = data_5_V_read75_rewind_reg_29271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_600_V_read670_phi_phi_fu_81819_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_600_V_read670_phi_phi_fu_81819_p4 = ap_phi_mux_data_600_V_read670_rewind_phi_fu_37605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_600_V_read670_phi_phi_fu_81819_p4 = data_600_V_read.read();
        } else {
            ap_phi_mux_data_600_V_read670_phi_phi_fu_81819_p4 = ap_phi_reg_pp0_iter0_data_600_V_read670_phi_reg_81815.read();
        }
    } else {
        ap_phi_mux_data_600_V_read670_phi_phi_fu_81819_p4 = ap_phi_reg_pp0_iter0_data_600_V_read670_phi_reg_81815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_600_V_read670_rewind_phi_fu_37605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_600_V_read670_rewind_phi_fu_37605_p6 = data_600_V_read670_phi_reg_81815.read();
    } else {
        ap_phi_mux_data_600_V_read670_rewind_phi_fu_37605_p6 = data_600_V_read670_rewind_reg_37601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_601_V_read671_phi_phi_fu_81832_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_601_V_read671_phi_phi_fu_81832_p4 = ap_phi_mux_data_601_V_read671_rewind_phi_fu_37619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_601_V_read671_phi_phi_fu_81832_p4 = data_601_V_read.read();
        } else {
            ap_phi_mux_data_601_V_read671_phi_phi_fu_81832_p4 = ap_phi_reg_pp0_iter0_data_601_V_read671_phi_reg_81828.read();
        }
    } else {
        ap_phi_mux_data_601_V_read671_phi_phi_fu_81832_p4 = ap_phi_reg_pp0_iter0_data_601_V_read671_phi_reg_81828.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_601_V_read671_rewind_phi_fu_37619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_601_V_read671_rewind_phi_fu_37619_p6 = data_601_V_read671_phi_reg_81828.read();
    } else {
        ap_phi_mux_data_601_V_read671_rewind_phi_fu_37619_p6 = data_601_V_read671_rewind_reg_37615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_602_V_read672_phi_phi_fu_81845_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_602_V_read672_phi_phi_fu_81845_p4 = ap_phi_mux_data_602_V_read672_rewind_phi_fu_37633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_602_V_read672_phi_phi_fu_81845_p4 = data_602_V_read.read();
        } else {
            ap_phi_mux_data_602_V_read672_phi_phi_fu_81845_p4 = ap_phi_reg_pp0_iter0_data_602_V_read672_phi_reg_81841.read();
        }
    } else {
        ap_phi_mux_data_602_V_read672_phi_phi_fu_81845_p4 = ap_phi_reg_pp0_iter0_data_602_V_read672_phi_reg_81841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_602_V_read672_rewind_phi_fu_37633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_602_V_read672_rewind_phi_fu_37633_p6 = data_602_V_read672_phi_reg_81841.read();
    } else {
        ap_phi_mux_data_602_V_read672_rewind_phi_fu_37633_p6 = data_602_V_read672_rewind_reg_37629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_603_V_read673_phi_phi_fu_81858_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_603_V_read673_phi_phi_fu_81858_p4 = ap_phi_mux_data_603_V_read673_rewind_phi_fu_37647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_603_V_read673_phi_phi_fu_81858_p4 = data_603_V_read.read();
        } else {
            ap_phi_mux_data_603_V_read673_phi_phi_fu_81858_p4 = ap_phi_reg_pp0_iter0_data_603_V_read673_phi_reg_81854.read();
        }
    } else {
        ap_phi_mux_data_603_V_read673_phi_phi_fu_81858_p4 = ap_phi_reg_pp0_iter0_data_603_V_read673_phi_reg_81854.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_603_V_read673_rewind_phi_fu_37647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_603_V_read673_rewind_phi_fu_37647_p6 = data_603_V_read673_phi_reg_81854.read();
    } else {
        ap_phi_mux_data_603_V_read673_rewind_phi_fu_37647_p6 = data_603_V_read673_rewind_reg_37643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_604_V_read674_phi_phi_fu_81871_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_604_V_read674_phi_phi_fu_81871_p4 = ap_phi_mux_data_604_V_read674_rewind_phi_fu_37661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_604_V_read674_phi_phi_fu_81871_p4 = data_604_V_read.read();
        } else {
            ap_phi_mux_data_604_V_read674_phi_phi_fu_81871_p4 = ap_phi_reg_pp0_iter0_data_604_V_read674_phi_reg_81867.read();
        }
    } else {
        ap_phi_mux_data_604_V_read674_phi_phi_fu_81871_p4 = ap_phi_reg_pp0_iter0_data_604_V_read674_phi_reg_81867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_604_V_read674_rewind_phi_fu_37661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_604_V_read674_rewind_phi_fu_37661_p6 = data_604_V_read674_phi_reg_81867.read();
    } else {
        ap_phi_mux_data_604_V_read674_rewind_phi_fu_37661_p6 = data_604_V_read674_rewind_reg_37657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_605_V_read675_phi_phi_fu_81884_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_605_V_read675_phi_phi_fu_81884_p4 = ap_phi_mux_data_605_V_read675_rewind_phi_fu_37675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_605_V_read675_phi_phi_fu_81884_p4 = data_605_V_read.read();
        } else {
            ap_phi_mux_data_605_V_read675_phi_phi_fu_81884_p4 = ap_phi_reg_pp0_iter0_data_605_V_read675_phi_reg_81880.read();
        }
    } else {
        ap_phi_mux_data_605_V_read675_phi_phi_fu_81884_p4 = ap_phi_reg_pp0_iter0_data_605_V_read675_phi_reg_81880.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_605_V_read675_rewind_phi_fu_37675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_605_V_read675_rewind_phi_fu_37675_p6 = data_605_V_read675_phi_reg_81880.read();
    } else {
        ap_phi_mux_data_605_V_read675_rewind_phi_fu_37675_p6 = data_605_V_read675_rewind_reg_37671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_606_V_read676_phi_phi_fu_81897_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_606_V_read676_phi_phi_fu_81897_p4 = ap_phi_mux_data_606_V_read676_rewind_phi_fu_37689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_606_V_read676_phi_phi_fu_81897_p4 = data_606_V_read.read();
        } else {
            ap_phi_mux_data_606_V_read676_phi_phi_fu_81897_p4 = ap_phi_reg_pp0_iter0_data_606_V_read676_phi_reg_81893.read();
        }
    } else {
        ap_phi_mux_data_606_V_read676_phi_phi_fu_81897_p4 = ap_phi_reg_pp0_iter0_data_606_V_read676_phi_reg_81893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_606_V_read676_rewind_phi_fu_37689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_606_V_read676_rewind_phi_fu_37689_p6 = data_606_V_read676_phi_reg_81893.read();
    } else {
        ap_phi_mux_data_606_V_read676_rewind_phi_fu_37689_p6 = data_606_V_read676_rewind_reg_37685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_607_V_read677_phi_phi_fu_81910_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_607_V_read677_phi_phi_fu_81910_p4 = ap_phi_mux_data_607_V_read677_rewind_phi_fu_37703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_607_V_read677_phi_phi_fu_81910_p4 = data_607_V_read.read();
        } else {
            ap_phi_mux_data_607_V_read677_phi_phi_fu_81910_p4 = ap_phi_reg_pp0_iter0_data_607_V_read677_phi_reg_81906.read();
        }
    } else {
        ap_phi_mux_data_607_V_read677_phi_phi_fu_81910_p4 = ap_phi_reg_pp0_iter0_data_607_V_read677_phi_reg_81906.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_607_V_read677_rewind_phi_fu_37703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_607_V_read677_rewind_phi_fu_37703_p6 = data_607_V_read677_phi_reg_81906.read();
    } else {
        ap_phi_mux_data_607_V_read677_rewind_phi_fu_37703_p6 = data_607_V_read677_rewind_reg_37699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_608_V_read678_phi_phi_fu_81923_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_608_V_read678_phi_phi_fu_81923_p4 = ap_phi_mux_data_608_V_read678_rewind_phi_fu_37717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_608_V_read678_phi_phi_fu_81923_p4 = data_608_V_read.read();
        } else {
            ap_phi_mux_data_608_V_read678_phi_phi_fu_81923_p4 = ap_phi_reg_pp0_iter0_data_608_V_read678_phi_reg_81919.read();
        }
    } else {
        ap_phi_mux_data_608_V_read678_phi_phi_fu_81923_p4 = ap_phi_reg_pp0_iter0_data_608_V_read678_phi_reg_81919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_608_V_read678_rewind_phi_fu_37717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_608_V_read678_rewind_phi_fu_37717_p6 = data_608_V_read678_phi_reg_81919.read();
    } else {
        ap_phi_mux_data_608_V_read678_rewind_phi_fu_37717_p6 = data_608_V_read678_rewind_reg_37713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_609_V_read679_phi_phi_fu_81936_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_609_V_read679_phi_phi_fu_81936_p4 = ap_phi_mux_data_609_V_read679_rewind_phi_fu_37731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_609_V_read679_phi_phi_fu_81936_p4 = data_609_V_read.read();
        } else {
            ap_phi_mux_data_609_V_read679_phi_phi_fu_81936_p4 = ap_phi_reg_pp0_iter0_data_609_V_read679_phi_reg_81932.read();
        }
    } else {
        ap_phi_mux_data_609_V_read679_phi_phi_fu_81936_p4 = ap_phi_reg_pp0_iter0_data_609_V_read679_phi_reg_81932.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_609_V_read679_rewind_phi_fu_37731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_609_V_read679_rewind_phi_fu_37731_p6 = data_609_V_read679_phi_reg_81932.read();
    } else {
        ap_phi_mux_data_609_V_read679_rewind_phi_fu_37731_p6 = data_609_V_read679_rewind_reg_37727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_60_V_read130_phi_phi_fu_74799_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_60_V_read130_phi_phi_fu_74799_p4 = ap_phi_mux_data_60_V_read130_rewind_phi_fu_30045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_60_V_read130_phi_phi_fu_74799_p4 = data_60_V_read.read();
        } else {
            ap_phi_mux_data_60_V_read130_phi_phi_fu_74799_p4 = ap_phi_reg_pp0_iter0_data_60_V_read130_phi_reg_74795.read();
        }
    } else {
        ap_phi_mux_data_60_V_read130_phi_phi_fu_74799_p4 = ap_phi_reg_pp0_iter0_data_60_V_read130_phi_reg_74795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_60_V_read130_rewind_phi_fu_30045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_60_V_read130_rewind_phi_fu_30045_p6 = data_60_V_read130_phi_reg_74795.read();
    } else {
        ap_phi_mux_data_60_V_read130_rewind_phi_fu_30045_p6 = data_60_V_read130_rewind_reg_30041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_610_V_read680_phi_phi_fu_81949_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_610_V_read680_phi_phi_fu_81949_p4 = ap_phi_mux_data_610_V_read680_rewind_phi_fu_37745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_610_V_read680_phi_phi_fu_81949_p4 = data_610_V_read.read();
        } else {
            ap_phi_mux_data_610_V_read680_phi_phi_fu_81949_p4 = ap_phi_reg_pp0_iter0_data_610_V_read680_phi_reg_81945.read();
        }
    } else {
        ap_phi_mux_data_610_V_read680_phi_phi_fu_81949_p4 = ap_phi_reg_pp0_iter0_data_610_V_read680_phi_reg_81945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_610_V_read680_rewind_phi_fu_37745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_610_V_read680_rewind_phi_fu_37745_p6 = data_610_V_read680_phi_reg_81945.read();
    } else {
        ap_phi_mux_data_610_V_read680_rewind_phi_fu_37745_p6 = data_610_V_read680_rewind_reg_37741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_611_V_read681_phi_phi_fu_81962_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_611_V_read681_phi_phi_fu_81962_p4 = ap_phi_mux_data_611_V_read681_rewind_phi_fu_37759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_611_V_read681_phi_phi_fu_81962_p4 = data_611_V_read.read();
        } else {
            ap_phi_mux_data_611_V_read681_phi_phi_fu_81962_p4 = ap_phi_reg_pp0_iter0_data_611_V_read681_phi_reg_81958.read();
        }
    } else {
        ap_phi_mux_data_611_V_read681_phi_phi_fu_81962_p4 = ap_phi_reg_pp0_iter0_data_611_V_read681_phi_reg_81958.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_611_V_read681_rewind_phi_fu_37759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_611_V_read681_rewind_phi_fu_37759_p6 = data_611_V_read681_phi_reg_81958.read();
    } else {
        ap_phi_mux_data_611_V_read681_rewind_phi_fu_37759_p6 = data_611_V_read681_rewind_reg_37755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_612_V_read682_phi_phi_fu_81975_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_612_V_read682_phi_phi_fu_81975_p4 = ap_phi_mux_data_612_V_read682_rewind_phi_fu_37773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_612_V_read682_phi_phi_fu_81975_p4 = data_612_V_read.read();
        } else {
            ap_phi_mux_data_612_V_read682_phi_phi_fu_81975_p4 = ap_phi_reg_pp0_iter0_data_612_V_read682_phi_reg_81971.read();
        }
    } else {
        ap_phi_mux_data_612_V_read682_phi_phi_fu_81975_p4 = ap_phi_reg_pp0_iter0_data_612_V_read682_phi_reg_81971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_612_V_read682_rewind_phi_fu_37773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_612_V_read682_rewind_phi_fu_37773_p6 = data_612_V_read682_phi_reg_81971.read();
    } else {
        ap_phi_mux_data_612_V_read682_rewind_phi_fu_37773_p6 = data_612_V_read682_rewind_reg_37769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_613_V_read683_phi_phi_fu_81988_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_613_V_read683_phi_phi_fu_81988_p4 = ap_phi_mux_data_613_V_read683_rewind_phi_fu_37787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_613_V_read683_phi_phi_fu_81988_p4 = data_613_V_read.read();
        } else {
            ap_phi_mux_data_613_V_read683_phi_phi_fu_81988_p4 = ap_phi_reg_pp0_iter0_data_613_V_read683_phi_reg_81984.read();
        }
    } else {
        ap_phi_mux_data_613_V_read683_phi_phi_fu_81988_p4 = ap_phi_reg_pp0_iter0_data_613_V_read683_phi_reg_81984.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_613_V_read683_rewind_phi_fu_37787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_613_V_read683_rewind_phi_fu_37787_p6 = data_613_V_read683_phi_reg_81984.read();
    } else {
        ap_phi_mux_data_613_V_read683_rewind_phi_fu_37787_p6 = data_613_V_read683_rewind_reg_37783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_614_V_read684_phi_phi_fu_82001_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_614_V_read684_phi_phi_fu_82001_p4 = ap_phi_mux_data_614_V_read684_rewind_phi_fu_37801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_614_V_read684_phi_phi_fu_82001_p4 = data_614_V_read.read();
        } else {
            ap_phi_mux_data_614_V_read684_phi_phi_fu_82001_p4 = ap_phi_reg_pp0_iter0_data_614_V_read684_phi_reg_81997.read();
        }
    } else {
        ap_phi_mux_data_614_V_read684_phi_phi_fu_82001_p4 = ap_phi_reg_pp0_iter0_data_614_V_read684_phi_reg_81997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_614_V_read684_rewind_phi_fu_37801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_614_V_read684_rewind_phi_fu_37801_p6 = data_614_V_read684_phi_reg_81997.read();
    } else {
        ap_phi_mux_data_614_V_read684_rewind_phi_fu_37801_p6 = data_614_V_read684_rewind_reg_37797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_615_V_read685_phi_phi_fu_82014_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_615_V_read685_phi_phi_fu_82014_p4 = ap_phi_mux_data_615_V_read685_rewind_phi_fu_37815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_615_V_read685_phi_phi_fu_82014_p4 = data_615_V_read.read();
        } else {
            ap_phi_mux_data_615_V_read685_phi_phi_fu_82014_p4 = ap_phi_reg_pp0_iter0_data_615_V_read685_phi_reg_82010.read();
        }
    } else {
        ap_phi_mux_data_615_V_read685_phi_phi_fu_82014_p4 = ap_phi_reg_pp0_iter0_data_615_V_read685_phi_reg_82010.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_615_V_read685_rewind_phi_fu_37815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_615_V_read685_rewind_phi_fu_37815_p6 = data_615_V_read685_phi_reg_82010.read();
    } else {
        ap_phi_mux_data_615_V_read685_rewind_phi_fu_37815_p6 = data_615_V_read685_rewind_reg_37811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_616_V_read686_phi_phi_fu_82027_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_616_V_read686_phi_phi_fu_82027_p4 = ap_phi_mux_data_616_V_read686_rewind_phi_fu_37829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_616_V_read686_phi_phi_fu_82027_p4 = data_616_V_read.read();
        } else {
            ap_phi_mux_data_616_V_read686_phi_phi_fu_82027_p4 = ap_phi_reg_pp0_iter0_data_616_V_read686_phi_reg_82023.read();
        }
    } else {
        ap_phi_mux_data_616_V_read686_phi_phi_fu_82027_p4 = ap_phi_reg_pp0_iter0_data_616_V_read686_phi_reg_82023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_616_V_read686_rewind_phi_fu_37829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_616_V_read686_rewind_phi_fu_37829_p6 = data_616_V_read686_phi_reg_82023.read();
    } else {
        ap_phi_mux_data_616_V_read686_rewind_phi_fu_37829_p6 = data_616_V_read686_rewind_reg_37825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_617_V_read687_phi_phi_fu_82040_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_617_V_read687_phi_phi_fu_82040_p4 = ap_phi_mux_data_617_V_read687_rewind_phi_fu_37843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_617_V_read687_phi_phi_fu_82040_p4 = data_617_V_read.read();
        } else {
            ap_phi_mux_data_617_V_read687_phi_phi_fu_82040_p4 = ap_phi_reg_pp0_iter0_data_617_V_read687_phi_reg_82036.read();
        }
    } else {
        ap_phi_mux_data_617_V_read687_phi_phi_fu_82040_p4 = ap_phi_reg_pp0_iter0_data_617_V_read687_phi_reg_82036.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_617_V_read687_rewind_phi_fu_37843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_617_V_read687_rewind_phi_fu_37843_p6 = data_617_V_read687_phi_reg_82036.read();
    } else {
        ap_phi_mux_data_617_V_read687_rewind_phi_fu_37843_p6 = data_617_V_read687_rewind_reg_37839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_618_V_read688_phi_phi_fu_82053_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_618_V_read688_phi_phi_fu_82053_p4 = ap_phi_mux_data_618_V_read688_rewind_phi_fu_37857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_618_V_read688_phi_phi_fu_82053_p4 = data_618_V_read.read();
        } else {
            ap_phi_mux_data_618_V_read688_phi_phi_fu_82053_p4 = ap_phi_reg_pp0_iter0_data_618_V_read688_phi_reg_82049.read();
        }
    } else {
        ap_phi_mux_data_618_V_read688_phi_phi_fu_82053_p4 = ap_phi_reg_pp0_iter0_data_618_V_read688_phi_reg_82049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_618_V_read688_rewind_phi_fu_37857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_618_V_read688_rewind_phi_fu_37857_p6 = data_618_V_read688_phi_reg_82049.read();
    } else {
        ap_phi_mux_data_618_V_read688_rewind_phi_fu_37857_p6 = data_618_V_read688_rewind_reg_37853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_619_V_read689_phi_phi_fu_82066_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_619_V_read689_phi_phi_fu_82066_p4 = ap_phi_mux_data_619_V_read689_rewind_phi_fu_37871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_619_V_read689_phi_phi_fu_82066_p4 = data_619_V_read.read();
        } else {
            ap_phi_mux_data_619_V_read689_phi_phi_fu_82066_p4 = ap_phi_reg_pp0_iter0_data_619_V_read689_phi_reg_82062.read();
        }
    } else {
        ap_phi_mux_data_619_V_read689_phi_phi_fu_82066_p4 = ap_phi_reg_pp0_iter0_data_619_V_read689_phi_reg_82062.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_619_V_read689_rewind_phi_fu_37871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_619_V_read689_rewind_phi_fu_37871_p6 = data_619_V_read689_phi_reg_82062.read();
    } else {
        ap_phi_mux_data_619_V_read689_rewind_phi_fu_37871_p6 = data_619_V_read689_rewind_reg_37867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_61_V_read131_phi_phi_fu_74812_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_61_V_read131_phi_phi_fu_74812_p4 = ap_phi_mux_data_61_V_read131_rewind_phi_fu_30059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_61_V_read131_phi_phi_fu_74812_p4 = data_61_V_read.read();
        } else {
            ap_phi_mux_data_61_V_read131_phi_phi_fu_74812_p4 = ap_phi_reg_pp0_iter0_data_61_V_read131_phi_reg_74808.read();
        }
    } else {
        ap_phi_mux_data_61_V_read131_phi_phi_fu_74812_p4 = ap_phi_reg_pp0_iter0_data_61_V_read131_phi_reg_74808.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_61_V_read131_rewind_phi_fu_30059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_61_V_read131_rewind_phi_fu_30059_p6 = data_61_V_read131_phi_reg_74808.read();
    } else {
        ap_phi_mux_data_61_V_read131_rewind_phi_fu_30059_p6 = data_61_V_read131_rewind_reg_30055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_620_V_read690_phi_phi_fu_82079_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_620_V_read690_phi_phi_fu_82079_p4 = ap_phi_mux_data_620_V_read690_rewind_phi_fu_37885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_620_V_read690_phi_phi_fu_82079_p4 = data_620_V_read.read();
        } else {
            ap_phi_mux_data_620_V_read690_phi_phi_fu_82079_p4 = ap_phi_reg_pp0_iter0_data_620_V_read690_phi_reg_82075.read();
        }
    } else {
        ap_phi_mux_data_620_V_read690_phi_phi_fu_82079_p4 = ap_phi_reg_pp0_iter0_data_620_V_read690_phi_reg_82075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_620_V_read690_rewind_phi_fu_37885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_620_V_read690_rewind_phi_fu_37885_p6 = data_620_V_read690_phi_reg_82075.read();
    } else {
        ap_phi_mux_data_620_V_read690_rewind_phi_fu_37885_p6 = data_620_V_read690_rewind_reg_37881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_621_V_read691_phi_phi_fu_82092_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_621_V_read691_phi_phi_fu_82092_p4 = ap_phi_mux_data_621_V_read691_rewind_phi_fu_37899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_621_V_read691_phi_phi_fu_82092_p4 = data_621_V_read.read();
        } else {
            ap_phi_mux_data_621_V_read691_phi_phi_fu_82092_p4 = ap_phi_reg_pp0_iter0_data_621_V_read691_phi_reg_82088.read();
        }
    } else {
        ap_phi_mux_data_621_V_read691_phi_phi_fu_82092_p4 = ap_phi_reg_pp0_iter0_data_621_V_read691_phi_reg_82088.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_621_V_read691_rewind_phi_fu_37899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_621_V_read691_rewind_phi_fu_37899_p6 = data_621_V_read691_phi_reg_82088.read();
    } else {
        ap_phi_mux_data_621_V_read691_rewind_phi_fu_37899_p6 = data_621_V_read691_rewind_reg_37895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_622_V_read692_phi_phi_fu_82105_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_622_V_read692_phi_phi_fu_82105_p4 = ap_phi_mux_data_622_V_read692_rewind_phi_fu_37913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_622_V_read692_phi_phi_fu_82105_p4 = data_622_V_read.read();
        } else {
            ap_phi_mux_data_622_V_read692_phi_phi_fu_82105_p4 = ap_phi_reg_pp0_iter0_data_622_V_read692_phi_reg_82101.read();
        }
    } else {
        ap_phi_mux_data_622_V_read692_phi_phi_fu_82105_p4 = ap_phi_reg_pp0_iter0_data_622_V_read692_phi_reg_82101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_622_V_read692_rewind_phi_fu_37913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_622_V_read692_rewind_phi_fu_37913_p6 = data_622_V_read692_phi_reg_82101.read();
    } else {
        ap_phi_mux_data_622_V_read692_rewind_phi_fu_37913_p6 = data_622_V_read692_rewind_reg_37909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_623_V_read693_phi_phi_fu_82118_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_623_V_read693_phi_phi_fu_82118_p4 = ap_phi_mux_data_623_V_read693_rewind_phi_fu_37927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_623_V_read693_phi_phi_fu_82118_p4 = data_623_V_read.read();
        } else {
            ap_phi_mux_data_623_V_read693_phi_phi_fu_82118_p4 = ap_phi_reg_pp0_iter0_data_623_V_read693_phi_reg_82114.read();
        }
    } else {
        ap_phi_mux_data_623_V_read693_phi_phi_fu_82118_p4 = ap_phi_reg_pp0_iter0_data_623_V_read693_phi_reg_82114.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_623_V_read693_rewind_phi_fu_37927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_623_V_read693_rewind_phi_fu_37927_p6 = data_623_V_read693_phi_reg_82114.read();
    } else {
        ap_phi_mux_data_623_V_read693_rewind_phi_fu_37927_p6 = data_623_V_read693_rewind_reg_37923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_624_V_read694_phi_phi_fu_82131_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_624_V_read694_phi_phi_fu_82131_p4 = ap_phi_mux_data_624_V_read694_rewind_phi_fu_37941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_624_V_read694_phi_phi_fu_82131_p4 = data_624_V_read.read();
        } else {
            ap_phi_mux_data_624_V_read694_phi_phi_fu_82131_p4 = ap_phi_reg_pp0_iter0_data_624_V_read694_phi_reg_82127.read();
        }
    } else {
        ap_phi_mux_data_624_V_read694_phi_phi_fu_82131_p4 = ap_phi_reg_pp0_iter0_data_624_V_read694_phi_reg_82127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_624_V_read694_rewind_phi_fu_37941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_624_V_read694_rewind_phi_fu_37941_p6 = data_624_V_read694_phi_reg_82127.read();
    } else {
        ap_phi_mux_data_624_V_read694_rewind_phi_fu_37941_p6 = data_624_V_read694_rewind_reg_37937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_625_V_read695_phi_phi_fu_82144_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_625_V_read695_phi_phi_fu_82144_p4 = ap_phi_mux_data_625_V_read695_rewind_phi_fu_37955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_625_V_read695_phi_phi_fu_82144_p4 = data_625_V_read.read();
        } else {
            ap_phi_mux_data_625_V_read695_phi_phi_fu_82144_p4 = ap_phi_reg_pp0_iter0_data_625_V_read695_phi_reg_82140.read();
        }
    } else {
        ap_phi_mux_data_625_V_read695_phi_phi_fu_82144_p4 = ap_phi_reg_pp0_iter0_data_625_V_read695_phi_reg_82140.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_625_V_read695_rewind_phi_fu_37955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_625_V_read695_rewind_phi_fu_37955_p6 = data_625_V_read695_phi_reg_82140.read();
    } else {
        ap_phi_mux_data_625_V_read695_rewind_phi_fu_37955_p6 = data_625_V_read695_rewind_reg_37951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_626_V_read696_phi_phi_fu_82157_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_626_V_read696_phi_phi_fu_82157_p4 = ap_phi_mux_data_626_V_read696_rewind_phi_fu_37969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_626_V_read696_phi_phi_fu_82157_p4 = data_626_V_read.read();
        } else {
            ap_phi_mux_data_626_V_read696_phi_phi_fu_82157_p4 = ap_phi_reg_pp0_iter0_data_626_V_read696_phi_reg_82153.read();
        }
    } else {
        ap_phi_mux_data_626_V_read696_phi_phi_fu_82157_p4 = ap_phi_reg_pp0_iter0_data_626_V_read696_phi_reg_82153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_626_V_read696_rewind_phi_fu_37969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_626_V_read696_rewind_phi_fu_37969_p6 = data_626_V_read696_phi_reg_82153.read();
    } else {
        ap_phi_mux_data_626_V_read696_rewind_phi_fu_37969_p6 = data_626_V_read696_rewind_reg_37965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_627_V_read697_phi_phi_fu_82170_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_627_V_read697_phi_phi_fu_82170_p4 = ap_phi_mux_data_627_V_read697_rewind_phi_fu_37983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_627_V_read697_phi_phi_fu_82170_p4 = data_627_V_read.read();
        } else {
            ap_phi_mux_data_627_V_read697_phi_phi_fu_82170_p4 = ap_phi_reg_pp0_iter0_data_627_V_read697_phi_reg_82166.read();
        }
    } else {
        ap_phi_mux_data_627_V_read697_phi_phi_fu_82170_p4 = ap_phi_reg_pp0_iter0_data_627_V_read697_phi_reg_82166.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_627_V_read697_rewind_phi_fu_37983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_627_V_read697_rewind_phi_fu_37983_p6 = data_627_V_read697_phi_reg_82166.read();
    } else {
        ap_phi_mux_data_627_V_read697_rewind_phi_fu_37983_p6 = data_627_V_read697_rewind_reg_37979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_628_V_read698_phi_phi_fu_82183_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_628_V_read698_phi_phi_fu_82183_p4 = ap_phi_mux_data_628_V_read698_rewind_phi_fu_37997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_628_V_read698_phi_phi_fu_82183_p4 = data_628_V_read.read();
        } else {
            ap_phi_mux_data_628_V_read698_phi_phi_fu_82183_p4 = ap_phi_reg_pp0_iter0_data_628_V_read698_phi_reg_82179.read();
        }
    } else {
        ap_phi_mux_data_628_V_read698_phi_phi_fu_82183_p4 = ap_phi_reg_pp0_iter0_data_628_V_read698_phi_reg_82179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_628_V_read698_rewind_phi_fu_37997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_628_V_read698_rewind_phi_fu_37997_p6 = data_628_V_read698_phi_reg_82179.read();
    } else {
        ap_phi_mux_data_628_V_read698_rewind_phi_fu_37997_p6 = data_628_V_read698_rewind_reg_37993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_629_V_read699_phi_phi_fu_82196_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_629_V_read699_phi_phi_fu_82196_p4 = ap_phi_mux_data_629_V_read699_rewind_phi_fu_38011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_629_V_read699_phi_phi_fu_82196_p4 = data_629_V_read.read();
        } else {
            ap_phi_mux_data_629_V_read699_phi_phi_fu_82196_p4 = ap_phi_reg_pp0_iter0_data_629_V_read699_phi_reg_82192.read();
        }
    } else {
        ap_phi_mux_data_629_V_read699_phi_phi_fu_82196_p4 = ap_phi_reg_pp0_iter0_data_629_V_read699_phi_reg_82192.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_629_V_read699_rewind_phi_fu_38011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_629_V_read699_rewind_phi_fu_38011_p6 = data_629_V_read699_phi_reg_82192.read();
    } else {
        ap_phi_mux_data_629_V_read699_rewind_phi_fu_38011_p6 = data_629_V_read699_rewind_reg_38007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_62_V_read132_phi_phi_fu_74825_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_62_V_read132_phi_phi_fu_74825_p4 = ap_phi_mux_data_62_V_read132_rewind_phi_fu_30073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_62_V_read132_phi_phi_fu_74825_p4 = data_62_V_read.read();
        } else {
            ap_phi_mux_data_62_V_read132_phi_phi_fu_74825_p4 = ap_phi_reg_pp0_iter0_data_62_V_read132_phi_reg_74821.read();
        }
    } else {
        ap_phi_mux_data_62_V_read132_phi_phi_fu_74825_p4 = ap_phi_reg_pp0_iter0_data_62_V_read132_phi_reg_74821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_62_V_read132_rewind_phi_fu_30073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_62_V_read132_rewind_phi_fu_30073_p6 = data_62_V_read132_phi_reg_74821.read();
    } else {
        ap_phi_mux_data_62_V_read132_rewind_phi_fu_30073_p6 = data_62_V_read132_rewind_reg_30069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_630_V_read700_phi_phi_fu_82209_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_630_V_read700_phi_phi_fu_82209_p4 = ap_phi_mux_data_630_V_read700_rewind_phi_fu_38025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_630_V_read700_phi_phi_fu_82209_p4 = data_630_V_read.read();
        } else {
            ap_phi_mux_data_630_V_read700_phi_phi_fu_82209_p4 = ap_phi_reg_pp0_iter0_data_630_V_read700_phi_reg_82205.read();
        }
    } else {
        ap_phi_mux_data_630_V_read700_phi_phi_fu_82209_p4 = ap_phi_reg_pp0_iter0_data_630_V_read700_phi_reg_82205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_630_V_read700_rewind_phi_fu_38025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_630_V_read700_rewind_phi_fu_38025_p6 = data_630_V_read700_phi_reg_82205.read();
    } else {
        ap_phi_mux_data_630_V_read700_rewind_phi_fu_38025_p6 = data_630_V_read700_rewind_reg_38021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_631_V_read701_phi_phi_fu_82222_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_631_V_read701_phi_phi_fu_82222_p4 = ap_phi_mux_data_631_V_read701_rewind_phi_fu_38039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_631_V_read701_phi_phi_fu_82222_p4 = data_631_V_read.read();
        } else {
            ap_phi_mux_data_631_V_read701_phi_phi_fu_82222_p4 = ap_phi_reg_pp0_iter0_data_631_V_read701_phi_reg_82218.read();
        }
    } else {
        ap_phi_mux_data_631_V_read701_phi_phi_fu_82222_p4 = ap_phi_reg_pp0_iter0_data_631_V_read701_phi_reg_82218.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_631_V_read701_rewind_phi_fu_38039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_631_V_read701_rewind_phi_fu_38039_p6 = data_631_V_read701_phi_reg_82218.read();
    } else {
        ap_phi_mux_data_631_V_read701_rewind_phi_fu_38039_p6 = data_631_V_read701_rewind_reg_38035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_632_V_read702_phi_phi_fu_82235_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_632_V_read702_phi_phi_fu_82235_p4 = ap_phi_mux_data_632_V_read702_rewind_phi_fu_38053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_632_V_read702_phi_phi_fu_82235_p4 = data_632_V_read.read();
        } else {
            ap_phi_mux_data_632_V_read702_phi_phi_fu_82235_p4 = ap_phi_reg_pp0_iter0_data_632_V_read702_phi_reg_82231.read();
        }
    } else {
        ap_phi_mux_data_632_V_read702_phi_phi_fu_82235_p4 = ap_phi_reg_pp0_iter0_data_632_V_read702_phi_reg_82231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_632_V_read702_rewind_phi_fu_38053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_632_V_read702_rewind_phi_fu_38053_p6 = data_632_V_read702_phi_reg_82231.read();
    } else {
        ap_phi_mux_data_632_V_read702_rewind_phi_fu_38053_p6 = data_632_V_read702_rewind_reg_38049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_633_V_read703_phi_phi_fu_82248_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_633_V_read703_phi_phi_fu_82248_p4 = ap_phi_mux_data_633_V_read703_rewind_phi_fu_38067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_633_V_read703_phi_phi_fu_82248_p4 = data_633_V_read.read();
        } else {
            ap_phi_mux_data_633_V_read703_phi_phi_fu_82248_p4 = ap_phi_reg_pp0_iter0_data_633_V_read703_phi_reg_82244.read();
        }
    } else {
        ap_phi_mux_data_633_V_read703_phi_phi_fu_82248_p4 = ap_phi_reg_pp0_iter0_data_633_V_read703_phi_reg_82244.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_633_V_read703_rewind_phi_fu_38067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_633_V_read703_rewind_phi_fu_38067_p6 = data_633_V_read703_phi_reg_82244.read();
    } else {
        ap_phi_mux_data_633_V_read703_rewind_phi_fu_38067_p6 = data_633_V_read703_rewind_reg_38063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_634_V_read704_phi_phi_fu_82261_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_634_V_read704_phi_phi_fu_82261_p4 = ap_phi_mux_data_634_V_read704_rewind_phi_fu_38081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_634_V_read704_phi_phi_fu_82261_p4 = data_634_V_read.read();
        } else {
            ap_phi_mux_data_634_V_read704_phi_phi_fu_82261_p4 = ap_phi_reg_pp0_iter0_data_634_V_read704_phi_reg_82257.read();
        }
    } else {
        ap_phi_mux_data_634_V_read704_phi_phi_fu_82261_p4 = ap_phi_reg_pp0_iter0_data_634_V_read704_phi_reg_82257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_634_V_read704_rewind_phi_fu_38081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_634_V_read704_rewind_phi_fu_38081_p6 = data_634_V_read704_phi_reg_82257.read();
    } else {
        ap_phi_mux_data_634_V_read704_rewind_phi_fu_38081_p6 = data_634_V_read704_rewind_reg_38077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_635_V_read705_phi_phi_fu_82274_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_635_V_read705_phi_phi_fu_82274_p4 = ap_phi_mux_data_635_V_read705_rewind_phi_fu_38095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_635_V_read705_phi_phi_fu_82274_p4 = data_635_V_read.read();
        } else {
            ap_phi_mux_data_635_V_read705_phi_phi_fu_82274_p4 = ap_phi_reg_pp0_iter0_data_635_V_read705_phi_reg_82270.read();
        }
    } else {
        ap_phi_mux_data_635_V_read705_phi_phi_fu_82274_p4 = ap_phi_reg_pp0_iter0_data_635_V_read705_phi_reg_82270.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_635_V_read705_rewind_phi_fu_38095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_635_V_read705_rewind_phi_fu_38095_p6 = data_635_V_read705_phi_reg_82270.read();
    } else {
        ap_phi_mux_data_635_V_read705_rewind_phi_fu_38095_p6 = data_635_V_read705_rewind_reg_38091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_636_V_read706_phi_phi_fu_82287_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_636_V_read706_phi_phi_fu_82287_p4 = ap_phi_mux_data_636_V_read706_rewind_phi_fu_38109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_636_V_read706_phi_phi_fu_82287_p4 = data_636_V_read.read();
        } else {
            ap_phi_mux_data_636_V_read706_phi_phi_fu_82287_p4 = ap_phi_reg_pp0_iter0_data_636_V_read706_phi_reg_82283.read();
        }
    } else {
        ap_phi_mux_data_636_V_read706_phi_phi_fu_82287_p4 = ap_phi_reg_pp0_iter0_data_636_V_read706_phi_reg_82283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_636_V_read706_rewind_phi_fu_38109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_636_V_read706_rewind_phi_fu_38109_p6 = data_636_V_read706_phi_reg_82283.read();
    } else {
        ap_phi_mux_data_636_V_read706_rewind_phi_fu_38109_p6 = data_636_V_read706_rewind_reg_38105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_637_V_read707_phi_phi_fu_82300_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_637_V_read707_phi_phi_fu_82300_p4 = ap_phi_mux_data_637_V_read707_rewind_phi_fu_38123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_637_V_read707_phi_phi_fu_82300_p4 = data_637_V_read.read();
        } else {
            ap_phi_mux_data_637_V_read707_phi_phi_fu_82300_p4 = ap_phi_reg_pp0_iter0_data_637_V_read707_phi_reg_82296.read();
        }
    } else {
        ap_phi_mux_data_637_V_read707_phi_phi_fu_82300_p4 = ap_phi_reg_pp0_iter0_data_637_V_read707_phi_reg_82296.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_637_V_read707_rewind_phi_fu_38123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_637_V_read707_rewind_phi_fu_38123_p6 = data_637_V_read707_phi_reg_82296.read();
    } else {
        ap_phi_mux_data_637_V_read707_rewind_phi_fu_38123_p6 = data_637_V_read707_rewind_reg_38119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_638_V_read708_phi_phi_fu_82313_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_638_V_read708_phi_phi_fu_82313_p4 = ap_phi_mux_data_638_V_read708_rewind_phi_fu_38137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_638_V_read708_phi_phi_fu_82313_p4 = data_638_V_read.read();
        } else {
            ap_phi_mux_data_638_V_read708_phi_phi_fu_82313_p4 = ap_phi_reg_pp0_iter0_data_638_V_read708_phi_reg_82309.read();
        }
    } else {
        ap_phi_mux_data_638_V_read708_phi_phi_fu_82313_p4 = ap_phi_reg_pp0_iter0_data_638_V_read708_phi_reg_82309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_638_V_read708_rewind_phi_fu_38137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_638_V_read708_rewind_phi_fu_38137_p6 = data_638_V_read708_phi_reg_82309.read();
    } else {
        ap_phi_mux_data_638_V_read708_rewind_phi_fu_38137_p6 = data_638_V_read708_rewind_reg_38133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_639_V_read709_phi_phi_fu_82326_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_639_V_read709_phi_phi_fu_82326_p4 = ap_phi_mux_data_639_V_read709_rewind_phi_fu_38151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_639_V_read709_phi_phi_fu_82326_p4 = data_639_V_read.read();
        } else {
            ap_phi_mux_data_639_V_read709_phi_phi_fu_82326_p4 = ap_phi_reg_pp0_iter0_data_639_V_read709_phi_reg_82322.read();
        }
    } else {
        ap_phi_mux_data_639_V_read709_phi_phi_fu_82326_p4 = ap_phi_reg_pp0_iter0_data_639_V_read709_phi_reg_82322.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_639_V_read709_rewind_phi_fu_38151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_639_V_read709_rewind_phi_fu_38151_p6 = data_639_V_read709_phi_reg_82322.read();
    } else {
        ap_phi_mux_data_639_V_read709_rewind_phi_fu_38151_p6 = data_639_V_read709_rewind_reg_38147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_63_V_read133_phi_phi_fu_74838_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_63_V_read133_phi_phi_fu_74838_p4 = ap_phi_mux_data_63_V_read133_rewind_phi_fu_30087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_63_V_read133_phi_phi_fu_74838_p4 = data_63_V_read.read();
        } else {
            ap_phi_mux_data_63_V_read133_phi_phi_fu_74838_p4 = ap_phi_reg_pp0_iter0_data_63_V_read133_phi_reg_74834.read();
        }
    } else {
        ap_phi_mux_data_63_V_read133_phi_phi_fu_74838_p4 = ap_phi_reg_pp0_iter0_data_63_V_read133_phi_reg_74834.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_63_V_read133_rewind_phi_fu_30087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_63_V_read133_rewind_phi_fu_30087_p6 = data_63_V_read133_phi_reg_74834.read();
    } else {
        ap_phi_mux_data_63_V_read133_rewind_phi_fu_30087_p6 = data_63_V_read133_rewind_reg_30083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_640_V_read710_phi_phi_fu_82339_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_640_V_read710_phi_phi_fu_82339_p4 = ap_phi_mux_data_640_V_read710_rewind_phi_fu_38165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_640_V_read710_phi_phi_fu_82339_p4 = data_640_V_read.read();
        } else {
            ap_phi_mux_data_640_V_read710_phi_phi_fu_82339_p4 = ap_phi_reg_pp0_iter0_data_640_V_read710_phi_reg_82335.read();
        }
    } else {
        ap_phi_mux_data_640_V_read710_phi_phi_fu_82339_p4 = ap_phi_reg_pp0_iter0_data_640_V_read710_phi_reg_82335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_640_V_read710_rewind_phi_fu_38165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_640_V_read710_rewind_phi_fu_38165_p6 = data_640_V_read710_phi_reg_82335.read();
    } else {
        ap_phi_mux_data_640_V_read710_rewind_phi_fu_38165_p6 = data_640_V_read710_rewind_reg_38161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_641_V_read711_phi_phi_fu_82352_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_641_V_read711_phi_phi_fu_82352_p4 = ap_phi_mux_data_641_V_read711_rewind_phi_fu_38179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_641_V_read711_phi_phi_fu_82352_p4 = data_641_V_read.read();
        } else {
            ap_phi_mux_data_641_V_read711_phi_phi_fu_82352_p4 = ap_phi_reg_pp0_iter0_data_641_V_read711_phi_reg_82348.read();
        }
    } else {
        ap_phi_mux_data_641_V_read711_phi_phi_fu_82352_p4 = ap_phi_reg_pp0_iter0_data_641_V_read711_phi_reg_82348.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_641_V_read711_rewind_phi_fu_38179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_641_V_read711_rewind_phi_fu_38179_p6 = data_641_V_read711_phi_reg_82348.read();
    } else {
        ap_phi_mux_data_641_V_read711_rewind_phi_fu_38179_p6 = data_641_V_read711_rewind_reg_38175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_642_V_read712_phi_phi_fu_82365_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_642_V_read712_phi_phi_fu_82365_p4 = ap_phi_mux_data_642_V_read712_rewind_phi_fu_38193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_642_V_read712_phi_phi_fu_82365_p4 = data_642_V_read.read();
        } else {
            ap_phi_mux_data_642_V_read712_phi_phi_fu_82365_p4 = ap_phi_reg_pp0_iter0_data_642_V_read712_phi_reg_82361.read();
        }
    } else {
        ap_phi_mux_data_642_V_read712_phi_phi_fu_82365_p4 = ap_phi_reg_pp0_iter0_data_642_V_read712_phi_reg_82361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_642_V_read712_rewind_phi_fu_38193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_642_V_read712_rewind_phi_fu_38193_p6 = data_642_V_read712_phi_reg_82361.read();
    } else {
        ap_phi_mux_data_642_V_read712_rewind_phi_fu_38193_p6 = data_642_V_read712_rewind_reg_38189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_643_V_read713_phi_phi_fu_82378_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_643_V_read713_phi_phi_fu_82378_p4 = ap_phi_mux_data_643_V_read713_rewind_phi_fu_38207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_643_V_read713_phi_phi_fu_82378_p4 = data_643_V_read.read();
        } else {
            ap_phi_mux_data_643_V_read713_phi_phi_fu_82378_p4 = ap_phi_reg_pp0_iter0_data_643_V_read713_phi_reg_82374.read();
        }
    } else {
        ap_phi_mux_data_643_V_read713_phi_phi_fu_82378_p4 = ap_phi_reg_pp0_iter0_data_643_V_read713_phi_reg_82374.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_643_V_read713_rewind_phi_fu_38207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_643_V_read713_rewind_phi_fu_38207_p6 = data_643_V_read713_phi_reg_82374.read();
    } else {
        ap_phi_mux_data_643_V_read713_rewind_phi_fu_38207_p6 = data_643_V_read713_rewind_reg_38203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_644_V_read714_phi_phi_fu_82391_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_644_V_read714_phi_phi_fu_82391_p4 = ap_phi_mux_data_644_V_read714_rewind_phi_fu_38221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_644_V_read714_phi_phi_fu_82391_p4 = data_644_V_read.read();
        } else {
            ap_phi_mux_data_644_V_read714_phi_phi_fu_82391_p4 = ap_phi_reg_pp0_iter0_data_644_V_read714_phi_reg_82387.read();
        }
    } else {
        ap_phi_mux_data_644_V_read714_phi_phi_fu_82391_p4 = ap_phi_reg_pp0_iter0_data_644_V_read714_phi_reg_82387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_644_V_read714_rewind_phi_fu_38221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_644_V_read714_rewind_phi_fu_38221_p6 = data_644_V_read714_phi_reg_82387.read();
    } else {
        ap_phi_mux_data_644_V_read714_rewind_phi_fu_38221_p6 = data_644_V_read714_rewind_reg_38217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_645_V_read715_phi_phi_fu_82404_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_645_V_read715_phi_phi_fu_82404_p4 = ap_phi_mux_data_645_V_read715_rewind_phi_fu_38235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_645_V_read715_phi_phi_fu_82404_p4 = data_645_V_read.read();
        } else {
            ap_phi_mux_data_645_V_read715_phi_phi_fu_82404_p4 = ap_phi_reg_pp0_iter0_data_645_V_read715_phi_reg_82400.read();
        }
    } else {
        ap_phi_mux_data_645_V_read715_phi_phi_fu_82404_p4 = ap_phi_reg_pp0_iter0_data_645_V_read715_phi_reg_82400.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_645_V_read715_rewind_phi_fu_38235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_645_V_read715_rewind_phi_fu_38235_p6 = data_645_V_read715_phi_reg_82400.read();
    } else {
        ap_phi_mux_data_645_V_read715_rewind_phi_fu_38235_p6 = data_645_V_read715_rewind_reg_38231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_646_V_read716_phi_phi_fu_82417_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_646_V_read716_phi_phi_fu_82417_p4 = ap_phi_mux_data_646_V_read716_rewind_phi_fu_38249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_646_V_read716_phi_phi_fu_82417_p4 = data_646_V_read.read();
        } else {
            ap_phi_mux_data_646_V_read716_phi_phi_fu_82417_p4 = ap_phi_reg_pp0_iter0_data_646_V_read716_phi_reg_82413.read();
        }
    } else {
        ap_phi_mux_data_646_V_read716_phi_phi_fu_82417_p4 = ap_phi_reg_pp0_iter0_data_646_V_read716_phi_reg_82413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_646_V_read716_rewind_phi_fu_38249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_646_V_read716_rewind_phi_fu_38249_p6 = data_646_V_read716_phi_reg_82413.read();
    } else {
        ap_phi_mux_data_646_V_read716_rewind_phi_fu_38249_p6 = data_646_V_read716_rewind_reg_38245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_647_V_read717_phi_phi_fu_82430_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_647_V_read717_phi_phi_fu_82430_p4 = ap_phi_mux_data_647_V_read717_rewind_phi_fu_38263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_647_V_read717_phi_phi_fu_82430_p4 = data_647_V_read.read();
        } else {
            ap_phi_mux_data_647_V_read717_phi_phi_fu_82430_p4 = ap_phi_reg_pp0_iter0_data_647_V_read717_phi_reg_82426.read();
        }
    } else {
        ap_phi_mux_data_647_V_read717_phi_phi_fu_82430_p4 = ap_phi_reg_pp0_iter0_data_647_V_read717_phi_reg_82426.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_647_V_read717_rewind_phi_fu_38263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_647_V_read717_rewind_phi_fu_38263_p6 = data_647_V_read717_phi_reg_82426.read();
    } else {
        ap_phi_mux_data_647_V_read717_rewind_phi_fu_38263_p6 = data_647_V_read717_rewind_reg_38259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_648_V_read718_phi_phi_fu_82443_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_648_V_read718_phi_phi_fu_82443_p4 = ap_phi_mux_data_648_V_read718_rewind_phi_fu_38277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_648_V_read718_phi_phi_fu_82443_p4 = data_648_V_read.read();
        } else {
            ap_phi_mux_data_648_V_read718_phi_phi_fu_82443_p4 = ap_phi_reg_pp0_iter0_data_648_V_read718_phi_reg_82439.read();
        }
    } else {
        ap_phi_mux_data_648_V_read718_phi_phi_fu_82443_p4 = ap_phi_reg_pp0_iter0_data_648_V_read718_phi_reg_82439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_648_V_read718_rewind_phi_fu_38277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_648_V_read718_rewind_phi_fu_38277_p6 = data_648_V_read718_phi_reg_82439.read();
    } else {
        ap_phi_mux_data_648_V_read718_rewind_phi_fu_38277_p6 = data_648_V_read718_rewind_reg_38273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_649_V_read719_phi_phi_fu_82456_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_649_V_read719_phi_phi_fu_82456_p4 = ap_phi_mux_data_649_V_read719_rewind_phi_fu_38291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_649_V_read719_phi_phi_fu_82456_p4 = data_649_V_read.read();
        } else {
            ap_phi_mux_data_649_V_read719_phi_phi_fu_82456_p4 = ap_phi_reg_pp0_iter0_data_649_V_read719_phi_reg_82452.read();
        }
    } else {
        ap_phi_mux_data_649_V_read719_phi_phi_fu_82456_p4 = ap_phi_reg_pp0_iter0_data_649_V_read719_phi_reg_82452.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_649_V_read719_rewind_phi_fu_38291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_649_V_read719_rewind_phi_fu_38291_p6 = data_649_V_read719_phi_reg_82452.read();
    } else {
        ap_phi_mux_data_649_V_read719_rewind_phi_fu_38291_p6 = data_649_V_read719_rewind_reg_38287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_64_V_read134_phi_phi_fu_74851_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_64_V_read134_phi_phi_fu_74851_p4 = ap_phi_mux_data_64_V_read134_rewind_phi_fu_30101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_64_V_read134_phi_phi_fu_74851_p4 = data_64_V_read.read();
        } else {
            ap_phi_mux_data_64_V_read134_phi_phi_fu_74851_p4 = ap_phi_reg_pp0_iter0_data_64_V_read134_phi_reg_74847.read();
        }
    } else {
        ap_phi_mux_data_64_V_read134_phi_phi_fu_74851_p4 = ap_phi_reg_pp0_iter0_data_64_V_read134_phi_reg_74847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_64_V_read134_rewind_phi_fu_30101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_64_V_read134_rewind_phi_fu_30101_p6 = data_64_V_read134_phi_reg_74847.read();
    } else {
        ap_phi_mux_data_64_V_read134_rewind_phi_fu_30101_p6 = data_64_V_read134_rewind_reg_30097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_650_V_read720_phi_phi_fu_82469_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_650_V_read720_phi_phi_fu_82469_p4 = ap_phi_mux_data_650_V_read720_rewind_phi_fu_38305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_650_V_read720_phi_phi_fu_82469_p4 = data_650_V_read.read();
        } else {
            ap_phi_mux_data_650_V_read720_phi_phi_fu_82469_p4 = ap_phi_reg_pp0_iter0_data_650_V_read720_phi_reg_82465.read();
        }
    } else {
        ap_phi_mux_data_650_V_read720_phi_phi_fu_82469_p4 = ap_phi_reg_pp0_iter0_data_650_V_read720_phi_reg_82465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_650_V_read720_rewind_phi_fu_38305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_650_V_read720_rewind_phi_fu_38305_p6 = data_650_V_read720_phi_reg_82465.read();
    } else {
        ap_phi_mux_data_650_V_read720_rewind_phi_fu_38305_p6 = data_650_V_read720_rewind_reg_38301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_651_V_read721_phi_phi_fu_82482_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_651_V_read721_phi_phi_fu_82482_p4 = ap_phi_mux_data_651_V_read721_rewind_phi_fu_38319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_651_V_read721_phi_phi_fu_82482_p4 = data_651_V_read.read();
        } else {
            ap_phi_mux_data_651_V_read721_phi_phi_fu_82482_p4 = ap_phi_reg_pp0_iter0_data_651_V_read721_phi_reg_82478.read();
        }
    } else {
        ap_phi_mux_data_651_V_read721_phi_phi_fu_82482_p4 = ap_phi_reg_pp0_iter0_data_651_V_read721_phi_reg_82478.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_651_V_read721_rewind_phi_fu_38319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_651_V_read721_rewind_phi_fu_38319_p6 = data_651_V_read721_phi_reg_82478.read();
    } else {
        ap_phi_mux_data_651_V_read721_rewind_phi_fu_38319_p6 = data_651_V_read721_rewind_reg_38315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_652_V_read722_phi_phi_fu_82495_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_652_V_read722_phi_phi_fu_82495_p4 = ap_phi_mux_data_652_V_read722_rewind_phi_fu_38333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_652_V_read722_phi_phi_fu_82495_p4 = data_652_V_read.read();
        } else {
            ap_phi_mux_data_652_V_read722_phi_phi_fu_82495_p4 = ap_phi_reg_pp0_iter0_data_652_V_read722_phi_reg_82491.read();
        }
    } else {
        ap_phi_mux_data_652_V_read722_phi_phi_fu_82495_p4 = ap_phi_reg_pp0_iter0_data_652_V_read722_phi_reg_82491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_652_V_read722_rewind_phi_fu_38333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_652_V_read722_rewind_phi_fu_38333_p6 = data_652_V_read722_phi_reg_82491.read();
    } else {
        ap_phi_mux_data_652_V_read722_rewind_phi_fu_38333_p6 = data_652_V_read722_rewind_reg_38329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_653_V_read723_phi_phi_fu_82508_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_653_V_read723_phi_phi_fu_82508_p4 = ap_phi_mux_data_653_V_read723_rewind_phi_fu_38347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_653_V_read723_phi_phi_fu_82508_p4 = data_653_V_read.read();
        } else {
            ap_phi_mux_data_653_V_read723_phi_phi_fu_82508_p4 = ap_phi_reg_pp0_iter0_data_653_V_read723_phi_reg_82504.read();
        }
    } else {
        ap_phi_mux_data_653_V_read723_phi_phi_fu_82508_p4 = ap_phi_reg_pp0_iter0_data_653_V_read723_phi_reg_82504.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_653_V_read723_rewind_phi_fu_38347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_653_V_read723_rewind_phi_fu_38347_p6 = data_653_V_read723_phi_reg_82504.read();
    } else {
        ap_phi_mux_data_653_V_read723_rewind_phi_fu_38347_p6 = data_653_V_read723_rewind_reg_38343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_654_V_read724_phi_phi_fu_82521_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_654_V_read724_phi_phi_fu_82521_p4 = ap_phi_mux_data_654_V_read724_rewind_phi_fu_38361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_654_V_read724_phi_phi_fu_82521_p4 = data_654_V_read.read();
        } else {
            ap_phi_mux_data_654_V_read724_phi_phi_fu_82521_p4 = ap_phi_reg_pp0_iter0_data_654_V_read724_phi_reg_82517.read();
        }
    } else {
        ap_phi_mux_data_654_V_read724_phi_phi_fu_82521_p4 = ap_phi_reg_pp0_iter0_data_654_V_read724_phi_reg_82517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_654_V_read724_rewind_phi_fu_38361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_654_V_read724_rewind_phi_fu_38361_p6 = data_654_V_read724_phi_reg_82517.read();
    } else {
        ap_phi_mux_data_654_V_read724_rewind_phi_fu_38361_p6 = data_654_V_read724_rewind_reg_38357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_655_V_read725_phi_phi_fu_82534_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_655_V_read725_phi_phi_fu_82534_p4 = ap_phi_mux_data_655_V_read725_rewind_phi_fu_38375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_655_V_read725_phi_phi_fu_82534_p4 = data_655_V_read.read();
        } else {
            ap_phi_mux_data_655_V_read725_phi_phi_fu_82534_p4 = ap_phi_reg_pp0_iter0_data_655_V_read725_phi_reg_82530.read();
        }
    } else {
        ap_phi_mux_data_655_V_read725_phi_phi_fu_82534_p4 = ap_phi_reg_pp0_iter0_data_655_V_read725_phi_reg_82530.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_655_V_read725_rewind_phi_fu_38375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_655_V_read725_rewind_phi_fu_38375_p6 = data_655_V_read725_phi_reg_82530.read();
    } else {
        ap_phi_mux_data_655_V_read725_rewind_phi_fu_38375_p6 = data_655_V_read725_rewind_reg_38371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_656_V_read726_phi_phi_fu_82547_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_656_V_read726_phi_phi_fu_82547_p4 = ap_phi_mux_data_656_V_read726_rewind_phi_fu_38389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_656_V_read726_phi_phi_fu_82547_p4 = data_656_V_read.read();
        } else {
            ap_phi_mux_data_656_V_read726_phi_phi_fu_82547_p4 = ap_phi_reg_pp0_iter0_data_656_V_read726_phi_reg_82543.read();
        }
    } else {
        ap_phi_mux_data_656_V_read726_phi_phi_fu_82547_p4 = ap_phi_reg_pp0_iter0_data_656_V_read726_phi_reg_82543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_656_V_read726_rewind_phi_fu_38389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_656_V_read726_rewind_phi_fu_38389_p6 = data_656_V_read726_phi_reg_82543.read();
    } else {
        ap_phi_mux_data_656_V_read726_rewind_phi_fu_38389_p6 = data_656_V_read726_rewind_reg_38385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_657_V_read727_phi_phi_fu_82560_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_657_V_read727_phi_phi_fu_82560_p4 = ap_phi_mux_data_657_V_read727_rewind_phi_fu_38403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_657_V_read727_phi_phi_fu_82560_p4 = data_657_V_read.read();
        } else {
            ap_phi_mux_data_657_V_read727_phi_phi_fu_82560_p4 = ap_phi_reg_pp0_iter0_data_657_V_read727_phi_reg_82556.read();
        }
    } else {
        ap_phi_mux_data_657_V_read727_phi_phi_fu_82560_p4 = ap_phi_reg_pp0_iter0_data_657_V_read727_phi_reg_82556.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_657_V_read727_rewind_phi_fu_38403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_657_V_read727_rewind_phi_fu_38403_p6 = data_657_V_read727_phi_reg_82556.read();
    } else {
        ap_phi_mux_data_657_V_read727_rewind_phi_fu_38403_p6 = data_657_V_read727_rewind_reg_38399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_658_V_read728_phi_phi_fu_82573_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_658_V_read728_phi_phi_fu_82573_p4 = ap_phi_mux_data_658_V_read728_rewind_phi_fu_38417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_658_V_read728_phi_phi_fu_82573_p4 = data_658_V_read.read();
        } else {
            ap_phi_mux_data_658_V_read728_phi_phi_fu_82573_p4 = ap_phi_reg_pp0_iter0_data_658_V_read728_phi_reg_82569.read();
        }
    } else {
        ap_phi_mux_data_658_V_read728_phi_phi_fu_82573_p4 = ap_phi_reg_pp0_iter0_data_658_V_read728_phi_reg_82569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_658_V_read728_rewind_phi_fu_38417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_658_V_read728_rewind_phi_fu_38417_p6 = data_658_V_read728_phi_reg_82569.read();
    } else {
        ap_phi_mux_data_658_V_read728_rewind_phi_fu_38417_p6 = data_658_V_read728_rewind_reg_38413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_659_V_read729_phi_phi_fu_82586_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_659_V_read729_phi_phi_fu_82586_p4 = ap_phi_mux_data_659_V_read729_rewind_phi_fu_38431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_659_V_read729_phi_phi_fu_82586_p4 = data_659_V_read.read();
        } else {
            ap_phi_mux_data_659_V_read729_phi_phi_fu_82586_p4 = ap_phi_reg_pp0_iter0_data_659_V_read729_phi_reg_82582.read();
        }
    } else {
        ap_phi_mux_data_659_V_read729_phi_phi_fu_82586_p4 = ap_phi_reg_pp0_iter0_data_659_V_read729_phi_reg_82582.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_659_V_read729_rewind_phi_fu_38431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_659_V_read729_rewind_phi_fu_38431_p6 = data_659_V_read729_phi_reg_82582.read();
    } else {
        ap_phi_mux_data_659_V_read729_rewind_phi_fu_38431_p6 = data_659_V_read729_rewind_reg_38427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_65_V_read135_phi_phi_fu_74864_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_65_V_read135_phi_phi_fu_74864_p4 = ap_phi_mux_data_65_V_read135_rewind_phi_fu_30115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_65_V_read135_phi_phi_fu_74864_p4 = data_65_V_read.read();
        } else {
            ap_phi_mux_data_65_V_read135_phi_phi_fu_74864_p4 = ap_phi_reg_pp0_iter0_data_65_V_read135_phi_reg_74860.read();
        }
    } else {
        ap_phi_mux_data_65_V_read135_phi_phi_fu_74864_p4 = ap_phi_reg_pp0_iter0_data_65_V_read135_phi_reg_74860.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_65_V_read135_rewind_phi_fu_30115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_65_V_read135_rewind_phi_fu_30115_p6 = data_65_V_read135_phi_reg_74860.read();
    } else {
        ap_phi_mux_data_65_V_read135_rewind_phi_fu_30115_p6 = data_65_V_read135_rewind_reg_30111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_660_V_read730_phi_phi_fu_82599_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_660_V_read730_phi_phi_fu_82599_p4 = ap_phi_mux_data_660_V_read730_rewind_phi_fu_38445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_660_V_read730_phi_phi_fu_82599_p4 = data_660_V_read.read();
        } else {
            ap_phi_mux_data_660_V_read730_phi_phi_fu_82599_p4 = ap_phi_reg_pp0_iter0_data_660_V_read730_phi_reg_82595.read();
        }
    } else {
        ap_phi_mux_data_660_V_read730_phi_phi_fu_82599_p4 = ap_phi_reg_pp0_iter0_data_660_V_read730_phi_reg_82595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_660_V_read730_rewind_phi_fu_38445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_660_V_read730_rewind_phi_fu_38445_p6 = data_660_V_read730_phi_reg_82595.read();
    } else {
        ap_phi_mux_data_660_V_read730_rewind_phi_fu_38445_p6 = data_660_V_read730_rewind_reg_38441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_661_V_read731_phi_phi_fu_82612_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_661_V_read731_phi_phi_fu_82612_p4 = ap_phi_mux_data_661_V_read731_rewind_phi_fu_38459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_661_V_read731_phi_phi_fu_82612_p4 = data_661_V_read.read();
        } else {
            ap_phi_mux_data_661_V_read731_phi_phi_fu_82612_p4 = ap_phi_reg_pp0_iter0_data_661_V_read731_phi_reg_82608.read();
        }
    } else {
        ap_phi_mux_data_661_V_read731_phi_phi_fu_82612_p4 = ap_phi_reg_pp0_iter0_data_661_V_read731_phi_reg_82608.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_661_V_read731_rewind_phi_fu_38459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_661_V_read731_rewind_phi_fu_38459_p6 = data_661_V_read731_phi_reg_82608.read();
    } else {
        ap_phi_mux_data_661_V_read731_rewind_phi_fu_38459_p6 = data_661_V_read731_rewind_reg_38455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_662_V_read732_phi_phi_fu_82625_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_662_V_read732_phi_phi_fu_82625_p4 = ap_phi_mux_data_662_V_read732_rewind_phi_fu_38473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_662_V_read732_phi_phi_fu_82625_p4 = data_662_V_read.read();
        } else {
            ap_phi_mux_data_662_V_read732_phi_phi_fu_82625_p4 = ap_phi_reg_pp0_iter0_data_662_V_read732_phi_reg_82621.read();
        }
    } else {
        ap_phi_mux_data_662_V_read732_phi_phi_fu_82625_p4 = ap_phi_reg_pp0_iter0_data_662_V_read732_phi_reg_82621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_662_V_read732_rewind_phi_fu_38473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_662_V_read732_rewind_phi_fu_38473_p6 = data_662_V_read732_phi_reg_82621.read();
    } else {
        ap_phi_mux_data_662_V_read732_rewind_phi_fu_38473_p6 = data_662_V_read732_rewind_reg_38469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_663_V_read733_phi_phi_fu_82638_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_663_V_read733_phi_phi_fu_82638_p4 = ap_phi_mux_data_663_V_read733_rewind_phi_fu_38487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_663_V_read733_phi_phi_fu_82638_p4 = data_663_V_read.read();
        } else {
            ap_phi_mux_data_663_V_read733_phi_phi_fu_82638_p4 = ap_phi_reg_pp0_iter0_data_663_V_read733_phi_reg_82634.read();
        }
    } else {
        ap_phi_mux_data_663_V_read733_phi_phi_fu_82638_p4 = ap_phi_reg_pp0_iter0_data_663_V_read733_phi_reg_82634.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_663_V_read733_rewind_phi_fu_38487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_663_V_read733_rewind_phi_fu_38487_p6 = data_663_V_read733_phi_reg_82634.read();
    } else {
        ap_phi_mux_data_663_V_read733_rewind_phi_fu_38487_p6 = data_663_V_read733_rewind_reg_38483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_664_V_read734_phi_phi_fu_82651_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_664_V_read734_phi_phi_fu_82651_p4 = ap_phi_mux_data_664_V_read734_rewind_phi_fu_38501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_664_V_read734_phi_phi_fu_82651_p4 = data_664_V_read.read();
        } else {
            ap_phi_mux_data_664_V_read734_phi_phi_fu_82651_p4 = ap_phi_reg_pp0_iter0_data_664_V_read734_phi_reg_82647.read();
        }
    } else {
        ap_phi_mux_data_664_V_read734_phi_phi_fu_82651_p4 = ap_phi_reg_pp0_iter0_data_664_V_read734_phi_reg_82647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_664_V_read734_rewind_phi_fu_38501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_664_V_read734_rewind_phi_fu_38501_p6 = data_664_V_read734_phi_reg_82647.read();
    } else {
        ap_phi_mux_data_664_V_read734_rewind_phi_fu_38501_p6 = data_664_V_read734_rewind_reg_38497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_665_V_read735_phi_phi_fu_82664_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_665_V_read735_phi_phi_fu_82664_p4 = ap_phi_mux_data_665_V_read735_rewind_phi_fu_38515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_665_V_read735_phi_phi_fu_82664_p4 = data_665_V_read.read();
        } else {
            ap_phi_mux_data_665_V_read735_phi_phi_fu_82664_p4 = ap_phi_reg_pp0_iter0_data_665_V_read735_phi_reg_82660.read();
        }
    } else {
        ap_phi_mux_data_665_V_read735_phi_phi_fu_82664_p4 = ap_phi_reg_pp0_iter0_data_665_V_read735_phi_reg_82660.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_665_V_read735_rewind_phi_fu_38515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_665_V_read735_rewind_phi_fu_38515_p6 = data_665_V_read735_phi_reg_82660.read();
    } else {
        ap_phi_mux_data_665_V_read735_rewind_phi_fu_38515_p6 = data_665_V_read735_rewind_reg_38511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_666_V_read736_phi_phi_fu_82677_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_666_V_read736_phi_phi_fu_82677_p4 = ap_phi_mux_data_666_V_read736_rewind_phi_fu_38529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_666_V_read736_phi_phi_fu_82677_p4 = data_666_V_read.read();
        } else {
            ap_phi_mux_data_666_V_read736_phi_phi_fu_82677_p4 = ap_phi_reg_pp0_iter0_data_666_V_read736_phi_reg_82673.read();
        }
    } else {
        ap_phi_mux_data_666_V_read736_phi_phi_fu_82677_p4 = ap_phi_reg_pp0_iter0_data_666_V_read736_phi_reg_82673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_666_V_read736_rewind_phi_fu_38529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_666_V_read736_rewind_phi_fu_38529_p6 = data_666_V_read736_phi_reg_82673.read();
    } else {
        ap_phi_mux_data_666_V_read736_rewind_phi_fu_38529_p6 = data_666_V_read736_rewind_reg_38525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_667_V_read737_phi_phi_fu_82690_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_667_V_read737_phi_phi_fu_82690_p4 = ap_phi_mux_data_667_V_read737_rewind_phi_fu_38543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_667_V_read737_phi_phi_fu_82690_p4 = data_667_V_read.read();
        } else {
            ap_phi_mux_data_667_V_read737_phi_phi_fu_82690_p4 = ap_phi_reg_pp0_iter0_data_667_V_read737_phi_reg_82686.read();
        }
    } else {
        ap_phi_mux_data_667_V_read737_phi_phi_fu_82690_p4 = ap_phi_reg_pp0_iter0_data_667_V_read737_phi_reg_82686.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_667_V_read737_rewind_phi_fu_38543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_667_V_read737_rewind_phi_fu_38543_p6 = data_667_V_read737_phi_reg_82686.read();
    } else {
        ap_phi_mux_data_667_V_read737_rewind_phi_fu_38543_p6 = data_667_V_read737_rewind_reg_38539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_668_V_read738_phi_phi_fu_82703_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_668_V_read738_phi_phi_fu_82703_p4 = ap_phi_mux_data_668_V_read738_rewind_phi_fu_38557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_668_V_read738_phi_phi_fu_82703_p4 = data_668_V_read.read();
        } else {
            ap_phi_mux_data_668_V_read738_phi_phi_fu_82703_p4 = ap_phi_reg_pp0_iter0_data_668_V_read738_phi_reg_82699.read();
        }
    } else {
        ap_phi_mux_data_668_V_read738_phi_phi_fu_82703_p4 = ap_phi_reg_pp0_iter0_data_668_V_read738_phi_reg_82699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_668_V_read738_rewind_phi_fu_38557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_668_V_read738_rewind_phi_fu_38557_p6 = data_668_V_read738_phi_reg_82699.read();
    } else {
        ap_phi_mux_data_668_V_read738_rewind_phi_fu_38557_p6 = data_668_V_read738_rewind_reg_38553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_669_V_read739_phi_phi_fu_82716_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_669_V_read739_phi_phi_fu_82716_p4 = ap_phi_mux_data_669_V_read739_rewind_phi_fu_38571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_669_V_read739_phi_phi_fu_82716_p4 = data_669_V_read.read();
        } else {
            ap_phi_mux_data_669_V_read739_phi_phi_fu_82716_p4 = ap_phi_reg_pp0_iter0_data_669_V_read739_phi_reg_82712.read();
        }
    } else {
        ap_phi_mux_data_669_V_read739_phi_phi_fu_82716_p4 = ap_phi_reg_pp0_iter0_data_669_V_read739_phi_reg_82712.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_669_V_read739_rewind_phi_fu_38571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_669_V_read739_rewind_phi_fu_38571_p6 = data_669_V_read739_phi_reg_82712.read();
    } else {
        ap_phi_mux_data_669_V_read739_rewind_phi_fu_38571_p6 = data_669_V_read739_rewind_reg_38567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_66_V_read136_phi_phi_fu_74877_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_66_V_read136_phi_phi_fu_74877_p4 = ap_phi_mux_data_66_V_read136_rewind_phi_fu_30129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_66_V_read136_phi_phi_fu_74877_p4 = data_66_V_read.read();
        } else {
            ap_phi_mux_data_66_V_read136_phi_phi_fu_74877_p4 = ap_phi_reg_pp0_iter0_data_66_V_read136_phi_reg_74873.read();
        }
    } else {
        ap_phi_mux_data_66_V_read136_phi_phi_fu_74877_p4 = ap_phi_reg_pp0_iter0_data_66_V_read136_phi_reg_74873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_66_V_read136_rewind_phi_fu_30129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_66_V_read136_rewind_phi_fu_30129_p6 = data_66_V_read136_phi_reg_74873.read();
    } else {
        ap_phi_mux_data_66_V_read136_rewind_phi_fu_30129_p6 = data_66_V_read136_rewind_reg_30125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_670_V_read740_phi_phi_fu_82729_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_670_V_read740_phi_phi_fu_82729_p4 = ap_phi_mux_data_670_V_read740_rewind_phi_fu_38585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_670_V_read740_phi_phi_fu_82729_p4 = data_670_V_read.read();
        } else {
            ap_phi_mux_data_670_V_read740_phi_phi_fu_82729_p4 = ap_phi_reg_pp0_iter0_data_670_V_read740_phi_reg_82725.read();
        }
    } else {
        ap_phi_mux_data_670_V_read740_phi_phi_fu_82729_p4 = ap_phi_reg_pp0_iter0_data_670_V_read740_phi_reg_82725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_670_V_read740_rewind_phi_fu_38585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_670_V_read740_rewind_phi_fu_38585_p6 = data_670_V_read740_phi_reg_82725.read();
    } else {
        ap_phi_mux_data_670_V_read740_rewind_phi_fu_38585_p6 = data_670_V_read740_rewind_reg_38581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_671_V_read741_phi_phi_fu_82742_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_671_V_read741_phi_phi_fu_82742_p4 = ap_phi_mux_data_671_V_read741_rewind_phi_fu_38599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_671_V_read741_phi_phi_fu_82742_p4 = data_671_V_read.read();
        } else {
            ap_phi_mux_data_671_V_read741_phi_phi_fu_82742_p4 = ap_phi_reg_pp0_iter0_data_671_V_read741_phi_reg_82738.read();
        }
    } else {
        ap_phi_mux_data_671_V_read741_phi_phi_fu_82742_p4 = ap_phi_reg_pp0_iter0_data_671_V_read741_phi_reg_82738.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_671_V_read741_rewind_phi_fu_38599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_671_V_read741_rewind_phi_fu_38599_p6 = data_671_V_read741_phi_reg_82738.read();
    } else {
        ap_phi_mux_data_671_V_read741_rewind_phi_fu_38599_p6 = data_671_V_read741_rewind_reg_38595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_672_V_read742_phi_phi_fu_82755_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_672_V_read742_phi_phi_fu_82755_p4 = ap_phi_mux_data_672_V_read742_rewind_phi_fu_38613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_672_V_read742_phi_phi_fu_82755_p4 = data_672_V_read.read();
        } else {
            ap_phi_mux_data_672_V_read742_phi_phi_fu_82755_p4 = ap_phi_reg_pp0_iter0_data_672_V_read742_phi_reg_82751.read();
        }
    } else {
        ap_phi_mux_data_672_V_read742_phi_phi_fu_82755_p4 = ap_phi_reg_pp0_iter0_data_672_V_read742_phi_reg_82751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_672_V_read742_rewind_phi_fu_38613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_672_V_read742_rewind_phi_fu_38613_p6 = data_672_V_read742_phi_reg_82751.read();
    } else {
        ap_phi_mux_data_672_V_read742_rewind_phi_fu_38613_p6 = data_672_V_read742_rewind_reg_38609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_673_V_read743_phi_phi_fu_82768_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_673_V_read743_phi_phi_fu_82768_p4 = ap_phi_mux_data_673_V_read743_rewind_phi_fu_38627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_673_V_read743_phi_phi_fu_82768_p4 = data_673_V_read.read();
        } else {
            ap_phi_mux_data_673_V_read743_phi_phi_fu_82768_p4 = ap_phi_reg_pp0_iter0_data_673_V_read743_phi_reg_82764.read();
        }
    } else {
        ap_phi_mux_data_673_V_read743_phi_phi_fu_82768_p4 = ap_phi_reg_pp0_iter0_data_673_V_read743_phi_reg_82764.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_673_V_read743_rewind_phi_fu_38627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_673_V_read743_rewind_phi_fu_38627_p6 = data_673_V_read743_phi_reg_82764.read();
    } else {
        ap_phi_mux_data_673_V_read743_rewind_phi_fu_38627_p6 = data_673_V_read743_rewind_reg_38623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_674_V_read744_phi_phi_fu_82781_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_674_V_read744_phi_phi_fu_82781_p4 = ap_phi_mux_data_674_V_read744_rewind_phi_fu_38641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_674_V_read744_phi_phi_fu_82781_p4 = data_674_V_read.read();
        } else {
            ap_phi_mux_data_674_V_read744_phi_phi_fu_82781_p4 = ap_phi_reg_pp0_iter0_data_674_V_read744_phi_reg_82777.read();
        }
    } else {
        ap_phi_mux_data_674_V_read744_phi_phi_fu_82781_p4 = ap_phi_reg_pp0_iter0_data_674_V_read744_phi_reg_82777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_674_V_read744_rewind_phi_fu_38641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_674_V_read744_rewind_phi_fu_38641_p6 = data_674_V_read744_phi_reg_82777.read();
    } else {
        ap_phi_mux_data_674_V_read744_rewind_phi_fu_38641_p6 = data_674_V_read744_rewind_reg_38637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_675_V_read745_phi_phi_fu_82794_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_675_V_read745_phi_phi_fu_82794_p4 = ap_phi_mux_data_675_V_read745_rewind_phi_fu_38655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_675_V_read745_phi_phi_fu_82794_p4 = data_675_V_read.read();
        } else {
            ap_phi_mux_data_675_V_read745_phi_phi_fu_82794_p4 = ap_phi_reg_pp0_iter0_data_675_V_read745_phi_reg_82790.read();
        }
    } else {
        ap_phi_mux_data_675_V_read745_phi_phi_fu_82794_p4 = ap_phi_reg_pp0_iter0_data_675_V_read745_phi_reg_82790.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_675_V_read745_rewind_phi_fu_38655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_675_V_read745_rewind_phi_fu_38655_p6 = data_675_V_read745_phi_reg_82790.read();
    } else {
        ap_phi_mux_data_675_V_read745_rewind_phi_fu_38655_p6 = data_675_V_read745_rewind_reg_38651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_676_V_read746_phi_phi_fu_82807_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_676_V_read746_phi_phi_fu_82807_p4 = ap_phi_mux_data_676_V_read746_rewind_phi_fu_38669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_676_V_read746_phi_phi_fu_82807_p4 = data_676_V_read.read();
        } else {
            ap_phi_mux_data_676_V_read746_phi_phi_fu_82807_p4 = ap_phi_reg_pp0_iter0_data_676_V_read746_phi_reg_82803.read();
        }
    } else {
        ap_phi_mux_data_676_V_read746_phi_phi_fu_82807_p4 = ap_phi_reg_pp0_iter0_data_676_V_read746_phi_reg_82803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_676_V_read746_rewind_phi_fu_38669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_676_V_read746_rewind_phi_fu_38669_p6 = data_676_V_read746_phi_reg_82803.read();
    } else {
        ap_phi_mux_data_676_V_read746_rewind_phi_fu_38669_p6 = data_676_V_read746_rewind_reg_38665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_677_V_read747_phi_phi_fu_82820_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_677_V_read747_phi_phi_fu_82820_p4 = ap_phi_mux_data_677_V_read747_rewind_phi_fu_38683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_677_V_read747_phi_phi_fu_82820_p4 = data_677_V_read.read();
        } else {
            ap_phi_mux_data_677_V_read747_phi_phi_fu_82820_p4 = ap_phi_reg_pp0_iter0_data_677_V_read747_phi_reg_82816.read();
        }
    } else {
        ap_phi_mux_data_677_V_read747_phi_phi_fu_82820_p4 = ap_phi_reg_pp0_iter0_data_677_V_read747_phi_reg_82816.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_677_V_read747_rewind_phi_fu_38683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_677_V_read747_rewind_phi_fu_38683_p6 = data_677_V_read747_phi_reg_82816.read();
    } else {
        ap_phi_mux_data_677_V_read747_rewind_phi_fu_38683_p6 = data_677_V_read747_rewind_reg_38679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_678_V_read748_phi_phi_fu_82833_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_678_V_read748_phi_phi_fu_82833_p4 = ap_phi_mux_data_678_V_read748_rewind_phi_fu_38697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_678_V_read748_phi_phi_fu_82833_p4 = data_678_V_read.read();
        } else {
            ap_phi_mux_data_678_V_read748_phi_phi_fu_82833_p4 = ap_phi_reg_pp0_iter0_data_678_V_read748_phi_reg_82829.read();
        }
    } else {
        ap_phi_mux_data_678_V_read748_phi_phi_fu_82833_p4 = ap_phi_reg_pp0_iter0_data_678_V_read748_phi_reg_82829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_678_V_read748_rewind_phi_fu_38697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_678_V_read748_rewind_phi_fu_38697_p6 = data_678_V_read748_phi_reg_82829.read();
    } else {
        ap_phi_mux_data_678_V_read748_rewind_phi_fu_38697_p6 = data_678_V_read748_rewind_reg_38693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_679_V_read749_phi_phi_fu_82846_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_679_V_read749_phi_phi_fu_82846_p4 = ap_phi_mux_data_679_V_read749_rewind_phi_fu_38711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_679_V_read749_phi_phi_fu_82846_p4 = data_679_V_read.read();
        } else {
            ap_phi_mux_data_679_V_read749_phi_phi_fu_82846_p4 = ap_phi_reg_pp0_iter0_data_679_V_read749_phi_reg_82842.read();
        }
    } else {
        ap_phi_mux_data_679_V_read749_phi_phi_fu_82846_p4 = ap_phi_reg_pp0_iter0_data_679_V_read749_phi_reg_82842.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_679_V_read749_rewind_phi_fu_38711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_679_V_read749_rewind_phi_fu_38711_p6 = data_679_V_read749_phi_reg_82842.read();
    } else {
        ap_phi_mux_data_679_V_read749_rewind_phi_fu_38711_p6 = data_679_V_read749_rewind_reg_38707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_67_V_read137_phi_phi_fu_74890_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_67_V_read137_phi_phi_fu_74890_p4 = ap_phi_mux_data_67_V_read137_rewind_phi_fu_30143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_67_V_read137_phi_phi_fu_74890_p4 = data_67_V_read.read();
        } else {
            ap_phi_mux_data_67_V_read137_phi_phi_fu_74890_p4 = ap_phi_reg_pp0_iter0_data_67_V_read137_phi_reg_74886.read();
        }
    } else {
        ap_phi_mux_data_67_V_read137_phi_phi_fu_74890_p4 = ap_phi_reg_pp0_iter0_data_67_V_read137_phi_reg_74886.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_67_V_read137_rewind_phi_fu_30143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_67_V_read137_rewind_phi_fu_30143_p6 = data_67_V_read137_phi_reg_74886.read();
    } else {
        ap_phi_mux_data_67_V_read137_rewind_phi_fu_30143_p6 = data_67_V_read137_rewind_reg_30139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_680_V_read750_phi_phi_fu_82859_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_680_V_read750_phi_phi_fu_82859_p4 = ap_phi_mux_data_680_V_read750_rewind_phi_fu_38725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_680_V_read750_phi_phi_fu_82859_p4 = data_680_V_read.read();
        } else {
            ap_phi_mux_data_680_V_read750_phi_phi_fu_82859_p4 = ap_phi_reg_pp0_iter0_data_680_V_read750_phi_reg_82855.read();
        }
    } else {
        ap_phi_mux_data_680_V_read750_phi_phi_fu_82859_p4 = ap_phi_reg_pp0_iter0_data_680_V_read750_phi_reg_82855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_680_V_read750_rewind_phi_fu_38725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_680_V_read750_rewind_phi_fu_38725_p6 = data_680_V_read750_phi_reg_82855.read();
    } else {
        ap_phi_mux_data_680_V_read750_rewind_phi_fu_38725_p6 = data_680_V_read750_rewind_reg_38721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_681_V_read751_phi_phi_fu_82872_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_681_V_read751_phi_phi_fu_82872_p4 = ap_phi_mux_data_681_V_read751_rewind_phi_fu_38739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_681_V_read751_phi_phi_fu_82872_p4 = data_681_V_read.read();
        } else {
            ap_phi_mux_data_681_V_read751_phi_phi_fu_82872_p4 = ap_phi_reg_pp0_iter0_data_681_V_read751_phi_reg_82868.read();
        }
    } else {
        ap_phi_mux_data_681_V_read751_phi_phi_fu_82872_p4 = ap_phi_reg_pp0_iter0_data_681_V_read751_phi_reg_82868.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_681_V_read751_rewind_phi_fu_38739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_681_V_read751_rewind_phi_fu_38739_p6 = data_681_V_read751_phi_reg_82868.read();
    } else {
        ap_phi_mux_data_681_V_read751_rewind_phi_fu_38739_p6 = data_681_V_read751_rewind_reg_38735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_682_V_read752_phi_phi_fu_82885_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_682_V_read752_phi_phi_fu_82885_p4 = ap_phi_mux_data_682_V_read752_rewind_phi_fu_38753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_682_V_read752_phi_phi_fu_82885_p4 = data_682_V_read.read();
        } else {
            ap_phi_mux_data_682_V_read752_phi_phi_fu_82885_p4 = ap_phi_reg_pp0_iter0_data_682_V_read752_phi_reg_82881.read();
        }
    } else {
        ap_phi_mux_data_682_V_read752_phi_phi_fu_82885_p4 = ap_phi_reg_pp0_iter0_data_682_V_read752_phi_reg_82881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_682_V_read752_rewind_phi_fu_38753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_682_V_read752_rewind_phi_fu_38753_p6 = data_682_V_read752_phi_reg_82881.read();
    } else {
        ap_phi_mux_data_682_V_read752_rewind_phi_fu_38753_p6 = data_682_V_read752_rewind_reg_38749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_683_V_read753_phi_phi_fu_82898_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_683_V_read753_phi_phi_fu_82898_p4 = ap_phi_mux_data_683_V_read753_rewind_phi_fu_38767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_683_V_read753_phi_phi_fu_82898_p4 = data_683_V_read.read();
        } else {
            ap_phi_mux_data_683_V_read753_phi_phi_fu_82898_p4 = ap_phi_reg_pp0_iter0_data_683_V_read753_phi_reg_82894.read();
        }
    } else {
        ap_phi_mux_data_683_V_read753_phi_phi_fu_82898_p4 = ap_phi_reg_pp0_iter0_data_683_V_read753_phi_reg_82894.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_683_V_read753_rewind_phi_fu_38767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_683_V_read753_rewind_phi_fu_38767_p6 = data_683_V_read753_phi_reg_82894.read();
    } else {
        ap_phi_mux_data_683_V_read753_rewind_phi_fu_38767_p6 = data_683_V_read753_rewind_reg_38763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_684_V_read754_phi_phi_fu_82911_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_684_V_read754_phi_phi_fu_82911_p4 = ap_phi_mux_data_684_V_read754_rewind_phi_fu_38781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_684_V_read754_phi_phi_fu_82911_p4 = data_684_V_read.read();
        } else {
            ap_phi_mux_data_684_V_read754_phi_phi_fu_82911_p4 = ap_phi_reg_pp0_iter0_data_684_V_read754_phi_reg_82907.read();
        }
    } else {
        ap_phi_mux_data_684_V_read754_phi_phi_fu_82911_p4 = ap_phi_reg_pp0_iter0_data_684_V_read754_phi_reg_82907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_684_V_read754_rewind_phi_fu_38781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_684_V_read754_rewind_phi_fu_38781_p6 = data_684_V_read754_phi_reg_82907.read();
    } else {
        ap_phi_mux_data_684_V_read754_rewind_phi_fu_38781_p6 = data_684_V_read754_rewind_reg_38777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_685_V_read755_phi_phi_fu_82924_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_685_V_read755_phi_phi_fu_82924_p4 = ap_phi_mux_data_685_V_read755_rewind_phi_fu_38795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_685_V_read755_phi_phi_fu_82924_p4 = data_685_V_read.read();
        } else {
            ap_phi_mux_data_685_V_read755_phi_phi_fu_82924_p4 = ap_phi_reg_pp0_iter0_data_685_V_read755_phi_reg_82920.read();
        }
    } else {
        ap_phi_mux_data_685_V_read755_phi_phi_fu_82924_p4 = ap_phi_reg_pp0_iter0_data_685_V_read755_phi_reg_82920.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_685_V_read755_rewind_phi_fu_38795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_685_V_read755_rewind_phi_fu_38795_p6 = data_685_V_read755_phi_reg_82920.read();
    } else {
        ap_phi_mux_data_685_V_read755_rewind_phi_fu_38795_p6 = data_685_V_read755_rewind_reg_38791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_686_V_read756_phi_phi_fu_82937_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_686_V_read756_phi_phi_fu_82937_p4 = ap_phi_mux_data_686_V_read756_rewind_phi_fu_38809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_686_V_read756_phi_phi_fu_82937_p4 = data_686_V_read.read();
        } else {
            ap_phi_mux_data_686_V_read756_phi_phi_fu_82937_p4 = ap_phi_reg_pp0_iter0_data_686_V_read756_phi_reg_82933.read();
        }
    } else {
        ap_phi_mux_data_686_V_read756_phi_phi_fu_82937_p4 = ap_phi_reg_pp0_iter0_data_686_V_read756_phi_reg_82933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_686_V_read756_rewind_phi_fu_38809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_686_V_read756_rewind_phi_fu_38809_p6 = data_686_V_read756_phi_reg_82933.read();
    } else {
        ap_phi_mux_data_686_V_read756_rewind_phi_fu_38809_p6 = data_686_V_read756_rewind_reg_38805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_687_V_read757_phi_phi_fu_82950_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_687_V_read757_phi_phi_fu_82950_p4 = ap_phi_mux_data_687_V_read757_rewind_phi_fu_38823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_687_V_read757_phi_phi_fu_82950_p4 = data_687_V_read.read();
        } else {
            ap_phi_mux_data_687_V_read757_phi_phi_fu_82950_p4 = ap_phi_reg_pp0_iter0_data_687_V_read757_phi_reg_82946.read();
        }
    } else {
        ap_phi_mux_data_687_V_read757_phi_phi_fu_82950_p4 = ap_phi_reg_pp0_iter0_data_687_V_read757_phi_reg_82946.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_687_V_read757_rewind_phi_fu_38823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_687_V_read757_rewind_phi_fu_38823_p6 = data_687_V_read757_phi_reg_82946.read();
    } else {
        ap_phi_mux_data_687_V_read757_rewind_phi_fu_38823_p6 = data_687_V_read757_rewind_reg_38819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_688_V_read758_phi_phi_fu_82963_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_688_V_read758_phi_phi_fu_82963_p4 = ap_phi_mux_data_688_V_read758_rewind_phi_fu_38837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_688_V_read758_phi_phi_fu_82963_p4 = data_688_V_read.read();
        } else {
            ap_phi_mux_data_688_V_read758_phi_phi_fu_82963_p4 = ap_phi_reg_pp0_iter0_data_688_V_read758_phi_reg_82959.read();
        }
    } else {
        ap_phi_mux_data_688_V_read758_phi_phi_fu_82963_p4 = ap_phi_reg_pp0_iter0_data_688_V_read758_phi_reg_82959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_688_V_read758_rewind_phi_fu_38837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_688_V_read758_rewind_phi_fu_38837_p6 = data_688_V_read758_phi_reg_82959.read();
    } else {
        ap_phi_mux_data_688_V_read758_rewind_phi_fu_38837_p6 = data_688_V_read758_rewind_reg_38833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_689_V_read759_phi_phi_fu_82976_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_689_V_read759_phi_phi_fu_82976_p4 = ap_phi_mux_data_689_V_read759_rewind_phi_fu_38851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_689_V_read759_phi_phi_fu_82976_p4 = data_689_V_read.read();
        } else {
            ap_phi_mux_data_689_V_read759_phi_phi_fu_82976_p4 = ap_phi_reg_pp0_iter0_data_689_V_read759_phi_reg_82972.read();
        }
    } else {
        ap_phi_mux_data_689_V_read759_phi_phi_fu_82976_p4 = ap_phi_reg_pp0_iter0_data_689_V_read759_phi_reg_82972.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_689_V_read759_rewind_phi_fu_38851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_689_V_read759_rewind_phi_fu_38851_p6 = data_689_V_read759_phi_reg_82972.read();
    } else {
        ap_phi_mux_data_689_V_read759_rewind_phi_fu_38851_p6 = data_689_V_read759_rewind_reg_38847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_68_V_read138_phi_phi_fu_74903_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_68_V_read138_phi_phi_fu_74903_p4 = ap_phi_mux_data_68_V_read138_rewind_phi_fu_30157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_68_V_read138_phi_phi_fu_74903_p4 = data_68_V_read.read();
        } else {
            ap_phi_mux_data_68_V_read138_phi_phi_fu_74903_p4 = ap_phi_reg_pp0_iter0_data_68_V_read138_phi_reg_74899.read();
        }
    } else {
        ap_phi_mux_data_68_V_read138_phi_phi_fu_74903_p4 = ap_phi_reg_pp0_iter0_data_68_V_read138_phi_reg_74899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_68_V_read138_rewind_phi_fu_30157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_68_V_read138_rewind_phi_fu_30157_p6 = data_68_V_read138_phi_reg_74899.read();
    } else {
        ap_phi_mux_data_68_V_read138_rewind_phi_fu_30157_p6 = data_68_V_read138_rewind_reg_30153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_690_V_read760_phi_phi_fu_82989_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_690_V_read760_phi_phi_fu_82989_p4 = ap_phi_mux_data_690_V_read760_rewind_phi_fu_38865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_690_V_read760_phi_phi_fu_82989_p4 = data_690_V_read.read();
        } else {
            ap_phi_mux_data_690_V_read760_phi_phi_fu_82989_p4 = ap_phi_reg_pp0_iter0_data_690_V_read760_phi_reg_82985.read();
        }
    } else {
        ap_phi_mux_data_690_V_read760_phi_phi_fu_82989_p4 = ap_phi_reg_pp0_iter0_data_690_V_read760_phi_reg_82985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_690_V_read760_rewind_phi_fu_38865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_690_V_read760_rewind_phi_fu_38865_p6 = data_690_V_read760_phi_reg_82985.read();
    } else {
        ap_phi_mux_data_690_V_read760_rewind_phi_fu_38865_p6 = data_690_V_read760_rewind_reg_38861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_691_V_read761_phi_phi_fu_83002_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_691_V_read761_phi_phi_fu_83002_p4 = ap_phi_mux_data_691_V_read761_rewind_phi_fu_38879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_691_V_read761_phi_phi_fu_83002_p4 = data_691_V_read.read();
        } else {
            ap_phi_mux_data_691_V_read761_phi_phi_fu_83002_p4 = ap_phi_reg_pp0_iter0_data_691_V_read761_phi_reg_82998.read();
        }
    } else {
        ap_phi_mux_data_691_V_read761_phi_phi_fu_83002_p4 = ap_phi_reg_pp0_iter0_data_691_V_read761_phi_reg_82998.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_691_V_read761_rewind_phi_fu_38879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_691_V_read761_rewind_phi_fu_38879_p6 = data_691_V_read761_phi_reg_82998.read();
    } else {
        ap_phi_mux_data_691_V_read761_rewind_phi_fu_38879_p6 = data_691_V_read761_rewind_reg_38875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_692_V_read762_phi_phi_fu_83015_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_692_V_read762_phi_phi_fu_83015_p4 = ap_phi_mux_data_692_V_read762_rewind_phi_fu_38893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_692_V_read762_phi_phi_fu_83015_p4 = data_692_V_read.read();
        } else {
            ap_phi_mux_data_692_V_read762_phi_phi_fu_83015_p4 = ap_phi_reg_pp0_iter0_data_692_V_read762_phi_reg_83011.read();
        }
    } else {
        ap_phi_mux_data_692_V_read762_phi_phi_fu_83015_p4 = ap_phi_reg_pp0_iter0_data_692_V_read762_phi_reg_83011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_692_V_read762_rewind_phi_fu_38893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_692_V_read762_rewind_phi_fu_38893_p6 = data_692_V_read762_phi_reg_83011.read();
    } else {
        ap_phi_mux_data_692_V_read762_rewind_phi_fu_38893_p6 = data_692_V_read762_rewind_reg_38889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_693_V_read763_phi_phi_fu_83028_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_693_V_read763_phi_phi_fu_83028_p4 = ap_phi_mux_data_693_V_read763_rewind_phi_fu_38907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_693_V_read763_phi_phi_fu_83028_p4 = data_693_V_read.read();
        } else {
            ap_phi_mux_data_693_V_read763_phi_phi_fu_83028_p4 = ap_phi_reg_pp0_iter0_data_693_V_read763_phi_reg_83024.read();
        }
    } else {
        ap_phi_mux_data_693_V_read763_phi_phi_fu_83028_p4 = ap_phi_reg_pp0_iter0_data_693_V_read763_phi_reg_83024.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_693_V_read763_rewind_phi_fu_38907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_693_V_read763_rewind_phi_fu_38907_p6 = data_693_V_read763_phi_reg_83024.read();
    } else {
        ap_phi_mux_data_693_V_read763_rewind_phi_fu_38907_p6 = data_693_V_read763_rewind_reg_38903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_694_V_read764_phi_phi_fu_83041_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_694_V_read764_phi_phi_fu_83041_p4 = ap_phi_mux_data_694_V_read764_rewind_phi_fu_38921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_694_V_read764_phi_phi_fu_83041_p4 = data_694_V_read.read();
        } else {
            ap_phi_mux_data_694_V_read764_phi_phi_fu_83041_p4 = ap_phi_reg_pp0_iter0_data_694_V_read764_phi_reg_83037.read();
        }
    } else {
        ap_phi_mux_data_694_V_read764_phi_phi_fu_83041_p4 = ap_phi_reg_pp0_iter0_data_694_V_read764_phi_reg_83037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_694_V_read764_rewind_phi_fu_38921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_694_V_read764_rewind_phi_fu_38921_p6 = data_694_V_read764_phi_reg_83037.read();
    } else {
        ap_phi_mux_data_694_V_read764_rewind_phi_fu_38921_p6 = data_694_V_read764_rewind_reg_38917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_695_V_read765_phi_phi_fu_83054_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_695_V_read765_phi_phi_fu_83054_p4 = ap_phi_mux_data_695_V_read765_rewind_phi_fu_38935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_695_V_read765_phi_phi_fu_83054_p4 = data_695_V_read.read();
        } else {
            ap_phi_mux_data_695_V_read765_phi_phi_fu_83054_p4 = ap_phi_reg_pp0_iter0_data_695_V_read765_phi_reg_83050.read();
        }
    } else {
        ap_phi_mux_data_695_V_read765_phi_phi_fu_83054_p4 = ap_phi_reg_pp0_iter0_data_695_V_read765_phi_reg_83050.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_695_V_read765_rewind_phi_fu_38935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_695_V_read765_rewind_phi_fu_38935_p6 = data_695_V_read765_phi_reg_83050.read();
    } else {
        ap_phi_mux_data_695_V_read765_rewind_phi_fu_38935_p6 = data_695_V_read765_rewind_reg_38931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_696_V_read766_phi_phi_fu_83067_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_696_V_read766_phi_phi_fu_83067_p4 = ap_phi_mux_data_696_V_read766_rewind_phi_fu_38949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_696_V_read766_phi_phi_fu_83067_p4 = data_696_V_read.read();
        } else {
            ap_phi_mux_data_696_V_read766_phi_phi_fu_83067_p4 = ap_phi_reg_pp0_iter0_data_696_V_read766_phi_reg_83063.read();
        }
    } else {
        ap_phi_mux_data_696_V_read766_phi_phi_fu_83067_p4 = ap_phi_reg_pp0_iter0_data_696_V_read766_phi_reg_83063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_696_V_read766_rewind_phi_fu_38949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_696_V_read766_rewind_phi_fu_38949_p6 = data_696_V_read766_phi_reg_83063.read();
    } else {
        ap_phi_mux_data_696_V_read766_rewind_phi_fu_38949_p6 = data_696_V_read766_rewind_reg_38945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_697_V_read767_phi_phi_fu_83080_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_697_V_read767_phi_phi_fu_83080_p4 = ap_phi_mux_data_697_V_read767_rewind_phi_fu_38963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_697_V_read767_phi_phi_fu_83080_p4 = data_697_V_read.read();
        } else {
            ap_phi_mux_data_697_V_read767_phi_phi_fu_83080_p4 = ap_phi_reg_pp0_iter0_data_697_V_read767_phi_reg_83076.read();
        }
    } else {
        ap_phi_mux_data_697_V_read767_phi_phi_fu_83080_p4 = ap_phi_reg_pp0_iter0_data_697_V_read767_phi_reg_83076.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_697_V_read767_rewind_phi_fu_38963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_697_V_read767_rewind_phi_fu_38963_p6 = data_697_V_read767_phi_reg_83076.read();
    } else {
        ap_phi_mux_data_697_V_read767_rewind_phi_fu_38963_p6 = data_697_V_read767_rewind_reg_38959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_698_V_read768_phi_phi_fu_83093_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_698_V_read768_phi_phi_fu_83093_p4 = ap_phi_mux_data_698_V_read768_rewind_phi_fu_38977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_698_V_read768_phi_phi_fu_83093_p4 = data_698_V_read.read();
        } else {
            ap_phi_mux_data_698_V_read768_phi_phi_fu_83093_p4 = ap_phi_reg_pp0_iter0_data_698_V_read768_phi_reg_83089.read();
        }
    } else {
        ap_phi_mux_data_698_V_read768_phi_phi_fu_83093_p4 = ap_phi_reg_pp0_iter0_data_698_V_read768_phi_reg_83089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_698_V_read768_rewind_phi_fu_38977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_698_V_read768_rewind_phi_fu_38977_p6 = data_698_V_read768_phi_reg_83089.read();
    } else {
        ap_phi_mux_data_698_V_read768_rewind_phi_fu_38977_p6 = data_698_V_read768_rewind_reg_38973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_699_V_read769_phi_phi_fu_83106_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_699_V_read769_phi_phi_fu_83106_p4 = ap_phi_mux_data_699_V_read769_rewind_phi_fu_38991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_699_V_read769_phi_phi_fu_83106_p4 = data_699_V_read.read();
        } else {
            ap_phi_mux_data_699_V_read769_phi_phi_fu_83106_p4 = ap_phi_reg_pp0_iter0_data_699_V_read769_phi_reg_83102.read();
        }
    } else {
        ap_phi_mux_data_699_V_read769_phi_phi_fu_83106_p4 = ap_phi_reg_pp0_iter0_data_699_V_read769_phi_reg_83102.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_699_V_read769_rewind_phi_fu_38991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_699_V_read769_rewind_phi_fu_38991_p6 = data_699_V_read769_phi_reg_83102.read();
    } else {
        ap_phi_mux_data_699_V_read769_rewind_phi_fu_38991_p6 = data_699_V_read769_rewind_reg_38987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_69_V_read139_phi_phi_fu_74916_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_69_V_read139_phi_phi_fu_74916_p4 = ap_phi_mux_data_69_V_read139_rewind_phi_fu_30171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_69_V_read139_phi_phi_fu_74916_p4 = data_69_V_read.read();
        } else {
            ap_phi_mux_data_69_V_read139_phi_phi_fu_74916_p4 = ap_phi_reg_pp0_iter0_data_69_V_read139_phi_reg_74912.read();
        }
    } else {
        ap_phi_mux_data_69_V_read139_phi_phi_fu_74916_p4 = ap_phi_reg_pp0_iter0_data_69_V_read139_phi_reg_74912.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_69_V_read139_rewind_phi_fu_30171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_69_V_read139_rewind_phi_fu_30171_p6 = data_69_V_read139_phi_reg_74912.read();
    } else {
        ap_phi_mux_data_69_V_read139_rewind_phi_fu_30171_p6 = data_69_V_read139_rewind_reg_30167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_6_V_read76_phi_phi_fu_74097_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_6_V_read76_phi_phi_fu_74097_p4 = ap_phi_mux_data_6_V_read76_rewind_phi_fu_29289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_6_V_read76_phi_phi_fu_74097_p4 = data_6_V_read.read();
        } else {
            ap_phi_mux_data_6_V_read76_phi_phi_fu_74097_p4 = ap_phi_reg_pp0_iter0_data_6_V_read76_phi_reg_74093.read();
        }
    } else {
        ap_phi_mux_data_6_V_read76_phi_phi_fu_74097_p4 = ap_phi_reg_pp0_iter0_data_6_V_read76_phi_reg_74093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_6_V_read76_rewind_phi_fu_29289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_6_V_read76_rewind_phi_fu_29289_p6 = data_6_V_read76_phi_reg_74093.read();
    } else {
        ap_phi_mux_data_6_V_read76_rewind_phi_fu_29289_p6 = data_6_V_read76_rewind_reg_29285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_700_V_read770_phi_phi_fu_83119_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_700_V_read770_phi_phi_fu_83119_p4 = ap_phi_mux_data_700_V_read770_rewind_phi_fu_39005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_700_V_read770_phi_phi_fu_83119_p4 = data_700_V_read.read();
        } else {
            ap_phi_mux_data_700_V_read770_phi_phi_fu_83119_p4 = ap_phi_reg_pp0_iter0_data_700_V_read770_phi_reg_83115.read();
        }
    } else {
        ap_phi_mux_data_700_V_read770_phi_phi_fu_83119_p4 = ap_phi_reg_pp0_iter0_data_700_V_read770_phi_reg_83115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_700_V_read770_rewind_phi_fu_39005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_700_V_read770_rewind_phi_fu_39005_p6 = data_700_V_read770_phi_reg_83115.read();
    } else {
        ap_phi_mux_data_700_V_read770_rewind_phi_fu_39005_p6 = data_700_V_read770_rewind_reg_39001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_701_V_read771_phi_phi_fu_83132_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_701_V_read771_phi_phi_fu_83132_p4 = ap_phi_mux_data_701_V_read771_rewind_phi_fu_39019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_701_V_read771_phi_phi_fu_83132_p4 = data_701_V_read.read();
        } else {
            ap_phi_mux_data_701_V_read771_phi_phi_fu_83132_p4 = ap_phi_reg_pp0_iter0_data_701_V_read771_phi_reg_83128.read();
        }
    } else {
        ap_phi_mux_data_701_V_read771_phi_phi_fu_83132_p4 = ap_phi_reg_pp0_iter0_data_701_V_read771_phi_reg_83128.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_701_V_read771_rewind_phi_fu_39019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_701_V_read771_rewind_phi_fu_39019_p6 = data_701_V_read771_phi_reg_83128.read();
    } else {
        ap_phi_mux_data_701_V_read771_rewind_phi_fu_39019_p6 = data_701_V_read771_rewind_reg_39015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_702_V_read772_phi_phi_fu_83145_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_702_V_read772_phi_phi_fu_83145_p4 = ap_phi_mux_data_702_V_read772_rewind_phi_fu_39033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_702_V_read772_phi_phi_fu_83145_p4 = data_702_V_read.read();
        } else {
            ap_phi_mux_data_702_V_read772_phi_phi_fu_83145_p4 = ap_phi_reg_pp0_iter0_data_702_V_read772_phi_reg_83141.read();
        }
    } else {
        ap_phi_mux_data_702_V_read772_phi_phi_fu_83145_p4 = ap_phi_reg_pp0_iter0_data_702_V_read772_phi_reg_83141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_702_V_read772_rewind_phi_fu_39033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_702_V_read772_rewind_phi_fu_39033_p6 = data_702_V_read772_phi_reg_83141.read();
    } else {
        ap_phi_mux_data_702_V_read772_rewind_phi_fu_39033_p6 = data_702_V_read772_rewind_reg_39029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_703_V_read773_phi_phi_fu_83158_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_703_V_read773_phi_phi_fu_83158_p4 = ap_phi_mux_data_703_V_read773_rewind_phi_fu_39047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_703_V_read773_phi_phi_fu_83158_p4 = data_703_V_read.read();
        } else {
            ap_phi_mux_data_703_V_read773_phi_phi_fu_83158_p4 = ap_phi_reg_pp0_iter0_data_703_V_read773_phi_reg_83154.read();
        }
    } else {
        ap_phi_mux_data_703_V_read773_phi_phi_fu_83158_p4 = ap_phi_reg_pp0_iter0_data_703_V_read773_phi_reg_83154.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_703_V_read773_rewind_phi_fu_39047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_703_V_read773_rewind_phi_fu_39047_p6 = data_703_V_read773_phi_reg_83154.read();
    } else {
        ap_phi_mux_data_703_V_read773_rewind_phi_fu_39047_p6 = data_703_V_read773_rewind_reg_39043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_704_V_read774_phi_phi_fu_83171_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_704_V_read774_phi_phi_fu_83171_p4 = ap_phi_mux_data_704_V_read774_rewind_phi_fu_39061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_704_V_read774_phi_phi_fu_83171_p4 = data_704_V_read.read();
        } else {
            ap_phi_mux_data_704_V_read774_phi_phi_fu_83171_p4 = ap_phi_reg_pp0_iter0_data_704_V_read774_phi_reg_83167.read();
        }
    } else {
        ap_phi_mux_data_704_V_read774_phi_phi_fu_83171_p4 = ap_phi_reg_pp0_iter0_data_704_V_read774_phi_reg_83167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_704_V_read774_rewind_phi_fu_39061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_704_V_read774_rewind_phi_fu_39061_p6 = data_704_V_read774_phi_reg_83167.read();
    } else {
        ap_phi_mux_data_704_V_read774_rewind_phi_fu_39061_p6 = data_704_V_read774_rewind_reg_39057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_705_V_read775_phi_phi_fu_83184_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_705_V_read775_phi_phi_fu_83184_p4 = ap_phi_mux_data_705_V_read775_rewind_phi_fu_39075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_705_V_read775_phi_phi_fu_83184_p4 = data_705_V_read.read();
        } else {
            ap_phi_mux_data_705_V_read775_phi_phi_fu_83184_p4 = ap_phi_reg_pp0_iter0_data_705_V_read775_phi_reg_83180.read();
        }
    } else {
        ap_phi_mux_data_705_V_read775_phi_phi_fu_83184_p4 = ap_phi_reg_pp0_iter0_data_705_V_read775_phi_reg_83180.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_705_V_read775_rewind_phi_fu_39075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_705_V_read775_rewind_phi_fu_39075_p6 = data_705_V_read775_phi_reg_83180.read();
    } else {
        ap_phi_mux_data_705_V_read775_rewind_phi_fu_39075_p6 = data_705_V_read775_rewind_reg_39071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_706_V_read776_phi_phi_fu_83197_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_706_V_read776_phi_phi_fu_83197_p4 = ap_phi_mux_data_706_V_read776_rewind_phi_fu_39089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_706_V_read776_phi_phi_fu_83197_p4 = data_706_V_read.read();
        } else {
            ap_phi_mux_data_706_V_read776_phi_phi_fu_83197_p4 = ap_phi_reg_pp0_iter0_data_706_V_read776_phi_reg_83193.read();
        }
    } else {
        ap_phi_mux_data_706_V_read776_phi_phi_fu_83197_p4 = ap_phi_reg_pp0_iter0_data_706_V_read776_phi_reg_83193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_706_V_read776_rewind_phi_fu_39089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_706_V_read776_rewind_phi_fu_39089_p6 = data_706_V_read776_phi_reg_83193.read();
    } else {
        ap_phi_mux_data_706_V_read776_rewind_phi_fu_39089_p6 = data_706_V_read776_rewind_reg_39085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_707_V_read777_phi_phi_fu_83210_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_707_V_read777_phi_phi_fu_83210_p4 = ap_phi_mux_data_707_V_read777_rewind_phi_fu_39103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_707_V_read777_phi_phi_fu_83210_p4 = data_707_V_read.read();
        } else {
            ap_phi_mux_data_707_V_read777_phi_phi_fu_83210_p4 = ap_phi_reg_pp0_iter0_data_707_V_read777_phi_reg_83206.read();
        }
    } else {
        ap_phi_mux_data_707_V_read777_phi_phi_fu_83210_p4 = ap_phi_reg_pp0_iter0_data_707_V_read777_phi_reg_83206.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_707_V_read777_rewind_phi_fu_39103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_707_V_read777_rewind_phi_fu_39103_p6 = data_707_V_read777_phi_reg_83206.read();
    } else {
        ap_phi_mux_data_707_V_read777_rewind_phi_fu_39103_p6 = data_707_V_read777_rewind_reg_39099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_708_V_read778_phi_phi_fu_83223_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_708_V_read778_phi_phi_fu_83223_p4 = ap_phi_mux_data_708_V_read778_rewind_phi_fu_39117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_708_V_read778_phi_phi_fu_83223_p4 = data_708_V_read.read();
        } else {
            ap_phi_mux_data_708_V_read778_phi_phi_fu_83223_p4 = ap_phi_reg_pp0_iter0_data_708_V_read778_phi_reg_83219.read();
        }
    } else {
        ap_phi_mux_data_708_V_read778_phi_phi_fu_83223_p4 = ap_phi_reg_pp0_iter0_data_708_V_read778_phi_reg_83219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_708_V_read778_rewind_phi_fu_39117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_708_V_read778_rewind_phi_fu_39117_p6 = data_708_V_read778_phi_reg_83219.read();
    } else {
        ap_phi_mux_data_708_V_read778_rewind_phi_fu_39117_p6 = data_708_V_read778_rewind_reg_39113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_709_V_read779_phi_phi_fu_83236_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_709_V_read779_phi_phi_fu_83236_p4 = ap_phi_mux_data_709_V_read779_rewind_phi_fu_39131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_709_V_read779_phi_phi_fu_83236_p4 = data_709_V_read.read();
        } else {
            ap_phi_mux_data_709_V_read779_phi_phi_fu_83236_p4 = ap_phi_reg_pp0_iter0_data_709_V_read779_phi_reg_83232.read();
        }
    } else {
        ap_phi_mux_data_709_V_read779_phi_phi_fu_83236_p4 = ap_phi_reg_pp0_iter0_data_709_V_read779_phi_reg_83232.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_709_V_read779_rewind_phi_fu_39131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_709_V_read779_rewind_phi_fu_39131_p6 = data_709_V_read779_phi_reg_83232.read();
    } else {
        ap_phi_mux_data_709_V_read779_rewind_phi_fu_39131_p6 = data_709_V_read779_rewind_reg_39127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_70_V_read140_phi_phi_fu_74929_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_70_V_read140_phi_phi_fu_74929_p4 = ap_phi_mux_data_70_V_read140_rewind_phi_fu_30185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_70_V_read140_phi_phi_fu_74929_p4 = data_70_V_read.read();
        } else {
            ap_phi_mux_data_70_V_read140_phi_phi_fu_74929_p4 = ap_phi_reg_pp0_iter0_data_70_V_read140_phi_reg_74925.read();
        }
    } else {
        ap_phi_mux_data_70_V_read140_phi_phi_fu_74929_p4 = ap_phi_reg_pp0_iter0_data_70_V_read140_phi_reg_74925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_70_V_read140_rewind_phi_fu_30185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_70_V_read140_rewind_phi_fu_30185_p6 = data_70_V_read140_phi_reg_74925.read();
    } else {
        ap_phi_mux_data_70_V_read140_rewind_phi_fu_30185_p6 = data_70_V_read140_rewind_reg_30181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_710_V_read780_phi_phi_fu_83249_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_710_V_read780_phi_phi_fu_83249_p4 = ap_phi_mux_data_710_V_read780_rewind_phi_fu_39145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_710_V_read780_phi_phi_fu_83249_p4 = data_710_V_read.read();
        } else {
            ap_phi_mux_data_710_V_read780_phi_phi_fu_83249_p4 = ap_phi_reg_pp0_iter0_data_710_V_read780_phi_reg_83245.read();
        }
    } else {
        ap_phi_mux_data_710_V_read780_phi_phi_fu_83249_p4 = ap_phi_reg_pp0_iter0_data_710_V_read780_phi_reg_83245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_710_V_read780_rewind_phi_fu_39145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_710_V_read780_rewind_phi_fu_39145_p6 = data_710_V_read780_phi_reg_83245.read();
    } else {
        ap_phi_mux_data_710_V_read780_rewind_phi_fu_39145_p6 = data_710_V_read780_rewind_reg_39141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_711_V_read781_phi_phi_fu_83262_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_711_V_read781_phi_phi_fu_83262_p4 = ap_phi_mux_data_711_V_read781_rewind_phi_fu_39159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_711_V_read781_phi_phi_fu_83262_p4 = data_711_V_read.read();
        } else {
            ap_phi_mux_data_711_V_read781_phi_phi_fu_83262_p4 = ap_phi_reg_pp0_iter0_data_711_V_read781_phi_reg_83258.read();
        }
    } else {
        ap_phi_mux_data_711_V_read781_phi_phi_fu_83262_p4 = ap_phi_reg_pp0_iter0_data_711_V_read781_phi_reg_83258.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_711_V_read781_rewind_phi_fu_39159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_711_V_read781_rewind_phi_fu_39159_p6 = data_711_V_read781_phi_reg_83258.read();
    } else {
        ap_phi_mux_data_711_V_read781_rewind_phi_fu_39159_p6 = data_711_V_read781_rewind_reg_39155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_712_V_read782_phi_phi_fu_83275_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_712_V_read782_phi_phi_fu_83275_p4 = ap_phi_mux_data_712_V_read782_rewind_phi_fu_39173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_712_V_read782_phi_phi_fu_83275_p4 = data_712_V_read.read();
        } else {
            ap_phi_mux_data_712_V_read782_phi_phi_fu_83275_p4 = ap_phi_reg_pp0_iter0_data_712_V_read782_phi_reg_83271.read();
        }
    } else {
        ap_phi_mux_data_712_V_read782_phi_phi_fu_83275_p4 = ap_phi_reg_pp0_iter0_data_712_V_read782_phi_reg_83271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_712_V_read782_rewind_phi_fu_39173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_712_V_read782_rewind_phi_fu_39173_p6 = data_712_V_read782_phi_reg_83271.read();
    } else {
        ap_phi_mux_data_712_V_read782_rewind_phi_fu_39173_p6 = data_712_V_read782_rewind_reg_39169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_713_V_read783_phi_phi_fu_83288_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_713_V_read783_phi_phi_fu_83288_p4 = ap_phi_mux_data_713_V_read783_rewind_phi_fu_39187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_713_V_read783_phi_phi_fu_83288_p4 = data_713_V_read.read();
        } else {
            ap_phi_mux_data_713_V_read783_phi_phi_fu_83288_p4 = ap_phi_reg_pp0_iter0_data_713_V_read783_phi_reg_83284.read();
        }
    } else {
        ap_phi_mux_data_713_V_read783_phi_phi_fu_83288_p4 = ap_phi_reg_pp0_iter0_data_713_V_read783_phi_reg_83284.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_713_V_read783_rewind_phi_fu_39187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_713_V_read783_rewind_phi_fu_39187_p6 = data_713_V_read783_phi_reg_83284.read();
    } else {
        ap_phi_mux_data_713_V_read783_rewind_phi_fu_39187_p6 = data_713_V_read783_rewind_reg_39183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_714_V_read784_phi_phi_fu_83301_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_714_V_read784_phi_phi_fu_83301_p4 = ap_phi_mux_data_714_V_read784_rewind_phi_fu_39201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_714_V_read784_phi_phi_fu_83301_p4 = data_714_V_read.read();
        } else {
            ap_phi_mux_data_714_V_read784_phi_phi_fu_83301_p4 = ap_phi_reg_pp0_iter0_data_714_V_read784_phi_reg_83297.read();
        }
    } else {
        ap_phi_mux_data_714_V_read784_phi_phi_fu_83301_p4 = ap_phi_reg_pp0_iter0_data_714_V_read784_phi_reg_83297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_714_V_read784_rewind_phi_fu_39201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_714_V_read784_rewind_phi_fu_39201_p6 = data_714_V_read784_phi_reg_83297.read();
    } else {
        ap_phi_mux_data_714_V_read784_rewind_phi_fu_39201_p6 = data_714_V_read784_rewind_reg_39197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_715_V_read785_phi_phi_fu_83314_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_715_V_read785_phi_phi_fu_83314_p4 = ap_phi_mux_data_715_V_read785_rewind_phi_fu_39215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_715_V_read785_phi_phi_fu_83314_p4 = data_715_V_read.read();
        } else {
            ap_phi_mux_data_715_V_read785_phi_phi_fu_83314_p4 = ap_phi_reg_pp0_iter0_data_715_V_read785_phi_reg_83310.read();
        }
    } else {
        ap_phi_mux_data_715_V_read785_phi_phi_fu_83314_p4 = ap_phi_reg_pp0_iter0_data_715_V_read785_phi_reg_83310.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_715_V_read785_rewind_phi_fu_39215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_715_V_read785_rewind_phi_fu_39215_p6 = data_715_V_read785_phi_reg_83310.read();
    } else {
        ap_phi_mux_data_715_V_read785_rewind_phi_fu_39215_p6 = data_715_V_read785_rewind_reg_39211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_716_V_read786_phi_phi_fu_83327_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_716_V_read786_phi_phi_fu_83327_p4 = ap_phi_mux_data_716_V_read786_rewind_phi_fu_39229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_716_V_read786_phi_phi_fu_83327_p4 = data_716_V_read.read();
        } else {
            ap_phi_mux_data_716_V_read786_phi_phi_fu_83327_p4 = ap_phi_reg_pp0_iter0_data_716_V_read786_phi_reg_83323.read();
        }
    } else {
        ap_phi_mux_data_716_V_read786_phi_phi_fu_83327_p4 = ap_phi_reg_pp0_iter0_data_716_V_read786_phi_reg_83323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_716_V_read786_rewind_phi_fu_39229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_716_V_read786_rewind_phi_fu_39229_p6 = data_716_V_read786_phi_reg_83323.read();
    } else {
        ap_phi_mux_data_716_V_read786_rewind_phi_fu_39229_p6 = data_716_V_read786_rewind_reg_39225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_717_V_read787_phi_phi_fu_83340_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_717_V_read787_phi_phi_fu_83340_p4 = ap_phi_mux_data_717_V_read787_rewind_phi_fu_39243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_717_V_read787_phi_phi_fu_83340_p4 = data_717_V_read.read();
        } else {
            ap_phi_mux_data_717_V_read787_phi_phi_fu_83340_p4 = ap_phi_reg_pp0_iter0_data_717_V_read787_phi_reg_83336.read();
        }
    } else {
        ap_phi_mux_data_717_V_read787_phi_phi_fu_83340_p4 = ap_phi_reg_pp0_iter0_data_717_V_read787_phi_reg_83336.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_717_V_read787_rewind_phi_fu_39243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_717_V_read787_rewind_phi_fu_39243_p6 = data_717_V_read787_phi_reg_83336.read();
    } else {
        ap_phi_mux_data_717_V_read787_rewind_phi_fu_39243_p6 = data_717_V_read787_rewind_reg_39239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_718_V_read788_phi_phi_fu_83353_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_718_V_read788_phi_phi_fu_83353_p4 = ap_phi_mux_data_718_V_read788_rewind_phi_fu_39257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_718_V_read788_phi_phi_fu_83353_p4 = data_718_V_read.read();
        } else {
            ap_phi_mux_data_718_V_read788_phi_phi_fu_83353_p4 = ap_phi_reg_pp0_iter0_data_718_V_read788_phi_reg_83349.read();
        }
    } else {
        ap_phi_mux_data_718_V_read788_phi_phi_fu_83353_p4 = ap_phi_reg_pp0_iter0_data_718_V_read788_phi_reg_83349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_718_V_read788_rewind_phi_fu_39257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_718_V_read788_rewind_phi_fu_39257_p6 = data_718_V_read788_phi_reg_83349.read();
    } else {
        ap_phi_mux_data_718_V_read788_rewind_phi_fu_39257_p6 = data_718_V_read788_rewind_reg_39253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_719_V_read789_phi_phi_fu_83366_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_719_V_read789_phi_phi_fu_83366_p4 = ap_phi_mux_data_719_V_read789_rewind_phi_fu_39271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_719_V_read789_phi_phi_fu_83366_p4 = data_719_V_read.read();
        } else {
            ap_phi_mux_data_719_V_read789_phi_phi_fu_83366_p4 = ap_phi_reg_pp0_iter0_data_719_V_read789_phi_reg_83362.read();
        }
    } else {
        ap_phi_mux_data_719_V_read789_phi_phi_fu_83366_p4 = ap_phi_reg_pp0_iter0_data_719_V_read789_phi_reg_83362.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_719_V_read789_rewind_phi_fu_39271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_719_V_read789_rewind_phi_fu_39271_p6 = data_719_V_read789_phi_reg_83362.read();
    } else {
        ap_phi_mux_data_719_V_read789_rewind_phi_fu_39271_p6 = data_719_V_read789_rewind_reg_39267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_71_V_read141_phi_phi_fu_74942_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_71_V_read141_phi_phi_fu_74942_p4 = ap_phi_mux_data_71_V_read141_rewind_phi_fu_30199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_71_V_read141_phi_phi_fu_74942_p4 = data_71_V_read.read();
        } else {
            ap_phi_mux_data_71_V_read141_phi_phi_fu_74942_p4 = ap_phi_reg_pp0_iter0_data_71_V_read141_phi_reg_74938.read();
        }
    } else {
        ap_phi_mux_data_71_V_read141_phi_phi_fu_74942_p4 = ap_phi_reg_pp0_iter0_data_71_V_read141_phi_reg_74938.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_71_V_read141_rewind_phi_fu_30199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_71_V_read141_rewind_phi_fu_30199_p6 = data_71_V_read141_phi_reg_74938.read();
    } else {
        ap_phi_mux_data_71_V_read141_rewind_phi_fu_30199_p6 = data_71_V_read141_rewind_reg_30195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_720_V_read790_phi_phi_fu_83379_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_720_V_read790_phi_phi_fu_83379_p4 = ap_phi_mux_data_720_V_read790_rewind_phi_fu_39285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_720_V_read790_phi_phi_fu_83379_p4 = data_720_V_read.read();
        } else {
            ap_phi_mux_data_720_V_read790_phi_phi_fu_83379_p4 = ap_phi_reg_pp0_iter0_data_720_V_read790_phi_reg_83375.read();
        }
    } else {
        ap_phi_mux_data_720_V_read790_phi_phi_fu_83379_p4 = ap_phi_reg_pp0_iter0_data_720_V_read790_phi_reg_83375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_720_V_read790_rewind_phi_fu_39285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_720_V_read790_rewind_phi_fu_39285_p6 = data_720_V_read790_phi_reg_83375.read();
    } else {
        ap_phi_mux_data_720_V_read790_rewind_phi_fu_39285_p6 = data_720_V_read790_rewind_reg_39281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_721_V_read791_phi_phi_fu_83392_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_721_V_read791_phi_phi_fu_83392_p4 = ap_phi_mux_data_721_V_read791_rewind_phi_fu_39299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_721_V_read791_phi_phi_fu_83392_p4 = data_721_V_read.read();
        } else {
            ap_phi_mux_data_721_V_read791_phi_phi_fu_83392_p4 = ap_phi_reg_pp0_iter0_data_721_V_read791_phi_reg_83388.read();
        }
    } else {
        ap_phi_mux_data_721_V_read791_phi_phi_fu_83392_p4 = ap_phi_reg_pp0_iter0_data_721_V_read791_phi_reg_83388.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_721_V_read791_rewind_phi_fu_39299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_721_V_read791_rewind_phi_fu_39299_p6 = data_721_V_read791_phi_reg_83388.read();
    } else {
        ap_phi_mux_data_721_V_read791_rewind_phi_fu_39299_p6 = data_721_V_read791_rewind_reg_39295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_722_V_read792_phi_phi_fu_83405_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_722_V_read792_phi_phi_fu_83405_p4 = ap_phi_mux_data_722_V_read792_rewind_phi_fu_39313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_722_V_read792_phi_phi_fu_83405_p4 = data_722_V_read.read();
        } else {
            ap_phi_mux_data_722_V_read792_phi_phi_fu_83405_p4 = ap_phi_reg_pp0_iter0_data_722_V_read792_phi_reg_83401.read();
        }
    } else {
        ap_phi_mux_data_722_V_read792_phi_phi_fu_83405_p4 = ap_phi_reg_pp0_iter0_data_722_V_read792_phi_reg_83401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_722_V_read792_rewind_phi_fu_39313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_722_V_read792_rewind_phi_fu_39313_p6 = data_722_V_read792_phi_reg_83401.read();
    } else {
        ap_phi_mux_data_722_V_read792_rewind_phi_fu_39313_p6 = data_722_V_read792_rewind_reg_39309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_723_V_read793_phi_phi_fu_83418_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_723_V_read793_phi_phi_fu_83418_p4 = ap_phi_mux_data_723_V_read793_rewind_phi_fu_39327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_723_V_read793_phi_phi_fu_83418_p4 = data_723_V_read.read();
        } else {
            ap_phi_mux_data_723_V_read793_phi_phi_fu_83418_p4 = ap_phi_reg_pp0_iter0_data_723_V_read793_phi_reg_83414.read();
        }
    } else {
        ap_phi_mux_data_723_V_read793_phi_phi_fu_83418_p4 = ap_phi_reg_pp0_iter0_data_723_V_read793_phi_reg_83414.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_723_V_read793_rewind_phi_fu_39327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_723_V_read793_rewind_phi_fu_39327_p6 = data_723_V_read793_phi_reg_83414.read();
    } else {
        ap_phi_mux_data_723_V_read793_rewind_phi_fu_39327_p6 = data_723_V_read793_rewind_reg_39323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_724_V_read794_phi_phi_fu_83431_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_724_V_read794_phi_phi_fu_83431_p4 = ap_phi_mux_data_724_V_read794_rewind_phi_fu_39341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_724_V_read794_phi_phi_fu_83431_p4 = data_724_V_read.read();
        } else {
            ap_phi_mux_data_724_V_read794_phi_phi_fu_83431_p4 = ap_phi_reg_pp0_iter0_data_724_V_read794_phi_reg_83427.read();
        }
    } else {
        ap_phi_mux_data_724_V_read794_phi_phi_fu_83431_p4 = ap_phi_reg_pp0_iter0_data_724_V_read794_phi_reg_83427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_724_V_read794_rewind_phi_fu_39341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_724_V_read794_rewind_phi_fu_39341_p6 = data_724_V_read794_phi_reg_83427.read();
    } else {
        ap_phi_mux_data_724_V_read794_rewind_phi_fu_39341_p6 = data_724_V_read794_rewind_reg_39337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_725_V_read795_phi_phi_fu_83444_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_725_V_read795_phi_phi_fu_83444_p4 = ap_phi_mux_data_725_V_read795_rewind_phi_fu_39355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_725_V_read795_phi_phi_fu_83444_p4 = data_725_V_read.read();
        } else {
            ap_phi_mux_data_725_V_read795_phi_phi_fu_83444_p4 = ap_phi_reg_pp0_iter0_data_725_V_read795_phi_reg_83440.read();
        }
    } else {
        ap_phi_mux_data_725_V_read795_phi_phi_fu_83444_p4 = ap_phi_reg_pp0_iter0_data_725_V_read795_phi_reg_83440.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_725_V_read795_rewind_phi_fu_39355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_725_V_read795_rewind_phi_fu_39355_p6 = data_725_V_read795_phi_reg_83440.read();
    } else {
        ap_phi_mux_data_725_V_read795_rewind_phi_fu_39355_p6 = data_725_V_read795_rewind_reg_39351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_726_V_read796_phi_phi_fu_83457_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_726_V_read796_phi_phi_fu_83457_p4 = ap_phi_mux_data_726_V_read796_rewind_phi_fu_39369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_726_V_read796_phi_phi_fu_83457_p4 = data_726_V_read.read();
        } else {
            ap_phi_mux_data_726_V_read796_phi_phi_fu_83457_p4 = ap_phi_reg_pp0_iter0_data_726_V_read796_phi_reg_83453.read();
        }
    } else {
        ap_phi_mux_data_726_V_read796_phi_phi_fu_83457_p4 = ap_phi_reg_pp0_iter0_data_726_V_read796_phi_reg_83453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_726_V_read796_rewind_phi_fu_39369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_726_V_read796_rewind_phi_fu_39369_p6 = data_726_V_read796_phi_reg_83453.read();
    } else {
        ap_phi_mux_data_726_V_read796_rewind_phi_fu_39369_p6 = data_726_V_read796_rewind_reg_39365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_727_V_read797_phi_phi_fu_83470_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_727_V_read797_phi_phi_fu_83470_p4 = ap_phi_mux_data_727_V_read797_rewind_phi_fu_39383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_727_V_read797_phi_phi_fu_83470_p4 = data_727_V_read.read();
        } else {
            ap_phi_mux_data_727_V_read797_phi_phi_fu_83470_p4 = ap_phi_reg_pp0_iter0_data_727_V_read797_phi_reg_83466.read();
        }
    } else {
        ap_phi_mux_data_727_V_read797_phi_phi_fu_83470_p4 = ap_phi_reg_pp0_iter0_data_727_V_read797_phi_reg_83466.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_727_V_read797_rewind_phi_fu_39383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_727_V_read797_rewind_phi_fu_39383_p6 = data_727_V_read797_phi_reg_83466.read();
    } else {
        ap_phi_mux_data_727_V_read797_rewind_phi_fu_39383_p6 = data_727_V_read797_rewind_reg_39379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_728_V_read798_phi_phi_fu_83483_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_728_V_read798_phi_phi_fu_83483_p4 = ap_phi_mux_data_728_V_read798_rewind_phi_fu_39397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_728_V_read798_phi_phi_fu_83483_p4 = data_728_V_read.read();
        } else {
            ap_phi_mux_data_728_V_read798_phi_phi_fu_83483_p4 = ap_phi_reg_pp0_iter0_data_728_V_read798_phi_reg_83479.read();
        }
    } else {
        ap_phi_mux_data_728_V_read798_phi_phi_fu_83483_p4 = ap_phi_reg_pp0_iter0_data_728_V_read798_phi_reg_83479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_728_V_read798_rewind_phi_fu_39397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_728_V_read798_rewind_phi_fu_39397_p6 = data_728_V_read798_phi_reg_83479.read();
    } else {
        ap_phi_mux_data_728_V_read798_rewind_phi_fu_39397_p6 = data_728_V_read798_rewind_reg_39393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_729_V_read799_phi_phi_fu_83496_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_729_V_read799_phi_phi_fu_83496_p4 = ap_phi_mux_data_729_V_read799_rewind_phi_fu_39411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_729_V_read799_phi_phi_fu_83496_p4 = data_729_V_read.read();
        } else {
            ap_phi_mux_data_729_V_read799_phi_phi_fu_83496_p4 = ap_phi_reg_pp0_iter0_data_729_V_read799_phi_reg_83492.read();
        }
    } else {
        ap_phi_mux_data_729_V_read799_phi_phi_fu_83496_p4 = ap_phi_reg_pp0_iter0_data_729_V_read799_phi_reg_83492.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_729_V_read799_rewind_phi_fu_39411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_729_V_read799_rewind_phi_fu_39411_p6 = data_729_V_read799_phi_reg_83492.read();
    } else {
        ap_phi_mux_data_729_V_read799_rewind_phi_fu_39411_p6 = data_729_V_read799_rewind_reg_39407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_72_V_read142_phi_phi_fu_74955_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_72_V_read142_phi_phi_fu_74955_p4 = ap_phi_mux_data_72_V_read142_rewind_phi_fu_30213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_72_V_read142_phi_phi_fu_74955_p4 = data_72_V_read.read();
        } else {
            ap_phi_mux_data_72_V_read142_phi_phi_fu_74955_p4 = ap_phi_reg_pp0_iter0_data_72_V_read142_phi_reg_74951.read();
        }
    } else {
        ap_phi_mux_data_72_V_read142_phi_phi_fu_74955_p4 = ap_phi_reg_pp0_iter0_data_72_V_read142_phi_reg_74951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_72_V_read142_rewind_phi_fu_30213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_72_V_read142_rewind_phi_fu_30213_p6 = data_72_V_read142_phi_reg_74951.read();
    } else {
        ap_phi_mux_data_72_V_read142_rewind_phi_fu_30213_p6 = data_72_V_read142_rewind_reg_30209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_730_V_read800_phi_phi_fu_83509_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_730_V_read800_phi_phi_fu_83509_p4 = ap_phi_mux_data_730_V_read800_rewind_phi_fu_39425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_730_V_read800_phi_phi_fu_83509_p4 = data_730_V_read.read();
        } else {
            ap_phi_mux_data_730_V_read800_phi_phi_fu_83509_p4 = ap_phi_reg_pp0_iter0_data_730_V_read800_phi_reg_83505.read();
        }
    } else {
        ap_phi_mux_data_730_V_read800_phi_phi_fu_83509_p4 = ap_phi_reg_pp0_iter0_data_730_V_read800_phi_reg_83505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_730_V_read800_rewind_phi_fu_39425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_730_V_read800_rewind_phi_fu_39425_p6 = data_730_V_read800_phi_reg_83505.read();
    } else {
        ap_phi_mux_data_730_V_read800_rewind_phi_fu_39425_p6 = data_730_V_read800_rewind_reg_39421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_731_V_read801_phi_phi_fu_83522_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_731_V_read801_phi_phi_fu_83522_p4 = ap_phi_mux_data_731_V_read801_rewind_phi_fu_39439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_731_V_read801_phi_phi_fu_83522_p4 = data_731_V_read.read();
        } else {
            ap_phi_mux_data_731_V_read801_phi_phi_fu_83522_p4 = ap_phi_reg_pp0_iter0_data_731_V_read801_phi_reg_83518.read();
        }
    } else {
        ap_phi_mux_data_731_V_read801_phi_phi_fu_83522_p4 = ap_phi_reg_pp0_iter0_data_731_V_read801_phi_reg_83518.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_731_V_read801_rewind_phi_fu_39439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_731_V_read801_rewind_phi_fu_39439_p6 = data_731_V_read801_phi_reg_83518.read();
    } else {
        ap_phi_mux_data_731_V_read801_rewind_phi_fu_39439_p6 = data_731_V_read801_rewind_reg_39435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_732_V_read802_phi_phi_fu_83535_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_732_V_read802_phi_phi_fu_83535_p4 = ap_phi_mux_data_732_V_read802_rewind_phi_fu_39453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_732_V_read802_phi_phi_fu_83535_p4 = data_732_V_read.read();
        } else {
            ap_phi_mux_data_732_V_read802_phi_phi_fu_83535_p4 = ap_phi_reg_pp0_iter0_data_732_V_read802_phi_reg_83531.read();
        }
    } else {
        ap_phi_mux_data_732_V_read802_phi_phi_fu_83535_p4 = ap_phi_reg_pp0_iter0_data_732_V_read802_phi_reg_83531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_732_V_read802_rewind_phi_fu_39453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_732_V_read802_rewind_phi_fu_39453_p6 = data_732_V_read802_phi_reg_83531.read();
    } else {
        ap_phi_mux_data_732_V_read802_rewind_phi_fu_39453_p6 = data_732_V_read802_rewind_reg_39449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_733_V_read803_phi_phi_fu_83548_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_733_V_read803_phi_phi_fu_83548_p4 = ap_phi_mux_data_733_V_read803_rewind_phi_fu_39467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_733_V_read803_phi_phi_fu_83548_p4 = data_733_V_read.read();
        } else {
            ap_phi_mux_data_733_V_read803_phi_phi_fu_83548_p4 = ap_phi_reg_pp0_iter0_data_733_V_read803_phi_reg_83544.read();
        }
    } else {
        ap_phi_mux_data_733_V_read803_phi_phi_fu_83548_p4 = ap_phi_reg_pp0_iter0_data_733_V_read803_phi_reg_83544.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_733_V_read803_rewind_phi_fu_39467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_733_V_read803_rewind_phi_fu_39467_p6 = data_733_V_read803_phi_reg_83544.read();
    } else {
        ap_phi_mux_data_733_V_read803_rewind_phi_fu_39467_p6 = data_733_V_read803_rewind_reg_39463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_734_V_read804_phi_phi_fu_83561_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_734_V_read804_phi_phi_fu_83561_p4 = ap_phi_mux_data_734_V_read804_rewind_phi_fu_39481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_734_V_read804_phi_phi_fu_83561_p4 = data_734_V_read.read();
        } else {
            ap_phi_mux_data_734_V_read804_phi_phi_fu_83561_p4 = ap_phi_reg_pp0_iter0_data_734_V_read804_phi_reg_83557.read();
        }
    } else {
        ap_phi_mux_data_734_V_read804_phi_phi_fu_83561_p4 = ap_phi_reg_pp0_iter0_data_734_V_read804_phi_reg_83557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_734_V_read804_rewind_phi_fu_39481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_734_V_read804_rewind_phi_fu_39481_p6 = data_734_V_read804_phi_reg_83557.read();
    } else {
        ap_phi_mux_data_734_V_read804_rewind_phi_fu_39481_p6 = data_734_V_read804_rewind_reg_39477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_735_V_read805_phi_phi_fu_83574_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_735_V_read805_phi_phi_fu_83574_p4 = ap_phi_mux_data_735_V_read805_rewind_phi_fu_39495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_735_V_read805_phi_phi_fu_83574_p4 = data_735_V_read.read();
        } else {
            ap_phi_mux_data_735_V_read805_phi_phi_fu_83574_p4 = ap_phi_reg_pp0_iter0_data_735_V_read805_phi_reg_83570.read();
        }
    } else {
        ap_phi_mux_data_735_V_read805_phi_phi_fu_83574_p4 = ap_phi_reg_pp0_iter0_data_735_V_read805_phi_reg_83570.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_735_V_read805_rewind_phi_fu_39495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_735_V_read805_rewind_phi_fu_39495_p6 = data_735_V_read805_phi_reg_83570.read();
    } else {
        ap_phi_mux_data_735_V_read805_rewind_phi_fu_39495_p6 = data_735_V_read805_rewind_reg_39491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_736_V_read806_phi_phi_fu_83587_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_736_V_read806_phi_phi_fu_83587_p4 = ap_phi_mux_data_736_V_read806_rewind_phi_fu_39509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_736_V_read806_phi_phi_fu_83587_p4 = data_736_V_read.read();
        } else {
            ap_phi_mux_data_736_V_read806_phi_phi_fu_83587_p4 = ap_phi_reg_pp0_iter0_data_736_V_read806_phi_reg_83583.read();
        }
    } else {
        ap_phi_mux_data_736_V_read806_phi_phi_fu_83587_p4 = ap_phi_reg_pp0_iter0_data_736_V_read806_phi_reg_83583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_736_V_read806_rewind_phi_fu_39509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_736_V_read806_rewind_phi_fu_39509_p6 = data_736_V_read806_phi_reg_83583.read();
    } else {
        ap_phi_mux_data_736_V_read806_rewind_phi_fu_39509_p6 = data_736_V_read806_rewind_reg_39505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_737_V_read807_phi_phi_fu_83600_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_737_V_read807_phi_phi_fu_83600_p4 = ap_phi_mux_data_737_V_read807_rewind_phi_fu_39523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_737_V_read807_phi_phi_fu_83600_p4 = data_737_V_read.read();
        } else {
            ap_phi_mux_data_737_V_read807_phi_phi_fu_83600_p4 = ap_phi_reg_pp0_iter0_data_737_V_read807_phi_reg_83596.read();
        }
    } else {
        ap_phi_mux_data_737_V_read807_phi_phi_fu_83600_p4 = ap_phi_reg_pp0_iter0_data_737_V_read807_phi_reg_83596.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_737_V_read807_rewind_phi_fu_39523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_737_V_read807_rewind_phi_fu_39523_p6 = data_737_V_read807_phi_reg_83596.read();
    } else {
        ap_phi_mux_data_737_V_read807_rewind_phi_fu_39523_p6 = data_737_V_read807_rewind_reg_39519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_738_V_read808_phi_phi_fu_83613_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_738_V_read808_phi_phi_fu_83613_p4 = ap_phi_mux_data_738_V_read808_rewind_phi_fu_39537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_738_V_read808_phi_phi_fu_83613_p4 = data_738_V_read.read();
        } else {
            ap_phi_mux_data_738_V_read808_phi_phi_fu_83613_p4 = ap_phi_reg_pp0_iter0_data_738_V_read808_phi_reg_83609.read();
        }
    } else {
        ap_phi_mux_data_738_V_read808_phi_phi_fu_83613_p4 = ap_phi_reg_pp0_iter0_data_738_V_read808_phi_reg_83609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_738_V_read808_rewind_phi_fu_39537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_738_V_read808_rewind_phi_fu_39537_p6 = data_738_V_read808_phi_reg_83609.read();
    } else {
        ap_phi_mux_data_738_V_read808_rewind_phi_fu_39537_p6 = data_738_V_read808_rewind_reg_39533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_739_V_read809_phi_phi_fu_83626_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_739_V_read809_phi_phi_fu_83626_p4 = ap_phi_mux_data_739_V_read809_rewind_phi_fu_39551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_739_V_read809_phi_phi_fu_83626_p4 = data_739_V_read.read();
        } else {
            ap_phi_mux_data_739_V_read809_phi_phi_fu_83626_p4 = ap_phi_reg_pp0_iter0_data_739_V_read809_phi_reg_83622.read();
        }
    } else {
        ap_phi_mux_data_739_V_read809_phi_phi_fu_83626_p4 = ap_phi_reg_pp0_iter0_data_739_V_read809_phi_reg_83622.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_739_V_read809_rewind_phi_fu_39551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_739_V_read809_rewind_phi_fu_39551_p6 = data_739_V_read809_phi_reg_83622.read();
    } else {
        ap_phi_mux_data_739_V_read809_rewind_phi_fu_39551_p6 = data_739_V_read809_rewind_reg_39547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_73_V_read143_phi_phi_fu_74968_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_73_V_read143_phi_phi_fu_74968_p4 = ap_phi_mux_data_73_V_read143_rewind_phi_fu_30227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_73_V_read143_phi_phi_fu_74968_p4 = data_73_V_read.read();
        } else {
            ap_phi_mux_data_73_V_read143_phi_phi_fu_74968_p4 = ap_phi_reg_pp0_iter0_data_73_V_read143_phi_reg_74964.read();
        }
    } else {
        ap_phi_mux_data_73_V_read143_phi_phi_fu_74968_p4 = ap_phi_reg_pp0_iter0_data_73_V_read143_phi_reg_74964.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_73_V_read143_rewind_phi_fu_30227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_73_V_read143_rewind_phi_fu_30227_p6 = data_73_V_read143_phi_reg_74964.read();
    } else {
        ap_phi_mux_data_73_V_read143_rewind_phi_fu_30227_p6 = data_73_V_read143_rewind_reg_30223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_740_V_read810_phi_phi_fu_83639_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_740_V_read810_phi_phi_fu_83639_p4 = ap_phi_mux_data_740_V_read810_rewind_phi_fu_39565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_740_V_read810_phi_phi_fu_83639_p4 = data_740_V_read.read();
        } else {
            ap_phi_mux_data_740_V_read810_phi_phi_fu_83639_p4 = ap_phi_reg_pp0_iter0_data_740_V_read810_phi_reg_83635.read();
        }
    } else {
        ap_phi_mux_data_740_V_read810_phi_phi_fu_83639_p4 = ap_phi_reg_pp0_iter0_data_740_V_read810_phi_reg_83635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_740_V_read810_rewind_phi_fu_39565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_740_V_read810_rewind_phi_fu_39565_p6 = data_740_V_read810_phi_reg_83635.read();
    } else {
        ap_phi_mux_data_740_V_read810_rewind_phi_fu_39565_p6 = data_740_V_read810_rewind_reg_39561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_741_V_read811_phi_phi_fu_83652_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_741_V_read811_phi_phi_fu_83652_p4 = ap_phi_mux_data_741_V_read811_rewind_phi_fu_39579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_741_V_read811_phi_phi_fu_83652_p4 = data_741_V_read.read();
        } else {
            ap_phi_mux_data_741_V_read811_phi_phi_fu_83652_p4 = ap_phi_reg_pp0_iter0_data_741_V_read811_phi_reg_83648.read();
        }
    } else {
        ap_phi_mux_data_741_V_read811_phi_phi_fu_83652_p4 = ap_phi_reg_pp0_iter0_data_741_V_read811_phi_reg_83648.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_741_V_read811_rewind_phi_fu_39579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_741_V_read811_rewind_phi_fu_39579_p6 = data_741_V_read811_phi_reg_83648.read();
    } else {
        ap_phi_mux_data_741_V_read811_rewind_phi_fu_39579_p6 = data_741_V_read811_rewind_reg_39575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_742_V_read812_phi_phi_fu_83665_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_742_V_read812_phi_phi_fu_83665_p4 = ap_phi_mux_data_742_V_read812_rewind_phi_fu_39593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_742_V_read812_phi_phi_fu_83665_p4 = data_742_V_read.read();
        } else {
            ap_phi_mux_data_742_V_read812_phi_phi_fu_83665_p4 = ap_phi_reg_pp0_iter0_data_742_V_read812_phi_reg_83661.read();
        }
    } else {
        ap_phi_mux_data_742_V_read812_phi_phi_fu_83665_p4 = ap_phi_reg_pp0_iter0_data_742_V_read812_phi_reg_83661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_742_V_read812_rewind_phi_fu_39593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_742_V_read812_rewind_phi_fu_39593_p6 = data_742_V_read812_phi_reg_83661.read();
    } else {
        ap_phi_mux_data_742_V_read812_rewind_phi_fu_39593_p6 = data_742_V_read812_rewind_reg_39589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_743_V_read813_phi_phi_fu_83678_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_743_V_read813_phi_phi_fu_83678_p4 = ap_phi_mux_data_743_V_read813_rewind_phi_fu_39607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_743_V_read813_phi_phi_fu_83678_p4 = data_743_V_read.read();
        } else {
            ap_phi_mux_data_743_V_read813_phi_phi_fu_83678_p4 = ap_phi_reg_pp0_iter0_data_743_V_read813_phi_reg_83674.read();
        }
    } else {
        ap_phi_mux_data_743_V_read813_phi_phi_fu_83678_p4 = ap_phi_reg_pp0_iter0_data_743_V_read813_phi_reg_83674.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_743_V_read813_rewind_phi_fu_39607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_743_V_read813_rewind_phi_fu_39607_p6 = data_743_V_read813_phi_reg_83674.read();
    } else {
        ap_phi_mux_data_743_V_read813_rewind_phi_fu_39607_p6 = data_743_V_read813_rewind_reg_39603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_744_V_read814_phi_phi_fu_83691_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_744_V_read814_phi_phi_fu_83691_p4 = ap_phi_mux_data_744_V_read814_rewind_phi_fu_39621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_744_V_read814_phi_phi_fu_83691_p4 = data_744_V_read.read();
        } else {
            ap_phi_mux_data_744_V_read814_phi_phi_fu_83691_p4 = ap_phi_reg_pp0_iter0_data_744_V_read814_phi_reg_83687.read();
        }
    } else {
        ap_phi_mux_data_744_V_read814_phi_phi_fu_83691_p4 = ap_phi_reg_pp0_iter0_data_744_V_read814_phi_reg_83687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_744_V_read814_rewind_phi_fu_39621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_744_V_read814_rewind_phi_fu_39621_p6 = data_744_V_read814_phi_reg_83687.read();
    } else {
        ap_phi_mux_data_744_V_read814_rewind_phi_fu_39621_p6 = data_744_V_read814_rewind_reg_39617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_745_V_read815_phi_phi_fu_83704_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_745_V_read815_phi_phi_fu_83704_p4 = ap_phi_mux_data_745_V_read815_rewind_phi_fu_39635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_745_V_read815_phi_phi_fu_83704_p4 = data_745_V_read.read();
        } else {
            ap_phi_mux_data_745_V_read815_phi_phi_fu_83704_p4 = ap_phi_reg_pp0_iter0_data_745_V_read815_phi_reg_83700.read();
        }
    } else {
        ap_phi_mux_data_745_V_read815_phi_phi_fu_83704_p4 = ap_phi_reg_pp0_iter0_data_745_V_read815_phi_reg_83700.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_745_V_read815_rewind_phi_fu_39635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_745_V_read815_rewind_phi_fu_39635_p6 = data_745_V_read815_phi_reg_83700.read();
    } else {
        ap_phi_mux_data_745_V_read815_rewind_phi_fu_39635_p6 = data_745_V_read815_rewind_reg_39631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_746_V_read816_phi_phi_fu_83717_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_746_V_read816_phi_phi_fu_83717_p4 = ap_phi_mux_data_746_V_read816_rewind_phi_fu_39649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_746_V_read816_phi_phi_fu_83717_p4 = data_746_V_read.read();
        } else {
            ap_phi_mux_data_746_V_read816_phi_phi_fu_83717_p4 = ap_phi_reg_pp0_iter0_data_746_V_read816_phi_reg_83713.read();
        }
    } else {
        ap_phi_mux_data_746_V_read816_phi_phi_fu_83717_p4 = ap_phi_reg_pp0_iter0_data_746_V_read816_phi_reg_83713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_746_V_read816_rewind_phi_fu_39649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_746_V_read816_rewind_phi_fu_39649_p6 = data_746_V_read816_phi_reg_83713.read();
    } else {
        ap_phi_mux_data_746_V_read816_rewind_phi_fu_39649_p6 = data_746_V_read816_rewind_reg_39645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_747_V_read817_phi_phi_fu_83730_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_747_V_read817_phi_phi_fu_83730_p4 = ap_phi_mux_data_747_V_read817_rewind_phi_fu_39663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_747_V_read817_phi_phi_fu_83730_p4 = data_747_V_read.read();
        } else {
            ap_phi_mux_data_747_V_read817_phi_phi_fu_83730_p4 = ap_phi_reg_pp0_iter0_data_747_V_read817_phi_reg_83726.read();
        }
    } else {
        ap_phi_mux_data_747_V_read817_phi_phi_fu_83730_p4 = ap_phi_reg_pp0_iter0_data_747_V_read817_phi_reg_83726.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_747_V_read817_rewind_phi_fu_39663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_747_V_read817_rewind_phi_fu_39663_p6 = data_747_V_read817_phi_reg_83726.read();
    } else {
        ap_phi_mux_data_747_V_read817_rewind_phi_fu_39663_p6 = data_747_V_read817_rewind_reg_39659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_748_V_read818_phi_phi_fu_83743_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_748_V_read818_phi_phi_fu_83743_p4 = ap_phi_mux_data_748_V_read818_rewind_phi_fu_39677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_748_V_read818_phi_phi_fu_83743_p4 = data_748_V_read.read();
        } else {
            ap_phi_mux_data_748_V_read818_phi_phi_fu_83743_p4 = ap_phi_reg_pp0_iter0_data_748_V_read818_phi_reg_83739.read();
        }
    } else {
        ap_phi_mux_data_748_V_read818_phi_phi_fu_83743_p4 = ap_phi_reg_pp0_iter0_data_748_V_read818_phi_reg_83739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_748_V_read818_rewind_phi_fu_39677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_748_V_read818_rewind_phi_fu_39677_p6 = data_748_V_read818_phi_reg_83739.read();
    } else {
        ap_phi_mux_data_748_V_read818_rewind_phi_fu_39677_p6 = data_748_V_read818_rewind_reg_39673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_749_V_read819_phi_phi_fu_83756_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_749_V_read819_phi_phi_fu_83756_p4 = ap_phi_mux_data_749_V_read819_rewind_phi_fu_39691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_749_V_read819_phi_phi_fu_83756_p4 = data_749_V_read.read();
        } else {
            ap_phi_mux_data_749_V_read819_phi_phi_fu_83756_p4 = ap_phi_reg_pp0_iter0_data_749_V_read819_phi_reg_83752.read();
        }
    } else {
        ap_phi_mux_data_749_V_read819_phi_phi_fu_83756_p4 = ap_phi_reg_pp0_iter0_data_749_V_read819_phi_reg_83752.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_749_V_read819_rewind_phi_fu_39691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_749_V_read819_rewind_phi_fu_39691_p6 = data_749_V_read819_phi_reg_83752.read();
    } else {
        ap_phi_mux_data_749_V_read819_rewind_phi_fu_39691_p6 = data_749_V_read819_rewind_reg_39687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_74_V_read144_phi_phi_fu_74981_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_74_V_read144_phi_phi_fu_74981_p4 = ap_phi_mux_data_74_V_read144_rewind_phi_fu_30241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_74_V_read144_phi_phi_fu_74981_p4 = data_74_V_read.read();
        } else {
            ap_phi_mux_data_74_V_read144_phi_phi_fu_74981_p4 = ap_phi_reg_pp0_iter0_data_74_V_read144_phi_reg_74977.read();
        }
    } else {
        ap_phi_mux_data_74_V_read144_phi_phi_fu_74981_p4 = ap_phi_reg_pp0_iter0_data_74_V_read144_phi_reg_74977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_74_V_read144_rewind_phi_fu_30241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_74_V_read144_rewind_phi_fu_30241_p6 = data_74_V_read144_phi_reg_74977.read();
    } else {
        ap_phi_mux_data_74_V_read144_rewind_phi_fu_30241_p6 = data_74_V_read144_rewind_reg_30237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_750_V_read820_phi_phi_fu_83769_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_750_V_read820_phi_phi_fu_83769_p4 = ap_phi_mux_data_750_V_read820_rewind_phi_fu_39705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_750_V_read820_phi_phi_fu_83769_p4 = data_750_V_read.read();
        } else {
            ap_phi_mux_data_750_V_read820_phi_phi_fu_83769_p4 = ap_phi_reg_pp0_iter0_data_750_V_read820_phi_reg_83765.read();
        }
    } else {
        ap_phi_mux_data_750_V_read820_phi_phi_fu_83769_p4 = ap_phi_reg_pp0_iter0_data_750_V_read820_phi_reg_83765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_750_V_read820_rewind_phi_fu_39705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_750_V_read820_rewind_phi_fu_39705_p6 = data_750_V_read820_phi_reg_83765.read();
    } else {
        ap_phi_mux_data_750_V_read820_rewind_phi_fu_39705_p6 = data_750_V_read820_rewind_reg_39701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_751_V_read821_phi_phi_fu_83782_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_751_V_read821_phi_phi_fu_83782_p4 = ap_phi_mux_data_751_V_read821_rewind_phi_fu_39719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_751_V_read821_phi_phi_fu_83782_p4 = data_751_V_read.read();
        } else {
            ap_phi_mux_data_751_V_read821_phi_phi_fu_83782_p4 = ap_phi_reg_pp0_iter0_data_751_V_read821_phi_reg_83778.read();
        }
    } else {
        ap_phi_mux_data_751_V_read821_phi_phi_fu_83782_p4 = ap_phi_reg_pp0_iter0_data_751_V_read821_phi_reg_83778.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_751_V_read821_rewind_phi_fu_39719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_751_V_read821_rewind_phi_fu_39719_p6 = data_751_V_read821_phi_reg_83778.read();
    } else {
        ap_phi_mux_data_751_V_read821_rewind_phi_fu_39719_p6 = data_751_V_read821_rewind_reg_39715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_752_V_read822_phi_phi_fu_83795_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_752_V_read822_phi_phi_fu_83795_p4 = ap_phi_mux_data_752_V_read822_rewind_phi_fu_39733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_752_V_read822_phi_phi_fu_83795_p4 = data_752_V_read.read();
        } else {
            ap_phi_mux_data_752_V_read822_phi_phi_fu_83795_p4 = ap_phi_reg_pp0_iter0_data_752_V_read822_phi_reg_83791.read();
        }
    } else {
        ap_phi_mux_data_752_V_read822_phi_phi_fu_83795_p4 = ap_phi_reg_pp0_iter0_data_752_V_read822_phi_reg_83791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_752_V_read822_rewind_phi_fu_39733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_752_V_read822_rewind_phi_fu_39733_p6 = data_752_V_read822_phi_reg_83791.read();
    } else {
        ap_phi_mux_data_752_V_read822_rewind_phi_fu_39733_p6 = data_752_V_read822_rewind_reg_39729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_753_V_read823_phi_phi_fu_83808_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_753_V_read823_phi_phi_fu_83808_p4 = ap_phi_mux_data_753_V_read823_rewind_phi_fu_39747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_753_V_read823_phi_phi_fu_83808_p4 = data_753_V_read.read();
        } else {
            ap_phi_mux_data_753_V_read823_phi_phi_fu_83808_p4 = ap_phi_reg_pp0_iter0_data_753_V_read823_phi_reg_83804.read();
        }
    } else {
        ap_phi_mux_data_753_V_read823_phi_phi_fu_83808_p4 = ap_phi_reg_pp0_iter0_data_753_V_read823_phi_reg_83804.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_753_V_read823_rewind_phi_fu_39747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_753_V_read823_rewind_phi_fu_39747_p6 = data_753_V_read823_phi_reg_83804.read();
    } else {
        ap_phi_mux_data_753_V_read823_rewind_phi_fu_39747_p6 = data_753_V_read823_rewind_reg_39743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_754_V_read824_phi_phi_fu_83821_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_754_V_read824_phi_phi_fu_83821_p4 = ap_phi_mux_data_754_V_read824_rewind_phi_fu_39761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_754_V_read824_phi_phi_fu_83821_p4 = data_754_V_read.read();
        } else {
            ap_phi_mux_data_754_V_read824_phi_phi_fu_83821_p4 = ap_phi_reg_pp0_iter0_data_754_V_read824_phi_reg_83817.read();
        }
    } else {
        ap_phi_mux_data_754_V_read824_phi_phi_fu_83821_p4 = ap_phi_reg_pp0_iter0_data_754_V_read824_phi_reg_83817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_754_V_read824_rewind_phi_fu_39761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_754_V_read824_rewind_phi_fu_39761_p6 = data_754_V_read824_phi_reg_83817.read();
    } else {
        ap_phi_mux_data_754_V_read824_rewind_phi_fu_39761_p6 = data_754_V_read824_rewind_reg_39757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_755_V_read825_phi_phi_fu_83834_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_755_V_read825_phi_phi_fu_83834_p4 = ap_phi_mux_data_755_V_read825_rewind_phi_fu_39775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_755_V_read825_phi_phi_fu_83834_p4 = data_755_V_read.read();
        } else {
            ap_phi_mux_data_755_V_read825_phi_phi_fu_83834_p4 = ap_phi_reg_pp0_iter0_data_755_V_read825_phi_reg_83830.read();
        }
    } else {
        ap_phi_mux_data_755_V_read825_phi_phi_fu_83834_p4 = ap_phi_reg_pp0_iter0_data_755_V_read825_phi_reg_83830.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_755_V_read825_rewind_phi_fu_39775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_755_V_read825_rewind_phi_fu_39775_p6 = data_755_V_read825_phi_reg_83830.read();
    } else {
        ap_phi_mux_data_755_V_read825_rewind_phi_fu_39775_p6 = data_755_V_read825_rewind_reg_39771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_756_V_read826_phi_phi_fu_83847_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_756_V_read826_phi_phi_fu_83847_p4 = ap_phi_mux_data_756_V_read826_rewind_phi_fu_39789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_756_V_read826_phi_phi_fu_83847_p4 = data_756_V_read.read();
        } else {
            ap_phi_mux_data_756_V_read826_phi_phi_fu_83847_p4 = ap_phi_reg_pp0_iter0_data_756_V_read826_phi_reg_83843.read();
        }
    } else {
        ap_phi_mux_data_756_V_read826_phi_phi_fu_83847_p4 = ap_phi_reg_pp0_iter0_data_756_V_read826_phi_reg_83843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_756_V_read826_rewind_phi_fu_39789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_756_V_read826_rewind_phi_fu_39789_p6 = data_756_V_read826_phi_reg_83843.read();
    } else {
        ap_phi_mux_data_756_V_read826_rewind_phi_fu_39789_p6 = data_756_V_read826_rewind_reg_39785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_757_V_read827_phi_phi_fu_83860_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_757_V_read827_phi_phi_fu_83860_p4 = ap_phi_mux_data_757_V_read827_rewind_phi_fu_39803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_757_V_read827_phi_phi_fu_83860_p4 = data_757_V_read.read();
        } else {
            ap_phi_mux_data_757_V_read827_phi_phi_fu_83860_p4 = ap_phi_reg_pp0_iter0_data_757_V_read827_phi_reg_83856.read();
        }
    } else {
        ap_phi_mux_data_757_V_read827_phi_phi_fu_83860_p4 = ap_phi_reg_pp0_iter0_data_757_V_read827_phi_reg_83856.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_757_V_read827_rewind_phi_fu_39803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_757_V_read827_rewind_phi_fu_39803_p6 = data_757_V_read827_phi_reg_83856.read();
    } else {
        ap_phi_mux_data_757_V_read827_rewind_phi_fu_39803_p6 = data_757_V_read827_rewind_reg_39799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_758_V_read828_phi_phi_fu_83873_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_758_V_read828_phi_phi_fu_83873_p4 = ap_phi_mux_data_758_V_read828_rewind_phi_fu_39817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_758_V_read828_phi_phi_fu_83873_p4 = data_758_V_read.read();
        } else {
            ap_phi_mux_data_758_V_read828_phi_phi_fu_83873_p4 = ap_phi_reg_pp0_iter0_data_758_V_read828_phi_reg_83869.read();
        }
    } else {
        ap_phi_mux_data_758_V_read828_phi_phi_fu_83873_p4 = ap_phi_reg_pp0_iter0_data_758_V_read828_phi_reg_83869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_758_V_read828_rewind_phi_fu_39817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_758_V_read828_rewind_phi_fu_39817_p6 = data_758_V_read828_phi_reg_83869.read();
    } else {
        ap_phi_mux_data_758_V_read828_rewind_phi_fu_39817_p6 = data_758_V_read828_rewind_reg_39813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_759_V_read829_phi_phi_fu_83886_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_759_V_read829_phi_phi_fu_83886_p4 = ap_phi_mux_data_759_V_read829_rewind_phi_fu_39831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_759_V_read829_phi_phi_fu_83886_p4 = data_759_V_read.read();
        } else {
            ap_phi_mux_data_759_V_read829_phi_phi_fu_83886_p4 = ap_phi_reg_pp0_iter0_data_759_V_read829_phi_reg_83882.read();
        }
    } else {
        ap_phi_mux_data_759_V_read829_phi_phi_fu_83886_p4 = ap_phi_reg_pp0_iter0_data_759_V_read829_phi_reg_83882.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_759_V_read829_rewind_phi_fu_39831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_759_V_read829_rewind_phi_fu_39831_p6 = data_759_V_read829_phi_reg_83882.read();
    } else {
        ap_phi_mux_data_759_V_read829_rewind_phi_fu_39831_p6 = data_759_V_read829_rewind_reg_39827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_75_V_read145_phi_phi_fu_74994_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_75_V_read145_phi_phi_fu_74994_p4 = ap_phi_mux_data_75_V_read145_rewind_phi_fu_30255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_75_V_read145_phi_phi_fu_74994_p4 = data_75_V_read.read();
        } else {
            ap_phi_mux_data_75_V_read145_phi_phi_fu_74994_p4 = ap_phi_reg_pp0_iter0_data_75_V_read145_phi_reg_74990.read();
        }
    } else {
        ap_phi_mux_data_75_V_read145_phi_phi_fu_74994_p4 = ap_phi_reg_pp0_iter0_data_75_V_read145_phi_reg_74990.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_75_V_read145_rewind_phi_fu_30255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_75_V_read145_rewind_phi_fu_30255_p6 = data_75_V_read145_phi_reg_74990.read();
    } else {
        ap_phi_mux_data_75_V_read145_rewind_phi_fu_30255_p6 = data_75_V_read145_rewind_reg_30251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_760_V_read830_phi_phi_fu_83899_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_760_V_read830_phi_phi_fu_83899_p4 = ap_phi_mux_data_760_V_read830_rewind_phi_fu_39845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_760_V_read830_phi_phi_fu_83899_p4 = data_760_V_read.read();
        } else {
            ap_phi_mux_data_760_V_read830_phi_phi_fu_83899_p4 = ap_phi_reg_pp0_iter0_data_760_V_read830_phi_reg_83895.read();
        }
    } else {
        ap_phi_mux_data_760_V_read830_phi_phi_fu_83899_p4 = ap_phi_reg_pp0_iter0_data_760_V_read830_phi_reg_83895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_760_V_read830_rewind_phi_fu_39845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_760_V_read830_rewind_phi_fu_39845_p6 = data_760_V_read830_phi_reg_83895.read();
    } else {
        ap_phi_mux_data_760_V_read830_rewind_phi_fu_39845_p6 = data_760_V_read830_rewind_reg_39841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_761_V_read831_phi_phi_fu_83912_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_761_V_read831_phi_phi_fu_83912_p4 = ap_phi_mux_data_761_V_read831_rewind_phi_fu_39859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_761_V_read831_phi_phi_fu_83912_p4 = data_761_V_read.read();
        } else {
            ap_phi_mux_data_761_V_read831_phi_phi_fu_83912_p4 = ap_phi_reg_pp0_iter0_data_761_V_read831_phi_reg_83908.read();
        }
    } else {
        ap_phi_mux_data_761_V_read831_phi_phi_fu_83912_p4 = ap_phi_reg_pp0_iter0_data_761_V_read831_phi_reg_83908.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_761_V_read831_rewind_phi_fu_39859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_761_V_read831_rewind_phi_fu_39859_p6 = data_761_V_read831_phi_reg_83908.read();
    } else {
        ap_phi_mux_data_761_V_read831_rewind_phi_fu_39859_p6 = data_761_V_read831_rewind_reg_39855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_762_V_read832_phi_phi_fu_83925_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_762_V_read832_phi_phi_fu_83925_p4 = ap_phi_mux_data_762_V_read832_rewind_phi_fu_39873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_762_V_read832_phi_phi_fu_83925_p4 = data_762_V_read.read();
        } else {
            ap_phi_mux_data_762_V_read832_phi_phi_fu_83925_p4 = ap_phi_reg_pp0_iter0_data_762_V_read832_phi_reg_83921.read();
        }
    } else {
        ap_phi_mux_data_762_V_read832_phi_phi_fu_83925_p4 = ap_phi_reg_pp0_iter0_data_762_V_read832_phi_reg_83921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_762_V_read832_rewind_phi_fu_39873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_762_V_read832_rewind_phi_fu_39873_p6 = data_762_V_read832_phi_reg_83921.read();
    } else {
        ap_phi_mux_data_762_V_read832_rewind_phi_fu_39873_p6 = data_762_V_read832_rewind_reg_39869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_763_V_read833_phi_phi_fu_83938_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_763_V_read833_phi_phi_fu_83938_p4 = ap_phi_mux_data_763_V_read833_rewind_phi_fu_39887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_763_V_read833_phi_phi_fu_83938_p4 = data_763_V_read.read();
        } else {
            ap_phi_mux_data_763_V_read833_phi_phi_fu_83938_p4 = ap_phi_reg_pp0_iter0_data_763_V_read833_phi_reg_83934.read();
        }
    } else {
        ap_phi_mux_data_763_V_read833_phi_phi_fu_83938_p4 = ap_phi_reg_pp0_iter0_data_763_V_read833_phi_reg_83934.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_763_V_read833_rewind_phi_fu_39887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_763_V_read833_rewind_phi_fu_39887_p6 = data_763_V_read833_phi_reg_83934.read();
    } else {
        ap_phi_mux_data_763_V_read833_rewind_phi_fu_39887_p6 = data_763_V_read833_rewind_reg_39883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_764_V_read834_phi_phi_fu_83951_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_764_V_read834_phi_phi_fu_83951_p4 = ap_phi_mux_data_764_V_read834_rewind_phi_fu_39901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_764_V_read834_phi_phi_fu_83951_p4 = data_764_V_read.read();
        } else {
            ap_phi_mux_data_764_V_read834_phi_phi_fu_83951_p4 = ap_phi_reg_pp0_iter0_data_764_V_read834_phi_reg_83947.read();
        }
    } else {
        ap_phi_mux_data_764_V_read834_phi_phi_fu_83951_p4 = ap_phi_reg_pp0_iter0_data_764_V_read834_phi_reg_83947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_764_V_read834_rewind_phi_fu_39901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_764_V_read834_rewind_phi_fu_39901_p6 = data_764_V_read834_phi_reg_83947.read();
    } else {
        ap_phi_mux_data_764_V_read834_rewind_phi_fu_39901_p6 = data_764_V_read834_rewind_reg_39897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_765_V_read835_phi_phi_fu_83964_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_765_V_read835_phi_phi_fu_83964_p4 = ap_phi_mux_data_765_V_read835_rewind_phi_fu_39915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_765_V_read835_phi_phi_fu_83964_p4 = data_765_V_read.read();
        } else {
            ap_phi_mux_data_765_V_read835_phi_phi_fu_83964_p4 = ap_phi_reg_pp0_iter0_data_765_V_read835_phi_reg_83960.read();
        }
    } else {
        ap_phi_mux_data_765_V_read835_phi_phi_fu_83964_p4 = ap_phi_reg_pp0_iter0_data_765_V_read835_phi_reg_83960.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_765_V_read835_rewind_phi_fu_39915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_765_V_read835_rewind_phi_fu_39915_p6 = data_765_V_read835_phi_reg_83960.read();
    } else {
        ap_phi_mux_data_765_V_read835_rewind_phi_fu_39915_p6 = data_765_V_read835_rewind_reg_39911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_766_V_read836_phi_phi_fu_83977_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_766_V_read836_phi_phi_fu_83977_p4 = ap_phi_mux_data_766_V_read836_rewind_phi_fu_39929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_766_V_read836_phi_phi_fu_83977_p4 = data_766_V_read.read();
        } else {
            ap_phi_mux_data_766_V_read836_phi_phi_fu_83977_p4 = ap_phi_reg_pp0_iter0_data_766_V_read836_phi_reg_83973.read();
        }
    } else {
        ap_phi_mux_data_766_V_read836_phi_phi_fu_83977_p4 = ap_phi_reg_pp0_iter0_data_766_V_read836_phi_reg_83973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_766_V_read836_rewind_phi_fu_39929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_766_V_read836_rewind_phi_fu_39929_p6 = data_766_V_read836_phi_reg_83973.read();
    } else {
        ap_phi_mux_data_766_V_read836_rewind_phi_fu_39929_p6 = data_766_V_read836_rewind_reg_39925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_767_V_read837_phi_phi_fu_83990_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_767_V_read837_phi_phi_fu_83990_p4 = ap_phi_mux_data_767_V_read837_rewind_phi_fu_39943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_767_V_read837_phi_phi_fu_83990_p4 = data_767_V_read.read();
        } else {
            ap_phi_mux_data_767_V_read837_phi_phi_fu_83990_p4 = ap_phi_reg_pp0_iter0_data_767_V_read837_phi_reg_83986.read();
        }
    } else {
        ap_phi_mux_data_767_V_read837_phi_phi_fu_83990_p4 = ap_phi_reg_pp0_iter0_data_767_V_read837_phi_reg_83986.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_767_V_read837_rewind_phi_fu_39943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_767_V_read837_rewind_phi_fu_39943_p6 = data_767_V_read837_phi_reg_83986.read();
    } else {
        ap_phi_mux_data_767_V_read837_rewind_phi_fu_39943_p6 = data_767_V_read837_rewind_reg_39939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_768_V_read838_phi_phi_fu_84003_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_768_V_read838_phi_phi_fu_84003_p4 = ap_phi_mux_data_768_V_read838_rewind_phi_fu_39957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_768_V_read838_phi_phi_fu_84003_p4 = data_768_V_read.read();
        } else {
            ap_phi_mux_data_768_V_read838_phi_phi_fu_84003_p4 = ap_phi_reg_pp0_iter0_data_768_V_read838_phi_reg_83999.read();
        }
    } else {
        ap_phi_mux_data_768_V_read838_phi_phi_fu_84003_p4 = ap_phi_reg_pp0_iter0_data_768_V_read838_phi_reg_83999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_768_V_read838_rewind_phi_fu_39957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_768_V_read838_rewind_phi_fu_39957_p6 = data_768_V_read838_phi_reg_83999.read();
    } else {
        ap_phi_mux_data_768_V_read838_rewind_phi_fu_39957_p6 = data_768_V_read838_rewind_reg_39953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_769_V_read839_phi_phi_fu_84016_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_769_V_read839_phi_phi_fu_84016_p4 = ap_phi_mux_data_769_V_read839_rewind_phi_fu_39971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_769_V_read839_phi_phi_fu_84016_p4 = data_769_V_read.read();
        } else {
            ap_phi_mux_data_769_V_read839_phi_phi_fu_84016_p4 = ap_phi_reg_pp0_iter0_data_769_V_read839_phi_reg_84012.read();
        }
    } else {
        ap_phi_mux_data_769_V_read839_phi_phi_fu_84016_p4 = ap_phi_reg_pp0_iter0_data_769_V_read839_phi_reg_84012.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_769_V_read839_rewind_phi_fu_39971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_769_V_read839_rewind_phi_fu_39971_p6 = data_769_V_read839_phi_reg_84012.read();
    } else {
        ap_phi_mux_data_769_V_read839_rewind_phi_fu_39971_p6 = data_769_V_read839_rewind_reg_39967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_76_V_read146_phi_phi_fu_75007_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_76_V_read146_phi_phi_fu_75007_p4 = ap_phi_mux_data_76_V_read146_rewind_phi_fu_30269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_76_V_read146_phi_phi_fu_75007_p4 = data_76_V_read.read();
        } else {
            ap_phi_mux_data_76_V_read146_phi_phi_fu_75007_p4 = ap_phi_reg_pp0_iter0_data_76_V_read146_phi_reg_75003.read();
        }
    } else {
        ap_phi_mux_data_76_V_read146_phi_phi_fu_75007_p4 = ap_phi_reg_pp0_iter0_data_76_V_read146_phi_reg_75003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_76_V_read146_rewind_phi_fu_30269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_76_V_read146_rewind_phi_fu_30269_p6 = data_76_V_read146_phi_reg_75003.read();
    } else {
        ap_phi_mux_data_76_V_read146_rewind_phi_fu_30269_p6 = data_76_V_read146_rewind_reg_30265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_770_V_read840_phi_phi_fu_84029_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_770_V_read840_phi_phi_fu_84029_p4 = ap_phi_mux_data_770_V_read840_rewind_phi_fu_39985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_770_V_read840_phi_phi_fu_84029_p4 = data_770_V_read.read();
        } else {
            ap_phi_mux_data_770_V_read840_phi_phi_fu_84029_p4 = ap_phi_reg_pp0_iter0_data_770_V_read840_phi_reg_84025.read();
        }
    } else {
        ap_phi_mux_data_770_V_read840_phi_phi_fu_84029_p4 = ap_phi_reg_pp0_iter0_data_770_V_read840_phi_reg_84025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_770_V_read840_rewind_phi_fu_39985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_770_V_read840_rewind_phi_fu_39985_p6 = data_770_V_read840_phi_reg_84025.read();
    } else {
        ap_phi_mux_data_770_V_read840_rewind_phi_fu_39985_p6 = data_770_V_read840_rewind_reg_39981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_771_V_read841_phi_phi_fu_84042_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_771_V_read841_phi_phi_fu_84042_p4 = ap_phi_mux_data_771_V_read841_rewind_phi_fu_39999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_771_V_read841_phi_phi_fu_84042_p4 = data_771_V_read.read();
        } else {
            ap_phi_mux_data_771_V_read841_phi_phi_fu_84042_p4 = ap_phi_reg_pp0_iter0_data_771_V_read841_phi_reg_84038.read();
        }
    } else {
        ap_phi_mux_data_771_V_read841_phi_phi_fu_84042_p4 = ap_phi_reg_pp0_iter0_data_771_V_read841_phi_reg_84038.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_771_V_read841_rewind_phi_fu_39999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_771_V_read841_rewind_phi_fu_39999_p6 = data_771_V_read841_phi_reg_84038.read();
    } else {
        ap_phi_mux_data_771_V_read841_rewind_phi_fu_39999_p6 = data_771_V_read841_rewind_reg_39995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_772_V_read842_phi_phi_fu_84055_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_772_V_read842_phi_phi_fu_84055_p4 = ap_phi_mux_data_772_V_read842_rewind_phi_fu_40013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_772_V_read842_phi_phi_fu_84055_p4 = data_772_V_read.read();
        } else {
            ap_phi_mux_data_772_V_read842_phi_phi_fu_84055_p4 = ap_phi_reg_pp0_iter0_data_772_V_read842_phi_reg_84051.read();
        }
    } else {
        ap_phi_mux_data_772_V_read842_phi_phi_fu_84055_p4 = ap_phi_reg_pp0_iter0_data_772_V_read842_phi_reg_84051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_772_V_read842_rewind_phi_fu_40013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_772_V_read842_rewind_phi_fu_40013_p6 = data_772_V_read842_phi_reg_84051.read();
    } else {
        ap_phi_mux_data_772_V_read842_rewind_phi_fu_40013_p6 = data_772_V_read842_rewind_reg_40009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_773_V_read843_phi_phi_fu_84068_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_773_V_read843_phi_phi_fu_84068_p4 = ap_phi_mux_data_773_V_read843_rewind_phi_fu_40027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_773_V_read843_phi_phi_fu_84068_p4 = data_773_V_read.read();
        } else {
            ap_phi_mux_data_773_V_read843_phi_phi_fu_84068_p4 = ap_phi_reg_pp0_iter0_data_773_V_read843_phi_reg_84064.read();
        }
    } else {
        ap_phi_mux_data_773_V_read843_phi_phi_fu_84068_p4 = ap_phi_reg_pp0_iter0_data_773_V_read843_phi_reg_84064.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_773_V_read843_rewind_phi_fu_40027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_773_V_read843_rewind_phi_fu_40027_p6 = data_773_V_read843_phi_reg_84064.read();
    } else {
        ap_phi_mux_data_773_V_read843_rewind_phi_fu_40027_p6 = data_773_V_read843_rewind_reg_40023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_774_V_read844_phi_phi_fu_84081_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_774_V_read844_phi_phi_fu_84081_p4 = ap_phi_mux_data_774_V_read844_rewind_phi_fu_40041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_774_V_read844_phi_phi_fu_84081_p4 = data_774_V_read.read();
        } else {
            ap_phi_mux_data_774_V_read844_phi_phi_fu_84081_p4 = ap_phi_reg_pp0_iter0_data_774_V_read844_phi_reg_84077.read();
        }
    } else {
        ap_phi_mux_data_774_V_read844_phi_phi_fu_84081_p4 = ap_phi_reg_pp0_iter0_data_774_V_read844_phi_reg_84077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_774_V_read844_rewind_phi_fu_40041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_774_V_read844_rewind_phi_fu_40041_p6 = data_774_V_read844_phi_reg_84077.read();
    } else {
        ap_phi_mux_data_774_V_read844_rewind_phi_fu_40041_p6 = data_774_V_read844_rewind_reg_40037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_775_V_read845_phi_phi_fu_84094_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_775_V_read845_phi_phi_fu_84094_p4 = ap_phi_mux_data_775_V_read845_rewind_phi_fu_40055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_775_V_read845_phi_phi_fu_84094_p4 = data_775_V_read.read();
        } else {
            ap_phi_mux_data_775_V_read845_phi_phi_fu_84094_p4 = ap_phi_reg_pp0_iter0_data_775_V_read845_phi_reg_84090.read();
        }
    } else {
        ap_phi_mux_data_775_V_read845_phi_phi_fu_84094_p4 = ap_phi_reg_pp0_iter0_data_775_V_read845_phi_reg_84090.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_775_V_read845_rewind_phi_fu_40055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_775_V_read845_rewind_phi_fu_40055_p6 = data_775_V_read845_phi_reg_84090.read();
    } else {
        ap_phi_mux_data_775_V_read845_rewind_phi_fu_40055_p6 = data_775_V_read845_rewind_reg_40051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_776_V_read846_phi_phi_fu_84107_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_776_V_read846_phi_phi_fu_84107_p4 = ap_phi_mux_data_776_V_read846_rewind_phi_fu_40069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_776_V_read846_phi_phi_fu_84107_p4 = data_776_V_read.read();
        } else {
            ap_phi_mux_data_776_V_read846_phi_phi_fu_84107_p4 = ap_phi_reg_pp0_iter0_data_776_V_read846_phi_reg_84103.read();
        }
    } else {
        ap_phi_mux_data_776_V_read846_phi_phi_fu_84107_p4 = ap_phi_reg_pp0_iter0_data_776_V_read846_phi_reg_84103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_776_V_read846_rewind_phi_fu_40069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_776_V_read846_rewind_phi_fu_40069_p6 = data_776_V_read846_phi_reg_84103.read();
    } else {
        ap_phi_mux_data_776_V_read846_rewind_phi_fu_40069_p6 = data_776_V_read846_rewind_reg_40065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_777_V_read847_phi_phi_fu_84120_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_777_V_read847_phi_phi_fu_84120_p4 = ap_phi_mux_data_777_V_read847_rewind_phi_fu_40083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_777_V_read847_phi_phi_fu_84120_p4 = data_777_V_read.read();
        } else {
            ap_phi_mux_data_777_V_read847_phi_phi_fu_84120_p4 = ap_phi_reg_pp0_iter0_data_777_V_read847_phi_reg_84116.read();
        }
    } else {
        ap_phi_mux_data_777_V_read847_phi_phi_fu_84120_p4 = ap_phi_reg_pp0_iter0_data_777_V_read847_phi_reg_84116.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_777_V_read847_rewind_phi_fu_40083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_777_V_read847_rewind_phi_fu_40083_p6 = data_777_V_read847_phi_reg_84116.read();
    } else {
        ap_phi_mux_data_777_V_read847_rewind_phi_fu_40083_p6 = data_777_V_read847_rewind_reg_40079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_778_V_read848_phi_phi_fu_84133_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_778_V_read848_phi_phi_fu_84133_p4 = ap_phi_mux_data_778_V_read848_rewind_phi_fu_40097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_778_V_read848_phi_phi_fu_84133_p4 = data_778_V_read.read();
        } else {
            ap_phi_mux_data_778_V_read848_phi_phi_fu_84133_p4 = ap_phi_reg_pp0_iter0_data_778_V_read848_phi_reg_84129.read();
        }
    } else {
        ap_phi_mux_data_778_V_read848_phi_phi_fu_84133_p4 = ap_phi_reg_pp0_iter0_data_778_V_read848_phi_reg_84129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_778_V_read848_rewind_phi_fu_40097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_778_V_read848_rewind_phi_fu_40097_p6 = data_778_V_read848_phi_reg_84129.read();
    } else {
        ap_phi_mux_data_778_V_read848_rewind_phi_fu_40097_p6 = data_778_V_read848_rewind_reg_40093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_779_V_read849_phi_phi_fu_84146_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_779_V_read849_phi_phi_fu_84146_p4 = ap_phi_mux_data_779_V_read849_rewind_phi_fu_40111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_779_V_read849_phi_phi_fu_84146_p4 = data_779_V_read.read();
        } else {
            ap_phi_mux_data_779_V_read849_phi_phi_fu_84146_p4 = ap_phi_reg_pp0_iter0_data_779_V_read849_phi_reg_84142.read();
        }
    } else {
        ap_phi_mux_data_779_V_read849_phi_phi_fu_84146_p4 = ap_phi_reg_pp0_iter0_data_779_V_read849_phi_reg_84142.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_779_V_read849_rewind_phi_fu_40111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_779_V_read849_rewind_phi_fu_40111_p6 = data_779_V_read849_phi_reg_84142.read();
    } else {
        ap_phi_mux_data_779_V_read849_rewind_phi_fu_40111_p6 = data_779_V_read849_rewind_reg_40107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_77_V_read147_phi_phi_fu_75020_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_77_V_read147_phi_phi_fu_75020_p4 = ap_phi_mux_data_77_V_read147_rewind_phi_fu_30283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_77_V_read147_phi_phi_fu_75020_p4 = data_77_V_read.read();
        } else {
            ap_phi_mux_data_77_V_read147_phi_phi_fu_75020_p4 = ap_phi_reg_pp0_iter0_data_77_V_read147_phi_reg_75016.read();
        }
    } else {
        ap_phi_mux_data_77_V_read147_phi_phi_fu_75020_p4 = ap_phi_reg_pp0_iter0_data_77_V_read147_phi_reg_75016.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_77_V_read147_rewind_phi_fu_30283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_77_V_read147_rewind_phi_fu_30283_p6 = data_77_V_read147_phi_reg_75016.read();
    } else {
        ap_phi_mux_data_77_V_read147_rewind_phi_fu_30283_p6 = data_77_V_read147_rewind_reg_30279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_780_V_read850_phi_phi_fu_84159_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_780_V_read850_phi_phi_fu_84159_p4 = ap_phi_mux_data_780_V_read850_rewind_phi_fu_40125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_780_V_read850_phi_phi_fu_84159_p4 = data_780_V_read.read();
        } else {
            ap_phi_mux_data_780_V_read850_phi_phi_fu_84159_p4 = ap_phi_reg_pp0_iter0_data_780_V_read850_phi_reg_84155.read();
        }
    } else {
        ap_phi_mux_data_780_V_read850_phi_phi_fu_84159_p4 = ap_phi_reg_pp0_iter0_data_780_V_read850_phi_reg_84155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_780_V_read850_rewind_phi_fu_40125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_780_V_read850_rewind_phi_fu_40125_p6 = data_780_V_read850_phi_reg_84155.read();
    } else {
        ap_phi_mux_data_780_V_read850_rewind_phi_fu_40125_p6 = data_780_V_read850_rewind_reg_40121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_781_V_read851_phi_phi_fu_84172_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_781_V_read851_phi_phi_fu_84172_p4 = ap_phi_mux_data_781_V_read851_rewind_phi_fu_40139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_781_V_read851_phi_phi_fu_84172_p4 = data_781_V_read.read();
        } else {
            ap_phi_mux_data_781_V_read851_phi_phi_fu_84172_p4 = ap_phi_reg_pp0_iter0_data_781_V_read851_phi_reg_84168.read();
        }
    } else {
        ap_phi_mux_data_781_V_read851_phi_phi_fu_84172_p4 = ap_phi_reg_pp0_iter0_data_781_V_read851_phi_reg_84168.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_781_V_read851_rewind_phi_fu_40139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_781_V_read851_rewind_phi_fu_40139_p6 = data_781_V_read851_phi_reg_84168.read();
    } else {
        ap_phi_mux_data_781_V_read851_rewind_phi_fu_40139_p6 = data_781_V_read851_rewind_reg_40135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_782_V_read852_phi_phi_fu_84185_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_782_V_read852_phi_phi_fu_84185_p4 = ap_phi_mux_data_782_V_read852_rewind_phi_fu_40153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_782_V_read852_phi_phi_fu_84185_p4 = data_782_V_read.read();
        } else {
            ap_phi_mux_data_782_V_read852_phi_phi_fu_84185_p4 = ap_phi_reg_pp0_iter0_data_782_V_read852_phi_reg_84181.read();
        }
    } else {
        ap_phi_mux_data_782_V_read852_phi_phi_fu_84185_p4 = ap_phi_reg_pp0_iter0_data_782_V_read852_phi_reg_84181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_782_V_read852_rewind_phi_fu_40153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_782_V_read852_rewind_phi_fu_40153_p6 = data_782_V_read852_phi_reg_84181.read();
    } else {
        ap_phi_mux_data_782_V_read852_rewind_phi_fu_40153_p6 = data_782_V_read852_rewind_reg_40149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_783_V_read853_phi_phi_fu_84198_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_783_V_read853_phi_phi_fu_84198_p4 = ap_phi_mux_data_783_V_read853_rewind_phi_fu_40167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_783_V_read853_phi_phi_fu_84198_p4 = data_783_V_read.read();
        } else {
            ap_phi_mux_data_783_V_read853_phi_phi_fu_84198_p4 = ap_phi_reg_pp0_iter0_data_783_V_read853_phi_reg_84194.read();
        }
    } else {
        ap_phi_mux_data_783_V_read853_phi_phi_fu_84198_p4 = ap_phi_reg_pp0_iter0_data_783_V_read853_phi_reg_84194.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_783_V_read853_rewind_phi_fu_40167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_783_V_read853_rewind_phi_fu_40167_p6 = data_783_V_read853_phi_reg_84194.read();
    } else {
        ap_phi_mux_data_783_V_read853_rewind_phi_fu_40167_p6 = data_783_V_read853_rewind_reg_40163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_784_V_read854_phi_phi_fu_84211_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_784_V_read854_phi_phi_fu_84211_p4 = ap_phi_mux_data_784_V_read854_rewind_phi_fu_40181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_784_V_read854_phi_phi_fu_84211_p4 = data_784_V_read.read();
        } else {
            ap_phi_mux_data_784_V_read854_phi_phi_fu_84211_p4 = ap_phi_reg_pp0_iter0_data_784_V_read854_phi_reg_84207.read();
        }
    } else {
        ap_phi_mux_data_784_V_read854_phi_phi_fu_84211_p4 = ap_phi_reg_pp0_iter0_data_784_V_read854_phi_reg_84207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_784_V_read854_rewind_phi_fu_40181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_784_V_read854_rewind_phi_fu_40181_p6 = data_784_V_read854_phi_reg_84207.read();
    } else {
        ap_phi_mux_data_784_V_read854_rewind_phi_fu_40181_p6 = data_784_V_read854_rewind_reg_40177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_785_V_read855_phi_phi_fu_84224_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_785_V_read855_phi_phi_fu_84224_p4 = ap_phi_mux_data_785_V_read855_rewind_phi_fu_40195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_785_V_read855_phi_phi_fu_84224_p4 = data_785_V_read.read();
        } else {
            ap_phi_mux_data_785_V_read855_phi_phi_fu_84224_p4 = ap_phi_reg_pp0_iter0_data_785_V_read855_phi_reg_84220.read();
        }
    } else {
        ap_phi_mux_data_785_V_read855_phi_phi_fu_84224_p4 = ap_phi_reg_pp0_iter0_data_785_V_read855_phi_reg_84220.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_785_V_read855_rewind_phi_fu_40195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_785_V_read855_rewind_phi_fu_40195_p6 = data_785_V_read855_phi_reg_84220.read();
    } else {
        ap_phi_mux_data_785_V_read855_rewind_phi_fu_40195_p6 = data_785_V_read855_rewind_reg_40191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_786_V_read856_phi_phi_fu_84237_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_786_V_read856_phi_phi_fu_84237_p4 = ap_phi_mux_data_786_V_read856_rewind_phi_fu_40209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_786_V_read856_phi_phi_fu_84237_p4 = data_786_V_read.read();
        } else {
            ap_phi_mux_data_786_V_read856_phi_phi_fu_84237_p4 = ap_phi_reg_pp0_iter0_data_786_V_read856_phi_reg_84233.read();
        }
    } else {
        ap_phi_mux_data_786_V_read856_phi_phi_fu_84237_p4 = ap_phi_reg_pp0_iter0_data_786_V_read856_phi_reg_84233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_786_V_read856_rewind_phi_fu_40209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_786_V_read856_rewind_phi_fu_40209_p6 = data_786_V_read856_phi_reg_84233.read();
    } else {
        ap_phi_mux_data_786_V_read856_rewind_phi_fu_40209_p6 = data_786_V_read856_rewind_reg_40205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_787_V_read857_phi_phi_fu_84250_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_787_V_read857_phi_phi_fu_84250_p4 = ap_phi_mux_data_787_V_read857_rewind_phi_fu_40223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_787_V_read857_phi_phi_fu_84250_p4 = data_787_V_read.read();
        } else {
            ap_phi_mux_data_787_V_read857_phi_phi_fu_84250_p4 = ap_phi_reg_pp0_iter0_data_787_V_read857_phi_reg_84246.read();
        }
    } else {
        ap_phi_mux_data_787_V_read857_phi_phi_fu_84250_p4 = ap_phi_reg_pp0_iter0_data_787_V_read857_phi_reg_84246.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_787_V_read857_rewind_phi_fu_40223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_787_V_read857_rewind_phi_fu_40223_p6 = data_787_V_read857_phi_reg_84246.read();
    } else {
        ap_phi_mux_data_787_V_read857_rewind_phi_fu_40223_p6 = data_787_V_read857_rewind_reg_40219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_788_V_read858_phi_phi_fu_84263_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_788_V_read858_phi_phi_fu_84263_p4 = ap_phi_mux_data_788_V_read858_rewind_phi_fu_40237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_788_V_read858_phi_phi_fu_84263_p4 = data_788_V_read.read();
        } else {
            ap_phi_mux_data_788_V_read858_phi_phi_fu_84263_p4 = ap_phi_reg_pp0_iter0_data_788_V_read858_phi_reg_84259.read();
        }
    } else {
        ap_phi_mux_data_788_V_read858_phi_phi_fu_84263_p4 = ap_phi_reg_pp0_iter0_data_788_V_read858_phi_reg_84259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_788_V_read858_rewind_phi_fu_40237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_788_V_read858_rewind_phi_fu_40237_p6 = data_788_V_read858_phi_reg_84259.read();
    } else {
        ap_phi_mux_data_788_V_read858_rewind_phi_fu_40237_p6 = data_788_V_read858_rewind_reg_40233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_789_V_read859_phi_phi_fu_84276_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_789_V_read859_phi_phi_fu_84276_p4 = ap_phi_mux_data_789_V_read859_rewind_phi_fu_40251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_789_V_read859_phi_phi_fu_84276_p4 = data_789_V_read.read();
        } else {
            ap_phi_mux_data_789_V_read859_phi_phi_fu_84276_p4 = ap_phi_reg_pp0_iter0_data_789_V_read859_phi_reg_84272.read();
        }
    } else {
        ap_phi_mux_data_789_V_read859_phi_phi_fu_84276_p4 = ap_phi_reg_pp0_iter0_data_789_V_read859_phi_reg_84272.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_789_V_read859_rewind_phi_fu_40251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_789_V_read859_rewind_phi_fu_40251_p6 = data_789_V_read859_phi_reg_84272.read();
    } else {
        ap_phi_mux_data_789_V_read859_rewind_phi_fu_40251_p6 = data_789_V_read859_rewind_reg_40247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_78_V_read148_phi_phi_fu_75033_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_78_V_read148_phi_phi_fu_75033_p4 = ap_phi_mux_data_78_V_read148_rewind_phi_fu_30297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_78_V_read148_phi_phi_fu_75033_p4 = data_78_V_read.read();
        } else {
            ap_phi_mux_data_78_V_read148_phi_phi_fu_75033_p4 = ap_phi_reg_pp0_iter0_data_78_V_read148_phi_reg_75029.read();
        }
    } else {
        ap_phi_mux_data_78_V_read148_phi_phi_fu_75033_p4 = ap_phi_reg_pp0_iter0_data_78_V_read148_phi_reg_75029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_78_V_read148_rewind_phi_fu_30297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_78_V_read148_rewind_phi_fu_30297_p6 = data_78_V_read148_phi_reg_75029.read();
    } else {
        ap_phi_mux_data_78_V_read148_rewind_phi_fu_30297_p6 = data_78_V_read148_rewind_reg_30293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_790_V_read860_phi_phi_fu_84289_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_790_V_read860_phi_phi_fu_84289_p4 = ap_phi_mux_data_790_V_read860_rewind_phi_fu_40265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_790_V_read860_phi_phi_fu_84289_p4 = data_790_V_read.read();
        } else {
            ap_phi_mux_data_790_V_read860_phi_phi_fu_84289_p4 = ap_phi_reg_pp0_iter0_data_790_V_read860_phi_reg_84285.read();
        }
    } else {
        ap_phi_mux_data_790_V_read860_phi_phi_fu_84289_p4 = ap_phi_reg_pp0_iter0_data_790_V_read860_phi_reg_84285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_790_V_read860_rewind_phi_fu_40265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_790_V_read860_rewind_phi_fu_40265_p6 = data_790_V_read860_phi_reg_84285.read();
    } else {
        ap_phi_mux_data_790_V_read860_rewind_phi_fu_40265_p6 = data_790_V_read860_rewind_reg_40261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_791_V_read861_phi_phi_fu_84302_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_791_V_read861_phi_phi_fu_84302_p4 = ap_phi_mux_data_791_V_read861_rewind_phi_fu_40279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_791_V_read861_phi_phi_fu_84302_p4 = data_791_V_read.read();
        } else {
            ap_phi_mux_data_791_V_read861_phi_phi_fu_84302_p4 = ap_phi_reg_pp0_iter0_data_791_V_read861_phi_reg_84298.read();
        }
    } else {
        ap_phi_mux_data_791_V_read861_phi_phi_fu_84302_p4 = ap_phi_reg_pp0_iter0_data_791_V_read861_phi_reg_84298.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_791_V_read861_rewind_phi_fu_40279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_791_V_read861_rewind_phi_fu_40279_p6 = data_791_V_read861_phi_reg_84298.read();
    } else {
        ap_phi_mux_data_791_V_read861_rewind_phi_fu_40279_p6 = data_791_V_read861_rewind_reg_40275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_792_V_read862_phi_phi_fu_84315_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_792_V_read862_phi_phi_fu_84315_p4 = ap_phi_mux_data_792_V_read862_rewind_phi_fu_40293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_792_V_read862_phi_phi_fu_84315_p4 = data_792_V_read.read();
        } else {
            ap_phi_mux_data_792_V_read862_phi_phi_fu_84315_p4 = ap_phi_reg_pp0_iter0_data_792_V_read862_phi_reg_84311.read();
        }
    } else {
        ap_phi_mux_data_792_V_read862_phi_phi_fu_84315_p4 = ap_phi_reg_pp0_iter0_data_792_V_read862_phi_reg_84311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_792_V_read862_rewind_phi_fu_40293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_792_V_read862_rewind_phi_fu_40293_p6 = data_792_V_read862_phi_reg_84311.read();
    } else {
        ap_phi_mux_data_792_V_read862_rewind_phi_fu_40293_p6 = data_792_V_read862_rewind_reg_40289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_793_V_read863_phi_phi_fu_84328_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_793_V_read863_phi_phi_fu_84328_p4 = ap_phi_mux_data_793_V_read863_rewind_phi_fu_40307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_793_V_read863_phi_phi_fu_84328_p4 = data_793_V_read.read();
        } else {
            ap_phi_mux_data_793_V_read863_phi_phi_fu_84328_p4 = ap_phi_reg_pp0_iter0_data_793_V_read863_phi_reg_84324.read();
        }
    } else {
        ap_phi_mux_data_793_V_read863_phi_phi_fu_84328_p4 = ap_phi_reg_pp0_iter0_data_793_V_read863_phi_reg_84324.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_793_V_read863_rewind_phi_fu_40307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_793_V_read863_rewind_phi_fu_40307_p6 = data_793_V_read863_phi_reg_84324.read();
    } else {
        ap_phi_mux_data_793_V_read863_rewind_phi_fu_40307_p6 = data_793_V_read863_rewind_reg_40303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_794_V_read864_phi_phi_fu_84341_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_794_V_read864_phi_phi_fu_84341_p4 = ap_phi_mux_data_794_V_read864_rewind_phi_fu_40321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_794_V_read864_phi_phi_fu_84341_p4 = data_794_V_read.read();
        } else {
            ap_phi_mux_data_794_V_read864_phi_phi_fu_84341_p4 = ap_phi_reg_pp0_iter0_data_794_V_read864_phi_reg_84337.read();
        }
    } else {
        ap_phi_mux_data_794_V_read864_phi_phi_fu_84341_p4 = ap_phi_reg_pp0_iter0_data_794_V_read864_phi_reg_84337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_794_V_read864_rewind_phi_fu_40321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_794_V_read864_rewind_phi_fu_40321_p6 = data_794_V_read864_phi_reg_84337.read();
    } else {
        ap_phi_mux_data_794_V_read864_rewind_phi_fu_40321_p6 = data_794_V_read864_rewind_reg_40317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_795_V_read865_phi_phi_fu_84354_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_795_V_read865_phi_phi_fu_84354_p4 = ap_phi_mux_data_795_V_read865_rewind_phi_fu_40335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_795_V_read865_phi_phi_fu_84354_p4 = data_795_V_read.read();
        } else {
            ap_phi_mux_data_795_V_read865_phi_phi_fu_84354_p4 = ap_phi_reg_pp0_iter0_data_795_V_read865_phi_reg_84350.read();
        }
    } else {
        ap_phi_mux_data_795_V_read865_phi_phi_fu_84354_p4 = ap_phi_reg_pp0_iter0_data_795_V_read865_phi_reg_84350.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_795_V_read865_rewind_phi_fu_40335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_795_V_read865_rewind_phi_fu_40335_p6 = data_795_V_read865_phi_reg_84350.read();
    } else {
        ap_phi_mux_data_795_V_read865_rewind_phi_fu_40335_p6 = data_795_V_read865_rewind_reg_40331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_796_V_read866_phi_phi_fu_84367_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_796_V_read866_phi_phi_fu_84367_p4 = ap_phi_mux_data_796_V_read866_rewind_phi_fu_40349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_796_V_read866_phi_phi_fu_84367_p4 = data_796_V_read.read();
        } else {
            ap_phi_mux_data_796_V_read866_phi_phi_fu_84367_p4 = ap_phi_reg_pp0_iter0_data_796_V_read866_phi_reg_84363.read();
        }
    } else {
        ap_phi_mux_data_796_V_read866_phi_phi_fu_84367_p4 = ap_phi_reg_pp0_iter0_data_796_V_read866_phi_reg_84363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_796_V_read866_rewind_phi_fu_40349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_796_V_read866_rewind_phi_fu_40349_p6 = data_796_V_read866_phi_reg_84363.read();
    } else {
        ap_phi_mux_data_796_V_read866_rewind_phi_fu_40349_p6 = data_796_V_read866_rewind_reg_40345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_797_V_read867_phi_phi_fu_84380_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_797_V_read867_phi_phi_fu_84380_p4 = ap_phi_mux_data_797_V_read867_rewind_phi_fu_40363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_797_V_read867_phi_phi_fu_84380_p4 = data_797_V_read.read();
        } else {
            ap_phi_mux_data_797_V_read867_phi_phi_fu_84380_p4 = ap_phi_reg_pp0_iter0_data_797_V_read867_phi_reg_84376.read();
        }
    } else {
        ap_phi_mux_data_797_V_read867_phi_phi_fu_84380_p4 = ap_phi_reg_pp0_iter0_data_797_V_read867_phi_reg_84376.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_797_V_read867_rewind_phi_fu_40363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_797_V_read867_rewind_phi_fu_40363_p6 = data_797_V_read867_phi_reg_84376.read();
    } else {
        ap_phi_mux_data_797_V_read867_rewind_phi_fu_40363_p6 = data_797_V_read867_rewind_reg_40359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_798_V_read868_phi_phi_fu_84393_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_798_V_read868_phi_phi_fu_84393_p4 = ap_phi_mux_data_798_V_read868_rewind_phi_fu_40377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_798_V_read868_phi_phi_fu_84393_p4 = data_798_V_read.read();
        } else {
            ap_phi_mux_data_798_V_read868_phi_phi_fu_84393_p4 = ap_phi_reg_pp0_iter0_data_798_V_read868_phi_reg_84389.read();
        }
    } else {
        ap_phi_mux_data_798_V_read868_phi_phi_fu_84393_p4 = ap_phi_reg_pp0_iter0_data_798_V_read868_phi_reg_84389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_798_V_read868_rewind_phi_fu_40377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_798_V_read868_rewind_phi_fu_40377_p6 = data_798_V_read868_phi_reg_84389.read();
    } else {
        ap_phi_mux_data_798_V_read868_rewind_phi_fu_40377_p6 = data_798_V_read868_rewind_reg_40373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_799_V_read869_phi_phi_fu_84406_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_799_V_read869_phi_phi_fu_84406_p4 = ap_phi_mux_data_799_V_read869_rewind_phi_fu_40391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_799_V_read869_phi_phi_fu_84406_p4 = data_799_V_read.read();
        } else {
            ap_phi_mux_data_799_V_read869_phi_phi_fu_84406_p4 = ap_phi_reg_pp0_iter0_data_799_V_read869_phi_reg_84402.read();
        }
    } else {
        ap_phi_mux_data_799_V_read869_phi_phi_fu_84406_p4 = ap_phi_reg_pp0_iter0_data_799_V_read869_phi_reg_84402.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_799_V_read869_rewind_phi_fu_40391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_799_V_read869_rewind_phi_fu_40391_p6 = data_799_V_read869_phi_reg_84402.read();
    } else {
        ap_phi_mux_data_799_V_read869_rewind_phi_fu_40391_p6 = data_799_V_read869_rewind_reg_40387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_79_V_read149_phi_phi_fu_75046_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_79_V_read149_phi_phi_fu_75046_p4 = ap_phi_mux_data_79_V_read149_rewind_phi_fu_30311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_79_V_read149_phi_phi_fu_75046_p4 = data_79_V_read.read();
        } else {
            ap_phi_mux_data_79_V_read149_phi_phi_fu_75046_p4 = ap_phi_reg_pp0_iter0_data_79_V_read149_phi_reg_75042.read();
        }
    } else {
        ap_phi_mux_data_79_V_read149_phi_phi_fu_75046_p4 = ap_phi_reg_pp0_iter0_data_79_V_read149_phi_reg_75042.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_79_V_read149_rewind_phi_fu_30311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_79_V_read149_rewind_phi_fu_30311_p6 = data_79_V_read149_phi_reg_75042.read();
    } else {
        ap_phi_mux_data_79_V_read149_rewind_phi_fu_30311_p6 = data_79_V_read149_rewind_reg_30307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_7_V_read77_phi_phi_fu_74110_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_7_V_read77_phi_phi_fu_74110_p4 = ap_phi_mux_data_7_V_read77_rewind_phi_fu_29303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_7_V_read77_phi_phi_fu_74110_p4 = data_7_V_read.read();
        } else {
            ap_phi_mux_data_7_V_read77_phi_phi_fu_74110_p4 = ap_phi_reg_pp0_iter0_data_7_V_read77_phi_reg_74106.read();
        }
    } else {
        ap_phi_mux_data_7_V_read77_phi_phi_fu_74110_p4 = ap_phi_reg_pp0_iter0_data_7_V_read77_phi_reg_74106.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_7_V_read77_rewind_phi_fu_29303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_7_V_read77_rewind_phi_fu_29303_p6 = data_7_V_read77_phi_reg_74106.read();
    } else {
        ap_phi_mux_data_7_V_read77_rewind_phi_fu_29303_p6 = data_7_V_read77_rewind_reg_29299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_800_V_read870_phi_phi_fu_84419_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_800_V_read870_phi_phi_fu_84419_p4 = ap_phi_mux_data_800_V_read870_rewind_phi_fu_40405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_800_V_read870_phi_phi_fu_84419_p4 = data_800_V_read.read();
        } else {
            ap_phi_mux_data_800_V_read870_phi_phi_fu_84419_p4 = ap_phi_reg_pp0_iter0_data_800_V_read870_phi_reg_84415.read();
        }
    } else {
        ap_phi_mux_data_800_V_read870_phi_phi_fu_84419_p4 = ap_phi_reg_pp0_iter0_data_800_V_read870_phi_reg_84415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_800_V_read870_rewind_phi_fu_40405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_800_V_read870_rewind_phi_fu_40405_p6 = data_800_V_read870_phi_reg_84415.read();
    } else {
        ap_phi_mux_data_800_V_read870_rewind_phi_fu_40405_p6 = data_800_V_read870_rewind_reg_40401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_801_V_read871_phi_phi_fu_84432_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_801_V_read871_phi_phi_fu_84432_p4 = ap_phi_mux_data_801_V_read871_rewind_phi_fu_40419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_801_V_read871_phi_phi_fu_84432_p4 = data_801_V_read.read();
        } else {
            ap_phi_mux_data_801_V_read871_phi_phi_fu_84432_p4 = ap_phi_reg_pp0_iter0_data_801_V_read871_phi_reg_84428.read();
        }
    } else {
        ap_phi_mux_data_801_V_read871_phi_phi_fu_84432_p4 = ap_phi_reg_pp0_iter0_data_801_V_read871_phi_reg_84428.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_801_V_read871_rewind_phi_fu_40419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_801_V_read871_rewind_phi_fu_40419_p6 = data_801_V_read871_phi_reg_84428.read();
    } else {
        ap_phi_mux_data_801_V_read871_rewind_phi_fu_40419_p6 = data_801_V_read871_rewind_reg_40415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_802_V_read872_phi_phi_fu_84445_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_802_V_read872_phi_phi_fu_84445_p4 = ap_phi_mux_data_802_V_read872_rewind_phi_fu_40433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_802_V_read872_phi_phi_fu_84445_p4 = data_802_V_read.read();
        } else {
            ap_phi_mux_data_802_V_read872_phi_phi_fu_84445_p4 = ap_phi_reg_pp0_iter0_data_802_V_read872_phi_reg_84441.read();
        }
    } else {
        ap_phi_mux_data_802_V_read872_phi_phi_fu_84445_p4 = ap_phi_reg_pp0_iter0_data_802_V_read872_phi_reg_84441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_802_V_read872_rewind_phi_fu_40433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_802_V_read872_rewind_phi_fu_40433_p6 = data_802_V_read872_phi_reg_84441.read();
    } else {
        ap_phi_mux_data_802_V_read872_rewind_phi_fu_40433_p6 = data_802_V_read872_rewind_reg_40429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_803_V_read873_phi_phi_fu_84458_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_803_V_read873_phi_phi_fu_84458_p4 = ap_phi_mux_data_803_V_read873_rewind_phi_fu_40447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_803_V_read873_phi_phi_fu_84458_p4 = data_803_V_read.read();
        } else {
            ap_phi_mux_data_803_V_read873_phi_phi_fu_84458_p4 = ap_phi_reg_pp0_iter0_data_803_V_read873_phi_reg_84454.read();
        }
    } else {
        ap_phi_mux_data_803_V_read873_phi_phi_fu_84458_p4 = ap_phi_reg_pp0_iter0_data_803_V_read873_phi_reg_84454.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_803_V_read873_rewind_phi_fu_40447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_803_V_read873_rewind_phi_fu_40447_p6 = data_803_V_read873_phi_reg_84454.read();
    } else {
        ap_phi_mux_data_803_V_read873_rewind_phi_fu_40447_p6 = data_803_V_read873_rewind_reg_40443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_804_V_read874_phi_phi_fu_84471_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_804_V_read874_phi_phi_fu_84471_p4 = ap_phi_mux_data_804_V_read874_rewind_phi_fu_40461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_804_V_read874_phi_phi_fu_84471_p4 = data_804_V_read.read();
        } else {
            ap_phi_mux_data_804_V_read874_phi_phi_fu_84471_p4 = ap_phi_reg_pp0_iter0_data_804_V_read874_phi_reg_84467.read();
        }
    } else {
        ap_phi_mux_data_804_V_read874_phi_phi_fu_84471_p4 = ap_phi_reg_pp0_iter0_data_804_V_read874_phi_reg_84467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_804_V_read874_rewind_phi_fu_40461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_804_V_read874_rewind_phi_fu_40461_p6 = data_804_V_read874_phi_reg_84467.read();
    } else {
        ap_phi_mux_data_804_V_read874_rewind_phi_fu_40461_p6 = data_804_V_read874_rewind_reg_40457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_805_V_read875_phi_phi_fu_84484_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_805_V_read875_phi_phi_fu_84484_p4 = ap_phi_mux_data_805_V_read875_rewind_phi_fu_40475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_805_V_read875_phi_phi_fu_84484_p4 = data_805_V_read.read();
        } else {
            ap_phi_mux_data_805_V_read875_phi_phi_fu_84484_p4 = ap_phi_reg_pp0_iter0_data_805_V_read875_phi_reg_84480.read();
        }
    } else {
        ap_phi_mux_data_805_V_read875_phi_phi_fu_84484_p4 = ap_phi_reg_pp0_iter0_data_805_V_read875_phi_reg_84480.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_805_V_read875_rewind_phi_fu_40475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_805_V_read875_rewind_phi_fu_40475_p6 = data_805_V_read875_phi_reg_84480.read();
    } else {
        ap_phi_mux_data_805_V_read875_rewind_phi_fu_40475_p6 = data_805_V_read875_rewind_reg_40471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_806_V_read876_phi_phi_fu_84497_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_806_V_read876_phi_phi_fu_84497_p4 = ap_phi_mux_data_806_V_read876_rewind_phi_fu_40489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_806_V_read876_phi_phi_fu_84497_p4 = data_806_V_read.read();
        } else {
            ap_phi_mux_data_806_V_read876_phi_phi_fu_84497_p4 = ap_phi_reg_pp0_iter0_data_806_V_read876_phi_reg_84493.read();
        }
    } else {
        ap_phi_mux_data_806_V_read876_phi_phi_fu_84497_p4 = ap_phi_reg_pp0_iter0_data_806_V_read876_phi_reg_84493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_806_V_read876_rewind_phi_fu_40489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_806_V_read876_rewind_phi_fu_40489_p6 = data_806_V_read876_phi_reg_84493.read();
    } else {
        ap_phi_mux_data_806_V_read876_rewind_phi_fu_40489_p6 = data_806_V_read876_rewind_reg_40485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_807_V_read877_phi_phi_fu_84510_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_807_V_read877_phi_phi_fu_84510_p4 = ap_phi_mux_data_807_V_read877_rewind_phi_fu_40503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_807_V_read877_phi_phi_fu_84510_p4 = data_807_V_read.read();
        } else {
            ap_phi_mux_data_807_V_read877_phi_phi_fu_84510_p4 = ap_phi_reg_pp0_iter0_data_807_V_read877_phi_reg_84506.read();
        }
    } else {
        ap_phi_mux_data_807_V_read877_phi_phi_fu_84510_p4 = ap_phi_reg_pp0_iter0_data_807_V_read877_phi_reg_84506.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_807_V_read877_rewind_phi_fu_40503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_807_V_read877_rewind_phi_fu_40503_p6 = data_807_V_read877_phi_reg_84506.read();
    } else {
        ap_phi_mux_data_807_V_read877_rewind_phi_fu_40503_p6 = data_807_V_read877_rewind_reg_40499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_808_V_read878_phi_phi_fu_84523_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_808_V_read878_phi_phi_fu_84523_p4 = ap_phi_mux_data_808_V_read878_rewind_phi_fu_40517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_808_V_read878_phi_phi_fu_84523_p4 = data_808_V_read.read();
        } else {
            ap_phi_mux_data_808_V_read878_phi_phi_fu_84523_p4 = ap_phi_reg_pp0_iter0_data_808_V_read878_phi_reg_84519.read();
        }
    } else {
        ap_phi_mux_data_808_V_read878_phi_phi_fu_84523_p4 = ap_phi_reg_pp0_iter0_data_808_V_read878_phi_reg_84519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_808_V_read878_rewind_phi_fu_40517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_808_V_read878_rewind_phi_fu_40517_p6 = data_808_V_read878_phi_reg_84519.read();
    } else {
        ap_phi_mux_data_808_V_read878_rewind_phi_fu_40517_p6 = data_808_V_read878_rewind_reg_40513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_809_V_read879_phi_phi_fu_84536_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_809_V_read879_phi_phi_fu_84536_p4 = ap_phi_mux_data_809_V_read879_rewind_phi_fu_40531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_809_V_read879_phi_phi_fu_84536_p4 = data_809_V_read.read();
        } else {
            ap_phi_mux_data_809_V_read879_phi_phi_fu_84536_p4 = ap_phi_reg_pp0_iter0_data_809_V_read879_phi_reg_84532.read();
        }
    } else {
        ap_phi_mux_data_809_V_read879_phi_phi_fu_84536_p4 = ap_phi_reg_pp0_iter0_data_809_V_read879_phi_reg_84532.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_809_V_read879_rewind_phi_fu_40531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_809_V_read879_rewind_phi_fu_40531_p6 = data_809_V_read879_phi_reg_84532.read();
    } else {
        ap_phi_mux_data_809_V_read879_rewind_phi_fu_40531_p6 = data_809_V_read879_rewind_reg_40527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_80_V_read150_phi_phi_fu_75059_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_80_V_read150_phi_phi_fu_75059_p4 = ap_phi_mux_data_80_V_read150_rewind_phi_fu_30325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_80_V_read150_phi_phi_fu_75059_p4 = data_80_V_read.read();
        } else {
            ap_phi_mux_data_80_V_read150_phi_phi_fu_75059_p4 = ap_phi_reg_pp0_iter0_data_80_V_read150_phi_reg_75055.read();
        }
    } else {
        ap_phi_mux_data_80_V_read150_phi_phi_fu_75059_p4 = ap_phi_reg_pp0_iter0_data_80_V_read150_phi_reg_75055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_80_V_read150_rewind_phi_fu_30325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_80_V_read150_rewind_phi_fu_30325_p6 = data_80_V_read150_phi_reg_75055.read();
    } else {
        ap_phi_mux_data_80_V_read150_rewind_phi_fu_30325_p6 = data_80_V_read150_rewind_reg_30321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_810_V_read880_phi_phi_fu_84549_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_810_V_read880_phi_phi_fu_84549_p4 = ap_phi_mux_data_810_V_read880_rewind_phi_fu_40545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_810_V_read880_phi_phi_fu_84549_p4 = data_810_V_read.read();
        } else {
            ap_phi_mux_data_810_V_read880_phi_phi_fu_84549_p4 = ap_phi_reg_pp0_iter0_data_810_V_read880_phi_reg_84545.read();
        }
    } else {
        ap_phi_mux_data_810_V_read880_phi_phi_fu_84549_p4 = ap_phi_reg_pp0_iter0_data_810_V_read880_phi_reg_84545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_810_V_read880_rewind_phi_fu_40545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_810_V_read880_rewind_phi_fu_40545_p6 = data_810_V_read880_phi_reg_84545.read();
    } else {
        ap_phi_mux_data_810_V_read880_rewind_phi_fu_40545_p6 = data_810_V_read880_rewind_reg_40541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_811_V_read881_phi_phi_fu_84562_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_811_V_read881_phi_phi_fu_84562_p4 = ap_phi_mux_data_811_V_read881_rewind_phi_fu_40559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_811_V_read881_phi_phi_fu_84562_p4 = data_811_V_read.read();
        } else {
            ap_phi_mux_data_811_V_read881_phi_phi_fu_84562_p4 = ap_phi_reg_pp0_iter0_data_811_V_read881_phi_reg_84558.read();
        }
    } else {
        ap_phi_mux_data_811_V_read881_phi_phi_fu_84562_p4 = ap_phi_reg_pp0_iter0_data_811_V_read881_phi_reg_84558.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_811_V_read881_rewind_phi_fu_40559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_811_V_read881_rewind_phi_fu_40559_p6 = data_811_V_read881_phi_reg_84558.read();
    } else {
        ap_phi_mux_data_811_V_read881_rewind_phi_fu_40559_p6 = data_811_V_read881_rewind_reg_40555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_812_V_read882_phi_phi_fu_84575_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_812_V_read882_phi_phi_fu_84575_p4 = ap_phi_mux_data_812_V_read882_rewind_phi_fu_40573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_812_V_read882_phi_phi_fu_84575_p4 = data_812_V_read.read();
        } else {
            ap_phi_mux_data_812_V_read882_phi_phi_fu_84575_p4 = ap_phi_reg_pp0_iter0_data_812_V_read882_phi_reg_84571.read();
        }
    } else {
        ap_phi_mux_data_812_V_read882_phi_phi_fu_84575_p4 = ap_phi_reg_pp0_iter0_data_812_V_read882_phi_reg_84571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_812_V_read882_rewind_phi_fu_40573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_812_V_read882_rewind_phi_fu_40573_p6 = data_812_V_read882_phi_reg_84571.read();
    } else {
        ap_phi_mux_data_812_V_read882_rewind_phi_fu_40573_p6 = data_812_V_read882_rewind_reg_40569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_813_V_read883_phi_phi_fu_84588_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_813_V_read883_phi_phi_fu_84588_p4 = ap_phi_mux_data_813_V_read883_rewind_phi_fu_40587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_813_V_read883_phi_phi_fu_84588_p4 = data_813_V_read.read();
        } else {
            ap_phi_mux_data_813_V_read883_phi_phi_fu_84588_p4 = ap_phi_reg_pp0_iter0_data_813_V_read883_phi_reg_84584.read();
        }
    } else {
        ap_phi_mux_data_813_V_read883_phi_phi_fu_84588_p4 = ap_phi_reg_pp0_iter0_data_813_V_read883_phi_reg_84584.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_813_V_read883_rewind_phi_fu_40587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_813_V_read883_rewind_phi_fu_40587_p6 = data_813_V_read883_phi_reg_84584.read();
    } else {
        ap_phi_mux_data_813_V_read883_rewind_phi_fu_40587_p6 = data_813_V_read883_rewind_reg_40583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_814_V_read884_phi_phi_fu_84601_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_814_V_read884_phi_phi_fu_84601_p4 = ap_phi_mux_data_814_V_read884_rewind_phi_fu_40601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_814_V_read884_phi_phi_fu_84601_p4 = data_814_V_read.read();
        } else {
            ap_phi_mux_data_814_V_read884_phi_phi_fu_84601_p4 = ap_phi_reg_pp0_iter0_data_814_V_read884_phi_reg_84597.read();
        }
    } else {
        ap_phi_mux_data_814_V_read884_phi_phi_fu_84601_p4 = ap_phi_reg_pp0_iter0_data_814_V_read884_phi_reg_84597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_814_V_read884_rewind_phi_fu_40601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_814_V_read884_rewind_phi_fu_40601_p6 = data_814_V_read884_phi_reg_84597.read();
    } else {
        ap_phi_mux_data_814_V_read884_rewind_phi_fu_40601_p6 = data_814_V_read884_rewind_reg_40597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_815_V_read885_phi_phi_fu_84614_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_815_V_read885_phi_phi_fu_84614_p4 = ap_phi_mux_data_815_V_read885_rewind_phi_fu_40615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_815_V_read885_phi_phi_fu_84614_p4 = data_815_V_read.read();
        } else {
            ap_phi_mux_data_815_V_read885_phi_phi_fu_84614_p4 = ap_phi_reg_pp0_iter0_data_815_V_read885_phi_reg_84610.read();
        }
    } else {
        ap_phi_mux_data_815_V_read885_phi_phi_fu_84614_p4 = ap_phi_reg_pp0_iter0_data_815_V_read885_phi_reg_84610.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_815_V_read885_rewind_phi_fu_40615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_815_V_read885_rewind_phi_fu_40615_p6 = data_815_V_read885_phi_reg_84610.read();
    } else {
        ap_phi_mux_data_815_V_read885_rewind_phi_fu_40615_p6 = data_815_V_read885_rewind_reg_40611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_816_V_read886_phi_phi_fu_84627_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_816_V_read886_phi_phi_fu_84627_p4 = ap_phi_mux_data_816_V_read886_rewind_phi_fu_40629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_816_V_read886_phi_phi_fu_84627_p4 = data_816_V_read.read();
        } else {
            ap_phi_mux_data_816_V_read886_phi_phi_fu_84627_p4 = ap_phi_reg_pp0_iter0_data_816_V_read886_phi_reg_84623.read();
        }
    } else {
        ap_phi_mux_data_816_V_read886_phi_phi_fu_84627_p4 = ap_phi_reg_pp0_iter0_data_816_V_read886_phi_reg_84623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_816_V_read886_rewind_phi_fu_40629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_816_V_read886_rewind_phi_fu_40629_p6 = data_816_V_read886_phi_reg_84623.read();
    } else {
        ap_phi_mux_data_816_V_read886_rewind_phi_fu_40629_p6 = data_816_V_read886_rewind_reg_40625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_817_V_read887_phi_phi_fu_84640_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_817_V_read887_phi_phi_fu_84640_p4 = ap_phi_mux_data_817_V_read887_rewind_phi_fu_40643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_817_V_read887_phi_phi_fu_84640_p4 = data_817_V_read.read();
        } else {
            ap_phi_mux_data_817_V_read887_phi_phi_fu_84640_p4 = ap_phi_reg_pp0_iter0_data_817_V_read887_phi_reg_84636.read();
        }
    } else {
        ap_phi_mux_data_817_V_read887_phi_phi_fu_84640_p4 = ap_phi_reg_pp0_iter0_data_817_V_read887_phi_reg_84636.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_817_V_read887_rewind_phi_fu_40643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_817_V_read887_rewind_phi_fu_40643_p6 = data_817_V_read887_phi_reg_84636.read();
    } else {
        ap_phi_mux_data_817_V_read887_rewind_phi_fu_40643_p6 = data_817_V_read887_rewind_reg_40639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_818_V_read888_phi_phi_fu_84653_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_818_V_read888_phi_phi_fu_84653_p4 = ap_phi_mux_data_818_V_read888_rewind_phi_fu_40657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_818_V_read888_phi_phi_fu_84653_p4 = data_818_V_read.read();
        } else {
            ap_phi_mux_data_818_V_read888_phi_phi_fu_84653_p4 = ap_phi_reg_pp0_iter0_data_818_V_read888_phi_reg_84649.read();
        }
    } else {
        ap_phi_mux_data_818_V_read888_phi_phi_fu_84653_p4 = ap_phi_reg_pp0_iter0_data_818_V_read888_phi_reg_84649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_818_V_read888_rewind_phi_fu_40657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_818_V_read888_rewind_phi_fu_40657_p6 = data_818_V_read888_phi_reg_84649.read();
    } else {
        ap_phi_mux_data_818_V_read888_rewind_phi_fu_40657_p6 = data_818_V_read888_rewind_reg_40653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_819_V_read889_phi_phi_fu_84666_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_819_V_read889_phi_phi_fu_84666_p4 = ap_phi_mux_data_819_V_read889_rewind_phi_fu_40671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_819_V_read889_phi_phi_fu_84666_p4 = data_819_V_read.read();
        } else {
            ap_phi_mux_data_819_V_read889_phi_phi_fu_84666_p4 = ap_phi_reg_pp0_iter0_data_819_V_read889_phi_reg_84662.read();
        }
    } else {
        ap_phi_mux_data_819_V_read889_phi_phi_fu_84666_p4 = ap_phi_reg_pp0_iter0_data_819_V_read889_phi_reg_84662.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_819_V_read889_rewind_phi_fu_40671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_819_V_read889_rewind_phi_fu_40671_p6 = data_819_V_read889_phi_reg_84662.read();
    } else {
        ap_phi_mux_data_819_V_read889_rewind_phi_fu_40671_p6 = data_819_V_read889_rewind_reg_40667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_81_V_read151_phi_phi_fu_75072_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_81_V_read151_phi_phi_fu_75072_p4 = ap_phi_mux_data_81_V_read151_rewind_phi_fu_30339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_81_V_read151_phi_phi_fu_75072_p4 = data_81_V_read.read();
        } else {
            ap_phi_mux_data_81_V_read151_phi_phi_fu_75072_p4 = ap_phi_reg_pp0_iter0_data_81_V_read151_phi_reg_75068.read();
        }
    } else {
        ap_phi_mux_data_81_V_read151_phi_phi_fu_75072_p4 = ap_phi_reg_pp0_iter0_data_81_V_read151_phi_reg_75068.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_81_V_read151_rewind_phi_fu_30339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_81_V_read151_rewind_phi_fu_30339_p6 = data_81_V_read151_phi_reg_75068.read();
    } else {
        ap_phi_mux_data_81_V_read151_rewind_phi_fu_30339_p6 = data_81_V_read151_rewind_reg_30335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_820_V_read890_phi_phi_fu_84679_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_820_V_read890_phi_phi_fu_84679_p4 = ap_phi_mux_data_820_V_read890_rewind_phi_fu_40685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_820_V_read890_phi_phi_fu_84679_p4 = data_820_V_read.read();
        } else {
            ap_phi_mux_data_820_V_read890_phi_phi_fu_84679_p4 = ap_phi_reg_pp0_iter0_data_820_V_read890_phi_reg_84675.read();
        }
    } else {
        ap_phi_mux_data_820_V_read890_phi_phi_fu_84679_p4 = ap_phi_reg_pp0_iter0_data_820_V_read890_phi_reg_84675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_820_V_read890_rewind_phi_fu_40685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_820_V_read890_rewind_phi_fu_40685_p6 = data_820_V_read890_phi_reg_84675.read();
    } else {
        ap_phi_mux_data_820_V_read890_rewind_phi_fu_40685_p6 = data_820_V_read890_rewind_reg_40681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_821_V_read891_phi_phi_fu_84692_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_821_V_read891_phi_phi_fu_84692_p4 = ap_phi_mux_data_821_V_read891_rewind_phi_fu_40699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_821_V_read891_phi_phi_fu_84692_p4 = data_821_V_read.read();
        } else {
            ap_phi_mux_data_821_V_read891_phi_phi_fu_84692_p4 = ap_phi_reg_pp0_iter0_data_821_V_read891_phi_reg_84688.read();
        }
    } else {
        ap_phi_mux_data_821_V_read891_phi_phi_fu_84692_p4 = ap_phi_reg_pp0_iter0_data_821_V_read891_phi_reg_84688.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_821_V_read891_rewind_phi_fu_40699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_821_V_read891_rewind_phi_fu_40699_p6 = data_821_V_read891_phi_reg_84688.read();
    } else {
        ap_phi_mux_data_821_V_read891_rewind_phi_fu_40699_p6 = data_821_V_read891_rewind_reg_40695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_822_V_read892_phi_phi_fu_84705_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_822_V_read892_phi_phi_fu_84705_p4 = ap_phi_mux_data_822_V_read892_rewind_phi_fu_40713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_822_V_read892_phi_phi_fu_84705_p4 = data_822_V_read.read();
        } else {
            ap_phi_mux_data_822_V_read892_phi_phi_fu_84705_p4 = ap_phi_reg_pp0_iter0_data_822_V_read892_phi_reg_84701.read();
        }
    } else {
        ap_phi_mux_data_822_V_read892_phi_phi_fu_84705_p4 = ap_phi_reg_pp0_iter0_data_822_V_read892_phi_reg_84701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_822_V_read892_rewind_phi_fu_40713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_822_V_read892_rewind_phi_fu_40713_p6 = data_822_V_read892_phi_reg_84701.read();
    } else {
        ap_phi_mux_data_822_V_read892_rewind_phi_fu_40713_p6 = data_822_V_read892_rewind_reg_40709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_823_V_read893_phi_phi_fu_84718_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_823_V_read893_phi_phi_fu_84718_p4 = ap_phi_mux_data_823_V_read893_rewind_phi_fu_40727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_823_V_read893_phi_phi_fu_84718_p4 = data_823_V_read.read();
        } else {
            ap_phi_mux_data_823_V_read893_phi_phi_fu_84718_p4 = ap_phi_reg_pp0_iter0_data_823_V_read893_phi_reg_84714.read();
        }
    } else {
        ap_phi_mux_data_823_V_read893_phi_phi_fu_84718_p4 = ap_phi_reg_pp0_iter0_data_823_V_read893_phi_reg_84714.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_823_V_read893_rewind_phi_fu_40727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_823_V_read893_rewind_phi_fu_40727_p6 = data_823_V_read893_phi_reg_84714.read();
    } else {
        ap_phi_mux_data_823_V_read893_rewind_phi_fu_40727_p6 = data_823_V_read893_rewind_reg_40723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_824_V_read894_phi_phi_fu_84731_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_824_V_read894_phi_phi_fu_84731_p4 = ap_phi_mux_data_824_V_read894_rewind_phi_fu_40741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_824_V_read894_phi_phi_fu_84731_p4 = data_824_V_read.read();
        } else {
            ap_phi_mux_data_824_V_read894_phi_phi_fu_84731_p4 = ap_phi_reg_pp0_iter0_data_824_V_read894_phi_reg_84727.read();
        }
    } else {
        ap_phi_mux_data_824_V_read894_phi_phi_fu_84731_p4 = ap_phi_reg_pp0_iter0_data_824_V_read894_phi_reg_84727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_824_V_read894_rewind_phi_fu_40741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_824_V_read894_rewind_phi_fu_40741_p6 = data_824_V_read894_phi_reg_84727.read();
    } else {
        ap_phi_mux_data_824_V_read894_rewind_phi_fu_40741_p6 = data_824_V_read894_rewind_reg_40737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_825_V_read895_phi_phi_fu_84744_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_825_V_read895_phi_phi_fu_84744_p4 = ap_phi_mux_data_825_V_read895_rewind_phi_fu_40755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_825_V_read895_phi_phi_fu_84744_p4 = data_825_V_read.read();
        } else {
            ap_phi_mux_data_825_V_read895_phi_phi_fu_84744_p4 = ap_phi_reg_pp0_iter0_data_825_V_read895_phi_reg_84740.read();
        }
    } else {
        ap_phi_mux_data_825_V_read895_phi_phi_fu_84744_p4 = ap_phi_reg_pp0_iter0_data_825_V_read895_phi_reg_84740.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_825_V_read895_rewind_phi_fu_40755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_825_V_read895_rewind_phi_fu_40755_p6 = data_825_V_read895_phi_reg_84740.read();
    } else {
        ap_phi_mux_data_825_V_read895_rewind_phi_fu_40755_p6 = data_825_V_read895_rewind_reg_40751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_826_V_read896_phi_phi_fu_84757_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_826_V_read896_phi_phi_fu_84757_p4 = ap_phi_mux_data_826_V_read896_rewind_phi_fu_40769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_826_V_read896_phi_phi_fu_84757_p4 = data_826_V_read.read();
        } else {
            ap_phi_mux_data_826_V_read896_phi_phi_fu_84757_p4 = ap_phi_reg_pp0_iter0_data_826_V_read896_phi_reg_84753.read();
        }
    } else {
        ap_phi_mux_data_826_V_read896_phi_phi_fu_84757_p4 = ap_phi_reg_pp0_iter0_data_826_V_read896_phi_reg_84753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_826_V_read896_rewind_phi_fu_40769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_826_V_read896_rewind_phi_fu_40769_p6 = data_826_V_read896_phi_reg_84753.read();
    } else {
        ap_phi_mux_data_826_V_read896_rewind_phi_fu_40769_p6 = data_826_V_read896_rewind_reg_40765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_827_V_read897_phi_phi_fu_84770_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_827_V_read897_phi_phi_fu_84770_p4 = ap_phi_mux_data_827_V_read897_rewind_phi_fu_40783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_827_V_read897_phi_phi_fu_84770_p4 = data_827_V_read.read();
        } else {
            ap_phi_mux_data_827_V_read897_phi_phi_fu_84770_p4 = ap_phi_reg_pp0_iter0_data_827_V_read897_phi_reg_84766.read();
        }
    } else {
        ap_phi_mux_data_827_V_read897_phi_phi_fu_84770_p4 = ap_phi_reg_pp0_iter0_data_827_V_read897_phi_reg_84766.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_827_V_read897_rewind_phi_fu_40783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_827_V_read897_rewind_phi_fu_40783_p6 = data_827_V_read897_phi_reg_84766.read();
    } else {
        ap_phi_mux_data_827_V_read897_rewind_phi_fu_40783_p6 = data_827_V_read897_rewind_reg_40779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_828_V_read898_phi_phi_fu_84783_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_828_V_read898_phi_phi_fu_84783_p4 = ap_phi_mux_data_828_V_read898_rewind_phi_fu_40797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_828_V_read898_phi_phi_fu_84783_p4 = data_828_V_read.read();
        } else {
            ap_phi_mux_data_828_V_read898_phi_phi_fu_84783_p4 = ap_phi_reg_pp0_iter0_data_828_V_read898_phi_reg_84779.read();
        }
    } else {
        ap_phi_mux_data_828_V_read898_phi_phi_fu_84783_p4 = ap_phi_reg_pp0_iter0_data_828_V_read898_phi_reg_84779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_828_V_read898_rewind_phi_fu_40797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_828_V_read898_rewind_phi_fu_40797_p6 = data_828_V_read898_phi_reg_84779.read();
    } else {
        ap_phi_mux_data_828_V_read898_rewind_phi_fu_40797_p6 = data_828_V_read898_rewind_reg_40793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_829_V_read899_phi_phi_fu_84796_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_829_V_read899_phi_phi_fu_84796_p4 = ap_phi_mux_data_829_V_read899_rewind_phi_fu_40811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_829_V_read899_phi_phi_fu_84796_p4 = data_829_V_read.read();
        } else {
            ap_phi_mux_data_829_V_read899_phi_phi_fu_84796_p4 = ap_phi_reg_pp0_iter0_data_829_V_read899_phi_reg_84792.read();
        }
    } else {
        ap_phi_mux_data_829_V_read899_phi_phi_fu_84796_p4 = ap_phi_reg_pp0_iter0_data_829_V_read899_phi_reg_84792.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_829_V_read899_rewind_phi_fu_40811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_829_V_read899_rewind_phi_fu_40811_p6 = data_829_V_read899_phi_reg_84792.read();
    } else {
        ap_phi_mux_data_829_V_read899_rewind_phi_fu_40811_p6 = data_829_V_read899_rewind_reg_40807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_82_V_read152_phi_phi_fu_75085_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_82_V_read152_phi_phi_fu_75085_p4 = ap_phi_mux_data_82_V_read152_rewind_phi_fu_30353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_82_V_read152_phi_phi_fu_75085_p4 = data_82_V_read.read();
        } else {
            ap_phi_mux_data_82_V_read152_phi_phi_fu_75085_p4 = ap_phi_reg_pp0_iter0_data_82_V_read152_phi_reg_75081.read();
        }
    } else {
        ap_phi_mux_data_82_V_read152_phi_phi_fu_75085_p4 = ap_phi_reg_pp0_iter0_data_82_V_read152_phi_reg_75081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_82_V_read152_rewind_phi_fu_30353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_82_V_read152_rewind_phi_fu_30353_p6 = data_82_V_read152_phi_reg_75081.read();
    } else {
        ap_phi_mux_data_82_V_read152_rewind_phi_fu_30353_p6 = data_82_V_read152_rewind_reg_30349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_830_V_read900_phi_phi_fu_84809_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_830_V_read900_phi_phi_fu_84809_p4 = ap_phi_mux_data_830_V_read900_rewind_phi_fu_40825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_830_V_read900_phi_phi_fu_84809_p4 = data_830_V_read.read();
        } else {
            ap_phi_mux_data_830_V_read900_phi_phi_fu_84809_p4 = ap_phi_reg_pp0_iter0_data_830_V_read900_phi_reg_84805.read();
        }
    } else {
        ap_phi_mux_data_830_V_read900_phi_phi_fu_84809_p4 = ap_phi_reg_pp0_iter0_data_830_V_read900_phi_reg_84805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_830_V_read900_rewind_phi_fu_40825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_830_V_read900_rewind_phi_fu_40825_p6 = data_830_V_read900_phi_reg_84805.read();
    } else {
        ap_phi_mux_data_830_V_read900_rewind_phi_fu_40825_p6 = data_830_V_read900_rewind_reg_40821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_831_V_read901_phi_phi_fu_84822_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_831_V_read901_phi_phi_fu_84822_p4 = ap_phi_mux_data_831_V_read901_rewind_phi_fu_40839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_831_V_read901_phi_phi_fu_84822_p4 = data_831_V_read.read();
        } else {
            ap_phi_mux_data_831_V_read901_phi_phi_fu_84822_p4 = ap_phi_reg_pp0_iter0_data_831_V_read901_phi_reg_84818.read();
        }
    } else {
        ap_phi_mux_data_831_V_read901_phi_phi_fu_84822_p4 = ap_phi_reg_pp0_iter0_data_831_V_read901_phi_reg_84818.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_831_V_read901_rewind_phi_fu_40839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_831_V_read901_rewind_phi_fu_40839_p6 = data_831_V_read901_phi_reg_84818.read();
    } else {
        ap_phi_mux_data_831_V_read901_rewind_phi_fu_40839_p6 = data_831_V_read901_rewind_reg_40835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_832_V_read902_phi_phi_fu_84835_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_832_V_read902_phi_phi_fu_84835_p4 = ap_phi_mux_data_832_V_read902_rewind_phi_fu_40853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_832_V_read902_phi_phi_fu_84835_p4 = data_832_V_read.read();
        } else {
            ap_phi_mux_data_832_V_read902_phi_phi_fu_84835_p4 = ap_phi_reg_pp0_iter0_data_832_V_read902_phi_reg_84831.read();
        }
    } else {
        ap_phi_mux_data_832_V_read902_phi_phi_fu_84835_p4 = ap_phi_reg_pp0_iter0_data_832_V_read902_phi_reg_84831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_832_V_read902_rewind_phi_fu_40853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_832_V_read902_rewind_phi_fu_40853_p6 = data_832_V_read902_phi_reg_84831.read();
    } else {
        ap_phi_mux_data_832_V_read902_rewind_phi_fu_40853_p6 = data_832_V_read902_rewind_reg_40849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_833_V_read903_phi_phi_fu_84848_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_833_V_read903_phi_phi_fu_84848_p4 = ap_phi_mux_data_833_V_read903_rewind_phi_fu_40867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_833_V_read903_phi_phi_fu_84848_p4 = data_833_V_read.read();
        } else {
            ap_phi_mux_data_833_V_read903_phi_phi_fu_84848_p4 = ap_phi_reg_pp0_iter0_data_833_V_read903_phi_reg_84844.read();
        }
    } else {
        ap_phi_mux_data_833_V_read903_phi_phi_fu_84848_p4 = ap_phi_reg_pp0_iter0_data_833_V_read903_phi_reg_84844.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_833_V_read903_rewind_phi_fu_40867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_833_V_read903_rewind_phi_fu_40867_p6 = data_833_V_read903_phi_reg_84844.read();
    } else {
        ap_phi_mux_data_833_V_read903_rewind_phi_fu_40867_p6 = data_833_V_read903_rewind_reg_40863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_834_V_read904_phi_phi_fu_84861_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_834_V_read904_phi_phi_fu_84861_p4 = ap_phi_mux_data_834_V_read904_rewind_phi_fu_40881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_834_V_read904_phi_phi_fu_84861_p4 = data_834_V_read.read();
        } else {
            ap_phi_mux_data_834_V_read904_phi_phi_fu_84861_p4 = ap_phi_reg_pp0_iter0_data_834_V_read904_phi_reg_84857.read();
        }
    } else {
        ap_phi_mux_data_834_V_read904_phi_phi_fu_84861_p4 = ap_phi_reg_pp0_iter0_data_834_V_read904_phi_reg_84857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_834_V_read904_rewind_phi_fu_40881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_834_V_read904_rewind_phi_fu_40881_p6 = data_834_V_read904_phi_reg_84857.read();
    } else {
        ap_phi_mux_data_834_V_read904_rewind_phi_fu_40881_p6 = data_834_V_read904_rewind_reg_40877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_835_V_read905_phi_phi_fu_84874_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_835_V_read905_phi_phi_fu_84874_p4 = ap_phi_mux_data_835_V_read905_rewind_phi_fu_40895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_835_V_read905_phi_phi_fu_84874_p4 = data_835_V_read.read();
        } else {
            ap_phi_mux_data_835_V_read905_phi_phi_fu_84874_p4 = ap_phi_reg_pp0_iter0_data_835_V_read905_phi_reg_84870.read();
        }
    } else {
        ap_phi_mux_data_835_V_read905_phi_phi_fu_84874_p4 = ap_phi_reg_pp0_iter0_data_835_V_read905_phi_reg_84870.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_835_V_read905_rewind_phi_fu_40895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_835_V_read905_rewind_phi_fu_40895_p6 = data_835_V_read905_phi_reg_84870.read();
    } else {
        ap_phi_mux_data_835_V_read905_rewind_phi_fu_40895_p6 = data_835_V_read905_rewind_reg_40891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_836_V_read906_phi_phi_fu_84887_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_836_V_read906_phi_phi_fu_84887_p4 = ap_phi_mux_data_836_V_read906_rewind_phi_fu_40909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_836_V_read906_phi_phi_fu_84887_p4 = data_836_V_read.read();
        } else {
            ap_phi_mux_data_836_V_read906_phi_phi_fu_84887_p4 = ap_phi_reg_pp0_iter0_data_836_V_read906_phi_reg_84883.read();
        }
    } else {
        ap_phi_mux_data_836_V_read906_phi_phi_fu_84887_p4 = ap_phi_reg_pp0_iter0_data_836_V_read906_phi_reg_84883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_836_V_read906_rewind_phi_fu_40909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_836_V_read906_rewind_phi_fu_40909_p6 = data_836_V_read906_phi_reg_84883.read();
    } else {
        ap_phi_mux_data_836_V_read906_rewind_phi_fu_40909_p6 = data_836_V_read906_rewind_reg_40905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_837_V_read907_phi_phi_fu_84900_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_837_V_read907_phi_phi_fu_84900_p4 = ap_phi_mux_data_837_V_read907_rewind_phi_fu_40923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_837_V_read907_phi_phi_fu_84900_p4 = data_837_V_read.read();
        } else {
            ap_phi_mux_data_837_V_read907_phi_phi_fu_84900_p4 = ap_phi_reg_pp0_iter0_data_837_V_read907_phi_reg_84896.read();
        }
    } else {
        ap_phi_mux_data_837_V_read907_phi_phi_fu_84900_p4 = ap_phi_reg_pp0_iter0_data_837_V_read907_phi_reg_84896.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_837_V_read907_rewind_phi_fu_40923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_837_V_read907_rewind_phi_fu_40923_p6 = data_837_V_read907_phi_reg_84896.read();
    } else {
        ap_phi_mux_data_837_V_read907_rewind_phi_fu_40923_p6 = data_837_V_read907_rewind_reg_40919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_838_V_read908_phi_phi_fu_84913_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_838_V_read908_phi_phi_fu_84913_p4 = ap_phi_mux_data_838_V_read908_rewind_phi_fu_40937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_838_V_read908_phi_phi_fu_84913_p4 = data_838_V_read.read();
        } else {
            ap_phi_mux_data_838_V_read908_phi_phi_fu_84913_p4 = ap_phi_reg_pp0_iter0_data_838_V_read908_phi_reg_84909.read();
        }
    } else {
        ap_phi_mux_data_838_V_read908_phi_phi_fu_84913_p4 = ap_phi_reg_pp0_iter0_data_838_V_read908_phi_reg_84909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_838_V_read908_rewind_phi_fu_40937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_838_V_read908_rewind_phi_fu_40937_p6 = data_838_V_read908_phi_reg_84909.read();
    } else {
        ap_phi_mux_data_838_V_read908_rewind_phi_fu_40937_p6 = data_838_V_read908_rewind_reg_40933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_839_V_read909_phi_phi_fu_84926_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_839_V_read909_phi_phi_fu_84926_p4 = ap_phi_mux_data_839_V_read909_rewind_phi_fu_40951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_839_V_read909_phi_phi_fu_84926_p4 = data_839_V_read.read();
        } else {
            ap_phi_mux_data_839_V_read909_phi_phi_fu_84926_p4 = ap_phi_reg_pp0_iter0_data_839_V_read909_phi_reg_84922.read();
        }
    } else {
        ap_phi_mux_data_839_V_read909_phi_phi_fu_84926_p4 = ap_phi_reg_pp0_iter0_data_839_V_read909_phi_reg_84922.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_839_V_read909_rewind_phi_fu_40951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_839_V_read909_rewind_phi_fu_40951_p6 = data_839_V_read909_phi_reg_84922.read();
    } else {
        ap_phi_mux_data_839_V_read909_rewind_phi_fu_40951_p6 = data_839_V_read909_rewind_reg_40947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_83_V_read153_phi_phi_fu_75098_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_83_V_read153_phi_phi_fu_75098_p4 = ap_phi_mux_data_83_V_read153_rewind_phi_fu_30367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_83_V_read153_phi_phi_fu_75098_p4 = data_83_V_read.read();
        } else {
            ap_phi_mux_data_83_V_read153_phi_phi_fu_75098_p4 = ap_phi_reg_pp0_iter0_data_83_V_read153_phi_reg_75094.read();
        }
    } else {
        ap_phi_mux_data_83_V_read153_phi_phi_fu_75098_p4 = ap_phi_reg_pp0_iter0_data_83_V_read153_phi_reg_75094.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_83_V_read153_rewind_phi_fu_30367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_83_V_read153_rewind_phi_fu_30367_p6 = data_83_V_read153_phi_reg_75094.read();
    } else {
        ap_phi_mux_data_83_V_read153_rewind_phi_fu_30367_p6 = data_83_V_read153_rewind_reg_30363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_840_V_read910_phi_phi_fu_84939_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_840_V_read910_phi_phi_fu_84939_p4 = ap_phi_mux_data_840_V_read910_rewind_phi_fu_40965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_840_V_read910_phi_phi_fu_84939_p4 = data_840_V_read.read();
        } else {
            ap_phi_mux_data_840_V_read910_phi_phi_fu_84939_p4 = ap_phi_reg_pp0_iter0_data_840_V_read910_phi_reg_84935.read();
        }
    } else {
        ap_phi_mux_data_840_V_read910_phi_phi_fu_84939_p4 = ap_phi_reg_pp0_iter0_data_840_V_read910_phi_reg_84935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_840_V_read910_rewind_phi_fu_40965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_840_V_read910_rewind_phi_fu_40965_p6 = data_840_V_read910_phi_reg_84935.read();
    } else {
        ap_phi_mux_data_840_V_read910_rewind_phi_fu_40965_p6 = data_840_V_read910_rewind_reg_40961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_841_V_read911_phi_phi_fu_84952_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_841_V_read911_phi_phi_fu_84952_p4 = ap_phi_mux_data_841_V_read911_rewind_phi_fu_40979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_841_V_read911_phi_phi_fu_84952_p4 = data_841_V_read.read();
        } else {
            ap_phi_mux_data_841_V_read911_phi_phi_fu_84952_p4 = ap_phi_reg_pp0_iter0_data_841_V_read911_phi_reg_84948.read();
        }
    } else {
        ap_phi_mux_data_841_V_read911_phi_phi_fu_84952_p4 = ap_phi_reg_pp0_iter0_data_841_V_read911_phi_reg_84948.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_841_V_read911_rewind_phi_fu_40979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_841_V_read911_rewind_phi_fu_40979_p6 = data_841_V_read911_phi_reg_84948.read();
    } else {
        ap_phi_mux_data_841_V_read911_rewind_phi_fu_40979_p6 = data_841_V_read911_rewind_reg_40975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_842_V_read912_phi_phi_fu_84965_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_842_V_read912_phi_phi_fu_84965_p4 = ap_phi_mux_data_842_V_read912_rewind_phi_fu_40993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_842_V_read912_phi_phi_fu_84965_p4 = data_842_V_read.read();
        } else {
            ap_phi_mux_data_842_V_read912_phi_phi_fu_84965_p4 = ap_phi_reg_pp0_iter0_data_842_V_read912_phi_reg_84961.read();
        }
    } else {
        ap_phi_mux_data_842_V_read912_phi_phi_fu_84965_p4 = ap_phi_reg_pp0_iter0_data_842_V_read912_phi_reg_84961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_842_V_read912_rewind_phi_fu_40993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_842_V_read912_rewind_phi_fu_40993_p6 = data_842_V_read912_phi_reg_84961.read();
    } else {
        ap_phi_mux_data_842_V_read912_rewind_phi_fu_40993_p6 = data_842_V_read912_rewind_reg_40989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_843_V_read913_phi_phi_fu_84978_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_843_V_read913_phi_phi_fu_84978_p4 = ap_phi_mux_data_843_V_read913_rewind_phi_fu_41007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_843_V_read913_phi_phi_fu_84978_p4 = data_843_V_read.read();
        } else {
            ap_phi_mux_data_843_V_read913_phi_phi_fu_84978_p4 = ap_phi_reg_pp0_iter0_data_843_V_read913_phi_reg_84974.read();
        }
    } else {
        ap_phi_mux_data_843_V_read913_phi_phi_fu_84978_p4 = ap_phi_reg_pp0_iter0_data_843_V_read913_phi_reg_84974.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_843_V_read913_rewind_phi_fu_41007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_843_V_read913_rewind_phi_fu_41007_p6 = data_843_V_read913_phi_reg_84974.read();
    } else {
        ap_phi_mux_data_843_V_read913_rewind_phi_fu_41007_p6 = data_843_V_read913_rewind_reg_41003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_844_V_read914_phi_phi_fu_84991_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_844_V_read914_phi_phi_fu_84991_p4 = ap_phi_mux_data_844_V_read914_rewind_phi_fu_41021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_844_V_read914_phi_phi_fu_84991_p4 = data_844_V_read.read();
        } else {
            ap_phi_mux_data_844_V_read914_phi_phi_fu_84991_p4 = ap_phi_reg_pp0_iter0_data_844_V_read914_phi_reg_84987.read();
        }
    } else {
        ap_phi_mux_data_844_V_read914_phi_phi_fu_84991_p4 = ap_phi_reg_pp0_iter0_data_844_V_read914_phi_reg_84987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_844_V_read914_rewind_phi_fu_41021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_844_V_read914_rewind_phi_fu_41021_p6 = data_844_V_read914_phi_reg_84987.read();
    } else {
        ap_phi_mux_data_844_V_read914_rewind_phi_fu_41021_p6 = data_844_V_read914_rewind_reg_41017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_845_V_read915_phi_phi_fu_85004_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_845_V_read915_phi_phi_fu_85004_p4 = ap_phi_mux_data_845_V_read915_rewind_phi_fu_41035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_845_V_read915_phi_phi_fu_85004_p4 = data_845_V_read.read();
        } else {
            ap_phi_mux_data_845_V_read915_phi_phi_fu_85004_p4 = ap_phi_reg_pp0_iter0_data_845_V_read915_phi_reg_85000.read();
        }
    } else {
        ap_phi_mux_data_845_V_read915_phi_phi_fu_85004_p4 = ap_phi_reg_pp0_iter0_data_845_V_read915_phi_reg_85000.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_845_V_read915_rewind_phi_fu_41035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_845_V_read915_rewind_phi_fu_41035_p6 = data_845_V_read915_phi_reg_85000.read();
    } else {
        ap_phi_mux_data_845_V_read915_rewind_phi_fu_41035_p6 = data_845_V_read915_rewind_reg_41031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_846_V_read916_phi_phi_fu_85017_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_846_V_read916_phi_phi_fu_85017_p4 = ap_phi_mux_data_846_V_read916_rewind_phi_fu_41049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_846_V_read916_phi_phi_fu_85017_p4 = data_846_V_read.read();
        } else {
            ap_phi_mux_data_846_V_read916_phi_phi_fu_85017_p4 = ap_phi_reg_pp0_iter0_data_846_V_read916_phi_reg_85013.read();
        }
    } else {
        ap_phi_mux_data_846_V_read916_phi_phi_fu_85017_p4 = ap_phi_reg_pp0_iter0_data_846_V_read916_phi_reg_85013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_846_V_read916_rewind_phi_fu_41049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_846_V_read916_rewind_phi_fu_41049_p6 = data_846_V_read916_phi_reg_85013.read();
    } else {
        ap_phi_mux_data_846_V_read916_rewind_phi_fu_41049_p6 = data_846_V_read916_rewind_reg_41045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_847_V_read917_phi_phi_fu_85030_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_847_V_read917_phi_phi_fu_85030_p4 = ap_phi_mux_data_847_V_read917_rewind_phi_fu_41063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_847_V_read917_phi_phi_fu_85030_p4 = data_847_V_read.read();
        } else {
            ap_phi_mux_data_847_V_read917_phi_phi_fu_85030_p4 = ap_phi_reg_pp0_iter0_data_847_V_read917_phi_reg_85026.read();
        }
    } else {
        ap_phi_mux_data_847_V_read917_phi_phi_fu_85030_p4 = ap_phi_reg_pp0_iter0_data_847_V_read917_phi_reg_85026.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_847_V_read917_rewind_phi_fu_41063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_847_V_read917_rewind_phi_fu_41063_p6 = data_847_V_read917_phi_reg_85026.read();
    } else {
        ap_phi_mux_data_847_V_read917_rewind_phi_fu_41063_p6 = data_847_V_read917_rewind_reg_41059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_848_V_read918_phi_phi_fu_85043_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_848_V_read918_phi_phi_fu_85043_p4 = ap_phi_mux_data_848_V_read918_rewind_phi_fu_41077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_848_V_read918_phi_phi_fu_85043_p4 = data_848_V_read.read();
        } else {
            ap_phi_mux_data_848_V_read918_phi_phi_fu_85043_p4 = ap_phi_reg_pp0_iter0_data_848_V_read918_phi_reg_85039.read();
        }
    } else {
        ap_phi_mux_data_848_V_read918_phi_phi_fu_85043_p4 = ap_phi_reg_pp0_iter0_data_848_V_read918_phi_reg_85039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_848_V_read918_rewind_phi_fu_41077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_848_V_read918_rewind_phi_fu_41077_p6 = data_848_V_read918_phi_reg_85039.read();
    } else {
        ap_phi_mux_data_848_V_read918_rewind_phi_fu_41077_p6 = data_848_V_read918_rewind_reg_41073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_849_V_read919_phi_phi_fu_85056_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_849_V_read919_phi_phi_fu_85056_p4 = ap_phi_mux_data_849_V_read919_rewind_phi_fu_41091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_849_V_read919_phi_phi_fu_85056_p4 = data_849_V_read.read();
        } else {
            ap_phi_mux_data_849_V_read919_phi_phi_fu_85056_p4 = ap_phi_reg_pp0_iter0_data_849_V_read919_phi_reg_85052.read();
        }
    } else {
        ap_phi_mux_data_849_V_read919_phi_phi_fu_85056_p4 = ap_phi_reg_pp0_iter0_data_849_V_read919_phi_reg_85052.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_849_V_read919_rewind_phi_fu_41091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_849_V_read919_rewind_phi_fu_41091_p6 = data_849_V_read919_phi_reg_85052.read();
    } else {
        ap_phi_mux_data_849_V_read919_rewind_phi_fu_41091_p6 = data_849_V_read919_rewind_reg_41087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_84_V_read154_phi_phi_fu_75111_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_84_V_read154_phi_phi_fu_75111_p4 = ap_phi_mux_data_84_V_read154_rewind_phi_fu_30381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_84_V_read154_phi_phi_fu_75111_p4 = data_84_V_read.read();
        } else {
            ap_phi_mux_data_84_V_read154_phi_phi_fu_75111_p4 = ap_phi_reg_pp0_iter0_data_84_V_read154_phi_reg_75107.read();
        }
    } else {
        ap_phi_mux_data_84_V_read154_phi_phi_fu_75111_p4 = ap_phi_reg_pp0_iter0_data_84_V_read154_phi_reg_75107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_84_V_read154_rewind_phi_fu_30381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_84_V_read154_rewind_phi_fu_30381_p6 = data_84_V_read154_phi_reg_75107.read();
    } else {
        ap_phi_mux_data_84_V_read154_rewind_phi_fu_30381_p6 = data_84_V_read154_rewind_reg_30377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_850_V_read920_phi_phi_fu_85069_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_850_V_read920_phi_phi_fu_85069_p4 = ap_phi_mux_data_850_V_read920_rewind_phi_fu_41105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_850_V_read920_phi_phi_fu_85069_p4 = data_850_V_read.read();
        } else {
            ap_phi_mux_data_850_V_read920_phi_phi_fu_85069_p4 = ap_phi_reg_pp0_iter0_data_850_V_read920_phi_reg_85065.read();
        }
    } else {
        ap_phi_mux_data_850_V_read920_phi_phi_fu_85069_p4 = ap_phi_reg_pp0_iter0_data_850_V_read920_phi_reg_85065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_850_V_read920_rewind_phi_fu_41105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_850_V_read920_rewind_phi_fu_41105_p6 = data_850_V_read920_phi_reg_85065.read();
    } else {
        ap_phi_mux_data_850_V_read920_rewind_phi_fu_41105_p6 = data_850_V_read920_rewind_reg_41101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_851_V_read921_phi_phi_fu_85082_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_851_V_read921_phi_phi_fu_85082_p4 = ap_phi_mux_data_851_V_read921_rewind_phi_fu_41119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_851_V_read921_phi_phi_fu_85082_p4 = data_851_V_read.read();
        } else {
            ap_phi_mux_data_851_V_read921_phi_phi_fu_85082_p4 = ap_phi_reg_pp0_iter0_data_851_V_read921_phi_reg_85078.read();
        }
    } else {
        ap_phi_mux_data_851_V_read921_phi_phi_fu_85082_p4 = ap_phi_reg_pp0_iter0_data_851_V_read921_phi_reg_85078.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_851_V_read921_rewind_phi_fu_41119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_851_V_read921_rewind_phi_fu_41119_p6 = data_851_V_read921_phi_reg_85078.read();
    } else {
        ap_phi_mux_data_851_V_read921_rewind_phi_fu_41119_p6 = data_851_V_read921_rewind_reg_41115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_852_V_read922_phi_phi_fu_85095_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_852_V_read922_phi_phi_fu_85095_p4 = ap_phi_mux_data_852_V_read922_rewind_phi_fu_41133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_852_V_read922_phi_phi_fu_85095_p4 = data_852_V_read.read();
        } else {
            ap_phi_mux_data_852_V_read922_phi_phi_fu_85095_p4 = ap_phi_reg_pp0_iter0_data_852_V_read922_phi_reg_85091.read();
        }
    } else {
        ap_phi_mux_data_852_V_read922_phi_phi_fu_85095_p4 = ap_phi_reg_pp0_iter0_data_852_V_read922_phi_reg_85091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_852_V_read922_rewind_phi_fu_41133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_852_V_read922_rewind_phi_fu_41133_p6 = data_852_V_read922_phi_reg_85091.read();
    } else {
        ap_phi_mux_data_852_V_read922_rewind_phi_fu_41133_p6 = data_852_V_read922_rewind_reg_41129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_853_V_read923_phi_phi_fu_85108_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_853_V_read923_phi_phi_fu_85108_p4 = ap_phi_mux_data_853_V_read923_rewind_phi_fu_41147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_853_V_read923_phi_phi_fu_85108_p4 = data_853_V_read.read();
        } else {
            ap_phi_mux_data_853_V_read923_phi_phi_fu_85108_p4 = ap_phi_reg_pp0_iter0_data_853_V_read923_phi_reg_85104.read();
        }
    } else {
        ap_phi_mux_data_853_V_read923_phi_phi_fu_85108_p4 = ap_phi_reg_pp0_iter0_data_853_V_read923_phi_reg_85104.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_853_V_read923_rewind_phi_fu_41147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_853_V_read923_rewind_phi_fu_41147_p6 = data_853_V_read923_phi_reg_85104.read();
    } else {
        ap_phi_mux_data_853_V_read923_rewind_phi_fu_41147_p6 = data_853_V_read923_rewind_reg_41143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_854_V_read924_phi_phi_fu_85121_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_854_V_read924_phi_phi_fu_85121_p4 = ap_phi_mux_data_854_V_read924_rewind_phi_fu_41161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_854_V_read924_phi_phi_fu_85121_p4 = data_854_V_read.read();
        } else {
            ap_phi_mux_data_854_V_read924_phi_phi_fu_85121_p4 = ap_phi_reg_pp0_iter0_data_854_V_read924_phi_reg_85117.read();
        }
    } else {
        ap_phi_mux_data_854_V_read924_phi_phi_fu_85121_p4 = ap_phi_reg_pp0_iter0_data_854_V_read924_phi_reg_85117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_854_V_read924_rewind_phi_fu_41161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_854_V_read924_rewind_phi_fu_41161_p6 = data_854_V_read924_phi_reg_85117.read();
    } else {
        ap_phi_mux_data_854_V_read924_rewind_phi_fu_41161_p6 = data_854_V_read924_rewind_reg_41157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_855_V_read925_phi_phi_fu_85134_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_855_V_read925_phi_phi_fu_85134_p4 = ap_phi_mux_data_855_V_read925_rewind_phi_fu_41175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_855_V_read925_phi_phi_fu_85134_p4 = data_855_V_read.read();
        } else {
            ap_phi_mux_data_855_V_read925_phi_phi_fu_85134_p4 = ap_phi_reg_pp0_iter0_data_855_V_read925_phi_reg_85130.read();
        }
    } else {
        ap_phi_mux_data_855_V_read925_phi_phi_fu_85134_p4 = ap_phi_reg_pp0_iter0_data_855_V_read925_phi_reg_85130.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_855_V_read925_rewind_phi_fu_41175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_855_V_read925_rewind_phi_fu_41175_p6 = data_855_V_read925_phi_reg_85130.read();
    } else {
        ap_phi_mux_data_855_V_read925_rewind_phi_fu_41175_p6 = data_855_V_read925_rewind_reg_41171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_856_V_read926_phi_phi_fu_85147_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_856_V_read926_phi_phi_fu_85147_p4 = ap_phi_mux_data_856_V_read926_rewind_phi_fu_41189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_856_V_read926_phi_phi_fu_85147_p4 = data_856_V_read.read();
        } else {
            ap_phi_mux_data_856_V_read926_phi_phi_fu_85147_p4 = ap_phi_reg_pp0_iter0_data_856_V_read926_phi_reg_85143.read();
        }
    } else {
        ap_phi_mux_data_856_V_read926_phi_phi_fu_85147_p4 = ap_phi_reg_pp0_iter0_data_856_V_read926_phi_reg_85143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_856_V_read926_rewind_phi_fu_41189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_856_V_read926_rewind_phi_fu_41189_p6 = data_856_V_read926_phi_reg_85143.read();
    } else {
        ap_phi_mux_data_856_V_read926_rewind_phi_fu_41189_p6 = data_856_V_read926_rewind_reg_41185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_857_V_read927_phi_phi_fu_85160_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_857_V_read927_phi_phi_fu_85160_p4 = ap_phi_mux_data_857_V_read927_rewind_phi_fu_41203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_857_V_read927_phi_phi_fu_85160_p4 = data_857_V_read.read();
        } else {
            ap_phi_mux_data_857_V_read927_phi_phi_fu_85160_p4 = ap_phi_reg_pp0_iter0_data_857_V_read927_phi_reg_85156.read();
        }
    } else {
        ap_phi_mux_data_857_V_read927_phi_phi_fu_85160_p4 = ap_phi_reg_pp0_iter0_data_857_V_read927_phi_reg_85156.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_857_V_read927_rewind_phi_fu_41203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_857_V_read927_rewind_phi_fu_41203_p6 = data_857_V_read927_phi_reg_85156.read();
    } else {
        ap_phi_mux_data_857_V_read927_rewind_phi_fu_41203_p6 = data_857_V_read927_rewind_reg_41199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_858_V_read928_phi_phi_fu_85173_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_858_V_read928_phi_phi_fu_85173_p4 = ap_phi_mux_data_858_V_read928_rewind_phi_fu_41217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_858_V_read928_phi_phi_fu_85173_p4 = data_858_V_read.read();
        } else {
            ap_phi_mux_data_858_V_read928_phi_phi_fu_85173_p4 = ap_phi_reg_pp0_iter0_data_858_V_read928_phi_reg_85169.read();
        }
    } else {
        ap_phi_mux_data_858_V_read928_phi_phi_fu_85173_p4 = ap_phi_reg_pp0_iter0_data_858_V_read928_phi_reg_85169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_858_V_read928_rewind_phi_fu_41217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_858_V_read928_rewind_phi_fu_41217_p6 = data_858_V_read928_phi_reg_85169.read();
    } else {
        ap_phi_mux_data_858_V_read928_rewind_phi_fu_41217_p6 = data_858_V_read928_rewind_reg_41213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_859_V_read929_phi_phi_fu_85186_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_859_V_read929_phi_phi_fu_85186_p4 = ap_phi_mux_data_859_V_read929_rewind_phi_fu_41231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_859_V_read929_phi_phi_fu_85186_p4 = data_859_V_read.read();
        } else {
            ap_phi_mux_data_859_V_read929_phi_phi_fu_85186_p4 = ap_phi_reg_pp0_iter0_data_859_V_read929_phi_reg_85182.read();
        }
    } else {
        ap_phi_mux_data_859_V_read929_phi_phi_fu_85186_p4 = ap_phi_reg_pp0_iter0_data_859_V_read929_phi_reg_85182.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_859_V_read929_rewind_phi_fu_41231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_859_V_read929_rewind_phi_fu_41231_p6 = data_859_V_read929_phi_reg_85182.read();
    } else {
        ap_phi_mux_data_859_V_read929_rewind_phi_fu_41231_p6 = data_859_V_read929_rewind_reg_41227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_85_V_read155_phi_phi_fu_75124_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_85_V_read155_phi_phi_fu_75124_p4 = ap_phi_mux_data_85_V_read155_rewind_phi_fu_30395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_85_V_read155_phi_phi_fu_75124_p4 = data_85_V_read.read();
        } else {
            ap_phi_mux_data_85_V_read155_phi_phi_fu_75124_p4 = ap_phi_reg_pp0_iter0_data_85_V_read155_phi_reg_75120.read();
        }
    } else {
        ap_phi_mux_data_85_V_read155_phi_phi_fu_75124_p4 = ap_phi_reg_pp0_iter0_data_85_V_read155_phi_reg_75120.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_85_V_read155_rewind_phi_fu_30395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_85_V_read155_rewind_phi_fu_30395_p6 = data_85_V_read155_phi_reg_75120.read();
    } else {
        ap_phi_mux_data_85_V_read155_rewind_phi_fu_30395_p6 = data_85_V_read155_rewind_reg_30391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_860_V_read930_phi_phi_fu_85199_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_860_V_read930_phi_phi_fu_85199_p4 = ap_phi_mux_data_860_V_read930_rewind_phi_fu_41245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_860_V_read930_phi_phi_fu_85199_p4 = data_860_V_read.read();
        } else {
            ap_phi_mux_data_860_V_read930_phi_phi_fu_85199_p4 = ap_phi_reg_pp0_iter0_data_860_V_read930_phi_reg_85195.read();
        }
    } else {
        ap_phi_mux_data_860_V_read930_phi_phi_fu_85199_p4 = ap_phi_reg_pp0_iter0_data_860_V_read930_phi_reg_85195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_860_V_read930_rewind_phi_fu_41245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_860_V_read930_rewind_phi_fu_41245_p6 = data_860_V_read930_phi_reg_85195.read();
    } else {
        ap_phi_mux_data_860_V_read930_rewind_phi_fu_41245_p6 = data_860_V_read930_rewind_reg_41241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_861_V_read931_phi_phi_fu_85212_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_861_V_read931_phi_phi_fu_85212_p4 = ap_phi_mux_data_861_V_read931_rewind_phi_fu_41259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_861_V_read931_phi_phi_fu_85212_p4 = data_861_V_read.read();
        } else {
            ap_phi_mux_data_861_V_read931_phi_phi_fu_85212_p4 = ap_phi_reg_pp0_iter0_data_861_V_read931_phi_reg_85208.read();
        }
    } else {
        ap_phi_mux_data_861_V_read931_phi_phi_fu_85212_p4 = ap_phi_reg_pp0_iter0_data_861_V_read931_phi_reg_85208.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_861_V_read931_rewind_phi_fu_41259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_861_V_read931_rewind_phi_fu_41259_p6 = data_861_V_read931_phi_reg_85208.read();
    } else {
        ap_phi_mux_data_861_V_read931_rewind_phi_fu_41259_p6 = data_861_V_read931_rewind_reg_41255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_862_V_read932_phi_phi_fu_85225_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_862_V_read932_phi_phi_fu_85225_p4 = ap_phi_mux_data_862_V_read932_rewind_phi_fu_41273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_862_V_read932_phi_phi_fu_85225_p4 = data_862_V_read.read();
        } else {
            ap_phi_mux_data_862_V_read932_phi_phi_fu_85225_p4 = ap_phi_reg_pp0_iter0_data_862_V_read932_phi_reg_85221.read();
        }
    } else {
        ap_phi_mux_data_862_V_read932_phi_phi_fu_85225_p4 = ap_phi_reg_pp0_iter0_data_862_V_read932_phi_reg_85221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_862_V_read932_rewind_phi_fu_41273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_862_V_read932_rewind_phi_fu_41273_p6 = data_862_V_read932_phi_reg_85221.read();
    } else {
        ap_phi_mux_data_862_V_read932_rewind_phi_fu_41273_p6 = data_862_V_read932_rewind_reg_41269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_863_V_read933_phi_phi_fu_85238_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_863_V_read933_phi_phi_fu_85238_p4 = ap_phi_mux_data_863_V_read933_rewind_phi_fu_41287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_863_V_read933_phi_phi_fu_85238_p4 = data_863_V_read.read();
        } else {
            ap_phi_mux_data_863_V_read933_phi_phi_fu_85238_p4 = ap_phi_reg_pp0_iter0_data_863_V_read933_phi_reg_85234.read();
        }
    } else {
        ap_phi_mux_data_863_V_read933_phi_phi_fu_85238_p4 = ap_phi_reg_pp0_iter0_data_863_V_read933_phi_reg_85234.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_863_V_read933_rewind_phi_fu_41287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_863_V_read933_rewind_phi_fu_41287_p6 = data_863_V_read933_phi_reg_85234.read();
    } else {
        ap_phi_mux_data_863_V_read933_rewind_phi_fu_41287_p6 = data_863_V_read933_rewind_reg_41283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_864_V_read934_phi_phi_fu_85251_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_864_V_read934_phi_phi_fu_85251_p4 = ap_phi_mux_data_864_V_read934_rewind_phi_fu_41301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_864_V_read934_phi_phi_fu_85251_p4 = data_864_V_read.read();
        } else {
            ap_phi_mux_data_864_V_read934_phi_phi_fu_85251_p4 = ap_phi_reg_pp0_iter0_data_864_V_read934_phi_reg_85247.read();
        }
    } else {
        ap_phi_mux_data_864_V_read934_phi_phi_fu_85251_p4 = ap_phi_reg_pp0_iter0_data_864_V_read934_phi_reg_85247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_864_V_read934_rewind_phi_fu_41301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_864_V_read934_rewind_phi_fu_41301_p6 = data_864_V_read934_phi_reg_85247.read();
    } else {
        ap_phi_mux_data_864_V_read934_rewind_phi_fu_41301_p6 = data_864_V_read934_rewind_reg_41297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_865_V_read935_phi_phi_fu_85264_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_865_V_read935_phi_phi_fu_85264_p4 = ap_phi_mux_data_865_V_read935_rewind_phi_fu_41315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_865_V_read935_phi_phi_fu_85264_p4 = data_865_V_read.read();
        } else {
            ap_phi_mux_data_865_V_read935_phi_phi_fu_85264_p4 = ap_phi_reg_pp0_iter0_data_865_V_read935_phi_reg_85260.read();
        }
    } else {
        ap_phi_mux_data_865_V_read935_phi_phi_fu_85264_p4 = ap_phi_reg_pp0_iter0_data_865_V_read935_phi_reg_85260.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_865_V_read935_rewind_phi_fu_41315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_865_V_read935_rewind_phi_fu_41315_p6 = data_865_V_read935_phi_reg_85260.read();
    } else {
        ap_phi_mux_data_865_V_read935_rewind_phi_fu_41315_p6 = data_865_V_read935_rewind_reg_41311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_866_V_read936_phi_phi_fu_85277_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_866_V_read936_phi_phi_fu_85277_p4 = ap_phi_mux_data_866_V_read936_rewind_phi_fu_41329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_866_V_read936_phi_phi_fu_85277_p4 = data_866_V_read.read();
        } else {
            ap_phi_mux_data_866_V_read936_phi_phi_fu_85277_p4 = ap_phi_reg_pp0_iter0_data_866_V_read936_phi_reg_85273.read();
        }
    } else {
        ap_phi_mux_data_866_V_read936_phi_phi_fu_85277_p4 = ap_phi_reg_pp0_iter0_data_866_V_read936_phi_reg_85273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_866_V_read936_rewind_phi_fu_41329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_866_V_read936_rewind_phi_fu_41329_p6 = data_866_V_read936_phi_reg_85273.read();
    } else {
        ap_phi_mux_data_866_V_read936_rewind_phi_fu_41329_p6 = data_866_V_read936_rewind_reg_41325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_867_V_read937_phi_phi_fu_85290_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_867_V_read937_phi_phi_fu_85290_p4 = ap_phi_mux_data_867_V_read937_rewind_phi_fu_41343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_867_V_read937_phi_phi_fu_85290_p4 = data_867_V_read.read();
        } else {
            ap_phi_mux_data_867_V_read937_phi_phi_fu_85290_p4 = ap_phi_reg_pp0_iter0_data_867_V_read937_phi_reg_85286.read();
        }
    } else {
        ap_phi_mux_data_867_V_read937_phi_phi_fu_85290_p4 = ap_phi_reg_pp0_iter0_data_867_V_read937_phi_reg_85286.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_867_V_read937_rewind_phi_fu_41343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_867_V_read937_rewind_phi_fu_41343_p6 = data_867_V_read937_phi_reg_85286.read();
    } else {
        ap_phi_mux_data_867_V_read937_rewind_phi_fu_41343_p6 = data_867_V_read937_rewind_reg_41339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_868_V_read938_phi_phi_fu_85303_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_868_V_read938_phi_phi_fu_85303_p4 = ap_phi_mux_data_868_V_read938_rewind_phi_fu_41357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_868_V_read938_phi_phi_fu_85303_p4 = data_868_V_read.read();
        } else {
            ap_phi_mux_data_868_V_read938_phi_phi_fu_85303_p4 = ap_phi_reg_pp0_iter0_data_868_V_read938_phi_reg_85299.read();
        }
    } else {
        ap_phi_mux_data_868_V_read938_phi_phi_fu_85303_p4 = ap_phi_reg_pp0_iter0_data_868_V_read938_phi_reg_85299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_868_V_read938_rewind_phi_fu_41357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_868_V_read938_rewind_phi_fu_41357_p6 = data_868_V_read938_phi_reg_85299.read();
    } else {
        ap_phi_mux_data_868_V_read938_rewind_phi_fu_41357_p6 = data_868_V_read938_rewind_reg_41353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_869_V_read939_phi_phi_fu_85316_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_869_V_read939_phi_phi_fu_85316_p4 = ap_phi_mux_data_869_V_read939_rewind_phi_fu_41371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_869_V_read939_phi_phi_fu_85316_p4 = data_869_V_read.read();
        } else {
            ap_phi_mux_data_869_V_read939_phi_phi_fu_85316_p4 = ap_phi_reg_pp0_iter0_data_869_V_read939_phi_reg_85312.read();
        }
    } else {
        ap_phi_mux_data_869_V_read939_phi_phi_fu_85316_p4 = ap_phi_reg_pp0_iter0_data_869_V_read939_phi_reg_85312.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_869_V_read939_rewind_phi_fu_41371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_869_V_read939_rewind_phi_fu_41371_p6 = data_869_V_read939_phi_reg_85312.read();
    } else {
        ap_phi_mux_data_869_V_read939_rewind_phi_fu_41371_p6 = data_869_V_read939_rewind_reg_41367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_86_V_read156_phi_phi_fu_75137_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_86_V_read156_phi_phi_fu_75137_p4 = ap_phi_mux_data_86_V_read156_rewind_phi_fu_30409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_86_V_read156_phi_phi_fu_75137_p4 = data_86_V_read.read();
        } else {
            ap_phi_mux_data_86_V_read156_phi_phi_fu_75137_p4 = ap_phi_reg_pp0_iter0_data_86_V_read156_phi_reg_75133.read();
        }
    } else {
        ap_phi_mux_data_86_V_read156_phi_phi_fu_75137_p4 = ap_phi_reg_pp0_iter0_data_86_V_read156_phi_reg_75133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_86_V_read156_rewind_phi_fu_30409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_86_V_read156_rewind_phi_fu_30409_p6 = data_86_V_read156_phi_reg_75133.read();
    } else {
        ap_phi_mux_data_86_V_read156_rewind_phi_fu_30409_p6 = data_86_V_read156_rewind_reg_30405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_870_V_read940_phi_phi_fu_85329_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_870_V_read940_phi_phi_fu_85329_p4 = ap_phi_mux_data_870_V_read940_rewind_phi_fu_41385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_870_V_read940_phi_phi_fu_85329_p4 = data_870_V_read.read();
        } else {
            ap_phi_mux_data_870_V_read940_phi_phi_fu_85329_p4 = ap_phi_reg_pp0_iter0_data_870_V_read940_phi_reg_85325.read();
        }
    } else {
        ap_phi_mux_data_870_V_read940_phi_phi_fu_85329_p4 = ap_phi_reg_pp0_iter0_data_870_V_read940_phi_reg_85325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_870_V_read940_rewind_phi_fu_41385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_870_V_read940_rewind_phi_fu_41385_p6 = data_870_V_read940_phi_reg_85325.read();
    } else {
        ap_phi_mux_data_870_V_read940_rewind_phi_fu_41385_p6 = data_870_V_read940_rewind_reg_41381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_871_V_read941_phi_phi_fu_85342_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_871_V_read941_phi_phi_fu_85342_p4 = ap_phi_mux_data_871_V_read941_rewind_phi_fu_41399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_871_V_read941_phi_phi_fu_85342_p4 = data_871_V_read.read();
        } else {
            ap_phi_mux_data_871_V_read941_phi_phi_fu_85342_p4 = ap_phi_reg_pp0_iter0_data_871_V_read941_phi_reg_85338.read();
        }
    } else {
        ap_phi_mux_data_871_V_read941_phi_phi_fu_85342_p4 = ap_phi_reg_pp0_iter0_data_871_V_read941_phi_reg_85338.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_871_V_read941_rewind_phi_fu_41399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_871_V_read941_rewind_phi_fu_41399_p6 = data_871_V_read941_phi_reg_85338.read();
    } else {
        ap_phi_mux_data_871_V_read941_rewind_phi_fu_41399_p6 = data_871_V_read941_rewind_reg_41395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_872_V_read942_phi_phi_fu_85355_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_872_V_read942_phi_phi_fu_85355_p4 = ap_phi_mux_data_872_V_read942_rewind_phi_fu_41413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_872_V_read942_phi_phi_fu_85355_p4 = data_872_V_read.read();
        } else {
            ap_phi_mux_data_872_V_read942_phi_phi_fu_85355_p4 = ap_phi_reg_pp0_iter0_data_872_V_read942_phi_reg_85351.read();
        }
    } else {
        ap_phi_mux_data_872_V_read942_phi_phi_fu_85355_p4 = ap_phi_reg_pp0_iter0_data_872_V_read942_phi_reg_85351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_872_V_read942_rewind_phi_fu_41413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_872_V_read942_rewind_phi_fu_41413_p6 = data_872_V_read942_phi_reg_85351.read();
    } else {
        ap_phi_mux_data_872_V_read942_rewind_phi_fu_41413_p6 = data_872_V_read942_rewind_reg_41409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_873_V_read943_phi_phi_fu_85368_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_873_V_read943_phi_phi_fu_85368_p4 = ap_phi_mux_data_873_V_read943_rewind_phi_fu_41427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_873_V_read943_phi_phi_fu_85368_p4 = data_873_V_read.read();
        } else {
            ap_phi_mux_data_873_V_read943_phi_phi_fu_85368_p4 = ap_phi_reg_pp0_iter0_data_873_V_read943_phi_reg_85364.read();
        }
    } else {
        ap_phi_mux_data_873_V_read943_phi_phi_fu_85368_p4 = ap_phi_reg_pp0_iter0_data_873_V_read943_phi_reg_85364.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_873_V_read943_rewind_phi_fu_41427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_873_V_read943_rewind_phi_fu_41427_p6 = data_873_V_read943_phi_reg_85364.read();
    } else {
        ap_phi_mux_data_873_V_read943_rewind_phi_fu_41427_p6 = data_873_V_read943_rewind_reg_41423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_874_V_read944_phi_phi_fu_85381_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_874_V_read944_phi_phi_fu_85381_p4 = ap_phi_mux_data_874_V_read944_rewind_phi_fu_41441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_874_V_read944_phi_phi_fu_85381_p4 = data_874_V_read.read();
        } else {
            ap_phi_mux_data_874_V_read944_phi_phi_fu_85381_p4 = ap_phi_reg_pp0_iter0_data_874_V_read944_phi_reg_85377.read();
        }
    } else {
        ap_phi_mux_data_874_V_read944_phi_phi_fu_85381_p4 = ap_phi_reg_pp0_iter0_data_874_V_read944_phi_reg_85377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_874_V_read944_rewind_phi_fu_41441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_874_V_read944_rewind_phi_fu_41441_p6 = data_874_V_read944_phi_reg_85377.read();
    } else {
        ap_phi_mux_data_874_V_read944_rewind_phi_fu_41441_p6 = data_874_V_read944_rewind_reg_41437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_875_V_read945_phi_phi_fu_85394_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_875_V_read945_phi_phi_fu_85394_p4 = ap_phi_mux_data_875_V_read945_rewind_phi_fu_41455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_875_V_read945_phi_phi_fu_85394_p4 = data_875_V_read.read();
        } else {
            ap_phi_mux_data_875_V_read945_phi_phi_fu_85394_p4 = ap_phi_reg_pp0_iter0_data_875_V_read945_phi_reg_85390.read();
        }
    } else {
        ap_phi_mux_data_875_V_read945_phi_phi_fu_85394_p4 = ap_phi_reg_pp0_iter0_data_875_V_read945_phi_reg_85390.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_875_V_read945_rewind_phi_fu_41455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_875_V_read945_rewind_phi_fu_41455_p6 = data_875_V_read945_phi_reg_85390.read();
    } else {
        ap_phi_mux_data_875_V_read945_rewind_phi_fu_41455_p6 = data_875_V_read945_rewind_reg_41451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_876_V_read946_phi_phi_fu_85407_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_876_V_read946_phi_phi_fu_85407_p4 = ap_phi_mux_data_876_V_read946_rewind_phi_fu_41469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_876_V_read946_phi_phi_fu_85407_p4 = data_876_V_read.read();
        } else {
            ap_phi_mux_data_876_V_read946_phi_phi_fu_85407_p4 = ap_phi_reg_pp0_iter0_data_876_V_read946_phi_reg_85403.read();
        }
    } else {
        ap_phi_mux_data_876_V_read946_phi_phi_fu_85407_p4 = ap_phi_reg_pp0_iter0_data_876_V_read946_phi_reg_85403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_876_V_read946_rewind_phi_fu_41469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_876_V_read946_rewind_phi_fu_41469_p6 = data_876_V_read946_phi_reg_85403.read();
    } else {
        ap_phi_mux_data_876_V_read946_rewind_phi_fu_41469_p6 = data_876_V_read946_rewind_reg_41465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_877_V_read947_phi_phi_fu_85420_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_877_V_read947_phi_phi_fu_85420_p4 = ap_phi_mux_data_877_V_read947_rewind_phi_fu_41483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_877_V_read947_phi_phi_fu_85420_p4 = data_877_V_read.read();
        } else {
            ap_phi_mux_data_877_V_read947_phi_phi_fu_85420_p4 = ap_phi_reg_pp0_iter0_data_877_V_read947_phi_reg_85416.read();
        }
    } else {
        ap_phi_mux_data_877_V_read947_phi_phi_fu_85420_p4 = ap_phi_reg_pp0_iter0_data_877_V_read947_phi_reg_85416.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_877_V_read947_rewind_phi_fu_41483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_877_V_read947_rewind_phi_fu_41483_p6 = data_877_V_read947_phi_reg_85416.read();
    } else {
        ap_phi_mux_data_877_V_read947_rewind_phi_fu_41483_p6 = data_877_V_read947_rewind_reg_41479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_878_V_read948_phi_phi_fu_85433_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_878_V_read948_phi_phi_fu_85433_p4 = ap_phi_mux_data_878_V_read948_rewind_phi_fu_41497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_878_V_read948_phi_phi_fu_85433_p4 = data_878_V_read.read();
        } else {
            ap_phi_mux_data_878_V_read948_phi_phi_fu_85433_p4 = ap_phi_reg_pp0_iter0_data_878_V_read948_phi_reg_85429.read();
        }
    } else {
        ap_phi_mux_data_878_V_read948_phi_phi_fu_85433_p4 = ap_phi_reg_pp0_iter0_data_878_V_read948_phi_reg_85429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_878_V_read948_rewind_phi_fu_41497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_878_V_read948_rewind_phi_fu_41497_p6 = data_878_V_read948_phi_reg_85429.read();
    } else {
        ap_phi_mux_data_878_V_read948_rewind_phi_fu_41497_p6 = data_878_V_read948_rewind_reg_41493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_879_V_read949_phi_phi_fu_85446_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_879_V_read949_phi_phi_fu_85446_p4 = ap_phi_mux_data_879_V_read949_rewind_phi_fu_41511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_879_V_read949_phi_phi_fu_85446_p4 = data_879_V_read.read();
        } else {
            ap_phi_mux_data_879_V_read949_phi_phi_fu_85446_p4 = ap_phi_reg_pp0_iter0_data_879_V_read949_phi_reg_85442.read();
        }
    } else {
        ap_phi_mux_data_879_V_read949_phi_phi_fu_85446_p4 = ap_phi_reg_pp0_iter0_data_879_V_read949_phi_reg_85442.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_879_V_read949_rewind_phi_fu_41511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_879_V_read949_rewind_phi_fu_41511_p6 = data_879_V_read949_phi_reg_85442.read();
    } else {
        ap_phi_mux_data_879_V_read949_rewind_phi_fu_41511_p6 = data_879_V_read949_rewind_reg_41507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_87_V_read157_phi_phi_fu_75150_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_87_V_read157_phi_phi_fu_75150_p4 = ap_phi_mux_data_87_V_read157_rewind_phi_fu_30423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_87_V_read157_phi_phi_fu_75150_p4 = data_87_V_read.read();
        } else {
            ap_phi_mux_data_87_V_read157_phi_phi_fu_75150_p4 = ap_phi_reg_pp0_iter0_data_87_V_read157_phi_reg_75146.read();
        }
    } else {
        ap_phi_mux_data_87_V_read157_phi_phi_fu_75150_p4 = ap_phi_reg_pp0_iter0_data_87_V_read157_phi_reg_75146.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_87_V_read157_rewind_phi_fu_30423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_87_V_read157_rewind_phi_fu_30423_p6 = data_87_V_read157_phi_reg_75146.read();
    } else {
        ap_phi_mux_data_87_V_read157_rewind_phi_fu_30423_p6 = data_87_V_read157_rewind_reg_30419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_880_V_read950_phi_phi_fu_85459_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_880_V_read950_phi_phi_fu_85459_p4 = ap_phi_mux_data_880_V_read950_rewind_phi_fu_41525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_880_V_read950_phi_phi_fu_85459_p4 = data_880_V_read.read();
        } else {
            ap_phi_mux_data_880_V_read950_phi_phi_fu_85459_p4 = ap_phi_reg_pp0_iter0_data_880_V_read950_phi_reg_85455.read();
        }
    } else {
        ap_phi_mux_data_880_V_read950_phi_phi_fu_85459_p4 = ap_phi_reg_pp0_iter0_data_880_V_read950_phi_reg_85455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_880_V_read950_rewind_phi_fu_41525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_880_V_read950_rewind_phi_fu_41525_p6 = data_880_V_read950_phi_reg_85455.read();
    } else {
        ap_phi_mux_data_880_V_read950_rewind_phi_fu_41525_p6 = data_880_V_read950_rewind_reg_41521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_881_V_read951_phi_phi_fu_85472_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_881_V_read951_phi_phi_fu_85472_p4 = ap_phi_mux_data_881_V_read951_rewind_phi_fu_41539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_881_V_read951_phi_phi_fu_85472_p4 = data_881_V_read.read();
        } else {
            ap_phi_mux_data_881_V_read951_phi_phi_fu_85472_p4 = ap_phi_reg_pp0_iter0_data_881_V_read951_phi_reg_85468.read();
        }
    } else {
        ap_phi_mux_data_881_V_read951_phi_phi_fu_85472_p4 = ap_phi_reg_pp0_iter0_data_881_V_read951_phi_reg_85468.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_881_V_read951_rewind_phi_fu_41539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_881_V_read951_rewind_phi_fu_41539_p6 = data_881_V_read951_phi_reg_85468.read();
    } else {
        ap_phi_mux_data_881_V_read951_rewind_phi_fu_41539_p6 = data_881_V_read951_rewind_reg_41535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_882_V_read952_phi_phi_fu_85485_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_882_V_read952_phi_phi_fu_85485_p4 = ap_phi_mux_data_882_V_read952_rewind_phi_fu_41553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_882_V_read952_phi_phi_fu_85485_p4 = data_882_V_read.read();
        } else {
            ap_phi_mux_data_882_V_read952_phi_phi_fu_85485_p4 = ap_phi_reg_pp0_iter0_data_882_V_read952_phi_reg_85481.read();
        }
    } else {
        ap_phi_mux_data_882_V_read952_phi_phi_fu_85485_p4 = ap_phi_reg_pp0_iter0_data_882_V_read952_phi_reg_85481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_882_V_read952_rewind_phi_fu_41553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_882_V_read952_rewind_phi_fu_41553_p6 = data_882_V_read952_phi_reg_85481.read();
    } else {
        ap_phi_mux_data_882_V_read952_rewind_phi_fu_41553_p6 = data_882_V_read952_rewind_reg_41549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_883_V_read953_phi_phi_fu_85498_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_883_V_read953_phi_phi_fu_85498_p4 = ap_phi_mux_data_883_V_read953_rewind_phi_fu_41567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_883_V_read953_phi_phi_fu_85498_p4 = data_883_V_read.read();
        } else {
            ap_phi_mux_data_883_V_read953_phi_phi_fu_85498_p4 = ap_phi_reg_pp0_iter0_data_883_V_read953_phi_reg_85494.read();
        }
    } else {
        ap_phi_mux_data_883_V_read953_phi_phi_fu_85498_p4 = ap_phi_reg_pp0_iter0_data_883_V_read953_phi_reg_85494.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_883_V_read953_rewind_phi_fu_41567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_883_V_read953_rewind_phi_fu_41567_p6 = data_883_V_read953_phi_reg_85494.read();
    } else {
        ap_phi_mux_data_883_V_read953_rewind_phi_fu_41567_p6 = data_883_V_read953_rewind_reg_41563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_884_V_read954_phi_phi_fu_85511_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_884_V_read954_phi_phi_fu_85511_p4 = ap_phi_mux_data_884_V_read954_rewind_phi_fu_41581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_884_V_read954_phi_phi_fu_85511_p4 = data_884_V_read.read();
        } else {
            ap_phi_mux_data_884_V_read954_phi_phi_fu_85511_p4 = ap_phi_reg_pp0_iter0_data_884_V_read954_phi_reg_85507.read();
        }
    } else {
        ap_phi_mux_data_884_V_read954_phi_phi_fu_85511_p4 = ap_phi_reg_pp0_iter0_data_884_V_read954_phi_reg_85507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_884_V_read954_rewind_phi_fu_41581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_884_V_read954_rewind_phi_fu_41581_p6 = data_884_V_read954_phi_reg_85507.read();
    } else {
        ap_phi_mux_data_884_V_read954_rewind_phi_fu_41581_p6 = data_884_V_read954_rewind_reg_41577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_885_V_read955_phi_phi_fu_85524_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_885_V_read955_phi_phi_fu_85524_p4 = ap_phi_mux_data_885_V_read955_rewind_phi_fu_41595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_885_V_read955_phi_phi_fu_85524_p4 = data_885_V_read.read();
        } else {
            ap_phi_mux_data_885_V_read955_phi_phi_fu_85524_p4 = ap_phi_reg_pp0_iter0_data_885_V_read955_phi_reg_85520.read();
        }
    } else {
        ap_phi_mux_data_885_V_read955_phi_phi_fu_85524_p4 = ap_phi_reg_pp0_iter0_data_885_V_read955_phi_reg_85520.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_885_V_read955_rewind_phi_fu_41595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_885_V_read955_rewind_phi_fu_41595_p6 = data_885_V_read955_phi_reg_85520.read();
    } else {
        ap_phi_mux_data_885_V_read955_rewind_phi_fu_41595_p6 = data_885_V_read955_rewind_reg_41591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_886_V_read956_phi_phi_fu_85537_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_886_V_read956_phi_phi_fu_85537_p4 = ap_phi_mux_data_886_V_read956_rewind_phi_fu_41609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_886_V_read956_phi_phi_fu_85537_p4 = data_886_V_read.read();
        } else {
            ap_phi_mux_data_886_V_read956_phi_phi_fu_85537_p4 = ap_phi_reg_pp0_iter0_data_886_V_read956_phi_reg_85533.read();
        }
    } else {
        ap_phi_mux_data_886_V_read956_phi_phi_fu_85537_p4 = ap_phi_reg_pp0_iter0_data_886_V_read956_phi_reg_85533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_886_V_read956_rewind_phi_fu_41609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_886_V_read956_rewind_phi_fu_41609_p6 = data_886_V_read956_phi_reg_85533.read();
    } else {
        ap_phi_mux_data_886_V_read956_rewind_phi_fu_41609_p6 = data_886_V_read956_rewind_reg_41605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_887_V_read957_phi_phi_fu_85550_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_887_V_read957_phi_phi_fu_85550_p4 = ap_phi_mux_data_887_V_read957_rewind_phi_fu_41623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_887_V_read957_phi_phi_fu_85550_p4 = data_887_V_read.read();
        } else {
            ap_phi_mux_data_887_V_read957_phi_phi_fu_85550_p4 = ap_phi_reg_pp0_iter0_data_887_V_read957_phi_reg_85546.read();
        }
    } else {
        ap_phi_mux_data_887_V_read957_phi_phi_fu_85550_p4 = ap_phi_reg_pp0_iter0_data_887_V_read957_phi_reg_85546.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_887_V_read957_rewind_phi_fu_41623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_887_V_read957_rewind_phi_fu_41623_p6 = data_887_V_read957_phi_reg_85546.read();
    } else {
        ap_phi_mux_data_887_V_read957_rewind_phi_fu_41623_p6 = data_887_V_read957_rewind_reg_41619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_888_V_read958_phi_phi_fu_85563_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_888_V_read958_phi_phi_fu_85563_p4 = ap_phi_mux_data_888_V_read958_rewind_phi_fu_41637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_888_V_read958_phi_phi_fu_85563_p4 = data_888_V_read.read();
        } else {
            ap_phi_mux_data_888_V_read958_phi_phi_fu_85563_p4 = ap_phi_reg_pp0_iter0_data_888_V_read958_phi_reg_85559.read();
        }
    } else {
        ap_phi_mux_data_888_V_read958_phi_phi_fu_85563_p4 = ap_phi_reg_pp0_iter0_data_888_V_read958_phi_reg_85559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_888_V_read958_rewind_phi_fu_41637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_888_V_read958_rewind_phi_fu_41637_p6 = data_888_V_read958_phi_reg_85559.read();
    } else {
        ap_phi_mux_data_888_V_read958_rewind_phi_fu_41637_p6 = data_888_V_read958_rewind_reg_41633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_889_V_read959_phi_phi_fu_85576_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_889_V_read959_phi_phi_fu_85576_p4 = ap_phi_mux_data_889_V_read959_rewind_phi_fu_41651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_889_V_read959_phi_phi_fu_85576_p4 = data_889_V_read.read();
        } else {
            ap_phi_mux_data_889_V_read959_phi_phi_fu_85576_p4 = ap_phi_reg_pp0_iter0_data_889_V_read959_phi_reg_85572.read();
        }
    } else {
        ap_phi_mux_data_889_V_read959_phi_phi_fu_85576_p4 = ap_phi_reg_pp0_iter0_data_889_V_read959_phi_reg_85572.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_889_V_read959_rewind_phi_fu_41651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_889_V_read959_rewind_phi_fu_41651_p6 = data_889_V_read959_phi_reg_85572.read();
    } else {
        ap_phi_mux_data_889_V_read959_rewind_phi_fu_41651_p6 = data_889_V_read959_rewind_reg_41647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_88_V_read158_phi_phi_fu_75163_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_88_V_read158_phi_phi_fu_75163_p4 = ap_phi_mux_data_88_V_read158_rewind_phi_fu_30437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_88_V_read158_phi_phi_fu_75163_p4 = data_88_V_read.read();
        } else {
            ap_phi_mux_data_88_V_read158_phi_phi_fu_75163_p4 = ap_phi_reg_pp0_iter0_data_88_V_read158_phi_reg_75159.read();
        }
    } else {
        ap_phi_mux_data_88_V_read158_phi_phi_fu_75163_p4 = ap_phi_reg_pp0_iter0_data_88_V_read158_phi_reg_75159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_88_V_read158_rewind_phi_fu_30437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_88_V_read158_rewind_phi_fu_30437_p6 = data_88_V_read158_phi_reg_75159.read();
    } else {
        ap_phi_mux_data_88_V_read158_rewind_phi_fu_30437_p6 = data_88_V_read158_rewind_reg_30433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_890_V_read960_phi_phi_fu_85589_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_890_V_read960_phi_phi_fu_85589_p4 = ap_phi_mux_data_890_V_read960_rewind_phi_fu_41665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_890_V_read960_phi_phi_fu_85589_p4 = data_890_V_read.read();
        } else {
            ap_phi_mux_data_890_V_read960_phi_phi_fu_85589_p4 = ap_phi_reg_pp0_iter0_data_890_V_read960_phi_reg_85585.read();
        }
    } else {
        ap_phi_mux_data_890_V_read960_phi_phi_fu_85589_p4 = ap_phi_reg_pp0_iter0_data_890_V_read960_phi_reg_85585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_890_V_read960_rewind_phi_fu_41665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_890_V_read960_rewind_phi_fu_41665_p6 = data_890_V_read960_phi_reg_85585.read();
    } else {
        ap_phi_mux_data_890_V_read960_rewind_phi_fu_41665_p6 = data_890_V_read960_rewind_reg_41661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_891_V_read961_phi_phi_fu_85602_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_891_V_read961_phi_phi_fu_85602_p4 = ap_phi_mux_data_891_V_read961_rewind_phi_fu_41679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_891_V_read961_phi_phi_fu_85602_p4 = data_891_V_read.read();
        } else {
            ap_phi_mux_data_891_V_read961_phi_phi_fu_85602_p4 = ap_phi_reg_pp0_iter0_data_891_V_read961_phi_reg_85598.read();
        }
    } else {
        ap_phi_mux_data_891_V_read961_phi_phi_fu_85602_p4 = ap_phi_reg_pp0_iter0_data_891_V_read961_phi_reg_85598.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_891_V_read961_rewind_phi_fu_41679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_891_V_read961_rewind_phi_fu_41679_p6 = data_891_V_read961_phi_reg_85598.read();
    } else {
        ap_phi_mux_data_891_V_read961_rewind_phi_fu_41679_p6 = data_891_V_read961_rewind_reg_41675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_892_V_read962_phi_phi_fu_85615_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_892_V_read962_phi_phi_fu_85615_p4 = ap_phi_mux_data_892_V_read962_rewind_phi_fu_41693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_892_V_read962_phi_phi_fu_85615_p4 = data_892_V_read.read();
        } else {
            ap_phi_mux_data_892_V_read962_phi_phi_fu_85615_p4 = ap_phi_reg_pp0_iter0_data_892_V_read962_phi_reg_85611.read();
        }
    } else {
        ap_phi_mux_data_892_V_read962_phi_phi_fu_85615_p4 = ap_phi_reg_pp0_iter0_data_892_V_read962_phi_reg_85611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_892_V_read962_rewind_phi_fu_41693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_892_V_read962_rewind_phi_fu_41693_p6 = data_892_V_read962_phi_reg_85611.read();
    } else {
        ap_phi_mux_data_892_V_read962_rewind_phi_fu_41693_p6 = data_892_V_read962_rewind_reg_41689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_893_V_read963_phi_phi_fu_85628_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_893_V_read963_phi_phi_fu_85628_p4 = ap_phi_mux_data_893_V_read963_rewind_phi_fu_41707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_893_V_read963_phi_phi_fu_85628_p4 = data_893_V_read.read();
        } else {
            ap_phi_mux_data_893_V_read963_phi_phi_fu_85628_p4 = ap_phi_reg_pp0_iter0_data_893_V_read963_phi_reg_85624.read();
        }
    } else {
        ap_phi_mux_data_893_V_read963_phi_phi_fu_85628_p4 = ap_phi_reg_pp0_iter0_data_893_V_read963_phi_reg_85624.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_893_V_read963_rewind_phi_fu_41707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_893_V_read963_rewind_phi_fu_41707_p6 = data_893_V_read963_phi_reg_85624.read();
    } else {
        ap_phi_mux_data_893_V_read963_rewind_phi_fu_41707_p6 = data_893_V_read963_rewind_reg_41703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_894_V_read964_phi_phi_fu_85641_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_894_V_read964_phi_phi_fu_85641_p4 = ap_phi_mux_data_894_V_read964_rewind_phi_fu_41721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_894_V_read964_phi_phi_fu_85641_p4 = data_894_V_read.read();
        } else {
            ap_phi_mux_data_894_V_read964_phi_phi_fu_85641_p4 = ap_phi_reg_pp0_iter0_data_894_V_read964_phi_reg_85637.read();
        }
    } else {
        ap_phi_mux_data_894_V_read964_phi_phi_fu_85641_p4 = ap_phi_reg_pp0_iter0_data_894_V_read964_phi_reg_85637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_894_V_read964_rewind_phi_fu_41721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_894_V_read964_rewind_phi_fu_41721_p6 = data_894_V_read964_phi_reg_85637.read();
    } else {
        ap_phi_mux_data_894_V_read964_rewind_phi_fu_41721_p6 = data_894_V_read964_rewind_reg_41717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_895_V_read965_phi_phi_fu_85654_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_895_V_read965_phi_phi_fu_85654_p4 = ap_phi_mux_data_895_V_read965_rewind_phi_fu_41735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_895_V_read965_phi_phi_fu_85654_p4 = data_895_V_read.read();
        } else {
            ap_phi_mux_data_895_V_read965_phi_phi_fu_85654_p4 = ap_phi_reg_pp0_iter0_data_895_V_read965_phi_reg_85650.read();
        }
    } else {
        ap_phi_mux_data_895_V_read965_phi_phi_fu_85654_p4 = ap_phi_reg_pp0_iter0_data_895_V_read965_phi_reg_85650.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_895_V_read965_rewind_phi_fu_41735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_895_V_read965_rewind_phi_fu_41735_p6 = data_895_V_read965_phi_reg_85650.read();
    } else {
        ap_phi_mux_data_895_V_read965_rewind_phi_fu_41735_p6 = data_895_V_read965_rewind_reg_41731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_896_V_read966_phi_phi_fu_85667_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_896_V_read966_phi_phi_fu_85667_p4 = ap_phi_mux_data_896_V_read966_rewind_phi_fu_41749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_896_V_read966_phi_phi_fu_85667_p4 = data_896_V_read.read();
        } else {
            ap_phi_mux_data_896_V_read966_phi_phi_fu_85667_p4 = ap_phi_reg_pp0_iter0_data_896_V_read966_phi_reg_85663.read();
        }
    } else {
        ap_phi_mux_data_896_V_read966_phi_phi_fu_85667_p4 = ap_phi_reg_pp0_iter0_data_896_V_read966_phi_reg_85663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_896_V_read966_rewind_phi_fu_41749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_896_V_read966_rewind_phi_fu_41749_p6 = data_896_V_read966_phi_reg_85663.read();
    } else {
        ap_phi_mux_data_896_V_read966_rewind_phi_fu_41749_p6 = data_896_V_read966_rewind_reg_41745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_897_V_read967_phi_phi_fu_85680_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_897_V_read967_phi_phi_fu_85680_p4 = ap_phi_mux_data_897_V_read967_rewind_phi_fu_41763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_897_V_read967_phi_phi_fu_85680_p4 = data_897_V_read.read();
        } else {
            ap_phi_mux_data_897_V_read967_phi_phi_fu_85680_p4 = ap_phi_reg_pp0_iter0_data_897_V_read967_phi_reg_85676.read();
        }
    } else {
        ap_phi_mux_data_897_V_read967_phi_phi_fu_85680_p4 = ap_phi_reg_pp0_iter0_data_897_V_read967_phi_reg_85676.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_897_V_read967_rewind_phi_fu_41763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_897_V_read967_rewind_phi_fu_41763_p6 = data_897_V_read967_phi_reg_85676.read();
    } else {
        ap_phi_mux_data_897_V_read967_rewind_phi_fu_41763_p6 = data_897_V_read967_rewind_reg_41759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_898_V_read968_phi_phi_fu_85693_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_898_V_read968_phi_phi_fu_85693_p4 = ap_phi_mux_data_898_V_read968_rewind_phi_fu_41777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_898_V_read968_phi_phi_fu_85693_p4 = data_898_V_read.read();
        } else {
            ap_phi_mux_data_898_V_read968_phi_phi_fu_85693_p4 = ap_phi_reg_pp0_iter0_data_898_V_read968_phi_reg_85689.read();
        }
    } else {
        ap_phi_mux_data_898_V_read968_phi_phi_fu_85693_p4 = ap_phi_reg_pp0_iter0_data_898_V_read968_phi_reg_85689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_898_V_read968_rewind_phi_fu_41777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_898_V_read968_rewind_phi_fu_41777_p6 = data_898_V_read968_phi_reg_85689.read();
    } else {
        ap_phi_mux_data_898_V_read968_rewind_phi_fu_41777_p6 = data_898_V_read968_rewind_reg_41773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_899_V_read969_phi_phi_fu_85706_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_899_V_read969_phi_phi_fu_85706_p4 = ap_phi_mux_data_899_V_read969_rewind_phi_fu_41791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_899_V_read969_phi_phi_fu_85706_p4 = data_899_V_read.read();
        } else {
            ap_phi_mux_data_899_V_read969_phi_phi_fu_85706_p4 = ap_phi_reg_pp0_iter0_data_899_V_read969_phi_reg_85702.read();
        }
    } else {
        ap_phi_mux_data_899_V_read969_phi_phi_fu_85706_p4 = ap_phi_reg_pp0_iter0_data_899_V_read969_phi_reg_85702.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_899_V_read969_rewind_phi_fu_41791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_899_V_read969_rewind_phi_fu_41791_p6 = data_899_V_read969_phi_reg_85702.read();
    } else {
        ap_phi_mux_data_899_V_read969_rewind_phi_fu_41791_p6 = data_899_V_read969_rewind_reg_41787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_89_V_read159_phi_phi_fu_75176_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_89_V_read159_phi_phi_fu_75176_p4 = ap_phi_mux_data_89_V_read159_rewind_phi_fu_30451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_89_V_read159_phi_phi_fu_75176_p4 = data_89_V_read.read();
        } else {
            ap_phi_mux_data_89_V_read159_phi_phi_fu_75176_p4 = ap_phi_reg_pp0_iter0_data_89_V_read159_phi_reg_75172.read();
        }
    } else {
        ap_phi_mux_data_89_V_read159_phi_phi_fu_75176_p4 = ap_phi_reg_pp0_iter0_data_89_V_read159_phi_reg_75172.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_89_V_read159_rewind_phi_fu_30451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_89_V_read159_rewind_phi_fu_30451_p6 = data_89_V_read159_phi_reg_75172.read();
    } else {
        ap_phi_mux_data_89_V_read159_rewind_phi_fu_30451_p6 = data_89_V_read159_rewind_reg_30447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_8_V_read78_phi_phi_fu_74123_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_8_V_read78_phi_phi_fu_74123_p4 = ap_phi_mux_data_8_V_read78_rewind_phi_fu_29317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_8_V_read78_phi_phi_fu_74123_p4 = data_8_V_read.read();
        } else {
            ap_phi_mux_data_8_V_read78_phi_phi_fu_74123_p4 = ap_phi_reg_pp0_iter0_data_8_V_read78_phi_reg_74119.read();
        }
    } else {
        ap_phi_mux_data_8_V_read78_phi_phi_fu_74123_p4 = ap_phi_reg_pp0_iter0_data_8_V_read78_phi_reg_74119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_8_V_read78_rewind_phi_fu_29317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_8_V_read78_rewind_phi_fu_29317_p6 = data_8_V_read78_phi_reg_74119.read();
    } else {
        ap_phi_mux_data_8_V_read78_rewind_phi_fu_29317_p6 = data_8_V_read78_rewind_reg_29313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_900_V_read970_phi_phi_fu_85719_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_900_V_read970_phi_phi_fu_85719_p4 = ap_phi_mux_data_900_V_read970_rewind_phi_fu_41805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_900_V_read970_phi_phi_fu_85719_p4 = data_900_V_read.read();
        } else {
            ap_phi_mux_data_900_V_read970_phi_phi_fu_85719_p4 = ap_phi_reg_pp0_iter0_data_900_V_read970_phi_reg_85715.read();
        }
    } else {
        ap_phi_mux_data_900_V_read970_phi_phi_fu_85719_p4 = ap_phi_reg_pp0_iter0_data_900_V_read970_phi_reg_85715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_900_V_read970_rewind_phi_fu_41805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_900_V_read970_rewind_phi_fu_41805_p6 = data_900_V_read970_phi_reg_85715.read();
    } else {
        ap_phi_mux_data_900_V_read970_rewind_phi_fu_41805_p6 = data_900_V_read970_rewind_reg_41801.read();
    }
}

}

