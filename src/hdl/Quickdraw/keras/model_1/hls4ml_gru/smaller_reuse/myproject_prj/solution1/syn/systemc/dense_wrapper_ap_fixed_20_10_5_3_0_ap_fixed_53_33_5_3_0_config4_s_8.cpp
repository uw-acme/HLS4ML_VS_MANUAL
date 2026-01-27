#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2882_V_read2952_phi_phi_fu_111485_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2882_V_read2952_phi_phi_fu_111485_p4 = ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_69553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2882_V_read2952_phi_phi_fu_111485_p4 = data_2882_V_read.read();
        } else {
            ap_phi_mux_data_2882_V_read2952_phi_phi_fu_111485_p4 = ap_phi_reg_pp0_iter0_data_2882_V_read2952_phi_reg_111481.read();
        }
    } else {
        ap_phi_mux_data_2882_V_read2952_phi_phi_fu_111485_p4 = ap_phi_reg_pp0_iter0_data_2882_V_read2952_phi_reg_111481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_69553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_69553_p6 = data_2882_V_read2952_phi_reg_111481.read();
    } else {
        ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_69553_p6 = data_2882_V_read2952_rewind_reg_69549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2883_V_read2953_phi_phi_fu_111498_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2883_V_read2953_phi_phi_fu_111498_p4 = ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_69567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2883_V_read2953_phi_phi_fu_111498_p4 = data_2883_V_read.read();
        } else {
            ap_phi_mux_data_2883_V_read2953_phi_phi_fu_111498_p4 = ap_phi_reg_pp0_iter0_data_2883_V_read2953_phi_reg_111494.read();
        }
    } else {
        ap_phi_mux_data_2883_V_read2953_phi_phi_fu_111498_p4 = ap_phi_reg_pp0_iter0_data_2883_V_read2953_phi_reg_111494.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_69567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_69567_p6 = data_2883_V_read2953_phi_reg_111494.read();
    } else {
        ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_69567_p6 = data_2883_V_read2953_rewind_reg_69563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2884_V_read2954_phi_phi_fu_111511_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2884_V_read2954_phi_phi_fu_111511_p4 = ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_69581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2884_V_read2954_phi_phi_fu_111511_p4 = data_2884_V_read.read();
        } else {
            ap_phi_mux_data_2884_V_read2954_phi_phi_fu_111511_p4 = ap_phi_reg_pp0_iter0_data_2884_V_read2954_phi_reg_111507.read();
        }
    } else {
        ap_phi_mux_data_2884_V_read2954_phi_phi_fu_111511_p4 = ap_phi_reg_pp0_iter0_data_2884_V_read2954_phi_reg_111507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_69581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_69581_p6 = data_2884_V_read2954_phi_reg_111507.read();
    } else {
        ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_69581_p6 = data_2884_V_read2954_rewind_reg_69577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2885_V_read2955_phi_phi_fu_111524_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2885_V_read2955_phi_phi_fu_111524_p4 = ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_69595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2885_V_read2955_phi_phi_fu_111524_p4 = data_2885_V_read.read();
        } else {
            ap_phi_mux_data_2885_V_read2955_phi_phi_fu_111524_p4 = ap_phi_reg_pp0_iter0_data_2885_V_read2955_phi_reg_111520.read();
        }
    } else {
        ap_phi_mux_data_2885_V_read2955_phi_phi_fu_111524_p4 = ap_phi_reg_pp0_iter0_data_2885_V_read2955_phi_reg_111520.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_69595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_69595_p6 = data_2885_V_read2955_phi_reg_111520.read();
    } else {
        ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_69595_p6 = data_2885_V_read2955_rewind_reg_69591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2886_V_read2956_phi_phi_fu_111537_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2886_V_read2956_phi_phi_fu_111537_p4 = ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_69609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2886_V_read2956_phi_phi_fu_111537_p4 = data_2886_V_read.read();
        } else {
            ap_phi_mux_data_2886_V_read2956_phi_phi_fu_111537_p4 = ap_phi_reg_pp0_iter0_data_2886_V_read2956_phi_reg_111533.read();
        }
    } else {
        ap_phi_mux_data_2886_V_read2956_phi_phi_fu_111537_p4 = ap_phi_reg_pp0_iter0_data_2886_V_read2956_phi_reg_111533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_69609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_69609_p6 = data_2886_V_read2956_phi_reg_111533.read();
    } else {
        ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_69609_p6 = data_2886_V_read2956_rewind_reg_69605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2887_V_read2957_phi_phi_fu_111550_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2887_V_read2957_phi_phi_fu_111550_p4 = ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_69623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2887_V_read2957_phi_phi_fu_111550_p4 = data_2887_V_read.read();
        } else {
            ap_phi_mux_data_2887_V_read2957_phi_phi_fu_111550_p4 = ap_phi_reg_pp0_iter0_data_2887_V_read2957_phi_reg_111546.read();
        }
    } else {
        ap_phi_mux_data_2887_V_read2957_phi_phi_fu_111550_p4 = ap_phi_reg_pp0_iter0_data_2887_V_read2957_phi_reg_111546.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_69623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_69623_p6 = data_2887_V_read2957_phi_reg_111546.read();
    } else {
        ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_69623_p6 = data_2887_V_read2957_rewind_reg_69619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2888_V_read2958_phi_phi_fu_111563_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2888_V_read2958_phi_phi_fu_111563_p4 = ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_69637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2888_V_read2958_phi_phi_fu_111563_p4 = data_2888_V_read.read();
        } else {
            ap_phi_mux_data_2888_V_read2958_phi_phi_fu_111563_p4 = ap_phi_reg_pp0_iter0_data_2888_V_read2958_phi_reg_111559.read();
        }
    } else {
        ap_phi_mux_data_2888_V_read2958_phi_phi_fu_111563_p4 = ap_phi_reg_pp0_iter0_data_2888_V_read2958_phi_reg_111559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_69637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_69637_p6 = data_2888_V_read2958_phi_reg_111559.read();
    } else {
        ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_69637_p6 = data_2888_V_read2958_rewind_reg_69633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2889_V_read2959_phi_phi_fu_111576_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2889_V_read2959_phi_phi_fu_111576_p4 = ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_69651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2889_V_read2959_phi_phi_fu_111576_p4 = data_2889_V_read.read();
        } else {
            ap_phi_mux_data_2889_V_read2959_phi_phi_fu_111576_p4 = ap_phi_reg_pp0_iter0_data_2889_V_read2959_phi_reg_111572.read();
        }
    } else {
        ap_phi_mux_data_2889_V_read2959_phi_phi_fu_111576_p4 = ap_phi_reg_pp0_iter0_data_2889_V_read2959_phi_reg_111572.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_69651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_69651_p6 = data_2889_V_read2959_phi_reg_111572.read();
    } else {
        ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_69651_p6 = data_2889_V_read2959_rewind_reg_69647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_288_V_read358_phi_phi_fu_77763_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_288_V_read358_phi_phi_fu_77763_p4 = ap_phi_mux_data_288_V_read358_rewind_phi_fu_33237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_288_V_read358_phi_phi_fu_77763_p4 = data_288_V_read.read();
        } else {
            ap_phi_mux_data_288_V_read358_phi_phi_fu_77763_p4 = ap_phi_reg_pp0_iter0_data_288_V_read358_phi_reg_77759.read();
        }
    } else {
        ap_phi_mux_data_288_V_read358_phi_phi_fu_77763_p4 = ap_phi_reg_pp0_iter0_data_288_V_read358_phi_reg_77759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_288_V_read358_rewind_phi_fu_33237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_288_V_read358_rewind_phi_fu_33237_p6 = data_288_V_read358_phi_reg_77759.read();
    } else {
        ap_phi_mux_data_288_V_read358_rewind_phi_fu_33237_p6 = data_288_V_read358_rewind_reg_33233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2890_V_read2960_phi_phi_fu_111589_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2890_V_read2960_phi_phi_fu_111589_p4 = ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_69665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2890_V_read2960_phi_phi_fu_111589_p4 = data_2890_V_read.read();
        } else {
            ap_phi_mux_data_2890_V_read2960_phi_phi_fu_111589_p4 = ap_phi_reg_pp0_iter0_data_2890_V_read2960_phi_reg_111585.read();
        }
    } else {
        ap_phi_mux_data_2890_V_read2960_phi_phi_fu_111589_p4 = ap_phi_reg_pp0_iter0_data_2890_V_read2960_phi_reg_111585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_69665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_69665_p6 = data_2890_V_read2960_phi_reg_111585.read();
    } else {
        ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_69665_p6 = data_2890_V_read2960_rewind_reg_69661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2891_V_read2961_phi_phi_fu_111602_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2891_V_read2961_phi_phi_fu_111602_p4 = ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_69679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2891_V_read2961_phi_phi_fu_111602_p4 = data_2891_V_read.read();
        } else {
            ap_phi_mux_data_2891_V_read2961_phi_phi_fu_111602_p4 = ap_phi_reg_pp0_iter0_data_2891_V_read2961_phi_reg_111598.read();
        }
    } else {
        ap_phi_mux_data_2891_V_read2961_phi_phi_fu_111602_p4 = ap_phi_reg_pp0_iter0_data_2891_V_read2961_phi_reg_111598.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_69679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_69679_p6 = data_2891_V_read2961_phi_reg_111598.read();
    } else {
        ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_69679_p6 = data_2891_V_read2961_rewind_reg_69675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2892_V_read2962_phi_phi_fu_111615_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2892_V_read2962_phi_phi_fu_111615_p4 = ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_69693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2892_V_read2962_phi_phi_fu_111615_p4 = data_2892_V_read.read();
        } else {
            ap_phi_mux_data_2892_V_read2962_phi_phi_fu_111615_p4 = ap_phi_reg_pp0_iter0_data_2892_V_read2962_phi_reg_111611.read();
        }
    } else {
        ap_phi_mux_data_2892_V_read2962_phi_phi_fu_111615_p4 = ap_phi_reg_pp0_iter0_data_2892_V_read2962_phi_reg_111611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_69693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_69693_p6 = data_2892_V_read2962_phi_reg_111611.read();
    } else {
        ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_69693_p6 = data_2892_V_read2962_rewind_reg_69689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2893_V_read2963_phi_phi_fu_111628_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2893_V_read2963_phi_phi_fu_111628_p4 = ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_69707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2893_V_read2963_phi_phi_fu_111628_p4 = data_2893_V_read.read();
        } else {
            ap_phi_mux_data_2893_V_read2963_phi_phi_fu_111628_p4 = ap_phi_reg_pp0_iter0_data_2893_V_read2963_phi_reg_111624.read();
        }
    } else {
        ap_phi_mux_data_2893_V_read2963_phi_phi_fu_111628_p4 = ap_phi_reg_pp0_iter0_data_2893_V_read2963_phi_reg_111624.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_69707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_69707_p6 = data_2893_V_read2963_phi_reg_111624.read();
    } else {
        ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_69707_p6 = data_2893_V_read2963_rewind_reg_69703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2894_V_read2964_phi_phi_fu_111641_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2894_V_read2964_phi_phi_fu_111641_p4 = ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_69721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2894_V_read2964_phi_phi_fu_111641_p4 = data_2894_V_read.read();
        } else {
            ap_phi_mux_data_2894_V_read2964_phi_phi_fu_111641_p4 = ap_phi_reg_pp0_iter0_data_2894_V_read2964_phi_reg_111637.read();
        }
    } else {
        ap_phi_mux_data_2894_V_read2964_phi_phi_fu_111641_p4 = ap_phi_reg_pp0_iter0_data_2894_V_read2964_phi_reg_111637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_69721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_69721_p6 = data_2894_V_read2964_phi_reg_111637.read();
    } else {
        ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_69721_p6 = data_2894_V_read2964_rewind_reg_69717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2895_V_read2965_phi_phi_fu_111654_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2895_V_read2965_phi_phi_fu_111654_p4 = ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_69735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2895_V_read2965_phi_phi_fu_111654_p4 = data_2895_V_read.read();
        } else {
            ap_phi_mux_data_2895_V_read2965_phi_phi_fu_111654_p4 = ap_phi_reg_pp0_iter0_data_2895_V_read2965_phi_reg_111650.read();
        }
    } else {
        ap_phi_mux_data_2895_V_read2965_phi_phi_fu_111654_p4 = ap_phi_reg_pp0_iter0_data_2895_V_read2965_phi_reg_111650.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_69735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_69735_p6 = data_2895_V_read2965_phi_reg_111650.read();
    } else {
        ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_69735_p6 = data_2895_V_read2965_rewind_reg_69731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2896_V_read2966_phi_phi_fu_111667_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2896_V_read2966_phi_phi_fu_111667_p4 = ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_69749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2896_V_read2966_phi_phi_fu_111667_p4 = data_2896_V_read.read();
        } else {
            ap_phi_mux_data_2896_V_read2966_phi_phi_fu_111667_p4 = ap_phi_reg_pp0_iter0_data_2896_V_read2966_phi_reg_111663.read();
        }
    } else {
        ap_phi_mux_data_2896_V_read2966_phi_phi_fu_111667_p4 = ap_phi_reg_pp0_iter0_data_2896_V_read2966_phi_reg_111663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_69749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_69749_p6 = data_2896_V_read2966_phi_reg_111663.read();
    } else {
        ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_69749_p6 = data_2896_V_read2966_rewind_reg_69745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2897_V_read2967_phi_phi_fu_111680_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2897_V_read2967_phi_phi_fu_111680_p4 = ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_69763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2897_V_read2967_phi_phi_fu_111680_p4 = data_2897_V_read.read();
        } else {
            ap_phi_mux_data_2897_V_read2967_phi_phi_fu_111680_p4 = ap_phi_reg_pp0_iter0_data_2897_V_read2967_phi_reg_111676.read();
        }
    } else {
        ap_phi_mux_data_2897_V_read2967_phi_phi_fu_111680_p4 = ap_phi_reg_pp0_iter0_data_2897_V_read2967_phi_reg_111676.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_69763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_69763_p6 = data_2897_V_read2967_phi_reg_111676.read();
    } else {
        ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_69763_p6 = data_2897_V_read2967_rewind_reg_69759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2898_V_read2968_phi_phi_fu_111693_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2898_V_read2968_phi_phi_fu_111693_p4 = ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_69777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2898_V_read2968_phi_phi_fu_111693_p4 = data_2898_V_read.read();
        } else {
            ap_phi_mux_data_2898_V_read2968_phi_phi_fu_111693_p4 = ap_phi_reg_pp0_iter0_data_2898_V_read2968_phi_reg_111689.read();
        }
    } else {
        ap_phi_mux_data_2898_V_read2968_phi_phi_fu_111693_p4 = ap_phi_reg_pp0_iter0_data_2898_V_read2968_phi_reg_111689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_69777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_69777_p6 = data_2898_V_read2968_phi_reg_111689.read();
    } else {
        ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_69777_p6 = data_2898_V_read2968_rewind_reg_69773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2899_V_read2969_phi_phi_fu_111706_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2899_V_read2969_phi_phi_fu_111706_p4 = ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_69791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2899_V_read2969_phi_phi_fu_111706_p4 = data_2899_V_read.read();
        } else {
            ap_phi_mux_data_2899_V_read2969_phi_phi_fu_111706_p4 = ap_phi_reg_pp0_iter0_data_2899_V_read2969_phi_reg_111702.read();
        }
    } else {
        ap_phi_mux_data_2899_V_read2969_phi_phi_fu_111706_p4 = ap_phi_reg_pp0_iter0_data_2899_V_read2969_phi_reg_111702.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_69791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_69791_p6 = data_2899_V_read2969_phi_reg_111702.read();
    } else {
        ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_69791_p6 = data_2899_V_read2969_rewind_reg_69787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_289_V_read359_phi_phi_fu_77776_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_289_V_read359_phi_phi_fu_77776_p4 = ap_phi_mux_data_289_V_read359_rewind_phi_fu_33251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_289_V_read359_phi_phi_fu_77776_p4 = data_289_V_read.read();
        } else {
            ap_phi_mux_data_289_V_read359_phi_phi_fu_77776_p4 = ap_phi_reg_pp0_iter0_data_289_V_read359_phi_reg_77772.read();
        }
    } else {
        ap_phi_mux_data_289_V_read359_phi_phi_fu_77776_p4 = ap_phi_reg_pp0_iter0_data_289_V_read359_phi_reg_77772.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_289_V_read359_rewind_phi_fu_33251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_289_V_read359_rewind_phi_fu_33251_p6 = data_289_V_read359_phi_reg_77772.read();
    } else {
        ap_phi_mux_data_289_V_read359_rewind_phi_fu_33251_p6 = data_289_V_read359_rewind_reg_33247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_28_V_read98_phi_phi_fu_74383_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_28_V_read98_phi_phi_fu_74383_p4 = ap_phi_mux_data_28_V_read98_rewind_phi_fu_29597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_28_V_read98_phi_phi_fu_74383_p4 = data_28_V_read.read();
        } else {
            ap_phi_mux_data_28_V_read98_phi_phi_fu_74383_p4 = ap_phi_reg_pp0_iter0_data_28_V_read98_phi_reg_74379.read();
        }
    } else {
        ap_phi_mux_data_28_V_read98_phi_phi_fu_74383_p4 = ap_phi_reg_pp0_iter0_data_28_V_read98_phi_reg_74379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_28_V_read98_rewind_phi_fu_29597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_28_V_read98_rewind_phi_fu_29597_p6 = data_28_V_read98_phi_reg_74379.read();
    } else {
        ap_phi_mux_data_28_V_read98_rewind_phi_fu_29597_p6 = data_28_V_read98_rewind_reg_29593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2900_V_read2970_phi_phi_fu_111719_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2900_V_read2970_phi_phi_fu_111719_p4 = ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_69805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2900_V_read2970_phi_phi_fu_111719_p4 = data_2900_V_read.read();
        } else {
            ap_phi_mux_data_2900_V_read2970_phi_phi_fu_111719_p4 = ap_phi_reg_pp0_iter0_data_2900_V_read2970_phi_reg_111715.read();
        }
    } else {
        ap_phi_mux_data_2900_V_read2970_phi_phi_fu_111719_p4 = ap_phi_reg_pp0_iter0_data_2900_V_read2970_phi_reg_111715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_69805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_69805_p6 = data_2900_V_read2970_phi_reg_111715.read();
    } else {
        ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_69805_p6 = data_2900_V_read2970_rewind_reg_69801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2901_V_read2971_phi_phi_fu_111732_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2901_V_read2971_phi_phi_fu_111732_p4 = ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_69819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2901_V_read2971_phi_phi_fu_111732_p4 = data_2901_V_read.read();
        } else {
            ap_phi_mux_data_2901_V_read2971_phi_phi_fu_111732_p4 = ap_phi_reg_pp0_iter0_data_2901_V_read2971_phi_reg_111728.read();
        }
    } else {
        ap_phi_mux_data_2901_V_read2971_phi_phi_fu_111732_p4 = ap_phi_reg_pp0_iter0_data_2901_V_read2971_phi_reg_111728.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_69819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_69819_p6 = data_2901_V_read2971_phi_reg_111728.read();
    } else {
        ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_69819_p6 = data_2901_V_read2971_rewind_reg_69815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2902_V_read2972_phi_phi_fu_111745_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2902_V_read2972_phi_phi_fu_111745_p4 = ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_69833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2902_V_read2972_phi_phi_fu_111745_p4 = data_2902_V_read.read();
        } else {
            ap_phi_mux_data_2902_V_read2972_phi_phi_fu_111745_p4 = ap_phi_reg_pp0_iter0_data_2902_V_read2972_phi_reg_111741.read();
        }
    } else {
        ap_phi_mux_data_2902_V_read2972_phi_phi_fu_111745_p4 = ap_phi_reg_pp0_iter0_data_2902_V_read2972_phi_reg_111741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_69833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_69833_p6 = data_2902_V_read2972_phi_reg_111741.read();
    } else {
        ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_69833_p6 = data_2902_V_read2972_rewind_reg_69829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2903_V_read2973_phi_phi_fu_111758_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2903_V_read2973_phi_phi_fu_111758_p4 = ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_69847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2903_V_read2973_phi_phi_fu_111758_p4 = data_2903_V_read.read();
        } else {
            ap_phi_mux_data_2903_V_read2973_phi_phi_fu_111758_p4 = ap_phi_reg_pp0_iter0_data_2903_V_read2973_phi_reg_111754.read();
        }
    } else {
        ap_phi_mux_data_2903_V_read2973_phi_phi_fu_111758_p4 = ap_phi_reg_pp0_iter0_data_2903_V_read2973_phi_reg_111754.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_69847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_69847_p6 = data_2903_V_read2973_phi_reg_111754.read();
    } else {
        ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_69847_p6 = data_2903_V_read2973_rewind_reg_69843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2904_V_read2974_phi_phi_fu_111771_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2904_V_read2974_phi_phi_fu_111771_p4 = ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_69861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2904_V_read2974_phi_phi_fu_111771_p4 = data_2904_V_read.read();
        } else {
            ap_phi_mux_data_2904_V_read2974_phi_phi_fu_111771_p4 = ap_phi_reg_pp0_iter0_data_2904_V_read2974_phi_reg_111767.read();
        }
    } else {
        ap_phi_mux_data_2904_V_read2974_phi_phi_fu_111771_p4 = ap_phi_reg_pp0_iter0_data_2904_V_read2974_phi_reg_111767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_69861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_69861_p6 = data_2904_V_read2974_phi_reg_111767.read();
    } else {
        ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_69861_p6 = data_2904_V_read2974_rewind_reg_69857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2905_V_read2975_phi_phi_fu_111784_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2905_V_read2975_phi_phi_fu_111784_p4 = ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_69875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2905_V_read2975_phi_phi_fu_111784_p4 = data_2905_V_read.read();
        } else {
            ap_phi_mux_data_2905_V_read2975_phi_phi_fu_111784_p4 = ap_phi_reg_pp0_iter0_data_2905_V_read2975_phi_reg_111780.read();
        }
    } else {
        ap_phi_mux_data_2905_V_read2975_phi_phi_fu_111784_p4 = ap_phi_reg_pp0_iter0_data_2905_V_read2975_phi_reg_111780.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_69875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_69875_p6 = data_2905_V_read2975_phi_reg_111780.read();
    } else {
        ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_69875_p6 = data_2905_V_read2975_rewind_reg_69871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2906_V_read2976_phi_phi_fu_111797_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2906_V_read2976_phi_phi_fu_111797_p4 = ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_69889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2906_V_read2976_phi_phi_fu_111797_p4 = data_2906_V_read.read();
        } else {
            ap_phi_mux_data_2906_V_read2976_phi_phi_fu_111797_p4 = ap_phi_reg_pp0_iter0_data_2906_V_read2976_phi_reg_111793.read();
        }
    } else {
        ap_phi_mux_data_2906_V_read2976_phi_phi_fu_111797_p4 = ap_phi_reg_pp0_iter0_data_2906_V_read2976_phi_reg_111793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_69889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_69889_p6 = data_2906_V_read2976_phi_reg_111793.read();
    } else {
        ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_69889_p6 = data_2906_V_read2976_rewind_reg_69885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2907_V_read2977_phi_phi_fu_111810_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2907_V_read2977_phi_phi_fu_111810_p4 = ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_69903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2907_V_read2977_phi_phi_fu_111810_p4 = data_2907_V_read.read();
        } else {
            ap_phi_mux_data_2907_V_read2977_phi_phi_fu_111810_p4 = ap_phi_reg_pp0_iter0_data_2907_V_read2977_phi_reg_111806.read();
        }
    } else {
        ap_phi_mux_data_2907_V_read2977_phi_phi_fu_111810_p4 = ap_phi_reg_pp0_iter0_data_2907_V_read2977_phi_reg_111806.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_69903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_69903_p6 = data_2907_V_read2977_phi_reg_111806.read();
    } else {
        ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_69903_p6 = data_2907_V_read2977_rewind_reg_69899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2908_V_read2978_phi_phi_fu_111823_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2908_V_read2978_phi_phi_fu_111823_p4 = ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_69917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2908_V_read2978_phi_phi_fu_111823_p4 = data_2908_V_read.read();
        } else {
            ap_phi_mux_data_2908_V_read2978_phi_phi_fu_111823_p4 = ap_phi_reg_pp0_iter0_data_2908_V_read2978_phi_reg_111819.read();
        }
    } else {
        ap_phi_mux_data_2908_V_read2978_phi_phi_fu_111823_p4 = ap_phi_reg_pp0_iter0_data_2908_V_read2978_phi_reg_111819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_69917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_69917_p6 = data_2908_V_read2978_phi_reg_111819.read();
    } else {
        ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_69917_p6 = data_2908_V_read2978_rewind_reg_69913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2909_V_read2979_phi_phi_fu_111836_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2909_V_read2979_phi_phi_fu_111836_p4 = ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_69931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2909_V_read2979_phi_phi_fu_111836_p4 = data_2909_V_read.read();
        } else {
            ap_phi_mux_data_2909_V_read2979_phi_phi_fu_111836_p4 = ap_phi_reg_pp0_iter0_data_2909_V_read2979_phi_reg_111832.read();
        }
    } else {
        ap_phi_mux_data_2909_V_read2979_phi_phi_fu_111836_p4 = ap_phi_reg_pp0_iter0_data_2909_V_read2979_phi_reg_111832.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_69931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_69931_p6 = data_2909_V_read2979_phi_reg_111832.read();
    } else {
        ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_69931_p6 = data_2909_V_read2979_rewind_reg_69927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_290_V_read360_phi_phi_fu_77789_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_290_V_read360_phi_phi_fu_77789_p4 = ap_phi_mux_data_290_V_read360_rewind_phi_fu_33265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_290_V_read360_phi_phi_fu_77789_p4 = data_290_V_read.read();
        } else {
            ap_phi_mux_data_290_V_read360_phi_phi_fu_77789_p4 = ap_phi_reg_pp0_iter0_data_290_V_read360_phi_reg_77785.read();
        }
    } else {
        ap_phi_mux_data_290_V_read360_phi_phi_fu_77789_p4 = ap_phi_reg_pp0_iter0_data_290_V_read360_phi_reg_77785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_290_V_read360_rewind_phi_fu_33265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_290_V_read360_rewind_phi_fu_33265_p6 = data_290_V_read360_phi_reg_77785.read();
    } else {
        ap_phi_mux_data_290_V_read360_rewind_phi_fu_33265_p6 = data_290_V_read360_rewind_reg_33261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2910_V_read2980_phi_phi_fu_111849_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2910_V_read2980_phi_phi_fu_111849_p4 = ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_69945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2910_V_read2980_phi_phi_fu_111849_p4 = data_2910_V_read.read();
        } else {
            ap_phi_mux_data_2910_V_read2980_phi_phi_fu_111849_p4 = ap_phi_reg_pp0_iter0_data_2910_V_read2980_phi_reg_111845.read();
        }
    } else {
        ap_phi_mux_data_2910_V_read2980_phi_phi_fu_111849_p4 = ap_phi_reg_pp0_iter0_data_2910_V_read2980_phi_reg_111845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_69945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_69945_p6 = data_2910_V_read2980_phi_reg_111845.read();
    } else {
        ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_69945_p6 = data_2910_V_read2980_rewind_reg_69941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2911_V_read2981_phi_phi_fu_111862_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2911_V_read2981_phi_phi_fu_111862_p4 = ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_69959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2911_V_read2981_phi_phi_fu_111862_p4 = data_2911_V_read.read();
        } else {
            ap_phi_mux_data_2911_V_read2981_phi_phi_fu_111862_p4 = ap_phi_reg_pp0_iter0_data_2911_V_read2981_phi_reg_111858.read();
        }
    } else {
        ap_phi_mux_data_2911_V_read2981_phi_phi_fu_111862_p4 = ap_phi_reg_pp0_iter0_data_2911_V_read2981_phi_reg_111858.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_69959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_69959_p6 = data_2911_V_read2981_phi_reg_111858.read();
    } else {
        ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_69959_p6 = data_2911_V_read2981_rewind_reg_69955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2912_V_read2982_phi_phi_fu_111875_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2912_V_read2982_phi_phi_fu_111875_p4 = ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_69973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2912_V_read2982_phi_phi_fu_111875_p4 = data_2912_V_read.read();
        } else {
            ap_phi_mux_data_2912_V_read2982_phi_phi_fu_111875_p4 = ap_phi_reg_pp0_iter0_data_2912_V_read2982_phi_reg_111871.read();
        }
    } else {
        ap_phi_mux_data_2912_V_read2982_phi_phi_fu_111875_p4 = ap_phi_reg_pp0_iter0_data_2912_V_read2982_phi_reg_111871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_69973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_69973_p6 = data_2912_V_read2982_phi_reg_111871.read();
    } else {
        ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_69973_p6 = data_2912_V_read2982_rewind_reg_69969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2913_V_read2983_phi_phi_fu_111888_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2913_V_read2983_phi_phi_fu_111888_p4 = ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_69987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2913_V_read2983_phi_phi_fu_111888_p4 = data_2913_V_read.read();
        } else {
            ap_phi_mux_data_2913_V_read2983_phi_phi_fu_111888_p4 = ap_phi_reg_pp0_iter0_data_2913_V_read2983_phi_reg_111884.read();
        }
    } else {
        ap_phi_mux_data_2913_V_read2983_phi_phi_fu_111888_p4 = ap_phi_reg_pp0_iter0_data_2913_V_read2983_phi_reg_111884.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_69987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_69987_p6 = data_2913_V_read2983_phi_reg_111884.read();
    } else {
        ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_69987_p6 = data_2913_V_read2983_rewind_reg_69983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2914_V_read2984_phi_phi_fu_111901_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2914_V_read2984_phi_phi_fu_111901_p4 = ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_70001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2914_V_read2984_phi_phi_fu_111901_p4 = data_2914_V_read.read();
        } else {
            ap_phi_mux_data_2914_V_read2984_phi_phi_fu_111901_p4 = ap_phi_reg_pp0_iter0_data_2914_V_read2984_phi_reg_111897.read();
        }
    } else {
        ap_phi_mux_data_2914_V_read2984_phi_phi_fu_111901_p4 = ap_phi_reg_pp0_iter0_data_2914_V_read2984_phi_reg_111897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_70001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_70001_p6 = data_2914_V_read2984_phi_reg_111897.read();
    } else {
        ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_70001_p6 = data_2914_V_read2984_rewind_reg_69997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2915_V_read2985_phi_phi_fu_111914_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2915_V_read2985_phi_phi_fu_111914_p4 = ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_70015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2915_V_read2985_phi_phi_fu_111914_p4 = data_2915_V_read.read();
        } else {
            ap_phi_mux_data_2915_V_read2985_phi_phi_fu_111914_p4 = ap_phi_reg_pp0_iter0_data_2915_V_read2985_phi_reg_111910.read();
        }
    } else {
        ap_phi_mux_data_2915_V_read2985_phi_phi_fu_111914_p4 = ap_phi_reg_pp0_iter0_data_2915_V_read2985_phi_reg_111910.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_70015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_70015_p6 = data_2915_V_read2985_phi_reg_111910.read();
    } else {
        ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_70015_p6 = data_2915_V_read2985_rewind_reg_70011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2916_V_read2986_phi_phi_fu_111927_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2916_V_read2986_phi_phi_fu_111927_p4 = ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_70029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2916_V_read2986_phi_phi_fu_111927_p4 = data_2916_V_read.read();
        } else {
            ap_phi_mux_data_2916_V_read2986_phi_phi_fu_111927_p4 = ap_phi_reg_pp0_iter0_data_2916_V_read2986_phi_reg_111923.read();
        }
    } else {
        ap_phi_mux_data_2916_V_read2986_phi_phi_fu_111927_p4 = ap_phi_reg_pp0_iter0_data_2916_V_read2986_phi_reg_111923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_70029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_70029_p6 = data_2916_V_read2986_phi_reg_111923.read();
    } else {
        ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_70029_p6 = data_2916_V_read2986_rewind_reg_70025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2917_V_read2987_phi_phi_fu_111940_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2917_V_read2987_phi_phi_fu_111940_p4 = ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_70043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2917_V_read2987_phi_phi_fu_111940_p4 = data_2917_V_read.read();
        } else {
            ap_phi_mux_data_2917_V_read2987_phi_phi_fu_111940_p4 = ap_phi_reg_pp0_iter0_data_2917_V_read2987_phi_reg_111936.read();
        }
    } else {
        ap_phi_mux_data_2917_V_read2987_phi_phi_fu_111940_p4 = ap_phi_reg_pp0_iter0_data_2917_V_read2987_phi_reg_111936.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_70043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_70043_p6 = data_2917_V_read2987_phi_reg_111936.read();
    } else {
        ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_70043_p6 = data_2917_V_read2987_rewind_reg_70039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2918_V_read2988_phi_phi_fu_111953_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2918_V_read2988_phi_phi_fu_111953_p4 = ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_70057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2918_V_read2988_phi_phi_fu_111953_p4 = data_2918_V_read.read();
        } else {
            ap_phi_mux_data_2918_V_read2988_phi_phi_fu_111953_p4 = ap_phi_reg_pp0_iter0_data_2918_V_read2988_phi_reg_111949.read();
        }
    } else {
        ap_phi_mux_data_2918_V_read2988_phi_phi_fu_111953_p4 = ap_phi_reg_pp0_iter0_data_2918_V_read2988_phi_reg_111949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_70057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_70057_p6 = data_2918_V_read2988_phi_reg_111949.read();
    } else {
        ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_70057_p6 = data_2918_V_read2988_rewind_reg_70053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2919_V_read2989_phi_phi_fu_111966_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2919_V_read2989_phi_phi_fu_111966_p4 = ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_70071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2919_V_read2989_phi_phi_fu_111966_p4 = data_2919_V_read.read();
        } else {
            ap_phi_mux_data_2919_V_read2989_phi_phi_fu_111966_p4 = ap_phi_reg_pp0_iter0_data_2919_V_read2989_phi_reg_111962.read();
        }
    } else {
        ap_phi_mux_data_2919_V_read2989_phi_phi_fu_111966_p4 = ap_phi_reg_pp0_iter0_data_2919_V_read2989_phi_reg_111962.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_70071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_70071_p6 = data_2919_V_read2989_phi_reg_111962.read();
    } else {
        ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_70071_p6 = data_2919_V_read2989_rewind_reg_70067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_291_V_read361_phi_phi_fu_77802_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_291_V_read361_phi_phi_fu_77802_p4 = ap_phi_mux_data_291_V_read361_rewind_phi_fu_33279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_291_V_read361_phi_phi_fu_77802_p4 = data_291_V_read.read();
        } else {
            ap_phi_mux_data_291_V_read361_phi_phi_fu_77802_p4 = ap_phi_reg_pp0_iter0_data_291_V_read361_phi_reg_77798.read();
        }
    } else {
        ap_phi_mux_data_291_V_read361_phi_phi_fu_77802_p4 = ap_phi_reg_pp0_iter0_data_291_V_read361_phi_reg_77798.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_291_V_read361_rewind_phi_fu_33279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_291_V_read361_rewind_phi_fu_33279_p6 = data_291_V_read361_phi_reg_77798.read();
    } else {
        ap_phi_mux_data_291_V_read361_rewind_phi_fu_33279_p6 = data_291_V_read361_rewind_reg_33275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2920_V_read2990_phi_phi_fu_111979_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2920_V_read2990_phi_phi_fu_111979_p4 = ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_70085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2920_V_read2990_phi_phi_fu_111979_p4 = data_2920_V_read.read();
        } else {
            ap_phi_mux_data_2920_V_read2990_phi_phi_fu_111979_p4 = ap_phi_reg_pp0_iter0_data_2920_V_read2990_phi_reg_111975.read();
        }
    } else {
        ap_phi_mux_data_2920_V_read2990_phi_phi_fu_111979_p4 = ap_phi_reg_pp0_iter0_data_2920_V_read2990_phi_reg_111975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_70085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_70085_p6 = data_2920_V_read2990_phi_reg_111975.read();
    } else {
        ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_70085_p6 = data_2920_V_read2990_rewind_reg_70081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2921_V_read2991_phi_phi_fu_111992_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2921_V_read2991_phi_phi_fu_111992_p4 = ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_70099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2921_V_read2991_phi_phi_fu_111992_p4 = data_2921_V_read.read();
        } else {
            ap_phi_mux_data_2921_V_read2991_phi_phi_fu_111992_p4 = ap_phi_reg_pp0_iter0_data_2921_V_read2991_phi_reg_111988.read();
        }
    } else {
        ap_phi_mux_data_2921_V_read2991_phi_phi_fu_111992_p4 = ap_phi_reg_pp0_iter0_data_2921_V_read2991_phi_reg_111988.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_70099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_70099_p6 = data_2921_V_read2991_phi_reg_111988.read();
    } else {
        ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_70099_p6 = data_2921_V_read2991_rewind_reg_70095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2922_V_read2992_phi_phi_fu_112005_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2922_V_read2992_phi_phi_fu_112005_p4 = ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_70113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2922_V_read2992_phi_phi_fu_112005_p4 = data_2922_V_read.read();
        } else {
            ap_phi_mux_data_2922_V_read2992_phi_phi_fu_112005_p4 = ap_phi_reg_pp0_iter0_data_2922_V_read2992_phi_reg_112001.read();
        }
    } else {
        ap_phi_mux_data_2922_V_read2992_phi_phi_fu_112005_p4 = ap_phi_reg_pp0_iter0_data_2922_V_read2992_phi_reg_112001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_70113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_70113_p6 = data_2922_V_read2992_phi_reg_112001.read();
    } else {
        ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_70113_p6 = data_2922_V_read2992_rewind_reg_70109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2923_V_read2993_phi_phi_fu_112018_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2923_V_read2993_phi_phi_fu_112018_p4 = ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_70127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2923_V_read2993_phi_phi_fu_112018_p4 = data_2923_V_read.read();
        } else {
            ap_phi_mux_data_2923_V_read2993_phi_phi_fu_112018_p4 = ap_phi_reg_pp0_iter0_data_2923_V_read2993_phi_reg_112014.read();
        }
    } else {
        ap_phi_mux_data_2923_V_read2993_phi_phi_fu_112018_p4 = ap_phi_reg_pp0_iter0_data_2923_V_read2993_phi_reg_112014.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_70127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_70127_p6 = data_2923_V_read2993_phi_reg_112014.read();
    } else {
        ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_70127_p6 = data_2923_V_read2993_rewind_reg_70123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2924_V_read2994_phi_phi_fu_112031_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2924_V_read2994_phi_phi_fu_112031_p4 = ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_70141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2924_V_read2994_phi_phi_fu_112031_p4 = data_2924_V_read.read();
        } else {
            ap_phi_mux_data_2924_V_read2994_phi_phi_fu_112031_p4 = ap_phi_reg_pp0_iter0_data_2924_V_read2994_phi_reg_112027.read();
        }
    } else {
        ap_phi_mux_data_2924_V_read2994_phi_phi_fu_112031_p4 = ap_phi_reg_pp0_iter0_data_2924_V_read2994_phi_reg_112027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_70141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_70141_p6 = data_2924_V_read2994_phi_reg_112027.read();
    } else {
        ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_70141_p6 = data_2924_V_read2994_rewind_reg_70137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2925_V_read2995_phi_phi_fu_112044_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2925_V_read2995_phi_phi_fu_112044_p4 = ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_70155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2925_V_read2995_phi_phi_fu_112044_p4 = data_2925_V_read.read();
        } else {
            ap_phi_mux_data_2925_V_read2995_phi_phi_fu_112044_p4 = ap_phi_reg_pp0_iter0_data_2925_V_read2995_phi_reg_112040.read();
        }
    } else {
        ap_phi_mux_data_2925_V_read2995_phi_phi_fu_112044_p4 = ap_phi_reg_pp0_iter0_data_2925_V_read2995_phi_reg_112040.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_70155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_70155_p6 = data_2925_V_read2995_phi_reg_112040.read();
    } else {
        ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_70155_p6 = data_2925_V_read2995_rewind_reg_70151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2926_V_read2996_phi_phi_fu_112057_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2926_V_read2996_phi_phi_fu_112057_p4 = ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_70169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2926_V_read2996_phi_phi_fu_112057_p4 = data_2926_V_read.read();
        } else {
            ap_phi_mux_data_2926_V_read2996_phi_phi_fu_112057_p4 = ap_phi_reg_pp0_iter0_data_2926_V_read2996_phi_reg_112053.read();
        }
    } else {
        ap_phi_mux_data_2926_V_read2996_phi_phi_fu_112057_p4 = ap_phi_reg_pp0_iter0_data_2926_V_read2996_phi_reg_112053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_70169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_70169_p6 = data_2926_V_read2996_phi_reg_112053.read();
    } else {
        ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_70169_p6 = data_2926_V_read2996_rewind_reg_70165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2927_V_read2997_phi_phi_fu_112070_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2927_V_read2997_phi_phi_fu_112070_p4 = ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_70183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2927_V_read2997_phi_phi_fu_112070_p4 = data_2927_V_read.read();
        } else {
            ap_phi_mux_data_2927_V_read2997_phi_phi_fu_112070_p4 = ap_phi_reg_pp0_iter0_data_2927_V_read2997_phi_reg_112066.read();
        }
    } else {
        ap_phi_mux_data_2927_V_read2997_phi_phi_fu_112070_p4 = ap_phi_reg_pp0_iter0_data_2927_V_read2997_phi_reg_112066.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_70183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_70183_p6 = data_2927_V_read2997_phi_reg_112066.read();
    } else {
        ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_70183_p6 = data_2927_V_read2997_rewind_reg_70179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2928_V_read2998_phi_phi_fu_112083_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2928_V_read2998_phi_phi_fu_112083_p4 = ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_70197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2928_V_read2998_phi_phi_fu_112083_p4 = data_2928_V_read.read();
        } else {
            ap_phi_mux_data_2928_V_read2998_phi_phi_fu_112083_p4 = ap_phi_reg_pp0_iter0_data_2928_V_read2998_phi_reg_112079.read();
        }
    } else {
        ap_phi_mux_data_2928_V_read2998_phi_phi_fu_112083_p4 = ap_phi_reg_pp0_iter0_data_2928_V_read2998_phi_reg_112079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_70197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_70197_p6 = data_2928_V_read2998_phi_reg_112079.read();
    } else {
        ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_70197_p6 = data_2928_V_read2998_rewind_reg_70193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2929_V_read2999_phi_phi_fu_112096_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2929_V_read2999_phi_phi_fu_112096_p4 = ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_70211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2929_V_read2999_phi_phi_fu_112096_p4 = data_2929_V_read.read();
        } else {
            ap_phi_mux_data_2929_V_read2999_phi_phi_fu_112096_p4 = ap_phi_reg_pp0_iter0_data_2929_V_read2999_phi_reg_112092.read();
        }
    } else {
        ap_phi_mux_data_2929_V_read2999_phi_phi_fu_112096_p4 = ap_phi_reg_pp0_iter0_data_2929_V_read2999_phi_reg_112092.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_70211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_70211_p6 = data_2929_V_read2999_phi_reg_112092.read();
    } else {
        ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_70211_p6 = data_2929_V_read2999_rewind_reg_70207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_292_V_read362_phi_phi_fu_77815_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_292_V_read362_phi_phi_fu_77815_p4 = ap_phi_mux_data_292_V_read362_rewind_phi_fu_33293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_292_V_read362_phi_phi_fu_77815_p4 = data_292_V_read.read();
        } else {
            ap_phi_mux_data_292_V_read362_phi_phi_fu_77815_p4 = ap_phi_reg_pp0_iter0_data_292_V_read362_phi_reg_77811.read();
        }
    } else {
        ap_phi_mux_data_292_V_read362_phi_phi_fu_77815_p4 = ap_phi_reg_pp0_iter0_data_292_V_read362_phi_reg_77811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_292_V_read362_rewind_phi_fu_33293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_292_V_read362_rewind_phi_fu_33293_p6 = data_292_V_read362_phi_reg_77811.read();
    } else {
        ap_phi_mux_data_292_V_read362_rewind_phi_fu_33293_p6 = data_292_V_read362_rewind_reg_33289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2930_V_read3000_phi_phi_fu_112109_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2930_V_read3000_phi_phi_fu_112109_p4 = ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_70225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2930_V_read3000_phi_phi_fu_112109_p4 = data_2930_V_read.read();
        } else {
            ap_phi_mux_data_2930_V_read3000_phi_phi_fu_112109_p4 = ap_phi_reg_pp0_iter0_data_2930_V_read3000_phi_reg_112105.read();
        }
    } else {
        ap_phi_mux_data_2930_V_read3000_phi_phi_fu_112109_p4 = ap_phi_reg_pp0_iter0_data_2930_V_read3000_phi_reg_112105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_70225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_70225_p6 = data_2930_V_read3000_phi_reg_112105.read();
    } else {
        ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_70225_p6 = data_2930_V_read3000_rewind_reg_70221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2931_V_read3001_phi_phi_fu_112122_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2931_V_read3001_phi_phi_fu_112122_p4 = ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_70239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2931_V_read3001_phi_phi_fu_112122_p4 = data_2931_V_read.read();
        } else {
            ap_phi_mux_data_2931_V_read3001_phi_phi_fu_112122_p4 = ap_phi_reg_pp0_iter0_data_2931_V_read3001_phi_reg_112118.read();
        }
    } else {
        ap_phi_mux_data_2931_V_read3001_phi_phi_fu_112122_p4 = ap_phi_reg_pp0_iter0_data_2931_V_read3001_phi_reg_112118.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_70239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_70239_p6 = data_2931_V_read3001_phi_reg_112118.read();
    } else {
        ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_70239_p6 = data_2931_V_read3001_rewind_reg_70235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2932_V_read3002_phi_phi_fu_112135_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2932_V_read3002_phi_phi_fu_112135_p4 = ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_70253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2932_V_read3002_phi_phi_fu_112135_p4 = data_2932_V_read.read();
        } else {
            ap_phi_mux_data_2932_V_read3002_phi_phi_fu_112135_p4 = ap_phi_reg_pp0_iter0_data_2932_V_read3002_phi_reg_112131.read();
        }
    } else {
        ap_phi_mux_data_2932_V_read3002_phi_phi_fu_112135_p4 = ap_phi_reg_pp0_iter0_data_2932_V_read3002_phi_reg_112131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_70253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_70253_p6 = data_2932_V_read3002_phi_reg_112131.read();
    } else {
        ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_70253_p6 = data_2932_V_read3002_rewind_reg_70249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2933_V_read3003_phi_phi_fu_112148_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2933_V_read3003_phi_phi_fu_112148_p4 = ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_70267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2933_V_read3003_phi_phi_fu_112148_p4 = data_2933_V_read.read();
        } else {
            ap_phi_mux_data_2933_V_read3003_phi_phi_fu_112148_p4 = ap_phi_reg_pp0_iter0_data_2933_V_read3003_phi_reg_112144.read();
        }
    } else {
        ap_phi_mux_data_2933_V_read3003_phi_phi_fu_112148_p4 = ap_phi_reg_pp0_iter0_data_2933_V_read3003_phi_reg_112144.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_70267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_70267_p6 = data_2933_V_read3003_phi_reg_112144.read();
    } else {
        ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_70267_p6 = data_2933_V_read3003_rewind_reg_70263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2934_V_read3004_phi_phi_fu_112161_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2934_V_read3004_phi_phi_fu_112161_p4 = ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_70281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2934_V_read3004_phi_phi_fu_112161_p4 = data_2934_V_read.read();
        } else {
            ap_phi_mux_data_2934_V_read3004_phi_phi_fu_112161_p4 = ap_phi_reg_pp0_iter0_data_2934_V_read3004_phi_reg_112157.read();
        }
    } else {
        ap_phi_mux_data_2934_V_read3004_phi_phi_fu_112161_p4 = ap_phi_reg_pp0_iter0_data_2934_V_read3004_phi_reg_112157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_70281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_70281_p6 = data_2934_V_read3004_phi_reg_112157.read();
    } else {
        ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_70281_p6 = data_2934_V_read3004_rewind_reg_70277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2935_V_read3005_phi_phi_fu_112174_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2935_V_read3005_phi_phi_fu_112174_p4 = ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_70295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2935_V_read3005_phi_phi_fu_112174_p4 = data_2935_V_read.read();
        } else {
            ap_phi_mux_data_2935_V_read3005_phi_phi_fu_112174_p4 = ap_phi_reg_pp0_iter0_data_2935_V_read3005_phi_reg_112170.read();
        }
    } else {
        ap_phi_mux_data_2935_V_read3005_phi_phi_fu_112174_p4 = ap_phi_reg_pp0_iter0_data_2935_V_read3005_phi_reg_112170.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_70295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_70295_p6 = data_2935_V_read3005_phi_reg_112170.read();
    } else {
        ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_70295_p6 = data_2935_V_read3005_rewind_reg_70291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2936_V_read3006_phi_phi_fu_112187_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2936_V_read3006_phi_phi_fu_112187_p4 = ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_70309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2936_V_read3006_phi_phi_fu_112187_p4 = data_2936_V_read.read();
        } else {
            ap_phi_mux_data_2936_V_read3006_phi_phi_fu_112187_p4 = ap_phi_reg_pp0_iter0_data_2936_V_read3006_phi_reg_112183.read();
        }
    } else {
        ap_phi_mux_data_2936_V_read3006_phi_phi_fu_112187_p4 = ap_phi_reg_pp0_iter0_data_2936_V_read3006_phi_reg_112183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_70309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_70309_p6 = data_2936_V_read3006_phi_reg_112183.read();
    } else {
        ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_70309_p6 = data_2936_V_read3006_rewind_reg_70305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2937_V_read3007_phi_phi_fu_112200_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2937_V_read3007_phi_phi_fu_112200_p4 = ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_70323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2937_V_read3007_phi_phi_fu_112200_p4 = data_2937_V_read.read();
        } else {
            ap_phi_mux_data_2937_V_read3007_phi_phi_fu_112200_p4 = ap_phi_reg_pp0_iter0_data_2937_V_read3007_phi_reg_112196.read();
        }
    } else {
        ap_phi_mux_data_2937_V_read3007_phi_phi_fu_112200_p4 = ap_phi_reg_pp0_iter0_data_2937_V_read3007_phi_reg_112196.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_70323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_70323_p6 = data_2937_V_read3007_phi_reg_112196.read();
    } else {
        ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_70323_p6 = data_2937_V_read3007_rewind_reg_70319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2938_V_read3008_phi_phi_fu_112213_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2938_V_read3008_phi_phi_fu_112213_p4 = ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_70337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2938_V_read3008_phi_phi_fu_112213_p4 = data_2938_V_read.read();
        } else {
            ap_phi_mux_data_2938_V_read3008_phi_phi_fu_112213_p4 = ap_phi_reg_pp0_iter0_data_2938_V_read3008_phi_reg_112209.read();
        }
    } else {
        ap_phi_mux_data_2938_V_read3008_phi_phi_fu_112213_p4 = ap_phi_reg_pp0_iter0_data_2938_V_read3008_phi_reg_112209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_70337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_70337_p6 = data_2938_V_read3008_phi_reg_112209.read();
    } else {
        ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_70337_p6 = data_2938_V_read3008_rewind_reg_70333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2939_V_read3009_phi_phi_fu_112226_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2939_V_read3009_phi_phi_fu_112226_p4 = ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_70351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2939_V_read3009_phi_phi_fu_112226_p4 = data_2939_V_read.read();
        } else {
            ap_phi_mux_data_2939_V_read3009_phi_phi_fu_112226_p4 = ap_phi_reg_pp0_iter0_data_2939_V_read3009_phi_reg_112222.read();
        }
    } else {
        ap_phi_mux_data_2939_V_read3009_phi_phi_fu_112226_p4 = ap_phi_reg_pp0_iter0_data_2939_V_read3009_phi_reg_112222.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_70351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_70351_p6 = data_2939_V_read3009_phi_reg_112222.read();
    } else {
        ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_70351_p6 = data_2939_V_read3009_rewind_reg_70347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_293_V_read363_phi_phi_fu_77828_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_293_V_read363_phi_phi_fu_77828_p4 = ap_phi_mux_data_293_V_read363_rewind_phi_fu_33307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_293_V_read363_phi_phi_fu_77828_p4 = data_293_V_read.read();
        } else {
            ap_phi_mux_data_293_V_read363_phi_phi_fu_77828_p4 = ap_phi_reg_pp0_iter0_data_293_V_read363_phi_reg_77824.read();
        }
    } else {
        ap_phi_mux_data_293_V_read363_phi_phi_fu_77828_p4 = ap_phi_reg_pp0_iter0_data_293_V_read363_phi_reg_77824.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_293_V_read363_rewind_phi_fu_33307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_293_V_read363_rewind_phi_fu_33307_p6 = data_293_V_read363_phi_reg_77824.read();
    } else {
        ap_phi_mux_data_293_V_read363_rewind_phi_fu_33307_p6 = data_293_V_read363_rewind_reg_33303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2940_V_read3010_phi_phi_fu_112239_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2940_V_read3010_phi_phi_fu_112239_p4 = ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_70365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2940_V_read3010_phi_phi_fu_112239_p4 = data_2940_V_read.read();
        } else {
            ap_phi_mux_data_2940_V_read3010_phi_phi_fu_112239_p4 = ap_phi_reg_pp0_iter0_data_2940_V_read3010_phi_reg_112235.read();
        }
    } else {
        ap_phi_mux_data_2940_V_read3010_phi_phi_fu_112239_p4 = ap_phi_reg_pp0_iter0_data_2940_V_read3010_phi_reg_112235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_70365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_70365_p6 = data_2940_V_read3010_phi_reg_112235.read();
    } else {
        ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_70365_p6 = data_2940_V_read3010_rewind_reg_70361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2941_V_read3011_phi_phi_fu_112252_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2941_V_read3011_phi_phi_fu_112252_p4 = ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_70379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2941_V_read3011_phi_phi_fu_112252_p4 = data_2941_V_read.read();
        } else {
            ap_phi_mux_data_2941_V_read3011_phi_phi_fu_112252_p4 = ap_phi_reg_pp0_iter0_data_2941_V_read3011_phi_reg_112248.read();
        }
    } else {
        ap_phi_mux_data_2941_V_read3011_phi_phi_fu_112252_p4 = ap_phi_reg_pp0_iter0_data_2941_V_read3011_phi_reg_112248.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_70379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_70379_p6 = data_2941_V_read3011_phi_reg_112248.read();
    } else {
        ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_70379_p6 = data_2941_V_read3011_rewind_reg_70375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2942_V_read3012_phi_phi_fu_112265_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2942_V_read3012_phi_phi_fu_112265_p4 = ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_70393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2942_V_read3012_phi_phi_fu_112265_p4 = data_2942_V_read.read();
        } else {
            ap_phi_mux_data_2942_V_read3012_phi_phi_fu_112265_p4 = ap_phi_reg_pp0_iter0_data_2942_V_read3012_phi_reg_112261.read();
        }
    } else {
        ap_phi_mux_data_2942_V_read3012_phi_phi_fu_112265_p4 = ap_phi_reg_pp0_iter0_data_2942_V_read3012_phi_reg_112261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_70393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_70393_p6 = data_2942_V_read3012_phi_reg_112261.read();
    } else {
        ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_70393_p6 = data_2942_V_read3012_rewind_reg_70389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2943_V_read3013_phi_phi_fu_112278_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2943_V_read3013_phi_phi_fu_112278_p4 = ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_70407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2943_V_read3013_phi_phi_fu_112278_p4 = data_2943_V_read.read();
        } else {
            ap_phi_mux_data_2943_V_read3013_phi_phi_fu_112278_p4 = ap_phi_reg_pp0_iter0_data_2943_V_read3013_phi_reg_112274.read();
        }
    } else {
        ap_phi_mux_data_2943_V_read3013_phi_phi_fu_112278_p4 = ap_phi_reg_pp0_iter0_data_2943_V_read3013_phi_reg_112274.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_70407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_70407_p6 = data_2943_V_read3013_phi_reg_112274.read();
    } else {
        ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_70407_p6 = data_2943_V_read3013_rewind_reg_70403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2944_V_read3014_phi_phi_fu_112291_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2944_V_read3014_phi_phi_fu_112291_p4 = ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_70421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2944_V_read3014_phi_phi_fu_112291_p4 = data_2944_V_read.read();
        } else {
            ap_phi_mux_data_2944_V_read3014_phi_phi_fu_112291_p4 = ap_phi_reg_pp0_iter0_data_2944_V_read3014_phi_reg_112287.read();
        }
    } else {
        ap_phi_mux_data_2944_V_read3014_phi_phi_fu_112291_p4 = ap_phi_reg_pp0_iter0_data_2944_V_read3014_phi_reg_112287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_70421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_70421_p6 = data_2944_V_read3014_phi_reg_112287.read();
    } else {
        ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_70421_p6 = data_2944_V_read3014_rewind_reg_70417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2945_V_read3015_phi_phi_fu_112304_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2945_V_read3015_phi_phi_fu_112304_p4 = ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_70435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2945_V_read3015_phi_phi_fu_112304_p4 = data_2945_V_read.read();
        } else {
            ap_phi_mux_data_2945_V_read3015_phi_phi_fu_112304_p4 = ap_phi_reg_pp0_iter0_data_2945_V_read3015_phi_reg_112300.read();
        }
    } else {
        ap_phi_mux_data_2945_V_read3015_phi_phi_fu_112304_p4 = ap_phi_reg_pp0_iter0_data_2945_V_read3015_phi_reg_112300.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_70435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_70435_p6 = data_2945_V_read3015_phi_reg_112300.read();
    } else {
        ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_70435_p6 = data_2945_V_read3015_rewind_reg_70431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2946_V_read3016_phi_phi_fu_112317_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2946_V_read3016_phi_phi_fu_112317_p4 = ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_70449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2946_V_read3016_phi_phi_fu_112317_p4 = data_2946_V_read.read();
        } else {
            ap_phi_mux_data_2946_V_read3016_phi_phi_fu_112317_p4 = ap_phi_reg_pp0_iter0_data_2946_V_read3016_phi_reg_112313.read();
        }
    } else {
        ap_phi_mux_data_2946_V_read3016_phi_phi_fu_112317_p4 = ap_phi_reg_pp0_iter0_data_2946_V_read3016_phi_reg_112313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_70449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_70449_p6 = data_2946_V_read3016_phi_reg_112313.read();
    } else {
        ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_70449_p6 = data_2946_V_read3016_rewind_reg_70445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2947_V_read3017_phi_phi_fu_112330_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2947_V_read3017_phi_phi_fu_112330_p4 = ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_70463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2947_V_read3017_phi_phi_fu_112330_p4 = data_2947_V_read.read();
        } else {
            ap_phi_mux_data_2947_V_read3017_phi_phi_fu_112330_p4 = ap_phi_reg_pp0_iter0_data_2947_V_read3017_phi_reg_112326.read();
        }
    } else {
        ap_phi_mux_data_2947_V_read3017_phi_phi_fu_112330_p4 = ap_phi_reg_pp0_iter0_data_2947_V_read3017_phi_reg_112326.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_70463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_70463_p6 = data_2947_V_read3017_phi_reg_112326.read();
    } else {
        ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_70463_p6 = data_2947_V_read3017_rewind_reg_70459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2948_V_read3018_phi_phi_fu_112343_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2948_V_read3018_phi_phi_fu_112343_p4 = ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_70477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2948_V_read3018_phi_phi_fu_112343_p4 = data_2948_V_read.read();
        } else {
            ap_phi_mux_data_2948_V_read3018_phi_phi_fu_112343_p4 = ap_phi_reg_pp0_iter0_data_2948_V_read3018_phi_reg_112339.read();
        }
    } else {
        ap_phi_mux_data_2948_V_read3018_phi_phi_fu_112343_p4 = ap_phi_reg_pp0_iter0_data_2948_V_read3018_phi_reg_112339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_70477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_70477_p6 = data_2948_V_read3018_phi_reg_112339.read();
    } else {
        ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_70477_p6 = data_2948_V_read3018_rewind_reg_70473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2949_V_read3019_phi_phi_fu_112356_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2949_V_read3019_phi_phi_fu_112356_p4 = ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_70491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2949_V_read3019_phi_phi_fu_112356_p4 = data_2949_V_read.read();
        } else {
            ap_phi_mux_data_2949_V_read3019_phi_phi_fu_112356_p4 = ap_phi_reg_pp0_iter0_data_2949_V_read3019_phi_reg_112352.read();
        }
    } else {
        ap_phi_mux_data_2949_V_read3019_phi_phi_fu_112356_p4 = ap_phi_reg_pp0_iter0_data_2949_V_read3019_phi_reg_112352.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_70491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_70491_p6 = data_2949_V_read3019_phi_reg_112352.read();
    } else {
        ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_70491_p6 = data_2949_V_read3019_rewind_reg_70487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_294_V_read364_phi_phi_fu_77841_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_294_V_read364_phi_phi_fu_77841_p4 = ap_phi_mux_data_294_V_read364_rewind_phi_fu_33321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_294_V_read364_phi_phi_fu_77841_p4 = data_294_V_read.read();
        } else {
            ap_phi_mux_data_294_V_read364_phi_phi_fu_77841_p4 = ap_phi_reg_pp0_iter0_data_294_V_read364_phi_reg_77837.read();
        }
    } else {
        ap_phi_mux_data_294_V_read364_phi_phi_fu_77841_p4 = ap_phi_reg_pp0_iter0_data_294_V_read364_phi_reg_77837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_294_V_read364_rewind_phi_fu_33321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_294_V_read364_rewind_phi_fu_33321_p6 = data_294_V_read364_phi_reg_77837.read();
    } else {
        ap_phi_mux_data_294_V_read364_rewind_phi_fu_33321_p6 = data_294_V_read364_rewind_reg_33317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2950_V_read3020_phi_phi_fu_112369_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2950_V_read3020_phi_phi_fu_112369_p4 = ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_70505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2950_V_read3020_phi_phi_fu_112369_p4 = data_2950_V_read.read();
        } else {
            ap_phi_mux_data_2950_V_read3020_phi_phi_fu_112369_p4 = ap_phi_reg_pp0_iter0_data_2950_V_read3020_phi_reg_112365.read();
        }
    } else {
        ap_phi_mux_data_2950_V_read3020_phi_phi_fu_112369_p4 = ap_phi_reg_pp0_iter0_data_2950_V_read3020_phi_reg_112365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_70505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_70505_p6 = data_2950_V_read3020_phi_reg_112365.read();
    } else {
        ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_70505_p6 = data_2950_V_read3020_rewind_reg_70501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2951_V_read3021_phi_phi_fu_112382_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2951_V_read3021_phi_phi_fu_112382_p4 = ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_70519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2951_V_read3021_phi_phi_fu_112382_p4 = data_2951_V_read.read();
        } else {
            ap_phi_mux_data_2951_V_read3021_phi_phi_fu_112382_p4 = ap_phi_reg_pp0_iter0_data_2951_V_read3021_phi_reg_112378.read();
        }
    } else {
        ap_phi_mux_data_2951_V_read3021_phi_phi_fu_112382_p4 = ap_phi_reg_pp0_iter0_data_2951_V_read3021_phi_reg_112378.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_70519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_70519_p6 = data_2951_V_read3021_phi_reg_112378.read();
    } else {
        ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_70519_p6 = data_2951_V_read3021_rewind_reg_70515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2952_V_read3022_phi_phi_fu_112395_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2952_V_read3022_phi_phi_fu_112395_p4 = ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_70533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2952_V_read3022_phi_phi_fu_112395_p4 = data_2952_V_read.read();
        } else {
            ap_phi_mux_data_2952_V_read3022_phi_phi_fu_112395_p4 = ap_phi_reg_pp0_iter0_data_2952_V_read3022_phi_reg_112391.read();
        }
    } else {
        ap_phi_mux_data_2952_V_read3022_phi_phi_fu_112395_p4 = ap_phi_reg_pp0_iter0_data_2952_V_read3022_phi_reg_112391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_70533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_70533_p6 = data_2952_V_read3022_phi_reg_112391.read();
    } else {
        ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_70533_p6 = data_2952_V_read3022_rewind_reg_70529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2953_V_read3023_phi_phi_fu_112408_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2953_V_read3023_phi_phi_fu_112408_p4 = ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_70547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2953_V_read3023_phi_phi_fu_112408_p4 = data_2953_V_read.read();
        } else {
            ap_phi_mux_data_2953_V_read3023_phi_phi_fu_112408_p4 = ap_phi_reg_pp0_iter0_data_2953_V_read3023_phi_reg_112404.read();
        }
    } else {
        ap_phi_mux_data_2953_V_read3023_phi_phi_fu_112408_p4 = ap_phi_reg_pp0_iter0_data_2953_V_read3023_phi_reg_112404.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_70547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_70547_p6 = data_2953_V_read3023_phi_reg_112404.read();
    } else {
        ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_70547_p6 = data_2953_V_read3023_rewind_reg_70543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2954_V_read3024_phi_phi_fu_112421_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2954_V_read3024_phi_phi_fu_112421_p4 = ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_70561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2954_V_read3024_phi_phi_fu_112421_p4 = data_2954_V_read.read();
        } else {
            ap_phi_mux_data_2954_V_read3024_phi_phi_fu_112421_p4 = ap_phi_reg_pp0_iter0_data_2954_V_read3024_phi_reg_112417.read();
        }
    } else {
        ap_phi_mux_data_2954_V_read3024_phi_phi_fu_112421_p4 = ap_phi_reg_pp0_iter0_data_2954_V_read3024_phi_reg_112417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_70561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_70561_p6 = data_2954_V_read3024_phi_reg_112417.read();
    } else {
        ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_70561_p6 = data_2954_V_read3024_rewind_reg_70557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2955_V_read3025_phi_phi_fu_112434_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2955_V_read3025_phi_phi_fu_112434_p4 = ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_70575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2955_V_read3025_phi_phi_fu_112434_p4 = data_2955_V_read.read();
        } else {
            ap_phi_mux_data_2955_V_read3025_phi_phi_fu_112434_p4 = ap_phi_reg_pp0_iter0_data_2955_V_read3025_phi_reg_112430.read();
        }
    } else {
        ap_phi_mux_data_2955_V_read3025_phi_phi_fu_112434_p4 = ap_phi_reg_pp0_iter0_data_2955_V_read3025_phi_reg_112430.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_70575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_70575_p6 = data_2955_V_read3025_phi_reg_112430.read();
    } else {
        ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_70575_p6 = data_2955_V_read3025_rewind_reg_70571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2956_V_read3026_phi_phi_fu_112447_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2956_V_read3026_phi_phi_fu_112447_p4 = ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_70589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2956_V_read3026_phi_phi_fu_112447_p4 = data_2956_V_read.read();
        } else {
            ap_phi_mux_data_2956_V_read3026_phi_phi_fu_112447_p4 = ap_phi_reg_pp0_iter0_data_2956_V_read3026_phi_reg_112443.read();
        }
    } else {
        ap_phi_mux_data_2956_V_read3026_phi_phi_fu_112447_p4 = ap_phi_reg_pp0_iter0_data_2956_V_read3026_phi_reg_112443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_70589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_70589_p6 = data_2956_V_read3026_phi_reg_112443.read();
    } else {
        ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_70589_p6 = data_2956_V_read3026_rewind_reg_70585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2957_V_read3027_phi_phi_fu_112460_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2957_V_read3027_phi_phi_fu_112460_p4 = ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_70603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2957_V_read3027_phi_phi_fu_112460_p4 = data_2957_V_read.read();
        } else {
            ap_phi_mux_data_2957_V_read3027_phi_phi_fu_112460_p4 = ap_phi_reg_pp0_iter0_data_2957_V_read3027_phi_reg_112456.read();
        }
    } else {
        ap_phi_mux_data_2957_V_read3027_phi_phi_fu_112460_p4 = ap_phi_reg_pp0_iter0_data_2957_V_read3027_phi_reg_112456.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_70603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_70603_p6 = data_2957_V_read3027_phi_reg_112456.read();
    } else {
        ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_70603_p6 = data_2957_V_read3027_rewind_reg_70599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2958_V_read3028_phi_phi_fu_112473_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2958_V_read3028_phi_phi_fu_112473_p4 = ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_70617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2958_V_read3028_phi_phi_fu_112473_p4 = data_2958_V_read.read();
        } else {
            ap_phi_mux_data_2958_V_read3028_phi_phi_fu_112473_p4 = ap_phi_reg_pp0_iter0_data_2958_V_read3028_phi_reg_112469.read();
        }
    } else {
        ap_phi_mux_data_2958_V_read3028_phi_phi_fu_112473_p4 = ap_phi_reg_pp0_iter0_data_2958_V_read3028_phi_reg_112469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_70617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_70617_p6 = data_2958_V_read3028_phi_reg_112469.read();
    } else {
        ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_70617_p6 = data_2958_V_read3028_rewind_reg_70613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2959_V_read3029_phi_phi_fu_112486_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2959_V_read3029_phi_phi_fu_112486_p4 = ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_70631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2959_V_read3029_phi_phi_fu_112486_p4 = data_2959_V_read.read();
        } else {
            ap_phi_mux_data_2959_V_read3029_phi_phi_fu_112486_p4 = ap_phi_reg_pp0_iter0_data_2959_V_read3029_phi_reg_112482.read();
        }
    } else {
        ap_phi_mux_data_2959_V_read3029_phi_phi_fu_112486_p4 = ap_phi_reg_pp0_iter0_data_2959_V_read3029_phi_reg_112482.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_70631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_70631_p6 = data_2959_V_read3029_phi_reg_112482.read();
    } else {
        ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_70631_p6 = data_2959_V_read3029_rewind_reg_70627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_295_V_read365_phi_phi_fu_77854_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_295_V_read365_phi_phi_fu_77854_p4 = ap_phi_mux_data_295_V_read365_rewind_phi_fu_33335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_295_V_read365_phi_phi_fu_77854_p4 = data_295_V_read.read();
        } else {
            ap_phi_mux_data_295_V_read365_phi_phi_fu_77854_p4 = ap_phi_reg_pp0_iter0_data_295_V_read365_phi_reg_77850.read();
        }
    } else {
        ap_phi_mux_data_295_V_read365_phi_phi_fu_77854_p4 = ap_phi_reg_pp0_iter0_data_295_V_read365_phi_reg_77850.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_295_V_read365_rewind_phi_fu_33335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_295_V_read365_rewind_phi_fu_33335_p6 = data_295_V_read365_phi_reg_77850.read();
    } else {
        ap_phi_mux_data_295_V_read365_rewind_phi_fu_33335_p6 = data_295_V_read365_rewind_reg_33331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2960_V_read3030_phi_phi_fu_112499_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2960_V_read3030_phi_phi_fu_112499_p4 = ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_70645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2960_V_read3030_phi_phi_fu_112499_p4 = data_2960_V_read.read();
        } else {
            ap_phi_mux_data_2960_V_read3030_phi_phi_fu_112499_p4 = ap_phi_reg_pp0_iter0_data_2960_V_read3030_phi_reg_112495.read();
        }
    } else {
        ap_phi_mux_data_2960_V_read3030_phi_phi_fu_112499_p4 = ap_phi_reg_pp0_iter0_data_2960_V_read3030_phi_reg_112495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_70645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_70645_p6 = data_2960_V_read3030_phi_reg_112495.read();
    } else {
        ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_70645_p6 = data_2960_V_read3030_rewind_reg_70641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2961_V_read3031_phi_phi_fu_112512_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2961_V_read3031_phi_phi_fu_112512_p4 = ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_70659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2961_V_read3031_phi_phi_fu_112512_p4 = data_2961_V_read.read();
        } else {
            ap_phi_mux_data_2961_V_read3031_phi_phi_fu_112512_p4 = ap_phi_reg_pp0_iter0_data_2961_V_read3031_phi_reg_112508.read();
        }
    } else {
        ap_phi_mux_data_2961_V_read3031_phi_phi_fu_112512_p4 = ap_phi_reg_pp0_iter0_data_2961_V_read3031_phi_reg_112508.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_70659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_70659_p6 = data_2961_V_read3031_phi_reg_112508.read();
    } else {
        ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_70659_p6 = data_2961_V_read3031_rewind_reg_70655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2962_V_read3032_phi_phi_fu_112525_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2962_V_read3032_phi_phi_fu_112525_p4 = ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_70673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2962_V_read3032_phi_phi_fu_112525_p4 = data_2962_V_read.read();
        } else {
            ap_phi_mux_data_2962_V_read3032_phi_phi_fu_112525_p4 = ap_phi_reg_pp0_iter0_data_2962_V_read3032_phi_reg_112521.read();
        }
    } else {
        ap_phi_mux_data_2962_V_read3032_phi_phi_fu_112525_p4 = ap_phi_reg_pp0_iter0_data_2962_V_read3032_phi_reg_112521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_70673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_70673_p6 = data_2962_V_read3032_phi_reg_112521.read();
    } else {
        ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_70673_p6 = data_2962_V_read3032_rewind_reg_70669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2963_V_read3033_phi_phi_fu_112538_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2963_V_read3033_phi_phi_fu_112538_p4 = ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_70687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2963_V_read3033_phi_phi_fu_112538_p4 = data_2963_V_read.read();
        } else {
            ap_phi_mux_data_2963_V_read3033_phi_phi_fu_112538_p4 = ap_phi_reg_pp0_iter0_data_2963_V_read3033_phi_reg_112534.read();
        }
    } else {
        ap_phi_mux_data_2963_V_read3033_phi_phi_fu_112538_p4 = ap_phi_reg_pp0_iter0_data_2963_V_read3033_phi_reg_112534.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_70687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_70687_p6 = data_2963_V_read3033_phi_reg_112534.read();
    } else {
        ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_70687_p6 = data_2963_V_read3033_rewind_reg_70683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2964_V_read3034_phi_phi_fu_112551_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2964_V_read3034_phi_phi_fu_112551_p4 = ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_70701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2964_V_read3034_phi_phi_fu_112551_p4 = data_2964_V_read.read();
        } else {
            ap_phi_mux_data_2964_V_read3034_phi_phi_fu_112551_p4 = ap_phi_reg_pp0_iter0_data_2964_V_read3034_phi_reg_112547.read();
        }
    } else {
        ap_phi_mux_data_2964_V_read3034_phi_phi_fu_112551_p4 = ap_phi_reg_pp0_iter0_data_2964_V_read3034_phi_reg_112547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_70701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_70701_p6 = data_2964_V_read3034_phi_reg_112547.read();
    } else {
        ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_70701_p6 = data_2964_V_read3034_rewind_reg_70697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2965_V_read3035_phi_phi_fu_112564_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2965_V_read3035_phi_phi_fu_112564_p4 = ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_70715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2965_V_read3035_phi_phi_fu_112564_p4 = data_2965_V_read.read();
        } else {
            ap_phi_mux_data_2965_V_read3035_phi_phi_fu_112564_p4 = ap_phi_reg_pp0_iter0_data_2965_V_read3035_phi_reg_112560.read();
        }
    } else {
        ap_phi_mux_data_2965_V_read3035_phi_phi_fu_112564_p4 = ap_phi_reg_pp0_iter0_data_2965_V_read3035_phi_reg_112560.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_70715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_70715_p6 = data_2965_V_read3035_phi_reg_112560.read();
    } else {
        ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_70715_p6 = data_2965_V_read3035_rewind_reg_70711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2966_V_read3036_phi_phi_fu_112577_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2966_V_read3036_phi_phi_fu_112577_p4 = ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_70729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2966_V_read3036_phi_phi_fu_112577_p4 = data_2966_V_read.read();
        } else {
            ap_phi_mux_data_2966_V_read3036_phi_phi_fu_112577_p4 = ap_phi_reg_pp0_iter0_data_2966_V_read3036_phi_reg_112573.read();
        }
    } else {
        ap_phi_mux_data_2966_V_read3036_phi_phi_fu_112577_p4 = ap_phi_reg_pp0_iter0_data_2966_V_read3036_phi_reg_112573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_70729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_70729_p6 = data_2966_V_read3036_phi_reg_112573.read();
    } else {
        ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_70729_p6 = data_2966_V_read3036_rewind_reg_70725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2967_V_read3037_phi_phi_fu_112590_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2967_V_read3037_phi_phi_fu_112590_p4 = ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_70743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2967_V_read3037_phi_phi_fu_112590_p4 = data_2967_V_read.read();
        } else {
            ap_phi_mux_data_2967_V_read3037_phi_phi_fu_112590_p4 = ap_phi_reg_pp0_iter0_data_2967_V_read3037_phi_reg_112586.read();
        }
    } else {
        ap_phi_mux_data_2967_V_read3037_phi_phi_fu_112590_p4 = ap_phi_reg_pp0_iter0_data_2967_V_read3037_phi_reg_112586.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_70743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_70743_p6 = data_2967_V_read3037_phi_reg_112586.read();
    } else {
        ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_70743_p6 = data_2967_V_read3037_rewind_reg_70739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2968_V_read3038_phi_phi_fu_112603_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2968_V_read3038_phi_phi_fu_112603_p4 = ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_70757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2968_V_read3038_phi_phi_fu_112603_p4 = data_2968_V_read.read();
        } else {
            ap_phi_mux_data_2968_V_read3038_phi_phi_fu_112603_p4 = ap_phi_reg_pp0_iter0_data_2968_V_read3038_phi_reg_112599.read();
        }
    } else {
        ap_phi_mux_data_2968_V_read3038_phi_phi_fu_112603_p4 = ap_phi_reg_pp0_iter0_data_2968_V_read3038_phi_reg_112599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_70757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_70757_p6 = data_2968_V_read3038_phi_reg_112599.read();
    } else {
        ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_70757_p6 = data_2968_V_read3038_rewind_reg_70753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2969_V_read3039_phi_phi_fu_112616_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2969_V_read3039_phi_phi_fu_112616_p4 = ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_70771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2969_V_read3039_phi_phi_fu_112616_p4 = data_2969_V_read.read();
        } else {
            ap_phi_mux_data_2969_V_read3039_phi_phi_fu_112616_p4 = ap_phi_reg_pp0_iter0_data_2969_V_read3039_phi_reg_112612.read();
        }
    } else {
        ap_phi_mux_data_2969_V_read3039_phi_phi_fu_112616_p4 = ap_phi_reg_pp0_iter0_data_2969_V_read3039_phi_reg_112612.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_70771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_70771_p6 = data_2969_V_read3039_phi_reg_112612.read();
    } else {
        ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_70771_p6 = data_2969_V_read3039_rewind_reg_70767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_296_V_read366_phi_phi_fu_77867_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_296_V_read366_phi_phi_fu_77867_p4 = ap_phi_mux_data_296_V_read366_rewind_phi_fu_33349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_296_V_read366_phi_phi_fu_77867_p4 = data_296_V_read.read();
        } else {
            ap_phi_mux_data_296_V_read366_phi_phi_fu_77867_p4 = ap_phi_reg_pp0_iter0_data_296_V_read366_phi_reg_77863.read();
        }
    } else {
        ap_phi_mux_data_296_V_read366_phi_phi_fu_77867_p4 = ap_phi_reg_pp0_iter0_data_296_V_read366_phi_reg_77863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_296_V_read366_rewind_phi_fu_33349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_296_V_read366_rewind_phi_fu_33349_p6 = data_296_V_read366_phi_reg_77863.read();
    } else {
        ap_phi_mux_data_296_V_read366_rewind_phi_fu_33349_p6 = data_296_V_read366_rewind_reg_33345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2970_V_read3040_phi_phi_fu_112629_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2970_V_read3040_phi_phi_fu_112629_p4 = ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_70785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2970_V_read3040_phi_phi_fu_112629_p4 = data_2970_V_read.read();
        } else {
            ap_phi_mux_data_2970_V_read3040_phi_phi_fu_112629_p4 = ap_phi_reg_pp0_iter0_data_2970_V_read3040_phi_reg_112625.read();
        }
    } else {
        ap_phi_mux_data_2970_V_read3040_phi_phi_fu_112629_p4 = ap_phi_reg_pp0_iter0_data_2970_V_read3040_phi_reg_112625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_70785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_70785_p6 = data_2970_V_read3040_phi_reg_112625.read();
    } else {
        ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_70785_p6 = data_2970_V_read3040_rewind_reg_70781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2971_V_read3041_phi_phi_fu_112642_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2971_V_read3041_phi_phi_fu_112642_p4 = ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_70799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2971_V_read3041_phi_phi_fu_112642_p4 = data_2971_V_read.read();
        } else {
            ap_phi_mux_data_2971_V_read3041_phi_phi_fu_112642_p4 = ap_phi_reg_pp0_iter0_data_2971_V_read3041_phi_reg_112638.read();
        }
    } else {
        ap_phi_mux_data_2971_V_read3041_phi_phi_fu_112642_p4 = ap_phi_reg_pp0_iter0_data_2971_V_read3041_phi_reg_112638.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_70799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_70799_p6 = data_2971_V_read3041_phi_reg_112638.read();
    } else {
        ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_70799_p6 = data_2971_V_read3041_rewind_reg_70795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2972_V_read3042_phi_phi_fu_112655_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2972_V_read3042_phi_phi_fu_112655_p4 = ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_70813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2972_V_read3042_phi_phi_fu_112655_p4 = data_2972_V_read.read();
        } else {
            ap_phi_mux_data_2972_V_read3042_phi_phi_fu_112655_p4 = ap_phi_reg_pp0_iter0_data_2972_V_read3042_phi_reg_112651.read();
        }
    } else {
        ap_phi_mux_data_2972_V_read3042_phi_phi_fu_112655_p4 = ap_phi_reg_pp0_iter0_data_2972_V_read3042_phi_reg_112651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_70813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_70813_p6 = data_2972_V_read3042_phi_reg_112651.read();
    } else {
        ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_70813_p6 = data_2972_V_read3042_rewind_reg_70809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2973_V_read3043_phi_phi_fu_112668_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2973_V_read3043_phi_phi_fu_112668_p4 = ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_70827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2973_V_read3043_phi_phi_fu_112668_p4 = data_2973_V_read.read();
        } else {
            ap_phi_mux_data_2973_V_read3043_phi_phi_fu_112668_p4 = ap_phi_reg_pp0_iter0_data_2973_V_read3043_phi_reg_112664.read();
        }
    } else {
        ap_phi_mux_data_2973_V_read3043_phi_phi_fu_112668_p4 = ap_phi_reg_pp0_iter0_data_2973_V_read3043_phi_reg_112664.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_70827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_70827_p6 = data_2973_V_read3043_phi_reg_112664.read();
    } else {
        ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_70827_p6 = data_2973_V_read3043_rewind_reg_70823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2974_V_read3044_phi_phi_fu_112681_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2974_V_read3044_phi_phi_fu_112681_p4 = ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_70841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2974_V_read3044_phi_phi_fu_112681_p4 = data_2974_V_read.read();
        } else {
            ap_phi_mux_data_2974_V_read3044_phi_phi_fu_112681_p4 = ap_phi_reg_pp0_iter0_data_2974_V_read3044_phi_reg_112677.read();
        }
    } else {
        ap_phi_mux_data_2974_V_read3044_phi_phi_fu_112681_p4 = ap_phi_reg_pp0_iter0_data_2974_V_read3044_phi_reg_112677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_70841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_70841_p6 = data_2974_V_read3044_phi_reg_112677.read();
    } else {
        ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_70841_p6 = data_2974_V_read3044_rewind_reg_70837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2975_V_read3045_phi_phi_fu_112694_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2975_V_read3045_phi_phi_fu_112694_p4 = ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_70855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2975_V_read3045_phi_phi_fu_112694_p4 = data_2975_V_read.read();
        } else {
            ap_phi_mux_data_2975_V_read3045_phi_phi_fu_112694_p4 = ap_phi_reg_pp0_iter0_data_2975_V_read3045_phi_reg_112690.read();
        }
    } else {
        ap_phi_mux_data_2975_V_read3045_phi_phi_fu_112694_p4 = ap_phi_reg_pp0_iter0_data_2975_V_read3045_phi_reg_112690.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_70855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_70855_p6 = data_2975_V_read3045_phi_reg_112690.read();
    } else {
        ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_70855_p6 = data_2975_V_read3045_rewind_reg_70851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2976_V_read3046_phi_phi_fu_112707_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2976_V_read3046_phi_phi_fu_112707_p4 = ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_70869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2976_V_read3046_phi_phi_fu_112707_p4 = data_2976_V_read.read();
        } else {
            ap_phi_mux_data_2976_V_read3046_phi_phi_fu_112707_p4 = ap_phi_reg_pp0_iter0_data_2976_V_read3046_phi_reg_112703.read();
        }
    } else {
        ap_phi_mux_data_2976_V_read3046_phi_phi_fu_112707_p4 = ap_phi_reg_pp0_iter0_data_2976_V_read3046_phi_reg_112703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_70869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_70869_p6 = data_2976_V_read3046_phi_reg_112703.read();
    } else {
        ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_70869_p6 = data_2976_V_read3046_rewind_reg_70865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2977_V_read3047_phi_phi_fu_112720_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2977_V_read3047_phi_phi_fu_112720_p4 = ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_70883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2977_V_read3047_phi_phi_fu_112720_p4 = data_2977_V_read.read();
        } else {
            ap_phi_mux_data_2977_V_read3047_phi_phi_fu_112720_p4 = ap_phi_reg_pp0_iter0_data_2977_V_read3047_phi_reg_112716.read();
        }
    } else {
        ap_phi_mux_data_2977_V_read3047_phi_phi_fu_112720_p4 = ap_phi_reg_pp0_iter0_data_2977_V_read3047_phi_reg_112716.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_70883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_70883_p6 = data_2977_V_read3047_phi_reg_112716.read();
    } else {
        ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_70883_p6 = data_2977_V_read3047_rewind_reg_70879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2978_V_read3048_phi_phi_fu_112733_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2978_V_read3048_phi_phi_fu_112733_p4 = ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_70897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2978_V_read3048_phi_phi_fu_112733_p4 = data_2978_V_read.read();
        } else {
            ap_phi_mux_data_2978_V_read3048_phi_phi_fu_112733_p4 = ap_phi_reg_pp0_iter0_data_2978_V_read3048_phi_reg_112729.read();
        }
    } else {
        ap_phi_mux_data_2978_V_read3048_phi_phi_fu_112733_p4 = ap_phi_reg_pp0_iter0_data_2978_V_read3048_phi_reg_112729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_70897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_70897_p6 = data_2978_V_read3048_phi_reg_112729.read();
    } else {
        ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_70897_p6 = data_2978_V_read3048_rewind_reg_70893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2979_V_read3049_phi_phi_fu_112746_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2979_V_read3049_phi_phi_fu_112746_p4 = ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_70911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2979_V_read3049_phi_phi_fu_112746_p4 = data_2979_V_read.read();
        } else {
            ap_phi_mux_data_2979_V_read3049_phi_phi_fu_112746_p4 = ap_phi_reg_pp0_iter0_data_2979_V_read3049_phi_reg_112742.read();
        }
    } else {
        ap_phi_mux_data_2979_V_read3049_phi_phi_fu_112746_p4 = ap_phi_reg_pp0_iter0_data_2979_V_read3049_phi_reg_112742.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_70911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_70911_p6 = data_2979_V_read3049_phi_reg_112742.read();
    } else {
        ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_70911_p6 = data_2979_V_read3049_rewind_reg_70907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_297_V_read367_phi_phi_fu_77880_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_297_V_read367_phi_phi_fu_77880_p4 = ap_phi_mux_data_297_V_read367_rewind_phi_fu_33363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_297_V_read367_phi_phi_fu_77880_p4 = data_297_V_read.read();
        } else {
            ap_phi_mux_data_297_V_read367_phi_phi_fu_77880_p4 = ap_phi_reg_pp0_iter0_data_297_V_read367_phi_reg_77876.read();
        }
    } else {
        ap_phi_mux_data_297_V_read367_phi_phi_fu_77880_p4 = ap_phi_reg_pp0_iter0_data_297_V_read367_phi_reg_77876.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_297_V_read367_rewind_phi_fu_33363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_297_V_read367_rewind_phi_fu_33363_p6 = data_297_V_read367_phi_reg_77876.read();
    } else {
        ap_phi_mux_data_297_V_read367_rewind_phi_fu_33363_p6 = data_297_V_read367_rewind_reg_33359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2980_V_read3050_phi_phi_fu_112759_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2980_V_read3050_phi_phi_fu_112759_p4 = ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_70925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2980_V_read3050_phi_phi_fu_112759_p4 = data_2980_V_read.read();
        } else {
            ap_phi_mux_data_2980_V_read3050_phi_phi_fu_112759_p4 = ap_phi_reg_pp0_iter0_data_2980_V_read3050_phi_reg_112755.read();
        }
    } else {
        ap_phi_mux_data_2980_V_read3050_phi_phi_fu_112759_p4 = ap_phi_reg_pp0_iter0_data_2980_V_read3050_phi_reg_112755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_70925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_70925_p6 = data_2980_V_read3050_phi_reg_112755.read();
    } else {
        ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_70925_p6 = data_2980_V_read3050_rewind_reg_70921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2981_V_read3051_phi_phi_fu_112772_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2981_V_read3051_phi_phi_fu_112772_p4 = ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_70939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2981_V_read3051_phi_phi_fu_112772_p4 = data_2981_V_read.read();
        } else {
            ap_phi_mux_data_2981_V_read3051_phi_phi_fu_112772_p4 = ap_phi_reg_pp0_iter0_data_2981_V_read3051_phi_reg_112768.read();
        }
    } else {
        ap_phi_mux_data_2981_V_read3051_phi_phi_fu_112772_p4 = ap_phi_reg_pp0_iter0_data_2981_V_read3051_phi_reg_112768.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_70939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_70939_p6 = data_2981_V_read3051_phi_reg_112768.read();
    } else {
        ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_70939_p6 = data_2981_V_read3051_rewind_reg_70935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2982_V_read3052_phi_phi_fu_112785_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2982_V_read3052_phi_phi_fu_112785_p4 = ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_70953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2982_V_read3052_phi_phi_fu_112785_p4 = data_2982_V_read.read();
        } else {
            ap_phi_mux_data_2982_V_read3052_phi_phi_fu_112785_p4 = ap_phi_reg_pp0_iter0_data_2982_V_read3052_phi_reg_112781.read();
        }
    } else {
        ap_phi_mux_data_2982_V_read3052_phi_phi_fu_112785_p4 = ap_phi_reg_pp0_iter0_data_2982_V_read3052_phi_reg_112781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_70953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_70953_p6 = data_2982_V_read3052_phi_reg_112781.read();
    } else {
        ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_70953_p6 = data_2982_V_read3052_rewind_reg_70949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2983_V_read3053_phi_phi_fu_112798_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2983_V_read3053_phi_phi_fu_112798_p4 = ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_70967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2983_V_read3053_phi_phi_fu_112798_p4 = data_2983_V_read.read();
        } else {
            ap_phi_mux_data_2983_V_read3053_phi_phi_fu_112798_p4 = ap_phi_reg_pp0_iter0_data_2983_V_read3053_phi_reg_112794.read();
        }
    } else {
        ap_phi_mux_data_2983_V_read3053_phi_phi_fu_112798_p4 = ap_phi_reg_pp0_iter0_data_2983_V_read3053_phi_reg_112794.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_70967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_70967_p6 = data_2983_V_read3053_phi_reg_112794.read();
    } else {
        ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_70967_p6 = data_2983_V_read3053_rewind_reg_70963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2984_V_read3054_phi_phi_fu_112811_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2984_V_read3054_phi_phi_fu_112811_p4 = ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_70981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2984_V_read3054_phi_phi_fu_112811_p4 = data_2984_V_read.read();
        } else {
            ap_phi_mux_data_2984_V_read3054_phi_phi_fu_112811_p4 = ap_phi_reg_pp0_iter0_data_2984_V_read3054_phi_reg_112807.read();
        }
    } else {
        ap_phi_mux_data_2984_V_read3054_phi_phi_fu_112811_p4 = ap_phi_reg_pp0_iter0_data_2984_V_read3054_phi_reg_112807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_70981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_70981_p6 = data_2984_V_read3054_phi_reg_112807.read();
    } else {
        ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_70981_p6 = data_2984_V_read3054_rewind_reg_70977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2985_V_read3055_phi_phi_fu_112824_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2985_V_read3055_phi_phi_fu_112824_p4 = ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_70995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2985_V_read3055_phi_phi_fu_112824_p4 = data_2985_V_read.read();
        } else {
            ap_phi_mux_data_2985_V_read3055_phi_phi_fu_112824_p4 = ap_phi_reg_pp0_iter0_data_2985_V_read3055_phi_reg_112820.read();
        }
    } else {
        ap_phi_mux_data_2985_V_read3055_phi_phi_fu_112824_p4 = ap_phi_reg_pp0_iter0_data_2985_V_read3055_phi_reg_112820.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_70995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_70995_p6 = data_2985_V_read3055_phi_reg_112820.read();
    } else {
        ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_70995_p6 = data_2985_V_read3055_rewind_reg_70991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2986_V_read3056_phi_phi_fu_112837_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2986_V_read3056_phi_phi_fu_112837_p4 = ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_71009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2986_V_read3056_phi_phi_fu_112837_p4 = data_2986_V_read.read();
        } else {
            ap_phi_mux_data_2986_V_read3056_phi_phi_fu_112837_p4 = ap_phi_reg_pp0_iter0_data_2986_V_read3056_phi_reg_112833.read();
        }
    } else {
        ap_phi_mux_data_2986_V_read3056_phi_phi_fu_112837_p4 = ap_phi_reg_pp0_iter0_data_2986_V_read3056_phi_reg_112833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_71009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_71009_p6 = data_2986_V_read3056_phi_reg_112833.read();
    } else {
        ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_71009_p6 = data_2986_V_read3056_rewind_reg_71005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2987_V_read3057_phi_phi_fu_112850_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2987_V_read3057_phi_phi_fu_112850_p4 = ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_71023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2987_V_read3057_phi_phi_fu_112850_p4 = data_2987_V_read.read();
        } else {
            ap_phi_mux_data_2987_V_read3057_phi_phi_fu_112850_p4 = ap_phi_reg_pp0_iter0_data_2987_V_read3057_phi_reg_112846.read();
        }
    } else {
        ap_phi_mux_data_2987_V_read3057_phi_phi_fu_112850_p4 = ap_phi_reg_pp0_iter0_data_2987_V_read3057_phi_reg_112846.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_71023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_71023_p6 = data_2987_V_read3057_phi_reg_112846.read();
    } else {
        ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_71023_p6 = data_2987_V_read3057_rewind_reg_71019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2988_V_read3058_phi_phi_fu_112863_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2988_V_read3058_phi_phi_fu_112863_p4 = ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_71037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2988_V_read3058_phi_phi_fu_112863_p4 = data_2988_V_read.read();
        } else {
            ap_phi_mux_data_2988_V_read3058_phi_phi_fu_112863_p4 = ap_phi_reg_pp0_iter0_data_2988_V_read3058_phi_reg_112859.read();
        }
    } else {
        ap_phi_mux_data_2988_V_read3058_phi_phi_fu_112863_p4 = ap_phi_reg_pp0_iter0_data_2988_V_read3058_phi_reg_112859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_71037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_71037_p6 = data_2988_V_read3058_phi_reg_112859.read();
    } else {
        ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_71037_p6 = data_2988_V_read3058_rewind_reg_71033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2989_V_read3059_phi_phi_fu_112876_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2989_V_read3059_phi_phi_fu_112876_p4 = ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_71051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2989_V_read3059_phi_phi_fu_112876_p4 = data_2989_V_read.read();
        } else {
            ap_phi_mux_data_2989_V_read3059_phi_phi_fu_112876_p4 = ap_phi_reg_pp0_iter0_data_2989_V_read3059_phi_reg_112872.read();
        }
    } else {
        ap_phi_mux_data_2989_V_read3059_phi_phi_fu_112876_p4 = ap_phi_reg_pp0_iter0_data_2989_V_read3059_phi_reg_112872.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_71051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_71051_p6 = data_2989_V_read3059_phi_reg_112872.read();
    } else {
        ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_71051_p6 = data_2989_V_read3059_rewind_reg_71047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_298_V_read368_phi_phi_fu_77893_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_298_V_read368_phi_phi_fu_77893_p4 = ap_phi_mux_data_298_V_read368_rewind_phi_fu_33377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_298_V_read368_phi_phi_fu_77893_p4 = data_298_V_read.read();
        } else {
            ap_phi_mux_data_298_V_read368_phi_phi_fu_77893_p4 = ap_phi_reg_pp0_iter0_data_298_V_read368_phi_reg_77889.read();
        }
    } else {
        ap_phi_mux_data_298_V_read368_phi_phi_fu_77893_p4 = ap_phi_reg_pp0_iter0_data_298_V_read368_phi_reg_77889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_298_V_read368_rewind_phi_fu_33377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_298_V_read368_rewind_phi_fu_33377_p6 = data_298_V_read368_phi_reg_77889.read();
    } else {
        ap_phi_mux_data_298_V_read368_rewind_phi_fu_33377_p6 = data_298_V_read368_rewind_reg_33373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2990_V_read3060_phi_phi_fu_112889_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2990_V_read3060_phi_phi_fu_112889_p4 = ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_71065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2990_V_read3060_phi_phi_fu_112889_p4 = data_2990_V_read.read();
        } else {
            ap_phi_mux_data_2990_V_read3060_phi_phi_fu_112889_p4 = ap_phi_reg_pp0_iter0_data_2990_V_read3060_phi_reg_112885.read();
        }
    } else {
        ap_phi_mux_data_2990_V_read3060_phi_phi_fu_112889_p4 = ap_phi_reg_pp0_iter0_data_2990_V_read3060_phi_reg_112885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_71065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_71065_p6 = data_2990_V_read3060_phi_reg_112885.read();
    } else {
        ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_71065_p6 = data_2990_V_read3060_rewind_reg_71061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2991_V_read3061_phi_phi_fu_112902_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2991_V_read3061_phi_phi_fu_112902_p4 = ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_71079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2991_V_read3061_phi_phi_fu_112902_p4 = data_2991_V_read.read();
        } else {
            ap_phi_mux_data_2991_V_read3061_phi_phi_fu_112902_p4 = ap_phi_reg_pp0_iter0_data_2991_V_read3061_phi_reg_112898.read();
        }
    } else {
        ap_phi_mux_data_2991_V_read3061_phi_phi_fu_112902_p4 = ap_phi_reg_pp0_iter0_data_2991_V_read3061_phi_reg_112898.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_71079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_71079_p6 = data_2991_V_read3061_phi_reg_112898.read();
    } else {
        ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_71079_p6 = data_2991_V_read3061_rewind_reg_71075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2992_V_read3062_phi_phi_fu_112915_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2992_V_read3062_phi_phi_fu_112915_p4 = ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_71093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2992_V_read3062_phi_phi_fu_112915_p4 = data_2992_V_read.read();
        } else {
            ap_phi_mux_data_2992_V_read3062_phi_phi_fu_112915_p4 = ap_phi_reg_pp0_iter0_data_2992_V_read3062_phi_reg_112911.read();
        }
    } else {
        ap_phi_mux_data_2992_V_read3062_phi_phi_fu_112915_p4 = ap_phi_reg_pp0_iter0_data_2992_V_read3062_phi_reg_112911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_71093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_71093_p6 = data_2992_V_read3062_phi_reg_112911.read();
    } else {
        ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_71093_p6 = data_2992_V_read3062_rewind_reg_71089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2993_V_read3063_phi_phi_fu_112928_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2993_V_read3063_phi_phi_fu_112928_p4 = ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_71107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2993_V_read3063_phi_phi_fu_112928_p4 = data_2993_V_read.read();
        } else {
            ap_phi_mux_data_2993_V_read3063_phi_phi_fu_112928_p4 = ap_phi_reg_pp0_iter0_data_2993_V_read3063_phi_reg_112924.read();
        }
    } else {
        ap_phi_mux_data_2993_V_read3063_phi_phi_fu_112928_p4 = ap_phi_reg_pp0_iter0_data_2993_V_read3063_phi_reg_112924.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_71107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_71107_p6 = data_2993_V_read3063_phi_reg_112924.read();
    } else {
        ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_71107_p6 = data_2993_V_read3063_rewind_reg_71103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2994_V_read3064_phi_phi_fu_112941_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2994_V_read3064_phi_phi_fu_112941_p4 = ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_71121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2994_V_read3064_phi_phi_fu_112941_p4 = data_2994_V_read.read();
        } else {
            ap_phi_mux_data_2994_V_read3064_phi_phi_fu_112941_p4 = ap_phi_reg_pp0_iter0_data_2994_V_read3064_phi_reg_112937.read();
        }
    } else {
        ap_phi_mux_data_2994_V_read3064_phi_phi_fu_112941_p4 = ap_phi_reg_pp0_iter0_data_2994_V_read3064_phi_reg_112937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_71121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_71121_p6 = data_2994_V_read3064_phi_reg_112937.read();
    } else {
        ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_71121_p6 = data_2994_V_read3064_rewind_reg_71117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2995_V_read3065_phi_phi_fu_112954_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2995_V_read3065_phi_phi_fu_112954_p4 = ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_71135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2995_V_read3065_phi_phi_fu_112954_p4 = data_2995_V_read.read();
        } else {
            ap_phi_mux_data_2995_V_read3065_phi_phi_fu_112954_p4 = ap_phi_reg_pp0_iter0_data_2995_V_read3065_phi_reg_112950.read();
        }
    } else {
        ap_phi_mux_data_2995_V_read3065_phi_phi_fu_112954_p4 = ap_phi_reg_pp0_iter0_data_2995_V_read3065_phi_reg_112950.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_71135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_71135_p6 = data_2995_V_read3065_phi_reg_112950.read();
    } else {
        ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_71135_p6 = data_2995_V_read3065_rewind_reg_71131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2996_V_read3066_phi_phi_fu_112967_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2996_V_read3066_phi_phi_fu_112967_p4 = ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_71149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2996_V_read3066_phi_phi_fu_112967_p4 = data_2996_V_read.read();
        } else {
            ap_phi_mux_data_2996_V_read3066_phi_phi_fu_112967_p4 = ap_phi_reg_pp0_iter0_data_2996_V_read3066_phi_reg_112963.read();
        }
    } else {
        ap_phi_mux_data_2996_V_read3066_phi_phi_fu_112967_p4 = ap_phi_reg_pp0_iter0_data_2996_V_read3066_phi_reg_112963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_71149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_71149_p6 = data_2996_V_read3066_phi_reg_112963.read();
    } else {
        ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_71149_p6 = data_2996_V_read3066_rewind_reg_71145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2997_V_read3067_phi_phi_fu_112980_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2997_V_read3067_phi_phi_fu_112980_p4 = ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_71163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2997_V_read3067_phi_phi_fu_112980_p4 = data_2997_V_read.read();
        } else {
            ap_phi_mux_data_2997_V_read3067_phi_phi_fu_112980_p4 = ap_phi_reg_pp0_iter0_data_2997_V_read3067_phi_reg_112976.read();
        }
    } else {
        ap_phi_mux_data_2997_V_read3067_phi_phi_fu_112980_p4 = ap_phi_reg_pp0_iter0_data_2997_V_read3067_phi_reg_112976.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_71163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_71163_p6 = data_2997_V_read3067_phi_reg_112976.read();
    } else {
        ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_71163_p6 = data_2997_V_read3067_rewind_reg_71159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2998_V_read3068_phi_phi_fu_112993_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2998_V_read3068_phi_phi_fu_112993_p4 = ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_71177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2998_V_read3068_phi_phi_fu_112993_p4 = data_2998_V_read.read();
        } else {
            ap_phi_mux_data_2998_V_read3068_phi_phi_fu_112993_p4 = ap_phi_reg_pp0_iter0_data_2998_V_read3068_phi_reg_112989.read();
        }
    } else {
        ap_phi_mux_data_2998_V_read3068_phi_phi_fu_112993_p4 = ap_phi_reg_pp0_iter0_data_2998_V_read3068_phi_reg_112989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_71177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_71177_p6 = data_2998_V_read3068_phi_reg_112989.read();
    } else {
        ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_71177_p6 = data_2998_V_read3068_rewind_reg_71173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2999_V_read3069_phi_phi_fu_113006_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2999_V_read3069_phi_phi_fu_113006_p4 = ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_71191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2999_V_read3069_phi_phi_fu_113006_p4 = data_2999_V_read.read();
        } else {
            ap_phi_mux_data_2999_V_read3069_phi_phi_fu_113006_p4 = ap_phi_reg_pp0_iter0_data_2999_V_read3069_phi_reg_113002.read();
        }
    } else {
        ap_phi_mux_data_2999_V_read3069_phi_phi_fu_113006_p4 = ap_phi_reg_pp0_iter0_data_2999_V_read3069_phi_reg_113002.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_71191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_71191_p6 = data_2999_V_read3069_phi_reg_113002.read();
    } else {
        ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_71191_p6 = data_2999_V_read3069_rewind_reg_71187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_299_V_read369_phi_phi_fu_77906_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_299_V_read369_phi_phi_fu_77906_p4 = ap_phi_mux_data_299_V_read369_rewind_phi_fu_33391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_299_V_read369_phi_phi_fu_77906_p4 = data_299_V_read.read();
        } else {
            ap_phi_mux_data_299_V_read369_phi_phi_fu_77906_p4 = ap_phi_reg_pp0_iter0_data_299_V_read369_phi_reg_77902.read();
        }
    } else {
        ap_phi_mux_data_299_V_read369_phi_phi_fu_77906_p4 = ap_phi_reg_pp0_iter0_data_299_V_read369_phi_reg_77902.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_299_V_read369_rewind_phi_fu_33391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_299_V_read369_rewind_phi_fu_33391_p6 = data_299_V_read369_phi_reg_77902.read();
    } else {
        ap_phi_mux_data_299_V_read369_rewind_phi_fu_33391_p6 = data_299_V_read369_rewind_reg_33387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_29_V_read99_phi_phi_fu_74396_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_29_V_read99_phi_phi_fu_74396_p4 = ap_phi_mux_data_29_V_read99_rewind_phi_fu_29611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_29_V_read99_phi_phi_fu_74396_p4 = data_29_V_read.read();
        } else {
            ap_phi_mux_data_29_V_read99_phi_phi_fu_74396_p4 = ap_phi_reg_pp0_iter0_data_29_V_read99_phi_reg_74392.read();
        }
    } else {
        ap_phi_mux_data_29_V_read99_phi_phi_fu_74396_p4 = ap_phi_reg_pp0_iter0_data_29_V_read99_phi_reg_74392.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_29_V_read99_rewind_phi_fu_29611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_29_V_read99_rewind_phi_fu_29611_p6 = data_29_V_read99_phi_reg_74392.read();
    } else {
        ap_phi_mux_data_29_V_read99_rewind_phi_fu_29611_p6 = data_29_V_read99_rewind_reg_29607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2_V_read72_phi_phi_fu_74045_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2_V_read72_phi_phi_fu_74045_p4 = ap_phi_mux_data_2_V_read72_rewind_phi_fu_29233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2_V_read72_phi_phi_fu_74045_p4 = data_2_V_read.read();
        } else {
            ap_phi_mux_data_2_V_read72_phi_phi_fu_74045_p4 = ap_phi_reg_pp0_iter0_data_2_V_read72_phi_reg_74041.read();
        }
    } else {
        ap_phi_mux_data_2_V_read72_phi_phi_fu_74045_p4 = ap_phi_reg_pp0_iter0_data_2_V_read72_phi_reg_74041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2_V_read72_rewind_phi_fu_29233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2_V_read72_rewind_phi_fu_29233_p6 = data_2_V_read72_phi_reg_74041.read();
    } else {
        ap_phi_mux_data_2_V_read72_rewind_phi_fu_29233_p6 = data_2_V_read72_rewind_reg_29229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3000_V_read3070_phi_phi_fu_113019_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3000_V_read3070_phi_phi_fu_113019_p4 = ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_71205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3000_V_read3070_phi_phi_fu_113019_p4 = data_3000_V_read.read();
        } else {
            ap_phi_mux_data_3000_V_read3070_phi_phi_fu_113019_p4 = ap_phi_reg_pp0_iter0_data_3000_V_read3070_phi_reg_113015.read();
        }
    } else {
        ap_phi_mux_data_3000_V_read3070_phi_phi_fu_113019_p4 = ap_phi_reg_pp0_iter0_data_3000_V_read3070_phi_reg_113015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_71205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_71205_p6 = data_3000_V_read3070_phi_reg_113015.read();
    } else {
        ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_71205_p6 = data_3000_V_read3070_rewind_reg_71201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3001_V_read3071_phi_phi_fu_113032_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3001_V_read3071_phi_phi_fu_113032_p4 = ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_71219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3001_V_read3071_phi_phi_fu_113032_p4 = data_3001_V_read.read();
        } else {
            ap_phi_mux_data_3001_V_read3071_phi_phi_fu_113032_p4 = ap_phi_reg_pp0_iter0_data_3001_V_read3071_phi_reg_113028.read();
        }
    } else {
        ap_phi_mux_data_3001_V_read3071_phi_phi_fu_113032_p4 = ap_phi_reg_pp0_iter0_data_3001_V_read3071_phi_reg_113028.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_71219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_71219_p6 = data_3001_V_read3071_phi_reg_113028.read();
    } else {
        ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_71219_p6 = data_3001_V_read3071_rewind_reg_71215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3002_V_read3072_phi_phi_fu_113045_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3002_V_read3072_phi_phi_fu_113045_p4 = ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_71233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3002_V_read3072_phi_phi_fu_113045_p4 = data_3002_V_read.read();
        } else {
            ap_phi_mux_data_3002_V_read3072_phi_phi_fu_113045_p4 = ap_phi_reg_pp0_iter0_data_3002_V_read3072_phi_reg_113041.read();
        }
    } else {
        ap_phi_mux_data_3002_V_read3072_phi_phi_fu_113045_p4 = ap_phi_reg_pp0_iter0_data_3002_V_read3072_phi_reg_113041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_71233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_71233_p6 = data_3002_V_read3072_phi_reg_113041.read();
    } else {
        ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_71233_p6 = data_3002_V_read3072_rewind_reg_71229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3003_V_read3073_phi_phi_fu_113058_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3003_V_read3073_phi_phi_fu_113058_p4 = ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_71247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3003_V_read3073_phi_phi_fu_113058_p4 = data_3003_V_read.read();
        } else {
            ap_phi_mux_data_3003_V_read3073_phi_phi_fu_113058_p4 = ap_phi_reg_pp0_iter0_data_3003_V_read3073_phi_reg_113054.read();
        }
    } else {
        ap_phi_mux_data_3003_V_read3073_phi_phi_fu_113058_p4 = ap_phi_reg_pp0_iter0_data_3003_V_read3073_phi_reg_113054.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_71247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_71247_p6 = data_3003_V_read3073_phi_reg_113054.read();
    } else {
        ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_71247_p6 = data_3003_V_read3073_rewind_reg_71243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3004_V_read3074_phi_phi_fu_113071_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3004_V_read3074_phi_phi_fu_113071_p4 = ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_71261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3004_V_read3074_phi_phi_fu_113071_p4 = data_3004_V_read.read();
        } else {
            ap_phi_mux_data_3004_V_read3074_phi_phi_fu_113071_p4 = ap_phi_reg_pp0_iter0_data_3004_V_read3074_phi_reg_113067.read();
        }
    } else {
        ap_phi_mux_data_3004_V_read3074_phi_phi_fu_113071_p4 = ap_phi_reg_pp0_iter0_data_3004_V_read3074_phi_reg_113067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_71261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_71261_p6 = data_3004_V_read3074_phi_reg_113067.read();
    } else {
        ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_71261_p6 = data_3004_V_read3074_rewind_reg_71257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3005_V_read3075_phi_phi_fu_113084_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3005_V_read3075_phi_phi_fu_113084_p4 = ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_71275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3005_V_read3075_phi_phi_fu_113084_p4 = data_3005_V_read.read();
        } else {
            ap_phi_mux_data_3005_V_read3075_phi_phi_fu_113084_p4 = ap_phi_reg_pp0_iter0_data_3005_V_read3075_phi_reg_113080.read();
        }
    } else {
        ap_phi_mux_data_3005_V_read3075_phi_phi_fu_113084_p4 = ap_phi_reg_pp0_iter0_data_3005_V_read3075_phi_reg_113080.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_71275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_71275_p6 = data_3005_V_read3075_phi_reg_113080.read();
    } else {
        ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_71275_p6 = data_3005_V_read3075_rewind_reg_71271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3006_V_read3076_phi_phi_fu_113097_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3006_V_read3076_phi_phi_fu_113097_p4 = ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_71289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3006_V_read3076_phi_phi_fu_113097_p4 = data_3006_V_read.read();
        } else {
            ap_phi_mux_data_3006_V_read3076_phi_phi_fu_113097_p4 = ap_phi_reg_pp0_iter0_data_3006_V_read3076_phi_reg_113093.read();
        }
    } else {
        ap_phi_mux_data_3006_V_read3076_phi_phi_fu_113097_p4 = ap_phi_reg_pp0_iter0_data_3006_V_read3076_phi_reg_113093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_71289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_71289_p6 = data_3006_V_read3076_phi_reg_113093.read();
    } else {
        ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_71289_p6 = data_3006_V_read3076_rewind_reg_71285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3007_V_read3077_phi_phi_fu_113110_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3007_V_read3077_phi_phi_fu_113110_p4 = ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_71303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3007_V_read3077_phi_phi_fu_113110_p4 = data_3007_V_read.read();
        } else {
            ap_phi_mux_data_3007_V_read3077_phi_phi_fu_113110_p4 = ap_phi_reg_pp0_iter0_data_3007_V_read3077_phi_reg_113106.read();
        }
    } else {
        ap_phi_mux_data_3007_V_read3077_phi_phi_fu_113110_p4 = ap_phi_reg_pp0_iter0_data_3007_V_read3077_phi_reg_113106.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_71303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_71303_p6 = data_3007_V_read3077_phi_reg_113106.read();
    } else {
        ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_71303_p6 = data_3007_V_read3077_rewind_reg_71299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3008_V_read3078_phi_phi_fu_113123_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3008_V_read3078_phi_phi_fu_113123_p4 = ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_71317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3008_V_read3078_phi_phi_fu_113123_p4 = data_3008_V_read.read();
        } else {
            ap_phi_mux_data_3008_V_read3078_phi_phi_fu_113123_p4 = ap_phi_reg_pp0_iter0_data_3008_V_read3078_phi_reg_113119.read();
        }
    } else {
        ap_phi_mux_data_3008_V_read3078_phi_phi_fu_113123_p4 = ap_phi_reg_pp0_iter0_data_3008_V_read3078_phi_reg_113119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_71317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_71317_p6 = data_3008_V_read3078_phi_reg_113119.read();
    } else {
        ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_71317_p6 = data_3008_V_read3078_rewind_reg_71313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3009_V_read3079_phi_phi_fu_113136_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3009_V_read3079_phi_phi_fu_113136_p4 = ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_71331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3009_V_read3079_phi_phi_fu_113136_p4 = data_3009_V_read.read();
        } else {
            ap_phi_mux_data_3009_V_read3079_phi_phi_fu_113136_p4 = ap_phi_reg_pp0_iter0_data_3009_V_read3079_phi_reg_113132.read();
        }
    } else {
        ap_phi_mux_data_3009_V_read3079_phi_phi_fu_113136_p4 = ap_phi_reg_pp0_iter0_data_3009_V_read3079_phi_reg_113132.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_71331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_71331_p6 = data_3009_V_read3079_phi_reg_113132.read();
    } else {
        ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_71331_p6 = data_3009_V_read3079_rewind_reg_71327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_300_V_read370_phi_phi_fu_77919_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_300_V_read370_phi_phi_fu_77919_p4 = ap_phi_mux_data_300_V_read370_rewind_phi_fu_33405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_300_V_read370_phi_phi_fu_77919_p4 = data_300_V_read.read();
        } else {
            ap_phi_mux_data_300_V_read370_phi_phi_fu_77919_p4 = ap_phi_reg_pp0_iter0_data_300_V_read370_phi_reg_77915.read();
        }
    } else {
        ap_phi_mux_data_300_V_read370_phi_phi_fu_77919_p4 = ap_phi_reg_pp0_iter0_data_300_V_read370_phi_reg_77915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_300_V_read370_rewind_phi_fu_33405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_300_V_read370_rewind_phi_fu_33405_p6 = data_300_V_read370_phi_reg_77915.read();
    } else {
        ap_phi_mux_data_300_V_read370_rewind_phi_fu_33405_p6 = data_300_V_read370_rewind_reg_33401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3010_V_read3080_phi_phi_fu_113149_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3010_V_read3080_phi_phi_fu_113149_p4 = ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_71345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3010_V_read3080_phi_phi_fu_113149_p4 = data_3010_V_read.read();
        } else {
            ap_phi_mux_data_3010_V_read3080_phi_phi_fu_113149_p4 = ap_phi_reg_pp0_iter0_data_3010_V_read3080_phi_reg_113145.read();
        }
    } else {
        ap_phi_mux_data_3010_V_read3080_phi_phi_fu_113149_p4 = ap_phi_reg_pp0_iter0_data_3010_V_read3080_phi_reg_113145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_71345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_71345_p6 = data_3010_V_read3080_phi_reg_113145.read();
    } else {
        ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_71345_p6 = data_3010_V_read3080_rewind_reg_71341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3011_V_read3081_phi_phi_fu_113162_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3011_V_read3081_phi_phi_fu_113162_p4 = ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_71359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3011_V_read3081_phi_phi_fu_113162_p4 = data_3011_V_read.read();
        } else {
            ap_phi_mux_data_3011_V_read3081_phi_phi_fu_113162_p4 = ap_phi_reg_pp0_iter0_data_3011_V_read3081_phi_reg_113158.read();
        }
    } else {
        ap_phi_mux_data_3011_V_read3081_phi_phi_fu_113162_p4 = ap_phi_reg_pp0_iter0_data_3011_V_read3081_phi_reg_113158.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_71359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_71359_p6 = data_3011_V_read3081_phi_reg_113158.read();
    } else {
        ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_71359_p6 = data_3011_V_read3081_rewind_reg_71355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3012_V_read3082_phi_phi_fu_113175_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3012_V_read3082_phi_phi_fu_113175_p4 = ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_71373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3012_V_read3082_phi_phi_fu_113175_p4 = data_3012_V_read.read();
        } else {
            ap_phi_mux_data_3012_V_read3082_phi_phi_fu_113175_p4 = ap_phi_reg_pp0_iter0_data_3012_V_read3082_phi_reg_113171.read();
        }
    } else {
        ap_phi_mux_data_3012_V_read3082_phi_phi_fu_113175_p4 = ap_phi_reg_pp0_iter0_data_3012_V_read3082_phi_reg_113171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_71373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_71373_p6 = data_3012_V_read3082_phi_reg_113171.read();
    } else {
        ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_71373_p6 = data_3012_V_read3082_rewind_reg_71369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3013_V_read3083_phi_phi_fu_113188_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3013_V_read3083_phi_phi_fu_113188_p4 = ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_71387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3013_V_read3083_phi_phi_fu_113188_p4 = data_3013_V_read.read();
        } else {
            ap_phi_mux_data_3013_V_read3083_phi_phi_fu_113188_p4 = ap_phi_reg_pp0_iter0_data_3013_V_read3083_phi_reg_113184.read();
        }
    } else {
        ap_phi_mux_data_3013_V_read3083_phi_phi_fu_113188_p4 = ap_phi_reg_pp0_iter0_data_3013_V_read3083_phi_reg_113184.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_71387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_71387_p6 = data_3013_V_read3083_phi_reg_113184.read();
    } else {
        ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_71387_p6 = data_3013_V_read3083_rewind_reg_71383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3014_V_read3084_phi_phi_fu_113201_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3014_V_read3084_phi_phi_fu_113201_p4 = ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_71401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3014_V_read3084_phi_phi_fu_113201_p4 = data_3014_V_read.read();
        } else {
            ap_phi_mux_data_3014_V_read3084_phi_phi_fu_113201_p4 = ap_phi_reg_pp0_iter0_data_3014_V_read3084_phi_reg_113197.read();
        }
    } else {
        ap_phi_mux_data_3014_V_read3084_phi_phi_fu_113201_p4 = ap_phi_reg_pp0_iter0_data_3014_V_read3084_phi_reg_113197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_71401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_71401_p6 = data_3014_V_read3084_phi_reg_113197.read();
    } else {
        ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_71401_p6 = data_3014_V_read3084_rewind_reg_71397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3015_V_read3085_phi_phi_fu_113214_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3015_V_read3085_phi_phi_fu_113214_p4 = ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_71415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3015_V_read3085_phi_phi_fu_113214_p4 = data_3015_V_read.read();
        } else {
            ap_phi_mux_data_3015_V_read3085_phi_phi_fu_113214_p4 = ap_phi_reg_pp0_iter0_data_3015_V_read3085_phi_reg_113210.read();
        }
    } else {
        ap_phi_mux_data_3015_V_read3085_phi_phi_fu_113214_p4 = ap_phi_reg_pp0_iter0_data_3015_V_read3085_phi_reg_113210.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_71415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_71415_p6 = data_3015_V_read3085_phi_reg_113210.read();
    } else {
        ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_71415_p6 = data_3015_V_read3085_rewind_reg_71411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3016_V_read3086_phi_phi_fu_113227_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3016_V_read3086_phi_phi_fu_113227_p4 = ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_71429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3016_V_read3086_phi_phi_fu_113227_p4 = data_3016_V_read.read();
        } else {
            ap_phi_mux_data_3016_V_read3086_phi_phi_fu_113227_p4 = ap_phi_reg_pp0_iter0_data_3016_V_read3086_phi_reg_113223.read();
        }
    } else {
        ap_phi_mux_data_3016_V_read3086_phi_phi_fu_113227_p4 = ap_phi_reg_pp0_iter0_data_3016_V_read3086_phi_reg_113223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_71429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_71429_p6 = data_3016_V_read3086_phi_reg_113223.read();
    } else {
        ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_71429_p6 = data_3016_V_read3086_rewind_reg_71425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3017_V_read3087_phi_phi_fu_113240_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3017_V_read3087_phi_phi_fu_113240_p4 = ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_71443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3017_V_read3087_phi_phi_fu_113240_p4 = data_3017_V_read.read();
        } else {
            ap_phi_mux_data_3017_V_read3087_phi_phi_fu_113240_p4 = ap_phi_reg_pp0_iter0_data_3017_V_read3087_phi_reg_113236.read();
        }
    } else {
        ap_phi_mux_data_3017_V_read3087_phi_phi_fu_113240_p4 = ap_phi_reg_pp0_iter0_data_3017_V_read3087_phi_reg_113236.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_71443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_71443_p6 = data_3017_V_read3087_phi_reg_113236.read();
    } else {
        ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_71443_p6 = data_3017_V_read3087_rewind_reg_71439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3018_V_read3088_phi_phi_fu_113253_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3018_V_read3088_phi_phi_fu_113253_p4 = ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_71457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3018_V_read3088_phi_phi_fu_113253_p4 = data_3018_V_read.read();
        } else {
            ap_phi_mux_data_3018_V_read3088_phi_phi_fu_113253_p4 = ap_phi_reg_pp0_iter0_data_3018_V_read3088_phi_reg_113249.read();
        }
    } else {
        ap_phi_mux_data_3018_V_read3088_phi_phi_fu_113253_p4 = ap_phi_reg_pp0_iter0_data_3018_V_read3088_phi_reg_113249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_71457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_71457_p6 = data_3018_V_read3088_phi_reg_113249.read();
    } else {
        ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_71457_p6 = data_3018_V_read3088_rewind_reg_71453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3019_V_read3089_phi_phi_fu_113266_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3019_V_read3089_phi_phi_fu_113266_p4 = ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_71471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3019_V_read3089_phi_phi_fu_113266_p4 = data_3019_V_read.read();
        } else {
            ap_phi_mux_data_3019_V_read3089_phi_phi_fu_113266_p4 = ap_phi_reg_pp0_iter0_data_3019_V_read3089_phi_reg_113262.read();
        }
    } else {
        ap_phi_mux_data_3019_V_read3089_phi_phi_fu_113266_p4 = ap_phi_reg_pp0_iter0_data_3019_V_read3089_phi_reg_113262.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_71471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_71471_p6 = data_3019_V_read3089_phi_reg_113262.read();
    } else {
        ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_71471_p6 = data_3019_V_read3089_rewind_reg_71467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_301_V_read371_phi_phi_fu_77932_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_301_V_read371_phi_phi_fu_77932_p4 = ap_phi_mux_data_301_V_read371_rewind_phi_fu_33419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_301_V_read371_phi_phi_fu_77932_p4 = data_301_V_read.read();
        } else {
            ap_phi_mux_data_301_V_read371_phi_phi_fu_77932_p4 = ap_phi_reg_pp0_iter0_data_301_V_read371_phi_reg_77928.read();
        }
    } else {
        ap_phi_mux_data_301_V_read371_phi_phi_fu_77932_p4 = ap_phi_reg_pp0_iter0_data_301_V_read371_phi_reg_77928.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_301_V_read371_rewind_phi_fu_33419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_301_V_read371_rewind_phi_fu_33419_p6 = data_301_V_read371_phi_reg_77928.read();
    } else {
        ap_phi_mux_data_301_V_read371_rewind_phi_fu_33419_p6 = data_301_V_read371_rewind_reg_33415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3020_V_read3090_phi_phi_fu_113279_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3020_V_read3090_phi_phi_fu_113279_p4 = ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_71485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3020_V_read3090_phi_phi_fu_113279_p4 = data_3020_V_read.read();
        } else {
            ap_phi_mux_data_3020_V_read3090_phi_phi_fu_113279_p4 = ap_phi_reg_pp0_iter0_data_3020_V_read3090_phi_reg_113275.read();
        }
    } else {
        ap_phi_mux_data_3020_V_read3090_phi_phi_fu_113279_p4 = ap_phi_reg_pp0_iter0_data_3020_V_read3090_phi_reg_113275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_71485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_71485_p6 = data_3020_V_read3090_phi_reg_113275.read();
    } else {
        ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_71485_p6 = data_3020_V_read3090_rewind_reg_71481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3021_V_read3091_phi_phi_fu_113292_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3021_V_read3091_phi_phi_fu_113292_p4 = ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_71499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3021_V_read3091_phi_phi_fu_113292_p4 = data_3021_V_read.read();
        } else {
            ap_phi_mux_data_3021_V_read3091_phi_phi_fu_113292_p4 = ap_phi_reg_pp0_iter0_data_3021_V_read3091_phi_reg_113288.read();
        }
    } else {
        ap_phi_mux_data_3021_V_read3091_phi_phi_fu_113292_p4 = ap_phi_reg_pp0_iter0_data_3021_V_read3091_phi_reg_113288.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_71499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_71499_p6 = data_3021_V_read3091_phi_reg_113288.read();
    } else {
        ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_71499_p6 = data_3021_V_read3091_rewind_reg_71495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3022_V_read3092_phi_phi_fu_113305_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3022_V_read3092_phi_phi_fu_113305_p4 = ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_71513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3022_V_read3092_phi_phi_fu_113305_p4 = data_3022_V_read.read();
        } else {
            ap_phi_mux_data_3022_V_read3092_phi_phi_fu_113305_p4 = ap_phi_reg_pp0_iter0_data_3022_V_read3092_phi_reg_113301.read();
        }
    } else {
        ap_phi_mux_data_3022_V_read3092_phi_phi_fu_113305_p4 = ap_phi_reg_pp0_iter0_data_3022_V_read3092_phi_reg_113301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_71513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_71513_p6 = data_3022_V_read3092_phi_reg_113301.read();
    } else {
        ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_71513_p6 = data_3022_V_read3092_rewind_reg_71509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3023_V_read3093_phi_phi_fu_113318_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3023_V_read3093_phi_phi_fu_113318_p4 = ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_71527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3023_V_read3093_phi_phi_fu_113318_p4 = data_3023_V_read.read();
        } else {
            ap_phi_mux_data_3023_V_read3093_phi_phi_fu_113318_p4 = ap_phi_reg_pp0_iter0_data_3023_V_read3093_phi_reg_113314.read();
        }
    } else {
        ap_phi_mux_data_3023_V_read3093_phi_phi_fu_113318_p4 = ap_phi_reg_pp0_iter0_data_3023_V_read3093_phi_reg_113314.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_71527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_71527_p6 = data_3023_V_read3093_phi_reg_113314.read();
    } else {
        ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_71527_p6 = data_3023_V_read3093_rewind_reg_71523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3024_V_read3094_phi_phi_fu_113331_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3024_V_read3094_phi_phi_fu_113331_p4 = ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_71541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3024_V_read3094_phi_phi_fu_113331_p4 = data_3024_V_read.read();
        } else {
            ap_phi_mux_data_3024_V_read3094_phi_phi_fu_113331_p4 = ap_phi_reg_pp0_iter0_data_3024_V_read3094_phi_reg_113327.read();
        }
    } else {
        ap_phi_mux_data_3024_V_read3094_phi_phi_fu_113331_p4 = ap_phi_reg_pp0_iter0_data_3024_V_read3094_phi_reg_113327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_71541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_71541_p6 = data_3024_V_read3094_phi_reg_113327.read();
    } else {
        ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_71541_p6 = data_3024_V_read3094_rewind_reg_71537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3025_V_read3095_phi_phi_fu_113344_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3025_V_read3095_phi_phi_fu_113344_p4 = ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_71555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3025_V_read3095_phi_phi_fu_113344_p4 = data_3025_V_read.read();
        } else {
            ap_phi_mux_data_3025_V_read3095_phi_phi_fu_113344_p4 = ap_phi_reg_pp0_iter0_data_3025_V_read3095_phi_reg_113340.read();
        }
    } else {
        ap_phi_mux_data_3025_V_read3095_phi_phi_fu_113344_p4 = ap_phi_reg_pp0_iter0_data_3025_V_read3095_phi_reg_113340.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_71555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_71555_p6 = data_3025_V_read3095_phi_reg_113340.read();
    } else {
        ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_71555_p6 = data_3025_V_read3095_rewind_reg_71551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3026_V_read3096_phi_phi_fu_113357_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3026_V_read3096_phi_phi_fu_113357_p4 = ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_71569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3026_V_read3096_phi_phi_fu_113357_p4 = data_3026_V_read.read();
        } else {
            ap_phi_mux_data_3026_V_read3096_phi_phi_fu_113357_p4 = ap_phi_reg_pp0_iter0_data_3026_V_read3096_phi_reg_113353.read();
        }
    } else {
        ap_phi_mux_data_3026_V_read3096_phi_phi_fu_113357_p4 = ap_phi_reg_pp0_iter0_data_3026_V_read3096_phi_reg_113353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_71569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_71569_p6 = data_3026_V_read3096_phi_reg_113353.read();
    } else {
        ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_71569_p6 = data_3026_V_read3096_rewind_reg_71565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3027_V_read3097_phi_phi_fu_113370_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3027_V_read3097_phi_phi_fu_113370_p4 = ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_71583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3027_V_read3097_phi_phi_fu_113370_p4 = data_3027_V_read.read();
        } else {
            ap_phi_mux_data_3027_V_read3097_phi_phi_fu_113370_p4 = ap_phi_reg_pp0_iter0_data_3027_V_read3097_phi_reg_113366.read();
        }
    } else {
        ap_phi_mux_data_3027_V_read3097_phi_phi_fu_113370_p4 = ap_phi_reg_pp0_iter0_data_3027_V_read3097_phi_reg_113366.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_71583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_71583_p6 = data_3027_V_read3097_phi_reg_113366.read();
    } else {
        ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_71583_p6 = data_3027_V_read3097_rewind_reg_71579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3028_V_read3098_phi_phi_fu_113383_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3028_V_read3098_phi_phi_fu_113383_p4 = ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_71597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3028_V_read3098_phi_phi_fu_113383_p4 = data_3028_V_read.read();
        } else {
            ap_phi_mux_data_3028_V_read3098_phi_phi_fu_113383_p4 = ap_phi_reg_pp0_iter0_data_3028_V_read3098_phi_reg_113379.read();
        }
    } else {
        ap_phi_mux_data_3028_V_read3098_phi_phi_fu_113383_p4 = ap_phi_reg_pp0_iter0_data_3028_V_read3098_phi_reg_113379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_71597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_71597_p6 = data_3028_V_read3098_phi_reg_113379.read();
    } else {
        ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_71597_p6 = data_3028_V_read3098_rewind_reg_71593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3029_V_read3099_phi_phi_fu_113396_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3029_V_read3099_phi_phi_fu_113396_p4 = ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_71611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3029_V_read3099_phi_phi_fu_113396_p4 = data_3029_V_read.read();
        } else {
            ap_phi_mux_data_3029_V_read3099_phi_phi_fu_113396_p4 = ap_phi_reg_pp0_iter0_data_3029_V_read3099_phi_reg_113392.read();
        }
    } else {
        ap_phi_mux_data_3029_V_read3099_phi_phi_fu_113396_p4 = ap_phi_reg_pp0_iter0_data_3029_V_read3099_phi_reg_113392.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_71611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_71611_p6 = data_3029_V_read3099_phi_reg_113392.read();
    } else {
        ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_71611_p6 = data_3029_V_read3099_rewind_reg_71607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_302_V_read372_phi_phi_fu_77945_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_302_V_read372_phi_phi_fu_77945_p4 = ap_phi_mux_data_302_V_read372_rewind_phi_fu_33433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_302_V_read372_phi_phi_fu_77945_p4 = data_302_V_read.read();
        } else {
            ap_phi_mux_data_302_V_read372_phi_phi_fu_77945_p4 = ap_phi_reg_pp0_iter0_data_302_V_read372_phi_reg_77941.read();
        }
    } else {
        ap_phi_mux_data_302_V_read372_phi_phi_fu_77945_p4 = ap_phi_reg_pp0_iter0_data_302_V_read372_phi_reg_77941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_302_V_read372_rewind_phi_fu_33433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_302_V_read372_rewind_phi_fu_33433_p6 = data_302_V_read372_phi_reg_77941.read();
    } else {
        ap_phi_mux_data_302_V_read372_rewind_phi_fu_33433_p6 = data_302_V_read372_rewind_reg_33429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3030_V_read3100_phi_phi_fu_113409_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3030_V_read3100_phi_phi_fu_113409_p4 = ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_71625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3030_V_read3100_phi_phi_fu_113409_p4 = data_3030_V_read.read();
        } else {
            ap_phi_mux_data_3030_V_read3100_phi_phi_fu_113409_p4 = ap_phi_reg_pp0_iter0_data_3030_V_read3100_phi_reg_113405.read();
        }
    } else {
        ap_phi_mux_data_3030_V_read3100_phi_phi_fu_113409_p4 = ap_phi_reg_pp0_iter0_data_3030_V_read3100_phi_reg_113405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_71625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_71625_p6 = data_3030_V_read3100_phi_reg_113405.read();
    } else {
        ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_71625_p6 = data_3030_V_read3100_rewind_reg_71621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3031_V_read3101_phi_phi_fu_113422_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3031_V_read3101_phi_phi_fu_113422_p4 = ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_71639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3031_V_read3101_phi_phi_fu_113422_p4 = data_3031_V_read.read();
        } else {
            ap_phi_mux_data_3031_V_read3101_phi_phi_fu_113422_p4 = ap_phi_reg_pp0_iter0_data_3031_V_read3101_phi_reg_113418.read();
        }
    } else {
        ap_phi_mux_data_3031_V_read3101_phi_phi_fu_113422_p4 = ap_phi_reg_pp0_iter0_data_3031_V_read3101_phi_reg_113418.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_71639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_71639_p6 = data_3031_V_read3101_phi_reg_113418.read();
    } else {
        ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_71639_p6 = data_3031_V_read3101_rewind_reg_71635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3032_V_read3102_phi_phi_fu_113435_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3032_V_read3102_phi_phi_fu_113435_p4 = ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_71653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3032_V_read3102_phi_phi_fu_113435_p4 = data_3032_V_read.read();
        } else {
            ap_phi_mux_data_3032_V_read3102_phi_phi_fu_113435_p4 = ap_phi_reg_pp0_iter0_data_3032_V_read3102_phi_reg_113431.read();
        }
    } else {
        ap_phi_mux_data_3032_V_read3102_phi_phi_fu_113435_p4 = ap_phi_reg_pp0_iter0_data_3032_V_read3102_phi_reg_113431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_71653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_71653_p6 = data_3032_V_read3102_phi_reg_113431.read();
    } else {
        ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_71653_p6 = data_3032_V_read3102_rewind_reg_71649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3033_V_read3103_phi_phi_fu_113448_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3033_V_read3103_phi_phi_fu_113448_p4 = ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_71667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3033_V_read3103_phi_phi_fu_113448_p4 = data_3033_V_read.read();
        } else {
            ap_phi_mux_data_3033_V_read3103_phi_phi_fu_113448_p4 = ap_phi_reg_pp0_iter0_data_3033_V_read3103_phi_reg_113444.read();
        }
    } else {
        ap_phi_mux_data_3033_V_read3103_phi_phi_fu_113448_p4 = ap_phi_reg_pp0_iter0_data_3033_V_read3103_phi_reg_113444.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_71667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_71667_p6 = data_3033_V_read3103_phi_reg_113444.read();
    } else {
        ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_71667_p6 = data_3033_V_read3103_rewind_reg_71663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3034_V_read3104_phi_phi_fu_113461_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3034_V_read3104_phi_phi_fu_113461_p4 = ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_71681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3034_V_read3104_phi_phi_fu_113461_p4 = data_3034_V_read.read();
        } else {
            ap_phi_mux_data_3034_V_read3104_phi_phi_fu_113461_p4 = ap_phi_reg_pp0_iter0_data_3034_V_read3104_phi_reg_113457.read();
        }
    } else {
        ap_phi_mux_data_3034_V_read3104_phi_phi_fu_113461_p4 = ap_phi_reg_pp0_iter0_data_3034_V_read3104_phi_reg_113457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_71681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_71681_p6 = data_3034_V_read3104_phi_reg_113457.read();
    } else {
        ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_71681_p6 = data_3034_V_read3104_rewind_reg_71677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3035_V_read3105_phi_phi_fu_113474_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3035_V_read3105_phi_phi_fu_113474_p4 = ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_71695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3035_V_read3105_phi_phi_fu_113474_p4 = data_3035_V_read.read();
        } else {
            ap_phi_mux_data_3035_V_read3105_phi_phi_fu_113474_p4 = ap_phi_reg_pp0_iter0_data_3035_V_read3105_phi_reg_113470.read();
        }
    } else {
        ap_phi_mux_data_3035_V_read3105_phi_phi_fu_113474_p4 = ap_phi_reg_pp0_iter0_data_3035_V_read3105_phi_reg_113470.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_71695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_71695_p6 = data_3035_V_read3105_phi_reg_113470.read();
    } else {
        ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_71695_p6 = data_3035_V_read3105_rewind_reg_71691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3036_V_read3106_phi_phi_fu_113487_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3036_V_read3106_phi_phi_fu_113487_p4 = ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_71709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3036_V_read3106_phi_phi_fu_113487_p4 = data_3036_V_read.read();
        } else {
            ap_phi_mux_data_3036_V_read3106_phi_phi_fu_113487_p4 = ap_phi_reg_pp0_iter0_data_3036_V_read3106_phi_reg_113483.read();
        }
    } else {
        ap_phi_mux_data_3036_V_read3106_phi_phi_fu_113487_p4 = ap_phi_reg_pp0_iter0_data_3036_V_read3106_phi_reg_113483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_71709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_71709_p6 = data_3036_V_read3106_phi_reg_113483.read();
    } else {
        ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_71709_p6 = data_3036_V_read3106_rewind_reg_71705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3037_V_read3107_phi_phi_fu_113500_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3037_V_read3107_phi_phi_fu_113500_p4 = ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_71723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3037_V_read3107_phi_phi_fu_113500_p4 = data_3037_V_read.read();
        } else {
            ap_phi_mux_data_3037_V_read3107_phi_phi_fu_113500_p4 = ap_phi_reg_pp0_iter0_data_3037_V_read3107_phi_reg_113496.read();
        }
    } else {
        ap_phi_mux_data_3037_V_read3107_phi_phi_fu_113500_p4 = ap_phi_reg_pp0_iter0_data_3037_V_read3107_phi_reg_113496.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_71723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_71723_p6 = data_3037_V_read3107_phi_reg_113496.read();
    } else {
        ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_71723_p6 = data_3037_V_read3107_rewind_reg_71719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3038_V_read3108_phi_phi_fu_113513_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3038_V_read3108_phi_phi_fu_113513_p4 = ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_71737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3038_V_read3108_phi_phi_fu_113513_p4 = data_3038_V_read.read();
        } else {
            ap_phi_mux_data_3038_V_read3108_phi_phi_fu_113513_p4 = ap_phi_reg_pp0_iter0_data_3038_V_read3108_phi_reg_113509.read();
        }
    } else {
        ap_phi_mux_data_3038_V_read3108_phi_phi_fu_113513_p4 = ap_phi_reg_pp0_iter0_data_3038_V_read3108_phi_reg_113509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_71737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_71737_p6 = data_3038_V_read3108_phi_reg_113509.read();
    } else {
        ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_71737_p6 = data_3038_V_read3108_rewind_reg_71733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3039_V_read3109_phi_phi_fu_113526_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3039_V_read3109_phi_phi_fu_113526_p4 = ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_71751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3039_V_read3109_phi_phi_fu_113526_p4 = data_3039_V_read.read();
        } else {
            ap_phi_mux_data_3039_V_read3109_phi_phi_fu_113526_p4 = ap_phi_reg_pp0_iter0_data_3039_V_read3109_phi_reg_113522.read();
        }
    } else {
        ap_phi_mux_data_3039_V_read3109_phi_phi_fu_113526_p4 = ap_phi_reg_pp0_iter0_data_3039_V_read3109_phi_reg_113522.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_71751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_71751_p6 = data_3039_V_read3109_phi_reg_113522.read();
    } else {
        ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_71751_p6 = data_3039_V_read3109_rewind_reg_71747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_303_V_read373_phi_phi_fu_77958_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_303_V_read373_phi_phi_fu_77958_p4 = ap_phi_mux_data_303_V_read373_rewind_phi_fu_33447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_303_V_read373_phi_phi_fu_77958_p4 = data_303_V_read.read();
        } else {
            ap_phi_mux_data_303_V_read373_phi_phi_fu_77958_p4 = ap_phi_reg_pp0_iter0_data_303_V_read373_phi_reg_77954.read();
        }
    } else {
        ap_phi_mux_data_303_V_read373_phi_phi_fu_77958_p4 = ap_phi_reg_pp0_iter0_data_303_V_read373_phi_reg_77954.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_303_V_read373_rewind_phi_fu_33447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_303_V_read373_rewind_phi_fu_33447_p6 = data_303_V_read373_phi_reg_77954.read();
    } else {
        ap_phi_mux_data_303_V_read373_rewind_phi_fu_33447_p6 = data_303_V_read373_rewind_reg_33443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3040_V_read3110_phi_phi_fu_113539_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3040_V_read3110_phi_phi_fu_113539_p4 = ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_71765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3040_V_read3110_phi_phi_fu_113539_p4 = data_3040_V_read.read();
        } else {
            ap_phi_mux_data_3040_V_read3110_phi_phi_fu_113539_p4 = ap_phi_reg_pp0_iter0_data_3040_V_read3110_phi_reg_113535.read();
        }
    } else {
        ap_phi_mux_data_3040_V_read3110_phi_phi_fu_113539_p4 = ap_phi_reg_pp0_iter0_data_3040_V_read3110_phi_reg_113535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_71765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_71765_p6 = data_3040_V_read3110_phi_reg_113535.read();
    } else {
        ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_71765_p6 = data_3040_V_read3110_rewind_reg_71761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3041_V_read3111_phi_phi_fu_113552_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3041_V_read3111_phi_phi_fu_113552_p4 = ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_71779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3041_V_read3111_phi_phi_fu_113552_p4 = data_3041_V_read.read();
        } else {
            ap_phi_mux_data_3041_V_read3111_phi_phi_fu_113552_p4 = ap_phi_reg_pp0_iter0_data_3041_V_read3111_phi_reg_113548.read();
        }
    } else {
        ap_phi_mux_data_3041_V_read3111_phi_phi_fu_113552_p4 = ap_phi_reg_pp0_iter0_data_3041_V_read3111_phi_reg_113548.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_71779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_71779_p6 = data_3041_V_read3111_phi_reg_113548.read();
    } else {
        ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_71779_p6 = data_3041_V_read3111_rewind_reg_71775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3042_V_read3112_phi_phi_fu_113565_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3042_V_read3112_phi_phi_fu_113565_p4 = ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_71793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3042_V_read3112_phi_phi_fu_113565_p4 = data_3042_V_read.read();
        } else {
            ap_phi_mux_data_3042_V_read3112_phi_phi_fu_113565_p4 = ap_phi_reg_pp0_iter0_data_3042_V_read3112_phi_reg_113561.read();
        }
    } else {
        ap_phi_mux_data_3042_V_read3112_phi_phi_fu_113565_p4 = ap_phi_reg_pp0_iter0_data_3042_V_read3112_phi_reg_113561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_71793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_71793_p6 = data_3042_V_read3112_phi_reg_113561.read();
    } else {
        ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_71793_p6 = data_3042_V_read3112_rewind_reg_71789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3043_V_read3113_phi_phi_fu_113578_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3043_V_read3113_phi_phi_fu_113578_p4 = ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_71807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3043_V_read3113_phi_phi_fu_113578_p4 = data_3043_V_read.read();
        } else {
            ap_phi_mux_data_3043_V_read3113_phi_phi_fu_113578_p4 = ap_phi_reg_pp0_iter0_data_3043_V_read3113_phi_reg_113574.read();
        }
    } else {
        ap_phi_mux_data_3043_V_read3113_phi_phi_fu_113578_p4 = ap_phi_reg_pp0_iter0_data_3043_V_read3113_phi_reg_113574.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_71807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_71807_p6 = data_3043_V_read3113_phi_reg_113574.read();
    } else {
        ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_71807_p6 = data_3043_V_read3113_rewind_reg_71803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3044_V_read3114_phi_phi_fu_113591_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3044_V_read3114_phi_phi_fu_113591_p4 = ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_71821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3044_V_read3114_phi_phi_fu_113591_p4 = data_3044_V_read.read();
        } else {
            ap_phi_mux_data_3044_V_read3114_phi_phi_fu_113591_p4 = ap_phi_reg_pp0_iter0_data_3044_V_read3114_phi_reg_113587.read();
        }
    } else {
        ap_phi_mux_data_3044_V_read3114_phi_phi_fu_113591_p4 = ap_phi_reg_pp0_iter0_data_3044_V_read3114_phi_reg_113587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_71821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_71821_p6 = data_3044_V_read3114_phi_reg_113587.read();
    } else {
        ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_71821_p6 = data_3044_V_read3114_rewind_reg_71817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3045_V_read3115_phi_phi_fu_113604_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3045_V_read3115_phi_phi_fu_113604_p4 = ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_71835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3045_V_read3115_phi_phi_fu_113604_p4 = data_3045_V_read.read();
        } else {
            ap_phi_mux_data_3045_V_read3115_phi_phi_fu_113604_p4 = ap_phi_reg_pp0_iter0_data_3045_V_read3115_phi_reg_113600.read();
        }
    } else {
        ap_phi_mux_data_3045_V_read3115_phi_phi_fu_113604_p4 = ap_phi_reg_pp0_iter0_data_3045_V_read3115_phi_reg_113600.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_71835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_71835_p6 = data_3045_V_read3115_phi_reg_113600.read();
    } else {
        ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_71835_p6 = data_3045_V_read3115_rewind_reg_71831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3046_V_read3116_phi_phi_fu_113617_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3046_V_read3116_phi_phi_fu_113617_p4 = ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_71849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3046_V_read3116_phi_phi_fu_113617_p4 = data_3046_V_read.read();
        } else {
            ap_phi_mux_data_3046_V_read3116_phi_phi_fu_113617_p4 = ap_phi_reg_pp0_iter0_data_3046_V_read3116_phi_reg_113613.read();
        }
    } else {
        ap_phi_mux_data_3046_V_read3116_phi_phi_fu_113617_p4 = ap_phi_reg_pp0_iter0_data_3046_V_read3116_phi_reg_113613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_71849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_71849_p6 = data_3046_V_read3116_phi_reg_113613.read();
    } else {
        ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_71849_p6 = data_3046_V_read3116_rewind_reg_71845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3047_V_read3117_phi_phi_fu_113630_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3047_V_read3117_phi_phi_fu_113630_p4 = ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_71863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3047_V_read3117_phi_phi_fu_113630_p4 = data_3047_V_read.read();
        } else {
            ap_phi_mux_data_3047_V_read3117_phi_phi_fu_113630_p4 = ap_phi_reg_pp0_iter0_data_3047_V_read3117_phi_reg_113626.read();
        }
    } else {
        ap_phi_mux_data_3047_V_read3117_phi_phi_fu_113630_p4 = ap_phi_reg_pp0_iter0_data_3047_V_read3117_phi_reg_113626.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_71863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_71863_p6 = data_3047_V_read3117_phi_reg_113626.read();
    } else {
        ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_71863_p6 = data_3047_V_read3117_rewind_reg_71859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3048_V_read3118_phi_phi_fu_113643_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3048_V_read3118_phi_phi_fu_113643_p4 = ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_71877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3048_V_read3118_phi_phi_fu_113643_p4 = data_3048_V_read.read();
        } else {
            ap_phi_mux_data_3048_V_read3118_phi_phi_fu_113643_p4 = ap_phi_reg_pp0_iter0_data_3048_V_read3118_phi_reg_113639.read();
        }
    } else {
        ap_phi_mux_data_3048_V_read3118_phi_phi_fu_113643_p4 = ap_phi_reg_pp0_iter0_data_3048_V_read3118_phi_reg_113639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_71877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_71877_p6 = data_3048_V_read3118_phi_reg_113639.read();
    } else {
        ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_71877_p6 = data_3048_V_read3118_rewind_reg_71873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3049_V_read3119_phi_phi_fu_113656_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3049_V_read3119_phi_phi_fu_113656_p4 = ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_71891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3049_V_read3119_phi_phi_fu_113656_p4 = data_3049_V_read.read();
        } else {
            ap_phi_mux_data_3049_V_read3119_phi_phi_fu_113656_p4 = ap_phi_reg_pp0_iter0_data_3049_V_read3119_phi_reg_113652.read();
        }
    } else {
        ap_phi_mux_data_3049_V_read3119_phi_phi_fu_113656_p4 = ap_phi_reg_pp0_iter0_data_3049_V_read3119_phi_reg_113652.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_71891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_71891_p6 = data_3049_V_read3119_phi_reg_113652.read();
    } else {
        ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_71891_p6 = data_3049_V_read3119_rewind_reg_71887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_304_V_read374_phi_phi_fu_77971_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_304_V_read374_phi_phi_fu_77971_p4 = ap_phi_mux_data_304_V_read374_rewind_phi_fu_33461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_304_V_read374_phi_phi_fu_77971_p4 = data_304_V_read.read();
        } else {
            ap_phi_mux_data_304_V_read374_phi_phi_fu_77971_p4 = ap_phi_reg_pp0_iter0_data_304_V_read374_phi_reg_77967.read();
        }
    } else {
        ap_phi_mux_data_304_V_read374_phi_phi_fu_77971_p4 = ap_phi_reg_pp0_iter0_data_304_V_read374_phi_reg_77967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_304_V_read374_rewind_phi_fu_33461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_304_V_read374_rewind_phi_fu_33461_p6 = data_304_V_read374_phi_reg_77967.read();
    } else {
        ap_phi_mux_data_304_V_read374_rewind_phi_fu_33461_p6 = data_304_V_read374_rewind_reg_33457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3050_V_read3120_phi_phi_fu_113669_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3050_V_read3120_phi_phi_fu_113669_p4 = ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_71905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3050_V_read3120_phi_phi_fu_113669_p4 = data_3050_V_read.read();
        } else {
            ap_phi_mux_data_3050_V_read3120_phi_phi_fu_113669_p4 = ap_phi_reg_pp0_iter0_data_3050_V_read3120_phi_reg_113665.read();
        }
    } else {
        ap_phi_mux_data_3050_V_read3120_phi_phi_fu_113669_p4 = ap_phi_reg_pp0_iter0_data_3050_V_read3120_phi_reg_113665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_71905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_71905_p6 = data_3050_V_read3120_phi_reg_113665.read();
    } else {
        ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_71905_p6 = data_3050_V_read3120_rewind_reg_71901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3051_V_read3121_phi_phi_fu_113682_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3051_V_read3121_phi_phi_fu_113682_p4 = ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_71919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3051_V_read3121_phi_phi_fu_113682_p4 = data_3051_V_read.read();
        } else {
            ap_phi_mux_data_3051_V_read3121_phi_phi_fu_113682_p4 = ap_phi_reg_pp0_iter0_data_3051_V_read3121_phi_reg_113678.read();
        }
    } else {
        ap_phi_mux_data_3051_V_read3121_phi_phi_fu_113682_p4 = ap_phi_reg_pp0_iter0_data_3051_V_read3121_phi_reg_113678.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_71919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_71919_p6 = data_3051_V_read3121_phi_reg_113678.read();
    } else {
        ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_71919_p6 = data_3051_V_read3121_rewind_reg_71915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3052_V_read3122_phi_phi_fu_113695_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3052_V_read3122_phi_phi_fu_113695_p4 = ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_71933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3052_V_read3122_phi_phi_fu_113695_p4 = data_3052_V_read.read();
        } else {
            ap_phi_mux_data_3052_V_read3122_phi_phi_fu_113695_p4 = ap_phi_reg_pp0_iter0_data_3052_V_read3122_phi_reg_113691.read();
        }
    } else {
        ap_phi_mux_data_3052_V_read3122_phi_phi_fu_113695_p4 = ap_phi_reg_pp0_iter0_data_3052_V_read3122_phi_reg_113691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_71933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_71933_p6 = data_3052_V_read3122_phi_reg_113691.read();
    } else {
        ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_71933_p6 = data_3052_V_read3122_rewind_reg_71929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3053_V_read3123_phi_phi_fu_113708_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3053_V_read3123_phi_phi_fu_113708_p4 = ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_71947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3053_V_read3123_phi_phi_fu_113708_p4 = data_3053_V_read.read();
        } else {
            ap_phi_mux_data_3053_V_read3123_phi_phi_fu_113708_p4 = ap_phi_reg_pp0_iter0_data_3053_V_read3123_phi_reg_113704.read();
        }
    } else {
        ap_phi_mux_data_3053_V_read3123_phi_phi_fu_113708_p4 = ap_phi_reg_pp0_iter0_data_3053_V_read3123_phi_reg_113704.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_71947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_71947_p6 = data_3053_V_read3123_phi_reg_113704.read();
    } else {
        ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_71947_p6 = data_3053_V_read3123_rewind_reg_71943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3054_V_read3124_phi_phi_fu_113721_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3054_V_read3124_phi_phi_fu_113721_p4 = ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_71961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3054_V_read3124_phi_phi_fu_113721_p4 = data_3054_V_read.read();
        } else {
            ap_phi_mux_data_3054_V_read3124_phi_phi_fu_113721_p4 = ap_phi_reg_pp0_iter0_data_3054_V_read3124_phi_reg_113717.read();
        }
    } else {
        ap_phi_mux_data_3054_V_read3124_phi_phi_fu_113721_p4 = ap_phi_reg_pp0_iter0_data_3054_V_read3124_phi_reg_113717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_71961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_71961_p6 = data_3054_V_read3124_phi_reg_113717.read();
    } else {
        ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_71961_p6 = data_3054_V_read3124_rewind_reg_71957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3055_V_read3125_phi_phi_fu_113734_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3055_V_read3125_phi_phi_fu_113734_p4 = ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_71975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3055_V_read3125_phi_phi_fu_113734_p4 = data_3055_V_read.read();
        } else {
            ap_phi_mux_data_3055_V_read3125_phi_phi_fu_113734_p4 = ap_phi_reg_pp0_iter0_data_3055_V_read3125_phi_reg_113730.read();
        }
    } else {
        ap_phi_mux_data_3055_V_read3125_phi_phi_fu_113734_p4 = ap_phi_reg_pp0_iter0_data_3055_V_read3125_phi_reg_113730.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_71975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_71975_p6 = data_3055_V_read3125_phi_reg_113730.read();
    } else {
        ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_71975_p6 = data_3055_V_read3125_rewind_reg_71971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3056_V_read3126_phi_phi_fu_113747_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3056_V_read3126_phi_phi_fu_113747_p4 = ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_71989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3056_V_read3126_phi_phi_fu_113747_p4 = data_3056_V_read.read();
        } else {
            ap_phi_mux_data_3056_V_read3126_phi_phi_fu_113747_p4 = ap_phi_reg_pp0_iter0_data_3056_V_read3126_phi_reg_113743.read();
        }
    } else {
        ap_phi_mux_data_3056_V_read3126_phi_phi_fu_113747_p4 = ap_phi_reg_pp0_iter0_data_3056_V_read3126_phi_reg_113743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_71989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_71989_p6 = data_3056_V_read3126_phi_reg_113743.read();
    } else {
        ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_71989_p6 = data_3056_V_read3126_rewind_reg_71985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3057_V_read3127_phi_phi_fu_113760_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3057_V_read3127_phi_phi_fu_113760_p4 = ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_72003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3057_V_read3127_phi_phi_fu_113760_p4 = data_3057_V_read.read();
        } else {
            ap_phi_mux_data_3057_V_read3127_phi_phi_fu_113760_p4 = ap_phi_reg_pp0_iter0_data_3057_V_read3127_phi_reg_113756.read();
        }
    } else {
        ap_phi_mux_data_3057_V_read3127_phi_phi_fu_113760_p4 = ap_phi_reg_pp0_iter0_data_3057_V_read3127_phi_reg_113756.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_72003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_72003_p6 = data_3057_V_read3127_phi_reg_113756.read();
    } else {
        ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_72003_p6 = data_3057_V_read3127_rewind_reg_71999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3058_V_read3128_phi_phi_fu_113773_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3058_V_read3128_phi_phi_fu_113773_p4 = ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_72017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3058_V_read3128_phi_phi_fu_113773_p4 = data_3058_V_read.read();
        } else {
            ap_phi_mux_data_3058_V_read3128_phi_phi_fu_113773_p4 = ap_phi_reg_pp0_iter0_data_3058_V_read3128_phi_reg_113769.read();
        }
    } else {
        ap_phi_mux_data_3058_V_read3128_phi_phi_fu_113773_p4 = ap_phi_reg_pp0_iter0_data_3058_V_read3128_phi_reg_113769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_72017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_72017_p6 = data_3058_V_read3128_phi_reg_113769.read();
    } else {
        ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_72017_p6 = data_3058_V_read3128_rewind_reg_72013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3059_V_read3129_phi_phi_fu_113786_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3059_V_read3129_phi_phi_fu_113786_p4 = ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_72031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3059_V_read3129_phi_phi_fu_113786_p4 = data_3059_V_read.read();
        } else {
            ap_phi_mux_data_3059_V_read3129_phi_phi_fu_113786_p4 = ap_phi_reg_pp0_iter0_data_3059_V_read3129_phi_reg_113782.read();
        }
    } else {
        ap_phi_mux_data_3059_V_read3129_phi_phi_fu_113786_p4 = ap_phi_reg_pp0_iter0_data_3059_V_read3129_phi_reg_113782.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_72031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_72031_p6 = data_3059_V_read3129_phi_reg_113782.read();
    } else {
        ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_72031_p6 = data_3059_V_read3129_rewind_reg_72027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_305_V_read375_phi_phi_fu_77984_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_305_V_read375_phi_phi_fu_77984_p4 = ap_phi_mux_data_305_V_read375_rewind_phi_fu_33475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_305_V_read375_phi_phi_fu_77984_p4 = data_305_V_read.read();
        } else {
            ap_phi_mux_data_305_V_read375_phi_phi_fu_77984_p4 = ap_phi_reg_pp0_iter0_data_305_V_read375_phi_reg_77980.read();
        }
    } else {
        ap_phi_mux_data_305_V_read375_phi_phi_fu_77984_p4 = ap_phi_reg_pp0_iter0_data_305_V_read375_phi_reg_77980.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_305_V_read375_rewind_phi_fu_33475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_305_V_read375_rewind_phi_fu_33475_p6 = data_305_V_read375_phi_reg_77980.read();
    } else {
        ap_phi_mux_data_305_V_read375_rewind_phi_fu_33475_p6 = data_305_V_read375_rewind_reg_33471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3060_V_read3130_phi_phi_fu_113799_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3060_V_read3130_phi_phi_fu_113799_p4 = ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_72045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3060_V_read3130_phi_phi_fu_113799_p4 = data_3060_V_read.read();
        } else {
            ap_phi_mux_data_3060_V_read3130_phi_phi_fu_113799_p4 = ap_phi_reg_pp0_iter0_data_3060_V_read3130_phi_reg_113795.read();
        }
    } else {
        ap_phi_mux_data_3060_V_read3130_phi_phi_fu_113799_p4 = ap_phi_reg_pp0_iter0_data_3060_V_read3130_phi_reg_113795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_72045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_72045_p6 = data_3060_V_read3130_phi_reg_113795.read();
    } else {
        ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_72045_p6 = data_3060_V_read3130_rewind_reg_72041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3061_V_read3131_phi_phi_fu_113812_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3061_V_read3131_phi_phi_fu_113812_p4 = ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_72059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3061_V_read3131_phi_phi_fu_113812_p4 = data_3061_V_read.read();
        } else {
            ap_phi_mux_data_3061_V_read3131_phi_phi_fu_113812_p4 = ap_phi_reg_pp0_iter0_data_3061_V_read3131_phi_reg_113808.read();
        }
    } else {
        ap_phi_mux_data_3061_V_read3131_phi_phi_fu_113812_p4 = ap_phi_reg_pp0_iter0_data_3061_V_read3131_phi_reg_113808.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_72059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_72059_p6 = data_3061_V_read3131_phi_reg_113808.read();
    } else {
        ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_72059_p6 = data_3061_V_read3131_rewind_reg_72055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3062_V_read3132_phi_phi_fu_113825_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3062_V_read3132_phi_phi_fu_113825_p4 = ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_72073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3062_V_read3132_phi_phi_fu_113825_p4 = data_3062_V_read.read();
        } else {
            ap_phi_mux_data_3062_V_read3132_phi_phi_fu_113825_p4 = ap_phi_reg_pp0_iter0_data_3062_V_read3132_phi_reg_113821.read();
        }
    } else {
        ap_phi_mux_data_3062_V_read3132_phi_phi_fu_113825_p4 = ap_phi_reg_pp0_iter0_data_3062_V_read3132_phi_reg_113821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_72073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_72073_p6 = data_3062_V_read3132_phi_reg_113821.read();
    } else {
        ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_72073_p6 = data_3062_V_read3132_rewind_reg_72069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3063_V_read3133_phi_phi_fu_113838_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3063_V_read3133_phi_phi_fu_113838_p4 = ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_72087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3063_V_read3133_phi_phi_fu_113838_p4 = data_3063_V_read.read();
        } else {
            ap_phi_mux_data_3063_V_read3133_phi_phi_fu_113838_p4 = ap_phi_reg_pp0_iter0_data_3063_V_read3133_phi_reg_113834.read();
        }
    } else {
        ap_phi_mux_data_3063_V_read3133_phi_phi_fu_113838_p4 = ap_phi_reg_pp0_iter0_data_3063_V_read3133_phi_reg_113834.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_72087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_72087_p6 = data_3063_V_read3133_phi_reg_113834.read();
    } else {
        ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_72087_p6 = data_3063_V_read3133_rewind_reg_72083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3064_V_read3134_phi_phi_fu_113851_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3064_V_read3134_phi_phi_fu_113851_p4 = ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_72101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3064_V_read3134_phi_phi_fu_113851_p4 = data_3064_V_read.read();
        } else {
            ap_phi_mux_data_3064_V_read3134_phi_phi_fu_113851_p4 = ap_phi_reg_pp0_iter0_data_3064_V_read3134_phi_reg_113847.read();
        }
    } else {
        ap_phi_mux_data_3064_V_read3134_phi_phi_fu_113851_p4 = ap_phi_reg_pp0_iter0_data_3064_V_read3134_phi_reg_113847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_72101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_72101_p6 = data_3064_V_read3134_phi_reg_113847.read();
    } else {
        ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_72101_p6 = data_3064_V_read3134_rewind_reg_72097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3065_V_read3135_phi_phi_fu_113864_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3065_V_read3135_phi_phi_fu_113864_p4 = ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_72115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3065_V_read3135_phi_phi_fu_113864_p4 = data_3065_V_read.read();
        } else {
            ap_phi_mux_data_3065_V_read3135_phi_phi_fu_113864_p4 = ap_phi_reg_pp0_iter0_data_3065_V_read3135_phi_reg_113860.read();
        }
    } else {
        ap_phi_mux_data_3065_V_read3135_phi_phi_fu_113864_p4 = ap_phi_reg_pp0_iter0_data_3065_V_read3135_phi_reg_113860.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_72115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_72115_p6 = data_3065_V_read3135_phi_reg_113860.read();
    } else {
        ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_72115_p6 = data_3065_V_read3135_rewind_reg_72111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3066_V_read3136_phi_phi_fu_113877_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3066_V_read3136_phi_phi_fu_113877_p4 = ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_72129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3066_V_read3136_phi_phi_fu_113877_p4 = data_3066_V_read.read();
        } else {
            ap_phi_mux_data_3066_V_read3136_phi_phi_fu_113877_p4 = ap_phi_reg_pp0_iter0_data_3066_V_read3136_phi_reg_113873.read();
        }
    } else {
        ap_phi_mux_data_3066_V_read3136_phi_phi_fu_113877_p4 = ap_phi_reg_pp0_iter0_data_3066_V_read3136_phi_reg_113873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_72129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_72129_p6 = data_3066_V_read3136_phi_reg_113873.read();
    } else {
        ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_72129_p6 = data_3066_V_read3136_rewind_reg_72125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3067_V_read3137_phi_phi_fu_113890_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3067_V_read3137_phi_phi_fu_113890_p4 = ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_72143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3067_V_read3137_phi_phi_fu_113890_p4 = data_3067_V_read.read();
        } else {
            ap_phi_mux_data_3067_V_read3137_phi_phi_fu_113890_p4 = ap_phi_reg_pp0_iter0_data_3067_V_read3137_phi_reg_113886.read();
        }
    } else {
        ap_phi_mux_data_3067_V_read3137_phi_phi_fu_113890_p4 = ap_phi_reg_pp0_iter0_data_3067_V_read3137_phi_reg_113886.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_72143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_72143_p6 = data_3067_V_read3137_phi_reg_113886.read();
    } else {
        ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_72143_p6 = data_3067_V_read3137_rewind_reg_72139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3068_V_read3138_phi_phi_fu_113903_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3068_V_read3138_phi_phi_fu_113903_p4 = ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_72157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3068_V_read3138_phi_phi_fu_113903_p4 = data_3068_V_read.read();
        } else {
            ap_phi_mux_data_3068_V_read3138_phi_phi_fu_113903_p4 = ap_phi_reg_pp0_iter0_data_3068_V_read3138_phi_reg_113899.read();
        }
    } else {
        ap_phi_mux_data_3068_V_read3138_phi_phi_fu_113903_p4 = ap_phi_reg_pp0_iter0_data_3068_V_read3138_phi_reg_113899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_72157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_72157_p6 = data_3068_V_read3138_phi_reg_113899.read();
    } else {
        ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_72157_p6 = data_3068_V_read3138_rewind_reg_72153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3069_V_read3139_phi_phi_fu_113916_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3069_V_read3139_phi_phi_fu_113916_p4 = ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_72171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3069_V_read3139_phi_phi_fu_113916_p4 = data_3069_V_read.read();
        } else {
            ap_phi_mux_data_3069_V_read3139_phi_phi_fu_113916_p4 = ap_phi_reg_pp0_iter0_data_3069_V_read3139_phi_reg_113912.read();
        }
    } else {
        ap_phi_mux_data_3069_V_read3139_phi_phi_fu_113916_p4 = ap_phi_reg_pp0_iter0_data_3069_V_read3139_phi_reg_113912.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_72171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_72171_p6 = data_3069_V_read3139_phi_reg_113912.read();
    } else {
        ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_72171_p6 = data_3069_V_read3139_rewind_reg_72167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_306_V_read376_phi_phi_fu_77997_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_306_V_read376_phi_phi_fu_77997_p4 = ap_phi_mux_data_306_V_read376_rewind_phi_fu_33489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_306_V_read376_phi_phi_fu_77997_p4 = data_306_V_read.read();
        } else {
            ap_phi_mux_data_306_V_read376_phi_phi_fu_77997_p4 = ap_phi_reg_pp0_iter0_data_306_V_read376_phi_reg_77993.read();
        }
    } else {
        ap_phi_mux_data_306_V_read376_phi_phi_fu_77997_p4 = ap_phi_reg_pp0_iter0_data_306_V_read376_phi_reg_77993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_306_V_read376_rewind_phi_fu_33489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_306_V_read376_rewind_phi_fu_33489_p6 = data_306_V_read376_phi_reg_77993.read();
    } else {
        ap_phi_mux_data_306_V_read376_rewind_phi_fu_33489_p6 = data_306_V_read376_rewind_reg_33485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3070_V_read3140_phi_phi_fu_113929_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3070_V_read3140_phi_phi_fu_113929_p4 = ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_72185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3070_V_read3140_phi_phi_fu_113929_p4 = data_3070_V_read.read();
        } else {
            ap_phi_mux_data_3070_V_read3140_phi_phi_fu_113929_p4 = ap_phi_reg_pp0_iter0_data_3070_V_read3140_phi_reg_113925.read();
        }
    } else {
        ap_phi_mux_data_3070_V_read3140_phi_phi_fu_113929_p4 = ap_phi_reg_pp0_iter0_data_3070_V_read3140_phi_reg_113925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_72185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_72185_p6 = data_3070_V_read3140_phi_reg_113925.read();
    } else {
        ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_72185_p6 = data_3070_V_read3140_rewind_reg_72181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3071_V_read3141_phi_phi_fu_113942_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3071_V_read3141_phi_phi_fu_113942_p4 = ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_72199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3071_V_read3141_phi_phi_fu_113942_p4 = data_3071_V_read.read();
        } else {
            ap_phi_mux_data_3071_V_read3141_phi_phi_fu_113942_p4 = ap_phi_reg_pp0_iter0_data_3071_V_read3141_phi_reg_113938.read();
        }
    } else {
        ap_phi_mux_data_3071_V_read3141_phi_phi_fu_113942_p4 = ap_phi_reg_pp0_iter0_data_3071_V_read3141_phi_reg_113938.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_72199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_72199_p6 = data_3071_V_read3141_phi_reg_113938.read();
    } else {
        ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_72199_p6 = data_3071_V_read3141_rewind_reg_72195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3072_V_read3142_phi_phi_fu_113955_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3072_V_read3142_phi_phi_fu_113955_p4 = ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_72213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3072_V_read3142_phi_phi_fu_113955_p4 = data_3072_V_read.read();
        } else {
            ap_phi_mux_data_3072_V_read3142_phi_phi_fu_113955_p4 = ap_phi_reg_pp0_iter0_data_3072_V_read3142_phi_reg_113951.read();
        }
    } else {
        ap_phi_mux_data_3072_V_read3142_phi_phi_fu_113955_p4 = ap_phi_reg_pp0_iter0_data_3072_V_read3142_phi_reg_113951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_72213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_72213_p6 = data_3072_V_read3142_phi_reg_113951.read();
    } else {
        ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_72213_p6 = data_3072_V_read3142_rewind_reg_72209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3073_V_read3143_phi_phi_fu_113968_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3073_V_read3143_phi_phi_fu_113968_p4 = ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_72227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3073_V_read3143_phi_phi_fu_113968_p4 = data_3073_V_read.read();
        } else {
            ap_phi_mux_data_3073_V_read3143_phi_phi_fu_113968_p4 = ap_phi_reg_pp0_iter0_data_3073_V_read3143_phi_reg_113964.read();
        }
    } else {
        ap_phi_mux_data_3073_V_read3143_phi_phi_fu_113968_p4 = ap_phi_reg_pp0_iter0_data_3073_V_read3143_phi_reg_113964.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_72227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_72227_p6 = data_3073_V_read3143_phi_reg_113964.read();
    } else {
        ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_72227_p6 = data_3073_V_read3143_rewind_reg_72223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3074_V_read3144_phi_phi_fu_113981_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3074_V_read3144_phi_phi_fu_113981_p4 = ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_72241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3074_V_read3144_phi_phi_fu_113981_p4 = data_3074_V_read.read();
        } else {
            ap_phi_mux_data_3074_V_read3144_phi_phi_fu_113981_p4 = ap_phi_reg_pp0_iter0_data_3074_V_read3144_phi_reg_113977.read();
        }
    } else {
        ap_phi_mux_data_3074_V_read3144_phi_phi_fu_113981_p4 = ap_phi_reg_pp0_iter0_data_3074_V_read3144_phi_reg_113977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_72241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_72241_p6 = data_3074_V_read3144_phi_reg_113977.read();
    } else {
        ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_72241_p6 = data_3074_V_read3144_rewind_reg_72237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3075_V_read3145_phi_phi_fu_113994_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3075_V_read3145_phi_phi_fu_113994_p4 = ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_72255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3075_V_read3145_phi_phi_fu_113994_p4 = data_3075_V_read.read();
        } else {
            ap_phi_mux_data_3075_V_read3145_phi_phi_fu_113994_p4 = ap_phi_reg_pp0_iter0_data_3075_V_read3145_phi_reg_113990.read();
        }
    } else {
        ap_phi_mux_data_3075_V_read3145_phi_phi_fu_113994_p4 = ap_phi_reg_pp0_iter0_data_3075_V_read3145_phi_reg_113990.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_72255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_72255_p6 = data_3075_V_read3145_phi_reg_113990.read();
    } else {
        ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_72255_p6 = data_3075_V_read3145_rewind_reg_72251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3076_V_read3146_phi_phi_fu_114007_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3076_V_read3146_phi_phi_fu_114007_p4 = ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_72269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3076_V_read3146_phi_phi_fu_114007_p4 = data_3076_V_read.read();
        } else {
            ap_phi_mux_data_3076_V_read3146_phi_phi_fu_114007_p4 = ap_phi_reg_pp0_iter0_data_3076_V_read3146_phi_reg_114003.read();
        }
    } else {
        ap_phi_mux_data_3076_V_read3146_phi_phi_fu_114007_p4 = ap_phi_reg_pp0_iter0_data_3076_V_read3146_phi_reg_114003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_72269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_72269_p6 = data_3076_V_read3146_phi_reg_114003.read();
    } else {
        ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_72269_p6 = data_3076_V_read3146_rewind_reg_72265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3077_V_read3147_phi_phi_fu_114020_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3077_V_read3147_phi_phi_fu_114020_p4 = ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_72283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3077_V_read3147_phi_phi_fu_114020_p4 = data_3077_V_read.read();
        } else {
            ap_phi_mux_data_3077_V_read3147_phi_phi_fu_114020_p4 = ap_phi_reg_pp0_iter0_data_3077_V_read3147_phi_reg_114016.read();
        }
    } else {
        ap_phi_mux_data_3077_V_read3147_phi_phi_fu_114020_p4 = ap_phi_reg_pp0_iter0_data_3077_V_read3147_phi_reg_114016.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_72283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_72283_p6 = data_3077_V_read3147_phi_reg_114016.read();
    } else {
        ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_72283_p6 = data_3077_V_read3147_rewind_reg_72279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3078_V_read3148_phi_phi_fu_114033_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3078_V_read3148_phi_phi_fu_114033_p4 = ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_72297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3078_V_read3148_phi_phi_fu_114033_p4 = data_3078_V_read.read();
        } else {
            ap_phi_mux_data_3078_V_read3148_phi_phi_fu_114033_p4 = ap_phi_reg_pp0_iter0_data_3078_V_read3148_phi_reg_114029.read();
        }
    } else {
        ap_phi_mux_data_3078_V_read3148_phi_phi_fu_114033_p4 = ap_phi_reg_pp0_iter0_data_3078_V_read3148_phi_reg_114029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_72297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_72297_p6 = data_3078_V_read3148_phi_reg_114029.read();
    } else {
        ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_72297_p6 = data_3078_V_read3148_rewind_reg_72293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3079_V_read3149_phi_phi_fu_114046_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3079_V_read3149_phi_phi_fu_114046_p4 = ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_72311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3079_V_read3149_phi_phi_fu_114046_p4 = data_3079_V_read.read();
        } else {
            ap_phi_mux_data_3079_V_read3149_phi_phi_fu_114046_p4 = ap_phi_reg_pp0_iter0_data_3079_V_read3149_phi_reg_114042.read();
        }
    } else {
        ap_phi_mux_data_3079_V_read3149_phi_phi_fu_114046_p4 = ap_phi_reg_pp0_iter0_data_3079_V_read3149_phi_reg_114042.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_72311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_72311_p6 = data_3079_V_read3149_phi_reg_114042.read();
    } else {
        ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_72311_p6 = data_3079_V_read3149_rewind_reg_72307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_307_V_read377_phi_phi_fu_78010_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_307_V_read377_phi_phi_fu_78010_p4 = ap_phi_mux_data_307_V_read377_rewind_phi_fu_33503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_307_V_read377_phi_phi_fu_78010_p4 = data_307_V_read.read();
        } else {
            ap_phi_mux_data_307_V_read377_phi_phi_fu_78010_p4 = ap_phi_reg_pp0_iter0_data_307_V_read377_phi_reg_78006.read();
        }
    } else {
        ap_phi_mux_data_307_V_read377_phi_phi_fu_78010_p4 = ap_phi_reg_pp0_iter0_data_307_V_read377_phi_reg_78006.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_307_V_read377_rewind_phi_fu_33503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_307_V_read377_rewind_phi_fu_33503_p6 = data_307_V_read377_phi_reg_78006.read();
    } else {
        ap_phi_mux_data_307_V_read377_rewind_phi_fu_33503_p6 = data_307_V_read377_rewind_reg_33499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3080_V_read3150_phi_phi_fu_114059_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3080_V_read3150_phi_phi_fu_114059_p4 = ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_72325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3080_V_read3150_phi_phi_fu_114059_p4 = data_3080_V_read.read();
        } else {
            ap_phi_mux_data_3080_V_read3150_phi_phi_fu_114059_p4 = ap_phi_reg_pp0_iter0_data_3080_V_read3150_phi_reg_114055.read();
        }
    } else {
        ap_phi_mux_data_3080_V_read3150_phi_phi_fu_114059_p4 = ap_phi_reg_pp0_iter0_data_3080_V_read3150_phi_reg_114055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_72325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_72325_p6 = data_3080_V_read3150_phi_reg_114055.read();
    } else {
        ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_72325_p6 = data_3080_V_read3150_rewind_reg_72321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3081_V_read3151_phi_phi_fu_114072_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3081_V_read3151_phi_phi_fu_114072_p4 = ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_72339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3081_V_read3151_phi_phi_fu_114072_p4 = data_3081_V_read.read();
        } else {
            ap_phi_mux_data_3081_V_read3151_phi_phi_fu_114072_p4 = ap_phi_reg_pp0_iter0_data_3081_V_read3151_phi_reg_114068.read();
        }
    } else {
        ap_phi_mux_data_3081_V_read3151_phi_phi_fu_114072_p4 = ap_phi_reg_pp0_iter0_data_3081_V_read3151_phi_reg_114068.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_72339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_72339_p6 = data_3081_V_read3151_phi_reg_114068.read();
    } else {
        ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_72339_p6 = data_3081_V_read3151_rewind_reg_72335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3082_V_read3152_phi_phi_fu_114085_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3082_V_read3152_phi_phi_fu_114085_p4 = ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_72353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3082_V_read3152_phi_phi_fu_114085_p4 = data_3082_V_read.read();
        } else {
            ap_phi_mux_data_3082_V_read3152_phi_phi_fu_114085_p4 = ap_phi_reg_pp0_iter0_data_3082_V_read3152_phi_reg_114081.read();
        }
    } else {
        ap_phi_mux_data_3082_V_read3152_phi_phi_fu_114085_p4 = ap_phi_reg_pp0_iter0_data_3082_V_read3152_phi_reg_114081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_72353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_72353_p6 = data_3082_V_read3152_phi_reg_114081.read();
    } else {
        ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_72353_p6 = data_3082_V_read3152_rewind_reg_72349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3083_V_read3153_phi_phi_fu_114098_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3083_V_read3153_phi_phi_fu_114098_p4 = ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_72367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3083_V_read3153_phi_phi_fu_114098_p4 = data_3083_V_read.read();
        } else {
            ap_phi_mux_data_3083_V_read3153_phi_phi_fu_114098_p4 = ap_phi_reg_pp0_iter0_data_3083_V_read3153_phi_reg_114094.read();
        }
    } else {
        ap_phi_mux_data_3083_V_read3153_phi_phi_fu_114098_p4 = ap_phi_reg_pp0_iter0_data_3083_V_read3153_phi_reg_114094.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_72367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_72367_p6 = data_3083_V_read3153_phi_reg_114094.read();
    } else {
        ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_72367_p6 = data_3083_V_read3153_rewind_reg_72363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3084_V_read3154_phi_phi_fu_114111_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3084_V_read3154_phi_phi_fu_114111_p4 = ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_72381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3084_V_read3154_phi_phi_fu_114111_p4 = data_3084_V_read.read();
        } else {
            ap_phi_mux_data_3084_V_read3154_phi_phi_fu_114111_p4 = ap_phi_reg_pp0_iter0_data_3084_V_read3154_phi_reg_114107.read();
        }
    } else {
        ap_phi_mux_data_3084_V_read3154_phi_phi_fu_114111_p4 = ap_phi_reg_pp0_iter0_data_3084_V_read3154_phi_reg_114107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_72381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_72381_p6 = data_3084_V_read3154_phi_reg_114107.read();
    } else {
        ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_72381_p6 = data_3084_V_read3154_rewind_reg_72377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3085_V_read3155_phi_phi_fu_114124_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3085_V_read3155_phi_phi_fu_114124_p4 = ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_72395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3085_V_read3155_phi_phi_fu_114124_p4 = data_3085_V_read.read();
        } else {
            ap_phi_mux_data_3085_V_read3155_phi_phi_fu_114124_p4 = ap_phi_reg_pp0_iter0_data_3085_V_read3155_phi_reg_114120.read();
        }
    } else {
        ap_phi_mux_data_3085_V_read3155_phi_phi_fu_114124_p4 = ap_phi_reg_pp0_iter0_data_3085_V_read3155_phi_reg_114120.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_72395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_72395_p6 = data_3085_V_read3155_phi_reg_114120.read();
    } else {
        ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_72395_p6 = data_3085_V_read3155_rewind_reg_72391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3086_V_read3156_phi_phi_fu_114137_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3086_V_read3156_phi_phi_fu_114137_p4 = ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_72409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3086_V_read3156_phi_phi_fu_114137_p4 = data_3086_V_read.read();
        } else {
            ap_phi_mux_data_3086_V_read3156_phi_phi_fu_114137_p4 = ap_phi_reg_pp0_iter0_data_3086_V_read3156_phi_reg_114133.read();
        }
    } else {
        ap_phi_mux_data_3086_V_read3156_phi_phi_fu_114137_p4 = ap_phi_reg_pp0_iter0_data_3086_V_read3156_phi_reg_114133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_72409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_72409_p6 = data_3086_V_read3156_phi_reg_114133.read();
    } else {
        ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_72409_p6 = data_3086_V_read3156_rewind_reg_72405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3087_V_read3157_phi_phi_fu_114150_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3087_V_read3157_phi_phi_fu_114150_p4 = ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_72423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3087_V_read3157_phi_phi_fu_114150_p4 = data_3087_V_read.read();
        } else {
            ap_phi_mux_data_3087_V_read3157_phi_phi_fu_114150_p4 = ap_phi_reg_pp0_iter0_data_3087_V_read3157_phi_reg_114146.read();
        }
    } else {
        ap_phi_mux_data_3087_V_read3157_phi_phi_fu_114150_p4 = ap_phi_reg_pp0_iter0_data_3087_V_read3157_phi_reg_114146.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_72423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_72423_p6 = data_3087_V_read3157_phi_reg_114146.read();
    } else {
        ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_72423_p6 = data_3087_V_read3157_rewind_reg_72419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3088_V_read3158_phi_phi_fu_114163_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3088_V_read3158_phi_phi_fu_114163_p4 = ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_72437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3088_V_read3158_phi_phi_fu_114163_p4 = data_3088_V_read.read();
        } else {
            ap_phi_mux_data_3088_V_read3158_phi_phi_fu_114163_p4 = ap_phi_reg_pp0_iter0_data_3088_V_read3158_phi_reg_114159.read();
        }
    } else {
        ap_phi_mux_data_3088_V_read3158_phi_phi_fu_114163_p4 = ap_phi_reg_pp0_iter0_data_3088_V_read3158_phi_reg_114159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_72437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_72437_p6 = data_3088_V_read3158_phi_reg_114159.read();
    } else {
        ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_72437_p6 = data_3088_V_read3158_rewind_reg_72433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3089_V_read3159_phi_phi_fu_114176_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3089_V_read3159_phi_phi_fu_114176_p4 = ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_72451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3089_V_read3159_phi_phi_fu_114176_p4 = data_3089_V_read.read();
        } else {
            ap_phi_mux_data_3089_V_read3159_phi_phi_fu_114176_p4 = ap_phi_reg_pp0_iter0_data_3089_V_read3159_phi_reg_114172.read();
        }
    } else {
        ap_phi_mux_data_3089_V_read3159_phi_phi_fu_114176_p4 = ap_phi_reg_pp0_iter0_data_3089_V_read3159_phi_reg_114172.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_72451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_72451_p6 = data_3089_V_read3159_phi_reg_114172.read();
    } else {
        ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_72451_p6 = data_3089_V_read3159_rewind_reg_72447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_308_V_read378_phi_phi_fu_78023_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_308_V_read378_phi_phi_fu_78023_p4 = ap_phi_mux_data_308_V_read378_rewind_phi_fu_33517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_308_V_read378_phi_phi_fu_78023_p4 = data_308_V_read.read();
        } else {
            ap_phi_mux_data_308_V_read378_phi_phi_fu_78023_p4 = ap_phi_reg_pp0_iter0_data_308_V_read378_phi_reg_78019.read();
        }
    } else {
        ap_phi_mux_data_308_V_read378_phi_phi_fu_78023_p4 = ap_phi_reg_pp0_iter0_data_308_V_read378_phi_reg_78019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_308_V_read378_rewind_phi_fu_33517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_308_V_read378_rewind_phi_fu_33517_p6 = data_308_V_read378_phi_reg_78019.read();
    } else {
        ap_phi_mux_data_308_V_read378_rewind_phi_fu_33517_p6 = data_308_V_read378_rewind_reg_33513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3090_V_read3160_phi_phi_fu_114189_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3090_V_read3160_phi_phi_fu_114189_p4 = ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_72465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3090_V_read3160_phi_phi_fu_114189_p4 = data_3090_V_read.read();
        } else {
            ap_phi_mux_data_3090_V_read3160_phi_phi_fu_114189_p4 = ap_phi_reg_pp0_iter0_data_3090_V_read3160_phi_reg_114185.read();
        }
    } else {
        ap_phi_mux_data_3090_V_read3160_phi_phi_fu_114189_p4 = ap_phi_reg_pp0_iter0_data_3090_V_read3160_phi_reg_114185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_72465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_72465_p6 = data_3090_V_read3160_phi_reg_114185.read();
    } else {
        ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_72465_p6 = data_3090_V_read3160_rewind_reg_72461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3091_V_read3161_phi_phi_fu_114202_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3091_V_read3161_phi_phi_fu_114202_p4 = ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_72479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3091_V_read3161_phi_phi_fu_114202_p4 = data_3091_V_read.read();
        } else {
            ap_phi_mux_data_3091_V_read3161_phi_phi_fu_114202_p4 = ap_phi_reg_pp0_iter0_data_3091_V_read3161_phi_reg_114198.read();
        }
    } else {
        ap_phi_mux_data_3091_V_read3161_phi_phi_fu_114202_p4 = ap_phi_reg_pp0_iter0_data_3091_V_read3161_phi_reg_114198.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_72479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_72479_p6 = data_3091_V_read3161_phi_reg_114198.read();
    } else {
        ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_72479_p6 = data_3091_V_read3161_rewind_reg_72475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3092_V_read3162_phi_phi_fu_114215_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3092_V_read3162_phi_phi_fu_114215_p4 = ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_72493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3092_V_read3162_phi_phi_fu_114215_p4 = data_3092_V_read.read();
        } else {
            ap_phi_mux_data_3092_V_read3162_phi_phi_fu_114215_p4 = ap_phi_reg_pp0_iter0_data_3092_V_read3162_phi_reg_114211.read();
        }
    } else {
        ap_phi_mux_data_3092_V_read3162_phi_phi_fu_114215_p4 = ap_phi_reg_pp0_iter0_data_3092_V_read3162_phi_reg_114211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_72493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_72493_p6 = data_3092_V_read3162_phi_reg_114211.read();
    } else {
        ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_72493_p6 = data_3092_V_read3162_rewind_reg_72489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3093_V_read3163_phi_phi_fu_114228_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3093_V_read3163_phi_phi_fu_114228_p4 = ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_72507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3093_V_read3163_phi_phi_fu_114228_p4 = data_3093_V_read.read();
        } else {
            ap_phi_mux_data_3093_V_read3163_phi_phi_fu_114228_p4 = ap_phi_reg_pp0_iter0_data_3093_V_read3163_phi_reg_114224.read();
        }
    } else {
        ap_phi_mux_data_3093_V_read3163_phi_phi_fu_114228_p4 = ap_phi_reg_pp0_iter0_data_3093_V_read3163_phi_reg_114224.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_72507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_72507_p6 = data_3093_V_read3163_phi_reg_114224.read();
    } else {
        ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_72507_p6 = data_3093_V_read3163_rewind_reg_72503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3094_V_read3164_phi_phi_fu_114241_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3094_V_read3164_phi_phi_fu_114241_p4 = ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_72521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3094_V_read3164_phi_phi_fu_114241_p4 = data_3094_V_read.read();
        } else {
            ap_phi_mux_data_3094_V_read3164_phi_phi_fu_114241_p4 = ap_phi_reg_pp0_iter0_data_3094_V_read3164_phi_reg_114237.read();
        }
    } else {
        ap_phi_mux_data_3094_V_read3164_phi_phi_fu_114241_p4 = ap_phi_reg_pp0_iter0_data_3094_V_read3164_phi_reg_114237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_72521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_72521_p6 = data_3094_V_read3164_phi_reg_114237.read();
    } else {
        ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_72521_p6 = data_3094_V_read3164_rewind_reg_72517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3095_V_read3165_phi_phi_fu_114254_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3095_V_read3165_phi_phi_fu_114254_p4 = ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_72535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3095_V_read3165_phi_phi_fu_114254_p4 = data_3095_V_read.read();
        } else {
            ap_phi_mux_data_3095_V_read3165_phi_phi_fu_114254_p4 = ap_phi_reg_pp0_iter0_data_3095_V_read3165_phi_reg_114250.read();
        }
    } else {
        ap_phi_mux_data_3095_V_read3165_phi_phi_fu_114254_p4 = ap_phi_reg_pp0_iter0_data_3095_V_read3165_phi_reg_114250.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_72535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_72535_p6 = data_3095_V_read3165_phi_reg_114250.read();
    } else {
        ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_72535_p6 = data_3095_V_read3165_rewind_reg_72531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3096_V_read3166_phi_phi_fu_114267_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3096_V_read3166_phi_phi_fu_114267_p4 = ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_72549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3096_V_read3166_phi_phi_fu_114267_p4 = data_3096_V_read.read();
        } else {
            ap_phi_mux_data_3096_V_read3166_phi_phi_fu_114267_p4 = ap_phi_reg_pp0_iter0_data_3096_V_read3166_phi_reg_114263.read();
        }
    } else {
        ap_phi_mux_data_3096_V_read3166_phi_phi_fu_114267_p4 = ap_phi_reg_pp0_iter0_data_3096_V_read3166_phi_reg_114263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_72549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_72549_p6 = data_3096_V_read3166_phi_reg_114263.read();
    } else {
        ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_72549_p6 = data_3096_V_read3166_rewind_reg_72545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3097_V_read3167_phi_phi_fu_114280_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3097_V_read3167_phi_phi_fu_114280_p4 = ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_72563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3097_V_read3167_phi_phi_fu_114280_p4 = data_3097_V_read.read();
        } else {
            ap_phi_mux_data_3097_V_read3167_phi_phi_fu_114280_p4 = ap_phi_reg_pp0_iter0_data_3097_V_read3167_phi_reg_114276.read();
        }
    } else {
        ap_phi_mux_data_3097_V_read3167_phi_phi_fu_114280_p4 = ap_phi_reg_pp0_iter0_data_3097_V_read3167_phi_reg_114276.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_72563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_72563_p6 = data_3097_V_read3167_phi_reg_114276.read();
    } else {
        ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_72563_p6 = data_3097_V_read3167_rewind_reg_72559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3098_V_read3168_phi_phi_fu_114293_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3098_V_read3168_phi_phi_fu_114293_p4 = ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_72577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3098_V_read3168_phi_phi_fu_114293_p4 = data_3098_V_read.read();
        } else {
            ap_phi_mux_data_3098_V_read3168_phi_phi_fu_114293_p4 = ap_phi_reg_pp0_iter0_data_3098_V_read3168_phi_reg_114289.read();
        }
    } else {
        ap_phi_mux_data_3098_V_read3168_phi_phi_fu_114293_p4 = ap_phi_reg_pp0_iter0_data_3098_V_read3168_phi_reg_114289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_72577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_72577_p6 = data_3098_V_read3168_phi_reg_114289.read();
    } else {
        ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_72577_p6 = data_3098_V_read3168_rewind_reg_72573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3099_V_read3169_phi_phi_fu_114306_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3099_V_read3169_phi_phi_fu_114306_p4 = ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_72591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3099_V_read3169_phi_phi_fu_114306_p4 = data_3099_V_read.read();
        } else {
            ap_phi_mux_data_3099_V_read3169_phi_phi_fu_114306_p4 = ap_phi_reg_pp0_iter0_data_3099_V_read3169_phi_reg_114302.read();
        }
    } else {
        ap_phi_mux_data_3099_V_read3169_phi_phi_fu_114306_p4 = ap_phi_reg_pp0_iter0_data_3099_V_read3169_phi_reg_114302.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_72591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_72591_p6 = data_3099_V_read3169_phi_reg_114302.read();
    } else {
        ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_72591_p6 = data_3099_V_read3169_rewind_reg_72587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_309_V_read379_phi_phi_fu_78036_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_309_V_read379_phi_phi_fu_78036_p4 = ap_phi_mux_data_309_V_read379_rewind_phi_fu_33531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_309_V_read379_phi_phi_fu_78036_p4 = data_309_V_read.read();
        } else {
            ap_phi_mux_data_309_V_read379_phi_phi_fu_78036_p4 = ap_phi_reg_pp0_iter0_data_309_V_read379_phi_reg_78032.read();
        }
    } else {
        ap_phi_mux_data_309_V_read379_phi_phi_fu_78036_p4 = ap_phi_reg_pp0_iter0_data_309_V_read379_phi_reg_78032.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_309_V_read379_rewind_phi_fu_33531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_309_V_read379_rewind_phi_fu_33531_p6 = data_309_V_read379_phi_reg_78032.read();
    } else {
        ap_phi_mux_data_309_V_read379_rewind_phi_fu_33531_p6 = data_309_V_read379_rewind_reg_33527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_30_V_read100_phi_phi_fu_74409_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_30_V_read100_phi_phi_fu_74409_p4 = ap_phi_mux_data_30_V_read100_rewind_phi_fu_29625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_30_V_read100_phi_phi_fu_74409_p4 = data_30_V_read.read();
        } else {
            ap_phi_mux_data_30_V_read100_phi_phi_fu_74409_p4 = ap_phi_reg_pp0_iter0_data_30_V_read100_phi_reg_74405.read();
        }
    } else {
        ap_phi_mux_data_30_V_read100_phi_phi_fu_74409_p4 = ap_phi_reg_pp0_iter0_data_30_V_read100_phi_reg_74405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_30_V_read100_rewind_phi_fu_29625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_30_V_read100_rewind_phi_fu_29625_p6 = data_30_V_read100_phi_reg_74405.read();
    } else {
        ap_phi_mux_data_30_V_read100_rewind_phi_fu_29625_p6 = data_30_V_read100_rewind_reg_29621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3100_V_read3170_phi_phi_fu_114319_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3100_V_read3170_phi_phi_fu_114319_p4 = ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_72605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3100_V_read3170_phi_phi_fu_114319_p4 = data_3100_V_read.read();
        } else {
            ap_phi_mux_data_3100_V_read3170_phi_phi_fu_114319_p4 = ap_phi_reg_pp0_iter0_data_3100_V_read3170_phi_reg_114315.read();
        }
    } else {
        ap_phi_mux_data_3100_V_read3170_phi_phi_fu_114319_p4 = ap_phi_reg_pp0_iter0_data_3100_V_read3170_phi_reg_114315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_72605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_72605_p6 = data_3100_V_read3170_phi_reg_114315.read();
    } else {
        ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_72605_p6 = data_3100_V_read3170_rewind_reg_72601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3101_V_read3171_phi_phi_fu_114332_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3101_V_read3171_phi_phi_fu_114332_p4 = ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_72619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3101_V_read3171_phi_phi_fu_114332_p4 = data_3101_V_read.read();
        } else {
            ap_phi_mux_data_3101_V_read3171_phi_phi_fu_114332_p4 = ap_phi_reg_pp0_iter0_data_3101_V_read3171_phi_reg_114328.read();
        }
    } else {
        ap_phi_mux_data_3101_V_read3171_phi_phi_fu_114332_p4 = ap_phi_reg_pp0_iter0_data_3101_V_read3171_phi_reg_114328.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_72619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_72619_p6 = data_3101_V_read3171_phi_reg_114328.read();
    } else {
        ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_72619_p6 = data_3101_V_read3171_rewind_reg_72615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3102_V_read3172_phi_phi_fu_114345_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3102_V_read3172_phi_phi_fu_114345_p4 = ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_72633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3102_V_read3172_phi_phi_fu_114345_p4 = data_3102_V_read.read();
        } else {
            ap_phi_mux_data_3102_V_read3172_phi_phi_fu_114345_p4 = ap_phi_reg_pp0_iter0_data_3102_V_read3172_phi_reg_114341.read();
        }
    } else {
        ap_phi_mux_data_3102_V_read3172_phi_phi_fu_114345_p4 = ap_phi_reg_pp0_iter0_data_3102_V_read3172_phi_reg_114341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_72633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_72633_p6 = data_3102_V_read3172_phi_reg_114341.read();
    } else {
        ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_72633_p6 = data_3102_V_read3172_rewind_reg_72629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3103_V_read3173_phi_phi_fu_114358_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3103_V_read3173_phi_phi_fu_114358_p4 = ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_72647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3103_V_read3173_phi_phi_fu_114358_p4 = data_3103_V_read.read();
        } else {
            ap_phi_mux_data_3103_V_read3173_phi_phi_fu_114358_p4 = ap_phi_reg_pp0_iter0_data_3103_V_read3173_phi_reg_114354.read();
        }
    } else {
        ap_phi_mux_data_3103_V_read3173_phi_phi_fu_114358_p4 = ap_phi_reg_pp0_iter0_data_3103_V_read3173_phi_reg_114354.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_72647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_72647_p6 = data_3103_V_read3173_phi_reg_114354.read();
    } else {
        ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_72647_p6 = data_3103_V_read3173_rewind_reg_72643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3104_V_read3174_phi_phi_fu_114371_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3104_V_read3174_phi_phi_fu_114371_p4 = ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_72661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3104_V_read3174_phi_phi_fu_114371_p4 = data_3104_V_read.read();
        } else {
            ap_phi_mux_data_3104_V_read3174_phi_phi_fu_114371_p4 = ap_phi_reg_pp0_iter0_data_3104_V_read3174_phi_reg_114367.read();
        }
    } else {
        ap_phi_mux_data_3104_V_read3174_phi_phi_fu_114371_p4 = ap_phi_reg_pp0_iter0_data_3104_V_read3174_phi_reg_114367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_72661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_72661_p6 = data_3104_V_read3174_phi_reg_114367.read();
    } else {
        ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_72661_p6 = data_3104_V_read3174_rewind_reg_72657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3105_V_read3175_phi_phi_fu_114384_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3105_V_read3175_phi_phi_fu_114384_p4 = ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_72675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3105_V_read3175_phi_phi_fu_114384_p4 = data_3105_V_read.read();
        } else {
            ap_phi_mux_data_3105_V_read3175_phi_phi_fu_114384_p4 = ap_phi_reg_pp0_iter0_data_3105_V_read3175_phi_reg_114380.read();
        }
    } else {
        ap_phi_mux_data_3105_V_read3175_phi_phi_fu_114384_p4 = ap_phi_reg_pp0_iter0_data_3105_V_read3175_phi_reg_114380.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_72675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_72675_p6 = data_3105_V_read3175_phi_reg_114380.read();
    } else {
        ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_72675_p6 = data_3105_V_read3175_rewind_reg_72671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3106_V_read3176_phi_phi_fu_114397_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3106_V_read3176_phi_phi_fu_114397_p4 = ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_72689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3106_V_read3176_phi_phi_fu_114397_p4 = data_3106_V_read.read();
        } else {
            ap_phi_mux_data_3106_V_read3176_phi_phi_fu_114397_p4 = ap_phi_reg_pp0_iter0_data_3106_V_read3176_phi_reg_114393.read();
        }
    } else {
        ap_phi_mux_data_3106_V_read3176_phi_phi_fu_114397_p4 = ap_phi_reg_pp0_iter0_data_3106_V_read3176_phi_reg_114393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_72689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_72689_p6 = data_3106_V_read3176_phi_reg_114393.read();
    } else {
        ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_72689_p6 = data_3106_V_read3176_rewind_reg_72685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3107_V_read3177_phi_phi_fu_114410_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3107_V_read3177_phi_phi_fu_114410_p4 = ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_72703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3107_V_read3177_phi_phi_fu_114410_p4 = data_3107_V_read.read();
        } else {
            ap_phi_mux_data_3107_V_read3177_phi_phi_fu_114410_p4 = ap_phi_reg_pp0_iter0_data_3107_V_read3177_phi_reg_114406.read();
        }
    } else {
        ap_phi_mux_data_3107_V_read3177_phi_phi_fu_114410_p4 = ap_phi_reg_pp0_iter0_data_3107_V_read3177_phi_reg_114406.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_72703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_72703_p6 = data_3107_V_read3177_phi_reg_114406.read();
    } else {
        ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_72703_p6 = data_3107_V_read3177_rewind_reg_72699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3108_V_read3178_phi_phi_fu_114423_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3108_V_read3178_phi_phi_fu_114423_p4 = ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_72717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3108_V_read3178_phi_phi_fu_114423_p4 = data_3108_V_read.read();
        } else {
            ap_phi_mux_data_3108_V_read3178_phi_phi_fu_114423_p4 = ap_phi_reg_pp0_iter0_data_3108_V_read3178_phi_reg_114419.read();
        }
    } else {
        ap_phi_mux_data_3108_V_read3178_phi_phi_fu_114423_p4 = ap_phi_reg_pp0_iter0_data_3108_V_read3178_phi_reg_114419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_72717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_72717_p6 = data_3108_V_read3178_phi_reg_114419.read();
    } else {
        ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_72717_p6 = data_3108_V_read3178_rewind_reg_72713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3109_V_read3179_phi_phi_fu_114436_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3109_V_read3179_phi_phi_fu_114436_p4 = ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_72731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3109_V_read3179_phi_phi_fu_114436_p4 = data_3109_V_read.read();
        } else {
            ap_phi_mux_data_3109_V_read3179_phi_phi_fu_114436_p4 = ap_phi_reg_pp0_iter0_data_3109_V_read3179_phi_reg_114432.read();
        }
    } else {
        ap_phi_mux_data_3109_V_read3179_phi_phi_fu_114436_p4 = ap_phi_reg_pp0_iter0_data_3109_V_read3179_phi_reg_114432.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_72731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_72731_p6 = data_3109_V_read3179_phi_reg_114432.read();
    } else {
        ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_72731_p6 = data_3109_V_read3179_rewind_reg_72727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_310_V_read380_phi_phi_fu_78049_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_310_V_read380_phi_phi_fu_78049_p4 = ap_phi_mux_data_310_V_read380_rewind_phi_fu_33545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_310_V_read380_phi_phi_fu_78049_p4 = data_310_V_read.read();
        } else {
            ap_phi_mux_data_310_V_read380_phi_phi_fu_78049_p4 = ap_phi_reg_pp0_iter0_data_310_V_read380_phi_reg_78045.read();
        }
    } else {
        ap_phi_mux_data_310_V_read380_phi_phi_fu_78049_p4 = ap_phi_reg_pp0_iter0_data_310_V_read380_phi_reg_78045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_310_V_read380_rewind_phi_fu_33545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_310_V_read380_rewind_phi_fu_33545_p6 = data_310_V_read380_phi_reg_78045.read();
    } else {
        ap_phi_mux_data_310_V_read380_rewind_phi_fu_33545_p6 = data_310_V_read380_rewind_reg_33541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3110_V_read3180_phi_phi_fu_114449_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3110_V_read3180_phi_phi_fu_114449_p4 = ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_72745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3110_V_read3180_phi_phi_fu_114449_p4 = data_3110_V_read.read();
        } else {
            ap_phi_mux_data_3110_V_read3180_phi_phi_fu_114449_p4 = ap_phi_reg_pp0_iter0_data_3110_V_read3180_phi_reg_114445.read();
        }
    } else {
        ap_phi_mux_data_3110_V_read3180_phi_phi_fu_114449_p4 = ap_phi_reg_pp0_iter0_data_3110_V_read3180_phi_reg_114445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_72745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_72745_p6 = data_3110_V_read3180_phi_reg_114445.read();
    } else {
        ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_72745_p6 = data_3110_V_read3180_rewind_reg_72741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3111_V_read3181_phi_phi_fu_114462_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3111_V_read3181_phi_phi_fu_114462_p4 = ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_72759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3111_V_read3181_phi_phi_fu_114462_p4 = data_3111_V_read.read();
        } else {
            ap_phi_mux_data_3111_V_read3181_phi_phi_fu_114462_p4 = ap_phi_reg_pp0_iter0_data_3111_V_read3181_phi_reg_114458.read();
        }
    } else {
        ap_phi_mux_data_3111_V_read3181_phi_phi_fu_114462_p4 = ap_phi_reg_pp0_iter0_data_3111_V_read3181_phi_reg_114458.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_72759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_72759_p6 = data_3111_V_read3181_phi_reg_114458.read();
    } else {
        ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_72759_p6 = data_3111_V_read3181_rewind_reg_72755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3112_V_read3182_phi_phi_fu_114475_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3112_V_read3182_phi_phi_fu_114475_p4 = ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_72773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3112_V_read3182_phi_phi_fu_114475_p4 = data_3112_V_read.read();
        } else {
            ap_phi_mux_data_3112_V_read3182_phi_phi_fu_114475_p4 = ap_phi_reg_pp0_iter0_data_3112_V_read3182_phi_reg_114471.read();
        }
    } else {
        ap_phi_mux_data_3112_V_read3182_phi_phi_fu_114475_p4 = ap_phi_reg_pp0_iter0_data_3112_V_read3182_phi_reg_114471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_72773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_72773_p6 = data_3112_V_read3182_phi_reg_114471.read();
    } else {
        ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_72773_p6 = data_3112_V_read3182_rewind_reg_72769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3113_V_read3183_phi_phi_fu_114488_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3113_V_read3183_phi_phi_fu_114488_p4 = ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_72787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3113_V_read3183_phi_phi_fu_114488_p4 = data_3113_V_read.read();
        } else {
            ap_phi_mux_data_3113_V_read3183_phi_phi_fu_114488_p4 = ap_phi_reg_pp0_iter0_data_3113_V_read3183_phi_reg_114484.read();
        }
    } else {
        ap_phi_mux_data_3113_V_read3183_phi_phi_fu_114488_p4 = ap_phi_reg_pp0_iter0_data_3113_V_read3183_phi_reg_114484.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_72787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_72787_p6 = data_3113_V_read3183_phi_reg_114484.read();
    } else {
        ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_72787_p6 = data_3113_V_read3183_rewind_reg_72783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3114_V_read3184_phi_phi_fu_114501_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3114_V_read3184_phi_phi_fu_114501_p4 = ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_72801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3114_V_read3184_phi_phi_fu_114501_p4 = data_3114_V_read.read();
        } else {
            ap_phi_mux_data_3114_V_read3184_phi_phi_fu_114501_p4 = ap_phi_reg_pp0_iter0_data_3114_V_read3184_phi_reg_114497.read();
        }
    } else {
        ap_phi_mux_data_3114_V_read3184_phi_phi_fu_114501_p4 = ap_phi_reg_pp0_iter0_data_3114_V_read3184_phi_reg_114497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_72801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_72801_p6 = data_3114_V_read3184_phi_reg_114497.read();
    } else {
        ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_72801_p6 = data_3114_V_read3184_rewind_reg_72797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3115_V_read3185_phi_phi_fu_114514_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3115_V_read3185_phi_phi_fu_114514_p4 = ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_72815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3115_V_read3185_phi_phi_fu_114514_p4 = data_3115_V_read.read();
        } else {
            ap_phi_mux_data_3115_V_read3185_phi_phi_fu_114514_p4 = ap_phi_reg_pp0_iter0_data_3115_V_read3185_phi_reg_114510.read();
        }
    } else {
        ap_phi_mux_data_3115_V_read3185_phi_phi_fu_114514_p4 = ap_phi_reg_pp0_iter0_data_3115_V_read3185_phi_reg_114510.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_72815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_72815_p6 = data_3115_V_read3185_phi_reg_114510.read();
    } else {
        ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_72815_p6 = data_3115_V_read3185_rewind_reg_72811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3116_V_read3186_phi_phi_fu_114527_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3116_V_read3186_phi_phi_fu_114527_p4 = ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_72829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3116_V_read3186_phi_phi_fu_114527_p4 = data_3116_V_read.read();
        } else {
            ap_phi_mux_data_3116_V_read3186_phi_phi_fu_114527_p4 = ap_phi_reg_pp0_iter0_data_3116_V_read3186_phi_reg_114523.read();
        }
    } else {
        ap_phi_mux_data_3116_V_read3186_phi_phi_fu_114527_p4 = ap_phi_reg_pp0_iter0_data_3116_V_read3186_phi_reg_114523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_72829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_72829_p6 = data_3116_V_read3186_phi_reg_114523.read();
    } else {
        ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_72829_p6 = data_3116_V_read3186_rewind_reg_72825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3117_V_read3187_phi_phi_fu_114540_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3117_V_read3187_phi_phi_fu_114540_p4 = ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_72843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3117_V_read3187_phi_phi_fu_114540_p4 = data_3117_V_read.read();
        } else {
            ap_phi_mux_data_3117_V_read3187_phi_phi_fu_114540_p4 = ap_phi_reg_pp0_iter0_data_3117_V_read3187_phi_reg_114536.read();
        }
    } else {
        ap_phi_mux_data_3117_V_read3187_phi_phi_fu_114540_p4 = ap_phi_reg_pp0_iter0_data_3117_V_read3187_phi_reg_114536.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_72843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_72843_p6 = data_3117_V_read3187_phi_reg_114536.read();
    } else {
        ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_72843_p6 = data_3117_V_read3187_rewind_reg_72839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3118_V_read3188_phi_phi_fu_114553_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3118_V_read3188_phi_phi_fu_114553_p4 = ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_72857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3118_V_read3188_phi_phi_fu_114553_p4 = data_3118_V_read.read();
        } else {
            ap_phi_mux_data_3118_V_read3188_phi_phi_fu_114553_p4 = ap_phi_reg_pp0_iter0_data_3118_V_read3188_phi_reg_114549.read();
        }
    } else {
        ap_phi_mux_data_3118_V_read3188_phi_phi_fu_114553_p4 = ap_phi_reg_pp0_iter0_data_3118_V_read3188_phi_reg_114549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_72857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_72857_p6 = data_3118_V_read3188_phi_reg_114549.read();
    } else {
        ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_72857_p6 = data_3118_V_read3188_rewind_reg_72853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3119_V_read3189_phi_phi_fu_114566_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3119_V_read3189_phi_phi_fu_114566_p4 = ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_72871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3119_V_read3189_phi_phi_fu_114566_p4 = data_3119_V_read.read();
        } else {
            ap_phi_mux_data_3119_V_read3189_phi_phi_fu_114566_p4 = ap_phi_reg_pp0_iter0_data_3119_V_read3189_phi_reg_114562.read();
        }
    } else {
        ap_phi_mux_data_3119_V_read3189_phi_phi_fu_114566_p4 = ap_phi_reg_pp0_iter0_data_3119_V_read3189_phi_reg_114562.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_72871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_72871_p6 = data_3119_V_read3189_phi_reg_114562.read();
    } else {
        ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_72871_p6 = data_3119_V_read3189_rewind_reg_72867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_311_V_read381_phi_phi_fu_78062_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_311_V_read381_phi_phi_fu_78062_p4 = ap_phi_mux_data_311_V_read381_rewind_phi_fu_33559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_311_V_read381_phi_phi_fu_78062_p4 = data_311_V_read.read();
        } else {
            ap_phi_mux_data_311_V_read381_phi_phi_fu_78062_p4 = ap_phi_reg_pp0_iter0_data_311_V_read381_phi_reg_78058.read();
        }
    } else {
        ap_phi_mux_data_311_V_read381_phi_phi_fu_78062_p4 = ap_phi_reg_pp0_iter0_data_311_V_read381_phi_reg_78058.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_311_V_read381_rewind_phi_fu_33559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_311_V_read381_rewind_phi_fu_33559_p6 = data_311_V_read381_phi_reg_78058.read();
    } else {
        ap_phi_mux_data_311_V_read381_rewind_phi_fu_33559_p6 = data_311_V_read381_rewind_reg_33555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3120_V_read3190_phi_phi_fu_114579_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3120_V_read3190_phi_phi_fu_114579_p4 = ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_72885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3120_V_read3190_phi_phi_fu_114579_p4 = data_3120_V_read.read();
        } else {
            ap_phi_mux_data_3120_V_read3190_phi_phi_fu_114579_p4 = ap_phi_reg_pp0_iter0_data_3120_V_read3190_phi_reg_114575.read();
        }
    } else {
        ap_phi_mux_data_3120_V_read3190_phi_phi_fu_114579_p4 = ap_phi_reg_pp0_iter0_data_3120_V_read3190_phi_reg_114575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_72885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_72885_p6 = data_3120_V_read3190_phi_reg_114575.read();
    } else {
        ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_72885_p6 = data_3120_V_read3190_rewind_reg_72881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3121_V_read3191_phi_phi_fu_114592_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3121_V_read3191_phi_phi_fu_114592_p4 = ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_72899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3121_V_read3191_phi_phi_fu_114592_p4 = data_3121_V_read.read();
        } else {
            ap_phi_mux_data_3121_V_read3191_phi_phi_fu_114592_p4 = ap_phi_reg_pp0_iter0_data_3121_V_read3191_phi_reg_114588.read();
        }
    } else {
        ap_phi_mux_data_3121_V_read3191_phi_phi_fu_114592_p4 = ap_phi_reg_pp0_iter0_data_3121_V_read3191_phi_reg_114588.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_72899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_72899_p6 = data_3121_V_read3191_phi_reg_114588.read();
    } else {
        ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_72899_p6 = data_3121_V_read3191_rewind_reg_72895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3122_V_read3192_phi_phi_fu_114605_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3122_V_read3192_phi_phi_fu_114605_p4 = ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_72913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3122_V_read3192_phi_phi_fu_114605_p4 = data_3122_V_read.read();
        } else {
            ap_phi_mux_data_3122_V_read3192_phi_phi_fu_114605_p4 = ap_phi_reg_pp0_iter0_data_3122_V_read3192_phi_reg_114601.read();
        }
    } else {
        ap_phi_mux_data_3122_V_read3192_phi_phi_fu_114605_p4 = ap_phi_reg_pp0_iter0_data_3122_V_read3192_phi_reg_114601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_72913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_72913_p6 = data_3122_V_read3192_phi_reg_114601.read();
    } else {
        ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_72913_p6 = data_3122_V_read3192_rewind_reg_72909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3123_V_read3193_phi_phi_fu_114618_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3123_V_read3193_phi_phi_fu_114618_p4 = ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_72927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3123_V_read3193_phi_phi_fu_114618_p4 = data_3123_V_read.read();
        } else {
            ap_phi_mux_data_3123_V_read3193_phi_phi_fu_114618_p4 = ap_phi_reg_pp0_iter0_data_3123_V_read3193_phi_reg_114614.read();
        }
    } else {
        ap_phi_mux_data_3123_V_read3193_phi_phi_fu_114618_p4 = ap_phi_reg_pp0_iter0_data_3123_V_read3193_phi_reg_114614.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_72927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_72927_p6 = data_3123_V_read3193_phi_reg_114614.read();
    } else {
        ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_72927_p6 = data_3123_V_read3193_rewind_reg_72923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3124_V_read3194_phi_phi_fu_114631_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3124_V_read3194_phi_phi_fu_114631_p4 = ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_72941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3124_V_read3194_phi_phi_fu_114631_p4 = data_3124_V_read.read();
        } else {
            ap_phi_mux_data_3124_V_read3194_phi_phi_fu_114631_p4 = ap_phi_reg_pp0_iter0_data_3124_V_read3194_phi_reg_114627.read();
        }
    } else {
        ap_phi_mux_data_3124_V_read3194_phi_phi_fu_114631_p4 = ap_phi_reg_pp0_iter0_data_3124_V_read3194_phi_reg_114627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_72941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_72941_p6 = data_3124_V_read3194_phi_reg_114627.read();
    } else {
        ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_72941_p6 = data_3124_V_read3194_rewind_reg_72937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3125_V_read3195_phi_phi_fu_114644_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3125_V_read3195_phi_phi_fu_114644_p4 = ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_72955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3125_V_read3195_phi_phi_fu_114644_p4 = data_3125_V_read.read();
        } else {
            ap_phi_mux_data_3125_V_read3195_phi_phi_fu_114644_p4 = ap_phi_reg_pp0_iter0_data_3125_V_read3195_phi_reg_114640.read();
        }
    } else {
        ap_phi_mux_data_3125_V_read3195_phi_phi_fu_114644_p4 = ap_phi_reg_pp0_iter0_data_3125_V_read3195_phi_reg_114640.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_72955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_72955_p6 = data_3125_V_read3195_phi_reg_114640.read();
    } else {
        ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_72955_p6 = data_3125_V_read3195_rewind_reg_72951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3126_V_read3196_phi_phi_fu_114657_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3126_V_read3196_phi_phi_fu_114657_p4 = ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_72969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3126_V_read3196_phi_phi_fu_114657_p4 = data_3126_V_read.read();
        } else {
            ap_phi_mux_data_3126_V_read3196_phi_phi_fu_114657_p4 = ap_phi_reg_pp0_iter0_data_3126_V_read3196_phi_reg_114653.read();
        }
    } else {
        ap_phi_mux_data_3126_V_read3196_phi_phi_fu_114657_p4 = ap_phi_reg_pp0_iter0_data_3126_V_read3196_phi_reg_114653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_72969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_72969_p6 = data_3126_V_read3196_phi_reg_114653.read();
    } else {
        ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_72969_p6 = data_3126_V_read3196_rewind_reg_72965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3127_V_read3197_phi_phi_fu_114670_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3127_V_read3197_phi_phi_fu_114670_p4 = ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_72983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3127_V_read3197_phi_phi_fu_114670_p4 = data_3127_V_read.read();
        } else {
            ap_phi_mux_data_3127_V_read3197_phi_phi_fu_114670_p4 = ap_phi_reg_pp0_iter0_data_3127_V_read3197_phi_reg_114666.read();
        }
    } else {
        ap_phi_mux_data_3127_V_read3197_phi_phi_fu_114670_p4 = ap_phi_reg_pp0_iter0_data_3127_V_read3197_phi_reg_114666.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_72983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_72983_p6 = data_3127_V_read3197_phi_reg_114666.read();
    } else {
        ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_72983_p6 = data_3127_V_read3197_rewind_reg_72979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3128_V_read3198_phi_phi_fu_114683_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3128_V_read3198_phi_phi_fu_114683_p4 = ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_72997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3128_V_read3198_phi_phi_fu_114683_p4 = data_3128_V_read.read();
        } else {
            ap_phi_mux_data_3128_V_read3198_phi_phi_fu_114683_p4 = ap_phi_reg_pp0_iter0_data_3128_V_read3198_phi_reg_114679.read();
        }
    } else {
        ap_phi_mux_data_3128_V_read3198_phi_phi_fu_114683_p4 = ap_phi_reg_pp0_iter0_data_3128_V_read3198_phi_reg_114679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_72997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_72997_p6 = data_3128_V_read3198_phi_reg_114679.read();
    } else {
        ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_72997_p6 = data_3128_V_read3198_rewind_reg_72993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3129_V_read3199_phi_phi_fu_114696_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3129_V_read3199_phi_phi_fu_114696_p4 = ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_73011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3129_V_read3199_phi_phi_fu_114696_p4 = data_3129_V_read.read();
        } else {
            ap_phi_mux_data_3129_V_read3199_phi_phi_fu_114696_p4 = ap_phi_reg_pp0_iter0_data_3129_V_read3199_phi_reg_114692.read();
        }
    } else {
        ap_phi_mux_data_3129_V_read3199_phi_phi_fu_114696_p4 = ap_phi_reg_pp0_iter0_data_3129_V_read3199_phi_reg_114692.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_73011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_73011_p6 = data_3129_V_read3199_phi_reg_114692.read();
    } else {
        ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_73011_p6 = data_3129_V_read3199_rewind_reg_73007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_312_V_read382_phi_phi_fu_78075_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_312_V_read382_phi_phi_fu_78075_p4 = ap_phi_mux_data_312_V_read382_rewind_phi_fu_33573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_312_V_read382_phi_phi_fu_78075_p4 = data_312_V_read.read();
        } else {
            ap_phi_mux_data_312_V_read382_phi_phi_fu_78075_p4 = ap_phi_reg_pp0_iter0_data_312_V_read382_phi_reg_78071.read();
        }
    } else {
        ap_phi_mux_data_312_V_read382_phi_phi_fu_78075_p4 = ap_phi_reg_pp0_iter0_data_312_V_read382_phi_reg_78071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_312_V_read382_rewind_phi_fu_33573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_312_V_read382_rewind_phi_fu_33573_p6 = data_312_V_read382_phi_reg_78071.read();
    } else {
        ap_phi_mux_data_312_V_read382_rewind_phi_fu_33573_p6 = data_312_V_read382_rewind_reg_33569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3130_V_read3200_phi_phi_fu_114709_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3130_V_read3200_phi_phi_fu_114709_p4 = ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_73025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3130_V_read3200_phi_phi_fu_114709_p4 = data_3130_V_read.read();
        } else {
            ap_phi_mux_data_3130_V_read3200_phi_phi_fu_114709_p4 = ap_phi_reg_pp0_iter0_data_3130_V_read3200_phi_reg_114705.read();
        }
    } else {
        ap_phi_mux_data_3130_V_read3200_phi_phi_fu_114709_p4 = ap_phi_reg_pp0_iter0_data_3130_V_read3200_phi_reg_114705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_73025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_73025_p6 = data_3130_V_read3200_phi_reg_114705.read();
    } else {
        ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_73025_p6 = data_3130_V_read3200_rewind_reg_73021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3131_V_read3201_phi_phi_fu_114722_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3131_V_read3201_phi_phi_fu_114722_p4 = ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_73039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3131_V_read3201_phi_phi_fu_114722_p4 = data_3131_V_read.read();
        } else {
            ap_phi_mux_data_3131_V_read3201_phi_phi_fu_114722_p4 = ap_phi_reg_pp0_iter0_data_3131_V_read3201_phi_reg_114718.read();
        }
    } else {
        ap_phi_mux_data_3131_V_read3201_phi_phi_fu_114722_p4 = ap_phi_reg_pp0_iter0_data_3131_V_read3201_phi_reg_114718.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_73039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_73039_p6 = data_3131_V_read3201_phi_reg_114718.read();
    } else {
        ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_73039_p6 = data_3131_V_read3201_rewind_reg_73035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3132_V_read3202_phi_phi_fu_114735_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3132_V_read3202_phi_phi_fu_114735_p4 = ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_73053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3132_V_read3202_phi_phi_fu_114735_p4 = data_3132_V_read.read();
        } else {
            ap_phi_mux_data_3132_V_read3202_phi_phi_fu_114735_p4 = ap_phi_reg_pp0_iter0_data_3132_V_read3202_phi_reg_114731.read();
        }
    } else {
        ap_phi_mux_data_3132_V_read3202_phi_phi_fu_114735_p4 = ap_phi_reg_pp0_iter0_data_3132_V_read3202_phi_reg_114731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_73053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_73053_p6 = data_3132_V_read3202_phi_reg_114731.read();
    } else {
        ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_73053_p6 = data_3132_V_read3202_rewind_reg_73049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3133_V_read3203_phi_phi_fu_114748_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3133_V_read3203_phi_phi_fu_114748_p4 = ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_73067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3133_V_read3203_phi_phi_fu_114748_p4 = data_3133_V_read.read();
        } else {
            ap_phi_mux_data_3133_V_read3203_phi_phi_fu_114748_p4 = ap_phi_reg_pp0_iter0_data_3133_V_read3203_phi_reg_114744.read();
        }
    } else {
        ap_phi_mux_data_3133_V_read3203_phi_phi_fu_114748_p4 = ap_phi_reg_pp0_iter0_data_3133_V_read3203_phi_reg_114744.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_73067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_73067_p6 = data_3133_V_read3203_phi_reg_114744.read();
    } else {
        ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_73067_p6 = data_3133_V_read3203_rewind_reg_73063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3134_V_read3204_phi_phi_fu_114761_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3134_V_read3204_phi_phi_fu_114761_p4 = ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_73081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3134_V_read3204_phi_phi_fu_114761_p4 = data_3134_V_read.read();
        } else {
            ap_phi_mux_data_3134_V_read3204_phi_phi_fu_114761_p4 = ap_phi_reg_pp0_iter0_data_3134_V_read3204_phi_reg_114757.read();
        }
    } else {
        ap_phi_mux_data_3134_V_read3204_phi_phi_fu_114761_p4 = ap_phi_reg_pp0_iter0_data_3134_V_read3204_phi_reg_114757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_73081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_73081_p6 = data_3134_V_read3204_phi_reg_114757.read();
    } else {
        ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_73081_p6 = data_3134_V_read3204_rewind_reg_73077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3135_V_read3205_phi_phi_fu_114774_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3135_V_read3205_phi_phi_fu_114774_p4 = ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_73095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3135_V_read3205_phi_phi_fu_114774_p4 = data_3135_V_read.read();
        } else {
            ap_phi_mux_data_3135_V_read3205_phi_phi_fu_114774_p4 = ap_phi_reg_pp0_iter0_data_3135_V_read3205_phi_reg_114770.read();
        }
    } else {
        ap_phi_mux_data_3135_V_read3205_phi_phi_fu_114774_p4 = ap_phi_reg_pp0_iter0_data_3135_V_read3205_phi_reg_114770.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_73095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_73095_p6 = data_3135_V_read3205_phi_reg_114770.read();
    } else {
        ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_73095_p6 = data_3135_V_read3205_rewind_reg_73091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3136_V_read3206_phi_phi_fu_114787_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3136_V_read3206_phi_phi_fu_114787_p4 = ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_73109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3136_V_read3206_phi_phi_fu_114787_p4 = data_3136_V_read.read();
        } else {
            ap_phi_mux_data_3136_V_read3206_phi_phi_fu_114787_p4 = ap_phi_reg_pp0_iter0_data_3136_V_read3206_phi_reg_114783.read();
        }
    } else {
        ap_phi_mux_data_3136_V_read3206_phi_phi_fu_114787_p4 = ap_phi_reg_pp0_iter0_data_3136_V_read3206_phi_reg_114783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_73109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_73109_p6 = data_3136_V_read3206_phi_reg_114783.read();
    } else {
        ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_73109_p6 = data_3136_V_read3206_rewind_reg_73105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3137_V_read3207_phi_phi_fu_114800_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3137_V_read3207_phi_phi_fu_114800_p4 = ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_73123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3137_V_read3207_phi_phi_fu_114800_p4 = data_3137_V_read.read();
        } else {
            ap_phi_mux_data_3137_V_read3207_phi_phi_fu_114800_p4 = ap_phi_reg_pp0_iter0_data_3137_V_read3207_phi_reg_114796.read();
        }
    } else {
        ap_phi_mux_data_3137_V_read3207_phi_phi_fu_114800_p4 = ap_phi_reg_pp0_iter0_data_3137_V_read3207_phi_reg_114796.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_73123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_73123_p6 = data_3137_V_read3207_phi_reg_114796.read();
    } else {
        ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_73123_p6 = data_3137_V_read3207_rewind_reg_73119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3138_V_read3208_phi_phi_fu_114813_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3138_V_read3208_phi_phi_fu_114813_p4 = ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_73137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3138_V_read3208_phi_phi_fu_114813_p4 = data_3138_V_read.read();
        } else {
            ap_phi_mux_data_3138_V_read3208_phi_phi_fu_114813_p4 = ap_phi_reg_pp0_iter0_data_3138_V_read3208_phi_reg_114809.read();
        }
    } else {
        ap_phi_mux_data_3138_V_read3208_phi_phi_fu_114813_p4 = ap_phi_reg_pp0_iter0_data_3138_V_read3208_phi_reg_114809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_73137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_73137_p6 = data_3138_V_read3208_phi_reg_114809.read();
    } else {
        ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_73137_p6 = data_3138_V_read3208_rewind_reg_73133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3139_V_read3209_phi_phi_fu_114826_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3139_V_read3209_phi_phi_fu_114826_p4 = ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_73151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3139_V_read3209_phi_phi_fu_114826_p4 = data_3139_V_read.read();
        } else {
            ap_phi_mux_data_3139_V_read3209_phi_phi_fu_114826_p4 = ap_phi_reg_pp0_iter0_data_3139_V_read3209_phi_reg_114822.read();
        }
    } else {
        ap_phi_mux_data_3139_V_read3209_phi_phi_fu_114826_p4 = ap_phi_reg_pp0_iter0_data_3139_V_read3209_phi_reg_114822.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_73151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_73151_p6 = data_3139_V_read3209_phi_reg_114822.read();
    } else {
        ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_73151_p6 = data_3139_V_read3209_rewind_reg_73147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_313_V_read383_phi_phi_fu_78088_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_313_V_read383_phi_phi_fu_78088_p4 = ap_phi_mux_data_313_V_read383_rewind_phi_fu_33587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_313_V_read383_phi_phi_fu_78088_p4 = data_313_V_read.read();
        } else {
            ap_phi_mux_data_313_V_read383_phi_phi_fu_78088_p4 = ap_phi_reg_pp0_iter0_data_313_V_read383_phi_reg_78084.read();
        }
    } else {
        ap_phi_mux_data_313_V_read383_phi_phi_fu_78088_p4 = ap_phi_reg_pp0_iter0_data_313_V_read383_phi_reg_78084.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_313_V_read383_rewind_phi_fu_33587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_313_V_read383_rewind_phi_fu_33587_p6 = data_313_V_read383_phi_reg_78084.read();
    } else {
        ap_phi_mux_data_313_V_read383_rewind_phi_fu_33587_p6 = data_313_V_read383_rewind_reg_33583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3140_V_read3210_phi_phi_fu_114839_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3140_V_read3210_phi_phi_fu_114839_p4 = ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_73165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3140_V_read3210_phi_phi_fu_114839_p4 = data_3140_V_read.read();
        } else {
            ap_phi_mux_data_3140_V_read3210_phi_phi_fu_114839_p4 = ap_phi_reg_pp0_iter0_data_3140_V_read3210_phi_reg_114835.read();
        }
    } else {
        ap_phi_mux_data_3140_V_read3210_phi_phi_fu_114839_p4 = ap_phi_reg_pp0_iter0_data_3140_V_read3210_phi_reg_114835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_73165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_73165_p6 = data_3140_V_read3210_phi_reg_114835.read();
    } else {
        ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_73165_p6 = data_3140_V_read3210_rewind_reg_73161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3141_V_read3211_phi_phi_fu_114852_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3141_V_read3211_phi_phi_fu_114852_p4 = ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_73179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3141_V_read3211_phi_phi_fu_114852_p4 = data_3141_V_read.read();
        } else {
            ap_phi_mux_data_3141_V_read3211_phi_phi_fu_114852_p4 = ap_phi_reg_pp0_iter0_data_3141_V_read3211_phi_reg_114848.read();
        }
    } else {
        ap_phi_mux_data_3141_V_read3211_phi_phi_fu_114852_p4 = ap_phi_reg_pp0_iter0_data_3141_V_read3211_phi_reg_114848.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_73179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_73179_p6 = data_3141_V_read3211_phi_reg_114848.read();
    } else {
        ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_73179_p6 = data_3141_V_read3211_rewind_reg_73175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3142_V_read3212_phi_phi_fu_114865_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3142_V_read3212_phi_phi_fu_114865_p4 = ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_73193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3142_V_read3212_phi_phi_fu_114865_p4 = data_3142_V_read.read();
        } else {
            ap_phi_mux_data_3142_V_read3212_phi_phi_fu_114865_p4 = ap_phi_reg_pp0_iter0_data_3142_V_read3212_phi_reg_114861.read();
        }
    } else {
        ap_phi_mux_data_3142_V_read3212_phi_phi_fu_114865_p4 = ap_phi_reg_pp0_iter0_data_3142_V_read3212_phi_reg_114861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_73193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_73193_p6 = data_3142_V_read3212_phi_reg_114861.read();
    } else {
        ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_73193_p6 = data_3142_V_read3212_rewind_reg_73189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3143_V_read3213_phi_phi_fu_114878_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3143_V_read3213_phi_phi_fu_114878_p4 = ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_73207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3143_V_read3213_phi_phi_fu_114878_p4 = data_3143_V_read.read();
        } else {
            ap_phi_mux_data_3143_V_read3213_phi_phi_fu_114878_p4 = ap_phi_reg_pp0_iter0_data_3143_V_read3213_phi_reg_114874.read();
        }
    } else {
        ap_phi_mux_data_3143_V_read3213_phi_phi_fu_114878_p4 = ap_phi_reg_pp0_iter0_data_3143_V_read3213_phi_reg_114874.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_73207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_73207_p6 = data_3143_V_read3213_phi_reg_114874.read();
    } else {
        ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_73207_p6 = data_3143_V_read3213_rewind_reg_73203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3144_V_read3214_phi_phi_fu_114891_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3144_V_read3214_phi_phi_fu_114891_p4 = ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_73221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3144_V_read3214_phi_phi_fu_114891_p4 = data_3144_V_read.read();
        } else {
            ap_phi_mux_data_3144_V_read3214_phi_phi_fu_114891_p4 = ap_phi_reg_pp0_iter0_data_3144_V_read3214_phi_reg_114887.read();
        }
    } else {
        ap_phi_mux_data_3144_V_read3214_phi_phi_fu_114891_p4 = ap_phi_reg_pp0_iter0_data_3144_V_read3214_phi_reg_114887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_73221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_73221_p6 = data_3144_V_read3214_phi_reg_114887.read();
    } else {
        ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_73221_p6 = data_3144_V_read3214_rewind_reg_73217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3145_V_read3215_phi_phi_fu_114904_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3145_V_read3215_phi_phi_fu_114904_p4 = ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_73235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3145_V_read3215_phi_phi_fu_114904_p4 = data_3145_V_read.read();
        } else {
            ap_phi_mux_data_3145_V_read3215_phi_phi_fu_114904_p4 = ap_phi_reg_pp0_iter0_data_3145_V_read3215_phi_reg_114900.read();
        }
    } else {
        ap_phi_mux_data_3145_V_read3215_phi_phi_fu_114904_p4 = ap_phi_reg_pp0_iter0_data_3145_V_read3215_phi_reg_114900.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_73235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_73235_p6 = data_3145_V_read3215_phi_reg_114900.read();
    } else {
        ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_73235_p6 = data_3145_V_read3215_rewind_reg_73231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3146_V_read3216_phi_phi_fu_114917_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3146_V_read3216_phi_phi_fu_114917_p4 = ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_73249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3146_V_read3216_phi_phi_fu_114917_p4 = data_3146_V_read.read();
        } else {
            ap_phi_mux_data_3146_V_read3216_phi_phi_fu_114917_p4 = ap_phi_reg_pp0_iter0_data_3146_V_read3216_phi_reg_114913.read();
        }
    } else {
        ap_phi_mux_data_3146_V_read3216_phi_phi_fu_114917_p4 = ap_phi_reg_pp0_iter0_data_3146_V_read3216_phi_reg_114913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_73249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_73249_p6 = data_3146_V_read3216_phi_reg_114913.read();
    } else {
        ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_73249_p6 = data_3146_V_read3216_rewind_reg_73245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3147_V_read3217_phi_phi_fu_114930_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3147_V_read3217_phi_phi_fu_114930_p4 = ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_73263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3147_V_read3217_phi_phi_fu_114930_p4 = data_3147_V_read.read();
        } else {
            ap_phi_mux_data_3147_V_read3217_phi_phi_fu_114930_p4 = ap_phi_reg_pp0_iter0_data_3147_V_read3217_phi_reg_114926.read();
        }
    } else {
        ap_phi_mux_data_3147_V_read3217_phi_phi_fu_114930_p4 = ap_phi_reg_pp0_iter0_data_3147_V_read3217_phi_reg_114926.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_73263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_73263_p6 = data_3147_V_read3217_phi_reg_114926.read();
    } else {
        ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_73263_p6 = data_3147_V_read3217_rewind_reg_73259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3148_V_read3218_phi_phi_fu_114943_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3148_V_read3218_phi_phi_fu_114943_p4 = ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_73277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3148_V_read3218_phi_phi_fu_114943_p4 = data_3148_V_read.read();
        } else {
            ap_phi_mux_data_3148_V_read3218_phi_phi_fu_114943_p4 = ap_phi_reg_pp0_iter0_data_3148_V_read3218_phi_reg_114939.read();
        }
    } else {
        ap_phi_mux_data_3148_V_read3218_phi_phi_fu_114943_p4 = ap_phi_reg_pp0_iter0_data_3148_V_read3218_phi_reg_114939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_73277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_73277_p6 = data_3148_V_read3218_phi_reg_114939.read();
    } else {
        ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_73277_p6 = data_3148_V_read3218_rewind_reg_73273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3149_V_read3219_phi_phi_fu_114956_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3149_V_read3219_phi_phi_fu_114956_p4 = ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_73291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3149_V_read3219_phi_phi_fu_114956_p4 = data_3149_V_read.read();
        } else {
            ap_phi_mux_data_3149_V_read3219_phi_phi_fu_114956_p4 = ap_phi_reg_pp0_iter0_data_3149_V_read3219_phi_reg_114952.read();
        }
    } else {
        ap_phi_mux_data_3149_V_read3219_phi_phi_fu_114956_p4 = ap_phi_reg_pp0_iter0_data_3149_V_read3219_phi_reg_114952.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_73291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_73291_p6 = data_3149_V_read3219_phi_reg_114952.read();
    } else {
        ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_73291_p6 = data_3149_V_read3219_rewind_reg_73287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_314_V_read384_phi_phi_fu_78101_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_314_V_read384_phi_phi_fu_78101_p4 = ap_phi_mux_data_314_V_read384_rewind_phi_fu_33601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_314_V_read384_phi_phi_fu_78101_p4 = data_314_V_read.read();
        } else {
            ap_phi_mux_data_314_V_read384_phi_phi_fu_78101_p4 = ap_phi_reg_pp0_iter0_data_314_V_read384_phi_reg_78097.read();
        }
    } else {
        ap_phi_mux_data_314_V_read384_phi_phi_fu_78101_p4 = ap_phi_reg_pp0_iter0_data_314_V_read384_phi_reg_78097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_314_V_read384_rewind_phi_fu_33601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_314_V_read384_rewind_phi_fu_33601_p6 = data_314_V_read384_phi_reg_78097.read();
    } else {
        ap_phi_mux_data_314_V_read384_rewind_phi_fu_33601_p6 = data_314_V_read384_rewind_reg_33597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3150_V_read3220_phi_phi_fu_114969_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3150_V_read3220_phi_phi_fu_114969_p4 = ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_73305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3150_V_read3220_phi_phi_fu_114969_p4 = data_3150_V_read.read();
        } else {
            ap_phi_mux_data_3150_V_read3220_phi_phi_fu_114969_p4 = ap_phi_reg_pp0_iter0_data_3150_V_read3220_phi_reg_114965.read();
        }
    } else {
        ap_phi_mux_data_3150_V_read3220_phi_phi_fu_114969_p4 = ap_phi_reg_pp0_iter0_data_3150_V_read3220_phi_reg_114965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_73305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_73305_p6 = data_3150_V_read3220_phi_reg_114965.read();
    } else {
        ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_73305_p6 = data_3150_V_read3220_rewind_reg_73301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3151_V_read3221_phi_phi_fu_114982_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3151_V_read3221_phi_phi_fu_114982_p4 = ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_73319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3151_V_read3221_phi_phi_fu_114982_p4 = data_3151_V_read.read();
        } else {
            ap_phi_mux_data_3151_V_read3221_phi_phi_fu_114982_p4 = ap_phi_reg_pp0_iter0_data_3151_V_read3221_phi_reg_114978.read();
        }
    } else {
        ap_phi_mux_data_3151_V_read3221_phi_phi_fu_114982_p4 = ap_phi_reg_pp0_iter0_data_3151_V_read3221_phi_reg_114978.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_73319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_73319_p6 = data_3151_V_read3221_phi_reg_114978.read();
    } else {
        ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_73319_p6 = data_3151_V_read3221_rewind_reg_73315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3152_V_read3222_phi_phi_fu_114995_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3152_V_read3222_phi_phi_fu_114995_p4 = ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_73333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3152_V_read3222_phi_phi_fu_114995_p4 = data_3152_V_read.read();
        } else {
            ap_phi_mux_data_3152_V_read3222_phi_phi_fu_114995_p4 = ap_phi_reg_pp0_iter0_data_3152_V_read3222_phi_reg_114991.read();
        }
    } else {
        ap_phi_mux_data_3152_V_read3222_phi_phi_fu_114995_p4 = ap_phi_reg_pp0_iter0_data_3152_V_read3222_phi_reg_114991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_73333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_73333_p6 = data_3152_V_read3222_phi_reg_114991.read();
    } else {
        ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_73333_p6 = data_3152_V_read3222_rewind_reg_73329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3153_V_read3223_phi_phi_fu_115008_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3153_V_read3223_phi_phi_fu_115008_p4 = ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_73347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3153_V_read3223_phi_phi_fu_115008_p4 = data_3153_V_read.read();
        } else {
            ap_phi_mux_data_3153_V_read3223_phi_phi_fu_115008_p4 = ap_phi_reg_pp0_iter0_data_3153_V_read3223_phi_reg_115004.read();
        }
    } else {
        ap_phi_mux_data_3153_V_read3223_phi_phi_fu_115008_p4 = ap_phi_reg_pp0_iter0_data_3153_V_read3223_phi_reg_115004.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_73347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_73347_p6 = data_3153_V_read3223_phi_reg_115004.read();
    } else {
        ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_73347_p6 = data_3153_V_read3223_rewind_reg_73343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3154_V_read3224_phi_phi_fu_115021_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3154_V_read3224_phi_phi_fu_115021_p4 = ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_73361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3154_V_read3224_phi_phi_fu_115021_p4 = data_3154_V_read.read();
        } else {
            ap_phi_mux_data_3154_V_read3224_phi_phi_fu_115021_p4 = ap_phi_reg_pp0_iter0_data_3154_V_read3224_phi_reg_115017.read();
        }
    } else {
        ap_phi_mux_data_3154_V_read3224_phi_phi_fu_115021_p4 = ap_phi_reg_pp0_iter0_data_3154_V_read3224_phi_reg_115017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_73361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_73361_p6 = data_3154_V_read3224_phi_reg_115017.read();
    } else {
        ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_73361_p6 = data_3154_V_read3224_rewind_reg_73357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3155_V_read3225_phi_phi_fu_115034_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3155_V_read3225_phi_phi_fu_115034_p4 = ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_73375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3155_V_read3225_phi_phi_fu_115034_p4 = data_3155_V_read.read();
        } else {
            ap_phi_mux_data_3155_V_read3225_phi_phi_fu_115034_p4 = ap_phi_reg_pp0_iter0_data_3155_V_read3225_phi_reg_115030.read();
        }
    } else {
        ap_phi_mux_data_3155_V_read3225_phi_phi_fu_115034_p4 = ap_phi_reg_pp0_iter0_data_3155_V_read3225_phi_reg_115030.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_73375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_73375_p6 = data_3155_V_read3225_phi_reg_115030.read();
    } else {
        ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_73375_p6 = data_3155_V_read3225_rewind_reg_73371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3156_V_read3226_phi_phi_fu_115047_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3156_V_read3226_phi_phi_fu_115047_p4 = ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_73389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3156_V_read3226_phi_phi_fu_115047_p4 = data_3156_V_read.read();
        } else {
            ap_phi_mux_data_3156_V_read3226_phi_phi_fu_115047_p4 = ap_phi_reg_pp0_iter0_data_3156_V_read3226_phi_reg_115043.read();
        }
    } else {
        ap_phi_mux_data_3156_V_read3226_phi_phi_fu_115047_p4 = ap_phi_reg_pp0_iter0_data_3156_V_read3226_phi_reg_115043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_73389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_73389_p6 = data_3156_V_read3226_phi_reg_115043.read();
    } else {
        ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_73389_p6 = data_3156_V_read3226_rewind_reg_73385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3157_V_read3227_phi_phi_fu_115060_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3157_V_read3227_phi_phi_fu_115060_p4 = ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_73403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3157_V_read3227_phi_phi_fu_115060_p4 = data_3157_V_read.read();
        } else {
            ap_phi_mux_data_3157_V_read3227_phi_phi_fu_115060_p4 = ap_phi_reg_pp0_iter0_data_3157_V_read3227_phi_reg_115056.read();
        }
    } else {
        ap_phi_mux_data_3157_V_read3227_phi_phi_fu_115060_p4 = ap_phi_reg_pp0_iter0_data_3157_V_read3227_phi_reg_115056.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_73403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_73403_p6 = data_3157_V_read3227_phi_reg_115056.read();
    } else {
        ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_73403_p6 = data_3157_V_read3227_rewind_reg_73399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3158_V_read3228_phi_phi_fu_115073_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3158_V_read3228_phi_phi_fu_115073_p4 = ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_73417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3158_V_read3228_phi_phi_fu_115073_p4 = data_3158_V_read.read();
        } else {
            ap_phi_mux_data_3158_V_read3228_phi_phi_fu_115073_p4 = ap_phi_reg_pp0_iter0_data_3158_V_read3228_phi_reg_115069.read();
        }
    } else {
        ap_phi_mux_data_3158_V_read3228_phi_phi_fu_115073_p4 = ap_phi_reg_pp0_iter0_data_3158_V_read3228_phi_reg_115069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_73417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_73417_p6 = data_3158_V_read3228_phi_reg_115069.read();
    } else {
        ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_73417_p6 = data_3158_V_read3228_rewind_reg_73413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3159_V_read3229_phi_phi_fu_115086_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3159_V_read3229_phi_phi_fu_115086_p4 = ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_73431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3159_V_read3229_phi_phi_fu_115086_p4 = data_3159_V_read.read();
        } else {
            ap_phi_mux_data_3159_V_read3229_phi_phi_fu_115086_p4 = ap_phi_reg_pp0_iter0_data_3159_V_read3229_phi_reg_115082.read();
        }
    } else {
        ap_phi_mux_data_3159_V_read3229_phi_phi_fu_115086_p4 = ap_phi_reg_pp0_iter0_data_3159_V_read3229_phi_reg_115082.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_73431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_73431_p6 = data_3159_V_read3229_phi_reg_115082.read();
    } else {
        ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_73431_p6 = data_3159_V_read3229_rewind_reg_73427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_315_V_read385_phi_phi_fu_78114_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_315_V_read385_phi_phi_fu_78114_p4 = ap_phi_mux_data_315_V_read385_rewind_phi_fu_33615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_315_V_read385_phi_phi_fu_78114_p4 = data_315_V_read.read();
        } else {
            ap_phi_mux_data_315_V_read385_phi_phi_fu_78114_p4 = ap_phi_reg_pp0_iter0_data_315_V_read385_phi_reg_78110.read();
        }
    } else {
        ap_phi_mux_data_315_V_read385_phi_phi_fu_78114_p4 = ap_phi_reg_pp0_iter0_data_315_V_read385_phi_reg_78110.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_315_V_read385_rewind_phi_fu_33615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_315_V_read385_rewind_phi_fu_33615_p6 = data_315_V_read385_phi_reg_78110.read();
    } else {
        ap_phi_mux_data_315_V_read385_rewind_phi_fu_33615_p6 = data_315_V_read385_rewind_reg_33611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3160_V_read3230_phi_phi_fu_115099_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3160_V_read3230_phi_phi_fu_115099_p4 = ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_73445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3160_V_read3230_phi_phi_fu_115099_p4 = data_3160_V_read.read();
        } else {
            ap_phi_mux_data_3160_V_read3230_phi_phi_fu_115099_p4 = ap_phi_reg_pp0_iter0_data_3160_V_read3230_phi_reg_115095.read();
        }
    } else {
        ap_phi_mux_data_3160_V_read3230_phi_phi_fu_115099_p4 = ap_phi_reg_pp0_iter0_data_3160_V_read3230_phi_reg_115095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_73445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_73445_p6 = data_3160_V_read3230_phi_reg_115095.read();
    } else {
        ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_73445_p6 = data_3160_V_read3230_rewind_reg_73441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3161_V_read3231_phi_phi_fu_115112_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3161_V_read3231_phi_phi_fu_115112_p4 = ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_73459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3161_V_read3231_phi_phi_fu_115112_p4 = data_3161_V_read.read();
        } else {
            ap_phi_mux_data_3161_V_read3231_phi_phi_fu_115112_p4 = ap_phi_reg_pp0_iter0_data_3161_V_read3231_phi_reg_115108.read();
        }
    } else {
        ap_phi_mux_data_3161_V_read3231_phi_phi_fu_115112_p4 = ap_phi_reg_pp0_iter0_data_3161_V_read3231_phi_reg_115108.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_73459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_73459_p6 = data_3161_V_read3231_phi_reg_115108.read();
    } else {
        ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_73459_p6 = data_3161_V_read3231_rewind_reg_73455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3162_V_read3232_phi_phi_fu_115125_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3162_V_read3232_phi_phi_fu_115125_p4 = ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_73473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3162_V_read3232_phi_phi_fu_115125_p4 = data_3162_V_read.read();
        } else {
            ap_phi_mux_data_3162_V_read3232_phi_phi_fu_115125_p4 = ap_phi_reg_pp0_iter0_data_3162_V_read3232_phi_reg_115121.read();
        }
    } else {
        ap_phi_mux_data_3162_V_read3232_phi_phi_fu_115125_p4 = ap_phi_reg_pp0_iter0_data_3162_V_read3232_phi_reg_115121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_73473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_73473_p6 = data_3162_V_read3232_phi_reg_115121.read();
    } else {
        ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_73473_p6 = data_3162_V_read3232_rewind_reg_73469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3163_V_read3233_phi_phi_fu_115138_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3163_V_read3233_phi_phi_fu_115138_p4 = ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_73487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3163_V_read3233_phi_phi_fu_115138_p4 = data_3163_V_read.read();
        } else {
            ap_phi_mux_data_3163_V_read3233_phi_phi_fu_115138_p4 = ap_phi_reg_pp0_iter0_data_3163_V_read3233_phi_reg_115134.read();
        }
    } else {
        ap_phi_mux_data_3163_V_read3233_phi_phi_fu_115138_p4 = ap_phi_reg_pp0_iter0_data_3163_V_read3233_phi_reg_115134.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_73487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_73487_p6 = data_3163_V_read3233_phi_reg_115134.read();
    } else {
        ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_73487_p6 = data_3163_V_read3233_rewind_reg_73483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3164_V_read3234_phi_phi_fu_115151_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3164_V_read3234_phi_phi_fu_115151_p4 = ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_73501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3164_V_read3234_phi_phi_fu_115151_p4 = data_3164_V_read.read();
        } else {
            ap_phi_mux_data_3164_V_read3234_phi_phi_fu_115151_p4 = ap_phi_reg_pp0_iter0_data_3164_V_read3234_phi_reg_115147.read();
        }
    } else {
        ap_phi_mux_data_3164_V_read3234_phi_phi_fu_115151_p4 = ap_phi_reg_pp0_iter0_data_3164_V_read3234_phi_reg_115147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_73501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_73501_p6 = data_3164_V_read3234_phi_reg_115147.read();
    } else {
        ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_73501_p6 = data_3164_V_read3234_rewind_reg_73497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3165_V_read3235_phi_phi_fu_115164_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3165_V_read3235_phi_phi_fu_115164_p4 = ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_73515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3165_V_read3235_phi_phi_fu_115164_p4 = data_3165_V_read.read();
        } else {
            ap_phi_mux_data_3165_V_read3235_phi_phi_fu_115164_p4 = ap_phi_reg_pp0_iter0_data_3165_V_read3235_phi_reg_115160.read();
        }
    } else {
        ap_phi_mux_data_3165_V_read3235_phi_phi_fu_115164_p4 = ap_phi_reg_pp0_iter0_data_3165_V_read3235_phi_reg_115160.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_73515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_73515_p6 = data_3165_V_read3235_phi_reg_115160.read();
    } else {
        ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_73515_p6 = data_3165_V_read3235_rewind_reg_73511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3166_V_read3236_phi_phi_fu_115177_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3166_V_read3236_phi_phi_fu_115177_p4 = ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_73529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3166_V_read3236_phi_phi_fu_115177_p4 = data_3166_V_read.read();
        } else {
            ap_phi_mux_data_3166_V_read3236_phi_phi_fu_115177_p4 = ap_phi_reg_pp0_iter0_data_3166_V_read3236_phi_reg_115173.read();
        }
    } else {
        ap_phi_mux_data_3166_V_read3236_phi_phi_fu_115177_p4 = ap_phi_reg_pp0_iter0_data_3166_V_read3236_phi_reg_115173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_73529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_73529_p6 = data_3166_V_read3236_phi_reg_115173.read();
    } else {
        ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_73529_p6 = data_3166_V_read3236_rewind_reg_73525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3167_V_read3237_phi_phi_fu_115190_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3167_V_read3237_phi_phi_fu_115190_p4 = ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_73543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3167_V_read3237_phi_phi_fu_115190_p4 = data_3167_V_read.read();
        } else {
            ap_phi_mux_data_3167_V_read3237_phi_phi_fu_115190_p4 = ap_phi_reg_pp0_iter0_data_3167_V_read3237_phi_reg_115186.read();
        }
    } else {
        ap_phi_mux_data_3167_V_read3237_phi_phi_fu_115190_p4 = ap_phi_reg_pp0_iter0_data_3167_V_read3237_phi_reg_115186.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_73543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_73543_p6 = data_3167_V_read3237_phi_reg_115186.read();
    } else {
        ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_73543_p6 = data_3167_V_read3237_rewind_reg_73539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3168_V_read3238_phi_phi_fu_115203_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3168_V_read3238_phi_phi_fu_115203_p4 = ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_73557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3168_V_read3238_phi_phi_fu_115203_p4 = data_3168_V_read.read();
        } else {
            ap_phi_mux_data_3168_V_read3238_phi_phi_fu_115203_p4 = ap_phi_reg_pp0_iter0_data_3168_V_read3238_phi_reg_115199.read();
        }
    } else {
        ap_phi_mux_data_3168_V_read3238_phi_phi_fu_115203_p4 = ap_phi_reg_pp0_iter0_data_3168_V_read3238_phi_reg_115199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_73557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_73557_p6 = data_3168_V_read3238_phi_reg_115199.read();
    } else {
        ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_73557_p6 = data_3168_V_read3238_rewind_reg_73553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3169_V_read3239_phi_phi_fu_115216_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3169_V_read3239_phi_phi_fu_115216_p4 = ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_73571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3169_V_read3239_phi_phi_fu_115216_p4 = data_3169_V_read.read();
        } else {
            ap_phi_mux_data_3169_V_read3239_phi_phi_fu_115216_p4 = ap_phi_reg_pp0_iter0_data_3169_V_read3239_phi_reg_115212.read();
        }
    } else {
        ap_phi_mux_data_3169_V_read3239_phi_phi_fu_115216_p4 = ap_phi_reg_pp0_iter0_data_3169_V_read3239_phi_reg_115212.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_73571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_73571_p6 = data_3169_V_read3239_phi_reg_115212.read();
    } else {
        ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_73571_p6 = data_3169_V_read3239_rewind_reg_73567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_316_V_read386_phi_phi_fu_78127_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_316_V_read386_phi_phi_fu_78127_p4 = ap_phi_mux_data_316_V_read386_rewind_phi_fu_33629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_316_V_read386_phi_phi_fu_78127_p4 = data_316_V_read.read();
        } else {
            ap_phi_mux_data_316_V_read386_phi_phi_fu_78127_p4 = ap_phi_reg_pp0_iter0_data_316_V_read386_phi_reg_78123.read();
        }
    } else {
        ap_phi_mux_data_316_V_read386_phi_phi_fu_78127_p4 = ap_phi_reg_pp0_iter0_data_316_V_read386_phi_reg_78123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_316_V_read386_rewind_phi_fu_33629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_316_V_read386_rewind_phi_fu_33629_p6 = data_316_V_read386_phi_reg_78123.read();
    } else {
        ap_phi_mux_data_316_V_read386_rewind_phi_fu_33629_p6 = data_316_V_read386_rewind_reg_33625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3170_V_read3240_phi_phi_fu_115229_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3170_V_read3240_phi_phi_fu_115229_p4 = ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_73585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3170_V_read3240_phi_phi_fu_115229_p4 = data_3170_V_read.read();
        } else {
            ap_phi_mux_data_3170_V_read3240_phi_phi_fu_115229_p4 = ap_phi_reg_pp0_iter0_data_3170_V_read3240_phi_reg_115225.read();
        }
    } else {
        ap_phi_mux_data_3170_V_read3240_phi_phi_fu_115229_p4 = ap_phi_reg_pp0_iter0_data_3170_V_read3240_phi_reg_115225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_73585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_73585_p6 = data_3170_V_read3240_phi_reg_115225.read();
    } else {
        ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_73585_p6 = data_3170_V_read3240_rewind_reg_73581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3171_V_read3241_phi_phi_fu_115242_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3171_V_read3241_phi_phi_fu_115242_p4 = ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_73599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3171_V_read3241_phi_phi_fu_115242_p4 = data_3171_V_read.read();
        } else {
            ap_phi_mux_data_3171_V_read3241_phi_phi_fu_115242_p4 = ap_phi_reg_pp0_iter0_data_3171_V_read3241_phi_reg_115238.read();
        }
    } else {
        ap_phi_mux_data_3171_V_read3241_phi_phi_fu_115242_p4 = ap_phi_reg_pp0_iter0_data_3171_V_read3241_phi_reg_115238.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_73599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_73599_p6 = data_3171_V_read3241_phi_reg_115238.read();
    } else {
        ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_73599_p6 = data_3171_V_read3241_rewind_reg_73595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3172_V_read3242_phi_phi_fu_115255_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3172_V_read3242_phi_phi_fu_115255_p4 = ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_73613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3172_V_read3242_phi_phi_fu_115255_p4 = data_3172_V_read.read();
        } else {
            ap_phi_mux_data_3172_V_read3242_phi_phi_fu_115255_p4 = ap_phi_reg_pp0_iter0_data_3172_V_read3242_phi_reg_115251.read();
        }
    } else {
        ap_phi_mux_data_3172_V_read3242_phi_phi_fu_115255_p4 = ap_phi_reg_pp0_iter0_data_3172_V_read3242_phi_reg_115251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_73613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_73613_p6 = data_3172_V_read3242_phi_reg_115251.read();
    } else {
        ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_73613_p6 = data_3172_V_read3242_rewind_reg_73609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3173_V_read3243_phi_phi_fu_115268_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3173_V_read3243_phi_phi_fu_115268_p4 = ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_73627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3173_V_read3243_phi_phi_fu_115268_p4 = data_3173_V_read.read();
        } else {
            ap_phi_mux_data_3173_V_read3243_phi_phi_fu_115268_p4 = ap_phi_reg_pp0_iter0_data_3173_V_read3243_phi_reg_115264.read();
        }
    } else {
        ap_phi_mux_data_3173_V_read3243_phi_phi_fu_115268_p4 = ap_phi_reg_pp0_iter0_data_3173_V_read3243_phi_reg_115264.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_73627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_73627_p6 = data_3173_V_read3243_phi_reg_115264.read();
    } else {
        ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_73627_p6 = data_3173_V_read3243_rewind_reg_73623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3174_V_read3244_phi_phi_fu_115281_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3174_V_read3244_phi_phi_fu_115281_p4 = ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_73641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3174_V_read3244_phi_phi_fu_115281_p4 = data_3174_V_read.read();
        } else {
            ap_phi_mux_data_3174_V_read3244_phi_phi_fu_115281_p4 = ap_phi_reg_pp0_iter0_data_3174_V_read3244_phi_reg_115277.read();
        }
    } else {
        ap_phi_mux_data_3174_V_read3244_phi_phi_fu_115281_p4 = ap_phi_reg_pp0_iter0_data_3174_V_read3244_phi_reg_115277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_73641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_73641_p6 = data_3174_V_read3244_phi_reg_115277.read();
    } else {
        ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_73641_p6 = data_3174_V_read3244_rewind_reg_73637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3175_V_read3245_phi_phi_fu_115294_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3175_V_read3245_phi_phi_fu_115294_p4 = ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_73655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3175_V_read3245_phi_phi_fu_115294_p4 = data_3175_V_read.read();
        } else {
            ap_phi_mux_data_3175_V_read3245_phi_phi_fu_115294_p4 = ap_phi_reg_pp0_iter0_data_3175_V_read3245_phi_reg_115290.read();
        }
    } else {
        ap_phi_mux_data_3175_V_read3245_phi_phi_fu_115294_p4 = ap_phi_reg_pp0_iter0_data_3175_V_read3245_phi_reg_115290.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_73655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_73655_p6 = data_3175_V_read3245_phi_reg_115290.read();
    } else {
        ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_73655_p6 = data_3175_V_read3245_rewind_reg_73651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3176_V_read3246_phi_phi_fu_115307_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3176_V_read3246_phi_phi_fu_115307_p4 = ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_73669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3176_V_read3246_phi_phi_fu_115307_p4 = data_3176_V_read.read();
        } else {
            ap_phi_mux_data_3176_V_read3246_phi_phi_fu_115307_p4 = ap_phi_reg_pp0_iter0_data_3176_V_read3246_phi_reg_115303.read();
        }
    } else {
        ap_phi_mux_data_3176_V_read3246_phi_phi_fu_115307_p4 = ap_phi_reg_pp0_iter0_data_3176_V_read3246_phi_reg_115303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_73669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_73669_p6 = data_3176_V_read3246_phi_reg_115303.read();
    } else {
        ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_73669_p6 = data_3176_V_read3246_rewind_reg_73665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3177_V_read3247_phi_phi_fu_115320_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3177_V_read3247_phi_phi_fu_115320_p4 = ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_73683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3177_V_read3247_phi_phi_fu_115320_p4 = data_3177_V_read.read();
        } else {
            ap_phi_mux_data_3177_V_read3247_phi_phi_fu_115320_p4 = ap_phi_reg_pp0_iter0_data_3177_V_read3247_phi_reg_115316.read();
        }
    } else {
        ap_phi_mux_data_3177_V_read3247_phi_phi_fu_115320_p4 = ap_phi_reg_pp0_iter0_data_3177_V_read3247_phi_reg_115316.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_73683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_73683_p6 = data_3177_V_read3247_phi_reg_115316.read();
    } else {
        ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_73683_p6 = data_3177_V_read3247_rewind_reg_73679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3178_V_read3248_phi_phi_fu_115333_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3178_V_read3248_phi_phi_fu_115333_p4 = ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_73697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3178_V_read3248_phi_phi_fu_115333_p4 = data_3178_V_read.read();
        } else {
            ap_phi_mux_data_3178_V_read3248_phi_phi_fu_115333_p4 = ap_phi_reg_pp0_iter0_data_3178_V_read3248_phi_reg_115329.read();
        }
    } else {
        ap_phi_mux_data_3178_V_read3248_phi_phi_fu_115333_p4 = ap_phi_reg_pp0_iter0_data_3178_V_read3248_phi_reg_115329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_73697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_73697_p6 = data_3178_V_read3248_phi_reg_115329.read();
    } else {
        ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_73697_p6 = data_3178_V_read3248_rewind_reg_73693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3179_V_read3249_phi_phi_fu_115346_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3179_V_read3249_phi_phi_fu_115346_p4 = ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_73711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3179_V_read3249_phi_phi_fu_115346_p4 = data_3179_V_read.read();
        } else {
            ap_phi_mux_data_3179_V_read3249_phi_phi_fu_115346_p4 = ap_phi_reg_pp0_iter0_data_3179_V_read3249_phi_reg_115342.read();
        }
    } else {
        ap_phi_mux_data_3179_V_read3249_phi_phi_fu_115346_p4 = ap_phi_reg_pp0_iter0_data_3179_V_read3249_phi_reg_115342.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_73711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_73711_p6 = data_3179_V_read3249_phi_reg_115342.read();
    } else {
        ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_73711_p6 = data_3179_V_read3249_rewind_reg_73707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_317_V_read387_phi_phi_fu_78140_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_317_V_read387_phi_phi_fu_78140_p4 = ap_phi_mux_data_317_V_read387_rewind_phi_fu_33643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_317_V_read387_phi_phi_fu_78140_p4 = data_317_V_read.read();
        } else {
            ap_phi_mux_data_317_V_read387_phi_phi_fu_78140_p4 = ap_phi_reg_pp0_iter0_data_317_V_read387_phi_reg_78136.read();
        }
    } else {
        ap_phi_mux_data_317_V_read387_phi_phi_fu_78140_p4 = ap_phi_reg_pp0_iter0_data_317_V_read387_phi_reg_78136.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_317_V_read387_rewind_phi_fu_33643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_317_V_read387_rewind_phi_fu_33643_p6 = data_317_V_read387_phi_reg_78136.read();
    } else {
        ap_phi_mux_data_317_V_read387_rewind_phi_fu_33643_p6 = data_317_V_read387_rewind_reg_33639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3180_V_read3250_phi_phi_fu_115359_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3180_V_read3250_phi_phi_fu_115359_p4 = ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_73725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3180_V_read3250_phi_phi_fu_115359_p4 = data_3180_V_read.read();
        } else {
            ap_phi_mux_data_3180_V_read3250_phi_phi_fu_115359_p4 = ap_phi_reg_pp0_iter0_data_3180_V_read3250_phi_reg_115355.read();
        }
    } else {
        ap_phi_mux_data_3180_V_read3250_phi_phi_fu_115359_p4 = ap_phi_reg_pp0_iter0_data_3180_V_read3250_phi_reg_115355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_73725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_73725_p6 = data_3180_V_read3250_phi_reg_115355.read();
    } else {
        ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_73725_p6 = data_3180_V_read3250_rewind_reg_73721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3181_V_read3251_phi_phi_fu_115372_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3181_V_read3251_phi_phi_fu_115372_p4 = ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_73739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3181_V_read3251_phi_phi_fu_115372_p4 = data_3181_V_read.read();
        } else {
            ap_phi_mux_data_3181_V_read3251_phi_phi_fu_115372_p4 = ap_phi_reg_pp0_iter0_data_3181_V_read3251_phi_reg_115368.read();
        }
    } else {
        ap_phi_mux_data_3181_V_read3251_phi_phi_fu_115372_p4 = ap_phi_reg_pp0_iter0_data_3181_V_read3251_phi_reg_115368.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_73739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_73739_p6 = data_3181_V_read3251_phi_reg_115368.read();
    } else {
        ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_73739_p6 = data_3181_V_read3251_rewind_reg_73735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3182_V_read3252_phi_phi_fu_115385_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3182_V_read3252_phi_phi_fu_115385_p4 = ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_73753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3182_V_read3252_phi_phi_fu_115385_p4 = data_3182_V_read.read();
        } else {
            ap_phi_mux_data_3182_V_read3252_phi_phi_fu_115385_p4 = ap_phi_reg_pp0_iter0_data_3182_V_read3252_phi_reg_115381.read();
        }
    } else {
        ap_phi_mux_data_3182_V_read3252_phi_phi_fu_115385_p4 = ap_phi_reg_pp0_iter0_data_3182_V_read3252_phi_reg_115381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_73753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_73753_p6 = data_3182_V_read3252_phi_reg_115381.read();
    } else {
        ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_73753_p6 = data_3182_V_read3252_rewind_reg_73749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3183_V_read3253_phi_phi_fu_115398_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3183_V_read3253_phi_phi_fu_115398_p4 = ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_73767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3183_V_read3253_phi_phi_fu_115398_p4 = data_3183_V_read.read();
        } else {
            ap_phi_mux_data_3183_V_read3253_phi_phi_fu_115398_p4 = ap_phi_reg_pp0_iter0_data_3183_V_read3253_phi_reg_115394.read();
        }
    } else {
        ap_phi_mux_data_3183_V_read3253_phi_phi_fu_115398_p4 = ap_phi_reg_pp0_iter0_data_3183_V_read3253_phi_reg_115394.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_73767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_73767_p6 = data_3183_V_read3253_phi_reg_115394.read();
    } else {
        ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_73767_p6 = data_3183_V_read3253_rewind_reg_73763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3184_V_read3254_phi_phi_fu_115411_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3184_V_read3254_phi_phi_fu_115411_p4 = ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_73781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3184_V_read3254_phi_phi_fu_115411_p4 = data_3184_V_read.read();
        } else {
            ap_phi_mux_data_3184_V_read3254_phi_phi_fu_115411_p4 = ap_phi_reg_pp0_iter0_data_3184_V_read3254_phi_reg_115407.read();
        }
    } else {
        ap_phi_mux_data_3184_V_read3254_phi_phi_fu_115411_p4 = ap_phi_reg_pp0_iter0_data_3184_V_read3254_phi_reg_115407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_73781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_73781_p6 = data_3184_V_read3254_phi_reg_115407.read();
    } else {
        ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_73781_p6 = data_3184_V_read3254_rewind_reg_73777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3185_V_read3255_phi_phi_fu_115424_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3185_V_read3255_phi_phi_fu_115424_p4 = ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_73795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3185_V_read3255_phi_phi_fu_115424_p4 = data_3185_V_read.read();
        } else {
            ap_phi_mux_data_3185_V_read3255_phi_phi_fu_115424_p4 = ap_phi_reg_pp0_iter0_data_3185_V_read3255_phi_reg_115420.read();
        }
    } else {
        ap_phi_mux_data_3185_V_read3255_phi_phi_fu_115424_p4 = ap_phi_reg_pp0_iter0_data_3185_V_read3255_phi_reg_115420.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_73795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_73795_p6 = data_3185_V_read3255_phi_reg_115420.read();
    } else {
        ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_73795_p6 = data_3185_V_read3255_rewind_reg_73791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3186_V_read3256_phi_phi_fu_115437_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3186_V_read3256_phi_phi_fu_115437_p4 = ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_73809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3186_V_read3256_phi_phi_fu_115437_p4 = data_3186_V_read.read();
        } else {
            ap_phi_mux_data_3186_V_read3256_phi_phi_fu_115437_p4 = ap_phi_reg_pp0_iter0_data_3186_V_read3256_phi_reg_115433.read();
        }
    } else {
        ap_phi_mux_data_3186_V_read3256_phi_phi_fu_115437_p4 = ap_phi_reg_pp0_iter0_data_3186_V_read3256_phi_reg_115433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_73809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_73809_p6 = data_3186_V_read3256_phi_reg_115433.read();
    } else {
        ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_73809_p6 = data_3186_V_read3256_rewind_reg_73805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3187_V_read3257_phi_phi_fu_115450_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3187_V_read3257_phi_phi_fu_115450_p4 = ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_73823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3187_V_read3257_phi_phi_fu_115450_p4 = data_3187_V_read.read();
        } else {
            ap_phi_mux_data_3187_V_read3257_phi_phi_fu_115450_p4 = ap_phi_reg_pp0_iter0_data_3187_V_read3257_phi_reg_115446.read();
        }
    } else {
        ap_phi_mux_data_3187_V_read3257_phi_phi_fu_115450_p4 = ap_phi_reg_pp0_iter0_data_3187_V_read3257_phi_reg_115446.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_73823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_73823_p6 = data_3187_V_read3257_phi_reg_115446.read();
    } else {
        ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_73823_p6 = data_3187_V_read3257_rewind_reg_73819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3188_V_read3258_phi_phi_fu_115463_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3188_V_read3258_phi_phi_fu_115463_p4 = ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_73837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3188_V_read3258_phi_phi_fu_115463_p4 = data_3188_V_read.read();
        } else {
            ap_phi_mux_data_3188_V_read3258_phi_phi_fu_115463_p4 = ap_phi_reg_pp0_iter0_data_3188_V_read3258_phi_reg_115459.read();
        }
    } else {
        ap_phi_mux_data_3188_V_read3258_phi_phi_fu_115463_p4 = ap_phi_reg_pp0_iter0_data_3188_V_read3258_phi_reg_115459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_73837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_73837_p6 = data_3188_V_read3258_phi_reg_115459.read();
    } else {
        ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_73837_p6 = data_3188_V_read3258_rewind_reg_73833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3189_V_read3259_phi_phi_fu_115476_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3189_V_read3259_phi_phi_fu_115476_p4 = ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_73851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3189_V_read3259_phi_phi_fu_115476_p4 = data_3189_V_read.read();
        } else {
            ap_phi_mux_data_3189_V_read3259_phi_phi_fu_115476_p4 = ap_phi_reg_pp0_iter0_data_3189_V_read3259_phi_reg_115472.read();
        }
    } else {
        ap_phi_mux_data_3189_V_read3259_phi_phi_fu_115476_p4 = ap_phi_reg_pp0_iter0_data_3189_V_read3259_phi_reg_115472.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_73851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_73851_p6 = data_3189_V_read3259_phi_reg_115472.read();
    } else {
        ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_73851_p6 = data_3189_V_read3259_rewind_reg_73847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_318_V_read388_phi_phi_fu_78153_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_318_V_read388_phi_phi_fu_78153_p4 = ap_phi_mux_data_318_V_read388_rewind_phi_fu_33657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_318_V_read388_phi_phi_fu_78153_p4 = data_318_V_read.read();
        } else {
            ap_phi_mux_data_318_V_read388_phi_phi_fu_78153_p4 = ap_phi_reg_pp0_iter0_data_318_V_read388_phi_reg_78149.read();
        }
    } else {
        ap_phi_mux_data_318_V_read388_phi_phi_fu_78153_p4 = ap_phi_reg_pp0_iter0_data_318_V_read388_phi_reg_78149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_318_V_read388_rewind_phi_fu_33657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_318_V_read388_rewind_phi_fu_33657_p6 = data_318_V_read388_phi_reg_78149.read();
    } else {
        ap_phi_mux_data_318_V_read388_rewind_phi_fu_33657_p6 = data_318_V_read388_rewind_reg_33653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3190_V_read3260_phi_phi_fu_115489_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3190_V_read3260_phi_phi_fu_115489_p4 = ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_73865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3190_V_read3260_phi_phi_fu_115489_p4 = data_3190_V_read.read();
        } else {
            ap_phi_mux_data_3190_V_read3260_phi_phi_fu_115489_p4 = ap_phi_reg_pp0_iter0_data_3190_V_read3260_phi_reg_115485.read();
        }
    } else {
        ap_phi_mux_data_3190_V_read3260_phi_phi_fu_115489_p4 = ap_phi_reg_pp0_iter0_data_3190_V_read3260_phi_reg_115485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_73865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_73865_p6 = data_3190_V_read3260_phi_reg_115485.read();
    } else {
        ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_73865_p6 = data_3190_V_read3260_rewind_reg_73861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3191_V_read3261_phi_phi_fu_115502_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3191_V_read3261_phi_phi_fu_115502_p4 = ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_73879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3191_V_read3261_phi_phi_fu_115502_p4 = data_3191_V_read.read();
        } else {
            ap_phi_mux_data_3191_V_read3261_phi_phi_fu_115502_p4 = ap_phi_reg_pp0_iter0_data_3191_V_read3261_phi_reg_115498.read();
        }
    } else {
        ap_phi_mux_data_3191_V_read3261_phi_phi_fu_115502_p4 = ap_phi_reg_pp0_iter0_data_3191_V_read3261_phi_reg_115498.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_73879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_73879_p6 = data_3191_V_read3261_phi_reg_115498.read();
    } else {
        ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_73879_p6 = data_3191_V_read3261_rewind_reg_73875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3192_V_read3262_phi_phi_fu_115515_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3192_V_read3262_phi_phi_fu_115515_p4 = ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_73893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3192_V_read3262_phi_phi_fu_115515_p4 = data_3192_V_read.read();
        } else {
            ap_phi_mux_data_3192_V_read3262_phi_phi_fu_115515_p4 = ap_phi_reg_pp0_iter0_data_3192_V_read3262_phi_reg_115511.read();
        }
    } else {
        ap_phi_mux_data_3192_V_read3262_phi_phi_fu_115515_p4 = ap_phi_reg_pp0_iter0_data_3192_V_read3262_phi_reg_115511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_73893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_73893_p6 = data_3192_V_read3262_phi_reg_115511.read();
    } else {
        ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_73893_p6 = data_3192_V_read3262_rewind_reg_73889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3193_V_read3263_phi_phi_fu_115528_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3193_V_read3263_phi_phi_fu_115528_p4 = ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_73907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3193_V_read3263_phi_phi_fu_115528_p4 = data_3193_V_read.read();
        } else {
            ap_phi_mux_data_3193_V_read3263_phi_phi_fu_115528_p4 = ap_phi_reg_pp0_iter0_data_3193_V_read3263_phi_reg_115524.read();
        }
    } else {
        ap_phi_mux_data_3193_V_read3263_phi_phi_fu_115528_p4 = ap_phi_reg_pp0_iter0_data_3193_V_read3263_phi_reg_115524.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_73907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_73907_p6 = data_3193_V_read3263_phi_reg_115524.read();
    } else {
        ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_73907_p6 = data_3193_V_read3263_rewind_reg_73903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3194_V_read3264_phi_phi_fu_115541_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3194_V_read3264_phi_phi_fu_115541_p4 = ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_73921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3194_V_read3264_phi_phi_fu_115541_p4 = data_3194_V_read.read();
        } else {
            ap_phi_mux_data_3194_V_read3264_phi_phi_fu_115541_p4 = ap_phi_reg_pp0_iter0_data_3194_V_read3264_phi_reg_115537.read();
        }
    } else {
        ap_phi_mux_data_3194_V_read3264_phi_phi_fu_115541_p4 = ap_phi_reg_pp0_iter0_data_3194_V_read3264_phi_reg_115537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_73921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_73921_p6 = data_3194_V_read3264_phi_reg_115537.read();
    } else {
        ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_73921_p6 = data_3194_V_read3264_rewind_reg_73917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3195_V_read3265_phi_phi_fu_115554_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3195_V_read3265_phi_phi_fu_115554_p4 = ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_73935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3195_V_read3265_phi_phi_fu_115554_p4 = data_3195_V_read.read();
        } else {
            ap_phi_mux_data_3195_V_read3265_phi_phi_fu_115554_p4 = ap_phi_reg_pp0_iter0_data_3195_V_read3265_phi_reg_115550.read();
        }
    } else {
        ap_phi_mux_data_3195_V_read3265_phi_phi_fu_115554_p4 = ap_phi_reg_pp0_iter0_data_3195_V_read3265_phi_reg_115550.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_73935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_73935_p6 = data_3195_V_read3265_phi_reg_115550.read();
    } else {
        ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_73935_p6 = data_3195_V_read3265_rewind_reg_73931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3196_V_read3266_phi_phi_fu_115567_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3196_V_read3266_phi_phi_fu_115567_p4 = ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_73949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3196_V_read3266_phi_phi_fu_115567_p4 = data_3196_V_read.read();
        } else {
            ap_phi_mux_data_3196_V_read3266_phi_phi_fu_115567_p4 = ap_phi_reg_pp0_iter0_data_3196_V_read3266_phi_reg_115563.read();
        }
    } else {
        ap_phi_mux_data_3196_V_read3266_phi_phi_fu_115567_p4 = ap_phi_reg_pp0_iter0_data_3196_V_read3266_phi_reg_115563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_73949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_73949_p6 = data_3196_V_read3266_phi_reg_115563.read();
    } else {
        ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_73949_p6 = data_3196_V_read3266_rewind_reg_73945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3197_V_read3267_phi_phi_fu_115580_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3197_V_read3267_phi_phi_fu_115580_p4 = ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_73963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3197_V_read3267_phi_phi_fu_115580_p4 = data_3197_V_read.read();
        } else {
            ap_phi_mux_data_3197_V_read3267_phi_phi_fu_115580_p4 = ap_phi_reg_pp0_iter0_data_3197_V_read3267_phi_reg_115576.read();
        }
    } else {
        ap_phi_mux_data_3197_V_read3267_phi_phi_fu_115580_p4 = ap_phi_reg_pp0_iter0_data_3197_V_read3267_phi_reg_115576.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_73963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_73963_p6 = data_3197_V_read3267_phi_reg_115576.read();
    } else {
        ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_73963_p6 = data_3197_V_read3267_rewind_reg_73959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3198_V_read3268_phi_phi_fu_115593_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3198_V_read3268_phi_phi_fu_115593_p4 = ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_73977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3198_V_read3268_phi_phi_fu_115593_p4 = data_3198_V_read.read();
        } else {
            ap_phi_mux_data_3198_V_read3268_phi_phi_fu_115593_p4 = ap_phi_reg_pp0_iter0_data_3198_V_read3268_phi_reg_115589.read();
        }
    } else {
        ap_phi_mux_data_3198_V_read3268_phi_phi_fu_115593_p4 = ap_phi_reg_pp0_iter0_data_3198_V_read3268_phi_reg_115589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_73977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_73977_p6 = data_3198_V_read3268_phi_reg_115589.read();
    } else {
        ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_73977_p6 = data_3198_V_read3268_rewind_reg_73973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3199_V_read3269_phi_phi_fu_115606_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3199_V_read3269_phi_phi_fu_115606_p4 = ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_73991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3199_V_read3269_phi_phi_fu_115606_p4 = data_3199_V_read.read();
        } else {
            ap_phi_mux_data_3199_V_read3269_phi_phi_fu_115606_p4 = ap_phi_reg_pp0_iter0_data_3199_V_read3269_phi_reg_115602.read();
        }
    } else {
        ap_phi_mux_data_3199_V_read3269_phi_phi_fu_115606_p4 = ap_phi_reg_pp0_iter0_data_3199_V_read3269_phi_reg_115602.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_73991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_73991_p6 = data_3199_V_read3269_phi_reg_115602.read();
    } else {
        ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_73991_p6 = data_3199_V_read3269_rewind_reg_73987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_319_V_read389_phi_phi_fu_78166_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_319_V_read389_phi_phi_fu_78166_p4 = ap_phi_mux_data_319_V_read389_rewind_phi_fu_33671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_319_V_read389_phi_phi_fu_78166_p4 = data_319_V_read.read();
        } else {
            ap_phi_mux_data_319_V_read389_phi_phi_fu_78166_p4 = ap_phi_reg_pp0_iter0_data_319_V_read389_phi_reg_78162.read();
        }
    } else {
        ap_phi_mux_data_319_V_read389_phi_phi_fu_78166_p4 = ap_phi_reg_pp0_iter0_data_319_V_read389_phi_reg_78162.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_319_V_read389_rewind_phi_fu_33671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_319_V_read389_rewind_phi_fu_33671_p6 = data_319_V_read389_phi_reg_78162.read();
    } else {
        ap_phi_mux_data_319_V_read389_rewind_phi_fu_33671_p6 = data_319_V_read389_rewind_reg_33667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_31_V_read101_phi_phi_fu_74422_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_31_V_read101_phi_phi_fu_74422_p4 = ap_phi_mux_data_31_V_read101_rewind_phi_fu_29639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_31_V_read101_phi_phi_fu_74422_p4 = data_31_V_read.read();
        } else {
            ap_phi_mux_data_31_V_read101_phi_phi_fu_74422_p4 = ap_phi_reg_pp0_iter0_data_31_V_read101_phi_reg_74418.read();
        }
    } else {
        ap_phi_mux_data_31_V_read101_phi_phi_fu_74422_p4 = ap_phi_reg_pp0_iter0_data_31_V_read101_phi_reg_74418.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_31_V_read101_rewind_phi_fu_29639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_31_V_read101_rewind_phi_fu_29639_p6 = data_31_V_read101_phi_reg_74418.read();
    } else {
        ap_phi_mux_data_31_V_read101_rewind_phi_fu_29639_p6 = data_31_V_read101_rewind_reg_29635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_320_V_read390_phi_phi_fu_78179_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_320_V_read390_phi_phi_fu_78179_p4 = ap_phi_mux_data_320_V_read390_rewind_phi_fu_33685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_320_V_read390_phi_phi_fu_78179_p4 = data_320_V_read.read();
        } else {
            ap_phi_mux_data_320_V_read390_phi_phi_fu_78179_p4 = ap_phi_reg_pp0_iter0_data_320_V_read390_phi_reg_78175.read();
        }
    } else {
        ap_phi_mux_data_320_V_read390_phi_phi_fu_78179_p4 = ap_phi_reg_pp0_iter0_data_320_V_read390_phi_reg_78175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_320_V_read390_rewind_phi_fu_33685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_320_V_read390_rewind_phi_fu_33685_p6 = data_320_V_read390_phi_reg_78175.read();
    } else {
        ap_phi_mux_data_320_V_read390_rewind_phi_fu_33685_p6 = data_320_V_read390_rewind_reg_33681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_321_V_read391_phi_phi_fu_78192_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_321_V_read391_phi_phi_fu_78192_p4 = ap_phi_mux_data_321_V_read391_rewind_phi_fu_33699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_321_V_read391_phi_phi_fu_78192_p4 = data_321_V_read.read();
        } else {
            ap_phi_mux_data_321_V_read391_phi_phi_fu_78192_p4 = ap_phi_reg_pp0_iter0_data_321_V_read391_phi_reg_78188.read();
        }
    } else {
        ap_phi_mux_data_321_V_read391_phi_phi_fu_78192_p4 = ap_phi_reg_pp0_iter0_data_321_V_read391_phi_reg_78188.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_321_V_read391_rewind_phi_fu_33699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_321_V_read391_rewind_phi_fu_33699_p6 = data_321_V_read391_phi_reg_78188.read();
    } else {
        ap_phi_mux_data_321_V_read391_rewind_phi_fu_33699_p6 = data_321_V_read391_rewind_reg_33695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_322_V_read392_phi_phi_fu_78205_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_322_V_read392_phi_phi_fu_78205_p4 = ap_phi_mux_data_322_V_read392_rewind_phi_fu_33713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_322_V_read392_phi_phi_fu_78205_p4 = data_322_V_read.read();
        } else {
            ap_phi_mux_data_322_V_read392_phi_phi_fu_78205_p4 = ap_phi_reg_pp0_iter0_data_322_V_read392_phi_reg_78201.read();
        }
    } else {
        ap_phi_mux_data_322_V_read392_phi_phi_fu_78205_p4 = ap_phi_reg_pp0_iter0_data_322_V_read392_phi_reg_78201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_322_V_read392_rewind_phi_fu_33713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_322_V_read392_rewind_phi_fu_33713_p6 = data_322_V_read392_phi_reg_78201.read();
    } else {
        ap_phi_mux_data_322_V_read392_rewind_phi_fu_33713_p6 = data_322_V_read392_rewind_reg_33709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_323_V_read393_phi_phi_fu_78218_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_323_V_read393_phi_phi_fu_78218_p4 = ap_phi_mux_data_323_V_read393_rewind_phi_fu_33727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_323_V_read393_phi_phi_fu_78218_p4 = data_323_V_read.read();
        } else {
            ap_phi_mux_data_323_V_read393_phi_phi_fu_78218_p4 = ap_phi_reg_pp0_iter0_data_323_V_read393_phi_reg_78214.read();
        }
    } else {
        ap_phi_mux_data_323_V_read393_phi_phi_fu_78218_p4 = ap_phi_reg_pp0_iter0_data_323_V_read393_phi_reg_78214.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_323_V_read393_rewind_phi_fu_33727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_323_V_read393_rewind_phi_fu_33727_p6 = data_323_V_read393_phi_reg_78214.read();
    } else {
        ap_phi_mux_data_323_V_read393_rewind_phi_fu_33727_p6 = data_323_V_read393_rewind_reg_33723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_324_V_read394_phi_phi_fu_78231_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_324_V_read394_phi_phi_fu_78231_p4 = ap_phi_mux_data_324_V_read394_rewind_phi_fu_33741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_324_V_read394_phi_phi_fu_78231_p4 = data_324_V_read.read();
        } else {
            ap_phi_mux_data_324_V_read394_phi_phi_fu_78231_p4 = ap_phi_reg_pp0_iter0_data_324_V_read394_phi_reg_78227.read();
        }
    } else {
        ap_phi_mux_data_324_V_read394_phi_phi_fu_78231_p4 = ap_phi_reg_pp0_iter0_data_324_V_read394_phi_reg_78227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_324_V_read394_rewind_phi_fu_33741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_324_V_read394_rewind_phi_fu_33741_p6 = data_324_V_read394_phi_reg_78227.read();
    } else {
        ap_phi_mux_data_324_V_read394_rewind_phi_fu_33741_p6 = data_324_V_read394_rewind_reg_33737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_325_V_read395_phi_phi_fu_78244_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_325_V_read395_phi_phi_fu_78244_p4 = ap_phi_mux_data_325_V_read395_rewind_phi_fu_33755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_325_V_read395_phi_phi_fu_78244_p4 = data_325_V_read.read();
        } else {
            ap_phi_mux_data_325_V_read395_phi_phi_fu_78244_p4 = ap_phi_reg_pp0_iter0_data_325_V_read395_phi_reg_78240.read();
        }
    } else {
        ap_phi_mux_data_325_V_read395_phi_phi_fu_78244_p4 = ap_phi_reg_pp0_iter0_data_325_V_read395_phi_reg_78240.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_325_V_read395_rewind_phi_fu_33755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_325_V_read395_rewind_phi_fu_33755_p6 = data_325_V_read395_phi_reg_78240.read();
    } else {
        ap_phi_mux_data_325_V_read395_rewind_phi_fu_33755_p6 = data_325_V_read395_rewind_reg_33751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_326_V_read396_phi_phi_fu_78257_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_326_V_read396_phi_phi_fu_78257_p4 = ap_phi_mux_data_326_V_read396_rewind_phi_fu_33769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_326_V_read396_phi_phi_fu_78257_p4 = data_326_V_read.read();
        } else {
            ap_phi_mux_data_326_V_read396_phi_phi_fu_78257_p4 = ap_phi_reg_pp0_iter0_data_326_V_read396_phi_reg_78253.read();
        }
    } else {
        ap_phi_mux_data_326_V_read396_phi_phi_fu_78257_p4 = ap_phi_reg_pp0_iter0_data_326_V_read396_phi_reg_78253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_326_V_read396_rewind_phi_fu_33769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_326_V_read396_rewind_phi_fu_33769_p6 = data_326_V_read396_phi_reg_78253.read();
    } else {
        ap_phi_mux_data_326_V_read396_rewind_phi_fu_33769_p6 = data_326_V_read396_rewind_reg_33765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_327_V_read397_phi_phi_fu_78270_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_327_V_read397_phi_phi_fu_78270_p4 = ap_phi_mux_data_327_V_read397_rewind_phi_fu_33783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_327_V_read397_phi_phi_fu_78270_p4 = data_327_V_read.read();
        } else {
            ap_phi_mux_data_327_V_read397_phi_phi_fu_78270_p4 = ap_phi_reg_pp0_iter0_data_327_V_read397_phi_reg_78266.read();
        }
    } else {
        ap_phi_mux_data_327_V_read397_phi_phi_fu_78270_p4 = ap_phi_reg_pp0_iter0_data_327_V_read397_phi_reg_78266.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_327_V_read397_rewind_phi_fu_33783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_327_V_read397_rewind_phi_fu_33783_p6 = data_327_V_read397_phi_reg_78266.read();
    } else {
        ap_phi_mux_data_327_V_read397_rewind_phi_fu_33783_p6 = data_327_V_read397_rewind_reg_33779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_328_V_read398_phi_phi_fu_78283_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_328_V_read398_phi_phi_fu_78283_p4 = ap_phi_mux_data_328_V_read398_rewind_phi_fu_33797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_328_V_read398_phi_phi_fu_78283_p4 = data_328_V_read.read();
        } else {
            ap_phi_mux_data_328_V_read398_phi_phi_fu_78283_p4 = ap_phi_reg_pp0_iter0_data_328_V_read398_phi_reg_78279.read();
        }
    } else {
        ap_phi_mux_data_328_V_read398_phi_phi_fu_78283_p4 = ap_phi_reg_pp0_iter0_data_328_V_read398_phi_reg_78279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_328_V_read398_rewind_phi_fu_33797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_328_V_read398_rewind_phi_fu_33797_p6 = data_328_V_read398_phi_reg_78279.read();
    } else {
        ap_phi_mux_data_328_V_read398_rewind_phi_fu_33797_p6 = data_328_V_read398_rewind_reg_33793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_329_V_read399_phi_phi_fu_78296_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_329_V_read399_phi_phi_fu_78296_p4 = ap_phi_mux_data_329_V_read399_rewind_phi_fu_33811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_329_V_read399_phi_phi_fu_78296_p4 = data_329_V_read.read();
        } else {
            ap_phi_mux_data_329_V_read399_phi_phi_fu_78296_p4 = ap_phi_reg_pp0_iter0_data_329_V_read399_phi_reg_78292.read();
        }
    } else {
        ap_phi_mux_data_329_V_read399_phi_phi_fu_78296_p4 = ap_phi_reg_pp0_iter0_data_329_V_read399_phi_reg_78292.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_329_V_read399_rewind_phi_fu_33811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_329_V_read399_rewind_phi_fu_33811_p6 = data_329_V_read399_phi_reg_78292.read();
    } else {
        ap_phi_mux_data_329_V_read399_rewind_phi_fu_33811_p6 = data_329_V_read399_rewind_reg_33807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_32_V_read102_phi_phi_fu_74435_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_32_V_read102_phi_phi_fu_74435_p4 = ap_phi_mux_data_32_V_read102_rewind_phi_fu_29653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_32_V_read102_phi_phi_fu_74435_p4 = data_32_V_read.read();
        } else {
            ap_phi_mux_data_32_V_read102_phi_phi_fu_74435_p4 = ap_phi_reg_pp0_iter0_data_32_V_read102_phi_reg_74431.read();
        }
    } else {
        ap_phi_mux_data_32_V_read102_phi_phi_fu_74435_p4 = ap_phi_reg_pp0_iter0_data_32_V_read102_phi_reg_74431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_32_V_read102_rewind_phi_fu_29653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_32_V_read102_rewind_phi_fu_29653_p6 = data_32_V_read102_phi_reg_74431.read();
    } else {
        ap_phi_mux_data_32_V_read102_rewind_phi_fu_29653_p6 = data_32_V_read102_rewind_reg_29649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_330_V_read400_phi_phi_fu_78309_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_330_V_read400_phi_phi_fu_78309_p4 = ap_phi_mux_data_330_V_read400_rewind_phi_fu_33825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_330_V_read400_phi_phi_fu_78309_p4 = data_330_V_read.read();
        } else {
            ap_phi_mux_data_330_V_read400_phi_phi_fu_78309_p4 = ap_phi_reg_pp0_iter0_data_330_V_read400_phi_reg_78305.read();
        }
    } else {
        ap_phi_mux_data_330_V_read400_phi_phi_fu_78309_p4 = ap_phi_reg_pp0_iter0_data_330_V_read400_phi_reg_78305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_330_V_read400_rewind_phi_fu_33825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_330_V_read400_rewind_phi_fu_33825_p6 = data_330_V_read400_phi_reg_78305.read();
    } else {
        ap_phi_mux_data_330_V_read400_rewind_phi_fu_33825_p6 = data_330_V_read400_rewind_reg_33821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_331_V_read401_phi_phi_fu_78322_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_331_V_read401_phi_phi_fu_78322_p4 = ap_phi_mux_data_331_V_read401_rewind_phi_fu_33839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_331_V_read401_phi_phi_fu_78322_p4 = data_331_V_read.read();
        } else {
            ap_phi_mux_data_331_V_read401_phi_phi_fu_78322_p4 = ap_phi_reg_pp0_iter0_data_331_V_read401_phi_reg_78318.read();
        }
    } else {
        ap_phi_mux_data_331_V_read401_phi_phi_fu_78322_p4 = ap_phi_reg_pp0_iter0_data_331_V_read401_phi_reg_78318.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_331_V_read401_rewind_phi_fu_33839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_331_V_read401_rewind_phi_fu_33839_p6 = data_331_V_read401_phi_reg_78318.read();
    } else {
        ap_phi_mux_data_331_V_read401_rewind_phi_fu_33839_p6 = data_331_V_read401_rewind_reg_33835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_332_V_read402_phi_phi_fu_78335_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_332_V_read402_phi_phi_fu_78335_p4 = ap_phi_mux_data_332_V_read402_rewind_phi_fu_33853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_332_V_read402_phi_phi_fu_78335_p4 = data_332_V_read.read();
        } else {
            ap_phi_mux_data_332_V_read402_phi_phi_fu_78335_p4 = ap_phi_reg_pp0_iter0_data_332_V_read402_phi_reg_78331.read();
        }
    } else {
        ap_phi_mux_data_332_V_read402_phi_phi_fu_78335_p4 = ap_phi_reg_pp0_iter0_data_332_V_read402_phi_reg_78331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_332_V_read402_rewind_phi_fu_33853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_332_V_read402_rewind_phi_fu_33853_p6 = data_332_V_read402_phi_reg_78331.read();
    } else {
        ap_phi_mux_data_332_V_read402_rewind_phi_fu_33853_p6 = data_332_V_read402_rewind_reg_33849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_333_V_read403_phi_phi_fu_78348_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_333_V_read403_phi_phi_fu_78348_p4 = ap_phi_mux_data_333_V_read403_rewind_phi_fu_33867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_333_V_read403_phi_phi_fu_78348_p4 = data_333_V_read.read();
        } else {
            ap_phi_mux_data_333_V_read403_phi_phi_fu_78348_p4 = ap_phi_reg_pp0_iter0_data_333_V_read403_phi_reg_78344.read();
        }
    } else {
        ap_phi_mux_data_333_V_read403_phi_phi_fu_78348_p4 = ap_phi_reg_pp0_iter0_data_333_V_read403_phi_reg_78344.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_333_V_read403_rewind_phi_fu_33867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_333_V_read403_rewind_phi_fu_33867_p6 = data_333_V_read403_phi_reg_78344.read();
    } else {
        ap_phi_mux_data_333_V_read403_rewind_phi_fu_33867_p6 = data_333_V_read403_rewind_reg_33863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_334_V_read404_phi_phi_fu_78361_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_334_V_read404_phi_phi_fu_78361_p4 = ap_phi_mux_data_334_V_read404_rewind_phi_fu_33881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_334_V_read404_phi_phi_fu_78361_p4 = data_334_V_read.read();
        } else {
            ap_phi_mux_data_334_V_read404_phi_phi_fu_78361_p4 = ap_phi_reg_pp0_iter0_data_334_V_read404_phi_reg_78357.read();
        }
    } else {
        ap_phi_mux_data_334_V_read404_phi_phi_fu_78361_p4 = ap_phi_reg_pp0_iter0_data_334_V_read404_phi_reg_78357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_334_V_read404_rewind_phi_fu_33881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_334_V_read404_rewind_phi_fu_33881_p6 = data_334_V_read404_phi_reg_78357.read();
    } else {
        ap_phi_mux_data_334_V_read404_rewind_phi_fu_33881_p6 = data_334_V_read404_rewind_reg_33877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_335_V_read405_phi_phi_fu_78374_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_335_V_read405_phi_phi_fu_78374_p4 = ap_phi_mux_data_335_V_read405_rewind_phi_fu_33895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_335_V_read405_phi_phi_fu_78374_p4 = data_335_V_read.read();
        } else {
            ap_phi_mux_data_335_V_read405_phi_phi_fu_78374_p4 = ap_phi_reg_pp0_iter0_data_335_V_read405_phi_reg_78370.read();
        }
    } else {
        ap_phi_mux_data_335_V_read405_phi_phi_fu_78374_p4 = ap_phi_reg_pp0_iter0_data_335_V_read405_phi_reg_78370.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_335_V_read405_rewind_phi_fu_33895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_335_V_read405_rewind_phi_fu_33895_p6 = data_335_V_read405_phi_reg_78370.read();
    } else {
        ap_phi_mux_data_335_V_read405_rewind_phi_fu_33895_p6 = data_335_V_read405_rewind_reg_33891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_336_V_read406_phi_phi_fu_78387_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_336_V_read406_phi_phi_fu_78387_p4 = ap_phi_mux_data_336_V_read406_rewind_phi_fu_33909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_336_V_read406_phi_phi_fu_78387_p4 = data_336_V_read.read();
        } else {
            ap_phi_mux_data_336_V_read406_phi_phi_fu_78387_p4 = ap_phi_reg_pp0_iter0_data_336_V_read406_phi_reg_78383.read();
        }
    } else {
        ap_phi_mux_data_336_V_read406_phi_phi_fu_78387_p4 = ap_phi_reg_pp0_iter0_data_336_V_read406_phi_reg_78383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_336_V_read406_rewind_phi_fu_33909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_336_V_read406_rewind_phi_fu_33909_p6 = data_336_V_read406_phi_reg_78383.read();
    } else {
        ap_phi_mux_data_336_V_read406_rewind_phi_fu_33909_p6 = data_336_V_read406_rewind_reg_33905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_337_V_read407_phi_phi_fu_78400_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_337_V_read407_phi_phi_fu_78400_p4 = ap_phi_mux_data_337_V_read407_rewind_phi_fu_33923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_337_V_read407_phi_phi_fu_78400_p4 = data_337_V_read.read();
        } else {
            ap_phi_mux_data_337_V_read407_phi_phi_fu_78400_p4 = ap_phi_reg_pp0_iter0_data_337_V_read407_phi_reg_78396.read();
        }
    } else {
        ap_phi_mux_data_337_V_read407_phi_phi_fu_78400_p4 = ap_phi_reg_pp0_iter0_data_337_V_read407_phi_reg_78396.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_337_V_read407_rewind_phi_fu_33923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_337_V_read407_rewind_phi_fu_33923_p6 = data_337_V_read407_phi_reg_78396.read();
    } else {
        ap_phi_mux_data_337_V_read407_rewind_phi_fu_33923_p6 = data_337_V_read407_rewind_reg_33919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_338_V_read408_phi_phi_fu_78413_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_338_V_read408_phi_phi_fu_78413_p4 = ap_phi_mux_data_338_V_read408_rewind_phi_fu_33937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_338_V_read408_phi_phi_fu_78413_p4 = data_338_V_read.read();
        } else {
            ap_phi_mux_data_338_V_read408_phi_phi_fu_78413_p4 = ap_phi_reg_pp0_iter0_data_338_V_read408_phi_reg_78409.read();
        }
    } else {
        ap_phi_mux_data_338_V_read408_phi_phi_fu_78413_p4 = ap_phi_reg_pp0_iter0_data_338_V_read408_phi_reg_78409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_338_V_read408_rewind_phi_fu_33937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_338_V_read408_rewind_phi_fu_33937_p6 = data_338_V_read408_phi_reg_78409.read();
    } else {
        ap_phi_mux_data_338_V_read408_rewind_phi_fu_33937_p6 = data_338_V_read408_rewind_reg_33933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_339_V_read409_phi_phi_fu_78426_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_339_V_read409_phi_phi_fu_78426_p4 = ap_phi_mux_data_339_V_read409_rewind_phi_fu_33951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_339_V_read409_phi_phi_fu_78426_p4 = data_339_V_read.read();
        } else {
            ap_phi_mux_data_339_V_read409_phi_phi_fu_78426_p4 = ap_phi_reg_pp0_iter0_data_339_V_read409_phi_reg_78422.read();
        }
    } else {
        ap_phi_mux_data_339_V_read409_phi_phi_fu_78426_p4 = ap_phi_reg_pp0_iter0_data_339_V_read409_phi_reg_78422.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_339_V_read409_rewind_phi_fu_33951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_339_V_read409_rewind_phi_fu_33951_p6 = data_339_V_read409_phi_reg_78422.read();
    } else {
        ap_phi_mux_data_339_V_read409_rewind_phi_fu_33951_p6 = data_339_V_read409_rewind_reg_33947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_33_V_read103_phi_phi_fu_74448_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_33_V_read103_phi_phi_fu_74448_p4 = ap_phi_mux_data_33_V_read103_rewind_phi_fu_29667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_33_V_read103_phi_phi_fu_74448_p4 = data_33_V_read.read();
        } else {
            ap_phi_mux_data_33_V_read103_phi_phi_fu_74448_p4 = ap_phi_reg_pp0_iter0_data_33_V_read103_phi_reg_74444.read();
        }
    } else {
        ap_phi_mux_data_33_V_read103_phi_phi_fu_74448_p4 = ap_phi_reg_pp0_iter0_data_33_V_read103_phi_reg_74444.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_33_V_read103_rewind_phi_fu_29667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_33_V_read103_rewind_phi_fu_29667_p6 = data_33_V_read103_phi_reg_74444.read();
    } else {
        ap_phi_mux_data_33_V_read103_rewind_phi_fu_29667_p6 = data_33_V_read103_rewind_reg_29663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_340_V_read410_phi_phi_fu_78439_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_340_V_read410_phi_phi_fu_78439_p4 = ap_phi_mux_data_340_V_read410_rewind_phi_fu_33965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_340_V_read410_phi_phi_fu_78439_p4 = data_340_V_read.read();
        } else {
            ap_phi_mux_data_340_V_read410_phi_phi_fu_78439_p4 = ap_phi_reg_pp0_iter0_data_340_V_read410_phi_reg_78435.read();
        }
    } else {
        ap_phi_mux_data_340_V_read410_phi_phi_fu_78439_p4 = ap_phi_reg_pp0_iter0_data_340_V_read410_phi_reg_78435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_340_V_read410_rewind_phi_fu_33965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_340_V_read410_rewind_phi_fu_33965_p6 = data_340_V_read410_phi_reg_78435.read();
    } else {
        ap_phi_mux_data_340_V_read410_rewind_phi_fu_33965_p6 = data_340_V_read410_rewind_reg_33961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_341_V_read411_phi_phi_fu_78452_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_341_V_read411_phi_phi_fu_78452_p4 = ap_phi_mux_data_341_V_read411_rewind_phi_fu_33979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_341_V_read411_phi_phi_fu_78452_p4 = data_341_V_read.read();
        } else {
            ap_phi_mux_data_341_V_read411_phi_phi_fu_78452_p4 = ap_phi_reg_pp0_iter0_data_341_V_read411_phi_reg_78448.read();
        }
    } else {
        ap_phi_mux_data_341_V_read411_phi_phi_fu_78452_p4 = ap_phi_reg_pp0_iter0_data_341_V_read411_phi_reg_78448.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_341_V_read411_rewind_phi_fu_33979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_341_V_read411_rewind_phi_fu_33979_p6 = data_341_V_read411_phi_reg_78448.read();
    } else {
        ap_phi_mux_data_341_V_read411_rewind_phi_fu_33979_p6 = data_341_V_read411_rewind_reg_33975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_342_V_read412_phi_phi_fu_78465_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_342_V_read412_phi_phi_fu_78465_p4 = ap_phi_mux_data_342_V_read412_rewind_phi_fu_33993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_342_V_read412_phi_phi_fu_78465_p4 = data_342_V_read.read();
        } else {
            ap_phi_mux_data_342_V_read412_phi_phi_fu_78465_p4 = ap_phi_reg_pp0_iter0_data_342_V_read412_phi_reg_78461.read();
        }
    } else {
        ap_phi_mux_data_342_V_read412_phi_phi_fu_78465_p4 = ap_phi_reg_pp0_iter0_data_342_V_read412_phi_reg_78461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_342_V_read412_rewind_phi_fu_33993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_342_V_read412_rewind_phi_fu_33993_p6 = data_342_V_read412_phi_reg_78461.read();
    } else {
        ap_phi_mux_data_342_V_read412_rewind_phi_fu_33993_p6 = data_342_V_read412_rewind_reg_33989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_343_V_read413_phi_phi_fu_78478_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_343_V_read413_phi_phi_fu_78478_p4 = ap_phi_mux_data_343_V_read413_rewind_phi_fu_34007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_343_V_read413_phi_phi_fu_78478_p4 = data_343_V_read.read();
        } else {
            ap_phi_mux_data_343_V_read413_phi_phi_fu_78478_p4 = ap_phi_reg_pp0_iter0_data_343_V_read413_phi_reg_78474.read();
        }
    } else {
        ap_phi_mux_data_343_V_read413_phi_phi_fu_78478_p4 = ap_phi_reg_pp0_iter0_data_343_V_read413_phi_reg_78474.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_343_V_read413_rewind_phi_fu_34007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_343_V_read413_rewind_phi_fu_34007_p6 = data_343_V_read413_phi_reg_78474.read();
    } else {
        ap_phi_mux_data_343_V_read413_rewind_phi_fu_34007_p6 = data_343_V_read413_rewind_reg_34003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_344_V_read414_phi_phi_fu_78491_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_344_V_read414_phi_phi_fu_78491_p4 = ap_phi_mux_data_344_V_read414_rewind_phi_fu_34021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_344_V_read414_phi_phi_fu_78491_p4 = data_344_V_read.read();
        } else {
            ap_phi_mux_data_344_V_read414_phi_phi_fu_78491_p4 = ap_phi_reg_pp0_iter0_data_344_V_read414_phi_reg_78487.read();
        }
    } else {
        ap_phi_mux_data_344_V_read414_phi_phi_fu_78491_p4 = ap_phi_reg_pp0_iter0_data_344_V_read414_phi_reg_78487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_344_V_read414_rewind_phi_fu_34021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_344_V_read414_rewind_phi_fu_34021_p6 = data_344_V_read414_phi_reg_78487.read();
    } else {
        ap_phi_mux_data_344_V_read414_rewind_phi_fu_34021_p6 = data_344_V_read414_rewind_reg_34017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_345_V_read415_phi_phi_fu_78504_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_345_V_read415_phi_phi_fu_78504_p4 = ap_phi_mux_data_345_V_read415_rewind_phi_fu_34035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_345_V_read415_phi_phi_fu_78504_p4 = data_345_V_read.read();
        } else {
            ap_phi_mux_data_345_V_read415_phi_phi_fu_78504_p4 = ap_phi_reg_pp0_iter0_data_345_V_read415_phi_reg_78500.read();
        }
    } else {
        ap_phi_mux_data_345_V_read415_phi_phi_fu_78504_p4 = ap_phi_reg_pp0_iter0_data_345_V_read415_phi_reg_78500.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_345_V_read415_rewind_phi_fu_34035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_345_V_read415_rewind_phi_fu_34035_p6 = data_345_V_read415_phi_reg_78500.read();
    } else {
        ap_phi_mux_data_345_V_read415_rewind_phi_fu_34035_p6 = data_345_V_read415_rewind_reg_34031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_346_V_read416_phi_phi_fu_78517_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_346_V_read416_phi_phi_fu_78517_p4 = ap_phi_mux_data_346_V_read416_rewind_phi_fu_34049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_346_V_read416_phi_phi_fu_78517_p4 = data_346_V_read.read();
        } else {
            ap_phi_mux_data_346_V_read416_phi_phi_fu_78517_p4 = ap_phi_reg_pp0_iter0_data_346_V_read416_phi_reg_78513.read();
        }
    } else {
        ap_phi_mux_data_346_V_read416_phi_phi_fu_78517_p4 = ap_phi_reg_pp0_iter0_data_346_V_read416_phi_reg_78513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_346_V_read416_rewind_phi_fu_34049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_346_V_read416_rewind_phi_fu_34049_p6 = data_346_V_read416_phi_reg_78513.read();
    } else {
        ap_phi_mux_data_346_V_read416_rewind_phi_fu_34049_p6 = data_346_V_read416_rewind_reg_34045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_347_V_read417_phi_phi_fu_78530_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_347_V_read417_phi_phi_fu_78530_p4 = ap_phi_mux_data_347_V_read417_rewind_phi_fu_34063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_347_V_read417_phi_phi_fu_78530_p4 = data_347_V_read.read();
        } else {
            ap_phi_mux_data_347_V_read417_phi_phi_fu_78530_p4 = ap_phi_reg_pp0_iter0_data_347_V_read417_phi_reg_78526.read();
        }
    } else {
        ap_phi_mux_data_347_V_read417_phi_phi_fu_78530_p4 = ap_phi_reg_pp0_iter0_data_347_V_read417_phi_reg_78526.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_347_V_read417_rewind_phi_fu_34063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_347_V_read417_rewind_phi_fu_34063_p6 = data_347_V_read417_phi_reg_78526.read();
    } else {
        ap_phi_mux_data_347_V_read417_rewind_phi_fu_34063_p6 = data_347_V_read417_rewind_reg_34059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_348_V_read418_phi_phi_fu_78543_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_348_V_read418_phi_phi_fu_78543_p4 = ap_phi_mux_data_348_V_read418_rewind_phi_fu_34077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_348_V_read418_phi_phi_fu_78543_p4 = data_348_V_read.read();
        } else {
            ap_phi_mux_data_348_V_read418_phi_phi_fu_78543_p4 = ap_phi_reg_pp0_iter0_data_348_V_read418_phi_reg_78539.read();
        }
    } else {
        ap_phi_mux_data_348_V_read418_phi_phi_fu_78543_p4 = ap_phi_reg_pp0_iter0_data_348_V_read418_phi_reg_78539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_348_V_read418_rewind_phi_fu_34077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_348_V_read418_rewind_phi_fu_34077_p6 = data_348_V_read418_phi_reg_78539.read();
    } else {
        ap_phi_mux_data_348_V_read418_rewind_phi_fu_34077_p6 = data_348_V_read418_rewind_reg_34073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_349_V_read419_phi_phi_fu_78556_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_349_V_read419_phi_phi_fu_78556_p4 = ap_phi_mux_data_349_V_read419_rewind_phi_fu_34091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_349_V_read419_phi_phi_fu_78556_p4 = data_349_V_read.read();
        } else {
            ap_phi_mux_data_349_V_read419_phi_phi_fu_78556_p4 = ap_phi_reg_pp0_iter0_data_349_V_read419_phi_reg_78552.read();
        }
    } else {
        ap_phi_mux_data_349_V_read419_phi_phi_fu_78556_p4 = ap_phi_reg_pp0_iter0_data_349_V_read419_phi_reg_78552.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_349_V_read419_rewind_phi_fu_34091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_349_V_read419_rewind_phi_fu_34091_p6 = data_349_V_read419_phi_reg_78552.read();
    } else {
        ap_phi_mux_data_349_V_read419_rewind_phi_fu_34091_p6 = data_349_V_read419_rewind_reg_34087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_34_V_read104_phi_phi_fu_74461_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_34_V_read104_phi_phi_fu_74461_p4 = ap_phi_mux_data_34_V_read104_rewind_phi_fu_29681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_34_V_read104_phi_phi_fu_74461_p4 = data_34_V_read.read();
        } else {
            ap_phi_mux_data_34_V_read104_phi_phi_fu_74461_p4 = ap_phi_reg_pp0_iter0_data_34_V_read104_phi_reg_74457.read();
        }
    } else {
        ap_phi_mux_data_34_V_read104_phi_phi_fu_74461_p4 = ap_phi_reg_pp0_iter0_data_34_V_read104_phi_reg_74457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_34_V_read104_rewind_phi_fu_29681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_34_V_read104_rewind_phi_fu_29681_p6 = data_34_V_read104_phi_reg_74457.read();
    } else {
        ap_phi_mux_data_34_V_read104_rewind_phi_fu_29681_p6 = data_34_V_read104_rewind_reg_29677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_350_V_read420_phi_phi_fu_78569_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_350_V_read420_phi_phi_fu_78569_p4 = ap_phi_mux_data_350_V_read420_rewind_phi_fu_34105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_350_V_read420_phi_phi_fu_78569_p4 = data_350_V_read.read();
        } else {
            ap_phi_mux_data_350_V_read420_phi_phi_fu_78569_p4 = ap_phi_reg_pp0_iter0_data_350_V_read420_phi_reg_78565.read();
        }
    } else {
        ap_phi_mux_data_350_V_read420_phi_phi_fu_78569_p4 = ap_phi_reg_pp0_iter0_data_350_V_read420_phi_reg_78565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_350_V_read420_rewind_phi_fu_34105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_350_V_read420_rewind_phi_fu_34105_p6 = data_350_V_read420_phi_reg_78565.read();
    } else {
        ap_phi_mux_data_350_V_read420_rewind_phi_fu_34105_p6 = data_350_V_read420_rewind_reg_34101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_351_V_read421_phi_phi_fu_78582_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_351_V_read421_phi_phi_fu_78582_p4 = ap_phi_mux_data_351_V_read421_rewind_phi_fu_34119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_351_V_read421_phi_phi_fu_78582_p4 = data_351_V_read.read();
        } else {
            ap_phi_mux_data_351_V_read421_phi_phi_fu_78582_p4 = ap_phi_reg_pp0_iter0_data_351_V_read421_phi_reg_78578.read();
        }
    } else {
        ap_phi_mux_data_351_V_read421_phi_phi_fu_78582_p4 = ap_phi_reg_pp0_iter0_data_351_V_read421_phi_reg_78578.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_351_V_read421_rewind_phi_fu_34119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_351_V_read421_rewind_phi_fu_34119_p6 = data_351_V_read421_phi_reg_78578.read();
    } else {
        ap_phi_mux_data_351_V_read421_rewind_phi_fu_34119_p6 = data_351_V_read421_rewind_reg_34115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_352_V_read422_phi_phi_fu_78595_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_352_V_read422_phi_phi_fu_78595_p4 = ap_phi_mux_data_352_V_read422_rewind_phi_fu_34133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_352_V_read422_phi_phi_fu_78595_p4 = data_352_V_read.read();
        } else {
            ap_phi_mux_data_352_V_read422_phi_phi_fu_78595_p4 = ap_phi_reg_pp0_iter0_data_352_V_read422_phi_reg_78591.read();
        }
    } else {
        ap_phi_mux_data_352_V_read422_phi_phi_fu_78595_p4 = ap_phi_reg_pp0_iter0_data_352_V_read422_phi_reg_78591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_352_V_read422_rewind_phi_fu_34133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_352_V_read422_rewind_phi_fu_34133_p6 = data_352_V_read422_phi_reg_78591.read();
    } else {
        ap_phi_mux_data_352_V_read422_rewind_phi_fu_34133_p6 = data_352_V_read422_rewind_reg_34129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_353_V_read423_phi_phi_fu_78608_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_353_V_read423_phi_phi_fu_78608_p4 = ap_phi_mux_data_353_V_read423_rewind_phi_fu_34147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_353_V_read423_phi_phi_fu_78608_p4 = data_353_V_read.read();
        } else {
            ap_phi_mux_data_353_V_read423_phi_phi_fu_78608_p4 = ap_phi_reg_pp0_iter0_data_353_V_read423_phi_reg_78604.read();
        }
    } else {
        ap_phi_mux_data_353_V_read423_phi_phi_fu_78608_p4 = ap_phi_reg_pp0_iter0_data_353_V_read423_phi_reg_78604.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_353_V_read423_rewind_phi_fu_34147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_353_V_read423_rewind_phi_fu_34147_p6 = data_353_V_read423_phi_reg_78604.read();
    } else {
        ap_phi_mux_data_353_V_read423_rewind_phi_fu_34147_p6 = data_353_V_read423_rewind_reg_34143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_354_V_read424_phi_phi_fu_78621_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_354_V_read424_phi_phi_fu_78621_p4 = ap_phi_mux_data_354_V_read424_rewind_phi_fu_34161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_354_V_read424_phi_phi_fu_78621_p4 = data_354_V_read.read();
        } else {
            ap_phi_mux_data_354_V_read424_phi_phi_fu_78621_p4 = ap_phi_reg_pp0_iter0_data_354_V_read424_phi_reg_78617.read();
        }
    } else {
        ap_phi_mux_data_354_V_read424_phi_phi_fu_78621_p4 = ap_phi_reg_pp0_iter0_data_354_V_read424_phi_reg_78617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_354_V_read424_rewind_phi_fu_34161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_354_V_read424_rewind_phi_fu_34161_p6 = data_354_V_read424_phi_reg_78617.read();
    } else {
        ap_phi_mux_data_354_V_read424_rewind_phi_fu_34161_p6 = data_354_V_read424_rewind_reg_34157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_355_V_read425_phi_phi_fu_78634_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_355_V_read425_phi_phi_fu_78634_p4 = ap_phi_mux_data_355_V_read425_rewind_phi_fu_34175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_355_V_read425_phi_phi_fu_78634_p4 = data_355_V_read.read();
        } else {
            ap_phi_mux_data_355_V_read425_phi_phi_fu_78634_p4 = ap_phi_reg_pp0_iter0_data_355_V_read425_phi_reg_78630.read();
        }
    } else {
        ap_phi_mux_data_355_V_read425_phi_phi_fu_78634_p4 = ap_phi_reg_pp0_iter0_data_355_V_read425_phi_reg_78630.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_355_V_read425_rewind_phi_fu_34175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_355_V_read425_rewind_phi_fu_34175_p6 = data_355_V_read425_phi_reg_78630.read();
    } else {
        ap_phi_mux_data_355_V_read425_rewind_phi_fu_34175_p6 = data_355_V_read425_rewind_reg_34171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_356_V_read426_phi_phi_fu_78647_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_356_V_read426_phi_phi_fu_78647_p4 = ap_phi_mux_data_356_V_read426_rewind_phi_fu_34189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_356_V_read426_phi_phi_fu_78647_p4 = data_356_V_read.read();
        } else {
            ap_phi_mux_data_356_V_read426_phi_phi_fu_78647_p4 = ap_phi_reg_pp0_iter0_data_356_V_read426_phi_reg_78643.read();
        }
    } else {
        ap_phi_mux_data_356_V_read426_phi_phi_fu_78647_p4 = ap_phi_reg_pp0_iter0_data_356_V_read426_phi_reg_78643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_356_V_read426_rewind_phi_fu_34189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_356_V_read426_rewind_phi_fu_34189_p6 = data_356_V_read426_phi_reg_78643.read();
    } else {
        ap_phi_mux_data_356_V_read426_rewind_phi_fu_34189_p6 = data_356_V_read426_rewind_reg_34185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_357_V_read427_phi_phi_fu_78660_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_357_V_read427_phi_phi_fu_78660_p4 = ap_phi_mux_data_357_V_read427_rewind_phi_fu_34203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_357_V_read427_phi_phi_fu_78660_p4 = data_357_V_read.read();
        } else {
            ap_phi_mux_data_357_V_read427_phi_phi_fu_78660_p4 = ap_phi_reg_pp0_iter0_data_357_V_read427_phi_reg_78656.read();
        }
    } else {
        ap_phi_mux_data_357_V_read427_phi_phi_fu_78660_p4 = ap_phi_reg_pp0_iter0_data_357_V_read427_phi_reg_78656.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_357_V_read427_rewind_phi_fu_34203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_357_V_read427_rewind_phi_fu_34203_p6 = data_357_V_read427_phi_reg_78656.read();
    } else {
        ap_phi_mux_data_357_V_read427_rewind_phi_fu_34203_p6 = data_357_V_read427_rewind_reg_34199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_358_V_read428_phi_phi_fu_78673_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_358_V_read428_phi_phi_fu_78673_p4 = ap_phi_mux_data_358_V_read428_rewind_phi_fu_34217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_358_V_read428_phi_phi_fu_78673_p4 = data_358_V_read.read();
        } else {
            ap_phi_mux_data_358_V_read428_phi_phi_fu_78673_p4 = ap_phi_reg_pp0_iter0_data_358_V_read428_phi_reg_78669.read();
        }
    } else {
        ap_phi_mux_data_358_V_read428_phi_phi_fu_78673_p4 = ap_phi_reg_pp0_iter0_data_358_V_read428_phi_reg_78669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_358_V_read428_rewind_phi_fu_34217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_358_V_read428_rewind_phi_fu_34217_p6 = data_358_V_read428_phi_reg_78669.read();
    } else {
        ap_phi_mux_data_358_V_read428_rewind_phi_fu_34217_p6 = data_358_V_read428_rewind_reg_34213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_359_V_read429_phi_phi_fu_78686_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_359_V_read429_phi_phi_fu_78686_p4 = ap_phi_mux_data_359_V_read429_rewind_phi_fu_34231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_359_V_read429_phi_phi_fu_78686_p4 = data_359_V_read.read();
        } else {
            ap_phi_mux_data_359_V_read429_phi_phi_fu_78686_p4 = ap_phi_reg_pp0_iter0_data_359_V_read429_phi_reg_78682.read();
        }
    } else {
        ap_phi_mux_data_359_V_read429_phi_phi_fu_78686_p4 = ap_phi_reg_pp0_iter0_data_359_V_read429_phi_reg_78682.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_359_V_read429_rewind_phi_fu_34231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_359_V_read429_rewind_phi_fu_34231_p6 = data_359_V_read429_phi_reg_78682.read();
    } else {
        ap_phi_mux_data_359_V_read429_rewind_phi_fu_34231_p6 = data_359_V_read429_rewind_reg_34227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_35_V_read105_phi_phi_fu_74474_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_35_V_read105_phi_phi_fu_74474_p4 = ap_phi_mux_data_35_V_read105_rewind_phi_fu_29695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_35_V_read105_phi_phi_fu_74474_p4 = data_35_V_read.read();
        } else {
            ap_phi_mux_data_35_V_read105_phi_phi_fu_74474_p4 = ap_phi_reg_pp0_iter0_data_35_V_read105_phi_reg_74470.read();
        }
    } else {
        ap_phi_mux_data_35_V_read105_phi_phi_fu_74474_p4 = ap_phi_reg_pp0_iter0_data_35_V_read105_phi_reg_74470.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_35_V_read105_rewind_phi_fu_29695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_35_V_read105_rewind_phi_fu_29695_p6 = data_35_V_read105_phi_reg_74470.read();
    } else {
        ap_phi_mux_data_35_V_read105_rewind_phi_fu_29695_p6 = data_35_V_read105_rewind_reg_29691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_360_V_read430_phi_phi_fu_78699_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_360_V_read430_phi_phi_fu_78699_p4 = ap_phi_mux_data_360_V_read430_rewind_phi_fu_34245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_360_V_read430_phi_phi_fu_78699_p4 = data_360_V_read.read();
        } else {
            ap_phi_mux_data_360_V_read430_phi_phi_fu_78699_p4 = ap_phi_reg_pp0_iter0_data_360_V_read430_phi_reg_78695.read();
        }
    } else {
        ap_phi_mux_data_360_V_read430_phi_phi_fu_78699_p4 = ap_phi_reg_pp0_iter0_data_360_V_read430_phi_reg_78695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_360_V_read430_rewind_phi_fu_34245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_360_V_read430_rewind_phi_fu_34245_p6 = data_360_V_read430_phi_reg_78695.read();
    } else {
        ap_phi_mux_data_360_V_read430_rewind_phi_fu_34245_p6 = data_360_V_read430_rewind_reg_34241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_361_V_read431_phi_phi_fu_78712_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_361_V_read431_phi_phi_fu_78712_p4 = ap_phi_mux_data_361_V_read431_rewind_phi_fu_34259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_361_V_read431_phi_phi_fu_78712_p4 = data_361_V_read.read();
        } else {
            ap_phi_mux_data_361_V_read431_phi_phi_fu_78712_p4 = ap_phi_reg_pp0_iter0_data_361_V_read431_phi_reg_78708.read();
        }
    } else {
        ap_phi_mux_data_361_V_read431_phi_phi_fu_78712_p4 = ap_phi_reg_pp0_iter0_data_361_V_read431_phi_reg_78708.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_361_V_read431_rewind_phi_fu_34259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_361_V_read431_rewind_phi_fu_34259_p6 = data_361_V_read431_phi_reg_78708.read();
    } else {
        ap_phi_mux_data_361_V_read431_rewind_phi_fu_34259_p6 = data_361_V_read431_rewind_reg_34255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_362_V_read432_phi_phi_fu_78725_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_362_V_read432_phi_phi_fu_78725_p4 = ap_phi_mux_data_362_V_read432_rewind_phi_fu_34273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_362_V_read432_phi_phi_fu_78725_p4 = data_362_V_read.read();
        } else {
            ap_phi_mux_data_362_V_read432_phi_phi_fu_78725_p4 = ap_phi_reg_pp0_iter0_data_362_V_read432_phi_reg_78721.read();
        }
    } else {
        ap_phi_mux_data_362_V_read432_phi_phi_fu_78725_p4 = ap_phi_reg_pp0_iter0_data_362_V_read432_phi_reg_78721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_362_V_read432_rewind_phi_fu_34273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_362_V_read432_rewind_phi_fu_34273_p6 = data_362_V_read432_phi_reg_78721.read();
    } else {
        ap_phi_mux_data_362_V_read432_rewind_phi_fu_34273_p6 = data_362_V_read432_rewind_reg_34269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_363_V_read433_phi_phi_fu_78738_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_363_V_read433_phi_phi_fu_78738_p4 = ap_phi_mux_data_363_V_read433_rewind_phi_fu_34287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_363_V_read433_phi_phi_fu_78738_p4 = data_363_V_read.read();
        } else {
            ap_phi_mux_data_363_V_read433_phi_phi_fu_78738_p4 = ap_phi_reg_pp0_iter0_data_363_V_read433_phi_reg_78734.read();
        }
    } else {
        ap_phi_mux_data_363_V_read433_phi_phi_fu_78738_p4 = ap_phi_reg_pp0_iter0_data_363_V_read433_phi_reg_78734.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_363_V_read433_rewind_phi_fu_34287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_363_V_read433_rewind_phi_fu_34287_p6 = data_363_V_read433_phi_reg_78734.read();
    } else {
        ap_phi_mux_data_363_V_read433_rewind_phi_fu_34287_p6 = data_363_V_read433_rewind_reg_34283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_364_V_read434_phi_phi_fu_78751_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_364_V_read434_phi_phi_fu_78751_p4 = ap_phi_mux_data_364_V_read434_rewind_phi_fu_34301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_364_V_read434_phi_phi_fu_78751_p4 = data_364_V_read.read();
        } else {
            ap_phi_mux_data_364_V_read434_phi_phi_fu_78751_p4 = ap_phi_reg_pp0_iter0_data_364_V_read434_phi_reg_78747.read();
        }
    } else {
        ap_phi_mux_data_364_V_read434_phi_phi_fu_78751_p4 = ap_phi_reg_pp0_iter0_data_364_V_read434_phi_reg_78747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_364_V_read434_rewind_phi_fu_34301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_364_V_read434_rewind_phi_fu_34301_p6 = data_364_V_read434_phi_reg_78747.read();
    } else {
        ap_phi_mux_data_364_V_read434_rewind_phi_fu_34301_p6 = data_364_V_read434_rewind_reg_34297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_365_V_read435_phi_phi_fu_78764_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_365_V_read435_phi_phi_fu_78764_p4 = ap_phi_mux_data_365_V_read435_rewind_phi_fu_34315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_365_V_read435_phi_phi_fu_78764_p4 = data_365_V_read.read();
        } else {
            ap_phi_mux_data_365_V_read435_phi_phi_fu_78764_p4 = ap_phi_reg_pp0_iter0_data_365_V_read435_phi_reg_78760.read();
        }
    } else {
        ap_phi_mux_data_365_V_read435_phi_phi_fu_78764_p4 = ap_phi_reg_pp0_iter0_data_365_V_read435_phi_reg_78760.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_365_V_read435_rewind_phi_fu_34315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_365_V_read435_rewind_phi_fu_34315_p6 = data_365_V_read435_phi_reg_78760.read();
    } else {
        ap_phi_mux_data_365_V_read435_rewind_phi_fu_34315_p6 = data_365_V_read435_rewind_reg_34311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_366_V_read436_phi_phi_fu_78777_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_366_V_read436_phi_phi_fu_78777_p4 = ap_phi_mux_data_366_V_read436_rewind_phi_fu_34329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_366_V_read436_phi_phi_fu_78777_p4 = data_366_V_read.read();
        } else {
            ap_phi_mux_data_366_V_read436_phi_phi_fu_78777_p4 = ap_phi_reg_pp0_iter0_data_366_V_read436_phi_reg_78773.read();
        }
    } else {
        ap_phi_mux_data_366_V_read436_phi_phi_fu_78777_p4 = ap_phi_reg_pp0_iter0_data_366_V_read436_phi_reg_78773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_366_V_read436_rewind_phi_fu_34329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_366_V_read436_rewind_phi_fu_34329_p6 = data_366_V_read436_phi_reg_78773.read();
    } else {
        ap_phi_mux_data_366_V_read436_rewind_phi_fu_34329_p6 = data_366_V_read436_rewind_reg_34325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_367_V_read437_phi_phi_fu_78790_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_367_V_read437_phi_phi_fu_78790_p4 = ap_phi_mux_data_367_V_read437_rewind_phi_fu_34343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_367_V_read437_phi_phi_fu_78790_p4 = data_367_V_read.read();
        } else {
            ap_phi_mux_data_367_V_read437_phi_phi_fu_78790_p4 = ap_phi_reg_pp0_iter0_data_367_V_read437_phi_reg_78786.read();
        }
    } else {
        ap_phi_mux_data_367_V_read437_phi_phi_fu_78790_p4 = ap_phi_reg_pp0_iter0_data_367_V_read437_phi_reg_78786.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_367_V_read437_rewind_phi_fu_34343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_367_V_read437_rewind_phi_fu_34343_p6 = data_367_V_read437_phi_reg_78786.read();
    } else {
        ap_phi_mux_data_367_V_read437_rewind_phi_fu_34343_p6 = data_367_V_read437_rewind_reg_34339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_368_V_read438_phi_phi_fu_78803_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_368_V_read438_phi_phi_fu_78803_p4 = ap_phi_mux_data_368_V_read438_rewind_phi_fu_34357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_368_V_read438_phi_phi_fu_78803_p4 = data_368_V_read.read();
        } else {
            ap_phi_mux_data_368_V_read438_phi_phi_fu_78803_p4 = ap_phi_reg_pp0_iter0_data_368_V_read438_phi_reg_78799.read();
        }
    } else {
        ap_phi_mux_data_368_V_read438_phi_phi_fu_78803_p4 = ap_phi_reg_pp0_iter0_data_368_V_read438_phi_reg_78799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_368_V_read438_rewind_phi_fu_34357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_368_V_read438_rewind_phi_fu_34357_p6 = data_368_V_read438_phi_reg_78799.read();
    } else {
        ap_phi_mux_data_368_V_read438_rewind_phi_fu_34357_p6 = data_368_V_read438_rewind_reg_34353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_369_V_read439_phi_phi_fu_78816_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_369_V_read439_phi_phi_fu_78816_p4 = ap_phi_mux_data_369_V_read439_rewind_phi_fu_34371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_369_V_read439_phi_phi_fu_78816_p4 = data_369_V_read.read();
        } else {
            ap_phi_mux_data_369_V_read439_phi_phi_fu_78816_p4 = ap_phi_reg_pp0_iter0_data_369_V_read439_phi_reg_78812.read();
        }
    } else {
        ap_phi_mux_data_369_V_read439_phi_phi_fu_78816_p4 = ap_phi_reg_pp0_iter0_data_369_V_read439_phi_reg_78812.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_369_V_read439_rewind_phi_fu_34371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_369_V_read439_rewind_phi_fu_34371_p6 = data_369_V_read439_phi_reg_78812.read();
    } else {
        ap_phi_mux_data_369_V_read439_rewind_phi_fu_34371_p6 = data_369_V_read439_rewind_reg_34367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_36_V_read106_phi_phi_fu_74487_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_36_V_read106_phi_phi_fu_74487_p4 = ap_phi_mux_data_36_V_read106_rewind_phi_fu_29709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_36_V_read106_phi_phi_fu_74487_p4 = data_36_V_read.read();
        } else {
            ap_phi_mux_data_36_V_read106_phi_phi_fu_74487_p4 = ap_phi_reg_pp0_iter0_data_36_V_read106_phi_reg_74483.read();
        }
    } else {
        ap_phi_mux_data_36_V_read106_phi_phi_fu_74487_p4 = ap_phi_reg_pp0_iter0_data_36_V_read106_phi_reg_74483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_36_V_read106_rewind_phi_fu_29709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_36_V_read106_rewind_phi_fu_29709_p6 = data_36_V_read106_phi_reg_74483.read();
    } else {
        ap_phi_mux_data_36_V_read106_rewind_phi_fu_29709_p6 = data_36_V_read106_rewind_reg_29705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_370_V_read440_phi_phi_fu_78829_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_370_V_read440_phi_phi_fu_78829_p4 = ap_phi_mux_data_370_V_read440_rewind_phi_fu_34385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_370_V_read440_phi_phi_fu_78829_p4 = data_370_V_read.read();
        } else {
            ap_phi_mux_data_370_V_read440_phi_phi_fu_78829_p4 = ap_phi_reg_pp0_iter0_data_370_V_read440_phi_reg_78825.read();
        }
    } else {
        ap_phi_mux_data_370_V_read440_phi_phi_fu_78829_p4 = ap_phi_reg_pp0_iter0_data_370_V_read440_phi_reg_78825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_370_V_read440_rewind_phi_fu_34385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_370_V_read440_rewind_phi_fu_34385_p6 = data_370_V_read440_phi_reg_78825.read();
    } else {
        ap_phi_mux_data_370_V_read440_rewind_phi_fu_34385_p6 = data_370_V_read440_rewind_reg_34381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_371_V_read441_phi_phi_fu_78842_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_371_V_read441_phi_phi_fu_78842_p4 = ap_phi_mux_data_371_V_read441_rewind_phi_fu_34399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_371_V_read441_phi_phi_fu_78842_p4 = data_371_V_read.read();
        } else {
            ap_phi_mux_data_371_V_read441_phi_phi_fu_78842_p4 = ap_phi_reg_pp0_iter0_data_371_V_read441_phi_reg_78838.read();
        }
    } else {
        ap_phi_mux_data_371_V_read441_phi_phi_fu_78842_p4 = ap_phi_reg_pp0_iter0_data_371_V_read441_phi_reg_78838.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_371_V_read441_rewind_phi_fu_34399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_371_V_read441_rewind_phi_fu_34399_p6 = data_371_V_read441_phi_reg_78838.read();
    } else {
        ap_phi_mux_data_371_V_read441_rewind_phi_fu_34399_p6 = data_371_V_read441_rewind_reg_34395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_372_V_read442_phi_phi_fu_78855_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_372_V_read442_phi_phi_fu_78855_p4 = ap_phi_mux_data_372_V_read442_rewind_phi_fu_34413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_372_V_read442_phi_phi_fu_78855_p4 = data_372_V_read.read();
        } else {
            ap_phi_mux_data_372_V_read442_phi_phi_fu_78855_p4 = ap_phi_reg_pp0_iter0_data_372_V_read442_phi_reg_78851.read();
        }
    } else {
        ap_phi_mux_data_372_V_read442_phi_phi_fu_78855_p4 = ap_phi_reg_pp0_iter0_data_372_V_read442_phi_reg_78851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_372_V_read442_rewind_phi_fu_34413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_372_V_read442_rewind_phi_fu_34413_p6 = data_372_V_read442_phi_reg_78851.read();
    } else {
        ap_phi_mux_data_372_V_read442_rewind_phi_fu_34413_p6 = data_372_V_read442_rewind_reg_34409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_373_V_read443_phi_phi_fu_78868_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_373_V_read443_phi_phi_fu_78868_p4 = ap_phi_mux_data_373_V_read443_rewind_phi_fu_34427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_373_V_read443_phi_phi_fu_78868_p4 = data_373_V_read.read();
        } else {
            ap_phi_mux_data_373_V_read443_phi_phi_fu_78868_p4 = ap_phi_reg_pp0_iter0_data_373_V_read443_phi_reg_78864.read();
        }
    } else {
        ap_phi_mux_data_373_V_read443_phi_phi_fu_78868_p4 = ap_phi_reg_pp0_iter0_data_373_V_read443_phi_reg_78864.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_373_V_read443_rewind_phi_fu_34427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_373_V_read443_rewind_phi_fu_34427_p6 = data_373_V_read443_phi_reg_78864.read();
    } else {
        ap_phi_mux_data_373_V_read443_rewind_phi_fu_34427_p6 = data_373_V_read443_rewind_reg_34423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_374_V_read444_phi_phi_fu_78881_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_374_V_read444_phi_phi_fu_78881_p4 = ap_phi_mux_data_374_V_read444_rewind_phi_fu_34441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_374_V_read444_phi_phi_fu_78881_p4 = data_374_V_read.read();
        } else {
            ap_phi_mux_data_374_V_read444_phi_phi_fu_78881_p4 = ap_phi_reg_pp0_iter0_data_374_V_read444_phi_reg_78877.read();
        }
    } else {
        ap_phi_mux_data_374_V_read444_phi_phi_fu_78881_p4 = ap_phi_reg_pp0_iter0_data_374_V_read444_phi_reg_78877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_374_V_read444_rewind_phi_fu_34441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_374_V_read444_rewind_phi_fu_34441_p6 = data_374_V_read444_phi_reg_78877.read();
    } else {
        ap_phi_mux_data_374_V_read444_rewind_phi_fu_34441_p6 = data_374_V_read444_rewind_reg_34437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_375_V_read445_phi_phi_fu_78894_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_375_V_read445_phi_phi_fu_78894_p4 = ap_phi_mux_data_375_V_read445_rewind_phi_fu_34455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_375_V_read445_phi_phi_fu_78894_p4 = data_375_V_read.read();
        } else {
            ap_phi_mux_data_375_V_read445_phi_phi_fu_78894_p4 = ap_phi_reg_pp0_iter0_data_375_V_read445_phi_reg_78890.read();
        }
    } else {
        ap_phi_mux_data_375_V_read445_phi_phi_fu_78894_p4 = ap_phi_reg_pp0_iter0_data_375_V_read445_phi_reg_78890.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_375_V_read445_rewind_phi_fu_34455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_375_V_read445_rewind_phi_fu_34455_p6 = data_375_V_read445_phi_reg_78890.read();
    } else {
        ap_phi_mux_data_375_V_read445_rewind_phi_fu_34455_p6 = data_375_V_read445_rewind_reg_34451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_376_V_read446_phi_phi_fu_78907_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_376_V_read446_phi_phi_fu_78907_p4 = ap_phi_mux_data_376_V_read446_rewind_phi_fu_34469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_376_V_read446_phi_phi_fu_78907_p4 = data_376_V_read.read();
        } else {
            ap_phi_mux_data_376_V_read446_phi_phi_fu_78907_p4 = ap_phi_reg_pp0_iter0_data_376_V_read446_phi_reg_78903.read();
        }
    } else {
        ap_phi_mux_data_376_V_read446_phi_phi_fu_78907_p4 = ap_phi_reg_pp0_iter0_data_376_V_read446_phi_reg_78903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_376_V_read446_rewind_phi_fu_34469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_376_V_read446_rewind_phi_fu_34469_p6 = data_376_V_read446_phi_reg_78903.read();
    } else {
        ap_phi_mux_data_376_V_read446_rewind_phi_fu_34469_p6 = data_376_V_read446_rewind_reg_34465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_377_V_read447_phi_phi_fu_78920_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_377_V_read447_phi_phi_fu_78920_p4 = ap_phi_mux_data_377_V_read447_rewind_phi_fu_34483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_377_V_read447_phi_phi_fu_78920_p4 = data_377_V_read.read();
        } else {
            ap_phi_mux_data_377_V_read447_phi_phi_fu_78920_p4 = ap_phi_reg_pp0_iter0_data_377_V_read447_phi_reg_78916.read();
        }
    } else {
        ap_phi_mux_data_377_V_read447_phi_phi_fu_78920_p4 = ap_phi_reg_pp0_iter0_data_377_V_read447_phi_reg_78916.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_377_V_read447_rewind_phi_fu_34483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_377_V_read447_rewind_phi_fu_34483_p6 = data_377_V_read447_phi_reg_78916.read();
    } else {
        ap_phi_mux_data_377_V_read447_rewind_phi_fu_34483_p6 = data_377_V_read447_rewind_reg_34479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_378_V_read448_phi_phi_fu_78933_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_378_V_read448_phi_phi_fu_78933_p4 = ap_phi_mux_data_378_V_read448_rewind_phi_fu_34497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_378_V_read448_phi_phi_fu_78933_p4 = data_378_V_read.read();
        } else {
            ap_phi_mux_data_378_V_read448_phi_phi_fu_78933_p4 = ap_phi_reg_pp0_iter0_data_378_V_read448_phi_reg_78929.read();
        }
    } else {
        ap_phi_mux_data_378_V_read448_phi_phi_fu_78933_p4 = ap_phi_reg_pp0_iter0_data_378_V_read448_phi_reg_78929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_378_V_read448_rewind_phi_fu_34497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_378_V_read448_rewind_phi_fu_34497_p6 = data_378_V_read448_phi_reg_78929.read();
    } else {
        ap_phi_mux_data_378_V_read448_rewind_phi_fu_34497_p6 = data_378_V_read448_rewind_reg_34493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_379_V_read449_phi_phi_fu_78946_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_379_V_read449_phi_phi_fu_78946_p4 = ap_phi_mux_data_379_V_read449_rewind_phi_fu_34511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_379_V_read449_phi_phi_fu_78946_p4 = data_379_V_read.read();
        } else {
            ap_phi_mux_data_379_V_read449_phi_phi_fu_78946_p4 = ap_phi_reg_pp0_iter0_data_379_V_read449_phi_reg_78942.read();
        }
    } else {
        ap_phi_mux_data_379_V_read449_phi_phi_fu_78946_p4 = ap_phi_reg_pp0_iter0_data_379_V_read449_phi_reg_78942.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_379_V_read449_rewind_phi_fu_34511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_379_V_read449_rewind_phi_fu_34511_p6 = data_379_V_read449_phi_reg_78942.read();
    } else {
        ap_phi_mux_data_379_V_read449_rewind_phi_fu_34511_p6 = data_379_V_read449_rewind_reg_34507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_37_V_read107_phi_phi_fu_74500_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_37_V_read107_phi_phi_fu_74500_p4 = ap_phi_mux_data_37_V_read107_rewind_phi_fu_29723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_37_V_read107_phi_phi_fu_74500_p4 = data_37_V_read.read();
        } else {
            ap_phi_mux_data_37_V_read107_phi_phi_fu_74500_p4 = ap_phi_reg_pp0_iter0_data_37_V_read107_phi_reg_74496.read();
        }
    } else {
        ap_phi_mux_data_37_V_read107_phi_phi_fu_74500_p4 = ap_phi_reg_pp0_iter0_data_37_V_read107_phi_reg_74496.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_37_V_read107_rewind_phi_fu_29723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_37_V_read107_rewind_phi_fu_29723_p6 = data_37_V_read107_phi_reg_74496.read();
    } else {
        ap_phi_mux_data_37_V_read107_rewind_phi_fu_29723_p6 = data_37_V_read107_rewind_reg_29719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_380_V_read450_phi_phi_fu_78959_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_380_V_read450_phi_phi_fu_78959_p4 = ap_phi_mux_data_380_V_read450_rewind_phi_fu_34525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_380_V_read450_phi_phi_fu_78959_p4 = data_380_V_read.read();
        } else {
            ap_phi_mux_data_380_V_read450_phi_phi_fu_78959_p4 = ap_phi_reg_pp0_iter0_data_380_V_read450_phi_reg_78955.read();
        }
    } else {
        ap_phi_mux_data_380_V_read450_phi_phi_fu_78959_p4 = ap_phi_reg_pp0_iter0_data_380_V_read450_phi_reg_78955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_380_V_read450_rewind_phi_fu_34525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_380_V_read450_rewind_phi_fu_34525_p6 = data_380_V_read450_phi_reg_78955.read();
    } else {
        ap_phi_mux_data_380_V_read450_rewind_phi_fu_34525_p6 = data_380_V_read450_rewind_reg_34521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_381_V_read451_phi_phi_fu_78972_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_381_V_read451_phi_phi_fu_78972_p4 = ap_phi_mux_data_381_V_read451_rewind_phi_fu_34539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_381_V_read451_phi_phi_fu_78972_p4 = data_381_V_read.read();
        } else {
            ap_phi_mux_data_381_V_read451_phi_phi_fu_78972_p4 = ap_phi_reg_pp0_iter0_data_381_V_read451_phi_reg_78968.read();
        }
    } else {
        ap_phi_mux_data_381_V_read451_phi_phi_fu_78972_p4 = ap_phi_reg_pp0_iter0_data_381_V_read451_phi_reg_78968.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_381_V_read451_rewind_phi_fu_34539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_381_V_read451_rewind_phi_fu_34539_p6 = data_381_V_read451_phi_reg_78968.read();
    } else {
        ap_phi_mux_data_381_V_read451_rewind_phi_fu_34539_p6 = data_381_V_read451_rewind_reg_34535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_382_V_read452_phi_phi_fu_78985_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_382_V_read452_phi_phi_fu_78985_p4 = ap_phi_mux_data_382_V_read452_rewind_phi_fu_34553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_382_V_read452_phi_phi_fu_78985_p4 = data_382_V_read.read();
        } else {
            ap_phi_mux_data_382_V_read452_phi_phi_fu_78985_p4 = ap_phi_reg_pp0_iter0_data_382_V_read452_phi_reg_78981.read();
        }
    } else {
        ap_phi_mux_data_382_V_read452_phi_phi_fu_78985_p4 = ap_phi_reg_pp0_iter0_data_382_V_read452_phi_reg_78981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_382_V_read452_rewind_phi_fu_34553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_382_V_read452_rewind_phi_fu_34553_p6 = data_382_V_read452_phi_reg_78981.read();
    } else {
        ap_phi_mux_data_382_V_read452_rewind_phi_fu_34553_p6 = data_382_V_read452_rewind_reg_34549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_383_V_read453_phi_phi_fu_78998_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_383_V_read453_phi_phi_fu_78998_p4 = ap_phi_mux_data_383_V_read453_rewind_phi_fu_34567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_383_V_read453_phi_phi_fu_78998_p4 = data_383_V_read.read();
        } else {
            ap_phi_mux_data_383_V_read453_phi_phi_fu_78998_p4 = ap_phi_reg_pp0_iter0_data_383_V_read453_phi_reg_78994.read();
        }
    } else {
        ap_phi_mux_data_383_V_read453_phi_phi_fu_78998_p4 = ap_phi_reg_pp0_iter0_data_383_V_read453_phi_reg_78994.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_383_V_read453_rewind_phi_fu_34567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_383_V_read453_rewind_phi_fu_34567_p6 = data_383_V_read453_phi_reg_78994.read();
    } else {
        ap_phi_mux_data_383_V_read453_rewind_phi_fu_34567_p6 = data_383_V_read453_rewind_reg_34563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_384_V_read454_phi_phi_fu_79011_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_384_V_read454_phi_phi_fu_79011_p4 = ap_phi_mux_data_384_V_read454_rewind_phi_fu_34581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_384_V_read454_phi_phi_fu_79011_p4 = data_384_V_read.read();
        } else {
            ap_phi_mux_data_384_V_read454_phi_phi_fu_79011_p4 = ap_phi_reg_pp0_iter0_data_384_V_read454_phi_reg_79007.read();
        }
    } else {
        ap_phi_mux_data_384_V_read454_phi_phi_fu_79011_p4 = ap_phi_reg_pp0_iter0_data_384_V_read454_phi_reg_79007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_384_V_read454_rewind_phi_fu_34581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_384_V_read454_rewind_phi_fu_34581_p6 = data_384_V_read454_phi_reg_79007.read();
    } else {
        ap_phi_mux_data_384_V_read454_rewind_phi_fu_34581_p6 = data_384_V_read454_rewind_reg_34577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_385_V_read455_phi_phi_fu_79024_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_385_V_read455_phi_phi_fu_79024_p4 = ap_phi_mux_data_385_V_read455_rewind_phi_fu_34595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_385_V_read455_phi_phi_fu_79024_p4 = data_385_V_read.read();
        } else {
            ap_phi_mux_data_385_V_read455_phi_phi_fu_79024_p4 = ap_phi_reg_pp0_iter0_data_385_V_read455_phi_reg_79020.read();
        }
    } else {
        ap_phi_mux_data_385_V_read455_phi_phi_fu_79024_p4 = ap_phi_reg_pp0_iter0_data_385_V_read455_phi_reg_79020.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_385_V_read455_rewind_phi_fu_34595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_385_V_read455_rewind_phi_fu_34595_p6 = data_385_V_read455_phi_reg_79020.read();
    } else {
        ap_phi_mux_data_385_V_read455_rewind_phi_fu_34595_p6 = data_385_V_read455_rewind_reg_34591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_386_V_read456_phi_phi_fu_79037_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_386_V_read456_phi_phi_fu_79037_p4 = ap_phi_mux_data_386_V_read456_rewind_phi_fu_34609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_386_V_read456_phi_phi_fu_79037_p4 = data_386_V_read.read();
        } else {
            ap_phi_mux_data_386_V_read456_phi_phi_fu_79037_p4 = ap_phi_reg_pp0_iter0_data_386_V_read456_phi_reg_79033.read();
        }
    } else {
        ap_phi_mux_data_386_V_read456_phi_phi_fu_79037_p4 = ap_phi_reg_pp0_iter0_data_386_V_read456_phi_reg_79033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_386_V_read456_rewind_phi_fu_34609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_386_V_read456_rewind_phi_fu_34609_p6 = data_386_V_read456_phi_reg_79033.read();
    } else {
        ap_phi_mux_data_386_V_read456_rewind_phi_fu_34609_p6 = data_386_V_read456_rewind_reg_34605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_387_V_read457_phi_phi_fu_79050_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_387_V_read457_phi_phi_fu_79050_p4 = ap_phi_mux_data_387_V_read457_rewind_phi_fu_34623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_387_V_read457_phi_phi_fu_79050_p4 = data_387_V_read.read();
        } else {
            ap_phi_mux_data_387_V_read457_phi_phi_fu_79050_p4 = ap_phi_reg_pp0_iter0_data_387_V_read457_phi_reg_79046.read();
        }
    } else {
        ap_phi_mux_data_387_V_read457_phi_phi_fu_79050_p4 = ap_phi_reg_pp0_iter0_data_387_V_read457_phi_reg_79046.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_387_V_read457_rewind_phi_fu_34623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_387_V_read457_rewind_phi_fu_34623_p6 = data_387_V_read457_phi_reg_79046.read();
    } else {
        ap_phi_mux_data_387_V_read457_rewind_phi_fu_34623_p6 = data_387_V_read457_rewind_reg_34619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_388_V_read458_phi_phi_fu_79063_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_388_V_read458_phi_phi_fu_79063_p4 = ap_phi_mux_data_388_V_read458_rewind_phi_fu_34637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_388_V_read458_phi_phi_fu_79063_p4 = data_388_V_read.read();
        } else {
            ap_phi_mux_data_388_V_read458_phi_phi_fu_79063_p4 = ap_phi_reg_pp0_iter0_data_388_V_read458_phi_reg_79059.read();
        }
    } else {
        ap_phi_mux_data_388_V_read458_phi_phi_fu_79063_p4 = ap_phi_reg_pp0_iter0_data_388_V_read458_phi_reg_79059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_388_V_read458_rewind_phi_fu_34637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_388_V_read458_rewind_phi_fu_34637_p6 = data_388_V_read458_phi_reg_79059.read();
    } else {
        ap_phi_mux_data_388_V_read458_rewind_phi_fu_34637_p6 = data_388_V_read458_rewind_reg_34633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_389_V_read459_phi_phi_fu_79076_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_389_V_read459_phi_phi_fu_79076_p4 = ap_phi_mux_data_389_V_read459_rewind_phi_fu_34651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_389_V_read459_phi_phi_fu_79076_p4 = data_389_V_read.read();
        } else {
            ap_phi_mux_data_389_V_read459_phi_phi_fu_79076_p4 = ap_phi_reg_pp0_iter0_data_389_V_read459_phi_reg_79072.read();
        }
    } else {
        ap_phi_mux_data_389_V_read459_phi_phi_fu_79076_p4 = ap_phi_reg_pp0_iter0_data_389_V_read459_phi_reg_79072.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_389_V_read459_rewind_phi_fu_34651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_389_V_read459_rewind_phi_fu_34651_p6 = data_389_V_read459_phi_reg_79072.read();
    } else {
        ap_phi_mux_data_389_V_read459_rewind_phi_fu_34651_p6 = data_389_V_read459_rewind_reg_34647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_38_V_read108_phi_phi_fu_74513_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_38_V_read108_phi_phi_fu_74513_p4 = ap_phi_mux_data_38_V_read108_rewind_phi_fu_29737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_38_V_read108_phi_phi_fu_74513_p4 = data_38_V_read.read();
        } else {
            ap_phi_mux_data_38_V_read108_phi_phi_fu_74513_p4 = ap_phi_reg_pp0_iter0_data_38_V_read108_phi_reg_74509.read();
        }
    } else {
        ap_phi_mux_data_38_V_read108_phi_phi_fu_74513_p4 = ap_phi_reg_pp0_iter0_data_38_V_read108_phi_reg_74509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_38_V_read108_rewind_phi_fu_29737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_38_V_read108_rewind_phi_fu_29737_p6 = data_38_V_read108_phi_reg_74509.read();
    } else {
        ap_phi_mux_data_38_V_read108_rewind_phi_fu_29737_p6 = data_38_V_read108_rewind_reg_29733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_390_V_read460_phi_phi_fu_79089_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_390_V_read460_phi_phi_fu_79089_p4 = ap_phi_mux_data_390_V_read460_rewind_phi_fu_34665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_390_V_read460_phi_phi_fu_79089_p4 = data_390_V_read.read();
        } else {
            ap_phi_mux_data_390_V_read460_phi_phi_fu_79089_p4 = ap_phi_reg_pp0_iter0_data_390_V_read460_phi_reg_79085.read();
        }
    } else {
        ap_phi_mux_data_390_V_read460_phi_phi_fu_79089_p4 = ap_phi_reg_pp0_iter0_data_390_V_read460_phi_reg_79085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_390_V_read460_rewind_phi_fu_34665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_390_V_read460_rewind_phi_fu_34665_p6 = data_390_V_read460_phi_reg_79085.read();
    } else {
        ap_phi_mux_data_390_V_read460_rewind_phi_fu_34665_p6 = data_390_V_read460_rewind_reg_34661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_391_V_read461_phi_phi_fu_79102_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_391_V_read461_phi_phi_fu_79102_p4 = ap_phi_mux_data_391_V_read461_rewind_phi_fu_34679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_391_V_read461_phi_phi_fu_79102_p4 = data_391_V_read.read();
        } else {
            ap_phi_mux_data_391_V_read461_phi_phi_fu_79102_p4 = ap_phi_reg_pp0_iter0_data_391_V_read461_phi_reg_79098.read();
        }
    } else {
        ap_phi_mux_data_391_V_read461_phi_phi_fu_79102_p4 = ap_phi_reg_pp0_iter0_data_391_V_read461_phi_reg_79098.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_391_V_read461_rewind_phi_fu_34679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_391_V_read461_rewind_phi_fu_34679_p6 = data_391_V_read461_phi_reg_79098.read();
    } else {
        ap_phi_mux_data_391_V_read461_rewind_phi_fu_34679_p6 = data_391_V_read461_rewind_reg_34675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_392_V_read462_phi_phi_fu_79115_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_392_V_read462_phi_phi_fu_79115_p4 = ap_phi_mux_data_392_V_read462_rewind_phi_fu_34693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_392_V_read462_phi_phi_fu_79115_p4 = data_392_V_read.read();
        } else {
            ap_phi_mux_data_392_V_read462_phi_phi_fu_79115_p4 = ap_phi_reg_pp0_iter0_data_392_V_read462_phi_reg_79111.read();
        }
    } else {
        ap_phi_mux_data_392_V_read462_phi_phi_fu_79115_p4 = ap_phi_reg_pp0_iter0_data_392_V_read462_phi_reg_79111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_392_V_read462_rewind_phi_fu_34693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_392_V_read462_rewind_phi_fu_34693_p6 = data_392_V_read462_phi_reg_79111.read();
    } else {
        ap_phi_mux_data_392_V_read462_rewind_phi_fu_34693_p6 = data_392_V_read462_rewind_reg_34689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_393_V_read463_phi_phi_fu_79128_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_393_V_read463_phi_phi_fu_79128_p4 = ap_phi_mux_data_393_V_read463_rewind_phi_fu_34707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_393_V_read463_phi_phi_fu_79128_p4 = data_393_V_read.read();
        } else {
            ap_phi_mux_data_393_V_read463_phi_phi_fu_79128_p4 = ap_phi_reg_pp0_iter0_data_393_V_read463_phi_reg_79124.read();
        }
    } else {
        ap_phi_mux_data_393_V_read463_phi_phi_fu_79128_p4 = ap_phi_reg_pp0_iter0_data_393_V_read463_phi_reg_79124.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_393_V_read463_rewind_phi_fu_34707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_393_V_read463_rewind_phi_fu_34707_p6 = data_393_V_read463_phi_reg_79124.read();
    } else {
        ap_phi_mux_data_393_V_read463_rewind_phi_fu_34707_p6 = data_393_V_read463_rewind_reg_34703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_394_V_read464_phi_phi_fu_79141_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_394_V_read464_phi_phi_fu_79141_p4 = ap_phi_mux_data_394_V_read464_rewind_phi_fu_34721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_394_V_read464_phi_phi_fu_79141_p4 = data_394_V_read.read();
        } else {
            ap_phi_mux_data_394_V_read464_phi_phi_fu_79141_p4 = ap_phi_reg_pp0_iter0_data_394_V_read464_phi_reg_79137.read();
        }
    } else {
        ap_phi_mux_data_394_V_read464_phi_phi_fu_79141_p4 = ap_phi_reg_pp0_iter0_data_394_V_read464_phi_reg_79137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_394_V_read464_rewind_phi_fu_34721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_394_V_read464_rewind_phi_fu_34721_p6 = data_394_V_read464_phi_reg_79137.read();
    } else {
        ap_phi_mux_data_394_V_read464_rewind_phi_fu_34721_p6 = data_394_V_read464_rewind_reg_34717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_395_V_read465_phi_phi_fu_79154_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_395_V_read465_phi_phi_fu_79154_p4 = ap_phi_mux_data_395_V_read465_rewind_phi_fu_34735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_395_V_read465_phi_phi_fu_79154_p4 = data_395_V_read.read();
        } else {
            ap_phi_mux_data_395_V_read465_phi_phi_fu_79154_p4 = ap_phi_reg_pp0_iter0_data_395_V_read465_phi_reg_79150.read();
        }
    } else {
        ap_phi_mux_data_395_V_read465_phi_phi_fu_79154_p4 = ap_phi_reg_pp0_iter0_data_395_V_read465_phi_reg_79150.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_395_V_read465_rewind_phi_fu_34735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_395_V_read465_rewind_phi_fu_34735_p6 = data_395_V_read465_phi_reg_79150.read();
    } else {
        ap_phi_mux_data_395_V_read465_rewind_phi_fu_34735_p6 = data_395_V_read465_rewind_reg_34731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_396_V_read466_phi_phi_fu_79167_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_396_V_read466_phi_phi_fu_79167_p4 = ap_phi_mux_data_396_V_read466_rewind_phi_fu_34749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_396_V_read466_phi_phi_fu_79167_p4 = data_396_V_read.read();
        } else {
            ap_phi_mux_data_396_V_read466_phi_phi_fu_79167_p4 = ap_phi_reg_pp0_iter0_data_396_V_read466_phi_reg_79163.read();
        }
    } else {
        ap_phi_mux_data_396_V_read466_phi_phi_fu_79167_p4 = ap_phi_reg_pp0_iter0_data_396_V_read466_phi_reg_79163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_396_V_read466_rewind_phi_fu_34749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_396_V_read466_rewind_phi_fu_34749_p6 = data_396_V_read466_phi_reg_79163.read();
    } else {
        ap_phi_mux_data_396_V_read466_rewind_phi_fu_34749_p6 = data_396_V_read466_rewind_reg_34745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_397_V_read467_phi_phi_fu_79180_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_397_V_read467_phi_phi_fu_79180_p4 = ap_phi_mux_data_397_V_read467_rewind_phi_fu_34763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_397_V_read467_phi_phi_fu_79180_p4 = data_397_V_read.read();
        } else {
            ap_phi_mux_data_397_V_read467_phi_phi_fu_79180_p4 = ap_phi_reg_pp0_iter0_data_397_V_read467_phi_reg_79176.read();
        }
    } else {
        ap_phi_mux_data_397_V_read467_phi_phi_fu_79180_p4 = ap_phi_reg_pp0_iter0_data_397_V_read467_phi_reg_79176.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_397_V_read467_rewind_phi_fu_34763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_397_V_read467_rewind_phi_fu_34763_p6 = data_397_V_read467_phi_reg_79176.read();
    } else {
        ap_phi_mux_data_397_V_read467_rewind_phi_fu_34763_p6 = data_397_V_read467_rewind_reg_34759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_398_V_read468_phi_phi_fu_79193_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_398_V_read468_phi_phi_fu_79193_p4 = ap_phi_mux_data_398_V_read468_rewind_phi_fu_34777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_398_V_read468_phi_phi_fu_79193_p4 = data_398_V_read.read();
        } else {
            ap_phi_mux_data_398_V_read468_phi_phi_fu_79193_p4 = ap_phi_reg_pp0_iter0_data_398_V_read468_phi_reg_79189.read();
        }
    } else {
        ap_phi_mux_data_398_V_read468_phi_phi_fu_79193_p4 = ap_phi_reg_pp0_iter0_data_398_V_read468_phi_reg_79189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_398_V_read468_rewind_phi_fu_34777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_398_V_read468_rewind_phi_fu_34777_p6 = data_398_V_read468_phi_reg_79189.read();
    } else {
        ap_phi_mux_data_398_V_read468_rewind_phi_fu_34777_p6 = data_398_V_read468_rewind_reg_34773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_399_V_read469_phi_phi_fu_79206_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_399_V_read469_phi_phi_fu_79206_p4 = ap_phi_mux_data_399_V_read469_rewind_phi_fu_34791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_399_V_read469_phi_phi_fu_79206_p4 = data_399_V_read.read();
        } else {
            ap_phi_mux_data_399_V_read469_phi_phi_fu_79206_p4 = ap_phi_reg_pp0_iter0_data_399_V_read469_phi_reg_79202.read();
        }
    } else {
        ap_phi_mux_data_399_V_read469_phi_phi_fu_79206_p4 = ap_phi_reg_pp0_iter0_data_399_V_read469_phi_reg_79202.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_399_V_read469_rewind_phi_fu_34791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_399_V_read469_rewind_phi_fu_34791_p6 = data_399_V_read469_phi_reg_79202.read();
    } else {
        ap_phi_mux_data_399_V_read469_rewind_phi_fu_34791_p6 = data_399_V_read469_rewind_reg_34787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_39_V_read109_phi_phi_fu_74526_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_39_V_read109_phi_phi_fu_74526_p4 = ap_phi_mux_data_39_V_read109_rewind_phi_fu_29751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_39_V_read109_phi_phi_fu_74526_p4 = data_39_V_read.read();
        } else {
            ap_phi_mux_data_39_V_read109_phi_phi_fu_74526_p4 = ap_phi_reg_pp0_iter0_data_39_V_read109_phi_reg_74522.read();
        }
    } else {
        ap_phi_mux_data_39_V_read109_phi_phi_fu_74526_p4 = ap_phi_reg_pp0_iter0_data_39_V_read109_phi_reg_74522.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_39_V_read109_rewind_phi_fu_29751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_39_V_read109_rewind_phi_fu_29751_p6 = data_39_V_read109_phi_reg_74522.read();
    } else {
        ap_phi_mux_data_39_V_read109_rewind_phi_fu_29751_p6 = data_39_V_read109_rewind_reg_29747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3_V_read73_phi_phi_fu_74058_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3_V_read73_phi_phi_fu_74058_p4 = ap_phi_mux_data_3_V_read73_rewind_phi_fu_29247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3_V_read73_phi_phi_fu_74058_p4 = data_3_V_read.read();
        } else {
            ap_phi_mux_data_3_V_read73_phi_phi_fu_74058_p4 = ap_phi_reg_pp0_iter0_data_3_V_read73_phi_reg_74054.read();
        }
    } else {
        ap_phi_mux_data_3_V_read73_phi_phi_fu_74058_p4 = ap_phi_reg_pp0_iter0_data_3_V_read73_phi_reg_74054.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3_V_read73_rewind_phi_fu_29247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3_V_read73_rewind_phi_fu_29247_p6 = data_3_V_read73_phi_reg_74054.read();
    } else {
        ap_phi_mux_data_3_V_read73_rewind_phi_fu_29247_p6 = data_3_V_read73_rewind_reg_29243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_400_V_read470_phi_phi_fu_79219_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_400_V_read470_phi_phi_fu_79219_p4 = ap_phi_mux_data_400_V_read470_rewind_phi_fu_34805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_400_V_read470_phi_phi_fu_79219_p4 = data_400_V_read.read();
        } else {
            ap_phi_mux_data_400_V_read470_phi_phi_fu_79219_p4 = ap_phi_reg_pp0_iter0_data_400_V_read470_phi_reg_79215.read();
        }
    } else {
        ap_phi_mux_data_400_V_read470_phi_phi_fu_79219_p4 = ap_phi_reg_pp0_iter0_data_400_V_read470_phi_reg_79215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_400_V_read470_rewind_phi_fu_34805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_400_V_read470_rewind_phi_fu_34805_p6 = data_400_V_read470_phi_reg_79215.read();
    } else {
        ap_phi_mux_data_400_V_read470_rewind_phi_fu_34805_p6 = data_400_V_read470_rewind_reg_34801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_401_V_read471_phi_phi_fu_79232_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_401_V_read471_phi_phi_fu_79232_p4 = ap_phi_mux_data_401_V_read471_rewind_phi_fu_34819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_401_V_read471_phi_phi_fu_79232_p4 = data_401_V_read.read();
        } else {
            ap_phi_mux_data_401_V_read471_phi_phi_fu_79232_p4 = ap_phi_reg_pp0_iter0_data_401_V_read471_phi_reg_79228.read();
        }
    } else {
        ap_phi_mux_data_401_V_read471_phi_phi_fu_79232_p4 = ap_phi_reg_pp0_iter0_data_401_V_read471_phi_reg_79228.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_401_V_read471_rewind_phi_fu_34819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_401_V_read471_rewind_phi_fu_34819_p6 = data_401_V_read471_phi_reg_79228.read();
    } else {
        ap_phi_mux_data_401_V_read471_rewind_phi_fu_34819_p6 = data_401_V_read471_rewind_reg_34815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_402_V_read472_phi_phi_fu_79245_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_402_V_read472_phi_phi_fu_79245_p4 = ap_phi_mux_data_402_V_read472_rewind_phi_fu_34833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_402_V_read472_phi_phi_fu_79245_p4 = data_402_V_read.read();
        } else {
            ap_phi_mux_data_402_V_read472_phi_phi_fu_79245_p4 = ap_phi_reg_pp0_iter0_data_402_V_read472_phi_reg_79241.read();
        }
    } else {
        ap_phi_mux_data_402_V_read472_phi_phi_fu_79245_p4 = ap_phi_reg_pp0_iter0_data_402_V_read472_phi_reg_79241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_402_V_read472_rewind_phi_fu_34833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_402_V_read472_rewind_phi_fu_34833_p6 = data_402_V_read472_phi_reg_79241.read();
    } else {
        ap_phi_mux_data_402_V_read472_rewind_phi_fu_34833_p6 = data_402_V_read472_rewind_reg_34829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_403_V_read473_phi_phi_fu_79258_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_403_V_read473_phi_phi_fu_79258_p4 = ap_phi_mux_data_403_V_read473_rewind_phi_fu_34847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_403_V_read473_phi_phi_fu_79258_p4 = data_403_V_read.read();
        } else {
            ap_phi_mux_data_403_V_read473_phi_phi_fu_79258_p4 = ap_phi_reg_pp0_iter0_data_403_V_read473_phi_reg_79254.read();
        }
    } else {
        ap_phi_mux_data_403_V_read473_phi_phi_fu_79258_p4 = ap_phi_reg_pp0_iter0_data_403_V_read473_phi_reg_79254.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_403_V_read473_rewind_phi_fu_34847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_403_V_read473_rewind_phi_fu_34847_p6 = data_403_V_read473_phi_reg_79254.read();
    } else {
        ap_phi_mux_data_403_V_read473_rewind_phi_fu_34847_p6 = data_403_V_read473_rewind_reg_34843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_404_V_read474_phi_phi_fu_79271_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_404_V_read474_phi_phi_fu_79271_p4 = ap_phi_mux_data_404_V_read474_rewind_phi_fu_34861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_404_V_read474_phi_phi_fu_79271_p4 = data_404_V_read.read();
        } else {
            ap_phi_mux_data_404_V_read474_phi_phi_fu_79271_p4 = ap_phi_reg_pp0_iter0_data_404_V_read474_phi_reg_79267.read();
        }
    } else {
        ap_phi_mux_data_404_V_read474_phi_phi_fu_79271_p4 = ap_phi_reg_pp0_iter0_data_404_V_read474_phi_reg_79267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_404_V_read474_rewind_phi_fu_34861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_404_V_read474_rewind_phi_fu_34861_p6 = data_404_V_read474_phi_reg_79267.read();
    } else {
        ap_phi_mux_data_404_V_read474_rewind_phi_fu_34861_p6 = data_404_V_read474_rewind_reg_34857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_405_V_read475_phi_phi_fu_79284_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_405_V_read475_phi_phi_fu_79284_p4 = ap_phi_mux_data_405_V_read475_rewind_phi_fu_34875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_405_V_read475_phi_phi_fu_79284_p4 = data_405_V_read.read();
        } else {
            ap_phi_mux_data_405_V_read475_phi_phi_fu_79284_p4 = ap_phi_reg_pp0_iter0_data_405_V_read475_phi_reg_79280.read();
        }
    } else {
        ap_phi_mux_data_405_V_read475_phi_phi_fu_79284_p4 = ap_phi_reg_pp0_iter0_data_405_V_read475_phi_reg_79280.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_405_V_read475_rewind_phi_fu_34875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_405_V_read475_rewind_phi_fu_34875_p6 = data_405_V_read475_phi_reg_79280.read();
    } else {
        ap_phi_mux_data_405_V_read475_rewind_phi_fu_34875_p6 = data_405_V_read475_rewind_reg_34871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_406_V_read476_phi_phi_fu_79297_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_406_V_read476_phi_phi_fu_79297_p4 = ap_phi_mux_data_406_V_read476_rewind_phi_fu_34889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_406_V_read476_phi_phi_fu_79297_p4 = data_406_V_read.read();
        } else {
            ap_phi_mux_data_406_V_read476_phi_phi_fu_79297_p4 = ap_phi_reg_pp0_iter0_data_406_V_read476_phi_reg_79293.read();
        }
    } else {
        ap_phi_mux_data_406_V_read476_phi_phi_fu_79297_p4 = ap_phi_reg_pp0_iter0_data_406_V_read476_phi_reg_79293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_406_V_read476_rewind_phi_fu_34889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_406_V_read476_rewind_phi_fu_34889_p6 = data_406_V_read476_phi_reg_79293.read();
    } else {
        ap_phi_mux_data_406_V_read476_rewind_phi_fu_34889_p6 = data_406_V_read476_rewind_reg_34885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_407_V_read477_phi_phi_fu_79310_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_407_V_read477_phi_phi_fu_79310_p4 = ap_phi_mux_data_407_V_read477_rewind_phi_fu_34903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_407_V_read477_phi_phi_fu_79310_p4 = data_407_V_read.read();
        } else {
            ap_phi_mux_data_407_V_read477_phi_phi_fu_79310_p4 = ap_phi_reg_pp0_iter0_data_407_V_read477_phi_reg_79306.read();
        }
    } else {
        ap_phi_mux_data_407_V_read477_phi_phi_fu_79310_p4 = ap_phi_reg_pp0_iter0_data_407_V_read477_phi_reg_79306.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_407_V_read477_rewind_phi_fu_34903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_407_V_read477_rewind_phi_fu_34903_p6 = data_407_V_read477_phi_reg_79306.read();
    } else {
        ap_phi_mux_data_407_V_read477_rewind_phi_fu_34903_p6 = data_407_V_read477_rewind_reg_34899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_408_V_read478_phi_phi_fu_79323_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_408_V_read478_phi_phi_fu_79323_p4 = ap_phi_mux_data_408_V_read478_rewind_phi_fu_34917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_408_V_read478_phi_phi_fu_79323_p4 = data_408_V_read.read();
        } else {
            ap_phi_mux_data_408_V_read478_phi_phi_fu_79323_p4 = ap_phi_reg_pp0_iter0_data_408_V_read478_phi_reg_79319.read();
        }
    } else {
        ap_phi_mux_data_408_V_read478_phi_phi_fu_79323_p4 = ap_phi_reg_pp0_iter0_data_408_V_read478_phi_reg_79319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_408_V_read478_rewind_phi_fu_34917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_408_V_read478_rewind_phi_fu_34917_p6 = data_408_V_read478_phi_reg_79319.read();
    } else {
        ap_phi_mux_data_408_V_read478_rewind_phi_fu_34917_p6 = data_408_V_read478_rewind_reg_34913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_409_V_read479_phi_phi_fu_79336_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_409_V_read479_phi_phi_fu_79336_p4 = ap_phi_mux_data_409_V_read479_rewind_phi_fu_34931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_409_V_read479_phi_phi_fu_79336_p4 = data_409_V_read.read();
        } else {
            ap_phi_mux_data_409_V_read479_phi_phi_fu_79336_p4 = ap_phi_reg_pp0_iter0_data_409_V_read479_phi_reg_79332.read();
        }
    } else {
        ap_phi_mux_data_409_V_read479_phi_phi_fu_79336_p4 = ap_phi_reg_pp0_iter0_data_409_V_read479_phi_reg_79332.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_409_V_read479_rewind_phi_fu_34931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_409_V_read479_rewind_phi_fu_34931_p6 = data_409_V_read479_phi_reg_79332.read();
    } else {
        ap_phi_mux_data_409_V_read479_rewind_phi_fu_34931_p6 = data_409_V_read479_rewind_reg_34927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_40_V_read110_phi_phi_fu_74539_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_40_V_read110_phi_phi_fu_74539_p4 = ap_phi_mux_data_40_V_read110_rewind_phi_fu_29765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_40_V_read110_phi_phi_fu_74539_p4 = data_40_V_read.read();
        } else {
            ap_phi_mux_data_40_V_read110_phi_phi_fu_74539_p4 = ap_phi_reg_pp0_iter0_data_40_V_read110_phi_reg_74535.read();
        }
    } else {
        ap_phi_mux_data_40_V_read110_phi_phi_fu_74539_p4 = ap_phi_reg_pp0_iter0_data_40_V_read110_phi_reg_74535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_40_V_read110_rewind_phi_fu_29765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_40_V_read110_rewind_phi_fu_29765_p6 = data_40_V_read110_phi_reg_74535.read();
    } else {
        ap_phi_mux_data_40_V_read110_rewind_phi_fu_29765_p6 = data_40_V_read110_rewind_reg_29761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_410_V_read480_phi_phi_fu_79349_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_410_V_read480_phi_phi_fu_79349_p4 = ap_phi_mux_data_410_V_read480_rewind_phi_fu_34945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_410_V_read480_phi_phi_fu_79349_p4 = data_410_V_read.read();
        } else {
            ap_phi_mux_data_410_V_read480_phi_phi_fu_79349_p4 = ap_phi_reg_pp0_iter0_data_410_V_read480_phi_reg_79345.read();
        }
    } else {
        ap_phi_mux_data_410_V_read480_phi_phi_fu_79349_p4 = ap_phi_reg_pp0_iter0_data_410_V_read480_phi_reg_79345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_410_V_read480_rewind_phi_fu_34945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_410_V_read480_rewind_phi_fu_34945_p6 = data_410_V_read480_phi_reg_79345.read();
    } else {
        ap_phi_mux_data_410_V_read480_rewind_phi_fu_34945_p6 = data_410_V_read480_rewind_reg_34941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_411_V_read481_phi_phi_fu_79362_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_411_V_read481_phi_phi_fu_79362_p4 = ap_phi_mux_data_411_V_read481_rewind_phi_fu_34959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_411_V_read481_phi_phi_fu_79362_p4 = data_411_V_read.read();
        } else {
            ap_phi_mux_data_411_V_read481_phi_phi_fu_79362_p4 = ap_phi_reg_pp0_iter0_data_411_V_read481_phi_reg_79358.read();
        }
    } else {
        ap_phi_mux_data_411_V_read481_phi_phi_fu_79362_p4 = ap_phi_reg_pp0_iter0_data_411_V_read481_phi_reg_79358.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_411_V_read481_rewind_phi_fu_34959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_411_V_read481_rewind_phi_fu_34959_p6 = data_411_V_read481_phi_reg_79358.read();
    } else {
        ap_phi_mux_data_411_V_read481_rewind_phi_fu_34959_p6 = data_411_V_read481_rewind_reg_34955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_412_V_read482_phi_phi_fu_79375_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_412_V_read482_phi_phi_fu_79375_p4 = ap_phi_mux_data_412_V_read482_rewind_phi_fu_34973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_412_V_read482_phi_phi_fu_79375_p4 = data_412_V_read.read();
        } else {
            ap_phi_mux_data_412_V_read482_phi_phi_fu_79375_p4 = ap_phi_reg_pp0_iter0_data_412_V_read482_phi_reg_79371.read();
        }
    } else {
        ap_phi_mux_data_412_V_read482_phi_phi_fu_79375_p4 = ap_phi_reg_pp0_iter0_data_412_V_read482_phi_reg_79371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_412_V_read482_rewind_phi_fu_34973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_412_V_read482_rewind_phi_fu_34973_p6 = data_412_V_read482_phi_reg_79371.read();
    } else {
        ap_phi_mux_data_412_V_read482_rewind_phi_fu_34973_p6 = data_412_V_read482_rewind_reg_34969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_413_V_read483_phi_phi_fu_79388_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_413_V_read483_phi_phi_fu_79388_p4 = ap_phi_mux_data_413_V_read483_rewind_phi_fu_34987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_413_V_read483_phi_phi_fu_79388_p4 = data_413_V_read.read();
        } else {
            ap_phi_mux_data_413_V_read483_phi_phi_fu_79388_p4 = ap_phi_reg_pp0_iter0_data_413_V_read483_phi_reg_79384.read();
        }
    } else {
        ap_phi_mux_data_413_V_read483_phi_phi_fu_79388_p4 = ap_phi_reg_pp0_iter0_data_413_V_read483_phi_reg_79384.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_413_V_read483_rewind_phi_fu_34987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_413_V_read483_rewind_phi_fu_34987_p6 = data_413_V_read483_phi_reg_79384.read();
    } else {
        ap_phi_mux_data_413_V_read483_rewind_phi_fu_34987_p6 = data_413_V_read483_rewind_reg_34983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_414_V_read484_phi_phi_fu_79401_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_414_V_read484_phi_phi_fu_79401_p4 = ap_phi_mux_data_414_V_read484_rewind_phi_fu_35001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_414_V_read484_phi_phi_fu_79401_p4 = data_414_V_read.read();
        } else {
            ap_phi_mux_data_414_V_read484_phi_phi_fu_79401_p4 = ap_phi_reg_pp0_iter0_data_414_V_read484_phi_reg_79397.read();
        }
    } else {
        ap_phi_mux_data_414_V_read484_phi_phi_fu_79401_p4 = ap_phi_reg_pp0_iter0_data_414_V_read484_phi_reg_79397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_414_V_read484_rewind_phi_fu_35001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_414_V_read484_rewind_phi_fu_35001_p6 = data_414_V_read484_phi_reg_79397.read();
    } else {
        ap_phi_mux_data_414_V_read484_rewind_phi_fu_35001_p6 = data_414_V_read484_rewind_reg_34997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_415_V_read485_phi_phi_fu_79414_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_415_V_read485_phi_phi_fu_79414_p4 = ap_phi_mux_data_415_V_read485_rewind_phi_fu_35015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_415_V_read485_phi_phi_fu_79414_p4 = data_415_V_read.read();
        } else {
            ap_phi_mux_data_415_V_read485_phi_phi_fu_79414_p4 = ap_phi_reg_pp0_iter0_data_415_V_read485_phi_reg_79410.read();
        }
    } else {
        ap_phi_mux_data_415_V_read485_phi_phi_fu_79414_p4 = ap_phi_reg_pp0_iter0_data_415_V_read485_phi_reg_79410.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_415_V_read485_rewind_phi_fu_35015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_415_V_read485_rewind_phi_fu_35015_p6 = data_415_V_read485_phi_reg_79410.read();
    } else {
        ap_phi_mux_data_415_V_read485_rewind_phi_fu_35015_p6 = data_415_V_read485_rewind_reg_35011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_416_V_read486_phi_phi_fu_79427_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_416_V_read486_phi_phi_fu_79427_p4 = ap_phi_mux_data_416_V_read486_rewind_phi_fu_35029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_416_V_read486_phi_phi_fu_79427_p4 = data_416_V_read.read();
        } else {
            ap_phi_mux_data_416_V_read486_phi_phi_fu_79427_p4 = ap_phi_reg_pp0_iter0_data_416_V_read486_phi_reg_79423.read();
        }
    } else {
        ap_phi_mux_data_416_V_read486_phi_phi_fu_79427_p4 = ap_phi_reg_pp0_iter0_data_416_V_read486_phi_reg_79423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_416_V_read486_rewind_phi_fu_35029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_416_V_read486_rewind_phi_fu_35029_p6 = data_416_V_read486_phi_reg_79423.read();
    } else {
        ap_phi_mux_data_416_V_read486_rewind_phi_fu_35029_p6 = data_416_V_read486_rewind_reg_35025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_417_V_read487_phi_phi_fu_79440_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_417_V_read487_phi_phi_fu_79440_p4 = ap_phi_mux_data_417_V_read487_rewind_phi_fu_35043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_417_V_read487_phi_phi_fu_79440_p4 = data_417_V_read.read();
        } else {
            ap_phi_mux_data_417_V_read487_phi_phi_fu_79440_p4 = ap_phi_reg_pp0_iter0_data_417_V_read487_phi_reg_79436.read();
        }
    } else {
        ap_phi_mux_data_417_V_read487_phi_phi_fu_79440_p4 = ap_phi_reg_pp0_iter0_data_417_V_read487_phi_reg_79436.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_417_V_read487_rewind_phi_fu_35043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_417_V_read487_rewind_phi_fu_35043_p6 = data_417_V_read487_phi_reg_79436.read();
    } else {
        ap_phi_mux_data_417_V_read487_rewind_phi_fu_35043_p6 = data_417_V_read487_rewind_reg_35039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_418_V_read488_phi_phi_fu_79453_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_418_V_read488_phi_phi_fu_79453_p4 = ap_phi_mux_data_418_V_read488_rewind_phi_fu_35057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_418_V_read488_phi_phi_fu_79453_p4 = data_418_V_read.read();
        } else {
            ap_phi_mux_data_418_V_read488_phi_phi_fu_79453_p4 = ap_phi_reg_pp0_iter0_data_418_V_read488_phi_reg_79449.read();
        }
    } else {
        ap_phi_mux_data_418_V_read488_phi_phi_fu_79453_p4 = ap_phi_reg_pp0_iter0_data_418_V_read488_phi_reg_79449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_418_V_read488_rewind_phi_fu_35057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_418_V_read488_rewind_phi_fu_35057_p6 = data_418_V_read488_phi_reg_79449.read();
    } else {
        ap_phi_mux_data_418_V_read488_rewind_phi_fu_35057_p6 = data_418_V_read488_rewind_reg_35053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_419_V_read489_phi_phi_fu_79466_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_419_V_read489_phi_phi_fu_79466_p4 = ap_phi_mux_data_419_V_read489_rewind_phi_fu_35071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_419_V_read489_phi_phi_fu_79466_p4 = data_419_V_read.read();
        } else {
            ap_phi_mux_data_419_V_read489_phi_phi_fu_79466_p4 = ap_phi_reg_pp0_iter0_data_419_V_read489_phi_reg_79462.read();
        }
    } else {
        ap_phi_mux_data_419_V_read489_phi_phi_fu_79466_p4 = ap_phi_reg_pp0_iter0_data_419_V_read489_phi_reg_79462.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_419_V_read489_rewind_phi_fu_35071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_419_V_read489_rewind_phi_fu_35071_p6 = data_419_V_read489_phi_reg_79462.read();
    } else {
        ap_phi_mux_data_419_V_read489_rewind_phi_fu_35071_p6 = data_419_V_read489_rewind_reg_35067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_41_V_read111_phi_phi_fu_74552_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_41_V_read111_phi_phi_fu_74552_p4 = ap_phi_mux_data_41_V_read111_rewind_phi_fu_29779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_41_V_read111_phi_phi_fu_74552_p4 = data_41_V_read.read();
        } else {
            ap_phi_mux_data_41_V_read111_phi_phi_fu_74552_p4 = ap_phi_reg_pp0_iter0_data_41_V_read111_phi_reg_74548.read();
        }
    } else {
        ap_phi_mux_data_41_V_read111_phi_phi_fu_74552_p4 = ap_phi_reg_pp0_iter0_data_41_V_read111_phi_reg_74548.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_41_V_read111_rewind_phi_fu_29779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_41_V_read111_rewind_phi_fu_29779_p6 = data_41_V_read111_phi_reg_74548.read();
    } else {
        ap_phi_mux_data_41_V_read111_rewind_phi_fu_29779_p6 = data_41_V_read111_rewind_reg_29775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_420_V_read490_phi_phi_fu_79479_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_420_V_read490_phi_phi_fu_79479_p4 = ap_phi_mux_data_420_V_read490_rewind_phi_fu_35085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_420_V_read490_phi_phi_fu_79479_p4 = data_420_V_read.read();
        } else {
            ap_phi_mux_data_420_V_read490_phi_phi_fu_79479_p4 = ap_phi_reg_pp0_iter0_data_420_V_read490_phi_reg_79475.read();
        }
    } else {
        ap_phi_mux_data_420_V_read490_phi_phi_fu_79479_p4 = ap_phi_reg_pp0_iter0_data_420_V_read490_phi_reg_79475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_420_V_read490_rewind_phi_fu_35085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_420_V_read490_rewind_phi_fu_35085_p6 = data_420_V_read490_phi_reg_79475.read();
    } else {
        ap_phi_mux_data_420_V_read490_rewind_phi_fu_35085_p6 = data_420_V_read490_rewind_reg_35081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_421_V_read491_phi_phi_fu_79492_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_421_V_read491_phi_phi_fu_79492_p4 = ap_phi_mux_data_421_V_read491_rewind_phi_fu_35099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_421_V_read491_phi_phi_fu_79492_p4 = data_421_V_read.read();
        } else {
            ap_phi_mux_data_421_V_read491_phi_phi_fu_79492_p4 = ap_phi_reg_pp0_iter0_data_421_V_read491_phi_reg_79488.read();
        }
    } else {
        ap_phi_mux_data_421_V_read491_phi_phi_fu_79492_p4 = ap_phi_reg_pp0_iter0_data_421_V_read491_phi_reg_79488.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_421_V_read491_rewind_phi_fu_35099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_421_V_read491_rewind_phi_fu_35099_p6 = data_421_V_read491_phi_reg_79488.read();
    } else {
        ap_phi_mux_data_421_V_read491_rewind_phi_fu_35099_p6 = data_421_V_read491_rewind_reg_35095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_422_V_read492_phi_phi_fu_79505_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_422_V_read492_phi_phi_fu_79505_p4 = ap_phi_mux_data_422_V_read492_rewind_phi_fu_35113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_422_V_read492_phi_phi_fu_79505_p4 = data_422_V_read.read();
        } else {
            ap_phi_mux_data_422_V_read492_phi_phi_fu_79505_p4 = ap_phi_reg_pp0_iter0_data_422_V_read492_phi_reg_79501.read();
        }
    } else {
        ap_phi_mux_data_422_V_read492_phi_phi_fu_79505_p4 = ap_phi_reg_pp0_iter0_data_422_V_read492_phi_reg_79501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_422_V_read492_rewind_phi_fu_35113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_422_V_read492_rewind_phi_fu_35113_p6 = data_422_V_read492_phi_reg_79501.read();
    } else {
        ap_phi_mux_data_422_V_read492_rewind_phi_fu_35113_p6 = data_422_V_read492_rewind_reg_35109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_423_V_read493_phi_phi_fu_79518_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_423_V_read493_phi_phi_fu_79518_p4 = ap_phi_mux_data_423_V_read493_rewind_phi_fu_35127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_423_V_read493_phi_phi_fu_79518_p4 = data_423_V_read.read();
        } else {
            ap_phi_mux_data_423_V_read493_phi_phi_fu_79518_p4 = ap_phi_reg_pp0_iter0_data_423_V_read493_phi_reg_79514.read();
        }
    } else {
        ap_phi_mux_data_423_V_read493_phi_phi_fu_79518_p4 = ap_phi_reg_pp0_iter0_data_423_V_read493_phi_reg_79514.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_423_V_read493_rewind_phi_fu_35127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_423_V_read493_rewind_phi_fu_35127_p6 = data_423_V_read493_phi_reg_79514.read();
    } else {
        ap_phi_mux_data_423_V_read493_rewind_phi_fu_35127_p6 = data_423_V_read493_rewind_reg_35123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_424_V_read494_phi_phi_fu_79531_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_424_V_read494_phi_phi_fu_79531_p4 = ap_phi_mux_data_424_V_read494_rewind_phi_fu_35141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_424_V_read494_phi_phi_fu_79531_p4 = data_424_V_read.read();
        } else {
            ap_phi_mux_data_424_V_read494_phi_phi_fu_79531_p4 = ap_phi_reg_pp0_iter0_data_424_V_read494_phi_reg_79527.read();
        }
    } else {
        ap_phi_mux_data_424_V_read494_phi_phi_fu_79531_p4 = ap_phi_reg_pp0_iter0_data_424_V_read494_phi_reg_79527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_424_V_read494_rewind_phi_fu_35141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_424_V_read494_rewind_phi_fu_35141_p6 = data_424_V_read494_phi_reg_79527.read();
    } else {
        ap_phi_mux_data_424_V_read494_rewind_phi_fu_35141_p6 = data_424_V_read494_rewind_reg_35137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_425_V_read495_phi_phi_fu_79544_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_425_V_read495_phi_phi_fu_79544_p4 = ap_phi_mux_data_425_V_read495_rewind_phi_fu_35155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_425_V_read495_phi_phi_fu_79544_p4 = data_425_V_read.read();
        } else {
            ap_phi_mux_data_425_V_read495_phi_phi_fu_79544_p4 = ap_phi_reg_pp0_iter0_data_425_V_read495_phi_reg_79540.read();
        }
    } else {
        ap_phi_mux_data_425_V_read495_phi_phi_fu_79544_p4 = ap_phi_reg_pp0_iter0_data_425_V_read495_phi_reg_79540.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_425_V_read495_rewind_phi_fu_35155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_425_V_read495_rewind_phi_fu_35155_p6 = data_425_V_read495_phi_reg_79540.read();
    } else {
        ap_phi_mux_data_425_V_read495_rewind_phi_fu_35155_p6 = data_425_V_read495_rewind_reg_35151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_426_V_read496_phi_phi_fu_79557_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_426_V_read496_phi_phi_fu_79557_p4 = ap_phi_mux_data_426_V_read496_rewind_phi_fu_35169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_426_V_read496_phi_phi_fu_79557_p4 = data_426_V_read.read();
        } else {
            ap_phi_mux_data_426_V_read496_phi_phi_fu_79557_p4 = ap_phi_reg_pp0_iter0_data_426_V_read496_phi_reg_79553.read();
        }
    } else {
        ap_phi_mux_data_426_V_read496_phi_phi_fu_79557_p4 = ap_phi_reg_pp0_iter0_data_426_V_read496_phi_reg_79553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_426_V_read496_rewind_phi_fu_35169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_426_V_read496_rewind_phi_fu_35169_p6 = data_426_V_read496_phi_reg_79553.read();
    } else {
        ap_phi_mux_data_426_V_read496_rewind_phi_fu_35169_p6 = data_426_V_read496_rewind_reg_35165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_427_V_read497_phi_phi_fu_79570_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_427_V_read497_phi_phi_fu_79570_p4 = ap_phi_mux_data_427_V_read497_rewind_phi_fu_35183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_427_V_read497_phi_phi_fu_79570_p4 = data_427_V_read.read();
        } else {
            ap_phi_mux_data_427_V_read497_phi_phi_fu_79570_p4 = ap_phi_reg_pp0_iter0_data_427_V_read497_phi_reg_79566.read();
        }
    } else {
        ap_phi_mux_data_427_V_read497_phi_phi_fu_79570_p4 = ap_phi_reg_pp0_iter0_data_427_V_read497_phi_reg_79566.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_427_V_read497_rewind_phi_fu_35183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_427_V_read497_rewind_phi_fu_35183_p6 = data_427_V_read497_phi_reg_79566.read();
    } else {
        ap_phi_mux_data_427_V_read497_rewind_phi_fu_35183_p6 = data_427_V_read497_rewind_reg_35179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_428_V_read498_phi_phi_fu_79583_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_428_V_read498_phi_phi_fu_79583_p4 = ap_phi_mux_data_428_V_read498_rewind_phi_fu_35197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_428_V_read498_phi_phi_fu_79583_p4 = data_428_V_read.read();
        } else {
            ap_phi_mux_data_428_V_read498_phi_phi_fu_79583_p4 = ap_phi_reg_pp0_iter0_data_428_V_read498_phi_reg_79579.read();
        }
    } else {
        ap_phi_mux_data_428_V_read498_phi_phi_fu_79583_p4 = ap_phi_reg_pp0_iter0_data_428_V_read498_phi_reg_79579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_428_V_read498_rewind_phi_fu_35197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_428_V_read498_rewind_phi_fu_35197_p6 = data_428_V_read498_phi_reg_79579.read();
    } else {
        ap_phi_mux_data_428_V_read498_rewind_phi_fu_35197_p6 = data_428_V_read498_rewind_reg_35193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_429_V_read499_phi_phi_fu_79596_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_429_V_read499_phi_phi_fu_79596_p4 = ap_phi_mux_data_429_V_read499_rewind_phi_fu_35211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_429_V_read499_phi_phi_fu_79596_p4 = data_429_V_read.read();
        } else {
            ap_phi_mux_data_429_V_read499_phi_phi_fu_79596_p4 = ap_phi_reg_pp0_iter0_data_429_V_read499_phi_reg_79592.read();
        }
    } else {
        ap_phi_mux_data_429_V_read499_phi_phi_fu_79596_p4 = ap_phi_reg_pp0_iter0_data_429_V_read499_phi_reg_79592.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_429_V_read499_rewind_phi_fu_35211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_429_V_read499_rewind_phi_fu_35211_p6 = data_429_V_read499_phi_reg_79592.read();
    } else {
        ap_phi_mux_data_429_V_read499_rewind_phi_fu_35211_p6 = data_429_V_read499_rewind_reg_35207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_42_V_read112_phi_phi_fu_74565_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_42_V_read112_phi_phi_fu_74565_p4 = ap_phi_mux_data_42_V_read112_rewind_phi_fu_29793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_42_V_read112_phi_phi_fu_74565_p4 = data_42_V_read.read();
        } else {
            ap_phi_mux_data_42_V_read112_phi_phi_fu_74565_p4 = ap_phi_reg_pp0_iter0_data_42_V_read112_phi_reg_74561.read();
        }
    } else {
        ap_phi_mux_data_42_V_read112_phi_phi_fu_74565_p4 = ap_phi_reg_pp0_iter0_data_42_V_read112_phi_reg_74561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_42_V_read112_rewind_phi_fu_29793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_42_V_read112_rewind_phi_fu_29793_p6 = data_42_V_read112_phi_reg_74561.read();
    } else {
        ap_phi_mux_data_42_V_read112_rewind_phi_fu_29793_p6 = data_42_V_read112_rewind_reg_29789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_430_V_read500_phi_phi_fu_79609_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_430_V_read500_phi_phi_fu_79609_p4 = ap_phi_mux_data_430_V_read500_rewind_phi_fu_35225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_430_V_read500_phi_phi_fu_79609_p4 = data_430_V_read.read();
        } else {
            ap_phi_mux_data_430_V_read500_phi_phi_fu_79609_p4 = ap_phi_reg_pp0_iter0_data_430_V_read500_phi_reg_79605.read();
        }
    } else {
        ap_phi_mux_data_430_V_read500_phi_phi_fu_79609_p4 = ap_phi_reg_pp0_iter0_data_430_V_read500_phi_reg_79605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_430_V_read500_rewind_phi_fu_35225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_430_V_read500_rewind_phi_fu_35225_p6 = data_430_V_read500_phi_reg_79605.read();
    } else {
        ap_phi_mux_data_430_V_read500_rewind_phi_fu_35225_p6 = data_430_V_read500_rewind_reg_35221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_431_V_read501_phi_phi_fu_79622_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_431_V_read501_phi_phi_fu_79622_p4 = ap_phi_mux_data_431_V_read501_rewind_phi_fu_35239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_431_V_read501_phi_phi_fu_79622_p4 = data_431_V_read.read();
        } else {
            ap_phi_mux_data_431_V_read501_phi_phi_fu_79622_p4 = ap_phi_reg_pp0_iter0_data_431_V_read501_phi_reg_79618.read();
        }
    } else {
        ap_phi_mux_data_431_V_read501_phi_phi_fu_79622_p4 = ap_phi_reg_pp0_iter0_data_431_V_read501_phi_reg_79618.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_431_V_read501_rewind_phi_fu_35239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_431_V_read501_rewind_phi_fu_35239_p6 = data_431_V_read501_phi_reg_79618.read();
    } else {
        ap_phi_mux_data_431_V_read501_rewind_phi_fu_35239_p6 = data_431_V_read501_rewind_reg_35235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_432_V_read502_phi_phi_fu_79635_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_432_V_read502_phi_phi_fu_79635_p4 = ap_phi_mux_data_432_V_read502_rewind_phi_fu_35253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_432_V_read502_phi_phi_fu_79635_p4 = data_432_V_read.read();
        } else {
            ap_phi_mux_data_432_V_read502_phi_phi_fu_79635_p4 = ap_phi_reg_pp0_iter0_data_432_V_read502_phi_reg_79631.read();
        }
    } else {
        ap_phi_mux_data_432_V_read502_phi_phi_fu_79635_p4 = ap_phi_reg_pp0_iter0_data_432_V_read502_phi_reg_79631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_432_V_read502_rewind_phi_fu_35253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_432_V_read502_rewind_phi_fu_35253_p6 = data_432_V_read502_phi_reg_79631.read();
    } else {
        ap_phi_mux_data_432_V_read502_rewind_phi_fu_35253_p6 = data_432_V_read502_rewind_reg_35249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_433_V_read503_phi_phi_fu_79648_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_433_V_read503_phi_phi_fu_79648_p4 = ap_phi_mux_data_433_V_read503_rewind_phi_fu_35267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_433_V_read503_phi_phi_fu_79648_p4 = data_433_V_read.read();
        } else {
            ap_phi_mux_data_433_V_read503_phi_phi_fu_79648_p4 = ap_phi_reg_pp0_iter0_data_433_V_read503_phi_reg_79644.read();
        }
    } else {
        ap_phi_mux_data_433_V_read503_phi_phi_fu_79648_p4 = ap_phi_reg_pp0_iter0_data_433_V_read503_phi_reg_79644.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_433_V_read503_rewind_phi_fu_35267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_433_V_read503_rewind_phi_fu_35267_p6 = data_433_V_read503_phi_reg_79644.read();
    } else {
        ap_phi_mux_data_433_V_read503_rewind_phi_fu_35267_p6 = data_433_V_read503_rewind_reg_35263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_434_V_read504_phi_phi_fu_79661_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_434_V_read504_phi_phi_fu_79661_p4 = ap_phi_mux_data_434_V_read504_rewind_phi_fu_35281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_434_V_read504_phi_phi_fu_79661_p4 = data_434_V_read.read();
        } else {
            ap_phi_mux_data_434_V_read504_phi_phi_fu_79661_p4 = ap_phi_reg_pp0_iter0_data_434_V_read504_phi_reg_79657.read();
        }
    } else {
        ap_phi_mux_data_434_V_read504_phi_phi_fu_79661_p4 = ap_phi_reg_pp0_iter0_data_434_V_read504_phi_reg_79657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_434_V_read504_rewind_phi_fu_35281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_434_V_read504_rewind_phi_fu_35281_p6 = data_434_V_read504_phi_reg_79657.read();
    } else {
        ap_phi_mux_data_434_V_read504_rewind_phi_fu_35281_p6 = data_434_V_read504_rewind_reg_35277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_435_V_read505_phi_phi_fu_79674_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_435_V_read505_phi_phi_fu_79674_p4 = ap_phi_mux_data_435_V_read505_rewind_phi_fu_35295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_435_V_read505_phi_phi_fu_79674_p4 = data_435_V_read.read();
        } else {
            ap_phi_mux_data_435_V_read505_phi_phi_fu_79674_p4 = ap_phi_reg_pp0_iter0_data_435_V_read505_phi_reg_79670.read();
        }
    } else {
        ap_phi_mux_data_435_V_read505_phi_phi_fu_79674_p4 = ap_phi_reg_pp0_iter0_data_435_V_read505_phi_reg_79670.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_435_V_read505_rewind_phi_fu_35295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_435_V_read505_rewind_phi_fu_35295_p6 = data_435_V_read505_phi_reg_79670.read();
    } else {
        ap_phi_mux_data_435_V_read505_rewind_phi_fu_35295_p6 = data_435_V_read505_rewind_reg_35291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_436_V_read506_phi_phi_fu_79687_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_436_V_read506_phi_phi_fu_79687_p4 = ap_phi_mux_data_436_V_read506_rewind_phi_fu_35309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_436_V_read506_phi_phi_fu_79687_p4 = data_436_V_read.read();
        } else {
            ap_phi_mux_data_436_V_read506_phi_phi_fu_79687_p4 = ap_phi_reg_pp0_iter0_data_436_V_read506_phi_reg_79683.read();
        }
    } else {
        ap_phi_mux_data_436_V_read506_phi_phi_fu_79687_p4 = ap_phi_reg_pp0_iter0_data_436_V_read506_phi_reg_79683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_436_V_read506_rewind_phi_fu_35309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_436_V_read506_rewind_phi_fu_35309_p6 = data_436_V_read506_phi_reg_79683.read();
    } else {
        ap_phi_mux_data_436_V_read506_rewind_phi_fu_35309_p6 = data_436_V_read506_rewind_reg_35305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_437_V_read507_phi_phi_fu_79700_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_437_V_read507_phi_phi_fu_79700_p4 = ap_phi_mux_data_437_V_read507_rewind_phi_fu_35323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_437_V_read507_phi_phi_fu_79700_p4 = data_437_V_read.read();
        } else {
            ap_phi_mux_data_437_V_read507_phi_phi_fu_79700_p4 = ap_phi_reg_pp0_iter0_data_437_V_read507_phi_reg_79696.read();
        }
    } else {
        ap_phi_mux_data_437_V_read507_phi_phi_fu_79700_p4 = ap_phi_reg_pp0_iter0_data_437_V_read507_phi_reg_79696.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_437_V_read507_rewind_phi_fu_35323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_437_V_read507_rewind_phi_fu_35323_p6 = data_437_V_read507_phi_reg_79696.read();
    } else {
        ap_phi_mux_data_437_V_read507_rewind_phi_fu_35323_p6 = data_437_V_read507_rewind_reg_35319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_438_V_read508_phi_phi_fu_79713_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_438_V_read508_phi_phi_fu_79713_p4 = ap_phi_mux_data_438_V_read508_rewind_phi_fu_35337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_438_V_read508_phi_phi_fu_79713_p4 = data_438_V_read.read();
        } else {
            ap_phi_mux_data_438_V_read508_phi_phi_fu_79713_p4 = ap_phi_reg_pp0_iter0_data_438_V_read508_phi_reg_79709.read();
        }
    } else {
        ap_phi_mux_data_438_V_read508_phi_phi_fu_79713_p4 = ap_phi_reg_pp0_iter0_data_438_V_read508_phi_reg_79709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_438_V_read508_rewind_phi_fu_35337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_438_V_read508_rewind_phi_fu_35337_p6 = data_438_V_read508_phi_reg_79709.read();
    } else {
        ap_phi_mux_data_438_V_read508_rewind_phi_fu_35337_p6 = data_438_V_read508_rewind_reg_35333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_439_V_read509_phi_phi_fu_79726_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_439_V_read509_phi_phi_fu_79726_p4 = ap_phi_mux_data_439_V_read509_rewind_phi_fu_35351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_439_V_read509_phi_phi_fu_79726_p4 = data_439_V_read.read();
        } else {
            ap_phi_mux_data_439_V_read509_phi_phi_fu_79726_p4 = ap_phi_reg_pp0_iter0_data_439_V_read509_phi_reg_79722.read();
        }
    } else {
        ap_phi_mux_data_439_V_read509_phi_phi_fu_79726_p4 = ap_phi_reg_pp0_iter0_data_439_V_read509_phi_reg_79722.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_439_V_read509_rewind_phi_fu_35351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_439_V_read509_rewind_phi_fu_35351_p6 = data_439_V_read509_phi_reg_79722.read();
    } else {
        ap_phi_mux_data_439_V_read509_rewind_phi_fu_35351_p6 = data_439_V_read509_rewind_reg_35347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_43_V_read113_phi_phi_fu_74578_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_43_V_read113_phi_phi_fu_74578_p4 = ap_phi_mux_data_43_V_read113_rewind_phi_fu_29807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_43_V_read113_phi_phi_fu_74578_p4 = data_43_V_read.read();
        } else {
            ap_phi_mux_data_43_V_read113_phi_phi_fu_74578_p4 = ap_phi_reg_pp0_iter0_data_43_V_read113_phi_reg_74574.read();
        }
    } else {
        ap_phi_mux_data_43_V_read113_phi_phi_fu_74578_p4 = ap_phi_reg_pp0_iter0_data_43_V_read113_phi_reg_74574.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_43_V_read113_rewind_phi_fu_29807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_43_V_read113_rewind_phi_fu_29807_p6 = data_43_V_read113_phi_reg_74574.read();
    } else {
        ap_phi_mux_data_43_V_read113_rewind_phi_fu_29807_p6 = data_43_V_read113_rewind_reg_29803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_440_V_read510_phi_phi_fu_79739_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_440_V_read510_phi_phi_fu_79739_p4 = ap_phi_mux_data_440_V_read510_rewind_phi_fu_35365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_440_V_read510_phi_phi_fu_79739_p4 = data_440_V_read.read();
        } else {
            ap_phi_mux_data_440_V_read510_phi_phi_fu_79739_p4 = ap_phi_reg_pp0_iter0_data_440_V_read510_phi_reg_79735.read();
        }
    } else {
        ap_phi_mux_data_440_V_read510_phi_phi_fu_79739_p4 = ap_phi_reg_pp0_iter0_data_440_V_read510_phi_reg_79735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_440_V_read510_rewind_phi_fu_35365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_440_V_read510_rewind_phi_fu_35365_p6 = data_440_V_read510_phi_reg_79735.read();
    } else {
        ap_phi_mux_data_440_V_read510_rewind_phi_fu_35365_p6 = data_440_V_read510_rewind_reg_35361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_441_V_read511_phi_phi_fu_79752_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_441_V_read511_phi_phi_fu_79752_p4 = ap_phi_mux_data_441_V_read511_rewind_phi_fu_35379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_441_V_read511_phi_phi_fu_79752_p4 = data_441_V_read.read();
        } else {
            ap_phi_mux_data_441_V_read511_phi_phi_fu_79752_p4 = ap_phi_reg_pp0_iter0_data_441_V_read511_phi_reg_79748.read();
        }
    } else {
        ap_phi_mux_data_441_V_read511_phi_phi_fu_79752_p4 = ap_phi_reg_pp0_iter0_data_441_V_read511_phi_reg_79748.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_441_V_read511_rewind_phi_fu_35379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_441_V_read511_rewind_phi_fu_35379_p6 = data_441_V_read511_phi_reg_79748.read();
    } else {
        ap_phi_mux_data_441_V_read511_rewind_phi_fu_35379_p6 = data_441_V_read511_rewind_reg_35375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_442_V_read512_phi_phi_fu_79765_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_442_V_read512_phi_phi_fu_79765_p4 = ap_phi_mux_data_442_V_read512_rewind_phi_fu_35393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_442_V_read512_phi_phi_fu_79765_p4 = data_442_V_read.read();
        } else {
            ap_phi_mux_data_442_V_read512_phi_phi_fu_79765_p4 = ap_phi_reg_pp0_iter0_data_442_V_read512_phi_reg_79761.read();
        }
    } else {
        ap_phi_mux_data_442_V_read512_phi_phi_fu_79765_p4 = ap_phi_reg_pp0_iter0_data_442_V_read512_phi_reg_79761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_442_V_read512_rewind_phi_fu_35393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_442_V_read512_rewind_phi_fu_35393_p6 = data_442_V_read512_phi_reg_79761.read();
    } else {
        ap_phi_mux_data_442_V_read512_rewind_phi_fu_35393_p6 = data_442_V_read512_rewind_reg_35389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_443_V_read513_phi_phi_fu_79778_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_443_V_read513_phi_phi_fu_79778_p4 = ap_phi_mux_data_443_V_read513_rewind_phi_fu_35407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_443_V_read513_phi_phi_fu_79778_p4 = data_443_V_read.read();
        } else {
            ap_phi_mux_data_443_V_read513_phi_phi_fu_79778_p4 = ap_phi_reg_pp0_iter0_data_443_V_read513_phi_reg_79774.read();
        }
    } else {
        ap_phi_mux_data_443_V_read513_phi_phi_fu_79778_p4 = ap_phi_reg_pp0_iter0_data_443_V_read513_phi_reg_79774.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_443_V_read513_rewind_phi_fu_35407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_443_V_read513_rewind_phi_fu_35407_p6 = data_443_V_read513_phi_reg_79774.read();
    } else {
        ap_phi_mux_data_443_V_read513_rewind_phi_fu_35407_p6 = data_443_V_read513_rewind_reg_35403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_444_V_read514_phi_phi_fu_79791_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_444_V_read514_phi_phi_fu_79791_p4 = ap_phi_mux_data_444_V_read514_rewind_phi_fu_35421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_444_V_read514_phi_phi_fu_79791_p4 = data_444_V_read.read();
        } else {
            ap_phi_mux_data_444_V_read514_phi_phi_fu_79791_p4 = ap_phi_reg_pp0_iter0_data_444_V_read514_phi_reg_79787.read();
        }
    } else {
        ap_phi_mux_data_444_V_read514_phi_phi_fu_79791_p4 = ap_phi_reg_pp0_iter0_data_444_V_read514_phi_reg_79787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_444_V_read514_rewind_phi_fu_35421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_444_V_read514_rewind_phi_fu_35421_p6 = data_444_V_read514_phi_reg_79787.read();
    } else {
        ap_phi_mux_data_444_V_read514_rewind_phi_fu_35421_p6 = data_444_V_read514_rewind_reg_35417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_445_V_read515_phi_phi_fu_79804_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_445_V_read515_phi_phi_fu_79804_p4 = ap_phi_mux_data_445_V_read515_rewind_phi_fu_35435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_445_V_read515_phi_phi_fu_79804_p4 = data_445_V_read.read();
        } else {
            ap_phi_mux_data_445_V_read515_phi_phi_fu_79804_p4 = ap_phi_reg_pp0_iter0_data_445_V_read515_phi_reg_79800.read();
        }
    } else {
        ap_phi_mux_data_445_V_read515_phi_phi_fu_79804_p4 = ap_phi_reg_pp0_iter0_data_445_V_read515_phi_reg_79800.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_445_V_read515_rewind_phi_fu_35435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_445_V_read515_rewind_phi_fu_35435_p6 = data_445_V_read515_phi_reg_79800.read();
    } else {
        ap_phi_mux_data_445_V_read515_rewind_phi_fu_35435_p6 = data_445_V_read515_rewind_reg_35431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_446_V_read516_phi_phi_fu_79817_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_446_V_read516_phi_phi_fu_79817_p4 = ap_phi_mux_data_446_V_read516_rewind_phi_fu_35449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_446_V_read516_phi_phi_fu_79817_p4 = data_446_V_read.read();
        } else {
            ap_phi_mux_data_446_V_read516_phi_phi_fu_79817_p4 = ap_phi_reg_pp0_iter0_data_446_V_read516_phi_reg_79813.read();
        }
    } else {
        ap_phi_mux_data_446_V_read516_phi_phi_fu_79817_p4 = ap_phi_reg_pp0_iter0_data_446_V_read516_phi_reg_79813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_446_V_read516_rewind_phi_fu_35449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_446_V_read516_rewind_phi_fu_35449_p6 = data_446_V_read516_phi_reg_79813.read();
    } else {
        ap_phi_mux_data_446_V_read516_rewind_phi_fu_35449_p6 = data_446_V_read516_rewind_reg_35445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_447_V_read517_phi_phi_fu_79830_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_447_V_read517_phi_phi_fu_79830_p4 = ap_phi_mux_data_447_V_read517_rewind_phi_fu_35463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_447_V_read517_phi_phi_fu_79830_p4 = data_447_V_read.read();
        } else {
            ap_phi_mux_data_447_V_read517_phi_phi_fu_79830_p4 = ap_phi_reg_pp0_iter0_data_447_V_read517_phi_reg_79826.read();
        }
    } else {
        ap_phi_mux_data_447_V_read517_phi_phi_fu_79830_p4 = ap_phi_reg_pp0_iter0_data_447_V_read517_phi_reg_79826.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_447_V_read517_rewind_phi_fu_35463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_447_V_read517_rewind_phi_fu_35463_p6 = data_447_V_read517_phi_reg_79826.read();
    } else {
        ap_phi_mux_data_447_V_read517_rewind_phi_fu_35463_p6 = data_447_V_read517_rewind_reg_35459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_448_V_read518_phi_phi_fu_79843_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_448_V_read518_phi_phi_fu_79843_p4 = ap_phi_mux_data_448_V_read518_rewind_phi_fu_35477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_448_V_read518_phi_phi_fu_79843_p4 = data_448_V_read.read();
        } else {
            ap_phi_mux_data_448_V_read518_phi_phi_fu_79843_p4 = ap_phi_reg_pp0_iter0_data_448_V_read518_phi_reg_79839.read();
        }
    } else {
        ap_phi_mux_data_448_V_read518_phi_phi_fu_79843_p4 = ap_phi_reg_pp0_iter0_data_448_V_read518_phi_reg_79839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_448_V_read518_rewind_phi_fu_35477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_448_V_read518_rewind_phi_fu_35477_p6 = data_448_V_read518_phi_reg_79839.read();
    } else {
        ap_phi_mux_data_448_V_read518_rewind_phi_fu_35477_p6 = data_448_V_read518_rewind_reg_35473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_449_V_read519_phi_phi_fu_79856_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_449_V_read519_phi_phi_fu_79856_p4 = ap_phi_mux_data_449_V_read519_rewind_phi_fu_35491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_449_V_read519_phi_phi_fu_79856_p4 = data_449_V_read.read();
        } else {
            ap_phi_mux_data_449_V_read519_phi_phi_fu_79856_p4 = ap_phi_reg_pp0_iter0_data_449_V_read519_phi_reg_79852.read();
        }
    } else {
        ap_phi_mux_data_449_V_read519_phi_phi_fu_79856_p4 = ap_phi_reg_pp0_iter0_data_449_V_read519_phi_reg_79852.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_449_V_read519_rewind_phi_fu_35491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_449_V_read519_rewind_phi_fu_35491_p6 = data_449_V_read519_phi_reg_79852.read();
    } else {
        ap_phi_mux_data_449_V_read519_rewind_phi_fu_35491_p6 = data_449_V_read519_rewind_reg_35487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_44_V_read114_phi_phi_fu_74591_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_44_V_read114_phi_phi_fu_74591_p4 = ap_phi_mux_data_44_V_read114_rewind_phi_fu_29821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_44_V_read114_phi_phi_fu_74591_p4 = data_44_V_read.read();
        } else {
            ap_phi_mux_data_44_V_read114_phi_phi_fu_74591_p4 = ap_phi_reg_pp0_iter0_data_44_V_read114_phi_reg_74587.read();
        }
    } else {
        ap_phi_mux_data_44_V_read114_phi_phi_fu_74591_p4 = ap_phi_reg_pp0_iter0_data_44_V_read114_phi_reg_74587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_44_V_read114_rewind_phi_fu_29821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_44_V_read114_rewind_phi_fu_29821_p6 = data_44_V_read114_phi_reg_74587.read();
    } else {
        ap_phi_mux_data_44_V_read114_rewind_phi_fu_29821_p6 = data_44_V_read114_rewind_reg_29817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_450_V_read520_phi_phi_fu_79869_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_450_V_read520_phi_phi_fu_79869_p4 = ap_phi_mux_data_450_V_read520_rewind_phi_fu_35505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_450_V_read520_phi_phi_fu_79869_p4 = data_450_V_read.read();
        } else {
            ap_phi_mux_data_450_V_read520_phi_phi_fu_79869_p4 = ap_phi_reg_pp0_iter0_data_450_V_read520_phi_reg_79865.read();
        }
    } else {
        ap_phi_mux_data_450_V_read520_phi_phi_fu_79869_p4 = ap_phi_reg_pp0_iter0_data_450_V_read520_phi_reg_79865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_450_V_read520_rewind_phi_fu_35505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_450_V_read520_rewind_phi_fu_35505_p6 = data_450_V_read520_phi_reg_79865.read();
    } else {
        ap_phi_mux_data_450_V_read520_rewind_phi_fu_35505_p6 = data_450_V_read520_rewind_reg_35501.read();
    }
}

}

