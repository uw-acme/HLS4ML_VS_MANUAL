#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1081_V_read1151_phi_phi_fu_88072_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1081_V_read1151_phi_phi_fu_88072_p4 = ap_phi_mux_data_1081_V_read1151_rewind_phi_fu_44339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1081_V_read1151_phi_phi_fu_88072_p4 = data_1081_V_read.read();
        } else {
            ap_phi_mux_data_1081_V_read1151_phi_phi_fu_88072_p4 = ap_phi_reg_pp0_iter0_data_1081_V_read1151_phi_reg_88068.read();
        }
    } else {
        ap_phi_mux_data_1081_V_read1151_phi_phi_fu_88072_p4 = ap_phi_reg_pp0_iter0_data_1081_V_read1151_phi_reg_88068.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1081_V_read1151_rewind_phi_fu_44339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1081_V_read1151_rewind_phi_fu_44339_p6 = data_1081_V_read1151_phi_reg_88068.read();
    } else {
        ap_phi_mux_data_1081_V_read1151_rewind_phi_fu_44339_p6 = data_1081_V_read1151_rewind_reg_44335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1082_V_read1152_phi_phi_fu_88085_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1082_V_read1152_phi_phi_fu_88085_p4 = ap_phi_mux_data_1082_V_read1152_rewind_phi_fu_44353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1082_V_read1152_phi_phi_fu_88085_p4 = data_1082_V_read.read();
        } else {
            ap_phi_mux_data_1082_V_read1152_phi_phi_fu_88085_p4 = ap_phi_reg_pp0_iter0_data_1082_V_read1152_phi_reg_88081.read();
        }
    } else {
        ap_phi_mux_data_1082_V_read1152_phi_phi_fu_88085_p4 = ap_phi_reg_pp0_iter0_data_1082_V_read1152_phi_reg_88081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1082_V_read1152_rewind_phi_fu_44353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1082_V_read1152_rewind_phi_fu_44353_p6 = data_1082_V_read1152_phi_reg_88081.read();
    } else {
        ap_phi_mux_data_1082_V_read1152_rewind_phi_fu_44353_p6 = data_1082_V_read1152_rewind_reg_44349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1083_V_read1153_phi_phi_fu_88098_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1083_V_read1153_phi_phi_fu_88098_p4 = ap_phi_mux_data_1083_V_read1153_rewind_phi_fu_44367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1083_V_read1153_phi_phi_fu_88098_p4 = data_1083_V_read.read();
        } else {
            ap_phi_mux_data_1083_V_read1153_phi_phi_fu_88098_p4 = ap_phi_reg_pp0_iter0_data_1083_V_read1153_phi_reg_88094.read();
        }
    } else {
        ap_phi_mux_data_1083_V_read1153_phi_phi_fu_88098_p4 = ap_phi_reg_pp0_iter0_data_1083_V_read1153_phi_reg_88094.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1083_V_read1153_rewind_phi_fu_44367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1083_V_read1153_rewind_phi_fu_44367_p6 = data_1083_V_read1153_phi_reg_88094.read();
    } else {
        ap_phi_mux_data_1083_V_read1153_rewind_phi_fu_44367_p6 = data_1083_V_read1153_rewind_reg_44363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1084_V_read1154_phi_phi_fu_88111_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1084_V_read1154_phi_phi_fu_88111_p4 = ap_phi_mux_data_1084_V_read1154_rewind_phi_fu_44381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1084_V_read1154_phi_phi_fu_88111_p4 = data_1084_V_read.read();
        } else {
            ap_phi_mux_data_1084_V_read1154_phi_phi_fu_88111_p4 = ap_phi_reg_pp0_iter0_data_1084_V_read1154_phi_reg_88107.read();
        }
    } else {
        ap_phi_mux_data_1084_V_read1154_phi_phi_fu_88111_p4 = ap_phi_reg_pp0_iter0_data_1084_V_read1154_phi_reg_88107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1084_V_read1154_rewind_phi_fu_44381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1084_V_read1154_rewind_phi_fu_44381_p6 = data_1084_V_read1154_phi_reg_88107.read();
    } else {
        ap_phi_mux_data_1084_V_read1154_rewind_phi_fu_44381_p6 = data_1084_V_read1154_rewind_reg_44377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1085_V_read1155_phi_phi_fu_88124_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1085_V_read1155_phi_phi_fu_88124_p4 = ap_phi_mux_data_1085_V_read1155_rewind_phi_fu_44395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1085_V_read1155_phi_phi_fu_88124_p4 = data_1085_V_read.read();
        } else {
            ap_phi_mux_data_1085_V_read1155_phi_phi_fu_88124_p4 = ap_phi_reg_pp0_iter0_data_1085_V_read1155_phi_reg_88120.read();
        }
    } else {
        ap_phi_mux_data_1085_V_read1155_phi_phi_fu_88124_p4 = ap_phi_reg_pp0_iter0_data_1085_V_read1155_phi_reg_88120.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1085_V_read1155_rewind_phi_fu_44395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1085_V_read1155_rewind_phi_fu_44395_p6 = data_1085_V_read1155_phi_reg_88120.read();
    } else {
        ap_phi_mux_data_1085_V_read1155_rewind_phi_fu_44395_p6 = data_1085_V_read1155_rewind_reg_44391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1086_V_read1156_phi_phi_fu_88137_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1086_V_read1156_phi_phi_fu_88137_p4 = ap_phi_mux_data_1086_V_read1156_rewind_phi_fu_44409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1086_V_read1156_phi_phi_fu_88137_p4 = data_1086_V_read.read();
        } else {
            ap_phi_mux_data_1086_V_read1156_phi_phi_fu_88137_p4 = ap_phi_reg_pp0_iter0_data_1086_V_read1156_phi_reg_88133.read();
        }
    } else {
        ap_phi_mux_data_1086_V_read1156_phi_phi_fu_88137_p4 = ap_phi_reg_pp0_iter0_data_1086_V_read1156_phi_reg_88133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1086_V_read1156_rewind_phi_fu_44409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1086_V_read1156_rewind_phi_fu_44409_p6 = data_1086_V_read1156_phi_reg_88133.read();
    } else {
        ap_phi_mux_data_1086_V_read1156_rewind_phi_fu_44409_p6 = data_1086_V_read1156_rewind_reg_44405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1087_V_read1157_phi_phi_fu_88150_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1087_V_read1157_phi_phi_fu_88150_p4 = ap_phi_mux_data_1087_V_read1157_rewind_phi_fu_44423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1087_V_read1157_phi_phi_fu_88150_p4 = data_1087_V_read.read();
        } else {
            ap_phi_mux_data_1087_V_read1157_phi_phi_fu_88150_p4 = ap_phi_reg_pp0_iter0_data_1087_V_read1157_phi_reg_88146.read();
        }
    } else {
        ap_phi_mux_data_1087_V_read1157_phi_phi_fu_88150_p4 = ap_phi_reg_pp0_iter0_data_1087_V_read1157_phi_reg_88146.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1087_V_read1157_rewind_phi_fu_44423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1087_V_read1157_rewind_phi_fu_44423_p6 = data_1087_V_read1157_phi_reg_88146.read();
    } else {
        ap_phi_mux_data_1087_V_read1157_rewind_phi_fu_44423_p6 = data_1087_V_read1157_rewind_reg_44419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1088_V_read1158_phi_phi_fu_88163_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1088_V_read1158_phi_phi_fu_88163_p4 = ap_phi_mux_data_1088_V_read1158_rewind_phi_fu_44437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1088_V_read1158_phi_phi_fu_88163_p4 = data_1088_V_read.read();
        } else {
            ap_phi_mux_data_1088_V_read1158_phi_phi_fu_88163_p4 = ap_phi_reg_pp0_iter0_data_1088_V_read1158_phi_reg_88159.read();
        }
    } else {
        ap_phi_mux_data_1088_V_read1158_phi_phi_fu_88163_p4 = ap_phi_reg_pp0_iter0_data_1088_V_read1158_phi_reg_88159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1088_V_read1158_rewind_phi_fu_44437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1088_V_read1158_rewind_phi_fu_44437_p6 = data_1088_V_read1158_phi_reg_88159.read();
    } else {
        ap_phi_mux_data_1088_V_read1158_rewind_phi_fu_44437_p6 = data_1088_V_read1158_rewind_reg_44433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1089_V_read1159_phi_phi_fu_88176_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1089_V_read1159_phi_phi_fu_88176_p4 = ap_phi_mux_data_1089_V_read1159_rewind_phi_fu_44451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1089_V_read1159_phi_phi_fu_88176_p4 = data_1089_V_read.read();
        } else {
            ap_phi_mux_data_1089_V_read1159_phi_phi_fu_88176_p4 = ap_phi_reg_pp0_iter0_data_1089_V_read1159_phi_reg_88172.read();
        }
    } else {
        ap_phi_mux_data_1089_V_read1159_phi_phi_fu_88176_p4 = ap_phi_reg_pp0_iter0_data_1089_V_read1159_phi_reg_88172.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1089_V_read1159_rewind_phi_fu_44451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1089_V_read1159_rewind_phi_fu_44451_p6 = data_1089_V_read1159_phi_reg_88172.read();
    } else {
        ap_phi_mux_data_1089_V_read1159_rewind_phi_fu_44451_p6 = data_1089_V_read1159_rewind_reg_44447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_108_V_read178_phi_phi_fu_75423_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_108_V_read178_phi_phi_fu_75423_p4 = ap_phi_mux_data_108_V_read178_rewind_phi_fu_30717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_108_V_read178_phi_phi_fu_75423_p4 = data_108_V_read.read();
        } else {
            ap_phi_mux_data_108_V_read178_phi_phi_fu_75423_p4 = ap_phi_reg_pp0_iter0_data_108_V_read178_phi_reg_75419.read();
        }
    } else {
        ap_phi_mux_data_108_V_read178_phi_phi_fu_75423_p4 = ap_phi_reg_pp0_iter0_data_108_V_read178_phi_reg_75419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_108_V_read178_rewind_phi_fu_30717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_108_V_read178_rewind_phi_fu_30717_p6 = data_108_V_read178_phi_reg_75419.read();
    } else {
        ap_phi_mux_data_108_V_read178_rewind_phi_fu_30717_p6 = data_108_V_read178_rewind_reg_30713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1090_V_read1160_phi_phi_fu_88189_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1090_V_read1160_phi_phi_fu_88189_p4 = ap_phi_mux_data_1090_V_read1160_rewind_phi_fu_44465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1090_V_read1160_phi_phi_fu_88189_p4 = data_1090_V_read.read();
        } else {
            ap_phi_mux_data_1090_V_read1160_phi_phi_fu_88189_p4 = ap_phi_reg_pp0_iter0_data_1090_V_read1160_phi_reg_88185.read();
        }
    } else {
        ap_phi_mux_data_1090_V_read1160_phi_phi_fu_88189_p4 = ap_phi_reg_pp0_iter0_data_1090_V_read1160_phi_reg_88185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1090_V_read1160_rewind_phi_fu_44465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1090_V_read1160_rewind_phi_fu_44465_p6 = data_1090_V_read1160_phi_reg_88185.read();
    } else {
        ap_phi_mux_data_1090_V_read1160_rewind_phi_fu_44465_p6 = data_1090_V_read1160_rewind_reg_44461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1091_V_read1161_phi_phi_fu_88202_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1091_V_read1161_phi_phi_fu_88202_p4 = ap_phi_mux_data_1091_V_read1161_rewind_phi_fu_44479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1091_V_read1161_phi_phi_fu_88202_p4 = data_1091_V_read.read();
        } else {
            ap_phi_mux_data_1091_V_read1161_phi_phi_fu_88202_p4 = ap_phi_reg_pp0_iter0_data_1091_V_read1161_phi_reg_88198.read();
        }
    } else {
        ap_phi_mux_data_1091_V_read1161_phi_phi_fu_88202_p4 = ap_phi_reg_pp0_iter0_data_1091_V_read1161_phi_reg_88198.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1091_V_read1161_rewind_phi_fu_44479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1091_V_read1161_rewind_phi_fu_44479_p6 = data_1091_V_read1161_phi_reg_88198.read();
    } else {
        ap_phi_mux_data_1091_V_read1161_rewind_phi_fu_44479_p6 = data_1091_V_read1161_rewind_reg_44475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1092_V_read1162_phi_phi_fu_88215_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1092_V_read1162_phi_phi_fu_88215_p4 = ap_phi_mux_data_1092_V_read1162_rewind_phi_fu_44493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1092_V_read1162_phi_phi_fu_88215_p4 = data_1092_V_read.read();
        } else {
            ap_phi_mux_data_1092_V_read1162_phi_phi_fu_88215_p4 = ap_phi_reg_pp0_iter0_data_1092_V_read1162_phi_reg_88211.read();
        }
    } else {
        ap_phi_mux_data_1092_V_read1162_phi_phi_fu_88215_p4 = ap_phi_reg_pp0_iter0_data_1092_V_read1162_phi_reg_88211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1092_V_read1162_rewind_phi_fu_44493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1092_V_read1162_rewind_phi_fu_44493_p6 = data_1092_V_read1162_phi_reg_88211.read();
    } else {
        ap_phi_mux_data_1092_V_read1162_rewind_phi_fu_44493_p6 = data_1092_V_read1162_rewind_reg_44489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1093_V_read1163_phi_phi_fu_88228_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1093_V_read1163_phi_phi_fu_88228_p4 = ap_phi_mux_data_1093_V_read1163_rewind_phi_fu_44507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1093_V_read1163_phi_phi_fu_88228_p4 = data_1093_V_read.read();
        } else {
            ap_phi_mux_data_1093_V_read1163_phi_phi_fu_88228_p4 = ap_phi_reg_pp0_iter0_data_1093_V_read1163_phi_reg_88224.read();
        }
    } else {
        ap_phi_mux_data_1093_V_read1163_phi_phi_fu_88228_p4 = ap_phi_reg_pp0_iter0_data_1093_V_read1163_phi_reg_88224.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1093_V_read1163_rewind_phi_fu_44507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1093_V_read1163_rewind_phi_fu_44507_p6 = data_1093_V_read1163_phi_reg_88224.read();
    } else {
        ap_phi_mux_data_1093_V_read1163_rewind_phi_fu_44507_p6 = data_1093_V_read1163_rewind_reg_44503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1094_V_read1164_phi_phi_fu_88241_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1094_V_read1164_phi_phi_fu_88241_p4 = ap_phi_mux_data_1094_V_read1164_rewind_phi_fu_44521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1094_V_read1164_phi_phi_fu_88241_p4 = data_1094_V_read.read();
        } else {
            ap_phi_mux_data_1094_V_read1164_phi_phi_fu_88241_p4 = ap_phi_reg_pp0_iter0_data_1094_V_read1164_phi_reg_88237.read();
        }
    } else {
        ap_phi_mux_data_1094_V_read1164_phi_phi_fu_88241_p4 = ap_phi_reg_pp0_iter0_data_1094_V_read1164_phi_reg_88237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1094_V_read1164_rewind_phi_fu_44521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1094_V_read1164_rewind_phi_fu_44521_p6 = data_1094_V_read1164_phi_reg_88237.read();
    } else {
        ap_phi_mux_data_1094_V_read1164_rewind_phi_fu_44521_p6 = data_1094_V_read1164_rewind_reg_44517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1095_V_read1165_phi_phi_fu_88254_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1095_V_read1165_phi_phi_fu_88254_p4 = ap_phi_mux_data_1095_V_read1165_rewind_phi_fu_44535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1095_V_read1165_phi_phi_fu_88254_p4 = data_1095_V_read.read();
        } else {
            ap_phi_mux_data_1095_V_read1165_phi_phi_fu_88254_p4 = ap_phi_reg_pp0_iter0_data_1095_V_read1165_phi_reg_88250.read();
        }
    } else {
        ap_phi_mux_data_1095_V_read1165_phi_phi_fu_88254_p4 = ap_phi_reg_pp0_iter0_data_1095_V_read1165_phi_reg_88250.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1095_V_read1165_rewind_phi_fu_44535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1095_V_read1165_rewind_phi_fu_44535_p6 = data_1095_V_read1165_phi_reg_88250.read();
    } else {
        ap_phi_mux_data_1095_V_read1165_rewind_phi_fu_44535_p6 = data_1095_V_read1165_rewind_reg_44531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1096_V_read1166_phi_phi_fu_88267_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1096_V_read1166_phi_phi_fu_88267_p4 = ap_phi_mux_data_1096_V_read1166_rewind_phi_fu_44549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1096_V_read1166_phi_phi_fu_88267_p4 = data_1096_V_read.read();
        } else {
            ap_phi_mux_data_1096_V_read1166_phi_phi_fu_88267_p4 = ap_phi_reg_pp0_iter0_data_1096_V_read1166_phi_reg_88263.read();
        }
    } else {
        ap_phi_mux_data_1096_V_read1166_phi_phi_fu_88267_p4 = ap_phi_reg_pp0_iter0_data_1096_V_read1166_phi_reg_88263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1096_V_read1166_rewind_phi_fu_44549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1096_V_read1166_rewind_phi_fu_44549_p6 = data_1096_V_read1166_phi_reg_88263.read();
    } else {
        ap_phi_mux_data_1096_V_read1166_rewind_phi_fu_44549_p6 = data_1096_V_read1166_rewind_reg_44545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1097_V_read1167_phi_phi_fu_88280_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1097_V_read1167_phi_phi_fu_88280_p4 = ap_phi_mux_data_1097_V_read1167_rewind_phi_fu_44563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1097_V_read1167_phi_phi_fu_88280_p4 = data_1097_V_read.read();
        } else {
            ap_phi_mux_data_1097_V_read1167_phi_phi_fu_88280_p4 = ap_phi_reg_pp0_iter0_data_1097_V_read1167_phi_reg_88276.read();
        }
    } else {
        ap_phi_mux_data_1097_V_read1167_phi_phi_fu_88280_p4 = ap_phi_reg_pp0_iter0_data_1097_V_read1167_phi_reg_88276.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1097_V_read1167_rewind_phi_fu_44563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1097_V_read1167_rewind_phi_fu_44563_p6 = data_1097_V_read1167_phi_reg_88276.read();
    } else {
        ap_phi_mux_data_1097_V_read1167_rewind_phi_fu_44563_p6 = data_1097_V_read1167_rewind_reg_44559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1098_V_read1168_phi_phi_fu_88293_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1098_V_read1168_phi_phi_fu_88293_p4 = ap_phi_mux_data_1098_V_read1168_rewind_phi_fu_44577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1098_V_read1168_phi_phi_fu_88293_p4 = data_1098_V_read.read();
        } else {
            ap_phi_mux_data_1098_V_read1168_phi_phi_fu_88293_p4 = ap_phi_reg_pp0_iter0_data_1098_V_read1168_phi_reg_88289.read();
        }
    } else {
        ap_phi_mux_data_1098_V_read1168_phi_phi_fu_88293_p4 = ap_phi_reg_pp0_iter0_data_1098_V_read1168_phi_reg_88289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1098_V_read1168_rewind_phi_fu_44577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1098_V_read1168_rewind_phi_fu_44577_p6 = data_1098_V_read1168_phi_reg_88289.read();
    } else {
        ap_phi_mux_data_1098_V_read1168_rewind_phi_fu_44577_p6 = data_1098_V_read1168_rewind_reg_44573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1099_V_read1169_phi_phi_fu_88306_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1099_V_read1169_phi_phi_fu_88306_p4 = ap_phi_mux_data_1099_V_read1169_rewind_phi_fu_44591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1099_V_read1169_phi_phi_fu_88306_p4 = data_1099_V_read.read();
        } else {
            ap_phi_mux_data_1099_V_read1169_phi_phi_fu_88306_p4 = ap_phi_reg_pp0_iter0_data_1099_V_read1169_phi_reg_88302.read();
        }
    } else {
        ap_phi_mux_data_1099_V_read1169_phi_phi_fu_88306_p4 = ap_phi_reg_pp0_iter0_data_1099_V_read1169_phi_reg_88302.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1099_V_read1169_rewind_phi_fu_44591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1099_V_read1169_rewind_phi_fu_44591_p6 = data_1099_V_read1169_phi_reg_88302.read();
    } else {
        ap_phi_mux_data_1099_V_read1169_rewind_phi_fu_44591_p6 = data_1099_V_read1169_rewind_reg_44587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_109_V_read179_phi_phi_fu_75436_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_109_V_read179_phi_phi_fu_75436_p4 = ap_phi_mux_data_109_V_read179_rewind_phi_fu_30731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_109_V_read179_phi_phi_fu_75436_p4 = data_109_V_read.read();
        } else {
            ap_phi_mux_data_109_V_read179_phi_phi_fu_75436_p4 = ap_phi_reg_pp0_iter0_data_109_V_read179_phi_reg_75432.read();
        }
    } else {
        ap_phi_mux_data_109_V_read179_phi_phi_fu_75436_p4 = ap_phi_reg_pp0_iter0_data_109_V_read179_phi_reg_75432.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_109_V_read179_rewind_phi_fu_30731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_109_V_read179_rewind_phi_fu_30731_p6 = data_109_V_read179_phi_reg_75432.read();
    } else {
        ap_phi_mux_data_109_V_read179_rewind_phi_fu_30731_p6 = data_109_V_read179_rewind_reg_30727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_10_V_read80_phi_phi_fu_74149_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_10_V_read80_phi_phi_fu_74149_p4 = ap_phi_mux_data_10_V_read80_rewind_phi_fu_29345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_10_V_read80_phi_phi_fu_74149_p4 = data_10_V_read.read();
        } else {
            ap_phi_mux_data_10_V_read80_phi_phi_fu_74149_p4 = ap_phi_reg_pp0_iter0_data_10_V_read80_phi_reg_74145.read();
        }
    } else {
        ap_phi_mux_data_10_V_read80_phi_phi_fu_74149_p4 = ap_phi_reg_pp0_iter0_data_10_V_read80_phi_reg_74145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_10_V_read80_rewind_phi_fu_29345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_10_V_read80_rewind_phi_fu_29345_p6 = data_10_V_read80_phi_reg_74145.read();
    } else {
        ap_phi_mux_data_10_V_read80_rewind_phi_fu_29345_p6 = data_10_V_read80_rewind_reg_29341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1100_V_read1170_phi_phi_fu_88319_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1100_V_read1170_phi_phi_fu_88319_p4 = ap_phi_mux_data_1100_V_read1170_rewind_phi_fu_44605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1100_V_read1170_phi_phi_fu_88319_p4 = data_1100_V_read.read();
        } else {
            ap_phi_mux_data_1100_V_read1170_phi_phi_fu_88319_p4 = ap_phi_reg_pp0_iter0_data_1100_V_read1170_phi_reg_88315.read();
        }
    } else {
        ap_phi_mux_data_1100_V_read1170_phi_phi_fu_88319_p4 = ap_phi_reg_pp0_iter0_data_1100_V_read1170_phi_reg_88315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1100_V_read1170_rewind_phi_fu_44605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1100_V_read1170_rewind_phi_fu_44605_p6 = data_1100_V_read1170_phi_reg_88315.read();
    } else {
        ap_phi_mux_data_1100_V_read1170_rewind_phi_fu_44605_p6 = data_1100_V_read1170_rewind_reg_44601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1101_V_read1171_phi_phi_fu_88332_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1101_V_read1171_phi_phi_fu_88332_p4 = ap_phi_mux_data_1101_V_read1171_rewind_phi_fu_44619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1101_V_read1171_phi_phi_fu_88332_p4 = data_1101_V_read.read();
        } else {
            ap_phi_mux_data_1101_V_read1171_phi_phi_fu_88332_p4 = ap_phi_reg_pp0_iter0_data_1101_V_read1171_phi_reg_88328.read();
        }
    } else {
        ap_phi_mux_data_1101_V_read1171_phi_phi_fu_88332_p4 = ap_phi_reg_pp0_iter0_data_1101_V_read1171_phi_reg_88328.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1101_V_read1171_rewind_phi_fu_44619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1101_V_read1171_rewind_phi_fu_44619_p6 = data_1101_V_read1171_phi_reg_88328.read();
    } else {
        ap_phi_mux_data_1101_V_read1171_rewind_phi_fu_44619_p6 = data_1101_V_read1171_rewind_reg_44615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1102_V_read1172_phi_phi_fu_88345_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1102_V_read1172_phi_phi_fu_88345_p4 = ap_phi_mux_data_1102_V_read1172_rewind_phi_fu_44633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1102_V_read1172_phi_phi_fu_88345_p4 = data_1102_V_read.read();
        } else {
            ap_phi_mux_data_1102_V_read1172_phi_phi_fu_88345_p4 = ap_phi_reg_pp0_iter0_data_1102_V_read1172_phi_reg_88341.read();
        }
    } else {
        ap_phi_mux_data_1102_V_read1172_phi_phi_fu_88345_p4 = ap_phi_reg_pp0_iter0_data_1102_V_read1172_phi_reg_88341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1102_V_read1172_rewind_phi_fu_44633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1102_V_read1172_rewind_phi_fu_44633_p6 = data_1102_V_read1172_phi_reg_88341.read();
    } else {
        ap_phi_mux_data_1102_V_read1172_rewind_phi_fu_44633_p6 = data_1102_V_read1172_rewind_reg_44629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1103_V_read1173_phi_phi_fu_88358_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1103_V_read1173_phi_phi_fu_88358_p4 = ap_phi_mux_data_1103_V_read1173_rewind_phi_fu_44647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1103_V_read1173_phi_phi_fu_88358_p4 = data_1103_V_read.read();
        } else {
            ap_phi_mux_data_1103_V_read1173_phi_phi_fu_88358_p4 = ap_phi_reg_pp0_iter0_data_1103_V_read1173_phi_reg_88354.read();
        }
    } else {
        ap_phi_mux_data_1103_V_read1173_phi_phi_fu_88358_p4 = ap_phi_reg_pp0_iter0_data_1103_V_read1173_phi_reg_88354.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1103_V_read1173_rewind_phi_fu_44647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1103_V_read1173_rewind_phi_fu_44647_p6 = data_1103_V_read1173_phi_reg_88354.read();
    } else {
        ap_phi_mux_data_1103_V_read1173_rewind_phi_fu_44647_p6 = data_1103_V_read1173_rewind_reg_44643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1104_V_read1174_phi_phi_fu_88371_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1104_V_read1174_phi_phi_fu_88371_p4 = ap_phi_mux_data_1104_V_read1174_rewind_phi_fu_44661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1104_V_read1174_phi_phi_fu_88371_p4 = data_1104_V_read.read();
        } else {
            ap_phi_mux_data_1104_V_read1174_phi_phi_fu_88371_p4 = ap_phi_reg_pp0_iter0_data_1104_V_read1174_phi_reg_88367.read();
        }
    } else {
        ap_phi_mux_data_1104_V_read1174_phi_phi_fu_88371_p4 = ap_phi_reg_pp0_iter0_data_1104_V_read1174_phi_reg_88367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1104_V_read1174_rewind_phi_fu_44661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1104_V_read1174_rewind_phi_fu_44661_p6 = data_1104_V_read1174_phi_reg_88367.read();
    } else {
        ap_phi_mux_data_1104_V_read1174_rewind_phi_fu_44661_p6 = data_1104_V_read1174_rewind_reg_44657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1105_V_read1175_phi_phi_fu_88384_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1105_V_read1175_phi_phi_fu_88384_p4 = ap_phi_mux_data_1105_V_read1175_rewind_phi_fu_44675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1105_V_read1175_phi_phi_fu_88384_p4 = data_1105_V_read.read();
        } else {
            ap_phi_mux_data_1105_V_read1175_phi_phi_fu_88384_p4 = ap_phi_reg_pp0_iter0_data_1105_V_read1175_phi_reg_88380.read();
        }
    } else {
        ap_phi_mux_data_1105_V_read1175_phi_phi_fu_88384_p4 = ap_phi_reg_pp0_iter0_data_1105_V_read1175_phi_reg_88380.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1105_V_read1175_rewind_phi_fu_44675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1105_V_read1175_rewind_phi_fu_44675_p6 = data_1105_V_read1175_phi_reg_88380.read();
    } else {
        ap_phi_mux_data_1105_V_read1175_rewind_phi_fu_44675_p6 = data_1105_V_read1175_rewind_reg_44671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1106_V_read1176_phi_phi_fu_88397_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1106_V_read1176_phi_phi_fu_88397_p4 = ap_phi_mux_data_1106_V_read1176_rewind_phi_fu_44689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1106_V_read1176_phi_phi_fu_88397_p4 = data_1106_V_read.read();
        } else {
            ap_phi_mux_data_1106_V_read1176_phi_phi_fu_88397_p4 = ap_phi_reg_pp0_iter0_data_1106_V_read1176_phi_reg_88393.read();
        }
    } else {
        ap_phi_mux_data_1106_V_read1176_phi_phi_fu_88397_p4 = ap_phi_reg_pp0_iter0_data_1106_V_read1176_phi_reg_88393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1106_V_read1176_rewind_phi_fu_44689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1106_V_read1176_rewind_phi_fu_44689_p6 = data_1106_V_read1176_phi_reg_88393.read();
    } else {
        ap_phi_mux_data_1106_V_read1176_rewind_phi_fu_44689_p6 = data_1106_V_read1176_rewind_reg_44685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1107_V_read1177_phi_phi_fu_88410_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1107_V_read1177_phi_phi_fu_88410_p4 = ap_phi_mux_data_1107_V_read1177_rewind_phi_fu_44703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1107_V_read1177_phi_phi_fu_88410_p4 = data_1107_V_read.read();
        } else {
            ap_phi_mux_data_1107_V_read1177_phi_phi_fu_88410_p4 = ap_phi_reg_pp0_iter0_data_1107_V_read1177_phi_reg_88406.read();
        }
    } else {
        ap_phi_mux_data_1107_V_read1177_phi_phi_fu_88410_p4 = ap_phi_reg_pp0_iter0_data_1107_V_read1177_phi_reg_88406.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1107_V_read1177_rewind_phi_fu_44703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1107_V_read1177_rewind_phi_fu_44703_p6 = data_1107_V_read1177_phi_reg_88406.read();
    } else {
        ap_phi_mux_data_1107_V_read1177_rewind_phi_fu_44703_p6 = data_1107_V_read1177_rewind_reg_44699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1108_V_read1178_phi_phi_fu_88423_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1108_V_read1178_phi_phi_fu_88423_p4 = ap_phi_mux_data_1108_V_read1178_rewind_phi_fu_44717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1108_V_read1178_phi_phi_fu_88423_p4 = data_1108_V_read.read();
        } else {
            ap_phi_mux_data_1108_V_read1178_phi_phi_fu_88423_p4 = ap_phi_reg_pp0_iter0_data_1108_V_read1178_phi_reg_88419.read();
        }
    } else {
        ap_phi_mux_data_1108_V_read1178_phi_phi_fu_88423_p4 = ap_phi_reg_pp0_iter0_data_1108_V_read1178_phi_reg_88419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1108_V_read1178_rewind_phi_fu_44717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1108_V_read1178_rewind_phi_fu_44717_p6 = data_1108_V_read1178_phi_reg_88419.read();
    } else {
        ap_phi_mux_data_1108_V_read1178_rewind_phi_fu_44717_p6 = data_1108_V_read1178_rewind_reg_44713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1109_V_read1179_phi_phi_fu_88436_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1109_V_read1179_phi_phi_fu_88436_p4 = ap_phi_mux_data_1109_V_read1179_rewind_phi_fu_44731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1109_V_read1179_phi_phi_fu_88436_p4 = data_1109_V_read.read();
        } else {
            ap_phi_mux_data_1109_V_read1179_phi_phi_fu_88436_p4 = ap_phi_reg_pp0_iter0_data_1109_V_read1179_phi_reg_88432.read();
        }
    } else {
        ap_phi_mux_data_1109_V_read1179_phi_phi_fu_88436_p4 = ap_phi_reg_pp0_iter0_data_1109_V_read1179_phi_reg_88432.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1109_V_read1179_rewind_phi_fu_44731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1109_V_read1179_rewind_phi_fu_44731_p6 = data_1109_V_read1179_phi_reg_88432.read();
    } else {
        ap_phi_mux_data_1109_V_read1179_rewind_phi_fu_44731_p6 = data_1109_V_read1179_rewind_reg_44727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_110_V_read180_phi_phi_fu_75449_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_110_V_read180_phi_phi_fu_75449_p4 = ap_phi_mux_data_110_V_read180_rewind_phi_fu_30745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_110_V_read180_phi_phi_fu_75449_p4 = data_110_V_read.read();
        } else {
            ap_phi_mux_data_110_V_read180_phi_phi_fu_75449_p4 = ap_phi_reg_pp0_iter0_data_110_V_read180_phi_reg_75445.read();
        }
    } else {
        ap_phi_mux_data_110_V_read180_phi_phi_fu_75449_p4 = ap_phi_reg_pp0_iter0_data_110_V_read180_phi_reg_75445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_110_V_read180_rewind_phi_fu_30745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_110_V_read180_rewind_phi_fu_30745_p6 = data_110_V_read180_phi_reg_75445.read();
    } else {
        ap_phi_mux_data_110_V_read180_rewind_phi_fu_30745_p6 = data_110_V_read180_rewind_reg_30741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1110_V_read1180_phi_phi_fu_88449_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1110_V_read1180_phi_phi_fu_88449_p4 = ap_phi_mux_data_1110_V_read1180_rewind_phi_fu_44745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1110_V_read1180_phi_phi_fu_88449_p4 = data_1110_V_read.read();
        } else {
            ap_phi_mux_data_1110_V_read1180_phi_phi_fu_88449_p4 = ap_phi_reg_pp0_iter0_data_1110_V_read1180_phi_reg_88445.read();
        }
    } else {
        ap_phi_mux_data_1110_V_read1180_phi_phi_fu_88449_p4 = ap_phi_reg_pp0_iter0_data_1110_V_read1180_phi_reg_88445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1110_V_read1180_rewind_phi_fu_44745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1110_V_read1180_rewind_phi_fu_44745_p6 = data_1110_V_read1180_phi_reg_88445.read();
    } else {
        ap_phi_mux_data_1110_V_read1180_rewind_phi_fu_44745_p6 = data_1110_V_read1180_rewind_reg_44741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1111_V_read1181_phi_phi_fu_88462_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1111_V_read1181_phi_phi_fu_88462_p4 = ap_phi_mux_data_1111_V_read1181_rewind_phi_fu_44759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1111_V_read1181_phi_phi_fu_88462_p4 = data_1111_V_read.read();
        } else {
            ap_phi_mux_data_1111_V_read1181_phi_phi_fu_88462_p4 = ap_phi_reg_pp0_iter0_data_1111_V_read1181_phi_reg_88458.read();
        }
    } else {
        ap_phi_mux_data_1111_V_read1181_phi_phi_fu_88462_p4 = ap_phi_reg_pp0_iter0_data_1111_V_read1181_phi_reg_88458.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1111_V_read1181_rewind_phi_fu_44759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1111_V_read1181_rewind_phi_fu_44759_p6 = data_1111_V_read1181_phi_reg_88458.read();
    } else {
        ap_phi_mux_data_1111_V_read1181_rewind_phi_fu_44759_p6 = data_1111_V_read1181_rewind_reg_44755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1112_V_read1182_phi_phi_fu_88475_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1112_V_read1182_phi_phi_fu_88475_p4 = ap_phi_mux_data_1112_V_read1182_rewind_phi_fu_44773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1112_V_read1182_phi_phi_fu_88475_p4 = data_1112_V_read.read();
        } else {
            ap_phi_mux_data_1112_V_read1182_phi_phi_fu_88475_p4 = ap_phi_reg_pp0_iter0_data_1112_V_read1182_phi_reg_88471.read();
        }
    } else {
        ap_phi_mux_data_1112_V_read1182_phi_phi_fu_88475_p4 = ap_phi_reg_pp0_iter0_data_1112_V_read1182_phi_reg_88471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1112_V_read1182_rewind_phi_fu_44773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1112_V_read1182_rewind_phi_fu_44773_p6 = data_1112_V_read1182_phi_reg_88471.read();
    } else {
        ap_phi_mux_data_1112_V_read1182_rewind_phi_fu_44773_p6 = data_1112_V_read1182_rewind_reg_44769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1113_V_read1183_phi_phi_fu_88488_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1113_V_read1183_phi_phi_fu_88488_p4 = ap_phi_mux_data_1113_V_read1183_rewind_phi_fu_44787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1113_V_read1183_phi_phi_fu_88488_p4 = data_1113_V_read.read();
        } else {
            ap_phi_mux_data_1113_V_read1183_phi_phi_fu_88488_p4 = ap_phi_reg_pp0_iter0_data_1113_V_read1183_phi_reg_88484.read();
        }
    } else {
        ap_phi_mux_data_1113_V_read1183_phi_phi_fu_88488_p4 = ap_phi_reg_pp0_iter0_data_1113_V_read1183_phi_reg_88484.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1113_V_read1183_rewind_phi_fu_44787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1113_V_read1183_rewind_phi_fu_44787_p6 = data_1113_V_read1183_phi_reg_88484.read();
    } else {
        ap_phi_mux_data_1113_V_read1183_rewind_phi_fu_44787_p6 = data_1113_V_read1183_rewind_reg_44783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1114_V_read1184_phi_phi_fu_88501_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1114_V_read1184_phi_phi_fu_88501_p4 = ap_phi_mux_data_1114_V_read1184_rewind_phi_fu_44801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1114_V_read1184_phi_phi_fu_88501_p4 = data_1114_V_read.read();
        } else {
            ap_phi_mux_data_1114_V_read1184_phi_phi_fu_88501_p4 = ap_phi_reg_pp0_iter0_data_1114_V_read1184_phi_reg_88497.read();
        }
    } else {
        ap_phi_mux_data_1114_V_read1184_phi_phi_fu_88501_p4 = ap_phi_reg_pp0_iter0_data_1114_V_read1184_phi_reg_88497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1114_V_read1184_rewind_phi_fu_44801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1114_V_read1184_rewind_phi_fu_44801_p6 = data_1114_V_read1184_phi_reg_88497.read();
    } else {
        ap_phi_mux_data_1114_V_read1184_rewind_phi_fu_44801_p6 = data_1114_V_read1184_rewind_reg_44797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1115_V_read1185_phi_phi_fu_88514_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1115_V_read1185_phi_phi_fu_88514_p4 = ap_phi_mux_data_1115_V_read1185_rewind_phi_fu_44815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1115_V_read1185_phi_phi_fu_88514_p4 = data_1115_V_read.read();
        } else {
            ap_phi_mux_data_1115_V_read1185_phi_phi_fu_88514_p4 = ap_phi_reg_pp0_iter0_data_1115_V_read1185_phi_reg_88510.read();
        }
    } else {
        ap_phi_mux_data_1115_V_read1185_phi_phi_fu_88514_p4 = ap_phi_reg_pp0_iter0_data_1115_V_read1185_phi_reg_88510.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1115_V_read1185_rewind_phi_fu_44815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1115_V_read1185_rewind_phi_fu_44815_p6 = data_1115_V_read1185_phi_reg_88510.read();
    } else {
        ap_phi_mux_data_1115_V_read1185_rewind_phi_fu_44815_p6 = data_1115_V_read1185_rewind_reg_44811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1116_V_read1186_phi_phi_fu_88527_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1116_V_read1186_phi_phi_fu_88527_p4 = ap_phi_mux_data_1116_V_read1186_rewind_phi_fu_44829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1116_V_read1186_phi_phi_fu_88527_p4 = data_1116_V_read.read();
        } else {
            ap_phi_mux_data_1116_V_read1186_phi_phi_fu_88527_p4 = ap_phi_reg_pp0_iter0_data_1116_V_read1186_phi_reg_88523.read();
        }
    } else {
        ap_phi_mux_data_1116_V_read1186_phi_phi_fu_88527_p4 = ap_phi_reg_pp0_iter0_data_1116_V_read1186_phi_reg_88523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1116_V_read1186_rewind_phi_fu_44829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1116_V_read1186_rewind_phi_fu_44829_p6 = data_1116_V_read1186_phi_reg_88523.read();
    } else {
        ap_phi_mux_data_1116_V_read1186_rewind_phi_fu_44829_p6 = data_1116_V_read1186_rewind_reg_44825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1117_V_read1187_phi_phi_fu_88540_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1117_V_read1187_phi_phi_fu_88540_p4 = ap_phi_mux_data_1117_V_read1187_rewind_phi_fu_44843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1117_V_read1187_phi_phi_fu_88540_p4 = data_1117_V_read.read();
        } else {
            ap_phi_mux_data_1117_V_read1187_phi_phi_fu_88540_p4 = ap_phi_reg_pp0_iter0_data_1117_V_read1187_phi_reg_88536.read();
        }
    } else {
        ap_phi_mux_data_1117_V_read1187_phi_phi_fu_88540_p4 = ap_phi_reg_pp0_iter0_data_1117_V_read1187_phi_reg_88536.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1117_V_read1187_rewind_phi_fu_44843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1117_V_read1187_rewind_phi_fu_44843_p6 = data_1117_V_read1187_phi_reg_88536.read();
    } else {
        ap_phi_mux_data_1117_V_read1187_rewind_phi_fu_44843_p6 = data_1117_V_read1187_rewind_reg_44839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1118_V_read1188_phi_phi_fu_88553_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1118_V_read1188_phi_phi_fu_88553_p4 = ap_phi_mux_data_1118_V_read1188_rewind_phi_fu_44857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1118_V_read1188_phi_phi_fu_88553_p4 = data_1118_V_read.read();
        } else {
            ap_phi_mux_data_1118_V_read1188_phi_phi_fu_88553_p4 = ap_phi_reg_pp0_iter0_data_1118_V_read1188_phi_reg_88549.read();
        }
    } else {
        ap_phi_mux_data_1118_V_read1188_phi_phi_fu_88553_p4 = ap_phi_reg_pp0_iter0_data_1118_V_read1188_phi_reg_88549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1118_V_read1188_rewind_phi_fu_44857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1118_V_read1188_rewind_phi_fu_44857_p6 = data_1118_V_read1188_phi_reg_88549.read();
    } else {
        ap_phi_mux_data_1118_V_read1188_rewind_phi_fu_44857_p6 = data_1118_V_read1188_rewind_reg_44853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1119_V_read1189_phi_phi_fu_88566_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1119_V_read1189_phi_phi_fu_88566_p4 = ap_phi_mux_data_1119_V_read1189_rewind_phi_fu_44871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1119_V_read1189_phi_phi_fu_88566_p4 = data_1119_V_read.read();
        } else {
            ap_phi_mux_data_1119_V_read1189_phi_phi_fu_88566_p4 = ap_phi_reg_pp0_iter0_data_1119_V_read1189_phi_reg_88562.read();
        }
    } else {
        ap_phi_mux_data_1119_V_read1189_phi_phi_fu_88566_p4 = ap_phi_reg_pp0_iter0_data_1119_V_read1189_phi_reg_88562.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1119_V_read1189_rewind_phi_fu_44871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1119_V_read1189_rewind_phi_fu_44871_p6 = data_1119_V_read1189_phi_reg_88562.read();
    } else {
        ap_phi_mux_data_1119_V_read1189_rewind_phi_fu_44871_p6 = data_1119_V_read1189_rewind_reg_44867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_111_V_read181_phi_phi_fu_75462_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_111_V_read181_phi_phi_fu_75462_p4 = ap_phi_mux_data_111_V_read181_rewind_phi_fu_30759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_111_V_read181_phi_phi_fu_75462_p4 = data_111_V_read.read();
        } else {
            ap_phi_mux_data_111_V_read181_phi_phi_fu_75462_p4 = ap_phi_reg_pp0_iter0_data_111_V_read181_phi_reg_75458.read();
        }
    } else {
        ap_phi_mux_data_111_V_read181_phi_phi_fu_75462_p4 = ap_phi_reg_pp0_iter0_data_111_V_read181_phi_reg_75458.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_111_V_read181_rewind_phi_fu_30759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_111_V_read181_rewind_phi_fu_30759_p6 = data_111_V_read181_phi_reg_75458.read();
    } else {
        ap_phi_mux_data_111_V_read181_rewind_phi_fu_30759_p6 = data_111_V_read181_rewind_reg_30755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1120_V_read1190_phi_phi_fu_88579_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1120_V_read1190_phi_phi_fu_88579_p4 = ap_phi_mux_data_1120_V_read1190_rewind_phi_fu_44885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1120_V_read1190_phi_phi_fu_88579_p4 = data_1120_V_read.read();
        } else {
            ap_phi_mux_data_1120_V_read1190_phi_phi_fu_88579_p4 = ap_phi_reg_pp0_iter0_data_1120_V_read1190_phi_reg_88575.read();
        }
    } else {
        ap_phi_mux_data_1120_V_read1190_phi_phi_fu_88579_p4 = ap_phi_reg_pp0_iter0_data_1120_V_read1190_phi_reg_88575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1120_V_read1190_rewind_phi_fu_44885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1120_V_read1190_rewind_phi_fu_44885_p6 = data_1120_V_read1190_phi_reg_88575.read();
    } else {
        ap_phi_mux_data_1120_V_read1190_rewind_phi_fu_44885_p6 = data_1120_V_read1190_rewind_reg_44881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1121_V_read1191_phi_phi_fu_88592_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1121_V_read1191_phi_phi_fu_88592_p4 = ap_phi_mux_data_1121_V_read1191_rewind_phi_fu_44899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1121_V_read1191_phi_phi_fu_88592_p4 = data_1121_V_read.read();
        } else {
            ap_phi_mux_data_1121_V_read1191_phi_phi_fu_88592_p4 = ap_phi_reg_pp0_iter0_data_1121_V_read1191_phi_reg_88588.read();
        }
    } else {
        ap_phi_mux_data_1121_V_read1191_phi_phi_fu_88592_p4 = ap_phi_reg_pp0_iter0_data_1121_V_read1191_phi_reg_88588.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1121_V_read1191_rewind_phi_fu_44899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1121_V_read1191_rewind_phi_fu_44899_p6 = data_1121_V_read1191_phi_reg_88588.read();
    } else {
        ap_phi_mux_data_1121_V_read1191_rewind_phi_fu_44899_p6 = data_1121_V_read1191_rewind_reg_44895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1122_V_read1192_phi_phi_fu_88605_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1122_V_read1192_phi_phi_fu_88605_p4 = ap_phi_mux_data_1122_V_read1192_rewind_phi_fu_44913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1122_V_read1192_phi_phi_fu_88605_p4 = data_1122_V_read.read();
        } else {
            ap_phi_mux_data_1122_V_read1192_phi_phi_fu_88605_p4 = ap_phi_reg_pp0_iter0_data_1122_V_read1192_phi_reg_88601.read();
        }
    } else {
        ap_phi_mux_data_1122_V_read1192_phi_phi_fu_88605_p4 = ap_phi_reg_pp0_iter0_data_1122_V_read1192_phi_reg_88601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1122_V_read1192_rewind_phi_fu_44913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1122_V_read1192_rewind_phi_fu_44913_p6 = data_1122_V_read1192_phi_reg_88601.read();
    } else {
        ap_phi_mux_data_1122_V_read1192_rewind_phi_fu_44913_p6 = data_1122_V_read1192_rewind_reg_44909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1123_V_read1193_phi_phi_fu_88618_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1123_V_read1193_phi_phi_fu_88618_p4 = ap_phi_mux_data_1123_V_read1193_rewind_phi_fu_44927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1123_V_read1193_phi_phi_fu_88618_p4 = data_1123_V_read.read();
        } else {
            ap_phi_mux_data_1123_V_read1193_phi_phi_fu_88618_p4 = ap_phi_reg_pp0_iter0_data_1123_V_read1193_phi_reg_88614.read();
        }
    } else {
        ap_phi_mux_data_1123_V_read1193_phi_phi_fu_88618_p4 = ap_phi_reg_pp0_iter0_data_1123_V_read1193_phi_reg_88614.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1123_V_read1193_rewind_phi_fu_44927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1123_V_read1193_rewind_phi_fu_44927_p6 = data_1123_V_read1193_phi_reg_88614.read();
    } else {
        ap_phi_mux_data_1123_V_read1193_rewind_phi_fu_44927_p6 = data_1123_V_read1193_rewind_reg_44923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1124_V_read1194_phi_phi_fu_88631_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1124_V_read1194_phi_phi_fu_88631_p4 = ap_phi_mux_data_1124_V_read1194_rewind_phi_fu_44941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1124_V_read1194_phi_phi_fu_88631_p4 = data_1124_V_read.read();
        } else {
            ap_phi_mux_data_1124_V_read1194_phi_phi_fu_88631_p4 = ap_phi_reg_pp0_iter0_data_1124_V_read1194_phi_reg_88627.read();
        }
    } else {
        ap_phi_mux_data_1124_V_read1194_phi_phi_fu_88631_p4 = ap_phi_reg_pp0_iter0_data_1124_V_read1194_phi_reg_88627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1124_V_read1194_rewind_phi_fu_44941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1124_V_read1194_rewind_phi_fu_44941_p6 = data_1124_V_read1194_phi_reg_88627.read();
    } else {
        ap_phi_mux_data_1124_V_read1194_rewind_phi_fu_44941_p6 = data_1124_V_read1194_rewind_reg_44937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1125_V_read1195_phi_phi_fu_88644_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1125_V_read1195_phi_phi_fu_88644_p4 = ap_phi_mux_data_1125_V_read1195_rewind_phi_fu_44955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1125_V_read1195_phi_phi_fu_88644_p4 = data_1125_V_read.read();
        } else {
            ap_phi_mux_data_1125_V_read1195_phi_phi_fu_88644_p4 = ap_phi_reg_pp0_iter0_data_1125_V_read1195_phi_reg_88640.read();
        }
    } else {
        ap_phi_mux_data_1125_V_read1195_phi_phi_fu_88644_p4 = ap_phi_reg_pp0_iter0_data_1125_V_read1195_phi_reg_88640.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1125_V_read1195_rewind_phi_fu_44955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1125_V_read1195_rewind_phi_fu_44955_p6 = data_1125_V_read1195_phi_reg_88640.read();
    } else {
        ap_phi_mux_data_1125_V_read1195_rewind_phi_fu_44955_p6 = data_1125_V_read1195_rewind_reg_44951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1126_V_read1196_phi_phi_fu_88657_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1126_V_read1196_phi_phi_fu_88657_p4 = ap_phi_mux_data_1126_V_read1196_rewind_phi_fu_44969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1126_V_read1196_phi_phi_fu_88657_p4 = data_1126_V_read.read();
        } else {
            ap_phi_mux_data_1126_V_read1196_phi_phi_fu_88657_p4 = ap_phi_reg_pp0_iter0_data_1126_V_read1196_phi_reg_88653.read();
        }
    } else {
        ap_phi_mux_data_1126_V_read1196_phi_phi_fu_88657_p4 = ap_phi_reg_pp0_iter0_data_1126_V_read1196_phi_reg_88653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1126_V_read1196_rewind_phi_fu_44969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1126_V_read1196_rewind_phi_fu_44969_p6 = data_1126_V_read1196_phi_reg_88653.read();
    } else {
        ap_phi_mux_data_1126_V_read1196_rewind_phi_fu_44969_p6 = data_1126_V_read1196_rewind_reg_44965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1127_V_read1197_phi_phi_fu_88670_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1127_V_read1197_phi_phi_fu_88670_p4 = ap_phi_mux_data_1127_V_read1197_rewind_phi_fu_44983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1127_V_read1197_phi_phi_fu_88670_p4 = data_1127_V_read.read();
        } else {
            ap_phi_mux_data_1127_V_read1197_phi_phi_fu_88670_p4 = ap_phi_reg_pp0_iter0_data_1127_V_read1197_phi_reg_88666.read();
        }
    } else {
        ap_phi_mux_data_1127_V_read1197_phi_phi_fu_88670_p4 = ap_phi_reg_pp0_iter0_data_1127_V_read1197_phi_reg_88666.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1127_V_read1197_rewind_phi_fu_44983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1127_V_read1197_rewind_phi_fu_44983_p6 = data_1127_V_read1197_phi_reg_88666.read();
    } else {
        ap_phi_mux_data_1127_V_read1197_rewind_phi_fu_44983_p6 = data_1127_V_read1197_rewind_reg_44979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1128_V_read1198_phi_phi_fu_88683_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1128_V_read1198_phi_phi_fu_88683_p4 = ap_phi_mux_data_1128_V_read1198_rewind_phi_fu_44997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1128_V_read1198_phi_phi_fu_88683_p4 = data_1128_V_read.read();
        } else {
            ap_phi_mux_data_1128_V_read1198_phi_phi_fu_88683_p4 = ap_phi_reg_pp0_iter0_data_1128_V_read1198_phi_reg_88679.read();
        }
    } else {
        ap_phi_mux_data_1128_V_read1198_phi_phi_fu_88683_p4 = ap_phi_reg_pp0_iter0_data_1128_V_read1198_phi_reg_88679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1128_V_read1198_rewind_phi_fu_44997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1128_V_read1198_rewind_phi_fu_44997_p6 = data_1128_V_read1198_phi_reg_88679.read();
    } else {
        ap_phi_mux_data_1128_V_read1198_rewind_phi_fu_44997_p6 = data_1128_V_read1198_rewind_reg_44993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1129_V_read1199_phi_phi_fu_88696_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1129_V_read1199_phi_phi_fu_88696_p4 = ap_phi_mux_data_1129_V_read1199_rewind_phi_fu_45011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1129_V_read1199_phi_phi_fu_88696_p4 = data_1129_V_read.read();
        } else {
            ap_phi_mux_data_1129_V_read1199_phi_phi_fu_88696_p4 = ap_phi_reg_pp0_iter0_data_1129_V_read1199_phi_reg_88692.read();
        }
    } else {
        ap_phi_mux_data_1129_V_read1199_phi_phi_fu_88696_p4 = ap_phi_reg_pp0_iter0_data_1129_V_read1199_phi_reg_88692.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1129_V_read1199_rewind_phi_fu_45011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1129_V_read1199_rewind_phi_fu_45011_p6 = data_1129_V_read1199_phi_reg_88692.read();
    } else {
        ap_phi_mux_data_1129_V_read1199_rewind_phi_fu_45011_p6 = data_1129_V_read1199_rewind_reg_45007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_112_V_read182_phi_phi_fu_75475_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_112_V_read182_phi_phi_fu_75475_p4 = ap_phi_mux_data_112_V_read182_rewind_phi_fu_30773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_112_V_read182_phi_phi_fu_75475_p4 = data_112_V_read.read();
        } else {
            ap_phi_mux_data_112_V_read182_phi_phi_fu_75475_p4 = ap_phi_reg_pp0_iter0_data_112_V_read182_phi_reg_75471.read();
        }
    } else {
        ap_phi_mux_data_112_V_read182_phi_phi_fu_75475_p4 = ap_phi_reg_pp0_iter0_data_112_V_read182_phi_reg_75471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_112_V_read182_rewind_phi_fu_30773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_112_V_read182_rewind_phi_fu_30773_p6 = data_112_V_read182_phi_reg_75471.read();
    } else {
        ap_phi_mux_data_112_V_read182_rewind_phi_fu_30773_p6 = data_112_V_read182_rewind_reg_30769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1130_V_read1200_phi_phi_fu_88709_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1130_V_read1200_phi_phi_fu_88709_p4 = ap_phi_mux_data_1130_V_read1200_rewind_phi_fu_45025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1130_V_read1200_phi_phi_fu_88709_p4 = data_1130_V_read.read();
        } else {
            ap_phi_mux_data_1130_V_read1200_phi_phi_fu_88709_p4 = ap_phi_reg_pp0_iter0_data_1130_V_read1200_phi_reg_88705.read();
        }
    } else {
        ap_phi_mux_data_1130_V_read1200_phi_phi_fu_88709_p4 = ap_phi_reg_pp0_iter0_data_1130_V_read1200_phi_reg_88705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1130_V_read1200_rewind_phi_fu_45025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1130_V_read1200_rewind_phi_fu_45025_p6 = data_1130_V_read1200_phi_reg_88705.read();
    } else {
        ap_phi_mux_data_1130_V_read1200_rewind_phi_fu_45025_p6 = data_1130_V_read1200_rewind_reg_45021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1131_V_read1201_phi_phi_fu_88722_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1131_V_read1201_phi_phi_fu_88722_p4 = ap_phi_mux_data_1131_V_read1201_rewind_phi_fu_45039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1131_V_read1201_phi_phi_fu_88722_p4 = data_1131_V_read.read();
        } else {
            ap_phi_mux_data_1131_V_read1201_phi_phi_fu_88722_p4 = ap_phi_reg_pp0_iter0_data_1131_V_read1201_phi_reg_88718.read();
        }
    } else {
        ap_phi_mux_data_1131_V_read1201_phi_phi_fu_88722_p4 = ap_phi_reg_pp0_iter0_data_1131_V_read1201_phi_reg_88718.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1131_V_read1201_rewind_phi_fu_45039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1131_V_read1201_rewind_phi_fu_45039_p6 = data_1131_V_read1201_phi_reg_88718.read();
    } else {
        ap_phi_mux_data_1131_V_read1201_rewind_phi_fu_45039_p6 = data_1131_V_read1201_rewind_reg_45035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1132_V_read1202_phi_phi_fu_88735_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1132_V_read1202_phi_phi_fu_88735_p4 = ap_phi_mux_data_1132_V_read1202_rewind_phi_fu_45053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1132_V_read1202_phi_phi_fu_88735_p4 = data_1132_V_read.read();
        } else {
            ap_phi_mux_data_1132_V_read1202_phi_phi_fu_88735_p4 = ap_phi_reg_pp0_iter0_data_1132_V_read1202_phi_reg_88731.read();
        }
    } else {
        ap_phi_mux_data_1132_V_read1202_phi_phi_fu_88735_p4 = ap_phi_reg_pp0_iter0_data_1132_V_read1202_phi_reg_88731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1132_V_read1202_rewind_phi_fu_45053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1132_V_read1202_rewind_phi_fu_45053_p6 = data_1132_V_read1202_phi_reg_88731.read();
    } else {
        ap_phi_mux_data_1132_V_read1202_rewind_phi_fu_45053_p6 = data_1132_V_read1202_rewind_reg_45049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1133_V_read1203_phi_phi_fu_88748_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1133_V_read1203_phi_phi_fu_88748_p4 = ap_phi_mux_data_1133_V_read1203_rewind_phi_fu_45067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1133_V_read1203_phi_phi_fu_88748_p4 = data_1133_V_read.read();
        } else {
            ap_phi_mux_data_1133_V_read1203_phi_phi_fu_88748_p4 = ap_phi_reg_pp0_iter0_data_1133_V_read1203_phi_reg_88744.read();
        }
    } else {
        ap_phi_mux_data_1133_V_read1203_phi_phi_fu_88748_p4 = ap_phi_reg_pp0_iter0_data_1133_V_read1203_phi_reg_88744.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1133_V_read1203_rewind_phi_fu_45067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1133_V_read1203_rewind_phi_fu_45067_p6 = data_1133_V_read1203_phi_reg_88744.read();
    } else {
        ap_phi_mux_data_1133_V_read1203_rewind_phi_fu_45067_p6 = data_1133_V_read1203_rewind_reg_45063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1134_V_read1204_phi_phi_fu_88761_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1134_V_read1204_phi_phi_fu_88761_p4 = ap_phi_mux_data_1134_V_read1204_rewind_phi_fu_45081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1134_V_read1204_phi_phi_fu_88761_p4 = data_1134_V_read.read();
        } else {
            ap_phi_mux_data_1134_V_read1204_phi_phi_fu_88761_p4 = ap_phi_reg_pp0_iter0_data_1134_V_read1204_phi_reg_88757.read();
        }
    } else {
        ap_phi_mux_data_1134_V_read1204_phi_phi_fu_88761_p4 = ap_phi_reg_pp0_iter0_data_1134_V_read1204_phi_reg_88757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1134_V_read1204_rewind_phi_fu_45081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1134_V_read1204_rewind_phi_fu_45081_p6 = data_1134_V_read1204_phi_reg_88757.read();
    } else {
        ap_phi_mux_data_1134_V_read1204_rewind_phi_fu_45081_p6 = data_1134_V_read1204_rewind_reg_45077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1135_V_read1205_phi_phi_fu_88774_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1135_V_read1205_phi_phi_fu_88774_p4 = ap_phi_mux_data_1135_V_read1205_rewind_phi_fu_45095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1135_V_read1205_phi_phi_fu_88774_p4 = data_1135_V_read.read();
        } else {
            ap_phi_mux_data_1135_V_read1205_phi_phi_fu_88774_p4 = ap_phi_reg_pp0_iter0_data_1135_V_read1205_phi_reg_88770.read();
        }
    } else {
        ap_phi_mux_data_1135_V_read1205_phi_phi_fu_88774_p4 = ap_phi_reg_pp0_iter0_data_1135_V_read1205_phi_reg_88770.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1135_V_read1205_rewind_phi_fu_45095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1135_V_read1205_rewind_phi_fu_45095_p6 = data_1135_V_read1205_phi_reg_88770.read();
    } else {
        ap_phi_mux_data_1135_V_read1205_rewind_phi_fu_45095_p6 = data_1135_V_read1205_rewind_reg_45091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1136_V_read1206_phi_phi_fu_88787_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1136_V_read1206_phi_phi_fu_88787_p4 = ap_phi_mux_data_1136_V_read1206_rewind_phi_fu_45109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1136_V_read1206_phi_phi_fu_88787_p4 = data_1136_V_read.read();
        } else {
            ap_phi_mux_data_1136_V_read1206_phi_phi_fu_88787_p4 = ap_phi_reg_pp0_iter0_data_1136_V_read1206_phi_reg_88783.read();
        }
    } else {
        ap_phi_mux_data_1136_V_read1206_phi_phi_fu_88787_p4 = ap_phi_reg_pp0_iter0_data_1136_V_read1206_phi_reg_88783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1136_V_read1206_rewind_phi_fu_45109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1136_V_read1206_rewind_phi_fu_45109_p6 = data_1136_V_read1206_phi_reg_88783.read();
    } else {
        ap_phi_mux_data_1136_V_read1206_rewind_phi_fu_45109_p6 = data_1136_V_read1206_rewind_reg_45105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1137_V_read1207_phi_phi_fu_88800_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1137_V_read1207_phi_phi_fu_88800_p4 = ap_phi_mux_data_1137_V_read1207_rewind_phi_fu_45123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1137_V_read1207_phi_phi_fu_88800_p4 = data_1137_V_read.read();
        } else {
            ap_phi_mux_data_1137_V_read1207_phi_phi_fu_88800_p4 = ap_phi_reg_pp0_iter0_data_1137_V_read1207_phi_reg_88796.read();
        }
    } else {
        ap_phi_mux_data_1137_V_read1207_phi_phi_fu_88800_p4 = ap_phi_reg_pp0_iter0_data_1137_V_read1207_phi_reg_88796.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1137_V_read1207_rewind_phi_fu_45123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1137_V_read1207_rewind_phi_fu_45123_p6 = data_1137_V_read1207_phi_reg_88796.read();
    } else {
        ap_phi_mux_data_1137_V_read1207_rewind_phi_fu_45123_p6 = data_1137_V_read1207_rewind_reg_45119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1138_V_read1208_phi_phi_fu_88813_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1138_V_read1208_phi_phi_fu_88813_p4 = ap_phi_mux_data_1138_V_read1208_rewind_phi_fu_45137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1138_V_read1208_phi_phi_fu_88813_p4 = data_1138_V_read.read();
        } else {
            ap_phi_mux_data_1138_V_read1208_phi_phi_fu_88813_p4 = ap_phi_reg_pp0_iter0_data_1138_V_read1208_phi_reg_88809.read();
        }
    } else {
        ap_phi_mux_data_1138_V_read1208_phi_phi_fu_88813_p4 = ap_phi_reg_pp0_iter0_data_1138_V_read1208_phi_reg_88809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1138_V_read1208_rewind_phi_fu_45137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1138_V_read1208_rewind_phi_fu_45137_p6 = data_1138_V_read1208_phi_reg_88809.read();
    } else {
        ap_phi_mux_data_1138_V_read1208_rewind_phi_fu_45137_p6 = data_1138_V_read1208_rewind_reg_45133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1139_V_read1209_phi_phi_fu_88826_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1139_V_read1209_phi_phi_fu_88826_p4 = ap_phi_mux_data_1139_V_read1209_rewind_phi_fu_45151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1139_V_read1209_phi_phi_fu_88826_p4 = data_1139_V_read.read();
        } else {
            ap_phi_mux_data_1139_V_read1209_phi_phi_fu_88826_p4 = ap_phi_reg_pp0_iter0_data_1139_V_read1209_phi_reg_88822.read();
        }
    } else {
        ap_phi_mux_data_1139_V_read1209_phi_phi_fu_88826_p4 = ap_phi_reg_pp0_iter0_data_1139_V_read1209_phi_reg_88822.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1139_V_read1209_rewind_phi_fu_45151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1139_V_read1209_rewind_phi_fu_45151_p6 = data_1139_V_read1209_phi_reg_88822.read();
    } else {
        ap_phi_mux_data_1139_V_read1209_rewind_phi_fu_45151_p6 = data_1139_V_read1209_rewind_reg_45147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_113_V_read183_phi_phi_fu_75488_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_113_V_read183_phi_phi_fu_75488_p4 = ap_phi_mux_data_113_V_read183_rewind_phi_fu_30787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_113_V_read183_phi_phi_fu_75488_p4 = data_113_V_read.read();
        } else {
            ap_phi_mux_data_113_V_read183_phi_phi_fu_75488_p4 = ap_phi_reg_pp0_iter0_data_113_V_read183_phi_reg_75484.read();
        }
    } else {
        ap_phi_mux_data_113_V_read183_phi_phi_fu_75488_p4 = ap_phi_reg_pp0_iter0_data_113_V_read183_phi_reg_75484.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_113_V_read183_rewind_phi_fu_30787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_113_V_read183_rewind_phi_fu_30787_p6 = data_113_V_read183_phi_reg_75484.read();
    } else {
        ap_phi_mux_data_113_V_read183_rewind_phi_fu_30787_p6 = data_113_V_read183_rewind_reg_30783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1140_V_read1210_phi_phi_fu_88839_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1140_V_read1210_phi_phi_fu_88839_p4 = ap_phi_mux_data_1140_V_read1210_rewind_phi_fu_45165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1140_V_read1210_phi_phi_fu_88839_p4 = data_1140_V_read.read();
        } else {
            ap_phi_mux_data_1140_V_read1210_phi_phi_fu_88839_p4 = ap_phi_reg_pp0_iter0_data_1140_V_read1210_phi_reg_88835.read();
        }
    } else {
        ap_phi_mux_data_1140_V_read1210_phi_phi_fu_88839_p4 = ap_phi_reg_pp0_iter0_data_1140_V_read1210_phi_reg_88835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1140_V_read1210_rewind_phi_fu_45165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1140_V_read1210_rewind_phi_fu_45165_p6 = data_1140_V_read1210_phi_reg_88835.read();
    } else {
        ap_phi_mux_data_1140_V_read1210_rewind_phi_fu_45165_p6 = data_1140_V_read1210_rewind_reg_45161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1141_V_read1211_phi_phi_fu_88852_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1141_V_read1211_phi_phi_fu_88852_p4 = ap_phi_mux_data_1141_V_read1211_rewind_phi_fu_45179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1141_V_read1211_phi_phi_fu_88852_p4 = data_1141_V_read.read();
        } else {
            ap_phi_mux_data_1141_V_read1211_phi_phi_fu_88852_p4 = ap_phi_reg_pp0_iter0_data_1141_V_read1211_phi_reg_88848.read();
        }
    } else {
        ap_phi_mux_data_1141_V_read1211_phi_phi_fu_88852_p4 = ap_phi_reg_pp0_iter0_data_1141_V_read1211_phi_reg_88848.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1141_V_read1211_rewind_phi_fu_45179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1141_V_read1211_rewind_phi_fu_45179_p6 = data_1141_V_read1211_phi_reg_88848.read();
    } else {
        ap_phi_mux_data_1141_V_read1211_rewind_phi_fu_45179_p6 = data_1141_V_read1211_rewind_reg_45175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1142_V_read1212_phi_phi_fu_88865_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1142_V_read1212_phi_phi_fu_88865_p4 = ap_phi_mux_data_1142_V_read1212_rewind_phi_fu_45193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1142_V_read1212_phi_phi_fu_88865_p4 = data_1142_V_read.read();
        } else {
            ap_phi_mux_data_1142_V_read1212_phi_phi_fu_88865_p4 = ap_phi_reg_pp0_iter0_data_1142_V_read1212_phi_reg_88861.read();
        }
    } else {
        ap_phi_mux_data_1142_V_read1212_phi_phi_fu_88865_p4 = ap_phi_reg_pp0_iter0_data_1142_V_read1212_phi_reg_88861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1142_V_read1212_rewind_phi_fu_45193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1142_V_read1212_rewind_phi_fu_45193_p6 = data_1142_V_read1212_phi_reg_88861.read();
    } else {
        ap_phi_mux_data_1142_V_read1212_rewind_phi_fu_45193_p6 = data_1142_V_read1212_rewind_reg_45189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1143_V_read1213_phi_phi_fu_88878_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1143_V_read1213_phi_phi_fu_88878_p4 = ap_phi_mux_data_1143_V_read1213_rewind_phi_fu_45207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1143_V_read1213_phi_phi_fu_88878_p4 = data_1143_V_read.read();
        } else {
            ap_phi_mux_data_1143_V_read1213_phi_phi_fu_88878_p4 = ap_phi_reg_pp0_iter0_data_1143_V_read1213_phi_reg_88874.read();
        }
    } else {
        ap_phi_mux_data_1143_V_read1213_phi_phi_fu_88878_p4 = ap_phi_reg_pp0_iter0_data_1143_V_read1213_phi_reg_88874.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1143_V_read1213_rewind_phi_fu_45207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1143_V_read1213_rewind_phi_fu_45207_p6 = data_1143_V_read1213_phi_reg_88874.read();
    } else {
        ap_phi_mux_data_1143_V_read1213_rewind_phi_fu_45207_p6 = data_1143_V_read1213_rewind_reg_45203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1144_V_read1214_phi_phi_fu_88891_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1144_V_read1214_phi_phi_fu_88891_p4 = ap_phi_mux_data_1144_V_read1214_rewind_phi_fu_45221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1144_V_read1214_phi_phi_fu_88891_p4 = data_1144_V_read.read();
        } else {
            ap_phi_mux_data_1144_V_read1214_phi_phi_fu_88891_p4 = ap_phi_reg_pp0_iter0_data_1144_V_read1214_phi_reg_88887.read();
        }
    } else {
        ap_phi_mux_data_1144_V_read1214_phi_phi_fu_88891_p4 = ap_phi_reg_pp0_iter0_data_1144_V_read1214_phi_reg_88887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1144_V_read1214_rewind_phi_fu_45221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1144_V_read1214_rewind_phi_fu_45221_p6 = data_1144_V_read1214_phi_reg_88887.read();
    } else {
        ap_phi_mux_data_1144_V_read1214_rewind_phi_fu_45221_p6 = data_1144_V_read1214_rewind_reg_45217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1145_V_read1215_phi_phi_fu_88904_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1145_V_read1215_phi_phi_fu_88904_p4 = ap_phi_mux_data_1145_V_read1215_rewind_phi_fu_45235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1145_V_read1215_phi_phi_fu_88904_p4 = data_1145_V_read.read();
        } else {
            ap_phi_mux_data_1145_V_read1215_phi_phi_fu_88904_p4 = ap_phi_reg_pp0_iter0_data_1145_V_read1215_phi_reg_88900.read();
        }
    } else {
        ap_phi_mux_data_1145_V_read1215_phi_phi_fu_88904_p4 = ap_phi_reg_pp0_iter0_data_1145_V_read1215_phi_reg_88900.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1145_V_read1215_rewind_phi_fu_45235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1145_V_read1215_rewind_phi_fu_45235_p6 = data_1145_V_read1215_phi_reg_88900.read();
    } else {
        ap_phi_mux_data_1145_V_read1215_rewind_phi_fu_45235_p6 = data_1145_V_read1215_rewind_reg_45231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1146_V_read1216_phi_phi_fu_88917_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1146_V_read1216_phi_phi_fu_88917_p4 = ap_phi_mux_data_1146_V_read1216_rewind_phi_fu_45249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1146_V_read1216_phi_phi_fu_88917_p4 = data_1146_V_read.read();
        } else {
            ap_phi_mux_data_1146_V_read1216_phi_phi_fu_88917_p4 = ap_phi_reg_pp0_iter0_data_1146_V_read1216_phi_reg_88913.read();
        }
    } else {
        ap_phi_mux_data_1146_V_read1216_phi_phi_fu_88917_p4 = ap_phi_reg_pp0_iter0_data_1146_V_read1216_phi_reg_88913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1146_V_read1216_rewind_phi_fu_45249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1146_V_read1216_rewind_phi_fu_45249_p6 = data_1146_V_read1216_phi_reg_88913.read();
    } else {
        ap_phi_mux_data_1146_V_read1216_rewind_phi_fu_45249_p6 = data_1146_V_read1216_rewind_reg_45245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1147_V_read1217_phi_phi_fu_88930_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1147_V_read1217_phi_phi_fu_88930_p4 = ap_phi_mux_data_1147_V_read1217_rewind_phi_fu_45263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1147_V_read1217_phi_phi_fu_88930_p4 = data_1147_V_read.read();
        } else {
            ap_phi_mux_data_1147_V_read1217_phi_phi_fu_88930_p4 = ap_phi_reg_pp0_iter0_data_1147_V_read1217_phi_reg_88926.read();
        }
    } else {
        ap_phi_mux_data_1147_V_read1217_phi_phi_fu_88930_p4 = ap_phi_reg_pp0_iter0_data_1147_V_read1217_phi_reg_88926.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1147_V_read1217_rewind_phi_fu_45263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1147_V_read1217_rewind_phi_fu_45263_p6 = data_1147_V_read1217_phi_reg_88926.read();
    } else {
        ap_phi_mux_data_1147_V_read1217_rewind_phi_fu_45263_p6 = data_1147_V_read1217_rewind_reg_45259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1148_V_read1218_phi_phi_fu_88943_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1148_V_read1218_phi_phi_fu_88943_p4 = ap_phi_mux_data_1148_V_read1218_rewind_phi_fu_45277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1148_V_read1218_phi_phi_fu_88943_p4 = data_1148_V_read.read();
        } else {
            ap_phi_mux_data_1148_V_read1218_phi_phi_fu_88943_p4 = ap_phi_reg_pp0_iter0_data_1148_V_read1218_phi_reg_88939.read();
        }
    } else {
        ap_phi_mux_data_1148_V_read1218_phi_phi_fu_88943_p4 = ap_phi_reg_pp0_iter0_data_1148_V_read1218_phi_reg_88939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1148_V_read1218_rewind_phi_fu_45277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1148_V_read1218_rewind_phi_fu_45277_p6 = data_1148_V_read1218_phi_reg_88939.read();
    } else {
        ap_phi_mux_data_1148_V_read1218_rewind_phi_fu_45277_p6 = data_1148_V_read1218_rewind_reg_45273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1149_V_read1219_phi_phi_fu_88956_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1149_V_read1219_phi_phi_fu_88956_p4 = ap_phi_mux_data_1149_V_read1219_rewind_phi_fu_45291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1149_V_read1219_phi_phi_fu_88956_p4 = data_1149_V_read.read();
        } else {
            ap_phi_mux_data_1149_V_read1219_phi_phi_fu_88956_p4 = ap_phi_reg_pp0_iter0_data_1149_V_read1219_phi_reg_88952.read();
        }
    } else {
        ap_phi_mux_data_1149_V_read1219_phi_phi_fu_88956_p4 = ap_phi_reg_pp0_iter0_data_1149_V_read1219_phi_reg_88952.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1149_V_read1219_rewind_phi_fu_45291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1149_V_read1219_rewind_phi_fu_45291_p6 = data_1149_V_read1219_phi_reg_88952.read();
    } else {
        ap_phi_mux_data_1149_V_read1219_rewind_phi_fu_45291_p6 = data_1149_V_read1219_rewind_reg_45287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_114_V_read184_phi_phi_fu_75501_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_114_V_read184_phi_phi_fu_75501_p4 = ap_phi_mux_data_114_V_read184_rewind_phi_fu_30801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_114_V_read184_phi_phi_fu_75501_p4 = data_114_V_read.read();
        } else {
            ap_phi_mux_data_114_V_read184_phi_phi_fu_75501_p4 = ap_phi_reg_pp0_iter0_data_114_V_read184_phi_reg_75497.read();
        }
    } else {
        ap_phi_mux_data_114_V_read184_phi_phi_fu_75501_p4 = ap_phi_reg_pp0_iter0_data_114_V_read184_phi_reg_75497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_114_V_read184_rewind_phi_fu_30801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_114_V_read184_rewind_phi_fu_30801_p6 = data_114_V_read184_phi_reg_75497.read();
    } else {
        ap_phi_mux_data_114_V_read184_rewind_phi_fu_30801_p6 = data_114_V_read184_rewind_reg_30797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1150_V_read1220_phi_phi_fu_88969_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1150_V_read1220_phi_phi_fu_88969_p4 = ap_phi_mux_data_1150_V_read1220_rewind_phi_fu_45305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1150_V_read1220_phi_phi_fu_88969_p4 = data_1150_V_read.read();
        } else {
            ap_phi_mux_data_1150_V_read1220_phi_phi_fu_88969_p4 = ap_phi_reg_pp0_iter0_data_1150_V_read1220_phi_reg_88965.read();
        }
    } else {
        ap_phi_mux_data_1150_V_read1220_phi_phi_fu_88969_p4 = ap_phi_reg_pp0_iter0_data_1150_V_read1220_phi_reg_88965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1150_V_read1220_rewind_phi_fu_45305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1150_V_read1220_rewind_phi_fu_45305_p6 = data_1150_V_read1220_phi_reg_88965.read();
    } else {
        ap_phi_mux_data_1150_V_read1220_rewind_phi_fu_45305_p6 = data_1150_V_read1220_rewind_reg_45301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1151_V_read1221_phi_phi_fu_88982_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1151_V_read1221_phi_phi_fu_88982_p4 = ap_phi_mux_data_1151_V_read1221_rewind_phi_fu_45319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1151_V_read1221_phi_phi_fu_88982_p4 = data_1151_V_read.read();
        } else {
            ap_phi_mux_data_1151_V_read1221_phi_phi_fu_88982_p4 = ap_phi_reg_pp0_iter0_data_1151_V_read1221_phi_reg_88978.read();
        }
    } else {
        ap_phi_mux_data_1151_V_read1221_phi_phi_fu_88982_p4 = ap_phi_reg_pp0_iter0_data_1151_V_read1221_phi_reg_88978.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1151_V_read1221_rewind_phi_fu_45319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1151_V_read1221_rewind_phi_fu_45319_p6 = data_1151_V_read1221_phi_reg_88978.read();
    } else {
        ap_phi_mux_data_1151_V_read1221_rewind_phi_fu_45319_p6 = data_1151_V_read1221_rewind_reg_45315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1152_V_read1222_phi_phi_fu_88995_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1152_V_read1222_phi_phi_fu_88995_p4 = ap_phi_mux_data_1152_V_read1222_rewind_phi_fu_45333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1152_V_read1222_phi_phi_fu_88995_p4 = data_1152_V_read.read();
        } else {
            ap_phi_mux_data_1152_V_read1222_phi_phi_fu_88995_p4 = ap_phi_reg_pp0_iter0_data_1152_V_read1222_phi_reg_88991.read();
        }
    } else {
        ap_phi_mux_data_1152_V_read1222_phi_phi_fu_88995_p4 = ap_phi_reg_pp0_iter0_data_1152_V_read1222_phi_reg_88991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1152_V_read1222_rewind_phi_fu_45333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1152_V_read1222_rewind_phi_fu_45333_p6 = data_1152_V_read1222_phi_reg_88991.read();
    } else {
        ap_phi_mux_data_1152_V_read1222_rewind_phi_fu_45333_p6 = data_1152_V_read1222_rewind_reg_45329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1153_V_read1223_phi_phi_fu_89008_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1153_V_read1223_phi_phi_fu_89008_p4 = ap_phi_mux_data_1153_V_read1223_rewind_phi_fu_45347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1153_V_read1223_phi_phi_fu_89008_p4 = data_1153_V_read.read();
        } else {
            ap_phi_mux_data_1153_V_read1223_phi_phi_fu_89008_p4 = ap_phi_reg_pp0_iter0_data_1153_V_read1223_phi_reg_89004.read();
        }
    } else {
        ap_phi_mux_data_1153_V_read1223_phi_phi_fu_89008_p4 = ap_phi_reg_pp0_iter0_data_1153_V_read1223_phi_reg_89004.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1153_V_read1223_rewind_phi_fu_45347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1153_V_read1223_rewind_phi_fu_45347_p6 = data_1153_V_read1223_phi_reg_89004.read();
    } else {
        ap_phi_mux_data_1153_V_read1223_rewind_phi_fu_45347_p6 = data_1153_V_read1223_rewind_reg_45343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1154_V_read1224_phi_phi_fu_89021_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1154_V_read1224_phi_phi_fu_89021_p4 = ap_phi_mux_data_1154_V_read1224_rewind_phi_fu_45361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1154_V_read1224_phi_phi_fu_89021_p4 = data_1154_V_read.read();
        } else {
            ap_phi_mux_data_1154_V_read1224_phi_phi_fu_89021_p4 = ap_phi_reg_pp0_iter0_data_1154_V_read1224_phi_reg_89017.read();
        }
    } else {
        ap_phi_mux_data_1154_V_read1224_phi_phi_fu_89021_p4 = ap_phi_reg_pp0_iter0_data_1154_V_read1224_phi_reg_89017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1154_V_read1224_rewind_phi_fu_45361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1154_V_read1224_rewind_phi_fu_45361_p6 = data_1154_V_read1224_phi_reg_89017.read();
    } else {
        ap_phi_mux_data_1154_V_read1224_rewind_phi_fu_45361_p6 = data_1154_V_read1224_rewind_reg_45357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1155_V_read1225_phi_phi_fu_89034_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1155_V_read1225_phi_phi_fu_89034_p4 = ap_phi_mux_data_1155_V_read1225_rewind_phi_fu_45375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1155_V_read1225_phi_phi_fu_89034_p4 = data_1155_V_read.read();
        } else {
            ap_phi_mux_data_1155_V_read1225_phi_phi_fu_89034_p4 = ap_phi_reg_pp0_iter0_data_1155_V_read1225_phi_reg_89030.read();
        }
    } else {
        ap_phi_mux_data_1155_V_read1225_phi_phi_fu_89034_p4 = ap_phi_reg_pp0_iter0_data_1155_V_read1225_phi_reg_89030.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1155_V_read1225_rewind_phi_fu_45375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1155_V_read1225_rewind_phi_fu_45375_p6 = data_1155_V_read1225_phi_reg_89030.read();
    } else {
        ap_phi_mux_data_1155_V_read1225_rewind_phi_fu_45375_p6 = data_1155_V_read1225_rewind_reg_45371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1156_V_read1226_phi_phi_fu_89047_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1156_V_read1226_phi_phi_fu_89047_p4 = ap_phi_mux_data_1156_V_read1226_rewind_phi_fu_45389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1156_V_read1226_phi_phi_fu_89047_p4 = data_1156_V_read.read();
        } else {
            ap_phi_mux_data_1156_V_read1226_phi_phi_fu_89047_p4 = ap_phi_reg_pp0_iter0_data_1156_V_read1226_phi_reg_89043.read();
        }
    } else {
        ap_phi_mux_data_1156_V_read1226_phi_phi_fu_89047_p4 = ap_phi_reg_pp0_iter0_data_1156_V_read1226_phi_reg_89043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1156_V_read1226_rewind_phi_fu_45389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1156_V_read1226_rewind_phi_fu_45389_p6 = data_1156_V_read1226_phi_reg_89043.read();
    } else {
        ap_phi_mux_data_1156_V_read1226_rewind_phi_fu_45389_p6 = data_1156_V_read1226_rewind_reg_45385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1157_V_read1227_phi_phi_fu_89060_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1157_V_read1227_phi_phi_fu_89060_p4 = ap_phi_mux_data_1157_V_read1227_rewind_phi_fu_45403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1157_V_read1227_phi_phi_fu_89060_p4 = data_1157_V_read.read();
        } else {
            ap_phi_mux_data_1157_V_read1227_phi_phi_fu_89060_p4 = ap_phi_reg_pp0_iter0_data_1157_V_read1227_phi_reg_89056.read();
        }
    } else {
        ap_phi_mux_data_1157_V_read1227_phi_phi_fu_89060_p4 = ap_phi_reg_pp0_iter0_data_1157_V_read1227_phi_reg_89056.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1157_V_read1227_rewind_phi_fu_45403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1157_V_read1227_rewind_phi_fu_45403_p6 = data_1157_V_read1227_phi_reg_89056.read();
    } else {
        ap_phi_mux_data_1157_V_read1227_rewind_phi_fu_45403_p6 = data_1157_V_read1227_rewind_reg_45399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1158_V_read1228_phi_phi_fu_89073_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1158_V_read1228_phi_phi_fu_89073_p4 = ap_phi_mux_data_1158_V_read1228_rewind_phi_fu_45417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1158_V_read1228_phi_phi_fu_89073_p4 = data_1158_V_read.read();
        } else {
            ap_phi_mux_data_1158_V_read1228_phi_phi_fu_89073_p4 = ap_phi_reg_pp0_iter0_data_1158_V_read1228_phi_reg_89069.read();
        }
    } else {
        ap_phi_mux_data_1158_V_read1228_phi_phi_fu_89073_p4 = ap_phi_reg_pp0_iter0_data_1158_V_read1228_phi_reg_89069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1158_V_read1228_rewind_phi_fu_45417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1158_V_read1228_rewind_phi_fu_45417_p6 = data_1158_V_read1228_phi_reg_89069.read();
    } else {
        ap_phi_mux_data_1158_V_read1228_rewind_phi_fu_45417_p6 = data_1158_V_read1228_rewind_reg_45413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1159_V_read1229_phi_phi_fu_89086_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1159_V_read1229_phi_phi_fu_89086_p4 = ap_phi_mux_data_1159_V_read1229_rewind_phi_fu_45431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1159_V_read1229_phi_phi_fu_89086_p4 = data_1159_V_read.read();
        } else {
            ap_phi_mux_data_1159_V_read1229_phi_phi_fu_89086_p4 = ap_phi_reg_pp0_iter0_data_1159_V_read1229_phi_reg_89082.read();
        }
    } else {
        ap_phi_mux_data_1159_V_read1229_phi_phi_fu_89086_p4 = ap_phi_reg_pp0_iter0_data_1159_V_read1229_phi_reg_89082.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1159_V_read1229_rewind_phi_fu_45431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1159_V_read1229_rewind_phi_fu_45431_p6 = data_1159_V_read1229_phi_reg_89082.read();
    } else {
        ap_phi_mux_data_1159_V_read1229_rewind_phi_fu_45431_p6 = data_1159_V_read1229_rewind_reg_45427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_115_V_read185_phi_phi_fu_75514_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_115_V_read185_phi_phi_fu_75514_p4 = ap_phi_mux_data_115_V_read185_rewind_phi_fu_30815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_115_V_read185_phi_phi_fu_75514_p4 = data_115_V_read.read();
        } else {
            ap_phi_mux_data_115_V_read185_phi_phi_fu_75514_p4 = ap_phi_reg_pp0_iter0_data_115_V_read185_phi_reg_75510.read();
        }
    } else {
        ap_phi_mux_data_115_V_read185_phi_phi_fu_75514_p4 = ap_phi_reg_pp0_iter0_data_115_V_read185_phi_reg_75510.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_115_V_read185_rewind_phi_fu_30815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_115_V_read185_rewind_phi_fu_30815_p6 = data_115_V_read185_phi_reg_75510.read();
    } else {
        ap_phi_mux_data_115_V_read185_rewind_phi_fu_30815_p6 = data_115_V_read185_rewind_reg_30811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1160_V_read1230_phi_phi_fu_89099_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1160_V_read1230_phi_phi_fu_89099_p4 = ap_phi_mux_data_1160_V_read1230_rewind_phi_fu_45445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1160_V_read1230_phi_phi_fu_89099_p4 = data_1160_V_read.read();
        } else {
            ap_phi_mux_data_1160_V_read1230_phi_phi_fu_89099_p4 = ap_phi_reg_pp0_iter0_data_1160_V_read1230_phi_reg_89095.read();
        }
    } else {
        ap_phi_mux_data_1160_V_read1230_phi_phi_fu_89099_p4 = ap_phi_reg_pp0_iter0_data_1160_V_read1230_phi_reg_89095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1160_V_read1230_rewind_phi_fu_45445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1160_V_read1230_rewind_phi_fu_45445_p6 = data_1160_V_read1230_phi_reg_89095.read();
    } else {
        ap_phi_mux_data_1160_V_read1230_rewind_phi_fu_45445_p6 = data_1160_V_read1230_rewind_reg_45441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1161_V_read1231_phi_phi_fu_89112_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1161_V_read1231_phi_phi_fu_89112_p4 = ap_phi_mux_data_1161_V_read1231_rewind_phi_fu_45459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1161_V_read1231_phi_phi_fu_89112_p4 = data_1161_V_read.read();
        } else {
            ap_phi_mux_data_1161_V_read1231_phi_phi_fu_89112_p4 = ap_phi_reg_pp0_iter0_data_1161_V_read1231_phi_reg_89108.read();
        }
    } else {
        ap_phi_mux_data_1161_V_read1231_phi_phi_fu_89112_p4 = ap_phi_reg_pp0_iter0_data_1161_V_read1231_phi_reg_89108.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1161_V_read1231_rewind_phi_fu_45459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1161_V_read1231_rewind_phi_fu_45459_p6 = data_1161_V_read1231_phi_reg_89108.read();
    } else {
        ap_phi_mux_data_1161_V_read1231_rewind_phi_fu_45459_p6 = data_1161_V_read1231_rewind_reg_45455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1162_V_read1232_phi_phi_fu_89125_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1162_V_read1232_phi_phi_fu_89125_p4 = ap_phi_mux_data_1162_V_read1232_rewind_phi_fu_45473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1162_V_read1232_phi_phi_fu_89125_p4 = data_1162_V_read.read();
        } else {
            ap_phi_mux_data_1162_V_read1232_phi_phi_fu_89125_p4 = ap_phi_reg_pp0_iter0_data_1162_V_read1232_phi_reg_89121.read();
        }
    } else {
        ap_phi_mux_data_1162_V_read1232_phi_phi_fu_89125_p4 = ap_phi_reg_pp0_iter0_data_1162_V_read1232_phi_reg_89121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1162_V_read1232_rewind_phi_fu_45473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1162_V_read1232_rewind_phi_fu_45473_p6 = data_1162_V_read1232_phi_reg_89121.read();
    } else {
        ap_phi_mux_data_1162_V_read1232_rewind_phi_fu_45473_p6 = data_1162_V_read1232_rewind_reg_45469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1163_V_read1233_phi_phi_fu_89138_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1163_V_read1233_phi_phi_fu_89138_p4 = ap_phi_mux_data_1163_V_read1233_rewind_phi_fu_45487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1163_V_read1233_phi_phi_fu_89138_p4 = data_1163_V_read.read();
        } else {
            ap_phi_mux_data_1163_V_read1233_phi_phi_fu_89138_p4 = ap_phi_reg_pp0_iter0_data_1163_V_read1233_phi_reg_89134.read();
        }
    } else {
        ap_phi_mux_data_1163_V_read1233_phi_phi_fu_89138_p4 = ap_phi_reg_pp0_iter0_data_1163_V_read1233_phi_reg_89134.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1163_V_read1233_rewind_phi_fu_45487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1163_V_read1233_rewind_phi_fu_45487_p6 = data_1163_V_read1233_phi_reg_89134.read();
    } else {
        ap_phi_mux_data_1163_V_read1233_rewind_phi_fu_45487_p6 = data_1163_V_read1233_rewind_reg_45483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1164_V_read1234_phi_phi_fu_89151_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1164_V_read1234_phi_phi_fu_89151_p4 = ap_phi_mux_data_1164_V_read1234_rewind_phi_fu_45501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1164_V_read1234_phi_phi_fu_89151_p4 = data_1164_V_read.read();
        } else {
            ap_phi_mux_data_1164_V_read1234_phi_phi_fu_89151_p4 = ap_phi_reg_pp0_iter0_data_1164_V_read1234_phi_reg_89147.read();
        }
    } else {
        ap_phi_mux_data_1164_V_read1234_phi_phi_fu_89151_p4 = ap_phi_reg_pp0_iter0_data_1164_V_read1234_phi_reg_89147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1164_V_read1234_rewind_phi_fu_45501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1164_V_read1234_rewind_phi_fu_45501_p6 = data_1164_V_read1234_phi_reg_89147.read();
    } else {
        ap_phi_mux_data_1164_V_read1234_rewind_phi_fu_45501_p6 = data_1164_V_read1234_rewind_reg_45497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1165_V_read1235_phi_phi_fu_89164_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1165_V_read1235_phi_phi_fu_89164_p4 = ap_phi_mux_data_1165_V_read1235_rewind_phi_fu_45515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1165_V_read1235_phi_phi_fu_89164_p4 = data_1165_V_read.read();
        } else {
            ap_phi_mux_data_1165_V_read1235_phi_phi_fu_89164_p4 = ap_phi_reg_pp0_iter0_data_1165_V_read1235_phi_reg_89160.read();
        }
    } else {
        ap_phi_mux_data_1165_V_read1235_phi_phi_fu_89164_p4 = ap_phi_reg_pp0_iter0_data_1165_V_read1235_phi_reg_89160.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1165_V_read1235_rewind_phi_fu_45515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1165_V_read1235_rewind_phi_fu_45515_p6 = data_1165_V_read1235_phi_reg_89160.read();
    } else {
        ap_phi_mux_data_1165_V_read1235_rewind_phi_fu_45515_p6 = data_1165_V_read1235_rewind_reg_45511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1166_V_read1236_phi_phi_fu_89177_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1166_V_read1236_phi_phi_fu_89177_p4 = ap_phi_mux_data_1166_V_read1236_rewind_phi_fu_45529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1166_V_read1236_phi_phi_fu_89177_p4 = data_1166_V_read.read();
        } else {
            ap_phi_mux_data_1166_V_read1236_phi_phi_fu_89177_p4 = ap_phi_reg_pp0_iter0_data_1166_V_read1236_phi_reg_89173.read();
        }
    } else {
        ap_phi_mux_data_1166_V_read1236_phi_phi_fu_89177_p4 = ap_phi_reg_pp0_iter0_data_1166_V_read1236_phi_reg_89173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1166_V_read1236_rewind_phi_fu_45529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1166_V_read1236_rewind_phi_fu_45529_p6 = data_1166_V_read1236_phi_reg_89173.read();
    } else {
        ap_phi_mux_data_1166_V_read1236_rewind_phi_fu_45529_p6 = data_1166_V_read1236_rewind_reg_45525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1167_V_read1237_phi_phi_fu_89190_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1167_V_read1237_phi_phi_fu_89190_p4 = ap_phi_mux_data_1167_V_read1237_rewind_phi_fu_45543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1167_V_read1237_phi_phi_fu_89190_p4 = data_1167_V_read.read();
        } else {
            ap_phi_mux_data_1167_V_read1237_phi_phi_fu_89190_p4 = ap_phi_reg_pp0_iter0_data_1167_V_read1237_phi_reg_89186.read();
        }
    } else {
        ap_phi_mux_data_1167_V_read1237_phi_phi_fu_89190_p4 = ap_phi_reg_pp0_iter0_data_1167_V_read1237_phi_reg_89186.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1167_V_read1237_rewind_phi_fu_45543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1167_V_read1237_rewind_phi_fu_45543_p6 = data_1167_V_read1237_phi_reg_89186.read();
    } else {
        ap_phi_mux_data_1167_V_read1237_rewind_phi_fu_45543_p6 = data_1167_V_read1237_rewind_reg_45539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1168_V_read1238_phi_phi_fu_89203_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1168_V_read1238_phi_phi_fu_89203_p4 = ap_phi_mux_data_1168_V_read1238_rewind_phi_fu_45557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1168_V_read1238_phi_phi_fu_89203_p4 = data_1168_V_read.read();
        } else {
            ap_phi_mux_data_1168_V_read1238_phi_phi_fu_89203_p4 = ap_phi_reg_pp0_iter0_data_1168_V_read1238_phi_reg_89199.read();
        }
    } else {
        ap_phi_mux_data_1168_V_read1238_phi_phi_fu_89203_p4 = ap_phi_reg_pp0_iter0_data_1168_V_read1238_phi_reg_89199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1168_V_read1238_rewind_phi_fu_45557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1168_V_read1238_rewind_phi_fu_45557_p6 = data_1168_V_read1238_phi_reg_89199.read();
    } else {
        ap_phi_mux_data_1168_V_read1238_rewind_phi_fu_45557_p6 = data_1168_V_read1238_rewind_reg_45553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1169_V_read1239_phi_phi_fu_89216_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1169_V_read1239_phi_phi_fu_89216_p4 = ap_phi_mux_data_1169_V_read1239_rewind_phi_fu_45571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1169_V_read1239_phi_phi_fu_89216_p4 = data_1169_V_read.read();
        } else {
            ap_phi_mux_data_1169_V_read1239_phi_phi_fu_89216_p4 = ap_phi_reg_pp0_iter0_data_1169_V_read1239_phi_reg_89212.read();
        }
    } else {
        ap_phi_mux_data_1169_V_read1239_phi_phi_fu_89216_p4 = ap_phi_reg_pp0_iter0_data_1169_V_read1239_phi_reg_89212.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1169_V_read1239_rewind_phi_fu_45571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1169_V_read1239_rewind_phi_fu_45571_p6 = data_1169_V_read1239_phi_reg_89212.read();
    } else {
        ap_phi_mux_data_1169_V_read1239_rewind_phi_fu_45571_p6 = data_1169_V_read1239_rewind_reg_45567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_116_V_read186_phi_phi_fu_75527_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_116_V_read186_phi_phi_fu_75527_p4 = ap_phi_mux_data_116_V_read186_rewind_phi_fu_30829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_116_V_read186_phi_phi_fu_75527_p4 = data_116_V_read.read();
        } else {
            ap_phi_mux_data_116_V_read186_phi_phi_fu_75527_p4 = ap_phi_reg_pp0_iter0_data_116_V_read186_phi_reg_75523.read();
        }
    } else {
        ap_phi_mux_data_116_V_read186_phi_phi_fu_75527_p4 = ap_phi_reg_pp0_iter0_data_116_V_read186_phi_reg_75523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_116_V_read186_rewind_phi_fu_30829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_116_V_read186_rewind_phi_fu_30829_p6 = data_116_V_read186_phi_reg_75523.read();
    } else {
        ap_phi_mux_data_116_V_read186_rewind_phi_fu_30829_p6 = data_116_V_read186_rewind_reg_30825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1170_V_read1240_phi_phi_fu_89229_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1170_V_read1240_phi_phi_fu_89229_p4 = ap_phi_mux_data_1170_V_read1240_rewind_phi_fu_45585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1170_V_read1240_phi_phi_fu_89229_p4 = data_1170_V_read.read();
        } else {
            ap_phi_mux_data_1170_V_read1240_phi_phi_fu_89229_p4 = ap_phi_reg_pp0_iter0_data_1170_V_read1240_phi_reg_89225.read();
        }
    } else {
        ap_phi_mux_data_1170_V_read1240_phi_phi_fu_89229_p4 = ap_phi_reg_pp0_iter0_data_1170_V_read1240_phi_reg_89225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1170_V_read1240_rewind_phi_fu_45585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1170_V_read1240_rewind_phi_fu_45585_p6 = data_1170_V_read1240_phi_reg_89225.read();
    } else {
        ap_phi_mux_data_1170_V_read1240_rewind_phi_fu_45585_p6 = data_1170_V_read1240_rewind_reg_45581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1171_V_read1241_phi_phi_fu_89242_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1171_V_read1241_phi_phi_fu_89242_p4 = ap_phi_mux_data_1171_V_read1241_rewind_phi_fu_45599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1171_V_read1241_phi_phi_fu_89242_p4 = data_1171_V_read.read();
        } else {
            ap_phi_mux_data_1171_V_read1241_phi_phi_fu_89242_p4 = ap_phi_reg_pp0_iter0_data_1171_V_read1241_phi_reg_89238.read();
        }
    } else {
        ap_phi_mux_data_1171_V_read1241_phi_phi_fu_89242_p4 = ap_phi_reg_pp0_iter0_data_1171_V_read1241_phi_reg_89238.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1171_V_read1241_rewind_phi_fu_45599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1171_V_read1241_rewind_phi_fu_45599_p6 = data_1171_V_read1241_phi_reg_89238.read();
    } else {
        ap_phi_mux_data_1171_V_read1241_rewind_phi_fu_45599_p6 = data_1171_V_read1241_rewind_reg_45595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1172_V_read1242_phi_phi_fu_89255_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1172_V_read1242_phi_phi_fu_89255_p4 = ap_phi_mux_data_1172_V_read1242_rewind_phi_fu_45613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1172_V_read1242_phi_phi_fu_89255_p4 = data_1172_V_read.read();
        } else {
            ap_phi_mux_data_1172_V_read1242_phi_phi_fu_89255_p4 = ap_phi_reg_pp0_iter0_data_1172_V_read1242_phi_reg_89251.read();
        }
    } else {
        ap_phi_mux_data_1172_V_read1242_phi_phi_fu_89255_p4 = ap_phi_reg_pp0_iter0_data_1172_V_read1242_phi_reg_89251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1172_V_read1242_rewind_phi_fu_45613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1172_V_read1242_rewind_phi_fu_45613_p6 = data_1172_V_read1242_phi_reg_89251.read();
    } else {
        ap_phi_mux_data_1172_V_read1242_rewind_phi_fu_45613_p6 = data_1172_V_read1242_rewind_reg_45609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1173_V_read1243_phi_phi_fu_89268_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1173_V_read1243_phi_phi_fu_89268_p4 = ap_phi_mux_data_1173_V_read1243_rewind_phi_fu_45627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1173_V_read1243_phi_phi_fu_89268_p4 = data_1173_V_read.read();
        } else {
            ap_phi_mux_data_1173_V_read1243_phi_phi_fu_89268_p4 = ap_phi_reg_pp0_iter0_data_1173_V_read1243_phi_reg_89264.read();
        }
    } else {
        ap_phi_mux_data_1173_V_read1243_phi_phi_fu_89268_p4 = ap_phi_reg_pp0_iter0_data_1173_V_read1243_phi_reg_89264.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1173_V_read1243_rewind_phi_fu_45627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1173_V_read1243_rewind_phi_fu_45627_p6 = data_1173_V_read1243_phi_reg_89264.read();
    } else {
        ap_phi_mux_data_1173_V_read1243_rewind_phi_fu_45627_p6 = data_1173_V_read1243_rewind_reg_45623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1174_V_read1244_phi_phi_fu_89281_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1174_V_read1244_phi_phi_fu_89281_p4 = ap_phi_mux_data_1174_V_read1244_rewind_phi_fu_45641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1174_V_read1244_phi_phi_fu_89281_p4 = data_1174_V_read.read();
        } else {
            ap_phi_mux_data_1174_V_read1244_phi_phi_fu_89281_p4 = ap_phi_reg_pp0_iter0_data_1174_V_read1244_phi_reg_89277.read();
        }
    } else {
        ap_phi_mux_data_1174_V_read1244_phi_phi_fu_89281_p4 = ap_phi_reg_pp0_iter0_data_1174_V_read1244_phi_reg_89277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1174_V_read1244_rewind_phi_fu_45641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1174_V_read1244_rewind_phi_fu_45641_p6 = data_1174_V_read1244_phi_reg_89277.read();
    } else {
        ap_phi_mux_data_1174_V_read1244_rewind_phi_fu_45641_p6 = data_1174_V_read1244_rewind_reg_45637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1175_V_read1245_phi_phi_fu_89294_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1175_V_read1245_phi_phi_fu_89294_p4 = ap_phi_mux_data_1175_V_read1245_rewind_phi_fu_45655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1175_V_read1245_phi_phi_fu_89294_p4 = data_1175_V_read.read();
        } else {
            ap_phi_mux_data_1175_V_read1245_phi_phi_fu_89294_p4 = ap_phi_reg_pp0_iter0_data_1175_V_read1245_phi_reg_89290.read();
        }
    } else {
        ap_phi_mux_data_1175_V_read1245_phi_phi_fu_89294_p4 = ap_phi_reg_pp0_iter0_data_1175_V_read1245_phi_reg_89290.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1175_V_read1245_rewind_phi_fu_45655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1175_V_read1245_rewind_phi_fu_45655_p6 = data_1175_V_read1245_phi_reg_89290.read();
    } else {
        ap_phi_mux_data_1175_V_read1245_rewind_phi_fu_45655_p6 = data_1175_V_read1245_rewind_reg_45651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1176_V_read1246_phi_phi_fu_89307_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1176_V_read1246_phi_phi_fu_89307_p4 = ap_phi_mux_data_1176_V_read1246_rewind_phi_fu_45669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1176_V_read1246_phi_phi_fu_89307_p4 = data_1176_V_read.read();
        } else {
            ap_phi_mux_data_1176_V_read1246_phi_phi_fu_89307_p4 = ap_phi_reg_pp0_iter0_data_1176_V_read1246_phi_reg_89303.read();
        }
    } else {
        ap_phi_mux_data_1176_V_read1246_phi_phi_fu_89307_p4 = ap_phi_reg_pp0_iter0_data_1176_V_read1246_phi_reg_89303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1176_V_read1246_rewind_phi_fu_45669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1176_V_read1246_rewind_phi_fu_45669_p6 = data_1176_V_read1246_phi_reg_89303.read();
    } else {
        ap_phi_mux_data_1176_V_read1246_rewind_phi_fu_45669_p6 = data_1176_V_read1246_rewind_reg_45665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1177_V_read1247_phi_phi_fu_89320_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1177_V_read1247_phi_phi_fu_89320_p4 = ap_phi_mux_data_1177_V_read1247_rewind_phi_fu_45683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1177_V_read1247_phi_phi_fu_89320_p4 = data_1177_V_read.read();
        } else {
            ap_phi_mux_data_1177_V_read1247_phi_phi_fu_89320_p4 = ap_phi_reg_pp0_iter0_data_1177_V_read1247_phi_reg_89316.read();
        }
    } else {
        ap_phi_mux_data_1177_V_read1247_phi_phi_fu_89320_p4 = ap_phi_reg_pp0_iter0_data_1177_V_read1247_phi_reg_89316.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1177_V_read1247_rewind_phi_fu_45683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1177_V_read1247_rewind_phi_fu_45683_p6 = data_1177_V_read1247_phi_reg_89316.read();
    } else {
        ap_phi_mux_data_1177_V_read1247_rewind_phi_fu_45683_p6 = data_1177_V_read1247_rewind_reg_45679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1178_V_read1248_phi_phi_fu_89333_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1178_V_read1248_phi_phi_fu_89333_p4 = ap_phi_mux_data_1178_V_read1248_rewind_phi_fu_45697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1178_V_read1248_phi_phi_fu_89333_p4 = data_1178_V_read.read();
        } else {
            ap_phi_mux_data_1178_V_read1248_phi_phi_fu_89333_p4 = ap_phi_reg_pp0_iter0_data_1178_V_read1248_phi_reg_89329.read();
        }
    } else {
        ap_phi_mux_data_1178_V_read1248_phi_phi_fu_89333_p4 = ap_phi_reg_pp0_iter0_data_1178_V_read1248_phi_reg_89329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1178_V_read1248_rewind_phi_fu_45697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1178_V_read1248_rewind_phi_fu_45697_p6 = data_1178_V_read1248_phi_reg_89329.read();
    } else {
        ap_phi_mux_data_1178_V_read1248_rewind_phi_fu_45697_p6 = data_1178_V_read1248_rewind_reg_45693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1179_V_read1249_phi_phi_fu_89346_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1179_V_read1249_phi_phi_fu_89346_p4 = ap_phi_mux_data_1179_V_read1249_rewind_phi_fu_45711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1179_V_read1249_phi_phi_fu_89346_p4 = data_1179_V_read.read();
        } else {
            ap_phi_mux_data_1179_V_read1249_phi_phi_fu_89346_p4 = ap_phi_reg_pp0_iter0_data_1179_V_read1249_phi_reg_89342.read();
        }
    } else {
        ap_phi_mux_data_1179_V_read1249_phi_phi_fu_89346_p4 = ap_phi_reg_pp0_iter0_data_1179_V_read1249_phi_reg_89342.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1179_V_read1249_rewind_phi_fu_45711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1179_V_read1249_rewind_phi_fu_45711_p6 = data_1179_V_read1249_phi_reg_89342.read();
    } else {
        ap_phi_mux_data_1179_V_read1249_rewind_phi_fu_45711_p6 = data_1179_V_read1249_rewind_reg_45707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_117_V_read187_phi_phi_fu_75540_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_117_V_read187_phi_phi_fu_75540_p4 = ap_phi_mux_data_117_V_read187_rewind_phi_fu_30843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_117_V_read187_phi_phi_fu_75540_p4 = data_117_V_read.read();
        } else {
            ap_phi_mux_data_117_V_read187_phi_phi_fu_75540_p4 = ap_phi_reg_pp0_iter0_data_117_V_read187_phi_reg_75536.read();
        }
    } else {
        ap_phi_mux_data_117_V_read187_phi_phi_fu_75540_p4 = ap_phi_reg_pp0_iter0_data_117_V_read187_phi_reg_75536.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_117_V_read187_rewind_phi_fu_30843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_117_V_read187_rewind_phi_fu_30843_p6 = data_117_V_read187_phi_reg_75536.read();
    } else {
        ap_phi_mux_data_117_V_read187_rewind_phi_fu_30843_p6 = data_117_V_read187_rewind_reg_30839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1180_V_read1250_phi_phi_fu_89359_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1180_V_read1250_phi_phi_fu_89359_p4 = ap_phi_mux_data_1180_V_read1250_rewind_phi_fu_45725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1180_V_read1250_phi_phi_fu_89359_p4 = data_1180_V_read.read();
        } else {
            ap_phi_mux_data_1180_V_read1250_phi_phi_fu_89359_p4 = ap_phi_reg_pp0_iter0_data_1180_V_read1250_phi_reg_89355.read();
        }
    } else {
        ap_phi_mux_data_1180_V_read1250_phi_phi_fu_89359_p4 = ap_phi_reg_pp0_iter0_data_1180_V_read1250_phi_reg_89355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1180_V_read1250_rewind_phi_fu_45725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1180_V_read1250_rewind_phi_fu_45725_p6 = data_1180_V_read1250_phi_reg_89355.read();
    } else {
        ap_phi_mux_data_1180_V_read1250_rewind_phi_fu_45725_p6 = data_1180_V_read1250_rewind_reg_45721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1181_V_read1251_phi_phi_fu_89372_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1181_V_read1251_phi_phi_fu_89372_p4 = ap_phi_mux_data_1181_V_read1251_rewind_phi_fu_45739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1181_V_read1251_phi_phi_fu_89372_p4 = data_1181_V_read.read();
        } else {
            ap_phi_mux_data_1181_V_read1251_phi_phi_fu_89372_p4 = ap_phi_reg_pp0_iter0_data_1181_V_read1251_phi_reg_89368.read();
        }
    } else {
        ap_phi_mux_data_1181_V_read1251_phi_phi_fu_89372_p4 = ap_phi_reg_pp0_iter0_data_1181_V_read1251_phi_reg_89368.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1181_V_read1251_rewind_phi_fu_45739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1181_V_read1251_rewind_phi_fu_45739_p6 = data_1181_V_read1251_phi_reg_89368.read();
    } else {
        ap_phi_mux_data_1181_V_read1251_rewind_phi_fu_45739_p6 = data_1181_V_read1251_rewind_reg_45735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1182_V_read1252_phi_phi_fu_89385_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1182_V_read1252_phi_phi_fu_89385_p4 = ap_phi_mux_data_1182_V_read1252_rewind_phi_fu_45753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1182_V_read1252_phi_phi_fu_89385_p4 = data_1182_V_read.read();
        } else {
            ap_phi_mux_data_1182_V_read1252_phi_phi_fu_89385_p4 = ap_phi_reg_pp0_iter0_data_1182_V_read1252_phi_reg_89381.read();
        }
    } else {
        ap_phi_mux_data_1182_V_read1252_phi_phi_fu_89385_p4 = ap_phi_reg_pp0_iter0_data_1182_V_read1252_phi_reg_89381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1182_V_read1252_rewind_phi_fu_45753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1182_V_read1252_rewind_phi_fu_45753_p6 = data_1182_V_read1252_phi_reg_89381.read();
    } else {
        ap_phi_mux_data_1182_V_read1252_rewind_phi_fu_45753_p6 = data_1182_V_read1252_rewind_reg_45749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1183_V_read1253_phi_phi_fu_89398_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1183_V_read1253_phi_phi_fu_89398_p4 = ap_phi_mux_data_1183_V_read1253_rewind_phi_fu_45767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1183_V_read1253_phi_phi_fu_89398_p4 = data_1183_V_read.read();
        } else {
            ap_phi_mux_data_1183_V_read1253_phi_phi_fu_89398_p4 = ap_phi_reg_pp0_iter0_data_1183_V_read1253_phi_reg_89394.read();
        }
    } else {
        ap_phi_mux_data_1183_V_read1253_phi_phi_fu_89398_p4 = ap_phi_reg_pp0_iter0_data_1183_V_read1253_phi_reg_89394.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1183_V_read1253_rewind_phi_fu_45767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1183_V_read1253_rewind_phi_fu_45767_p6 = data_1183_V_read1253_phi_reg_89394.read();
    } else {
        ap_phi_mux_data_1183_V_read1253_rewind_phi_fu_45767_p6 = data_1183_V_read1253_rewind_reg_45763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1184_V_read1254_phi_phi_fu_89411_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1184_V_read1254_phi_phi_fu_89411_p4 = ap_phi_mux_data_1184_V_read1254_rewind_phi_fu_45781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1184_V_read1254_phi_phi_fu_89411_p4 = data_1184_V_read.read();
        } else {
            ap_phi_mux_data_1184_V_read1254_phi_phi_fu_89411_p4 = ap_phi_reg_pp0_iter0_data_1184_V_read1254_phi_reg_89407.read();
        }
    } else {
        ap_phi_mux_data_1184_V_read1254_phi_phi_fu_89411_p4 = ap_phi_reg_pp0_iter0_data_1184_V_read1254_phi_reg_89407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1184_V_read1254_rewind_phi_fu_45781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1184_V_read1254_rewind_phi_fu_45781_p6 = data_1184_V_read1254_phi_reg_89407.read();
    } else {
        ap_phi_mux_data_1184_V_read1254_rewind_phi_fu_45781_p6 = data_1184_V_read1254_rewind_reg_45777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1185_V_read1255_phi_phi_fu_89424_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1185_V_read1255_phi_phi_fu_89424_p4 = ap_phi_mux_data_1185_V_read1255_rewind_phi_fu_45795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1185_V_read1255_phi_phi_fu_89424_p4 = data_1185_V_read.read();
        } else {
            ap_phi_mux_data_1185_V_read1255_phi_phi_fu_89424_p4 = ap_phi_reg_pp0_iter0_data_1185_V_read1255_phi_reg_89420.read();
        }
    } else {
        ap_phi_mux_data_1185_V_read1255_phi_phi_fu_89424_p4 = ap_phi_reg_pp0_iter0_data_1185_V_read1255_phi_reg_89420.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1185_V_read1255_rewind_phi_fu_45795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1185_V_read1255_rewind_phi_fu_45795_p6 = data_1185_V_read1255_phi_reg_89420.read();
    } else {
        ap_phi_mux_data_1185_V_read1255_rewind_phi_fu_45795_p6 = data_1185_V_read1255_rewind_reg_45791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1186_V_read1256_phi_phi_fu_89437_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1186_V_read1256_phi_phi_fu_89437_p4 = ap_phi_mux_data_1186_V_read1256_rewind_phi_fu_45809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1186_V_read1256_phi_phi_fu_89437_p4 = data_1186_V_read.read();
        } else {
            ap_phi_mux_data_1186_V_read1256_phi_phi_fu_89437_p4 = ap_phi_reg_pp0_iter0_data_1186_V_read1256_phi_reg_89433.read();
        }
    } else {
        ap_phi_mux_data_1186_V_read1256_phi_phi_fu_89437_p4 = ap_phi_reg_pp0_iter0_data_1186_V_read1256_phi_reg_89433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1186_V_read1256_rewind_phi_fu_45809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1186_V_read1256_rewind_phi_fu_45809_p6 = data_1186_V_read1256_phi_reg_89433.read();
    } else {
        ap_phi_mux_data_1186_V_read1256_rewind_phi_fu_45809_p6 = data_1186_V_read1256_rewind_reg_45805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1187_V_read1257_phi_phi_fu_89450_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1187_V_read1257_phi_phi_fu_89450_p4 = ap_phi_mux_data_1187_V_read1257_rewind_phi_fu_45823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1187_V_read1257_phi_phi_fu_89450_p4 = data_1187_V_read.read();
        } else {
            ap_phi_mux_data_1187_V_read1257_phi_phi_fu_89450_p4 = ap_phi_reg_pp0_iter0_data_1187_V_read1257_phi_reg_89446.read();
        }
    } else {
        ap_phi_mux_data_1187_V_read1257_phi_phi_fu_89450_p4 = ap_phi_reg_pp0_iter0_data_1187_V_read1257_phi_reg_89446.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1187_V_read1257_rewind_phi_fu_45823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1187_V_read1257_rewind_phi_fu_45823_p6 = data_1187_V_read1257_phi_reg_89446.read();
    } else {
        ap_phi_mux_data_1187_V_read1257_rewind_phi_fu_45823_p6 = data_1187_V_read1257_rewind_reg_45819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1188_V_read1258_phi_phi_fu_89463_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1188_V_read1258_phi_phi_fu_89463_p4 = ap_phi_mux_data_1188_V_read1258_rewind_phi_fu_45837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1188_V_read1258_phi_phi_fu_89463_p4 = data_1188_V_read.read();
        } else {
            ap_phi_mux_data_1188_V_read1258_phi_phi_fu_89463_p4 = ap_phi_reg_pp0_iter0_data_1188_V_read1258_phi_reg_89459.read();
        }
    } else {
        ap_phi_mux_data_1188_V_read1258_phi_phi_fu_89463_p4 = ap_phi_reg_pp0_iter0_data_1188_V_read1258_phi_reg_89459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1188_V_read1258_rewind_phi_fu_45837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1188_V_read1258_rewind_phi_fu_45837_p6 = data_1188_V_read1258_phi_reg_89459.read();
    } else {
        ap_phi_mux_data_1188_V_read1258_rewind_phi_fu_45837_p6 = data_1188_V_read1258_rewind_reg_45833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1189_V_read1259_phi_phi_fu_89476_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1189_V_read1259_phi_phi_fu_89476_p4 = ap_phi_mux_data_1189_V_read1259_rewind_phi_fu_45851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1189_V_read1259_phi_phi_fu_89476_p4 = data_1189_V_read.read();
        } else {
            ap_phi_mux_data_1189_V_read1259_phi_phi_fu_89476_p4 = ap_phi_reg_pp0_iter0_data_1189_V_read1259_phi_reg_89472.read();
        }
    } else {
        ap_phi_mux_data_1189_V_read1259_phi_phi_fu_89476_p4 = ap_phi_reg_pp0_iter0_data_1189_V_read1259_phi_reg_89472.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1189_V_read1259_rewind_phi_fu_45851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1189_V_read1259_rewind_phi_fu_45851_p6 = data_1189_V_read1259_phi_reg_89472.read();
    } else {
        ap_phi_mux_data_1189_V_read1259_rewind_phi_fu_45851_p6 = data_1189_V_read1259_rewind_reg_45847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_118_V_read188_phi_phi_fu_75553_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_118_V_read188_phi_phi_fu_75553_p4 = ap_phi_mux_data_118_V_read188_rewind_phi_fu_30857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_118_V_read188_phi_phi_fu_75553_p4 = data_118_V_read.read();
        } else {
            ap_phi_mux_data_118_V_read188_phi_phi_fu_75553_p4 = ap_phi_reg_pp0_iter0_data_118_V_read188_phi_reg_75549.read();
        }
    } else {
        ap_phi_mux_data_118_V_read188_phi_phi_fu_75553_p4 = ap_phi_reg_pp0_iter0_data_118_V_read188_phi_reg_75549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_118_V_read188_rewind_phi_fu_30857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_118_V_read188_rewind_phi_fu_30857_p6 = data_118_V_read188_phi_reg_75549.read();
    } else {
        ap_phi_mux_data_118_V_read188_rewind_phi_fu_30857_p6 = data_118_V_read188_rewind_reg_30853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1190_V_read1260_phi_phi_fu_89489_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1190_V_read1260_phi_phi_fu_89489_p4 = ap_phi_mux_data_1190_V_read1260_rewind_phi_fu_45865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1190_V_read1260_phi_phi_fu_89489_p4 = data_1190_V_read.read();
        } else {
            ap_phi_mux_data_1190_V_read1260_phi_phi_fu_89489_p4 = ap_phi_reg_pp0_iter0_data_1190_V_read1260_phi_reg_89485.read();
        }
    } else {
        ap_phi_mux_data_1190_V_read1260_phi_phi_fu_89489_p4 = ap_phi_reg_pp0_iter0_data_1190_V_read1260_phi_reg_89485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1190_V_read1260_rewind_phi_fu_45865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1190_V_read1260_rewind_phi_fu_45865_p6 = data_1190_V_read1260_phi_reg_89485.read();
    } else {
        ap_phi_mux_data_1190_V_read1260_rewind_phi_fu_45865_p6 = data_1190_V_read1260_rewind_reg_45861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1191_V_read1261_phi_phi_fu_89502_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1191_V_read1261_phi_phi_fu_89502_p4 = ap_phi_mux_data_1191_V_read1261_rewind_phi_fu_45879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1191_V_read1261_phi_phi_fu_89502_p4 = data_1191_V_read.read();
        } else {
            ap_phi_mux_data_1191_V_read1261_phi_phi_fu_89502_p4 = ap_phi_reg_pp0_iter0_data_1191_V_read1261_phi_reg_89498.read();
        }
    } else {
        ap_phi_mux_data_1191_V_read1261_phi_phi_fu_89502_p4 = ap_phi_reg_pp0_iter0_data_1191_V_read1261_phi_reg_89498.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1191_V_read1261_rewind_phi_fu_45879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1191_V_read1261_rewind_phi_fu_45879_p6 = data_1191_V_read1261_phi_reg_89498.read();
    } else {
        ap_phi_mux_data_1191_V_read1261_rewind_phi_fu_45879_p6 = data_1191_V_read1261_rewind_reg_45875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1192_V_read1262_phi_phi_fu_89515_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1192_V_read1262_phi_phi_fu_89515_p4 = ap_phi_mux_data_1192_V_read1262_rewind_phi_fu_45893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1192_V_read1262_phi_phi_fu_89515_p4 = data_1192_V_read.read();
        } else {
            ap_phi_mux_data_1192_V_read1262_phi_phi_fu_89515_p4 = ap_phi_reg_pp0_iter0_data_1192_V_read1262_phi_reg_89511.read();
        }
    } else {
        ap_phi_mux_data_1192_V_read1262_phi_phi_fu_89515_p4 = ap_phi_reg_pp0_iter0_data_1192_V_read1262_phi_reg_89511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1192_V_read1262_rewind_phi_fu_45893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1192_V_read1262_rewind_phi_fu_45893_p6 = data_1192_V_read1262_phi_reg_89511.read();
    } else {
        ap_phi_mux_data_1192_V_read1262_rewind_phi_fu_45893_p6 = data_1192_V_read1262_rewind_reg_45889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1193_V_read1263_phi_phi_fu_89528_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1193_V_read1263_phi_phi_fu_89528_p4 = ap_phi_mux_data_1193_V_read1263_rewind_phi_fu_45907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1193_V_read1263_phi_phi_fu_89528_p4 = data_1193_V_read.read();
        } else {
            ap_phi_mux_data_1193_V_read1263_phi_phi_fu_89528_p4 = ap_phi_reg_pp0_iter0_data_1193_V_read1263_phi_reg_89524.read();
        }
    } else {
        ap_phi_mux_data_1193_V_read1263_phi_phi_fu_89528_p4 = ap_phi_reg_pp0_iter0_data_1193_V_read1263_phi_reg_89524.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1193_V_read1263_rewind_phi_fu_45907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1193_V_read1263_rewind_phi_fu_45907_p6 = data_1193_V_read1263_phi_reg_89524.read();
    } else {
        ap_phi_mux_data_1193_V_read1263_rewind_phi_fu_45907_p6 = data_1193_V_read1263_rewind_reg_45903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1194_V_read1264_phi_phi_fu_89541_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1194_V_read1264_phi_phi_fu_89541_p4 = ap_phi_mux_data_1194_V_read1264_rewind_phi_fu_45921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1194_V_read1264_phi_phi_fu_89541_p4 = data_1194_V_read.read();
        } else {
            ap_phi_mux_data_1194_V_read1264_phi_phi_fu_89541_p4 = ap_phi_reg_pp0_iter0_data_1194_V_read1264_phi_reg_89537.read();
        }
    } else {
        ap_phi_mux_data_1194_V_read1264_phi_phi_fu_89541_p4 = ap_phi_reg_pp0_iter0_data_1194_V_read1264_phi_reg_89537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1194_V_read1264_rewind_phi_fu_45921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1194_V_read1264_rewind_phi_fu_45921_p6 = data_1194_V_read1264_phi_reg_89537.read();
    } else {
        ap_phi_mux_data_1194_V_read1264_rewind_phi_fu_45921_p6 = data_1194_V_read1264_rewind_reg_45917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1195_V_read1265_phi_phi_fu_89554_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1195_V_read1265_phi_phi_fu_89554_p4 = ap_phi_mux_data_1195_V_read1265_rewind_phi_fu_45935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1195_V_read1265_phi_phi_fu_89554_p4 = data_1195_V_read.read();
        } else {
            ap_phi_mux_data_1195_V_read1265_phi_phi_fu_89554_p4 = ap_phi_reg_pp0_iter0_data_1195_V_read1265_phi_reg_89550.read();
        }
    } else {
        ap_phi_mux_data_1195_V_read1265_phi_phi_fu_89554_p4 = ap_phi_reg_pp0_iter0_data_1195_V_read1265_phi_reg_89550.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1195_V_read1265_rewind_phi_fu_45935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1195_V_read1265_rewind_phi_fu_45935_p6 = data_1195_V_read1265_phi_reg_89550.read();
    } else {
        ap_phi_mux_data_1195_V_read1265_rewind_phi_fu_45935_p6 = data_1195_V_read1265_rewind_reg_45931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1196_V_read1266_phi_phi_fu_89567_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1196_V_read1266_phi_phi_fu_89567_p4 = ap_phi_mux_data_1196_V_read1266_rewind_phi_fu_45949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1196_V_read1266_phi_phi_fu_89567_p4 = data_1196_V_read.read();
        } else {
            ap_phi_mux_data_1196_V_read1266_phi_phi_fu_89567_p4 = ap_phi_reg_pp0_iter0_data_1196_V_read1266_phi_reg_89563.read();
        }
    } else {
        ap_phi_mux_data_1196_V_read1266_phi_phi_fu_89567_p4 = ap_phi_reg_pp0_iter0_data_1196_V_read1266_phi_reg_89563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1196_V_read1266_rewind_phi_fu_45949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1196_V_read1266_rewind_phi_fu_45949_p6 = data_1196_V_read1266_phi_reg_89563.read();
    } else {
        ap_phi_mux_data_1196_V_read1266_rewind_phi_fu_45949_p6 = data_1196_V_read1266_rewind_reg_45945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1197_V_read1267_phi_phi_fu_89580_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1197_V_read1267_phi_phi_fu_89580_p4 = ap_phi_mux_data_1197_V_read1267_rewind_phi_fu_45963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1197_V_read1267_phi_phi_fu_89580_p4 = data_1197_V_read.read();
        } else {
            ap_phi_mux_data_1197_V_read1267_phi_phi_fu_89580_p4 = ap_phi_reg_pp0_iter0_data_1197_V_read1267_phi_reg_89576.read();
        }
    } else {
        ap_phi_mux_data_1197_V_read1267_phi_phi_fu_89580_p4 = ap_phi_reg_pp0_iter0_data_1197_V_read1267_phi_reg_89576.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1197_V_read1267_rewind_phi_fu_45963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1197_V_read1267_rewind_phi_fu_45963_p6 = data_1197_V_read1267_phi_reg_89576.read();
    } else {
        ap_phi_mux_data_1197_V_read1267_rewind_phi_fu_45963_p6 = data_1197_V_read1267_rewind_reg_45959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1198_V_read1268_phi_phi_fu_89593_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1198_V_read1268_phi_phi_fu_89593_p4 = ap_phi_mux_data_1198_V_read1268_rewind_phi_fu_45977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1198_V_read1268_phi_phi_fu_89593_p4 = data_1198_V_read.read();
        } else {
            ap_phi_mux_data_1198_V_read1268_phi_phi_fu_89593_p4 = ap_phi_reg_pp0_iter0_data_1198_V_read1268_phi_reg_89589.read();
        }
    } else {
        ap_phi_mux_data_1198_V_read1268_phi_phi_fu_89593_p4 = ap_phi_reg_pp0_iter0_data_1198_V_read1268_phi_reg_89589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1198_V_read1268_rewind_phi_fu_45977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1198_V_read1268_rewind_phi_fu_45977_p6 = data_1198_V_read1268_phi_reg_89589.read();
    } else {
        ap_phi_mux_data_1198_V_read1268_rewind_phi_fu_45977_p6 = data_1198_V_read1268_rewind_reg_45973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1199_V_read1269_phi_phi_fu_89606_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1199_V_read1269_phi_phi_fu_89606_p4 = ap_phi_mux_data_1199_V_read1269_rewind_phi_fu_45991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1199_V_read1269_phi_phi_fu_89606_p4 = data_1199_V_read.read();
        } else {
            ap_phi_mux_data_1199_V_read1269_phi_phi_fu_89606_p4 = ap_phi_reg_pp0_iter0_data_1199_V_read1269_phi_reg_89602.read();
        }
    } else {
        ap_phi_mux_data_1199_V_read1269_phi_phi_fu_89606_p4 = ap_phi_reg_pp0_iter0_data_1199_V_read1269_phi_reg_89602.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1199_V_read1269_rewind_phi_fu_45991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1199_V_read1269_rewind_phi_fu_45991_p6 = data_1199_V_read1269_phi_reg_89602.read();
    } else {
        ap_phi_mux_data_1199_V_read1269_rewind_phi_fu_45991_p6 = data_1199_V_read1269_rewind_reg_45987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_119_V_read189_phi_phi_fu_75566_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_119_V_read189_phi_phi_fu_75566_p4 = ap_phi_mux_data_119_V_read189_rewind_phi_fu_30871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_119_V_read189_phi_phi_fu_75566_p4 = data_119_V_read.read();
        } else {
            ap_phi_mux_data_119_V_read189_phi_phi_fu_75566_p4 = ap_phi_reg_pp0_iter0_data_119_V_read189_phi_reg_75562.read();
        }
    } else {
        ap_phi_mux_data_119_V_read189_phi_phi_fu_75566_p4 = ap_phi_reg_pp0_iter0_data_119_V_read189_phi_reg_75562.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_119_V_read189_rewind_phi_fu_30871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_119_V_read189_rewind_phi_fu_30871_p6 = data_119_V_read189_phi_reg_75562.read();
    } else {
        ap_phi_mux_data_119_V_read189_rewind_phi_fu_30871_p6 = data_119_V_read189_rewind_reg_30867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_11_V_read81_phi_phi_fu_74162_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_11_V_read81_phi_phi_fu_74162_p4 = ap_phi_mux_data_11_V_read81_rewind_phi_fu_29359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_11_V_read81_phi_phi_fu_74162_p4 = data_11_V_read.read();
        } else {
            ap_phi_mux_data_11_V_read81_phi_phi_fu_74162_p4 = ap_phi_reg_pp0_iter0_data_11_V_read81_phi_reg_74158.read();
        }
    } else {
        ap_phi_mux_data_11_V_read81_phi_phi_fu_74162_p4 = ap_phi_reg_pp0_iter0_data_11_V_read81_phi_reg_74158.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_11_V_read81_rewind_phi_fu_29359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_11_V_read81_rewind_phi_fu_29359_p6 = data_11_V_read81_phi_reg_74158.read();
    } else {
        ap_phi_mux_data_11_V_read81_rewind_phi_fu_29359_p6 = data_11_V_read81_rewind_reg_29355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1200_V_read1270_phi_phi_fu_89619_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1200_V_read1270_phi_phi_fu_89619_p4 = ap_phi_mux_data_1200_V_read1270_rewind_phi_fu_46005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1200_V_read1270_phi_phi_fu_89619_p4 = data_1200_V_read.read();
        } else {
            ap_phi_mux_data_1200_V_read1270_phi_phi_fu_89619_p4 = ap_phi_reg_pp0_iter0_data_1200_V_read1270_phi_reg_89615.read();
        }
    } else {
        ap_phi_mux_data_1200_V_read1270_phi_phi_fu_89619_p4 = ap_phi_reg_pp0_iter0_data_1200_V_read1270_phi_reg_89615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1200_V_read1270_rewind_phi_fu_46005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1200_V_read1270_rewind_phi_fu_46005_p6 = data_1200_V_read1270_phi_reg_89615.read();
    } else {
        ap_phi_mux_data_1200_V_read1270_rewind_phi_fu_46005_p6 = data_1200_V_read1270_rewind_reg_46001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1201_V_read1271_phi_phi_fu_89632_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1201_V_read1271_phi_phi_fu_89632_p4 = ap_phi_mux_data_1201_V_read1271_rewind_phi_fu_46019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1201_V_read1271_phi_phi_fu_89632_p4 = data_1201_V_read.read();
        } else {
            ap_phi_mux_data_1201_V_read1271_phi_phi_fu_89632_p4 = ap_phi_reg_pp0_iter0_data_1201_V_read1271_phi_reg_89628.read();
        }
    } else {
        ap_phi_mux_data_1201_V_read1271_phi_phi_fu_89632_p4 = ap_phi_reg_pp0_iter0_data_1201_V_read1271_phi_reg_89628.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1201_V_read1271_rewind_phi_fu_46019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1201_V_read1271_rewind_phi_fu_46019_p6 = data_1201_V_read1271_phi_reg_89628.read();
    } else {
        ap_phi_mux_data_1201_V_read1271_rewind_phi_fu_46019_p6 = data_1201_V_read1271_rewind_reg_46015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1202_V_read1272_phi_phi_fu_89645_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1202_V_read1272_phi_phi_fu_89645_p4 = ap_phi_mux_data_1202_V_read1272_rewind_phi_fu_46033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1202_V_read1272_phi_phi_fu_89645_p4 = data_1202_V_read.read();
        } else {
            ap_phi_mux_data_1202_V_read1272_phi_phi_fu_89645_p4 = ap_phi_reg_pp0_iter0_data_1202_V_read1272_phi_reg_89641.read();
        }
    } else {
        ap_phi_mux_data_1202_V_read1272_phi_phi_fu_89645_p4 = ap_phi_reg_pp0_iter0_data_1202_V_read1272_phi_reg_89641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1202_V_read1272_rewind_phi_fu_46033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1202_V_read1272_rewind_phi_fu_46033_p6 = data_1202_V_read1272_phi_reg_89641.read();
    } else {
        ap_phi_mux_data_1202_V_read1272_rewind_phi_fu_46033_p6 = data_1202_V_read1272_rewind_reg_46029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1203_V_read1273_phi_phi_fu_89658_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1203_V_read1273_phi_phi_fu_89658_p4 = ap_phi_mux_data_1203_V_read1273_rewind_phi_fu_46047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1203_V_read1273_phi_phi_fu_89658_p4 = data_1203_V_read.read();
        } else {
            ap_phi_mux_data_1203_V_read1273_phi_phi_fu_89658_p4 = ap_phi_reg_pp0_iter0_data_1203_V_read1273_phi_reg_89654.read();
        }
    } else {
        ap_phi_mux_data_1203_V_read1273_phi_phi_fu_89658_p4 = ap_phi_reg_pp0_iter0_data_1203_V_read1273_phi_reg_89654.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1203_V_read1273_rewind_phi_fu_46047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1203_V_read1273_rewind_phi_fu_46047_p6 = data_1203_V_read1273_phi_reg_89654.read();
    } else {
        ap_phi_mux_data_1203_V_read1273_rewind_phi_fu_46047_p6 = data_1203_V_read1273_rewind_reg_46043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1204_V_read1274_phi_phi_fu_89671_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1204_V_read1274_phi_phi_fu_89671_p4 = ap_phi_mux_data_1204_V_read1274_rewind_phi_fu_46061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1204_V_read1274_phi_phi_fu_89671_p4 = data_1204_V_read.read();
        } else {
            ap_phi_mux_data_1204_V_read1274_phi_phi_fu_89671_p4 = ap_phi_reg_pp0_iter0_data_1204_V_read1274_phi_reg_89667.read();
        }
    } else {
        ap_phi_mux_data_1204_V_read1274_phi_phi_fu_89671_p4 = ap_phi_reg_pp0_iter0_data_1204_V_read1274_phi_reg_89667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1204_V_read1274_rewind_phi_fu_46061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1204_V_read1274_rewind_phi_fu_46061_p6 = data_1204_V_read1274_phi_reg_89667.read();
    } else {
        ap_phi_mux_data_1204_V_read1274_rewind_phi_fu_46061_p6 = data_1204_V_read1274_rewind_reg_46057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1205_V_read1275_phi_phi_fu_89684_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1205_V_read1275_phi_phi_fu_89684_p4 = ap_phi_mux_data_1205_V_read1275_rewind_phi_fu_46075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1205_V_read1275_phi_phi_fu_89684_p4 = data_1205_V_read.read();
        } else {
            ap_phi_mux_data_1205_V_read1275_phi_phi_fu_89684_p4 = ap_phi_reg_pp0_iter0_data_1205_V_read1275_phi_reg_89680.read();
        }
    } else {
        ap_phi_mux_data_1205_V_read1275_phi_phi_fu_89684_p4 = ap_phi_reg_pp0_iter0_data_1205_V_read1275_phi_reg_89680.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1205_V_read1275_rewind_phi_fu_46075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1205_V_read1275_rewind_phi_fu_46075_p6 = data_1205_V_read1275_phi_reg_89680.read();
    } else {
        ap_phi_mux_data_1205_V_read1275_rewind_phi_fu_46075_p6 = data_1205_V_read1275_rewind_reg_46071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1206_V_read1276_phi_phi_fu_89697_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1206_V_read1276_phi_phi_fu_89697_p4 = ap_phi_mux_data_1206_V_read1276_rewind_phi_fu_46089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1206_V_read1276_phi_phi_fu_89697_p4 = data_1206_V_read.read();
        } else {
            ap_phi_mux_data_1206_V_read1276_phi_phi_fu_89697_p4 = ap_phi_reg_pp0_iter0_data_1206_V_read1276_phi_reg_89693.read();
        }
    } else {
        ap_phi_mux_data_1206_V_read1276_phi_phi_fu_89697_p4 = ap_phi_reg_pp0_iter0_data_1206_V_read1276_phi_reg_89693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1206_V_read1276_rewind_phi_fu_46089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1206_V_read1276_rewind_phi_fu_46089_p6 = data_1206_V_read1276_phi_reg_89693.read();
    } else {
        ap_phi_mux_data_1206_V_read1276_rewind_phi_fu_46089_p6 = data_1206_V_read1276_rewind_reg_46085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1207_V_read1277_phi_phi_fu_89710_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1207_V_read1277_phi_phi_fu_89710_p4 = ap_phi_mux_data_1207_V_read1277_rewind_phi_fu_46103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1207_V_read1277_phi_phi_fu_89710_p4 = data_1207_V_read.read();
        } else {
            ap_phi_mux_data_1207_V_read1277_phi_phi_fu_89710_p4 = ap_phi_reg_pp0_iter0_data_1207_V_read1277_phi_reg_89706.read();
        }
    } else {
        ap_phi_mux_data_1207_V_read1277_phi_phi_fu_89710_p4 = ap_phi_reg_pp0_iter0_data_1207_V_read1277_phi_reg_89706.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1207_V_read1277_rewind_phi_fu_46103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1207_V_read1277_rewind_phi_fu_46103_p6 = data_1207_V_read1277_phi_reg_89706.read();
    } else {
        ap_phi_mux_data_1207_V_read1277_rewind_phi_fu_46103_p6 = data_1207_V_read1277_rewind_reg_46099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1208_V_read1278_phi_phi_fu_89723_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1208_V_read1278_phi_phi_fu_89723_p4 = ap_phi_mux_data_1208_V_read1278_rewind_phi_fu_46117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1208_V_read1278_phi_phi_fu_89723_p4 = data_1208_V_read.read();
        } else {
            ap_phi_mux_data_1208_V_read1278_phi_phi_fu_89723_p4 = ap_phi_reg_pp0_iter0_data_1208_V_read1278_phi_reg_89719.read();
        }
    } else {
        ap_phi_mux_data_1208_V_read1278_phi_phi_fu_89723_p4 = ap_phi_reg_pp0_iter0_data_1208_V_read1278_phi_reg_89719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1208_V_read1278_rewind_phi_fu_46117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1208_V_read1278_rewind_phi_fu_46117_p6 = data_1208_V_read1278_phi_reg_89719.read();
    } else {
        ap_phi_mux_data_1208_V_read1278_rewind_phi_fu_46117_p6 = data_1208_V_read1278_rewind_reg_46113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1209_V_read1279_phi_phi_fu_89736_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1209_V_read1279_phi_phi_fu_89736_p4 = ap_phi_mux_data_1209_V_read1279_rewind_phi_fu_46131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1209_V_read1279_phi_phi_fu_89736_p4 = data_1209_V_read.read();
        } else {
            ap_phi_mux_data_1209_V_read1279_phi_phi_fu_89736_p4 = ap_phi_reg_pp0_iter0_data_1209_V_read1279_phi_reg_89732.read();
        }
    } else {
        ap_phi_mux_data_1209_V_read1279_phi_phi_fu_89736_p4 = ap_phi_reg_pp0_iter0_data_1209_V_read1279_phi_reg_89732.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1209_V_read1279_rewind_phi_fu_46131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1209_V_read1279_rewind_phi_fu_46131_p6 = data_1209_V_read1279_phi_reg_89732.read();
    } else {
        ap_phi_mux_data_1209_V_read1279_rewind_phi_fu_46131_p6 = data_1209_V_read1279_rewind_reg_46127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_120_V_read190_phi_phi_fu_75579_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_120_V_read190_phi_phi_fu_75579_p4 = ap_phi_mux_data_120_V_read190_rewind_phi_fu_30885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_120_V_read190_phi_phi_fu_75579_p4 = data_120_V_read.read();
        } else {
            ap_phi_mux_data_120_V_read190_phi_phi_fu_75579_p4 = ap_phi_reg_pp0_iter0_data_120_V_read190_phi_reg_75575.read();
        }
    } else {
        ap_phi_mux_data_120_V_read190_phi_phi_fu_75579_p4 = ap_phi_reg_pp0_iter0_data_120_V_read190_phi_reg_75575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_120_V_read190_rewind_phi_fu_30885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_120_V_read190_rewind_phi_fu_30885_p6 = data_120_V_read190_phi_reg_75575.read();
    } else {
        ap_phi_mux_data_120_V_read190_rewind_phi_fu_30885_p6 = data_120_V_read190_rewind_reg_30881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1210_V_read1280_phi_phi_fu_89749_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1210_V_read1280_phi_phi_fu_89749_p4 = ap_phi_mux_data_1210_V_read1280_rewind_phi_fu_46145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1210_V_read1280_phi_phi_fu_89749_p4 = data_1210_V_read.read();
        } else {
            ap_phi_mux_data_1210_V_read1280_phi_phi_fu_89749_p4 = ap_phi_reg_pp0_iter0_data_1210_V_read1280_phi_reg_89745.read();
        }
    } else {
        ap_phi_mux_data_1210_V_read1280_phi_phi_fu_89749_p4 = ap_phi_reg_pp0_iter0_data_1210_V_read1280_phi_reg_89745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1210_V_read1280_rewind_phi_fu_46145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1210_V_read1280_rewind_phi_fu_46145_p6 = data_1210_V_read1280_phi_reg_89745.read();
    } else {
        ap_phi_mux_data_1210_V_read1280_rewind_phi_fu_46145_p6 = data_1210_V_read1280_rewind_reg_46141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1211_V_read1281_phi_phi_fu_89762_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1211_V_read1281_phi_phi_fu_89762_p4 = ap_phi_mux_data_1211_V_read1281_rewind_phi_fu_46159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1211_V_read1281_phi_phi_fu_89762_p4 = data_1211_V_read.read();
        } else {
            ap_phi_mux_data_1211_V_read1281_phi_phi_fu_89762_p4 = ap_phi_reg_pp0_iter0_data_1211_V_read1281_phi_reg_89758.read();
        }
    } else {
        ap_phi_mux_data_1211_V_read1281_phi_phi_fu_89762_p4 = ap_phi_reg_pp0_iter0_data_1211_V_read1281_phi_reg_89758.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1211_V_read1281_rewind_phi_fu_46159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1211_V_read1281_rewind_phi_fu_46159_p6 = data_1211_V_read1281_phi_reg_89758.read();
    } else {
        ap_phi_mux_data_1211_V_read1281_rewind_phi_fu_46159_p6 = data_1211_V_read1281_rewind_reg_46155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1212_V_read1282_phi_phi_fu_89775_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1212_V_read1282_phi_phi_fu_89775_p4 = ap_phi_mux_data_1212_V_read1282_rewind_phi_fu_46173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1212_V_read1282_phi_phi_fu_89775_p4 = data_1212_V_read.read();
        } else {
            ap_phi_mux_data_1212_V_read1282_phi_phi_fu_89775_p4 = ap_phi_reg_pp0_iter0_data_1212_V_read1282_phi_reg_89771.read();
        }
    } else {
        ap_phi_mux_data_1212_V_read1282_phi_phi_fu_89775_p4 = ap_phi_reg_pp0_iter0_data_1212_V_read1282_phi_reg_89771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1212_V_read1282_rewind_phi_fu_46173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1212_V_read1282_rewind_phi_fu_46173_p6 = data_1212_V_read1282_phi_reg_89771.read();
    } else {
        ap_phi_mux_data_1212_V_read1282_rewind_phi_fu_46173_p6 = data_1212_V_read1282_rewind_reg_46169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1213_V_read1283_phi_phi_fu_89788_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1213_V_read1283_phi_phi_fu_89788_p4 = ap_phi_mux_data_1213_V_read1283_rewind_phi_fu_46187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1213_V_read1283_phi_phi_fu_89788_p4 = data_1213_V_read.read();
        } else {
            ap_phi_mux_data_1213_V_read1283_phi_phi_fu_89788_p4 = ap_phi_reg_pp0_iter0_data_1213_V_read1283_phi_reg_89784.read();
        }
    } else {
        ap_phi_mux_data_1213_V_read1283_phi_phi_fu_89788_p4 = ap_phi_reg_pp0_iter0_data_1213_V_read1283_phi_reg_89784.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1213_V_read1283_rewind_phi_fu_46187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1213_V_read1283_rewind_phi_fu_46187_p6 = data_1213_V_read1283_phi_reg_89784.read();
    } else {
        ap_phi_mux_data_1213_V_read1283_rewind_phi_fu_46187_p6 = data_1213_V_read1283_rewind_reg_46183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1214_V_read1284_phi_phi_fu_89801_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1214_V_read1284_phi_phi_fu_89801_p4 = ap_phi_mux_data_1214_V_read1284_rewind_phi_fu_46201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1214_V_read1284_phi_phi_fu_89801_p4 = data_1214_V_read.read();
        } else {
            ap_phi_mux_data_1214_V_read1284_phi_phi_fu_89801_p4 = ap_phi_reg_pp0_iter0_data_1214_V_read1284_phi_reg_89797.read();
        }
    } else {
        ap_phi_mux_data_1214_V_read1284_phi_phi_fu_89801_p4 = ap_phi_reg_pp0_iter0_data_1214_V_read1284_phi_reg_89797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1214_V_read1284_rewind_phi_fu_46201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1214_V_read1284_rewind_phi_fu_46201_p6 = data_1214_V_read1284_phi_reg_89797.read();
    } else {
        ap_phi_mux_data_1214_V_read1284_rewind_phi_fu_46201_p6 = data_1214_V_read1284_rewind_reg_46197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1215_V_read1285_phi_phi_fu_89814_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1215_V_read1285_phi_phi_fu_89814_p4 = ap_phi_mux_data_1215_V_read1285_rewind_phi_fu_46215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1215_V_read1285_phi_phi_fu_89814_p4 = data_1215_V_read.read();
        } else {
            ap_phi_mux_data_1215_V_read1285_phi_phi_fu_89814_p4 = ap_phi_reg_pp0_iter0_data_1215_V_read1285_phi_reg_89810.read();
        }
    } else {
        ap_phi_mux_data_1215_V_read1285_phi_phi_fu_89814_p4 = ap_phi_reg_pp0_iter0_data_1215_V_read1285_phi_reg_89810.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1215_V_read1285_rewind_phi_fu_46215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1215_V_read1285_rewind_phi_fu_46215_p6 = data_1215_V_read1285_phi_reg_89810.read();
    } else {
        ap_phi_mux_data_1215_V_read1285_rewind_phi_fu_46215_p6 = data_1215_V_read1285_rewind_reg_46211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1216_V_read1286_phi_phi_fu_89827_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1216_V_read1286_phi_phi_fu_89827_p4 = ap_phi_mux_data_1216_V_read1286_rewind_phi_fu_46229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1216_V_read1286_phi_phi_fu_89827_p4 = data_1216_V_read.read();
        } else {
            ap_phi_mux_data_1216_V_read1286_phi_phi_fu_89827_p4 = ap_phi_reg_pp0_iter0_data_1216_V_read1286_phi_reg_89823.read();
        }
    } else {
        ap_phi_mux_data_1216_V_read1286_phi_phi_fu_89827_p4 = ap_phi_reg_pp0_iter0_data_1216_V_read1286_phi_reg_89823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1216_V_read1286_rewind_phi_fu_46229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1216_V_read1286_rewind_phi_fu_46229_p6 = data_1216_V_read1286_phi_reg_89823.read();
    } else {
        ap_phi_mux_data_1216_V_read1286_rewind_phi_fu_46229_p6 = data_1216_V_read1286_rewind_reg_46225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1217_V_read1287_phi_phi_fu_89840_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1217_V_read1287_phi_phi_fu_89840_p4 = ap_phi_mux_data_1217_V_read1287_rewind_phi_fu_46243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1217_V_read1287_phi_phi_fu_89840_p4 = data_1217_V_read.read();
        } else {
            ap_phi_mux_data_1217_V_read1287_phi_phi_fu_89840_p4 = ap_phi_reg_pp0_iter0_data_1217_V_read1287_phi_reg_89836.read();
        }
    } else {
        ap_phi_mux_data_1217_V_read1287_phi_phi_fu_89840_p4 = ap_phi_reg_pp0_iter0_data_1217_V_read1287_phi_reg_89836.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1217_V_read1287_rewind_phi_fu_46243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1217_V_read1287_rewind_phi_fu_46243_p6 = data_1217_V_read1287_phi_reg_89836.read();
    } else {
        ap_phi_mux_data_1217_V_read1287_rewind_phi_fu_46243_p6 = data_1217_V_read1287_rewind_reg_46239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1218_V_read1288_phi_phi_fu_89853_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1218_V_read1288_phi_phi_fu_89853_p4 = ap_phi_mux_data_1218_V_read1288_rewind_phi_fu_46257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1218_V_read1288_phi_phi_fu_89853_p4 = data_1218_V_read.read();
        } else {
            ap_phi_mux_data_1218_V_read1288_phi_phi_fu_89853_p4 = ap_phi_reg_pp0_iter0_data_1218_V_read1288_phi_reg_89849.read();
        }
    } else {
        ap_phi_mux_data_1218_V_read1288_phi_phi_fu_89853_p4 = ap_phi_reg_pp0_iter0_data_1218_V_read1288_phi_reg_89849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1218_V_read1288_rewind_phi_fu_46257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1218_V_read1288_rewind_phi_fu_46257_p6 = data_1218_V_read1288_phi_reg_89849.read();
    } else {
        ap_phi_mux_data_1218_V_read1288_rewind_phi_fu_46257_p6 = data_1218_V_read1288_rewind_reg_46253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1219_V_read1289_phi_phi_fu_89866_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1219_V_read1289_phi_phi_fu_89866_p4 = ap_phi_mux_data_1219_V_read1289_rewind_phi_fu_46271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1219_V_read1289_phi_phi_fu_89866_p4 = data_1219_V_read.read();
        } else {
            ap_phi_mux_data_1219_V_read1289_phi_phi_fu_89866_p4 = ap_phi_reg_pp0_iter0_data_1219_V_read1289_phi_reg_89862.read();
        }
    } else {
        ap_phi_mux_data_1219_V_read1289_phi_phi_fu_89866_p4 = ap_phi_reg_pp0_iter0_data_1219_V_read1289_phi_reg_89862.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1219_V_read1289_rewind_phi_fu_46271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1219_V_read1289_rewind_phi_fu_46271_p6 = data_1219_V_read1289_phi_reg_89862.read();
    } else {
        ap_phi_mux_data_1219_V_read1289_rewind_phi_fu_46271_p6 = data_1219_V_read1289_rewind_reg_46267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_121_V_read191_phi_phi_fu_75592_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_121_V_read191_phi_phi_fu_75592_p4 = ap_phi_mux_data_121_V_read191_rewind_phi_fu_30899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_121_V_read191_phi_phi_fu_75592_p4 = data_121_V_read.read();
        } else {
            ap_phi_mux_data_121_V_read191_phi_phi_fu_75592_p4 = ap_phi_reg_pp0_iter0_data_121_V_read191_phi_reg_75588.read();
        }
    } else {
        ap_phi_mux_data_121_V_read191_phi_phi_fu_75592_p4 = ap_phi_reg_pp0_iter0_data_121_V_read191_phi_reg_75588.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_121_V_read191_rewind_phi_fu_30899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_121_V_read191_rewind_phi_fu_30899_p6 = data_121_V_read191_phi_reg_75588.read();
    } else {
        ap_phi_mux_data_121_V_read191_rewind_phi_fu_30899_p6 = data_121_V_read191_rewind_reg_30895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1220_V_read1290_phi_phi_fu_89879_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1220_V_read1290_phi_phi_fu_89879_p4 = ap_phi_mux_data_1220_V_read1290_rewind_phi_fu_46285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1220_V_read1290_phi_phi_fu_89879_p4 = data_1220_V_read.read();
        } else {
            ap_phi_mux_data_1220_V_read1290_phi_phi_fu_89879_p4 = ap_phi_reg_pp0_iter0_data_1220_V_read1290_phi_reg_89875.read();
        }
    } else {
        ap_phi_mux_data_1220_V_read1290_phi_phi_fu_89879_p4 = ap_phi_reg_pp0_iter0_data_1220_V_read1290_phi_reg_89875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1220_V_read1290_rewind_phi_fu_46285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1220_V_read1290_rewind_phi_fu_46285_p6 = data_1220_V_read1290_phi_reg_89875.read();
    } else {
        ap_phi_mux_data_1220_V_read1290_rewind_phi_fu_46285_p6 = data_1220_V_read1290_rewind_reg_46281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1221_V_read1291_phi_phi_fu_89892_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1221_V_read1291_phi_phi_fu_89892_p4 = ap_phi_mux_data_1221_V_read1291_rewind_phi_fu_46299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1221_V_read1291_phi_phi_fu_89892_p4 = data_1221_V_read.read();
        } else {
            ap_phi_mux_data_1221_V_read1291_phi_phi_fu_89892_p4 = ap_phi_reg_pp0_iter0_data_1221_V_read1291_phi_reg_89888.read();
        }
    } else {
        ap_phi_mux_data_1221_V_read1291_phi_phi_fu_89892_p4 = ap_phi_reg_pp0_iter0_data_1221_V_read1291_phi_reg_89888.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1221_V_read1291_rewind_phi_fu_46299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1221_V_read1291_rewind_phi_fu_46299_p6 = data_1221_V_read1291_phi_reg_89888.read();
    } else {
        ap_phi_mux_data_1221_V_read1291_rewind_phi_fu_46299_p6 = data_1221_V_read1291_rewind_reg_46295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1222_V_read1292_phi_phi_fu_89905_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1222_V_read1292_phi_phi_fu_89905_p4 = ap_phi_mux_data_1222_V_read1292_rewind_phi_fu_46313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1222_V_read1292_phi_phi_fu_89905_p4 = data_1222_V_read.read();
        } else {
            ap_phi_mux_data_1222_V_read1292_phi_phi_fu_89905_p4 = ap_phi_reg_pp0_iter0_data_1222_V_read1292_phi_reg_89901.read();
        }
    } else {
        ap_phi_mux_data_1222_V_read1292_phi_phi_fu_89905_p4 = ap_phi_reg_pp0_iter0_data_1222_V_read1292_phi_reg_89901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1222_V_read1292_rewind_phi_fu_46313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1222_V_read1292_rewind_phi_fu_46313_p6 = data_1222_V_read1292_phi_reg_89901.read();
    } else {
        ap_phi_mux_data_1222_V_read1292_rewind_phi_fu_46313_p6 = data_1222_V_read1292_rewind_reg_46309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1223_V_read1293_phi_phi_fu_89918_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1223_V_read1293_phi_phi_fu_89918_p4 = ap_phi_mux_data_1223_V_read1293_rewind_phi_fu_46327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1223_V_read1293_phi_phi_fu_89918_p4 = data_1223_V_read.read();
        } else {
            ap_phi_mux_data_1223_V_read1293_phi_phi_fu_89918_p4 = ap_phi_reg_pp0_iter0_data_1223_V_read1293_phi_reg_89914.read();
        }
    } else {
        ap_phi_mux_data_1223_V_read1293_phi_phi_fu_89918_p4 = ap_phi_reg_pp0_iter0_data_1223_V_read1293_phi_reg_89914.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1223_V_read1293_rewind_phi_fu_46327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1223_V_read1293_rewind_phi_fu_46327_p6 = data_1223_V_read1293_phi_reg_89914.read();
    } else {
        ap_phi_mux_data_1223_V_read1293_rewind_phi_fu_46327_p6 = data_1223_V_read1293_rewind_reg_46323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1224_V_read1294_phi_phi_fu_89931_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1224_V_read1294_phi_phi_fu_89931_p4 = ap_phi_mux_data_1224_V_read1294_rewind_phi_fu_46341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1224_V_read1294_phi_phi_fu_89931_p4 = data_1224_V_read.read();
        } else {
            ap_phi_mux_data_1224_V_read1294_phi_phi_fu_89931_p4 = ap_phi_reg_pp0_iter0_data_1224_V_read1294_phi_reg_89927.read();
        }
    } else {
        ap_phi_mux_data_1224_V_read1294_phi_phi_fu_89931_p4 = ap_phi_reg_pp0_iter0_data_1224_V_read1294_phi_reg_89927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1224_V_read1294_rewind_phi_fu_46341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1224_V_read1294_rewind_phi_fu_46341_p6 = data_1224_V_read1294_phi_reg_89927.read();
    } else {
        ap_phi_mux_data_1224_V_read1294_rewind_phi_fu_46341_p6 = data_1224_V_read1294_rewind_reg_46337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1225_V_read1295_phi_phi_fu_89944_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1225_V_read1295_phi_phi_fu_89944_p4 = ap_phi_mux_data_1225_V_read1295_rewind_phi_fu_46355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1225_V_read1295_phi_phi_fu_89944_p4 = data_1225_V_read.read();
        } else {
            ap_phi_mux_data_1225_V_read1295_phi_phi_fu_89944_p4 = ap_phi_reg_pp0_iter0_data_1225_V_read1295_phi_reg_89940.read();
        }
    } else {
        ap_phi_mux_data_1225_V_read1295_phi_phi_fu_89944_p4 = ap_phi_reg_pp0_iter0_data_1225_V_read1295_phi_reg_89940.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1225_V_read1295_rewind_phi_fu_46355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1225_V_read1295_rewind_phi_fu_46355_p6 = data_1225_V_read1295_phi_reg_89940.read();
    } else {
        ap_phi_mux_data_1225_V_read1295_rewind_phi_fu_46355_p6 = data_1225_V_read1295_rewind_reg_46351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1226_V_read1296_phi_phi_fu_89957_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1226_V_read1296_phi_phi_fu_89957_p4 = ap_phi_mux_data_1226_V_read1296_rewind_phi_fu_46369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1226_V_read1296_phi_phi_fu_89957_p4 = data_1226_V_read.read();
        } else {
            ap_phi_mux_data_1226_V_read1296_phi_phi_fu_89957_p4 = ap_phi_reg_pp0_iter0_data_1226_V_read1296_phi_reg_89953.read();
        }
    } else {
        ap_phi_mux_data_1226_V_read1296_phi_phi_fu_89957_p4 = ap_phi_reg_pp0_iter0_data_1226_V_read1296_phi_reg_89953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1226_V_read1296_rewind_phi_fu_46369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1226_V_read1296_rewind_phi_fu_46369_p6 = data_1226_V_read1296_phi_reg_89953.read();
    } else {
        ap_phi_mux_data_1226_V_read1296_rewind_phi_fu_46369_p6 = data_1226_V_read1296_rewind_reg_46365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1227_V_read1297_phi_phi_fu_89970_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1227_V_read1297_phi_phi_fu_89970_p4 = ap_phi_mux_data_1227_V_read1297_rewind_phi_fu_46383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1227_V_read1297_phi_phi_fu_89970_p4 = data_1227_V_read.read();
        } else {
            ap_phi_mux_data_1227_V_read1297_phi_phi_fu_89970_p4 = ap_phi_reg_pp0_iter0_data_1227_V_read1297_phi_reg_89966.read();
        }
    } else {
        ap_phi_mux_data_1227_V_read1297_phi_phi_fu_89970_p4 = ap_phi_reg_pp0_iter0_data_1227_V_read1297_phi_reg_89966.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1227_V_read1297_rewind_phi_fu_46383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1227_V_read1297_rewind_phi_fu_46383_p6 = data_1227_V_read1297_phi_reg_89966.read();
    } else {
        ap_phi_mux_data_1227_V_read1297_rewind_phi_fu_46383_p6 = data_1227_V_read1297_rewind_reg_46379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1228_V_read1298_phi_phi_fu_89983_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1228_V_read1298_phi_phi_fu_89983_p4 = ap_phi_mux_data_1228_V_read1298_rewind_phi_fu_46397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1228_V_read1298_phi_phi_fu_89983_p4 = data_1228_V_read.read();
        } else {
            ap_phi_mux_data_1228_V_read1298_phi_phi_fu_89983_p4 = ap_phi_reg_pp0_iter0_data_1228_V_read1298_phi_reg_89979.read();
        }
    } else {
        ap_phi_mux_data_1228_V_read1298_phi_phi_fu_89983_p4 = ap_phi_reg_pp0_iter0_data_1228_V_read1298_phi_reg_89979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1228_V_read1298_rewind_phi_fu_46397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1228_V_read1298_rewind_phi_fu_46397_p6 = data_1228_V_read1298_phi_reg_89979.read();
    } else {
        ap_phi_mux_data_1228_V_read1298_rewind_phi_fu_46397_p6 = data_1228_V_read1298_rewind_reg_46393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1229_V_read1299_phi_phi_fu_89996_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1229_V_read1299_phi_phi_fu_89996_p4 = ap_phi_mux_data_1229_V_read1299_rewind_phi_fu_46411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1229_V_read1299_phi_phi_fu_89996_p4 = data_1229_V_read.read();
        } else {
            ap_phi_mux_data_1229_V_read1299_phi_phi_fu_89996_p4 = ap_phi_reg_pp0_iter0_data_1229_V_read1299_phi_reg_89992.read();
        }
    } else {
        ap_phi_mux_data_1229_V_read1299_phi_phi_fu_89996_p4 = ap_phi_reg_pp0_iter0_data_1229_V_read1299_phi_reg_89992.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1229_V_read1299_rewind_phi_fu_46411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1229_V_read1299_rewind_phi_fu_46411_p6 = data_1229_V_read1299_phi_reg_89992.read();
    } else {
        ap_phi_mux_data_1229_V_read1299_rewind_phi_fu_46411_p6 = data_1229_V_read1299_rewind_reg_46407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_122_V_read192_phi_phi_fu_75605_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_122_V_read192_phi_phi_fu_75605_p4 = ap_phi_mux_data_122_V_read192_rewind_phi_fu_30913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_122_V_read192_phi_phi_fu_75605_p4 = data_122_V_read.read();
        } else {
            ap_phi_mux_data_122_V_read192_phi_phi_fu_75605_p4 = ap_phi_reg_pp0_iter0_data_122_V_read192_phi_reg_75601.read();
        }
    } else {
        ap_phi_mux_data_122_V_read192_phi_phi_fu_75605_p4 = ap_phi_reg_pp0_iter0_data_122_V_read192_phi_reg_75601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_122_V_read192_rewind_phi_fu_30913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_122_V_read192_rewind_phi_fu_30913_p6 = data_122_V_read192_phi_reg_75601.read();
    } else {
        ap_phi_mux_data_122_V_read192_rewind_phi_fu_30913_p6 = data_122_V_read192_rewind_reg_30909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1230_V_read1300_phi_phi_fu_90009_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1230_V_read1300_phi_phi_fu_90009_p4 = ap_phi_mux_data_1230_V_read1300_rewind_phi_fu_46425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1230_V_read1300_phi_phi_fu_90009_p4 = data_1230_V_read.read();
        } else {
            ap_phi_mux_data_1230_V_read1300_phi_phi_fu_90009_p4 = ap_phi_reg_pp0_iter0_data_1230_V_read1300_phi_reg_90005.read();
        }
    } else {
        ap_phi_mux_data_1230_V_read1300_phi_phi_fu_90009_p4 = ap_phi_reg_pp0_iter0_data_1230_V_read1300_phi_reg_90005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1230_V_read1300_rewind_phi_fu_46425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1230_V_read1300_rewind_phi_fu_46425_p6 = data_1230_V_read1300_phi_reg_90005.read();
    } else {
        ap_phi_mux_data_1230_V_read1300_rewind_phi_fu_46425_p6 = data_1230_V_read1300_rewind_reg_46421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1231_V_read1301_phi_phi_fu_90022_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1231_V_read1301_phi_phi_fu_90022_p4 = ap_phi_mux_data_1231_V_read1301_rewind_phi_fu_46439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1231_V_read1301_phi_phi_fu_90022_p4 = data_1231_V_read.read();
        } else {
            ap_phi_mux_data_1231_V_read1301_phi_phi_fu_90022_p4 = ap_phi_reg_pp0_iter0_data_1231_V_read1301_phi_reg_90018.read();
        }
    } else {
        ap_phi_mux_data_1231_V_read1301_phi_phi_fu_90022_p4 = ap_phi_reg_pp0_iter0_data_1231_V_read1301_phi_reg_90018.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1231_V_read1301_rewind_phi_fu_46439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1231_V_read1301_rewind_phi_fu_46439_p6 = data_1231_V_read1301_phi_reg_90018.read();
    } else {
        ap_phi_mux_data_1231_V_read1301_rewind_phi_fu_46439_p6 = data_1231_V_read1301_rewind_reg_46435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1232_V_read1302_phi_phi_fu_90035_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1232_V_read1302_phi_phi_fu_90035_p4 = ap_phi_mux_data_1232_V_read1302_rewind_phi_fu_46453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1232_V_read1302_phi_phi_fu_90035_p4 = data_1232_V_read.read();
        } else {
            ap_phi_mux_data_1232_V_read1302_phi_phi_fu_90035_p4 = ap_phi_reg_pp0_iter0_data_1232_V_read1302_phi_reg_90031.read();
        }
    } else {
        ap_phi_mux_data_1232_V_read1302_phi_phi_fu_90035_p4 = ap_phi_reg_pp0_iter0_data_1232_V_read1302_phi_reg_90031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1232_V_read1302_rewind_phi_fu_46453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1232_V_read1302_rewind_phi_fu_46453_p6 = data_1232_V_read1302_phi_reg_90031.read();
    } else {
        ap_phi_mux_data_1232_V_read1302_rewind_phi_fu_46453_p6 = data_1232_V_read1302_rewind_reg_46449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1233_V_read1303_phi_phi_fu_90048_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1233_V_read1303_phi_phi_fu_90048_p4 = ap_phi_mux_data_1233_V_read1303_rewind_phi_fu_46467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1233_V_read1303_phi_phi_fu_90048_p4 = data_1233_V_read.read();
        } else {
            ap_phi_mux_data_1233_V_read1303_phi_phi_fu_90048_p4 = ap_phi_reg_pp0_iter0_data_1233_V_read1303_phi_reg_90044.read();
        }
    } else {
        ap_phi_mux_data_1233_V_read1303_phi_phi_fu_90048_p4 = ap_phi_reg_pp0_iter0_data_1233_V_read1303_phi_reg_90044.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1233_V_read1303_rewind_phi_fu_46467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1233_V_read1303_rewind_phi_fu_46467_p6 = data_1233_V_read1303_phi_reg_90044.read();
    } else {
        ap_phi_mux_data_1233_V_read1303_rewind_phi_fu_46467_p6 = data_1233_V_read1303_rewind_reg_46463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1234_V_read1304_phi_phi_fu_90061_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1234_V_read1304_phi_phi_fu_90061_p4 = ap_phi_mux_data_1234_V_read1304_rewind_phi_fu_46481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1234_V_read1304_phi_phi_fu_90061_p4 = data_1234_V_read.read();
        } else {
            ap_phi_mux_data_1234_V_read1304_phi_phi_fu_90061_p4 = ap_phi_reg_pp0_iter0_data_1234_V_read1304_phi_reg_90057.read();
        }
    } else {
        ap_phi_mux_data_1234_V_read1304_phi_phi_fu_90061_p4 = ap_phi_reg_pp0_iter0_data_1234_V_read1304_phi_reg_90057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1234_V_read1304_rewind_phi_fu_46481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1234_V_read1304_rewind_phi_fu_46481_p6 = data_1234_V_read1304_phi_reg_90057.read();
    } else {
        ap_phi_mux_data_1234_V_read1304_rewind_phi_fu_46481_p6 = data_1234_V_read1304_rewind_reg_46477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1235_V_read1305_phi_phi_fu_90074_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1235_V_read1305_phi_phi_fu_90074_p4 = ap_phi_mux_data_1235_V_read1305_rewind_phi_fu_46495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1235_V_read1305_phi_phi_fu_90074_p4 = data_1235_V_read.read();
        } else {
            ap_phi_mux_data_1235_V_read1305_phi_phi_fu_90074_p4 = ap_phi_reg_pp0_iter0_data_1235_V_read1305_phi_reg_90070.read();
        }
    } else {
        ap_phi_mux_data_1235_V_read1305_phi_phi_fu_90074_p4 = ap_phi_reg_pp0_iter0_data_1235_V_read1305_phi_reg_90070.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1235_V_read1305_rewind_phi_fu_46495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1235_V_read1305_rewind_phi_fu_46495_p6 = data_1235_V_read1305_phi_reg_90070.read();
    } else {
        ap_phi_mux_data_1235_V_read1305_rewind_phi_fu_46495_p6 = data_1235_V_read1305_rewind_reg_46491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1236_V_read1306_phi_phi_fu_90087_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1236_V_read1306_phi_phi_fu_90087_p4 = ap_phi_mux_data_1236_V_read1306_rewind_phi_fu_46509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1236_V_read1306_phi_phi_fu_90087_p4 = data_1236_V_read.read();
        } else {
            ap_phi_mux_data_1236_V_read1306_phi_phi_fu_90087_p4 = ap_phi_reg_pp0_iter0_data_1236_V_read1306_phi_reg_90083.read();
        }
    } else {
        ap_phi_mux_data_1236_V_read1306_phi_phi_fu_90087_p4 = ap_phi_reg_pp0_iter0_data_1236_V_read1306_phi_reg_90083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1236_V_read1306_rewind_phi_fu_46509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1236_V_read1306_rewind_phi_fu_46509_p6 = data_1236_V_read1306_phi_reg_90083.read();
    } else {
        ap_phi_mux_data_1236_V_read1306_rewind_phi_fu_46509_p6 = data_1236_V_read1306_rewind_reg_46505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1237_V_read1307_phi_phi_fu_90100_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1237_V_read1307_phi_phi_fu_90100_p4 = ap_phi_mux_data_1237_V_read1307_rewind_phi_fu_46523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1237_V_read1307_phi_phi_fu_90100_p4 = data_1237_V_read.read();
        } else {
            ap_phi_mux_data_1237_V_read1307_phi_phi_fu_90100_p4 = ap_phi_reg_pp0_iter0_data_1237_V_read1307_phi_reg_90096.read();
        }
    } else {
        ap_phi_mux_data_1237_V_read1307_phi_phi_fu_90100_p4 = ap_phi_reg_pp0_iter0_data_1237_V_read1307_phi_reg_90096.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1237_V_read1307_rewind_phi_fu_46523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1237_V_read1307_rewind_phi_fu_46523_p6 = data_1237_V_read1307_phi_reg_90096.read();
    } else {
        ap_phi_mux_data_1237_V_read1307_rewind_phi_fu_46523_p6 = data_1237_V_read1307_rewind_reg_46519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1238_V_read1308_phi_phi_fu_90113_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1238_V_read1308_phi_phi_fu_90113_p4 = ap_phi_mux_data_1238_V_read1308_rewind_phi_fu_46537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1238_V_read1308_phi_phi_fu_90113_p4 = data_1238_V_read.read();
        } else {
            ap_phi_mux_data_1238_V_read1308_phi_phi_fu_90113_p4 = ap_phi_reg_pp0_iter0_data_1238_V_read1308_phi_reg_90109.read();
        }
    } else {
        ap_phi_mux_data_1238_V_read1308_phi_phi_fu_90113_p4 = ap_phi_reg_pp0_iter0_data_1238_V_read1308_phi_reg_90109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1238_V_read1308_rewind_phi_fu_46537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1238_V_read1308_rewind_phi_fu_46537_p6 = data_1238_V_read1308_phi_reg_90109.read();
    } else {
        ap_phi_mux_data_1238_V_read1308_rewind_phi_fu_46537_p6 = data_1238_V_read1308_rewind_reg_46533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1239_V_read1309_phi_phi_fu_90126_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1239_V_read1309_phi_phi_fu_90126_p4 = ap_phi_mux_data_1239_V_read1309_rewind_phi_fu_46551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1239_V_read1309_phi_phi_fu_90126_p4 = data_1239_V_read.read();
        } else {
            ap_phi_mux_data_1239_V_read1309_phi_phi_fu_90126_p4 = ap_phi_reg_pp0_iter0_data_1239_V_read1309_phi_reg_90122.read();
        }
    } else {
        ap_phi_mux_data_1239_V_read1309_phi_phi_fu_90126_p4 = ap_phi_reg_pp0_iter0_data_1239_V_read1309_phi_reg_90122.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1239_V_read1309_rewind_phi_fu_46551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1239_V_read1309_rewind_phi_fu_46551_p6 = data_1239_V_read1309_phi_reg_90122.read();
    } else {
        ap_phi_mux_data_1239_V_read1309_rewind_phi_fu_46551_p6 = data_1239_V_read1309_rewind_reg_46547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_123_V_read193_phi_phi_fu_75618_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_123_V_read193_phi_phi_fu_75618_p4 = ap_phi_mux_data_123_V_read193_rewind_phi_fu_30927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_123_V_read193_phi_phi_fu_75618_p4 = data_123_V_read.read();
        } else {
            ap_phi_mux_data_123_V_read193_phi_phi_fu_75618_p4 = ap_phi_reg_pp0_iter0_data_123_V_read193_phi_reg_75614.read();
        }
    } else {
        ap_phi_mux_data_123_V_read193_phi_phi_fu_75618_p4 = ap_phi_reg_pp0_iter0_data_123_V_read193_phi_reg_75614.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_123_V_read193_rewind_phi_fu_30927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_123_V_read193_rewind_phi_fu_30927_p6 = data_123_V_read193_phi_reg_75614.read();
    } else {
        ap_phi_mux_data_123_V_read193_rewind_phi_fu_30927_p6 = data_123_V_read193_rewind_reg_30923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1240_V_read1310_phi_phi_fu_90139_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1240_V_read1310_phi_phi_fu_90139_p4 = ap_phi_mux_data_1240_V_read1310_rewind_phi_fu_46565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1240_V_read1310_phi_phi_fu_90139_p4 = data_1240_V_read.read();
        } else {
            ap_phi_mux_data_1240_V_read1310_phi_phi_fu_90139_p4 = ap_phi_reg_pp0_iter0_data_1240_V_read1310_phi_reg_90135.read();
        }
    } else {
        ap_phi_mux_data_1240_V_read1310_phi_phi_fu_90139_p4 = ap_phi_reg_pp0_iter0_data_1240_V_read1310_phi_reg_90135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1240_V_read1310_rewind_phi_fu_46565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1240_V_read1310_rewind_phi_fu_46565_p6 = data_1240_V_read1310_phi_reg_90135.read();
    } else {
        ap_phi_mux_data_1240_V_read1310_rewind_phi_fu_46565_p6 = data_1240_V_read1310_rewind_reg_46561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1241_V_read1311_phi_phi_fu_90152_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1241_V_read1311_phi_phi_fu_90152_p4 = ap_phi_mux_data_1241_V_read1311_rewind_phi_fu_46579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1241_V_read1311_phi_phi_fu_90152_p4 = data_1241_V_read.read();
        } else {
            ap_phi_mux_data_1241_V_read1311_phi_phi_fu_90152_p4 = ap_phi_reg_pp0_iter0_data_1241_V_read1311_phi_reg_90148.read();
        }
    } else {
        ap_phi_mux_data_1241_V_read1311_phi_phi_fu_90152_p4 = ap_phi_reg_pp0_iter0_data_1241_V_read1311_phi_reg_90148.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1241_V_read1311_rewind_phi_fu_46579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1241_V_read1311_rewind_phi_fu_46579_p6 = data_1241_V_read1311_phi_reg_90148.read();
    } else {
        ap_phi_mux_data_1241_V_read1311_rewind_phi_fu_46579_p6 = data_1241_V_read1311_rewind_reg_46575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1242_V_read1312_phi_phi_fu_90165_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1242_V_read1312_phi_phi_fu_90165_p4 = ap_phi_mux_data_1242_V_read1312_rewind_phi_fu_46593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1242_V_read1312_phi_phi_fu_90165_p4 = data_1242_V_read.read();
        } else {
            ap_phi_mux_data_1242_V_read1312_phi_phi_fu_90165_p4 = ap_phi_reg_pp0_iter0_data_1242_V_read1312_phi_reg_90161.read();
        }
    } else {
        ap_phi_mux_data_1242_V_read1312_phi_phi_fu_90165_p4 = ap_phi_reg_pp0_iter0_data_1242_V_read1312_phi_reg_90161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1242_V_read1312_rewind_phi_fu_46593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1242_V_read1312_rewind_phi_fu_46593_p6 = data_1242_V_read1312_phi_reg_90161.read();
    } else {
        ap_phi_mux_data_1242_V_read1312_rewind_phi_fu_46593_p6 = data_1242_V_read1312_rewind_reg_46589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1243_V_read1313_phi_phi_fu_90178_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1243_V_read1313_phi_phi_fu_90178_p4 = ap_phi_mux_data_1243_V_read1313_rewind_phi_fu_46607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1243_V_read1313_phi_phi_fu_90178_p4 = data_1243_V_read.read();
        } else {
            ap_phi_mux_data_1243_V_read1313_phi_phi_fu_90178_p4 = ap_phi_reg_pp0_iter0_data_1243_V_read1313_phi_reg_90174.read();
        }
    } else {
        ap_phi_mux_data_1243_V_read1313_phi_phi_fu_90178_p4 = ap_phi_reg_pp0_iter0_data_1243_V_read1313_phi_reg_90174.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1243_V_read1313_rewind_phi_fu_46607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1243_V_read1313_rewind_phi_fu_46607_p6 = data_1243_V_read1313_phi_reg_90174.read();
    } else {
        ap_phi_mux_data_1243_V_read1313_rewind_phi_fu_46607_p6 = data_1243_V_read1313_rewind_reg_46603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1244_V_read1314_phi_phi_fu_90191_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1244_V_read1314_phi_phi_fu_90191_p4 = ap_phi_mux_data_1244_V_read1314_rewind_phi_fu_46621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1244_V_read1314_phi_phi_fu_90191_p4 = data_1244_V_read.read();
        } else {
            ap_phi_mux_data_1244_V_read1314_phi_phi_fu_90191_p4 = ap_phi_reg_pp0_iter0_data_1244_V_read1314_phi_reg_90187.read();
        }
    } else {
        ap_phi_mux_data_1244_V_read1314_phi_phi_fu_90191_p4 = ap_phi_reg_pp0_iter0_data_1244_V_read1314_phi_reg_90187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1244_V_read1314_rewind_phi_fu_46621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1244_V_read1314_rewind_phi_fu_46621_p6 = data_1244_V_read1314_phi_reg_90187.read();
    } else {
        ap_phi_mux_data_1244_V_read1314_rewind_phi_fu_46621_p6 = data_1244_V_read1314_rewind_reg_46617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1245_V_read1315_phi_phi_fu_90204_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1245_V_read1315_phi_phi_fu_90204_p4 = ap_phi_mux_data_1245_V_read1315_rewind_phi_fu_46635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1245_V_read1315_phi_phi_fu_90204_p4 = data_1245_V_read.read();
        } else {
            ap_phi_mux_data_1245_V_read1315_phi_phi_fu_90204_p4 = ap_phi_reg_pp0_iter0_data_1245_V_read1315_phi_reg_90200.read();
        }
    } else {
        ap_phi_mux_data_1245_V_read1315_phi_phi_fu_90204_p4 = ap_phi_reg_pp0_iter0_data_1245_V_read1315_phi_reg_90200.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1245_V_read1315_rewind_phi_fu_46635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1245_V_read1315_rewind_phi_fu_46635_p6 = data_1245_V_read1315_phi_reg_90200.read();
    } else {
        ap_phi_mux_data_1245_V_read1315_rewind_phi_fu_46635_p6 = data_1245_V_read1315_rewind_reg_46631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1246_V_read1316_phi_phi_fu_90217_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1246_V_read1316_phi_phi_fu_90217_p4 = ap_phi_mux_data_1246_V_read1316_rewind_phi_fu_46649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1246_V_read1316_phi_phi_fu_90217_p4 = data_1246_V_read.read();
        } else {
            ap_phi_mux_data_1246_V_read1316_phi_phi_fu_90217_p4 = ap_phi_reg_pp0_iter0_data_1246_V_read1316_phi_reg_90213.read();
        }
    } else {
        ap_phi_mux_data_1246_V_read1316_phi_phi_fu_90217_p4 = ap_phi_reg_pp0_iter0_data_1246_V_read1316_phi_reg_90213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1246_V_read1316_rewind_phi_fu_46649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1246_V_read1316_rewind_phi_fu_46649_p6 = data_1246_V_read1316_phi_reg_90213.read();
    } else {
        ap_phi_mux_data_1246_V_read1316_rewind_phi_fu_46649_p6 = data_1246_V_read1316_rewind_reg_46645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1247_V_read1317_phi_phi_fu_90230_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1247_V_read1317_phi_phi_fu_90230_p4 = ap_phi_mux_data_1247_V_read1317_rewind_phi_fu_46663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1247_V_read1317_phi_phi_fu_90230_p4 = data_1247_V_read.read();
        } else {
            ap_phi_mux_data_1247_V_read1317_phi_phi_fu_90230_p4 = ap_phi_reg_pp0_iter0_data_1247_V_read1317_phi_reg_90226.read();
        }
    } else {
        ap_phi_mux_data_1247_V_read1317_phi_phi_fu_90230_p4 = ap_phi_reg_pp0_iter0_data_1247_V_read1317_phi_reg_90226.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1247_V_read1317_rewind_phi_fu_46663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1247_V_read1317_rewind_phi_fu_46663_p6 = data_1247_V_read1317_phi_reg_90226.read();
    } else {
        ap_phi_mux_data_1247_V_read1317_rewind_phi_fu_46663_p6 = data_1247_V_read1317_rewind_reg_46659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1248_V_read1318_phi_phi_fu_90243_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1248_V_read1318_phi_phi_fu_90243_p4 = ap_phi_mux_data_1248_V_read1318_rewind_phi_fu_46677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1248_V_read1318_phi_phi_fu_90243_p4 = data_1248_V_read.read();
        } else {
            ap_phi_mux_data_1248_V_read1318_phi_phi_fu_90243_p4 = ap_phi_reg_pp0_iter0_data_1248_V_read1318_phi_reg_90239.read();
        }
    } else {
        ap_phi_mux_data_1248_V_read1318_phi_phi_fu_90243_p4 = ap_phi_reg_pp0_iter0_data_1248_V_read1318_phi_reg_90239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1248_V_read1318_rewind_phi_fu_46677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1248_V_read1318_rewind_phi_fu_46677_p6 = data_1248_V_read1318_phi_reg_90239.read();
    } else {
        ap_phi_mux_data_1248_V_read1318_rewind_phi_fu_46677_p6 = data_1248_V_read1318_rewind_reg_46673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1249_V_read1319_phi_phi_fu_90256_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1249_V_read1319_phi_phi_fu_90256_p4 = ap_phi_mux_data_1249_V_read1319_rewind_phi_fu_46691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1249_V_read1319_phi_phi_fu_90256_p4 = data_1249_V_read.read();
        } else {
            ap_phi_mux_data_1249_V_read1319_phi_phi_fu_90256_p4 = ap_phi_reg_pp0_iter0_data_1249_V_read1319_phi_reg_90252.read();
        }
    } else {
        ap_phi_mux_data_1249_V_read1319_phi_phi_fu_90256_p4 = ap_phi_reg_pp0_iter0_data_1249_V_read1319_phi_reg_90252.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1249_V_read1319_rewind_phi_fu_46691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1249_V_read1319_rewind_phi_fu_46691_p6 = data_1249_V_read1319_phi_reg_90252.read();
    } else {
        ap_phi_mux_data_1249_V_read1319_rewind_phi_fu_46691_p6 = data_1249_V_read1319_rewind_reg_46687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_124_V_read194_phi_phi_fu_75631_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_124_V_read194_phi_phi_fu_75631_p4 = ap_phi_mux_data_124_V_read194_rewind_phi_fu_30941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_124_V_read194_phi_phi_fu_75631_p4 = data_124_V_read.read();
        } else {
            ap_phi_mux_data_124_V_read194_phi_phi_fu_75631_p4 = ap_phi_reg_pp0_iter0_data_124_V_read194_phi_reg_75627.read();
        }
    } else {
        ap_phi_mux_data_124_V_read194_phi_phi_fu_75631_p4 = ap_phi_reg_pp0_iter0_data_124_V_read194_phi_reg_75627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_124_V_read194_rewind_phi_fu_30941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_124_V_read194_rewind_phi_fu_30941_p6 = data_124_V_read194_phi_reg_75627.read();
    } else {
        ap_phi_mux_data_124_V_read194_rewind_phi_fu_30941_p6 = data_124_V_read194_rewind_reg_30937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1250_V_read1320_phi_phi_fu_90269_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1250_V_read1320_phi_phi_fu_90269_p4 = ap_phi_mux_data_1250_V_read1320_rewind_phi_fu_46705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1250_V_read1320_phi_phi_fu_90269_p4 = data_1250_V_read.read();
        } else {
            ap_phi_mux_data_1250_V_read1320_phi_phi_fu_90269_p4 = ap_phi_reg_pp0_iter0_data_1250_V_read1320_phi_reg_90265.read();
        }
    } else {
        ap_phi_mux_data_1250_V_read1320_phi_phi_fu_90269_p4 = ap_phi_reg_pp0_iter0_data_1250_V_read1320_phi_reg_90265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1250_V_read1320_rewind_phi_fu_46705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1250_V_read1320_rewind_phi_fu_46705_p6 = data_1250_V_read1320_phi_reg_90265.read();
    } else {
        ap_phi_mux_data_1250_V_read1320_rewind_phi_fu_46705_p6 = data_1250_V_read1320_rewind_reg_46701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1251_V_read1321_phi_phi_fu_90282_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1251_V_read1321_phi_phi_fu_90282_p4 = ap_phi_mux_data_1251_V_read1321_rewind_phi_fu_46719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1251_V_read1321_phi_phi_fu_90282_p4 = data_1251_V_read.read();
        } else {
            ap_phi_mux_data_1251_V_read1321_phi_phi_fu_90282_p4 = ap_phi_reg_pp0_iter0_data_1251_V_read1321_phi_reg_90278.read();
        }
    } else {
        ap_phi_mux_data_1251_V_read1321_phi_phi_fu_90282_p4 = ap_phi_reg_pp0_iter0_data_1251_V_read1321_phi_reg_90278.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1251_V_read1321_rewind_phi_fu_46719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1251_V_read1321_rewind_phi_fu_46719_p6 = data_1251_V_read1321_phi_reg_90278.read();
    } else {
        ap_phi_mux_data_1251_V_read1321_rewind_phi_fu_46719_p6 = data_1251_V_read1321_rewind_reg_46715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1252_V_read1322_phi_phi_fu_90295_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1252_V_read1322_phi_phi_fu_90295_p4 = ap_phi_mux_data_1252_V_read1322_rewind_phi_fu_46733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1252_V_read1322_phi_phi_fu_90295_p4 = data_1252_V_read.read();
        } else {
            ap_phi_mux_data_1252_V_read1322_phi_phi_fu_90295_p4 = ap_phi_reg_pp0_iter0_data_1252_V_read1322_phi_reg_90291.read();
        }
    } else {
        ap_phi_mux_data_1252_V_read1322_phi_phi_fu_90295_p4 = ap_phi_reg_pp0_iter0_data_1252_V_read1322_phi_reg_90291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1252_V_read1322_rewind_phi_fu_46733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1252_V_read1322_rewind_phi_fu_46733_p6 = data_1252_V_read1322_phi_reg_90291.read();
    } else {
        ap_phi_mux_data_1252_V_read1322_rewind_phi_fu_46733_p6 = data_1252_V_read1322_rewind_reg_46729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1253_V_read1323_phi_phi_fu_90308_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1253_V_read1323_phi_phi_fu_90308_p4 = ap_phi_mux_data_1253_V_read1323_rewind_phi_fu_46747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1253_V_read1323_phi_phi_fu_90308_p4 = data_1253_V_read.read();
        } else {
            ap_phi_mux_data_1253_V_read1323_phi_phi_fu_90308_p4 = ap_phi_reg_pp0_iter0_data_1253_V_read1323_phi_reg_90304.read();
        }
    } else {
        ap_phi_mux_data_1253_V_read1323_phi_phi_fu_90308_p4 = ap_phi_reg_pp0_iter0_data_1253_V_read1323_phi_reg_90304.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1253_V_read1323_rewind_phi_fu_46747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1253_V_read1323_rewind_phi_fu_46747_p6 = data_1253_V_read1323_phi_reg_90304.read();
    } else {
        ap_phi_mux_data_1253_V_read1323_rewind_phi_fu_46747_p6 = data_1253_V_read1323_rewind_reg_46743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1254_V_read1324_phi_phi_fu_90321_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1254_V_read1324_phi_phi_fu_90321_p4 = ap_phi_mux_data_1254_V_read1324_rewind_phi_fu_46761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1254_V_read1324_phi_phi_fu_90321_p4 = data_1254_V_read.read();
        } else {
            ap_phi_mux_data_1254_V_read1324_phi_phi_fu_90321_p4 = ap_phi_reg_pp0_iter0_data_1254_V_read1324_phi_reg_90317.read();
        }
    } else {
        ap_phi_mux_data_1254_V_read1324_phi_phi_fu_90321_p4 = ap_phi_reg_pp0_iter0_data_1254_V_read1324_phi_reg_90317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1254_V_read1324_rewind_phi_fu_46761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1254_V_read1324_rewind_phi_fu_46761_p6 = data_1254_V_read1324_phi_reg_90317.read();
    } else {
        ap_phi_mux_data_1254_V_read1324_rewind_phi_fu_46761_p6 = data_1254_V_read1324_rewind_reg_46757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1255_V_read1325_phi_phi_fu_90334_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1255_V_read1325_phi_phi_fu_90334_p4 = ap_phi_mux_data_1255_V_read1325_rewind_phi_fu_46775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1255_V_read1325_phi_phi_fu_90334_p4 = data_1255_V_read.read();
        } else {
            ap_phi_mux_data_1255_V_read1325_phi_phi_fu_90334_p4 = ap_phi_reg_pp0_iter0_data_1255_V_read1325_phi_reg_90330.read();
        }
    } else {
        ap_phi_mux_data_1255_V_read1325_phi_phi_fu_90334_p4 = ap_phi_reg_pp0_iter0_data_1255_V_read1325_phi_reg_90330.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1255_V_read1325_rewind_phi_fu_46775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1255_V_read1325_rewind_phi_fu_46775_p6 = data_1255_V_read1325_phi_reg_90330.read();
    } else {
        ap_phi_mux_data_1255_V_read1325_rewind_phi_fu_46775_p6 = data_1255_V_read1325_rewind_reg_46771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1256_V_read1326_phi_phi_fu_90347_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1256_V_read1326_phi_phi_fu_90347_p4 = ap_phi_mux_data_1256_V_read1326_rewind_phi_fu_46789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1256_V_read1326_phi_phi_fu_90347_p4 = data_1256_V_read.read();
        } else {
            ap_phi_mux_data_1256_V_read1326_phi_phi_fu_90347_p4 = ap_phi_reg_pp0_iter0_data_1256_V_read1326_phi_reg_90343.read();
        }
    } else {
        ap_phi_mux_data_1256_V_read1326_phi_phi_fu_90347_p4 = ap_phi_reg_pp0_iter0_data_1256_V_read1326_phi_reg_90343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1256_V_read1326_rewind_phi_fu_46789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1256_V_read1326_rewind_phi_fu_46789_p6 = data_1256_V_read1326_phi_reg_90343.read();
    } else {
        ap_phi_mux_data_1256_V_read1326_rewind_phi_fu_46789_p6 = data_1256_V_read1326_rewind_reg_46785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1257_V_read1327_phi_phi_fu_90360_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1257_V_read1327_phi_phi_fu_90360_p4 = ap_phi_mux_data_1257_V_read1327_rewind_phi_fu_46803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1257_V_read1327_phi_phi_fu_90360_p4 = data_1257_V_read.read();
        } else {
            ap_phi_mux_data_1257_V_read1327_phi_phi_fu_90360_p4 = ap_phi_reg_pp0_iter0_data_1257_V_read1327_phi_reg_90356.read();
        }
    } else {
        ap_phi_mux_data_1257_V_read1327_phi_phi_fu_90360_p4 = ap_phi_reg_pp0_iter0_data_1257_V_read1327_phi_reg_90356.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1257_V_read1327_rewind_phi_fu_46803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1257_V_read1327_rewind_phi_fu_46803_p6 = data_1257_V_read1327_phi_reg_90356.read();
    } else {
        ap_phi_mux_data_1257_V_read1327_rewind_phi_fu_46803_p6 = data_1257_V_read1327_rewind_reg_46799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1258_V_read1328_phi_phi_fu_90373_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1258_V_read1328_phi_phi_fu_90373_p4 = ap_phi_mux_data_1258_V_read1328_rewind_phi_fu_46817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1258_V_read1328_phi_phi_fu_90373_p4 = data_1258_V_read.read();
        } else {
            ap_phi_mux_data_1258_V_read1328_phi_phi_fu_90373_p4 = ap_phi_reg_pp0_iter0_data_1258_V_read1328_phi_reg_90369.read();
        }
    } else {
        ap_phi_mux_data_1258_V_read1328_phi_phi_fu_90373_p4 = ap_phi_reg_pp0_iter0_data_1258_V_read1328_phi_reg_90369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1258_V_read1328_rewind_phi_fu_46817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1258_V_read1328_rewind_phi_fu_46817_p6 = data_1258_V_read1328_phi_reg_90369.read();
    } else {
        ap_phi_mux_data_1258_V_read1328_rewind_phi_fu_46817_p6 = data_1258_V_read1328_rewind_reg_46813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1259_V_read1329_phi_phi_fu_90386_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1259_V_read1329_phi_phi_fu_90386_p4 = ap_phi_mux_data_1259_V_read1329_rewind_phi_fu_46831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1259_V_read1329_phi_phi_fu_90386_p4 = data_1259_V_read.read();
        } else {
            ap_phi_mux_data_1259_V_read1329_phi_phi_fu_90386_p4 = ap_phi_reg_pp0_iter0_data_1259_V_read1329_phi_reg_90382.read();
        }
    } else {
        ap_phi_mux_data_1259_V_read1329_phi_phi_fu_90386_p4 = ap_phi_reg_pp0_iter0_data_1259_V_read1329_phi_reg_90382.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1259_V_read1329_rewind_phi_fu_46831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1259_V_read1329_rewind_phi_fu_46831_p6 = data_1259_V_read1329_phi_reg_90382.read();
    } else {
        ap_phi_mux_data_1259_V_read1329_rewind_phi_fu_46831_p6 = data_1259_V_read1329_rewind_reg_46827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_125_V_read195_phi_phi_fu_75644_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_125_V_read195_phi_phi_fu_75644_p4 = ap_phi_mux_data_125_V_read195_rewind_phi_fu_30955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_125_V_read195_phi_phi_fu_75644_p4 = data_125_V_read.read();
        } else {
            ap_phi_mux_data_125_V_read195_phi_phi_fu_75644_p4 = ap_phi_reg_pp0_iter0_data_125_V_read195_phi_reg_75640.read();
        }
    } else {
        ap_phi_mux_data_125_V_read195_phi_phi_fu_75644_p4 = ap_phi_reg_pp0_iter0_data_125_V_read195_phi_reg_75640.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_125_V_read195_rewind_phi_fu_30955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_125_V_read195_rewind_phi_fu_30955_p6 = data_125_V_read195_phi_reg_75640.read();
    } else {
        ap_phi_mux_data_125_V_read195_rewind_phi_fu_30955_p6 = data_125_V_read195_rewind_reg_30951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1260_V_read1330_phi_phi_fu_90399_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1260_V_read1330_phi_phi_fu_90399_p4 = ap_phi_mux_data_1260_V_read1330_rewind_phi_fu_46845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1260_V_read1330_phi_phi_fu_90399_p4 = data_1260_V_read.read();
        } else {
            ap_phi_mux_data_1260_V_read1330_phi_phi_fu_90399_p4 = ap_phi_reg_pp0_iter0_data_1260_V_read1330_phi_reg_90395.read();
        }
    } else {
        ap_phi_mux_data_1260_V_read1330_phi_phi_fu_90399_p4 = ap_phi_reg_pp0_iter0_data_1260_V_read1330_phi_reg_90395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1260_V_read1330_rewind_phi_fu_46845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1260_V_read1330_rewind_phi_fu_46845_p6 = data_1260_V_read1330_phi_reg_90395.read();
    } else {
        ap_phi_mux_data_1260_V_read1330_rewind_phi_fu_46845_p6 = data_1260_V_read1330_rewind_reg_46841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1261_V_read1331_phi_phi_fu_90412_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1261_V_read1331_phi_phi_fu_90412_p4 = ap_phi_mux_data_1261_V_read1331_rewind_phi_fu_46859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1261_V_read1331_phi_phi_fu_90412_p4 = data_1261_V_read.read();
        } else {
            ap_phi_mux_data_1261_V_read1331_phi_phi_fu_90412_p4 = ap_phi_reg_pp0_iter0_data_1261_V_read1331_phi_reg_90408.read();
        }
    } else {
        ap_phi_mux_data_1261_V_read1331_phi_phi_fu_90412_p4 = ap_phi_reg_pp0_iter0_data_1261_V_read1331_phi_reg_90408.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1261_V_read1331_rewind_phi_fu_46859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1261_V_read1331_rewind_phi_fu_46859_p6 = data_1261_V_read1331_phi_reg_90408.read();
    } else {
        ap_phi_mux_data_1261_V_read1331_rewind_phi_fu_46859_p6 = data_1261_V_read1331_rewind_reg_46855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1262_V_read1332_phi_phi_fu_90425_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1262_V_read1332_phi_phi_fu_90425_p4 = ap_phi_mux_data_1262_V_read1332_rewind_phi_fu_46873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1262_V_read1332_phi_phi_fu_90425_p4 = data_1262_V_read.read();
        } else {
            ap_phi_mux_data_1262_V_read1332_phi_phi_fu_90425_p4 = ap_phi_reg_pp0_iter0_data_1262_V_read1332_phi_reg_90421.read();
        }
    } else {
        ap_phi_mux_data_1262_V_read1332_phi_phi_fu_90425_p4 = ap_phi_reg_pp0_iter0_data_1262_V_read1332_phi_reg_90421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1262_V_read1332_rewind_phi_fu_46873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1262_V_read1332_rewind_phi_fu_46873_p6 = data_1262_V_read1332_phi_reg_90421.read();
    } else {
        ap_phi_mux_data_1262_V_read1332_rewind_phi_fu_46873_p6 = data_1262_V_read1332_rewind_reg_46869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1263_V_read1333_phi_phi_fu_90438_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1263_V_read1333_phi_phi_fu_90438_p4 = ap_phi_mux_data_1263_V_read1333_rewind_phi_fu_46887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1263_V_read1333_phi_phi_fu_90438_p4 = data_1263_V_read.read();
        } else {
            ap_phi_mux_data_1263_V_read1333_phi_phi_fu_90438_p4 = ap_phi_reg_pp0_iter0_data_1263_V_read1333_phi_reg_90434.read();
        }
    } else {
        ap_phi_mux_data_1263_V_read1333_phi_phi_fu_90438_p4 = ap_phi_reg_pp0_iter0_data_1263_V_read1333_phi_reg_90434.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1263_V_read1333_rewind_phi_fu_46887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1263_V_read1333_rewind_phi_fu_46887_p6 = data_1263_V_read1333_phi_reg_90434.read();
    } else {
        ap_phi_mux_data_1263_V_read1333_rewind_phi_fu_46887_p6 = data_1263_V_read1333_rewind_reg_46883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1264_V_read1334_phi_phi_fu_90451_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1264_V_read1334_phi_phi_fu_90451_p4 = ap_phi_mux_data_1264_V_read1334_rewind_phi_fu_46901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1264_V_read1334_phi_phi_fu_90451_p4 = data_1264_V_read.read();
        } else {
            ap_phi_mux_data_1264_V_read1334_phi_phi_fu_90451_p4 = ap_phi_reg_pp0_iter0_data_1264_V_read1334_phi_reg_90447.read();
        }
    } else {
        ap_phi_mux_data_1264_V_read1334_phi_phi_fu_90451_p4 = ap_phi_reg_pp0_iter0_data_1264_V_read1334_phi_reg_90447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1264_V_read1334_rewind_phi_fu_46901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1264_V_read1334_rewind_phi_fu_46901_p6 = data_1264_V_read1334_phi_reg_90447.read();
    } else {
        ap_phi_mux_data_1264_V_read1334_rewind_phi_fu_46901_p6 = data_1264_V_read1334_rewind_reg_46897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1265_V_read1335_phi_phi_fu_90464_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1265_V_read1335_phi_phi_fu_90464_p4 = ap_phi_mux_data_1265_V_read1335_rewind_phi_fu_46915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1265_V_read1335_phi_phi_fu_90464_p4 = data_1265_V_read.read();
        } else {
            ap_phi_mux_data_1265_V_read1335_phi_phi_fu_90464_p4 = ap_phi_reg_pp0_iter0_data_1265_V_read1335_phi_reg_90460.read();
        }
    } else {
        ap_phi_mux_data_1265_V_read1335_phi_phi_fu_90464_p4 = ap_phi_reg_pp0_iter0_data_1265_V_read1335_phi_reg_90460.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1265_V_read1335_rewind_phi_fu_46915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1265_V_read1335_rewind_phi_fu_46915_p6 = data_1265_V_read1335_phi_reg_90460.read();
    } else {
        ap_phi_mux_data_1265_V_read1335_rewind_phi_fu_46915_p6 = data_1265_V_read1335_rewind_reg_46911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1266_V_read1336_phi_phi_fu_90477_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1266_V_read1336_phi_phi_fu_90477_p4 = ap_phi_mux_data_1266_V_read1336_rewind_phi_fu_46929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1266_V_read1336_phi_phi_fu_90477_p4 = data_1266_V_read.read();
        } else {
            ap_phi_mux_data_1266_V_read1336_phi_phi_fu_90477_p4 = ap_phi_reg_pp0_iter0_data_1266_V_read1336_phi_reg_90473.read();
        }
    } else {
        ap_phi_mux_data_1266_V_read1336_phi_phi_fu_90477_p4 = ap_phi_reg_pp0_iter0_data_1266_V_read1336_phi_reg_90473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1266_V_read1336_rewind_phi_fu_46929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1266_V_read1336_rewind_phi_fu_46929_p6 = data_1266_V_read1336_phi_reg_90473.read();
    } else {
        ap_phi_mux_data_1266_V_read1336_rewind_phi_fu_46929_p6 = data_1266_V_read1336_rewind_reg_46925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1267_V_read1337_phi_phi_fu_90490_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1267_V_read1337_phi_phi_fu_90490_p4 = ap_phi_mux_data_1267_V_read1337_rewind_phi_fu_46943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1267_V_read1337_phi_phi_fu_90490_p4 = data_1267_V_read.read();
        } else {
            ap_phi_mux_data_1267_V_read1337_phi_phi_fu_90490_p4 = ap_phi_reg_pp0_iter0_data_1267_V_read1337_phi_reg_90486.read();
        }
    } else {
        ap_phi_mux_data_1267_V_read1337_phi_phi_fu_90490_p4 = ap_phi_reg_pp0_iter0_data_1267_V_read1337_phi_reg_90486.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1267_V_read1337_rewind_phi_fu_46943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1267_V_read1337_rewind_phi_fu_46943_p6 = data_1267_V_read1337_phi_reg_90486.read();
    } else {
        ap_phi_mux_data_1267_V_read1337_rewind_phi_fu_46943_p6 = data_1267_V_read1337_rewind_reg_46939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1268_V_read1338_phi_phi_fu_90503_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1268_V_read1338_phi_phi_fu_90503_p4 = ap_phi_mux_data_1268_V_read1338_rewind_phi_fu_46957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1268_V_read1338_phi_phi_fu_90503_p4 = data_1268_V_read.read();
        } else {
            ap_phi_mux_data_1268_V_read1338_phi_phi_fu_90503_p4 = ap_phi_reg_pp0_iter0_data_1268_V_read1338_phi_reg_90499.read();
        }
    } else {
        ap_phi_mux_data_1268_V_read1338_phi_phi_fu_90503_p4 = ap_phi_reg_pp0_iter0_data_1268_V_read1338_phi_reg_90499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1268_V_read1338_rewind_phi_fu_46957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1268_V_read1338_rewind_phi_fu_46957_p6 = data_1268_V_read1338_phi_reg_90499.read();
    } else {
        ap_phi_mux_data_1268_V_read1338_rewind_phi_fu_46957_p6 = data_1268_V_read1338_rewind_reg_46953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1269_V_read1339_phi_phi_fu_90516_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1269_V_read1339_phi_phi_fu_90516_p4 = ap_phi_mux_data_1269_V_read1339_rewind_phi_fu_46971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1269_V_read1339_phi_phi_fu_90516_p4 = data_1269_V_read.read();
        } else {
            ap_phi_mux_data_1269_V_read1339_phi_phi_fu_90516_p4 = ap_phi_reg_pp0_iter0_data_1269_V_read1339_phi_reg_90512.read();
        }
    } else {
        ap_phi_mux_data_1269_V_read1339_phi_phi_fu_90516_p4 = ap_phi_reg_pp0_iter0_data_1269_V_read1339_phi_reg_90512.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1269_V_read1339_rewind_phi_fu_46971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1269_V_read1339_rewind_phi_fu_46971_p6 = data_1269_V_read1339_phi_reg_90512.read();
    } else {
        ap_phi_mux_data_1269_V_read1339_rewind_phi_fu_46971_p6 = data_1269_V_read1339_rewind_reg_46967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_126_V_read196_phi_phi_fu_75657_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_126_V_read196_phi_phi_fu_75657_p4 = ap_phi_mux_data_126_V_read196_rewind_phi_fu_30969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_126_V_read196_phi_phi_fu_75657_p4 = data_126_V_read.read();
        } else {
            ap_phi_mux_data_126_V_read196_phi_phi_fu_75657_p4 = ap_phi_reg_pp0_iter0_data_126_V_read196_phi_reg_75653.read();
        }
    } else {
        ap_phi_mux_data_126_V_read196_phi_phi_fu_75657_p4 = ap_phi_reg_pp0_iter0_data_126_V_read196_phi_reg_75653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_126_V_read196_rewind_phi_fu_30969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_126_V_read196_rewind_phi_fu_30969_p6 = data_126_V_read196_phi_reg_75653.read();
    } else {
        ap_phi_mux_data_126_V_read196_rewind_phi_fu_30969_p6 = data_126_V_read196_rewind_reg_30965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1270_V_read1340_phi_phi_fu_90529_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1270_V_read1340_phi_phi_fu_90529_p4 = ap_phi_mux_data_1270_V_read1340_rewind_phi_fu_46985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1270_V_read1340_phi_phi_fu_90529_p4 = data_1270_V_read.read();
        } else {
            ap_phi_mux_data_1270_V_read1340_phi_phi_fu_90529_p4 = ap_phi_reg_pp0_iter0_data_1270_V_read1340_phi_reg_90525.read();
        }
    } else {
        ap_phi_mux_data_1270_V_read1340_phi_phi_fu_90529_p4 = ap_phi_reg_pp0_iter0_data_1270_V_read1340_phi_reg_90525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1270_V_read1340_rewind_phi_fu_46985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1270_V_read1340_rewind_phi_fu_46985_p6 = data_1270_V_read1340_phi_reg_90525.read();
    } else {
        ap_phi_mux_data_1270_V_read1340_rewind_phi_fu_46985_p6 = data_1270_V_read1340_rewind_reg_46981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1271_V_read1341_phi_phi_fu_90542_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1271_V_read1341_phi_phi_fu_90542_p4 = ap_phi_mux_data_1271_V_read1341_rewind_phi_fu_46999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1271_V_read1341_phi_phi_fu_90542_p4 = data_1271_V_read.read();
        } else {
            ap_phi_mux_data_1271_V_read1341_phi_phi_fu_90542_p4 = ap_phi_reg_pp0_iter0_data_1271_V_read1341_phi_reg_90538.read();
        }
    } else {
        ap_phi_mux_data_1271_V_read1341_phi_phi_fu_90542_p4 = ap_phi_reg_pp0_iter0_data_1271_V_read1341_phi_reg_90538.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1271_V_read1341_rewind_phi_fu_46999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1271_V_read1341_rewind_phi_fu_46999_p6 = data_1271_V_read1341_phi_reg_90538.read();
    } else {
        ap_phi_mux_data_1271_V_read1341_rewind_phi_fu_46999_p6 = data_1271_V_read1341_rewind_reg_46995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1272_V_read1342_phi_phi_fu_90555_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1272_V_read1342_phi_phi_fu_90555_p4 = ap_phi_mux_data_1272_V_read1342_rewind_phi_fu_47013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1272_V_read1342_phi_phi_fu_90555_p4 = data_1272_V_read.read();
        } else {
            ap_phi_mux_data_1272_V_read1342_phi_phi_fu_90555_p4 = ap_phi_reg_pp0_iter0_data_1272_V_read1342_phi_reg_90551.read();
        }
    } else {
        ap_phi_mux_data_1272_V_read1342_phi_phi_fu_90555_p4 = ap_phi_reg_pp0_iter0_data_1272_V_read1342_phi_reg_90551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1272_V_read1342_rewind_phi_fu_47013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1272_V_read1342_rewind_phi_fu_47013_p6 = data_1272_V_read1342_phi_reg_90551.read();
    } else {
        ap_phi_mux_data_1272_V_read1342_rewind_phi_fu_47013_p6 = data_1272_V_read1342_rewind_reg_47009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1273_V_read1343_phi_phi_fu_90568_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1273_V_read1343_phi_phi_fu_90568_p4 = ap_phi_mux_data_1273_V_read1343_rewind_phi_fu_47027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1273_V_read1343_phi_phi_fu_90568_p4 = data_1273_V_read.read();
        } else {
            ap_phi_mux_data_1273_V_read1343_phi_phi_fu_90568_p4 = ap_phi_reg_pp0_iter0_data_1273_V_read1343_phi_reg_90564.read();
        }
    } else {
        ap_phi_mux_data_1273_V_read1343_phi_phi_fu_90568_p4 = ap_phi_reg_pp0_iter0_data_1273_V_read1343_phi_reg_90564.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1273_V_read1343_rewind_phi_fu_47027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1273_V_read1343_rewind_phi_fu_47027_p6 = data_1273_V_read1343_phi_reg_90564.read();
    } else {
        ap_phi_mux_data_1273_V_read1343_rewind_phi_fu_47027_p6 = data_1273_V_read1343_rewind_reg_47023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1274_V_read1344_phi_phi_fu_90581_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1274_V_read1344_phi_phi_fu_90581_p4 = ap_phi_mux_data_1274_V_read1344_rewind_phi_fu_47041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1274_V_read1344_phi_phi_fu_90581_p4 = data_1274_V_read.read();
        } else {
            ap_phi_mux_data_1274_V_read1344_phi_phi_fu_90581_p4 = ap_phi_reg_pp0_iter0_data_1274_V_read1344_phi_reg_90577.read();
        }
    } else {
        ap_phi_mux_data_1274_V_read1344_phi_phi_fu_90581_p4 = ap_phi_reg_pp0_iter0_data_1274_V_read1344_phi_reg_90577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1274_V_read1344_rewind_phi_fu_47041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1274_V_read1344_rewind_phi_fu_47041_p6 = data_1274_V_read1344_phi_reg_90577.read();
    } else {
        ap_phi_mux_data_1274_V_read1344_rewind_phi_fu_47041_p6 = data_1274_V_read1344_rewind_reg_47037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1275_V_read1345_phi_phi_fu_90594_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1275_V_read1345_phi_phi_fu_90594_p4 = ap_phi_mux_data_1275_V_read1345_rewind_phi_fu_47055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1275_V_read1345_phi_phi_fu_90594_p4 = data_1275_V_read.read();
        } else {
            ap_phi_mux_data_1275_V_read1345_phi_phi_fu_90594_p4 = ap_phi_reg_pp0_iter0_data_1275_V_read1345_phi_reg_90590.read();
        }
    } else {
        ap_phi_mux_data_1275_V_read1345_phi_phi_fu_90594_p4 = ap_phi_reg_pp0_iter0_data_1275_V_read1345_phi_reg_90590.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1275_V_read1345_rewind_phi_fu_47055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1275_V_read1345_rewind_phi_fu_47055_p6 = data_1275_V_read1345_phi_reg_90590.read();
    } else {
        ap_phi_mux_data_1275_V_read1345_rewind_phi_fu_47055_p6 = data_1275_V_read1345_rewind_reg_47051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1276_V_read1346_phi_phi_fu_90607_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1276_V_read1346_phi_phi_fu_90607_p4 = ap_phi_mux_data_1276_V_read1346_rewind_phi_fu_47069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1276_V_read1346_phi_phi_fu_90607_p4 = data_1276_V_read.read();
        } else {
            ap_phi_mux_data_1276_V_read1346_phi_phi_fu_90607_p4 = ap_phi_reg_pp0_iter0_data_1276_V_read1346_phi_reg_90603.read();
        }
    } else {
        ap_phi_mux_data_1276_V_read1346_phi_phi_fu_90607_p4 = ap_phi_reg_pp0_iter0_data_1276_V_read1346_phi_reg_90603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1276_V_read1346_rewind_phi_fu_47069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1276_V_read1346_rewind_phi_fu_47069_p6 = data_1276_V_read1346_phi_reg_90603.read();
    } else {
        ap_phi_mux_data_1276_V_read1346_rewind_phi_fu_47069_p6 = data_1276_V_read1346_rewind_reg_47065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1277_V_read1347_phi_phi_fu_90620_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1277_V_read1347_phi_phi_fu_90620_p4 = ap_phi_mux_data_1277_V_read1347_rewind_phi_fu_47083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1277_V_read1347_phi_phi_fu_90620_p4 = data_1277_V_read.read();
        } else {
            ap_phi_mux_data_1277_V_read1347_phi_phi_fu_90620_p4 = ap_phi_reg_pp0_iter0_data_1277_V_read1347_phi_reg_90616.read();
        }
    } else {
        ap_phi_mux_data_1277_V_read1347_phi_phi_fu_90620_p4 = ap_phi_reg_pp0_iter0_data_1277_V_read1347_phi_reg_90616.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1277_V_read1347_rewind_phi_fu_47083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1277_V_read1347_rewind_phi_fu_47083_p6 = data_1277_V_read1347_phi_reg_90616.read();
    } else {
        ap_phi_mux_data_1277_V_read1347_rewind_phi_fu_47083_p6 = data_1277_V_read1347_rewind_reg_47079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1278_V_read1348_phi_phi_fu_90633_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1278_V_read1348_phi_phi_fu_90633_p4 = ap_phi_mux_data_1278_V_read1348_rewind_phi_fu_47097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1278_V_read1348_phi_phi_fu_90633_p4 = data_1278_V_read.read();
        } else {
            ap_phi_mux_data_1278_V_read1348_phi_phi_fu_90633_p4 = ap_phi_reg_pp0_iter0_data_1278_V_read1348_phi_reg_90629.read();
        }
    } else {
        ap_phi_mux_data_1278_V_read1348_phi_phi_fu_90633_p4 = ap_phi_reg_pp0_iter0_data_1278_V_read1348_phi_reg_90629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1278_V_read1348_rewind_phi_fu_47097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1278_V_read1348_rewind_phi_fu_47097_p6 = data_1278_V_read1348_phi_reg_90629.read();
    } else {
        ap_phi_mux_data_1278_V_read1348_rewind_phi_fu_47097_p6 = data_1278_V_read1348_rewind_reg_47093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1279_V_read1349_phi_phi_fu_90646_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1279_V_read1349_phi_phi_fu_90646_p4 = ap_phi_mux_data_1279_V_read1349_rewind_phi_fu_47111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1279_V_read1349_phi_phi_fu_90646_p4 = data_1279_V_read.read();
        } else {
            ap_phi_mux_data_1279_V_read1349_phi_phi_fu_90646_p4 = ap_phi_reg_pp0_iter0_data_1279_V_read1349_phi_reg_90642.read();
        }
    } else {
        ap_phi_mux_data_1279_V_read1349_phi_phi_fu_90646_p4 = ap_phi_reg_pp0_iter0_data_1279_V_read1349_phi_reg_90642.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1279_V_read1349_rewind_phi_fu_47111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1279_V_read1349_rewind_phi_fu_47111_p6 = data_1279_V_read1349_phi_reg_90642.read();
    } else {
        ap_phi_mux_data_1279_V_read1349_rewind_phi_fu_47111_p6 = data_1279_V_read1349_rewind_reg_47107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_127_V_read197_phi_phi_fu_75670_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_127_V_read197_phi_phi_fu_75670_p4 = ap_phi_mux_data_127_V_read197_rewind_phi_fu_30983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_127_V_read197_phi_phi_fu_75670_p4 = data_127_V_read.read();
        } else {
            ap_phi_mux_data_127_V_read197_phi_phi_fu_75670_p4 = ap_phi_reg_pp0_iter0_data_127_V_read197_phi_reg_75666.read();
        }
    } else {
        ap_phi_mux_data_127_V_read197_phi_phi_fu_75670_p4 = ap_phi_reg_pp0_iter0_data_127_V_read197_phi_reg_75666.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_127_V_read197_rewind_phi_fu_30983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_127_V_read197_rewind_phi_fu_30983_p6 = data_127_V_read197_phi_reg_75666.read();
    } else {
        ap_phi_mux_data_127_V_read197_rewind_phi_fu_30983_p6 = data_127_V_read197_rewind_reg_30979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1280_V_read1350_phi_phi_fu_90659_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1280_V_read1350_phi_phi_fu_90659_p4 = ap_phi_mux_data_1280_V_read1350_rewind_phi_fu_47125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1280_V_read1350_phi_phi_fu_90659_p4 = data_1280_V_read.read();
        } else {
            ap_phi_mux_data_1280_V_read1350_phi_phi_fu_90659_p4 = ap_phi_reg_pp0_iter0_data_1280_V_read1350_phi_reg_90655.read();
        }
    } else {
        ap_phi_mux_data_1280_V_read1350_phi_phi_fu_90659_p4 = ap_phi_reg_pp0_iter0_data_1280_V_read1350_phi_reg_90655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1280_V_read1350_rewind_phi_fu_47125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1280_V_read1350_rewind_phi_fu_47125_p6 = data_1280_V_read1350_phi_reg_90655.read();
    } else {
        ap_phi_mux_data_1280_V_read1350_rewind_phi_fu_47125_p6 = data_1280_V_read1350_rewind_reg_47121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1281_V_read1351_phi_phi_fu_90672_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1281_V_read1351_phi_phi_fu_90672_p4 = ap_phi_mux_data_1281_V_read1351_rewind_phi_fu_47139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1281_V_read1351_phi_phi_fu_90672_p4 = data_1281_V_read.read();
        } else {
            ap_phi_mux_data_1281_V_read1351_phi_phi_fu_90672_p4 = ap_phi_reg_pp0_iter0_data_1281_V_read1351_phi_reg_90668.read();
        }
    } else {
        ap_phi_mux_data_1281_V_read1351_phi_phi_fu_90672_p4 = ap_phi_reg_pp0_iter0_data_1281_V_read1351_phi_reg_90668.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1281_V_read1351_rewind_phi_fu_47139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1281_V_read1351_rewind_phi_fu_47139_p6 = data_1281_V_read1351_phi_reg_90668.read();
    } else {
        ap_phi_mux_data_1281_V_read1351_rewind_phi_fu_47139_p6 = data_1281_V_read1351_rewind_reg_47135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1282_V_read1352_phi_phi_fu_90685_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1282_V_read1352_phi_phi_fu_90685_p4 = ap_phi_mux_data_1282_V_read1352_rewind_phi_fu_47153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1282_V_read1352_phi_phi_fu_90685_p4 = data_1282_V_read.read();
        } else {
            ap_phi_mux_data_1282_V_read1352_phi_phi_fu_90685_p4 = ap_phi_reg_pp0_iter0_data_1282_V_read1352_phi_reg_90681.read();
        }
    } else {
        ap_phi_mux_data_1282_V_read1352_phi_phi_fu_90685_p4 = ap_phi_reg_pp0_iter0_data_1282_V_read1352_phi_reg_90681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1282_V_read1352_rewind_phi_fu_47153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1282_V_read1352_rewind_phi_fu_47153_p6 = data_1282_V_read1352_phi_reg_90681.read();
    } else {
        ap_phi_mux_data_1282_V_read1352_rewind_phi_fu_47153_p6 = data_1282_V_read1352_rewind_reg_47149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1283_V_read1353_phi_phi_fu_90698_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1283_V_read1353_phi_phi_fu_90698_p4 = ap_phi_mux_data_1283_V_read1353_rewind_phi_fu_47167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1283_V_read1353_phi_phi_fu_90698_p4 = data_1283_V_read.read();
        } else {
            ap_phi_mux_data_1283_V_read1353_phi_phi_fu_90698_p4 = ap_phi_reg_pp0_iter0_data_1283_V_read1353_phi_reg_90694.read();
        }
    } else {
        ap_phi_mux_data_1283_V_read1353_phi_phi_fu_90698_p4 = ap_phi_reg_pp0_iter0_data_1283_V_read1353_phi_reg_90694.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1283_V_read1353_rewind_phi_fu_47167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1283_V_read1353_rewind_phi_fu_47167_p6 = data_1283_V_read1353_phi_reg_90694.read();
    } else {
        ap_phi_mux_data_1283_V_read1353_rewind_phi_fu_47167_p6 = data_1283_V_read1353_rewind_reg_47163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1284_V_read1354_phi_phi_fu_90711_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1284_V_read1354_phi_phi_fu_90711_p4 = ap_phi_mux_data_1284_V_read1354_rewind_phi_fu_47181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1284_V_read1354_phi_phi_fu_90711_p4 = data_1284_V_read.read();
        } else {
            ap_phi_mux_data_1284_V_read1354_phi_phi_fu_90711_p4 = ap_phi_reg_pp0_iter0_data_1284_V_read1354_phi_reg_90707.read();
        }
    } else {
        ap_phi_mux_data_1284_V_read1354_phi_phi_fu_90711_p4 = ap_phi_reg_pp0_iter0_data_1284_V_read1354_phi_reg_90707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1284_V_read1354_rewind_phi_fu_47181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1284_V_read1354_rewind_phi_fu_47181_p6 = data_1284_V_read1354_phi_reg_90707.read();
    } else {
        ap_phi_mux_data_1284_V_read1354_rewind_phi_fu_47181_p6 = data_1284_V_read1354_rewind_reg_47177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1285_V_read1355_phi_phi_fu_90724_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1285_V_read1355_phi_phi_fu_90724_p4 = ap_phi_mux_data_1285_V_read1355_rewind_phi_fu_47195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1285_V_read1355_phi_phi_fu_90724_p4 = data_1285_V_read.read();
        } else {
            ap_phi_mux_data_1285_V_read1355_phi_phi_fu_90724_p4 = ap_phi_reg_pp0_iter0_data_1285_V_read1355_phi_reg_90720.read();
        }
    } else {
        ap_phi_mux_data_1285_V_read1355_phi_phi_fu_90724_p4 = ap_phi_reg_pp0_iter0_data_1285_V_read1355_phi_reg_90720.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1285_V_read1355_rewind_phi_fu_47195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1285_V_read1355_rewind_phi_fu_47195_p6 = data_1285_V_read1355_phi_reg_90720.read();
    } else {
        ap_phi_mux_data_1285_V_read1355_rewind_phi_fu_47195_p6 = data_1285_V_read1355_rewind_reg_47191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1286_V_read1356_phi_phi_fu_90737_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1286_V_read1356_phi_phi_fu_90737_p4 = ap_phi_mux_data_1286_V_read1356_rewind_phi_fu_47209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1286_V_read1356_phi_phi_fu_90737_p4 = data_1286_V_read.read();
        } else {
            ap_phi_mux_data_1286_V_read1356_phi_phi_fu_90737_p4 = ap_phi_reg_pp0_iter0_data_1286_V_read1356_phi_reg_90733.read();
        }
    } else {
        ap_phi_mux_data_1286_V_read1356_phi_phi_fu_90737_p4 = ap_phi_reg_pp0_iter0_data_1286_V_read1356_phi_reg_90733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1286_V_read1356_rewind_phi_fu_47209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1286_V_read1356_rewind_phi_fu_47209_p6 = data_1286_V_read1356_phi_reg_90733.read();
    } else {
        ap_phi_mux_data_1286_V_read1356_rewind_phi_fu_47209_p6 = data_1286_V_read1356_rewind_reg_47205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1287_V_read1357_phi_phi_fu_90750_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1287_V_read1357_phi_phi_fu_90750_p4 = ap_phi_mux_data_1287_V_read1357_rewind_phi_fu_47223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1287_V_read1357_phi_phi_fu_90750_p4 = data_1287_V_read.read();
        } else {
            ap_phi_mux_data_1287_V_read1357_phi_phi_fu_90750_p4 = ap_phi_reg_pp0_iter0_data_1287_V_read1357_phi_reg_90746.read();
        }
    } else {
        ap_phi_mux_data_1287_V_read1357_phi_phi_fu_90750_p4 = ap_phi_reg_pp0_iter0_data_1287_V_read1357_phi_reg_90746.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1287_V_read1357_rewind_phi_fu_47223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1287_V_read1357_rewind_phi_fu_47223_p6 = data_1287_V_read1357_phi_reg_90746.read();
    } else {
        ap_phi_mux_data_1287_V_read1357_rewind_phi_fu_47223_p6 = data_1287_V_read1357_rewind_reg_47219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1288_V_read1358_phi_phi_fu_90763_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1288_V_read1358_phi_phi_fu_90763_p4 = ap_phi_mux_data_1288_V_read1358_rewind_phi_fu_47237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1288_V_read1358_phi_phi_fu_90763_p4 = data_1288_V_read.read();
        } else {
            ap_phi_mux_data_1288_V_read1358_phi_phi_fu_90763_p4 = ap_phi_reg_pp0_iter0_data_1288_V_read1358_phi_reg_90759.read();
        }
    } else {
        ap_phi_mux_data_1288_V_read1358_phi_phi_fu_90763_p4 = ap_phi_reg_pp0_iter0_data_1288_V_read1358_phi_reg_90759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1288_V_read1358_rewind_phi_fu_47237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1288_V_read1358_rewind_phi_fu_47237_p6 = data_1288_V_read1358_phi_reg_90759.read();
    } else {
        ap_phi_mux_data_1288_V_read1358_rewind_phi_fu_47237_p6 = data_1288_V_read1358_rewind_reg_47233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1289_V_read1359_phi_phi_fu_90776_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1289_V_read1359_phi_phi_fu_90776_p4 = ap_phi_mux_data_1289_V_read1359_rewind_phi_fu_47251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1289_V_read1359_phi_phi_fu_90776_p4 = data_1289_V_read.read();
        } else {
            ap_phi_mux_data_1289_V_read1359_phi_phi_fu_90776_p4 = ap_phi_reg_pp0_iter0_data_1289_V_read1359_phi_reg_90772.read();
        }
    } else {
        ap_phi_mux_data_1289_V_read1359_phi_phi_fu_90776_p4 = ap_phi_reg_pp0_iter0_data_1289_V_read1359_phi_reg_90772.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1289_V_read1359_rewind_phi_fu_47251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1289_V_read1359_rewind_phi_fu_47251_p6 = data_1289_V_read1359_phi_reg_90772.read();
    } else {
        ap_phi_mux_data_1289_V_read1359_rewind_phi_fu_47251_p6 = data_1289_V_read1359_rewind_reg_47247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_128_V_read198_phi_phi_fu_75683_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_128_V_read198_phi_phi_fu_75683_p4 = ap_phi_mux_data_128_V_read198_rewind_phi_fu_30997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_128_V_read198_phi_phi_fu_75683_p4 = data_128_V_read.read();
        } else {
            ap_phi_mux_data_128_V_read198_phi_phi_fu_75683_p4 = ap_phi_reg_pp0_iter0_data_128_V_read198_phi_reg_75679.read();
        }
    } else {
        ap_phi_mux_data_128_V_read198_phi_phi_fu_75683_p4 = ap_phi_reg_pp0_iter0_data_128_V_read198_phi_reg_75679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_128_V_read198_rewind_phi_fu_30997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_128_V_read198_rewind_phi_fu_30997_p6 = data_128_V_read198_phi_reg_75679.read();
    } else {
        ap_phi_mux_data_128_V_read198_rewind_phi_fu_30997_p6 = data_128_V_read198_rewind_reg_30993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1290_V_read1360_phi_phi_fu_90789_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1290_V_read1360_phi_phi_fu_90789_p4 = ap_phi_mux_data_1290_V_read1360_rewind_phi_fu_47265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1290_V_read1360_phi_phi_fu_90789_p4 = data_1290_V_read.read();
        } else {
            ap_phi_mux_data_1290_V_read1360_phi_phi_fu_90789_p4 = ap_phi_reg_pp0_iter0_data_1290_V_read1360_phi_reg_90785.read();
        }
    } else {
        ap_phi_mux_data_1290_V_read1360_phi_phi_fu_90789_p4 = ap_phi_reg_pp0_iter0_data_1290_V_read1360_phi_reg_90785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1290_V_read1360_rewind_phi_fu_47265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1290_V_read1360_rewind_phi_fu_47265_p6 = data_1290_V_read1360_phi_reg_90785.read();
    } else {
        ap_phi_mux_data_1290_V_read1360_rewind_phi_fu_47265_p6 = data_1290_V_read1360_rewind_reg_47261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1291_V_read1361_phi_phi_fu_90802_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1291_V_read1361_phi_phi_fu_90802_p4 = ap_phi_mux_data_1291_V_read1361_rewind_phi_fu_47279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1291_V_read1361_phi_phi_fu_90802_p4 = data_1291_V_read.read();
        } else {
            ap_phi_mux_data_1291_V_read1361_phi_phi_fu_90802_p4 = ap_phi_reg_pp0_iter0_data_1291_V_read1361_phi_reg_90798.read();
        }
    } else {
        ap_phi_mux_data_1291_V_read1361_phi_phi_fu_90802_p4 = ap_phi_reg_pp0_iter0_data_1291_V_read1361_phi_reg_90798.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1291_V_read1361_rewind_phi_fu_47279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1291_V_read1361_rewind_phi_fu_47279_p6 = data_1291_V_read1361_phi_reg_90798.read();
    } else {
        ap_phi_mux_data_1291_V_read1361_rewind_phi_fu_47279_p6 = data_1291_V_read1361_rewind_reg_47275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1292_V_read1362_phi_phi_fu_90815_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1292_V_read1362_phi_phi_fu_90815_p4 = ap_phi_mux_data_1292_V_read1362_rewind_phi_fu_47293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1292_V_read1362_phi_phi_fu_90815_p4 = data_1292_V_read.read();
        } else {
            ap_phi_mux_data_1292_V_read1362_phi_phi_fu_90815_p4 = ap_phi_reg_pp0_iter0_data_1292_V_read1362_phi_reg_90811.read();
        }
    } else {
        ap_phi_mux_data_1292_V_read1362_phi_phi_fu_90815_p4 = ap_phi_reg_pp0_iter0_data_1292_V_read1362_phi_reg_90811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1292_V_read1362_rewind_phi_fu_47293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1292_V_read1362_rewind_phi_fu_47293_p6 = data_1292_V_read1362_phi_reg_90811.read();
    } else {
        ap_phi_mux_data_1292_V_read1362_rewind_phi_fu_47293_p6 = data_1292_V_read1362_rewind_reg_47289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1293_V_read1363_phi_phi_fu_90828_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1293_V_read1363_phi_phi_fu_90828_p4 = ap_phi_mux_data_1293_V_read1363_rewind_phi_fu_47307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1293_V_read1363_phi_phi_fu_90828_p4 = data_1293_V_read.read();
        } else {
            ap_phi_mux_data_1293_V_read1363_phi_phi_fu_90828_p4 = ap_phi_reg_pp0_iter0_data_1293_V_read1363_phi_reg_90824.read();
        }
    } else {
        ap_phi_mux_data_1293_V_read1363_phi_phi_fu_90828_p4 = ap_phi_reg_pp0_iter0_data_1293_V_read1363_phi_reg_90824.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1293_V_read1363_rewind_phi_fu_47307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1293_V_read1363_rewind_phi_fu_47307_p6 = data_1293_V_read1363_phi_reg_90824.read();
    } else {
        ap_phi_mux_data_1293_V_read1363_rewind_phi_fu_47307_p6 = data_1293_V_read1363_rewind_reg_47303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1294_V_read1364_phi_phi_fu_90841_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1294_V_read1364_phi_phi_fu_90841_p4 = ap_phi_mux_data_1294_V_read1364_rewind_phi_fu_47321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1294_V_read1364_phi_phi_fu_90841_p4 = data_1294_V_read.read();
        } else {
            ap_phi_mux_data_1294_V_read1364_phi_phi_fu_90841_p4 = ap_phi_reg_pp0_iter0_data_1294_V_read1364_phi_reg_90837.read();
        }
    } else {
        ap_phi_mux_data_1294_V_read1364_phi_phi_fu_90841_p4 = ap_phi_reg_pp0_iter0_data_1294_V_read1364_phi_reg_90837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1294_V_read1364_rewind_phi_fu_47321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1294_V_read1364_rewind_phi_fu_47321_p6 = data_1294_V_read1364_phi_reg_90837.read();
    } else {
        ap_phi_mux_data_1294_V_read1364_rewind_phi_fu_47321_p6 = data_1294_V_read1364_rewind_reg_47317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1295_V_read1365_phi_phi_fu_90854_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1295_V_read1365_phi_phi_fu_90854_p4 = ap_phi_mux_data_1295_V_read1365_rewind_phi_fu_47335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1295_V_read1365_phi_phi_fu_90854_p4 = data_1295_V_read.read();
        } else {
            ap_phi_mux_data_1295_V_read1365_phi_phi_fu_90854_p4 = ap_phi_reg_pp0_iter0_data_1295_V_read1365_phi_reg_90850.read();
        }
    } else {
        ap_phi_mux_data_1295_V_read1365_phi_phi_fu_90854_p4 = ap_phi_reg_pp0_iter0_data_1295_V_read1365_phi_reg_90850.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1295_V_read1365_rewind_phi_fu_47335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1295_V_read1365_rewind_phi_fu_47335_p6 = data_1295_V_read1365_phi_reg_90850.read();
    } else {
        ap_phi_mux_data_1295_V_read1365_rewind_phi_fu_47335_p6 = data_1295_V_read1365_rewind_reg_47331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1296_V_read1366_phi_phi_fu_90867_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1296_V_read1366_phi_phi_fu_90867_p4 = ap_phi_mux_data_1296_V_read1366_rewind_phi_fu_47349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1296_V_read1366_phi_phi_fu_90867_p4 = data_1296_V_read.read();
        } else {
            ap_phi_mux_data_1296_V_read1366_phi_phi_fu_90867_p4 = ap_phi_reg_pp0_iter0_data_1296_V_read1366_phi_reg_90863.read();
        }
    } else {
        ap_phi_mux_data_1296_V_read1366_phi_phi_fu_90867_p4 = ap_phi_reg_pp0_iter0_data_1296_V_read1366_phi_reg_90863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1296_V_read1366_rewind_phi_fu_47349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1296_V_read1366_rewind_phi_fu_47349_p6 = data_1296_V_read1366_phi_reg_90863.read();
    } else {
        ap_phi_mux_data_1296_V_read1366_rewind_phi_fu_47349_p6 = data_1296_V_read1366_rewind_reg_47345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1297_V_read1367_phi_phi_fu_90880_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1297_V_read1367_phi_phi_fu_90880_p4 = ap_phi_mux_data_1297_V_read1367_rewind_phi_fu_47363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1297_V_read1367_phi_phi_fu_90880_p4 = data_1297_V_read.read();
        } else {
            ap_phi_mux_data_1297_V_read1367_phi_phi_fu_90880_p4 = ap_phi_reg_pp0_iter0_data_1297_V_read1367_phi_reg_90876.read();
        }
    } else {
        ap_phi_mux_data_1297_V_read1367_phi_phi_fu_90880_p4 = ap_phi_reg_pp0_iter0_data_1297_V_read1367_phi_reg_90876.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1297_V_read1367_rewind_phi_fu_47363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1297_V_read1367_rewind_phi_fu_47363_p6 = data_1297_V_read1367_phi_reg_90876.read();
    } else {
        ap_phi_mux_data_1297_V_read1367_rewind_phi_fu_47363_p6 = data_1297_V_read1367_rewind_reg_47359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1298_V_read1368_phi_phi_fu_90893_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1298_V_read1368_phi_phi_fu_90893_p4 = ap_phi_mux_data_1298_V_read1368_rewind_phi_fu_47377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1298_V_read1368_phi_phi_fu_90893_p4 = data_1298_V_read.read();
        } else {
            ap_phi_mux_data_1298_V_read1368_phi_phi_fu_90893_p4 = ap_phi_reg_pp0_iter0_data_1298_V_read1368_phi_reg_90889.read();
        }
    } else {
        ap_phi_mux_data_1298_V_read1368_phi_phi_fu_90893_p4 = ap_phi_reg_pp0_iter0_data_1298_V_read1368_phi_reg_90889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1298_V_read1368_rewind_phi_fu_47377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1298_V_read1368_rewind_phi_fu_47377_p6 = data_1298_V_read1368_phi_reg_90889.read();
    } else {
        ap_phi_mux_data_1298_V_read1368_rewind_phi_fu_47377_p6 = data_1298_V_read1368_rewind_reg_47373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1299_V_read1369_phi_phi_fu_90906_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1299_V_read1369_phi_phi_fu_90906_p4 = ap_phi_mux_data_1299_V_read1369_rewind_phi_fu_47391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1299_V_read1369_phi_phi_fu_90906_p4 = data_1299_V_read.read();
        } else {
            ap_phi_mux_data_1299_V_read1369_phi_phi_fu_90906_p4 = ap_phi_reg_pp0_iter0_data_1299_V_read1369_phi_reg_90902.read();
        }
    } else {
        ap_phi_mux_data_1299_V_read1369_phi_phi_fu_90906_p4 = ap_phi_reg_pp0_iter0_data_1299_V_read1369_phi_reg_90902.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1299_V_read1369_rewind_phi_fu_47391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1299_V_read1369_rewind_phi_fu_47391_p6 = data_1299_V_read1369_phi_reg_90902.read();
    } else {
        ap_phi_mux_data_1299_V_read1369_rewind_phi_fu_47391_p6 = data_1299_V_read1369_rewind_reg_47387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_129_V_read199_phi_phi_fu_75696_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_129_V_read199_phi_phi_fu_75696_p4 = ap_phi_mux_data_129_V_read199_rewind_phi_fu_31011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_129_V_read199_phi_phi_fu_75696_p4 = data_129_V_read.read();
        } else {
            ap_phi_mux_data_129_V_read199_phi_phi_fu_75696_p4 = ap_phi_reg_pp0_iter0_data_129_V_read199_phi_reg_75692.read();
        }
    } else {
        ap_phi_mux_data_129_V_read199_phi_phi_fu_75696_p4 = ap_phi_reg_pp0_iter0_data_129_V_read199_phi_reg_75692.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_129_V_read199_rewind_phi_fu_31011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_129_V_read199_rewind_phi_fu_31011_p6 = data_129_V_read199_phi_reg_75692.read();
    } else {
        ap_phi_mux_data_129_V_read199_rewind_phi_fu_31011_p6 = data_129_V_read199_rewind_reg_31007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_12_V_read82_phi_phi_fu_74175_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_12_V_read82_phi_phi_fu_74175_p4 = ap_phi_mux_data_12_V_read82_rewind_phi_fu_29373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_12_V_read82_phi_phi_fu_74175_p4 = data_12_V_read.read();
        } else {
            ap_phi_mux_data_12_V_read82_phi_phi_fu_74175_p4 = ap_phi_reg_pp0_iter0_data_12_V_read82_phi_reg_74171.read();
        }
    } else {
        ap_phi_mux_data_12_V_read82_phi_phi_fu_74175_p4 = ap_phi_reg_pp0_iter0_data_12_V_read82_phi_reg_74171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_12_V_read82_rewind_phi_fu_29373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_12_V_read82_rewind_phi_fu_29373_p6 = data_12_V_read82_phi_reg_74171.read();
    } else {
        ap_phi_mux_data_12_V_read82_rewind_phi_fu_29373_p6 = data_12_V_read82_rewind_reg_29369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1300_V_read1370_phi_phi_fu_90919_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1300_V_read1370_phi_phi_fu_90919_p4 = ap_phi_mux_data_1300_V_read1370_rewind_phi_fu_47405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1300_V_read1370_phi_phi_fu_90919_p4 = data_1300_V_read.read();
        } else {
            ap_phi_mux_data_1300_V_read1370_phi_phi_fu_90919_p4 = ap_phi_reg_pp0_iter0_data_1300_V_read1370_phi_reg_90915.read();
        }
    } else {
        ap_phi_mux_data_1300_V_read1370_phi_phi_fu_90919_p4 = ap_phi_reg_pp0_iter0_data_1300_V_read1370_phi_reg_90915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1300_V_read1370_rewind_phi_fu_47405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1300_V_read1370_rewind_phi_fu_47405_p6 = data_1300_V_read1370_phi_reg_90915.read();
    } else {
        ap_phi_mux_data_1300_V_read1370_rewind_phi_fu_47405_p6 = data_1300_V_read1370_rewind_reg_47401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1301_V_read1371_phi_phi_fu_90932_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1301_V_read1371_phi_phi_fu_90932_p4 = ap_phi_mux_data_1301_V_read1371_rewind_phi_fu_47419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1301_V_read1371_phi_phi_fu_90932_p4 = data_1301_V_read.read();
        } else {
            ap_phi_mux_data_1301_V_read1371_phi_phi_fu_90932_p4 = ap_phi_reg_pp0_iter0_data_1301_V_read1371_phi_reg_90928.read();
        }
    } else {
        ap_phi_mux_data_1301_V_read1371_phi_phi_fu_90932_p4 = ap_phi_reg_pp0_iter0_data_1301_V_read1371_phi_reg_90928.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1301_V_read1371_rewind_phi_fu_47419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1301_V_read1371_rewind_phi_fu_47419_p6 = data_1301_V_read1371_phi_reg_90928.read();
    } else {
        ap_phi_mux_data_1301_V_read1371_rewind_phi_fu_47419_p6 = data_1301_V_read1371_rewind_reg_47415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1302_V_read1372_phi_phi_fu_90945_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1302_V_read1372_phi_phi_fu_90945_p4 = ap_phi_mux_data_1302_V_read1372_rewind_phi_fu_47433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1302_V_read1372_phi_phi_fu_90945_p4 = data_1302_V_read.read();
        } else {
            ap_phi_mux_data_1302_V_read1372_phi_phi_fu_90945_p4 = ap_phi_reg_pp0_iter0_data_1302_V_read1372_phi_reg_90941.read();
        }
    } else {
        ap_phi_mux_data_1302_V_read1372_phi_phi_fu_90945_p4 = ap_phi_reg_pp0_iter0_data_1302_V_read1372_phi_reg_90941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1302_V_read1372_rewind_phi_fu_47433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1302_V_read1372_rewind_phi_fu_47433_p6 = data_1302_V_read1372_phi_reg_90941.read();
    } else {
        ap_phi_mux_data_1302_V_read1372_rewind_phi_fu_47433_p6 = data_1302_V_read1372_rewind_reg_47429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1303_V_read1373_phi_phi_fu_90958_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1303_V_read1373_phi_phi_fu_90958_p4 = ap_phi_mux_data_1303_V_read1373_rewind_phi_fu_47447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1303_V_read1373_phi_phi_fu_90958_p4 = data_1303_V_read.read();
        } else {
            ap_phi_mux_data_1303_V_read1373_phi_phi_fu_90958_p4 = ap_phi_reg_pp0_iter0_data_1303_V_read1373_phi_reg_90954.read();
        }
    } else {
        ap_phi_mux_data_1303_V_read1373_phi_phi_fu_90958_p4 = ap_phi_reg_pp0_iter0_data_1303_V_read1373_phi_reg_90954.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1303_V_read1373_rewind_phi_fu_47447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1303_V_read1373_rewind_phi_fu_47447_p6 = data_1303_V_read1373_phi_reg_90954.read();
    } else {
        ap_phi_mux_data_1303_V_read1373_rewind_phi_fu_47447_p6 = data_1303_V_read1373_rewind_reg_47443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1304_V_read1374_phi_phi_fu_90971_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1304_V_read1374_phi_phi_fu_90971_p4 = ap_phi_mux_data_1304_V_read1374_rewind_phi_fu_47461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1304_V_read1374_phi_phi_fu_90971_p4 = data_1304_V_read.read();
        } else {
            ap_phi_mux_data_1304_V_read1374_phi_phi_fu_90971_p4 = ap_phi_reg_pp0_iter0_data_1304_V_read1374_phi_reg_90967.read();
        }
    } else {
        ap_phi_mux_data_1304_V_read1374_phi_phi_fu_90971_p4 = ap_phi_reg_pp0_iter0_data_1304_V_read1374_phi_reg_90967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1304_V_read1374_rewind_phi_fu_47461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1304_V_read1374_rewind_phi_fu_47461_p6 = data_1304_V_read1374_phi_reg_90967.read();
    } else {
        ap_phi_mux_data_1304_V_read1374_rewind_phi_fu_47461_p6 = data_1304_V_read1374_rewind_reg_47457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1305_V_read1375_phi_phi_fu_90984_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1305_V_read1375_phi_phi_fu_90984_p4 = ap_phi_mux_data_1305_V_read1375_rewind_phi_fu_47475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1305_V_read1375_phi_phi_fu_90984_p4 = data_1305_V_read.read();
        } else {
            ap_phi_mux_data_1305_V_read1375_phi_phi_fu_90984_p4 = ap_phi_reg_pp0_iter0_data_1305_V_read1375_phi_reg_90980.read();
        }
    } else {
        ap_phi_mux_data_1305_V_read1375_phi_phi_fu_90984_p4 = ap_phi_reg_pp0_iter0_data_1305_V_read1375_phi_reg_90980.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1305_V_read1375_rewind_phi_fu_47475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1305_V_read1375_rewind_phi_fu_47475_p6 = data_1305_V_read1375_phi_reg_90980.read();
    } else {
        ap_phi_mux_data_1305_V_read1375_rewind_phi_fu_47475_p6 = data_1305_V_read1375_rewind_reg_47471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1306_V_read1376_phi_phi_fu_90997_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1306_V_read1376_phi_phi_fu_90997_p4 = ap_phi_mux_data_1306_V_read1376_rewind_phi_fu_47489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1306_V_read1376_phi_phi_fu_90997_p4 = data_1306_V_read.read();
        } else {
            ap_phi_mux_data_1306_V_read1376_phi_phi_fu_90997_p4 = ap_phi_reg_pp0_iter0_data_1306_V_read1376_phi_reg_90993.read();
        }
    } else {
        ap_phi_mux_data_1306_V_read1376_phi_phi_fu_90997_p4 = ap_phi_reg_pp0_iter0_data_1306_V_read1376_phi_reg_90993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1306_V_read1376_rewind_phi_fu_47489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1306_V_read1376_rewind_phi_fu_47489_p6 = data_1306_V_read1376_phi_reg_90993.read();
    } else {
        ap_phi_mux_data_1306_V_read1376_rewind_phi_fu_47489_p6 = data_1306_V_read1376_rewind_reg_47485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1307_V_read1377_phi_phi_fu_91010_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1307_V_read1377_phi_phi_fu_91010_p4 = ap_phi_mux_data_1307_V_read1377_rewind_phi_fu_47503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1307_V_read1377_phi_phi_fu_91010_p4 = data_1307_V_read.read();
        } else {
            ap_phi_mux_data_1307_V_read1377_phi_phi_fu_91010_p4 = ap_phi_reg_pp0_iter0_data_1307_V_read1377_phi_reg_91006.read();
        }
    } else {
        ap_phi_mux_data_1307_V_read1377_phi_phi_fu_91010_p4 = ap_phi_reg_pp0_iter0_data_1307_V_read1377_phi_reg_91006.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1307_V_read1377_rewind_phi_fu_47503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1307_V_read1377_rewind_phi_fu_47503_p6 = data_1307_V_read1377_phi_reg_91006.read();
    } else {
        ap_phi_mux_data_1307_V_read1377_rewind_phi_fu_47503_p6 = data_1307_V_read1377_rewind_reg_47499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1308_V_read1378_phi_phi_fu_91023_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1308_V_read1378_phi_phi_fu_91023_p4 = ap_phi_mux_data_1308_V_read1378_rewind_phi_fu_47517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1308_V_read1378_phi_phi_fu_91023_p4 = data_1308_V_read.read();
        } else {
            ap_phi_mux_data_1308_V_read1378_phi_phi_fu_91023_p4 = ap_phi_reg_pp0_iter0_data_1308_V_read1378_phi_reg_91019.read();
        }
    } else {
        ap_phi_mux_data_1308_V_read1378_phi_phi_fu_91023_p4 = ap_phi_reg_pp0_iter0_data_1308_V_read1378_phi_reg_91019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1308_V_read1378_rewind_phi_fu_47517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1308_V_read1378_rewind_phi_fu_47517_p6 = data_1308_V_read1378_phi_reg_91019.read();
    } else {
        ap_phi_mux_data_1308_V_read1378_rewind_phi_fu_47517_p6 = data_1308_V_read1378_rewind_reg_47513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1309_V_read1379_phi_phi_fu_91036_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1309_V_read1379_phi_phi_fu_91036_p4 = ap_phi_mux_data_1309_V_read1379_rewind_phi_fu_47531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1309_V_read1379_phi_phi_fu_91036_p4 = data_1309_V_read.read();
        } else {
            ap_phi_mux_data_1309_V_read1379_phi_phi_fu_91036_p4 = ap_phi_reg_pp0_iter0_data_1309_V_read1379_phi_reg_91032.read();
        }
    } else {
        ap_phi_mux_data_1309_V_read1379_phi_phi_fu_91036_p4 = ap_phi_reg_pp0_iter0_data_1309_V_read1379_phi_reg_91032.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1309_V_read1379_rewind_phi_fu_47531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1309_V_read1379_rewind_phi_fu_47531_p6 = data_1309_V_read1379_phi_reg_91032.read();
    } else {
        ap_phi_mux_data_1309_V_read1379_rewind_phi_fu_47531_p6 = data_1309_V_read1379_rewind_reg_47527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_130_V_read200_phi_phi_fu_75709_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_130_V_read200_phi_phi_fu_75709_p4 = ap_phi_mux_data_130_V_read200_rewind_phi_fu_31025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_130_V_read200_phi_phi_fu_75709_p4 = data_130_V_read.read();
        } else {
            ap_phi_mux_data_130_V_read200_phi_phi_fu_75709_p4 = ap_phi_reg_pp0_iter0_data_130_V_read200_phi_reg_75705.read();
        }
    } else {
        ap_phi_mux_data_130_V_read200_phi_phi_fu_75709_p4 = ap_phi_reg_pp0_iter0_data_130_V_read200_phi_reg_75705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_130_V_read200_rewind_phi_fu_31025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_130_V_read200_rewind_phi_fu_31025_p6 = data_130_V_read200_phi_reg_75705.read();
    } else {
        ap_phi_mux_data_130_V_read200_rewind_phi_fu_31025_p6 = data_130_V_read200_rewind_reg_31021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1310_V_read1380_phi_phi_fu_91049_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1310_V_read1380_phi_phi_fu_91049_p4 = ap_phi_mux_data_1310_V_read1380_rewind_phi_fu_47545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1310_V_read1380_phi_phi_fu_91049_p4 = data_1310_V_read.read();
        } else {
            ap_phi_mux_data_1310_V_read1380_phi_phi_fu_91049_p4 = ap_phi_reg_pp0_iter0_data_1310_V_read1380_phi_reg_91045.read();
        }
    } else {
        ap_phi_mux_data_1310_V_read1380_phi_phi_fu_91049_p4 = ap_phi_reg_pp0_iter0_data_1310_V_read1380_phi_reg_91045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1310_V_read1380_rewind_phi_fu_47545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1310_V_read1380_rewind_phi_fu_47545_p6 = data_1310_V_read1380_phi_reg_91045.read();
    } else {
        ap_phi_mux_data_1310_V_read1380_rewind_phi_fu_47545_p6 = data_1310_V_read1380_rewind_reg_47541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1311_V_read1381_phi_phi_fu_91062_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1311_V_read1381_phi_phi_fu_91062_p4 = ap_phi_mux_data_1311_V_read1381_rewind_phi_fu_47559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1311_V_read1381_phi_phi_fu_91062_p4 = data_1311_V_read.read();
        } else {
            ap_phi_mux_data_1311_V_read1381_phi_phi_fu_91062_p4 = ap_phi_reg_pp0_iter0_data_1311_V_read1381_phi_reg_91058.read();
        }
    } else {
        ap_phi_mux_data_1311_V_read1381_phi_phi_fu_91062_p4 = ap_phi_reg_pp0_iter0_data_1311_V_read1381_phi_reg_91058.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1311_V_read1381_rewind_phi_fu_47559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1311_V_read1381_rewind_phi_fu_47559_p6 = data_1311_V_read1381_phi_reg_91058.read();
    } else {
        ap_phi_mux_data_1311_V_read1381_rewind_phi_fu_47559_p6 = data_1311_V_read1381_rewind_reg_47555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1312_V_read1382_phi_phi_fu_91075_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1312_V_read1382_phi_phi_fu_91075_p4 = ap_phi_mux_data_1312_V_read1382_rewind_phi_fu_47573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1312_V_read1382_phi_phi_fu_91075_p4 = data_1312_V_read.read();
        } else {
            ap_phi_mux_data_1312_V_read1382_phi_phi_fu_91075_p4 = ap_phi_reg_pp0_iter0_data_1312_V_read1382_phi_reg_91071.read();
        }
    } else {
        ap_phi_mux_data_1312_V_read1382_phi_phi_fu_91075_p4 = ap_phi_reg_pp0_iter0_data_1312_V_read1382_phi_reg_91071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1312_V_read1382_rewind_phi_fu_47573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1312_V_read1382_rewind_phi_fu_47573_p6 = data_1312_V_read1382_phi_reg_91071.read();
    } else {
        ap_phi_mux_data_1312_V_read1382_rewind_phi_fu_47573_p6 = data_1312_V_read1382_rewind_reg_47569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1313_V_read1383_phi_phi_fu_91088_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1313_V_read1383_phi_phi_fu_91088_p4 = ap_phi_mux_data_1313_V_read1383_rewind_phi_fu_47587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1313_V_read1383_phi_phi_fu_91088_p4 = data_1313_V_read.read();
        } else {
            ap_phi_mux_data_1313_V_read1383_phi_phi_fu_91088_p4 = ap_phi_reg_pp0_iter0_data_1313_V_read1383_phi_reg_91084.read();
        }
    } else {
        ap_phi_mux_data_1313_V_read1383_phi_phi_fu_91088_p4 = ap_phi_reg_pp0_iter0_data_1313_V_read1383_phi_reg_91084.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1313_V_read1383_rewind_phi_fu_47587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1313_V_read1383_rewind_phi_fu_47587_p6 = data_1313_V_read1383_phi_reg_91084.read();
    } else {
        ap_phi_mux_data_1313_V_read1383_rewind_phi_fu_47587_p6 = data_1313_V_read1383_rewind_reg_47583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1314_V_read1384_phi_phi_fu_91101_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1314_V_read1384_phi_phi_fu_91101_p4 = ap_phi_mux_data_1314_V_read1384_rewind_phi_fu_47601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1314_V_read1384_phi_phi_fu_91101_p4 = data_1314_V_read.read();
        } else {
            ap_phi_mux_data_1314_V_read1384_phi_phi_fu_91101_p4 = ap_phi_reg_pp0_iter0_data_1314_V_read1384_phi_reg_91097.read();
        }
    } else {
        ap_phi_mux_data_1314_V_read1384_phi_phi_fu_91101_p4 = ap_phi_reg_pp0_iter0_data_1314_V_read1384_phi_reg_91097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1314_V_read1384_rewind_phi_fu_47601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1314_V_read1384_rewind_phi_fu_47601_p6 = data_1314_V_read1384_phi_reg_91097.read();
    } else {
        ap_phi_mux_data_1314_V_read1384_rewind_phi_fu_47601_p6 = data_1314_V_read1384_rewind_reg_47597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1315_V_read1385_phi_phi_fu_91114_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1315_V_read1385_phi_phi_fu_91114_p4 = ap_phi_mux_data_1315_V_read1385_rewind_phi_fu_47615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1315_V_read1385_phi_phi_fu_91114_p4 = data_1315_V_read.read();
        } else {
            ap_phi_mux_data_1315_V_read1385_phi_phi_fu_91114_p4 = ap_phi_reg_pp0_iter0_data_1315_V_read1385_phi_reg_91110.read();
        }
    } else {
        ap_phi_mux_data_1315_V_read1385_phi_phi_fu_91114_p4 = ap_phi_reg_pp0_iter0_data_1315_V_read1385_phi_reg_91110.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1315_V_read1385_rewind_phi_fu_47615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1315_V_read1385_rewind_phi_fu_47615_p6 = data_1315_V_read1385_phi_reg_91110.read();
    } else {
        ap_phi_mux_data_1315_V_read1385_rewind_phi_fu_47615_p6 = data_1315_V_read1385_rewind_reg_47611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1316_V_read1386_phi_phi_fu_91127_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1316_V_read1386_phi_phi_fu_91127_p4 = ap_phi_mux_data_1316_V_read1386_rewind_phi_fu_47629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1316_V_read1386_phi_phi_fu_91127_p4 = data_1316_V_read.read();
        } else {
            ap_phi_mux_data_1316_V_read1386_phi_phi_fu_91127_p4 = ap_phi_reg_pp0_iter0_data_1316_V_read1386_phi_reg_91123.read();
        }
    } else {
        ap_phi_mux_data_1316_V_read1386_phi_phi_fu_91127_p4 = ap_phi_reg_pp0_iter0_data_1316_V_read1386_phi_reg_91123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1316_V_read1386_rewind_phi_fu_47629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1316_V_read1386_rewind_phi_fu_47629_p6 = data_1316_V_read1386_phi_reg_91123.read();
    } else {
        ap_phi_mux_data_1316_V_read1386_rewind_phi_fu_47629_p6 = data_1316_V_read1386_rewind_reg_47625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1317_V_read1387_phi_phi_fu_91140_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1317_V_read1387_phi_phi_fu_91140_p4 = ap_phi_mux_data_1317_V_read1387_rewind_phi_fu_47643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1317_V_read1387_phi_phi_fu_91140_p4 = data_1317_V_read.read();
        } else {
            ap_phi_mux_data_1317_V_read1387_phi_phi_fu_91140_p4 = ap_phi_reg_pp0_iter0_data_1317_V_read1387_phi_reg_91136.read();
        }
    } else {
        ap_phi_mux_data_1317_V_read1387_phi_phi_fu_91140_p4 = ap_phi_reg_pp0_iter0_data_1317_V_read1387_phi_reg_91136.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1317_V_read1387_rewind_phi_fu_47643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1317_V_read1387_rewind_phi_fu_47643_p6 = data_1317_V_read1387_phi_reg_91136.read();
    } else {
        ap_phi_mux_data_1317_V_read1387_rewind_phi_fu_47643_p6 = data_1317_V_read1387_rewind_reg_47639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1318_V_read1388_phi_phi_fu_91153_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1318_V_read1388_phi_phi_fu_91153_p4 = ap_phi_mux_data_1318_V_read1388_rewind_phi_fu_47657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1318_V_read1388_phi_phi_fu_91153_p4 = data_1318_V_read.read();
        } else {
            ap_phi_mux_data_1318_V_read1388_phi_phi_fu_91153_p4 = ap_phi_reg_pp0_iter0_data_1318_V_read1388_phi_reg_91149.read();
        }
    } else {
        ap_phi_mux_data_1318_V_read1388_phi_phi_fu_91153_p4 = ap_phi_reg_pp0_iter0_data_1318_V_read1388_phi_reg_91149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1318_V_read1388_rewind_phi_fu_47657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1318_V_read1388_rewind_phi_fu_47657_p6 = data_1318_V_read1388_phi_reg_91149.read();
    } else {
        ap_phi_mux_data_1318_V_read1388_rewind_phi_fu_47657_p6 = data_1318_V_read1388_rewind_reg_47653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1319_V_read1389_phi_phi_fu_91166_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1319_V_read1389_phi_phi_fu_91166_p4 = ap_phi_mux_data_1319_V_read1389_rewind_phi_fu_47671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1319_V_read1389_phi_phi_fu_91166_p4 = data_1319_V_read.read();
        } else {
            ap_phi_mux_data_1319_V_read1389_phi_phi_fu_91166_p4 = ap_phi_reg_pp0_iter0_data_1319_V_read1389_phi_reg_91162.read();
        }
    } else {
        ap_phi_mux_data_1319_V_read1389_phi_phi_fu_91166_p4 = ap_phi_reg_pp0_iter0_data_1319_V_read1389_phi_reg_91162.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1319_V_read1389_rewind_phi_fu_47671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1319_V_read1389_rewind_phi_fu_47671_p6 = data_1319_V_read1389_phi_reg_91162.read();
    } else {
        ap_phi_mux_data_1319_V_read1389_rewind_phi_fu_47671_p6 = data_1319_V_read1389_rewind_reg_47667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_131_V_read201_phi_phi_fu_75722_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_131_V_read201_phi_phi_fu_75722_p4 = ap_phi_mux_data_131_V_read201_rewind_phi_fu_31039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_131_V_read201_phi_phi_fu_75722_p4 = data_131_V_read.read();
        } else {
            ap_phi_mux_data_131_V_read201_phi_phi_fu_75722_p4 = ap_phi_reg_pp0_iter0_data_131_V_read201_phi_reg_75718.read();
        }
    } else {
        ap_phi_mux_data_131_V_read201_phi_phi_fu_75722_p4 = ap_phi_reg_pp0_iter0_data_131_V_read201_phi_reg_75718.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_131_V_read201_rewind_phi_fu_31039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_131_V_read201_rewind_phi_fu_31039_p6 = data_131_V_read201_phi_reg_75718.read();
    } else {
        ap_phi_mux_data_131_V_read201_rewind_phi_fu_31039_p6 = data_131_V_read201_rewind_reg_31035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1320_V_read1390_phi_phi_fu_91179_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1320_V_read1390_phi_phi_fu_91179_p4 = ap_phi_mux_data_1320_V_read1390_rewind_phi_fu_47685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1320_V_read1390_phi_phi_fu_91179_p4 = data_1320_V_read.read();
        } else {
            ap_phi_mux_data_1320_V_read1390_phi_phi_fu_91179_p4 = ap_phi_reg_pp0_iter0_data_1320_V_read1390_phi_reg_91175.read();
        }
    } else {
        ap_phi_mux_data_1320_V_read1390_phi_phi_fu_91179_p4 = ap_phi_reg_pp0_iter0_data_1320_V_read1390_phi_reg_91175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1320_V_read1390_rewind_phi_fu_47685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1320_V_read1390_rewind_phi_fu_47685_p6 = data_1320_V_read1390_phi_reg_91175.read();
    } else {
        ap_phi_mux_data_1320_V_read1390_rewind_phi_fu_47685_p6 = data_1320_V_read1390_rewind_reg_47681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1321_V_read1391_phi_phi_fu_91192_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1321_V_read1391_phi_phi_fu_91192_p4 = ap_phi_mux_data_1321_V_read1391_rewind_phi_fu_47699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1321_V_read1391_phi_phi_fu_91192_p4 = data_1321_V_read.read();
        } else {
            ap_phi_mux_data_1321_V_read1391_phi_phi_fu_91192_p4 = ap_phi_reg_pp0_iter0_data_1321_V_read1391_phi_reg_91188.read();
        }
    } else {
        ap_phi_mux_data_1321_V_read1391_phi_phi_fu_91192_p4 = ap_phi_reg_pp0_iter0_data_1321_V_read1391_phi_reg_91188.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1321_V_read1391_rewind_phi_fu_47699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1321_V_read1391_rewind_phi_fu_47699_p6 = data_1321_V_read1391_phi_reg_91188.read();
    } else {
        ap_phi_mux_data_1321_V_read1391_rewind_phi_fu_47699_p6 = data_1321_V_read1391_rewind_reg_47695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1322_V_read1392_phi_phi_fu_91205_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1322_V_read1392_phi_phi_fu_91205_p4 = ap_phi_mux_data_1322_V_read1392_rewind_phi_fu_47713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1322_V_read1392_phi_phi_fu_91205_p4 = data_1322_V_read.read();
        } else {
            ap_phi_mux_data_1322_V_read1392_phi_phi_fu_91205_p4 = ap_phi_reg_pp0_iter0_data_1322_V_read1392_phi_reg_91201.read();
        }
    } else {
        ap_phi_mux_data_1322_V_read1392_phi_phi_fu_91205_p4 = ap_phi_reg_pp0_iter0_data_1322_V_read1392_phi_reg_91201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1322_V_read1392_rewind_phi_fu_47713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1322_V_read1392_rewind_phi_fu_47713_p6 = data_1322_V_read1392_phi_reg_91201.read();
    } else {
        ap_phi_mux_data_1322_V_read1392_rewind_phi_fu_47713_p6 = data_1322_V_read1392_rewind_reg_47709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1323_V_read1393_phi_phi_fu_91218_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1323_V_read1393_phi_phi_fu_91218_p4 = ap_phi_mux_data_1323_V_read1393_rewind_phi_fu_47727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1323_V_read1393_phi_phi_fu_91218_p4 = data_1323_V_read.read();
        } else {
            ap_phi_mux_data_1323_V_read1393_phi_phi_fu_91218_p4 = ap_phi_reg_pp0_iter0_data_1323_V_read1393_phi_reg_91214.read();
        }
    } else {
        ap_phi_mux_data_1323_V_read1393_phi_phi_fu_91218_p4 = ap_phi_reg_pp0_iter0_data_1323_V_read1393_phi_reg_91214.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1323_V_read1393_rewind_phi_fu_47727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1323_V_read1393_rewind_phi_fu_47727_p6 = data_1323_V_read1393_phi_reg_91214.read();
    } else {
        ap_phi_mux_data_1323_V_read1393_rewind_phi_fu_47727_p6 = data_1323_V_read1393_rewind_reg_47723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1324_V_read1394_phi_phi_fu_91231_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1324_V_read1394_phi_phi_fu_91231_p4 = ap_phi_mux_data_1324_V_read1394_rewind_phi_fu_47741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1324_V_read1394_phi_phi_fu_91231_p4 = data_1324_V_read.read();
        } else {
            ap_phi_mux_data_1324_V_read1394_phi_phi_fu_91231_p4 = ap_phi_reg_pp0_iter0_data_1324_V_read1394_phi_reg_91227.read();
        }
    } else {
        ap_phi_mux_data_1324_V_read1394_phi_phi_fu_91231_p4 = ap_phi_reg_pp0_iter0_data_1324_V_read1394_phi_reg_91227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1324_V_read1394_rewind_phi_fu_47741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1324_V_read1394_rewind_phi_fu_47741_p6 = data_1324_V_read1394_phi_reg_91227.read();
    } else {
        ap_phi_mux_data_1324_V_read1394_rewind_phi_fu_47741_p6 = data_1324_V_read1394_rewind_reg_47737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1325_V_read1395_phi_phi_fu_91244_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1325_V_read1395_phi_phi_fu_91244_p4 = ap_phi_mux_data_1325_V_read1395_rewind_phi_fu_47755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1325_V_read1395_phi_phi_fu_91244_p4 = data_1325_V_read.read();
        } else {
            ap_phi_mux_data_1325_V_read1395_phi_phi_fu_91244_p4 = ap_phi_reg_pp0_iter0_data_1325_V_read1395_phi_reg_91240.read();
        }
    } else {
        ap_phi_mux_data_1325_V_read1395_phi_phi_fu_91244_p4 = ap_phi_reg_pp0_iter0_data_1325_V_read1395_phi_reg_91240.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1325_V_read1395_rewind_phi_fu_47755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1325_V_read1395_rewind_phi_fu_47755_p6 = data_1325_V_read1395_phi_reg_91240.read();
    } else {
        ap_phi_mux_data_1325_V_read1395_rewind_phi_fu_47755_p6 = data_1325_V_read1395_rewind_reg_47751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1326_V_read1396_phi_phi_fu_91257_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1326_V_read1396_phi_phi_fu_91257_p4 = ap_phi_mux_data_1326_V_read1396_rewind_phi_fu_47769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1326_V_read1396_phi_phi_fu_91257_p4 = data_1326_V_read.read();
        } else {
            ap_phi_mux_data_1326_V_read1396_phi_phi_fu_91257_p4 = ap_phi_reg_pp0_iter0_data_1326_V_read1396_phi_reg_91253.read();
        }
    } else {
        ap_phi_mux_data_1326_V_read1396_phi_phi_fu_91257_p4 = ap_phi_reg_pp0_iter0_data_1326_V_read1396_phi_reg_91253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1326_V_read1396_rewind_phi_fu_47769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1326_V_read1396_rewind_phi_fu_47769_p6 = data_1326_V_read1396_phi_reg_91253.read();
    } else {
        ap_phi_mux_data_1326_V_read1396_rewind_phi_fu_47769_p6 = data_1326_V_read1396_rewind_reg_47765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1327_V_read1397_phi_phi_fu_91270_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1327_V_read1397_phi_phi_fu_91270_p4 = ap_phi_mux_data_1327_V_read1397_rewind_phi_fu_47783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1327_V_read1397_phi_phi_fu_91270_p4 = data_1327_V_read.read();
        } else {
            ap_phi_mux_data_1327_V_read1397_phi_phi_fu_91270_p4 = ap_phi_reg_pp0_iter0_data_1327_V_read1397_phi_reg_91266.read();
        }
    } else {
        ap_phi_mux_data_1327_V_read1397_phi_phi_fu_91270_p4 = ap_phi_reg_pp0_iter0_data_1327_V_read1397_phi_reg_91266.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1327_V_read1397_rewind_phi_fu_47783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1327_V_read1397_rewind_phi_fu_47783_p6 = data_1327_V_read1397_phi_reg_91266.read();
    } else {
        ap_phi_mux_data_1327_V_read1397_rewind_phi_fu_47783_p6 = data_1327_V_read1397_rewind_reg_47779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1328_V_read1398_phi_phi_fu_91283_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1328_V_read1398_phi_phi_fu_91283_p4 = ap_phi_mux_data_1328_V_read1398_rewind_phi_fu_47797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1328_V_read1398_phi_phi_fu_91283_p4 = data_1328_V_read.read();
        } else {
            ap_phi_mux_data_1328_V_read1398_phi_phi_fu_91283_p4 = ap_phi_reg_pp0_iter0_data_1328_V_read1398_phi_reg_91279.read();
        }
    } else {
        ap_phi_mux_data_1328_V_read1398_phi_phi_fu_91283_p4 = ap_phi_reg_pp0_iter0_data_1328_V_read1398_phi_reg_91279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1328_V_read1398_rewind_phi_fu_47797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1328_V_read1398_rewind_phi_fu_47797_p6 = data_1328_V_read1398_phi_reg_91279.read();
    } else {
        ap_phi_mux_data_1328_V_read1398_rewind_phi_fu_47797_p6 = data_1328_V_read1398_rewind_reg_47793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1329_V_read1399_phi_phi_fu_91296_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1329_V_read1399_phi_phi_fu_91296_p4 = ap_phi_mux_data_1329_V_read1399_rewind_phi_fu_47811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1329_V_read1399_phi_phi_fu_91296_p4 = data_1329_V_read.read();
        } else {
            ap_phi_mux_data_1329_V_read1399_phi_phi_fu_91296_p4 = ap_phi_reg_pp0_iter0_data_1329_V_read1399_phi_reg_91292.read();
        }
    } else {
        ap_phi_mux_data_1329_V_read1399_phi_phi_fu_91296_p4 = ap_phi_reg_pp0_iter0_data_1329_V_read1399_phi_reg_91292.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1329_V_read1399_rewind_phi_fu_47811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1329_V_read1399_rewind_phi_fu_47811_p6 = data_1329_V_read1399_phi_reg_91292.read();
    } else {
        ap_phi_mux_data_1329_V_read1399_rewind_phi_fu_47811_p6 = data_1329_V_read1399_rewind_reg_47807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_132_V_read202_phi_phi_fu_75735_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_132_V_read202_phi_phi_fu_75735_p4 = ap_phi_mux_data_132_V_read202_rewind_phi_fu_31053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_132_V_read202_phi_phi_fu_75735_p4 = data_132_V_read.read();
        } else {
            ap_phi_mux_data_132_V_read202_phi_phi_fu_75735_p4 = ap_phi_reg_pp0_iter0_data_132_V_read202_phi_reg_75731.read();
        }
    } else {
        ap_phi_mux_data_132_V_read202_phi_phi_fu_75735_p4 = ap_phi_reg_pp0_iter0_data_132_V_read202_phi_reg_75731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_132_V_read202_rewind_phi_fu_31053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_132_V_read202_rewind_phi_fu_31053_p6 = data_132_V_read202_phi_reg_75731.read();
    } else {
        ap_phi_mux_data_132_V_read202_rewind_phi_fu_31053_p6 = data_132_V_read202_rewind_reg_31049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1330_V_read1400_phi_phi_fu_91309_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1330_V_read1400_phi_phi_fu_91309_p4 = ap_phi_mux_data_1330_V_read1400_rewind_phi_fu_47825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1330_V_read1400_phi_phi_fu_91309_p4 = data_1330_V_read.read();
        } else {
            ap_phi_mux_data_1330_V_read1400_phi_phi_fu_91309_p4 = ap_phi_reg_pp0_iter0_data_1330_V_read1400_phi_reg_91305.read();
        }
    } else {
        ap_phi_mux_data_1330_V_read1400_phi_phi_fu_91309_p4 = ap_phi_reg_pp0_iter0_data_1330_V_read1400_phi_reg_91305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1330_V_read1400_rewind_phi_fu_47825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1330_V_read1400_rewind_phi_fu_47825_p6 = data_1330_V_read1400_phi_reg_91305.read();
    } else {
        ap_phi_mux_data_1330_V_read1400_rewind_phi_fu_47825_p6 = data_1330_V_read1400_rewind_reg_47821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1331_V_read1401_phi_phi_fu_91322_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1331_V_read1401_phi_phi_fu_91322_p4 = ap_phi_mux_data_1331_V_read1401_rewind_phi_fu_47839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1331_V_read1401_phi_phi_fu_91322_p4 = data_1331_V_read.read();
        } else {
            ap_phi_mux_data_1331_V_read1401_phi_phi_fu_91322_p4 = ap_phi_reg_pp0_iter0_data_1331_V_read1401_phi_reg_91318.read();
        }
    } else {
        ap_phi_mux_data_1331_V_read1401_phi_phi_fu_91322_p4 = ap_phi_reg_pp0_iter0_data_1331_V_read1401_phi_reg_91318.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1331_V_read1401_rewind_phi_fu_47839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1331_V_read1401_rewind_phi_fu_47839_p6 = data_1331_V_read1401_phi_reg_91318.read();
    } else {
        ap_phi_mux_data_1331_V_read1401_rewind_phi_fu_47839_p6 = data_1331_V_read1401_rewind_reg_47835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1332_V_read1402_phi_phi_fu_91335_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1332_V_read1402_phi_phi_fu_91335_p4 = ap_phi_mux_data_1332_V_read1402_rewind_phi_fu_47853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1332_V_read1402_phi_phi_fu_91335_p4 = data_1332_V_read.read();
        } else {
            ap_phi_mux_data_1332_V_read1402_phi_phi_fu_91335_p4 = ap_phi_reg_pp0_iter0_data_1332_V_read1402_phi_reg_91331.read();
        }
    } else {
        ap_phi_mux_data_1332_V_read1402_phi_phi_fu_91335_p4 = ap_phi_reg_pp0_iter0_data_1332_V_read1402_phi_reg_91331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1332_V_read1402_rewind_phi_fu_47853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1332_V_read1402_rewind_phi_fu_47853_p6 = data_1332_V_read1402_phi_reg_91331.read();
    } else {
        ap_phi_mux_data_1332_V_read1402_rewind_phi_fu_47853_p6 = data_1332_V_read1402_rewind_reg_47849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1333_V_read1403_phi_phi_fu_91348_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1333_V_read1403_phi_phi_fu_91348_p4 = ap_phi_mux_data_1333_V_read1403_rewind_phi_fu_47867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1333_V_read1403_phi_phi_fu_91348_p4 = data_1333_V_read.read();
        } else {
            ap_phi_mux_data_1333_V_read1403_phi_phi_fu_91348_p4 = ap_phi_reg_pp0_iter0_data_1333_V_read1403_phi_reg_91344.read();
        }
    } else {
        ap_phi_mux_data_1333_V_read1403_phi_phi_fu_91348_p4 = ap_phi_reg_pp0_iter0_data_1333_V_read1403_phi_reg_91344.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1333_V_read1403_rewind_phi_fu_47867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1333_V_read1403_rewind_phi_fu_47867_p6 = data_1333_V_read1403_phi_reg_91344.read();
    } else {
        ap_phi_mux_data_1333_V_read1403_rewind_phi_fu_47867_p6 = data_1333_V_read1403_rewind_reg_47863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1334_V_read1404_phi_phi_fu_91361_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1334_V_read1404_phi_phi_fu_91361_p4 = ap_phi_mux_data_1334_V_read1404_rewind_phi_fu_47881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1334_V_read1404_phi_phi_fu_91361_p4 = data_1334_V_read.read();
        } else {
            ap_phi_mux_data_1334_V_read1404_phi_phi_fu_91361_p4 = ap_phi_reg_pp0_iter0_data_1334_V_read1404_phi_reg_91357.read();
        }
    } else {
        ap_phi_mux_data_1334_V_read1404_phi_phi_fu_91361_p4 = ap_phi_reg_pp0_iter0_data_1334_V_read1404_phi_reg_91357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1334_V_read1404_rewind_phi_fu_47881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1334_V_read1404_rewind_phi_fu_47881_p6 = data_1334_V_read1404_phi_reg_91357.read();
    } else {
        ap_phi_mux_data_1334_V_read1404_rewind_phi_fu_47881_p6 = data_1334_V_read1404_rewind_reg_47877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1335_V_read1405_phi_phi_fu_91374_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1335_V_read1405_phi_phi_fu_91374_p4 = ap_phi_mux_data_1335_V_read1405_rewind_phi_fu_47895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1335_V_read1405_phi_phi_fu_91374_p4 = data_1335_V_read.read();
        } else {
            ap_phi_mux_data_1335_V_read1405_phi_phi_fu_91374_p4 = ap_phi_reg_pp0_iter0_data_1335_V_read1405_phi_reg_91370.read();
        }
    } else {
        ap_phi_mux_data_1335_V_read1405_phi_phi_fu_91374_p4 = ap_phi_reg_pp0_iter0_data_1335_V_read1405_phi_reg_91370.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1335_V_read1405_rewind_phi_fu_47895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1335_V_read1405_rewind_phi_fu_47895_p6 = data_1335_V_read1405_phi_reg_91370.read();
    } else {
        ap_phi_mux_data_1335_V_read1405_rewind_phi_fu_47895_p6 = data_1335_V_read1405_rewind_reg_47891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1336_V_read1406_phi_phi_fu_91387_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1336_V_read1406_phi_phi_fu_91387_p4 = ap_phi_mux_data_1336_V_read1406_rewind_phi_fu_47909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1336_V_read1406_phi_phi_fu_91387_p4 = data_1336_V_read.read();
        } else {
            ap_phi_mux_data_1336_V_read1406_phi_phi_fu_91387_p4 = ap_phi_reg_pp0_iter0_data_1336_V_read1406_phi_reg_91383.read();
        }
    } else {
        ap_phi_mux_data_1336_V_read1406_phi_phi_fu_91387_p4 = ap_phi_reg_pp0_iter0_data_1336_V_read1406_phi_reg_91383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1336_V_read1406_rewind_phi_fu_47909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1336_V_read1406_rewind_phi_fu_47909_p6 = data_1336_V_read1406_phi_reg_91383.read();
    } else {
        ap_phi_mux_data_1336_V_read1406_rewind_phi_fu_47909_p6 = data_1336_V_read1406_rewind_reg_47905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1337_V_read1407_phi_phi_fu_91400_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1337_V_read1407_phi_phi_fu_91400_p4 = ap_phi_mux_data_1337_V_read1407_rewind_phi_fu_47923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1337_V_read1407_phi_phi_fu_91400_p4 = data_1337_V_read.read();
        } else {
            ap_phi_mux_data_1337_V_read1407_phi_phi_fu_91400_p4 = ap_phi_reg_pp0_iter0_data_1337_V_read1407_phi_reg_91396.read();
        }
    } else {
        ap_phi_mux_data_1337_V_read1407_phi_phi_fu_91400_p4 = ap_phi_reg_pp0_iter0_data_1337_V_read1407_phi_reg_91396.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1337_V_read1407_rewind_phi_fu_47923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1337_V_read1407_rewind_phi_fu_47923_p6 = data_1337_V_read1407_phi_reg_91396.read();
    } else {
        ap_phi_mux_data_1337_V_read1407_rewind_phi_fu_47923_p6 = data_1337_V_read1407_rewind_reg_47919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1338_V_read1408_phi_phi_fu_91413_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1338_V_read1408_phi_phi_fu_91413_p4 = ap_phi_mux_data_1338_V_read1408_rewind_phi_fu_47937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1338_V_read1408_phi_phi_fu_91413_p4 = data_1338_V_read.read();
        } else {
            ap_phi_mux_data_1338_V_read1408_phi_phi_fu_91413_p4 = ap_phi_reg_pp0_iter0_data_1338_V_read1408_phi_reg_91409.read();
        }
    } else {
        ap_phi_mux_data_1338_V_read1408_phi_phi_fu_91413_p4 = ap_phi_reg_pp0_iter0_data_1338_V_read1408_phi_reg_91409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1338_V_read1408_rewind_phi_fu_47937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1338_V_read1408_rewind_phi_fu_47937_p6 = data_1338_V_read1408_phi_reg_91409.read();
    } else {
        ap_phi_mux_data_1338_V_read1408_rewind_phi_fu_47937_p6 = data_1338_V_read1408_rewind_reg_47933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1339_V_read1409_phi_phi_fu_91426_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1339_V_read1409_phi_phi_fu_91426_p4 = ap_phi_mux_data_1339_V_read1409_rewind_phi_fu_47951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1339_V_read1409_phi_phi_fu_91426_p4 = data_1339_V_read.read();
        } else {
            ap_phi_mux_data_1339_V_read1409_phi_phi_fu_91426_p4 = ap_phi_reg_pp0_iter0_data_1339_V_read1409_phi_reg_91422.read();
        }
    } else {
        ap_phi_mux_data_1339_V_read1409_phi_phi_fu_91426_p4 = ap_phi_reg_pp0_iter0_data_1339_V_read1409_phi_reg_91422.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1339_V_read1409_rewind_phi_fu_47951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1339_V_read1409_rewind_phi_fu_47951_p6 = data_1339_V_read1409_phi_reg_91422.read();
    } else {
        ap_phi_mux_data_1339_V_read1409_rewind_phi_fu_47951_p6 = data_1339_V_read1409_rewind_reg_47947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_133_V_read203_phi_phi_fu_75748_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_133_V_read203_phi_phi_fu_75748_p4 = ap_phi_mux_data_133_V_read203_rewind_phi_fu_31067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_133_V_read203_phi_phi_fu_75748_p4 = data_133_V_read.read();
        } else {
            ap_phi_mux_data_133_V_read203_phi_phi_fu_75748_p4 = ap_phi_reg_pp0_iter0_data_133_V_read203_phi_reg_75744.read();
        }
    } else {
        ap_phi_mux_data_133_V_read203_phi_phi_fu_75748_p4 = ap_phi_reg_pp0_iter0_data_133_V_read203_phi_reg_75744.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_133_V_read203_rewind_phi_fu_31067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_133_V_read203_rewind_phi_fu_31067_p6 = data_133_V_read203_phi_reg_75744.read();
    } else {
        ap_phi_mux_data_133_V_read203_rewind_phi_fu_31067_p6 = data_133_V_read203_rewind_reg_31063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1340_V_read1410_phi_phi_fu_91439_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1340_V_read1410_phi_phi_fu_91439_p4 = ap_phi_mux_data_1340_V_read1410_rewind_phi_fu_47965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1340_V_read1410_phi_phi_fu_91439_p4 = data_1340_V_read.read();
        } else {
            ap_phi_mux_data_1340_V_read1410_phi_phi_fu_91439_p4 = ap_phi_reg_pp0_iter0_data_1340_V_read1410_phi_reg_91435.read();
        }
    } else {
        ap_phi_mux_data_1340_V_read1410_phi_phi_fu_91439_p4 = ap_phi_reg_pp0_iter0_data_1340_V_read1410_phi_reg_91435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1340_V_read1410_rewind_phi_fu_47965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1340_V_read1410_rewind_phi_fu_47965_p6 = data_1340_V_read1410_phi_reg_91435.read();
    } else {
        ap_phi_mux_data_1340_V_read1410_rewind_phi_fu_47965_p6 = data_1340_V_read1410_rewind_reg_47961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1341_V_read1411_phi_phi_fu_91452_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1341_V_read1411_phi_phi_fu_91452_p4 = ap_phi_mux_data_1341_V_read1411_rewind_phi_fu_47979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1341_V_read1411_phi_phi_fu_91452_p4 = data_1341_V_read.read();
        } else {
            ap_phi_mux_data_1341_V_read1411_phi_phi_fu_91452_p4 = ap_phi_reg_pp0_iter0_data_1341_V_read1411_phi_reg_91448.read();
        }
    } else {
        ap_phi_mux_data_1341_V_read1411_phi_phi_fu_91452_p4 = ap_phi_reg_pp0_iter0_data_1341_V_read1411_phi_reg_91448.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1341_V_read1411_rewind_phi_fu_47979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1341_V_read1411_rewind_phi_fu_47979_p6 = data_1341_V_read1411_phi_reg_91448.read();
    } else {
        ap_phi_mux_data_1341_V_read1411_rewind_phi_fu_47979_p6 = data_1341_V_read1411_rewind_reg_47975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1342_V_read1412_phi_phi_fu_91465_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1342_V_read1412_phi_phi_fu_91465_p4 = ap_phi_mux_data_1342_V_read1412_rewind_phi_fu_47993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1342_V_read1412_phi_phi_fu_91465_p4 = data_1342_V_read.read();
        } else {
            ap_phi_mux_data_1342_V_read1412_phi_phi_fu_91465_p4 = ap_phi_reg_pp0_iter0_data_1342_V_read1412_phi_reg_91461.read();
        }
    } else {
        ap_phi_mux_data_1342_V_read1412_phi_phi_fu_91465_p4 = ap_phi_reg_pp0_iter0_data_1342_V_read1412_phi_reg_91461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1342_V_read1412_rewind_phi_fu_47993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1342_V_read1412_rewind_phi_fu_47993_p6 = data_1342_V_read1412_phi_reg_91461.read();
    } else {
        ap_phi_mux_data_1342_V_read1412_rewind_phi_fu_47993_p6 = data_1342_V_read1412_rewind_reg_47989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1343_V_read1413_phi_phi_fu_91478_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1343_V_read1413_phi_phi_fu_91478_p4 = ap_phi_mux_data_1343_V_read1413_rewind_phi_fu_48007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1343_V_read1413_phi_phi_fu_91478_p4 = data_1343_V_read.read();
        } else {
            ap_phi_mux_data_1343_V_read1413_phi_phi_fu_91478_p4 = ap_phi_reg_pp0_iter0_data_1343_V_read1413_phi_reg_91474.read();
        }
    } else {
        ap_phi_mux_data_1343_V_read1413_phi_phi_fu_91478_p4 = ap_phi_reg_pp0_iter0_data_1343_V_read1413_phi_reg_91474.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1343_V_read1413_rewind_phi_fu_48007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1343_V_read1413_rewind_phi_fu_48007_p6 = data_1343_V_read1413_phi_reg_91474.read();
    } else {
        ap_phi_mux_data_1343_V_read1413_rewind_phi_fu_48007_p6 = data_1343_V_read1413_rewind_reg_48003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1344_V_read1414_phi_phi_fu_91491_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1344_V_read1414_phi_phi_fu_91491_p4 = ap_phi_mux_data_1344_V_read1414_rewind_phi_fu_48021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1344_V_read1414_phi_phi_fu_91491_p4 = data_1344_V_read.read();
        } else {
            ap_phi_mux_data_1344_V_read1414_phi_phi_fu_91491_p4 = ap_phi_reg_pp0_iter0_data_1344_V_read1414_phi_reg_91487.read();
        }
    } else {
        ap_phi_mux_data_1344_V_read1414_phi_phi_fu_91491_p4 = ap_phi_reg_pp0_iter0_data_1344_V_read1414_phi_reg_91487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1344_V_read1414_rewind_phi_fu_48021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1344_V_read1414_rewind_phi_fu_48021_p6 = data_1344_V_read1414_phi_reg_91487.read();
    } else {
        ap_phi_mux_data_1344_V_read1414_rewind_phi_fu_48021_p6 = data_1344_V_read1414_rewind_reg_48017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1345_V_read1415_phi_phi_fu_91504_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1345_V_read1415_phi_phi_fu_91504_p4 = ap_phi_mux_data_1345_V_read1415_rewind_phi_fu_48035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1345_V_read1415_phi_phi_fu_91504_p4 = data_1345_V_read.read();
        } else {
            ap_phi_mux_data_1345_V_read1415_phi_phi_fu_91504_p4 = ap_phi_reg_pp0_iter0_data_1345_V_read1415_phi_reg_91500.read();
        }
    } else {
        ap_phi_mux_data_1345_V_read1415_phi_phi_fu_91504_p4 = ap_phi_reg_pp0_iter0_data_1345_V_read1415_phi_reg_91500.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1345_V_read1415_rewind_phi_fu_48035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1345_V_read1415_rewind_phi_fu_48035_p6 = data_1345_V_read1415_phi_reg_91500.read();
    } else {
        ap_phi_mux_data_1345_V_read1415_rewind_phi_fu_48035_p6 = data_1345_V_read1415_rewind_reg_48031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1346_V_read1416_phi_phi_fu_91517_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1346_V_read1416_phi_phi_fu_91517_p4 = ap_phi_mux_data_1346_V_read1416_rewind_phi_fu_48049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1346_V_read1416_phi_phi_fu_91517_p4 = data_1346_V_read.read();
        } else {
            ap_phi_mux_data_1346_V_read1416_phi_phi_fu_91517_p4 = ap_phi_reg_pp0_iter0_data_1346_V_read1416_phi_reg_91513.read();
        }
    } else {
        ap_phi_mux_data_1346_V_read1416_phi_phi_fu_91517_p4 = ap_phi_reg_pp0_iter0_data_1346_V_read1416_phi_reg_91513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1346_V_read1416_rewind_phi_fu_48049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1346_V_read1416_rewind_phi_fu_48049_p6 = data_1346_V_read1416_phi_reg_91513.read();
    } else {
        ap_phi_mux_data_1346_V_read1416_rewind_phi_fu_48049_p6 = data_1346_V_read1416_rewind_reg_48045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1347_V_read1417_phi_phi_fu_91530_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1347_V_read1417_phi_phi_fu_91530_p4 = ap_phi_mux_data_1347_V_read1417_rewind_phi_fu_48063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1347_V_read1417_phi_phi_fu_91530_p4 = data_1347_V_read.read();
        } else {
            ap_phi_mux_data_1347_V_read1417_phi_phi_fu_91530_p4 = ap_phi_reg_pp0_iter0_data_1347_V_read1417_phi_reg_91526.read();
        }
    } else {
        ap_phi_mux_data_1347_V_read1417_phi_phi_fu_91530_p4 = ap_phi_reg_pp0_iter0_data_1347_V_read1417_phi_reg_91526.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1347_V_read1417_rewind_phi_fu_48063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1347_V_read1417_rewind_phi_fu_48063_p6 = data_1347_V_read1417_phi_reg_91526.read();
    } else {
        ap_phi_mux_data_1347_V_read1417_rewind_phi_fu_48063_p6 = data_1347_V_read1417_rewind_reg_48059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1348_V_read1418_phi_phi_fu_91543_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1348_V_read1418_phi_phi_fu_91543_p4 = ap_phi_mux_data_1348_V_read1418_rewind_phi_fu_48077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1348_V_read1418_phi_phi_fu_91543_p4 = data_1348_V_read.read();
        } else {
            ap_phi_mux_data_1348_V_read1418_phi_phi_fu_91543_p4 = ap_phi_reg_pp0_iter0_data_1348_V_read1418_phi_reg_91539.read();
        }
    } else {
        ap_phi_mux_data_1348_V_read1418_phi_phi_fu_91543_p4 = ap_phi_reg_pp0_iter0_data_1348_V_read1418_phi_reg_91539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1348_V_read1418_rewind_phi_fu_48077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1348_V_read1418_rewind_phi_fu_48077_p6 = data_1348_V_read1418_phi_reg_91539.read();
    } else {
        ap_phi_mux_data_1348_V_read1418_rewind_phi_fu_48077_p6 = data_1348_V_read1418_rewind_reg_48073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1349_V_read1419_phi_phi_fu_91556_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1349_V_read1419_phi_phi_fu_91556_p4 = ap_phi_mux_data_1349_V_read1419_rewind_phi_fu_48091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1349_V_read1419_phi_phi_fu_91556_p4 = data_1349_V_read.read();
        } else {
            ap_phi_mux_data_1349_V_read1419_phi_phi_fu_91556_p4 = ap_phi_reg_pp0_iter0_data_1349_V_read1419_phi_reg_91552.read();
        }
    } else {
        ap_phi_mux_data_1349_V_read1419_phi_phi_fu_91556_p4 = ap_phi_reg_pp0_iter0_data_1349_V_read1419_phi_reg_91552.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1349_V_read1419_rewind_phi_fu_48091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1349_V_read1419_rewind_phi_fu_48091_p6 = data_1349_V_read1419_phi_reg_91552.read();
    } else {
        ap_phi_mux_data_1349_V_read1419_rewind_phi_fu_48091_p6 = data_1349_V_read1419_rewind_reg_48087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_134_V_read204_phi_phi_fu_75761_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_134_V_read204_phi_phi_fu_75761_p4 = ap_phi_mux_data_134_V_read204_rewind_phi_fu_31081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_134_V_read204_phi_phi_fu_75761_p4 = data_134_V_read.read();
        } else {
            ap_phi_mux_data_134_V_read204_phi_phi_fu_75761_p4 = ap_phi_reg_pp0_iter0_data_134_V_read204_phi_reg_75757.read();
        }
    } else {
        ap_phi_mux_data_134_V_read204_phi_phi_fu_75761_p4 = ap_phi_reg_pp0_iter0_data_134_V_read204_phi_reg_75757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_134_V_read204_rewind_phi_fu_31081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_134_V_read204_rewind_phi_fu_31081_p6 = data_134_V_read204_phi_reg_75757.read();
    } else {
        ap_phi_mux_data_134_V_read204_rewind_phi_fu_31081_p6 = data_134_V_read204_rewind_reg_31077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1350_V_read1420_phi_phi_fu_91569_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1350_V_read1420_phi_phi_fu_91569_p4 = ap_phi_mux_data_1350_V_read1420_rewind_phi_fu_48105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1350_V_read1420_phi_phi_fu_91569_p4 = data_1350_V_read.read();
        } else {
            ap_phi_mux_data_1350_V_read1420_phi_phi_fu_91569_p4 = ap_phi_reg_pp0_iter0_data_1350_V_read1420_phi_reg_91565.read();
        }
    } else {
        ap_phi_mux_data_1350_V_read1420_phi_phi_fu_91569_p4 = ap_phi_reg_pp0_iter0_data_1350_V_read1420_phi_reg_91565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1350_V_read1420_rewind_phi_fu_48105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1350_V_read1420_rewind_phi_fu_48105_p6 = data_1350_V_read1420_phi_reg_91565.read();
    } else {
        ap_phi_mux_data_1350_V_read1420_rewind_phi_fu_48105_p6 = data_1350_V_read1420_rewind_reg_48101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1351_V_read1421_phi_phi_fu_91582_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1351_V_read1421_phi_phi_fu_91582_p4 = ap_phi_mux_data_1351_V_read1421_rewind_phi_fu_48119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1351_V_read1421_phi_phi_fu_91582_p4 = data_1351_V_read.read();
        } else {
            ap_phi_mux_data_1351_V_read1421_phi_phi_fu_91582_p4 = ap_phi_reg_pp0_iter0_data_1351_V_read1421_phi_reg_91578.read();
        }
    } else {
        ap_phi_mux_data_1351_V_read1421_phi_phi_fu_91582_p4 = ap_phi_reg_pp0_iter0_data_1351_V_read1421_phi_reg_91578.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1351_V_read1421_rewind_phi_fu_48119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1351_V_read1421_rewind_phi_fu_48119_p6 = data_1351_V_read1421_phi_reg_91578.read();
    } else {
        ap_phi_mux_data_1351_V_read1421_rewind_phi_fu_48119_p6 = data_1351_V_read1421_rewind_reg_48115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1352_V_read1422_phi_phi_fu_91595_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1352_V_read1422_phi_phi_fu_91595_p4 = ap_phi_mux_data_1352_V_read1422_rewind_phi_fu_48133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1352_V_read1422_phi_phi_fu_91595_p4 = data_1352_V_read.read();
        } else {
            ap_phi_mux_data_1352_V_read1422_phi_phi_fu_91595_p4 = ap_phi_reg_pp0_iter0_data_1352_V_read1422_phi_reg_91591.read();
        }
    } else {
        ap_phi_mux_data_1352_V_read1422_phi_phi_fu_91595_p4 = ap_phi_reg_pp0_iter0_data_1352_V_read1422_phi_reg_91591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1352_V_read1422_rewind_phi_fu_48133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1352_V_read1422_rewind_phi_fu_48133_p6 = data_1352_V_read1422_phi_reg_91591.read();
    } else {
        ap_phi_mux_data_1352_V_read1422_rewind_phi_fu_48133_p6 = data_1352_V_read1422_rewind_reg_48129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1353_V_read1423_phi_phi_fu_91608_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1353_V_read1423_phi_phi_fu_91608_p4 = ap_phi_mux_data_1353_V_read1423_rewind_phi_fu_48147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1353_V_read1423_phi_phi_fu_91608_p4 = data_1353_V_read.read();
        } else {
            ap_phi_mux_data_1353_V_read1423_phi_phi_fu_91608_p4 = ap_phi_reg_pp0_iter0_data_1353_V_read1423_phi_reg_91604.read();
        }
    } else {
        ap_phi_mux_data_1353_V_read1423_phi_phi_fu_91608_p4 = ap_phi_reg_pp0_iter0_data_1353_V_read1423_phi_reg_91604.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1353_V_read1423_rewind_phi_fu_48147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1353_V_read1423_rewind_phi_fu_48147_p6 = data_1353_V_read1423_phi_reg_91604.read();
    } else {
        ap_phi_mux_data_1353_V_read1423_rewind_phi_fu_48147_p6 = data_1353_V_read1423_rewind_reg_48143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1354_V_read1424_phi_phi_fu_91621_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1354_V_read1424_phi_phi_fu_91621_p4 = ap_phi_mux_data_1354_V_read1424_rewind_phi_fu_48161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1354_V_read1424_phi_phi_fu_91621_p4 = data_1354_V_read.read();
        } else {
            ap_phi_mux_data_1354_V_read1424_phi_phi_fu_91621_p4 = ap_phi_reg_pp0_iter0_data_1354_V_read1424_phi_reg_91617.read();
        }
    } else {
        ap_phi_mux_data_1354_V_read1424_phi_phi_fu_91621_p4 = ap_phi_reg_pp0_iter0_data_1354_V_read1424_phi_reg_91617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1354_V_read1424_rewind_phi_fu_48161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1354_V_read1424_rewind_phi_fu_48161_p6 = data_1354_V_read1424_phi_reg_91617.read();
    } else {
        ap_phi_mux_data_1354_V_read1424_rewind_phi_fu_48161_p6 = data_1354_V_read1424_rewind_reg_48157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1355_V_read1425_phi_phi_fu_91634_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1355_V_read1425_phi_phi_fu_91634_p4 = ap_phi_mux_data_1355_V_read1425_rewind_phi_fu_48175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1355_V_read1425_phi_phi_fu_91634_p4 = data_1355_V_read.read();
        } else {
            ap_phi_mux_data_1355_V_read1425_phi_phi_fu_91634_p4 = ap_phi_reg_pp0_iter0_data_1355_V_read1425_phi_reg_91630.read();
        }
    } else {
        ap_phi_mux_data_1355_V_read1425_phi_phi_fu_91634_p4 = ap_phi_reg_pp0_iter0_data_1355_V_read1425_phi_reg_91630.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1355_V_read1425_rewind_phi_fu_48175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1355_V_read1425_rewind_phi_fu_48175_p6 = data_1355_V_read1425_phi_reg_91630.read();
    } else {
        ap_phi_mux_data_1355_V_read1425_rewind_phi_fu_48175_p6 = data_1355_V_read1425_rewind_reg_48171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1356_V_read1426_phi_phi_fu_91647_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1356_V_read1426_phi_phi_fu_91647_p4 = ap_phi_mux_data_1356_V_read1426_rewind_phi_fu_48189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1356_V_read1426_phi_phi_fu_91647_p4 = data_1356_V_read.read();
        } else {
            ap_phi_mux_data_1356_V_read1426_phi_phi_fu_91647_p4 = ap_phi_reg_pp0_iter0_data_1356_V_read1426_phi_reg_91643.read();
        }
    } else {
        ap_phi_mux_data_1356_V_read1426_phi_phi_fu_91647_p4 = ap_phi_reg_pp0_iter0_data_1356_V_read1426_phi_reg_91643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1356_V_read1426_rewind_phi_fu_48189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1356_V_read1426_rewind_phi_fu_48189_p6 = data_1356_V_read1426_phi_reg_91643.read();
    } else {
        ap_phi_mux_data_1356_V_read1426_rewind_phi_fu_48189_p6 = data_1356_V_read1426_rewind_reg_48185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1357_V_read1427_phi_phi_fu_91660_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1357_V_read1427_phi_phi_fu_91660_p4 = ap_phi_mux_data_1357_V_read1427_rewind_phi_fu_48203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1357_V_read1427_phi_phi_fu_91660_p4 = data_1357_V_read.read();
        } else {
            ap_phi_mux_data_1357_V_read1427_phi_phi_fu_91660_p4 = ap_phi_reg_pp0_iter0_data_1357_V_read1427_phi_reg_91656.read();
        }
    } else {
        ap_phi_mux_data_1357_V_read1427_phi_phi_fu_91660_p4 = ap_phi_reg_pp0_iter0_data_1357_V_read1427_phi_reg_91656.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1357_V_read1427_rewind_phi_fu_48203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1357_V_read1427_rewind_phi_fu_48203_p6 = data_1357_V_read1427_phi_reg_91656.read();
    } else {
        ap_phi_mux_data_1357_V_read1427_rewind_phi_fu_48203_p6 = data_1357_V_read1427_rewind_reg_48199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1358_V_read1428_phi_phi_fu_91673_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1358_V_read1428_phi_phi_fu_91673_p4 = ap_phi_mux_data_1358_V_read1428_rewind_phi_fu_48217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1358_V_read1428_phi_phi_fu_91673_p4 = data_1358_V_read.read();
        } else {
            ap_phi_mux_data_1358_V_read1428_phi_phi_fu_91673_p4 = ap_phi_reg_pp0_iter0_data_1358_V_read1428_phi_reg_91669.read();
        }
    } else {
        ap_phi_mux_data_1358_V_read1428_phi_phi_fu_91673_p4 = ap_phi_reg_pp0_iter0_data_1358_V_read1428_phi_reg_91669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1358_V_read1428_rewind_phi_fu_48217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1358_V_read1428_rewind_phi_fu_48217_p6 = data_1358_V_read1428_phi_reg_91669.read();
    } else {
        ap_phi_mux_data_1358_V_read1428_rewind_phi_fu_48217_p6 = data_1358_V_read1428_rewind_reg_48213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1359_V_read1429_phi_phi_fu_91686_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1359_V_read1429_phi_phi_fu_91686_p4 = ap_phi_mux_data_1359_V_read1429_rewind_phi_fu_48231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1359_V_read1429_phi_phi_fu_91686_p4 = data_1359_V_read.read();
        } else {
            ap_phi_mux_data_1359_V_read1429_phi_phi_fu_91686_p4 = ap_phi_reg_pp0_iter0_data_1359_V_read1429_phi_reg_91682.read();
        }
    } else {
        ap_phi_mux_data_1359_V_read1429_phi_phi_fu_91686_p4 = ap_phi_reg_pp0_iter0_data_1359_V_read1429_phi_reg_91682.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1359_V_read1429_rewind_phi_fu_48231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1359_V_read1429_rewind_phi_fu_48231_p6 = data_1359_V_read1429_phi_reg_91682.read();
    } else {
        ap_phi_mux_data_1359_V_read1429_rewind_phi_fu_48231_p6 = data_1359_V_read1429_rewind_reg_48227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_135_V_read205_phi_phi_fu_75774_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_135_V_read205_phi_phi_fu_75774_p4 = ap_phi_mux_data_135_V_read205_rewind_phi_fu_31095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_135_V_read205_phi_phi_fu_75774_p4 = data_135_V_read.read();
        } else {
            ap_phi_mux_data_135_V_read205_phi_phi_fu_75774_p4 = ap_phi_reg_pp0_iter0_data_135_V_read205_phi_reg_75770.read();
        }
    } else {
        ap_phi_mux_data_135_V_read205_phi_phi_fu_75774_p4 = ap_phi_reg_pp0_iter0_data_135_V_read205_phi_reg_75770.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_135_V_read205_rewind_phi_fu_31095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_135_V_read205_rewind_phi_fu_31095_p6 = data_135_V_read205_phi_reg_75770.read();
    } else {
        ap_phi_mux_data_135_V_read205_rewind_phi_fu_31095_p6 = data_135_V_read205_rewind_reg_31091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1360_V_read1430_phi_phi_fu_91699_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1360_V_read1430_phi_phi_fu_91699_p4 = ap_phi_mux_data_1360_V_read1430_rewind_phi_fu_48245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1360_V_read1430_phi_phi_fu_91699_p4 = data_1360_V_read.read();
        } else {
            ap_phi_mux_data_1360_V_read1430_phi_phi_fu_91699_p4 = ap_phi_reg_pp0_iter0_data_1360_V_read1430_phi_reg_91695.read();
        }
    } else {
        ap_phi_mux_data_1360_V_read1430_phi_phi_fu_91699_p4 = ap_phi_reg_pp0_iter0_data_1360_V_read1430_phi_reg_91695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1360_V_read1430_rewind_phi_fu_48245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1360_V_read1430_rewind_phi_fu_48245_p6 = data_1360_V_read1430_phi_reg_91695.read();
    } else {
        ap_phi_mux_data_1360_V_read1430_rewind_phi_fu_48245_p6 = data_1360_V_read1430_rewind_reg_48241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1361_V_read1431_phi_phi_fu_91712_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1361_V_read1431_phi_phi_fu_91712_p4 = ap_phi_mux_data_1361_V_read1431_rewind_phi_fu_48259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1361_V_read1431_phi_phi_fu_91712_p4 = data_1361_V_read.read();
        } else {
            ap_phi_mux_data_1361_V_read1431_phi_phi_fu_91712_p4 = ap_phi_reg_pp0_iter0_data_1361_V_read1431_phi_reg_91708.read();
        }
    } else {
        ap_phi_mux_data_1361_V_read1431_phi_phi_fu_91712_p4 = ap_phi_reg_pp0_iter0_data_1361_V_read1431_phi_reg_91708.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1361_V_read1431_rewind_phi_fu_48259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1361_V_read1431_rewind_phi_fu_48259_p6 = data_1361_V_read1431_phi_reg_91708.read();
    } else {
        ap_phi_mux_data_1361_V_read1431_rewind_phi_fu_48259_p6 = data_1361_V_read1431_rewind_reg_48255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1362_V_read1432_phi_phi_fu_91725_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1362_V_read1432_phi_phi_fu_91725_p4 = ap_phi_mux_data_1362_V_read1432_rewind_phi_fu_48273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1362_V_read1432_phi_phi_fu_91725_p4 = data_1362_V_read.read();
        } else {
            ap_phi_mux_data_1362_V_read1432_phi_phi_fu_91725_p4 = ap_phi_reg_pp0_iter0_data_1362_V_read1432_phi_reg_91721.read();
        }
    } else {
        ap_phi_mux_data_1362_V_read1432_phi_phi_fu_91725_p4 = ap_phi_reg_pp0_iter0_data_1362_V_read1432_phi_reg_91721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1362_V_read1432_rewind_phi_fu_48273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1362_V_read1432_rewind_phi_fu_48273_p6 = data_1362_V_read1432_phi_reg_91721.read();
    } else {
        ap_phi_mux_data_1362_V_read1432_rewind_phi_fu_48273_p6 = data_1362_V_read1432_rewind_reg_48269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1363_V_read1433_phi_phi_fu_91738_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1363_V_read1433_phi_phi_fu_91738_p4 = ap_phi_mux_data_1363_V_read1433_rewind_phi_fu_48287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1363_V_read1433_phi_phi_fu_91738_p4 = data_1363_V_read.read();
        } else {
            ap_phi_mux_data_1363_V_read1433_phi_phi_fu_91738_p4 = ap_phi_reg_pp0_iter0_data_1363_V_read1433_phi_reg_91734.read();
        }
    } else {
        ap_phi_mux_data_1363_V_read1433_phi_phi_fu_91738_p4 = ap_phi_reg_pp0_iter0_data_1363_V_read1433_phi_reg_91734.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1363_V_read1433_rewind_phi_fu_48287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1363_V_read1433_rewind_phi_fu_48287_p6 = data_1363_V_read1433_phi_reg_91734.read();
    } else {
        ap_phi_mux_data_1363_V_read1433_rewind_phi_fu_48287_p6 = data_1363_V_read1433_rewind_reg_48283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1364_V_read1434_phi_phi_fu_91751_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1364_V_read1434_phi_phi_fu_91751_p4 = ap_phi_mux_data_1364_V_read1434_rewind_phi_fu_48301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1364_V_read1434_phi_phi_fu_91751_p4 = data_1364_V_read.read();
        } else {
            ap_phi_mux_data_1364_V_read1434_phi_phi_fu_91751_p4 = ap_phi_reg_pp0_iter0_data_1364_V_read1434_phi_reg_91747.read();
        }
    } else {
        ap_phi_mux_data_1364_V_read1434_phi_phi_fu_91751_p4 = ap_phi_reg_pp0_iter0_data_1364_V_read1434_phi_reg_91747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1364_V_read1434_rewind_phi_fu_48301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1364_V_read1434_rewind_phi_fu_48301_p6 = data_1364_V_read1434_phi_reg_91747.read();
    } else {
        ap_phi_mux_data_1364_V_read1434_rewind_phi_fu_48301_p6 = data_1364_V_read1434_rewind_reg_48297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1365_V_read1435_phi_phi_fu_91764_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1365_V_read1435_phi_phi_fu_91764_p4 = ap_phi_mux_data_1365_V_read1435_rewind_phi_fu_48315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1365_V_read1435_phi_phi_fu_91764_p4 = data_1365_V_read.read();
        } else {
            ap_phi_mux_data_1365_V_read1435_phi_phi_fu_91764_p4 = ap_phi_reg_pp0_iter0_data_1365_V_read1435_phi_reg_91760.read();
        }
    } else {
        ap_phi_mux_data_1365_V_read1435_phi_phi_fu_91764_p4 = ap_phi_reg_pp0_iter0_data_1365_V_read1435_phi_reg_91760.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1365_V_read1435_rewind_phi_fu_48315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1365_V_read1435_rewind_phi_fu_48315_p6 = data_1365_V_read1435_phi_reg_91760.read();
    } else {
        ap_phi_mux_data_1365_V_read1435_rewind_phi_fu_48315_p6 = data_1365_V_read1435_rewind_reg_48311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1366_V_read1436_phi_phi_fu_91777_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1366_V_read1436_phi_phi_fu_91777_p4 = ap_phi_mux_data_1366_V_read1436_rewind_phi_fu_48329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1366_V_read1436_phi_phi_fu_91777_p4 = data_1366_V_read.read();
        } else {
            ap_phi_mux_data_1366_V_read1436_phi_phi_fu_91777_p4 = ap_phi_reg_pp0_iter0_data_1366_V_read1436_phi_reg_91773.read();
        }
    } else {
        ap_phi_mux_data_1366_V_read1436_phi_phi_fu_91777_p4 = ap_phi_reg_pp0_iter0_data_1366_V_read1436_phi_reg_91773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1366_V_read1436_rewind_phi_fu_48329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1366_V_read1436_rewind_phi_fu_48329_p6 = data_1366_V_read1436_phi_reg_91773.read();
    } else {
        ap_phi_mux_data_1366_V_read1436_rewind_phi_fu_48329_p6 = data_1366_V_read1436_rewind_reg_48325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1367_V_read1437_phi_phi_fu_91790_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1367_V_read1437_phi_phi_fu_91790_p4 = ap_phi_mux_data_1367_V_read1437_rewind_phi_fu_48343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1367_V_read1437_phi_phi_fu_91790_p4 = data_1367_V_read.read();
        } else {
            ap_phi_mux_data_1367_V_read1437_phi_phi_fu_91790_p4 = ap_phi_reg_pp0_iter0_data_1367_V_read1437_phi_reg_91786.read();
        }
    } else {
        ap_phi_mux_data_1367_V_read1437_phi_phi_fu_91790_p4 = ap_phi_reg_pp0_iter0_data_1367_V_read1437_phi_reg_91786.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1367_V_read1437_rewind_phi_fu_48343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1367_V_read1437_rewind_phi_fu_48343_p6 = data_1367_V_read1437_phi_reg_91786.read();
    } else {
        ap_phi_mux_data_1367_V_read1437_rewind_phi_fu_48343_p6 = data_1367_V_read1437_rewind_reg_48339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1368_V_read1438_phi_phi_fu_91803_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1368_V_read1438_phi_phi_fu_91803_p4 = ap_phi_mux_data_1368_V_read1438_rewind_phi_fu_48357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1368_V_read1438_phi_phi_fu_91803_p4 = data_1368_V_read.read();
        } else {
            ap_phi_mux_data_1368_V_read1438_phi_phi_fu_91803_p4 = ap_phi_reg_pp0_iter0_data_1368_V_read1438_phi_reg_91799.read();
        }
    } else {
        ap_phi_mux_data_1368_V_read1438_phi_phi_fu_91803_p4 = ap_phi_reg_pp0_iter0_data_1368_V_read1438_phi_reg_91799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1368_V_read1438_rewind_phi_fu_48357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1368_V_read1438_rewind_phi_fu_48357_p6 = data_1368_V_read1438_phi_reg_91799.read();
    } else {
        ap_phi_mux_data_1368_V_read1438_rewind_phi_fu_48357_p6 = data_1368_V_read1438_rewind_reg_48353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1369_V_read1439_phi_phi_fu_91816_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1369_V_read1439_phi_phi_fu_91816_p4 = ap_phi_mux_data_1369_V_read1439_rewind_phi_fu_48371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1369_V_read1439_phi_phi_fu_91816_p4 = data_1369_V_read.read();
        } else {
            ap_phi_mux_data_1369_V_read1439_phi_phi_fu_91816_p4 = ap_phi_reg_pp0_iter0_data_1369_V_read1439_phi_reg_91812.read();
        }
    } else {
        ap_phi_mux_data_1369_V_read1439_phi_phi_fu_91816_p4 = ap_phi_reg_pp0_iter0_data_1369_V_read1439_phi_reg_91812.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1369_V_read1439_rewind_phi_fu_48371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1369_V_read1439_rewind_phi_fu_48371_p6 = data_1369_V_read1439_phi_reg_91812.read();
    } else {
        ap_phi_mux_data_1369_V_read1439_rewind_phi_fu_48371_p6 = data_1369_V_read1439_rewind_reg_48367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_136_V_read206_phi_phi_fu_75787_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_136_V_read206_phi_phi_fu_75787_p4 = ap_phi_mux_data_136_V_read206_rewind_phi_fu_31109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_136_V_read206_phi_phi_fu_75787_p4 = data_136_V_read.read();
        } else {
            ap_phi_mux_data_136_V_read206_phi_phi_fu_75787_p4 = ap_phi_reg_pp0_iter0_data_136_V_read206_phi_reg_75783.read();
        }
    } else {
        ap_phi_mux_data_136_V_read206_phi_phi_fu_75787_p4 = ap_phi_reg_pp0_iter0_data_136_V_read206_phi_reg_75783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_136_V_read206_rewind_phi_fu_31109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_136_V_read206_rewind_phi_fu_31109_p6 = data_136_V_read206_phi_reg_75783.read();
    } else {
        ap_phi_mux_data_136_V_read206_rewind_phi_fu_31109_p6 = data_136_V_read206_rewind_reg_31105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1370_V_read1440_phi_phi_fu_91829_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1370_V_read1440_phi_phi_fu_91829_p4 = ap_phi_mux_data_1370_V_read1440_rewind_phi_fu_48385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1370_V_read1440_phi_phi_fu_91829_p4 = data_1370_V_read.read();
        } else {
            ap_phi_mux_data_1370_V_read1440_phi_phi_fu_91829_p4 = ap_phi_reg_pp0_iter0_data_1370_V_read1440_phi_reg_91825.read();
        }
    } else {
        ap_phi_mux_data_1370_V_read1440_phi_phi_fu_91829_p4 = ap_phi_reg_pp0_iter0_data_1370_V_read1440_phi_reg_91825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1370_V_read1440_rewind_phi_fu_48385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1370_V_read1440_rewind_phi_fu_48385_p6 = data_1370_V_read1440_phi_reg_91825.read();
    } else {
        ap_phi_mux_data_1370_V_read1440_rewind_phi_fu_48385_p6 = data_1370_V_read1440_rewind_reg_48381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1371_V_read1441_phi_phi_fu_91842_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1371_V_read1441_phi_phi_fu_91842_p4 = ap_phi_mux_data_1371_V_read1441_rewind_phi_fu_48399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1371_V_read1441_phi_phi_fu_91842_p4 = data_1371_V_read.read();
        } else {
            ap_phi_mux_data_1371_V_read1441_phi_phi_fu_91842_p4 = ap_phi_reg_pp0_iter0_data_1371_V_read1441_phi_reg_91838.read();
        }
    } else {
        ap_phi_mux_data_1371_V_read1441_phi_phi_fu_91842_p4 = ap_phi_reg_pp0_iter0_data_1371_V_read1441_phi_reg_91838.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1371_V_read1441_rewind_phi_fu_48399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1371_V_read1441_rewind_phi_fu_48399_p6 = data_1371_V_read1441_phi_reg_91838.read();
    } else {
        ap_phi_mux_data_1371_V_read1441_rewind_phi_fu_48399_p6 = data_1371_V_read1441_rewind_reg_48395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1372_V_read1442_phi_phi_fu_91855_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1372_V_read1442_phi_phi_fu_91855_p4 = ap_phi_mux_data_1372_V_read1442_rewind_phi_fu_48413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1372_V_read1442_phi_phi_fu_91855_p4 = data_1372_V_read.read();
        } else {
            ap_phi_mux_data_1372_V_read1442_phi_phi_fu_91855_p4 = ap_phi_reg_pp0_iter0_data_1372_V_read1442_phi_reg_91851.read();
        }
    } else {
        ap_phi_mux_data_1372_V_read1442_phi_phi_fu_91855_p4 = ap_phi_reg_pp0_iter0_data_1372_V_read1442_phi_reg_91851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1372_V_read1442_rewind_phi_fu_48413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1372_V_read1442_rewind_phi_fu_48413_p6 = data_1372_V_read1442_phi_reg_91851.read();
    } else {
        ap_phi_mux_data_1372_V_read1442_rewind_phi_fu_48413_p6 = data_1372_V_read1442_rewind_reg_48409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1373_V_read1443_phi_phi_fu_91868_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1373_V_read1443_phi_phi_fu_91868_p4 = ap_phi_mux_data_1373_V_read1443_rewind_phi_fu_48427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1373_V_read1443_phi_phi_fu_91868_p4 = data_1373_V_read.read();
        } else {
            ap_phi_mux_data_1373_V_read1443_phi_phi_fu_91868_p4 = ap_phi_reg_pp0_iter0_data_1373_V_read1443_phi_reg_91864.read();
        }
    } else {
        ap_phi_mux_data_1373_V_read1443_phi_phi_fu_91868_p4 = ap_phi_reg_pp0_iter0_data_1373_V_read1443_phi_reg_91864.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1373_V_read1443_rewind_phi_fu_48427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1373_V_read1443_rewind_phi_fu_48427_p6 = data_1373_V_read1443_phi_reg_91864.read();
    } else {
        ap_phi_mux_data_1373_V_read1443_rewind_phi_fu_48427_p6 = data_1373_V_read1443_rewind_reg_48423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1374_V_read1444_phi_phi_fu_91881_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1374_V_read1444_phi_phi_fu_91881_p4 = ap_phi_mux_data_1374_V_read1444_rewind_phi_fu_48441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1374_V_read1444_phi_phi_fu_91881_p4 = data_1374_V_read.read();
        } else {
            ap_phi_mux_data_1374_V_read1444_phi_phi_fu_91881_p4 = ap_phi_reg_pp0_iter0_data_1374_V_read1444_phi_reg_91877.read();
        }
    } else {
        ap_phi_mux_data_1374_V_read1444_phi_phi_fu_91881_p4 = ap_phi_reg_pp0_iter0_data_1374_V_read1444_phi_reg_91877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1374_V_read1444_rewind_phi_fu_48441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1374_V_read1444_rewind_phi_fu_48441_p6 = data_1374_V_read1444_phi_reg_91877.read();
    } else {
        ap_phi_mux_data_1374_V_read1444_rewind_phi_fu_48441_p6 = data_1374_V_read1444_rewind_reg_48437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1375_V_read1445_phi_phi_fu_91894_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1375_V_read1445_phi_phi_fu_91894_p4 = ap_phi_mux_data_1375_V_read1445_rewind_phi_fu_48455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1375_V_read1445_phi_phi_fu_91894_p4 = data_1375_V_read.read();
        } else {
            ap_phi_mux_data_1375_V_read1445_phi_phi_fu_91894_p4 = ap_phi_reg_pp0_iter0_data_1375_V_read1445_phi_reg_91890.read();
        }
    } else {
        ap_phi_mux_data_1375_V_read1445_phi_phi_fu_91894_p4 = ap_phi_reg_pp0_iter0_data_1375_V_read1445_phi_reg_91890.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1375_V_read1445_rewind_phi_fu_48455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1375_V_read1445_rewind_phi_fu_48455_p6 = data_1375_V_read1445_phi_reg_91890.read();
    } else {
        ap_phi_mux_data_1375_V_read1445_rewind_phi_fu_48455_p6 = data_1375_V_read1445_rewind_reg_48451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1376_V_read1446_phi_phi_fu_91907_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1376_V_read1446_phi_phi_fu_91907_p4 = ap_phi_mux_data_1376_V_read1446_rewind_phi_fu_48469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1376_V_read1446_phi_phi_fu_91907_p4 = data_1376_V_read.read();
        } else {
            ap_phi_mux_data_1376_V_read1446_phi_phi_fu_91907_p4 = ap_phi_reg_pp0_iter0_data_1376_V_read1446_phi_reg_91903.read();
        }
    } else {
        ap_phi_mux_data_1376_V_read1446_phi_phi_fu_91907_p4 = ap_phi_reg_pp0_iter0_data_1376_V_read1446_phi_reg_91903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1376_V_read1446_rewind_phi_fu_48469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1376_V_read1446_rewind_phi_fu_48469_p6 = data_1376_V_read1446_phi_reg_91903.read();
    } else {
        ap_phi_mux_data_1376_V_read1446_rewind_phi_fu_48469_p6 = data_1376_V_read1446_rewind_reg_48465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1377_V_read1447_phi_phi_fu_91920_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1377_V_read1447_phi_phi_fu_91920_p4 = ap_phi_mux_data_1377_V_read1447_rewind_phi_fu_48483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1377_V_read1447_phi_phi_fu_91920_p4 = data_1377_V_read.read();
        } else {
            ap_phi_mux_data_1377_V_read1447_phi_phi_fu_91920_p4 = ap_phi_reg_pp0_iter0_data_1377_V_read1447_phi_reg_91916.read();
        }
    } else {
        ap_phi_mux_data_1377_V_read1447_phi_phi_fu_91920_p4 = ap_phi_reg_pp0_iter0_data_1377_V_read1447_phi_reg_91916.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1377_V_read1447_rewind_phi_fu_48483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1377_V_read1447_rewind_phi_fu_48483_p6 = data_1377_V_read1447_phi_reg_91916.read();
    } else {
        ap_phi_mux_data_1377_V_read1447_rewind_phi_fu_48483_p6 = data_1377_V_read1447_rewind_reg_48479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1378_V_read1448_phi_phi_fu_91933_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1378_V_read1448_phi_phi_fu_91933_p4 = ap_phi_mux_data_1378_V_read1448_rewind_phi_fu_48497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1378_V_read1448_phi_phi_fu_91933_p4 = data_1378_V_read.read();
        } else {
            ap_phi_mux_data_1378_V_read1448_phi_phi_fu_91933_p4 = ap_phi_reg_pp0_iter0_data_1378_V_read1448_phi_reg_91929.read();
        }
    } else {
        ap_phi_mux_data_1378_V_read1448_phi_phi_fu_91933_p4 = ap_phi_reg_pp0_iter0_data_1378_V_read1448_phi_reg_91929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1378_V_read1448_rewind_phi_fu_48497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1378_V_read1448_rewind_phi_fu_48497_p6 = data_1378_V_read1448_phi_reg_91929.read();
    } else {
        ap_phi_mux_data_1378_V_read1448_rewind_phi_fu_48497_p6 = data_1378_V_read1448_rewind_reg_48493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1379_V_read1449_phi_phi_fu_91946_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1379_V_read1449_phi_phi_fu_91946_p4 = ap_phi_mux_data_1379_V_read1449_rewind_phi_fu_48511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1379_V_read1449_phi_phi_fu_91946_p4 = data_1379_V_read.read();
        } else {
            ap_phi_mux_data_1379_V_read1449_phi_phi_fu_91946_p4 = ap_phi_reg_pp0_iter0_data_1379_V_read1449_phi_reg_91942.read();
        }
    } else {
        ap_phi_mux_data_1379_V_read1449_phi_phi_fu_91946_p4 = ap_phi_reg_pp0_iter0_data_1379_V_read1449_phi_reg_91942.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1379_V_read1449_rewind_phi_fu_48511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1379_V_read1449_rewind_phi_fu_48511_p6 = data_1379_V_read1449_phi_reg_91942.read();
    } else {
        ap_phi_mux_data_1379_V_read1449_rewind_phi_fu_48511_p6 = data_1379_V_read1449_rewind_reg_48507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_137_V_read207_phi_phi_fu_75800_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_137_V_read207_phi_phi_fu_75800_p4 = ap_phi_mux_data_137_V_read207_rewind_phi_fu_31123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_137_V_read207_phi_phi_fu_75800_p4 = data_137_V_read.read();
        } else {
            ap_phi_mux_data_137_V_read207_phi_phi_fu_75800_p4 = ap_phi_reg_pp0_iter0_data_137_V_read207_phi_reg_75796.read();
        }
    } else {
        ap_phi_mux_data_137_V_read207_phi_phi_fu_75800_p4 = ap_phi_reg_pp0_iter0_data_137_V_read207_phi_reg_75796.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_137_V_read207_rewind_phi_fu_31123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_137_V_read207_rewind_phi_fu_31123_p6 = data_137_V_read207_phi_reg_75796.read();
    } else {
        ap_phi_mux_data_137_V_read207_rewind_phi_fu_31123_p6 = data_137_V_read207_rewind_reg_31119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1380_V_read1450_phi_phi_fu_91959_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1380_V_read1450_phi_phi_fu_91959_p4 = ap_phi_mux_data_1380_V_read1450_rewind_phi_fu_48525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1380_V_read1450_phi_phi_fu_91959_p4 = data_1380_V_read.read();
        } else {
            ap_phi_mux_data_1380_V_read1450_phi_phi_fu_91959_p4 = ap_phi_reg_pp0_iter0_data_1380_V_read1450_phi_reg_91955.read();
        }
    } else {
        ap_phi_mux_data_1380_V_read1450_phi_phi_fu_91959_p4 = ap_phi_reg_pp0_iter0_data_1380_V_read1450_phi_reg_91955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1380_V_read1450_rewind_phi_fu_48525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1380_V_read1450_rewind_phi_fu_48525_p6 = data_1380_V_read1450_phi_reg_91955.read();
    } else {
        ap_phi_mux_data_1380_V_read1450_rewind_phi_fu_48525_p6 = data_1380_V_read1450_rewind_reg_48521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1381_V_read1451_phi_phi_fu_91972_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1381_V_read1451_phi_phi_fu_91972_p4 = ap_phi_mux_data_1381_V_read1451_rewind_phi_fu_48539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1381_V_read1451_phi_phi_fu_91972_p4 = data_1381_V_read.read();
        } else {
            ap_phi_mux_data_1381_V_read1451_phi_phi_fu_91972_p4 = ap_phi_reg_pp0_iter0_data_1381_V_read1451_phi_reg_91968.read();
        }
    } else {
        ap_phi_mux_data_1381_V_read1451_phi_phi_fu_91972_p4 = ap_phi_reg_pp0_iter0_data_1381_V_read1451_phi_reg_91968.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1381_V_read1451_rewind_phi_fu_48539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1381_V_read1451_rewind_phi_fu_48539_p6 = data_1381_V_read1451_phi_reg_91968.read();
    } else {
        ap_phi_mux_data_1381_V_read1451_rewind_phi_fu_48539_p6 = data_1381_V_read1451_rewind_reg_48535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1382_V_read1452_phi_phi_fu_91985_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1382_V_read1452_phi_phi_fu_91985_p4 = ap_phi_mux_data_1382_V_read1452_rewind_phi_fu_48553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1382_V_read1452_phi_phi_fu_91985_p4 = data_1382_V_read.read();
        } else {
            ap_phi_mux_data_1382_V_read1452_phi_phi_fu_91985_p4 = ap_phi_reg_pp0_iter0_data_1382_V_read1452_phi_reg_91981.read();
        }
    } else {
        ap_phi_mux_data_1382_V_read1452_phi_phi_fu_91985_p4 = ap_phi_reg_pp0_iter0_data_1382_V_read1452_phi_reg_91981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1382_V_read1452_rewind_phi_fu_48553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1382_V_read1452_rewind_phi_fu_48553_p6 = data_1382_V_read1452_phi_reg_91981.read();
    } else {
        ap_phi_mux_data_1382_V_read1452_rewind_phi_fu_48553_p6 = data_1382_V_read1452_rewind_reg_48549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1383_V_read1453_phi_phi_fu_91998_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1383_V_read1453_phi_phi_fu_91998_p4 = ap_phi_mux_data_1383_V_read1453_rewind_phi_fu_48567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1383_V_read1453_phi_phi_fu_91998_p4 = data_1383_V_read.read();
        } else {
            ap_phi_mux_data_1383_V_read1453_phi_phi_fu_91998_p4 = ap_phi_reg_pp0_iter0_data_1383_V_read1453_phi_reg_91994.read();
        }
    } else {
        ap_phi_mux_data_1383_V_read1453_phi_phi_fu_91998_p4 = ap_phi_reg_pp0_iter0_data_1383_V_read1453_phi_reg_91994.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1383_V_read1453_rewind_phi_fu_48567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1383_V_read1453_rewind_phi_fu_48567_p6 = data_1383_V_read1453_phi_reg_91994.read();
    } else {
        ap_phi_mux_data_1383_V_read1453_rewind_phi_fu_48567_p6 = data_1383_V_read1453_rewind_reg_48563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1384_V_read1454_phi_phi_fu_92011_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1384_V_read1454_phi_phi_fu_92011_p4 = ap_phi_mux_data_1384_V_read1454_rewind_phi_fu_48581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1384_V_read1454_phi_phi_fu_92011_p4 = data_1384_V_read.read();
        } else {
            ap_phi_mux_data_1384_V_read1454_phi_phi_fu_92011_p4 = ap_phi_reg_pp0_iter0_data_1384_V_read1454_phi_reg_92007.read();
        }
    } else {
        ap_phi_mux_data_1384_V_read1454_phi_phi_fu_92011_p4 = ap_phi_reg_pp0_iter0_data_1384_V_read1454_phi_reg_92007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1384_V_read1454_rewind_phi_fu_48581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1384_V_read1454_rewind_phi_fu_48581_p6 = data_1384_V_read1454_phi_reg_92007.read();
    } else {
        ap_phi_mux_data_1384_V_read1454_rewind_phi_fu_48581_p6 = data_1384_V_read1454_rewind_reg_48577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1385_V_read1455_phi_phi_fu_92024_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1385_V_read1455_phi_phi_fu_92024_p4 = ap_phi_mux_data_1385_V_read1455_rewind_phi_fu_48595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1385_V_read1455_phi_phi_fu_92024_p4 = data_1385_V_read.read();
        } else {
            ap_phi_mux_data_1385_V_read1455_phi_phi_fu_92024_p4 = ap_phi_reg_pp0_iter0_data_1385_V_read1455_phi_reg_92020.read();
        }
    } else {
        ap_phi_mux_data_1385_V_read1455_phi_phi_fu_92024_p4 = ap_phi_reg_pp0_iter0_data_1385_V_read1455_phi_reg_92020.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1385_V_read1455_rewind_phi_fu_48595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1385_V_read1455_rewind_phi_fu_48595_p6 = data_1385_V_read1455_phi_reg_92020.read();
    } else {
        ap_phi_mux_data_1385_V_read1455_rewind_phi_fu_48595_p6 = data_1385_V_read1455_rewind_reg_48591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1386_V_read1456_phi_phi_fu_92037_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1386_V_read1456_phi_phi_fu_92037_p4 = ap_phi_mux_data_1386_V_read1456_rewind_phi_fu_48609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1386_V_read1456_phi_phi_fu_92037_p4 = data_1386_V_read.read();
        } else {
            ap_phi_mux_data_1386_V_read1456_phi_phi_fu_92037_p4 = ap_phi_reg_pp0_iter0_data_1386_V_read1456_phi_reg_92033.read();
        }
    } else {
        ap_phi_mux_data_1386_V_read1456_phi_phi_fu_92037_p4 = ap_phi_reg_pp0_iter0_data_1386_V_read1456_phi_reg_92033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1386_V_read1456_rewind_phi_fu_48609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1386_V_read1456_rewind_phi_fu_48609_p6 = data_1386_V_read1456_phi_reg_92033.read();
    } else {
        ap_phi_mux_data_1386_V_read1456_rewind_phi_fu_48609_p6 = data_1386_V_read1456_rewind_reg_48605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1387_V_read1457_phi_phi_fu_92050_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1387_V_read1457_phi_phi_fu_92050_p4 = ap_phi_mux_data_1387_V_read1457_rewind_phi_fu_48623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1387_V_read1457_phi_phi_fu_92050_p4 = data_1387_V_read.read();
        } else {
            ap_phi_mux_data_1387_V_read1457_phi_phi_fu_92050_p4 = ap_phi_reg_pp0_iter0_data_1387_V_read1457_phi_reg_92046.read();
        }
    } else {
        ap_phi_mux_data_1387_V_read1457_phi_phi_fu_92050_p4 = ap_phi_reg_pp0_iter0_data_1387_V_read1457_phi_reg_92046.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1387_V_read1457_rewind_phi_fu_48623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1387_V_read1457_rewind_phi_fu_48623_p6 = data_1387_V_read1457_phi_reg_92046.read();
    } else {
        ap_phi_mux_data_1387_V_read1457_rewind_phi_fu_48623_p6 = data_1387_V_read1457_rewind_reg_48619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1388_V_read1458_phi_phi_fu_92063_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1388_V_read1458_phi_phi_fu_92063_p4 = ap_phi_mux_data_1388_V_read1458_rewind_phi_fu_48637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1388_V_read1458_phi_phi_fu_92063_p4 = data_1388_V_read.read();
        } else {
            ap_phi_mux_data_1388_V_read1458_phi_phi_fu_92063_p4 = ap_phi_reg_pp0_iter0_data_1388_V_read1458_phi_reg_92059.read();
        }
    } else {
        ap_phi_mux_data_1388_V_read1458_phi_phi_fu_92063_p4 = ap_phi_reg_pp0_iter0_data_1388_V_read1458_phi_reg_92059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1388_V_read1458_rewind_phi_fu_48637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1388_V_read1458_rewind_phi_fu_48637_p6 = data_1388_V_read1458_phi_reg_92059.read();
    } else {
        ap_phi_mux_data_1388_V_read1458_rewind_phi_fu_48637_p6 = data_1388_V_read1458_rewind_reg_48633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1389_V_read1459_phi_phi_fu_92076_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1389_V_read1459_phi_phi_fu_92076_p4 = ap_phi_mux_data_1389_V_read1459_rewind_phi_fu_48651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1389_V_read1459_phi_phi_fu_92076_p4 = data_1389_V_read.read();
        } else {
            ap_phi_mux_data_1389_V_read1459_phi_phi_fu_92076_p4 = ap_phi_reg_pp0_iter0_data_1389_V_read1459_phi_reg_92072.read();
        }
    } else {
        ap_phi_mux_data_1389_V_read1459_phi_phi_fu_92076_p4 = ap_phi_reg_pp0_iter0_data_1389_V_read1459_phi_reg_92072.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1389_V_read1459_rewind_phi_fu_48651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1389_V_read1459_rewind_phi_fu_48651_p6 = data_1389_V_read1459_phi_reg_92072.read();
    } else {
        ap_phi_mux_data_1389_V_read1459_rewind_phi_fu_48651_p6 = data_1389_V_read1459_rewind_reg_48647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_138_V_read208_phi_phi_fu_75813_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_138_V_read208_phi_phi_fu_75813_p4 = ap_phi_mux_data_138_V_read208_rewind_phi_fu_31137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_138_V_read208_phi_phi_fu_75813_p4 = data_138_V_read.read();
        } else {
            ap_phi_mux_data_138_V_read208_phi_phi_fu_75813_p4 = ap_phi_reg_pp0_iter0_data_138_V_read208_phi_reg_75809.read();
        }
    } else {
        ap_phi_mux_data_138_V_read208_phi_phi_fu_75813_p4 = ap_phi_reg_pp0_iter0_data_138_V_read208_phi_reg_75809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_138_V_read208_rewind_phi_fu_31137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_138_V_read208_rewind_phi_fu_31137_p6 = data_138_V_read208_phi_reg_75809.read();
    } else {
        ap_phi_mux_data_138_V_read208_rewind_phi_fu_31137_p6 = data_138_V_read208_rewind_reg_31133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1390_V_read1460_phi_phi_fu_92089_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1390_V_read1460_phi_phi_fu_92089_p4 = ap_phi_mux_data_1390_V_read1460_rewind_phi_fu_48665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1390_V_read1460_phi_phi_fu_92089_p4 = data_1390_V_read.read();
        } else {
            ap_phi_mux_data_1390_V_read1460_phi_phi_fu_92089_p4 = ap_phi_reg_pp0_iter0_data_1390_V_read1460_phi_reg_92085.read();
        }
    } else {
        ap_phi_mux_data_1390_V_read1460_phi_phi_fu_92089_p4 = ap_phi_reg_pp0_iter0_data_1390_V_read1460_phi_reg_92085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1390_V_read1460_rewind_phi_fu_48665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1390_V_read1460_rewind_phi_fu_48665_p6 = data_1390_V_read1460_phi_reg_92085.read();
    } else {
        ap_phi_mux_data_1390_V_read1460_rewind_phi_fu_48665_p6 = data_1390_V_read1460_rewind_reg_48661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1391_V_read1461_phi_phi_fu_92102_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1391_V_read1461_phi_phi_fu_92102_p4 = ap_phi_mux_data_1391_V_read1461_rewind_phi_fu_48679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1391_V_read1461_phi_phi_fu_92102_p4 = data_1391_V_read.read();
        } else {
            ap_phi_mux_data_1391_V_read1461_phi_phi_fu_92102_p4 = ap_phi_reg_pp0_iter0_data_1391_V_read1461_phi_reg_92098.read();
        }
    } else {
        ap_phi_mux_data_1391_V_read1461_phi_phi_fu_92102_p4 = ap_phi_reg_pp0_iter0_data_1391_V_read1461_phi_reg_92098.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1391_V_read1461_rewind_phi_fu_48679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1391_V_read1461_rewind_phi_fu_48679_p6 = data_1391_V_read1461_phi_reg_92098.read();
    } else {
        ap_phi_mux_data_1391_V_read1461_rewind_phi_fu_48679_p6 = data_1391_V_read1461_rewind_reg_48675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1392_V_read1462_phi_phi_fu_92115_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1392_V_read1462_phi_phi_fu_92115_p4 = ap_phi_mux_data_1392_V_read1462_rewind_phi_fu_48693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1392_V_read1462_phi_phi_fu_92115_p4 = data_1392_V_read.read();
        } else {
            ap_phi_mux_data_1392_V_read1462_phi_phi_fu_92115_p4 = ap_phi_reg_pp0_iter0_data_1392_V_read1462_phi_reg_92111.read();
        }
    } else {
        ap_phi_mux_data_1392_V_read1462_phi_phi_fu_92115_p4 = ap_phi_reg_pp0_iter0_data_1392_V_read1462_phi_reg_92111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1392_V_read1462_rewind_phi_fu_48693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1392_V_read1462_rewind_phi_fu_48693_p6 = data_1392_V_read1462_phi_reg_92111.read();
    } else {
        ap_phi_mux_data_1392_V_read1462_rewind_phi_fu_48693_p6 = data_1392_V_read1462_rewind_reg_48689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1393_V_read1463_phi_phi_fu_92128_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1393_V_read1463_phi_phi_fu_92128_p4 = ap_phi_mux_data_1393_V_read1463_rewind_phi_fu_48707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1393_V_read1463_phi_phi_fu_92128_p4 = data_1393_V_read.read();
        } else {
            ap_phi_mux_data_1393_V_read1463_phi_phi_fu_92128_p4 = ap_phi_reg_pp0_iter0_data_1393_V_read1463_phi_reg_92124.read();
        }
    } else {
        ap_phi_mux_data_1393_V_read1463_phi_phi_fu_92128_p4 = ap_phi_reg_pp0_iter0_data_1393_V_read1463_phi_reg_92124.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1393_V_read1463_rewind_phi_fu_48707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1393_V_read1463_rewind_phi_fu_48707_p6 = data_1393_V_read1463_phi_reg_92124.read();
    } else {
        ap_phi_mux_data_1393_V_read1463_rewind_phi_fu_48707_p6 = data_1393_V_read1463_rewind_reg_48703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1394_V_read1464_phi_phi_fu_92141_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1394_V_read1464_phi_phi_fu_92141_p4 = ap_phi_mux_data_1394_V_read1464_rewind_phi_fu_48721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1394_V_read1464_phi_phi_fu_92141_p4 = data_1394_V_read.read();
        } else {
            ap_phi_mux_data_1394_V_read1464_phi_phi_fu_92141_p4 = ap_phi_reg_pp0_iter0_data_1394_V_read1464_phi_reg_92137.read();
        }
    } else {
        ap_phi_mux_data_1394_V_read1464_phi_phi_fu_92141_p4 = ap_phi_reg_pp0_iter0_data_1394_V_read1464_phi_reg_92137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1394_V_read1464_rewind_phi_fu_48721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1394_V_read1464_rewind_phi_fu_48721_p6 = data_1394_V_read1464_phi_reg_92137.read();
    } else {
        ap_phi_mux_data_1394_V_read1464_rewind_phi_fu_48721_p6 = data_1394_V_read1464_rewind_reg_48717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1395_V_read1465_phi_phi_fu_92154_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1395_V_read1465_phi_phi_fu_92154_p4 = ap_phi_mux_data_1395_V_read1465_rewind_phi_fu_48735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1395_V_read1465_phi_phi_fu_92154_p4 = data_1395_V_read.read();
        } else {
            ap_phi_mux_data_1395_V_read1465_phi_phi_fu_92154_p4 = ap_phi_reg_pp0_iter0_data_1395_V_read1465_phi_reg_92150.read();
        }
    } else {
        ap_phi_mux_data_1395_V_read1465_phi_phi_fu_92154_p4 = ap_phi_reg_pp0_iter0_data_1395_V_read1465_phi_reg_92150.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1395_V_read1465_rewind_phi_fu_48735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1395_V_read1465_rewind_phi_fu_48735_p6 = data_1395_V_read1465_phi_reg_92150.read();
    } else {
        ap_phi_mux_data_1395_V_read1465_rewind_phi_fu_48735_p6 = data_1395_V_read1465_rewind_reg_48731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1396_V_read1466_phi_phi_fu_92167_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1396_V_read1466_phi_phi_fu_92167_p4 = ap_phi_mux_data_1396_V_read1466_rewind_phi_fu_48749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1396_V_read1466_phi_phi_fu_92167_p4 = data_1396_V_read.read();
        } else {
            ap_phi_mux_data_1396_V_read1466_phi_phi_fu_92167_p4 = ap_phi_reg_pp0_iter0_data_1396_V_read1466_phi_reg_92163.read();
        }
    } else {
        ap_phi_mux_data_1396_V_read1466_phi_phi_fu_92167_p4 = ap_phi_reg_pp0_iter0_data_1396_V_read1466_phi_reg_92163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1396_V_read1466_rewind_phi_fu_48749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1396_V_read1466_rewind_phi_fu_48749_p6 = data_1396_V_read1466_phi_reg_92163.read();
    } else {
        ap_phi_mux_data_1396_V_read1466_rewind_phi_fu_48749_p6 = data_1396_V_read1466_rewind_reg_48745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1397_V_read1467_phi_phi_fu_92180_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1397_V_read1467_phi_phi_fu_92180_p4 = ap_phi_mux_data_1397_V_read1467_rewind_phi_fu_48763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1397_V_read1467_phi_phi_fu_92180_p4 = data_1397_V_read.read();
        } else {
            ap_phi_mux_data_1397_V_read1467_phi_phi_fu_92180_p4 = ap_phi_reg_pp0_iter0_data_1397_V_read1467_phi_reg_92176.read();
        }
    } else {
        ap_phi_mux_data_1397_V_read1467_phi_phi_fu_92180_p4 = ap_phi_reg_pp0_iter0_data_1397_V_read1467_phi_reg_92176.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1397_V_read1467_rewind_phi_fu_48763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1397_V_read1467_rewind_phi_fu_48763_p6 = data_1397_V_read1467_phi_reg_92176.read();
    } else {
        ap_phi_mux_data_1397_V_read1467_rewind_phi_fu_48763_p6 = data_1397_V_read1467_rewind_reg_48759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1398_V_read1468_phi_phi_fu_92193_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1398_V_read1468_phi_phi_fu_92193_p4 = ap_phi_mux_data_1398_V_read1468_rewind_phi_fu_48777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1398_V_read1468_phi_phi_fu_92193_p4 = data_1398_V_read.read();
        } else {
            ap_phi_mux_data_1398_V_read1468_phi_phi_fu_92193_p4 = ap_phi_reg_pp0_iter0_data_1398_V_read1468_phi_reg_92189.read();
        }
    } else {
        ap_phi_mux_data_1398_V_read1468_phi_phi_fu_92193_p4 = ap_phi_reg_pp0_iter0_data_1398_V_read1468_phi_reg_92189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1398_V_read1468_rewind_phi_fu_48777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1398_V_read1468_rewind_phi_fu_48777_p6 = data_1398_V_read1468_phi_reg_92189.read();
    } else {
        ap_phi_mux_data_1398_V_read1468_rewind_phi_fu_48777_p6 = data_1398_V_read1468_rewind_reg_48773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1399_V_read1469_phi_phi_fu_92206_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1399_V_read1469_phi_phi_fu_92206_p4 = ap_phi_mux_data_1399_V_read1469_rewind_phi_fu_48791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1399_V_read1469_phi_phi_fu_92206_p4 = data_1399_V_read.read();
        } else {
            ap_phi_mux_data_1399_V_read1469_phi_phi_fu_92206_p4 = ap_phi_reg_pp0_iter0_data_1399_V_read1469_phi_reg_92202.read();
        }
    } else {
        ap_phi_mux_data_1399_V_read1469_phi_phi_fu_92206_p4 = ap_phi_reg_pp0_iter0_data_1399_V_read1469_phi_reg_92202.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1399_V_read1469_rewind_phi_fu_48791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1399_V_read1469_rewind_phi_fu_48791_p6 = data_1399_V_read1469_phi_reg_92202.read();
    } else {
        ap_phi_mux_data_1399_V_read1469_rewind_phi_fu_48791_p6 = data_1399_V_read1469_rewind_reg_48787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_139_V_read209_phi_phi_fu_75826_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_139_V_read209_phi_phi_fu_75826_p4 = ap_phi_mux_data_139_V_read209_rewind_phi_fu_31151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_139_V_read209_phi_phi_fu_75826_p4 = data_139_V_read.read();
        } else {
            ap_phi_mux_data_139_V_read209_phi_phi_fu_75826_p4 = ap_phi_reg_pp0_iter0_data_139_V_read209_phi_reg_75822.read();
        }
    } else {
        ap_phi_mux_data_139_V_read209_phi_phi_fu_75826_p4 = ap_phi_reg_pp0_iter0_data_139_V_read209_phi_reg_75822.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_139_V_read209_rewind_phi_fu_31151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_139_V_read209_rewind_phi_fu_31151_p6 = data_139_V_read209_phi_reg_75822.read();
    } else {
        ap_phi_mux_data_139_V_read209_rewind_phi_fu_31151_p6 = data_139_V_read209_rewind_reg_31147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_13_V_read83_phi_phi_fu_74188_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_13_V_read83_phi_phi_fu_74188_p4 = ap_phi_mux_data_13_V_read83_rewind_phi_fu_29387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_13_V_read83_phi_phi_fu_74188_p4 = data_13_V_read.read();
        } else {
            ap_phi_mux_data_13_V_read83_phi_phi_fu_74188_p4 = ap_phi_reg_pp0_iter0_data_13_V_read83_phi_reg_74184.read();
        }
    } else {
        ap_phi_mux_data_13_V_read83_phi_phi_fu_74188_p4 = ap_phi_reg_pp0_iter0_data_13_V_read83_phi_reg_74184.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_13_V_read83_rewind_phi_fu_29387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_13_V_read83_rewind_phi_fu_29387_p6 = data_13_V_read83_phi_reg_74184.read();
    } else {
        ap_phi_mux_data_13_V_read83_rewind_phi_fu_29387_p6 = data_13_V_read83_rewind_reg_29383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1400_V_read1470_phi_phi_fu_92219_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1400_V_read1470_phi_phi_fu_92219_p4 = ap_phi_mux_data_1400_V_read1470_rewind_phi_fu_48805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1400_V_read1470_phi_phi_fu_92219_p4 = data_1400_V_read.read();
        } else {
            ap_phi_mux_data_1400_V_read1470_phi_phi_fu_92219_p4 = ap_phi_reg_pp0_iter0_data_1400_V_read1470_phi_reg_92215.read();
        }
    } else {
        ap_phi_mux_data_1400_V_read1470_phi_phi_fu_92219_p4 = ap_phi_reg_pp0_iter0_data_1400_V_read1470_phi_reg_92215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1400_V_read1470_rewind_phi_fu_48805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1400_V_read1470_rewind_phi_fu_48805_p6 = data_1400_V_read1470_phi_reg_92215.read();
    } else {
        ap_phi_mux_data_1400_V_read1470_rewind_phi_fu_48805_p6 = data_1400_V_read1470_rewind_reg_48801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1401_V_read1471_phi_phi_fu_92232_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1401_V_read1471_phi_phi_fu_92232_p4 = ap_phi_mux_data_1401_V_read1471_rewind_phi_fu_48819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1401_V_read1471_phi_phi_fu_92232_p4 = data_1401_V_read.read();
        } else {
            ap_phi_mux_data_1401_V_read1471_phi_phi_fu_92232_p4 = ap_phi_reg_pp0_iter0_data_1401_V_read1471_phi_reg_92228.read();
        }
    } else {
        ap_phi_mux_data_1401_V_read1471_phi_phi_fu_92232_p4 = ap_phi_reg_pp0_iter0_data_1401_V_read1471_phi_reg_92228.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1401_V_read1471_rewind_phi_fu_48819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1401_V_read1471_rewind_phi_fu_48819_p6 = data_1401_V_read1471_phi_reg_92228.read();
    } else {
        ap_phi_mux_data_1401_V_read1471_rewind_phi_fu_48819_p6 = data_1401_V_read1471_rewind_reg_48815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1402_V_read1472_phi_phi_fu_92245_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1402_V_read1472_phi_phi_fu_92245_p4 = ap_phi_mux_data_1402_V_read1472_rewind_phi_fu_48833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1402_V_read1472_phi_phi_fu_92245_p4 = data_1402_V_read.read();
        } else {
            ap_phi_mux_data_1402_V_read1472_phi_phi_fu_92245_p4 = ap_phi_reg_pp0_iter0_data_1402_V_read1472_phi_reg_92241.read();
        }
    } else {
        ap_phi_mux_data_1402_V_read1472_phi_phi_fu_92245_p4 = ap_phi_reg_pp0_iter0_data_1402_V_read1472_phi_reg_92241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1402_V_read1472_rewind_phi_fu_48833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1402_V_read1472_rewind_phi_fu_48833_p6 = data_1402_V_read1472_phi_reg_92241.read();
    } else {
        ap_phi_mux_data_1402_V_read1472_rewind_phi_fu_48833_p6 = data_1402_V_read1472_rewind_reg_48829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1403_V_read1473_phi_phi_fu_92258_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1403_V_read1473_phi_phi_fu_92258_p4 = ap_phi_mux_data_1403_V_read1473_rewind_phi_fu_48847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1403_V_read1473_phi_phi_fu_92258_p4 = data_1403_V_read.read();
        } else {
            ap_phi_mux_data_1403_V_read1473_phi_phi_fu_92258_p4 = ap_phi_reg_pp0_iter0_data_1403_V_read1473_phi_reg_92254.read();
        }
    } else {
        ap_phi_mux_data_1403_V_read1473_phi_phi_fu_92258_p4 = ap_phi_reg_pp0_iter0_data_1403_V_read1473_phi_reg_92254.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1403_V_read1473_rewind_phi_fu_48847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1403_V_read1473_rewind_phi_fu_48847_p6 = data_1403_V_read1473_phi_reg_92254.read();
    } else {
        ap_phi_mux_data_1403_V_read1473_rewind_phi_fu_48847_p6 = data_1403_V_read1473_rewind_reg_48843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1404_V_read1474_phi_phi_fu_92271_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1404_V_read1474_phi_phi_fu_92271_p4 = ap_phi_mux_data_1404_V_read1474_rewind_phi_fu_48861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1404_V_read1474_phi_phi_fu_92271_p4 = data_1404_V_read.read();
        } else {
            ap_phi_mux_data_1404_V_read1474_phi_phi_fu_92271_p4 = ap_phi_reg_pp0_iter0_data_1404_V_read1474_phi_reg_92267.read();
        }
    } else {
        ap_phi_mux_data_1404_V_read1474_phi_phi_fu_92271_p4 = ap_phi_reg_pp0_iter0_data_1404_V_read1474_phi_reg_92267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1404_V_read1474_rewind_phi_fu_48861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1404_V_read1474_rewind_phi_fu_48861_p6 = data_1404_V_read1474_phi_reg_92267.read();
    } else {
        ap_phi_mux_data_1404_V_read1474_rewind_phi_fu_48861_p6 = data_1404_V_read1474_rewind_reg_48857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1405_V_read1475_phi_phi_fu_92284_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1405_V_read1475_phi_phi_fu_92284_p4 = ap_phi_mux_data_1405_V_read1475_rewind_phi_fu_48875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1405_V_read1475_phi_phi_fu_92284_p4 = data_1405_V_read.read();
        } else {
            ap_phi_mux_data_1405_V_read1475_phi_phi_fu_92284_p4 = ap_phi_reg_pp0_iter0_data_1405_V_read1475_phi_reg_92280.read();
        }
    } else {
        ap_phi_mux_data_1405_V_read1475_phi_phi_fu_92284_p4 = ap_phi_reg_pp0_iter0_data_1405_V_read1475_phi_reg_92280.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1405_V_read1475_rewind_phi_fu_48875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1405_V_read1475_rewind_phi_fu_48875_p6 = data_1405_V_read1475_phi_reg_92280.read();
    } else {
        ap_phi_mux_data_1405_V_read1475_rewind_phi_fu_48875_p6 = data_1405_V_read1475_rewind_reg_48871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1406_V_read1476_phi_phi_fu_92297_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1406_V_read1476_phi_phi_fu_92297_p4 = ap_phi_mux_data_1406_V_read1476_rewind_phi_fu_48889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1406_V_read1476_phi_phi_fu_92297_p4 = data_1406_V_read.read();
        } else {
            ap_phi_mux_data_1406_V_read1476_phi_phi_fu_92297_p4 = ap_phi_reg_pp0_iter0_data_1406_V_read1476_phi_reg_92293.read();
        }
    } else {
        ap_phi_mux_data_1406_V_read1476_phi_phi_fu_92297_p4 = ap_phi_reg_pp0_iter0_data_1406_V_read1476_phi_reg_92293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1406_V_read1476_rewind_phi_fu_48889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1406_V_read1476_rewind_phi_fu_48889_p6 = data_1406_V_read1476_phi_reg_92293.read();
    } else {
        ap_phi_mux_data_1406_V_read1476_rewind_phi_fu_48889_p6 = data_1406_V_read1476_rewind_reg_48885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1407_V_read1477_phi_phi_fu_92310_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1407_V_read1477_phi_phi_fu_92310_p4 = ap_phi_mux_data_1407_V_read1477_rewind_phi_fu_48903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1407_V_read1477_phi_phi_fu_92310_p4 = data_1407_V_read.read();
        } else {
            ap_phi_mux_data_1407_V_read1477_phi_phi_fu_92310_p4 = ap_phi_reg_pp0_iter0_data_1407_V_read1477_phi_reg_92306.read();
        }
    } else {
        ap_phi_mux_data_1407_V_read1477_phi_phi_fu_92310_p4 = ap_phi_reg_pp0_iter0_data_1407_V_read1477_phi_reg_92306.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1407_V_read1477_rewind_phi_fu_48903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1407_V_read1477_rewind_phi_fu_48903_p6 = data_1407_V_read1477_phi_reg_92306.read();
    } else {
        ap_phi_mux_data_1407_V_read1477_rewind_phi_fu_48903_p6 = data_1407_V_read1477_rewind_reg_48899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1408_V_read1478_phi_phi_fu_92323_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1408_V_read1478_phi_phi_fu_92323_p4 = ap_phi_mux_data_1408_V_read1478_rewind_phi_fu_48917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1408_V_read1478_phi_phi_fu_92323_p4 = data_1408_V_read.read();
        } else {
            ap_phi_mux_data_1408_V_read1478_phi_phi_fu_92323_p4 = ap_phi_reg_pp0_iter0_data_1408_V_read1478_phi_reg_92319.read();
        }
    } else {
        ap_phi_mux_data_1408_V_read1478_phi_phi_fu_92323_p4 = ap_phi_reg_pp0_iter0_data_1408_V_read1478_phi_reg_92319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1408_V_read1478_rewind_phi_fu_48917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1408_V_read1478_rewind_phi_fu_48917_p6 = data_1408_V_read1478_phi_reg_92319.read();
    } else {
        ap_phi_mux_data_1408_V_read1478_rewind_phi_fu_48917_p6 = data_1408_V_read1478_rewind_reg_48913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1409_V_read1479_phi_phi_fu_92336_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1409_V_read1479_phi_phi_fu_92336_p4 = ap_phi_mux_data_1409_V_read1479_rewind_phi_fu_48931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1409_V_read1479_phi_phi_fu_92336_p4 = data_1409_V_read.read();
        } else {
            ap_phi_mux_data_1409_V_read1479_phi_phi_fu_92336_p4 = ap_phi_reg_pp0_iter0_data_1409_V_read1479_phi_reg_92332.read();
        }
    } else {
        ap_phi_mux_data_1409_V_read1479_phi_phi_fu_92336_p4 = ap_phi_reg_pp0_iter0_data_1409_V_read1479_phi_reg_92332.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1409_V_read1479_rewind_phi_fu_48931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1409_V_read1479_rewind_phi_fu_48931_p6 = data_1409_V_read1479_phi_reg_92332.read();
    } else {
        ap_phi_mux_data_1409_V_read1479_rewind_phi_fu_48931_p6 = data_1409_V_read1479_rewind_reg_48927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_140_V_read210_phi_phi_fu_75839_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_140_V_read210_phi_phi_fu_75839_p4 = ap_phi_mux_data_140_V_read210_rewind_phi_fu_31165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_140_V_read210_phi_phi_fu_75839_p4 = data_140_V_read.read();
        } else {
            ap_phi_mux_data_140_V_read210_phi_phi_fu_75839_p4 = ap_phi_reg_pp0_iter0_data_140_V_read210_phi_reg_75835.read();
        }
    } else {
        ap_phi_mux_data_140_V_read210_phi_phi_fu_75839_p4 = ap_phi_reg_pp0_iter0_data_140_V_read210_phi_reg_75835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_140_V_read210_rewind_phi_fu_31165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_140_V_read210_rewind_phi_fu_31165_p6 = data_140_V_read210_phi_reg_75835.read();
    } else {
        ap_phi_mux_data_140_V_read210_rewind_phi_fu_31165_p6 = data_140_V_read210_rewind_reg_31161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1410_V_read1480_phi_phi_fu_92349_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1410_V_read1480_phi_phi_fu_92349_p4 = ap_phi_mux_data_1410_V_read1480_rewind_phi_fu_48945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1410_V_read1480_phi_phi_fu_92349_p4 = data_1410_V_read.read();
        } else {
            ap_phi_mux_data_1410_V_read1480_phi_phi_fu_92349_p4 = ap_phi_reg_pp0_iter0_data_1410_V_read1480_phi_reg_92345.read();
        }
    } else {
        ap_phi_mux_data_1410_V_read1480_phi_phi_fu_92349_p4 = ap_phi_reg_pp0_iter0_data_1410_V_read1480_phi_reg_92345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1410_V_read1480_rewind_phi_fu_48945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1410_V_read1480_rewind_phi_fu_48945_p6 = data_1410_V_read1480_phi_reg_92345.read();
    } else {
        ap_phi_mux_data_1410_V_read1480_rewind_phi_fu_48945_p6 = data_1410_V_read1480_rewind_reg_48941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1411_V_read1481_phi_phi_fu_92362_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1411_V_read1481_phi_phi_fu_92362_p4 = ap_phi_mux_data_1411_V_read1481_rewind_phi_fu_48959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1411_V_read1481_phi_phi_fu_92362_p4 = data_1411_V_read.read();
        } else {
            ap_phi_mux_data_1411_V_read1481_phi_phi_fu_92362_p4 = ap_phi_reg_pp0_iter0_data_1411_V_read1481_phi_reg_92358.read();
        }
    } else {
        ap_phi_mux_data_1411_V_read1481_phi_phi_fu_92362_p4 = ap_phi_reg_pp0_iter0_data_1411_V_read1481_phi_reg_92358.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1411_V_read1481_rewind_phi_fu_48959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1411_V_read1481_rewind_phi_fu_48959_p6 = data_1411_V_read1481_phi_reg_92358.read();
    } else {
        ap_phi_mux_data_1411_V_read1481_rewind_phi_fu_48959_p6 = data_1411_V_read1481_rewind_reg_48955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1412_V_read1482_phi_phi_fu_92375_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1412_V_read1482_phi_phi_fu_92375_p4 = ap_phi_mux_data_1412_V_read1482_rewind_phi_fu_48973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1412_V_read1482_phi_phi_fu_92375_p4 = data_1412_V_read.read();
        } else {
            ap_phi_mux_data_1412_V_read1482_phi_phi_fu_92375_p4 = ap_phi_reg_pp0_iter0_data_1412_V_read1482_phi_reg_92371.read();
        }
    } else {
        ap_phi_mux_data_1412_V_read1482_phi_phi_fu_92375_p4 = ap_phi_reg_pp0_iter0_data_1412_V_read1482_phi_reg_92371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1412_V_read1482_rewind_phi_fu_48973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1412_V_read1482_rewind_phi_fu_48973_p6 = data_1412_V_read1482_phi_reg_92371.read();
    } else {
        ap_phi_mux_data_1412_V_read1482_rewind_phi_fu_48973_p6 = data_1412_V_read1482_rewind_reg_48969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1413_V_read1483_phi_phi_fu_92388_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1413_V_read1483_phi_phi_fu_92388_p4 = ap_phi_mux_data_1413_V_read1483_rewind_phi_fu_48987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1413_V_read1483_phi_phi_fu_92388_p4 = data_1413_V_read.read();
        } else {
            ap_phi_mux_data_1413_V_read1483_phi_phi_fu_92388_p4 = ap_phi_reg_pp0_iter0_data_1413_V_read1483_phi_reg_92384.read();
        }
    } else {
        ap_phi_mux_data_1413_V_read1483_phi_phi_fu_92388_p4 = ap_phi_reg_pp0_iter0_data_1413_V_read1483_phi_reg_92384.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1413_V_read1483_rewind_phi_fu_48987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1413_V_read1483_rewind_phi_fu_48987_p6 = data_1413_V_read1483_phi_reg_92384.read();
    } else {
        ap_phi_mux_data_1413_V_read1483_rewind_phi_fu_48987_p6 = data_1413_V_read1483_rewind_reg_48983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1414_V_read1484_phi_phi_fu_92401_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1414_V_read1484_phi_phi_fu_92401_p4 = ap_phi_mux_data_1414_V_read1484_rewind_phi_fu_49001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1414_V_read1484_phi_phi_fu_92401_p4 = data_1414_V_read.read();
        } else {
            ap_phi_mux_data_1414_V_read1484_phi_phi_fu_92401_p4 = ap_phi_reg_pp0_iter0_data_1414_V_read1484_phi_reg_92397.read();
        }
    } else {
        ap_phi_mux_data_1414_V_read1484_phi_phi_fu_92401_p4 = ap_phi_reg_pp0_iter0_data_1414_V_read1484_phi_reg_92397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1414_V_read1484_rewind_phi_fu_49001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1414_V_read1484_rewind_phi_fu_49001_p6 = data_1414_V_read1484_phi_reg_92397.read();
    } else {
        ap_phi_mux_data_1414_V_read1484_rewind_phi_fu_49001_p6 = data_1414_V_read1484_rewind_reg_48997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1415_V_read1485_phi_phi_fu_92414_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1415_V_read1485_phi_phi_fu_92414_p4 = ap_phi_mux_data_1415_V_read1485_rewind_phi_fu_49015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1415_V_read1485_phi_phi_fu_92414_p4 = data_1415_V_read.read();
        } else {
            ap_phi_mux_data_1415_V_read1485_phi_phi_fu_92414_p4 = ap_phi_reg_pp0_iter0_data_1415_V_read1485_phi_reg_92410.read();
        }
    } else {
        ap_phi_mux_data_1415_V_read1485_phi_phi_fu_92414_p4 = ap_phi_reg_pp0_iter0_data_1415_V_read1485_phi_reg_92410.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1415_V_read1485_rewind_phi_fu_49015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1415_V_read1485_rewind_phi_fu_49015_p6 = data_1415_V_read1485_phi_reg_92410.read();
    } else {
        ap_phi_mux_data_1415_V_read1485_rewind_phi_fu_49015_p6 = data_1415_V_read1485_rewind_reg_49011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1416_V_read1486_phi_phi_fu_92427_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1416_V_read1486_phi_phi_fu_92427_p4 = ap_phi_mux_data_1416_V_read1486_rewind_phi_fu_49029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1416_V_read1486_phi_phi_fu_92427_p4 = data_1416_V_read.read();
        } else {
            ap_phi_mux_data_1416_V_read1486_phi_phi_fu_92427_p4 = ap_phi_reg_pp0_iter0_data_1416_V_read1486_phi_reg_92423.read();
        }
    } else {
        ap_phi_mux_data_1416_V_read1486_phi_phi_fu_92427_p4 = ap_phi_reg_pp0_iter0_data_1416_V_read1486_phi_reg_92423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1416_V_read1486_rewind_phi_fu_49029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1416_V_read1486_rewind_phi_fu_49029_p6 = data_1416_V_read1486_phi_reg_92423.read();
    } else {
        ap_phi_mux_data_1416_V_read1486_rewind_phi_fu_49029_p6 = data_1416_V_read1486_rewind_reg_49025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1417_V_read1487_phi_phi_fu_92440_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1417_V_read1487_phi_phi_fu_92440_p4 = ap_phi_mux_data_1417_V_read1487_rewind_phi_fu_49043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1417_V_read1487_phi_phi_fu_92440_p4 = data_1417_V_read.read();
        } else {
            ap_phi_mux_data_1417_V_read1487_phi_phi_fu_92440_p4 = ap_phi_reg_pp0_iter0_data_1417_V_read1487_phi_reg_92436.read();
        }
    } else {
        ap_phi_mux_data_1417_V_read1487_phi_phi_fu_92440_p4 = ap_phi_reg_pp0_iter0_data_1417_V_read1487_phi_reg_92436.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1417_V_read1487_rewind_phi_fu_49043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1417_V_read1487_rewind_phi_fu_49043_p6 = data_1417_V_read1487_phi_reg_92436.read();
    } else {
        ap_phi_mux_data_1417_V_read1487_rewind_phi_fu_49043_p6 = data_1417_V_read1487_rewind_reg_49039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1418_V_read1488_phi_phi_fu_92453_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1418_V_read1488_phi_phi_fu_92453_p4 = ap_phi_mux_data_1418_V_read1488_rewind_phi_fu_49057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1418_V_read1488_phi_phi_fu_92453_p4 = data_1418_V_read.read();
        } else {
            ap_phi_mux_data_1418_V_read1488_phi_phi_fu_92453_p4 = ap_phi_reg_pp0_iter0_data_1418_V_read1488_phi_reg_92449.read();
        }
    } else {
        ap_phi_mux_data_1418_V_read1488_phi_phi_fu_92453_p4 = ap_phi_reg_pp0_iter0_data_1418_V_read1488_phi_reg_92449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1418_V_read1488_rewind_phi_fu_49057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1418_V_read1488_rewind_phi_fu_49057_p6 = data_1418_V_read1488_phi_reg_92449.read();
    } else {
        ap_phi_mux_data_1418_V_read1488_rewind_phi_fu_49057_p6 = data_1418_V_read1488_rewind_reg_49053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1419_V_read1489_phi_phi_fu_92466_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1419_V_read1489_phi_phi_fu_92466_p4 = ap_phi_mux_data_1419_V_read1489_rewind_phi_fu_49071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1419_V_read1489_phi_phi_fu_92466_p4 = data_1419_V_read.read();
        } else {
            ap_phi_mux_data_1419_V_read1489_phi_phi_fu_92466_p4 = ap_phi_reg_pp0_iter0_data_1419_V_read1489_phi_reg_92462.read();
        }
    } else {
        ap_phi_mux_data_1419_V_read1489_phi_phi_fu_92466_p4 = ap_phi_reg_pp0_iter0_data_1419_V_read1489_phi_reg_92462.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1419_V_read1489_rewind_phi_fu_49071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1419_V_read1489_rewind_phi_fu_49071_p6 = data_1419_V_read1489_phi_reg_92462.read();
    } else {
        ap_phi_mux_data_1419_V_read1489_rewind_phi_fu_49071_p6 = data_1419_V_read1489_rewind_reg_49067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_141_V_read211_phi_phi_fu_75852_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_141_V_read211_phi_phi_fu_75852_p4 = ap_phi_mux_data_141_V_read211_rewind_phi_fu_31179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_141_V_read211_phi_phi_fu_75852_p4 = data_141_V_read.read();
        } else {
            ap_phi_mux_data_141_V_read211_phi_phi_fu_75852_p4 = ap_phi_reg_pp0_iter0_data_141_V_read211_phi_reg_75848.read();
        }
    } else {
        ap_phi_mux_data_141_V_read211_phi_phi_fu_75852_p4 = ap_phi_reg_pp0_iter0_data_141_V_read211_phi_reg_75848.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_141_V_read211_rewind_phi_fu_31179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_141_V_read211_rewind_phi_fu_31179_p6 = data_141_V_read211_phi_reg_75848.read();
    } else {
        ap_phi_mux_data_141_V_read211_rewind_phi_fu_31179_p6 = data_141_V_read211_rewind_reg_31175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1420_V_read1490_phi_phi_fu_92479_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1420_V_read1490_phi_phi_fu_92479_p4 = ap_phi_mux_data_1420_V_read1490_rewind_phi_fu_49085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1420_V_read1490_phi_phi_fu_92479_p4 = data_1420_V_read.read();
        } else {
            ap_phi_mux_data_1420_V_read1490_phi_phi_fu_92479_p4 = ap_phi_reg_pp0_iter0_data_1420_V_read1490_phi_reg_92475.read();
        }
    } else {
        ap_phi_mux_data_1420_V_read1490_phi_phi_fu_92479_p4 = ap_phi_reg_pp0_iter0_data_1420_V_read1490_phi_reg_92475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1420_V_read1490_rewind_phi_fu_49085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1420_V_read1490_rewind_phi_fu_49085_p6 = data_1420_V_read1490_phi_reg_92475.read();
    } else {
        ap_phi_mux_data_1420_V_read1490_rewind_phi_fu_49085_p6 = data_1420_V_read1490_rewind_reg_49081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1421_V_read1491_phi_phi_fu_92492_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1421_V_read1491_phi_phi_fu_92492_p4 = ap_phi_mux_data_1421_V_read1491_rewind_phi_fu_49099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1421_V_read1491_phi_phi_fu_92492_p4 = data_1421_V_read.read();
        } else {
            ap_phi_mux_data_1421_V_read1491_phi_phi_fu_92492_p4 = ap_phi_reg_pp0_iter0_data_1421_V_read1491_phi_reg_92488.read();
        }
    } else {
        ap_phi_mux_data_1421_V_read1491_phi_phi_fu_92492_p4 = ap_phi_reg_pp0_iter0_data_1421_V_read1491_phi_reg_92488.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1421_V_read1491_rewind_phi_fu_49099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1421_V_read1491_rewind_phi_fu_49099_p6 = data_1421_V_read1491_phi_reg_92488.read();
    } else {
        ap_phi_mux_data_1421_V_read1491_rewind_phi_fu_49099_p6 = data_1421_V_read1491_rewind_reg_49095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1422_V_read1492_phi_phi_fu_92505_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1422_V_read1492_phi_phi_fu_92505_p4 = ap_phi_mux_data_1422_V_read1492_rewind_phi_fu_49113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1422_V_read1492_phi_phi_fu_92505_p4 = data_1422_V_read.read();
        } else {
            ap_phi_mux_data_1422_V_read1492_phi_phi_fu_92505_p4 = ap_phi_reg_pp0_iter0_data_1422_V_read1492_phi_reg_92501.read();
        }
    } else {
        ap_phi_mux_data_1422_V_read1492_phi_phi_fu_92505_p4 = ap_phi_reg_pp0_iter0_data_1422_V_read1492_phi_reg_92501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1422_V_read1492_rewind_phi_fu_49113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1422_V_read1492_rewind_phi_fu_49113_p6 = data_1422_V_read1492_phi_reg_92501.read();
    } else {
        ap_phi_mux_data_1422_V_read1492_rewind_phi_fu_49113_p6 = data_1422_V_read1492_rewind_reg_49109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1423_V_read1493_phi_phi_fu_92518_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1423_V_read1493_phi_phi_fu_92518_p4 = ap_phi_mux_data_1423_V_read1493_rewind_phi_fu_49127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1423_V_read1493_phi_phi_fu_92518_p4 = data_1423_V_read.read();
        } else {
            ap_phi_mux_data_1423_V_read1493_phi_phi_fu_92518_p4 = ap_phi_reg_pp0_iter0_data_1423_V_read1493_phi_reg_92514.read();
        }
    } else {
        ap_phi_mux_data_1423_V_read1493_phi_phi_fu_92518_p4 = ap_phi_reg_pp0_iter0_data_1423_V_read1493_phi_reg_92514.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1423_V_read1493_rewind_phi_fu_49127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1423_V_read1493_rewind_phi_fu_49127_p6 = data_1423_V_read1493_phi_reg_92514.read();
    } else {
        ap_phi_mux_data_1423_V_read1493_rewind_phi_fu_49127_p6 = data_1423_V_read1493_rewind_reg_49123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1424_V_read1494_phi_phi_fu_92531_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1424_V_read1494_phi_phi_fu_92531_p4 = ap_phi_mux_data_1424_V_read1494_rewind_phi_fu_49141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1424_V_read1494_phi_phi_fu_92531_p4 = data_1424_V_read.read();
        } else {
            ap_phi_mux_data_1424_V_read1494_phi_phi_fu_92531_p4 = ap_phi_reg_pp0_iter0_data_1424_V_read1494_phi_reg_92527.read();
        }
    } else {
        ap_phi_mux_data_1424_V_read1494_phi_phi_fu_92531_p4 = ap_phi_reg_pp0_iter0_data_1424_V_read1494_phi_reg_92527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1424_V_read1494_rewind_phi_fu_49141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1424_V_read1494_rewind_phi_fu_49141_p6 = data_1424_V_read1494_phi_reg_92527.read();
    } else {
        ap_phi_mux_data_1424_V_read1494_rewind_phi_fu_49141_p6 = data_1424_V_read1494_rewind_reg_49137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1425_V_read1495_phi_phi_fu_92544_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1425_V_read1495_phi_phi_fu_92544_p4 = ap_phi_mux_data_1425_V_read1495_rewind_phi_fu_49155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1425_V_read1495_phi_phi_fu_92544_p4 = data_1425_V_read.read();
        } else {
            ap_phi_mux_data_1425_V_read1495_phi_phi_fu_92544_p4 = ap_phi_reg_pp0_iter0_data_1425_V_read1495_phi_reg_92540.read();
        }
    } else {
        ap_phi_mux_data_1425_V_read1495_phi_phi_fu_92544_p4 = ap_phi_reg_pp0_iter0_data_1425_V_read1495_phi_reg_92540.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1425_V_read1495_rewind_phi_fu_49155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1425_V_read1495_rewind_phi_fu_49155_p6 = data_1425_V_read1495_phi_reg_92540.read();
    } else {
        ap_phi_mux_data_1425_V_read1495_rewind_phi_fu_49155_p6 = data_1425_V_read1495_rewind_reg_49151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1426_V_read1496_phi_phi_fu_92557_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1426_V_read1496_phi_phi_fu_92557_p4 = ap_phi_mux_data_1426_V_read1496_rewind_phi_fu_49169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1426_V_read1496_phi_phi_fu_92557_p4 = data_1426_V_read.read();
        } else {
            ap_phi_mux_data_1426_V_read1496_phi_phi_fu_92557_p4 = ap_phi_reg_pp0_iter0_data_1426_V_read1496_phi_reg_92553.read();
        }
    } else {
        ap_phi_mux_data_1426_V_read1496_phi_phi_fu_92557_p4 = ap_phi_reg_pp0_iter0_data_1426_V_read1496_phi_reg_92553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1426_V_read1496_rewind_phi_fu_49169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1426_V_read1496_rewind_phi_fu_49169_p6 = data_1426_V_read1496_phi_reg_92553.read();
    } else {
        ap_phi_mux_data_1426_V_read1496_rewind_phi_fu_49169_p6 = data_1426_V_read1496_rewind_reg_49165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1427_V_read1497_phi_phi_fu_92570_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1427_V_read1497_phi_phi_fu_92570_p4 = ap_phi_mux_data_1427_V_read1497_rewind_phi_fu_49183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1427_V_read1497_phi_phi_fu_92570_p4 = data_1427_V_read.read();
        } else {
            ap_phi_mux_data_1427_V_read1497_phi_phi_fu_92570_p4 = ap_phi_reg_pp0_iter0_data_1427_V_read1497_phi_reg_92566.read();
        }
    } else {
        ap_phi_mux_data_1427_V_read1497_phi_phi_fu_92570_p4 = ap_phi_reg_pp0_iter0_data_1427_V_read1497_phi_reg_92566.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1427_V_read1497_rewind_phi_fu_49183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1427_V_read1497_rewind_phi_fu_49183_p6 = data_1427_V_read1497_phi_reg_92566.read();
    } else {
        ap_phi_mux_data_1427_V_read1497_rewind_phi_fu_49183_p6 = data_1427_V_read1497_rewind_reg_49179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1428_V_read1498_phi_phi_fu_92583_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1428_V_read1498_phi_phi_fu_92583_p4 = ap_phi_mux_data_1428_V_read1498_rewind_phi_fu_49197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1428_V_read1498_phi_phi_fu_92583_p4 = data_1428_V_read.read();
        } else {
            ap_phi_mux_data_1428_V_read1498_phi_phi_fu_92583_p4 = ap_phi_reg_pp0_iter0_data_1428_V_read1498_phi_reg_92579.read();
        }
    } else {
        ap_phi_mux_data_1428_V_read1498_phi_phi_fu_92583_p4 = ap_phi_reg_pp0_iter0_data_1428_V_read1498_phi_reg_92579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1428_V_read1498_rewind_phi_fu_49197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1428_V_read1498_rewind_phi_fu_49197_p6 = data_1428_V_read1498_phi_reg_92579.read();
    } else {
        ap_phi_mux_data_1428_V_read1498_rewind_phi_fu_49197_p6 = data_1428_V_read1498_rewind_reg_49193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1429_V_read1499_phi_phi_fu_92596_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1429_V_read1499_phi_phi_fu_92596_p4 = ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_49211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1429_V_read1499_phi_phi_fu_92596_p4 = data_1429_V_read.read();
        } else {
            ap_phi_mux_data_1429_V_read1499_phi_phi_fu_92596_p4 = ap_phi_reg_pp0_iter0_data_1429_V_read1499_phi_reg_92592.read();
        }
    } else {
        ap_phi_mux_data_1429_V_read1499_phi_phi_fu_92596_p4 = ap_phi_reg_pp0_iter0_data_1429_V_read1499_phi_reg_92592.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_49211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_49211_p6 = data_1429_V_read1499_phi_reg_92592.read();
    } else {
        ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_49211_p6 = data_1429_V_read1499_rewind_reg_49207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_142_V_read212_phi_phi_fu_75865_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_142_V_read212_phi_phi_fu_75865_p4 = ap_phi_mux_data_142_V_read212_rewind_phi_fu_31193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_142_V_read212_phi_phi_fu_75865_p4 = data_142_V_read.read();
        } else {
            ap_phi_mux_data_142_V_read212_phi_phi_fu_75865_p4 = ap_phi_reg_pp0_iter0_data_142_V_read212_phi_reg_75861.read();
        }
    } else {
        ap_phi_mux_data_142_V_read212_phi_phi_fu_75865_p4 = ap_phi_reg_pp0_iter0_data_142_V_read212_phi_reg_75861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_142_V_read212_rewind_phi_fu_31193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_142_V_read212_rewind_phi_fu_31193_p6 = data_142_V_read212_phi_reg_75861.read();
    } else {
        ap_phi_mux_data_142_V_read212_rewind_phi_fu_31193_p6 = data_142_V_read212_rewind_reg_31189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1430_V_read1500_phi_phi_fu_92609_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1430_V_read1500_phi_phi_fu_92609_p4 = ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_49225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1430_V_read1500_phi_phi_fu_92609_p4 = data_1430_V_read.read();
        } else {
            ap_phi_mux_data_1430_V_read1500_phi_phi_fu_92609_p4 = ap_phi_reg_pp0_iter0_data_1430_V_read1500_phi_reg_92605.read();
        }
    } else {
        ap_phi_mux_data_1430_V_read1500_phi_phi_fu_92609_p4 = ap_phi_reg_pp0_iter0_data_1430_V_read1500_phi_reg_92605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_49225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_49225_p6 = data_1430_V_read1500_phi_reg_92605.read();
    } else {
        ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_49225_p6 = data_1430_V_read1500_rewind_reg_49221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1431_V_read1501_phi_phi_fu_92622_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1431_V_read1501_phi_phi_fu_92622_p4 = ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_49239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1431_V_read1501_phi_phi_fu_92622_p4 = data_1431_V_read.read();
        } else {
            ap_phi_mux_data_1431_V_read1501_phi_phi_fu_92622_p4 = ap_phi_reg_pp0_iter0_data_1431_V_read1501_phi_reg_92618.read();
        }
    } else {
        ap_phi_mux_data_1431_V_read1501_phi_phi_fu_92622_p4 = ap_phi_reg_pp0_iter0_data_1431_V_read1501_phi_reg_92618.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_49239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_49239_p6 = data_1431_V_read1501_phi_reg_92618.read();
    } else {
        ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_49239_p6 = data_1431_V_read1501_rewind_reg_49235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1432_V_read1502_phi_phi_fu_92635_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1432_V_read1502_phi_phi_fu_92635_p4 = ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_49253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1432_V_read1502_phi_phi_fu_92635_p4 = data_1432_V_read.read();
        } else {
            ap_phi_mux_data_1432_V_read1502_phi_phi_fu_92635_p4 = ap_phi_reg_pp0_iter0_data_1432_V_read1502_phi_reg_92631.read();
        }
    } else {
        ap_phi_mux_data_1432_V_read1502_phi_phi_fu_92635_p4 = ap_phi_reg_pp0_iter0_data_1432_V_read1502_phi_reg_92631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_49253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_49253_p6 = data_1432_V_read1502_phi_reg_92631.read();
    } else {
        ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_49253_p6 = data_1432_V_read1502_rewind_reg_49249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1433_V_read1503_phi_phi_fu_92648_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1433_V_read1503_phi_phi_fu_92648_p4 = ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_49267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1433_V_read1503_phi_phi_fu_92648_p4 = data_1433_V_read.read();
        } else {
            ap_phi_mux_data_1433_V_read1503_phi_phi_fu_92648_p4 = ap_phi_reg_pp0_iter0_data_1433_V_read1503_phi_reg_92644.read();
        }
    } else {
        ap_phi_mux_data_1433_V_read1503_phi_phi_fu_92648_p4 = ap_phi_reg_pp0_iter0_data_1433_V_read1503_phi_reg_92644.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_49267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_49267_p6 = data_1433_V_read1503_phi_reg_92644.read();
    } else {
        ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_49267_p6 = data_1433_V_read1503_rewind_reg_49263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1434_V_read1504_phi_phi_fu_92661_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1434_V_read1504_phi_phi_fu_92661_p4 = ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_49281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1434_V_read1504_phi_phi_fu_92661_p4 = data_1434_V_read.read();
        } else {
            ap_phi_mux_data_1434_V_read1504_phi_phi_fu_92661_p4 = ap_phi_reg_pp0_iter0_data_1434_V_read1504_phi_reg_92657.read();
        }
    } else {
        ap_phi_mux_data_1434_V_read1504_phi_phi_fu_92661_p4 = ap_phi_reg_pp0_iter0_data_1434_V_read1504_phi_reg_92657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_49281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_49281_p6 = data_1434_V_read1504_phi_reg_92657.read();
    } else {
        ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_49281_p6 = data_1434_V_read1504_rewind_reg_49277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1435_V_read1505_phi_phi_fu_92674_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1435_V_read1505_phi_phi_fu_92674_p4 = ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_49295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1435_V_read1505_phi_phi_fu_92674_p4 = data_1435_V_read.read();
        } else {
            ap_phi_mux_data_1435_V_read1505_phi_phi_fu_92674_p4 = ap_phi_reg_pp0_iter0_data_1435_V_read1505_phi_reg_92670.read();
        }
    } else {
        ap_phi_mux_data_1435_V_read1505_phi_phi_fu_92674_p4 = ap_phi_reg_pp0_iter0_data_1435_V_read1505_phi_reg_92670.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_49295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_49295_p6 = data_1435_V_read1505_phi_reg_92670.read();
    } else {
        ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_49295_p6 = data_1435_V_read1505_rewind_reg_49291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1436_V_read1506_phi_phi_fu_92687_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1436_V_read1506_phi_phi_fu_92687_p4 = ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_49309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1436_V_read1506_phi_phi_fu_92687_p4 = data_1436_V_read.read();
        } else {
            ap_phi_mux_data_1436_V_read1506_phi_phi_fu_92687_p4 = ap_phi_reg_pp0_iter0_data_1436_V_read1506_phi_reg_92683.read();
        }
    } else {
        ap_phi_mux_data_1436_V_read1506_phi_phi_fu_92687_p4 = ap_phi_reg_pp0_iter0_data_1436_V_read1506_phi_reg_92683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_49309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_49309_p6 = data_1436_V_read1506_phi_reg_92683.read();
    } else {
        ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_49309_p6 = data_1436_V_read1506_rewind_reg_49305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1437_V_read1507_phi_phi_fu_92700_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1437_V_read1507_phi_phi_fu_92700_p4 = ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_49323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1437_V_read1507_phi_phi_fu_92700_p4 = data_1437_V_read.read();
        } else {
            ap_phi_mux_data_1437_V_read1507_phi_phi_fu_92700_p4 = ap_phi_reg_pp0_iter0_data_1437_V_read1507_phi_reg_92696.read();
        }
    } else {
        ap_phi_mux_data_1437_V_read1507_phi_phi_fu_92700_p4 = ap_phi_reg_pp0_iter0_data_1437_V_read1507_phi_reg_92696.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_49323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_49323_p6 = data_1437_V_read1507_phi_reg_92696.read();
    } else {
        ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_49323_p6 = data_1437_V_read1507_rewind_reg_49319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1438_V_read1508_phi_phi_fu_92713_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1438_V_read1508_phi_phi_fu_92713_p4 = ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_49337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1438_V_read1508_phi_phi_fu_92713_p4 = data_1438_V_read.read();
        } else {
            ap_phi_mux_data_1438_V_read1508_phi_phi_fu_92713_p4 = ap_phi_reg_pp0_iter0_data_1438_V_read1508_phi_reg_92709.read();
        }
    } else {
        ap_phi_mux_data_1438_V_read1508_phi_phi_fu_92713_p4 = ap_phi_reg_pp0_iter0_data_1438_V_read1508_phi_reg_92709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_49337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_49337_p6 = data_1438_V_read1508_phi_reg_92709.read();
    } else {
        ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_49337_p6 = data_1438_V_read1508_rewind_reg_49333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1439_V_read1509_phi_phi_fu_92726_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1439_V_read1509_phi_phi_fu_92726_p4 = ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_49351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1439_V_read1509_phi_phi_fu_92726_p4 = data_1439_V_read.read();
        } else {
            ap_phi_mux_data_1439_V_read1509_phi_phi_fu_92726_p4 = ap_phi_reg_pp0_iter0_data_1439_V_read1509_phi_reg_92722.read();
        }
    } else {
        ap_phi_mux_data_1439_V_read1509_phi_phi_fu_92726_p4 = ap_phi_reg_pp0_iter0_data_1439_V_read1509_phi_reg_92722.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_49351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_49351_p6 = data_1439_V_read1509_phi_reg_92722.read();
    } else {
        ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_49351_p6 = data_1439_V_read1509_rewind_reg_49347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_143_V_read213_phi_phi_fu_75878_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_143_V_read213_phi_phi_fu_75878_p4 = ap_phi_mux_data_143_V_read213_rewind_phi_fu_31207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_143_V_read213_phi_phi_fu_75878_p4 = data_143_V_read.read();
        } else {
            ap_phi_mux_data_143_V_read213_phi_phi_fu_75878_p4 = ap_phi_reg_pp0_iter0_data_143_V_read213_phi_reg_75874.read();
        }
    } else {
        ap_phi_mux_data_143_V_read213_phi_phi_fu_75878_p4 = ap_phi_reg_pp0_iter0_data_143_V_read213_phi_reg_75874.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_143_V_read213_rewind_phi_fu_31207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_143_V_read213_rewind_phi_fu_31207_p6 = data_143_V_read213_phi_reg_75874.read();
    } else {
        ap_phi_mux_data_143_V_read213_rewind_phi_fu_31207_p6 = data_143_V_read213_rewind_reg_31203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1440_V_read1510_phi_phi_fu_92739_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1440_V_read1510_phi_phi_fu_92739_p4 = ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_49365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1440_V_read1510_phi_phi_fu_92739_p4 = data_1440_V_read.read();
        } else {
            ap_phi_mux_data_1440_V_read1510_phi_phi_fu_92739_p4 = ap_phi_reg_pp0_iter0_data_1440_V_read1510_phi_reg_92735.read();
        }
    } else {
        ap_phi_mux_data_1440_V_read1510_phi_phi_fu_92739_p4 = ap_phi_reg_pp0_iter0_data_1440_V_read1510_phi_reg_92735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_49365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_49365_p6 = data_1440_V_read1510_phi_reg_92735.read();
    } else {
        ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_49365_p6 = data_1440_V_read1510_rewind_reg_49361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1441_V_read1511_phi_phi_fu_92752_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1441_V_read1511_phi_phi_fu_92752_p4 = ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_49379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1441_V_read1511_phi_phi_fu_92752_p4 = data_1441_V_read.read();
        } else {
            ap_phi_mux_data_1441_V_read1511_phi_phi_fu_92752_p4 = ap_phi_reg_pp0_iter0_data_1441_V_read1511_phi_reg_92748.read();
        }
    } else {
        ap_phi_mux_data_1441_V_read1511_phi_phi_fu_92752_p4 = ap_phi_reg_pp0_iter0_data_1441_V_read1511_phi_reg_92748.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_49379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_49379_p6 = data_1441_V_read1511_phi_reg_92748.read();
    } else {
        ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_49379_p6 = data_1441_V_read1511_rewind_reg_49375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1442_V_read1512_phi_phi_fu_92765_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1442_V_read1512_phi_phi_fu_92765_p4 = ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_49393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1442_V_read1512_phi_phi_fu_92765_p4 = data_1442_V_read.read();
        } else {
            ap_phi_mux_data_1442_V_read1512_phi_phi_fu_92765_p4 = ap_phi_reg_pp0_iter0_data_1442_V_read1512_phi_reg_92761.read();
        }
    } else {
        ap_phi_mux_data_1442_V_read1512_phi_phi_fu_92765_p4 = ap_phi_reg_pp0_iter0_data_1442_V_read1512_phi_reg_92761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_49393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_49393_p6 = data_1442_V_read1512_phi_reg_92761.read();
    } else {
        ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_49393_p6 = data_1442_V_read1512_rewind_reg_49389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1443_V_read1513_phi_phi_fu_92778_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1443_V_read1513_phi_phi_fu_92778_p4 = ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_49407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1443_V_read1513_phi_phi_fu_92778_p4 = data_1443_V_read.read();
        } else {
            ap_phi_mux_data_1443_V_read1513_phi_phi_fu_92778_p4 = ap_phi_reg_pp0_iter0_data_1443_V_read1513_phi_reg_92774.read();
        }
    } else {
        ap_phi_mux_data_1443_V_read1513_phi_phi_fu_92778_p4 = ap_phi_reg_pp0_iter0_data_1443_V_read1513_phi_reg_92774.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_49407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_49407_p6 = data_1443_V_read1513_phi_reg_92774.read();
    } else {
        ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_49407_p6 = data_1443_V_read1513_rewind_reg_49403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1444_V_read1514_phi_phi_fu_92791_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1444_V_read1514_phi_phi_fu_92791_p4 = ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_49421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1444_V_read1514_phi_phi_fu_92791_p4 = data_1444_V_read.read();
        } else {
            ap_phi_mux_data_1444_V_read1514_phi_phi_fu_92791_p4 = ap_phi_reg_pp0_iter0_data_1444_V_read1514_phi_reg_92787.read();
        }
    } else {
        ap_phi_mux_data_1444_V_read1514_phi_phi_fu_92791_p4 = ap_phi_reg_pp0_iter0_data_1444_V_read1514_phi_reg_92787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_49421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_49421_p6 = data_1444_V_read1514_phi_reg_92787.read();
    } else {
        ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_49421_p6 = data_1444_V_read1514_rewind_reg_49417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1445_V_read1515_phi_phi_fu_92804_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1445_V_read1515_phi_phi_fu_92804_p4 = ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_49435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1445_V_read1515_phi_phi_fu_92804_p4 = data_1445_V_read.read();
        } else {
            ap_phi_mux_data_1445_V_read1515_phi_phi_fu_92804_p4 = ap_phi_reg_pp0_iter0_data_1445_V_read1515_phi_reg_92800.read();
        }
    } else {
        ap_phi_mux_data_1445_V_read1515_phi_phi_fu_92804_p4 = ap_phi_reg_pp0_iter0_data_1445_V_read1515_phi_reg_92800.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_49435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_49435_p6 = data_1445_V_read1515_phi_reg_92800.read();
    } else {
        ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_49435_p6 = data_1445_V_read1515_rewind_reg_49431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1446_V_read1516_phi_phi_fu_92817_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1446_V_read1516_phi_phi_fu_92817_p4 = ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_49449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1446_V_read1516_phi_phi_fu_92817_p4 = data_1446_V_read.read();
        } else {
            ap_phi_mux_data_1446_V_read1516_phi_phi_fu_92817_p4 = ap_phi_reg_pp0_iter0_data_1446_V_read1516_phi_reg_92813.read();
        }
    } else {
        ap_phi_mux_data_1446_V_read1516_phi_phi_fu_92817_p4 = ap_phi_reg_pp0_iter0_data_1446_V_read1516_phi_reg_92813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_49449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_49449_p6 = data_1446_V_read1516_phi_reg_92813.read();
    } else {
        ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_49449_p6 = data_1446_V_read1516_rewind_reg_49445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1447_V_read1517_phi_phi_fu_92830_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1447_V_read1517_phi_phi_fu_92830_p4 = ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_49463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1447_V_read1517_phi_phi_fu_92830_p4 = data_1447_V_read.read();
        } else {
            ap_phi_mux_data_1447_V_read1517_phi_phi_fu_92830_p4 = ap_phi_reg_pp0_iter0_data_1447_V_read1517_phi_reg_92826.read();
        }
    } else {
        ap_phi_mux_data_1447_V_read1517_phi_phi_fu_92830_p4 = ap_phi_reg_pp0_iter0_data_1447_V_read1517_phi_reg_92826.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_49463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_49463_p6 = data_1447_V_read1517_phi_reg_92826.read();
    } else {
        ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_49463_p6 = data_1447_V_read1517_rewind_reg_49459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1448_V_read1518_phi_phi_fu_92843_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1448_V_read1518_phi_phi_fu_92843_p4 = ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_49477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1448_V_read1518_phi_phi_fu_92843_p4 = data_1448_V_read.read();
        } else {
            ap_phi_mux_data_1448_V_read1518_phi_phi_fu_92843_p4 = ap_phi_reg_pp0_iter0_data_1448_V_read1518_phi_reg_92839.read();
        }
    } else {
        ap_phi_mux_data_1448_V_read1518_phi_phi_fu_92843_p4 = ap_phi_reg_pp0_iter0_data_1448_V_read1518_phi_reg_92839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_49477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_49477_p6 = data_1448_V_read1518_phi_reg_92839.read();
    } else {
        ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_49477_p6 = data_1448_V_read1518_rewind_reg_49473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1449_V_read1519_phi_phi_fu_92856_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1449_V_read1519_phi_phi_fu_92856_p4 = ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_49491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1449_V_read1519_phi_phi_fu_92856_p4 = data_1449_V_read.read();
        } else {
            ap_phi_mux_data_1449_V_read1519_phi_phi_fu_92856_p4 = ap_phi_reg_pp0_iter0_data_1449_V_read1519_phi_reg_92852.read();
        }
    } else {
        ap_phi_mux_data_1449_V_read1519_phi_phi_fu_92856_p4 = ap_phi_reg_pp0_iter0_data_1449_V_read1519_phi_reg_92852.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_49491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_49491_p6 = data_1449_V_read1519_phi_reg_92852.read();
    } else {
        ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_49491_p6 = data_1449_V_read1519_rewind_reg_49487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_144_V_read214_phi_phi_fu_75891_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_144_V_read214_phi_phi_fu_75891_p4 = ap_phi_mux_data_144_V_read214_rewind_phi_fu_31221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_144_V_read214_phi_phi_fu_75891_p4 = data_144_V_read.read();
        } else {
            ap_phi_mux_data_144_V_read214_phi_phi_fu_75891_p4 = ap_phi_reg_pp0_iter0_data_144_V_read214_phi_reg_75887.read();
        }
    } else {
        ap_phi_mux_data_144_V_read214_phi_phi_fu_75891_p4 = ap_phi_reg_pp0_iter0_data_144_V_read214_phi_reg_75887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_144_V_read214_rewind_phi_fu_31221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_144_V_read214_rewind_phi_fu_31221_p6 = data_144_V_read214_phi_reg_75887.read();
    } else {
        ap_phi_mux_data_144_V_read214_rewind_phi_fu_31221_p6 = data_144_V_read214_rewind_reg_31217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1450_V_read1520_phi_phi_fu_92869_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1450_V_read1520_phi_phi_fu_92869_p4 = ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_49505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1450_V_read1520_phi_phi_fu_92869_p4 = data_1450_V_read.read();
        } else {
            ap_phi_mux_data_1450_V_read1520_phi_phi_fu_92869_p4 = ap_phi_reg_pp0_iter0_data_1450_V_read1520_phi_reg_92865.read();
        }
    } else {
        ap_phi_mux_data_1450_V_read1520_phi_phi_fu_92869_p4 = ap_phi_reg_pp0_iter0_data_1450_V_read1520_phi_reg_92865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_49505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_49505_p6 = data_1450_V_read1520_phi_reg_92865.read();
    } else {
        ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_49505_p6 = data_1450_V_read1520_rewind_reg_49501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1451_V_read1521_phi_phi_fu_92882_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1451_V_read1521_phi_phi_fu_92882_p4 = ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_49519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1451_V_read1521_phi_phi_fu_92882_p4 = data_1451_V_read.read();
        } else {
            ap_phi_mux_data_1451_V_read1521_phi_phi_fu_92882_p4 = ap_phi_reg_pp0_iter0_data_1451_V_read1521_phi_reg_92878.read();
        }
    } else {
        ap_phi_mux_data_1451_V_read1521_phi_phi_fu_92882_p4 = ap_phi_reg_pp0_iter0_data_1451_V_read1521_phi_reg_92878.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_49519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_49519_p6 = data_1451_V_read1521_phi_reg_92878.read();
    } else {
        ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_49519_p6 = data_1451_V_read1521_rewind_reg_49515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1452_V_read1522_phi_phi_fu_92895_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1452_V_read1522_phi_phi_fu_92895_p4 = ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_49533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1452_V_read1522_phi_phi_fu_92895_p4 = data_1452_V_read.read();
        } else {
            ap_phi_mux_data_1452_V_read1522_phi_phi_fu_92895_p4 = ap_phi_reg_pp0_iter0_data_1452_V_read1522_phi_reg_92891.read();
        }
    } else {
        ap_phi_mux_data_1452_V_read1522_phi_phi_fu_92895_p4 = ap_phi_reg_pp0_iter0_data_1452_V_read1522_phi_reg_92891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_49533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_49533_p6 = data_1452_V_read1522_phi_reg_92891.read();
    } else {
        ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_49533_p6 = data_1452_V_read1522_rewind_reg_49529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1453_V_read1523_phi_phi_fu_92908_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1453_V_read1523_phi_phi_fu_92908_p4 = ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_49547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1453_V_read1523_phi_phi_fu_92908_p4 = data_1453_V_read.read();
        } else {
            ap_phi_mux_data_1453_V_read1523_phi_phi_fu_92908_p4 = ap_phi_reg_pp0_iter0_data_1453_V_read1523_phi_reg_92904.read();
        }
    } else {
        ap_phi_mux_data_1453_V_read1523_phi_phi_fu_92908_p4 = ap_phi_reg_pp0_iter0_data_1453_V_read1523_phi_reg_92904.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_49547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_49547_p6 = data_1453_V_read1523_phi_reg_92904.read();
    } else {
        ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_49547_p6 = data_1453_V_read1523_rewind_reg_49543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1454_V_read1524_phi_phi_fu_92921_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1454_V_read1524_phi_phi_fu_92921_p4 = ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_49561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1454_V_read1524_phi_phi_fu_92921_p4 = data_1454_V_read.read();
        } else {
            ap_phi_mux_data_1454_V_read1524_phi_phi_fu_92921_p4 = ap_phi_reg_pp0_iter0_data_1454_V_read1524_phi_reg_92917.read();
        }
    } else {
        ap_phi_mux_data_1454_V_read1524_phi_phi_fu_92921_p4 = ap_phi_reg_pp0_iter0_data_1454_V_read1524_phi_reg_92917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_49561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_49561_p6 = data_1454_V_read1524_phi_reg_92917.read();
    } else {
        ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_49561_p6 = data_1454_V_read1524_rewind_reg_49557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1455_V_read1525_phi_phi_fu_92934_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1455_V_read1525_phi_phi_fu_92934_p4 = ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_49575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1455_V_read1525_phi_phi_fu_92934_p4 = data_1455_V_read.read();
        } else {
            ap_phi_mux_data_1455_V_read1525_phi_phi_fu_92934_p4 = ap_phi_reg_pp0_iter0_data_1455_V_read1525_phi_reg_92930.read();
        }
    } else {
        ap_phi_mux_data_1455_V_read1525_phi_phi_fu_92934_p4 = ap_phi_reg_pp0_iter0_data_1455_V_read1525_phi_reg_92930.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_49575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_49575_p6 = data_1455_V_read1525_phi_reg_92930.read();
    } else {
        ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_49575_p6 = data_1455_V_read1525_rewind_reg_49571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1456_V_read1526_phi_phi_fu_92947_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1456_V_read1526_phi_phi_fu_92947_p4 = ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_49589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1456_V_read1526_phi_phi_fu_92947_p4 = data_1456_V_read.read();
        } else {
            ap_phi_mux_data_1456_V_read1526_phi_phi_fu_92947_p4 = ap_phi_reg_pp0_iter0_data_1456_V_read1526_phi_reg_92943.read();
        }
    } else {
        ap_phi_mux_data_1456_V_read1526_phi_phi_fu_92947_p4 = ap_phi_reg_pp0_iter0_data_1456_V_read1526_phi_reg_92943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_49589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_49589_p6 = data_1456_V_read1526_phi_reg_92943.read();
    } else {
        ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_49589_p6 = data_1456_V_read1526_rewind_reg_49585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1457_V_read1527_phi_phi_fu_92960_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1457_V_read1527_phi_phi_fu_92960_p4 = ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_49603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1457_V_read1527_phi_phi_fu_92960_p4 = data_1457_V_read.read();
        } else {
            ap_phi_mux_data_1457_V_read1527_phi_phi_fu_92960_p4 = ap_phi_reg_pp0_iter0_data_1457_V_read1527_phi_reg_92956.read();
        }
    } else {
        ap_phi_mux_data_1457_V_read1527_phi_phi_fu_92960_p4 = ap_phi_reg_pp0_iter0_data_1457_V_read1527_phi_reg_92956.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_49603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_49603_p6 = data_1457_V_read1527_phi_reg_92956.read();
    } else {
        ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_49603_p6 = data_1457_V_read1527_rewind_reg_49599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1458_V_read1528_phi_phi_fu_92973_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1458_V_read1528_phi_phi_fu_92973_p4 = ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_49617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1458_V_read1528_phi_phi_fu_92973_p4 = data_1458_V_read.read();
        } else {
            ap_phi_mux_data_1458_V_read1528_phi_phi_fu_92973_p4 = ap_phi_reg_pp0_iter0_data_1458_V_read1528_phi_reg_92969.read();
        }
    } else {
        ap_phi_mux_data_1458_V_read1528_phi_phi_fu_92973_p4 = ap_phi_reg_pp0_iter0_data_1458_V_read1528_phi_reg_92969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_49617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_49617_p6 = data_1458_V_read1528_phi_reg_92969.read();
    } else {
        ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_49617_p6 = data_1458_V_read1528_rewind_reg_49613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1459_V_read1529_phi_phi_fu_92986_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1459_V_read1529_phi_phi_fu_92986_p4 = ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_49631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1459_V_read1529_phi_phi_fu_92986_p4 = data_1459_V_read.read();
        } else {
            ap_phi_mux_data_1459_V_read1529_phi_phi_fu_92986_p4 = ap_phi_reg_pp0_iter0_data_1459_V_read1529_phi_reg_92982.read();
        }
    } else {
        ap_phi_mux_data_1459_V_read1529_phi_phi_fu_92986_p4 = ap_phi_reg_pp0_iter0_data_1459_V_read1529_phi_reg_92982.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_49631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_49631_p6 = data_1459_V_read1529_phi_reg_92982.read();
    } else {
        ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_49631_p6 = data_1459_V_read1529_rewind_reg_49627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_145_V_read215_phi_phi_fu_75904_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_145_V_read215_phi_phi_fu_75904_p4 = ap_phi_mux_data_145_V_read215_rewind_phi_fu_31235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_145_V_read215_phi_phi_fu_75904_p4 = data_145_V_read.read();
        } else {
            ap_phi_mux_data_145_V_read215_phi_phi_fu_75904_p4 = ap_phi_reg_pp0_iter0_data_145_V_read215_phi_reg_75900.read();
        }
    } else {
        ap_phi_mux_data_145_V_read215_phi_phi_fu_75904_p4 = ap_phi_reg_pp0_iter0_data_145_V_read215_phi_reg_75900.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_145_V_read215_rewind_phi_fu_31235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_145_V_read215_rewind_phi_fu_31235_p6 = data_145_V_read215_phi_reg_75900.read();
    } else {
        ap_phi_mux_data_145_V_read215_rewind_phi_fu_31235_p6 = data_145_V_read215_rewind_reg_31231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1460_V_read1530_phi_phi_fu_92999_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1460_V_read1530_phi_phi_fu_92999_p4 = ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_49645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1460_V_read1530_phi_phi_fu_92999_p4 = data_1460_V_read.read();
        } else {
            ap_phi_mux_data_1460_V_read1530_phi_phi_fu_92999_p4 = ap_phi_reg_pp0_iter0_data_1460_V_read1530_phi_reg_92995.read();
        }
    } else {
        ap_phi_mux_data_1460_V_read1530_phi_phi_fu_92999_p4 = ap_phi_reg_pp0_iter0_data_1460_V_read1530_phi_reg_92995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_49645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_49645_p6 = data_1460_V_read1530_phi_reg_92995.read();
    } else {
        ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_49645_p6 = data_1460_V_read1530_rewind_reg_49641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1461_V_read1531_phi_phi_fu_93012_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1461_V_read1531_phi_phi_fu_93012_p4 = ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_49659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1461_V_read1531_phi_phi_fu_93012_p4 = data_1461_V_read.read();
        } else {
            ap_phi_mux_data_1461_V_read1531_phi_phi_fu_93012_p4 = ap_phi_reg_pp0_iter0_data_1461_V_read1531_phi_reg_93008.read();
        }
    } else {
        ap_phi_mux_data_1461_V_read1531_phi_phi_fu_93012_p4 = ap_phi_reg_pp0_iter0_data_1461_V_read1531_phi_reg_93008.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_49659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_49659_p6 = data_1461_V_read1531_phi_reg_93008.read();
    } else {
        ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_49659_p6 = data_1461_V_read1531_rewind_reg_49655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1462_V_read1532_phi_phi_fu_93025_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1462_V_read1532_phi_phi_fu_93025_p4 = ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_49673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1462_V_read1532_phi_phi_fu_93025_p4 = data_1462_V_read.read();
        } else {
            ap_phi_mux_data_1462_V_read1532_phi_phi_fu_93025_p4 = ap_phi_reg_pp0_iter0_data_1462_V_read1532_phi_reg_93021.read();
        }
    } else {
        ap_phi_mux_data_1462_V_read1532_phi_phi_fu_93025_p4 = ap_phi_reg_pp0_iter0_data_1462_V_read1532_phi_reg_93021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_49673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_49673_p6 = data_1462_V_read1532_phi_reg_93021.read();
    } else {
        ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_49673_p6 = data_1462_V_read1532_rewind_reg_49669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1463_V_read1533_phi_phi_fu_93038_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1463_V_read1533_phi_phi_fu_93038_p4 = ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_49687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1463_V_read1533_phi_phi_fu_93038_p4 = data_1463_V_read.read();
        } else {
            ap_phi_mux_data_1463_V_read1533_phi_phi_fu_93038_p4 = ap_phi_reg_pp0_iter0_data_1463_V_read1533_phi_reg_93034.read();
        }
    } else {
        ap_phi_mux_data_1463_V_read1533_phi_phi_fu_93038_p4 = ap_phi_reg_pp0_iter0_data_1463_V_read1533_phi_reg_93034.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_49687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_49687_p6 = data_1463_V_read1533_phi_reg_93034.read();
    } else {
        ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_49687_p6 = data_1463_V_read1533_rewind_reg_49683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1464_V_read1534_phi_phi_fu_93051_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1464_V_read1534_phi_phi_fu_93051_p4 = ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_49701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1464_V_read1534_phi_phi_fu_93051_p4 = data_1464_V_read.read();
        } else {
            ap_phi_mux_data_1464_V_read1534_phi_phi_fu_93051_p4 = ap_phi_reg_pp0_iter0_data_1464_V_read1534_phi_reg_93047.read();
        }
    } else {
        ap_phi_mux_data_1464_V_read1534_phi_phi_fu_93051_p4 = ap_phi_reg_pp0_iter0_data_1464_V_read1534_phi_reg_93047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_49701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_49701_p6 = data_1464_V_read1534_phi_reg_93047.read();
    } else {
        ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_49701_p6 = data_1464_V_read1534_rewind_reg_49697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1465_V_read1535_phi_phi_fu_93064_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1465_V_read1535_phi_phi_fu_93064_p4 = ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_49715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1465_V_read1535_phi_phi_fu_93064_p4 = data_1465_V_read.read();
        } else {
            ap_phi_mux_data_1465_V_read1535_phi_phi_fu_93064_p4 = ap_phi_reg_pp0_iter0_data_1465_V_read1535_phi_reg_93060.read();
        }
    } else {
        ap_phi_mux_data_1465_V_read1535_phi_phi_fu_93064_p4 = ap_phi_reg_pp0_iter0_data_1465_V_read1535_phi_reg_93060.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_49715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_49715_p6 = data_1465_V_read1535_phi_reg_93060.read();
    } else {
        ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_49715_p6 = data_1465_V_read1535_rewind_reg_49711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1466_V_read1536_phi_phi_fu_93077_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1466_V_read1536_phi_phi_fu_93077_p4 = ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_49729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1466_V_read1536_phi_phi_fu_93077_p4 = data_1466_V_read.read();
        } else {
            ap_phi_mux_data_1466_V_read1536_phi_phi_fu_93077_p4 = ap_phi_reg_pp0_iter0_data_1466_V_read1536_phi_reg_93073.read();
        }
    } else {
        ap_phi_mux_data_1466_V_read1536_phi_phi_fu_93077_p4 = ap_phi_reg_pp0_iter0_data_1466_V_read1536_phi_reg_93073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_49729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_49729_p6 = data_1466_V_read1536_phi_reg_93073.read();
    } else {
        ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_49729_p6 = data_1466_V_read1536_rewind_reg_49725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1467_V_read1537_phi_phi_fu_93090_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1467_V_read1537_phi_phi_fu_93090_p4 = ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_49743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1467_V_read1537_phi_phi_fu_93090_p4 = data_1467_V_read.read();
        } else {
            ap_phi_mux_data_1467_V_read1537_phi_phi_fu_93090_p4 = ap_phi_reg_pp0_iter0_data_1467_V_read1537_phi_reg_93086.read();
        }
    } else {
        ap_phi_mux_data_1467_V_read1537_phi_phi_fu_93090_p4 = ap_phi_reg_pp0_iter0_data_1467_V_read1537_phi_reg_93086.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_49743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_49743_p6 = data_1467_V_read1537_phi_reg_93086.read();
    } else {
        ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_49743_p6 = data_1467_V_read1537_rewind_reg_49739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1468_V_read1538_phi_phi_fu_93103_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1468_V_read1538_phi_phi_fu_93103_p4 = ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_49757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1468_V_read1538_phi_phi_fu_93103_p4 = data_1468_V_read.read();
        } else {
            ap_phi_mux_data_1468_V_read1538_phi_phi_fu_93103_p4 = ap_phi_reg_pp0_iter0_data_1468_V_read1538_phi_reg_93099.read();
        }
    } else {
        ap_phi_mux_data_1468_V_read1538_phi_phi_fu_93103_p4 = ap_phi_reg_pp0_iter0_data_1468_V_read1538_phi_reg_93099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_49757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_49757_p6 = data_1468_V_read1538_phi_reg_93099.read();
    } else {
        ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_49757_p6 = data_1468_V_read1538_rewind_reg_49753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1469_V_read1539_phi_phi_fu_93116_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1469_V_read1539_phi_phi_fu_93116_p4 = ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_49771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1469_V_read1539_phi_phi_fu_93116_p4 = data_1469_V_read.read();
        } else {
            ap_phi_mux_data_1469_V_read1539_phi_phi_fu_93116_p4 = ap_phi_reg_pp0_iter0_data_1469_V_read1539_phi_reg_93112.read();
        }
    } else {
        ap_phi_mux_data_1469_V_read1539_phi_phi_fu_93116_p4 = ap_phi_reg_pp0_iter0_data_1469_V_read1539_phi_reg_93112.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_49771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_49771_p6 = data_1469_V_read1539_phi_reg_93112.read();
    } else {
        ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_49771_p6 = data_1469_V_read1539_rewind_reg_49767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_146_V_read216_phi_phi_fu_75917_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_146_V_read216_phi_phi_fu_75917_p4 = ap_phi_mux_data_146_V_read216_rewind_phi_fu_31249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_146_V_read216_phi_phi_fu_75917_p4 = data_146_V_read.read();
        } else {
            ap_phi_mux_data_146_V_read216_phi_phi_fu_75917_p4 = ap_phi_reg_pp0_iter0_data_146_V_read216_phi_reg_75913.read();
        }
    } else {
        ap_phi_mux_data_146_V_read216_phi_phi_fu_75917_p4 = ap_phi_reg_pp0_iter0_data_146_V_read216_phi_reg_75913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_146_V_read216_rewind_phi_fu_31249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_146_V_read216_rewind_phi_fu_31249_p6 = data_146_V_read216_phi_reg_75913.read();
    } else {
        ap_phi_mux_data_146_V_read216_rewind_phi_fu_31249_p6 = data_146_V_read216_rewind_reg_31245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1470_V_read1540_phi_phi_fu_93129_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1470_V_read1540_phi_phi_fu_93129_p4 = ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_49785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1470_V_read1540_phi_phi_fu_93129_p4 = data_1470_V_read.read();
        } else {
            ap_phi_mux_data_1470_V_read1540_phi_phi_fu_93129_p4 = ap_phi_reg_pp0_iter0_data_1470_V_read1540_phi_reg_93125.read();
        }
    } else {
        ap_phi_mux_data_1470_V_read1540_phi_phi_fu_93129_p4 = ap_phi_reg_pp0_iter0_data_1470_V_read1540_phi_reg_93125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_49785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_49785_p6 = data_1470_V_read1540_phi_reg_93125.read();
    } else {
        ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_49785_p6 = data_1470_V_read1540_rewind_reg_49781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1471_V_read1541_phi_phi_fu_93142_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1471_V_read1541_phi_phi_fu_93142_p4 = ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_49799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1471_V_read1541_phi_phi_fu_93142_p4 = data_1471_V_read.read();
        } else {
            ap_phi_mux_data_1471_V_read1541_phi_phi_fu_93142_p4 = ap_phi_reg_pp0_iter0_data_1471_V_read1541_phi_reg_93138.read();
        }
    } else {
        ap_phi_mux_data_1471_V_read1541_phi_phi_fu_93142_p4 = ap_phi_reg_pp0_iter0_data_1471_V_read1541_phi_reg_93138.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_49799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_49799_p6 = data_1471_V_read1541_phi_reg_93138.read();
    } else {
        ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_49799_p6 = data_1471_V_read1541_rewind_reg_49795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1472_V_read1542_phi_phi_fu_93155_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1472_V_read1542_phi_phi_fu_93155_p4 = ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_49813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1472_V_read1542_phi_phi_fu_93155_p4 = data_1472_V_read.read();
        } else {
            ap_phi_mux_data_1472_V_read1542_phi_phi_fu_93155_p4 = ap_phi_reg_pp0_iter0_data_1472_V_read1542_phi_reg_93151.read();
        }
    } else {
        ap_phi_mux_data_1472_V_read1542_phi_phi_fu_93155_p4 = ap_phi_reg_pp0_iter0_data_1472_V_read1542_phi_reg_93151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_49813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_49813_p6 = data_1472_V_read1542_phi_reg_93151.read();
    } else {
        ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_49813_p6 = data_1472_V_read1542_rewind_reg_49809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1473_V_read1543_phi_phi_fu_93168_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1473_V_read1543_phi_phi_fu_93168_p4 = ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_49827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1473_V_read1543_phi_phi_fu_93168_p4 = data_1473_V_read.read();
        } else {
            ap_phi_mux_data_1473_V_read1543_phi_phi_fu_93168_p4 = ap_phi_reg_pp0_iter0_data_1473_V_read1543_phi_reg_93164.read();
        }
    } else {
        ap_phi_mux_data_1473_V_read1543_phi_phi_fu_93168_p4 = ap_phi_reg_pp0_iter0_data_1473_V_read1543_phi_reg_93164.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_49827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_49827_p6 = data_1473_V_read1543_phi_reg_93164.read();
    } else {
        ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_49827_p6 = data_1473_V_read1543_rewind_reg_49823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1474_V_read1544_phi_phi_fu_93181_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1474_V_read1544_phi_phi_fu_93181_p4 = ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_49841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1474_V_read1544_phi_phi_fu_93181_p4 = data_1474_V_read.read();
        } else {
            ap_phi_mux_data_1474_V_read1544_phi_phi_fu_93181_p4 = ap_phi_reg_pp0_iter0_data_1474_V_read1544_phi_reg_93177.read();
        }
    } else {
        ap_phi_mux_data_1474_V_read1544_phi_phi_fu_93181_p4 = ap_phi_reg_pp0_iter0_data_1474_V_read1544_phi_reg_93177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_49841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_49841_p6 = data_1474_V_read1544_phi_reg_93177.read();
    } else {
        ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_49841_p6 = data_1474_V_read1544_rewind_reg_49837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1475_V_read1545_phi_phi_fu_93194_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1475_V_read1545_phi_phi_fu_93194_p4 = ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_49855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1475_V_read1545_phi_phi_fu_93194_p4 = data_1475_V_read.read();
        } else {
            ap_phi_mux_data_1475_V_read1545_phi_phi_fu_93194_p4 = ap_phi_reg_pp0_iter0_data_1475_V_read1545_phi_reg_93190.read();
        }
    } else {
        ap_phi_mux_data_1475_V_read1545_phi_phi_fu_93194_p4 = ap_phi_reg_pp0_iter0_data_1475_V_read1545_phi_reg_93190.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_49855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_49855_p6 = data_1475_V_read1545_phi_reg_93190.read();
    } else {
        ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_49855_p6 = data_1475_V_read1545_rewind_reg_49851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1476_V_read1546_phi_phi_fu_93207_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1476_V_read1546_phi_phi_fu_93207_p4 = ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_49869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1476_V_read1546_phi_phi_fu_93207_p4 = data_1476_V_read.read();
        } else {
            ap_phi_mux_data_1476_V_read1546_phi_phi_fu_93207_p4 = ap_phi_reg_pp0_iter0_data_1476_V_read1546_phi_reg_93203.read();
        }
    } else {
        ap_phi_mux_data_1476_V_read1546_phi_phi_fu_93207_p4 = ap_phi_reg_pp0_iter0_data_1476_V_read1546_phi_reg_93203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_49869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_49869_p6 = data_1476_V_read1546_phi_reg_93203.read();
    } else {
        ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_49869_p6 = data_1476_V_read1546_rewind_reg_49865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1477_V_read1547_phi_phi_fu_93220_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1477_V_read1547_phi_phi_fu_93220_p4 = ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_49883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1477_V_read1547_phi_phi_fu_93220_p4 = data_1477_V_read.read();
        } else {
            ap_phi_mux_data_1477_V_read1547_phi_phi_fu_93220_p4 = ap_phi_reg_pp0_iter0_data_1477_V_read1547_phi_reg_93216.read();
        }
    } else {
        ap_phi_mux_data_1477_V_read1547_phi_phi_fu_93220_p4 = ap_phi_reg_pp0_iter0_data_1477_V_read1547_phi_reg_93216.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_49883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_49883_p6 = data_1477_V_read1547_phi_reg_93216.read();
    } else {
        ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_49883_p6 = data_1477_V_read1547_rewind_reg_49879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1478_V_read1548_phi_phi_fu_93233_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1478_V_read1548_phi_phi_fu_93233_p4 = ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_49897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1478_V_read1548_phi_phi_fu_93233_p4 = data_1478_V_read.read();
        } else {
            ap_phi_mux_data_1478_V_read1548_phi_phi_fu_93233_p4 = ap_phi_reg_pp0_iter0_data_1478_V_read1548_phi_reg_93229.read();
        }
    } else {
        ap_phi_mux_data_1478_V_read1548_phi_phi_fu_93233_p4 = ap_phi_reg_pp0_iter0_data_1478_V_read1548_phi_reg_93229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_49897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_49897_p6 = data_1478_V_read1548_phi_reg_93229.read();
    } else {
        ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_49897_p6 = data_1478_V_read1548_rewind_reg_49893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1479_V_read1549_phi_phi_fu_93246_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1479_V_read1549_phi_phi_fu_93246_p4 = ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_49911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1479_V_read1549_phi_phi_fu_93246_p4 = data_1479_V_read.read();
        } else {
            ap_phi_mux_data_1479_V_read1549_phi_phi_fu_93246_p4 = ap_phi_reg_pp0_iter0_data_1479_V_read1549_phi_reg_93242.read();
        }
    } else {
        ap_phi_mux_data_1479_V_read1549_phi_phi_fu_93246_p4 = ap_phi_reg_pp0_iter0_data_1479_V_read1549_phi_reg_93242.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_49911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_49911_p6 = data_1479_V_read1549_phi_reg_93242.read();
    } else {
        ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_49911_p6 = data_1479_V_read1549_rewind_reg_49907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_147_V_read217_phi_phi_fu_75930_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_147_V_read217_phi_phi_fu_75930_p4 = ap_phi_mux_data_147_V_read217_rewind_phi_fu_31263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_147_V_read217_phi_phi_fu_75930_p4 = data_147_V_read.read();
        } else {
            ap_phi_mux_data_147_V_read217_phi_phi_fu_75930_p4 = ap_phi_reg_pp0_iter0_data_147_V_read217_phi_reg_75926.read();
        }
    } else {
        ap_phi_mux_data_147_V_read217_phi_phi_fu_75930_p4 = ap_phi_reg_pp0_iter0_data_147_V_read217_phi_reg_75926.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_147_V_read217_rewind_phi_fu_31263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_147_V_read217_rewind_phi_fu_31263_p6 = data_147_V_read217_phi_reg_75926.read();
    } else {
        ap_phi_mux_data_147_V_read217_rewind_phi_fu_31263_p6 = data_147_V_read217_rewind_reg_31259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1480_V_read1550_phi_phi_fu_93259_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1480_V_read1550_phi_phi_fu_93259_p4 = ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_49925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1480_V_read1550_phi_phi_fu_93259_p4 = data_1480_V_read.read();
        } else {
            ap_phi_mux_data_1480_V_read1550_phi_phi_fu_93259_p4 = ap_phi_reg_pp0_iter0_data_1480_V_read1550_phi_reg_93255.read();
        }
    } else {
        ap_phi_mux_data_1480_V_read1550_phi_phi_fu_93259_p4 = ap_phi_reg_pp0_iter0_data_1480_V_read1550_phi_reg_93255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_49925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_49925_p6 = data_1480_V_read1550_phi_reg_93255.read();
    } else {
        ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_49925_p6 = data_1480_V_read1550_rewind_reg_49921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1481_V_read1551_phi_phi_fu_93272_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1481_V_read1551_phi_phi_fu_93272_p4 = ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_49939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1481_V_read1551_phi_phi_fu_93272_p4 = data_1481_V_read.read();
        } else {
            ap_phi_mux_data_1481_V_read1551_phi_phi_fu_93272_p4 = ap_phi_reg_pp0_iter0_data_1481_V_read1551_phi_reg_93268.read();
        }
    } else {
        ap_phi_mux_data_1481_V_read1551_phi_phi_fu_93272_p4 = ap_phi_reg_pp0_iter0_data_1481_V_read1551_phi_reg_93268.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_49939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_49939_p6 = data_1481_V_read1551_phi_reg_93268.read();
    } else {
        ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_49939_p6 = data_1481_V_read1551_rewind_reg_49935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1482_V_read1552_phi_phi_fu_93285_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1482_V_read1552_phi_phi_fu_93285_p4 = ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_49953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1482_V_read1552_phi_phi_fu_93285_p4 = data_1482_V_read.read();
        } else {
            ap_phi_mux_data_1482_V_read1552_phi_phi_fu_93285_p4 = ap_phi_reg_pp0_iter0_data_1482_V_read1552_phi_reg_93281.read();
        }
    } else {
        ap_phi_mux_data_1482_V_read1552_phi_phi_fu_93285_p4 = ap_phi_reg_pp0_iter0_data_1482_V_read1552_phi_reg_93281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_49953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_49953_p6 = data_1482_V_read1552_phi_reg_93281.read();
    } else {
        ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_49953_p6 = data_1482_V_read1552_rewind_reg_49949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1483_V_read1553_phi_phi_fu_93298_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1483_V_read1553_phi_phi_fu_93298_p4 = ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_49967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1483_V_read1553_phi_phi_fu_93298_p4 = data_1483_V_read.read();
        } else {
            ap_phi_mux_data_1483_V_read1553_phi_phi_fu_93298_p4 = ap_phi_reg_pp0_iter0_data_1483_V_read1553_phi_reg_93294.read();
        }
    } else {
        ap_phi_mux_data_1483_V_read1553_phi_phi_fu_93298_p4 = ap_phi_reg_pp0_iter0_data_1483_V_read1553_phi_reg_93294.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_49967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_49967_p6 = data_1483_V_read1553_phi_reg_93294.read();
    } else {
        ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_49967_p6 = data_1483_V_read1553_rewind_reg_49963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1484_V_read1554_phi_phi_fu_93311_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1484_V_read1554_phi_phi_fu_93311_p4 = ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_49981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1484_V_read1554_phi_phi_fu_93311_p4 = data_1484_V_read.read();
        } else {
            ap_phi_mux_data_1484_V_read1554_phi_phi_fu_93311_p4 = ap_phi_reg_pp0_iter0_data_1484_V_read1554_phi_reg_93307.read();
        }
    } else {
        ap_phi_mux_data_1484_V_read1554_phi_phi_fu_93311_p4 = ap_phi_reg_pp0_iter0_data_1484_V_read1554_phi_reg_93307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_49981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_49981_p6 = data_1484_V_read1554_phi_reg_93307.read();
    } else {
        ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_49981_p6 = data_1484_V_read1554_rewind_reg_49977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1485_V_read1555_phi_phi_fu_93324_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1485_V_read1555_phi_phi_fu_93324_p4 = ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_49995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1485_V_read1555_phi_phi_fu_93324_p4 = data_1485_V_read.read();
        } else {
            ap_phi_mux_data_1485_V_read1555_phi_phi_fu_93324_p4 = ap_phi_reg_pp0_iter0_data_1485_V_read1555_phi_reg_93320.read();
        }
    } else {
        ap_phi_mux_data_1485_V_read1555_phi_phi_fu_93324_p4 = ap_phi_reg_pp0_iter0_data_1485_V_read1555_phi_reg_93320.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_49995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_49995_p6 = data_1485_V_read1555_phi_reg_93320.read();
    } else {
        ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_49995_p6 = data_1485_V_read1555_rewind_reg_49991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1486_V_read1556_phi_phi_fu_93337_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1486_V_read1556_phi_phi_fu_93337_p4 = ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_50009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1486_V_read1556_phi_phi_fu_93337_p4 = data_1486_V_read.read();
        } else {
            ap_phi_mux_data_1486_V_read1556_phi_phi_fu_93337_p4 = ap_phi_reg_pp0_iter0_data_1486_V_read1556_phi_reg_93333.read();
        }
    } else {
        ap_phi_mux_data_1486_V_read1556_phi_phi_fu_93337_p4 = ap_phi_reg_pp0_iter0_data_1486_V_read1556_phi_reg_93333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_50009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_50009_p6 = data_1486_V_read1556_phi_reg_93333.read();
    } else {
        ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_50009_p6 = data_1486_V_read1556_rewind_reg_50005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1487_V_read1557_phi_phi_fu_93350_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1487_V_read1557_phi_phi_fu_93350_p4 = ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_50023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1487_V_read1557_phi_phi_fu_93350_p4 = data_1487_V_read.read();
        } else {
            ap_phi_mux_data_1487_V_read1557_phi_phi_fu_93350_p4 = ap_phi_reg_pp0_iter0_data_1487_V_read1557_phi_reg_93346.read();
        }
    } else {
        ap_phi_mux_data_1487_V_read1557_phi_phi_fu_93350_p4 = ap_phi_reg_pp0_iter0_data_1487_V_read1557_phi_reg_93346.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_50023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_50023_p6 = data_1487_V_read1557_phi_reg_93346.read();
    } else {
        ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_50023_p6 = data_1487_V_read1557_rewind_reg_50019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1488_V_read1558_phi_phi_fu_93363_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1488_V_read1558_phi_phi_fu_93363_p4 = ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_50037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1488_V_read1558_phi_phi_fu_93363_p4 = data_1488_V_read.read();
        } else {
            ap_phi_mux_data_1488_V_read1558_phi_phi_fu_93363_p4 = ap_phi_reg_pp0_iter0_data_1488_V_read1558_phi_reg_93359.read();
        }
    } else {
        ap_phi_mux_data_1488_V_read1558_phi_phi_fu_93363_p4 = ap_phi_reg_pp0_iter0_data_1488_V_read1558_phi_reg_93359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_50037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_50037_p6 = data_1488_V_read1558_phi_reg_93359.read();
    } else {
        ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_50037_p6 = data_1488_V_read1558_rewind_reg_50033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1489_V_read1559_phi_phi_fu_93376_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1489_V_read1559_phi_phi_fu_93376_p4 = ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_50051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1489_V_read1559_phi_phi_fu_93376_p4 = data_1489_V_read.read();
        } else {
            ap_phi_mux_data_1489_V_read1559_phi_phi_fu_93376_p4 = ap_phi_reg_pp0_iter0_data_1489_V_read1559_phi_reg_93372.read();
        }
    } else {
        ap_phi_mux_data_1489_V_read1559_phi_phi_fu_93376_p4 = ap_phi_reg_pp0_iter0_data_1489_V_read1559_phi_reg_93372.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_50051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_50051_p6 = data_1489_V_read1559_phi_reg_93372.read();
    } else {
        ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_50051_p6 = data_1489_V_read1559_rewind_reg_50047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_148_V_read218_phi_phi_fu_75943_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_148_V_read218_phi_phi_fu_75943_p4 = ap_phi_mux_data_148_V_read218_rewind_phi_fu_31277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_148_V_read218_phi_phi_fu_75943_p4 = data_148_V_read.read();
        } else {
            ap_phi_mux_data_148_V_read218_phi_phi_fu_75943_p4 = ap_phi_reg_pp0_iter0_data_148_V_read218_phi_reg_75939.read();
        }
    } else {
        ap_phi_mux_data_148_V_read218_phi_phi_fu_75943_p4 = ap_phi_reg_pp0_iter0_data_148_V_read218_phi_reg_75939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_148_V_read218_rewind_phi_fu_31277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_148_V_read218_rewind_phi_fu_31277_p6 = data_148_V_read218_phi_reg_75939.read();
    } else {
        ap_phi_mux_data_148_V_read218_rewind_phi_fu_31277_p6 = data_148_V_read218_rewind_reg_31273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1490_V_read1560_phi_phi_fu_93389_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1490_V_read1560_phi_phi_fu_93389_p4 = ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_50065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1490_V_read1560_phi_phi_fu_93389_p4 = data_1490_V_read.read();
        } else {
            ap_phi_mux_data_1490_V_read1560_phi_phi_fu_93389_p4 = ap_phi_reg_pp0_iter0_data_1490_V_read1560_phi_reg_93385.read();
        }
    } else {
        ap_phi_mux_data_1490_V_read1560_phi_phi_fu_93389_p4 = ap_phi_reg_pp0_iter0_data_1490_V_read1560_phi_reg_93385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_50065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_50065_p6 = data_1490_V_read1560_phi_reg_93385.read();
    } else {
        ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_50065_p6 = data_1490_V_read1560_rewind_reg_50061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1491_V_read1561_phi_phi_fu_93402_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1491_V_read1561_phi_phi_fu_93402_p4 = ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_50079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1491_V_read1561_phi_phi_fu_93402_p4 = data_1491_V_read.read();
        } else {
            ap_phi_mux_data_1491_V_read1561_phi_phi_fu_93402_p4 = ap_phi_reg_pp0_iter0_data_1491_V_read1561_phi_reg_93398.read();
        }
    } else {
        ap_phi_mux_data_1491_V_read1561_phi_phi_fu_93402_p4 = ap_phi_reg_pp0_iter0_data_1491_V_read1561_phi_reg_93398.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_50079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_50079_p6 = data_1491_V_read1561_phi_reg_93398.read();
    } else {
        ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_50079_p6 = data_1491_V_read1561_rewind_reg_50075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1492_V_read1562_phi_phi_fu_93415_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1492_V_read1562_phi_phi_fu_93415_p4 = ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_50093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1492_V_read1562_phi_phi_fu_93415_p4 = data_1492_V_read.read();
        } else {
            ap_phi_mux_data_1492_V_read1562_phi_phi_fu_93415_p4 = ap_phi_reg_pp0_iter0_data_1492_V_read1562_phi_reg_93411.read();
        }
    } else {
        ap_phi_mux_data_1492_V_read1562_phi_phi_fu_93415_p4 = ap_phi_reg_pp0_iter0_data_1492_V_read1562_phi_reg_93411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_50093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_50093_p6 = data_1492_V_read1562_phi_reg_93411.read();
    } else {
        ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_50093_p6 = data_1492_V_read1562_rewind_reg_50089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1493_V_read1563_phi_phi_fu_93428_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1493_V_read1563_phi_phi_fu_93428_p4 = ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_50107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1493_V_read1563_phi_phi_fu_93428_p4 = data_1493_V_read.read();
        } else {
            ap_phi_mux_data_1493_V_read1563_phi_phi_fu_93428_p4 = ap_phi_reg_pp0_iter0_data_1493_V_read1563_phi_reg_93424.read();
        }
    } else {
        ap_phi_mux_data_1493_V_read1563_phi_phi_fu_93428_p4 = ap_phi_reg_pp0_iter0_data_1493_V_read1563_phi_reg_93424.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_50107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_50107_p6 = data_1493_V_read1563_phi_reg_93424.read();
    } else {
        ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_50107_p6 = data_1493_V_read1563_rewind_reg_50103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1494_V_read1564_phi_phi_fu_93441_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1494_V_read1564_phi_phi_fu_93441_p4 = ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_50121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1494_V_read1564_phi_phi_fu_93441_p4 = data_1494_V_read.read();
        } else {
            ap_phi_mux_data_1494_V_read1564_phi_phi_fu_93441_p4 = ap_phi_reg_pp0_iter0_data_1494_V_read1564_phi_reg_93437.read();
        }
    } else {
        ap_phi_mux_data_1494_V_read1564_phi_phi_fu_93441_p4 = ap_phi_reg_pp0_iter0_data_1494_V_read1564_phi_reg_93437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_50121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_50121_p6 = data_1494_V_read1564_phi_reg_93437.read();
    } else {
        ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_50121_p6 = data_1494_V_read1564_rewind_reg_50117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1495_V_read1565_phi_phi_fu_93454_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1495_V_read1565_phi_phi_fu_93454_p4 = ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_50135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1495_V_read1565_phi_phi_fu_93454_p4 = data_1495_V_read.read();
        } else {
            ap_phi_mux_data_1495_V_read1565_phi_phi_fu_93454_p4 = ap_phi_reg_pp0_iter0_data_1495_V_read1565_phi_reg_93450.read();
        }
    } else {
        ap_phi_mux_data_1495_V_read1565_phi_phi_fu_93454_p4 = ap_phi_reg_pp0_iter0_data_1495_V_read1565_phi_reg_93450.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_50135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_50135_p6 = data_1495_V_read1565_phi_reg_93450.read();
    } else {
        ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_50135_p6 = data_1495_V_read1565_rewind_reg_50131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1496_V_read1566_phi_phi_fu_93467_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1496_V_read1566_phi_phi_fu_93467_p4 = ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_50149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1496_V_read1566_phi_phi_fu_93467_p4 = data_1496_V_read.read();
        } else {
            ap_phi_mux_data_1496_V_read1566_phi_phi_fu_93467_p4 = ap_phi_reg_pp0_iter0_data_1496_V_read1566_phi_reg_93463.read();
        }
    } else {
        ap_phi_mux_data_1496_V_read1566_phi_phi_fu_93467_p4 = ap_phi_reg_pp0_iter0_data_1496_V_read1566_phi_reg_93463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_50149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_50149_p6 = data_1496_V_read1566_phi_reg_93463.read();
    } else {
        ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_50149_p6 = data_1496_V_read1566_rewind_reg_50145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1497_V_read1567_phi_phi_fu_93480_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1497_V_read1567_phi_phi_fu_93480_p4 = ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_50163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1497_V_read1567_phi_phi_fu_93480_p4 = data_1497_V_read.read();
        } else {
            ap_phi_mux_data_1497_V_read1567_phi_phi_fu_93480_p4 = ap_phi_reg_pp0_iter0_data_1497_V_read1567_phi_reg_93476.read();
        }
    } else {
        ap_phi_mux_data_1497_V_read1567_phi_phi_fu_93480_p4 = ap_phi_reg_pp0_iter0_data_1497_V_read1567_phi_reg_93476.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_50163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_50163_p6 = data_1497_V_read1567_phi_reg_93476.read();
    } else {
        ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_50163_p6 = data_1497_V_read1567_rewind_reg_50159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1498_V_read1568_phi_phi_fu_93493_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1498_V_read1568_phi_phi_fu_93493_p4 = ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_50177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1498_V_read1568_phi_phi_fu_93493_p4 = data_1498_V_read.read();
        } else {
            ap_phi_mux_data_1498_V_read1568_phi_phi_fu_93493_p4 = ap_phi_reg_pp0_iter0_data_1498_V_read1568_phi_reg_93489.read();
        }
    } else {
        ap_phi_mux_data_1498_V_read1568_phi_phi_fu_93493_p4 = ap_phi_reg_pp0_iter0_data_1498_V_read1568_phi_reg_93489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_50177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_50177_p6 = data_1498_V_read1568_phi_reg_93489.read();
    } else {
        ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_50177_p6 = data_1498_V_read1568_rewind_reg_50173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1499_V_read1569_phi_phi_fu_93506_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1499_V_read1569_phi_phi_fu_93506_p4 = ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_50191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1499_V_read1569_phi_phi_fu_93506_p4 = data_1499_V_read.read();
        } else {
            ap_phi_mux_data_1499_V_read1569_phi_phi_fu_93506_p4 = ap_phi_reg_pp0_iter0_data_1499_V_read1569_phi_reg_93502.read();
        }
    } else {
        ap_phi_mux_data_1499_V_read1569_phi_phi_fu_93506_p4 = ap_phi_reg_pp0_iter0_data_1499_V_read1569_phi_reg_93502.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_50191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_50191_p6 = data_1499_V_read1569_phi_reg_93502.read();
    } else {
        ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_50191_p6 = data_1499_V_read1569_rewind_reg_50187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_149_V_read219_phi_phi_fu_75956_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_149_V_read219_phi_phi_fu_75956_p4 = ap_phi_mux_data_149_V_read219_rewind_phi_fu_31291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_149_V_read219_phi_phi_fu_75956_p4 = data_149_V_read.read();
        } else {
            ap_phi_mux_data_149_V_read219_phi_phi_fu_75956_p4 = ap_phi_reg_pp0_iter0_data_149_V_read219_phi_reg_75952.read();
        }
    } else {
        ap_phi_mux_data_149_V_read219_phi_phi_fu_75956_p4 = ap_phi_reg_pp0_iter0_data_149_V_read219_phi_reg_75952.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_149_V_read219_rewind_phi_fu_31291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_149_V_read219_rewind_phi_fu_31291_p6 = data_149_V_read219_phi_reg_75952.read();
    } else {
        ap_phi_mux_data_149_V_read219_rewind_phi_fu_31291_p6 = data_149_V_read219_rewind_reg_31287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_14_V_read84_phi_phi_fu_74201_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_14_V_read84_phi_phi_fu_74201_p4 = ap_phi_mux_data_14_V_read84_rewind_phi_fu_29401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_14_V_read84_phi_phi_fu_74201_p4 = data_14_V_read.read();
        } else {
            ap_phi_mux_data_14_V_read84_phi_phi_fu_74201_p4 = ap_phi_reg_pp0_iter0_data_14_V_read84_phi_reg_74197.read();
        }
    } else {
        ap_phi_mux_data_14_V_read84_phi_phi_fu_74201_p4 = ap_phi_reg_pp0_iter0_data_14_V_read84_phi_reg_74197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_14_V_read84_rewind_phi_fu_29401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_14_V_read84_rewind_phi_fu_29401_p6 = data_14_V_read84_phi_reg_74197.read();
    } else {
        ap_phi_mux_data_14_V_read84_rewind_phi_fu_29401_p6 = data_14_V_read84_rewind_reg_29397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1500_V_read1570_phi_phi_fu_93519_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1500_V_read1570_phi_phi_fu_93519_p4 = ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_50205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1500_V_read1570_phi_phi_fu_93519_p4 = data_1500_V_read.read();
        } else {
            ap_phi_mux_data_1500_V_read1570_phi_phi_fu_93519_p4 = ap_phi_reg_pp0_iter0_data_1500_V_read1570_phi_reg_93515.read();
        }
    } else {
        ap_phi_mux_data_1500_V_read1570_phi_phi_fu_93519_p4 = ap_phi_reg_pp0_iter0_data_1500_V_read1570_phi_reg_93515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_50205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_50205_p6 = data_1500_V_read1570_phi_reg_93515.read();
    } else {
        ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_50205_p6 = data_1500_V_read1570_rewind_reg_50201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1501_V_read1571_phi_phi_fu_93532_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1501_V_read1571_phi_phi_fu_93532_p4 = ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_50219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1501_V_read1571_phi_phi_fu_93532_p4 = data_1501_V_read.read();
        } else {
            ap_phi_mux_data_1501_V_read1571_phi_phi_fu_93532_p4 = ap_phi_reg_pp0_iter0_data_1501_V_read1571_phi_reg_93528.read();
        }
    } else {
        ap_phi_mux_data_1501_V_read1571_phi_phi_fu_93532_p4 = ap_phi_reg_pp0_iter0_data_1501_V_read1571_phi_reg_93528.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_50219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_50219_p6 = data_1501_V_read1571_phi_reg_93528.read();
    } else {
        ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_50219_p6 = data_1501_V_read1571_rewind_reg_50215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1502_V_read1572_phi_phi_fu_93545_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1502_V_read1572_phi_phi_fu_93545_p4 = ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_50233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1502_V_read1572_phi_phi_fu_93545_p4 = data_1502_V_read.read();
        } else {
            ap_phi_mux_data_1502_V_read1572_phi_phi_fu_93545_p4 = ap_phi_reg_pp0_iter0_data_1502_V_read1572_phi_reg_93541.read();
        }
    } else {
        ap_phi_mux_data_1502_V_read1572_phi_phi_fu_93545_p4 = ap_phi_reg_pp0_iter0_data_1502_V_read1572_phi_reg_93541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_50233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_50233_p6 = data_1502_V_read1572_phi_reg_93541.read();
    } else {
        ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_50233_p6 = data_1502_V_read1572_rewind_reg_50229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1503_V_read1573_phi_phi_fu_93558_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1503_V_read1573_phi_phi_fu_93558_p4 = ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_50247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1503_V_read1573_phi_phi_fu_93558_p4 = data_1503_V_read.read();
        } else {
            ap_phi_mux_data_1503_V_read1573_phi_phi_fu_93558_p4 = ap_phi_reg_pp0_iter0_data_1503_V_read1573_phi_reg_93554.read();
        }
    } else {
        ap_phi_mux_data_1503_V_read1573_phi_phi_fu_93558_p4 = ap_phi_reg_pp0_iter0_data_1503_V_read1573_phi_reg_93554.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_50247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_50247_p6 = data_1503_V_read1573_phi_reg_93554.read();
    } else {
        ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_50247_p6 = data_1503_V_read1573_rewind_reg_50243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1504_V_read1574_phi_phi_fu_93571_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1504_V_read1574_phi_phi_fu_93571_p4 = ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_50261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1504_V_read1574_phi_phi_fu_93571_p4 = data_1504_V_read.read();
        } else {
            ap_phi_mux_data_1504_V_read1574_phi_phi_fu_93571_p4 = ap_phi_reg_pp0_iter0_data_1504_V_read1574_phi_reg_93567.read();
        }
    } else {
        ap_phi_mux_data_1504_V_read1574_phi_phi_fu_93571_p4 = ap_phi_reg_pp0_iter0_data_1504_V_read1574_phi_reg_93567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_50261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_50261_p6 = data_1504_V_read1574_phi_reg_93567.read();
    } else {
        ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_50261_p6 = data_1504_V_read1574_rewind_reg_50257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1505_V_read1575_phi_phi_fu_93584_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1505_V_read1575_phi_phi_fu_93584_p4 = ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_50275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1505_V_read1575_phi_phi_fu_93584_p4 = data_1505_V_read.read();
        } else {
            ap_phi_mux_data_1505_V_read1575_phi_phi_fu_93584_p4 = ap_phi_reg_pp0_iter0_data_1505_V_read1575_phi_reg_93580.read();
        }
    } else {
        ap_phi_mux_data_1505_V_read1575_phi_phi_fu_93584_p4 = ap_phi_reg_pp0_iter0_data_1505_V_read1575_phi_reg_93580.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_50275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_50275_p6 = data_1505_V_read1575_phi_reg_93580.read();
    } else {
        ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_50275_p6 = data_1505_V_read1575_rewind_reg_50271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1506_V_read1576_phi_phi_fu_93597_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1506_V_read1576_phi_phi_fu_93597_p4 = ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_50289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1506_V_read1576_phi_phi_fu_93597_p4 = data_1506_V_read.read();
        } else {
            ap_phi_mux_data_1506_V_read1576_phi_phi_fu_93597_p4 = ap_phi_reg_pp0_iter0_data_1506_V_read1576_phi_reg_93593.read();
        }
    } else {
        ap_phi_mux_data_1506_V_read1576_phi_phi_fu_93597_p4 = ap_phi_reg_pp0_iter0_data_1506_V_read1576_phi_reg_93593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_50289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_50289_p6 = data_1506_V_read1576_phi_reg_93593.read();
    } else {
        ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_50289_p6 = data_1506_V_read1576_rewind_reg_50285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1507_V_read1577_phi_phi_fu_93610_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1507_V_read1577_phi_phi_fu_93610_p4 = ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_50303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1507_V_read1577_phi_phi_fu_93610_p4 = data_1507_V_read.read();
        } else {
            ap_phi_mux_data_1507_V_read1577_phi_phi_fu_93610_p4 = ap_phi_reg_pp0_iter0_data_1507_V_read1577_phi_reg_93606.read();
        }
    } else {
        ap_phi_mux_data_1507_V_read1577_phi_phi_fu_93610_p4 = ap_phi_reg_pp0_iter0_data_1507_V_read1577_phi_reg_93606.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_50303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_50303_p6 = data_1507_V_read1577_phi_reg_93606.read();
    } else {
        ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_50303_p6 = data_1507_V_read1577_rewind_reg_50299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1508_V_read1578_phi_phi_fu_93623_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1508_V_read1578_phi_phi_fu_93623_p4 = ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_50317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1508_V_read1578_phi_phi_fu_93623_p4 = data_1508_V_read.read();
        } else {
            ap_phi_mux_data_1508_V_read1578_phi_phi_fu_93623_p4 = ap_phi_reg_pp0_iter0_data_1508_V_read1578_phi_reg_93619.read();
        }
    } else {
        ap_phi_mux_data_1508_V_read1578_phi_phi_fu_93623_p4 = ap_phi_reg_pp0_iter0_data_1508_V_read1578_phi_reg_93619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_50317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_50317_p6 = data_1508_V_read1578_phi_reg_93619.read();
    } else {
        ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_50317_p6 = data_1508_V_read1578_rewind_reg_50313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1509_V_read1579_phi_phi_fu_93636_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1509_V_read1579_phi_phi_fu_93636_p4 = ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_50331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1509_V_read1579_phi_phi_fu_93636_p4 = data_1509_V_read.read();
        } else {
            ap_phi_mux_data_1509_V_read1579_phi_phi_fu_93636_p4 = ap_phi_reg_pp0_iter0_data_1509_V_read1579_phi_reg_93632.read();
        }
    } else {
        ap_phi_mux_data_1509_V_read1579_phi_phi_fu_93636_p4 = ap_phi_reg_pp0_iter0_data_1509_V_read1579_phi_reg_93632.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_50331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_50331_p6 = data_1509_V_read1579_phi_reg_93632.read();
    } else {
        ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_50331_p6 = data_1509_V_read1579_rewind_reg_50327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_150_V_read220_phi_phi_fu_75969_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_150_V_read220_phi_phi_fu_75969_p4 = ap_phi_mux_data_150_V_read220_rewind_phi_fu_31305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_150_V_read220_phi_phi_fu_75969_p4 = data_150_V_read.read();
        } else {
            ap_phi_mux_data_150_V_read220_phi_phi_fu_75969_p4 = ap_phi_reg_pp0_iter0_data_150_V_read220_phi_reg_75965.read();
        }
    } else {
        ap_phi_mux_data_150_V_read220_phi_phi_fu_75969_p4 = ap_phi_reg_pp0_iter0_data_150_V_read220_phi_reg_75965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_150_V_read220_rewind_phi_fu_31305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_150_V_read220_rewind_phi_fu_31305_p6 = data_150_V_read220_phi_reg_75965.read();
    } else {
        ap_phi_mux_data_150_V_read220_rewind_phi_fu_31305_p6 = data_150_V_read220_rewind_reg_31301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1510_V_read1580_phi_phi_fu_93649_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1510_V_read1580_phi_phi_fu_93649_p4 = ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_50345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1510_V_read1580_phi_phi_fu_93649_p4 = data_1510_V_read.read();
        } else {
            ap_phi_mux_data_1510_V_read1580_phi_phi_fu_93649_p4 = ap_phi_reg_pp0_iter0_data_1510_V_read1580_phi_reg_93645.read();
        }
    } else {
        ap_phi_mux_data_1510_V_read1580_phi_phi_fu_93649_p4 = ap_phi_reg_pp0_iter0_data_1510_V_read1580_phi_reg_93645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_50345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_50345_p6 = data_1510_V_read1580_phi_reg_93645.read();
    } else {
        ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_50345_p6 = data_1510_V_read1580_rewind_reg_50341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1511_V_read1581_phi_phi_fu_93662_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1511_V_read1581_phi_phi_fu_93662_p4 = ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_50359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1511_V_read1581_phi_phi_fu_93662_p4 = data_1511_V_read.read();
        } else {
            ap_phi_mux_data_1511_V_read1581_phi_phi_fu_93662_p4 = ap_phi_reg_pp0_iter0_data_1511_V_read1581_phi_reg_93658.read();
        }
    } else {
        ap_phi_mux_data_1511_V_read1581_phi_phi_fu_93662_p4 = ap_phi_reg_pp0_iter0_data_1511_V_read1581_phi_reg_93658.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_50359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_50359_p6 = data_1511_V_read1581_phi_reg_93658.read();
    } else {
        ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_50359_p6 = data_1511_V_read1581_rewind_reg_50355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1512_V_read1582_phi_phi_fu_93675_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1512_V_read1582_phi_phi_fu_93675_p4 = ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_50373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1512_V_read1582_phi_phi_fu_93675_p4 = data_1512_V_read.read();
        } else {
            ap_phi_mux_data_1512_V_read1582_phi_phi_fu_93675_p4 = ap_phi_reg_pp0_iter0_data_1512_V_read1582_phi_reg_93671.read();
        }
    } else {
        ap_phi_mux_data_1512_V_read1582_phi_phi_fu_93675_p4 = ap_phi_reg_pp0_iter0_data_1512_V_read1582_phi_reg_93671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_50373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_50373_p6 = data_1512_V_read1582_phi_reg_93671.read();
    } else {
        ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_50373_p6 = data_1512_V_read1582_rewind_reg_50369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1513_V_read1583_phi_phi_fu_93688_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1513_V_read1583_phi_phi_fu_93688_p4 = ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_50387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1513_V_read1583_phi_phi_fu_93688_p4 = data_1513_V_read.read();
        } else {
            ap_phi_mux_data_1513_V_read1583_phi_phi_fu_93688_p4 = ap_phi_reg_pp0_iter0_data_1513_V_read1583_phi_reg_93684.read();
        }
    } else {
        ap_phi_mux_data_1513_V_read1583_phi_phi_fu_93688_p4 = ap_phi_reg_pp0_iter0_data_1513_V_read1583_phi_reg_93684.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_50387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_50387_p6 = data_1513_V_read1583_phi_reg_93684.read();
    } else {
        ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_50387_p6 = data_1513_V_read1583_rewind_reg_50383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1514_V_read1584_phi_phi_fu_93701_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1514_V_read1584_phi_phi_fu_93701_p4 = ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_50401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1514_V_read1584_phi_phi_fu_93701_p4 = data_1514_V_read.read();
        } else {
            ap_phi_mux_data_1514_V_read1584_phi_phi_fu_93701_p4 = ap_phi_reg_pp0_iter0_data_1514_V_read1584_phi_reg_93697.read();
        }
    } else {
        ap_phi_mux_data_1514_V_read1584_phi_phi_fu_93701_p4 = ap_phi_reg_pp0_iter0_data_1514_V_read1584_phi_reg_93697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_50401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_50401_p6 = data_1514_V_read1584_phi_reg_93697.read();
    } else {
        ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_50401_p6 = data_1514_V_read1584_rewind_reg_50397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1515_V_read1585_phi_phi_fu_93714_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1515_V_read1585_phi_phi_fu_93714_p4 = ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_50415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1515_V_read1585_phi_phi_fu_93714_p4 = data_1515_V_read.read();
        } else {
            ap_phi_mux_data_1515_V_read1585_phi_phi_fu_93714_p4 = ap_phi_reg_pp0_iter0_data_1515_V_read1585_phi_reg_93710.read();
        }
    } else {
        ap_phi_mux_data_1515_V_read1585_phi_phi_fu_93714_p4 = ap_phi_reg_pp0_iter0_data_1515_V_read1585_phi_reg_93710.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_50415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_50415_p6 = data_1515_V_read1585_phi_reg_93710.read();
    } else {
        ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_50415_p6 = data_1515_V_read1585_rewind_reg_50411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1516_V_read1586_phi_phi_fu_93727_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1516_V_read1586_phi_phi_fu_93727_p4 = ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_50429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1516_V_read1586_phi_phi_fu_93727_p4 = data_1516_V_read.read();
        } else {
            ap_phi_mux_data_1516_V_read1586_phi_phi_fu_93727_p4 = ap_phi_reg_pp0_iter0_data_1516_V_read1586_phi_reg_93723.read();
        }
    } else {
        ap_phi_mux_data_1516_V_read1586_phi_phi_fu_93727_p4 = ap_phi_reg_pp0_iter0_data_1516_V_read1586_phi_reg_93723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_50429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_50429_p6 = data_1516_V_read1586_phi_reg_93723.read();
    } else {
        ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_50429_p6 = data_1516_V_read1586_rewind_reg_50425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1517_V_read1587_phi_phi_fu_93740_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1517_V_read1587_phi_phi_fu_93740_p4 = ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_50443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1517_V_read1587_phi_phi_fu_93740_p4 = data_1517_V_read.read();
        } else {
            ap_phi_mux_data_1517_V_read1587_phi_phi_fu_93740_p4 = ap_phi_reg_pp0_iter0_data_1517_V_read1587_phi_reg_93736.read();
        }
    } else {
        ap_phi_mux_data_1517_V_read1587_phi_phi_fu_93740_p4 = ap_phi_reg_pp0_iter0_data_1517_V_read1587_phi_reg_93736.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_50443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_50443_p6 = data_1517_V_read1587_phi_reg_93736.read();
    } else {
        ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_50443_p6 = data_1517_V_read1587_rewind_reg_50439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1518_V_read1588_phi_phi_fu_93753_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1518_V_read1588_phi_phi_fu_93753_p4 = ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_50457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1518_V_read1588_phi_phi_fu_93753_p4 = data_1518_V_read.read();
        } else {
            ap_phi_mux_data_1518_V_read1588_phi_phi_fu_93753_p4 = ap_phi_reg_pp0_iter0_data_1518_V_read1588_phi_reg_93749.read();
        }
    } else {
        ap_phi_mux_data_1518_V_read1588_phi_phi_fu_93753_p4 = ap_phi_reg_pp0_iter0_data_1518_V_read1588_phi_reg_93749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_50457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_50457_p6 = data_1518_V_read1588_phi_reg_93749.read();
    } else {
        ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_50457_p6 = data_1518_V_read1588_rewind_reg_50453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1519_V_read1589_phi_phi_fu_93766_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1519_V_read1589_phi_phi_fu_93766_p4 = ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_50471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1519_V_read1589_phi_phi_fu_93766_p4 = data_1519_V_read.read();
        } else {
            ap_phi_mux_data_1519_V_read1589_phi_phi_fu_93766_p4 = ap_phi_reg_pp0_iter0_data_1519_V_read1589_phi_reg_93762.read();
        }
    } else {
        ap_phi_mux_data_1519_V_read1589_phi_phi_fu_93766_p4 = ap_phi_reg_pp0_iter0_data_1519_V_read1589_phi_reg_93762.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_50471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_50471_p6 = data_1519_V_read1589_phi_reg_93762.read();
    } else {
        ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_50471_p6 = data_1519_V_read1589_rewind_reg_50467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_151_V_read221_phi_phi_fu_75982_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_151_V_read221_phi_phi_fu_75982_p4 = ap_phi_mux_data_151_V_read221_rewind_phi_fu_31319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_151_V_read221_phi_phi_fu_75982_p4 = data_151_V_read.read();
        } else {
            ap_phi_mux_data_151_V_read221_phi_phi_fu_75982_p4 = ap_phi_reg_pp0_iter0_data_151_V_read221_phi_reg_75978.read();
        }
    } else {
        ap_phi_mux_data_151_V_read221_phi_phi_fu_75982_p4 = ap_phi_reg_pp0_iter0_data_151_V_read221_phi_reg_75978.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_151_V_read221_rewind_phi_fu_31319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_151_V_read221_rewind_phi_fu_31319_p6 = data_151_V_read221_phi_reg_75978.read();
    } else {
        ap_phi_mux_data_151_V_read221_rewind_phi_fu_31319_p6 = data_151_V_read221_rewind_reg_31315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1520_V_read1590_phi_phi_fu_93779_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1520_V_read1590_phi_phi_fu_93779_p4 = ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_50485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1520_V_read1590_phi_phi_fu_93779_p4 = data_1520_V_read.read();
        } else {
            ap_phi_mux_data_1520_V_read1590_phi_phi_fu_93779_p4 = ap_phi_reg_pp0_iter0_data_1520_V_read1590_phi_reg_93775.read();
        }
    } else {
        ap_phi_mux_data_1520_V_read1590_phi_phi_fu_93779_p4 = ap_phi_reg_pp0_iter0_data_1520_V_read1590_phi_reg_93775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_50485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_50485_p6 = data_1520_V_read1590_phi_reg_93775.read();
    } else {
        ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_50485_p6 = data_1520_V_read1590_rewind_reg_50481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1521_V_read1591_phi_phi_fu_93792_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1521_V_read1591_phi_phi_fu_93792_p4 = ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_50499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1521_V_read1591_phi_phi_fu_93792_p4 = data_1521_V_read.read();
        } else {
            ap_phi_mux_data_1521_V_read1591_phi_phi_fu_93792_p4 = ap_phi_reg_pp0_iter0_data_1521_V_read1591_phi_reg_93788.read();
        }
    } else {
        ap_phi_mux_data_1521_V_read1591_phi_phi_fu_93792_p4 = ap_phi_reg_pp0_iter0_data_1521_V_read1591_phi_reg_93788.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_50499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_50499_p6 = data_1521_V_read1591_phi_reg_93788.read();
    } else {
        ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_50499_p6 = data_1521_V_read1591_rewind_reg_50495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1522_V_read1592_phi_phi_fu_93805_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1522_V_read1592_phi_phi_fu_93805_p4 = ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_50513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1522_V_read1592_phi_phi_fu_93805_p4 = data_1522_V_read.read();
        } else {
            ap_phi_mux_data_1522_V_read1592_phi_phi_fu_93805_p4 = ap_phi_reg_pp0_iter0_data_1522_V_read1592_phi_reg_93801.read();
        }
    } else {
        ap_phi_mux_data_1522_V_read1592_phi_phi_fu_93805_p4 = ap_phi_reg_pp0_iter0_data_1522_V_read1592_phi_reg_93801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_50513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_50513_p6 = data_1522_V_read1592_phi_reg_93801.read();
    } else {
        ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_50513_p6 = data_1522_V_read1592_rewind_reg_50509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1523_V_read1593_phi_phi_fu_93818_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1523_V_read1593_phi_phi_fu_93818_p4 = ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_50527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1523_V_read1593_phi_phi_fu_93818_p4 = data_1523_V_read.read();
        } else {
            ap_phi_mux_data_1523_V_read1593_phi_phi_fu_93818_p4 = ap_phi_reg_pp0_iter0_data_1523_V_read1593_phi_reg_93814.read();
        }
    } else {
        ap_phi_mux_data_1523_V_read1593_phi_phi_fu_93818_p4 = ap_phi_reg_pp0_iter0_data_1523_V_read1593_phi_reg_93814.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_50527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_50527_p6 = data_1523_V_read1593_phi_reg_93814.read();
    } else {
        ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_50527_p6 = data_1523_V_read1593_rewind_reg_50523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1524_V_read1594_phi_phi_fu_93831_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1524_V_read1594_phi_phi_fu_93831_p4 = ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_50541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1524_V_read1594_phi_phi_fu_93831_p4 = data_1524_V_read.read();
        } else {
            ap_phi_mux_data_1524_V_read1594_phi_phi_fu_93831_p4 = ap_phi_reg_pp0_iter0_data_1524_V_read1594_phi_reg_93827.read();
        }
    } else {
        ap_phi_mux_data_1524_V_read1594_phi_phi_fu_93831_p4 = ap_phi_reg_pp0_iter0_data_1524_V_read1594_phi_reg_93827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_50541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_50541_p6 = data_1524_V_read1594_phi_reg_93827.read();
    } else {
        ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_50541_p6 = data_1524_V_read1594_rewind_reg_50537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1525_V_read1595_phi_phi_fu_93844_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1525_V_read1595_phi_phi_fu_93844_p4 = ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_50555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1525_V_read1595_phi_phi_fu_93844_p4 = data_1525_V_read.read();
        } else {
            ap_phi_mux_data_1525_V_read1595_phi_phi_fu_93844_p4 = ap_phi_reg_pp0_iter0_data_1525_V_read1595_phi_reg_93840.read();
        }
    } else {
        ap_phi_mux_data_1525_V_read1595_phi_phi_fu_93844_p4 = ap_phi_reg_pp0_iter0_data_1525_V_read1595_phi_reg_93840.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_50555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_50555_p6 = data_1525_V_read1595_phi_reg_93840.read();
    } else {
        ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_50555_p6 = data_1525_V_read1595_rewind_reg_50551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1526_V_read1596_phi_phi_fu_93857_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1526_V_read1596_phi_phi_fu_93857_p4 = ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_50569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1526_V_read1596_phi_phi_fu_93857_p4 = data_1526_V_read.read();
        } else {
            ap_phi_mux_data_1526_V_read1596_phi_phi_fu_93857_p4 = ap_phi_reg_pp0_iter0_data_1526_V_read1596_phi_reg_93853.read();
        }
    } else {
        ap_phi_mux_data_1526_V_read1596_phi_phi_fu_93857_p4 = ap_phi_reg_pp0_iter0_data_1526_V_read1596_phi_reg_93853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_50569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_50569_p6 = data_1526_V_read1596_phi_reg_93853.read();
    } else {
        ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_50569_p6 = data_1526_V_read1596_rewind_reg_50565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1527_V_read1597_phi_phi_fu_93870_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1527_V_read1597_phi_phi_fu_93870_p4 = ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_50583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1527_V_read1597_phi_phi_fu_93870_p4 = data_1527_V_read.read();
        } else {
            ap_phi_mux_data_1527_V_read1597_phi_phi_fu_93870_p4 = ap_phi_reg_pp0_iter0_data_1527_V_read1597_phi_reg_93866.read();
        }
    } else {
        ap_phi_mux_data_1527_V_read1597_phi_phi_fu_93870_p4 = ap_phi_reg_pp0_iter0_data_1527_V_read1597_phi_reg_93866.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_50583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_50583_p6 = data_1527_V_read1597_phi_reg_93866.read();
    } else {
        ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_50583_p6 = data_1527_V_read1597_rewind_reg_50579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1528_V_read1598_phi_phi_fu_93883_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1528_V_read1598_phi_phi_fu_93883_p4 = ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_50597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1528_V_read1598_phi_phi_fu_93883_p4 = data_1528_V_read.read();
        } else {
            ap_phi_mux_data_1528_V_read1598_phi_phi_fu_93883_p4 = ap_phi_reg_pp0_iter0_data_1528_V_read1598_phi_reg_93879.read();
        }
    } else {
        ap_phi_mux_data_1528_V_read1598_phi_phi_fu_93883_p4 = ap_phi_reg_pp0_iter0_data_1528_V_read1598_phi_reg_93879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_50597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_50597_p6 = data_1528_V_read1598_phi_reg_93879.read();
    } else {
        ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_50597_p6 = data_1528_V_read1598_rewind_reg_50593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1529_V_read1599_phi_phi_fu_93896_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1529_V_read1599_phi_phi_fu_93896_p4 = ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_50611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1529_V_read1599_phi_phi_fu_93896_p4 = data_1529_V_read.read();
        } else {
            ap_phi_mux_data_1529_V_read1599_phi_phi_fu_93896_p4 = ap_phi_reg_pp0_iter0_data_1529_V_read1599_phi_reg_93892.read();
        }
    } else {
        ap_phi_mux_data_1529_V_read1599_phi_phi_fu_93896_p4 = ap_phi_reg_pp0_iter0_data_1529_V_read1599_phi_reg_93892.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_50611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_50611_p6 = data_1529_V_read1599_phi_reg_93892.read();
    } else {
        ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_50611_p6 = data_1529_V_read1599_rewind_reg_50607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_152_V_read222_phi_phi_fu_75995_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_152_V_read222_phi_phi_fu_75995_p4 = ap_phi_mux_data_152_V_read222_rewind_phi_fu_31333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_152_V_read222_phi_phi_fu_75995_p4 = data_152_V_read.read();
        } else {
            ap_phi_mux_data_152_V_read222_phi_phi_fu_75995_p4 = ap_phi_reg_pp0_iter0_data_152_V_read222_phi_reg_75991.read();
        }
    } else {
        ap_phi_mux_data_152_V_read222_phi_phi_fu_75995_p4 = ap_phi_reg_pp0_iter0_data_152_V_read222_phi_reg_75991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_152_V_read222_rewind_phi_fu_31333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_152_V_read222_rewind_phi_fu_31333_p6 = data_152_V_read222_phi_reg_75991.read();
    } else {
        ap_phi_mux_data_152_V_read222_rewind_phi_fu_31333_p6 = data_152_V_read222_rewind_reg_31329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1530_V_read1600_phi_phi_fu_93909_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1530_V_read1600_phi_phi_fu_93909_p4 = ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_50625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1530_V_read1600_phi_phi_fu_93909_p4 = data_1530_V_read.read();
        } else {
            ap_phi_mux_data_1530_V_read1600_phi_phi_fu_93909_p4 = ap_phi_reg_pp0_iter0_data_1530_V_read1600_phi_reg_93905.read();
        }
    } else {
        ap_phi_mux_data_1530_V_read1600_phi_phi_fu_93909_p4 = ap_phi_reg_pp0_iter0_data_1530_V_read1600_phi_reg_93905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_50625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_50625_p6 = data_1530_V_read1600_phi_reg_93905.read();
    } else {
        ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_50625_p6 = data_1530_V_read1600_rewind_reg_50621.read();
    }
}

}

