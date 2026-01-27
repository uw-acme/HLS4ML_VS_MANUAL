#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_277_V_read347_phi_phi_fu_74298_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_277_V_read347_phi_phi_fu_74298_p4 = ap_phi_mux_data_277_V_read347_rewind_phi_fu_29761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_277_V_read347_phi_phi_fu_74298_p4 = data_277_V_read.read();
        } else {
            ap_phi_mux_data_277_V_read347_phi_phi_fu_74298_p4 = ap_phi_reg_pp0_iter0_data_277_V_read347_phi_reg_74294.read();
        }
    } else {
        ap_phi_mux_data_277_V_read347_phi_phi_fu_74298_p4 = ap_phi_reg_pp0_iter0_data_277_V_read347_phi_reg_74294.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_277_V_read347_rewind_phi_fu_29761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_277_V_read347_rewind_phi_fu_29761_p6 = data_277_V_read347_phi_reg_74294.read();
    } else {
        ap_phi_mux_data_277_V_read347_rewind_phi_fu_29761_p6 = data_277_V_read347_rewind_reg_29757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2780_V_read2850_phi_phi_fu_106837_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2780_V_read2850_phi_phi_fu_106837_p4 = ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_64803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2780_V_read2850_phi_phi_fu_106837_p4 = data_2780_V_read.read();
        } else {
            ap_phi_mux_data_2780_V_read2850_phi_phi_fu_106837_p4 = ap_phi_reg_pp0_iter0_data_2780_V_read2850_phi_reg_106833.read();
        }
    } else {
        ap_phi_mux_data_2780_V_read2850_phi_phi_fu_106837_p4 = ap_phi_reg_pp0_iter0_data_2780_V_read2850_phi_reg_106833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_64803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_64803_p6 = data_2780_V_read2850_phi_reg_106833.read();
    } else {
        ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_64803_p6 = data_2780_V_read2850_rewind_reg_64799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2781_V_read2851_phi_phi_fu_106850_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2781_V_read2851_phi_phi_fu_106850_p4 = ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_64817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2781_V_read2851_phi_phi_fu_106850_p4 = data_2781_V_read.read();
        } else {
            ap_phi_mux_data_2781_V_read2851_phi_phi_fu_106850_p4 = ap_phi_reg_pp0_iter0_data_2781_V_read2851_phi_reg_106846.read();
        }
    } else {
        ap_phi_mux_data_2781_V_read2851_phi_phi_fu_106850_p4 = ap_phi_reg_pp0_iter0_data_2781_V_read2851_phi_reg_106846.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_64817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_64817_p6 = data_2781_V_read2851_phi_reg_106846.read();
    } else {
        ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_64817_p6 = data_2781_V_read2851_rewind_reg_64813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2782_V_read2852_phi_phi_fu_106863_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2782_V_read2852_phi_phi_fu_106863_p4 = ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_64831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2782_V_read2852_phi_phi_fu_106863_p4 = data_2782_V_read.read();
        } else {
            ap_phi_mux_data_2782_V_read2852_phi_phi_fu_106863_p4 = ap_phi_reg_pp0_iter0_data_2782_V_read2852_phi_reg_106859.read();
        }
    } else {
        ap_phi_mux_data_2782_V_read2852_phi_phi_fu_106863_p4 = ap_phi_reg_pp0_iter0_data_2782_V_read2852_phi_reg_106859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_64831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_64831_p6 = data_2782_V_read2852_phi_reg_106859.read();
    } else {
        ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_64831_p6 = data_2782_V_read2852_rewind_reg_64827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2783_V_read2853_phi_phi_fu_106876_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2783_V_read2853_phi_phi_fu_106876_p4 = ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_64845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2783_V_read2853_phi_phi_fu_106876_p4 = data_2783_V_read.read();
        } else {
            ap_phi_mux_data_2783_V_read2853_phi_phi_fu_106876_p4 = ap_phi_reg_pp0_iter0_data_2783_V_read2853_phi_reg_106872.read();
        }
    } else {
        ap_phi_mux_data_2783_V_read2853_phi_phi_fu_106876_p4 = ap_phi_reg_pp0_iter0_data_2783_V_read2853_phi_reg_106872.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_64845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_64845_p6 = data_2783_V_read2853_phi_reg_106872.read();
    } else {
        ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_64845_p6 = data_2783_V_read2853_rewind_reg_64841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2784_V_read2854_phi_phi_fu_106889_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2784_V_read2854_phi_phi_fu_106889_p4 = ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_64859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2784_V_read2854_phi_phi_fu_106889_p4 = data_2784_V_read.read();
        } else {
            ap_phi_mux_data_2784_V_read2854_phi_phi_fu_106889_p4 = ap_phi_reg_pp0_iter0_data_2784_V_read2854_phi_reg_106885.read();
        }
    } else {
        ap_phi_mux_data_2784_V_read2854_phi_phi_fu_106889_p4 = ap_phi_reg_pp0_iter0_data_2784_V_read2854_phi_reg_106885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_64859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_64859_p6 = data_2784_V_read2854_phi_reg_106885.read();
    } else {
        ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_64859_p6 = data_2784_V_read2854_rewind_reg_64855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2785_V_read2855_phi_phi_fu_106902_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2785_V_read2855_phi_phi_fu_106902_p4 = ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_64873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2785_V_read2855_phi_phi_fu_106902_p4 = data_2785_V_read.read();
        } else {
            ap_phi_mux_data_2785_V_read2855_phi_phi_fu_106902_p4 = ap_phi_reg_pp0_iter0_data_2785_V_read2855_phi_reg_106898.read();
        }
    } else {
        ap_phi_mux_data_2785_V_read2855_phi_phi_fu_106902_p4 = ap_phi_reg_pp0_iter0_data_2785_V_read2855_phi_reg_106898.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_64873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_64873_p6 = data_2785_V_read2855_phi_reg_106898.read();
    } else {
        ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_64873_p6 = data_2785_V_read2855_rewind_reg_64869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2786_V_read2856_phi_phi_fu_106915_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2786_V_read2856_phi_phi_fu_106915_p4 = ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_64887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2786_V_read2856_phi_phi_fu_106915_p4 = data_2786_V_read.read();
        } else {
            ap_phi_mux_data_2786_V_read2856_phi_phi_fu_106915_p4 = ap_phi_reg_pp0_iter0_data_2786_V_read2856_phi_reg_106911.read();
        }
    } else {
        ap_phi_mux_data_2786_V_read2856_phi_phi_fu_106915_p4 = ap_phi_reg_pp0_iter0_data_2786_V_read2856_phi_reg_106911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_64887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_64887_p6 = data_2786_V_read2856_phi_reg_106911.read();
    } else {
        ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_64887_p6 = data_2786_V_read2856_rewind_reg_64883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2787_V_read2857_phi_phi_fu_106928_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2787_V_read2857_phi_phi_fu_106928_p4 = ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_64901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2787_V_read2857_phi_phi_fu_106928_p4 = data_2787_V_read.read();
        } else {
            ap_phi_mux_data_2787_V_read2857_phi_phi_fu_106928_p4 = ap_phi_reg_pp0_iter0_data_2787_V_read2857_phi_reg_106924.read();
        }
    } else {
        ap_phi_mux_data_2787_V_read2857_phi_phi_fu_106928_p4 = ap_phi_reg_pp0_iter0_data_2787_V_read2857_phi_reg_106924.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_64901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_64901_p6 = data_2787_V_read2857_phi_reg_106924.read();
    } else {
        ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_64901_p6 = data_2787_V_read2857_rewind_reg_64897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2788_V_read2858_phi_phi_fu_106941_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2788_V_read2858_phi_phi_fu_106941_p4 = ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_64915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2788_V_read2858_phi_phi_fu_106941_p4 = data_2788_V_read.read();
        } else {
            ap_phi_mux_data_2788_V_read2858_phi_phi_fu_106941_p4 = ap_phi_reg_pp0_iter0_data_2788_V_read2858_phi_reg_106937.read();
        }
    } else {
        ap_phi_mux_data_2788_V_read2858_phi_phi_fu_106941_p4 = ap_phi_reg_pp0_iter0_data_2788_V_read2858_phi_reg_106937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_64915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_64915_p6 = data_2788_V_read2858_phi_reg_106937.read();
    } else {
        ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_64915_p6 = data_2788_V_read2858_rewind_reg_64911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2789_V_read2859_phi_phi_fu_106954_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2789_V_read2859_phi_phi_fu_106954_p4 = ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_64929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2789_V_read2859_phi_phi_fu_106954_p4 = data_2789_V_read.read();
        } else {
            ap_phi_mux_data_2789_V_read2859_phi_phi_fu_106954_p4 = ap_phi_reg_pp0_iter0_data_2789_V_read2859_phi_reg_106950.read();
        }
    } else {
        ap_phi_mux_data_2789_V_read2859_phi_phi_fu_106954_p4 = ap_phi_reg_pp0_iter0_data_2789_V_read2859_phi_reg_106950.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_64929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_64929_p6 = data_2789_V_read2859_phi_reg_106950.read();
    } else {
        ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_64929_p6 = data_2789_V_read2859_rewind_reg_64925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_278_V_read348_phi_phi_fu_74311_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_278_V_read348_phi_phi_fu_74311_p4 = ap_phi_mux_data_278_V_read348_rewind_phi_fu_29775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_278_V_read348_phi_phi_fu_74311_p4 = data_278_V_read.read();
        } else {
            ap_phi_mux_data_278_V_read348_phi_phi_fu_74311_p4 = ap_phi_reg_pp0_iter0_data_278_V_read348_phi_reg_74307.read();
        }
    } else {
        ap_phi_mux_data_278_V_read348_phi_phi_fu_74311_p4 = ap_phi_reg_pp0_iter0_data_278_V_read348_phi_reg_74307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_278_V_read348_rewind_phi_fu_29775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_278_V_read348_rewind_phi_fu_29775_p6 = data_278_V_read348_phi_reg_74307.read();
    } else {
        ap_phi_mux_data_278_V_read348_rewind_phi_fu_29775_p6 = data_278_V_read348_rewind_reg_29771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2790_V_read2860_phi_phi_fu_106967_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2790_V_read2860_phi_phi_fu_106967_p4 = ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_64943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2790_V_read2860_phi_phi_fu_106967_p4 = data_2790_V_read.read();
        } else {
            ap_phi_mux_data_2790_V_read2860_phi_phi_fu_106967_p4 = ap_phi_reg_pp0_iter0_data_2790_V_read2860_phi_reg_106963.read();
        }
    } else {
        ap_phi_mux_data_2790_V_read2860_phi_phi_fu_106967_p4 = ap_phi_reg_pp0_iter0_data_2790_V_read2860_phi_reg_106963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_64943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_64943_p6 = data_2790_V_read2860_phi_reg_106963.read();
    } else {
        ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_64943_p6 = data_2790_V_read2860_rewind_reg_64939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2791_V_read2861_phi_phi_fu_106980_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2791_V_read2861_phi_phi_fu_106980_p4 = ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_64957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2791_V_read2861_phi_phi_fu_106980_p4 = data_2791_V_read.read();
        } else {
            ap_phi_mux_data_2791_V_read2861_phi_phi_fu_106980_p4 = ap_phi_reg_pp0_iter0_data_2791_V_read2861_phi_reg_106976.read();
        }
    } else {
        ap_phi_mux_data_2791_V_read2861_phi_phi_fu_106980_p4 = ap_phi_reg_pp0_iter0_data_2791_V_read2861_phi_reg_106976.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_64957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_64957_p6 = data_2791_V_read2861_phi_reg_106976.read();
    } else {
        ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_64957_p6 = data_2791_V_read2861_rewind_reg_64953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2792_V_read2862_phi_phi_fu_106993_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2792_V_read2862_phi_phi_fu_106993_p4 = ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_64971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2792_V_read2862_phi_phi_fu_106993_p4 = data_2792_V_read.read();
        } else {
            ap_phi_mux_data_2792_V_read2862_phi_phi_fu_106993_p4 = ap_phi_reg_pp0_iter0_data_2792_V_read2862_phi_reg_106989.read();
        }
    } else {
        ap_phi_mux_data_2792_V_read2862_phi_phi_fu_106993_p4 = ap_phi_reg_pp0_iter0_data_2792_V_read2862_phi_reg_106989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_64971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_64971_p6 = data_2792_V_read2862_phi_reg_106989.read();
    } else {
        ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_64971_p6 = data_2792_V_read2862_rewind_reg_64967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2793_V_read2863_phi_phi_fu_107006_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2793_V_read2863_phi_phi_fu_107006_p4 = ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_64985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2793_V_read2863_phi_phi_fu_107006_p4 = data_2793_V_read.read();
        } else {
            ap_phi_mux_data_2793_V_read2863_phi_phi_fu_107006_p4 = ap_phi_reg_pp0_iter0_data_2793_V_read2863_phi_reg_107002.read();
        }
    } else {
        ap_phi_mux_data_2793_V_read2863_phi_phi_fu_107006_p4 = ap_phi_reg_pp0_iter0_data_2793_V_read2863_phi_reg_107002.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_64985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_64985_p6 = data_2793_V_read2863_phi_reg_107002.read();
    } else {
        ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_64985_p6 = data_2793_V_read2863_rewind_reg_64981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2794_V_read2864_phi_phi_fu_107019_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2794_V_read2864_phi_phi_fu_107019_p4 = ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_64999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2794_V_read2864_phi_phi_fu_107019_p4 = data_2794_V_read.read();
        } else {
            ap_phi_mux_data_2794_V_read2864_phi_phi_fu_107019_p4 = ap_phi_reg_pp0_iter0_data_2794_V_read2864_phi_reg_107015.read();
        }
    } else {
        ap_phi_mux_data_2794_V_read2864_phi_phi_fu_107019_p4 = ap_phi_reg_pp0_iter0_data_2794_V_read2864_phi_reg_107015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_64999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_64999_p6 = data_2794_V_read2864_phi_reg_107015.read();
    } else {
        ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_64999_p6 = data_2794_V_read2864_rewind_reg_64995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2795_V_read2865_phi_phi_fu_107032_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2795_V_read2865_phi_phi_fu_107032_p4 = ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_65013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2795_V_read2865_phi_phi_fu_107032_p4 = data_2795_V_read.read();
        } else {
            ap_phi_mux_data_2795_V_read2865_phi_phi_fu_107032_p4 = ap_phi_reg_pp0_iter0_data_2795_V_read2865_phi_reg_107028.read();
        }
    } else {
        ap_phi_mux_data_2795_V_read2865_phi_phi_fu_107032_p4 = ap_phi_reg_pp0_iter0_data_2795_V_read2865_phi_reg_107028.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_65013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_65013_p6 = data_2795_V_read2865_phi_reg_107028.read();
    } else {
        ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_65013_p6 = data_2795_V_read2865_rewind_reg_65009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2796_V_read2866_phi_phi_fu_107045_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2796_V_read2866_phi_phi_fu_107045_p4 = ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_65027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2796_V_read2866_phi_phi_fu_107045_p4 = data_2796_V_read.read();
        } else {
            ap_phi_mux_data_2796_V_read2866_phi_phi_fu_107045_p4 = ap_phi_reg_pp0_iter0_data_2796_V_read2866_phi_reg_107041.read();
        }
    } else {
        ap_phi_mux_data_2796_V_read2866_phi_phi_fu_107045_p4 = ap_phi_reg_pp0_iter0_data_2796_V_read2866_phi_reg_107041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_65027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_65027_p6 = data_2796_V_read2866_phi_reg_107041.read();
    } else {
        ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_65027_p6 = data_2796_V_read2866_rewind_reg_65023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2797_V_read2867_phi_phi_fu_107058_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2797_V_read2867_phi_phi_fu_107058_p4 = ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_65041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2797_V_read2867_phi_phi_fu_107058_p4 = data_2797_V_read.read();
        } else {
            ap_phi_mux_data_2797_V_read2867_phi_phi_fu_107058_p4 = ap_phi_reg_pp0_iter0_data_2797_V_read2867_phi_reg_107054.read();
        }
    } else {
        ap_phi_mux_data_2797_V_read2867_phi_phi_fu_107058_p4 = ap_phi_reg_pp0_iter0_data_2797_V_read2867_phi_reg_107054.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_65041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_65041_p6 = data_2797_V_read2867_phi_reg_107054.read();
    } else {
        ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_65041_p6 = data_2797_V_read2867_rewind_reg_65037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2798_V_read2868_phi_phi_fu_107071_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2798_V_read2868_phi_phi_fu_107071_p4 = ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_65055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2798_V_read2868_phi_phi_fu_107071_p4 = data_2798_V_read.read();
        } else {
            ap_phi_mux_data_2798_V_read2868_phi_phi_fu_107071_p4 = ap_phi_reg_pp0_iter0_data_2798_V_read2868_phi_reg_107067.read();
        }
    } else {
        ap_phi_mux_data_2798_V_read2868_phi_phi_fu_107071_p4 = ap_phi_reg_pp0_iter0_data_2798_V_read2868_phi_reg_107067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_65055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_65055_p6 = data_2798_V_read2868_phi_reg_107067.read();
    } else {
        ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_65055_p6 = data_2798_V_read2868_rewind_reg_65051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2799_V_read2869_phi_phi_fu_107084_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2799_V_read2869_phi_phi_fu_107084_p4 = ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_65069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2799_V_read2869_phi_phi_fu_107084_p4 = data_2799_V_read.read();
        } else {
            ap_phi_mux_data_2799_V_read2869_phi_phi_fu_107084_p4 = ap_phi_reg_pp0_iter0_data_2799_V_read2869_phi_reg_107080.read();
        }
    } else {
        ap_phi_mux_data_2799_V_read2869_phi_phi_fu_107084_p4 = ap_phi_reg_pp0_iter0_data_2799_V_read2869_phi_reg_107080.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_65069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_65069_p6 = data_2799_V_read2869_phi_reg_107080.read();
    } else {
        ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_65069_p6 = data_2799_V_read2869_rewind_reg_65065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_279_V_read349_phi_phi_fu_74324_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_279_V_read349_phi_phi_fu_74324_p4 = ap_phi_mux_data_279_V_read349_rewind_phi_fu_29789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_279_V_read349_phi_phi_fu_74324_p4 = data_279_V_read.read();
        } else {
            ap_phi_mux_data_279_V_read349_phi_phi_fu_74324_p4 = ap_phi_reg_pp0_iter0_data_279_V_read349_phi_reg_74320.read();
        }
    } else {
        ap_phi_mux_data_279_V_read349_phi_phi_fu_74324_p4 = ap_phi_reg_pp0_iter0_data_279_V_read349_phi_reg_74320.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_279_V_read349_rewind_phi_fu_29789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_279_V_read349_rewind_phi_fu_29789_p6 = data_279_V_read349_phi_reg_74320.read();
    } else {
        ap_phi_mux_data_279_V_read349_rewind_phi_fu_29789_p6 = data_279_V_read349_rewind_reg_29785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_27_V_read97_phi_phi_fu_71048_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_27_V_read97_phi_phi_fu_71048_p4 = ap_phi_mux_data_27_V_read97_rewind_phi_fu_26261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_27_V_read97_phi_phi_fu_71048_p4 = data_27_V_read.read();
        } else {
            ap_phi_mux_data_27_V_read97_phi_phi_fu_71048_p4 = ap_phi_reg_pp0_iter0_data_27_V_read97_phi_reg_71044.read();
        }
    } else {
        ap_phi_mux_data_27_V_read97_phi_phi_fu_71048_p4 = ap_phi_reg_pp0_iter0_data_27_V_read97_phi_reg_71044.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_27_V_read97_rewind_phi_fu_26261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_27_V_read97_rewind_phi_fu_26261_p6 = data_27_V_read97_phi_reg_71044.read();
    } else {
        ap_phi_mux_data_27_V_read97_rewind_phi_fu_26261_p6 = data_27_V_read97_rewind_reg_26257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2800_V_read2870_phi_phi_fu_107097_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2800_V_read2870_phi_phi_fu_107097_p4 = ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_65083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2800_V_read2870_phi_phi_fu_107097_p4 = data_2800_V_read.read();
        } else {
            ap_phi_mux_data_2800_V_read2870_phi_phi_fu_107097_p4 = ap_phi_reg_pp0_iter0_data_2800_V_read2870_phi_reg_107093.read();
        }
    } else {
        ap_phi_mux_data_2800_V_read2870_phi_phi_fu_107097_p4 = ap_phi_reg_pp0_iter0_data_2800_V_read2870_phi_reg_107093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_65083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_65083_p6 = data_2800_V_read2870_phi_reg_107093.read();
    } else {
        ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_65083_p6 = data_2800_V_read2870_rewind_reg_65079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2801_V_read2871_phi_phi_fu_107110_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2801_V_read2871_phi_phi_fu_107110_p4 = ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_65097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2801_V_read2871_phi_phi_fu_107110_p4 = data_2801_V_read.read();
        } else {
            ap_phi_mux_data_2801_V_read2871_phi_phi_fu_107110_p4 = ap_phi_reg_pp0_iter0_data_2801_V_read2871_phi_reg_107106.read();
        }
    } else {
        ap_phi_mux_data_2801_V_read2871_phi_phi_fu_107110_p4 = ap_phi_reg_pp0_iter0_data_2801_V_read2871_phi_reg_107106.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_65097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_65097_p6 = data_2801_V_read2871_phi_reg_107106.read();
    } else {
        ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_65097_p6 = data_2801_V_read2871_rewind_reg_65093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2802_V_read2872_phi_phi_fu_107123_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2802_V_read2872_phi_phi_fu_107123_p4 = ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_65111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2802_V_read2872_phi_phi_fu_107123_p4 = data_2802_V_read.read();
        } else {
            ap_phi_mux_data_2802_V_read2872_phi_phi_fu_107123_p4 = ap_phi_reg_pp0_iter0_data_2802_V_read2872_phi_reg_107119.read();
        }
    } else {
        ap_phi_mux_data_2802_V_read2872_phi_phi_fu_107123_p4 = ap_phi_reg_pp0_iter0_data_2802_V_read2872_phi_reg_107119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_65111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_65111_p6 = data_2802_V_read2872_phi_reg_107119.read();
    } else {
        ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_65111_p6 = data_2802_V_read2872_rewind_reg_65107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2803_V_read2873_phi_phi_fu_107136_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2803_V_read2873_phi_phi_fu_107136_p4 = ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_65125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2803_V_read2873_phi_phi_fu_107136_p4 = data_2803_V_read.read();
        } else {
            ap_phi_mux_data_2803_V_read2873_phi_phi_fu_107136_p4 = ap_phi_reg_pp0_iter0_data_2803_V_read2873_phi_reg_107132.read();
        }
    } else {
        ap_phi_mux_data_2803_V_read2873_phi_phi_fu_107136_p4 = ap_phi_reg_pp0_iter0_data_2803_V_read2873_phi_reg_107132.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_65125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_65125_p6 = data_2803_V_read2873_phi_reg_107132.read();
    } else {
        ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_65125_p6 = data_2803_V_read2873_rewind_reg_65121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2804_V_read2874_phi_phi_fu_107149_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2804_V_read2874_phi_phi_fu_107149_p4 = ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_65139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2804_V_read2874_phi_phi_fu_107149_p4 = data_2804_V_read.read();
        } else {
            ap_phi_mux_data_2804_V_read2874_phi_phi_fu_107149_p4 = ap_phi_reg_pp0_iter0_data_2804_V_read2874_phi_reg_107145.read();
        }
    } else {
        ap_phi_mux_data_2804_V_read2874_phi_phi_fu_107149_p4 = ap_phi_reg_pp0_iter0_data_2804_V_read2874_phi_reg_107145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_65139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_65139_p6 = data_2804_V_read2874_phi_reg_107145.read();
    } else {
        ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_65139_p6 = data_2804_V_read2874_rewind_reg_65135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2805_V_read2875_phi_phi_fu_107162_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2805_V_read2875_phi_phi_fu_107162_p4 = ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_65153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2805_V_read2875_phi_phi_fu_107162_p4 = data_2805_V_read.read();
        } else {
            ap_phi_mux_data_2805_V_read2875_phi_phi_fu_107162_p4 = ap_phi_reg_pp0_iter0_data_2805_V_read2875_phi_reg_107158.read();
        }
    } else {
        ap_phi_mux_data_2805_V_read2875_phi_phi_fu_107162_p4 = ap_phi_reg_pp0_iter0_data_2805_V_read2875_phi_reg_107158.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_65153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_65153_p6 = data_2805_V_read2875_phi_reg_107158.read();
    } else {
        ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_65153_p6 = data_2805_V_read2875_rewind_reg_65149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2806_V_read2876_phi_phi_fu_107175_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2806_V_read2876_phi_phi_fu_107175_p4 = ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_65167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2806_V_read2876_phi_phi_fu_107175_p4 = data_2806_V_read.read();
        } else {
            ap_phi_mux_data_2806_V_read2876_phi_phi_fu_107175_p4 = ap_phi_reg_pp0_iter0_data_2806_V_read2876_phi_reg_107171.read();
        }
    } else {
        ap_phi_mux_data_2806_V_read2876_phi_phi_fu_107175_p4 = ap_phi_reg_pp0_iter0_data_2806_V_read2876_phi_reg_107171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_65167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_65167_p6 = data_2806_V_read2876_phi_reg_107171.read();
    } else {
        ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_65167_p6 = data_2806_V_read2876_rewind_reg_65163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2807_V_read2877_phi_phi_fu_107188_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2807_V_read2877_phi_phi_fu_107188_p4 = ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_65181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2807_V_read2877_phi_phi_fu_107188_p4 = data_2807_V_read.read();
        } else {
            ap_phi_mux_data_2807_V_read2877_phi_phi_fu_107188_p4 = ap_phi_reg_pp0_iter0_data_2807_V_read2877_phi_reg_107184.read();
        }
    } else {
        ap_phi_mux_data_2807_V_read2877_phi_phi_fu_107188_p4 = ap_phi_reg_pp0_iter0_data_2807_V_read2877_phi_reg_107184.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_65181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_65181_p6 = data_2807_V_read2877_phi_reg_107184.read();
    } else {
        ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_65181_p6 = data_2807_V_read2877_rewind_reg_65177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2808_V_read2878_phi_phi_fu_107201_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2808_V_read2878_phi_phi_fu_107201_p4 = ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_65195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2808_V_read2878_phi_phi_fu_107201_p4 = data_2808_V_read.read();
        } else {
            ap_phi_mux_data_2808_V_read2878_phi_phi_fu_107201_p4 = ap_phi_reg_pp0_iter0_data_2808_V_read2878_phi_reg_107197.read();
        }
    } else {
        ap_phi_mux_data_2808_V_read2878_phi_phi_fu_107201_p4 = ap_phi_reg_pp0_iter0_data_2808_V_read2878_phi_reg_107197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_65195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_65195_p6 = data_2808_V_read2878_phi_reg_107197.read();
    } else {
        ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_65195_p6 = data_2808_V_read2878_rewind_reg_65191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2809_V_read2879_phi_phi_fu_107214_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2809_V_read2879_phi_phi_fu_107214_p4 = ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_65209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2809_V_read2879_phi_phi_fu_107214_p4 = data_2809_V_read.read();
        } else {
            ap_phi_mux_data_2809_V_read2879_phi_phi_fu_107214_p4 = ap_phi_reg_pp0_iter0_data_2809_V_read2879_phi_reg_107210.read();
        }
    } else {
        ap_phi_mux_data_2809_V_read2879_phi_phi_fu_107214_p4 = ap_phi_reg_pp0_iter0_data_2809_V_read2879_phi_reg_107210.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_65209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_65209_p6 = data_2809_V_read2879_phi_reg_107210.read();
    } else {
        ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_65209_p6 = data_2809_V_read2879_rewind_reg_65205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_280_V_read350_phi_phi_fu_74337_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_280_V_read350_phi_phi_fu_74337_p4 = ap_phi_mux_data_280_V_read350_rewind_phi_fu_29803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_280_V_read350_phi_phi_fu_74337_p4 = data_280_V_read.read();
        } else {
            ap_phi_mux_data_280_V_read350_phi_phi_fu_74337_p4 = ap_phi_reg_pp0_iter0_data_280_V_read350_phi_reg_74333.read();
        }
    } else {
        ap_phi_mux_data_280_V_read350_phi_phi_fu_74337_p4 = ap_phi_reg_pp0_iter0_data_280_V_read350_phi_reg_74333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_280_V_read350_rewind_phi_fu_29803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_280_V_read350_rewind_phi_fu_29803_p6 = data_280_V_read350_phi_reg_74333.read();
    } else {
        ap_phi_mux_data_280_V_read350_rewind_phi_fu_29803_p6 = data_280_V_read350_rewind_reg_29799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2810_V_read2880_phi_phi_fu_107227_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2810_V_read2880_phi_phi_fu_107227_p4 = ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_65223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2810_V_read2880_phi_phi_fu_107227_p4 = data_2810_V_read.read();
        } else {
            ap_phi_mux_data_2810_V_read2880_phi_phi_fu_107227_p4 = ap_phi_reg_pp0_iter0_data_2810_V_read2880_phi_reg_107223.read();
        }
    } else {
        ap_phi_mux_data_2810_V_read2880_phi_phi_fu_107227_p4 = ap_phi_reg_pp0_iter0_data_2810_V_read2880_phi_reg_107223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_65223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_65223_p6 = data_2810_V_read2880_phi_reg_107223.read();
    } else {
        ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_65223_p6 = data_2810_V_read2880_rewind_reg_65219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2811_V_read2881_phi_phi_fu_107240_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2811_V_read2881_phi_phi_fu_107240_p4 = ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_65237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2811_V_read2881_phi_phi_fu_107240_p4 = data_2811_V_read.read();
        } else {
            ap_phi_mux_data_2811_V_read2881_phi_phi_fu_107240_p4 = ap_phi_reg_pp0_iter0_data_2811_V_read2881_phi_reg_107236.read();
        }
    } else {
        ap_phi_mux_data_2811_V_read2881_phi_phi_fu_107240_p4 = ap_phi_reg_pp0_iter0_data_2811_V_read2881_phi_reg_107236.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_65237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_65237_p6 = data_2811_V_read2881_phi_reg_107236.read();
    } else {
        ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_65237_p6 = data_2811_V_read2881_rewind_reg_65233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2812_V_read2882_phi_phi_fu_107253_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2812_V_read2882_phi_phi_fu_107253_p4 = ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_65251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2812_V_read2882_phi_phi_fu_107253_p4 = data_2812_V_read.read();
        } else {
            ap_phi_mux_data_2812_V_read2882_phi_phi_fu_107253_p4 = ap_phi_reg_pp0_iter0_data_2812_V_read2882_phi_reg_107249.read();
        }
    } else {
        ap_phi_mux_data_2812_V_read2882_phi_phi_fu_107253_p4 = ap_phi_reg_pp0_iter0_data_2812_V_read2882_phi_reg_107249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_65251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_65251_p6 = data_2812_V_read2882_phi_reg_107249.read();
    } else {
        ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_65251_p6 = data_2812_V_read2882_rewind_reg_65247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2813_V_read2883_phi_phi_fu_107266_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2813_V_read2883_phi_phi_fu_107266_p4 = ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_65265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2813_V_read2883_phi_phi_fu_107266_p4 = data_2813_V_read.read();
        } else {
            ap_phi_mux_data_2813_V_read2883_phi_phi_fu_107266_p4 = ap_phi_reg_pp0_iter0_data_2813_V_read2883_phi_reg_107262.read();
        }
    } else {
        ap_phi_mux_data_2813_V_read2883_phi_phi_fu_107266_p4 = ap_phi_reg_pp0_iter0_data_2813_V_read2883_phi_reg_107262.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_65265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_65265_p6 = data_2813_V_read2883_phi_reg_107262.read();
    } else {
        ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_65265_p6 = data_2813_V_read2883_rewind_reg_65261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2814_V_read2884_phi_phi_fu_107279_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2814_V_read2884_phi_phi_fu_107279_p4 = ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_65279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2814_V_read2884_phi_phi_fu_107279_p4 = data_2814_V_read.read();
        } else {
            ap_phi_mux_data_2814_V_read2884_phi_phi_fu_107279_p4 = ap_phi_reg_pp0_iter0_data_2814_V_read2884_phi_reg_107275.read();
        }
    } else {
        ap_phi_mux_data_2814_V_read2884_phi_phi_fu_107279_p4 = ap_phi_reg_pp0_iter0_data_2814_V_read2884_phi_reg_107275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_65279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_65279_p6 = data_2814_V_read2884_phi_reg_107275.read();
    } else {
        ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_65279_p6 = data_2814_V_read2884_rewind_reg_65275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2815_V_read2885_phi_phi_fu_107292_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2815_V_read2885_phi_phi_fu_107292_p4 = ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_65293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2815_V_read2885_phi_phi_fu_107292_p4 = data_2815_V_read.read();
        } else {
            ap_phi_mux_data_2815_V_read2885_phi_phi_fu_107292_p4 = ap_phi_reg_pp0_iter0_data_2815_V_read2885_phi_reg_107288.read();
        }
    } else {
        ap_phi_mux_data_2815_V_read2885_phi_phi_fu_107292_p4 = ap_phi_reg_pp0_iter0_data_2815_V_read2885_phi_reg_107288.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_65293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_65293_p6 = data_2815_V_read2885_phi_reg_107288.read();
    } else {
        ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_65293_p6 = data_2815_V_read2885_rewind_reg_65289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2816_V_read2886_phi_phi_fu_107305_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2816_V_read2886_phi_phi_fu_107305_p4 = ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_65307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2816_V_read2886_phi_phi_fu_107305_p4 = data_2816_V_read.read();
        } else {
            ap_phi_mux_data_2816_V_read2886_phi_phi_fu_107305_p4 = ap_phi_reg_pp0_iter0_data_2816_V_read2886_phi_reg_107301.read();
        }
    } else {
        ap_phi_mux_data_2816_V_read2886_phi_phi_fu_107305_p4 = ap_phi_reg_pp0_iter0_data_2816_V_read2886_phi_reg_107301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_65307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_65307_p6 = data_2816_V_read2886_phi_reg_107301.read();
    } else {
        ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_65307_p6 = data_2816_V_read2886_rewind_reg_65303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2817_V_read2887_phi_phi_fu_107318_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2817_V_read2887_phi_phi_fu_107318_p4 = ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_65321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2817_V_read2887_phi_phi_fu_107318_p4 = data_2817_V_read.read();
        } else {
            ap_phi_mux_data_2817_V_read2887_phi_phi_fu_107318_p4 = ap_phi_reg_pp0_iter0_data_2817_V_read2887_phi_reg_107314.read();
        }
    } else {
        ap_phi_mux_data_2817_V_read2887_phi_phi_fu_107318_p4 = ap_phi_reg_pp0_iter0_data_2817_V_read2887_phi_reg_107314.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_65321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_65321_p6 = data_2817_V_read2887_phi_reg_107314.read();
    } else {
        ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_65321_p6 = data_2817_V_read2887_rewind_reg_65317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2818_V_read2888_phi_phi_fu_107331_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2818_V_read2888_phi_phi_fu_107331_p4 = ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_65335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2818_V_read2888_phi_phi_fu_107331_p4 = data_2818_V_read.read();
        } else {
            ap_phi_mux_data_2818_V_read2888_phi_phi_fu_107331_p4 = ap_phi_reg_pp0_iter0_data_2818_V_read2888_phi_reg_107327.read();
        }
    } else {
        ap_phi_mux_data_2818_V_read2888_phi_phi_fu_107331_p4 = ap_phi_reg_pp0_iter0_data_2818_V_read2888_phi_reg_107327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_65335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_65335_p6 = data_2818_V_read2888_phi_reg_107327.read();
    } else {
        ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_65335_p6 = data_2818_V_read2888_rewind_reg_65331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2819_V_read2889_phi_phi_fu_107344_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2819_V_read2889_phi_phi_fu_107344_p4 = ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_65349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2819_V_read2889_phi_phi_fu_107344_p4 = data_2819_V_read.read();
        } else {
            ap_phi_mux_data_2819_V_read2889_phi_phi_fu_107344_p4 = ap_phi_reg_pp0_iter0_data_2819_V_read2889_phi_reg_107340.read();
        }
    } else {
        ap_phi_mux_data_2819_V_read2889_phi_phi_fu_107344_p4 = ap_phi_reg_pp0_iter0_data_2819_V_read2889_phi_reg_107340.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_65349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_65349_p6 = data_2819_V_read2889_phi_reg_107340.read();
    } else {
        ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_65349_p6 = data_2819_V_read2889_rewind_reg_65345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_281_V_read351_phi_phi_fu_74350_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_281_V_read351_phi_phi_fu_74350_p4 = ap_phi_mux_data_281_V_read351_rewind_phi_fu_29817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_281_V_read351_phi_phi_fu_74350_p4 = data_281_V_read.read();
        } else {
            ap_phi_mux_data_281_V_read351_phi_phi_fu_74350_p4 = ap_phi_reg_pp0_iter0_data_281_V_read351_phi_reg_74346.read();
        }
    } else {
        ap_phi_mux_data_281_V_read351_phi_phi_fu_74350_p4 = ap_phi_reg_pp0_iter0_data_281_V_read351_phi_reg_74346.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_281_V_read351_rewind_phi_fu_29817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_281_V_read351_rewind_phi_fu_29817_p6 = data_281_V_read351_phi_reg_74346.read();
    } else {
        ap_phi_mux_data_281_V_read351_rewind_phi_fu_29817_p6 = data_281_V_read351_rewind_reg_29813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2820_V_read2890_phi_phi_fu_107357_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2820_V_read2890_phi_phi_fu_107357_p4 = ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_65363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2820_V_read2890_phi_phi_fu_107357_p4 = data_2820_V_read.read();
        } else {
            ap_phi_mux_data_2820_V_read2890_phi_phi_fu_107357_p4 = ap_phi_reg_pp0_iter0_data_2820_V_read2890_phi_reg_107353.read();
        }
    } else {
        ap_phi_mux_data_2820_V_read2890_phi_phi_fu_107357_p4 = ap_phi_reg_pp0_iter0_data_2820_V_read2890_phi_reg_107353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_65363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_65363_p6 = data_2820_V_read2890_phi_reg_107353.read();
    } else {
        ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_65363_p6 = data_2820_V_read2890_rewind_reg_65359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2821_V_read2891_phi_phi_fu_107370_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2821_V_read2891_phi_phi_fu_107370_p4 = ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_65377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2821_V_read2891_phi_phi_fu_107370_p4 = data_2821_V_read.read();
        } else {
            ap_phi_mux_data_2821_V_read2891_phi_phi_fu_107370_p4 = ap_phi_reg_pp0_iter0_data_2821_V_read2891_phi_reg_107366.read();
        }
    } else {
        ap_phi_mux_data_2821_V_read2891_phi_phi_fu_107370_p4 = ap_phi_reg_pp0_iter0_data_2821_V_read2891_phi_reg_107366.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_65377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_65377_p6 = data_2821_V_read2891_phi_reg_107366.read();
    } else {
        ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_65377_p6 = data_2821_V_read2891_rewind_reg_65373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2822_V_read2892_phi_phi_fu_107383_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2822_V_read2892_phi_phi_fu_107383_p4 = ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_65391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2822_V_read2892_phi_phi_fu_107383_p4 = data_2822_V_read.read();
        } else {
            ap_phi_mux_data_2822_V_read2892_phi_phi_fu_107383_p4 = ap_phi_reg_pp0_iter0_data_2822_V_read2892_phi_reg_107379.read();
        }
    } else {
        ap_phi_mux_data_2822_V_read2892_phi_phi_fu_107383_p4 = ap_phi_reg_pp0_iter0_data_2822_V_read2892_phi_reg_107379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_65391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_65391_p6 = data_2822_V_read2892_phi_reg_107379.read();
    } else {
        ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_65391_p6 = data_2822_V_read2892_rewind_reg_65387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2823_V_read2893_phi_phi_fu_107396_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2823_V_read2893_phi_phi_fu_107396_p4 = ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_65405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2823_V_read2893_phi_phi_fu_107396_p4 = data_2823_V_read.read();
        } else {
            ap_phi_mux_data_2823_V_read2893_phi_phi_fu_107396_p4 = ap_phi_reg_pp0_iter0_data_2823_V_read2893_phi_reg_107392.read();
        }
    } else {
        ap_phi_mux_data_2823_V_read2893_phi_phi_fu_107396_p4 = ap_phi_reg_pp0_iter0_data_2823_V_read2893_phi_reg_107392.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_65405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_65405_p6 = data_2823_V_read2893_phi_reg_107392.read();
    } else {
        ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_65405_p6 = data_2823_V_read2893_rewind_reg_65401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2824_V_read2894_phi_phi_fu_107409_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2824_V_read2894_phi_phi_fu_107409_p4 = ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_65419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2824_V_read2894_phi_phi_fu_107409_p4 = data_2824_V_read.read();
        } else {
            ap_phi_mux_data_2824_V_read2894_phi_phi_fu_107409_p4 = ap_phi_reg_pp0_iter0_data_2824_V_read2894_phi_reg_107405.read();
        }
    } else {
        ap_phi_mux_data_2824_V_read2894_phi_phi_fu_107409_p4 = ap_phi_reg_pp0_iter0_data_2824_V_read2894_phi_reg_107405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_65419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_65419_p6 = data_2824_V_read2894_phi_reg_107405.read();
    } else {
        ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_65419_p6 = data_2824_V_read2894_rewind_reg_65415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2825_V_read2895_phi_phi_fu_107422_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2825_V_read2895_phi_phi_fu_107422_p4 = ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_65433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2825_V_read2895_phi_phi_fu_107422_p4 = data_2825_V_read.read();
        } else {
            ap_phi_mux_data_2825_V_read2895_phi_phi_fu_107422_p4 = ap_phi_reg_pp0_iter0_data_2825_V_read2895_phi_reg_107418.read();
        }
    } else {
        ap_phi_mux_data_2825_V_read2895_phi_phi_fu_107422_p4 = ap_phi_reg_pp0_iter0_data_2825_V_read2895_phi_reg_107418.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_65433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_65433_p6 = data_2825_V_read2895_phi_reg_107418.read();
    } else {
        ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_65433_p6 = data_2825_V_read2895_rewind_reg_65429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2826_V_read2896_phi_phi_fu_107435_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2826_V_read2896_phi_phi_fu_107435_p4 = ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_65447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2826_V_read2896_phi_phi_fu_107435_p4 = data_2826_V_read.read();
        } else {
            ap_phi_mux_data_2826_V_read2896_phi_phi_fu_107435_p4 = ap_phi_reg_pp0_iter0_data_2826_V_read2896_phi_reg_107431.read();
        }
    } else {
        ap_phi_mux_data_2826_V_read2896_phi_phi_fu_107435_p4 = ap_phi_reg_pp0_iter0_data_2826_V_read2896_phi_reg_107431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_65447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_65447_p6 = data_2826_V_read2896_phi_reg_107431.read();
    } else {
        ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_65447_p6 = data_2826_V_read2896_rewind_reg_65443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2827_V_read2897_phi_phi_fu_107448_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2827_V_read2897_phi_phi_fu_107448_p4 = ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_65461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2827_V_read2897_phi_phi_fu_107448_p4 = data_2827_V_read.read();
        } else {
            ap_phi_mux_data_2827_V_read2897_phi_phi_fu_107448_p4 = ap_phi_reg_pp0_iter0_data_2827_V_read2897_phi_reg_107444.read();
        }
    } else {
        ap_phi_mux_data_2827_V_read2897_phi_phi_fu_107448_p4 = ap_phi_reg_pp0_iter0_data_2827_V_read2897_phi_reg_107444.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_65461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_65461_p6 = data_2827_V_read2897_phi_reg_107444.read();
    } else {
        ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_65461_p6 = data_2827_V_read2897_rewind_reg_65457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2828_V_read2898_phi_phi_fu_107461_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2828_V_read2898_phi_phi_fu_107461_p4 = ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_65475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2828_V_read2898_phi_phi_fu_107461_p4 = data_2828_V_read.read();
        } else {
            ap_phi_mux_data_2828_V_read2898_phi_phi_fu_107461_p4 = ap_phi_reg_pp0_iter0_data_2828_V_read2898_phi_reg_107457.read();
        }
    } else {
        ap_phi_mux_data_2828_V_read2898_phi_phi_fu_107461_p4 = ap_phi_reg_pp0_iter0_data_2828_V_read2898_phi_reg_107457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_65475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_65475_p6 = data_2828_V_read2898_phi_reg_107457.read();
    } else {
        ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_65475_p6 = data_2828_V_read2898_rewind_reg_65471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2829_V_read2899_phi_phi_fu_107474_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2829_V_read2899_phi_phi_fu_107474_p4 = ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_65489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2829_V_read2899_phi_phi_fu_107474_p4 = data_2829_V_read.read();
        } else {
            ap_phi_mux_data_2829_V_read2899_phi_phi_fu_107474_p4 = ap_phi_reg_pp0_iter0_data_2829_V_read2899_phi_reg_107470.read();
        }
    } else {
        ap_phi_mux_data_2829_V_read2899_phi_phi_fu_107474_p4 = ap_phi_reg_pp0_iter0_data_2829_V_read2899_phi_reg_107470.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_65489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_65489_p6 = data_2829_V_read2899_phi_reg_107470.read();
    } else {
        ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_65489_p6 = data_2829_V_read2899_rewind_reg_65485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_282_V_read352_phi_phi_fu_74363_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_282_V_read352_phi_phi_fu_74363_p4 = ap_phi_mux_data_282_V_read352_rewind_phi_fu_29831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_282_V_read352_phi_phi_fu_74363_p4 = data_282_V_read.read();
        } else {
            ap_phi_mux_data_282_V_read352_phi_phi_fu_74363_p4 = ap_phi_reg_pp0_iter0_data_282_V_read352_phi_reg_74359.read();
        }
    } else {
        ap_phi_mux_data_282_V_read352_phi_phi_fu_74363_p4 = ap_phi_reg_pp0_iter0_data_282_V_read352_phi_reg_74359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_282_V_read352_rewind_phi_fu_29831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_282_V_read352_rewind_phi_fu_29831_p6 = data_282_V_read352_phi_reg_74359.read();
    } else {
        ap_phi_mux_data_282_V_read352_rewind_phi_fu_29831_p6 = data_282_V_read352_rewind_reg_29827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2830_V_read2900_phi_phi_fu_107487_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2830_V_read2900_phi_phi_fu_107487_p4 = ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_65503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2830_V_read2900_phi_phi_fu_107487_p4 = data_2830_V_read.read();
        } else {
            ap_phi_mux_data_2830_V_read2900_phi_phi_fu_107487_p4 = ap_phi_reg_pp0_iter0_data_2830_V_read2900_phi_reg_107483.read();
        }
    } else {
        ap_phi_mux_data_2830_V_read2900_phi_phi_fu_107487_p4 = ap_phi_reg_pp0_iter0_data_2830_V_read2900_phi_reg_107483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_65503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_65503_p6 = data_2830_V_read2900_phi_reg_107483.read();
    } else {
        ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_65503_p6 = data_2830_V_read2900_rewind_reg_65499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2831_V_read2901_phi_phi_fu_107500_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2831_V_read2901_phi_phi_fu_107500_p4 = ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_65517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2831_V_read2901_phi_phi_fu_107500_p4 = data_2831_V_read.read();
        } else {
            ap_phi_mux_data_2831_V_read2901_phi_phi_fu_107500_p4 = ap_phi_reg_pp0_iter0_data_2831_V_read2901_phi_reg_107496.read();
        }
    } else {
        ap_phi_mux_data_2831_V_read2901_phi_phi_fu_107500_p4 = ap_phi_reg_pp0_iter0_data_2831_V_read2901_phi_reg_107496.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_65517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_65517_p6 = data_2831_V_read2901_phi_reg_107496.read();
    } else {
        ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_65517_p6 = data_2831_V_read2901_rewind_reg_65513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2832_V_read2902_phi_phi_fu_107513_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2832_V_read2902_phi_phi_fu_107513_p4 = ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_65531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2832_V_read2902_phi_phi_fu_107513_p4 = data_2832_V_read.read();
        } else {
            ap_phi_mux_data_2832_V_read2902_phi_phi_fu_107513_p4 = ap_phi_reg_pp0_iter0_data_2832_V_read2902_phi_reg_107509.read();
        }
    } else {
        ap_phi_mux_data_2832_V_read2902_phi_phi_fu_107513_p4 = ap_phi_reg_pp0_iter0_data_2832_V_read2902_phi_reg_107509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_65531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_65531_p6 = data_2832_V_read2902_phi_reg_107509.read();
    } else {
        ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_65531_p6 = data_2832_V_read2902_rewind_reg_65527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2833_V_read2903_phi_phi_fu_107526_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2833_V_read2903_phi_phi_fu_107526_p4 = ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_65545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2833_V_read2903_phi_phi_fu_107526_p4 = data_2833_V_read.read();
        } else {
            ap_phi_mux_data_2833_V_read2903_phi_phi_fu_107526_p4 = ap_phi_reg_pp0_iter0_data_2833_V_read2903_phi_reg_107522.read();
        }
    } else {
        ap_phi_mux_data_2833_V_read2903_phi_phi_fu_107526_p4 = ap_phi_reg_pp0_iter0_data_2833_V_read2903_phi_reg_107522.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_65545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_65545_p6 = data_2833_V_read2903_phi_reg_107522.read();
    } else {
        ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_65545_p6 = data_2833_V_read2903_rewind_reg_65541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2834_V_read2904_phi_phi_fu_107539_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2834_V_read2904_phi_phi_fu_107539_p4 = ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_65559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2834_V_read2904_phi_phi_fu_107539_p4 = data_2834_V_read.read();
        } else {
            ap_phi_mux_data_2834_V_read2904_phi_phi_fu_107539_p4 = ap_phi_reg_pp0_iter0_data_2834_V_read2904_phi_reg_107535.read();
        }
    } else {
        ap_phi_mux_data_2834_V_read2904_phi_phi_fu_107539_p4 = ap_phi_reg_pp0_iter0_data_2834_V_read2904_phi_reg_107535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_65559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_65559_p6 = data_2834_V_read2904_phi_reg_107535.read();
    } else {
        ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_65559_p6 = data_2834_V_read2904_rewind_reg_65555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2835_V_read2905_phi_phi_fu_107552_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2835_V_read2905_phi_phi_fu_107552_p4 = ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_65573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2835_V_read2905_phi_phi_fu_107552_p4 = data_2835_V_read.read();
        } else {
            ap_phi_mux_data_2835_V_read2905_phi_phi_fu_107552_p4 = ap_phi_reg_pp0_iter0_data_2835_V_read2905_phi_reg_107548.read();
        }
    } else {
        ap_phi_mux_data_2835_V_read2905_phi_phi_fu_107552_p4 = ap_phi_reg_pp0_iter0_data_2835_V_read2905_phi_reg_107548.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_65573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_65573_p6 = data_2835_V_read2905_phi_reg_107548.read();
    } else {
        ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_65573_p6 = data_2835_V_read2905_rewind_reg_65569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2836_V_read2906_phi_phi_fu_107565_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2836_V_read2906_phi_phi_fu_107565_p4 = ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_65587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2836_V_read2906_phi_phi_fu_107565_p4 = data_2836_V_read.read();
        } else {
            ap_phi_mux_data_2836_V_read2906_phi_phi_fu_107565_p4 = ap_phi_reg_pp0_iter0_data_2836_V_read2906_phi_reg_107561.read();
        }
    } else {
        ap_phi_mux_data_2836_V_read2906_phi_phi_fu_107565_p4 = ap_phi_reg_pp0_iter0_data_2836_V_read2906_phi_reg_107561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_65587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_65587_p6 = data_2836_V_read2906_phi_reg_107561.read();
    } else {
        ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_65587_p6 = data_2836_V_read2906_rewind_reg_65583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2837_V_read2907_phi_phi_fu_107578_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2837_V_read2907_phi_phi_fu_107578_p4 = ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_65601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2837_V_read2907_phi_phi_fu_107578_p4 = data_2837_V_read.read();
        } else {
            ap_phi_mux_data_2837_V_read2907_phi_phi_fu_107578_p4 = ap_phi_reg_pp0_iter0_data_2837_V_read2907_phi_reg_107574.read();
        }
    } else {
        ap_phi_mux_data_2837_V_read2907_phi_phi_fu_107578_p4 = ap_phi_reg_pp0_iter0_data_2837_V_read2907_phi_reg_107574.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_65601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_65601_p6 = data_2837_V_read2907_phi_reg_107574.read();
    } else {
        ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_65601_p6 = data_2837_V_read2907_rewind_reg_65597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2838_V_read2908_phi_phi_fu_107591_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2838_V_read2908_phi_phi_fu_107591_p4 = ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_65615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2838_V_read2908_phi_phi_fu_107591_p4 = data_2838_V_read.read();
        } else {
            ap_phi_mux_data_2838_V_read2908_phi_phi_fu_107591_p4 = ap_phi_reg_pp0_iter0_data_2838_V_read2908_phi_reg_107587.read();
        }
    } else {
        ap_phi_mux_data_2838_V_read2908_phi_phi_fu_107591_p4 = ap_phi_reg_pp0_iter0_data_2838_V_read2908_phi_reg_107587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_65615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_65615_p6 = data_2838_V_read2908_phi_reg_107587.read();
    } else {
        ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_65615_p6 = data_2838_V_read2908_rewind_reg_65611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2839_V_read2909_phi_phi_fu_107604_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2839_V_read2909_phi_phi_fu_107604_p4 = ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_65629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2839_V_read2909_phi_phi_fu_107604_p4 = data_2839_V_read.read();
        } else {
            ap_phi_mux_data_2839_V_read2909_phi_phi_fu_107604_p4 = ap_phi_reg_pp0_iter0_data_2839_V_read2909_phi_reg_107600.read();
        }
    } else {
        ap_phi_mux_data_2839_V_read2909_phi_phi_fu_107604_p4 = ap_phi_reg_pp0_iter0_data_2839_V_read2909_phi_reg_107600.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_65629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_65629_p6 = data_2839_V_read2909_phi_reg_107600.read();
    } else {
        ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_65629_p6 = data_2839_V_read2909_rewind_reg_65625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_283_V_read353_phi_phi_fu_74376_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_283_V_read353_phi_phi_fu_74376_p4 = ap_phi_mux_data_283_V_read353_rewind_phi_fu_29845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_283_V_read353_phi_phi_fu_74376_p4 = data_283_V_read.read();
        } else {
            ap_phi_mux_data_283_V_read353_phi_phi_fu_74376_p4 = ap_phi_reg_pp0_iter0_data_283_V_read353_phi_reg_74372.read();
        }
    } else {
        ap_phi_mux_data_283_V_read353_phi_phi_fu_74376_p4 = ap_phi_reg_pp0_iter0_data_283_V_read353_phi_reg_74372.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_283_V_read353_rewind_phi_fu_29845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_283_V_read353_rewind_phi_fu_29845_p6 = data_283_V_read353_phi_reg_74372.read();
    } else {
        ap_phi_mux_data_283_V_read353_rewind_phi_fu_29845_p6 = data_283_V_read353_rewind_reg_29841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2840_V_read2910_phi_phi_fu_107617_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2840_V_read2910_phi_phi_fu_107617_p4 = ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_65643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2840_V_read2910_phi_phi_fu_107617_p4 = data_2840_V_read.read();
        } else {
            ap_phi_mux_data_2840_V_read2910_phi_phi_fu_107617_p4 = ap_phi_reg_pp0_iter0_data_2840_V_read2910_phi_reg_107613.read();
        }
    } else {
        ap_phi_mux_data_2840_V_read2910_phi_phi_fu_107617_p4 = ap_phi_reg_pp0_iter0_data_2840_V_read2910_phi_reg_107613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_65643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_65643_p6 = data_2840_V_read2910_phi_reg_107613.read();
    } else {
        ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_65643_p6 = data_2840_V_read2910_rewind_reg_65639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2841_V_read2911_phi_phi_fu_107630_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2841_V_read2911_phi_phi_fu_107630_p4 = ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_65657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2841_V_read2911_phi_phi_fu_107630_p4 = data_2841_V_read.read();
        } else {
            ap_phi_mux_data_2841_V_read2911_phi_phi_fu_107630_p4 = ap_phi_reg_pp0_iter0_data_2841_V_read2911_phi_reg_107626.read();
        }
    } else {
        ap_phi_mux_data_2841_V_read2911_phi_phi_fu_107630_p4 = ap_phi_reg_pp0_iter0_data_2841_V_read2911_phi_reg_107626.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_65657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_65657_p6 = data_2841_V_read2911_phi_reg_107626.read();
    } else {
        ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_65657_p6 = data_2841_V_read2911_rewind_reg_65653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2842_V_read2912_phi_phi_fu_107643_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2842_V_read2912_phi_phi_fu_107643_p4 = ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_65671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2842_V_read2912_phi_phi_fu_107643_p4 = data_2842_V_read.read();
        } else {
            ap_phi_mux_data_2842_V_read2912_phi_phi_fu_107643_p4 = ap_phi_reg_pp0_iter0_data_2842_V_read2912_phi_reg_107639.read();
        }
    } else {
        ap_phi_mux_data_2842_V_read2912_phi_phi_fu_107643_p4 = ap_phi_reg_pp0_iter0_data_2842_V_read2912_phi_reg_107639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_65671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_65671_p6 = data_2842_V_read2912_phi_reg_107639.read();
    } else {
        ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_65671_p6 = data_2842_V_read2912_rewind_reg_65667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2843_V_read2913_phi_phi_fu_107656_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2843_V_read2913_phi_phi_fu_107656_p4 = ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_65685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2843_V_read2913_phi_phi_fu_107656_p4 = data_2843_V_read.read();
        } else {
            ap_phi_mux_data_2843_V_read2913_phi_phi_fu_107656_p4 = ap_phi_reg_pp0_iter0_data_2843_V_read2913_phi_reg_107652.read();
        }
    } else {
        ap_phi_mux_data_2843_V_read2913_phi_phi_fu_107656_p4 = ap_phi_reg_pp0_iter0_data_2843_V_read2913_phi_reg_107652.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_65685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_65685_p6 = data_2843_V_read2913_phi_reg_107652.read();
    } else {
        ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_65685_p6 = data_2843_V_read2913_rewind_reg_65681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2844_V_read2914_phi_phi_fu_107669_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2844_V_read2914_phi_phi_fu_107669_p4 = ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_65699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2844_V_read2914_phi_phi_fu_107669_p4 = data_2844_V_read.read();
        } else {
            ap_phi_mux_data_2844_V_read2914_phi_phi_fu_107669_p4 = ap_phi_reg_pp0_iter0_data_2844_V_read2914_phi_reg_107665.read();
        }
    } else {
        ap_phi_mux_data_2844_V_read2914_phi_phi_fu_107669_p4 = ap_phi_reg_pp0_iter0_data_2844_V_read2914_phi_reg_107665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_65699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_65699_p6 = data_2844_V_read2914_phi_reg_107665.read();
    } else {
        ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_65699_p6 = data_2844_V_read2914_rewind_reg_65695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2845_V_read2915_phi_phi_fu_107682_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2845_V_read2915_phi_phi_fu_107682_p4 = ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_65713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2845_V_read2915_phi_phi_fu_107682_p4 = data_2845_V_read.read();
        } else {
            ap_phi_mux_data_2845_V_read2915_phi_phi_fu_107682_p4 = ap_phi_reg_pp0_iter0_data_2845_V_read2915_phi_reg_107678.read();
        }
    } else {
        ap_phi_mux_data_2845_V_read2915_phi_phi_fu_107682_p4 = ap_phi_reg_pp0_iter0_data_2845_V_read2915_phi_reg_107678.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_65713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_65713_p6 = data_2845_V_read2915_phi_reg_107678.read();
    } else {
        ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_65713_p6 = data_2845_V_read2915_rewind_reg_65709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2846_V_read2916_phi_phi_fu_107695_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2846_V_read2916_phi_phi_fu_107695_p4 = ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_65727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2846_V_read2916_phi_phi_fu_107695_p4 = data_2846_V_read.read();
        } else {
            ap_phi_mux_data_2846_V_read2916_phi_phi_fu_107695_p4 = ap_phi_reg_pp0_iter0_data_2846_V_read2916_phi_reg_107691.read();
        }
    } else {
        ap_phi_mux_data_2846_V_read2916_phi_phi_fu_107695_p4 = ap_phi_reg_pp0_iter0_data_2846_V_read2916_phi_reg_107691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_65727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_65727_p6 = data_2846_V_read2916_phi_reg_107691.read();
    } else {
        ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_65727_p6 = data_2846_V_read2916_rewind_reg_65723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2847_V_read2917_phi_phi_fu_107708_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2847_V_read2917_phi_phi_fu_107708_p4 = ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_65741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2847_V_read2917_phi_phi_fu_107708_p4 = data_2847_V_read.read();
        } else {
            ap_phi_mux_data_2847_V_read2917_phi_phi_fu_107708_p4 = ap_phi_reg_pp0_iter0_data_2847_V_read2917_phi_reg_107704.read();
        }
    } else {
        ap_phi_mux_data_2847_V_read2917_phi_phi_fu_107708_p4 = ap_phi_reg_pp0_iter0_data_2847_V_read2917_phi_reg_107704.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_65741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_65741_p6 = data_2847_V_read2917_phi_reg_107704.read();
    } else {
        ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_65741_p6 = data_2847_V_read2917_rewind_reg_65737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2848_V_read2918_phi_phi_fu_107721_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2848_V_read2918_phi_phi_fu_107721_p4 = ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_65755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2848_V_read2918_phi_phi_fu_107721_p4 = data_2848_V_read.read();
        } else {
            ap_phi_mux_data_2848_V_read2918_phi_phi_fu_107721_p4 = ap_phi_reg_pp0_iter0_data_2848_V_read2918_phi_reg_107717.read();
        }
    } else {
        ap_phi_mux_data_2848_V_read2918_phi_phi_fu_107721_p4 = ap_phi_reg_pp0_iter0_data_2848_V_read2918_phi_reg_107717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_65755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_65755_p6 = data_2848_V_read2918_phi_reg_107717.read();
    } else {
        ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_65755_p6 = data_2848_V_read2918_rewind_reg_65751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2849_V_read2919_phi_phi_fu_107734_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2849_V_read2919_phi_phi_fu_107734_p4 = ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_65769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2849_V_read2919_phi_phi_fu_107734_p4 = data_2849_V_read.read();
        } else {
            ap_phi_mux_data_2849_V_read2919_phi_phi_fu_107734_p4 = ap_phi_reg_pp0_iter0_data_2849_V_read2919_phi_reg_107730.read();
        }
    } else {
        ap_phi_mux_data_2849_V_read2919_phi_phi_fu_107734_p4 = ap_phi_reg_pp0_iter0_data_2849_V_read2919_phi_reg_107730.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_65769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_65769_p6 = data_2849_V_read2919_phi_reg_107730.read();
    } else {
        ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_65769_p6 = data_2849_V_read2919_rewind_reg_65765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_284_V_read354_phi_phi_fu_74389_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_284_V_read354_phi_phi_fu_74389_p4 = ap_phi_mux_data_284_V_read354_rewind_phi_fu_29859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_284_V_read354_phi_phi_fu_74389_p4 = data_284_V_read.read();
        } else {
            ap_phi_mux_data_284_V_read354_phi_phi_fu_74389_p4 = ap_phi_reg_pp0_iter0_data_284_V_read354_phi_reg_74385.read();
        }
    } else {
        ap_phi_mux_data_284_V_read354_phi_phi_fu_74389_p4 = ap_phi_reg_pp0_iter0_data_284_V_read354_phi_reg_74385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_284_V_read354_rewind_phi_fu_29859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_284_V_read354_rewind_phi_fu_29859_p6 = data_284_V_read354_phi_reg_74385.read();
    } else {
        ap_phi_mux_data_284_V_read354_rewind_phi_fu_29859_p6 = data_284_V_read354_rewind_reg_29855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2850_V_read2920_phi_phi_fu_107747_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2850_V_read2920_phi_phi_fu_107747_p4 = ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_65783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2850_V_read2920_phi_phi_fu_107747_p4 = data_2850_V_read.read();
        } else {
            ap_phi_mux_data_2850_V_read2920_phi_phi_fu_107747_p4 = ap_phi_reg_pp0_iter0_data_2850_V_read2920_phi_reg_107743.read();
        }
    } else {
        ap_phi_mux_data_2850_V_read2920_phi_phi_fu_107747_p4 = ap_phi_reg_pp0_iter0_data_2850_V_read2920_phi_reg_107743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_65783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_65783_p6 = data_2850_V_read2920_phi_reg_107743.read();
    } else {
        ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_65783_p6 = data_2850_V_read2920_rewind_reg_65779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2851_V_read2921_phi_phi_fu_107760_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2851_V_read2921_phi_phi_fu_107760_p4 = ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_65797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2851_V_read2921_phi_phi_fu_107760_p4 = data_2851_V_read.read();
        } else {
            ap_phi_mux_data_2851_V_read2921_phi_phi_fu_107760_p4 = ap_phi_reg_pp0_iter0_data_2851_V_read2921_phi_reg_107756.read();
        }
    } else {
        ap_phi_mux_data_2851_V_read2921_phi_phi_fu_107760_p4 = ap_phi_reg_pp0_iter0_data_2851_V_read2921_phi_reg_107756.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_65797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_65797_p6 = data_2851_V_read2921_phi_reg_107756.read();
    } else {
        ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_65797_p6 = data_2851_V_read2921_rewind_reg_65793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2852_V_read2922_phi_phi_fu_107773_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2852_V_read2922_phi_phi_fu_107773_p4 = ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_65811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2852_V_read2922_phi_phi_fu_107773_p4 = data_2852_V_read.read();
        } else {
            ap_phi_mux_data_2852_V_read2922_phi_phi_fu_107773_p4 = ap_phi_reg_pp0_iter0_data_2852_V_read2922_phi_reg_107769.read();
        }
    } else {
        ap_phi_mux_data_2852_V_read2922_phi_phi_fu_107773_p4 = ap_phi_reg_pp0_iter0_data_2852_V_read2922_phi_reg_107769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_65811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_65811_p6 = data_2852_V_read2922_phi_reg_107769.read();
    } else {
        ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_65811_p6 = data_2852_V_read2922_rewind_reg_65807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2853_V_read2923_phi_phi_fu_107786_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2853_V_read2923_phi_phi_fu_107786_p4 = ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_65825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2853_V_read2923_phi_phi_fu_107786_p4 = data_2853_V_read.read();
        } else {
            ap_phi_mux_data_2853_V_read2923_phi_phi_fu_107786_p4 = ap_phi_reg_pp0_iter0_data_2853_V_read2923_phi_reg_107782.read();
        }
    } else {
        ap_phi_mux_data_2853_V_read2923_phi_phi_fu_107786_p4 = ap_phi_reg_pp0_iter0_data_2853_V_read2923_phi_reg_107782.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_65825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_65825_p6 = data_2853_V_read2923_phi_reg_107782.read();
    } else {
        ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_65825_p6 = data_2853_V_read2923_rewind_reg_65821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2854_V_read2924_phi_phi_fu_107799_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2854_V_read2924_phi_phi_fu_107799_p4 = ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_65839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2854_V_read2924_phi_phi_fu_107799_p4 = data_2854_V_read.read();
        } else {
            ap_phi_mux_data_2854_V_read2924_phi_phi_fu_107799_p4 = ap_phi_reg_pp0_iter0_data_2854_V_read2924_phi_reg_107795.read();
        }
    } else {
        ap_phi_mux_data_2854_V_read2924_phi_phi_fu_107799_p4 = ap_phi_reg_pp0_iter0_data_2854_V_read2924_phi_reg_107795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_65839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_65839_p6 = data_2854_V_read2924_phi_reg_107795.read();
    } else {
        ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_65839_p6 = data_2854_V_read2924_rewind_reg_65835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2855_V_read2925_phi_phi_fu_107812_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2855_V_read2925_phi_phi_fu_107812_p4 = ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_65853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2855_V_read2925_phi_phi_fu_107812_p4 = data_2855_V_read.read();
        } else {
            ap_phi_mux_data_2855_V_read2925_phi_phi_fu_107812_p4 = ap_phi_reg_pp0_iter0_data_2855_V_read2925_phi_reg_107808.read();
        }
    } else {
        ap_phi_mux_data_2855_V_read2925_phi_phi_fu_107812_p4 = ap_phi_reg_pp0_iter0_data_2855_V_read2925_phi_reg_107808.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_65853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_65853_p6 = data_2855_V_read2925_phi_reg_107808.read();
    } else {
        ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_65853_p6 = data_2855_V_read2925_rewind_reg_65849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2856_V_read2926_phi_phi_fu_107825_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2856_V_read2926_phi_phi_fu_107825_p4 = ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_65867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2856_V_read2926_phi_phi_fu_107825_p4 = data_2856_V_read.read();
        } else {
            ap_phi_mux_data_2856_V_read2926_phi_phi_fu_107825_p4 = ap_phi_reg_pp0_iter0_data_2856_V_read2926_phi_reg_107821.read();
        }
    } else {
        ap_phi_mux_data_2856_V_read2926_phi_phi_fu_107825_p4 = ap_phi_reg_pp0_iter0_data_2856_V_read2926_phi_reg_107821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_65867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_65867_p6 = data_2856_V_read2926_phi_reg_107821.read();
    } else {
        ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_65867_p6 = data_2856_V_read2926_rewind_reg_65863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2857_V_read2927_phi_phi_fu_107838_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2857_V_read2927_phi_phi_fu_107838_p4 = ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_65881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2857_V_read2927_phi_phi_fu_107838_p4 = data_2857_V_read.read();
        } else {
            ap_phi_mux_data_2857_V_read2927_phi_phi_fu_107838_p4 = ap_phi_reg_pp0_iter0_data_2857_V_read2927_phi_reg_107834.read();
        }
    } else {
        ap_phi_mux_data_2857_V_read2927_phi_phi_fu_107838_p4 = ap_phi_reg_pp0_iter0_data_2857_V_read2927_phi_reg_107834.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_65881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_65881_p6 = data_2857_V_read2927_phi_reg_107834.read();
    } else {
        ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_65881_p6 = data_2857_V_read2927_rewind_reg_65877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2858_V_read2928_phi_phi_fu_107851_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2858_V_read2928_phi_phi_fu_107851_p4 = ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_65895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2858_V_read2928_phi_phi_fu_107851_p4 = data_2858_V_read.read();
        } else {
            ap_phi_mux_data_2858_V_read2928_phi_phi_fu_107851_p4 = ap_phi_reg_pp0_iter0_data_2858_V_read2928_phi_reg_107847.read();
        }
    } else {
        ap_phi_mux_data_2858_V_read2928_phi_phi_fu_107851_p4 = ap_phi_reg_pp0_iter0_data_2858_V_read2928_phi_reg_107847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_65895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_65895_p6 = data_2858_V_read2928_phi_reg_107847.read();
    } else {
        ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_65895_p6 = data_2858_V_read2928_rewind_reg_65891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2859_V_read2929_phi_phi_fu_107864_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2859_V_read2929_phi_phi_fu_107864_p4 = ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_65909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2859_V_read2929_phi_phi_fu_107864_p4 = data_2859_V_read.read();
        } else {
            ap_phi_mux_data_2859_V_read2929_phi_phi_fu_107864_p4 = ap_phi_reg_pp0_iter0_data_2859_V_read2929_phi_reg_107860.read();
        }
    } else {
        ap_phi_mux_data_2859_V_read2929_phi_phi_fu_107864_p4 = ap_phi_reg_pp0_iter0_data_2859_V_read2929_phi_reg_107860.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_65909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_65909_p6 = data_2859_V_read2929_phi_reg_107860.read();
    } else {
        ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_65909_p6 = data_2859_V_read2929_rewind_reg_65905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_285_V_read355_phi_phi_fu_74402_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_285_V_read355_phi_phi_fu_74402_p4 = ap_phi_mux_data_285_V_read355_rewind_phi_fu_29873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_285_V_read355_phi_phi_fu_74402_p4 = data_285_V_read.read();
        } else {
            ap_phi_mux_data_285_V_read355_phi_phi_fu_74402_p4 = ap_phi_reg_pp0_iter0_data_285_V_read355_phi_reg_74398.read();
        }
    } else {
        ap_phi_mux_data_285_V_read355_phi_phi_fu_74402_p4 = ap_phi_reg_pp0_iter0_data_285_V_read355_phi_reg_74398.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_285_V_read355_rewind_phi_fu_29873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_285_V_read355_rewind_phi_fu_29873_p6 = data_285_V_read355_phi_reg_74398.read();
    } else {
        ap_phi_mux_data_285_V_read355_rewind_phi_fu_29873_p6 = data_285_V_read355_rewind_reg_29869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2860_V_read2930_phi_phi_fu_107877_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2860_V_read2930_phi_phi_fu_107877_p4 = ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_65923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2860_V_read2930_phi_phi_fu_107877_p4 = data_2860_V_read.read();
        } else {
            ap_phi_mux_data_2860_V_read2930_phi_phi_fu_107877_p4 = ap_phi_reg_pp0_iter0_data_2860_V_read2930_phi_reg_107873.read();
        }
    } else {
        ap_phi_mux_data_2860_V_read2930_phi_phi_fu_107877_p4 = ap_phi_reg_pp0_iter0_data_2860_V_read2930_phi_reg_107873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_65923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_65923_p6 = data_2860_V_read2930_phi_reg_107873.read();
    } else {
        ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_65923_p6 = data_2860_V_read2930_rewind_reg_65919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2861_V_read2931_phi_phi_fu_107890_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2861_V_read2931_phi_phi_fu_107890_p4 = ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_65937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2861_V_read2931_phi_phi_fu_107890_p4 = data_2861_V_read.read();
        } else {
            ap_phi_mux_data_2861_V_read2931_phi_phi_fu_107890_p4 = ap_phi_reg_pp0_iter0_data_2861_V_read2931_phi_reg_107886.read();
        }
    } else {
        ap_phi_mux_data_2861_V_read2931_phi_phi_fu_107890_p4 = ap_phi_reg_pp0_iter0_data_2861_V_read2931_phi_reg_107886.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_65937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_65937_p6 = data_2861_V_read2931_phi_reg_107886.read();
    } else {
        ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_65937_p6 = data_2861_V_read2931_rewind_reg_65933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2862_V_read2932_phi_phi_fu_107903_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2862_V_read2932_phi_phi_fu_107903_p4 = ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_65951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2862_V_read2932_phi_phi_fu_107903_p4 = data_2862_V_read.read();
        } else {
            ap_phi_mux_data_2862_V_read2932_phi_phi_fu_107903_p4 = ap_phi_reg_pp0_iter0_data_2862_V_read2932_phi_reg_107899.read();
        }
    } else {
        ap_phi_mux_data_2862_V_read2932_phi_phi_fu_107903_p4 = ap_phi_reg_pp0_iter0_data_2862_V_read2932_phi_reg_107899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_65951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_65951_p6 = data_2862_V_read2932_phi_reg_107899.read();
    } else {
        ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_65951_p6 = data_2862_V_read2932_rewind_reg_65947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2863_V_read2933_phi_phi_fu_107916_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2863_V_read2933_phi_phi_fu_107916_p4 = ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_65965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2863_V_read2933_phi_phi_fu_107916_p4 = data_2863_V_read.read();
        } else {
            ap_phi_mux_data_2863_V_read2933_phi_phi_fu_107916_p4 = ap_phi_reg_pp0_iter0_data_2863_V_read2933_phi_reg_107912.read();
        }
    } else {
        ap_phi_mux_data_2863_V_read2933_phi_phi_fu_107916_p4 = ap_phi_reg_pp0_iter0_data_2863_V_read2933_phi_reg_107912.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_65965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_65965_p6 = data_2863_V_read2933_phi_reg_107912.read();
    } else {
        ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_65965_p6 = data_2863_V_read2933_rewind_reg_65961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2864_V_read2934_phi_phi_fu_107929_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2864_V_read2934_phi_phi_fu_107929_p4 = ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_65979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2864_V_read2934_phi_phi_fu_107929_p4 = data_2864_V_read.read();
        } else {
            ap_phi_mux_data_2864_V_read2934_phi_phi_fu_107929_p4 = ap_phi_reg_pp0_iter0_data_2864_V_read2934_phi_reg_107925.read();
        }
    } else {
        ap_phi_mux_data_2864_V_read2934_phi_phi_fu_107929_p4 = ap_phi_reg_pp0_iter0_data_2864_V_read2934_phi_reg_107925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_65979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_65979_p6 = data_2864_V_read2934_phi_reg_107925.read();
    } else {
        ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_65979_p6 = data_2864_V_read2934_rewind_reg_65975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2865_V_read2935_phi_phi_fu_107942_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2865_V_read2935_phi_phi_fu_107942_p4 = ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_65993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2865_V_read2935_phi_phi_fu_107942_p4 = data_2865_V_read.read();
        } else {
            ap_phi_mux_data_2865_V_read2935_phi_phi_fu_107942_p4 = ap_phi_reg_pp0_iter0_data_2865_V_read2935_phi_reg_107938.read();
        }
    } else {
        ap_phi_mux_data_2865_V_read2935_phi_phi_fu_107942_p4 = ap_phi_reg_pp0_iter0_data_2865_V_read2935_phi_reg_107938.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_65993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_65993_p6 = data_2865_V_read2935_phi_reg_107938.read();
    } else {
        ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_65993_p6 = data_2865_V_read2935_rewind_reg_65989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2866_V_read2936_phi_phi_fu_107955_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2866_V_read2936_phi_phi_fu_107955_p4 = ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_66007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2866_V_read2936_phi_phi_fu_107955_p4 = data_2866_V_read.read();
        } else {
            ap_phi_mux_data_2866_V_read2936_phi_phi_fu_107955_p4 = ap_phi_reg_pp0_iter0_data_2866_V_read2936_phi_reg_107951.read();
        }
    } else {
        ap_phi_mux_data_2866_V_read2936_phi_phi_fu_107955_p4 = ap_phi_reg_pp0_iter0_data_2866_V_read2936_phi_reg_107951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_66007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_66007_p6 = data_2866_V_read2936_phi_reg_107951.read();
    } else {
        ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_66007_p6 = data_2866_V_read2936_rewind_reg_66003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2867_V_read2937_phi_phi_fu_107968_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2867_V_read2937_phi_phi_fu_107968_p4 = ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_66021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2867_V_read2937_phi_phi_fu_107968_p4 = data_2867_V_read.read();
        } else {
            ap_phi_mux_data_2867_V_read2937_phi_phi_fu_107968_p4 = ap_phi_reg_pp0_iter0_data_2867_V_read2937_phi_reg_107964.read();
        }
    } else {
        ap_phi_mux_data_2867_V_read2937_phi_phi_fu_107968_p4 = ap_phi_reg_pp0_iter0_data_2867_V_read2937_phi_reg_107964.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_66021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_66021_p6 = data_2867_V_read2937_phi_reg_107964.read();
    } else {
        ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_66021_p6 = data_2867_V_read2937_rewind_reg_66017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2868_V_read2938_phi_phi_fu_107981_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2868_V_read2938_phi_phi_fu_107981_p4 = ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_66035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2868_V_read2938_phi_phi_fu_107981_p4 = data_2868_V_read.read();
        } else {
            ap_phi_mux_data_2868_V_read2938_phi_phi_fu_107981_p4 = ap_phi_reg_pp0_iter0_data_2868_V_read2938_phi_reg_107977.read();
        }
    } else {
        ap_phi_mux_data_2868_V_read2938_phi_phi_fu_107981_p4 = ap_phi_reg_pp0_iter0_data_2868_V_read2938_phi_reg_107977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_66035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_66035_p6 = data_2868_V_read2938_phi_reg_107977.read();
    } else {
        ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_66035_p6 = data_2868_V_read2938_rewind_reg_66031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2869_V_read2939_phi_phi_fu_107994_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2869_V_read2939_phi_phi_fu_107994_p4 = ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_66049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2869_V_read2939_phi_phi_fu_107994_p4 = data_2869_V_read.read();
        } else {
            ap_phi_mux_data_2869_V_read2939_phi_phi_fu_107994_p4 = ap_phi_reg_pp0_iter0_data_2869_V_read2939_phi_reg_107990.read();
        }
    } else {
        ap_phi_mux_data_2869_V_read2939_phi_phi_fu_107994_p4 = ap_phi_reg_pp0_iter0_data_2869_V_read2939_phi_reg_107990.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_66049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_66049_p6 = data_2869_V_read2939_phi_reg_107990.read();
    } else {
        ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_66049_p6 = data_2869_V_read2939_rewind_reg_66045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_286_V_read356_phi_phi_fu_74415_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_286_V_read356_phi_phi_fu_74415_p4 = ap_phi_mux_data_286_V_read356_rewind_phi_fu_29887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_286_V_read356_phi_phi_fu_74415_p4 = data_286_V_read.read();
        } else {
            ap_phi_mux_data_286_V_read356_phi_phi_fu_74415_p4 = ap_phi_reg_pp0_iter0_data_286_V_read356_phi_reg_74411.read();
        }
    } else {
        ap_phi_mux_data_286_V_read356_phi_phi_fu_74415_p4 = ap_phi_reg_pp0_iter0_data_286_V_read356_phi_reg_74411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_286_V_read356_rewind_phi_fu_29887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_286_V_read356_rewind_phi_fu_29887_p6 = data_286_V_read356_phi_reg_74411.read();
    } else {
        ap_phi_mux_data_286_V_read356_rewind_phi_fu_29887_p6 = data_286_V_read356_rewind_reg_29883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2870_V_read2940_phi_phi_fu_108007_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2870_V_read2940_phi_phi_fu_108007_p4 = ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_66063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2870_V_read2940_phi_phi_fu_108007_p4 = data_2870_V_read.read();
        } else {
            ap_phi_mux_data_2870_V_read2940_phi_phi_fu_108007_p4 = ap_phi_reg_pp0_iter0_data_2870_V_read2940_phi_reg_108003.read();
        }
    } else {
        ap_phi_mux_data_2870_V_read2940_phi_phi_fu_108007_p4 = ap_phi_reg_pp0_iter0_data_2870_V_read2940_phi_reg_108003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_66063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_66063_p6 = data_2870_V_read2940_phi_reg_108003.read();
    } else {
        ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_66063_p6 = data_2870_V_read2940_rewind_reg_66059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2871_V_read2941_phi_phi_fu_108020_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2871_V_read2941_phi_phi_fu_108020_p4 = ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_66077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2871_V_read2941_phi_phi_fu_108020_p4 = data_2871_V_read.read();
        } else {
            ap_phi_mux_data_2871_V_read2941_phi_phi_fu_108020_p4 = ap_phi_reg_pp0_iter0_data_2871_V_read2941_phi_reg_108016.read();
        }
    } else {
        ap_phi_mux_data_2871_V_read2941_phi_phi_fu_108020_p4 = ap_phi_reg_pp0_iter0_data_2871_V_read2941_phi_reg_108016.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_66077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_66077_p6 = data_2871_V_read2941_phi_reg_108016.read();
    } else {
        ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_66077_p6 = data_2871_V_read2941_rewind_reg_66073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2872_V_read2942_phi_phi_fu_108033_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2872_V_read2942_phi_phi_fu_108033_p4 = ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_66091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2872_V_read2942_phi_phi_fu_108033_p4 = data_2872_V_read.read();
        } else {
            ap_phi_mux_data_2872_V_read2942_phi_phi_fu_108033_p4 = ap_phi_reg_pp0_iter0_data_2872_V_read2942_phi_reg_108029.read();
        }
    } else {
        ap_phi_mux_data_2872_V_read2942_phi_phi_fu_108033_p4 = ap_phi_reg_pp0_iter0_data_2872_V_read2942_phi_reg_108029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_66091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_66091_p6 = data_2872_V_read2942_phi_reg_108029.read();
    } else {
        ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_66091_p6 = data_2872_V_read2942_rewind_reg_66087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2873_V_read2943_phi_phi_fu_108046_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2873_V_read2943_phi_phi_fu_108046_p4 = ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_66105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2873_V_read2943_phi_phi_fu_108046_p4 = data_2873_V_read.read();
        } else {
            ap_phi_mux_data_2873_V_read2943_phi_phi_fu_108046_p4 = ap_phi_reg_pp0_iter0_data_2873_V_read2943_phi_reg_108042.read();
        }
    } else {
        ap_phi_mux_data_2873_V_read2943_phi_phi_fu_108046_p4 = ap_phi_reg_pp0_iter0_data_2873_V_read2943_phi_reg_108042.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_66105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_66105_p6 = data_2873_V_read2943_phi_reg_108042.read();
    } else {
        ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_66105_p6 = data_2873_V_read2943_rewind_reg_66101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2874_V_read2944_phi_phi_fu_108059_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2874_V_read2944_phi_phi_fu_108059_p4 = ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_66119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2874_V_read2944_phi_phi_fu_108059_p4 = data_2874_V_read.read();
        } else {
            ap_phi_mux_data_2874_V_read2944_phi_phi_fu_108059_p4 = ap_phi_reg_pp0_iter0_data_2874_V_read2944_phi_reg_108055.read();
        }
    } else {
        ap_phi_mux_data_2874_V_read2944_phi_phi_fu_108059_p4 = ap_phi_reg_pp0_iter0_data_2874_V_read2944_phi_reg_108055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_66119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_66119_p6 = data_2874_V_read2944_phi_reg_108055.read();
    } else {
        ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_66119_p6 = data_2874_V_read2944_rewind_reg_66115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2875_V_read2945_phi_phi_fu_108072_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2875_V_read2945_phi_phi_fu_108072_p4 = ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_66133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2875_V_read2945_phi_phi_fu_108072_p4 = data_2875_V_read.read();
        } else {
            ap_phi_mux_data_2875_V_read2945_phi_phi_fu_108072_p4 = ap_phi_reg_pp0_iter0_data_2875_V_read2945_phi_reg_108068.read();
        }
    } else {
        ap_phi_mux_data_2875_V_read2945_phi_phi_fu_108072_p4 = ap_phi_reg_pp0_iter0_data_2875_V_read2945_phi_reg_108068.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_66133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_66133_p6 = data_2875_V_read2945_phi_reg_108068.read();
    } else {
        ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_66133_p6 = data_2875_V_read2945_rewind_reg_66129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2876_V_read2946_phi_phi_fu_108085_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2876_V_read2946_phi_phi_fu_108085_p4 = ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_66147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2876_V_read2946_phi_phi_fu_108085_p4 = data_2876_V_read.read();
        } else {
            ap_phi_mux_data_2876_V_read2946_phi_phi_fu_108085_p4 = ap_phi_reg_pp0_iter0_data_2876_V_read2946_phi_reg_108081.read();
        }
    } else {
        ap_phi_mux_data_2876_V_read2946_phi_phi_fu_108085_p4 = ap_phi_reg_pp0_iter0_data_2876_V_read2946_phi_reg_108081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_66147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_66147_p6 = data_2876_V_read2946_phi_reg_108081.read();
    } else {
        ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_66147_p6 = data_2876_V_read2946_rewind_reg_66143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2877_V_read2947_phi_phi_fu_108098_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2877_V_read2947_phi_phi_fu_108098_p4 = ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_66161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2877_V_read2947_phi_phi_fu_108098_p4 = data_2877_V_read.read();
        } else {
            ap_phi_mux_data_2877_V_read2947_phi_phi_fu_108098_p4 = ap_phi_reg_pp0_iter0_data_2877_V_read2947_phi_reg_108094.read();
        }
    } else {
        ap_phi_mux_data_2877_V_read2947_phi_phi_fu_108098_p4 = ap_phi_reg_pp0_iter0_data_2877_V_read2947_phi_reg_108094.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_66161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_66161_p6 = data_2877_V_read2947_phi_reg_108094.read();
    } else {
        ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_66161_p6 = data_2877_V_read2947_rewind_reg_66157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2878_V_read2948_phi_phi_fu_108111_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2878_V_read2948_phi_phi_fu_108111_p4 = ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_66175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2878_V_read2948_phi_phi_fu_108111_p4 = data_2878_V_read.read();
        } else {
            ap_phi_mux_data_2878_V_read2948_phi_phi_fu_108111_p4 = ap_phi_reg_pp0_iter0_data_2878_V_read2948_phi_reg_108107.read();
        }
    } else {
        ap_phi_mux_data_2878_V_read2948_phi_phi_fu_108111_p4 = ap_phi_reg_pp0_iter0_data_2878_V_read2948_phi_reg_108107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_66175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_66175_p6 = data_2878_V_read2948_phi_reg_108107.read();
    } else {
        ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_66175_p6 = data_2878_V_read2948_rewind_reg_66171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2879_V_read2949_phi_phi_fu_108124_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2879_V_read2949_phi_phi_fu_108124_p4 = ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_66189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2879_V_read2949_phi_phi_fu_108124_p4 = data_2879_V_read.read();
        } else {
            ap_phi_mux_data_2879_V_read2949_phi_phi_fu_108124_p4 = ap_phi_reg_pp0_iter0_data_2879_V_read2949_phi_reg_108120.read();
        }
    } else {
        ap_phi_mux_data_2879_V_read2949_phi_phi_fu_108124_p4 = ap_phi_reg_pp0_iter0_data_2879_V_read2949_phi_reg_108120.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_66189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_66189_p6 = data_2879_V_read2949_phi_reg_108120.read();
    } else {
        ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_66189_p6 = data_2879_V_read2949_rewind_reg_66185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_287_V_read357_phi_phi_fu_74428_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_287_V_read357_phi_phi_fu_74428_p4 = ap_phi_mux_data_287_V_read357_rewind_phi_fu_29901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_287_V_read357_phi_phi_fu_74428_p4 = data_287_V_read.read();
        } else {
            ap_phi_mux_data_287_V_read357_phi_phi_fu_74428_p4 = ap_phi_reg_pp0_iter0_data_287_V_read357_phi_reg_74424.read();
        }
    } else {
        ap_phi_mux_data_287_V_read357_phi_phi_fu_74428_p4 = ap_phi_reg_pp0_iter0_data_287_V_read357_phi_reg_74424.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_287_V_read357_rewind_phi_fu_29901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_287_V_read357_rewind_phi_fu_29901_p6 = data_287_V_read357_phi_reg_74424.read();
    } else {
        ap_phi_mux_data_287_V_read357_rewind_phi_fu_29901_p6 = data_287_V_read357_rewind_reg_29897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2880_V_read2950_phi_phi_fu_108137_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2880_V_read2950_phi_phi_fu_108137_p4 = ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_66203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2880_V_read2950_phi_phi_fu_108137_p4 = data_2880_V_read.read();
        } else {
            ap_phi_mux_data_2880_V_read2950_phi_phi_fu_108137_p4 = ap_phi_reg_pp0_iter0_data_2880_V_read2950_phi_reg_108133.read();
        }
    } else {
        ap_phi_mux_data_2880_V_read2950_phi_phi_fu_108137_p4 = ap_phi_reg_pp0_iter0_data_2880_V_read2950_phi_reg_108133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_66203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_66203_p6 = data_2880_V_read2950_phi_reg_108133.read();
    } else {
        ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_66203_p6 = data_2880_V_read2950_rewind_reg_66199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2881_V_read2951_phi_phi_fu_108150_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2881_V_read2951_phi_phi_fu_108150_p4 = ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_66217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2881_V_read2951_phi_phi_fu_108150_p4 = data_2881_V_read.read();
        } else {
            ap_phi_mux_data_2881_V_read2951_phi_phi_fu_108150_p4 = ap_phi_reg_pp0_iter0_data_2881_V_read2951_phi_reg_108146.read();
        }
    } else {
        ap_phi_mux_data_2881_V_read2951_phi_phi_fu_108150_p4 = ap_phi_reg_pp0_iter0_data_2881_V_read2951_phi_reg_108146.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_66217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_66217_p6 = data_2881_V_read2951_phi_reg_108146.read();
    } else {
        ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_66217_p6 = data_2881_V_read2951_rewind_reg_66213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2882_V_read2952_phi_phi_fu_108163_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2882_V_read2952_phi_phi_fu_108163_p4 = ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_66231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2882_V_read2952_phi_phi_fu_108163_p4 = data_2882_V_read.read();
        } else {
            ap_phi_mux_data_2882_V_read2952_phi_phi_fu_108163_p4 = ap_phi_reg_pp0_iter0_data_2882_V_read2952_phi_reg_108159.read();
        }
    } else {
        ap_phi_mux_data_2882_V_read2952_phi_phi_fu_108163_p4 = ap_phi_reg_pp0_iter0_data_2882_V_read2952_phi_reg_108159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_66231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_66231_p6 = data_2882_V_read2952_phi_reg_108159.read();
    } else {
        ap_phi_mux_data_2882_V_read2952_rewind_phi_fu_66231_p6 = data_2882_V_read2952_rewind_reg_66227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2883_V_read2953_phi_phi_fu_108176_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2883_V_read2953_phi_phi_fu_108176_p4 = ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_66245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2883_V_read2953_phi_phi_fu_108176_p4 = data_2883_V_read.read();
        } else {
            ap_phi_mux_data_2883_V_read2953_phi_phi_fu_108176_p4 = ap_phi_reg_pp0_iter0_data_2883_V_read2953_phi_reg_108172.read();
        }
    } else {
        ap_phi_mux_data_2883_V_read2953_phi_phi_fu_108176_p4 = ap_phi_reg_pp0_iter0_data_2883_V_read2953_phi_reg_108172.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_66245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_66245_p6 = data_2883_V_read2953_phi_reg_108172.read();
    } else {
        ap_phi_mux_data_2883_V_read2953_rewind_phi_fu_66245_p6 = data_2883_V_read2953_rewind_reg_66241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2884_V_read2954_phi_phi_fu_108189_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2884_V_read2954_phi_phi_fu_108189_p4 = ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_66259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2884_V_read2954_phi_phi_fu_108189_p4 = data_2884_V_read.read();
        } else {
            ap_phi_mux_data_2884_V_read2954_phi_phi_fu_108189_p4 = ap_phi_reg_pp0_iter0_data_2884_V_read2954_phi_reg_108185.read();
        }
    } else {
        ap_phi_mux_data_2884_V_read2954_phi_phi_fu_108189_p4 = ap_phi_reg_pp0_iter0_data_2884_V_read2954_phi_reg_108185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_66259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_66259_p6 = data_2884_V_read2954_phi_reg_108185.read();
    } else {
        ap_phi_mux_data_2884_V_read2954_rewind_phi_fu_66259_p6 = data_2884_V_read2954_rewind_reg_66255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2885_V_read2955_phi_phi_fu_108202_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2885_V_read2955_phi_phi_fu_108202_p4 = ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_66273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2885_V_read2955_phi_phi_fu_108202_p4 = data_2885_V_read.read();
        } else {
            ap_phi_mux_data_2885_V_read2955_phi_phi_fu_108202_p4 = ap_phi_reg_pp0_iter0_data_2885_V_read2955_phi_reg_108198.read();
        }
    } else {
        ap_phi_mux_data_2885_V_read2955_phi_phi_fu_108202_p4 = ap_phi_reg_pp0_iter0_data_2885_V_read2955_phi_reg_108198.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_66273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_66273_p6 = data_2885_V_read2955_phi_reg_108198.read();
    } else {
        ap_phi_mux_data_2885_V_read2955_rewind_phi_fu_66273_p6 = data_2885_V_read2955_rewind_reg_66269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2886_V_read2956_phi_phi_fu_108215_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2886_V_read2956_phi_phi_fu_108215_p4 = ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_66287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2886_V_read2956_phi_phi_fu_108215_p4 = data_2886_V_read.read();
        } else {
            ap_phi_mux_data_2886_V_read2956_phi_phi_fu_108215_p4 = ap_phi_reg_pp0_iter0_data_2886_V_read2956_phi_reg_108211.read();
        }
    } else {
        ap_phi_mux_data_2886_V_read2956_phi_phi_fu_108215_p4 = ap_phi_reg_pp0_iter0_data_2886_V_read2956_phi_reg_108211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_66287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_66287_p6 = data_2886_V_read2956_phi_reg_108211.read();
    } else {
        ap_phi_mux_data_2886_V_read2956_rewind_phi_fu_66287_p6 = data_2886_V_read2956_rewind_reg_66283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2887_V_read2957_phi_phi_fu_108228_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2887_V_read2957_phi_phi_fu_108228_p4 = ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_66301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2887_V_read2957_phi_phi_fu_108228_p4 = data_2887_V_read.read();
        } else {
            ap_phi_mux_data_2887_V_read2957_phi_phi_fu_108228_p4 = ap_phi_reg_pp0_iter0_data_2887_V_read2957_phi_reg_108224.read();
        }
    } else {
        ap_phi_mux_data_2887_V_read2957_phi_phi_fu_108228_p4 = ap_phi_reg_pp0_iter0_data_2887_V_read2957_phi_reg_108224.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_66301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_66301_p6 = data_2887_V_read2957_phi_reg_108224.read();
    } else {
        ap_phi_mux_data_2887_V_read2957_rewind_phi_fu_66301_p6 = data_2887_V_read2957_rewind_reg_66297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2888_V_read2958_phi_phi_fu_108241_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2888_V_read2958_phi_phi_fu_108241_p4 = ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_66315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2888_V_read2958_phi_phi_fu_108241_p4 = data_2888_V_read.read();
        } else {
            ap_phi_mux_data_2888_V_read2958_phi_phi_fu_108241_p4 = ap_phi_reg_pp0_iter0_data_2888_V_read2958_phi_reg_108237.read();
        }
    } else {
        ap_phi_mux_data_2888_V_read2958_phi_phi_fu_108241_p4 = ap_phi_reg_pp0_iter0_data_2888_V_read2958_phi_reg_108237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_66315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_66315_p6 = data_2888_V_read2958_phi_reg_108237.read();
    } else {
        ap_phi_mux_data_2888_V_read2958_rewind_phi_fu_66315_p6 = data_2888_V_read2958_rewind_reg_66311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2889_V_read2959_phi_phi_fu_108254_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2889_V_read2959_phi_phi_fu_108254_p4 = ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_66329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2889_V_read2959_phi_phi_fu_108254_p4 = data_2889_V_read.read();
        } else {
            ap_phi_mux_data_2889_V_read2959_phi_phi_fu_108254_p4 = ap_phi_reg_pp0_iter0_data_2889_V_read2959_phi_reg_108250.read();
        }
    } else {
        ap_phi_mux_data_2889_V_read2959_phi_phi_fu_108254_p4 = ap_phi_reg_pp0_iter0_data_2889_V_read2959_phi_reg_108250.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_66329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_66329_p6 = data_2889_V_read2959_phi_reg_108250.read();
    } else {
        ap_phi_mux_data_2889_V_read2959_rewind_phi_fu_66329_p6 = data_2889_V_read2959_rewind_reg_66325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_288_V_read358_phi_phi_fu_74441_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_288_V_read358_phi_phi_fu_74441_p4 = ap_phi_mux_data_288_V_read358_rewind_phi_fu_29915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_288_V_read358_phi_phi_fu_74441_p4 = data_288_V_read.read();
        } else {
            ap_phi_mux_data_288_V_read358_phi_phi_fu_74441_p4 = ap_phi_reg_pp0_iter0_data_288_V_read358_phi_reg_74437.read();
        }
    } else {
        ap_phi_mux_data_288_V_read358_phi_phi_fu_74441_p4 = ap_phi_reg_pp0_iter0_data_288_V_read358_phi_reg_74437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_288_V_read358_rewind_phi_fu_29915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_288_V_read358_rewind_phi_fu_29915_p6 = data_288_V_read358_phi_reg_74437.read();
    } else {
        ap_phi_mux_data_288_V_read358_rewind_phi_fu_29915_p6 = data_288_V_read358_rewind_reg_29911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2890_V_read2960_phi_phi_fu_108267_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2890_V_read2960_phi_phi_fu_108267_p4 = ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_66343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2890_V_read2960_phi_phi_fu_108267_p4 = data_2890_V_read.read();
        } else {
            ap_phi_mux_data_2890_V_read2960_phi_phi_fu_108267_p4 = ap_phi_reg_pp0_iter0_data_2890_V_read2960_phi_reg_108263.read();
        }
    } else {
        ap_phi_mux_data_2890_V_read2960_phi_phi_fu_108267_p4 = ap_phi_reg_pp0_iter0_data_2890_V_read2960_phi_reg_108263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_66343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_66343_p6 = data_2890_V_read2960_phi_reg_108263.read();
    } else {
        ap_phi_mux_data_2890_V_read2960_rewind_phi_fu_66343_p6 = data_2890_V_read2960_rewind_reg_66339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2891_V_read2961_phi_phi_fu_108280_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2891_V_read2961_phi_phi_fu_108280_p4 = ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_66357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2891_V_read2961_phi_phi_fu_108280_p4 = data_2891_V_read.read();
        } else {
            ap_phi_mux_data_2891_V_read2961_phi_phi_fu_108280_p4 = ap_phi_reg_pp0_iter0_data_2891_V_read2961_phi_reg_108276.read();
        }
    } else {
        ap_phi_mux_data_2891_V_read2961_phi_phi_fu_108280_p4 = ap_phi_reg_pp0_iter0_data_2891_V_read2961_phi_reg_108276.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_66357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_66357_p6 = data_2891_V_read2961_phi_reg_108276.read();
    } else {
        ap_phi_mux_data_2891_V_read2961_rewind_phi_fu_66357_p6 = data_2891_V_read2961_rewind_reg_66353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2892_V_read2962_phi_phi_fu_108293_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2892_V_read2962_phi_phi_fu_108293_p4 = ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_66371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2892_V_read2962_phi_phi_fu_108293_p4 = data_2892_V_read.read();
        } else {
            ap_phi_mux_data_2892_V_read2962_phi_phi_fu_108293_p4 = ap_phi_reg_pp0_iter0_data_2892_V_read2962_phi_reg_108289.read();
        }
    } else {
        ap_phi_mux_data_2892_V_read2962_phi_phi_fu_108293_p4 = ap_phi_reg_pp0_iter0_data_2892_V_read2962_phi_reg_108289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_66371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_66371_p6 = data_2892_V_read2962_phi_reg_108289.read();
    } else {
        ap_phi_mux_data_2892_V_read2962_rewind_phi_fu_66371_p6 = data_2892_V_read2962_rewind_reg_66367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2893_V_read2963_phi_phi_fu_108306_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2893_V_read2963_phi_phi_fu_108306_p4 = ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_66385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2893_V_read2963_phi_phi_fu_108306_p4 = data_2893_V_read.read();
        } else {
            ap_phi_mux_data_2893_V_read2963_phi_phi_fu_108306_p4 = ap_phi_reg_pp0_iter0_data_2893_V_read2963_phi_reg_108302.read();
        }
    } else {
        ap_phi_mux_data_2893_V_read2963_phi_phi_fu_108306_p4 = ap_phi_reg_pp0_iter0_data_2893_V_read2963_phi_reg_108302.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_66385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_66385_p6 = data_2893_V_read2963_phi_reg_108302.read();
    } else {
        ap_phi_mux_data_2893_V_read2963_rewind_phi_fu_66385_p6 = data_2893_V_read2963_rewind_reg_66381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2894_V_read2964_phi_phi_fu_108319_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2894_V_read2964_phi_phi_fu_108319_p4 = ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_66399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2894_V_read2964_phi_phi_fu_108319_p4 = data_2894_V_read.read();
        } else {
            ap_phi_mux_data_2894_V_read2964_phi_phi_fu_108319_p4 = ap_phi_reg_pp0_iter0_data_2894_V_read2964_phi_reg_108315.read();
        }
    } else {
        ap_phi_mux_data_2894_V_read2964_phi_phi_fu_108319_p4 = ap_phi_reg_pp0_iter0_data_2894_V_read2964_phi_reg_108315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_66399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_66399_p6 = data_2894_V_read2964_phi_reg_108315.read();
    } else {
        ap_phi_mux_data_2894_V_read2964_rewind_phi_fu_66399_p6 = data_2894_V_read2964_rewind_reg_66395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2895_V_read2965_phi_phi_fu_108332_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2895_V_read2965_phi_phi_fu_108332_p4 = ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_66413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2895_V_read2965_phi_phi_fu_108332_p4 = data_2895_V_read.read();
        } else {
            ap_phi_mux_data_2895_V_read2965_phi_phi_fu_108332_p4 = ap_phi_reg_pp0_iter0_data_2895_V_read2965_phi_reg_108328.read();
        }
    } else {
        ap_phi_mux_data_2895_V_read2965_phi_phi_fu_108332_p4 = ap_phi_reg_pp0_iter0_data_2895_V_read2965_phi_reg_108328.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_66413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_66413_p6 = data_2895_V_read2965_phi_reg_108328.read();
    } else {
        ap_phi_mux_data_2895_V_read2965_rewind_phi_fu_66413_p6 = data_2895_V_read2965_rewind_reg_66409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2896_V_read2966_phi_phi_fu_108345_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2896_V_read2966_phi_phi_fu_108345_p4 = ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_66427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2896_V_read2966_phi_phi_fu_108345_p4 = data_2896_V_read.read();
        } else {
            ap_phi_mux_data_2896_V_read2966_phi_phi_fu_108345_p4 = ap_phi_reg_pp0_iter0_data_2896_V_read2966_phi_reg_108341.read();
        }
    } else {
        ap_phi_mux_data_2896_V_read2966_phi_phi_fu_108345_p4 = ap_phi_reg_pp0_iter0_data_2896_V_read2966_phi_reg_108341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_66427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_66427_p6 = data_2896_V_read2966_phi_reg_108341.read();
    } else {
        ap_phi_mux_data_2896_V_read2966_rewind_phi_fu_66427_p6 = data_2896_V_read2966_rewind_reg_66423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2897_V_read2967_phi_phi_fu_108358_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2897_V_read2967_phi_phi_fu_108358_p4 = ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_66441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2897_V_read2967_phi_phi_fu_108358_p4 = data_2897_V_read.read();
        } else {
            ap_phi_mux_data_2897_V_read2967_phi_phi_fu_108358_p4 = ap_phi_reg_pp0_iter0_data_2897_V_read2967_phi_reg_108354.read();
        }
    } else {
        ap_phi_mux_data_2897_V_read2967_phi_phi_fu_108358_p4 = ap_phi_reg_pp0_iter0_data_2897_V_read2967_phi_reg_108354.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_66441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_66441_p6 = data_2897_V_read2967_phi_reg_108354.read();
    } else {
        ap_phi_mux_data_2897_V_read2967_rewind_phi_fu_66441_p6 = data_2897_V_read2967_rewind_reg_66437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2898_V_read2968_phi_phi_fu_108371_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2898_V_read2968_phi_phi_fu_108371_p4 = ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_66455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2898_V_read2968_phi_phi_fu_108371_p4 = data_2898_V_read.read();
        } else {
            ap_phi_mux_data_2898_V_read2968_phi_phi_fu_108371_p4 = ap_phi_reg_pp0_iter0_data_2898_V_read2968_phi_reg_108367.read();
        }
    } else {
        ap_phi_mux_data_2898_V_read2968_phi_phi_fu_108371_p4 = ap_phi_reg_pp0_iter0_data_2898_V_read2968_phi_reg_108367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_66455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_66455_p6 = data_2898_V_read2968_phi_reg_108367.read();
    } else {
        ap_phi_mux_data_2898_V_read2968_rewind_phi_fu_66455_p6 = data_2898_V_read2968_rewind_reg_66451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2899_V_read2969_phi_phi_fu_108384_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2899_V_read2969_phi_phi_fu_108384_p4 = ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_66469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2899_V_read2969_phi_phi_fu_108384_p4 = data_2899_V_read.read();
        } else {
            ap_phi_mux_data_2899_V_read2969_phi_phi_fu_108384_p4 = ap_phi_reg_pp0_iter0_data_2899_V_read2969_phi_reg_108380.read();
        }
    } else {
        ap_phi_mux_data_2899_V_read2969_phi_phi_fu_108384_p4 = ap_phi_reg_pp0_iter0_data_2899_V_read2969_phi_reg_108380.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_66469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_66469_p6 = data_2899_V_read2969_phi_reg_108380.read();
    } else {
        ap_phi_mux_data_2899_V_read2969_rewind_phi_fu_66469_p6 = data_2899_V_read2969_rewind_reg_66465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_289_V_read359_phi_phi_fu_74454_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_289_V_read359_phi_phi_fu_74454_p4 = ap_phi_mux_data_289_V_read359_rewind_phi_fu_29929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_289_V_read359_phi_phi_fu_74454_p4 = data_289_V_read.read();
        } else {
            ap_phi_mux_data_289_V_read359_phi_phi_fu_74454_p4 = ap_phi_reg_pp0_iter0_data_289_V_read359_phi_reg_74450.read();
        }
    } else {
        ap_phi_mux_data_289_V_read359_phi_phi_fu_74454_p4 = ap_phi_reg_pp0_iter0_data_289_V_read359_phi_reg_74450.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_289_V_read359_rewind_phi_fu_29929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_289_V_read359_rewind_phi_fu_29929_p6 = data_289_V_read359_phi_reg_74450.read();
    } else {
        ap_phi_mux_data_289_V_read359_rewind_phi_fu_29929_p6 = data_289_V_read359_rewind_reg_29925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_28_V_read98_phi_phi_fu_71061_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_28_V_read98_phi_phi_fu_71061_p4 = ap_phi_mux_data_28_V_read98_rewind_phi_fu_26275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_28_V_read98_phi_phi_fu_71061_p4 = data_28_V_read.read();
        } else {
            ap_phi_mux_data_28_V_read98_phi_phi_fu_71061_p4 = ap_phi_reg_pp0_iter0_data_28_V_read98_phi_reg_71057.read();
        }
    } else {
        ap_phi_mux_data_28_V_read98_phi_phi_fu_71061_p4 = ap_phi_reg_pp0_iter0_data_28_V_read98_phi_reg_71057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_28_V_read98_rewind_phi_fu_26275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_28_V_read98_rewind_phi_fu_26275_p6 = data_28_V_read98_phi_reg_71057.read();
    } else {
        ap_phi_mux_data_28_V_read98_rewind_phi_fu_26275_p6 = data_28_V_read98_rewind_reg_26271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2900_V_read2970_phi_phi_fu_108397_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2900_V_read2970_phi_phi_fu_108397_p4 = ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_66483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2900_V_read2970_phi_phi_fu_108397_p4 = data_2900_V_read.read();
        } else {
            ap_phi_mux_data_2900_V_read2970_phi_phi_fu_108397_p4 = ap_phi_reg_pp0_iter0_data_2900_V_read2970_phi_reg_108393.read();
        }
    } else {
        ap_phi_mux_data_2900_V_read2970_phi_phi_fu_108397_p4 = ap_phi_reg_pp0_iter0_data_2900_V_read2970_phi_reg_108393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_66483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_66483_p6 = data_2900_V_read2970_phi_reg_108393.read();
    } else {
        ap_phi_mux_data_2900_V_read2970_rewind_phi_fu_66483_p6 = data_2900_V_read2970_rewind_reg_66479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2901_V_read2971_phi_phi_fu_108410_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2901_V_read2971_phi_phi_fu_108410_p4 = ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_66497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2901_V_read2971_phi_phi_fu_108410_p4 = data_2901_V_read.read();
        } else {
            ap_phi_mux_data_2901_V_read2971_phi_phi_fu_108410_p4 = ap_phi_reg_pp0_iter0_data_2901_V_read2971_phi_reg_108406.read();
        }
    } else {
        ap_phi_mux_data_2901_V_read2971_phi_phi_fu_108410_p4 = ap_phi_reg_pp0_iter0_data_2901_V_read2971_phi_reg_108406.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_66497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_66497_p6 = data_2901_V_read2971_phi_reg_108406.read();
    } else {
        ap_phi_mux_data_2901_V_read2971_rewind_phi_fu_66497_p6 = data_2901_V_read2971_rewind_reg_66493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2902_V_read2972_phi_phi_fu_108423_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2902_V_read2972_phi_phi_fu_108423_p4 = ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_66511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2902_V_read2972_phi_phi_fu_108423_p4 = data_2902_V_read.read();
        } else {
            ap_phi_mux_data_2902_V_read2972_phi_phi_fu_108423_p4 = ap_phi_reg_pp0_iter0_data_2902_V_read2972_phi_reg_108419.read();
        }
    } else {
        ap_phi_mux_data_2902_V_read2972_phi_phi_fu_108423_p4 = ap_phi_reg_pp0_iter0_data_2902_V_read2972_phi_reg_108419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_66511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_66511_p6 = data_2902_V_read2972_phi_reg_108419.read();
    } else {
        ap_phi_mux_data_2902_V_read2972_rewind_phi_fu_66511_p6 = data_2902_V_read2972_rewind_reg_66507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2903_V_read2973_phi_phi_fu_108436_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2903_V_read2973_phi_phi_fu_108436_p4 = ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_66525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2903_V_read2973_phi_phi_fu_108436_p4 = data_2903_V_read.read();
        } else {
            ap_phi_mux_data_2903_V_read2973_phi_phi_fu_108436_p4 = ap_phi_reg_pp0_iter0_data_2903_V_read2973_phi_reg_108432.read();
        }
    } else {
        ap_phi_mux_data_2903_V_read2973_phi_phi_fu_108436_p4 = ap_phi_reg_pp0_iter0_data_2903_V_read2973_phi_reg_108432.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_66525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_66525_p6 = data_2903_V_read2973_phi_reg_108432.read();
    } else {
        ap_phi_mux_data_2903_V_read2973_rewind_phi_fu_66525_p6 = data_2903_V_read2973_rewind_reg_66521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2904_V_read2974_phi_phi_fu_108449_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2904_V_read2974_phi_phi_fu_108449_p4 = ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_66539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2904_V_read2974_phi_phi_fu_108449_p4 = data_2904_V_read.read();
        } else {
            ap_phi_mux_data_2904_V_read2974_phi_phi_fu_108449_p4 = ap_phi_reg_pp0_iter0_data_2904_V_read2974_phi_reg_108445.read();
        }
    } else {
        ap_phi_mux_data_2904_V_read2974_phi_phi_fu_108449_p4 = ap_phi_reg_pp0_iter0_data_2904_V_read2974_phi_reg_108445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_66539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_66539_p6 = data_2904_V_read2974_phi_reg_108445.read();
    } else {
        ap_phi_mux_data_2904_V_read2974_rewind_phi_fu_66539_p6 = data_2904_V_read2974_rewind_reg_66535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2905_V_read2975_phi_phi_fu_108462_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2905_V_read2975_phi_phi_fu_108462_p4 = ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_66553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2905_V_read2975_phi_phi_fu_108462_p4 = data_2905_V_read.read();
        } else {
            ap_phi_mux_data_2905_V_read2975_phi_phi_fu_108462_p4 = ap_phi_reg_pp0_iter0_data_2905_V_read2975_phi_reg_108458.read();
        }
    } else {
        ap_phi_mux_data_2905_V_read2975_phi_phi_fu_108462_p4 = ap_phi_reg_pp0_iter0_data_2905_V_read2975_phi_reg_108458.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_66553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_66553_p6 = data_2905_V_read2975_phi_reg_108458.read();
    } else {
        ap_phi_mux_data_2905_V_read2975_rewind_phi_fu_66553_p6 = data_2905_V_read2975_rewind_reg_66549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2906_V_read2976_phi_phi_fu_108475_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2906_V_read2976_phi_phi_fu_108475_p4 = ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_66567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2906_V_read2976_phi_phi_fu_108475_p4 = data_2906_V_read.read();
        } else {
            ap_phi_mux_data_2906_V_read2976_phi_phi_fu_108475_p4 = ap_phi_reg_pp0_iter0_data_2906_V_read2976_phi_reg_108471.read();
        }
    } else {
        ap_phi_mux_data_2906_V_read2976_phi_phi_fu_108475_p4 = ap_phi_reg_pp0_iter0_data_2906_V_read2976_phi_reg_108471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_66567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_66567_p6 = data_2906_V_read2976_phi_reg_108471.read();
    } else {
        ap_phi_mux_data_2906_V_read2976_rewind_phi_fu_66567_p6 = data_2906_V_read2976_rewind_reg_66563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2907_V_read2977_phi_phi_fu_108488_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2907_V_read2977_phi_phi_fu_108488_p4 = ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_66581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2907_V_read2977_phi_phi_fu_108488_p4 = data_2907_V_read.read();
        } else {
            ap_phi_mux_data_2907_V_read2977_phi_phi_fu_108488_p4 = ap_phi_reg_pp0_iter0_data_2907_V_read2977_phi_reg_108484.read();
        }
    } else {
        ap_phi_mux_data_2907_V_read2977_phi_phi_fu_108488_p4 = ap_phi_reg_pp0_iter0_data_2907_V_read2977_phi_reg_108484.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_66581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_66581_p6 = data_2907_V_read2977_phi_reg_108484.read();
    } else {
        ap_phi_mux_data_2907_V_read2977_rewind_phi_fu_66581_p6 = data_2907_V_read2977_rewind_reg_66577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2908_V_read2978_phi_phi_fu_108501_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2908_V_read2978_phi_phi_fu_108501_p4 = ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_66595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2908_V_read2978_phi_phi_fu_108501_p4 = data_2908_V_read.read();
        } else {
            ap_phi_mux_data_2908_V_read2978_phi_phi_fu_108501_p4 = ap_phi_reg_pp0_iter0_data_2908_V_read2978_phi_reg_108497.read();
        }
    } else {
        ap_phi_mux_data_2908_V_read2978_phi_phi_fu_108501_p4 = ap_phi_reg_pp0_iter0_data_2908_V_read2978_phi_reg_108497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_66595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_66595_p6 = data_2908_V_read2978_phi_reg_108497.read();
    } else {
        ap_phi_mux_data_2908_V_read2978_rewind_phi_fu_66595_p6 = data_2908_V_read2978_rewind_reg_66591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2909_V_read2979_phi_phi_fu_108514_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2909_V_read2979_phi_phi_fu_108514_p4 = ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_66609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2909_V_read2979_phi_phi_fu_108514_p4 = data_2909_V_read.read();
        } else {
            ap_phi_mux_data_2909_V_read2979_phi_phi_fu_108514_p4 = ap_phi_reg_pp0_iter0_data_2909_V_read2979_phi_reg_108510.read();
        }
    } else {
        ap_phi_mux_data_2909_V_read2979_phi_phi_fu_108514_p4 = ap_phi_reg_pp0_iter0_data_2909_V_read2979_phi_reg_108510.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_66609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_66609_p6 = data_2909_V_read2979_phi_reg_108510.read();
    } else {
        ap_phi_mux_data_2909_V_read2979_rewind_phi_fu_66609_p6 = data_2909_V_read2979_rewind_reg_66605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_290_V_read360_phi_phi_fu_74467_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_290_V_read360_phi_phi_fu_74467_p4 = ap_phi_mux_data_290_V_read360_rewind_phi_fu_29943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_290_V_read360_phi_phi_fu_74467_p4 = data_290_V_read.read();
        } else {
            ap_phi_mux_data_290_V_read360_phi_phi_fu_74467_p4 = ap_phi_reg_pp0_iter0_data_290_V_read360_phi_reg_74463.read();
        }
    } else {
        ap_phi_mux_data_290_V_read360_phi_phi_fu_74467_p4 = ap_phi_reg_pp0_iter0_data_290_V_read360_phi_reg_74463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_290_V_read360_rewind_phi_fu_29943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_290_V_read360_rewind_phi_fu_29943_p6 = data_290_V_read360_phi_reg_74463.read();
    } else {
        ap_phi_mux_data_290_V_read360_rewind_phi_fu_29943_p6 = data_290_V_read360_rewind_reg_29939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2910_V_read2980_phi_phi_fu_108527_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2910_V_read2980_phi_phi_fu_108527_p4 = ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_66623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2910_V_read2980_phi_phi_fu_108527_p4 = data_2910_V_read.read();
        } else {
            ap_phi_mux_data_2910_V_read2980_phi_phi_fu_108527_p4 = ap_phi_reg_pp0_iter0_data_2910_V_read2980_phi_reg_108523.read();
        }
    } else {
        ap_phi_mux_data_2910_V_read2980_phi_phi_fu_108527_p4 = ap_phi_reg_pp0_iter0_data_2910_V_read2980_phi_reg_108523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_66623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_66623_p6 = data_2910_V_read2980_phi_reg_108523.read();
    } else {
        ap_phi_mux_data_2910_V_read2980_rewind_phi_fu_66623_p6 = data_2910_V_read2980_rewind_reg_66619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2911_V_read2981_phi_phi_fu_108540_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2911_V_read2981_phi_phi_fu_108540_p4 = ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_66637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2911_V_read2981_phi_phi_fu_108540_p4 = data_2911_V_read.read();
        } else {
            ap_phi_mux_data_2911_V_read2981_phi_phi_fu_108540_p4 = ap_phi_reg_pp0_iter0_data_2911_V_read2981_phi_reg_108536.read();
        }
    } else {
        ap_phi_mux_data_2911_V_read2981_phi_phi_fu_108540_p4 = ap_phi_reg_pp0_iter0_data_2911_V_read2981_phi_reg_108536.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_66637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_66637_p6 = data_2911_V_read2981_phi_reg_108536.read();
    } else {
        ap_phi_mux_data_2911_V_read2981_rewind_phi_fu_66637_p6 = data_2911_V_read2981_rewind_reg_66633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2912_V_read2982_phi_phi_fu_108553_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2912_V_read2982_phi_phi_fu_108553_p4 = ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_66651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2912_V_read2982_phi_phi_fu_108553_p4 = data_2912_V_read.read();
        } else {
            ap_phi_mux_data_2912_V_read2982_phi_phi_fu_108553_p4 = ap_phi_reg_pp0_iter0_data_2912_V_read2982_phi_reg_108549.read();
        }
    } else {
        ap_phi_mux_data_2912_V_read2982_phi_phi_fu_108553_p4 = ap_phi_reg_pp0_iter0_data_2912_V_read2982_phi_reg_108549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_66651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_66651_p6 = data_2912_V_read2982_phi_reg_108549.read();
    } else {
        ap_phi_mux_data_2912_V_read2982_rewind_phi_fu_66651_p6 = data_2912_V_read2982_rewind_reg_66647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2913_V_read2983_phi_phi_fu_108566_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2913_V_read2983_phi_phi_fu_108566_p4 = ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_66665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2913_V_read2983_phi_phi_fu_108566_p4 = data_2913_V_read.read();
        } else {
            ap_phi_mux_data_2913_V_read2983_phi_phi_fu_108566_p4 = ap_phi_reg_pp0_iter0_data_2913_V_read2983_phi_reg_108562.read();
        }
    } else {
        ap_phi_mux_data_2913_V_read2983_phi_phi_fu_108566_p4 = ap_phi_reg_pp0_iter0_data_2913_V_read2983_phi_reg_108562.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_66665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_66665_p6 = data_2913_V_read2983_phi_reg_108562.read();
    } else {
        ap_phi_mux_data_2913_V_read2983_rewind_phi_fu_66665_p6 = data_2913_V_read2983_rewind_reg_66661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2914_V_read2984_phi_phi_fu_108579_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2914_V_read2984_phi_phi_fu_108579_p4 = ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_66679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2914_V_read2984_phi_phi_fu_108579_p4 = data_2914_V_read.read();
        } else {
            ap_phi_mux_data_2914_V_read2984_phi_phi_fu_108579_p4 = ap_phi_reg_pp0_iter0_data_2914_V_read2984_phi_reg_108575.read();
        }
    } else {
        ap_phi_mux_data_2914_V_read2984_phi_phi_fu_108579_p4 = ap_phi_reg_pp0_iter0_data_2914_V_read2984_phi_reg_108575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_66679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_66679_p6 = data_2914_V_read2984_phi_reg_108575.read();
    } else {
        ap_phi_mux_data_2914_V_read2984_rewind_phi_fu_66679_p6 = data_2914_V_read2984_rewind_reg_66675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2915_V_read2985_phi_phi_fu_108592_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2915_V_read2985_phi_phi_fu_108592_p4 = ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_66693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2915_V_read2985_phi_phi_fu_108592_p4 = data_2915_V_read.read();
        } else {
            ap_phi_mux_data_2915_V_read2985_phi_phi_fu_108592_p4 = ap_phi_reg_pp0_iter0_data_2915_V_read2985_phi_reg_108588.read();
        }
    } else {
        ap_phi_mux_data_2915_V_read2985_phi_phi_fu_108592_p4 = ap_phi_reg_pp0_iter0_data_2915_V_read2985_phi_reg_108588.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_66693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_66693_p6 = data_2915_V_read2985_phi_reg_108588.read();
    } else {
        ap_phi_mux_data_2915_V_read2985_rewind_phi_fu_66693_p6 = data_2915_V_read2985_rewind_reg_66689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2916_V_read2986_phi_phi_fu_108605_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2916_V_read2986_phi_phi_fu_108605_p4 = ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_66707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2916_V_read2986_phi_phi_fu_108605_p4 = data_2916_V_read.read();
        } else {
            ap_phi_mux_data_2916_V_read2986_phi_phi_fu_108605_p4 = ap_phi_reg_pp0_iter0_data_2916_V_read2986_phi_reg_108601.read();
        }
    } else {
        ap_phi_mux_data_2916_V_read2986_phi_phi_fu_108605_p4 = ap_phi_reg_pp0_iter0_data_2916_V_read2986_phi_reg_108601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_66707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_66707_p6 = data_2916_V_read2986_phi_reg_108601.read();
    } else {
        ap_phi_mux_data_2916_V_read2986_rewind_phi_fu_66707_p6 = data_2916_V_read2986_rewind_reg_66703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2917_V_read2987_phi_phi_fu_108618_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2917_V_read2987_phi_phi_fu_108618_p4 = ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_66721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2917_V_read2987_phi_phi_fu_108618_p4 = data_2917_V_read.read();
        } else {
            ap_phi_mux_data_2917_V_read2987_phi_phi_fu_108618_p4 = ap_phi_reg_pp0_iter0_data_2917_V_read2987_phi_reg_108614.read();
        }
    } else {
        ap_phi_mux_data_2917_V_read2987_phi_phi_fu_108618_p4 = ap_phi_reg_pp0_iter0_data_2917_V_read2987_phi_reg_108614.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_66721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_66721_p6 = data_2917_V_read2987_phi_reg_108614.read();
    } else {
        ap_phi_mux_data_2917_V_read2987_rewind_phi_fu_66721_p6 = data_2917_V_read2987_rewind_reg_66717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2918_V_read2988_phi_phi_fu_108631_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2918_V_read2988_phi_phi_fu_108631_p4 = ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_66735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2918_V_read2988_phi_phi_fu_108631_p4 = data_2918_V_read.read();
        } else {
            ap_phi_mux_data_2918_V_read2988_phi_phi_fu_108631_p4 = ap_phi_reg_pp0_iter0_data_2918_V_read2988_phi_reg_108627.read();
        }
    } else {
        ap_phi_mux_data_2918_V_read2988_phi_phi_fu_108631_p4 = ap_phi_reg_pp0_iter0_data_2918_V_read2988_phi_reg_108627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_66735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_66735_p6 = data_2918_V_read2988_phi_reg_108627.read();
    } else {
        ap_phi_mux_data_2918_V_read2988_rewind_phi_fu_66735_p6 = data_2918_V_read2988_rewind_reg_66731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2919_V_read2989_phi_phi_fu_108644_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2919_V_read2989_phi_phi_fu_108644_p4 = ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_66749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2919_V_read2989_phi_phi_fu_108644_p4 = data_2919_V_read.read();
        } else {
            ap_phi_mux_data_2919_V_read2989_phi_phi_fu_108644_p4 = ap_phi_reg_pp0_iter0_data_2919_V_read2989_phi_reg_108640.read();
        }
    } else {
        ap_phi_mux_data_2919_V_read2989_phi_phi_fu_108644_p4 = ap_phi_reg_pp0_iter0_data_2919_V_read2989_phi_reg_108640.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_66749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_66749_p6 = data_2919_V_read2989_phi_reg_108640.read();
    } else {
        ap_phi_mux_data_2919_V_read2989_rewind_phi_fu_66749_p6 = data_2919_V_read2989_rewind_reg_66745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_291_V_read361_phi_phi_fu_74480_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_291_V_read361_phi_phi_fu_74480_p4 = ap_phi_mux_data_291_V_read361_rewind_phi_fu_29957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_291_V_read361_phi_phi_fu_74480_p4 = data_291_V_read.read();
        } else {
            ap_phi_mux_data_291_V_read361_phi_phi_fu_74480_p4 = ap_phi_reg_pp0_iter0_data_291_V_read361_phi_reg_74476.read();
        }
    } else {
        ap_phi_mux_data_291_V_read361_phi_phi_fu_74480_p4 = ap_phi_reg_pp0_iter0_data_291_V_read361_phi_reg_74476.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_291_V_read361_rewind_phi_fu_29957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_291_V_read361_rewind_phi_fu_29957_p6 = data_291_V_read361_phi_reg_74476.read();
    } else {
        ap_phi_mux_data_291_V_read361_rewind_phi_fu_29957_p6 = data_291_V_read361_rewind_reg_29953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2920_V_read2990_phi_phi_fu_108657_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2920_V_read2990_phi_phi_fu_108657_p4 = ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_66763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2920_V_read2990_phi_phi_fu_108657_p4 = data_2920_V_read.read();
        } else {
            ap_phi_mux_data_2920_V_read2990_phi_phi_fu_108657_p4 = ap_phi_reg_pp0_iter0_data_2920_V_read2990_phi_reg_108653.read();
        }
    } else {
        ap_phi_mux_data_2920_V_read2990_phi_phi_fu_108657_p4 = ap_phi_reg_pp0_iter0_data_2920_V_read2990_phi_reg_108653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_66763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_66763_p6 = data_2920_V_read2990_phi_reg_108653.read();
    } else {
        ap_phi_mux_data_2920_V_read2990_rewind_phi_fu_66763_p6 = data_2920_V_read2990_rewind_reg_66759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2921_V_read2991_phi_phi_fu_108670_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2921_V_read2991_phi_phi_fu_108670_p4 = ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_66777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2921_V_read2991_phi_phi_fu_108670_p4 = data_2921_V_read.read();
        } else {
            ap_phi_mux_data_2921_V_read2991_phi_phi_fu_108670_p4 = ap_phi_reg_pp0_iter0_data_2921_V_read2991_phi_reg_108666.read();
        }
    } else {
        ap_phi_mux_data_2921_V_read2991_phi_phi_fu_108670_p4 = ap_phi_reg_pp0_iter0_data_2921_V_read2991_phi_reg_108666.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_66777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_66777_p6 = data_2921_V_read2991_phi_reg_108666.read();
    } else {
        ap_phi_mux_data_2921_V_read2991_rewind_phi_fu_66777_p6 = data_2921_V_read2991_rewind_reg_66773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2922_V_read2992_phi_phi_fu_108683_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2922_V_read2992_phi_phi_fu_108683_p4 = ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_66791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2922_V_read2992_phi_phi_fu_108683_p4 = data_2922_V_read.read();
        } else {
            ap_phi_mux_data_2922_V_read2992_phi_phi_fu_108683_p4 = ap_phi_reg_pp0_iter0_data_2922_V_read2992_phi_reg_108679.read();
        }
    } else {
        ap_phi_mux_data_2922_V_read2992_phi_phi_fu_108683_p4 = ap_phi_reg_pp0_iter0_data_2922_V_read2992_phi_reg_108679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_66791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_66791_p6 = data_2922_V_read2992_phi_reg_108679.read();
    } else {
        ap_phi_mux_data_2922_V_read2992_rewind_phi_fu_66791_p6 = data_2922_V_read2992_rewind_reg_66787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2923_V_read2993_phi_phi_fu_108696_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2923_V_read2993_phi_phi_fu_108696_p4 = ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_66805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2923_V_read2993_phi_phi_fu_108696_p4 = data_2923_V_read.read();
        } else {
            ap_phi_mux_data_2923_V_read2993_phi_phi_fu_108696_p4 = ap_phi_reg_pp0_iter0_data_2923_V_read2993_phi_reg_108692.read();
        }
    } else {
        ap_phi_mux_data_2923_V_read2993_phi_phi_fu_108696_p4 = ap_phi_reg_pp0_iter0_data_2923_V_read2993_phi_reg_108692.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_66805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_66805_p6 = data_2923_V_read2993_phi_reg_108692.read();
    } else {
        ap_phi_mux_data_2923_V_read2993_rewind_phi_fu_66805_p6 = data_2923_V_read2993_rewind_reg_66801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2924_V_read2994_phi_phi_fu_108709_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2924_V_read2994_phi_phi_fu_108709_p4 = ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_66819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2924_V_read2994_phi_phi_fu_108709_p4 = data_2924_V_read.read();
        } else {
            ap_phi_mux_data_2924_V_read2994_phi_phi_fu_108709_p4 = ap_phi_reg_pp0_iter0_data_2924_V_read2994_phi_reg_108705.read();
        }
    } else {
        ap_phi_mux_data_2924_V_read2994_phi_phi_fu_108709_p4 = ap_phi_reg_pp0_iter0_data_2924_V_read2994_phi_reg_108705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_66819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_66819_p6 = data_2924_V_read2994_phi_reg_108705.read();
    } else {
        ap_phi_mux_data_2924_V_read2994_rewind_phi_fu_66819_p6 = data_2924_V_read2994_rewind_reg_66815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2925_V_read2995_phi_phi_fu_108722_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2925_V_read2995_phi_phi_fu_108722_p4 = ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_66833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2925_V_read2995_phi_phi_fu_108722_p4 = data_2925_V_read.read();
        } else {
            ap_phi_mux_data_2925_V_read2995_phi_phi_fu_108722_p4 = ap_phi_reg_pp0_iter0_data_2925_V_read2995_phi_reg_108718.read();
        }
    } else {
        ap_phi_mux_data_2925_V_read2995_phi_phi_fu_108722_p4 = ap_phi_reg_pp0_iter0_data_2925_V_read2995_phi_reg_108718.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_66833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_66833_p6 = data_2925_V_read2995_phi_reg_108718.read();
    } else {
        ap_phi_mux_data_2925_V_read2995_rewind_phi_fu_66833_p6 = data_2925_V_read2995_rewind_reg_66829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2926_V_read2996_phi_phi_fu_108735_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2926_V_read2996_phi_phi_fu_108735_p4 = ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_66847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2926_V_read2996_phi_phi_fu_108735_p4 = data_2926_V_read.read();
        } else {
            ap_phi_mux_data_2926_V_read2996_phi_phi_fu_108735_p4 = ap_phi_reg_pp0_iter0_data_2926_V_read2996_phi_reg_108731.read();
        }
    } else {
        ap_phi_mux_data_2926_V_read2996_phi_phi_fu_108735_p4 = ap_phi_reg_pp0_iter0_data_2926_V_read2996_phi_reg_108731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_66847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_66847_p6 = data_2926_V_read2996_phi_reg_108731.read();
    } else {
        ap_phi_mux_data_2926_V_read2996_rewind_phi_fu_66847_p6 = data_2926_V_read2996_rewind_reg_66843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2927_V_read2997_phi_phi_fu_108748_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2927_V_read2997_phi_phi_fu_108748_p4 = ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_66861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2927_V_read2997_phi_phi_fu_108748_p4 = data_2927_V_read.read();
        } else {
            ap_phi_mux_data_2927_V_read2997_phi_phi_fu_108748_p4 = ap_phi_reg_pp0_iter0_data_2927_V_read2997_phi_reg_108744.read();
        }
    } else {
        ap_phi_mux_data_2927_V_read2997_phi_phi_fu_108748_p4 = ap_phi_reg_pp0_iter0_data_2927_V_read2997_phi_reg_108744.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_66861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_66861_p6 = data_2927_V_read2997_phi_reg_108744.read();
    } else {
        ap_phi_mux_data_2927_V_read2997_rewind_phi_fu_66861_p6 = data_2927_V_read2997_rewind_reg_66857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2928_V_read2998_phi_phi_fu_108761_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2928_V_read2998_phi_phi_fu_108761_p4 = ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_66875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2928_V_read2998_phi_phi_fu_108761_p4 = data_2928_V_read.read();
        } else {
            ap_phi_mux_data_2928_V_read2998_phi_phi_fu_108761_p4 = ap_phi_reg_pp0_iter0_data_2928_V_read2998_phi_reg_108757.read();
        }
    } else {
        ap_phi_mux_data_2928_V_read2998_phi_phi_fu_108761_p4 = ap_phi_reg_pp0_iter0_data_2928_V_read2998_phi_reg_108757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_66875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_66875_p6 = data_2928_V_read2998_phi_reg_108757.read();
    } else {
        ap_phi_mux_data_2928_V_read2998_rewind_phi_fu_66875_p6 = data_2928_V_read2998_rewind_reg_66871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2929_V_read2999_phi_phi_fu_108774_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2929_V_read2999_phi_phi_fu_108774_p4 = ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_66889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2929_V_read2999_phi_phi_fu_108774_p4 = data_2929_V_read.read();
        } else {
            ap_phi_mux_data_2929_V_read2999_phi_phi_fu_108774_p4 = ap_phi_reg_pp0_iter0_data_2929_V_read2999_phi_reg_108770.read();
        }
    } else {
        ap_phi_mux_data_2929_V_read2999_phi_phi_fu_108774_p4 = ap_phi_reg_pp0_iter0_data_2929_V_read2999_phi_reg_108770.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_66889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_66889_p6 = data_2929_V_read2999_phi_reg_108770.read();
    } else {
        ap_phi_mux_data_2929_V_read2999_rewind_phi_fu_66889_p6 = data_2929_V_read2999_rewind_reg_66885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_292_V_read362_phi_phi_fu_74493_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_292_V_read362_phi_phi_fu_74493_p4 = ap_phi_mux_data_292_V_read362_rewind_phi_fu_29971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_292_V_read362_phi_phi_fu_74493_p4 = data_292_V_read.read();
        } else {
            ap_phi_mux_data_292_V_read362_phi_phi_fu_74493_p4 = ap_phi_reg_pp0_iter0_data_292_V_read362_phi_reg_74489.read();
        }
    } else {
        ap_phi_mux_data_292_V_read362_phi_phi_fu_74493_p4 = ap_phi_reg_pp0_iter0_data_292_V_read362_phi_reg_74489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_292_V_read362_rewind_phi_fu_29971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_292_V_read362_rewind_phi_fu_29971_p6 = data_292_V_read362_phi_reg_74489.read();
    } else {
        ap_phi_mux_data_292_V_read362_rewind_phi_fu_29971_p6 = data_292_V_read362_rewind_reg_29967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2930_V_read3000_phi_phi_fu_108787_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2930_V_read3000_phi_phi_fu_108787_p4 = ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_66903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2930_V_read3000_phi_phi_fu_108787_p4 = data_2930_V_read.read();
        } else {
            ap_phi_mux_data_2930_V_read3000_phi_phi_fu_108787_p4 = ap_phi_reg_pp0_iter0_data_2930_V_read3000_phi_reg_108783.read();
        }
    } else {
        ap_phi_mux_data_2930_V_read3000_phi_phi_fu_108787_p4 = ap_phi_reg_pp0_iter0_data_2930_V_read3000_phi_reg_108783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_66903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_66903_p6 = data_2930_V_read3000_phi_reg_108783.read();
    } else {
        ap_phi_mux_data_2930_V_read3000_rewind_phi_fu_66903_p6 = data_2930_V_read3000_rewind_reg_66899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2931_V_read3001_phi_phi_fu_108800_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2931_V_read3001_phi_phi_fu_108800_p4 = ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_66917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2931_V_read3001_phi_phi_fu_108800_p4 = data_2931_V_read.read();
        } else {
            ap_phi_mux_data_2931_V_read3001_phi_phi_fu_108800_p4 = ap_phi_reg_pp0_iter0_data_2931_V_read3001_phi_reg_108796.read();
        }
    } else {
        ap_phi_mux_data_2931_V_read3001_phi_phi_fu_108800_p4 = ap_phi_reg_pp0_iter0_data_2931_V_read3001_phi_reg_108796.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_66917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_66917_p6 = data_2931_V_read3001_phi_reg_108796.read();
    } else {
        ap_phi_mux_data_2931_V_read3001_rewind_phi_fu_66917_p6 = data_2931_V_read3001_rewind_reg_66913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2932_V_read3002_phi_phi_fu_108813_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2932_V_read3002_phi_phi_fu_108813_p4 = ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_66931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2932_V_read3002_phi_phi_fu_108813_p4 = data_2932_V_read.read();
        } else {
            ap_phi_mux_data_2932_V_read3002_phi_phi_fu_108813_p4 = ap_phi_reg_pp0_iter0_data_2932_V_read3002_phi_reg_108809.read();
        }
    } else {
        ap_phi_mux_data_2932_V_read3002_phi_phi_fu_108813_p4 = ap_phi_reg_pp0_iter0_data_2932_V_read3002_phi_reg_108809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_66931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_66931_p6 = data_2932_V_read3002_phi_reg_108809.read();
    } else {
        ap_phi_mux_data_2932_V_read3002_rewind_phi_fu_66931_p6 = data_2932_V_read3002_rewind_reg_66927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2933_V_read3003_phi_phi_fu_108826_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2933_V_read3003_phi_phi_fu_108826_p4 = ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_66945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2933_V_read3003_phi_phi_fu_108826_p4 = data_2933_V_read.read();
        } else {
            ap_phi_mux_data_2933_V_read3003_phi_phi_fu_108826_p4 = ap_phi_reg_pp0_iter0_data_2933_V_read3003_phi_reg_108822.read();
        }
    } else {
        ap_phi_mux_data_2933_V_read3003_phi_phi_fu_108826_p4 = ap_phi_reg_pp0_iter0_data_2933_V_read3003_phi_reg_108822.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_66945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_66945_p6 = data_2933_V_read3003_phi_reg_108822.read();
    } else {
        ap_phi_mux_data_2933_V_read3003_rewind_phi_fu_66945_p6 = data_2933_V_read3003_rewind_reg_66941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2934_V_read3004_phi_phi_fu_108839_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2934_V_read3004_phi_phi_fu_108839_p4 = ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_66959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2934_V_read3004_phi_phi_fu_108839_p4 = data_2934_V_read.read();
        } else {
            ap_phi_mux_data_2934_V_read3004_phi_phi_fu_108839_p4 = ap_phi_reg_pp0_iter0_data_2934_V_read3004_phi_reg_108835.read();
        }
    } else {
        ap_phi_mux_data_2934_V_read3004_phi_phi_fu_108839_p4 = ap_phi_reg_pp0_iter0_data_2934_V_read3004_phi_reg_108835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_66959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_66959_p6 = data_2934_V_read3004_phi_reg_108835.read();
    } else {
        ap_phi_mux_data_2934_V_read3004_rewind_phi_fu_66959_p6 = data_2934_V_read3004_rewind_reg_66955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2935_V_read3005_phi_phi_fu_108852_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2935_V_read3005_phi_phi_fu_108852_p4 = ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_66973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2935_V_read3005_phi_phi_fu_108852_p4 = data_2935_V_read.read();
        } else {
            ap_phi_mux_data_2935_V_read3005_phi_phi_fu_108852_p4 = ap_phi_reg_pp0_iter0_data_2935_V_read3005_phi_reg_108848.read();
        }
    } else {
        ap_phi_mux_data_2935_V_read3005_phi_phi_fu_108852_p4 = ap_phi_reg_pp0_iter0_data_2935_V_read3005_phi_reg_108848.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_66973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_66973_p6 = data_2935_V_read3005_phi_reg_108848.read();
    } else {
        ap_phi_mux_data_2935_V_read3005_rewind_phi_fu_66973_p6 = data_2935_V_read3005_rewind_reg_66969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2936_V_read3006_phi_phi_fu_108865_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2936_V_read3006_phi_phi_fu_108865_p4 = ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_66987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2936_V_read3006_phi_phi_fu_108865_p4 = data_2936_V_read.read();
        } else {
            ap_phi_mux_data_2936_V_read3006_phi_phi_fu_108865_p4 = ap_phi_reg_pp0_iter0_data_2936_V_read3006_phi_reg_108861.read();
        }
    } else {
        ap_phi_mux_data_2936_V_read3006_phi_phi_fu_108865_p4 = ap_phi_reg_pp0_iter0_data_2936_V_read3006_phi_reg_108861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_66987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_66987_p6 = data_2936_V_read3006_phi_reg_108861.read();
    } else {
        ap_phi_mux_data_2936_V_read3006_rewind_phi_fu_66987_p6 = data_2936_V_read3006_rewind_reg_66983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2937_V_read3007_phi_phi_fu_108878_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2937_V_read3007_phi_phi_fu_108878_p4 = ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_67001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2937_V_read3007_phi_phi_fu_108878_p4 = data_2937_V_read.read();
        } else {
            ap_phi_mux_data_2937_V_read3007_phi_phi_fu_108878_p4 = ap_phi_reg_pp0_iter0_data_2937_V_read3007_phi_reg_108874.read();
        }
    } else {
        ap_phi_mux_data_2937_V_read3007_phi_phi_fu_108878_p4 = ap_phi_reg_pp0_iter0_data_2937_V_read3007_phi_reg_108874.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_67001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_67001_p6 = data_2937_V_read3007_phi_reg_108874.read();
    } else {
        ap_phi_mux_data_2937_V_read3007_rewind_phi_fu_67001_p6 = data_2937_V_read3007_rewind_reg_66997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2938_V_read3008_phi_phi_fu_108891_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2938_V_read3008_phi_phi_fu_108891_p4 = ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_67015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2938_V_read3008_phi_phi_fu_108891_p4 = data_2938_V_read.read();
        } else {
            ap_phi_mux_data_2938_V_read3008_phi_phi_fu_108891_p4 = ap_phi_reg_pp0_iter0_data_2938_V_read3008_phi_reg_108887.read();
        }
    } else {
        ap_phi_mux_data_2938_V_read3008_phi_phi_fu_108891_p4 = ap_phi_reg_pp0_iter0_data_2938_V_read3008_phi_reg_108887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_67015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_67015_p6 = data_2938_V_read3008_phi_reg_108887.read();
    } else {
        ap_phi_mux_data_2938_V_read3008_rewind_phi_fu_67015_p6 = data_2938_V_read3008_rewind_reg_67011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2939_V_read3009_phi_phi_fu_108904_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2939_V_read3009_phi_phi_fu_108904_p4 = ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_67029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2939_V_read3009_phi_phi_fu_108904_p4 = data_2939_V_read.read();
        } else {
            ap_phi_mux_data_2939_V_read3009_phi_phi_fu_108904_p4 = ap_phi_reg_pp0_iter0_data_2939_V_read3009_phi_reg_108900.read();
        }
    } else {
        ap_phi_mux_data_2939_V_read3009_phi_phi_fu_108904_p4 = ap_phi_reg_pp0_iter0_data_2939_V_read3009_phi_reg_108900.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_67029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_67029_p6 = data_2939_V_read3009_phi_reg_108900.read();
    } else {
        ap_phi_mux_data_2939_V_read3009_rewind_phi_fu_67029_p6 = data_2939_V_read3009_rewind_reg_67025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_293_V_read363_phi_phi_fu_74506_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_293_V_read363_phi_phi_fu_74506_p4 = ap_phi_mux_data_293_V_read363_rewind_phi_fu_29985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_293_V_read363_phi_phi_fu_74506_p4 = data_293_V_read.read();
        } else {
            ap_phi_mux_data_293_V_read363_phi_phi_fu_74506_p4 = ap_phi_reg_pp0_iter0_data_293_V_read363_phi_reg_74502.read();
        }
    } else {
        ap_phi_mux_data_293_V_read363_phi_phi_fu_74506_p4 = ap_phi_reg_pp0_iter0_data_293_V_read363_phi_reg_74502.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_293_V_read363_rewind_phi_fu_29985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_293_V_read363_rewind_phi_fu_29985_p6 = data_293_V_read363_phi_reg_74502.read();
    } else {
        ap_phi_mux_data_293_V_read363_rewind_phi_fu_29985_p6 = data_293_V_read363_rewind_reg_29981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2940_V_read3010_phi_phi_fu_108917_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2940_V_read3010_phi_phi_fu_108917_p4 = ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_67043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2940_V_read3010_phi_phi_fu_108917_p4 = data_2940_V_read.read();
        } else {
            ap_phi_mux_data_2940_V_read3010_phi_phi_fu_108917_p4 = ap_phi_reg_pp0_iter0_data_2940_V_read3010_phi_reg_108913.read();
        }
    } else {
        ap_phi_mux_data_2940_V_read3010_phi_phi_fu_108917_p4 = ap_phi_reg_pp0_iter0_data_2940_V_read3010_phi_reg_108913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_67043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_67043_p6 = data_2940_V_read3010_phi_reg_108913.read();
    } else {
        ap_phi_mux_data_2940_V_read3010_rewind_phi_fu_67043_p6 = data_2940_V_read3010_rewind_reg_67039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2941_V_read3011_phi_phi_fu_108930_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2941_V_read3011_phi_phi_fu_108930_p4 = ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_67057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2941_V_read3011_phi_phi_fu_108930_p4 = data_2941_V_read.read();
        } else {
            ap_phi_mux_data_2941_V_read3011_phi_phi_fu_108930_p4 = ap_phi_reg_pp0_iter0_data_2941_V_read3011_phi_reg_108926.read();
        }
    } else {
        ap_phi_mux_data_2941_V_read3011_phi_phi_fu_108930_p4 = ap_phi_reg_pp0_iter0_data_2941_V_read3011_phi_reg_108926.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_67057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_67057_p6 = data_2941_V_read3011_phi_reg_108926.read();
    } else {
        ap_phi_mux_data_2941_V_read3011_rewind_phi_fu_67057_p6 = data_2941_V_read3011_rewind_reg_67053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2942_V_read3012_phi_phi_fu_108943_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2942_V_read3012_phi_phi_fu_108943_p4 = ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_67071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2942_V_read3012_phi_phi_fu_108943_p4 = data_2942_V_read.read();
        } else {
            ap_phi_mux_data_2942_V_read3012_phi_phi_fu_108943_p4 = ap_phi_reg_pp0_iter0_data_2942_V_read3012_phi_reg_108939.read();
        }
    } else {
        ap_phi_mux_data_2942_V_read3012_phi_phi_fu_108943_p4 = ap_phi_reg_pp0_iter0_data_2942_V_read3012_phi_reg_108939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_67071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_67071_p6 = data_2942_V_read3012_phi_reg_108939.read();
    } else {
        ap_phi_mux_data_2942_V_read3012_rewind_phi_fu_67071_p6 = data_2942_V_read3012_rewind_reg_67067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2943_V_read3013_phi_phi_fu_108956_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2943_V_read3013_phi_phi_fu_108956_p4 = ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_67085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2943_V_read3013_phi_phi_fu_108956_p4 = data_2943_V_read.read();
        } else {
            ap_phi_mux_data_2943_V_read3013_phi_phi_fu_108956_p4 = ap_phi_reg_pp0_iter0_data_2943_V_read3013_phi_reg_108952.read();
        }
    } else {
        ap_phi_mux_data_2943_V_read3013_phi_phi_fu_108956_p4 = ap_phi_reg_pp0_iter0_data_2943_V_read3013_phi_reg_108952.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_67085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_67085_p6 = data_2943_V_read3013_phi_reg_108952.read();
    } else {
        ap_phi_mux_data_2943_V_read3013_rewind_phi_fu_67085_p6 = data_2943_V_read3013_rewind_reg_67081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2944_V_read3014_phi_phi_fu_108969_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2944_V_read3014_phi_phi_fu_108969_p4 = ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_67099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2944_V_read3014_phi_phi_fu_108969_p4 = data_2944_V_read.read();
        } else {
            ap_phi_mux_data_2944_V_read3014_phi_phi_fu_108969_p4 = ap_phi_reg_pp0_iter0_data_2944_V_read3014_phi_reg_108965.read();
        }
    } else {
        ap_phi_mux_data_2944_V_read3014_phi_phi_fu_108969_p4 = ap_phi_reg_pp0_iter0_data_2944_V_read3014_phi_reg_108965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_67099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_67099_p6 = data_2944_V_read3014_phi_reg_108965.read();
    } else {
        ap_phi_mux_data_2944_V_read3014_rewind_phi_fu_67099_p6 = data_2944_V_read3014_rewind_reg_67095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2945_V_read3015_phi_phi_fu_108982_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2945_V_read3015_phi_phi_fu_108982_p4 = ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_67113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2945_V_read3015_phi_phi_fu_108982_p4 = data_2945_V_read.read();
        } else {
            ap_phi_mux_data_2945_V_read3015_phi_phi_fu_108982_p4 = ap_phi_reg_pp0_iter0_data_2945_V_read3015_phi_reg_108978.read();
        }
    } else {
        ap_phi_mux_data_2945_V_read3015_phi_phi_fu_108982_p4 = ap_phi_reg_pp0_iter0_data_2945_V_read3015_phi_reg_108978.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_67113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_67113_p6 = data_2945_V_read3015_phi_reg_108978.read();
    } else {
        ap_phi_mux_data_2945_V_read3015_rewind_phi_fu_67113_p6 = data_2945_V_read3015_rewind_reg_67109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2946_V_read3016_phi_phi_fu_108995_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2946_V_read3016_phi_phi_fu_108995_p4 = ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_67127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2946_V_read3016_phi_phi_fu_108995_p4 = data_2946_V_read.read();
        } else {
            ap_phi_mux_data_2946_V_read3016_phi_phi_fu_108995_p4 = ap_phi_reg_pp0_iter0_data_2946_V_read3016_phi_reg_108991.read();
        }
    } else {
        ap_phi_mux_data_2946_V_read3016_phi_phi_fu_108995_p4 = ap_phi_reg_pp0_iter0_data_2946_V_read3016_phi_reg_108991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_67127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_67127_p6 = data_2946_V_read3016_phi_reg_108991.read();
    } else {
        ap_phi_mux_data_2946_V_read3016_rewind_phi_fu_67127_p6 = data_2946_V_read3016_rewind_reg_67123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2947_V_read3017_phi_phi_fu_109008_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2947_V_read3017_phi_phi_fu_109008_p4 = ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_67141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2947_V_read3017_phi_phi_fu_109008_p4 = data_2947_V_read.read();
        } else {
            ap_phi_mux_data_2947_V_read3017_phi_phi_fu_109008_p4 = ap_phi_reg_pp0_iter0_data_2947_V_read3017_phi_reg_109004.read();
        }
    } else {
        ap_phi_mux_data_2947_V_read3017_phi_phi_fu_109008_p4 = ap_phi_reg_pp0_iter0_data_2947_V_read3017_phi_reg_109004.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_67141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_67141_p6 = data_2947_V_read3017_phi_reg_109004.read();
    } else {
        ap_phi_mux_data_2947_V_read3017_rewind_phi_fu_67141_p6 = data_2947_V_read3017_rewind_reg_67137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2948_V_read3018_phi_phi_fu_109021_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2948_V_read3018_phi_phi_fu_109021_p4 = ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_67155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2948_V_read3018_phi_phi_fu_109021_p4 = data_2948_V_read.read();
        } else {
            ap_phi_mux_data_2948_V_read3018_phi_phi_fu_109021_p4 = ap_phi_reg_pp0_iter0_data_2948_V_read3018_phi_reg_109017.read();
        }
    } else {
        ap_phi_mux_data_2948_V_read3018_phi_phi_fu_109021_p4 = ap_phi_reg_pp0_iter0_data_2948_V_read3018_phi_reg_109017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_67155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_67155_p6 = data_2948_V_read3018_phi_reg_109017.read();
    } else {
        ap_phi_mux_data_2948_V_read3018_rewind_phi_fu_67155_p6 = data_2948_V_read3018_rewind_reg_67151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2949_V_read3019_phi_phi_fu_109034_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2949_V_read3019_phi_phi_fu_109034_p4 = ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_67169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2949_V_read3019_phi_phi_fu_109034_p4 = data_2949_V_read.read();
        } else {
            ap_phi_mux_data_2949_V_read3019_phi_phi_fu_109034_p4 = ap_phi_reg_pp0_iter0_data_2949_V_read3019_phi_reg_109030.read();
        }
    } else {
        ap_phi_mux_data_2949_V_read3019_phi_phi_fu_109034_p4 = ap_phi_reg_pp0_iter0_data_2949_V_read3019_phi_reg_109030.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_67169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_67169_p6 = data_2949_V_read3019_phi_reg_109030.read();
    } else {
        ap_phi_mux_data_2949_V_read3019_rewind_phi_fu_67169_p6 = data_2949_V_read3019_rewind_reg_67165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_294_V_read364_phi_phi_fu_74519_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_294_V_read364_phi_phi_fu_74519_p4 = ap_phi_mux_data_294_V_read364_rewind_phi_fu_29999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_294_V_read364_phi_phi_fu_74519_p4 = data_294_V_read.read();
        } else {
            ap_phi_mux_data_294_V_read364_phi_phi_fu_74519_p4 = ap_phi_reg_pp0_iter0_data_294_V_read364_phi_reg_74515.read();
        }
    } else {
        ap_phi_mux_data_294_V_read364_phi_phi_fu_74519_p4 = ap_phi_reg_pp0_iter0_data_294_V_read364_phi_reg_74515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_294_V_read364_rewind_phi_fu_29999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_294_V_read364_rewind_phi_fu_29999_p6 = data_294_V_read364_phi_reg_74515.read();
    } else {
        ap_phi_mux_data_294_V_read364_rewind_phi_fu_29999_p6 = data_294_V_read364_rewind_reg_29995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2950_V_read3020_phi_phi_fu_109047_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2950_V_read3020_phi_phi_fu_109047_p4 = ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_67183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2950_V_read3020_phi_phi_fu_109047_p4 = data_2950_V_read.read();
        } else {
            ap_phi_mux_data_2950_V_read3020_phi_phi_fu_109047_p4 = ap_phi_reg_pp0_iter0_data_2950_V_read3020_phi_reg_109043.read();
        }
    } else {
        ap_phi_mux_data_2950_V_read3020_phi_phi_fu_109047_p4 = ap_phi_reg_pp0_iter0_data_2950_V_read3020_phi_reg_109043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_67183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_67183_p6 = data_2950_V_read3020_phi_reg_109043.read();
    } else {
        ap_phi_mux_data_2950_V_read3020_rewind_phi_fu_67183_p6 = data_2950_V_read3020_rewind_reg_67179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2951_V_read3021_phi_phi_fu_109060_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2951_V_read3021_phi_phi_fu_109060_p4 = ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_67197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2951_V_read3021_phi_phi_fu_109060_p4 = data_2951_V_read.read();
        } else {
            ap_phi_mux_data_2951_V_read3021_phi_phi_fu_109060_p4 = ap_phi_reg_pp0_iter0_data_2951_V_read3021_phi_reg_109056.read();
        }
    } else {
        ap_phi_mux_data_2951_V_read3021_phi_phi_fu_109060_p4 = ap_phi_reg_pp0_iter0_data_2951_V_read3021_phi_reg_109056.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_67197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_67197_p6 = data_2951_V_read3021_phi_reg_109056.read();
    } else {
        ap_phi_mux_data_2951_V_read3021_rewind_phi_fu_67197_p6 = data_2951_V_read3021_rewind_reg_67193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2952_V_read3022_phi_phi_fu_109073_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2952_V_read3022_phi_phi_fu_109073_p4 = ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_67211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2952_V_read3022_phi_phi_fu_109073_p4 = data_2952_V_read.read();
        } else {
            ap_phi_mux_data_2952_V_read3022_phi_phi_fu_109073_p4 = ap_phi_reg_pp0_iter0_data_2952_V_read3022_phi_reg_109069.read();
        }
    } else {
        ap_phi_mux_data_2952_V_read3022_phi_phi_fu_109073_p4 = ap_phi_reg_pp0_iter0_data_2952_V_read3022_phi_reg_109069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_67211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_67211_p6 = data_2952_V_read3022_phi_reg_109069.read();
    } else {
        ap_phi_mux_data_2952_V_read3022_rewind_phi_fu_67211_p6 = data_2952_V_read3022_rewind_reg_67207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2953_V_read3023_phi_phi_fu_109086_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2953_V_read3023_phi_phi_fu_109086_p4 = ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_67225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2953_V_read3023_phi_phi_fu_109086_p4 = data_2953_V_read.read();
        } else {
            ap_phi_mux_data_2953_V_read3023_phi_phi_fu_109086_p4 = ap_phi_reg_pp0_iter0_data_2953_V_read3023_phi_reg_109082.read();
        }
    } else {
        ap_phi_mux_data_2953_V_read3023_phi_phi_fu_109086_p4 = ap_phi_reg_pp0_iter0_data_2953_V_read3023_phi_reg_109082.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_67225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_67225_p6 = data_2953_V_read3023_phi_reg_109082.read();
    } else {
        ap_phi_mux_data_2953_V_read3023_rewind_phi_fu_67225_p6 = data_2953_V_read3023_rewind_reg_67221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2954_V_read3024_phi_phi_fu_109099_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2954_V_read3024_phi_phi_fu_109099_p4 = ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_67239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2954_V_read3024_phi_phi_fu_109099_p4 = data_2954_V_read.read();
        } else {
            ap_phi_mux_data_2954_V_read3024_phi_phi_fu_109099_p4 = ap_phi_reg_pp0_iter0_data_2954_V_read3024_phi_reg_109095.read();
        }
    } else {
        ap_phi_mux_data_2954_V_read3024_phi_phi_fu_109099_p4 = ap_phi_reg_pp0_iter0_data_2954_V_read3024_phi_reg_109095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_67239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_67239_p6 = data_2954_V_read3024_phi_reg_109095.read();
    } else {
        ap_phi_mux_data_2954_V_read3024_rewind_phi_fu_67239_p6 = data_2954_V_read3024_rewind_reg_67235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2955_V_read3025_phi_phi_fu_109112_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2955_V_read3025_phi_phi_fu_109112_p4 = ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_67253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2955_V_read3025_phi_phi_fu_109112_p4 = data_2955_V_read.read();
        } else {
            ap_phi_mux_data_2955_V_read3025_phi_phi_fu_109112_p4 = ap_phi_reg_pp0_iter0_data_2955_V_read3025_phi_reg_109108.read();
        }
    } else {
        ap_phi_mux_data_2955_V_read3025_phi_phi_fu_109112_p4 = ap_phi_reg_pp0_iter0_data_2955_V_read3025_phi_reg_109108.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_67253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_67253_p6 = data_2955_V_read3025_phi_reg_109108.read();
    } else {
        ap_phi_mux_data_2955_V_read3025_rewind_phi_fu_67253_p6 = data_2955_V_read3025_rewind_reg_67249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2956_V_read3026_phi_phi_fu_109125_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2956_V_read3026_phi_phi_fu_109125_p4 = ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_67267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2956_V_read3026_phi_phi_fu_109125_p4 = data_2956_V_read.read();
        } else {
            ap_phi_mux_data_2956_V_read3026_phi_phi_fu_109125_p4 = ap_phi_reg_pp0_iter0_data_2956_V_read3026_phi_reg_109121.read();
        }
    } else {
        ap_phi_mux_data_2956_V_read3026_phi_phi_fu_109125_p4 = ap_phi_reg_pp0_iter0_data_2956_V_read3026_phi_reg_109121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_67267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_67267_p6 = data_2956_V_read3026_phi_reg_109121.read();
    } else {
        ap_phi_mux_data_2956_V_read3026_rewind_phi_fu_67267_p6 = data_2956_V_read3026_rewind_reg_67263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2957_V_read3027_phi_phi_fu_109138_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2957_V_read3027_phi_phi_fu_109138_p4 = ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_67281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2957_V_read3027_phi_phi_fu_109138_p4 = data_2957_V_read.read();
        } else {
            ap_phi_mux_data_2957_V_read3027_phi_phi_fu_109138_p4 = ap_phi_reg_pp0_iter0_data_2957_V_read3027_phi_reg_109134.read();
        }
    } else {
        ap_phi_mux_data_2957_V_read3027_phi_phi_fu_109138_p4 = ap_phi_reg_pp0_iter0_data_2957_V_read3027_phi_reg_109134.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_67281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_67281_p6 = data_2957_V_read3027_phi_reg_109134.read();
    } else {
        ap_phi_mux_data_2957_V_read3027_rewind_phi_fu_67281_p6 = data_2957_V_read3027_rewind_reg_67277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2958_V_read3028_phi_phi_fu_109151_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2958_V_read3028_phi_phi_fu_109151_p4 = ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_67295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2958_V_read3028_phi_phi_fu_109151_p4 = data_2958_V_read.read();
        } else {
            ap_phi_mux_data_2958_V_read3028_phi_phi_fu_109151_p4 = ap_phi_reg_pp0_iter0_data_2958_V_read3028_phi_reg_109147.read();
        }
    } else {
        ap_phi_mux_data_2958_V_read3028_phi_phi_fu_109151_p4 = ap_phi_reg_pp0_iter0_data_2958_V_read3028_phi_reg_109147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_67295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_67295_p6 = data_2958_V_read3028_phi_reg_109147.read();
    } else {
        ap_phi_mux_data_2958_V_read3028_rewind_phi_fu_67295_p6 = data_2958_V_read3028_rewind_reg_67291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2959_V_read3029_phi_phi_fu_109164_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2959_V_read3029_phi_phi_fu_109164_p4 = ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_67309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2959_V_read3029_phi_phi_fu_109164_p4 = data_2959_V_read.read();
        } else {
            ap_phi_mux_data_2959_V_read3029_phi_phi_fu_109164_p4 = ap_phi_reg_pp0_iter0_data_2959_V_read3029_phi_reg_109160.read();
        }
    } else {
        ap_phi_mux_data_2959_V_read3029_phi_phi_fu_109164_p4 = ap_phi_reg_pp0_iter0_data_2959_V_read3029_phi_reg_109160.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_67309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_67309_p6 = data_2959_V_read3029_phi_reg_109160.read();
    } else {
        ap_phi_mux_data_2959_V_read3029_rewind_phi_fu_67309_p6 = data_2959_V_read3029_rewind_reg_67305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_295_V_read365_phi_phi_fu_74532_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_295_V_read365_phi_phi_fu_74532_p4 = ap_phi_mux_data_295_V_read365_rewind_phi_fu_30013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_295_V_read365_phi_phi_fu_74532_p4 = data_295_V_read.read();
        } else {
            ap_phi_mux_data_295_V_read365_phi_phi_fu_74532_p4 = ap_phi_reg_pp0_iter0_data_295_V_read365_phi_reg_74528.read();
        }
    } else {
        ap_phi_mux_data_295_V_read365_phi_phi_fu_74532_p4 = ap_phi_reg_pp0_iter0_data_295_V_read365_phi_reg_74528.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_295_V_read365_rewind_phi_fu_30013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_295_V_read365_rewind_phi_fu_30013_p6 = data_295_V_read365_phi_reg_74528.read();
    } else {
        ap_phi_mux_data_295_V_read365_rewind_phi_fu_30013_p6 = data_295_V_read365_rewind_reg_30009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2960_V_read3030_phi_phi_fu_109177_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2960_V_read3030_phi_phi_fu_109177_p4 = ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_67323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2960_V_read3030_phi_phi_fu_109177_p4 = data_2960_V_read.read();
        } else {
            ap_phi_mux_data_2960_V_read3030_phi_phi_fu_109177_p4 = ap_phi_reg_pp0_iter0_data_2960_V_read3030_phi_reg_109173.read();
        }
    } else {
        ap_phi_mux_data_2960_V_read3030_phi_phi_fu_109177_p4 = ap_phi_reg_pp0_iter0_data_2960_V_read3030_phi_reg_109173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_67323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_67323_p6 = data_2960_V_read3030_phi_reg_109173.read();
    } else {
        ap_phi_mux_data_2960_V_read3030_rewind_phi_fu_67323_p6 = data_2960_V_read3030_rewind_reg_67319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2961_V_read3031_phi_phi_fu_109190_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2961_V_read3031_phi_phi_fu_109190_p4 = ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_67337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2961_V_read3031_phi_phi_fu_109190_p4 = data_2961_V_read.read();
        } else {
            ap_phi_mux_data_2961_V_read3031_phi_phi_fu_109190_p4 = ap_phi_reg_pp0_iter0_data_2961_V_read3031_phi_reg_109186.read();
        }
    } else {
        ap_phi_mux_data_2961_V_read3031_phi_phi_fu_109190_p4 = ap_phi_reg_pp0_iter0_data_2961_V_read3031_phi_reg_109186.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_67337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_67337_p6 = data_2961_V_read3031_phi_reg_109186.read();
    } else {
        ap_phi_mux_data_2961_V_read3031_rewind_phi_fu_67337_p6 = data_2961_V_read3031_rewind_reg_67333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2962_V_read3032_phi_phi_fu_109203_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2962_V_read3032_phi_phi_fu_109203_p4 = ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_67351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2962_V_read3032_phi_phi_fu_109203_p4 = data_2962_V_read.read();
        } else {
            ap_phi_mux_data_2962_V_read3032_phi_phi_fu_109203_p4 = ap_phi_reg_pp0_iter0_data_2962_V_read3032_phi_reg_109199.read();
        }
    } else {
        ap_phi_mux_data_2962_V_read3032_phi_phi_fu_109203_p4 = ap_phi_reg_pp0_iter0_data_2962_V_read3032_phi_reg_109199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_67351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_67351_p6 = data_2962_V_read3032_phi_reg_109199.read();
    } else {
        ap_phi_mux_data_2962_V_read3032_rewind_phi_fu_67351_p6 = data_2962_V_read3032_rewind_reg_67347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2963_V_read3033_phi_phi_fu_109216_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2963_V_read3033_phi_phi_fu_109216_p4 = ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_67365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2963_V_read3033_phi_phi_fu_109216_p4 = data_2963_V_read.read();
        } else {
            ap_phi_mux_data_2963_V_read3033_phi_phi_fu_109216_p4 = ap_phi_reg_pp0_iter0_data_2963_V_read3033_phi_reg_109212.read();
        }
    } else {
        ap_phi_mux_data_2963_V_read3033_phi_phi_fu_109216_p4 = ap_phi_reg_pp0_iter0_data_2963_V_read3033_phi_reg_109212.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_67365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_67365_p6 = data_2963_V_read3033_phi_reg_109212.read();
    } else {
        ap_phi_mux_data_2963_V_read3033_rewind_phi_fu_67365_p6 = data_2963_V_read3033_rewind_reg_67361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2964_V_read3034_phi_phi_fu_109229_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2964_V_read3034_phi_phi_fu_109229_p4 = ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_67379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2964_V_read3034_phi_phi_fu_109229_p4 = data_2964_V_read.read();
        } else {
            ap_phi_mux_data_2964_V_read3034_phi_phi_fu_109229_p4 = ap_phi_reg_pp0_iter0_data_2964_V_read3034_phi_reg_109225.read();
        }
    } else {
        ap_phi_mux_data_2964_V_read3034_phi_phi_fu_109229_p4 = ap_phi_reg_pp0_iter0_data_2964_V_read3034_phi_reg_109225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_67379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_67379_p6 = data_2964_V_read3034_phi_reg_109225.read();
    } else {
        ap_phi_mux_data_2964_V_read3034_rewind_phi_fu_67379_p6 = data_2964_V_read3034_rewind_reg_67375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2965_V_read3035_phi_phi_fu_109242_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2965_V_read3035_phi_phi_fu_109242_p4 = ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_67393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2965_V_read3035_phi_phi_fu_109242_p4 = data_2965_V_read.read();
        } else {
            ap_phi_mux_data_2965_V_read3035_phi_phi_fu_109242_p4 = ap_phi_reg_pp0_iter0_data_2965_V_read3035_phi_reg_109238.read();
        }
    } else {
        ap_phi_mux_data_2965_V_read3035_phi_phi_fu_109242_p4 = ap_phi_reg_pp0_iter0_data_2965_V_read3035_phi_reg_109238.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_67393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_67393_p6 = data_2965_V_read3035_phi_reg_109238.read();
    } else {
        ap_phi_mux_data_2965_V_read3035_rewind_phi_fu_67393_p6 = data_2965_V_read3035_rewind_reg_67389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2966_V_read3036_phi_phi_fu_109255_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2966_V_read3036_phi_phi_fu_109255_p4 = ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_67407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2966_V_read3036_phi_phi_fu_109255_p4 = data_2966_V_read.read();
        } else {
            ap_phi_mux_data_2966_V_read3036_phi_phi_fu_109255_p4 = ap_phi_reg_pp0_iter0_data_2966_V_read3036_phi_reg_109251.read();
        }
    } else {
        ap_phi_mux_data_2966_V_read3036_phi_phi_fu_109255_p4 = ap_phi_reg_pp0_iter0_data_2966_V_read3036_phi_reg_109251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_67407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_67407_p6 = data_2966_V_read3036_phi_reg_109251.read();
    } else {
        ap_phi_mux_data_2966_V_read3036_rewind_phi_fu_67407_p6 = data_2966_V_read3036_rewind_reg_67403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2967_V_read3037_phi_phi_fu_109268_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2967_V_read3037_phi_phi_fu_109268_p4 = ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_67421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2967_V_read3037_phi_phi_fu_109268_p4 = data_2967_V_read.read();
        } else {
            ap_phi_mux_data_2967_V_read3037_phi_phi_fu_109268_p4 = ap_phi_reg_pp0_iter0_data_2967_V_read3037_phi_reg_109264.read();
        }
    } else {
        ap_phi_mux_data_2967_V_read3037_phi_phi_fu_109268_p4 = ap_phi_reg_pp0_iter0_data_2967_V_read3037_phi_reg_109264.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_67421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_67421_p6 = data_2967_V_read3037_phi_reg_109264.read();
    } else {
        ap_phi_mux_data_2967_V_read3037_rewind_phi_fu_67421_p6 = data_2967_V_read3037_rewind_reg_67417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2968_V_read3038_phi_phi_fu_109281_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2968_V_read3038_phi_phi_fu_109281_p4 = ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_67435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2968_V_read3038_phi_phi_fu_109281_p4 = data_2968_V_read.read();
        } else {
            ap_phi_mux_data_2968_V_read3038_phi_phi_fu_109281_p4 = ap_phi_reg_pp0_iter0_data_2968_V_read3038_phi_reg_109277.read();
        }
    } else {
        ap_phi_mux_data_2968_V_read3038_phi_phi_fu_109281_p4 = ap_phi_reg_pp0_iter0_data_2968_V_read3038_phi_reg_109277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_67435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_67435_p6 = data_2968_V_read3038_phi_reg_109277.read();
    } else {
        ap_phi_mux_data_2968_V_read3038_rewind_phi_fu_67435_p6 = data_2968_V_read3038_rewind_reg_67431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2969_V_read3039_phi_phi_fu_109294_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2969_V_read3039_phi_phi_fu_109294_p4 = ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_67449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2969_V_read3039_phi_phi_fu_109294_p4 = data_2969_V_read.read();
        } else {
            ap_phi_mux_data_2969_V_read3039_phi_phi_fu_109294_p4 = ap_phi_reg_pp0_iter0_data_2969_V_read3039_phi_reg_109290.read();
        }
    } else {
        ap_phi_mux_data_2969_V_read3039_phi_phi_fu_109294_p4 = ap_phi_reg_pp0_iter0_data_2969_V_read3039_phi_reg_109290.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_67449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_67449_p6 = data_2969_V_read3039_phi_reg_109290.read();
    } else {
        ap_phi_mux_data_2969_V_read3039_rewind_phi_fu_67449_p6 = data_2969_V_read3039_rewind_reg_67445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_296_V_read366_phi_phi_fu_74545_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_296_V_read366_phi_phi_fu_74545_p4 = ap_phi_mux_data_296_V_read366_rewind_phi_fu_30027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_296_V_read366_phi_phi_fu_74545_p4 = data_296_V_read.read();
        } else {
            ap_phi_mux_data_296_V_read366_phi_phi_fu_74545_p4 = ap_phi_reg_pp0_iter0_data_296_V_read366_phi_reg_74541.read();
        }
    } else {
        ap_phi_mux_data_296_V_read366_phi_phi_fu_74545_p4 = ap_phi_reg_pp0_iter0_data_296_V_read366_phi_reg_74541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_296_V_read366_rewind_phi_fu_30027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_296_V_read366_rewind_phi_fu_30027_p6 = data_296_V_read366_phi_reg_74541.read();
    } else {
        ap_phi_mux_data_296_V_read366_rewind_phi_fu_30027_p6 = data_296_V_read366_rewind_reg_30023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2970_V_read3040_phi_phi_fu_109307_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2970_V_read3040_phi_phi_fu_109307_p4 = ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_67463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2970_V_read3040_phi_phi_fu_109307_p4 = data_2970_V_read.read();
        } else {
            ap_phi_mux_data_2970_V_read3040_phi_phi_fu_109307_p4 = ap_phi_reg_pp0_iter0_data_2970_V_read3040_phi_reg_109303.read();
        }
    } else {
        ap_phi_mux_data_2970_V_read3040_phi_phi_fu_109307_p4 = ap_phi_reg_pp0_iter0_data_2970_V_read3040_phi_reg_109303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_67463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_67463_p6 = data_2970_V_read3040_phi_reg_109303.read();
    } else {
        ap_phi_mux_data_2970_V_read3040_rewind_phi_fu_67463_p6 = data_2970_V_read3040_rewind_reg_67459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2971_V_read3041_phi_phi_fu_109320_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2971_V_read3041_phi_phi_fu_109320_p4 = ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_67477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2971_V_read3041_phi_phi_fu_109320_p4 = data_2971_V_read.read();
        } else {
            ap_phi_mux_data_2971_V_read3041_phi_phi_fu_109320_p4 = ap_phi_reg_pp0_iter0_data_2971_V_read3041_phi_reg_109316.read();
        }
    } else {
        ap_phi_mux_data_2971_V_read3041_phi_phi_fu_109320_p4 = ap_phi_reg_pp0_iter0_data_2971_V_read3041_phi_reg_109316.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_67477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_67477_p6 = data_2971_V_read3041_phi_reg_109316.read();
    } else {
        ap_phi_mux_data_2971_V_read3041_rewind_phi_fu_67477_p6 = data_2971_V_read3041_rewind_reg_67473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2972_V_read3042_phi_phi_fu_109333_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2972_V_read3042_phi_phi_fu_109333_p4 = ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_67491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2972_V_read3042_phi_phi_fu_109333_p4 = data_2972_V_read.read();
        } else {
            ap_phi_mux_data_2972_V_read3042_phi_phi_fu_109333_p4 = ap_phi_reg_pp0_iter0_data_2972_V_read3042_phi_reg_109329.read();
        }
    } else {
        ap_phi_mux_data_2972_V_read3042_phi_phi_fu_109333_p4 = ap_phi_reg_pp0_iter0_data_2972_V_read3042_phi_reg_109329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_67491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_67491_p6 = data_2972_V_read3042_phi_reg_109329.read();
    } else {
        ap_phi_mux_data_2972_V_read3042_rewind_phi_fu_67491_p6 = data_2972_V_read3042_rewind_reg_67487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2973_V_read3043_phi_phi_fu_109346_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2973_V_read3043_phi_phi_fu_109346_p4 = ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_67505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2973_V_read3043_phi_phi_fu_109346_p4 = data_2973_V_read.read();
        } else {
            ap_phi_mux_data_2973_V_read3043_phi_phi_fu_109346_p4 = ap_phi_reg_pp0_iter0_data_2973_V_read3043_phi_reg_109342.read();
        }
    } else {
        ap_phi_mux_data_2973_V_read3043_phi_phi_fu_109346_p4 = ap_phi_reg_pp0_iter0_data_2973_V_read3043_phi_reg_109342.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_67505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_67505_p6 = data_2973_V_read3043_phi_reg_109342.read();
    } else {
        ap_phi_mux_data_2973_V_read3043_rewind_phi_fu_67505_p6 = data_2973_V_read3043_rewind_reg_67501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2974_V_read3044_phi_phi_fu_109359_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2974_V_read3044_phi_phi_fu_109359_p4 = ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_67519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2974_V_read3044_phi_phi_fu_109359_p4 = data_2974_V_read.read();
        } else {
            ap_phi_mux_data_2974_V_read3044_phi_phi_fu_109359_p4 = ap_phi_reg_pp0_iter0_data_2974_V_read3044_phi_reg_109355.read();
        }
    } else {
        ap_phi_mux_data_2974_V_read3044_phi_phi_fu_109359_p4 = ap_phi_reg_pp0_iter0_data_2974_V_read3044_phi_reg_109355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_67519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_67519_p6 = data_2974_V_read3044_phi_reg_109355.read();
    } else {
        ap_phi_mux_data_2974_V_read3044_rewind_phi_fu_67519_p6 = data_2974_V_read3044_rewind_reg_67515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2975_V_read3045_phi_phi_fu_109372_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2975_V_read3045_phi_phi_fu_109372_p4 = ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_67533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2975_V_read3045_phi_phi_fu_109372_p4 = data_2975_V_read.read();
        } else {
            ap_phi_mux_data_2975_V_read3045_phi_phi_fu_109372_p4 = ap_phi_reg_pp0_iter0_data_2975_V_read3045_phi_reg_109368.read();
        }
    } else {
        ap_phi_mux_data_2975_V_read3045_phi_phi_fu_109372_p4 = ap_phi_reg_pp0_iter0_data_2975_V_read3045_phi_reg_109368.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_67533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_67533_p6 = data_2975_V_read3045_phi_reg_109368.read();
    } else {
        ap_phi_mux_data_2975_V_read3045_rewind_phi_fu_67533_p6 = data_2975_V_read3045_rewind_reg_67529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2976_V_read3046_phi_phi_fu_109385_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2976_V_read3046_phi_phi_fu_109385_p4 = ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_67547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2976_V_read3046_phi_phi_fu_109385_p4 = data_2976_V_read.read();
        } else {
            ap_phi_mux_data_2976_V_read3046_phi_phi_fu_109385_p4 = ap_phi_reg_pp0_iter0_data_2976_V_read3046_phi_reg_109381.read();
        }
    } else {
        ap_phi_mux_data_2976_V_read3046_phi_phi_fu_109385_p4 = ap_phi_reg_pp0_iter0_data_2976_V_read3046_phi_reg_109381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_67547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_67547_p6 = data_2976_V_read3046_phi_reg_109381.read();
    } else {
        ap_phi_mux_data_2976_V_read3046_rewind_phi_fu_67547_p6 = data_2976_V_read3046_rewind_reg_67543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2977_V_read3047_phi_phi_fu_109398_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2977_V_read3047_phi_phi_fu_109398_p4 = ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_67561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2977_V_read3047_phi_phi_fu_109398_p4 = data_2977_V_read.read();
        } else {
            ap_phi_mux_data_2977_V_read3047_phi_phi_fu_109398_p4 = ap_phi_reg_pp0_iter0_data_2977_V_read3047_phi_reg_109394.read();
        }
    } else {
        ap_phi_mux_data_2977_V_read3047_phi_phi_fu_109398_p4 = ap_phi_reg_pp0_iter0_data_2977_V_read3047_phi_reg_109394.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_67561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_67561_p6 = data_2977_V_read3047_phi_reg_109394.read();
    } else {
        ap_phi_mux_data_2977_V_read3047_rewind_phi_fu_67561_p6 = data_2977_V_read3047_rewind_reg_67557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2978_V_read3048_phi_phi_fu_109411_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2978_V_read3048_phi_phi_fu_109411_p4 = ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_67575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2978_V_read3048_phi_phi_fu_109411_p4 = data_2978_V_read.read();
        } else {
            ap_phi_mux_data_2978_V_read3048_phi_phi_fu_109411_p4 = ap_phi_reg_pp0_iter0_data_2978_V_read3048_phi_reg_109407.read();
        }
    } else {
        ap_phi_mux_data_2978_V_read3048_phi_phi_fu_109411_p4 = ap_phi_reg_pp0_iter0_data_2978_V_read3048_phi_reg_109407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_67575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_67575_p6 = data_2978_V_read3048_phi_reg_109407.read();
    } else {
        ap_phi_mux_data_2978_V_read3048_rewind_phi_fu_67575_p6 = data_2978_V_read3048_rewind_reg_67571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2979_V_read3049_phi_phi_fu_109424_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2979_V_read3049_phi_phi_fu_109424_p4 = ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_67589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2979_V_read3049_phi_phi_fu_109424_p4 = data_2979_V_read.read();
        } else {
            ap_phi_mux_data_2979_V_read3049_phi_phi_fu_109424_p4 = ap_phi_reg_pp0_iter0_data_2979_V_read3049_phi_reg_109420.read();
        }
    } else {
        ap_phi_mux_data_2979_V_read3049_phi_phi_fu_109424_p4 = ap_phi_reg_pp0_iter0_data_2979_V_read3049_phi_reg_109420.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_67589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_67589_p6 = data_2979_V_read3049_phi_reg_109420.read();
    } else {
        ap_phi_mux_data_2979_V_read3049_rewind_phi_fu_67589_p6 = data_2979_V_read3049_rewind_reg_67585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_297_V_read367_phi_phi_fu_74558_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_297_V_read367_phi_phi_fu_74558_p4 = ap_phi_mux_data_297_V_read367_rewind_phi_fu_30041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_297_V_read367_phi_phi_fu_74558_p4 = data_297_V_read.read();
        } else {
            ap_phi_mux_data_297_V_read367_phi_phi_fu_74558_p4 = ap_phi_reg_pp0_iter0_data_297_V_read367_phi_reg_74554.read();
        }
    } else {
        ap_phi_mux_data_297_V_read367_phi_phi_fu_74558_p4 = ap_phi_reg_pp0_iter0_data_297_V_read367_phi_reg_74554.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_297_V_read367_rewind_phi_fu_30041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_297_V_read367_rewind_phi_fu_30041_p6 = data_297_V_read367_phi_reg_74554.read();
    } else {
        ap_phi_mux_data_297_V_read367_rewind_phi_fu_30041_p6 = data_297_V_read367_rewind_reg_30037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2980_V_read3050_phi_phi_fu_109437_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2980_V_read3050_phi_phi_fu_109437_p4 = ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_67603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2980_V_read3050_phi_phi_fu_109437_p4 = data_2980_V_read.read();
        } else {
            ap_phi_mux_data_2980_V_read3050_phi_phi_fu_109437_p4 = ap_phi_reg_pp0_iter0_data_2980_V_read3050_phi_reg_109433.read();
        }
    } else {
        ap_phi_mux_data_2980_V_read3050_phi_phi_fu_109437_p4 = ap_phi_reg_pp0_iter0_data_2980_V_read3050_phi_reg_109433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_67603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_67603_p6 = data_2980_V_read3050_phi_reg_109433.read();
    } else {
        ap_phi_mux_data_2980_V_read3050_rewind_phi_fu_67603_p6 = data_2980_V_read3050_rewind_reg_67599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2981_V_read3051_phi_phi_fu_109450_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2981_V_read3051_phi_phi_fu_109450_p4 = ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_67617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2981_V_read3051_phi_phi_fu_109450_p4 = data_2981_V_read.read();
        } else {
            ap_phi_mux_data_2981_V_read3051_phi_phi_fu_109450_p4 = ap_phi_reg_pp0_iter0_data_2981_V_read3051_phi_reg_109446.read();
        }
    } else {
        ap_phi_mux_data_2981_V_read3051_phi_phi_fu_109450_p4 = ap_phi_reg_pp0_iter0_data_2981_V_read3051_phi_reg_109446.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_67617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_67617_p6 = data_2981_V_read3051_phi_reg_109446.read();
    } else {
        ap_phi_mux_data_2981_V_read3051_rewind_phi_fu_67617_p6 = data_2981_V_read3051_rewind_reg_67613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2982_V_read3052_phi_phi_fu_109463_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2982_V_read3052_phi_phi_fu_109463_p4 = ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_67631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2982_V_read3052_phi_phi_fu_109463_p4 = data_2982_V_read.read();
        } else {
            ap_phi_mux_data_2982_V_read3052_phi_phi_fu_109463_p4 = ap_phi_reg_pp0_iter0_data_2982_V_read3052_phi_reg_109459.read();
        }
    } else {
        ap_phi_mux_data_2982_V_read3052_phi_phi_fu_109463_p4 = ap_phi_reg_pp0_iter0_data_2982_V_read3052_phi_reg_109459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_67631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_67631_p6 = data_2982_V_read3052_phi_reg_109459.read();
    } else {
        ap_phi_mux_data_2982_V_read3052_rewind_phi_fu_67631_p6 = data_2982_V_read3052_rewind_reg_67627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2983_V_read3053_phi_phi_fu_109476_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2983_V_read3053_phi_phi_fu_109476_p4 = ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_67645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2983_V_read3053_phi_phi_fu_109476_p4 = data_2983_V_read.read();
        } else {
            ap_phi_mux_data_2983_V_read3053_phi_phi_fu_109476_p4 = ap_phi_reg_pp0_iter0_data_2983_V_read3053_phi_reg_109472.read();
        }
    } else {
        ap_phi_mux_data_2983_V_read3053_phi_phi_fu_109476_p4 = ap_phi_reg_pp0_iter0_data_2983_V_read3053_phi_reg_109472.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_67645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_67645_p6 = data_2983_V_read3053_phi_reg_109472.read();
    } else {
        ap_phi_mux_data_2983_V_read3053_rewind_phi_fu_67645_p6 = data_2983_V_read3053_rewind_reg_67641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2984_V_read3054_phi_phi_fu_109489_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2984_V_read3054_phi_phi_fu_109489_p4 = ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_67659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2984_V_read3054_phi_phi_fu_109489_p4 = data_2984_V_read.read();
        } else {
            ap_phi_mux_data_2984_V_read3054_phi_phi_fu_109489_p4 = ap_phi_reg_pp0_iter0_data_2984_V_read3054_phi_reg_109485.read();
        }
    } else {
        ap_phi_mux_data_2984_V_read3054_phi_phi_fu_109489_p4 = ap_phi_reg_pp0_iter0_data_2984_V_read3054_phi_reg_109485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_67659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_67659_p6 = data_2984_V_read3054_phi_reg_109485.read();
    } else {
        ap_phi_mux_data_2984_V_read3054_rewind_phi_fu_67659_p6 = data_2984_V_read3054_rewind_reg_67655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2985_V_read3055_phi_phi_fu_109502_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2985_V_read3055_phi_phi_fu_109502_p4 = ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_67673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2985_V_read3055_phi_phi_fu_109502_p4 = data_2985_V_read.read();
        } else {
            ap_phi_mux_data_2985_V_read3055_phi_phi_fu_109502_p4 = ap_phi_reg_pp0_iter0_data_2985_V_read3055_phi_reg_109498.read();
        }
    } else {
        ap_phi_mux_data_2985_V_read3055_phi_phi_fu_109502_p4 = ap_phi_reg_pp0_iter0_data_2985_V_read3055_phi_reg_109498.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_67673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_67673_p6 = data_2985_V_read3055_phi_reg_109498.read();
    } else {
        ap_phi_mux_data_2985_V_read3055_rewind_phi_fu_67673_p6 = data_2985_V_read3055_rewind_reg_67669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2986_V_read3056_phi_phi_fu_109515_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2986_V_read3056_phi_phi_fu_109515_p4 = ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_67687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2986_V_read3056_phi_phi_fu_109515_p4 = data_2986_V_read.read();
        } else {
            ap_phi_mux_data_2986_V_read3056_phi_phi_fu_109515_p4 = ap_phi_reg_pp0_iter0_data_2986_V_read3056_phi_reg_109511.read();
        }
    } else {
        ap_phi_mux_data_2986_V_read3056_phi_phi_fu_109515_p4 = ap_phi_reg_pp0_iter0_data_2986_V_read3056_phi_reg_109511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_67687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_67687_p6 = data_2986_V_read3056_phi_reg_109511.read();
    } else {
        ap_phi_mux_data_2986_V_read3056_rewind_phi_fu_67687_p6 = data_2986_V_read3056_rewind_reg_67683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2987_V_read3057_phi_phi_fu_109528_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2987_V_read3057_phi_phi_fu_109528_p4 = ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_67701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2987_V_read3057_phi_phi_fu_109528_p4 = data_2987_V_read.read();
        } else {
            ap_phi_mux_data_2987_V_read3057_phi_phi_fu_109528_p4 = ap_phi_reg_pp0_iter0_data_2987_V_read3057_phi_reg_109524.read();
        }
    } else {
        ap_phi_mux_data_2987_V_read3057_phi_phi_fu_109528_p4 = ap_phi_reg_pp0_iter0_data_2987_V_read3057_phi_reg_109524.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_67701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_67701_p6 = data_2987_V_read3057_phi_reg_109524.read();
    } else {
        ap_phi_mux_data_2987_V_read3057_rewind_phi_fu_67701_p6 = data_2987_V_read3057_rewind_reg_67697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2988_V_read3058_phi_phi_fu_109541_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2988_V_read3058_phi_phi_fu_109541_p4 = ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_67715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2988_V_read3058_phi_phi_fu_109541_p4 = data_2988_V_read.read();
        } else {
            ap_phi_mux_data_2988_V_read3058_phi_phi_fu_109541_p4 = ap_phi_reg_pp0_iter0_data_2988_V_read3058_phi_reg_109537.read();
        }
    } else {
        ap_phi_mux_data_2988_V_read3058_phi_phi_fu_109541_p4 = ap_phi_reg_pp0_iter0_data_2988_V_read3058_phi_reg_109537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_67715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_67715_p6 = data_2988_V_read3058_phi_reg_109537.read();
    } else {
        ap_phi_mux_data_2988_V_read3058_rewind_phi_fu_67715_p6 = data_2988_V_read3058_rewind_reg_67711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2989_V_read3059_phi_phi_fu_109554_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2989_V_read3059_phi_phi_fu_109554_p4 = ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_67729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2989_V_read3059_phi_phi_fu_109554_p4 = data_2989_V_read.read();
        } else {
            ap_phi_mux_data_2989_V_read3059_phi_phi_fu_109554_p4 = ap_phi_reg_pp0_iter0_data_2989_V_read3059_phi_reg_109550.read();
        }
    } else {
        ap_phi_mux_data_2989_V_read3059_phi_phi_fu_109554_p4 = ap_phi_reg_pp0_iter0_data_2989_V_read3059_phi_reg_109550.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_67729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_67729_p6 = data_2989_V_read3059_phi_reg_109550.read();
    } else {
        ap_phi_mux_data_2989_V_read3059_rewind_phi_fu_67729_p6 = data_2989_V_read3059_rewind_reg_67725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_298_V_read368_phi_phi_fu_74571_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_298_V_read368_phi_phi_fu_74571_p4 = ap_phi_mux_data_298_V_read368_rewind_phi_fu_30055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_298_V_read368_phi_phi_fu_74571_p4 = data_298_V_read.read();
        } else {
            ap_phi_mux_data_298_V_read368_phi_phi_fu_74571_p4 = ap_phi_reg_pp0_iter0_data_298_V_read368_phi_reg_74567.read();
        }
    } else {
        ap_phi_mux_data_298_V_read368_phi_phi_fu_74571_p4 = ap_phi_reg_pp0_iter0_data_298_V_read368_phi_reg_74567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_298_V_read368_rewind_phi_fu_30055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_298_V_read368_rewind_phi_fu_30055_p6 = data_298_V_read368_phi_reg_74567.read();
    } else {
        ap_phi_mux_data_298_V_read368_rewind_phi_fu_30055_p6 = data_298_V_read368_rewind_reg_30051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2990_V_read3060_phi_phi_fu_109567_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2990_V_read3060_phi_phi_fu_109567_p4 = ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_67743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2990_V_read3060_phi_phi_fu_109567_p4 = data_2990_V_read.read();
        } else {
            ap_phi_mux_data_2990_V_read3060_phi_phi_fu_109567_p4 = ap_phi_reg_pp0_iter0_data_2990_V_read3060_phi_reg_109563.read();
        }
    } else {
        ap_phi_mux_data_2990_V_read3060_phi_phi_fu_109567_p4 = ap_phi_reg_pp0_iter0_data_2990_V_read3060_phi_reg_109563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_67743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_67743_p6 = data_2990_V_read3060_phi_reg_109563.read();
    } else {
        ap_phi_mux_data_2990_V_read3060_rewind_phi_fu_67743_p6 = data_2990_V_read3060_rewind_reg_67739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2991_V_read3061_phi_phi_fu_109580_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2991_V_read3061_phi_phi_fu_109580_p4 = ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_67757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2991_V_read3061_phi_phi_fu_109580_p4 = data_2991_V_read.read();
        } else {
            ap_phi_mux_data_2991_V_read3061_phi_phi_fu_109580_p4 = ap_phi_reg_pp0_iter0_data_2991_V_read3061_phi_reg_109576.read();
        }
    } else {
        ap_phi_mux_data_2991_V_read3061_phi_phi_fu_109580_p4 = ap_phi_reg_pp0_iter0_data_2991_V_read3061_phi_reg_109576.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_67757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_67757_p6 = data_2991_V_read3061_phi_reg_109576.read();
    } else {
        ap_phi_mux_data_2991_V_read3061_rewind_phi_fu_67757_p6 = data_2991_V_read3061_rewind_reg_67753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2992_V_read3062_phi_phi_fu_109593_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2992_V_read3062_phi_phi_fu_109593_p4 = ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_67771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2992_V_read3062_phi_phi_fu_109593_p4 = data_2992_V_read.read();
        } else {
            ap_phi_mux_data_2992_V_read3062_phi_phi_fu_109593_p4 = ap_phi_reg_pp0_iter0_data_2992_V_read3062_phi_reg_109589.read();
        }
    } else {
        ap_phi_mux_data_2992_V_read3062_phi_phi_fu_109593_p4 = ap_phi_reg_pp0_iter0_data_2992_V_read3062_phi_reg_109589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_67771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_67771_p6 = data_2992_V_read3062_phi_reg_109589.read();
    } else {
        ap_phi_mux_data_2992_V_read3062_rewind_phi_fu_67771_p6 = data_2992_V_read3062_rewind_reg_67767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2993_V_read3063_phi_phi_fu_109606_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2993_V_read3063_phi_phi_fu_109606_p4 = ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_67785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2993_V_read3063_phi_phi_fu_109606_p4 = data_2993_V_read.read();
        } else {
            ap_phi_mux_data_2993_V_read3063_phi_phi_fu_109606_p4 = ap_phi_reg_pp0_iter0_data_2993_V_read3063_phi_reg_109602.read();
        }
    } else {
        ap_phi_mux_data_2993_V_read3063_phi_phi_fu_109606_p4 = ap_phi_reg_pp0_iter0_data_2993_V_read3063_phi_reg_109602.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_67785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_67785_p6 = data_2993_V_read3063_phi_reg_109602.read();
    } else {
        ap_phi_mux_data_2993_V_read3063_rewind_phi_fu_67785_p6 = data_2993_V_read3063_rewind_reg_67781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2994_V_read3064_phi_phi_fu_109619_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2994_V_read3064_phi_phi_fu_109619_p4 = ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_67799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2994_V_read3064_phi_phi_fu_109619_p4 = data_2994_V_read.read();
        } else {
            ap_phi_mux_data_2994_V_read3064_phi_phi_fu_109619_p4 = ap_phi_reg_pp0_iter0_data_2994_V_read3064_phi_reg_109615.read();
        }
    } else {
        ap_phi_mux_data_2994_V_read3064_phi_phi_fu_109619_p4 = ap_phi_reg_pp0_iter0_data_2994_V_read3064_phi_reg_109615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_67799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_67799_p6 = data_2994_V_read3064_phi_reg_109615.read();
    } else {
        ap_phi_mux_data_2994_V_read3064_rewind_phi_fu_67799_p6 = data_2994_V_read3064_rewind_reg_67795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2995_V_read3065_phi_phi_fu_109632_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2995_V_read3065_phi_phi_fu_109632_p4 = ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_67813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2995_V_read3065_phi_phi_fu_109632_p4 = data_2995_V_read.read();
        } else {
            ap_phi_mux_data_2995_V_read3065_phi_phi_fu_109632_p4 = ap_phi_reg_pp0_iter0_data_2995_V_read3065_phi_reg_109628.read();
        }
    } else {
        ap_phi_mux_data_2995_V_read3065_phi_phi_fu_109632_p4 = ap_phi_reg_pp0_iter0_data_2995_V_read3065_phi_reg_109628.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_67813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_67813_p6 = data_2995_V_read3065_phi_reg_109628.read();
    } else {
        ap_phi_mux_data_2995_V_read3065_rewind_phi_fu_67813_p6 = data_2995_V_read3065_rewind_reg_67809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2996_V_read3066_phi_phi_fu_109645_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2996_V_read3066_phi_phi_fu_109645_p4 = ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_67827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2996_V_read3066_phi_phi_fu_109645_p4 = data_2996_V_read.read();
        } else {
            ap_phi_mux_data_2996_V_read3066_phi_phi_fu_109645_p4 = ap_phi_reg_pp0_iter0_data_2996_V_read3066_phi_reg_109641.read();
        }
    } else {
        ap_phi_mux_data_2996_V_read3066_phi_phi_fu_109645_p4 = ap_phi_reg_pp0_iter0_data_2996_V_read3066_phi_reg_109641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_67827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_67827_p6 = data_2996_V_read3066_phi_reg_109641.read();
    } else {
        ap_phi_mux_data_2996_V_read3066_rewind_phi_fu_67827_p6 = data_2996_V_read3066_rewind_reg_67823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2997_V_read3067_phi_phi_fu_109658_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2997_V_read3067_phi_phi_fu_109658_p4 = ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_67841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2997_V_read3067_phi_phi_fu_109658_p4 = data_2997_V_read.read();
        } else {
            ap_phi_mux_data_2997_V_read3067_phi_phi_fu_109658_p4 = ap_phi_reg_pp0_iter0_data_2997_V_read3067_phi_reg_109654.read();
        }
    } else {
        ap_phi_mux_data_2997_V_read3067_phi_phi_fu_109658_p4 = ap_phi_reg_pp0_iter0_data_2997_V_read3067_phi_reg_109654.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_67841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_67841_p6 = data_2997_V_read3067_phi_reg_109654.read();
    } else {
        ap_phi_mux_data_2997_V_read3067_rewind_phi_fu_67841_p6 = data_2997_V_read3067_rewind_reg_67837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2998_V_read3068_phi_phi_fu_109671_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2998_V_read3068_phi_phi_fu_109671_p4 = ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_67855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2998_V_read3068_phi_phi_fu_109671_p4 = data_2998_V_read.read();
        } else {
            ap_phi_mux_data_2998_V_read3068_phi_phi_fu_109671_p4 = ap_phi_reg_pp0_iter0_data_2998_V_read3068_phi_reg_109667.read();
        }
    } else {
        ap_phi_mux_data_2998_V_read3068_phi_phi_fu_109671_p4 = ap_phi_reg_pp0_iter0_data_2998_V_read3068_phi_reg_109667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_67855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_67855_p6 = data_2998_V_read3068_phi_reg_109667.read();
    } else {
        ap_phi_mux_data_2998_V_read3068_rewind_phi_fu_67855_p6 = data_2998_V_read3068_rewind_reg_67851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2999_V_read3069_phi_phi_fu_109684_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2999_V_read3069_phi_phi_fu_109684_p4 = ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_67869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2999_V_read3069_phi_phi_fu_109684_p4 = data_2999_V_read.read();
        } else {
            ap_phi_mux_data_2999_V_read3069_phi_phi_fu_109684_p4 = ap_phi_reg_pp0_iter0_data_2999_V_read3069_phi_reg_109680.read();
        }
    } else {
        ap_phi_mux_data_2999_V_read3069_phi_phi_fu_109684_p4 = ap_phi_reg_pp0_iter0_data_2999_V_read3069_phi_reg_109680.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_67869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_67869_p6 = data_2999_V_read3069_phi_reg_109680.read();
    } else {
        ap_phi_mux_data_2999_V_read3069_rewind_phi_fu_67869_p6 = data_2999_V_read3069_rewind_reg_67865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_299_V_read369_phi_phi_fu_74584_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_299_V_read369_phi_phi_fu_74584_p4 = ap_phi_mux_data_299_V_read369_rewind_phi_fu_30069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_299_V_read369_phi_phi_fu_74584_p4 = data_299_V_read.read();
        } else {
            ap_phi_mux_data_299_V_read369_phi_phi_fu_74584_p4 = ap_phi_reg_pp0_iter0_data_299_V_read369_phi_reg_74580.read();
        }
    } else {
        ap_phi_mux_data_299_V_read369_phi_phi_fu_74584_p4 = ap_phi_reg_pp0_iter0_data_299_V_read369_phi_reg_74580.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_299_V_read369_rewind_phi_fu_30069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_299_V_read369_rewind_phi_fu_30069_p6 = data_299_V_read369_phi_reg_74580.read();
    } else {
        ap_phi_mux_data_299_V_read369_rewind_phi_fu_30069_p6 = data_299_V_read369_rewind_reg_30065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_29_V_read99_phi_phi_fu_71074_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_29_V_read99_phi_phi_fu_71074_p4 = ap_phi_mux_data_29_V_read99_rewind_phi_fu_26289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_29_V_read99_phi_phi_fu_71074_p4 = data_29_V_read.read();
        } else {
            ap_phi_mux_data_29_V_read99_phi_phi_fu_71074_p4 = ap_phi_reg_pp0_iter0_data_29_V_read99_phi_reg_71070.read();
        }
    } else {
        ap_phi_mux_data_29_V_read99_phi_phi_fu_71074_p4 = ap_phi_reg_pp0_iter0_data_29_V_read99_phi_reg_71070.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_29_V_read99_rewind_phi_fu_26289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_29_V_read99_rewind_phi_fu_26289_p6 = data_29_V_read99_phi_reg_71070.read();
    } else {
        ap_phi_mux_data_29_V_read99_rewind_phi_fu_26289_p6 = data_29_V_read99_rewind_reg_26285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2_V_read72_phi_phi_fu_70723_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2_V_read72_phi_phi_fu_70723_p4 = ap_phi_mux_data_2_V_read72_rewind_phi_fu_25911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2_V_read72_phi_phi_fu_70723_p4 = data_2_V_read.read();
        } else {
            ap_phi_mux_data_2_V_read72_phi_phi_fu_70723_p4 = ap_phi_reg_pp0_iter0_data_2_V_read72_phi_reg_70719.read();
        }
    } else {
        ap_phi_mux_data_2_V_read72_phi_phi_fu_70723_p4 = ap_phi_reg_pp0_iter0_data_2_V_read72_phi_reg_70719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2_V_read72_rewind_phi_fu_25911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2_V_read72_rewind_phi_fu_25911_p6 = data_2_V_read72_phi_reg_70719.read();
    } else {
        ap_phi_mux_data_2_V_read72_rewind_phi_fu_25911_p6 = data_2_V_read72_rewind_reg_25907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3000_V_read3070_phi_phi_fu_109697_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3000_V_read3070_phi_phi_fu_109697_p4 = ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_67883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3000_V_read3070_phi_phi_fu_109697_p4 = data_3000_V_read.read();
        } else {
            ap_phi_mux_data_3000_V_read3070_phi_phi_fu_109697_p4 = ap_phi_reg_pp0_iter0_data_3000_V_read3070_phi_reg_109693.read();
        }
    } else {
        ap_phi_mux_data_3000_V_read3070_phi_phi_fu_109697_p4 = ap_phi_reg_pp0_iter0_data_3000_V_read3070_phi_reg_109693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_67883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_67883_p6 = data_3000_V_read3070_phi_reg_109693.read();
    } else {
        ap_phi_mux_data_3000_V_read3070_rewind_phi_fu_67883_p6 = data_3000_V_read3070_rewind_reg_67879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3001_V_read3071_phi_phi_fu_109710_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3001_V_read3071_phi_phi_fu_109710_p4 = ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_67897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3001_V_read3071_phi_phi_fu_109710_p4 = data_3001_V_read.read();
        } else {
            ap_phi_mux_data_3001_V_read3071_phi_phi_fu_109710_p4 = ap_phi_reg_pp0_iter0_data_3001_V_read3071_phi_reg_109706.read();
        }
    } else {
        ap_phi_mux_data_3001_V_read3071_phi_phi_fu_109710_p4 = ap_phi_reg_pp0_iter0_data_3001_V_read3071_phi_reg_109706.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_67897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_67897_p6 = data_3001_V_read3071_phi_reg_109706.read();
    } else {
        ap_phi_mux_data_3001_V_read3071_rewind_phi_fu_67897_p6 = data_3001_V_read3071_rewind_reg_67893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3002_V_read3072_phi_phi_fu_109723_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3002_V_read3072_phi_phi_fu_109723_p4 = ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_67911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3002_V_read3072_phi_phi_fu_109723_p4 = data_3002_V_read.read();
        } else {
            ap_phi_mux_data_3002_V_read3072_phi_phi_fu_109723_p4 = ap_phi_reg_pp0_iter0_data_3002_V_read3072_phi_reg_109719.read();
        }
    } else {
        ap_phi_mux_data_3002_V_read3072_phi_phi_fu_109723_p4 = ap_phi_reg_pp0_iter0_data_3002_V_read3072_phi_reg_109719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_67911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_67911_p6 = data_3002_V_read3072_phi_reg_109719.read();
    } else {
        ap_phi_mux_data_3002_V_read3072_rewind_phi_fu_67911_p6 = data_3002_V_read3072_rewind_reg_67907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3003_V_read3073_phi_phi_fu_109736_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3003_V_read3073_phi_phi_fu_109736_p4 = ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_67925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3003_V_read3073_phi_phi_fu_109736_p4 = data_3003_V_read.read();
        } else {
            ap_phi_mux_data_3003_V_read3073_phi_phi_fu_109736_p4 = ap_phi_reg_pp0_iter0_data_3003_V_read3073_phi_reg_109732.read();
        }
    } else {
        ap_phi_mux_data_3003_V_read3073_phi_phi_fu_109736_p4 = ap_phi_reg_pp0_iter0_data_3003_V_read3073_phi_reg_109732.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_67925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_67925_p6 = data_3003_V_read3073_phi_reg_109732.read();
    } else {
        ap_phi_mux_data_3003_V_read3073_rewind_phi_fu_67925_p6 = data_3003_V_read3073_rewind_reg_67921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3004_V_read3074_phi_phi_fu_109749_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3004_V_read3074_phi_phi_fu_109749_p4 = ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_67939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3004_V_read3074_phi_phi_fu_109749_p4 = data_3004_V_read.read();
        } else {
            ap_phi_mux_data_3004_V_read3074_phi_phi_fu_109749_p4 = ap_phi_reg_pp0_iter0_data_3004_V_read3074_phi_reg_109745.read();
        }
    } else {
        ap_phi_mux_data_3004_V_read3074_phi_phi_fu_109749_p4 = ap_phi_reg_pp0_iter0_data_3004_V_read3074_phi_reg_109745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_67939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_67939_p6 = data_3004_V_read3074_phi_reg_109745.read();
    } else {
        ap_phi_mux_data_3004_V_read3074_rewind_phi_fu_67939_p6 = data_3004_V_read3074_rewind_reg_67935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3005_V_read3075_phi_phi_fu_109762_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3005_V_read3075_phi_phi_fu_109762_p4 = ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_67953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3005_V_read3075_phi_phi_fu_109762_p4 = data_3005_V_read.read();
        } else {
            ap_phi_mux_data_3005_V_read3075_phi_phi_fu_109762_p4 = ap_phi_reg_pp0_iter0_data_3005_V_read3075_phi_reg_109758.read();
        }
    } else {
        ap_phi_mux_data_3005_V_read3075_phi_phi_fu_109762_p4 = ap_phi_reg_pp0_iter0_data_3005_V_read3075_phi_reg_109758.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_67953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_67953_p6 = data_3005_V_read3075_phi_reg_109758.read();
    } else {
        ap_phi_mux_data_3005_V_read3075_rewind_phi_fu_67953_p6 = data_3005_V_read3075_rewind_reg_67949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3006_V_read3076_phi_phi_fu_109775_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3006_V_read3076_phi_phi_fu_109775_p4 = ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_67967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3006_V_read3076_phi_phi_fu_109775_p4 = data_3006_V_read.read();
        } else {
            ap_phi_mux_data_3006_V_read3076_phi_phi_fu_109775_p4 = ap_phi_reg_pp0_iter0_data_3006_V_read3076_phi_reg_109771.read();
        }
    } else {
        ap_phi_mux_data_3006_V_read3076_phi_phi_fu_109775_p4 = ap_phi_reg_pp0_iter0_data_3006_V_read3076_phi_reg_109771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_67967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_67967_p6 = data_3006_V_read3076_phi_reg_109771.read();
    } else {
        ap_phi_mux_data_3006_V_read3076_rewind_phi_fu_67967_p6 = data_3006_V_read3076_rewind_reg_67963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3007_V_read3077_phi_phi_fu_109788_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3007_V_read3077_phi_phi_fu_109788_p4 = ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_67981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3007_V_read3077_phi_phi_fu_109788_p4 = data_3007_V_read.read();
        } else {
            ap_phi_mux_data_3007_V_read3077_phi_phi_fu_109788_p4 = ap_phi_reg_pp0_iter0_data_3007_V_read3077_phi_reg_109784.read();
        }
    } else {
        ap_phi_mux_data_3007_V_read3077_phi_phi_fu_109788_p4 = ap_phi_reg_pp0_iter0_data_3007_V_read3077_phi_reg_109784.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_67981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_67981_p6 = data_3007_V_read3077_phi_reg_109784.read();
    } else {
        ap_phi_mux_data_3007_V_read3077_rewind_phi_fu_67981_p6 = data_3007_V_read3077_rewind_reg_67977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3008_V_read3078_phi_phi_fu_109801_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3008_V_read3078_phi_phi_fu_109801_p4 = ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_67995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3008_V_read3078_phi_phi_fu_109801_p4 = data_3008_V_read.read();
        } else {
            ap_phi_mux_data_3008_V_read3078_phi_phi_fu_109801_p4 = ap_phi_reg_pp0_iter0_data_3008_V_read3078_phi_reg_109797.read();
        }
    } else {
        ap_phi_mux_data_3008_V_read3078_phi_phi_fu_109801_p4 = ap_phi_reg_pp0_iter0_data_3008_V_read3078_phi_reg_109797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_67995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_67995_p6 = data_3008_V_read3078_phi_reg_109797.read();
    } else {
        ap_phi_mux_data_3008_V_read3078_rewind_phi_fu_67995_p6 = data_3008_V_read3078_rewind_reg_67991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3009_V_read3079_phi_phi_fu_109814_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3009_V_read3079_phi_phi_fu_109814_p4 = ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_68009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3009_V_read3079_phi_phi_fu_109814_p4 = data_3009_V_read.read();
        } else {
            ap_phi_mux_data_3009_V_read3079_phi_phi_fu_109814_p4 = ap_phi_reg_pp0_iter0_data_3009_V_read3079_phi_reg_109810.read();
        }
    } else {
        ap_phi_mux_data_3009_V_read3079_phi_phi_fu_109814_p4 = ap_phi_reg_pp0_iter0_data_3009_V_read3079_phi_reg_109810.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_68009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_68009_p6 = data_3009_V_read3079_phi_reg_109810.read();
    } else {
        ap_phi_mux_data_3009_V_read3079_rewind_phi_fu_68009_p6 = data_3009_V_read3079_rewind_reg_68005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_300_V_read370_phi_phi_fu_74597_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_300_V_read370_phi_phi_fu_74597_p4 = ap_phi_mux_data_300_V_read370_rewind_phi_fu_30083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_300_V_read370_phi_phi_fu_74597_p4 = data_300_V_read.read();
        } else {
            ap_phi_mux_data_300_V_read370_phi_phi_fu_74597_p4 = ap_phi_reg_pp0_iter0_data_300_V_read370_phi_reg_74593.read();
        }
    } else {
        ap_phi_mux_data_300_V_read370_phi_phi_fu_74597_p4 = ap_phi_reg_pp0_iter0_data_300_V_read370_phi_reg_74593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_300_V_read370_rewind_phi_fu_30083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_300_V_read370_rewind_phi_fu_30083_p6 = data_300_V_read370_phi_reg_74593.read();
    } else {
        ap_phi_mux_data_300_V_read370_rewind_phi_fu_30083_p6 = data_300_V_read370_rewind_reg_30079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3010_V_read3080_phi_phi_fu_109827_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3010_V_read3080_phi_phi_fu_109827_p4 = ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_68023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3010_V_read3080_phi_phi_fu_109827_p4 = data_3010_V_read.read();
        } else {
            ap_phi_mux_data_3010_V_read3080_phi_phi_fu_109827_p4 = ap_phi_reg_pp0_iter0_data_3010_V_read3080_phi_reg_109823.read();
        }
    } else {
        ap_phi_mux_data_3010_V_read3080_phi_phi_fu_109827_p4 = ap_phi_reg_pp0_iter0_data_3010_V_read3080_phi_reg_109823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_68023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_68023_p6 = data_3010_V_read3080_phi_reg_109823.read();
    } else {
        ap_phi_mux_data_3010_V_read3080_rewind_phi_fu_68023_p6 = data_3010_V_read3080_rewind_reg_68019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3011_V_read3081_phi_phi_fu_109840_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3011_V_read3081_phi_phi_fu_109840_p4 = ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_68037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3011_V_read3081_phi_phi_fu_109840_p4 = data_3011_V_read.read();
        } else {
            ap_phi_mux_data_3011_V_read3081_phi_phi_fu_109840_p4 = ap_phi_reg_pp0_iter0_data_3011_V_read3081_phi_reg_109836.read();
        }
    } else {
        ap_phi_mux_data_3011_V_read3081_phi_phi_fu_109840_p4 = ap_phi_reg_pp0_iter0_data_3011_V_read3081_phi_reg_109836.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_68037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_68037_p6 = data_3011_V_read3081_phi_reg_109836.read();
    } else {
        ap_phi_mux_data_3011_V_read3081_rewind_phi_fu_68037_p6 = data_3011_V_read3081_rewind_reg_68033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3012_V_read3082_phi_phi_fu_109853_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3012_V_read3082_phi_phi_fu_109853_p4 = ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_68051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3012_V_read3082_phi_phi_fu_109853_p4 = data_3012_V_read.read();
        } else {
            ap_phi_mux_data_3012_V_read3082_phi_phi_fu_109853_p4 = ap_phi_reg_pp0_iter0_data_3012_V_read3082_phi_reg_109849.read();
        }
    } else {
        ap_phi_mux_data_3012_V_read3082_phi_phi_fu_109853_p4 = ap_phi_reg_pp0_iter0_data_3012_V_read3082_phi_reg_109849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_68051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_68051_p6 = data_3012_V_read3082_phi_reg_109849.read();
    } else {
        ap_phi_mux_data_3012_V_read3082_rewind_phi_fu_68051_p6 = data_3012_V_read3082_rewind_reg_68047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3013_V_read3083_phi_phi_fu_109866_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3013_V_read3083_phi_phi_fu_109866_p4 = ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_68065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3013_V_read3083_phi_phi_fu_109866_p4 = data_3013_V_read.read();
        } else {
            ap_phi_mux_data_3013_V_read3083_phi_phi_fu_109866_p4 = ap_phi_reg_pp0_iter0_data_3013_V_read3083_phi_reg_109862.read();
        }
    } else {
        ap_phi_mux_data_3013_V_read3083_phi_phi_fu_109866_p4 = ap_phi_reg_pp0_iter0_data_3013_V_read3083_phi_reg_109862.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_68065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_68065_p6 = data_3013_V_read3083_phi_reg_109862.read();
    } else {
        ap_phi_mux_data_3013_V_read3083_rewind_phi_fu_68065_p6 = data_3013_V_read3083_rewind_reg_68061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3014_V_read3084_phi_phi_fu_109879_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3014_V_read3084_phi_phi_fu_109879_p4 = ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_68079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3014_V_read3084_phi_phi_fu_109879_p4 = data_3014_V_read.read();
        } else {
            ap_phi_mux_data_3014_V_read3084_phi_phi_fu_109879_p4 = ap_phi_reg_pp0_iter0_data_3014_V_read3084_phi_reg_109875.read();
        }
    } else {
        ap_phi_mux_data_3014_V_read3084_phi_phi_fu_109879_p4 = ap_phi_reg_pp0_iter0_data_3014_V_read3084_phi_reg_109875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_68079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_68079_p6 = data_3014_V_read3084_phi_reg_109875.read();
    } else {
        ap_phi_mux_data_3014_V_read3084_rewind_phi_fu_68079_p6 = data_3014_V_read3084_rewind_reg_68075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3015_V_read3085_phi_phi_fu_109892_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3015_V_read3085_phi_phi_fu_109892_p4 = ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_68093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3015_V_read3085_phi_phi_fu_109892_p4 = data_3015_V_read.read();
        } else {
            ap_phi_mux_data_3015_V_read3085_phi_phi_fu_109892_p4 = ap_phi_reg_pp0_iter0_data_3015_V_read3085_phi_reg_109888.read();
        }
    } else {
        ap_phi_mux_data_3015_V_read3085_phi_phi_fu_109892_p4 = ap_phi_reg_pp0_iter0_data_3015_V_read3085_phi_reg_109888.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_68093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_68093_p6 = data_3015_V_read3085_phi_reg_109888.read();
    } else {
        ap_phi_mux_data_3015_V_read3085_rewind_phi_fu_68093_p6 = data_3015_V_read3085_rewind_reg_68089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3016_V_read3086_phi_phi_fu_109905_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3016_V_read3086_phi_phi_fu_109905_p4 = ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_68107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3016_V_read3086_phi_phi_fu_109905_p4 = data_3016_V_read.read();
        } else {
            ap_phi_mux_data_3016_V_read3086_phi_phi_fu_109905_p4 = ap_phi_reg_pp0_iter0_data_3016_V_read3086_phi_reg_109901.read();
        }
    } else {
        ap_phi_mux_data_3016_V_read3086_phi_phi_fu_109905_p4 = ap_phi_reg_pp0_iter0_data_3016_V_read3086_phi_reg_109901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_68107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_68107_p6 = data_3016_V_read3086_phi_reg_109901.read();
    } else {
        ap_phi_mux_data_3016_V_read3086_rewind_phi_fu_68107_p6 = data_3016_V_read3086_rewind_reg_68103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3017_V_read3087_phi_phi_fu_109918_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3017_V_read3087_phi_phi_fu_109918_p4 = ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_68121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3017_V_read3087_phi_phi_fu_109918_p4 = data_3017_V_read.read();
        } else {
            ap_phi_mux_data_3017_V_read3087_phi_phi_fu_109918_p4 = ap_phi_reg_pp0_iter0_data_3017_V_read3087_phi_reg_109914.read();
        }
    } else {
        ap_phi_mux_data_3017_V_read3087_phi_phi_fu_109918_p4 = ap_phi_reg_pp0_iter0_data_3017_V_read3087_phi_reg_109914.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_68121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_68121_p6 = data_3017_V_read3087_phi_reg_109914.read();
    } else {
        ap_phi_mux_data_3017_V_read3087_rewind_phi_fu_68121_p6 = data_3017_V_read3087_rewind_reg_68117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3018_V_read3088_phi_phi_fu_109931_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3018_V_read3088_phi_phi_fu_109931_p4 = ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_68135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3018_V_read3088_phi_phi_fu_109931_p4 = data_3018_V_read.read();
        } else {
            ap_phi_mux_data_3018_V_read3088_phi_phi_fu_109931_p4 = ap_phi_reg_pp0_iter0_data_3018_V_read3088_phi_reg_109927.read();
        }
    } else {
        ap_phi_mux_data_3018_V_read3088_phi_phi_fu_109931_p4 = ap_phi_reg_pp0_iter0_data_3018_V_read3088_phi_reg_109927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_68135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_68135_p6 = data_3018_V_read3088_phi_reg_109927.read();
    } else {
        ap_phi_mux_data_3018_V_read3088_rewind_phi_fu_68135_p6 = data_3018_V_read3088_rewind_reg_68131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3019_V_read3089_phi_phi_fu_109944_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3019_V_read3089_phi_phi_fu_109944_p4 = ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_68149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3019_V_read3089_phi_phi_fu_109944_p4 = data_3019_V_read.read();
        } else {
            ap_phi_mux_data_3019_V_read3089_phi_phi_fu_109944_p4 = ap_phi_reg_pp0_iter0_data_3019_V_read3089_phi_reg_109940.read();
        }
    } else {
        ap_phi_mux_data_3019_V_read3089_phi_phi_fu_109944_p4 = ap_phi_reg_pp0_iter0_data_3019_V_read3089_phi_reg_109940.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_68149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_68149_p6 = data_3019_V_read3089_phi_reg_109940.read();
    } else {
        ap_phi_mux_data_3019_V_read3089_rewind_phi_fu_68149_p6 = data_3019_V_read3089_rewind_reg_68145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_301_V_read371_phi_phi_fu_74610_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_301_V_read371_phi_phi_fu_74610_p4 = ap_phi_mux_data_301_V_read371_rewind_phi_fu_30097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_301_V_read371_phi_phi_fu_74610_p4 = data_301_V_read.read();
        } else {
            ap_phi_mux_data_301_V_read371_phi_phi_fu_74610_p4 = ap_phi_reg_pp0_iter0_data_301_V_read371_phi_reg_74606.read();
        }
    } else {
        ap_phi_mux_data_301_V_read371_phi_phi_fu_74610_p4 = ap_phi_reg_pp0_iter0_data_301_V_read371_phi_reg_74606.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_301_V_read371_rewind_phi_fu_30097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_301_V_read371_rewind_phi_fu_30097_p6 = data_301_V_read371_phi_reg_74606.read();
    } else {
        ap_phi_mux_data_301_V_read371_rewind_phi_fu_30097_p6 = data_301_V_read371_rewind_reg_30093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3020_V_read3090_phi_phi_fu_109957_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3020_V_read3090_phi_phi_fu_109957_p4 = ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_68163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3020_V_read3090_phi_phi_fu_109957_p4 = data_3020_V_read.read();
        } else {
            ap_phi_mux_data_3020_V_read3090_phi_phi_fu_109957_p4 = ap_phi_reg_pp0_iter0_data_3020_V_read3090_phi_reg_109953.read();
        }
    } else {
        ap_phi_mux_data_3020_V_read3090_phi_phi_fu_109957_p4 = ap_phi_reg_pp0_iter0_data_3020_V_read3090_phi_reg_109953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_68163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_68163_p6 = data_3020_V_read3090_phi_reg_109953.read();
    } else {
        ap_phi_mux_data_3020_V_read3090_rewind_phi_fu_68163_p6 = data_3020_V_read3090_rewind_reg_68159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3021_V_read3091_phi_phi_fu_109970_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3021_V_read3091_phi_phi_fu_109970_p4 = ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_68177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3021_V_read3091_phi_phi_fu_109970_p4 = data_3021_V_read.read();
        } else {
            ap_phi_mux_data_3021_V_read3091_phi_phi_fu_109970_p4 = ap_phi_reg_pp0_iter0_data_3021_V_read3091_phi_reg_109966.read();
        }
    } else {
        ap_phi_mux_data_3021_V_read3091_phi_phi_fu_109970_p4 = ap_phi_reg_pp0_iter0_data_3021_V_read3091_phi_reg_109966.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_68177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_68177_p6 = data_3021_V_read3091_phi_reg_109966.read();
    } else {
        ap_phi_mux_data_3021_V_read3091_rewind_phi_fu_68177_p6 = data_3021_V_read3091_rewind_reg_68173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3022_V_read3092_phi_phi_fu_109983_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3022_V_read3092_phi_phi_fu_109983_p4 = ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_68191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3022_V_read3092_phi_phi_fu_109983_p4 = data_3022_V_read.read();
        } else {
            ap_phi_mux_data_3022_V_read3092_phi_phi_fu_109983_p4 = ap_phi_reg_pp0_iter0_data_3022_V_read3092_phi_reg_109979.read();
        }
    } else {
        ap_phi_mux_data_3022_V_read3092_phi_phi_fu_109983_p4 = ap_phi_reg_pp0_iter0_data_3022_V_read3092_phi_reg_109979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_68191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_68191_p6 = data_3022_V_read3092_phi_reg_109979.read();
    } else {
        ap_phi_mux_data_3022_V_read3092_rewind_phi_fu_68191_p6 = data_3022_V_read3092_rewind_reg_68187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3023_V_read3093_phi_phi_fu_109996_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3023_V_read3093_phi_phi_fu_109996_p4 = ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_68205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3023_V_read3093_phi_phi_fu_109996_p4 = data_3023_V_read.read();
        } else {
            ap_phi_mux_data_3023_V_read3093_phi_phi_fu_109996_p4 = ap_phi_reg_pp0_iter0_data_3023_V_read3093_phi_reg_109992.read();
        }
    } else {
        ap_phi_mux_data_3023_V_read3093_phi_phi_fu_109996_p4 = ap_phi_reg_pp0_iter0_data_3023_V_read3093_phi_reg_109992.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_68205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_68205_p6 = data_3023_V_read3093_phi_reg_109992.read();
    } else {
        ap_phi_mux_data_3023_V_read3093_rewind_phi_fu_68205_p6 = data_3023_V_read3093_rewind_reg_68201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3024_V_read3094_phi_phi_fu_110009_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3024_V_read3094_phi_phi_fu_110009_p4 = ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_68219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3024_V_read3094_phi_phi_fu_110009_p4 = data_3024_V_read.read();
        } else {
            ap_phi_mux_data_3024_V_read3094_phi_phi_fu_110009_p4 = ap_phi_reg_pp0_iter0_data_3024_V_read3094_phi_reg_110005.read();
        }
    } else {
        ap_phi_mux_data_3024_V_read3094_phi_phi_fu_110009_p4 = ap_phi_reg_pp0_iter0_data_3024_V_read3094_phi_reg_110005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_68219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_68219_p6 = data_3024_V_read3094_phi_reg_110005.read();
    } else {
        ap_phi_mux_data_3024_V_read3094_rewind_phi_fu_68219_p6 = data_3024_V_read3094_rewind_reg_68215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3025_V_read3095_phi_phi_fu_110022_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3025_V_read3095_phi_phi_fu_110022_p4 = ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_68233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3025_V_read3095_phi_phi_fu_110022_p4 = data_3025_V_read.read();
        } else {
            ap_phi_mux_data_3025_V_read3095_phi_phi_fu_110022_p4 = ap_phi_reg_pp0_iter0_data_3025_V_read3095_phi_reg_110018.read();
        }
    } else {
        ap_phi_mux_data_3025_V_read3095_phi_phi_fu_110022_p4 = ap_phi_reg_pp0_iter0_data_3025_V_read3095_phi_reg_110018.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_68233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_68233_p6 = data_3025_V_read3095_phi_reg_110018.read();
    } else {
        ap_phi_mux_data_3025_V_read3095_rewind_phi_fu_68233_p6 = data_3025_V_read3095_rewind_reg_68229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3026_V_read3096_phi_phi_fu_110035_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3026_V_read3096_phi_phi_fu_110035_p4 = ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_68247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3026_V_read3096_phi_phi_fu_110035_p4 = data_3026_V_read.read();
        } else {
            ap_phi_mux_data_3026_V_read3096_phi_phi_fu_110035_p4 = ap_phi_reg_pp0_iter0_data_3026_V_read3096_phi_reg_110031.read();
        }
    } else {
        ap_phi_mux_data_3026_V_read3096_phi_phi_fu_110035_p4 = ap_phi_reg_pp0_iter0_data_3026_V_read3096_phi_reg_110031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_68247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_68247_p6 = data_3026_V_read3096_phi_reg_110031.read();
    } else {
        ap_phi_mux_data_3026_V_read3096_rewind_phi_fu_68247_p6 = data_3026_V_read3096_rewind_reg_68243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3027_V_read3097_phi_phi_fu_110048_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3027_V_read3097_phi_phi_fu_110048_p4 = ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_68261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3027_V_read3097_phi_phi_fu_110048_p4 = data_3027_V_read.read();
        } else {
            ap_phi_mux_data_3027_V_read3097_phi_phi_fu_110048_p4 = ap_phi_reg_pp0_iter0_data_3027_V_read3097_phi_reg_110044.read();
        }
    } else {
        ap_phi_mux_data_3027_V_read3097_phi_phi_fu_110048_p4 = ap_phi_reg_pp0_iter0_data_3027_V_read3097_phi_reg_110044.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_68261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_68261_p6 = data_3027_V_read3097_phi_reg_110044.read();
    } else {
        ap_phi_mux_data_3027_V_read3097_rewind_phi_fu_68261_p6 = data_3027_V_read3097_rewind_reg_68257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3028_V_read3098_phi_phi_fu_110061_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3028_V_read3098_phi_phi_fu_110061_p4 = ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_68275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3028_V_read3098_phi_phi_fu_110061_p4 = data_3028_V_read.read();
        } else {
            ap_phi_mux_data_3028_V_read3098_phi_phi_fu_110061_p4 = ap_phi_reg_pp0_iter0_data_3028_V_read3098_phi_reg_110057.read();
        }
    } else {
        ap_phi_mux_data_3028_V_read3098_phi_phi_fu_110061_p4 = ap_phi_reg_pp0_iter0_data_3028_V_read3098_phi_reg_110057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_68275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_68275_p6 = data_3028_V_read3098_phi_reg_110057.read();
    } else {
        ap_phi_mux_data_3028_V_read3098_rewind_phi_fu_68275_p6 = data_3028_V_read3098_rewind_reg_68271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3029_V_read3099_phi_phi_fu_110074_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3029_V_read3099_phi_phi_fu_110074_p4 = ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_68289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3029_V_read3099_phi_phi_fu_110074_p4 = data_3029_V_read.read();
        } else {
            ap_phi_mux_data_3029_V_read3099_phi_phi_fu_110074_p4 = ap_phi_reg_pp0_iter0_data_3029_V_read3099_phi_reg_110070.read();
        }
    } else {
        ap_phi_mux_data_3029_V_read3099_phi_phi_fu_110074_p4 = ap_phi_reg_pp0_iter0_data_3029_V_read3099_phi_reg_110070.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_68289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_68289_p6 = data_3029_V_read3099_phi_reg_110070.read();
    } else {
        ap_phi_mux_data_3029_V_read3099_rewind_phi_fu_68289_p6 = data_3029_V_read3099_rewind_reg_68285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_302_V_read372_phi_phi_fu_74623_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_302_V_read372_phi_phi_fu_74623_p4 = ap_phi_mux_data_302_V_read372_rewind_phi_fu_30111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_302_V_read372_phi_phi_fu_74623_p4 = data_302_V_read.read();
        } else {
            ap_phi_mux_data_302_V_read372_phi_phi_fu_74623_p4 = ap_phi_reg_pp0_iter0_data_302_V_read372_phi_reg_74619.read();
        }
    } else {
        ap_phi_mux_data_302_V_read372_phi_phi_fu_74623_p4 = ap_phi_reg_pp0_iter0_data_302_V_read372_phi_reg_74619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_302_V_read372_rewind_phi_fu_30111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_302_V_read372_rewind_phi_fu_30111_p6 = data_302_V_read372_phi_reg_74619.read();
    } else {
        ap_phi_mux_data_302_V_read372_rewind_phi_fu_30111_p6 = data_302_V_read372_rewind_reg_30107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3030_V_read3100_phi_phi_fu_110087_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3030_V_read3100_phi_phi_fu_110087_p4 = ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_68303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3030_V_read3100_phi_phi_fu_110087_p4 = data_3030_V_read.read();
        } else {
            ap_phi_mux_data_3030_V_read3100_phi_phi_fu_110087_p4 = ap_phi_reg_pp0_iter0_data_3030_V_read3100_phi_reg_110083.read();
        }
    } else {
        ap_phi_mux_data_3030_V_read3100_phi_phi_fu_110087_p4 = ap_phi_reg_pp0_iter0_data_3030_V_read3100_phi_reg_110083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_68303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_68303_p6 = data_3030_V_read3100_phi_reg_110083.read();
    } else {
        ap_phi_mux_data_3030_V_read3100_rewind_phi_fu_68303_p6 = data_3030_V_read3100_rewind_reg_68299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3031_V_read3101_phi_phi_fu_110100_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3031_V_read3101_phi_phi_fu_110100_p4 = ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_68317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3031_V_read3101_phi_phi_fu_110100_p4 = data_3031_V_read.read();
        } else {
            ap_phi_mux_data_3031_V_read3101_phi_phi_fu_110100_p4 = ap_phi_reg_pp0_iter0_data_3031_V_read3101_phi_reg_110096.read();
        }
    } else {
        ap_phi_mux_data_3031_V_read3101_phi_phi_fu_110100_p4 = ap_phi_reg_pp0_iter0_data_3031_V_read3101_phi_reg_110096.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_68317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_68317_p6 = data_3031_V_read3101_phi_reg_110096.read();
    } else {
        ap_phi_mux_data_3031_V_read3101_rewind_phi_fu_68317_p6 = data_3031_V_read3101_rewind_reg_68313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3032_V_read3102_phi_phi_fu_110113_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3032_V_read3102_phi_phi_fu_110113_p4 = ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_68331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3032_V_read3102_phi_phi_fu_110113_p4 = data_3032_V_read.read();
        } else {
            ap_phi_mux_data_3032_V_read3102_phi_phi_fu_110113_p4 = ap_phi_reg_pp0_iter0_data_3032_V_read3102_phi_reg_110109.read();
        }
    } else {
        ap_phi_mux_data_3032_V_read3102_phi_phi_fu_110113_p4 = ap_phi_reg_pp0_iter0_data_3032_V_read3102_phi_reg_110109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_68331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_68331_p6 = data_3032_V_read3102_phi_reg_110109.read();
    } else {
        ap_phi_mux_data_3032_V_read3102_rewind_phi_fu_68331_p6 = data_3032_V_read3102_rewind_reg_68327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3033_V_read3103_phi_phi_fu_110126_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3033_V_read3103_phi_phi_fu_110126_p4 = ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_68345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3033_V_read3103_phi_phi_fu_110126_p4 = data_3033_V_read.read();
        } else {
            ap_phi_mux_data_3033_V_read3103_phi_phi_fu_110126_p4 = ap_phi_reg_pp0_iter0_data_3033_V_read3103_phi_reg_110122.read();
        }
    } else {
        ap_phi_mux_data_3033_V_read3103_phi_phi_fu_110126_p4 = ap_phi_reg_pp0_iter0_data_3033_V_read3103_phi_reg_110122.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_68345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_68345_p6 = data_3033_V_read3103_phi_reg_110122.read();
    } else {
        ap_phi_mux_data_3033_V_read3103_rewind_phi_fu_68345_p6 = data_3033_V_read3103_rewind_reg_68341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3034_V_read3104_phi_phi_fu_110139_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3034_V_read3104_phi_phi_fu_110139_p4 = ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_68359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3034_V_read3104_phi_phi_fu_110139_p4 = data_3034_V_read.read();
        } else {
            ap_phi_mux_data_3034_V_read3104_phi_phi_fu_110139_p4 = ap_phi_reg_pp0_iter0_data_3034_V_read3104_phi_reg_110135.read();
        }
    } else {
        ap_phi_mux_data_3034_V_read3104_phi_phi_fu_110139_p4 = ap_phi_reg_pp0_iter0_data_3034_V_read3104_phi_reg_110135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_68359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_68359_p6 = data_3034_V_read3104_phi_reg_110135.read();
    } else {
        ap_phi_mux_data_3034_V_read3104_rewind_phi_fu_68359_p6 = data_3034_V_read3104_rewind_reg_68355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3035_V_read3105_phi_phi_fu_110152_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3035_V_read3105_phi_phi_fu_110152_p4 = ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_68373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3035_V_read3105_phi_phi_fu_110152_p4 = data_3035_V_read.read();
        } else {
            ap_phi_mux_data_3035_V_read3105_phi_phi_fu_110152_p4 = ap_phi_reg_pp0_iter0_data_3035_V_read3105_phi_reg_110148.read();
        }
    } else {
        ap_phi_mux_data_3035_V_read3105_phi_phi_fu_110152_p4 = ap_phi_reg_pp0_iter0_data_3035_V_read3105_phi_reg_110148.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_68373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_68373_p6 = data_3035_V_read3105_phi_reg_110148.read();
    } else {
        ap_phi_mux_data_3035_V_read3105_rewind_phi_fu_68373_p6 = data_3035_V_read3105_rewind_reg_68369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3036_V_read3106_phi_phi_fu_110165_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3036_V_read3106_phi_phi_fu_110165_p4 = ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_68387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3036_V_read3106_phi_phi_fu_110165_p4 = data_3036_V_read.read();
        } else {
            ap_phi_mux_data_3036_V_read3106_phi_phi_fu_110165_p4 = ap_phi_reg_pp0_iter0_data_3036_V_read3106_phi_reg_110161.read();
        }
    } else {
        ap_phi_mux_data_3036_V_read3106_phi_phi_fu_110165_p4 = ap_phi_reg_pp0_iter0_data_3036_V_read3106_phi_reg_110161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_68387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_68387_p6 = data_3036_V_read3106_phi_reg_110161.read();
    } else {
        ap_phi_mux_data_3036_V_read3106_rewind_phi_fu_68387_p6 = data_3036_V_read3106_rewind_reg_68383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3037_V_read3107_phi_phi_fu_110178_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3037_V_read3107_phi_phi_fu_110178_p4 = ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_68401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3037_V_read3107_phi_phi_fu_110178_p4 = data_3037_V_read.read();
        } else {
            ap_phi_mux_data_3037_V_read3107_phi_phi_fu_110178_p4 = ap_phi_reg_pp0_iter0_data_3037_V_read3107_phi_reg_110174.read();
        }
    } else {
        ap_phi_mux_data_3037_V_read3107_phi_phi_fu_110178_p4 = ap_phi_reg_pp0_iter0_data_3037_V_read3107_phi_reg_110174.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_68401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_68401_p6 = data_3037_V_read3107_phi_reg_110174.read();
    } else {
        ap_phi_mux_data_3037_V_read3107_rewind_phi_fu_68401_p6 = data_3037_V_read3107_rewind_reg_68397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3038_V_read3108_phi_phi_fu_110191_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3038_V_read3108_phi_phi_fu_110191_p4 = ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_68415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3038_V_read3108_phi_phi_fu_110191_p4 = data_3038_V_read.read();
        } else {
            ap_phi_mux_data_3038_V_read3108_phi_phi_fu_110191_p4 = ap_phi_reg_pp0_iter0_data_3038_V_read3108_phi_reg_110187.read();
        }
    } else {
        ap_phi_mux_data_3038_V_read3108_phi_phi_fu_110191_p4 = ap_phi_reg_pp0_iter0_data_3038_V_read3108_phi_reg_110187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_68415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_68415_p6 = data_3038_V_read3108_phi_reg_110187.read();
    } else {
        ap_phi_mux_data_3038_V_read3108_rewind_phi_fu_68415_p6 = data_3038_V_read3108_rewind_reg_68411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3039_V_read3109_phi_phi_fu_110204_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3039_V_read3109_phi_phi_fu_110204_p4 = ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_68429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3039_V_read3109_phi_phi_fu_110204_p4 = data_3039_V_read.read();
        } else {
            ap_phi_mux_data_3039_V_read3109_phi_phi_fu_110204_p4 = ap_phi_reg_pp0_iter0_data_3039_V_read3109_phi_reg_110200.read();
        }
    } else {
        ap_phi_mux_data_3039_V_read3109_phi_phi_fu_110204_p4 = ap_phi_reg_pp0_iter0_data_3039_V_read3109_phi_reg_110200.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_68429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_68429_p6 = data_3039_V_read3109_phi_reg_110200.read();
    } else {
        ap_phi_mux_data_3039_V_read3109_rewind_phi_fu_68429_p6 = data_3039_V_read3109_rewind_reg_68425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_303_V_read373_phi_phi_fu_74636_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_303_V_read373_phi_phi_fu_74636_p4 = ap_phi_mux_data_303_V_read373_rewind_phi_fu_30125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_303_V_read373_phi_phi_fu_74636_p4 = data_303_V_read.read();
        } else {
            ap_phi_mux_data_303_V_read373_phi_phi_fu_74636_p4 = ap_phi_reg_pp0_iter0_data_303_V_read373_phi_reg_74632.read();
        }
    } else {
        ap_phi_mux_data_303_V_read373_phi_phi_fu_74636_p4 = ap_phi_reg_pp0_iter0_data_303_V_read373_phi_reg_74632.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_303_V_read373_rewind_phi_fu_30125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_303_V_read373_rewind_phi_fu_30125_p6 = data_303_V_read373_phi_reg_74632.read();
    } else {
        ap_phi_mux_data_303_V_read373_rewind_phi_fu_30125_p6 = data_303_V_read373_rewind_reg_30121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3040_V_read3110_phi_phi_fu_110217_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3040_V_read3110_phi_phi_fu_110217_p4 = ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_68443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3040_V_read3110_phi_phi_fu_110217_p4 = data_3040_V_read.read();
        } else {
            ap_phi_mux_data_3040_V_read3110_phi_phi_fu_110217_p4 = ap_phi_reg_pp0_iter0_data_3040_V_read3110_phi_reg_110213.read();
        }
    } else {
        ap_phi_mux_data_3040_V_read3110_phi_phi_fu_110217_p4 = ap_phi_reg_pp0_iter0_data_3040_V_read3110_phi_reg_110213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_68443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_68443_p6 = data_3040_V_read3110_phi_reg_110213.read();
    } else {
        ap_phi_mux_data_3040_V_read3110_rewind_phi_fu_68443_p6 = data_3040_V_read3110_rewind_reg_68439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3041_V_read3111_phi_phi_fu_110230_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3041_V_read3111_phi_phi_fu_110230_p4 = ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_68457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3041_V_read3111_phi_phi_fu_110230_p4 = data_3041_V_read.read();
        } else {
            ap_phi_mux_data_3041_V_read3111_phi_phi_fu_110230_p4 = ap_phi_reg_pp0_iter0_data_3041_V_read3111_phi_reg_110226.read();
        }
    } else {
        ap_phi_mux_data_3041_V_read3111_phi_phi_fu_110230_p4 = ap_phi_reg_pp0_iter0_data_3041_V_read3111_phi_reg_110226.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_68457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_68457_p6 = data_3041_V_read3111_phi_reg_110226.read();
    } else {
        ap_phi_mux_data_3041_V_read3111_rewind_phi_fu_68457_p6 = data_3041_V_read3111_rewind_reg_68453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3042_V_read3112_phi_phi_fu_110243_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3042_V_read3112_phi_phi_fu_110243_p4 = ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_68471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3042_V_read3112_phi_phi_fu_110243_p4 = data_3042_V_read.read();
        } else {
            ap_phi_mux_data_3042_V_read3112_phi_phi_fu_110243_p4 = ap_phi_reg_pp0_iter0_data_3042_V_read3112_phi_reg_110239.read();
        }
    } else {
        ap_phi_mux_data_3042_V_read3112_phi_phi_fu_110243_p4 = ap_phi_reg_pp0_iter0_data_3042_V_read3112_phi_reg_110239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_68471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_68471_p6 = data_3042_V_read3112_phi_reg_110239.read();
    } else {
        ap_phi_mux_data_3042_V_read3112_rewind_phi_fu_68471_p6 = data_3042_V_read3112_rewind_reg_68467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3043_V_read3113_phi_phi_fu_110256_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3043_V_read3113_phi_phi_fu_110256_p4 = ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_68485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3043_V_read3113_phi_phi_fu_110256_p4 = data_3043_V_read.read();
        } else {
            ap_phi_mux_data_3043_V_read3113_phi_phi_fu_110256_p4 = ap_phi_reg_pp0_iter0_data_3043_V_read3113_phi_reg_110252.read();
        }
    } else {
        ap_phi_mux_data_3043_V_read3113_phi_phi_fu_110256_p4 = ap_phi_reg_pp0_iter0_data_3043_V_read3113_phi_reg_110252.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_68485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_68485_p6 = data_3043_V_read3113_phi_reg_110252.read();
    } else {
        ap_phi_mux_data_3043_V_read3113_rewind_phi_fu_68485_p6 = data_3043_V_read3113_rewind_reg_68481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3044_V_read3114_phi_phi_fu_110269_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3044_V_read3114_phi_phi_fu_110269_p4 = ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_68499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3044_V_read3114_phi_phi_fu_110269_p4 = data_3044_V_read.read();
        } else {
            ap_phi_mux_data_3044_V_read3114_phi_phi_fu_110269_p4 = ap_phi_reg_pp0_iter0_data_3044_V_read3114_phi_reg_110265.read();
        }
    } else {
        ap_phi_mux_data_3044_V_read3114_phi_phi_fu_110269_p4 = ap_phi_reg_pp0_iter0_data_3044_V_read3114_phi_reg_110265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_68499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_68499_p6 = data_3044_V_read3114_phi_reg_110265.read();
    } else {
        ap_phi_mux_data_3044_V_read3114_rewind_phi_fu_68499_p6 = data_3044_V_read3114_rewind_reg_68495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3045_V_read3115_phi_phi_fu_110282_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3045_V_read3115_phi_phi_fu_110282_p4 = ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_68513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3045_V_read3115_phi_phi_fu_110282_p4 = data_3045_V_read.read();
        } else {
            ap_phi_mux_data_3045_V_read3115_phi_phi_fu_110282_p4 = ap_phi_reg_pp0_iter0_data_3045_V_read3115_phi_reg_110278.read();
        }
    } else {
        ap_phi_mux_data_3045_V_read3115_phi_phi_fu_110282_p4 = ap_phi_reg_pp0_iter0_data_3045_V_read3115_phi_reg_110278.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_68513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_68513_p6 = data_3045_V_read3115_phi_reg_110278.read();
    } else {
        ap_phi_mux_data_3045_V_read3115_rewind_phi_fu_68513_p6 = data_3045_V_read3115_rewind_reg_68509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3046_V_read3116_phi_phi_fu_110295_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3046_V_read3116_phi_phi_fu_110295_p4 = ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_68527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3046_V_read3116_phi_phi_fu_110295_p4 = data_3046_V_read.read();
        } else {
            ap_phi_mux_data_3046_V_read3116_phi_phi_fu_110295_p4 = ap_phi_reg_pp0_iter0_data_3046_V_read3116_phi_reg_110291.read();
        }
    } else {
        ap_phi_mux_data_3046_V_read3116_phi_phi_fu_110295_p4 = ap_phi_reg_pp0_iter0_data_3046_V_read3116_phi_reg_110291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_68527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_68527_p6 = data_3046_V_read3116_phi_reg_110291.read();
    } else {
        ap_phi_mux_data_3046_V_read3116_rewind_phi_fu_68527_p6 = data_3046_V_read3116_rewind_reg_68523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3047_V_read3117_phi_phi_fu_110308_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3047_V_read3117_phi_phi_fu_110308_p4 = ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_68541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3047_V_read3117_phi_phi_fu_110308_p4 = data_3047_V_read.read();
        } else {
            ap_phi_mux_data_3047_V_read3117_phi_phi_fu_110308_p4 = ap_phi_reg_pp0_iter0_data_3047_V_read3117_phi_reg_110304.read();
        }
    } else {
        ap_phi_mux_data_3047_V_read3117_phi_phi_fu_110308_p4 = ap_phi_reg_pp0_iter0_data_3047_V_read3117_phi_reg_110304.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_68541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_68541_p6 = data_3047_V_read3117_phi_reg_110304.read();
    } else {
        ap_phi_mux_data_3047_V_read3117_rewind_phi_fu_68541_p6 = data_3047_V_read3117_rewind_reg_68537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3048_V_read3118_phi_phi_fu_110321_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3048_V_read3118_phi_phi_fu_110321_p4 = ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_68555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3048_V_read3118_phi_phi_fu_110321_p4 = data_3048_V_read.read();
        } else {
            ap_phi_mux_data_3048_V_read3118_phi_phi_fu_110321_p4 = ap_phi_reg_pp0_iter0_data_3048_V_read3118_phi_reg_110317.read();
        }
    } else {
        ap_phi_mux_data_3048_V_read3118_phi_phi_fu_110321_p4 = ap_phi_reg_pp0_iter0_data_3048_V_read3118_phi_reg_110317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_68555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_68555_p6 = data_3048_V_read3118_phi_reg_110317.read();
    } else {
        ap_phi_mux_data_3048_V_read3118_rewind_phi_fu_68555_p6 = data_3048_V_read3118_rewind_reg_68551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3049_V_read3119_phi_phi_fu_110334_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3049_V_read3119_phi_phi_fu_110334_p4 = ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_68569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3049_V_read3119_phi_phi_fu_110334_p4 = data_3049_V_read.read();
        } else {
            ap_phi_mux_data_3049_V_read3119_phi_phi_fu_110334_p4 = ap_phi_reg_pp0_iter0_data_3049_V_read3119_phi_reg_110330.read();
        }
    } else {
        ap_phi_mux_data_3049_V_read3119_phi_phi_fu_110334_p4 = ap_phi_reg_pp0_iter0_data_3049_V_read3119_phi_reg_110330.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_68569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_68569_p6 = data_3049_V_read3119_phi_reg_110330.read();
    } else {
        ap_phi_mux_data_3049_V_read3119_rewind_phi_fu_68569_p6 = data_3049_V_read3119_rewind_reg_68565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_304_V_read374_phi_phi_fu_74649_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_304_V_read374_phi_phi_fu_74649_p4 = ap_phi_mux_data_304_V_read374_rewind_phi_fu_30139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_304_V_read374_phi_phi_fu_74649_p4 = data_304_V_read.read();
        } else {
            ap_phi_mux_data_304_V_read374_phi_phi_fu_74649_p4 = ap_phi_reg_pp0_iter0_data_304_V_read374_phi_reg_74645.read();
        }
    } else {
        ap_phi_mux_data_304_V_read374_phi_phi_fu_74649_p4 = ap_phi_reg_pp0_iter0_data_304_V_read374_phi_reg_74645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_304_V_read374_rewind_phi_fu_30139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_304_V_read374_rewind_phi_fu_30139_p6 = data_304_V_read374_phi_reg_74645.read();
    } else {
        ap_phi_mux_data_304_V_read374_rewind_phi_fu_30139_p6 = data_304_V_read374_rewind_reg_30135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3050_V_read3120_phi_phi_fu_110347_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3050_V_read3120_phi_phi_fu_110347_p4 = ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_68583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3050_V_read3120_phi_phi_fu_110347_p4 = data_3050_V_read.read();
        } else {
            ap_phi_mux_data_3050_V_read3120_phi_phi_fu_110347_p4 = ap_phi_reg_pp0_iter0_data_3050_V_read3120_phi_reg_110343.read();
        }
    } else {
        ap_phi_mux_data_3050_V_read3120_phi_phi_fu_110347_p4 = ap_phi_reg_pp0_iter0_data_3050_V_read3120_phi_reg_110343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_68583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_68583_p6 = data_3050_V_read3120_phi_reg_110343.read();
    } else {
        ap_phi_mux_data_3050_V_read3120_rewind_phi_fu_68583_p6 = data_3050_V_read3120_rewind_reg_68579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3051_V_read3121_phi_phi_fu_110360_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3051_V_read3121_phi_phi_fu_110360_p4 = ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_68597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3051_V_read3121_phi_phi_fu_110360_p4 = data_3051_V_read.read();
        } else {
            ap_phi_mux_data_3051_V_read3121_phi_phi_fu_110360_p4 = ap_phi_reg_pp0_iter0_data_3051_V_read3121_phi_reg_110356.read();
        }
    } else {
        ap_phi_mux_data_3051_V_read3121_phi_phi_fu_110360_p4 = ap_phi_reg_pp0_iter0_data_3051_V_read3121_phi_reg_110356.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_68597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_68597_p6 = data_3051_V_read3121_phi_reg_110356.read();
    } else {
        ap_phi_mux_data_3051_V_read3121_rewind_phi_fu_68597_p6 = data_3051_V_read3121_rewind_reg_68593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3052_V_read3122_phi_phi_fu_110373_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3052_V_read3122_phi_phi_fu_110373_p4 = ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_68611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3052_V_read3122_phi_phi_fu_110373_p4 = data_3052_V_read.read();
        } else {
            ap_phi_mux_data_3052_V_read3122_phi_phi_fu_110373_p4 = ap_phi_reg_pp0_iter0_data_3052_V_read3122_phi_reg_110369.read();
        }
    } else {
        ap_phi_mux_data_3052_V_read3122_phi_phi_fu_110373_p4 = ap_phi_reg_pp0_iter0_data_3052_V_read3122_phi_reg_110369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_68611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_68611_p6 = data_3052_V_read3122_phi_reg_110369.read();
    } else {
        ap_phi_mux_data_3052_V_read3122_rewind_phi_fu_68611_p6 = data_3052_V_read3122_rewind_reg_68607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3053_V_read3123_phi_phi_fu_110386_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3053_V_read3123_phi_phi_fu_110386_p4 = ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_68625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3053_V_read3123_phi_phi_fu_110386_p4 = data_3053_V_read.read();
        } else {
            ap_phi_mux_data_3053_V_read3123_phi_phi_fu_110386_p4 = ap_phi_reg_pp0_iter0_data_3053_V_read3123_phi_reg_110382.read();
        }
    } else {
        ap_phi_mux_data_3053_V_read3123_phi_phi_fu_110386_p4 = ap_phi_reg_pp0_iter0_data_3053_V_read3123_phi_reg_110382.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_68625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_68625_p6 = data_3053_V_read3123_phi_reg_110382.read();
    } else {
        ap_phi_mux_data_3053_V_read3123_rewind_phi_fu_68625_p6 = data_3053_V_read3123_rewind_reg_68621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3054_V_read3124_phi_phi_fu_110399_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3054_V_read3124_phi_phi_fu_110399_p4 = ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_68639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3054_V_read3124_phi_phi_fu_110399_p4 = data_3054_V_read.read();
        } else {
            ap_phi_mux_data_3054_V_read3124_phi_phi_fu_110399_p4 = ap_phi_reg_pp0_iter0_data_3054_V_read3124_phi_reg_110395.read();
        }
    } else {
        ap_phi_mux_data_3054_V_read3124_phi_phi_fu_110399_p4 = ap_phi_reg_pp0_iter0_data_3054_V_read3124_phi_reg_110395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_68639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_68639_p6 = data_3054_V_read3124_phi_reg_110395.read();
    } else {
        ap_phi_mux_data_3054_V_read3124_rewind_phi_fu_68639_p6 = data_3054_V_read3124_rewind_reg_68635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3055_V_read3125_phi_phi_fu_110412_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3055_V_read3125_phi_phi_fu_110412_p4 = ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_68653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3055_V_read3125_phi_phi_fu_110412_p4 = data_3055_V_read.read();
        } else {
            ap_phi_mux_data_3055_V_read3125_phi_phi_fu_110412_p4 = ap_phi_reg_pp0_iter0_data_3055_V_read3125_phi_reg_110408.read();
        }
    } else {
        ap_phi_mux_data_3055_V_read3125_phi_phi_fu_110412_p4 = ap_phi_reg_pp0_iter0_data_3055_V_read3125_phi_reg_110408.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_68653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_68653_p6 = data_3055_V_read3125_phi_reg_110408.read();
    } else {
        ap_phi_mux_data_3055_V_read3125_rewind_phi_fu_68653_p6 = data_3055_V_read3125_rewind_reg_68649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3056_V_read3126_phi_phi_fu_110425_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3056_V_read3126_phi_phi_fu_110425_p4 = ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_68667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3056_V_read3126_phi_phi_fu_110425_p4 = data_3056_V_read.read();
        } else {
            ap_phi_mux_data_3056_V_read3126_phi_phi_fu_110425_p4 = ap_phi_reg_pp0_iter0_data_3056_V_read3126_phi_reg_110421.read();
        }
    } else {
        ap_phi_mux_data_3056_V_read3126_phi_phi_fu_110425_p4 = ap_phi_reg_pp0_iter0_data_3056_V_read3126_phi_reg_110421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_68667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_68667_p6 = data_3056_V_read3126_phi_reg_110421.read();
    } else {
        ap_phi_mux_data_3056_V_read3126_rewind_phi_fu_68667_p6 = data_3056_V_read3126_rewind_reg_68663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3057_V_read3127_phi_phi_fu_110438_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3057_V_read3127_phi_phi_fu_110438_p4 = ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_68681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3057_V_read3127_phi_phi_fu_110438_p4 = data_3057_V_read.read();
        } else {
            ap_phi_mux_data_3057_V_read3127_phi_phi_fu_110438_p4 = ap_phi_reg_pp0_iter0_data_3057_V_read3127_phi_reg_110434.read();
        }
    } else {
        ap_phi_mux_data_3057_V_read3127_phi_phi_fu_110438_p4 = ap_phi_reg_pp0_iter0_data_3057_V_read3127_phi_reg_110434.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_68681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_68681_p6 = data_3057_V_read3127_phi_reg_110434.read();
    } else {
        ap_phi_mux_data_3057_V_read3127_rewind_phi_fu_68681_p6 = data_3057_V_read3127_rewind_reg_68677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3058_V_read3128_phi_phi_fu_110451_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3058_V_read3128_phi_phi_fu_110451_p4 = ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_68695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3058_V_read3128_phi_phi_fu_110451_p4 = data_3058_V_read.read();
        } else {
            ap_phi_mux_data_3058_V_read3128_phi_phi_fu_110451_p4 = ap_phi_reg_pp0_iter0_data_3058_V_read3128_phi_reg_110447.read();
        }
    } else {
        ap_phi_mux_data_3058_V_read3128_phi_phi_fu_110451_p4 = ap_phi_reg_pp0_iter0_data_3058_V_read3128_phi_reg_110447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_68695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_68695_p6 = data_3058_V_read3128_phi_reg_110447.read();
    } else {
        ap_phi_mux_data_3058_V_read3128_rewind_phi_fu_68695_p6 = data_3058_V_read3128_rewind_reg_68691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3059_V_read3129_phi_phi_fu_110464_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3059_V_read3129_phi_phi_fu_110464_p4 = ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_68709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3059_V_read3129_phi_phi_fu_110464_p4 = data_3059_V_read.read();
        } else {
            ap_phi_mux_data_3059_V_read3129_phi_phi_fu_110464_p4 = ap_phi_reg_pp0_iter0_data_3059_V_read3129_phi_reg_110460.read();
        }
    } else {
        ap_phi_mux_data_3059_V_read3129_phi_phi_fu_110464_p4 = ap_phi_reg_pp0_iter0_data_3059_V_read3129_phi_reg_110460.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_68709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_68709_p6 = data_3059_V_read3129_phi_reg_110460.read();
    } else {
        ap_phi_mux_data_3059_V_read3129_rewind_phi_fu_68709_p6 = data_3059_V_read3129_rewind_reg_68705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_305_V_read375_phi_phi_fu_74662_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_305_V_read375_phi_phi_fu_74662_p4 = ap_phi_mux_data_305_V_read375_rewind_phi_fu_30153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_305_V_read375_phi_phi_fu_74662_p4 = data_305_V_read.read();
        } else {
            ap_phi_mux_data_305_V_read375_phi_phi_fu_74662_p4 = ap_phi_reg_pp0_iter0_data_305_V_read375_phi_reg_74658.read();
        }
    } else {
        ap_phi_mux_data_305_V_read375_phi_phi_fu_74662_p4 = ap_phi_reg_pp0_iter0_data_305_V_read375_phi_reg_74658.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_305_V_read375_rewind_phi_fu_30153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_305_V_read375_rewind_phi_fu_30153_p6 = data_305_V_read375_phi_reg_74658.read();
    } else {
        ap_phi_mux_data_305_V_read375_rewind_phi_fu_30153_p6 = data_305_V_read375_rewind_reg_30149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3060_V_read3130_phi_phi_fu_110477_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3060_V_read3130_phi_phi_fu_110477_p4 = ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_68723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3060_V_read3130_phi_phi_fu_110477_p4 = data_3060_V_read.read();
        } else {
            ap_phi_mux_data_3060_V_read3130_phi_phi_fu_110477_p4 = ap_phi_reg_pp0_iter0_data_3060_V_read3130_phi_reg_110473.read();
        }
    } else {
        ap_phi_mux_data_3060_V_read3130_phi_phi_fu_110477_p4 = ap_phi_reg_pp0_iter0_data_3060_V_read3130_phi_reg_110473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_68723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_68723_p6 = data_3060_V_read3130_phi_reg_110473.read();
    } else {
        ap_phi_mux_data_3060_V_read3130_rewind_phi_fu_68723_p6 = data_3060_V_read3130_rewind_reg_68719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3061_V_read3131_phi_phi_fu_110490_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3061_V_read3131_phi_phi_fu_110490_p4 = ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_68737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3061_V_read3131_phi_phi_fu_110490_p4 = data_3061_V_read.read();
        } else {
            ap_phi_mux_data_3061_V_read3131_phi_phi_fu_110490_p4 = ap_phi_reg_pp0_iter0_data_3061_V_read3131_phi_reg_110486.read();
        }
    } else {
        ap_phi_mux_data_3061_V_read3131_phi_phi_fu_110490_p4 = ap_phi_reg_pp0_iter0_data_3061_V_read3131_phi_reg_110486.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_68737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_68737_p6 = data_3061_V_read3131_phi_reg_110486.read();
    } else {
        ap_phi_mux_data_3061_V_read3131_rewind_phi_fu_68737_p6 = data_3061_V_read3131_rewind_reg_68733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3062_V_read3132_phi_phi_fu_110503_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3062_V_read3132_phi_phi_fu_110503_p4 = ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_68751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3062_V_read3132_phi_phi_fu_110503_p4 = data_3062_V_read.read();
        } else {
            ap_phi_mux_data_3062_V_read3132_phi_phi_fu_110503_p4 = ap_phi_reg_pp0_iter0_data_3062_V_read3132_phi_reg_110499.read();
        }
    } else {
        ap_phi_mux_data_3062_V_read3132_phi_phi_fu_110503_p4 = ap_phi_reg_pp0_iter0_data_3062_V_read3132_phi_reg_110499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_68751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_68751_p6 = data_3062_V_read3132_phi_reg_110499.read();
    } else {
        ap_phi_mux_data_3062_V_read3132_rewind_phi_fu_68751_p6 = data_3062_V_read3132_rewind_reg_68747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3063_V_read3133_phi_phi_fu_110516_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3063_V_read3133_phi_phi_fu_110516_p4 = ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_68765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3063_V_read3133_phi_phi_fu_110516_p4 = data_3063_V_read.read();
        } else {
            ap_phi_mux_data_3063_V_read3133_phi_phi_fu_110516_p4 = ap_phi_reg_pp0_iter0_data_3063_V_read3133_phi_reg_110512.read();
        }
    } else {
        ap_phi_mux_data_3063_V_read3133_phi_phi_fu_110516_p4 = ap_phi_reg_pp0_iter0_data_3063_V_read3133_phi_reg_110512.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_68765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_68765_p6 = data_3063_V_read3133_phi_reg_110512.read();
    } else {
        ap_phi_mux_data_3063_V_read3133_rewind_phi_fu_68765_p6 = data_3063_V_read3133_rewind_reg_68761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3064_V_read3134_phi_phi_fu_110529_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3064_V_read3134_phi_phi_fu_110529_p4 = ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_68779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3064_V_read3134_phi_phi_fu_110529_p4 = data_3064_V_read.read();
        } else {
            ap_phi_mux_data_3064_V_read3134_phi_phi_fu_110529_p4 = ap_phi_reg_pp0_iter0_data_3064_V_read3134_phi_reg_110525.read();
        }
    } else {
        ap_phi_mux_data_3064_V_read3134_phi_phi_fu_110529_p4 = ap_phi_reg_pp0_iter0_data_3064_V_read3134_phi_reg_110525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_68779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_68779_p6 = data_3064_V_read3134_phi_reg_110525.read();
    } else {
        ap_phi_mux_data_3064_V_read3134_rewind_phi_fu_68779_p6 = data_3064_V_read3134_rewind_reg_68775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3065_V_read3135_phi_phi_fu_110542_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3065_V_read3135_phi_phi_fu_110542_p4 = ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_68793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3065_V_read3135_phi_phi_fu_110542_p4 = data_3065_V_read.read();
        } else {
            ap_phi_mux_data_3065_V_read3135_phi_phi_fu_110542_p4 = ap_phi_reg_pp0_iter0_data_3065_V_read3135_phi_reg_110538.read();
        }
    } else {
        ap_phi_mux_data_3065_V_read3135_phi_phi_fu_110542_p4 = ap_phi_reg_pp0_iter0_data_3065_V_read3135_phi_reg_110538.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_68793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_68793_p6 = data_3065_V_read3135_phi_reg_110538.read();
    } else {
        ap_phi_mux_data_3065_V_read3135_rewind_phi_fu_68793_p6 = data_3065_V_read3135_rewind_reg_68789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3066_V_read3136_phi_phi_fu_110555_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3066_V_read3136_phi_phi_fu_110555_p4 = ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_68807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3066_V_read3136_phi_phi_fu_110555_p4 = data_3066_V_read.read();
        } else {
            ap_phi_mux_data_3066_V_read3136_phi_phi_fu_110555_p4 = ap_phi_reg_pp0_iter0_data_3066_V_read3136_phi_reg_110551.read();
        }
    } else {
        ap_phi_mux_data_3066_V_read3136_phi_phi_fu_110555_p4 = ap_phi_reg_pp0_iter0_data_3066_V_read3136_phi_reg_110551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_68807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_68807_p6 = data_3066_V_read3136_phi_reg_110551.read();
    } else {
        ap_phi_mux_data_3066_V_read3136_rewind_phi_fu_68807_p6 = data_3066_V_read3136_rewind_reg_68803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3067_V_read3137_phi_phi_fu_110568_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3067_V_read3137_phi_phi_fu_110568_p4 = ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_68821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3067_V_read3137_phi_phi_fu_110568_p4 = data_3067_V_read.read();
        } else {
            ap_phi_mux_data_3067_V_read3137_phi_phi_fu_110568_p4 = ap_phi_reg_pp0_iter0_data_3067_V_read3137_phi_reg_110564.read();
        }
    } else {
        ap_phi_mux_data_3067_V_read3137_phi_phi_fu_110568_p4 = ap_phi_reg_pp0_iter0_data_3067_V_read3137_phi_reg_110564.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_68821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_68821_p6 = data_3067_V_read3137_phi_reg_110564.read();
    } else {
        ap_phi_mux_data_3067_V_read3137_rewind_phi_fu_68821_p6 = data_3067_V_read3137_rewind_reg_68817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3068_V_read3138_phi_phi_fu_110581_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3068_V_read3138_phi_phi_fu_110581_p4 = ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_68835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3068_V_read3138_phi_phi_fu_110581_p4 = data_3068_V_read.read();
        } else {
            ap_phi_mux_data_3068_V_read3138_phi_phi_fu_110581_p4 = ap_phi_reg_pp0_iter0_data_3068_V_read3138_phi_reg_110577.read();
        }
    } else {
        ap_phi_mux_data_3068_V_read3138_phi_phi_fu_110581_p4 = ap_phi_reg_pp0_iter0_data_3068_V_read3138_phi_reg_110577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_68835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_68835_p6 = data_3068_V_read3138_phi_reg_110577.read();
    } else {
        ap_phi_mux_data_3068_V_read3138_rewind_phi_fu_68835_p6 = data_3068_V_read3138_rewind_reg_68831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3069_V_read3139_phi_phi_fu_110594_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3069_V_read3139_phi_phi_fu_110594_p4 = ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_68849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3069_V_read3139_phi_phi_fu_110594_p4 = data_3069_V_read.read();
        } else {
            ap_phi_mux_data_3069_V_read3139_phi_phi_fu_110594_p4 = ap_phi_reg_pp0_iter0_data_3069_V_read3139_phi_reg_110590.read();
        }
    } else {
        ap_phi_mux_data_3069_V_read3139_phi_phi_fu_110594_p4 = ap_phi_reg_pp0_iter0_data_3069_V_read3139_phi_reg_110590.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_68849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_68849_p6 = data_3069_V_read3139_phi_reg_110590.read();
    } else {
        ap_phi_mux_data_3069_V_read3139_rewind_phi_fu_68849_p6 = data_3069_V_read3139_rewind_reg_68845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_306_V_read376_phi_phi_fu_74675_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_306_V_read376_phi_phi_fu_74675_p4 = ap_phi_mux_data_306_V_read376_rewind_phi_fu_30167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_306_V_read376_phi_phi_fu_74675_p4 = data_306_V_read.read();
        } else {
            ap_phi_mux_data_306_V_read376_phi_phi_fu_74675_p4 = ap_phi_reg_pp0_iter0_data_306_V_read376_phi_reg_74671.read();
        }
    } else {
        ap_phi_mux_data_306_V_read376_phi_phi_fu_74675_p4 = ap_phi_reg_pp0_iter0_data_306_V_read376_phi_reg_74671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_306_V_read376_rewind_phi_fu_30167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_306_V_read376_rewind_phi_fu_30167_p6 = data_306_V_read376_phi_reg_74671.read();
    } else {
        ap_phi_mux_data_306_V_read376_rewind_phi_fu_30167_p6 = data_306_V_read376_rewind_reg_30163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3070_V_read3140_phi_phi_fu_110607_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3070_V_read3140_phi_phi_fu_110607_p4 = ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_68863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3070_V_read3140_phi_phi_fu_110607_p4 = data_3070_V_read.read();
        } else {
            ap_phi_mux_data_3070_V_read3140_phi_phi_fu_110607_p4 = ap_phi_reg_pp0_iter0_data_3070_V_read3140_phi_reg_110603.read();
        }
    } else {
        ap_phi_mux_data_3070_V_read3140_phi_phi_fu_110607_p4 = ap_phi_reg_pp0_iter0_data_3070_V_read3140_phi_reg_110603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_68863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_68863_p6 = data_3070_V_read3140_phi_reg_110603.read();
    } else {
        ap_phi_mux_data_3070_V_read3140_rewind_phi_fu_68863_p6 = data_3070_V_read3140_rewind_reg_68859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3071_V_read3141_phi_phi_fu_110620_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3071_V_read3141_phi_phi_fu_110620_p4 = ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_68877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3071_V_read3141_phi_phi_fu_110620_p4 = data_3071_V_read.read();
        } else {
            ap_phi_mux_data_3071_V_read3141_phi_phi_fu_110620_p4 = ap_phi_reg_pp0_iter0_data_3071_V_read3141_phi_reg_110616.read();
        }
    } else {
        ap_phi_mux_data_3071_V_read3141_phi_phi_fu_110620_p4 = ap_phi_reg_pp0_iter0_data_3071_V_read3141_phi_reg_110616.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_68877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_68877_p6 = data_3071_V_read3141_phi_reg_110616.read();
    } else {
        ap_phi_mux_data_3071_V_read3141_rewind_phi_fu_68877_p6 = data_3071_V_read3141_rewind_reg_68873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3072_V_read3142_phi_phi_fu_110633_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3072_V_read3142_phi_phi_fu_110633_p4 = ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_68891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3072_V_read3142_phi_phi_fu_110633_p4 = data_3072_V_read.read();
        } else {
            ap_phi_mux_data_3072_V_read3142_phi_phi_fu_110633_p4 = ap_phi_reg_pp0_iter0_data_3072_V_read3142_phi_reg_110629.read();
        }
    } else {
        ap_phi_mux_data_3072_V_read3142_phi_phi_fu_110633_p4 = ap_phi_reg_pp0_iter0_data_3072_V_read3142_phi_reg_110629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_68891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_68891_p6 = data_3072_V_read3142_phi_reg_110629.read();
    } else {
        ap_phi_mux_data_3072_V_read3142_rewind_phi_fu_68891_p6 = data_3072_V_read3142_rewind_reg_68887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3073_V_read3143_phi_phi_fu_110646_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3073_V_read3143_phi_phi_fu_110646_p4 = ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_68905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3073_V_read3143_phi_phi_fu_110646_p4 = data_3073_V_read.read();
        } else {
            ap_phi_mux_data_3073_V_read3143_phi_phi_fu_110646_p4 = ap_phi_reg_pp0_iter0_data_3073_V_read3143_phi_reg_110642.read();
        }
    } else {
        ap_phi_mux_data_3073_V_read3143_phi_phi_fu_110646_p4 = ap_phi_reg_pp0_iter0_data_3073_V_read3143_phi_reg_110642.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_68905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_68905_p6 = data_3073_V_read3143_phi_reg_110642.read();
    } else {
        ap_phi_mux_data_3073_V_read3143_rewind_phi_fu_68905_p6 = data_3073_V_read3143_rewind_reg_68901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3074_V_read3144_phi_phi_fu_110659_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3074_V_read3144_phi_phi_fu_110659_p4 = ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_68919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3074_V_read3144_phi_phi_fu_110659_p4 = data_3074_V_read.read();
        } else {
            ap_phi_mux_data_3074_V_read3144_phi_phi_fu_110659_p4 = ap_phi_reg_pp0_iter0_data_3074_V_read3144_phi_reg_110655.read();
        }
    } else {
        ap_phi_mux_data_3074_V_read3144_phi_phi_fu_110659_p4 = ap_phi_reg_pp0_iter0_data_3074_V_read3144_phi_reg_110655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_68919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_68919_p6 = data_3074_V_read3144_phi_reg_110655.read();
    } else {
        ap_phi_mux_data_3074_V_read3144_rewind_phi_fu_68919_p6 = data_3074_V_read3144_rewind_reg_68915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3075_V_read3145_phi_phi_fu_110672_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3075_V_read3145_phi_phi_fu_110672_p4 = ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_68933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3075_V_read3145_phi_phi_fu_110672_p4 = data_3075_V_read.read();
        } else {
            ap_phi_mux_data_3075_V_read3145_phi_phi_fu_110672_p4 = ap_phi_reg_pp0_iter0_data_3075_V_read3145_phi_reg_110668.read();
        }
    } else {
        ap_phi_mux_data_3075_V_read3145_phi_phi_fu_110672_p4 = ap_phi_reg_pp0_iter0_data_3075_V_read3145_phi_reg_110668.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_68933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_68933_p6 = data_3075_V_read3145_phi_reg_110668.read();
    } else {
        ap_phi_mux_data_3075_V_read3145_rewind_phi_fu_68933_p6 = data_3075_V_read3145_rewind_reg_68929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3076_V_read3146_phi_phi_fu_110685_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3076_V_read3146_phi_phi_fu_110685_p4 = ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_68947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3076_V_read3146_phi_phi_fu_110685_p4 = data_3076_V_read.read();
        } else {
            ap_phi_mux_data_3076_V_read3146_phi_phi_fu_110685_p4 = ap_phi_reg_pp0_iter0_data_3076_V_read3146_phi_reg_110681.read();
        }
    } else {
        ap_phi_mux_data_3076_V_read3146_phi_phi_fu_110685_p4 = ap_phi_reg_pp0_iter0_data_3076_V_read3146_phi_reg_110681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_68947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_68947_p6 = data_3076_V_read3146_phi_reg_110681.read();
    } else {
        ap_phi_mux_data_3076_V_read3146_rewind_phi_fu_68947_p6 = data_3076_V_read3146_rewind_reg_68943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3077_V_read3147_phi_phi_fu_110698_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3077_V_read3147_phi_phi_fu_110698_p4 = ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_68961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3077_V_read3147_phi_phi_fu_110698_p4 = data_3077_V_read.read();
        } else {
            ap_phi_mux_data_3077_V_read3147_phi_phi_fu_110698_p4 = ap_phi_reg_pp0_iter0_data_3077_V_read3147_phi_reg_110694.read();
        }
    } else {
        ap_phi_mux_data_3077_V_read3147_phi_phi_fu_110698_p4 = ap_phi_reg_pp0_iter0_data_3077_V_read3147_phi_reg_110694.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_68961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_68961_p6 = data_3077_V_read3147_phi_reg_110694.read();
    } else {
        ap_phi_mux_data_3077_V_read3147_rewind_phi_fu_68961_p6 = data_3077_V_read3147_rewind_reg_68957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3078_V_read3148_phi_phi_fu_110711_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3078_V_read3148_phi_phi_fu_110711_p4 = ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_68975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3078_V_read3148_phi_phi_fu_110711_p4 = data_3078_V_read.read();
        } else {
            ap_phi_mux_data_3078_V_read3148_phi_phi_fu_110711_p4 = ap_phi_reg_pp0_iter0_data_3078_V_read3148_phi_reg_110707.read();
        }
    } else {
        ap_phi_mux_data_3078_V_read3148_phi_phi_fu_110711_p4 = ap_phi_reg_pp0_iter0_data_3078_V_read3148_phi_reg_110707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_68975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_68975_p6 = data_3078_V_read3148_phi_reg_110707.read();
    } else {
        ap_phi_mux_data_3078_V_read3148_rewind_phi_fu_68975_p6 = data_3078_V_read3148_rewind_reg_68971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3079_V_read3149_phi_phi_fu_110724_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3079_V_read3149_phi_phi_fu_110724_p4 = ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_68989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3079_V_read3149_phi_phi_fu_110724_p4 = data_3079_V_read.read();
        } else {
            ap_phi_mux_data_3079_V_read3149_phi_phi_fu_110724_p4 = ap_phi_reg_pp0_iter0_data_3079_V_read3149_phi_reg_110720.read();
        }
    } else {
        ap_phi_mux_data_3079_V_read3149_phi_phi_fu_110724_p4 = ap_phi_reg_pp0_iter0_data_3079_V_read3149_phi_reg_110720.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_68989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_68989_p6 = data_3079_V_read3149_phi_reg_110720.read();
    } else {
        ap_phi_mux_data_3079_V_read3149_rewind_phi_fu_68989_p6 = data_3079_V_read3149_rewind_reg_68985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_307_V_read377_phi_phi_fu_74688_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_307_V_read377_phi_phi_fu_74688_p4 = ap_phi_mux_data_307_V_read377_rewind_phi_fu_30181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_307_V_read377_phi_phi_fu_74688_p4 = data_307_V_read.read();
        } else {
            ap_phi_mux_data_307_V_read377_phi_phi_fu_74688_p4 = ap_phi_reg_pp0_iter0_data_307_V_read377_phi_reg_74684.read();
        }
    } else {
        ap_phi_mux_data_307_V_read377_phi_phi_fu_74688_p4 = ap_phi_reg_pp0_iter0_data_307_V_read377_phi_reg_74684.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_307_V_read377_rewind_phi_fu_30181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_307_V_read377_rewind_phi_fu_30181_p6 = data_307_V_read377_phi_reg_74684.read();
    } else {
        ap_phi_mux_data_307_V_read377_rewind_phi_fu_30181_p6 = data_307_V_read377_rewind_reg_30177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3080_V_read3150_phi_phi_fu_110737_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3080_V_read3150_phi_phi_fu_110737_p4 = ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_69003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3080_V_read3150_phi_phi_fu_110737_p4 = data_3080_V_read.read();
        } else {
            ap_phi_mux_data_3080_V_read3150_phi_phi_fu_110737_p4 = ap_phi_reg_pp0_iter0_data_3080_V_read3150_phi_reg_110733.read();
        }
    } else {
        ap_phi_mux_data_3080_V_read3150_phi_phi_fu_110737_p4 = ap_phi_reg_pp0_iter0_data_3080_V_read3150_phi_reg_110733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_69003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_69003_p6 = data_3080_V_read3150_phi_reg_110733.read();
    } else {
        ap_phi_mux_data_3080_V_read3150_rewind_phi_fu_69003_p6 = data_3080_V_read3150_rewind_reg_68999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3081_V_read3151_phi_phi_fu_110750_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3081_V_read3151_phi_phi_fu_110750_p4 = ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_69017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3081_V_read3151_phi_phi_fu_110750_p4 = data_3081_V_read.read();
        } else {
            ap_phi_mux_data_3081_V_read3151_phi_phi_fu_110750_p4 = ap_phi_reg_pp0_iter0_data_3081_V_read3151_phi_reg_110746.read();
        }
    } else {
        ap_phi_mux_data_3081_V_read3151_phi_phi_fu_110750_p4 = ap_phi_reg_pp0_iter0_data_3081_V_read3151_phi_reg_110746.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_69017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_69017_p6 = data_3081_V_read3151_phi_reg_110746.read();
    } else {
        ap_phi_mux_data_3081_V_read3151_rewind_phi_fu_69017_p6 = data_3081_V_read3151_rewind_reg_69013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3082_V_read3152_phi_phi_fu_110763_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3082_V_read3152_phi_phi_fu_110763_p4 = ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_69031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3082_V_read3152_phi_phi_fu_110763_p4 = data_3082_V_read.read();
        } else {
            ap_phi_mux_data_3082_V_read3152_phi_phi_fu_110763_p4 = ap_phi_reg_pp0_iter0_data_3082_V_read3152_phi_reg_110759.read();
        }
    } else {
        ap_phi_mux_data_3082_V_read3152_phi_phi_fu_110763_p4 = ap_phi_reg_pp0_iter0_data_3082_V_read3152_phi_reg_110759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_69031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_69031_p6 = data_3082_V_read3152_phi_reg_110759.read();
    } else {
        ap_phi_mux_data_3082_V_read3152_rewind_phi_fu_69031_p6 = data_3082_V_read3152_rewind_reg_69027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3083_V_read3153_phi_phi_fu_110776_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3083_V_read3153_phi_phi_fu_110776_p4 = ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_69045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3083_V_read3153_phi_phi_fu_110776_p4 = data_3083_V_read.read();
        } else {
            ap_phi_mux_data_3083_V_read3153_phi_phi_fu_110776_p4 = ap_phi_reg_pp0_iter0_data_3083_V_read3153_phi_reg_110772.read();
        }
    } else {
        ap_phi_mux_data_3083_V_read3153_phi_phi_fu_110776_p4 = ap_phi_reg_pp0_iter0_data_3083_V_read3153_phi_reg_110772.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_69045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_69045_p6 = data_3083_V_read3153_phi_reg_110772.read();
    } else {
        ap_phi_mux_data_3083_V_read3153_rewind_phi_fu_69045_p6 = data_3083_V_read3153_rewind_reg_69041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3084_V_read3154_phi_phi_fu_110789_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3084_V_read3154_phi_phi_fu_110789_p4 = ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_69059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3084_V_read3154_phi_phi_fu_110789_p4 = data_3084_V_read.read();
        } else {
            ap_phi_mux_data_3084_V_read3154_phi_phi_fu_110789_p4 = ap_phi_reg_pp0_iter0_data_3084_V_read3154_phi_reg_110785.read();
        }
    } else {
        ap_phi_mux_data_3084_V_read3154_phi_phi_fu_110789_p4 = ap_phi_reg_pp0_iter0_data_3084_V_read3154_phi_reg_110785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_69059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_69059_p6 = data_3084_V_read3154_phi_reg_110785.read();
    } else {
        ap_phi_mux_data_3084_V_read3154_rewind_phi_fu_69059_p6 = data_3084_V_read3154_rewind_reg_69055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3085_V_read3155_phi_phi_fu_110802_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3085_V_read3155_phi_phi_fu_110802_p4 = ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_69073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3085_V_read3155_phi_phi_fu_110802_p4 = data_3085_V_read.read();
        } else {
            ap_phi_mux_data_3085_V_read3155_phi_phi_fu_110802_p4 = ap_phi_reg_pp0_iter0_data_3085_V_read3155_phi_reg_110798.read();
        }
    } else {
        ap_phi_mux_data_3085_V_read3155_phi_phi_fu_110802_p4 = ap_phi_reg_pp0_iter0_data_3085_V_read3155_phi_reg_110798.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_69073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_69073_p6 = data_3085_V_read3155_phi_reg_110798.read();
    } else {
        ap_phi_mux_data_3085_V_read3155_rewind_phi_fu_69073_p6 = data_3085_V_read3155_rewind_reg_69069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3086_V_read3156_phi_phi_fu_110815_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3086_V_read3156_phi_phi_fu_110815_p4 = ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_69087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3086_V_read3156_phi_phi_fu_110815_p4 = data_3086_V_read.read();
        } else {
            ap_phi_mux_data_3086_V_read3156_phi_phi_fu_110815_p4 = ap_phi_reg_pp0_iter0_data_3086_V_read3156_phi_reg_110811.read();
        }
    } else {
        ap_phi_mux_data_3086_V_read3156_phi_phi_fu_110815_p4 = ap_phi_reg_pp0_iter0_data_3086_V_read3156_phi_reg_110811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_69087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_69087_p6 = data_3086_V_read3156_phi_reg_110811.read();
    } else {
        ap_phi_mux_data_3086_V_read3156_rewind_phi_fu_69087_p6 = data_3086_V_read3156_rewind_reg_69083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3087_V_read3157_phi_phi_fu_110828_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3087_V_read3157_phi_phi_fu_110828_p4 = ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_69101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3087_V_read3157_phi_phi_fu_110828_p4 = data_3087_V_read.read();
        } else {
            ap_phi_mux_data_3087_V_read3157_phi_phi_fu_110828_p4 = ap_phi_reg_pp0_iter0_data_3087_V_read3157_phi_reg_110824.read();
        }
    } else {
        ap_phi_mux_data_3087_V_read3157_phi_phi_fu_110828_p4 = ap_phi_reg_pp0_iter0_data_3087_V_read3157_phi_reg_110824.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_69101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_69101_p6 = data_3087_V_read3157_phi_reg_110824.read();
    } else {
        ap_phi_mux_data_3087_V_read3157_rewind_phi_fu_69101_p6 = data_3087_V_read3157_rewind_reg_69097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3088_V_read3158_phi_phi_fu_110841_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3088_V_read3158_phi_phi_fu_110841_p4 = ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_69115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3088_V_read3158_phi_phi_fu_110841_p4 = data_3088_V_read.read();
        } else {
            ap_phi_mux_data_3088_V_read3158_phi_phi_fu_110841_p4 = ap_phi_reg_pp0_iter0_data_3088_V_read3158_phi_reg_110837.read();
        }
    } else {
        ap_phi_mux_data_3088_V_read3158_phi_phi_fu_110841_p4 = ap_phi_reg_pp0_iter0_data_3088_V_read3158_phi_reg_110837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_69115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_69115_p6 = data_3088_V_read3158_phi_reg_110837.read();
    } else {
        ap_phi_mux_data_3088_V_read3158_rewind_phi_fu_69115_p6 = data_3088_V_read3158_rewind_reg_69111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3089_V_read3159_phi_phi_fu_110854_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3089_V_read3159_phi_phi_fu_110854_p4 = ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_69129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3089_V_read3159_phi_phi_fu_110854_p4 = data_3089_V_read.read();
        } else {
            ap_phi_mux_data_3089_V_read3159_phi_phi_fu_110854_p4 = ap_phi_reg_pp0_iter0_data_3089_V_read3159_phi_reg_110850.read();
        }
    } else {
        ap_phi_mux_data_3089_V_read3159_phi_phi_fu_110854_p4 = ap_phi_reg_pp0_iter0_data_3089_V_read3159_phi_reg_110850.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_69129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_69129_p6 = data_3089_V_read3159_phi_reg_110850.read();
    } else {
        ap_phi_mux_data_3089_V_read3159_rewind_phi_fu_69129_p6 = data_3089_V_read3159_rewind_reg_69125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_308_V_read378_phi_phi_fu_74701_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_308_V_read378_phi_phi_fu_74701_p4 = ap_phi_mux_data_308_V_read378_rewind_phi_fu_30195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_308_V_read378_phi_phi_fu_74701_p4 = data_308_V_read.read();
        } else {
            ap_phi_mux_data_308_V_read378_phi_phi_fu_74701_p4 = ap_phi_reg_pp0_iter0_data_308_V_read378_phi_reg_74697.read();
        }
    } else {
        ap_phi_mux_data_308_V_read378_phi_phi_fu_74701_p4 = ap_phi_reg_pp0_iter0_data_308_V_read378_phi_reg_74697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_308_V_read378_rewind_phi_fu_30195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_308_V_read378_rewind_phi_fu_30195_p6 = data_308_V_read378_phi_reg_74697.read();
    } else {
        ap_phi_mux_data_308_V_read378_rewind_phi_fu_30195_p6 = data_308_V_read378_rewind_reg_30191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3090_V_read3160_phi_phi_fu_110867_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3090_V_read3160_phi_phi_fu_110867_p4 = ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_69143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3090_V_read3160_phi_phi_fu_110867_p4 = data_3090_V_read.read();
        } else {
            ap_phi_mux_data_3090_V_read3160_phi_phi_fu_110867_p4 = ap_phi_reg_pp0_iter0_data_3090_V_read3160_phi_reg_110863.read();
        }
    } else {
        ap_phi_mux_data_3090_V_read3160_phi_phi_fu_110867_p4 = ap_phi_reg_pp0_iter0_data_3090_V_read3160_phi_reg_110863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_69143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_69143_p6 = data_3090_V_read3160_phi_reg_110863.read();
    } else {
        ap_phi_mux_data_3090_V_read3160_rewind_phi_fu_69143_p6 = data_3090_V_read3160_rewind_reg_69139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3091_V_read3161_phi_phi_fu_110880_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3091_V_read3161_phi_phi_fu_110880_p4 = ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_69157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3091_V_read3161_phi_phi_fu_110880_p4 = data_3091_V_read.read();
        } else {
            ap_phi_mux_data_3091_V_read3161_phi_phi_fu_110880_p4 = ap_phi_reg_pp0_iter0_data_3091_V_read3161_phi_reg_110876.read();
        }
    } else {
        ap_phi_mux_data_3091_V_read3161_phi_phi_fu_110880_p4 = ap_phi_reg_pp0_iter0_data_3091_V_read3161_phi_reg_110876.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_69157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_69157_p6 = data_3091_V_read3161_phi_reg_110876.read();
    } else {
        ap_phi_mux_data_3091_V_read3161_rewind_phi_fu_69157_p6 = data_3091_V_read3161_rewind_reg_69153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3092_V_read3162_phi_phi_fu_110893_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3092_V_read3162_phi_phi_fu_110893_p4 = ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_69171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3092_V_read3162_phi_phi_fu_110893_p4 = data_3092_V_read.read();
        } else {
            ap_phi_mux_data_3092_V_read3162_phi_phi_fu_110893_p4 = ap_phi_reg_pp0_iter0_data_3092_V_read3162_phi_reg_110889.read();
        }
    } else {
        ap_phi_mux_data_3092_V_read3162_phi_phi_fu_110893_p4 = ap_phi_reg_pp0_iter0_data_3092_V_read3162_phi_reg_110889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_69171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_69171_p6 = data_3092_V_read3162_phi_reg_110889.read();
    } else {
        ap_phi_mux_data_3092_V_read3162_rewind_phi_fu_69171_p6 = data_3092_V_read3162_rewind_reg_69167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3093_V_read3163_phi_phi_fu_110906_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3093_V_read3163_phi_phi_fu_110906_p4 = ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_69185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3093_V_read3163_phi_phi_fu_110906_p4 = data_3093_V_read.read();
        } else {
            ap_phi_mux_data_3093_V_read3163_phi_phi_fu_110906_p4 = ap_phi_reg_pp0_iter0_data_3093_V_read3163_phi_reg_110902.read();
        }
    } else {
        ap_phi_mux_data_3093_V_read3163_phi_phi_fu_110906_p4 = ap_phi_reg_pp0_iter0_data_3093_V_read3163_phi_reg_110902.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_69185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_69185_p6 = data_3093_V_read3163_phi_reg_110902.read();
    } else {
        ap_phi_mux_data_3093_V_read3163_rewind_phi_fu_69185_p6 = data_3093_V_read3163_rewind_reg_69181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3094_V_read3164_phi_phi_fu_110919_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3094_V_read3164_phi_phi_fu_110919_p4 = ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_69199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3094_V_read3164_phi_phi_fu_110919_p4 = data_3094_V_read.read();
        } else {
            ap_phi_mux_data_3094_V_read3164_phi_phi_fu_110919_p4 = ap_phi_reg_pp0_iter0_data_3094_V_read3164_phi_reg_110915.read();
        }
    } else {
        ap_phi_mux_data_3094_V_read3164_phi_phi_fu_110919_p4 = ap_phi_reg_pp0_iter0_data_3094_V_read3164_phi_reg_110915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_69199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_69199_p6 = data_3094_V_read3164_phi_reg_110915.read();
    } else {
        ap_phi_mux_data_3094_V_read3164_rewind_phi_fu_69199_p6 = data_3094_V_read3164_rewind_reg_69195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3095_V_read3165_phi_phi_fu_110932_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3095_V_read3165_phi_phi_fu_110932_p4 = ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_69213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3095_V_read3165_phi_phi_fu_110932_p4 = data_3095_V_read.read();
        } else {
            ap_phi_mux_data_3095_V_read3165_phi_phi_fu_110932_p4 = ap_phi_reg_pp0_iter0_data_3095_V_read3165_phi_reg_110928.read();
        }
    } else {
        ap_phi_mux_data_3095_V_read3165_phi_phi_fu_110932_p4 = ap_phi_reg_pp0_iter0_data_3095_V_read3165_phi_reg_110928.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_69213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_69213_p6 = data_3095_V_read3165_phi_reg_110928.read();
    } else {
        ap_phi_mux_data_3095_V_read3165_rewind_phi_fu_69213_p6 = data_3095_V_read3165_rewind_reg_69209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3096_V_read3166_phi_phi_fu_110945_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3096_V_read3166_phi_phi_fu_110945_p4 = ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_69227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3096_V_read3166_phi_phi_fu_110945_p4 = data_3096_V_read.read();
        } else {
            ap_phi_mux_data_3096_V_read3166_phi_phi_fu_110945_p4 = ap_phi_reg_pp0_iter0_data_3096_V_read3166_phi_reg_110941.read();
        }
    } else {
        ap_phi_mux_data_3096_V_read3166_phi_phi_fu_110945_p4 = ap_phi_reg_pp0_iter0_data_3096_V_read3166_phi_reg_110941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_69227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_69227_p6 = data_3096_V_read3166_phi_reg_110941.read();
    } else {
        ap_phi_mux_data_3096_V_read3166_rewind_phi_fu_69227_p6 = data_3096_V_read3166_rewind_reg_69223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3097_V_read3167_phi_phi_fu_110958_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3097_V_read3167_phi_phi_fu_110958_p4 = ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_69241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3097_V_read3167_phi_phi_fu_110958_p4 = data_3097_V_read.read();
        } else {
            ap_phi_mux_data_3097_V_read3167_phi_phi_fu_110958_p4 = ap_phi_reg_pp0_iter0_data_3097_V_read3167_phi_reg_110954.read();
        }
    } else {
        ap_phi_mux_data_3097_V_read3167_phi_phi_fu_110958_p4 = ap_phi_reg_pp0_iter0_data_3097_V_read3167_phi_reg_110954.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_69241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_69241_p6 = data_3097_V_read3167_phi_reg_110954.read();
    } else {
        ap_phi_mux_data_3097_V_read3167_rewind_phi_fu_69241_p6 = data_3097_V_read3167_rewind_reg_69237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3098_V_read3168_phi_phi_fu_110971_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3098_V_read3168_phi_phi_fu_110971_p4 = ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_69255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3098_V_read3168_phi_phi_fu_110971_p4 = data_3098_V_read.read();
        } else {
            ap_phi_mux_data_3098_V_read3168_phi_phi_fu_110971_p4 = ap_phi_reg_pp0_iter0_data_3098_V_read3168_phi_reg_110967.read();
        }
    } else {
        ap_phi_mux_data_3098_V_read3168_phi_phi_fu_110971_p4 = ap_phi_reg_pp0_iter0_data_3098_V_read3168_phi_reg_110967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_69255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_69255_p6 = data_3098_V_read3168_phi_reg_110967.read();
    } else {
        ap_phi_mux_data_3098_V_read3168_rewind_phi_fu_69255_p6 = data_3098_V_read3168_rewind_reg_69251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3099_V_read3169_phi_phi_fu_110984_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3099_V_read3169_phi_phi_fu_110984_p4 = ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_69269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3099_V_read3169_phi_phi_fu_110984_p4 = data_3099_V_read.read();
        } else {
            ap_phi_mux_data_3099_V_read3169_phi_phi_fu_110984_p4 = ap_phi_reg_pp0_iter0_data_3099_V_read3169_phi_reg_110980.read();
        }
    } else {
        ap_phi_mux_data_3099_V_read3169_phi_phi_fu_110984_p4 = ap_phi_reg_pp0_iter0_data_3099_V_read3169_phi_reg_110980.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_69269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_69269_p6 = data_3099_V_read3169_phi_reg_110980.read();
    } else {
        ap_phi_mux_data_3099_V_read3169_rewind_phi_fu_69269_p6 = data_3099_V_read3169_rewind_reg_69265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_309_V_read379_phi_phi_fu_74714_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_309_V_read379_phi_phi_fu_74714_p4 = ap_phi_mux_data_309_V_read379_rewind_phi_fu_30209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_309_V_read379_phi_phi_fu_74714_p4 = data_309_V_read.read();
        } else {
            ap_phi_mux_data_309_V_read379_phi_phi_fu_74714_p4 = ap_phi_reg_pp0_iter0_data_309_V_read379_phi_reg_74710.read();
        }
    } else {
        ap_phi_mux_data_309_V_read379_phi_phi_fu_74714_p4 = ap_phi_reg_pp0_iter0_data_309_V_read379_phi_reg_74710.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_309_V_read379_rewind_phi_fu_30209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_309_V_read379_rewind_phi_fu_30209_p6 = data_309_V_read379_phi_reg_74710.read();
    } else {
        ap_phi_mux_data_309_V_read379_rewind_phi_fu_30209_p6 = data_309_V_read379_rewind_reg_30205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_30_V_read100_phi_phi_fu_71087_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_30_V_read100_phi_phi_fu_71087_p4 = ap_phi_mux_data_30_V_read100_rewind_phi_fu_26303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_30_V_read100_phi_phi_fu_71087_p4 = data_30_V_read.read();
        } else {
            ap_phi_mux_data_30_V_read100_phi_phi_fu_71087_p4 = ap_phi_reg_pp0_iter0_data_30_V_read100_phi_reg_71083.read();
        }
    } else {
        ap_phi_mux_data_30_V_read100_phi_phi_fu_71087_p4 = ap_phi_reg_pp0_iter0_data_30_V_read100_phi_reg_71083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_30_V_read100_rewind_phi_fu_26303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_30_V_read100_rewind_phi_fu_26303_p6 = data_30_V_read100_phi_reg_71083.read();
    } else {
        ap_phi_mux_data_30_V_read100_rewind_phi_fu_26303_p6 = data_30_V_read100_rewind_reg_26299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3100_V_read3170_phi_phi_fu_110997_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3100_V_read3170_phi_phi_fu_110997_p4 = ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_69283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3100_V_read3170_phi_phi_fu_110997_p4 = data_3100_V_read.read();
        } else {
            ap_phi_mux_data_3100_V_read3170_phi_phi_fu_110997_p4 = ap_phi_reg_pp0_iter0_data_3100_V_read3170_phi_reg_110993.read();
        }
    } else {
        ap_phi_mux_data_3100_V_read3170_phi_phi_fu_110997_p4 = ap_phi_reg_pp0_iter0_data_3100_V_read3170_phi_reg_110993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_69283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_69283_p6 = data_3100_V_read3170_phi_reg_110993.read();
    } else {
        ap_phi_mux_data_3100_V_read3170_rewind_phi_fu_69283_p6 = data_3100_V_read3170_rewind_reg_69279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3101_V_read3171_phi_phi_fu_111010_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3101_V_read3171_phi_phi_fu_111010_p4 = ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_69297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3101_V_read3171_phi_phi_fu_111010_p4 = data_3101_V_read.read();
        } else {
            ap_phi_mux_data_3101_V_read3171_phi_phi_fu_111010_p4 = ap_phi_reg_pp0_iter0_data_3101_V_read3171_phi_reg_111006.read();
        }
    } else {
        ap_phi_mux_data_3101_V_read3171_phi_phi_fu_111010_p4 = ap_phi_reg_pp0_iter0_data_3101_V_read3171_phi_reg_111006.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_69297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_69297_p6 = data_3101_V_read3171_phi_reg_111006.read();
    } else {
        ap_phi_mux_data_3101_V_read3171_rewind_phi_fu_69297_p6 = data_3101_V_read3171_rewind_reg_69293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3102_V_read3172_phi_phi_fu_111023_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3102_V_read3172_phi_phi_fu_111023_p4 = ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_69311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3102_V_read3172_phi_phi_fu_111023_p4 = data_3102_V_read.read();
        } else {
            ap_phi_mux_data_3102_V_read3172_phi_phi_fu_111023_p4 = ap_phi_reg_pp0_iter0_data_3102_V_read3172_phi_reg_111019.read();
        }
    } else {
        ap_phi_mux_data_3102_V_read3172_phi_phi_fu_111023_p4 = ap_phi_reg_pp0_iter0_data_3102_V_read3172_phi_reg_111019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_69311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_69311_p6 = data_3102_V_read3172_phi_reg_111019.read();
    } else {
        ap_phi_mux_data_3102_V_read3172_rewind_phi_fu_69311_p6 = data_3102_V_read3172_rewind_reg_69307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3103_V_read3173_phi_phi_fu_111036_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3103_V_read3173_phi_phi_fu_111036_p4 = ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_69325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3103_V_read3173_phi_phi_fu_111036_p4 = data_3103_V_read.read();
        } else {
            ap_phi_mux_data_3103_V_read3173_phi_phi_fu_111036_p4 = ap_phi_reg_pp0_iter0_data_3103_V_read3173_phi_reg_111032.read();
        }
    } else {
        ap_phi_mux_data_3103_V_read3173_phi_phi_fu_111036_p4 = ap_phi_reg_pp0_iter0_data_3103_V_read3173_phi_reg_111032.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_69325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_69325_p6 = data_3103_V_read3173_phi_reg_111032.read();
    } else {
        ap_phi_mux_data_3103_V_read3173_rewind_phi_fu_69325_p6 = data_3103_V_read3173_rewind_reg_69321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3104_V_read3174_phi_phi_fu_111049_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3104_V_read3174_phi_phi_fu_111049_p4 = ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_69339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3104_V_read3174_phi_phi_fu_111049_p4 = data_3104_V_read.read();
        } else {
            ap_phi_mux_data_3104_V_read3174_phi_phi_fu_111049_p4 = ap_phi_reg_pp0_iter0_data_3104_V_read3174_phi_reg_111045.read();
        }
    } else {
        ap_phi_mux_data_3104_V_read3174_phi_phi_fu_111049_p4 = ap_phi_reg_pp0_iter0_data_3104_V_read3174_phi_reg_111045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_69339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_69339_p6 = data_3104_V_read3174_phi_reg_111045.read();
    } else {
        ap_phi_mux_data_3104_V_read3174_rewind_phi_fu_69339_p6 = data_3104_V_read3174_rewind_reg_69335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3105_V_read3175_phi_phi_fu_111062_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3105_V_read3175_phi_phi_fu_111062_p4 = ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_69353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3105_V_read3175_phi_phi_fu_111062_p4 = data_3105_V_read.read();
        } else {
            ap_phi_mux_data_3105_V_read3175_phi_phi_fu_111062_p4 = ap_phi_reg_pp0_iter0_data_3105_V_read3175_phi_reg_111058.read();
        }
    } else {
        ap_phi_mux_data_3105_V_read3175_phi_phi_fu_111062_p4 = ap_phi_reg_pp0_iter0_data_3105_V_read3175_phi_reg_111058.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_69353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_69353_p6 = data_3105_V_read3175_phi_reg_111058.read();
    } else {
        ap_phi_mux_data_3105_V_read3175_rewind_phi_fu_69353_p6 = data_3105_V_read3175_rewind_reg_69349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3106_V_read3176_phi_phi_fu_111075_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3106_V_read3176_phi_phi_fu_111075_p4 = ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_69367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3106_V_read3176_phi_phi_fu_111075_p4 = data_3106_V_read.read();
        } else {
            ap_phi_mux_data_3106_V_read3176_phi_phi_fu_111075_p4 = ap_phi_reg_pp0_iter0_data_3106_V_read3176_phi_reg_111071.read();
        }
    } else {
        ap_phi_mux_data_3106_V_read3176_phi_phi_fu_111075_p4 = ap_phi_reg_pp0_iter0_data_3106_V_read3176_phi_reg_111071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_69367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_69367_p6 = data_3106_V_read3176_phi_reg_111071.read();
    } else {
        ap_phi_mux_data_3106_V_read3176_rewind_phi_fu_69367_p6 = data_3106_V_read3176_rewind_reg_69363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3107_V_read3177_phi_phi_fu_111088_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3107_V_read3177_phi_phi_fu_111088_p4 = ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_69381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3107_V_read3177_phi_phi_fu_111088_p4 = data_3107_V_read.read();
        } else {
            ap_phi_mux_data_3107_V_read3177_phi_phi_fu_111088_p4 = ap_phi_reg_pp0_iter0_data_3107_V_read3177_phi_reg_111084.read();
        }
    } else {
        ap_phi_mux_data_3107_V_read3177_phi_phi_fu_111088_p4 = ap_phi_reg_pp0_iter0_data_3107_V_read3177_phi_reg_111084.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_69381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_69381_p6 = data_3107_V_read3177_phi_reg_111084.read();
    } else {
        ap_phi_mux_data_3107_V_read3177_rewind_phi_fu_69381_p6 = data_3107_V_read3177_rewind_reg_69377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3108_V_read3178_phi_phi_fu_111101_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3108_V_read3178_phi_phi_fu_111101_p4 = ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_69395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3108_V_read3178_phi_phi_fu_111101_p4 = data_3108_V_read.read();
        } else {
            ap_phi_mux_data_3108_V_read3178_phi_phi_fu_111101_p4 = ap_phi_reg_pp0_iter0_data_3108_V_read3178_phi_reg_111097.read();
        }
    } else {
        ap_phi_mux_data_3108_V_read3178_phi_phi_fu_111101_p4 = ap_phi_reg_pp0_iter0_data_3108_V_read3178_phi_reg_111097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_69395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_69395_p6 = data_3108_V_read3178_phi_reg_111097.read();
    } else {
        ap_phi_mux_data_3108_V_read3178_rewind_phi_fu_69395_p6 = data_3108_V_read3178_rewind_reg_69391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3109_V_read3179_phi_phi_fu_111114_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3109_V_read3179_phi_phi_fu_111114_p4 = ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_69409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3109_V_read3179_phi_phi_fu_111114_p4 = data_3109_V_read.read();
        } else {
            ap_phi_mux_data_3109_V_read3179_phi_phi_fu_111114_p4 = ap_phi_reg_pp0_iter0_data_3109_V_read3179_phi_reg_111110.read();
        }
    } else {
        ap_phi_mux_data_3109_V_read3179_phi_phi_fu_111114_p4 = ap_phi_reg_pp0_iter0_data_3109_V_read3179_phi_reg_111110.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_69409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_69409_p6 = data_3109_V_read3179_phi_reg_111110.read();
    } else {
        ap_phi_mux_data_3109_V_read3179_rewind_phi_fu_69409_p6 = data_3109_V_read3179_rewind_reg_69405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_310_V_read380_phi_phi_fu_74727_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_310_V_read380_phi_phi_fu_74727_p4 = ap_phi_mux_data_310_V_read380_rewind_phi_fu_30223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_310_V_read380_phi_phi_fu_74727_p4 = data_310_V_read.read();
        } else {
            ap_phi_mux_data_310_V_read380_phi_phi_fu_74727_p4 = ap_phi_reg_pp0_iter0_data_310_V_read380_phi_reg_74723.read();
        }
    } else {
        ap_phi_mux_data_310_V_read380_phi_phi_fu_74727_p4 = ap_phi_reg_pp0_iter0_data_310_V_read380_phi_reg_74723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_310_V_read380_rewind_phi_fu_30223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_310_V_read380_rewind_phi_fu_30223_p6 = data_310_V_read380_phi_reg_74723.read();
    } else {
        ap_phi_mux_data_310_V_read380_rewind_phi_fu_30223_p6 = data_310_V_read380_rewind_reg_30219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3110_V_read3180_phi_phi_fu_111127_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3110_V_read3180_phi_phi_fu_111127_p4 = ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_69423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3110_V_read3180_phi_phi_fu_111127_p4 = data_3110_V_read.read();
        } else {
            ap_phi_mux_data_3110_V_read3180_phi_phi_fu_111127_p4 = ap_phi_reg_pp0_iter0_data_3110_V_read3180_phi_reg_111123.read();
        }
    } else {
        ap_phi_mux_data_3110_V_read3180_phi_phi_fu_111127_p4 = ap_phi_reg_pp0_iter0_data_3110_V_read3180_phi_reg_111123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_69423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_69423_p6 = data_3110_V_read3180_phi_reg_111123.read();
    } else {
        ap_phi_mux_data_3110_V_read3180_rewind_phi_fu_69423_p6 = data_3110_V_read3180_rewind_reg_69419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3111_V_read3181_phi_phi_fu_111140_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3111_V_read3181_phi_phi_fu_111140_p4 = ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_69437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3111_V_read3181_phi_phi_fu_111140_p4 = data_3111_V_read.read();
        } else {
            ap_phi_mux_data_3111_V_read3181_phi_phi_fu_111140_p4 = ap_phi_reg_pp0_iter0_data_3111_V_read3181_phi_reg_111136.read();
        }
    } else {
        ap_phi_mux_data_3111_V_read3181_phi_phi_fu_111140_p4 = ap_phi_reg_pp0_iter0_data_3111_V_read3181_phi_reg_111136.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_69437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_69437_p6 = data_3111_V_read3181_phi_reg_111136.read();
    } else {
        ap_phi_mux_data_3111_V_read3181_rewind_phi_fu_69437_p6 = data_3111_V_read3181_rewind_reg_69433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3112_V_read3182_phi_phi_fu_111153_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3112_V_read3182_phi_phi_fu_111153_p4 = ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_69451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3112_V_read3182_phi_phi_fu_111153_p4 = data_3112_V_read.read();
        } else {
            ap_phi_mux_data_3112_V_read3182_phi_phi_fu_111153_p4 = ap_phi_reg_pp0_iter0_data_3112_V_read3182_phi_reg_111149.read();
        }
    } else {
        ap_phi_mux_data_3112_V_read3182_phi_phi_fu_111153_p4 = ap_phi_reg_pp0_iter0_data_3112_V_read3182_phi_reg_111149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_69451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_69451_p6 = data_3112_V_read3182_phi_reg_111149.read();
    } else {
        ap_phi_mux_data_3112_V_read3182_rewind_phi_fu_69451_p6 = data_3112_V_read3182_rewind_reg_69447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3113_V_read3183_phi_phi_fu_111166_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3113_V_read3183_phi_phi_fu_111166_p4 = ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_69465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3113_V_read3183_phi_phi_fu_111166_p4 = data_3113_V_read.read();
        } else {
            ap_phi_mux_data_3113_V_read3183_phi_phi_fu_111166_p4 = ap_phi_reg_pp0_iter0_data_3113_V_read3183_phi_reg_111162.read();
        }
    } else {
        ap_phi_mux_data_3113_V_read3183_phi_phi_fu_111166_p4 = ap_phi_reg_pp0_iter0_data_3113_V_read3183_phi_reg_111162.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_69465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_69465_p6 = data_3113_V_read3183_phi_reg_111162.read();
    } else {
        ap_phi_mux_data_3113_V_read3183_rewind_phi_fu_69465_p6 = data_3113_V_read3183_rewind_reg_69461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3114_V_read3184_phi_phi_fu_111179_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3114_V_read3184_phi_phi_fu_111179_p4 = ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_69479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3114_V_read3184_phi_phi_fu_111179_p4 = data_3114_V_read.read();
        } else {
            ap_phi_mux_data_3114_V_read3184_phi_phi_fu_111179_p4 = ap_phi_reg_pp0_iter0_data_3114_V_read3184_phi_reg_111175.read();
        }
    } else {
        ap_phi_mux_data_3114_V_read3184_phi_phi_fu_111179_p4 = ap_phi_reg_pp0_iter0_data_3114_V_read3184_phi_reg_111175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_69479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_69479_p6 = data_3114_V_read3184_phi_reg_111175.read();
    } else {
        ap_phi_mux_data_3114_V_read3184_rewind_phi_fu_69479_p6 = data_3114_V_read3184_rewind_reg_69475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3115_V_read3185_phi_phi_fu_111192_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3115_V_read3185_phi_phi_fu_111192_p4 = ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_69493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3115_V_read3185_phi_phi_fu_111192_p4 = data_3115_V_read.read();
        } else {
            ap_phi_mux_data_3115_V_read3185_phi_phi_fu_111192_p4 = ap_phi_reg_pp0_iter0_data_3115_V_read3185_phi_reg_111188.read();
        }
    } else {
        ap_phi_mux_data_3115_V_read3185_phi_phi_fu_111192_p4 = ap_phi_reg_pp0_iter0_data_3115_V_read3185_phi_reg_111188.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_69493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_69493_p6 = data_3115_V_read3185_phi_reg_111188.read();
    } else {
        ap_phi_mux_data_3115_V_read3185_rewind_phi_fu_69493_p6 = data_3115_V_read3185_rewind_reg_69489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3116_V_read3186_phi_phi_fu_111205_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3116_V_read3186_phi_phi_fu_111205_p4 = ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_69507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3116_V_read3186_phi_phi_fu_111205_p4 = data_3116_V_read.read();
        } else {
            ap_phi_mux_data_3116_V_read3186_phi_phi_fu_111205_p4 = ap_phi_reg_pp0_iter0_data_3116_V_read3186_phi_reg_111201.read();
        }
    } else {
        ap_phi_mux_data_3116_V_read3186_phi_phi_fu_111205_p4 = ap_phi_reg_pp0_iter0_data_3116_V_read3186_phi_reg_111201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_69507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_69507_p6 = data_3116_V_read3186_phi_reg_111201.read();
    } else {
        ap_phi_mux_data_3116_V_read3186_rewind_phi_fu_69507_p6 = data_3116_V_read3186_rewind_reg_69503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3117_V_read3187_phi_phi_fu_111218_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3117_V_read3187_phi_phi_fu_111218_p4 = ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_69521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3117_V_read3187_phi_phi_fu_111218_p4 = data_3117_V_read.read();
        } else {
            ap_phi_mux_data_3117_V_read3187_phi_phi_fu_111218_p4 = ap_phi_reg_pp0_iter0_data_3117_V_read3187_phi_reg_111214.read();
        }
    } else {
        ap_phi_mux_data_3117_V_read3187_phi_phi_fu_111218_p4 = ap_phi_reg_pp0_iter0_data_3117_V_read3187_phi_reg_111214.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_69521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_69521_p6 = data_3117_V_read3187_phi_reg_111214.read();
    } else {
        ap_phi_mux_data_3117_V_read3187_rewind_phi_fu_69521_p6 = data_3117_V_read3187_rewind_reg_69517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3118_V_read3188_phi_phi_fu_111231_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3118_V_read3188_phi_phi_fu_111231_p4 = ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_69535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3118_V_read3188_phi_phi_fu_111231_p4 = data_3118_V_read.read();
        } else {
            ap_phi_mux_data_3118_V_read3188_phi_phi_fu_111231_p4 = ap_phi_reg_pp0_iter0_data_3118_V_read3188_phi_reg_111227.read();
        }
    } else {
        ap_phi_mux_data_3118_V_read3188_phi_phi_fu_111231_p4 = ap_phi_reg_pp0_iter0_data_3118_V_read3188_phi_reg_111227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_69535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_69535_p6 = data_3118_V_read3188_phi_reg_111227.read();
    } else {
        ap_phi_mux_data_3118_V_read3188_rewind_phi_fu_69535_p6 = data_3118_V_read3188_rewind_reg_69531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3119_V_read3189_phi_phi_fu_111244_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3119_V_read3189_phi_phi_fu_111244_p4 = ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_69549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3119_V_read3189_phi_phi_fu_111244_p4 = data_3119_V_read.read();
        } else {
            ap_phi_mux_data_3119_V_read3189_phi_phi_fu_111244_p4 = ap_phi_reg_pp0_iter0_data_3119_V_read3189_phi_reg_111240.read();
        }
    } else {
        ap_phi_mux_data_3119_V_read3189_phi_phi_fu_111244_p4 = ap_phi_reg_pp0_iter0_data_3119_V_read3189_phi_reg_111240.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_69549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_69549_p6 = data_3119_V_read3189_phi_reg_111240.read();
    } else {
        ap_phi_mux_data_3119_V_read3189_rewind_phi_fu_69549_p6 = data_3119_V_read3189_rewind_reg_69545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_311_V_read381_phi_phi_fu_74740_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_311_V_read381_phi_phi_fu_74740_p4 = ap_phi_mux_data_311_V_read381_rewind_phi_fu_30237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_311_V_read381_phi_phi_fu_74740_p4 = data_311_V_read.read();
        } else {
            ap_phi_mux_data_311_V_read381_phi_phi_fu_74740_p4 = ap_phi_reg_pp0_iter0_data_311_V_read381_phi_reg_74736.read();
        }
    } else {
        ap_phi_mux_data_311_V_read381_phi_phi_fu_74740_p4 = ap_phi_reg_pp0_iter0_data_311_V_read381_phi_reg_74736.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_311_V_read381_rewind_phi_fu_30237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_311_V_read381_rewind_phi_fu_30237_p6 = data_311_V_read381_phi_reg_74736.read();
    } else {
        ap_phi_mux_data_311_V_read381_rewind_phi_fu_30237_p6 = data_311_V_read381_rewind_reg_30233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3120_V_read3190_phi_phi_fu_111257_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3120_V_read3190_phi_phi_fu_111257_p4 = ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_69563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3120_V_read3190_phi_phi_fu_111257_p4 = data_3120_V_read.read();
        } else {
            ap_phi_mux_data_3120_V_read3190_phi_phi_fu_111257_p4 = ap_phi_reg_pp0_iter0_data_3120_V_read3190_phi_reg_111253.read();
        }
    } else {
        ap_phi_mux_data_3120_V_read3190_phi_phi_fu_111257_p4 = ap_phi_reg_pp0_iter0_data_3120_V_read3190_phi_reg_111253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_69563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_69563_p6 = data_3120_V_read3190_phi_reg_111253.read();
    } else {
        ap_phi_mux_data_3120_V_read3190_rewind_phi_fu_69563_p6 = data_3120_V_read3190_rewind_reg_69559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3121_V_read3191_phi_phi_fu_111270_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3121_V_read3191_phi_phi_fu_111270_p4 = ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_69577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3121_V_read3191_phi_phi_fu_111270_p4 = data_3121_V_read.read();
        } else {
            ap_phi_mux_data_3121_V_read3191_phi_phi_fu_111270_p4 = ap_phi_reg_pp0_iter0_data_3121_V_read3191_phi_reg_111266.read();
        }
    } else {
        ap_phi_mux_data_3121_V_read3191_phi_phi_fu_111270_p4 = ap_phi_reg_pp0_iter0_data_3121_V_read3191_phi_reg_111266.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_69577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_69577_p6 = data_3121_V_read3191_phi_reg_111266.read();
    } else {
        ap_phi_mux_data_3121_V_read3191_rewind_phi_fu_69577_p6 = data_3121_V_read3191_rewind_reg_69573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3122_V_read3192_phi_phi_fu_111283_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3122_V_read3192_phi_phi_fu_111283_p4 = ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_69591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3122_V_read3192_phi_phi_fu_111283_p4 = data_3122_V_read.read();
        } else {
            ap_phi_mux_data_3122_V_read3192_phi_phi_fu_111283_p4 = ap_phi_reg_pp0_iter0_data_3122_V_read3192_phi_reg_111279.read();
        }
    } else {
        ap_phi_mux_data_3122_V_read3192_phi_phi_fu_111283_p4 = ap_phi_reg_pp0_iter0_data_3122_V_read3192_phi_reg_111279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_69591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_69591_p6 = data_3122_V_read3192_phi_reg_111279.read();
    } else {
        ap_phi_mux_data_3122_V_read3192_rewind_phi_fu_69591_p6 = data_3122_V_read3192_rewind_reg_69587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3123_V_read3193_phi_phi_fu_111296_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3123_V_read3193_phi_phi_fu_111296_p4 = ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_69605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3123_V_read3193_phi_phi_fu_111296_p4 = data_3123_V_read.read();
        } else {
            ap_phi_mux_data_3123_V_read3193_phi_phi_fu_111296_p4 = ap_phi_reg_pp0_iter0_data_3123_V_read3193_phi_reg_111292.read();
        }
    } else {
        ap_phi_mux_data_3123_V_read3193_phi_phi_fu_111296_p4 = ap_phi_reg_pp0_iter0_data_3123_V_read3193_phi_reg_111292.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_69605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_69605_p6 = data_3123_V_read3193_phi_reg_111292.read();
    } else {
        ap_phi_mux_data_3123_V_read3193_rewind_phi_fu_69605_p6 = data_3123_V_read3193_rewind_reg_69601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3124_V_read3194_phi_phi_fu_111309_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3124_V_read3194_phi_phi_fu_111309_p4 = ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_69619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3124_V_read3194_phi_phi_fu_111309_p4 = data_3124_V_read.read();
        } else {
            ap_phi_mux_data_3124_V_read3194_phi_phi_fu_111309_p4 = ap_phi_reg_pp0_iter0_data_3124_V_read3194_phi_reg_111305.read();
        }
    } else {
        ap_phi_mux_data_3124_V_read3194_phi_phi_fu_111309_p4 = ap_phi_reg_pp0_iter0_data_3124_V_read3194_phi_reg_111305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_69619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_69619_p6 = data_3124_V_read3194_phi_reg_111305.read();
    } else {
        ap_phi_mux_data_3124_V_read3194_rewind_phi_fu_69619_p6 = data_3124_V_read3194_rewind_reg_69615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3125_V_read3195_phi_phi_fu_111322_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3125_V_read3195_phi_phi_fu_111322_p4 = ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_69633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3125_V_read3195_phi_phi_fu_111322_p4 = data_3125_V_read.read();
        } else {
            ap_phi_mux_data_3125_V_read3195_phi_phi_fu_111322_p4 = ap_phi_reg_pp0_iter0_data_3125_V_read3195_phi_reg_111318.read();
        }
    } else {
        ap_phi_mux_data_3125_V_read3195_phi_phi_fu_111322_p4 = ap_phi_reg_pp0_iter0_data_3125_V_read3195_phi_reg_111318.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_69633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_69633_p6 = data_3125_V_read3195_phi_reg_111318.read();
    } else {
        ap_phi_mux_data_3125_V_read3195_rewind_phi_fu_69633_p6 = data_3125_V_read3195_rewind_reg_69629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3126_V_read3196_phi_phi_fu_111335_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3126_V_read3196_phi_phi_fu_111335_p4 = ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_69647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3126_V_read3196_phi_phi_fu_111335_p4 = data_3126_V_read.read();
        } else {
            ap_phi_mux_data_3126_V_read3196_phi_phi_fu_111335_p4 = ap_phi_reg_pp0_iter0_data_3126_V_read3196_phi_reg_111331.read();
        }
    } else {
        ap_phi_mux_data_3126_V_read3196_phi_phi_fu_111335_p4 = ap_phi_reg_pp0_iter0_data_3126_V_read3196_phi_reg_111331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_69647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_69647_p6 = data_3126_V_read3196_phi_reg_111331.read();
    } else {
        ap_phi_mux_data_3126_V_read3196_rewind_phi_fu_69647_p6 = data_3126_V_read3196_rewind_reg_69643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3127_V_read3197_phi_phi_fu_111348_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3127_V_read3197_phi_phi_fu_111348_p4 = ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_69661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3127_V_read3197_phi_phi_fu_111348_p4 = data_3127_V_read.read();
        } else {
            ap_phi_mux_data_3127_V_read3197_phi_phi_fu_111348_p4 = ap_phi_reg_pp0_iter0_data_3127_V_read3197_phi_reg_111344.read();
        }
    } else {
        ap_phi_mux_data_3127_V_read3197_phi_phi_fu_111348_p4 = ap_phi_reg_pp0_iter0_data_3127_V_read3197_phi_reg_111344.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_69661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_69661_p6 = data_3127_V_read3197_phi_reg_111344.read();
    } else {
        ap_phi_mux_data_3127_V_read3197_rewind_phi_fu_69661_p6 = data_3127_V_read3197_rewind_reg_69657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3128_V_read3198_phi_phi_fu_111361_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3128_V_read3198_phi_phi_fu_111361_p4 = ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_69675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3128_V_read3198_phi_phi_fu_111361_p4 = data_3128_V_read.read();
        } else {
            ap_phi_mux_data_3128_V_read3198_phi_phi_fu_111361_p4 = ap_phi_reg_pp0_iter0_data_3128_V_read3198_phi_reg_111357.read();
        }
    } else {
        ap_phi_mux_data_3128_V_read3198_phi_phi_fu_111361_p4 = ap_phi_reg_pp0_iter0_data_3128_V_read3198_phi_reg_111357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_69675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_69675_p6 = data_3128_V_read3198_phi_reg_111357.read();
    } else {
        ap_phi_mux_data_3128_V_read3198_rewind_phi_fu_69675_p6 = data_3128_V_read3198_rewind_reg_69671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3129_V_read3199_phi_phi_fu_111374_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3129_V_read3199_phi_phi_fu_111374_p4 = ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_69689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3129_V_read3199_phi_phi_fu_111374_p4 = data_3129_V_read.read();
        } else {
            ap_phi_mux_data_3129_V_read3199_phi_phi_fu_111374_p4 = ap_phi_reg_pp0_iter0_data_3129_V_read3199_phi_reg_111370.read();
        }
    } else {
        ap_phi_mux_data_3129_V_read3199_phi_phi_fu_111374_p4 = ap_phi_reg_pp0_iter0_data_3129_V_read3199_phi_reg_111370.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_69689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_69689_p6 = data_3129_V_read3199_phi_reg_111370.read();
    } else {
        ap_phi_mux_data_3129_V_read3199_rewind_phi_fu_69689_p6 = data_3129_V_read3199_rewind_reg_69685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_312_V_read382_phi_phi_fu_74753_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_312_V_read382_phi_phi_fu_74753_p4 = ap_phi_mux_data_312_V_read382_rewind_phi_fu_30251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_312_V_read382_phi_phi_fu_74753_p4 = data_312_V_read.read();
        } else {
            ap_phi_mux_data_312_V_read382_phi_phi_fu_74753_p4 = ap_phi_reg_pp0_iter0_data_312_V_read382_phi_reg_74749.read();
        }
    } else {
        ap_phi_mux_data_312_V_read382_phi_phi_fu_74753_p4 = ap_phi_reg_pp0_iter0_data_312_V_read382_phi_reg_74749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_312_V_read382_rewind_phi_fu_30251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_312_V_read382_rewind_phi_fu_30251_p6 = data_312_V_read382_phi_reg_74749.read();
    } else {
        ap_phi_mux_data_312_V_read382_rewind_phi_fu_30251_p6 = data_312_V_read382_rewind_reg_30247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3130_V_read3200_phi_phi_fu_111387_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3130_V_read3200_phi_phi_fu_111387_p4 = ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_69703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3130_V_read3200_phi_phi_fu_111387_p4 = data_3130_V_read.read();
        } else {
            ap_phi_mux_data_3130_V_read3200_phi_phi_fu_111387_p4 = ap_phi_reg_pp0_iter0_data_3130_V_read3200_phi_reg_111383.read();
        }
    } else {
        ap_phi_mux_data_3130_V_read3200_phi_phi_fu_111387_p4 = ap_phi_reg_pp0_iter0_data_3130_V_read3200_phi_reg_111383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_69703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_69703_p6 = data_3130_V_read3200_phi_reg_111383.read();
    } else {
        ap_phi_mux_data_3130_V_read3200_rewind_phi_fu_69703_p6 = data_3130_V_read3200_rewind_reg_69699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3131_V_read3201_phi_phi_fu_111400_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3131_V_read3201_phi_phi_fu_111400_p4 = ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_69717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3131_V_read3201_phi_phi_fu_111400_p4 = data_3131_V_read.read();
        } else {
            ap_phi_mux_data_3131_V_read3201_phi_phi_fu_111400_p4 = ap_phi_reg_pp0_iter0_data_3131_V_read3201_phi_reg_111396.read();
        }
    } else {
        ap_phi_mux_data_3131_V_read3201_phi_phi_fu_111400_p4 = ap_phi_reg_pp0_iter0_data_3131_V_read3201_phi_reg_111396.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_69717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_69717_p6 = data_3131_V_read3201_phi_reg_111396.read();
    } else {
        ap_phi_mux_data_3131_V_read3201_rewind_phi_fu_69717_p6 = data_3131_V_read3201_rewind_reg_69713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3132_V_read3202_phi_phi_fu_111413_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3132_V_read3202_phi_phi_fu_111413_p4 = ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_69731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3132_V_read3202_phi_phi_fu_111413_p4 = data_3132_V_read.read();
        } else {
            ap_phi_mux_data_3132_V_read3202_phi_phi_fu_111413_p4 = ap_phi_reg_pp0_iter0_data_3132_V_read3202_phi_reg_111409.read();
        }
    } else {
        ap_phi_mux_data_3132_V_read3202_phi_phi_fu_111413_p4 = ap_phi_reg_pp0_iter0_data_3132_V_read3202_phi_reg_111409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_69731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_69731_p6 = data_3132_V_read3202_phi_reg_111409.read();
    } else {
        ap_phi_mux_data_3132_V_read3202_rewind_phi_fu_69731_p6 = data_3132_V_read3202_rewind_reg_69727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3133_V_read3203_phi_phi_fu_111426_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3133_V_read3203_phi_phi_fu_111426_p4 = ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_69745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3133_V_read3203_phi_phi_fu_111426_p4 = data_3133_V_read.read();
        } else {
            ap_phi_mux_data_3133_V_read3203_phi_phi_fu_111426_p4 = ap_phi_reg_pp0_iter0_data_3133_V_read3203_phi_reg_111422.read();
        }
    } else {
        ap_phi_mux_data_3133_V_read3203_phi_phi_fu_111426_p4 = ap_phi_reg_pp0_iter0_data_3133_V_read3203_phi_reg_111422.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_69745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_69745_p6 = data_3133_V_read3203_phi_reg_111422.read();
    } else {
        ap_phi_mux_data_3133_V_read3203_rewind_phi_fu_69745_p6 = data_3133_V_read3203_rewind_reg_69741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3134_V_read3204_phi_phi_fu_111439_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3134_V_read3204_phi_phi_fu_111439_p4 = ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_69759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3134_V_read3204_phi_phi_fu_111439_p4 = data_3134_V_read.read();
        } else {
            ap_phi_mux_data_3134_V_read3204_phi_phi_fu_111439_p4 = ap_phi_reg_pp0_iter0_data_3134_V_read3204_phi_reg_111435.read();
        }
    } else {
        ap_phi_mux_data_3134_V_read3204_phi_phi_fu_111439_p4 = ap_phi_reg_pp0_iter0_data_3134_V_read3204_phi_reg_111435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_69759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_69759_p6 = data_3134_V_read3204_phi_reg_111435.read();
    } else {
        ap_phi_mux_data_3134_V_read3204_rewind_phi_fu_69759_p6 = data_3134_V_read3204_rewind_reg_69755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3135_V_read3205_phi_phi_fu_111452_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3135_V_read3205_phi_phi_fu_111452_p4 = ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_69773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3135_V_read3205_phi_phi_fu_111452_p4 = data_3135_V_read.read();
        } else {
            ap_phi_mux_data_3135_V_read3205_phi_phi_fu_111452_p4 = ap_phi_reg_pp0_iter0_data_3135_V_read3205_phi_reg_111448.read();
        }
    } else {
        ap_phi_mux_data_3135_V_read3205_phi_phi_fu_111452_p4 = ap_phi_reg_pp0_iter0_data_3135_V_read3205_phi_reg_111448.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_69773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_69773_p6 = data_3135_V_read3205_phi_reg_111448.read();
    } else {
        ap_phi_mux_data_3135_V_read3205_rewind_phi_fu_69773_p6 = data_3135_V_read3205_rewind_reg_69769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3136_V_read3206_phi_phi_fu_111465_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3136_V_read3206_phi_phi_fu_111465_p4 = ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_69787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3136_V_read3206_phi_phi_fu_111465_p4 = data_3136_V_read.read();
        } else {
            ap_phi_mux_data_3136_V_read3206_phi_phi_fu_111465_p4 = ap_phi_reg_pp0_iter0_data_3136_V_read3206_phi_reg_111461.read();
        }
    } else {
        ap_phi_mux_data_3136_V_read3206_phi_phi_fu_111465_p4 = ap_phi_reg_pp0_iter0_data_3136_V_read3206_phi_reg_111461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_69787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_69787_p6 = data_3136_V_read3206_phi_reg_111461.read();
    } else {
        ap_phi_mux_data_3136_V_read3206_rewind_phi_fu_69787_p6 = data_3136_V_read3206_rewind_reg_69783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3137_V_read3207_phi_phi_fu_111478_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3137_V_read3207_phi_phi_fu_111478_p4 = ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_69801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3137_V_read3207_phi_phi_fu_111478_p4 = data_3137_V_read.read();
        } else {
            ap_phi_mux_data_3137_V_read3207_phi_phi_fu_111478_p4 = ap_phi_reg_pp0_iter0_data_3137_V_read3207_phi_reg_111474.read();
        }
    } else {
        ap_phi_mux_data_3137_V_read3207_phi_phi_fu_111478_p4 = ap_phi_reg_pp0_iter0_data_3137_V_read3207_phi_reg_111474.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_69801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_69801_p6 = data_3137_V_read3207_phi_reg_111474.read();
    } else {
        ap_phi_mux_data_3137_V_read3207_rewind_phi_fu_69801_p6 = data_3137_V_read3207_rewind_reg_69797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3138_V_read3208_phi_phi_fu_111491_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3138_V_read3208_phi_phi_fu_111491_p4 = ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_69815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3138_V_read3208_phi_phi_fu_111491_p4 = data_3138_V_read.read();
        } else {
            ap_phi_mux_data_3138_V_read3208_phi_phi_fu_111491_p4 = ap_phi_reg_pp0_iter0_data_3138_V_read3208_phi_reg_111487.read();
        }
    } else {
        ap_phi_mux_data_3138_V_read3208_phi_phi_fu_111491_p4 = ap_phi_reg_pp0_iter0_data_3138_V_read3208_phi_reg_111487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_69815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_69815_p6 = data_3138_V_read3208_phi_reg_111487.read();
    } else {
        ap_phi_mux_data_3138_V_read3208_rewind_phi_fu_69815_p6 = data_3138_V_read3208_rewind_reg_69811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3139_V_read3209_phi_phi_fu_111504_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3139_V_read3209_phi_phi_fu_111504_p4 = ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_69829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3139_V_read3209_phi_phi_fu_111504_p4 = data_3139_V_read.read();
        } else {
            ap_phi_mux_data_3139_V_read3209_phi_phi_fu_111504_p4 = ap_phi_reg_pp0_iter0_data_3139_V_read3209_phi_reg_111500.read();
        }
    } else {
        ap_phi_mux_data_3139_V_read3209_phi_phi_fu_111504_p4 = ap_phi_reg_pp0_iter0_data_3139_V_read3209_phi_reg_111500.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_69829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_69829_p6 = data_3139_V_read3209_phi_reg_111500.read();
    } else {
        ap_phi_mux_data_3139_V_read3209_rewind_phi_fu_69829_p6 = data_3139_V_read3209_rewind_reg_69825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_313_V_read383_phi_phi_fu_74766_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_313_V_read383_phi_phi_fu_74766_p4 = ap_phi_mux_data_313_V_read383_rewind_phi_fu_30265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_313_V_read383_phi_phi_fu_74766_p4 = data_313_V_read.read();
        } else {
            ap_phi_mux_data_313_V_read383_phi_phi_fu_74766_p4 = ap_phi_reg_pp0_iter0_data_313_V_read383_phi_reg_74762.read();
        }
    } else {
        ap_phi_mux_data_313_V_read383_phi_phi_fu_74766_p4 = ap_phi_reg_pp0_iter0_data_313_V_read383_phi_reg_74762.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_313_V_read383_rewind_phi_fu_30265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_313_V_read383_rewind_phi_fu_30265_p6 = data_313_V_read383_phi_reg_74762.read();
    } else {
        ap_phi_mux_data_313_V_read383_rewind_phi_fu_30265_p6 = data_313_V_read383_rewind_reg_30261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3140_V_read3210_phi_phi_fu_111517_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3140_V_read3210_phi_phi_fu_111517_p4 = ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_69843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3140_V_read3210_phi_phi_fu_111517_p4 = data_3140_V_read.read();
        } else {
            ap_phi_mux_data_3140_V_read3210_phi_phi_fu_111517_p4 = ap_phi_reg_pp0_iter0_data_3140_V_read3210_phi_reg_111513.read();
        }
    } else {
        ap_phi_mux_data_3140_V_read3210_phi_phi_fu_111517_p4 = ap_phi_reg_pp0_iter0_data_3140_V_read3210_phi_reg_111513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_69843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_69843_p6 = data_3140_V_read3210_phi_reg_111513.read();
    } else {
        ap_phi_mux_data_3140_V_read3210_rewind_phi_fu_69843_p6 = data_3140_V_read3210_rewind_reg_69839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3141_V_read3211_phi_phi_fu_111530_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3141_V_read3211_phi_phi_fu_111530_p4 = ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_69857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3141_V_read3211_phi_phi_fu_111530_p4 = data_3141_V_read.read();
        } else {
            ap_phi_mux_data_3141_V_read3211_phi_phi_fu_111530_p4 = ap_phi_reg_pp0_iter0_data_3141_V_read3211_phi_reg_111526.read();
        }
    } else {
        ap_phi_mux_data_3141_V_read3211_phi_phi_fu_111530_p4 = ap_phi_reg_pp0_iter0_data_3141_V_read3211_phi_reg_111526.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_69857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_69857_p6 = data_3141_V_read3211_phi_reg_111526.read();
    } else {
        ap_phi_mux_data_3141_V_read3211_rewind_phi_fu_69857_p6 = data_3141_V_read3211_rewind_reg_69853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3142_V_read3212_phi_phi_fu_111543_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3142_V_read3212_phi_phi_fu_111543_p4 = ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_69871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3142_V_read3212_phi_phi_fu_111543_p4 = data_3142_V_read.read();
        } else {
            ap_phi_mux_data_3142_V_read3212_phi_phi_fu_111543_p4 = ap_phi_reg_pp0_iter0_data_3142_V_read3212_phi_reg_111539.read();
        }
    } else {
        ap_phi_mux_data_3142_V_read3212_phi_phi_fu_111543_p4 = ap_phi_reg_pp0_iter0_data_3142_V_read3212_phi_reg_111539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_69871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_69871_p6 = data_3142_V_read3212_phi_reg_111539.read();
    } else {
        ap_phi_mux_data_3142_V_read3212_rewind_phi_fu_69871_p6 = data_3142_V_read3212_rewind_reg_69867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3143_V_read3213_phi_phi_fu_111556_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3143_V_read3213_phi_phi_fu_111556_p4 = ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_69885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3143_V_read3213_phi_phi_fu_111556_p4 = data_3143_V_read.read();
        } else {
            ap_phi_mux_data_3143_V_read3213_phi_phi_fu_111556_p4 = ap_phi_reg_pp0_iter0_data_3143_V_read3213_phi_reg_111552.read();
        }
    } else {
        ap_phi_mux_data_3143_V_read3213_phi_phi_fu_111556_p4 = ap_phi_reg_pp0_iter0_data_3143_V_read3213_phi_reg_111552.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_69885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_69885_p6 = data_3143_V_read3213_phi_reg_111552.read();
    } else {
        ap_phi_mux_data_3143_V_read3213_rewind_phi_fu_69885_p6 = data_3143_V_read3213_rewind_reg_69881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3144_V_read3214_phi_phi_fu_111569_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3144_V_read3214_phi_phi_fu_111569_p4 = ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_69899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3144_V_read3214_phi_phi_fu_111569_p4 = data_3144_V_read.read();
        } else {
            ap_phi_mux_data_3144_V_read3214_phi_phi_fu_111569_p4 = ap_phi_reg_pp0_iter0_data_3144_V_read3214_phi_reg_111565.read();
        }
    } else {
        ap_phi_mux_data_3144_V_read3214_phi_phi_fu_111569_p4 = ap_phi_reg_pp0_iter0_data_3144_V_read3214_phi_reg_111565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_69899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_69899_p6 = data_3144_V_read3214_phi_reg_111565.read();
    } else {
        ap_phi_mux_data_3144_V_read3214_rewind_phi_fu_69899_p6 = data_3144_V_read3214_rewind_reg_69895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3145_V_read3215_phi_phi_fu_111582_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3145_V_read3215_phi_phi_fu_111582_p4 = ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_69913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3145_V_read3215_phi_phi_fu_111582_p4 = data_3145_V_read.read();
        } else {
            ap_phi_mux_data_3145_V_read3215_phi_phi_fu_111582_p4 = ap_phi_reg_pp0_iter0_data_3145_V_read3215_phi_reg_111578.read();
        }
    } else {
        ap_phi_mux_data_3145_V_read3215_phi_phi_fu_111582_p4 = ap_phi_reg_pp0_iter0_data_3145_V_read3215_phi_reg_111578.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_69913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_69913_p6 = data_3145_V_read3215_phi_reg_111578.read();
    } else {
        ap_phi_mux_data_3145_V_read3215_rewind_phi_fu_69913_p6 = data_3145_V_read3215_rewind_reg_69909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3146_V_read3216_phi_phi_fu_111595_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3146_V_read3216_phi_phi_fu_111595_p4 = ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_69927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3146_V_read3216_phi_phi_fu_111595_p4 = data_3146_V_read.read();
        } else {
            ap_phi_mux_data_3146_V_read3216_phi_phi_fu_111595_p4 = ap_phi_reg_pp0_iter0_data_3146_V_read3216_phi_reg_111591.read();
        }
    } else {
        ap_phi_mux_data_3146_V_read3216_phi_phi_fu_111595_p4 = ap_phi_reg_pp0_iter0_data_3146_V_read3216_phi_reg_111591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_69927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_69927_p6 = data_3146_V_read3216_phi_reg_111591.read();
    } else {
        ap_phi_mux_data_3146_V_read3216_rewind_phi_fu_69927_p6 = data_3146_V_read3216_rewind_reg_69923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3147_V_read3217_phi_phi_fu_111608_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3147_V_read3217_phi_phi_fu_111608_p4 = ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_69941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3147_V_read3217_phi_phi_fu_111608_p4 = data_3147_V_read.read();
        } else {
            ap_phi_mux_data_3147_V_read3217_phi_phi_fu_111608_p4 = ap_phi_reg_pp0_iter0_data_3147_V_read3217_phi_reg_111604.read();
        }
    } else {
        ap_phi_mux_data_3147_V_read3217_phi_phi_fu_111608_p4 = ap_phi_reg_pp0_iter0_data_3147_V_read3217_phi_reg_111604.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_69941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_69941_p6 = data_3147_V_read3217_phi_reg_111604.read();
    } else {
        ap_phi_mux_data_3147_V_read3217_rewind_phi_fu_69941_p6 = data_3147_V_read3217_rewind_reg_69937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3148_V_read3218_phi_phi_fu_111621_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3148_V_read3218_phi_phi_fu_111621_p4 = ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_69955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3148_V_read3218_phi_phi_fu_111621_p4 = data_3148_V_read.read();
        } else {
            ap_phi_mux_data_3148_V_read3218_phi_phi_fu_111621_p4 = ap_phi_reg_pp0_iter0_data_3148_V_read3218_phi_reg_111617.read();
        }
    } else {
        ap_phi_mux_data_3148_V_read3218_phi_phi_fu_111621_p4 = ap_phi_reg_pp0_iter0_data_3148_V_read3218_phi_reg_111617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_69955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_69955_p6 = data_3148_V_read3218_phi_reg_111617.read();
    } else {
        ap_phi_mux_data_3148_V_read3218_rewind_phi_fu_69955_p6 = data_3148_V_read3218_rewind_reg_69951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3149_V_read3219_phi_phi_fu_111634_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3149_V_read3219_phi_phi_fu_111634_p4 = ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_69969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3149_V_read3219_phi_phi_fu_111634_p4 = data_3149_V_read.read();
        } else {
            ap_phi_mux_data_3149_V_read3219_phi_phi_fu_111634_p4 = ap_phi_reg_pp0_iter0_data_3149_V_read3219_phi_reg_111630.read();
        }
    } else {
        ap_phi_mux_data_3149_V_read3219_phi_phi_fu_111634_p4 = ap_phi_reg_pp0_iter0_data_3149_V_read3219_phi_reg_111630.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_69969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_69969_p6 = data_3149_V_read3219_phi_reg_111630.read();
    } else {
        ap_phi_mux_data_3149_V_read3219_rewind_phi_fu_69969_p6 = data_3149_V_read3219_rewind_reg_69965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_314_V_read384_phi_phi_fu_74779_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_314_V_read384_phi_phi_fu_74779_p4 = ap_phi_mux_data_314_V_read384_rewind_phi_fu_30279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_314_V_read384_phi_phi_fu_74779_p4 = data_314_V_read.read();
        } else {
            ap_phi_mux_data_314_V_read384_phi_phi_fu_74779_p4 = ap_phi_reg_pp0_iter0_data_314_V_read384_phi_reg_74775.read();
        }
    } else {
        ap_phi_mux_data_314_V_read384_phi_phi_fu_74779_p4 = ap_phi_reg_pp0_iter0_data_314_V_read384_phi_reg_74775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_314_V_read384_rewind_phi_fu_30279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_314_V_read384_rewind_phi_fu_30279_p6 = data_314_V_read384_phi_reg_74775.read();
    } else {
        ap_phi_mux_data_314_V_read384_rewind_phi_fu_30279_p6 = data_314_V_read384_rewind_reg_30275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3150_V_read3220_phi_phi_fu_111647_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3150_V_read3220_phi_phi_fu_111647_p4 = ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_69983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3150_V_read3220_phi_phi_fu_111647_p4 = data_3150_V_read.read();
        } else {
            ap_phi_mux_data_3150_V_read3220_phi_phi_fu_111647_p4 = ap_phi_reg_pp0_iter0_data_3150_V_read3220_phi_reg_111643.read();
        }
    } else {
        ap_phi_mux_data_3150_V_read3220_phi_phi_fu_111647_p4 = ap_phi_reg_pp0_iter0_data_3150_V_read3220_phi_reg_111643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_69983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_69983_p6 = data_3150_V_read3220_phi_reg_111643.read();
    } else {
        ap_phi_mux_data_3150_V_read3220_rewind_phi_fu_69983_p6 = data_3150_V_read3220_rewind_reg_69979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3151_V_read3221_phi_phi_fu_111660_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3151_V_read3221_phi_phi_fu_111660_p4 = ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_69997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3151_V_read3221_phi_phi_fu_111660_p4 = data_3151_V_read.read();
        } else {
            ap_phi_mux_data_3151_V_read3221_phi_phi_fu_111660_p4 = ap_phi_reg_pp0_iter0_data_3151_V_read3221_phi_reg_111656.read();
        }
    } else {
        ap_phi_mux_data_3151_V_read3221_phi_phi_fu_111660_p4 = ap_phi_reg_pp0_iter0_data_3151_V_read3221_phi_reg_111656.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_69997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_69997_p6 = data_3151_V_read3221_phi_reg_111656.read();
    } else {
        ap_phi_mux_data_3151_V_read3221_rewind_phi_fu_69997_p6 = data_3151_V_read3221_rewind_reg_69993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3152_V_read3222_phi_phi_fu_111673_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3152_V_read3222_phi_phi_fu_111673_p4 = ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_70011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3152_V_read3222_phi_phi_fu_111673_p4 = data_3152_V_read.read();
        } else {
            ap_phi_mux_data_3152_V_read3222_phi_phi_fu_111673_p4 = ap_phi_reg_pp0_iter0_data_3152_V_read3222_phi_reg_111669.read();
        }
    } else {
        ap_phi_mux_data_3152_V_read3222_phi_phi_fu_111673_p4 = ap_phi_reg_pp0_iter0_data_3152_V_read3222_phi_reg_111669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_70011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_70011_p6 = data_3152_V_read3222_phi_reg_111669.read();
    } else {
        ap_phi_mux_data_3152_V_read3222_rewind_phi_fu_70011_p6 = data_3152_V_read3222_rewind_reg_70007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3153_V_read3223_phi_phi_fu_111686_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3153_V_read3223_phi_phi_fu_111686_p4 = ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_70025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3153_V_read3223_phi_phi_fu_111686_p4 = data_3153_V_read.read();
        } else {
            ap_phi_mux_data_3153_V_read3223_phi_phi_fu_111686_p4 = ap_phi_reg_pp0_iter0_data_3153_V_read3223_phi_reg_111682.read();
        }
    } else {
        ap_phi_mux_data_3153_V_read3223_phi_phi_fu_111686_p4 = ap_phi_reg_pp0_iter0_data_3153_V_read3223_phi_reg_111682.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_70025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_70025_p6 = data_3153_V_read3223_phi_reg_111682.read();
    } else {
        ap_phi_mux_data_3153_V_read3223_rewind_phi_fu_70025_p6 = data_3153_V_read3223_rewind_reg_70021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3154_V_read3224_phi_phi_fu_111699_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3154_V_read3224_phi_phi_fu_111699_p4 = ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_70039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3154_V_read3224_phi_phi_fu_111699_p4 = data_3154_V_read.read();
        } else {
            ap_phi_mux_data_3154_V_read3224_phi_phi_fu_111699_p4 = ap_phi_reg_pp0_iter0_data_3154_V_read3224_phi_reg_111695.read();
        }
    } else {
        ap_phi_mux_data_3154_V_read3224_phi_phi_fu_111699_p4 = ap_phi_reg_pp0_iter0_data_3154_V_read3224_phi_reg_111695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_70039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_70039_p6 = data_3154_V_read3224_phi_reg_111695.read();
    } else {
        ap_phi_mux_data_3154_V_read3224_rewind_phi_fu_70039_p6 = data_3154_V_read3224_rewind_reg_70035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3155_V_read3225_phi_phi_fu_111712_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3155_V_read3225_phi_phi_fu_111712_p4 = ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_70053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3155_V_read3225_phi_phi_fu_111712_p4 = data_3155_V_read.read();
        } else {
            ap_phi_mux_data_3155_V_read3225_phi_phi_fu_111712_p4 = ap_phi_reg_pp0_iter0_data_3155_V_read3225_phi_reg_111708.read();
        }
    } else {
        ap_phi_mux_data_3155_V_read3225_phi_phi_fu_111712_p4 = ap_phi_reg_pp0_iter0_data_3155_V_read3225_phi_reg_111708.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_70053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_70053_p6 = data_3155_V_read3225_phi_reg_111708.read();
    } else {
        ap_phi_mux_data_3155_V_read3225_rewind_phi_fu_70053_p6 = data_3155_V_read3225_rewind_reg_70049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3156_V_read3226_phi_phi_fu_111725_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3156_V_read3226_phi_phi_fu_111725_p4 = ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_70067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3156_V_read3226_phi_phi_fu_111725_p4 = data_3156_V_read.read();
        } else {
            ap_phi_mux_data_3156_V_read3226_phi_phi_fu_111725_p4 = ap_phi_reg_pp0_iter0_data_3156_V_read3226_phi_reg_111721.read();
        }
    } else {
        ap_phi_mux_data_3156_V_read3226_phi_phi_fu_111725_p4 = ap_phi_reg_pp0_iter0_data_3156_V_read3226_phi_reg_111721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_70067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_70067_p6 = data_3156_V_read3226_phi_reg_111721.read();
    } else {
        ap_phi_mux_data_3156_V_read3226_rewind_phi_fu_70067_p6 = data_3156_V_read3226_rewind_reg_70063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3157_V_read3227_phi_phi_fu_111738_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3157_V_read3227_phi_phi_fu_111738_p4 = ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_70081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3157_V_read3227_phi_phi_fu_111738_p4 = data_3157_V_read.read();
        } else {
            ap_phi_mux_data_3157_V_read3227_phi_phi_fu_111738_p4 = ap_phi_reg_pp0_iter0_data_3157_V_read3227_phi_reg_111734.read();
        }
    } else {
        ap_phi_mux_data_3157_V_read3227_phi_phi_fu_111738_p4 = ap_phi_reg_pp0_iter0_data_3157_V_read3227_phi_reg_111734.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_70081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_70081_p6 = data_3157_V_read3227_phi_reg_111734.read();
    } else {
        ap_phi_mux_data_3157_V_read3227_rewind_phi_fu_70081_p6 = data_3157_V_read3227_rewind_reg_70077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3158_V_read3228_phi_phi_fu_111751_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3158_V_read3228_phi_phi_fu_111751_p4 = ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_70095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3158_V_read3228_phi_phi_fu_111751_p4 = data_3158_V_read.read();
        } else {
            ap_phi_mux_data_3158_V_read3228_phi_phi_fu_111751_p4 = ap_phi_reg_pp0_iter0_data_3158_V_read3228_phi_reg_111747.read();
        }
    } else {
        ap_phi_mux_data_3158_V_read3228_phi_phi_fu_111751_p4 = ap_phi_reg_pp0_iter0_data_3158_V_read3228_phi_reg_111747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_70095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_70095_p6 = data_3158_V_read3228_phi_reg_111747.read();
    } else {
        ap_phi_mux_data_3158_V_read3228_rewind_phi_fu_70095_p6 = data_3158_V_read3228_rewind_reg_70091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3159_V_read3229_phi_phi_fu_111764_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3159_V_read3229_phi_phi_fu_111764_p4 = ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_70109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3159_V_read3229_phi_phi_fu_111764_p4 = data_3159_V_read.read();
        } else {
            ap_phi_mux_data_3159_V_read3229_phi_phi_fu_111764_p4 = ap_phi_reg_pp0_iter0_data_3159_V_read3229_phi_reg_111760.read();
        }
    } else {
        ap_phi_mux_data_3159_V_read3229_phi_phi_fu_111764_p4 = ap_phi_reg_pp0_iter0_data_3159_V_read3229_phi_reg_111760.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_70109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_70109_p6 = data_3159_V_read3229_phi_reg_111760.read();
    } else {
        ap_phi_mux_data_3159_V_read3229_rewind_phi_fu_70109_p6 = data_3159_V_read3229_rewind_reg_70105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_315_V_read385_phi_phi_fu_74792_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_315_V_read385_phi_phi_fu_74792_p4 = ap_phi_mux_data_315_V_read385_rewind_phi_fu_30293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_315_V_read385_phi_phi_fu_74792_p4 = data_315_V_read.read();
        } else {
            ap_phi_mux_data_315_V_read385_phi_phi_fu_74792_p4 = ap_phi_reg_pp0_iter0_data_315_V_read385_phi_reg_74788.read();
        }
    } else {
        ap_phi_mux_data_315_V_read385_phi_phi_fu_74792_p4 = ap_phi_reg_pp0_iter0_data_315_V_read385_phi_reg_74788.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_315_V_read385_rewind_phi_fu_30293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_315_V_read385_rewind_phi_fu_30293_p6 = data_315_V_read385_phi_reg_74788.read();
    } else {
        ap_phi_mux_data_315_V_read385_rewind_phi_fu_30293_p6 = data_315_V_read385_rewind_reg_30289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3160_V_read3230_phi_phi_fu_111777_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3160_V_read3230_phi_phi_fu_111777_p4 = ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_70123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3160_V_read3230_phi_phi_fu_111777_p4 = data_3160_V_read.read();
        } else {
            ap_phi_mux_data_3160_V_read3230_phi_phi_fu_111777_p4 = ap_phi_reg_pp0_iter0_data_3160_V_read3230_phi_reg_111773.read();
        }
    } else {
        ap_phi_mux_data_3160_V_read3230_phi_phi_fu_111777_p4 = ap_phi_reg_pp0_iter0_data_3160_V_read3230_phi_reg_111773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_70123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_70123_p6 = data_3160_V_read3230_phi_reg_111773.read();
    } else {
        ap_phi_mux_data_3160_V_read3230_rewind_phi_fu_70123_p6 = data_3160_V_read3230_rewind_reg_70119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3161_V_read3231_phi_phi_fu_111790_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3161_V_read3231_phi_phi_fu_111790_p4 = ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_70137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3161_V_read3231_phi_phi_fu_111790_p4 = data_3161_V_read.read();
        } else {
            ap_phi_mux_data_3161_V_read3231_phi_phi_fu_111790_p4 = ap_phi_reg_pp0_iter0_data_3161_V_read3231_phi_reg_111786.read();
        }
    } else {
        ap_phi_mux_data_3161_V_read3231_phi_phi_fu_111790_p4 = ap_phi_reg_pp0_iter0_data_3161_V_read3231_phi_reg_111786.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_70137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_70137_p6 = data_3161_V_read3231_phi_reg_111786.read();
    } else {
        ap_phi_mux_data_3161_V_read3231_rewind_phi_fu_70137_p6 = data_3161_V_read3231_rewind_reg_70133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3162_V_read3232_phi_phi_fu_111803_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3162_V_read3232_phi_phi_fu_111803_p4 = ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_70151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3162_V_read3232_phi_phi_fu_111803_p4 = data_3162_V_read.read();
        } else {
            ap_phi_mux_data_3162_V_read3232_phi_phi_fu_111803_p4 = ap_phi_reg_pp0_iter0_data_3162_V_read3232_phi_reg_111799.read();
        }
    } else {
        ap_phi_mux_data_3162_V_read3232_phi_phi_fu_111803_p4 = ap_phi_reg_pp0_iter0_data_3162_V_read3232_phi_reg_111799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_70151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_70151_p6 = data_3162_V_read3232_phi_reg_111799.read();
    } else {
        ap_phi_mux_data_3162_V_read3232_rewind_phi_fu_70151_p6 = data_3162_V_read3232_rewind_reg_70147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3163_V_read3233_phi_phi_fu_111816_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3163_V_read3233_phi_phi_fu_111816_p4 = ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_70165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3163_V_read3233_phi_phi_fu_111816_p4 = data_3163_V_read.read();
        } else {
            ap_phi_mux_data_3163_V_read3233_phi_phi_fu_111816_p4 = ap_phi_reg_pp0_iter0_data_3163_V_read3233_phi_reg_111812.read();
        }
    } else {
        ap_phi_mux_data_3163_V_read3233_phi_phi_fu_111816_p4 = ap_phi_reg_pp0_iter0_data_3163_V_read3233_phi_reg_111812.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_70165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_70165_p6 = data_3163_V_read3233_phi_reg_111812.read();
    } else {
        ap_phi_mux_data_3163_V_read3233_rewind_phi_fu_70165_p6 = data_3163_V_read3233_rewind_reg_70161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3164_V_read3234_phi_phi_fu_111829_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3164_V_read3234_phi_phi_fu_111829_p4 = ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_70179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3164_V_read3234_phi_phi_fu_111829_p4 = data_3164_V_read.read();
        } else {
            ap_phi_mux_data_3164_V_read3234_phi_phi_fu_111829_p4 = ap_phi_reg_pp0_iter0_data_3164_V_read3234_phi_reg_111825.read();
        }
    } else {
        ap_phi_mux_data_3164_V_read3234_phi_phi_fu_111829_p4 = ap_phi_reg_pp0_iter0_data_3164_V_read3234_phi_reg_111825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_70179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_70179_p6 = data_3164_V_read3234_phi_reg_111825.read();
    } else {
        ap_phi_mux_data_3164_V_read3234_rewind_phi_fu_70179_p6 = data_3164_V_read3234_rewind_reg_70175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3165_V_read3235_phi_phi_fu_111842_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3165_V_read3235_phi_phi_fu_111842_p4 = ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_70193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3165_V_read3235_phi_phi_fu_111842_p4 = data_3165_V_read.read();
        } else {
            ap_phi_mux_data_3165_V_read3235_phi_phi_fu_111842_p4 = ap_phi_reg_pp0_iter0_data_3165_V_read3235_phi_reg_111838.read();
        }
    } else {
        ap_phi_mux_data_3165_V_read3235_phi_phi_fu_111842_p4 = ap_phi_reg_pp0_iter0_data_3165_V_read3235_phi_reg_111838.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_70193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_70193_p6 = data_3165_V_read3235_phi_reg_111838.read();
    } else {
        ap_phi_mux_data_3165_V_read3235_rewind_phi_fu_70193_p6 = data_3165_V_read3235_rewind_reg_70189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3166_V_read3236_phi_phi_fu_111855_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3166_V_read3236_phi_phi_fu_111855_p4 = ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_70207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3166_V_read3236_phi_phi_fu_111855_p4 = data_3166_V_read.read();
        } else {
            ap_phi_mux_data_3166_V_read3236_phi_phi_fu_111855_p4 = ap_phi_reg_pp0_iter0_data_3166_V_read3236_phi_reg_111851.read();
        }
    } else {
        ap_phi_mux_data_3166_V_read3236_phi_phi_fu_111855_p4 = ap_phi_reg_pp0_iter0_data_3166_V_read3236_phi_reg_111851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_70207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_70207_p6 = data_3166_V_read3236_phi_reg_111851.read();
    } else {
        ap_phi_mux_data_3166_V_read3236_rewind_phi_fu_70207_p6 = data_3166_V_read3236_rewind_reg_70203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3167_V_read3237_phi_phi_fu_111868_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3167_V_read3237_phi_phi_fu_111868_p4 = ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_70221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3167_V_read3237_phi_phi_fu_111868_p4 = data_3167_V_read.read();
        } else {
            ap_phi_mux_data_3167_V_read3237_phi_phi_fu_111868_p4 = ap_phi_reg_pp0_iter0_data_3167_V_read3237_phi_reg_111864.read();
        }
    } else {
        ap_phi_mux_data_3167_V_read3237_phi_phi_fu_111868_p4 = ap_phi_reg_pp0_iter0_data_3167_V_read3237_phi_reg_111864.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_70221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_70221_p6 = data_3167_V_read3237_phi_reg_111864.read();
    } else {
        ap_phi_mux_data_3167_V_read3237_rewind_phi_fu_70221_p6 = data_3167_V_read3237_rewind_reg_70217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3168_V_read3238_phi_phi_fu_111881_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3168_V_read3238_phi_phi_fu_111881_p4 = ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_70235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3168_V_read3238_phi_phi_fu_111881_p4 = data_3168_V_read.read();
        } else {
            ap_phi_mux_data_3168_V_read3238_phi_phi_fu_111881_p4 = ap_phi_reg_pp0_iter0_data_3168_V_read3238_phi_reg_111877.read();
        }
    } else {
        ap_phi_mux_data_3168_V_read3238_phi_phi_fu_111881_p4 = ap_phi_reg_pp0_iter0_data_3168_V_read3238_phi_reg_111877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_70235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_70235_p6 = data_3168_V_read3238_phi_reg_111877.read();
    } else {
        ap_phi_mux_data_3168_V_read3238_rewind_phi_fu_70235_p6 = data_3168_V_read3238_rewind_reg_70231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3169_V_read3239_phi_phi_fu_111894_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3169_V_read3239_phi_phi_fu_111894_p4 = ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_70249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3169_V_read3239_phi_phi_fu_111894_p4 = data_3169_V_read.read();
        } else {
            ap_phi_mux_data_3169_V_read3239_phi_phi_fu_111894_p4 = ap_phi_reg_pp0_iter0_data_3169_V_read3239_phi_reg_111890.read();
        }
    } else {
        ap_phi_mux_data_3169_V_read3239_phi_phi_fu_111894_p4 = ap_phi_reg_pp0_iter0_data_3169_V_read3239_phi_reg_111890.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_70249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_70249_p6 = data_3169_V_read3239_phi_reg_111890.read();
    } else {
        ap_phi_mux_data_3169_V_read3239_rewind_phi_fu_70249_p6 = data_3169_V_read3239_rewind_reg_70245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_316_V_read386_phi_phi_fu_74805_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_316_V_read386_phi_phi_fu_74805_p4 = ap_phi_mux_data_316_V_read386_rewind_phi_fu_30307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_316_V_read386_phi_phi_fu_74805_p4 = data_316_V_read.read();
        } else {
            ap_phi_mux_data_316_V_read386_phi_phi_fu_74805_p4 = ap_phi_reg_pp0_iter0_data_316_V_read386_phi_reg_74801.read();
        }
    } else {
        ap_phi_mux_data_316_V_read386_phi_phi_fu_74805_p4 = ap_phi_reg_pp0_iter0_data_316_V_read386_phi_reg_74801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_316_V_read386_rewind_phi_fu_30307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_316_V_read386_rewind_phi_fu_30307_p6 = data_316_V_read386_phi_reg_74801.read();
    } else {
        ap_phi_mux_data_316_V_read386_rewind_phi_fu_30307_p6 = data_316_V_read386_rewind_reg_30303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3170_V_read3240_phi_phi_fu_111907_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3170_V_read3240_phi_phi_fu_111907_p4 = ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_70263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3170_V_read3240_phi_phi_fu_111907_p4 = data_3170_V_read.read();
        } else {
            ap_phi_mux_data_3170_V_read3240_phi_phi_fu_111907_p4 = ap_phi_reg_pp0_iter0_data_3170_V_read3240_phi_reg_111903.read();
        }
    } else {
        ap_phi_mux_data_3170_V_read3240_phi_phi_fu_111907_p4 = ap_phi_reg_pp0_iter0_data_3170_V_read3240_phi_reg_111903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_70263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_70263_p6 = data_3170_V_read3240_phi_reg_111903.read();
    } else {
        ap_phi_mux_data_3170_V_read3240_rewind_phi_fu_70263_p6 = data_3170_V_read3240_rewind_reg_70259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3171_V_read3241_phi_phi_fu_111920_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3171_V_read3241_phi_phi_fu_111920_p4 = ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_70277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3171_V_read3241_phi_phi_fu_111920_p4 = data_3171_V_read.read();
        } else {
            ap_phi_mux_data_3171_V_read3241_phi_phi_fu_111920_p4 = ap_phi_reg_pp0_iter0_data_3171_V_read3241_phi_reg_111916.read();
        }
    } else {
        ap_phi_mux_data_3171_V_read3241_phi_phi_fu_111920_p4 = ap_phi_reg_pp0_iter0_data_3171_V_read3241_phi_reg_111916.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_70277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_70277_p6 = data_3171_V_read3241_phi_reg_111916.read();
    } else {
        ap_phi_mux_data_3171_V_read3241_rewind_phi_fu_70277_p6 = data_3171_V_read3241_rewind_reg_70273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3172_V_read3242_phi_phi_fu_111933_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3172_V_read3242_phi_phi_fu_111933_p4 = ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_70291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3172_V_read3242_phi_phi_fu_111933_p4 = data_3172_V_read.read();
        } else {
            ap_phi_mux_data_3172_V_read3242_phi_phi_fu_111933_p4 = ap_phi_reg_pp0_iter0_data_3172_V_read3242_phi_reg_111929.read();
        }
    } else {
        ap_phi_mux_data_3172_V_read3242_phi_phi_fu_111933_p4 = ap_phi_reg_pp0_iter0_data_3172_V_read3242_phi_reg_111929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_70291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_70291_p6 = data_3172_V_read3242_phi_reg_111929.read();
    } else {
        ap_phi_mux_data_3172_V_read3242_rewind_phi_fu_70291_p6 = data_3172_V_read3242_rewind_reg_70287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3173_V_read3243_phi_phi_fu_111946_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3173_V_read3243_phi_phi_fu_111946_p4 = ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_70305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3173_V_read3243_phi_phi_fu_111946_p4 = data_3173_V_read.read();
        } else {
            ap_phi_mux_data_3173_V_read3243_phi_phi_fu_111946_p4 = ap_phi_reg_pp0_iter0_data_3173_V_read3243_phi_reg_111942.read();
        }
    } else {
        ap_phi_mux_data_3173_V_read3243_phi_phi_fu_111946_p4 = ap_phi_reg_pp0_iter0_data_3173_V_read3243_phi_reg_111942.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_70305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_70305_p6 = data_3173_V_read3243_phi_reg_111942.read();
    } else {
        ap_phi_mux_data_3173_V_read3243_rewind_phi_fu_70305_p6 = data_3173_V_read3243_rewind_reg_70301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3174_V_read3244_phi_phi_fu_111959_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3174_V_read3244_phi_phi_fu_111959_p4 = ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_70319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3174_V_read3244_phi_phi_fu_111959_p4 = data_3174_V_read.read();
        } else {
            ap_phi_mux_data_3174_V_read3244_phi_phi_fu_111959_p4 = ap_phi_reg_pp0_iter0_data_3174_V_read3244_phi_reg_111955.read();
        }
    } else {
        ap_phi_mux_data_3174_V_read3244_phi_phi_fu_111959_p4 = ap_phi_reg_pp0_iter0_data_3174_V_read3244_phi_reg_111955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_70319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_70319_p6 = data_3174_V_read3244_phi_reg_111955.read();
    } else {
        ap_phi_mux_data_3174_V_read3244_rewind_phi_fu_70319_p6 = data_3174_V_read3244_rewind_reg_70315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3175_V_read3245_phi_phi_fu_111972_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3175_V_read3245_phi_phi_fu_111972_p4 = ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_70333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3175_V_read3245_phi_phi_fu_111972_p4 = data_3175_V_read.read();
        } else {
            ap_phi_mux_data_3175_V_read3245_phi_phi_fu_111972_p4 = ap_phi_reg_pp0_iter0_data_3175_V_read3245_phi_reg_111968.read();
        }
    } else {
        ap_phi_mux_data_3175_V_read3245_phi_phi_fu_111972_p4 = ap_phi_reg_pp0_iter0_data_3175_V_read3245_phi_reg_111968.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_70333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_70333_p6 = data_3175_V_read3245_phi_reg_111968.read();
    } else {
        ap_phi_mux_data_3175_V_read3245_rewind_phi_fu_70333_p6 = data_3175_V_read3245_rewind_reg_70329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3176_V_read3246_phi_phi_fu_111985_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3176_V_read3246_phi_phi_fu_111985_p4 = ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_70347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3176_V_read3246_phi_phi_fu_111985_p4 = data_3176_V_read.read();
        } else {
            ap_phi_mux_data_3176_V_read3246_phi_phi_fu_111985_p4 = ap_phi_reg_pp0_iter0_data_3176_V_read3246_phi_reg_111981.read();
        }
    } else {
        ap_phi_mux_data_3176_V_read3246_phi_phi_fu_111985_p4 = ap_phi_reg_pp0_iter0_data_3176_V_read3246_phi_reg_111981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_70347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_70347_p6 = data_3176_V_read3246_phi_reg_111981.read();
    } else {
        ap_phi_mux_data_3176_V_read3246_rewind_phi_fu_70347_p6 = data_3176_V_read3246_rewind_reg_70343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3177_V_read3247_phi_phi_fu_111998_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3177_V_read3247_phi_phi_fu_111998_p4 = ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_70361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3177_V_read3247_phi_phi_fu_111998_p4 = data_3177_V_read.read();
        } else {
            ap_phi_mux_data_3177_V_read3247_phi_phi_fu_111998_p4 = ap_phi_reg_pp0_iter0_data_3177_V_read3247_phi_reg_111994.read();
        }
    } else {
        ap_phi_mux_data_3177_V_read3247_phi_phi_fu_111998_p4 = ap_phi_reg_pp0_iter0_data_3177_V_read3247_phi_reg_111994.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_70361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_70361_p6 = data_3177_V_read3247_phi_reg_111994.read();
    } else {
        ap_phi_mux_data_3177_V_read3247_rewind_phi_fu_70361_p6 = data_3177_V_read3247_rewind_reg_70357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3178_V_read3248_phi_phi_fu_112011_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3178_V_read3248_phi_phi_fu_112011_p4 = ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_70375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3178_V_read3248_phi_phi_fu_112011_p4 = data_3178_V_read.read();
        } else {
            ap_phi_mux_data_3178_V_read3248_phi_phi_fu_112011_p4 = ap_phi_reg_pp0_iter0_data_3178_V_read3248_phi_reg_112007.read();
        }
    } else {
        ap_phi_mux_data_3178_V_read3248_phi_phi_fu_112011_p4 = ap_phi_reg_pp0_iter0_data_3178_V_read3248_phi_reg_112007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_70375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_70375_p6 = data_3178_V_read3248_phi_reg_112007.read();
    } else {
        ap_phi_mux_data_3178_V_read3248_rewind_phi_fu_70375_p6 = data_3178_V_read3248_rewind_reg_70371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3179_V_read3249_phi_phi_fu_112024_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3179_V_read3249_phi_phi_fu_112024_p4 = ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_70389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3179_V_read3249_phi_phi_fu_112024_p4 = data_3179_V_read.read();
        } else {
            ap_phi_mux_data_3179_V_read3249_phi_phi_fu_112024_p4 = ap_phi_reg_pp0_iter0_data_3179_V_read3249_phi_reg_112020.read();
        }
    } else {
        ap_phi_mux_data_3179_V_read3249_phi_phi_fu_112024_p4 = ap_phi_reg_pp0_iter0_data_3179_V_read3249_phi_reg_112020.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_70389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_70389_p6 = data_3179_V_read3249_phi_reg_112020.read();
    } else {
        ap_phi_mux_data_3179_V_read3249_rewind_phi_fu_70389_p6 = data_3179_V_read3249_rewind_reg_70385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_317_V_read387_phi_phi_fu_74818_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_317_V_read387_phi_phi_fu_74818_p4 = ap_phi_mux_data_317_V_read387_rewind_phi_fu_30321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_317_V_read387_phi_phi_fu_74818_p4 = data_317_V_read.read();
        } else {
            ap_phi_mux_data_317_V_read387_phi_phi_fu_74818_p4 = ap_phi_reg_pp0_iter0_data_317_V_read387_phi_reg_74814.read();
        }
    } else {
        ap_phi_mux_data_317_V_read387_phi_phi_fu_74818_p4 = ap_phi_reg_pp0_iter0_data_317_V_read387_phi_reg_74814.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_317_V_read387_rewind_phi_fu_30321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_317_V_read387_rewind_phi_fu_30321_p6 = data_317_V_read387_phi_reg_74814.read();
    } else {
        ap_phi_mux_data_317_V_read387_rewind_phi_fu_30321_p6 = data_317_V_read387_rewind_reg_30317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3180_V_read3250_phi_phi_fu_112037_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3180_V_read3250_phi_phi_fu_112037_p4 = ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_70403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3180_V_read3250_phi_phi_fu_112037_p4 = data_3180_V_read.read();
        } else {
            ap_phi_mux_data_3180_V_read3250_phi_phi_fu_112037_p4 = ap_phi_reg_pp0_iter0_data_3180_V_read3250_phi_reg_112033.read();
        }
    } else {
        ap_phi_mux_data_3180_V_read3250_phi_phi_fu_112037_p4 = ap_phi_reg_pp0_iter0_data_3180_V_read3250_phi_reg_112033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_70403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_70403_p6 = data_3180_V_read3250_phi_reg_112033.read();
    } else {
        ap_phi_mux_data_3180_V_read3250_rewind_phi_fu_70403_p6 = data_3180_V_read3250_rewind_reg_70399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3181_V_read3251_phi_phi_fu_112050_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3181_V_read3251_phi_phi_fu_112050_p4 = ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_70417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3181_V_read3251_phi_phi_fu_112050_p4 = data_3181_V_read.read();
        } else {
            ap_phi_mux_data_3181_V_read3251_phi_phi_fu_112050_p4 = ap_phi_reg_pp0_iter0_data_3181_V_read3251_phi_reg_112046.read();
        }
    } else {
        ap_phi_mux_data_3181_V_read3251_phi_phi_fu_112050_p4 = ap_phi_reg_pp0_iter0_data_3181_V_read3251_phi_reg_112046.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_70417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_70417_p6 = data_3181_V_read3251_phi_reg_112046.read();
    } else {
        ap_phi_mux_data_3181_V_read3251_rewind_phi_fu_70417_p6 = data_3181_V_read3251_rewind_reg_70413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3182_V_read3252_phi_phi_fu_112063_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3182_V_read3252_phi_phi_fu_112063_p4 = ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_70431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3182_V_read3252_phi_phi_fu_112063_p4 = data_3182_V_read.read();
        } else {
            ap_phi_mux_data_3182_V_read3252_phi_phi_fu_112063_p4 = ap_phi_reg_pp0_iter0_data_3182_V_read3252_phi_reg_112059.read();
        }
    } else {
        ap_phi_mux_data_3182_V_read3252_phi_phi_fu_112063_p4 = ap_phi_reg_pp0_iter0_data_3182_V_read3252_phi_reg_112059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_70431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_70431_p6 = data_3182_V_read3252_phi_reg_112059.read();
    } else {
        ap_phi_mux_data_3182_V_read3252_rewind_phi_fu_70431_p6 = data_3182_V_read3252_rewind_reg_70427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3183_V_read3253_phi_phi_fu_112076_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3183_V_read3253_phi_phi_fu_112076_p4 = ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_70445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3183_V_read3253_phi_phi_fu_112076_p4 = data_3183_V_read.read();
        } else {
            ap_phi_mux_data_3183_V_read3253_phi_phi_fu_112076_p4 = ap_phi_reg_pp0_iter0_data_3183_V_read3253_phi_reg_112072.read();
        }
    } else {
        ap_phi_mux_data_3183_V_read3253_phi_phi_fu_112076_p4 = ap_phi_reg_pp0_iter0_data_3183_V_read3253_phi_reg_112072.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_70445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_70445_p6 = data_3183_V_read3253_phi_reg_112072.read();
    } else {
        ap_phi_mux_data_3183_V_read3253_rewind_phi_fu_70445_p6 = data_3183_V_read3253_rewind_reg_70441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3184_V_read3254_phi_phi_fu_112089_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3184_V_read3254_phi_phi_fu_112089_p4 = ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_70459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3184_V_read3254_phi_phi_fu_112089_p4 = data_3184_V_read.read();
        } else {
            ap_phi_mux_data_3184_V_read3254_phi_phi_fu_112089_p4 = ap_phi_reg_pp0_iter0_data_3184_V_read3254_phi_reg_112085.read();
        }
    } else {
        ap_phi_mux_data_3184_V_read3254_phi_phi_fu_112089_p4 = ap_phi_reg_pp0_iter0_data_3184_V_read3254_phi_reg_112085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_70459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_70459_p6 = data_3184_V_read3254_phi_reg_112085.read();
    } else {
        ap_phi_mux_data_3184_V_read3254_rewind_phi_fu_70459_p6 = data_3184_V_read3254_rewind_reg_70455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3185_V_read3255_phi_phi_fu_112102_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3185_V_read3255_phi_phi_fu_112102_p4 = ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_70473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3185_V_read3255_phi_phi_fu_112102_p4 = data_3185_V_read.read();
        } else {
            ap_phi_mux_data_3185_V_read3255_phi_phi_fu_112102_p4 = ap_phi_reg_pp0_iter0_data_3185_V_read3255_phi_reg_112098.read();
        }
    } else {
        ap_phi_mux_data_3185_V_read3255_phi_phi_fu_112102_p4 = ap_phi_reg_pp0_iter0_data_3185_V_read3255_phi_reg_112098.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_70473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_70473_p6 = data_3185_V_read3255_phi_reg_112098.read();
    } else {
        ap_phi_mux_data_3185_V_read3255_rewind_phi_fu_70473_p6 = data_3185_V_read3255_rewind_reg_70469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3186_V_read3256_phi_phi_fu_112115_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3186_V_read3256_phi_phi_fu_112115_p4 = ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_70487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3186_V_read3256_phi_phi_fu_112115_p4 = data_3186_V_read.read();
        } else {
            ap_phi_mux_data_3186_V_read3256_phi_phi_fu_112115_p4 = ap_phi_reg_pp0_iter0_data_3186_V_read3256_phi_reg_112111.read();
        }
    } else {
        ap_phi_mux_data_3186_V_read3256_phi_phi_fu_112115_p4 = ap_phi_reg_pp0_iter0_data_3186_V_read3256_phi_reg_112111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_70487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_70487_p6 = data_3186_V_read3256_phi_reg_112111.read();
    } else {
        ap_phi_mux_data_3186_V_read3256_rewind_phi_fu_70487_p6 = data_3186_V_read3256_rewind_reg_70483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3187_V_read3257_phi_phi_fu_112128_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3187_V_read3257_phi_phi_fu_112128_p4 = ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_70501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3187_V_read3257_phi_phi_fu_112128_p4 = data_3187_V_read.read();
        } else {
            ap_phi_mux_data_3187_V_read3257_phi_phi_fu_112128_p4 = ap_phi_reg_pp0_iter0_data_3187_V_read3257_phi_reg_112124.read();
        }
    } else {
        ap_phi_mux_data_3187_V_read3257_phi_phi_fu_112128_p4 = ap_phi_reg_pp0_iter0_data_3187_V_read3257_phi_reg_112124.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_70501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_70501_p6 = data_3187_V_read3257_phi_reg_112124.read();
    } else {
        ap_phi_mux_data_3187_V_read3257_rewind_phi_fu_70501_p6 = data_3187_V_read3257_rewind_reg_70497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3188_V_read3258_phi_phi_fu_112141_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3188_V_read3258_phi_phi_fu_112141_p4 = ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_70515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3188_V_read3258_phi_phi_fu_112141_p4 = data_3188_V_read.read();
        } else {
            ap_phi_mux_data_3188_V_read3258_phi_phi_fu_112141_p4 = ap_phi_reg_pp0_iter0_data_3188_V_read3258_phi_reg_112137.read();
        }
    } else {
        ap_phi_mux_data_3188_V_read3258_phi_phi_fu_112141_p4 = ap_phi_reg_pp0_iter0_data_3188_V_read3258_phi_reg_112137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_70515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_70515_p6 = data_3188_V_read3258_phi_reg_112137.read();
    } else {
        ap_phi_mux_data_3188_V_read3258_rewind_phi_fu_70515_p6 = data_3188_V_read3258_rewind_reg_70511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3189_V_read3259_phi_phi_fu_112154_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3189_V_read3259_phi_phi_fu_112154_p4 = ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_70529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3189_V_read3259_phi_phi_fu_112154_p4 = data_3189_V_read.read();
        } else {
            ap_phi_mux_data_3189_V_read3259_phi_phi_fu_112154_p4 = ap_phi_reg_pp0_iter0_data_3189_V_read3259_phi_reg_112150.read();
        }
    } else {
        ap_phi_mux_data_3189_V_read3259_phi_phi_fu_112154_p4 = ap_phi_reg_pp0_iter0_data_3189_V_read3259_phi_reg_112150.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_70529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_70529_p6 = data_3189_V_read3259_phi_reg_112150.read();
    } else {
        ap_phi_mux_data_3189_V_read3259_rewind_phi_fu_70529_p6 = data_3189_V_read3259_rewind_reg_70525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_318_V_read388_phi_phi_fu_74831_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_318_V_read388_phi_phi_fu_74831_p4 = ap_phi_mux_data_318_V_read388_rewind_phi_fu_30335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_318_V_read388_phi_phi_fu_74831_p4 = data_318_V_read.read();
        } else {
            ap_phi_mux_data_318_V_read388_phi_phi_fu_74831_p4 = ap_phi_reg_pp0_iter0_data_318_V_read388_phi_reg_74827.read();
        }
    } else {
        ap_phi_mux_data_318_V_read388_phi_phi_fu_74831_p4 = ap_phi_reg_pp0_iter0_data_318_V_read388_phi_reg_74827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_318_V_read388_rewind_phi_fu_30335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_318_V_read388_rewind_phi_fu_30335_p6 = data_318_V_read388_phi_reg_74827.read();
    } else {
        ap_phi_mux_data_318_V_read388_rewind_phi_fu_30335_p6 = data_318_V_read388_rewind_reg_30331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3190_V_read3260_phi_phi_fu_112167_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3190_V_read3260_phi_phi_fu_112167_p4 = ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_70543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3190_V_read3260_phi_phi_fu_112167_p4 = data_3190_V_read.read();
        } else {
            ap_phi_mux_data_3190_V_read3260_phi_phi_fu_112167_p4 = ap_phi_reg_pp0_iter0_data_3190_V_read3260_phi_reg_112163.read();
        }
    } else {
        ap_phi_mux_data_3190_V_read3260_phi_phi_fu_112167_p4 = ap_phi_reg_pp0_iter0_data_3190_V_read3260_phi_reg_112163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_70543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_70543_p6 = data_3190_V_read3260_phi_reg_112163.read();
    } else {
        ap_phi_mux_data_3190_V_read3260_rewind_phi_fu_70543_p6 = data_3190_V_read3260_rewind_reg_70539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3191_V_read3261_phi_phi_fu_112180_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3191_V_read3261_phi_phi_fu_112180_p4 = ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_70557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3191_V_read3261_phi_phi_fu_112180_p4 = data_3191_V_read.read();
        } else {
            ap_phi_mux_data_3191_V_read3261_phi_phi_fu_112180_p4 = ap_phi_reg_pp0_iter0_data_3191_V_read3261_phi_reg_112176.read();
        }
    } else {
        ap_phi_mux_data_3191_V_read3261_phi_phi_fu_112180_p4 = ap_phi_reg_pp0_iter0_data_3191_V_read3261_phi_reg_112176.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_70557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_70557_p6 = data_3191_V_read3261_phi_reg_112176.read();
    } else {
        ap_phi_mux_data_3191_V_read3261_rewind_phi_fu_70557_p6 = data_3191_V_read3261_rewind_reg_70553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3192_V_read3262_phi_phi_fu_112193_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3192_V_read3262_phi_phi_fu_112193_p4 = ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_70571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3192_V_read3262_phi_phi_fu_112193_p4 = data_3192_V_read.read();
        } else {
            ap_phi_mux_data_3192_V_read3262_phi_phi_fu_112193_p4 = ap_phi_reg_pp0_iter0_data_3192_V_read3262_phi_reg_112189.read();
        }
    } else {
        ap_phi_mux_data_3192_V_read3262_phi_phi_fu_112193_p4 = ap_phi_reg_pp0_iter0_data_3192_V_read3262_phi_reg_112189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_70571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_70571_p6 = data_3192_V_read3262_phi_reg_112189.read();
    } else {
        ap_phi_mux_data_3192_V_read3262_rewind_phi_fu_70571_p6 = data_3192_V_read3262_rewind_reg_70567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3193_V_read3263_phi_phi_fu_112206_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3193_V_read3263_phi_phi_fu_112206_p4 = ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_70585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3193_V_read3263_phi_phi_fu_112206_p4 = data_3193_V_read.read();
        } else {
            ap_phi_mux_data_3193_V_read3263_phi_phi_fu_112206_p4 = ap_phi_reg_pp0_iter0_data_3193_V_read3263_phi_reg_112202.read();
        }
    } else {
        ap_phi_mux_data_3193_V_read3263_phi_phi_fu_112206_p4 = ap_phi_reg_pp0_iter0_data_3193_V_read3263_phi_reg_112202.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_70585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_70585_p6 = data_3193_V_read3263_phi_reg_112202.read();
    } else {
        ap_phi_mux_data_3193_V_read3263_rewind_phi_fu_70585_p6 = data_3193_V_read3263_rewind_reg_70581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3194_V_read3264_phi_phi_fu_112219_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3194_V_read3264_phi_phi_fu_112219_p4 = ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_70599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3194_V_read3264_phi_phi_fu_112219_p4 = data_3194_V_read.read();
        } else {
            ap_phi_mux_data_3194_V_read3264_phi_phi_fu_112219_p4 = ap_phi_reg_pp0_iter0_data_3194_V_read3264_phi_reg_112215.read();
        }
    } else {
        ap_phi_mux_data_3194_V_read3264_phi_phi_fu_112219_p4 = ap_phi_reg_pp0_iter0_data_3194_V_read3264_phi_reg_112215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_70599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_70599_p6 = data_3194_V_read3264_phi_reg_112215.read();
    } else {
        ap_phi_mux_data_3194_V_read3264_rewind_phi_fu_70599_p6 = data_3194_V_read3264_rewind_reg_70595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3195_V_read3265_phi_phi_fu_112232_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3195_V_read3265_phi_phi_fu_112232_p4 = ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_70613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3195_V_read3265_phi_phi_fu_112232_p4 = data_3195_V_read.read();
        } else {
            ap_phi_mux_data_3195_V_read3265_phi_phi_fu_112232_p4 = ap_phi_reg_pp0_iter0_data_3195_V_read3265_phi_reg_112228.read();
        }
    } else {
        ap_phi_mux_data_3195_V_read3265_phi_phi_fu_112232_p4 = ap_phi_reg_pp0_iter0_data_3195_V_read3265_phi_reg_112228.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_70613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_70613_p6 = data_3195_V_read3265_phi_reg_112228.read();
    } else {
        ap_phi_mux_data_3195_V_read3265_rewind_phi_fu_70613_p6 = data_3195_V_read3265_rewind_reg_70609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3196_V_read3266_phi_phi_fu_112245_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3196_V_read3266_phi_phi_fu_112245_p4 = ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_70627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3196_V_read3266_phi_phi_fu_112245_p4 = data_3196_V_read.read();
        } else {
            ap_phi_mux_data_3196_V_read3266_phi_phi_fu_112245_p4 = ap_phi_reg_pp0_iter0_data_3196_V_read3266_phi_reg_112241.read();
        }
    } else {
        ap_phi_mux_data_3196_V_read3266_phi_phi_fu_112245_p4 = ap_phi_reg_pp0_iter0_data_3196_V_read3266_phi_reg_112241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_70627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_70627_p6 = data_3196_V_read3266_phi_reg_112241.read();
    } else {
        ap_phi_mux_data_3196_V_read3266_rewind_phi_fu_70627_p6 = data_3196_V_read3266_rewind_reg_70623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3197_V_read3267_phi_phi_fu_112258_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3197_V_read3267_phi_phi_fu_112258_p4 = ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_70641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3197_V_read3267_phi_phi_fu_112258_p4 = data_3197_V_read.read();
        } else {
            ap_phi_mux_data_3197_V_read3267_phi_phi_fu_112258_p4 = ap_phi_reg_pp0_iter0_data_3197_V_read3267_phi_reg_112254.read();
        }
    } else {
        ap_phi_mux_data_3197_V_read3267_phi_phi_fu_112258_p4 = ap_phi_reg_pp0_iter0_data_3197_V_read3267_phi_reg_112254.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_70641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_70641_p6 = data_3197_V_read3267_phi_reg_112254.read();
    } else {
        ap_phi_mux_data_3197_V_read3267_rewind_phi_fu_70641_p6 = data_3197_V_read3267_rewind_reg_70637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3198_V_read3268_phi_phi_fu_112271_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3198_V_read3268_phi_phi_fu_112271_p4 = ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_70655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3198_V_read3268_phi_phi_fu_112271_p4 = data_3198_V_read.read();
        } else {
            ap_phi_mux_data_3198_V_read3268_phi_phi_fu_112271_p4 = ap_phi_reg_pp0_iter0_data_3198_V_read3268_phi_reg_112267.read();
        }
    } else {
        ap_phi_mux_data_3198_V_read3268_phi_phi_fu_112271_p4 = ap_phi_reg_pp0_iter0_data_3198_V_read3268_phi_reg_112267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_70655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_70655_p6 = data_3198_V_read3268_phi_reg_112267.read();
    } else {
        ap_phi_mux_data_3198_V_read3268_rewind_phi_fu_70655_p6 = data_3198_V_read3268_rewind_reg_70651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3199_V_read3269_phi_phi_fu_112284_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3199_V_read3269_phi_phi_fu_112284_p4 = ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_70669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3199_V_read3269_phi_phi_fu_112284_p4 = data_3199_V_read.read();
        } else {
            ap_phi_mux_data_3199_V_read3269_phi_phi_fu_112284_p4 = ap_phi_reg_pp0_iter0_data_3199_V_read3269_phi_reg_112280.read();
        }
    } else {
        ap_phi_mux_data_3199_V_read3269_phi_phi_fu_112284_p4 = ap_phi_reg_pp0_iter0_data_3199_V_read3269_phi_reg_112280.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_70669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_70669_p6 = data_3199_V_read3269_phi_reg_112280.read();
    } else {
        ap_phi_mux_data_3199_V_read3269_rewind_phi_fu_70669_p6 = data_3199_V_read3269_rewind_reg_70665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_319_V_read389_phi_phi_fu_74844_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_319_V_read389_phi_phi_fu_74844_p4 = ap_phi_mux_data_319_V_read389_rewind_phi_fu_30349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_319_V_read389_phi_phi_fu_74844_p4 = data_319_V_read.read();
        } else {
            ap_phi_mux_data_319_V_read389_phi_phi_fu_74844_p4 = ap_phi_reg_pp0_iter0_data_319_V_read389_phi_reg_74840.read();
        }
    } else {
        ap_phi_mux_data_319_V_read389_phi_phi_fu_74844_p4 = ap_phi_reg_pp0_iter0_data_319_V_read389_phi_reg_74840.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_319_V_read389_rewind_phi_fu_30349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_319_V_read389_rewind_phi_fu_30349_p6 = data_319_V_read389_phi_reg_74840.read();
    } else {
        ap_phi_mux_data_319_V_read389_rewind_phi_fu_30349_p6 = data_319_V_read389_rewind_reg_30345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_31_V_read101_phi_phi_fu_71100_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_31_V_read101_phi_phi_fu_71100_p4 = ap_phi_mux_data_31_V_read101_rewind_phi_fu_26317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_31_V_read101_phi_phi_fu_71100_p4 = data_31_V_read.read();
        } else {
            ap_phi_mux_data_31_V_read101_phi_phi_fu_71100_p4 = ap_phi_reg_pp0_iter0_data_31_V_read101_phi_reg_71096.read();
        }
    } else {
        ap_phi_mux_data_31_V_read101_phi_phi_fu_71100_p4 = ap_phi_reg_pp0_iter0_data_31_V_read101_phi_reg_71096.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_31_V_read101_rewind_phi_fu_26317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_31_V_read101_rewind_phi_fu_26317_p6 = data_31_V_read101_phi_reg_71096.read();
    } else {
        ap_phi_mux_data_31_V_read101_rewind_phi_fu_26317_p6 = data_31_V_read101_rewind_reg_26313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_320_V_read390_phi_phi_fu_74857_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_320_V_read390_phi_phi_fu_74857_p4 = ap_phi_mux_data_320_V_read390_rewind_phi_fu_30363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_320_V_read390_phi_phi_fu_74857_p4 = data_320_V_read.read();
        } else {
            ap_phi_mux_data_320_V_read390_phi_phi_fu_74857_p4 = ap_phi_reg_pp0_iter0_data_320_V_read390_phi_reg_74853.read();
        }
    } else {
        ap_phi_mux_data_320_V_read390_phi_phi_fu_74857_p4 = ap_phi_reg_pp0_iter0_data_320_V_read390_phi_reg_74853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_320_V_read390_rewind_phi_fu_30363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_320_V_read390_rewind_phi_fu_30363_p6 = data_320_V_read390_phi_reg_74853.read();
    } else {
        ap_phi_mux_data_320_V_read390_rewind_phi_fu_30363_p6 = data_320_V_read390_rewind_reg_30359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_321_V_read391_phi_phi_fu_74870_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_321_V_read391_phi_phi_fu_74870_p4 = ap_phi_mux_data_321_V_read391_rewind_phi_fu_30377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_321_V_read391_phi_phi_fu_74870_p4 = data_321_V_read.read();
        } else {
            ap_phi_mux_data_321_V_read391_phi_phi_fu_74870_p4 = ap_phi_reg_pp0_iter0_data_321_V_read391_phi_reg_74866.read();
        }
    } else {
        ap_phi_mux_data_321_V_read391_phi_phi_fu_74870_p4 = ap_phi_reg_pp0_iter0_data_321_V_read391_phi_reg_74866.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_321_V_read391_rewind_phi_fu_30377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_321_V_read391_rewind_phi_fu_30377_p6 = data_321_V_read391_phi_reg_74866.read();
    } else {
        ap_phi_mux_data_321_V_read391_rewind_phi_fu_30377_p6 = data_321_V_read391_rewind_reg_30373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_322_V_read392_phi_phi_fu_74883_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_322_V_read392_phi_phi_fu_74883_p4 = ap_phi_mux_data_322_V_read392_rewind_phi_fu_30391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_322_V_read392_phi_phi_fu_74883_p4 = data_322_V_read.read();
        } else {
            ap_phi_mux_data_322_V_read392_phi_phi_fu_74883_p4 = ap_phi_reg_pp0_iter0_data_322_V_read392_phi_reg_74879.read();
        }
    } else {
        ap_phi_mux_data_322_V_read392_phi_phi_fu_74883_p4 = ap_phi_reg_pp0_iter0_data_322_V_read392_phi_reg_74879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_322_V_read392_rewind_phi_fu_30391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_322_V_read392_rewind_phi_fu_30391_p6 = data_322_V_read392_phi_reg_74879.read();
    } else {
        ap_phi_mux_data_322_V_read392_rewind_phi_fu_30391_p6 = data_322_V_read392_rewind_reg_30387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_323_V_read393_phi_phi_fu_74896_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_323_V_read393_phi_phi_fu_74896_p4 = ap_phi_mux_data_323_V_read393_rewind_phi_fu_30405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_323_V_read393_phi_phi_fu_74896_p4 = data_323_V_read.read();
        } else {
            ap_phi_mux_data_323_V_read393_phi_phi_fu_74896_p4 = ap_phi_reg_pp0_iter0_data_323_V_read393_phi_reg_74892.read();
        }
    } else {
        ap_phi_mux_data_323_V_read393_phi_phi_fu_74896_p4 = ap_phi_reg_pp0_iter0_data_323_V_read393_phi_reg_74892.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_323_V_read393_rewind_phi_fu_30405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_323_V_read393_rewind_phi_fu_30405_p6 = data_323_V_read393_phi_reg_74892.read();
    } else {
        ap_phi_mux_data_323_V_read393_rewind_phi_fu_30405_p6 = data_323_V_read393_rewind_reg_30401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_324_V_read394_phi_phi_fu_74909_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_324_V_read394_phi_phi_fu_74909_p4 = ap_phi_mux_data_324_V_read394_rewind_phi_fu_30419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_324_V_read394_phi_phi_fu_74909_p4 = data_324_V_read.read();
        } else {
            ap_phi_mux_data_324_V_read394_phi_phi_fu_74909_p4 = ap_phi_reg_pp0_iter0_data_324_V_read394_phi_reg_74905.read();
        }
    } else {
        ap_phi_mux_data_324_V_read394_phi_phi_fu_74909_p4 = ap_phi_reg_pp0_iter0_data_324_V_read394_phi_reg_74905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_324_V_read394_rewind_phi_fu_30419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_324_V_read394_rewind_phi_fu_30419_p6 = data_324_V_read394_phi_reg_74905.read();
    } else {
        ap_phi_mux_data_324_V_read394_rewind_phi_fu_30419_p6 = data_324_V_read394_rewind_reg_30415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_325_V_read395_phi_phi_fu_74922_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_325_V_read395_phi_phi_fu_74922_p4 = ap_phi_mux_data_325_V_read395_rewind_phi_fu_30433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_325_V_read395_phi_phi_fu_74922_p4 = data_325_V_read.read();
        } else {
            ap_phi_mux_data_325_V_read395_phi_phi_fu_74922_p4 = ap_phi_reg_pp0_iter0_data_325_V_read395_phi_reg_74918.read();
        }
    } else {
        ap_phi_mux_data_325_V_read395_phi_phi_fu_74922_p4 = ap_phi_reg_pp0_iter0_data_325_V_read395_phi_reg_74918.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_325_V_read395_rewind_phi_fu_30433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_325_V_read395_rewind_phi_fu_30433_p6 = data_325_V_read395_phi_reg_74918.read();
    } else {
        ap_phi_mux_data_325_V_read395_rewind_phi_fu_30433_p6 = data_325_V_read395_rewind_reg_30429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_326_V_read396_phi_phi_fu_74935_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_326_V_read396_phi_phi_fu_74935_p4 = ap_phi_mux_data_326_V_read396_rewind_phi_fu_30447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_326_V_read396_phi_phi_fu_74935_p4 = data_326_V_read.read();
        } else {
            ap_phi_mux_data_326_V_read396_phi_phi_fu_74935_p4 = ap_phi_reg_pp0_iter0_data_326_V_read396_phi_reg_74931.read();
        }
    } else {
        ap_phi_mux_data_326_V_read396_phi_phi_fu_74935_p4 = ap_phi_reg_pp0_iter0_data_326_V_read396_phi_reg_74931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_326_V_read396_rewind_phi_fu_30447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_326_V_read396_rewind_phi_fu_30447_p6 = data_326_V_read396_phi_reg_74931.read();
    } else {
        ap_phi_mux_data_326_V_read396_rewind_phi_fu_30447_p6 = data_326_V_read396_rewind_reg_30443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_327_V_read397_phi_phi_fu_74948_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_327_V_read397_phi_phi_fu_74948_p4 = ap_phi_mux_data_327_V_read397_rewind_phi_fu_30461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_327_V_read397_phi_phi_fu_74948_p4 = data_327_V_read.read();
        } else {
            ap_phi_mux_data_327_V_read397_phi_phi_fu_74948_p4 = ap_phi_reg_pp0_iter0_data_327_V_read397_phi_reg_74944.read();
        }
    } else {
        ap_phi_mux_data_327_V_read397_phi_phi_fu_74948_p4 = ap_phi_reg_pp0_iter0_data_327_V_read397_phi_reg_74944.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_327_V_read397_rewind_phi_fu_30461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_327_V_read397_rewind_phi_fu_30461_p6 = data_327_V_read397_phi_reg_74944.read();
    } else {
        ap_phi_mux_data_327_V_read397_rewind_phi_fu_30461_p6 = data_327_V_read397_rewind_reg_30457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_328_V_read398_phi_phi_fu_74961_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_328_V_read398_phi_phi_fu_74961_p4 = ap_phi_mux_data_328_V_read398_rewind_phi_fu_30475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_328_V_read398_phi_phi_fu_74961_p4 = data_328_V_read.read();
        } else {
            ap_phi_mux_data_328_V_read398_phi_phi_fu_74961_p4 = ap_phi_reg_pp0_iter0_data_328_V_read398_phi_reg_74957.read();
        }
    } else {
        ap_phi_mux_data_328_V_read398_phi_phi_fu_74961_p4 = ap_phi_reg_pp0_iter0_data_328_V_read398_phi_reg_74957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_328_V_read398_rewind_phi_fu_30475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_328_V_read398_rewind_phi_fu_30475_p6 = data_328_V_read398_phi_reg_74957.read();
    } else {
        ap_phi_mux_data_328_V_read398_rewind_phi_fu_30475_p6 = data_328_V_read398_rewind_reg_30471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_329_V_read399_phi_phi_fu_74974_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_329_V_read399_phi_phi_fu_74974_p4 = ap_phi_mux_data_329_V_read399_rewind_phi_fu_30489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_329_V_read399_phi_phi_fu_74974_p4 = data_329_V_read.read();
        } else {
            ap_phi_mux_data_329_V_read399_phi_phi_fu_74974_p4 = ap_phi_reg_pp0_iter0_data_329_V_read399_phi_reg_74970.read();
        }
    } else {
        ap_phi_mux_data_329_V_read399_phi_phi_fu_74974_p4 = ap_phi_reg_pp0_iter0_data_329_V_read399_phi_reg_74970.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_329_V_read399_rewind_phi_fu_30489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_329_V_read399_rewind_phi_fu_30489_p6 = data_329_V_read399_phi_reg_74970.read();
    } else {
        ap_phi_mux_data_329_V_read399_rewind_phi_fu_30489_p6 = data_329_V_read399_rewind_reg_30485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_32_V_read102_phi_phi_fu_71113_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_32_V_read102_phi_phi_fu_71113_p4 = ap_phi_mux_data_32_V_read102_rewind_phi_fu_26331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_32_V_read102_phi_phi_fu_71113_p4 = data_32_V_read.read();
        } else {
            ap_phi_mux_data_32_V_read102_phi_phi_fu_71113_p4 = ap_phi_reg_pp0_iter0_data_32_V_read102_phi_reg_71109.read();
        }
    } else {
        ap_phi_mux_data_32_V_read102_phi_phi_fu_71113_p4 = ap_phi_reg_pp0_iter0_data_32_V_read102_phi_reg_71109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_32_V_read102_rewind_phi_fu_26331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_32_V_read102_rewind_phi_fu_26331_p6 = data_32_V_read102_phi_reg_71109.read();
    } else {
        ap_phi_mux_data_32_V_read102_rewind_phi_fu_26331_p6 = data_32_V_read102_rewind_reg_26327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_330_V_read400_phi_phi_fu_74987_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_330_V_read400_phi_phi_fu_74987_p4 = ap_phi_mux_data_330_V_read400_rewind_phi_fu_30503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_330_V_read400_phi_phi_fu_74987_p4 = data_330_V_read.read();
        } else {
            ap_phi_mux_data_330_V_read400_phi_phi_fu_74987_p4 = ap_phi_reg_pp0_iter0_data_330_V_read400_phi_reg_74983.read();
        }
    } else {
        ap_phi_mux_data_330_V_read400_phi_phi_fu_74987_p4 = ap_phi_reg_pp0_iter0_data_330_V_read400_phi_reg_74983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_330_V_read400_rewind_phi_fu_30503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_330_V_read400_rewind_phi_fu_30503_p6 = data_330_V_read400_phi_reg_74983.read();
    } else {
        ap_phi_mux_data_330_V_read400_rewind_phi_fu_30503_p6 = data_330_V_read400_rewind_reg_30499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_331_V_read401_phi_phi_fu_75000_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_331_V_read401_phi_phi_fu_75000_p4 = ap_phi_mux_data_331_V_read401_rewind_phi_fu_30517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_331_V_read401_phi_phi_fu_75000_p4 = data_331_V_read.read();
        } else {
            ap_phi_mux_data_331_V_read401_phi_phi_fu_75000_p4 = ap_phi_reg_pp0_iter0_data_331_V_read401_phi_reg_74996.read();
        }
    } else {
        ap_phi_mux_data_331_V_read401_phi_phi_fu_75000_p4 = ap_phi_reg_pp0_iter0_data_331_V_read401_phi_reg_74996.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_331_V_read401_rewind_phi_fu_30517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_331_V_read401_rewind_phi_fu_30517_p6 = data_331_V_read401_phi_reg_74996.read();
    } else {
        ap_phi_mux_data_331_V_read401_rewind_phi_fu_30517_p6 = data_331_V_read401_rewind_reg_30513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_332_V_read402_phi_phi_fu_75013_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_332_V_read402_phi_phi_fu_75013_p4 = ap_phi_mux_data_332_V_read402_rewind_phi_fu_30531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_332_V_read402_phi_phi_fu_75013_p4 = data_332_V_read.read();
        } else {
            ap_phi_mux_data_332_V_read402_phi_phi_fu_75013_p4 = ap_phi_reg_pp0_iter0_data_332_V_read402_phi_reg_75009.read();
        }
    } else {
        ap_phi_mux_data_332_V_read402_phi_phi_fu_75013_p4 = ap_phi_reg_pp0_iter0_data_332_V_read402_phi_reg_75009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_332_V_read402_rewind_phi_fu_30531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_332_V_read402_rewind_phi_fu_30531_p6 = data_332_V_read402_phi_reg_75009.read();
    } else {
        ap_phi_mux_data_332_V_read402_rewind_phi_fu_30531_p6 = data_332_V_read402_rewind_reg_30527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_333_V_read403_phi_phi_fu_75026_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_333_V_read403_phi_phi_fu_75026_p4 = ap_phi_mux_data_333_V_read403_rewind_phi_fu_30545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_333_V_read403_phi_phi_fu_75026_p4 = data_333_V_read.read();
        } else {
            ap_phi_mux_data_333_V_read403_phi_phi_fu_75026_p4 = ap_phi_reg_pp0_iter0_data_333_V_read403_phi_reg_75022.read();
        }
    } else {
        ap_phi_mux_data_333_V_read403_phi_phi_fu_75026_p4 = ap_phi_reg_pp0_iter0_data_333_V_read403_phi_reg_75022.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_333_V_read403_rewind_phi_fu_30545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_333_V_read403_rewind_phi_fu_30545_p6 = data_333_V_read403_phi_reg_75022.read();
    } else {
        ap_phi_mux_data_333_V_read403_rewind_phi_fu_30545_p6 = data_333_V_read403_rewind_reg_30541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_334_V_read404_phi_phi_fu_75039_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_334_V_read404_phi_phi_fu_75039_p4 = ap_phi_mux_data_334_V_read404_rewind_phi_fu_30559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_334_V_read404_phi_phi_fu_75039_p4 = data_334_V_read.read();
        } else {
            ap_phi_mux_data_334_V_read404_phi_phi_fu_75039_p4 = ap_phi_reg_pp0_iter0_data_334_V_read404_phi_reg_75035.read();
        }
    } else {
        ap_phi_mux_data_334_V_read404_phi_phi_fu_75039_p4 = ap_phi_reg_pp0_iter0_data_334_V_read404_phi_reg_75035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_334_V_read404_rewind_phi_fu_30559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_334_V_read404_rewind_phi_fu_30559_p6 = data_334_V_read404_phi_reg_75035.read();
    } else {
        ap_phi_mux_data_334_V_read404_rewind_phi_fu_30559_p6 = data_334_V_read404_rewind_reg_30555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_335_V_read405_phi_phi_fu_75052_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_335_V_read405_phi_phi_fu_75052_p4 = ap_phi_mux_data_335_V_read405_rewind_phi_fu_30573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_335_V_read405_phi_phi_fu_75052_p4 = data_335_V_read.read();
        } else {
            ap_phi_mux_data_335_V_read405_phi_phi_fu_75052_p4 = ap_phi_reg_pp0_iter0_data_335_V_read405_phi_reg_75048.read();
        }
    } else {
        ap_phi_mux_data_335_V_read405_phi_phi_fu_75052_p4 = ap_phi_reg_pp0_iter0_data_335_V_read405_phi_reg_75048.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_335_V_read405_rewind_phi_fu_30573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_335_V_read405_rewind_phi_fu_30573_p6 = data_335_V_read405_phi_reg_75048.read();
    } else {
        ap_phi_mux_data_335_V_read405_rewind_phi_fu_30573_p6 = data_335_V_read405_rewind_reg_30569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_336_V_read406_phi_phi_fu_75065_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_336_V_read406_phi_phi_fu_75065_p4 = ap_phi_mux_data_336_V_read406_rewind_phi_fu_30587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_336_V_read406_phi_phi_fu_75065_p4 = data_336_V_read.read();
        } else {
            ap_phi_mux_data_336_V_read406_phi_phi_fu_75065_p4 = ap_phi_reg_pp0_iter0_data_336_V_read406_phi_reg_75061.read();
        }
    } else {
        ap_phi_mux_data_336_V_read406_phi_phi_fu_75065_p4 = ap_phi_reg_pp0_iter0_data_336_V_read406_phi_reg_75061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_336_V_read406_rewind_phi_fu_30587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_336_V_read406_rewind_phi_fu_30587_p6 = data_336_V_read406_phi_reg_75061.read();
    } else {
        ap_phi_mux_data_336_V_read406_rewind_phi_fu_30587_p6 = data_336_V_read406_rewind_reg_30583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_337_V_read407_phi_phi_fu_75078_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_337_V_read407_phi_phi_fu_75078_p4 = ap_phi_mux_data_337_V_read407_rewind_phi_fu_30601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_337_V_read407_phi_phi_fu_75078_p4 = data_337_V_read.read();
        } else {
            ap_phi_mux_data_337_V_read407_phi_phi_fu_75078_p4 = ap_phi_reg_pp0_iter0_data_337_V_read407_phi_reg_75074.read();
        }
    } else {
        ap_phi_mux_data_337_V_read407_phi_phi_fu_75078_p4 = ap_phi_reg_pp0_iter0_data_337_V_read407_phi_reg_75074.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_337_V_read407_rewind_phi_fu_30601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_337_V_read407_rewind_phi_fu_30601_p6 = data_337_V_read407_phi_reg_75074.read();
    } else {
        ap_phi_mux_data_337_V_read407_rewind_phi_fu_30601_p6 = data_337_V_read407_rewind_reg_30597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_338_V_read408_phi_phi_fu_75091_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_338_V_read408_phi_phi_fu_75091_p4 = ap_phi_mux_data_338_V_read408_rewind_phi_fu_30615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_338_V_read408_phi_phi_fu_75091_p4 = data_338_V_read.read();
        } else {
            ap_phi_mux_data_338_V_read408_phi_phi_fu_75091_p4 = ap_phi_reg_pp0_iter0_data_338_V_read408_phi_reg_75087.read();
        }
    } else {
        ap_phi_mux_data_338_V_read408_phi_phi_fu_75091_p4 = ap_phi_reg_pp0_iter0_data_338_V_read408_phi_reg_75087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_338_V_read408_rewind_phi_fu_30615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_338_V_read408_rewind_phi_fu_30615_p6 = data_338_V_read408_phi_reg_75087.read();
    } else {
        ap_phi_mux_data_338_V_read408_rewind_phi_fu_30615_p6 = data_338_V_read408_rewind_reg_30611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_339_V_read409_phi_phi_fu_75104_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_339_V_read409_phi_phi_fu_75104_p4 = ap_phi_mux_data_339_V_read409_rewind_phi_fu_30629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_339_V_read409_phi_phi_fu_75104_p4 = data_339_V_read.read();
        } else {
            ap_phi_mux_data_339_V_read409_phi_phi_fu_75104_p4 = ap_phi_reg_pp0_iter0_data_339_V_read409_phi_reg_75100.read();
        }
    } else {
        ap_phi_mux_data_339_V_read409_phi_phi_fu_75104_p4 = ap_phi_reg_pp0_iter0_data_339_V_read409_phi_reg_75100.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_339_V_read409_rewind_phi_fu_30629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_339_V_read409_rewind_phi_fu_30629_p6 = data_339_V_read409_phi_reg_75100.read();
    } else {
        ap_phi_mux_data_339_V_read409_rewind_phi_fu_30629_p6 = data_339_V_read409_rewind_reg_30625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_33_V_read103_phi_phi_fu_71126_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_33_V_read103_phi_phi_fu_71126_p4 = ap_phi_mux_data_33_V_read103_rewind_phi_fu_26345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_33_V_read103_phi_phi_fu_71126_p4 = data_33_V_read.read();
        } else {
            ap_phi_mux_data_33_V_read103_phi_phi_fu_71126_p4 = ap_phi_reg_pp0_iter0_data_33_V_read103_phi_reg_71122.read();
        }
    } else {
        ap_phi_mux_data_33_V_read103_phi_phi_fu_71126_p4 = ap_phi_reg_pp0_iter0_data_33_V_read103_phi_reg_71122.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_33_V_read103_rewind_phi_fu_26345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_33_V_read103_rewind_phi_fu_26345_p6 = data_33_V_read103_phi_reg_71122.read();
    } else {
        ap_phi_mux_data_33_V_read103_rewind_phi_fu_26345_p6 = data_33_V_read103_rewind_reg_26341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_340_V_read410_phi_phi_fu_75117_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_340_V_read410_phi_phi_fu_75117_p4 = ap_phi_mux_data_340_V_read410_rewind_phi_fu_30643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_340_V_read410_phi_phi_fu_75117_p4 = data_340_V_read.read();
        } else {
            ap_phi_mux_data_340_V_read410_phi_phi_fu_75117_p4 = ap_phi_reg_pp0_iter0_data_340_V_read410_phi_reg_75113.read();
        }
    } else {
        ap_phi_mux_data_340_V_read410_phi_phi_fu_75117_p4 = ap_phi_reg_pp0_iter0_data_340_V_read410_phi_reg_75113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_340_V_read410_rewind_phi_fu_30643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_340_V_read410_rewind_phi_fu_30643_p6 = data_340_V_read410_phi_reg_75113.read();
    } else {
        ap_phi_mux_data_340_V_read410_rewind_phi_fu_30643_p6 = data_340_V_read410_rewind_reg_30639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_341_V_read411_phi_phi_fu_75130_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_341_V_read411_phi_phi_fu_75130_p4 = ap_phi_mux_data_341_V_read411_rewind_phi_fu_30657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_341_V_read411_phi_phi_fu_75130_p4 = data_341_V_read.read();
        } else {
            ap_phi_mux_data_341_V_read411_phi_phi_fu_75130_p4 = ap_phi_reg_pp0_iter0_data_341_V_read411_phi_reg_75126.read();
        }
    } else {
        ap_phi_mux_data_341_V_read411_phi_phi_fu_75130_p4 = ap_phi_reg_pp0_iter0_data_341_V_read411_phi_reg_75126.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_341_V_read411_rewind_phi_fu_30657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_341_V_read411_rewind_phi_fu_30657_p6 = data_341_V_read411_phi_reg_75126.read();
    } else {
        ap_phi_mux_data_341_V_read411_rewind_phi_fu_30657_p6 = data_341_V_read411_rewind_reg_30653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_342_V_read412_phi_phi_fu_75143_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_342_V_read412_phi_phi_fu_75143_p4 = ap_phi_mux_data_342_V_read412_rewind_phi_fu_30671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_342_V_read412_phi_phi_fu_75143_p4 = data_342_V_read.read();
        } else {
            ap_phi_mux_data_342_V_read412_phi_phi_fu_75143_p4 = ap_phi_reg_pp0_iter0_data_342_V_read412_phi_reg_75139.read();
        }
    } else {
        ap_phi_mux_data_342_V_read412_phi_phi_fu_75143_p4 = ap_phi_reg_pp0_iter0_data_342_V_read412_phi_reg_75139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_342_V_read412_rewind_phi_fu_30671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_342_V_read412_rewind_phi_fu_30671_p6 = data_342_V_read412_phi_reg_75139.read();
    } else {
        ap_phi_mux_data_342_V_read412_rewind_phi_fu_30671_p6 = data_342_V_read412_rewind_reg_30667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_343_V_read413_phi_phi_fu_75156_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_343_V_read413_phi_phi_fu_75156_p4 = ap_phi_mux_data_343_V_read413_rewind_phi_fu_30685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_343_V_read413_phi_phi_fu_75156_p4 = data_343_V_read.read();
        } else {
            ap_phi_mux_data_343_V_read413_phi_phi_fu_75156_p4 = ap_phi_reg_pp0_iter0_data_343_V_read413_phi_reg_75152.read();
        }
    } else {
        ap_phi_mux_data_343_V_read413_phi_phi_fu_75156_p4 = ap_phi_reg_pp0_iter0_data_343_V_read413_phi_reg_75152.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_343_V_read413_rewind_phi_fu_30685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_343_V_read413_rewind_phi_fu_30685_p6 = data_343_V_read413_phi_reg_75152.read();
    } else {
        ap_phi_mux_data_343_V_read413_rewind_phi_fu_30685_p6 = data_343_V_read413_rewind_reg_30681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_344_V_read414_phi_phi_fu_75169_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_344_V_read414_phi_phi_fu_75169_p4 = ap_phi_mux_data_344_V_read414_rewind_phi_fu_30699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_344_V_read414_phi_phi_fu_75169_p4 = data_344_V_read.read();
        } else {
            ap_phi_mux_data_344_V_read414_phi_phi_fu_75169_p4 = ap_phi_reg_pp0_iter0_data_344_V_read414_phi_reg_75165.read();
        }
    } else {
        ap_phi_mux_data_344_V_read414_phi_phi_fu_75169_p4 = ap_phi_reg_pp0_iter0_data_344_V_read414_phi_reg_75165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_344_V_read414_rewind_phi_fu_30699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_344_V_read414_rewind_phi_fu_30699_p6 = data_344_V_read414_phi_reg_75165.read();
    } else {
        ap_phi_mux_data_344_V_read414_rewind_phi_fu_30699_p6 = data_344_V_read414_rewind_reg_30695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_345_V_read415_phi_phi_fu_75182_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_345_V_read415_phi_phi_fu_75182_p4 = ap_phi_mux_data_345_V_read415_rewind_phi_fu_30713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_345_V_read415_phi_phi_fu_75182_p4 = data_345_V_read.read();
        } else {
            ap_phi_mux_data_345_V_read415_phi_phi_fu_75182_p4 = ap_phi_reg_pp0_iter0_data_345_V_read415_phi_reg_75178.read();
        }
    } else {
        ap_phi_mux_data_345_V_read415_phi_phi_fu_75182_p4 = ap_phi_reg_pp0_iter0_data_345_V_read415_phi_reg_75178.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_345_V_read415_rewind_phi_fu_30713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_345_V_read415_rewind_phi_fu_30713_p6 = data_345_V_read415_phi_reg_75178.read();
    } else {
        ap_phi_mux_data_345_V_read415_rewind_phi_fu_30713_p6 = data_345_V_read415_rewind_reg_30709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_346_V_read416_phi_phi_fu_75195_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_346_V_read416_phi_phi_fu_75195_p4 = ap_phi_mux_data_346_V_read416_rewind_phi_fu_30727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_346_V_read416_phi_phi_fu_75195_p4 = data_346_V_read.read();
        } else {
            ap_phi_mux_data_346_V_read416_phi_phi_fu_75195_p4 = ap_phi_reg_pp0_iter0_data_346_V_read416_phi_reg_75191.read();
        }
    } else {
        ap_phi_mux_data_346_V_read416_phi_phi_fu_75195_p4 = ap_phi_reg_pp0_iter0_data_346_V_read416_phi_reg_75191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_346_V_read416_rewind_phi_fu_30727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_346_V_read416_rewind_phi_fu_30727_p6 = data_346_V_read416_phi_reg_75191.read();
    } else {
        ap_phi_mux_data_346_V_read416_rewind_phi_fu_30727_p6 = data_346_V_read416_rewind_reg_30723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_347_V_read417_phi_phi_fu_75208_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_347_V_read417_phi_phi_fu_75208_p4 = ap_phi_mux_data_347_V_read417_rewind_phi_fu_30741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_347_V_read417_phi_phi_fu_75208_p4 = data_347_V_read.read();
        } else {
            ap_phi_mux_data_347_V_read417_phi_phi_fu_75208_p4 = ap_phi_reg_pp0_iter0_data_347_V_read417_phi_reg_75204.read();
        }
    } else {
        ap_phi_mux_data_347_V_read417_phi_phi_fu_75208_p4 = ap_phi_reg_pp0_iter0_data_347_V_read417_phi_reg_75204.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_347_V_read417_rewind_phi_fu_30741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_347_V_read417_rewind_phi_fu_30741_p6 = data_347_V_read417_phi_reg_75204.read();
    } else {
        ap_phi_mux_data_347_V_read417_rewind_phi_fu_30741_p6 = data_347_V_read417_rewind_reg_30737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_348_V_read418_phi_phi_fu_75221_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_348_V_read418_phi_phi_fu_75221_p4 = ap_phi_mux_data_348_V_read418_rewind_phi_fu_30755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_348_V_read418_phi_phi_fu_75221_p4 = data_348_V_read.read();
        } else {
            ap_phi_mux_data_348_V_read418_phi_phi_fu_75221_p4 = ap_phi_reg_pp0_iter0_data_348_V_read418_phi_reg_75217.read();
        }
    } else {
        ap_phi_mux_data_348_V_read418_phi_phi_fu_75221_p4 = ap_phi_reg_pp0_iter0_data_348_V_read418_phi_reg_75217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_348_V_read418_rewind_phi_fu_30755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_348_V_read418_rewind_phi_fu_30755_p6 = data_348_V_read418_phi_reg_75217.read();
    } else {
        ap_phi_mux_data_348_V_read418_rewind_phi_fu_30755_p6 = data_348_V_read418_rewind_reg_30751.read();
    }
}

}

