#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2431_V_read2501_phi_phi_fu_105622_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2431_V_read2501_phi_phi_fu_105622_p4 = ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_63239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2431_V_read2501_phi_phi_fu_105622_p4 = data_2431_V_read.read();
        } else {
            ap_phi_mux_data_2431_V_read2501_phi_phi_fu_105622_p4 = ap_phi_reg_pp0_iter0_data_2431_V_read2501_phi_reg_105618.read();
        }
    } else {
        ap_phi_mux_data_2431_V_read2501_phi_phi_fu_105622_p4 = ap_phi_reg_pp0_iter0_data_2431_V_read2501_phi_reg_105618.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_63239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_63239_p6 = data_2431_V_read2501_phi_reg_105618.read();
    } else {
        ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_63239_p6 = data_2431_V_read2501_rewind_reg_63235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2432_V_read2502_phi_phi_fu_105635_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2432_V_read2502_phi_phi_fu_105635_p4 = ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_63253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2432_V_read2502_phi_phi_fu_105635_p4 = data_2432_V_read.read();
        } else {
            ap_phi_mux_data_2432_V_read2502_phi_phi_fu_105635_p4 = ap_phi_reg_pp0_iter0_data_2432_V_read2502_phi_reg_105631.read();
        }
    } else {
        ap_phi_mux_data_2432_V_read2502_phi_phi_fu_105635_p4 = ap_phi_reg_pp0_iter0_data_2432_V_read2502_phi_reg_105631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_63253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_63253_p6 = data_2432_V_read2502_phi_reg_105631.read();
    } else {
        ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_63253_p6 = data_2432_V_read2502_rewind_reg_63249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2433_V_read2503_phi_phi_fu_105648_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2433_V_read2503_phi_phi_fu_105648_p4 = ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_63267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2433_V_read2503_phi_phi_fu_105648_p4 = data_2433_V_read.read();
        } else {
            ap_phi_mux_data_2433_V_read2503_phi_phi_fu_105648_p4 = ap_phi_reg_pp0_iter0_data_2433_V_read2503_phi_reg_105644.read();
        }
    } else {
        ap_phi_mux_data_2433_V_read2503_phi_phi_fu_105648_p4 = ap_phi_reg_pp0_iter0_data_2433_V_read2503_phi_reg_105644.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_63267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_63267_p6 = data_2433_V_read2503_phi_reg_105644.read();
    } else {
        ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_63267_p6 = data_2433_V_read2503_rewind_reg_63263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2434_V_read2504_phi_phi_fu_105661_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2434_V_read2504_phi_phi_fu_105661_p4 = ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_63281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2434_V_read2504_phi_phi_fu_105661_p4 = data_2434_V_read.read();
        } else {
            ap_phi_mux_data_2434_V_read2504_phi_phi_fu_105661_p4 = ap_phi_reg_pp0_iter0_data_2434_V_read2504_phi_reg_105657.read();
        }
    } else {
        ap_phi_mux_data_2434_V_read2504_phi_phi_fu_105661_p4 = ap_phi_reg_pp0_iter0_data_2434_V_read2504_phi_reg_105657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_63281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_63281_p6 = data_2434_V_read2504_phi_reg_105657.read();
    } else {
        ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_63281_p6 = data_2434_V_read2504_rewind_reg_63277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2435_V_read2505_phi_phi_fu_105674_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2435_V_read2505_phi_phi_fu_105674_p4 = ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_63295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2435_V_read2505_phi_phi_fu_105674_p4 = data_2435_V_read.read();
        } else {
            ap_phi_mux_data_2435_V_read2505_phi_phi_fu_105674_p4 = ap_phi_reg_pp0_iter0_data_2435_V_read2505_phi_reg_105670.read();
        }
    } else {
        ap_phi_mux_data_2435_V_read2505_phi_phi_fu_105674_p4 = ap_phi_reg_pp0_iter0_data_2435_V_read2505_phi_reg_105670.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_63295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_63295_p6 = data_2435_V_read2505_phi_reg_105670.read();
    } else {
        ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_63295_p6 = data_2435_V_read2505_rewind_reg_63291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2436_V_read2506_phi_phi_fu_105687_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2436_V_read2506_phi_phi_fu_105687_p4 = ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_63309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2436_V_read2506_phi_phi_fu_105687_p4 = data_2436_V_read.read();
        } else {
            ap_phi_mux_data_2436_V_read2506_phi_phi_fu_105687_p4 = ap_phi_reg_pp0_iter0_data_2436_V_read2506_phi_reg_105683.read();
        }
    } else {
        ap_phi_mux_data_2436_V_read2506_phi_phi_fu_105687_p4 = ap_phi_reg_pp0_iter0_data_2436_V_read2506_phi_reg_105683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_63309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_63309_p6 = data_2436_V_read2506_phi_reg_105683.read();
    } else {
        ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_63309_p6 = data_2436_V_read2506_rewind_reg_63305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2437_V_read2507_phi_phi_fu_105700_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2437_V_read2507_phi_phi_fu_105700_p4 = ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_63323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2437_V_read2507_phi_phi_fu_105700_p4 = data_2437_V_read.read();
        } else {
            ap_phi_mux_data_2437_V_read2507_phi_phi_fu_105700_p4 = ap_phi_reg_pp0_iter0_data_2437_V_read2507_phi_reg_105696.read();
        }
    } else {
        ap_phi_mux_data_2437_V_read2507_phi_phi_fu_105700_p4 = ap_phi_reg_pp0_iter0_data_2437_V_read2507_phi_reg_105696.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_63323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_63323_p6 = data_2437_V_read2507_phi_reg_105696.read();
    } else {
        ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_63323_p6 = data_2437_V_read2507_rewind_reg_63319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2438_V_read2508_phi_phi_fu_105713_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2438_V_read2508_phi_phi_fu_105713_p4 = ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_63337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2438_V_read2508_phi_phi_fu_105713_p4 = data_2438_V_read.read();
        } else {
            ap_phi_mux_data_2438_V_read2508_phi_phi_fu_105713_p4 = ap_phi_reg_pp0_iter0_data_2438_V_read2508_phi_reg_105709.read();
        }
    } else {
        ap_phi_mux_data_2438_V_read2508_phi_phi_fu_105713_p4 = ap_phi_reg_pp0_iter0_data_2438_V_read2508_phi_reg_105709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_63337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_63337_p6 = data_2438_V_read2508_phi_reg_105709.read();
    } else {
        ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_63337_p6 = data_2438_V_read2508_rewind_reg_63333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2439_V_read2509_phi_phi_fu_105726_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2439_V_read2509_phi_phi_fu_105726_p4 = ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_63351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2439_V_read2509_phi_phi_fu_105726_p4 = data_2439_V_read.read();
        } else {
            ap_phi_mux_data_2439_V_read2509_phi_phi_fu_105726_p4 = ap_phi_reg_pp0_iter0_data_2439_V_read2509_phi_reg_105722.read();
        }
    } else {
        ap_phi_mux_data_2439_V_read2509_phi_phi_fu_105726_p4 = ap_phi_reg_pp0_iter0_data_2439_V_read2509_phi_reg_105722.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_63351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_63351_p6 = data_2439_V_read2509_phi_reg_105722.read();
    } else {
        ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_63351_p6 = data_2439_V_read2509_rewind_reg_63347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_243_V_read313_phi_phi_fu_77178_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_243_V_read313_phi_phi_fu_77178_p4 = ap_phi_mux_data_243_V_read313_rewind_phi_fu_32607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_243_V_read313_phi_phi_fu_77178_p4 = data_243_V_read.read();
        } else {
            ap_phi_mux_data_243_V_read313_phi_phi_fu_77178_p4 = ap_phi_reg_pp0_iter0_data_243_V_read313_phi_reg_77174.read();
        }
    } else {
        ap_phi_mux_data_243_V_read313_phi_phi_fu_77178_p4 = ap_phi_reg_pp0_iter0_data_243_V_read313_phi_reg_77174.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_243_V_read313_rewind_phi_fu_32607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_243_V_read313_rewind_phi_fu_32607_p6 = data_243_V_read313_phi_reg_77174.read();
    } else {
        ap_phi_mux_data_243_V_read313_rewind_phi_fu_32607_p6 = data_243_V_read313_rewind_reg_32603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2440_V_read2510_phi_phi_fu_105739_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2440_V_read2510_phi_phi_fu_105739_p4 = ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_63365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2440_V_read2510_phi_phi_fu_105739_p4 = data_2440_V_read.read();
        } else {
            ap_phi_mux_data_2440_V_read2510_phi_phi_fu_105739_p4 = ap_phi_reg_pp0_iter0_data_2440_V_read2510_phi_reg_105735.read();
        }
    } else {
        ap_phi_mux_data_2440_V_read2510_phi_phi_fu_105739_p4 = ap_phi_reg_pp0_iter0_data_2440_V_read2510_phi_reg_105735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_63365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_63365_p6 = data_2440_V_read2510_phi_reg_105735.read();
    } else {
        ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_63365_p6 = data_2440_V_read2510_rewind_reg_63361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2441_V_read2511_phi_phi_fu_105752_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2441_V_read2511_phi_phi_fu_105752_p4 = ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_63379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2441_V_read2511_phi_phi_fu_105752_p4 = data_2441_V_read.read();
        } else {
            ap_phi_mux_data_2441_V_read2511_phi_phi_fu_105752_p4 = ap_phi_reg_pp0_iter0_data_2441_V_read2511_phi_reg_105748.read();
        }
    } else {
        ap_phi_mux_data_2441_V_read2511_phi_phi_fu_105752_p4 = ap_phi_reg_pp0_iter0_data_2441_V_read2511_phi_reg_105748.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_63379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_63379_p6 = data_2441_V_read2511_phi_reg_105748.read();
    } else {
        ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_63379_p6 = data_2441_V_read2511_rewind_reg_63375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2442_V_read2512_phi_phi_fu_105765_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2442_V_read2512_phi_phi_fu_105765_p4 = ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_63393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2442_V_read2512_phi_phi_fu_105765_p4 = data_2442_V_read.read();
        } else {
            ap_phi_mux_data_2442_V_read2512_phi_phi_fu_105765_p4 = ap_phi_reg_pp0_iter0_data_2442_V_read2512_phi_reg_105761.read();
        }
    } else {
        ap_phi_mux_data_2442_V_read2512_phi_phi_fu_105765_p4 = ap_phi_reg_pp0_iter0_data_2442_V_read2512_phi_reg_105761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_63393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_63393_p6 = data_2442_V_read2512_phi_reg_105761.read();
    } else {
        ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_63393_p6 = data_2442_V_read2512_rewind_reg_63389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2443_V_read2513_phi_phi_fu_105778_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2443_V_read2513_phi_phi_fu_105778_p4 = ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_63407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2443_V_read2513_phi_phi_fu_105778_p4 = data_2443_V_read.read();
        } else {
            ap_phi_mux_data_2443_V_read2513_phi_phi_fu_105778_p4 = ap_phi_reg_pp0_iter0_data_2443_V_read2513_phi_reg_105774.read();
        }
    } else {
        ap_phi_mux_data_2443_V_read2513_phi_phi_fu_105778_p4 = ap_phi_reg_pp0_iter0_data_2443_V_read2513_phi_reg_105774.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_63407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_63407_p6 = data_2443_V_read2513_phi_reg_105774.read();
    } else {
        ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_63407_p6 = data_2443_V_read2513_rewind_reg_63403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2444_V_read2514_phi_phi_fu_105791_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2444_V_read2514_phi_phi_fu_105791_p4 = ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_63421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2444_V_read2514_phi_phi_fu_105791_p4 = data_2444_V_read.read();
        } else {
            ap_phi_mux_data_2444_V_read2514_phi_phi_fu_105791_p4 = ap_phi_reg_pp0_iter0_data_2444_V_read2514_phi_reg_105787.read();
        }
    } else {
        ap_phi_mux_data_2444_V_read2514_phi_phi_fu_105791_p4 = ap_phi_reg_pp0_iter0_data_2444_V_read2514_phi_reg_105787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_63421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_63421_p6 = data_2444_V_read2514_phi_reg_105787.read();
    } else {
        ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_63421_p6 = data_2444_V_read2514_rewind_reg_63417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2445_V_read2515_phi_phi_fu_105804_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2445_V_read2515_phi_phi_fu_105804_p4 = ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_63435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2445_V_read2515_phi_phi_fu_105804_p4 = data_2445_V_read.read();
        } else {
            ap_phi_mux_data_2445_V_read2515_phi_phi_fu_105804_p4 = ap_phi_reg_pp0_iter0_data_2445_V_read2515_phi_reg_105800.read();
        }
    } else {
        ap_phi_mux_data_2445_V_read2515_phi_phi_fu_105804_p4 = ap_phi_reg_pp0_iter0_data_2445_V_read2515_phi_reg_105800.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_63435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_63435_p6 = data_2445_V_read2515_phi_reg_105800.read();
    } else {
        ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_63435_p6 = data_2445_V_read2515_rewind_reg_63431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2446_V_read2516_phi_phi_fu_105817_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2446_V_read2516_phi_phi_fu_105817_p4 = ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_63449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2446_V_read2516_phi_phi_fu_105817_p4 = data_2446_V_read.read();
        } else {
            ap_phi_mux_data_2446_V_read2516_phi_phi_fu_105817_p4 = ap_phi_reg_pp0_iter0_data_2446_V_read2516_phi_reg_105813.read();
        }
    } else {
        ap_phi_mux_data_2446_V_read2516_phi_phi_fu_105817_p4 = ap_phi_reg_pp0_iter0_data_2446_V_read2516_phi_reg_105813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_63449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_63449_p6 = data_2446_V_read2516_phi_reg_105813.read();
    } else {
        ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_63449_p6 = data_2446_V_read2516_rewind_reg_63445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2447_V_read2517_phi_phi_fu_105830_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2447_V_read2517_phi_phi_fu_105830_p4 = ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_63463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2447_V_read2517_phi_phi_fu_105830_p4 = data_2447_V_read.read();
        } else {
            ap_phi_mux_data_2447_V_read2517_phi_phi_fu_105830_p4 = ap_phi_reg_pp0_iter0_data_2447_V_read2517_phi_reg_105826.read();
        }
    } else {
        ap_phi_mux_data_2447_V_read2517_phi_phi_fu_105830_p4 = ap_phi_reg_pp0_iter0_data_2447_V_read2517_phi_reg_105826.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_63463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_63463_p6 = data_2447_V_read2517_phi_reg_105826.read();
    } else {
        ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_63463_p6 = data_2447_V_read2517_rewind_reg_63459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2448_V_read2518_phi_phi_fu_105843_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2448_V_read2518_phi_phi_fu_105843_p4 = ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_63477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2448_V_read2518_phi_phi_fu_105843_p4 = data_2448_V_read.read();
        } else {
            ap_phi_mux_data_2448_V_read2518_phi_phi_fu_105843_p4 = ap_phi_reg_pp0_iter0_data_2448_V_read2518_phi_reg_105839.read();
        }
    } else {
        ap_phi_mux_data_2448_V_read2518_phi_phi_fu_105843_p4 = ap_phi_reg_pp0_iter0_data_2448_V_read2518_phi_reg_105839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_63477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_63477_p6 = data_2448_V_read2518_phi_reg_105839.read();
    } else {
        ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_63477_p6 = data_2448_V_read2518_rewind_reg_63473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2449_V_read2519_phi_phi_fu_105856_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2449_V_read2519_phi_phi_fu_105856_p4 = ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_63491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2449_V_read2519_phi_phi_fu_105856_p4 = data_2449_V_read.read();
        } else {
            ap_phi_mux_data_2449_V_read2519_phi_phi_fu_105856_p4 = ap_phi_reg_pp0_iter0_data_2449_V_read2519_phi_reg_105852.read();
        }
    } else {
        ap_phi_mux_data_2449_V_read2519_phi_phi_fu_105856_p4 = ap_phi_reg_pp0_iter0_data_2449_V_read2519_phi_reg_105852.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_63491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_63491_p6 = data_2449_V_read2519_phi_reg_105852.read();
    } else {
        ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_63491_p6 = data_2449_V_read2519_rewind_reg_63487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_244_V_read314_phi_phi_fu_77191_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_244_V_read314_phi_phi_fu_77191_p4 = ap_phi_mux_data_244_V_read314_rewind_phi_fu_32621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_244_V_read314_phi_phi_fu_77191_p4 = data_244_V_read.read();
        } else {
            ap_phi_mux_data_244_V_read314_phi_phi_fu_77191_p4 = ap_phi_reg_pp0_iter0_data_244_V_read314_phi_reg_77187.read();
        }
    } else {
        ap_phi_mux_data_244_V_read314_phi_phi_fu_77191_p4 = ap_phi_reg_pp0_iter0_data_244_V_read314_phi_reg_77187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_244_V_read314_rewind_phi_fu_32621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_244_V_read314_rewind_phi_fu_32621_p6 = data_244_V_read314_phi_reg_77187.read();
    } else {
        ap_phi_mux_data_244_V_read314_rewind_phi_fu_32621_p6 = data_244_V_read314_rewind_reg_32617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2450_V_read2520_phi_phi_fu_105869_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2450_V_read2520_phi_phi_fu_105869_p4 = ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_63505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2450_V_read2520_phi_phi_fu_105869_p4 = data_2450_V_read.read();
        } else {
            ap_phi_mux_data_2450_V_read2520_phi_phi_fu_105869_p4 = ap_phi_reg_pp0_iter0_data_2450_V_read2520_phi_reg_105865.read();
        }
    } else {
        ap_phi_mux_data_2450_V_read2520_phi_phi_fu_105869_p4 = ap_phi_reg_pp0_iter0_data_2450_V_read2520_phi_reg_105865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_63505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_63505_p6 = data_2450_V_read2520_phi_reg_105865.read();
    } else {
        ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_63505_p6 = data_2450_V_read2520_rewind_reg_63501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2451_V_read2521_phi_phi_fu_105882_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2451_V_read2521_phi_phi_fu_105882_p4 = ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_63519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2451_V_read2521_phi_phi_fu_105882_p4 = data_2451_V_read.read();
        } else {
            ap_phi_mux_data_2451_V_read2521_phi_phi_fu_105882_p4 = ap_phi_reg_pp0_iter0_data_2451_V_read2521_phi_reg_105878.read();
        }
    } else {
        ap_phi_mux_data_2451_V_read2521_phi_phi_fu_105882_p4 = ap_phi_reg_pp0_iter0_data_2451_V_read2521_phi_reg_105878.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_63519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_63519_p6 = data_2451_V_read2521_phi_reg_105878.read();
    } else {
        ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_63519_p6 = data_2451_V_read2521_rewind_reg_63515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2452_V_read2522_phi_phi_fu_105895_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2452_V_read2522_phi_phi_fu_105895_p4 = ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_63533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2452_V_read2522_phi_phi_fu_105895_p4 = data_2452_V_read.read();
        } else {
            ap_phi_mux_data_2452_V_read2522_phi_phi_fu_105895_p4 = ap_phi_reg_pp0_iter0_data_2452_V_read2522_phi_reg_105891.read();
        }
    } else {
        ap_phi_mux_data_2452_V_read2522_phi_phi_fu_105895_p4 = ap_phi_reg_pp0_iter0_data_2452_V_read2522_phi_reg_105891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_63533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_63533_p6 = data_2452_V_read2522_phi_reg_105891.read();
    } else {
        ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_63533_p6 = data_2452_V_read2522_rewind_reg_63529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2453_V_read2523_phi_phi_fu_105908_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2453_V_read2523_phi_phi_fu_105908_p4 = ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_63547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2453_V_read2523_phi_phi_fu_105908_p4 = data_2453_V_read.read();
        } else {
            ap_phi_mux_data_2453_V_read2523_phi_phi_fu_105908_p4 = ap_phi_reg_pp0_iter0_data_2453_V_read2523_phi_reg_105904.read();
        }
    } else {
        ap_phi_mux_data_2453_V_read2523_phi_phi_fu_105908_p4 = ap_phi_reg_pp0_iter0_data_2453_V_read2523_phi_reg_105904.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_63547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_63547_p6 = data_2453_V_read2523_phi_reg_105904.read();
    } else {
        ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_63547_p6 = data_2453_V_read2523_rewind_reg_63543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2454_V_read2524_phi_phi_fu_105921_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2454_V_read2524_phi_phi_fu_105921_p4 = ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_63561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2454_V_read2524_phi_phi_fu_105921_p4 = data_2454_V_read.read();
        } else {
            ap_phi_mux_data_2454_V_read2524_phi_phi_fu_105921_p4 = ap_phi_reg_pp0_iter0_data_2454_V_read2524_phi_reg_105917.read();
        }
    } else {
        ap_phi_mux_data_2454_V_read2524_phi_phi_fu_105921_p4 = ap_phi_reg_pp0_iter0_data_2454_V_read2524_phi_reg_105917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_63561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_63561_p6 = data_2454_V_read2524_phi_reg_105917.read();
    } else {
        ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_63561_p6 = data_2454_V_read2524_rewind_reg_63557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2455_V_read2525_phi_phi_fu_105934_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2455_V_read2525_phi_phi_fu_105934_p4 = ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_63575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2455_V_read2525_phi_phi_fu_105934_p4 = data_2455_V_read.read();
        } else {
            ap_phi_mux_data_2455_V_read2525_phi_phi_fu_105934_p4 = ap_phi_reg_pp0_iter0_data_2455_V_read2525_phi_reg_105930.read();
        }
    } else {
        ap_phi_mux_data_2455_V_read2525_phi_phi_fu_105934_p4 = ap_phi_reg_pp0_iter0_data_2455_V_read2525_phi_reg_105930.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_63575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_63575_p6 = data_2455_V_read2525_phi_reg_105930.read();
    } else {
        ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_63575_p6 = data_2455_V_read2525_rewind_reg_63571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2456_V_read2526_phi_phi_fu_105947_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2456_V_read2526_phi_phi_fu_105947_p4 = ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_63589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2456_V_read2526_phi_phi_fu_105947_p4 = data_2456_V_read.read();
        } else {
            ap_phi_mux_data_2456_V_read2526_phi_phi_fu_105947_p4 = ap_phi_reg_pp0_iter0_data_2456_V_read2526_phi_reg_105943.read();
        }
    } else {
        ap_phi_mux_data_2456_V_read2526_phi_phi_fu_105947_p4 = ap_phi_reg_pp0_iter0_data_2456_V_read2526_phi_reg_105943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_63589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_63589_p6 = data_2456_V_read2526_phi_reg_105943.read();
    } else {
        ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_63589_p6 = data_2456_V_read2526_rewind_reg_63585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2457_V_read2527_phi_phi_fu_105960_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2457_V_read2527_phi_phi_fu_105960_p4 = ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_63603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2457_V_read2527_phi_phi_fu_105960_p4 = data_2457_V_read.read();
        } else {
            ap_phi_mux_data_2457_V_read2527_phi_phi_fu_105960_p4 = ap_phi_reg_pp0_iter0_data_2457_V_read2527_phi_reg_105956.read();
        }
    } else {
        ap_phi_mux_data_2457_V_read2527_phi_phi_fu_105960_p4 = ap_phi_reg_pp0_iter0_data_2457_V_read2527_phi_reg_105956.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_63603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_63603_p6 = data_2457_V_read2527_phi_reg_105956.read();
    } else {
        ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_63603_p6 = data_2457_V_read2527_rewind_reg_63599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2458_V_read2528_phi_phi_fu_105973_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2458_V_read2528_phi_phi_fu_105973_p4 = ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_63617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2458_V_read2528_phi_phi_fu_105973_p4 = data_2458_V_read.read();
        } else {
            ap_phi_mux_data_2458_V_read2528_phi_phi_fu_105973_p4 = ap_phi_reg_pp0_iter0_data_2458_V_read2528_phi_reg_105969.read();
        }
    } else {
        ap_phi_mux_data_2458_V_read2528_phi_phi_fu_105973_p4 = ap_phi_reg_pp0_iter0_data_2458_V_read2528_phi_reg_105969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_63617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_63617_p6 = data_2458_V_read2528_phi_reg_105969.read();
    } else {
        ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_63617_p6 = data_2458_V_read2528_rewind_reg_63613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2459_V_read2529_phi_phi_fu_105986_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2459_V_read2529_phi_phi_fu_105986_p4 = ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_63631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2459_V_read2529_phi_phi_fu_105986_p4 = data_2459_V_read.read();
        } else {
            ap_phi_mux_data_2459_V_read2529_phi_phi_fu_105986_p4 = ap_phi_reg_pp0_iter0_data_2459_V_read2529_phi_reg_105982.read();
        }
    } else {
        ap_phi_mux_data_2459_V_read2529_phi_phi_fu_105986_p4 = ap_phi_reg_pp0_iter0_data_2459_V_read2529_phi_reg_105982.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_63631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_63631_p6 = data_2459_V_read2529_phi_reg_105982.read();
    } else {
        ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_63631_p6 = data_2459_V_read2529_rewind_reg_63627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_245_V_read315_phi_phi_fu_77204_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_245_V_read315_phi_phi_fu_77204_p4 = ap_phi_mux_data_245_V_read315_rewind_phi_fu_32635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_245_V_read315_phi_phi_fu_77204_p4 = data_245_V_read.read();
        } else {
            ap_phi_mux_data_245_V_read315_phi_phi_fu_77204_p4 = ap_phi_reg_pp0_iter0_data_245_V_read315_phi_reg_77200.read();
        }
    } else {
        ap_phi_mux_data_245_V_read315_phi_phi_fu_77204_p4 = ap_phi_reg_pp0_iter0_data_245_V_read315_phi_reg_77200.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_245_V_read315_rewind_phi_fu_32635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_245_V_read315_rewind_phi_fu_32635_p6 = data_245_V_read315_phi_reg_77200.read();
    } else {
        ap_phi_mux_data_245_V_read315_rewind_phi_fu_32635_p6 = data_245_V_read315_rewind_reg_32631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2460_V_read2530_phi_phi_fu_105999_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2460_V_read2530_phi_phi_fu_105999_p4 = ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_63645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2460_V_read2530_phi_phi_fu_105999_p4 = data_2460_V_read.read();
        } else {
            ap_phi_mux_data_2460_V_read2530_phi_phi_fu_105999_p4 = ap_phi_reg_pp0_iter0_data_2460_V_read2530_phi_reg_105995.read();
        }
    } else {
        ap_phi_mux_data_2460_V_read2530_phi_phi_fu_105999_p4 = ap_phi_reg_pp0_iter0_data_2460_V_read2530_phi_reg_105995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_63645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_63645_p6 = data_2460_V_read2530_phi_reg_105995.read();
    } else {
        ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_63645_p6 = data_2460_V_read2530_rewind_reg_63641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2461_V_read2531_phi_phi_fu_106012_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2461_V_read2531_phi_phi_fu_106012_p4 = ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_63659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2461_V_read2531_phi_phi_fu_106012_p4 = data_2461_V_read.read();
        } else {
            ap_phi_mux_data_2461_V_read2531_phi_phi_fu_106012_p4 = ap_phi_reg_pp0_iter0_data_2461_V_read2531_phi_reg_106008.read();
        }
    } else {
        ap_phi_mux_data_2461_V_read2531_phi_phi_fu_106012_p4 = ap_phi_reg_pp0_iter0_data_2461_V_read2531_phi_reg_106008.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_63659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_63659_p6 = data_2461_V_read2531_phi_reg_106008.read();
    } else {
        ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_63659_p6 = data_2461_V_read2531_rewind_reg_63655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2462_V_read2532_phi_phi_fu_106025_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2462_V_read2532_phi_phi_fu_106025_p4 = ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_63673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2462_V_read2532_phi_phi_fu_106025_p4 = data_2462_V_read.read();
        } else {
            ap_phi_mux_data_2462_V_read2532_phi_phi_fu_106025_p4 = ap_phi_reg_pp0_iter0_data_2462_V_read2532_phi_reg_106021.read();
        }
    } else {
        ap_phi_mux_data_2462_V_read2532_phi_phi_fu_106025_p4 = ap_phi_reg_pp0_iter0_data_2462_V_read2532_phi_reg_106021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_63673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_63673_p6 = data_2462_V_read2532_phi_reg_106021.read();
    } else {
        ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_63673_p6 = data_2462_V_read2532_rewind_reg_63669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2463_V_read2533_phi_phi_fu_106038_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2463_V_read2533_phi_phi_fu_106038_p4 = ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_63687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2463_V_read2533_phi_phi_fu_106038_p4 = data_2463_V_read.read();
        } else {
            ap_phi_mux_data_2463_V_read2533_phi_phi_fu_106038_p4 = ap_phi_reg_pp0_iter0_data_2463_V_read2533_phi_reg_106034.read();
        }
    } else {
        ap_phi_mux_data_2463_V_read2533_phi_phi_fu_106038_p4 = ap_phi_reg_pp0_iter0_data_2463_V_read2533_phi_reg_106034.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_63687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_63687_p6 = data_2463_V_read2533_phi_reg_106034.read();
    } else {
        ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_63687_p6 = data_2463_V_read2533_rewind_reg_63683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2464_V_read2534_phi_phi_fu_106051_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2464_V_read2534_phi_phi_fu_106051_p4 = ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_63701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2464_V_read2534_phi_phi_fu_106051_p4 = data_2464_V_read.read();
        } else {
            ap_phi_mux_data_2464_V_read2534_phi_phi_fu_106051_p4 = ap_phi_reg_pp0_iter0_data_2464_V_read2534_phi_reg_106047.read();
        }
    } else {
        ap_phi_mux_data_2464_V_read2534_phi_phi_fu_106051_p4 = ap_phi_reg_pp0_iter0_data_2464_V_read2534_phi_reg_106047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_63701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_63701_p6 = data_2464_V_read2534_phi_reg_106047.read();
    } else {
        ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_63701_p6 = data_2464_V_read2534_rewind_reg_63697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2465_V_read2535_phi_phi_fu_106064_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2465_V_read2535_phi_phi_fu_106064_p4 = ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_63715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2465_V_read2535_phi_phi_fu_106064_p4 = data_2465_V_read.read();
        } else {
            ap_phi_mux_data_2465_V_read2535_phi_phi_fu_106064_p4 = ap_phi_reg_pp0_iter0_data_2465_V_read2535_phi_reg_106060.read();
        }
    } else {
        ap_phi_mux_data_2465_V_read2535_phi_phi_fu_106064_p4 = ap_phi_reg_pp0_iter0_data_2465_V_read2535_phi_reg_106060.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_63715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_63715_p6 = data_2465_V_read2535_phi_reg_106060.read();
    } else {
        ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_63715_p6 = data_2465_V_read2535_rewind_reg_63711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2466_V_read2536_phi_phi_fu_106077_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2466_V_read2536_phi_phi_fu_106077_p4 = ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_63729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2466_V_read2536_phi_phi_fu_106077_p4 = data_2466_V_read.read();
        } else {
            ap_phi_mux_data_2466_V_read2536_phi_phi_fu_106077_p4 = ap_phi_reg_pp0_iter0_data_2466_V_read2536_phi_reg_106073.read();
        }
    } else {
        ap_phi_mux_data_2466_V_read2536_phi_phi_fu_106077_p4 = ap_phi_reg_pp0_iter0_data_2466_V_read2536_phi_reg_106073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_63729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_63729_p6 = data_2466_V_read2536_phi_reg_106073.read();
    } else {
        ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_63729_p6 = data_2466_V_read2536_rewind_reg_63725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2467_V_read2537_phi_phi_fu_106090_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2467_V_read2537_phi_phi_fu_106090_p4 = ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_63743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2467_V_read2537_phi_phi_fu_106090_p4 = data_2467_V_read.read();
        } else {
            ap_phi_mux_data_2467_V_read2537_phi_phi_fu_106090_p4 = ap_phi_reg_pp0_iter0_data_2467_V_read2537_phi_reg_106086.read();
        }
    } else {
        ap_phi_mux_data_2467_V_read2537_phi_phi_fu_106090_p4 = ap_phi_reg_pp0_iter0_data_2467_V_read2537_phi_reg_106086.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_63743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_63743_p6 = data_2467_V_read2537_phi_reg_106086.read();
    } else {
        ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_63743_p6 = data_2467_V_read2537_rewind_reg_63739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2468_V_read2538_phi_phi_fu_106103_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2468_V_read2538_phi_phi_fu_106103_p4 = ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_63757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2468_V_read2538_phi_phi_fu_106103_p4 = data_2468_V_read.read();
        } else {
            ap_phi_mux_data_2468_V_read2538_phi_phi_fu_106103_p4 = ap_phi_reg_pp0_iter0_data_2468_V_read2538_phi_reg_106099.read();
        }
    } else {
        ap_phi_mux_data_2468_V_read2538_phi_phi_fu_106103_p4 = ap_phi_reg_pp0_iter0_data_2468_V_read2538_phi_reg_106099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_63757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_63757_p6 = data_2468_V_read2538_phi_reg_106099.read();
    } else {
        ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_63757_p6 = data_2468_V_read2538_rewind_reg_63753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2469_V_read2539_phi_phi_fu_106116_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2469_V_read2539_phi_phi_fu_106116_p4 = ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_63771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2469_V_read2539_phi_phi_fu_106116_p4 = data_2469_V_read.read();
        } else {
            ap_phi_mux_data_2469_V_read2539_phi_phi_fu_106116_p4 = ap_phi_reg_pp0_iter0_data_2469_V_read2539_phi_reg_106112.read();
        }
    } else {
        ap_phi_mux_data_2469_V_read2539_phi_phi_fu_106116_p4 = ap_phi_reg_pp0_iter0_data_2469_V_read2539_phi_reg_106112.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_63771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_63771_p6 = data_2469_V_read2539_phi_reg_106112.read();
    } else {
        ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_63771_p6 = data_2469_V_read2539_rewind_reg_63767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_246_V_read316_phi_phi_fu_77217_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_246_V_read316_phi_phi_fu_77217_p4 = ap_phi_mux_data_246_V_read316_rewind_phi_fu_32649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_246_V_read316_phi_phi_fu_77217_p4 = data_246_V_read.read();
        } else {
            ap_phi_mux_data_246_V_read316_phi_phi_fu_77217_p4 = ap_phi_reg_pp0_iter0_data_246_V_read316_phi_reg_77213.read();
        }
    } else {
        ap_phi_mux_data_246_V_read316_phi_phi_fu_77217_p4 = ap_phi_reg_pp0_iter0_data_246_V_read316_phi_reg_77213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_246_V_read316_rewind_phi_fu_32649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_246_V_read316_rewind_phi_fu_32649_p6 = data_246_V_read316_phi_reg_77213.read();
    } else {
        ap_phi_mux_data_246_V_read316_rewind_phi_fu_32649_p6 = data_246_V_read316_rewind_reg_32645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2470_V_read2540_phi_phi_fu_106129_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2470_V_read2540_phi_phi_fu_106129_p4 = ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_63785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2470_V_read2540_phi_phi_fu_106129_p4 = data_2470_V_read.read();
        } else {
            ap_phi_mux_data_2470_V_read2540_phi_phi_fu_106129_p4 = ap_phi_reg_pp0_iter0_data_2470_V_read2540_phi_reg_106125.read();
        }
    } else {
        ap_phi_mux_data_2470_V_read2540_phi_phi_fu_106129_p4 = ap_phi_reg_pp0_iter0_data_2470_V_read2540_phi_reg_106125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_63785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_63785_p6 = data_2470_V_read2540_phi_reg_106125.read();
    } else {
        ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_63785_p6 = data_2470_V_read2540_rewind_reg_63781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2471_V_read2541_phi_phi_fu_106142_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2471_V_read2541_phi_phi_fu_106142_p4 = ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_63799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2471_V_read2541_phi_phi_fu_106142_p4 = data_2471_V_read.read();
        } else {
            ap_phi_mux_data_2471_V_read2541_phi_phi_fu_106142_p4 = ap_phi_reg_pp0_iter0_data_2471_V_read2541_phi_reg_106138.read();
        }
    } else {
        ap_phi_mux_data_2471_V_read2541_phi_phi_fu_106142_p4 = ap_phi_reg_pp0_iter0_data_2471_V_read2541_phi_reg_106138.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_63799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_63799_p6 = data_2471_V_read2541_phi_reg_106138.read();
    } else {
        ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_63799_p6 = data_2471_V_read2541_rewind_reg_63795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2472_V_read2542_phi_phi_fu_106155_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2472_V_read2542_phi_phi_fu_106155_p4 = ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_63813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2472_V_read2542_phi_phi_fu_106155_p4 = data_2472_V_read.read();
        } else {
            ap_phi_mux_data_2472_V_read2542_phi_phi_fu_106155_p4 = ap_phi_reg_pp0_iter0_data_2472_V_read2542_phi_reg_106151.read();
        }
    } else {
        ap_phi_mux_data_2472_V_read2542_phi_phi_fu_106155_p4 = ap_phi_reg_pp0_iter0_data_2472_V_read2542_phi_reg_106151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_63813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_63813_p6 = data_2472_V_read2542_phi_reg_106151.read();
    } else {
        ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_63813_p6 = data_2472_V_read2542_rewind_reg_63809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2473_V_read2543_phi_phi_fu_106168_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2473_V_read2543_phi_phi_fu_106168_p4 = ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_63827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2473_V_read2543_phi_phi_fu_106168_p4 = data_2473_V_read.read();
        } else {
            ap_phi_mux_data_2473_V_read2543_phi_phi_fu_106168_p4 = ap_phi_reg_pp0_iter0_data_2473_V_read2543_phi_reg_106164.read();
        }
    } else {
        ap_phi_mux_data_2473_V_read2543_phi_phi_fu_106168_p4 = ap_phi_reg_pp0_iter0_data_2473_V_read2543_phi_reg_106164.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_63827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_63827_p6 = data_2473_V_read2543_phi_reg_106164.read();
    } else {
        ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_63827_p6 = data_2473_V_read2543_rewind_reg_63823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2474_V_read2544_phi_phi_fu_106181_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2474_V_read2544_phi_phi_fu_106181_p4 = ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_63841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2474_V_read2544_phi_phi_fu_106181_p4 = data_2474_V_read.read();
        } else {
            ap_phi_mux_data_2474_V_read2544_phi_phi_fu_106181_p4 = ap_phi_reg_pp0_iter0_data_2474_V_read2544_phi_reg_106177.read();
        }
    } else {
        ap_phi_mux_data_2474_V_read2544_phi_phi_fu_106181_p4 = ap_phi_reg_pp0_iter0_data_2474_V_read2544_phi_reg_106177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_63841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_63841_p6 = data_2474_V_read2544_phi_reg_106177.read();
    } else {
        ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_63841_p6 = data_2474_V_read2544_rewind_reg_63837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2475_V_read2545_phi_phi_fu_106194_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2475_V_read2545_phi_phi_fu_106194_p4 = ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_63855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2475_V_read2545_phi_phi_fu_106194_p4 = data_2475_V_read.read();
        } else {
            ap_phi_mux_data_2475_V_read2545_phi_phi_fu_106194_p4 = ap_phi_reg_pp0_iter0_data_2475_V_read2545_phi_reg_106190.read();
        }
    } else {
        ap_phi_mux_data_2475_V_read2545_phi_phi_fu_106194_p4 = ap_phi_reg_pp0_iter0_data_2475_V_read2545_phi_reg_106190.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_63855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_63855_p6 = data_2475_V_read2545_phi_reg_106190.read();
    } else {
        ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_63855_p6 = data_2475_V_read2545_rewind_reg_63851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2476_V_read2546_phi_phi_fu_106207_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2476_V_read2546_phi_phi_fu_106207_p4 = ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_63869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2476_V_read2546_phi_phi_fu_106207_p4 = data_2476_V_read.read();
        } else {
            ap_phi_mux_data_2476_V_read2546_phi_phi_fu_106207_p4 = ap_phi_reg_pp0_iter0_data_2476_V_read2546_phi_reg_106203.read();
        }
    } else {
        ap_phi_mux_data_2476_V_read2546_phi_phi_fu_106207_p4 = ap_phi_reg_pp0_iter0_data_2476_V_read2546_phi_reg_106203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_63869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_63869_p6 = data_2476_V_read2546_phi_reg_106203.read();
    } else {
        ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_63869_p6 = data_2476_V_read2546_rewind_reg_63865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2477_V_read2547_phi_phi_fu_106220_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2477_V_read2547_phi_phi_fu_106220_p4 = ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_63883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2477_V_read2547_phi_phi_fu_106220_p4 = data_2477_V_read.read();
        } else {
            ap_phi_mux_data_2477_V_read2547_phi_phi_fu_106220_p4 = ap_phi_reg_pp0_iter0_data_2477_V_read2547_phi_reg_106216.read();
        }
    } else {
        ap_phi_mux_data_2477_V_read2547_phi_phi_fu_106220_p4 = ap_phi_reg_pp0_iter0_data_2477_V_read2547_phi_reg_106216.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_63883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_63883_p6 = data_2477_V_read2547_phi_reg_106216.read();
    } else {
        ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_63883_p6 = data_2477_V_read2547_rewind_reg_63879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2478_V_read2548_phi_phi_fu_106233_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2478_V_read2548_phi_phi_fu_106233_p4 = ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_63897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2478_V_read2548_phi_phi_fu_106233_p4 = data_2478_V_read.read();
        } else {
            ap_phi_mux_data_2478_V_read2548_phi_phi_fu_106233_p4 = ap_phi_reg_pp0_iter0_data_2478_V_read2548_phi_reg_106229.read();
        }
    } else {
        ap_phi_mux_data_2478_V_read2548_phi_phi_fu_106233_p4 = ap_phi_reg_pp0_iter0_data_2478_V_read2548_phi_reg_106229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_63897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_63897_p6 = data_2478_V_read2548_phi_reg_106229.read();
    } else {
        ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_63897_p6 = data_2478_V_read2548_rewind_reg_63893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2479_V_read2549_phi_phi_fu_106246_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2479_V_read2549_phi_phi_fu_106246_p4 = ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_63911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2479_V_read2549_phi_phi_fu_106246_p4 = data_2479_V_read.read();
        } else {
            ap_phi_mux_data_2479_V_read2549_phi_phi_fu_106246_p4 = ap_phi_reg_pp0_iter0_data_2479_V_read2549_phi_reg_106242.read();
        }
    } else {
        ap_phi_mux_data_2479_V_read2549_phi_phi_fu_106246_p4 = ap_phi_reg_pp0_iter0_data_2479_V_read2549_phi_reg_106242.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_63911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_63911_p6 = data_2479_V_read2549_phi_reg_106242.read();
    } else {
        ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_63911_p6 = data_2479_V_read2549_rewind_reg_63907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_247_V_read317_phi_phi_fu_77230_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_247_V_read317_phi_phi_fu_77230_p4 = ap_phi_mux_data_247_V_read317_rewind_phi_fu_32663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_247_V_read317_phi_phi_fu_77230_p4 = data_247_V_read.read();
        } else {
            ap_phi_mux_data_247_V_read317_phi_phi_fu_77230_p4 = ap_phi_reg_pp0_iter0_data_247_V_read317_phi_reg_77226.read();
        }
    } else {
        ap_phi_mux_data_247_V_read317_phi_phi_fu_77230_p4 = ap_phi_reg_pp0_iter0_data_247_V_read317_phi_reg_77226.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_247_V_read317_rewind_phi_fu_32663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_247_V_read317_rewind_phi_fu_32663_p6 = data_247_V_read317_phi_reg_77226.read();
    } else {
        ap_phi_mux_data_247_V_read317_rewind_phi_fu_32663_p6 = data_247_V_read317_rewind_reg_32659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2480_V_read2550_phi_phi_fu_106259_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2480_V_read2550_phi_phi_fu_106259_p4 = ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_63925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2480_V_read2550_phi_phi_fu_106259_p4 = data_2480_V_read.read();
        } else {
            ap_phi_mux_data_2480_V_read2550_phi_phi_fu_106259_p4 = ap_phi_reg_pp0_iter0_data_2480_V_read2550_phi_reg_106255.read();
        }
    } else {
        ap_phi_mux_data_2480_V_read2550_phi_phi_fu_106259_p4 = ap_phi_reg_pp0_iter0_data_2480_V_read2550_phi_reg_106255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_63925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_63925_p6 = data_2480_V_read2550_phi_reg_106255.read();
    } else {
        ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_63925_p6 = data_2480_V_read2550_rewind_reg_63921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2481_V_read2551_phi_phi_fu_106272_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2481_V_read2551_phi_phi_fu_106272_p4 = ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_63939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2481_V_read2551_phi_phi_fu_106272_p4 = data_2481_V_read.read();
        } else {
            ap_phi_mux_data_2481_V_read2551_phi_phi_fu_106272_p4 = ap_phi_reg_pp0_iter0_data_2481_V_read2551_phi_reg_106268.read();
        }
    } else {
        ap_phi_mux_data_2481_V_read2551_phi_phi_fu_106272_p4 = ap_phi_reg_pp0_iter0_data_2481_V_read2551_phi_reg_106268.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_63939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_63939_p6 = data_2481_V_read2551_phi_reg_106268.read();
    } else {
        ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_63939_p6 = data_2481_V_read2551_rewind_reg_63935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2482_V_read2552_phi_phi_fu_106285_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2482_V_read2552_phi_phi_fu_106285_p4 = ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_63953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2482_V_read2552_phi_phi_fu_106285_p4 = data_2482_V_read.read();
        } else {
            ap_phi_mux_data_2482_V_read2552_phi_phi_fu_106285_p4 = ap_phi_reg_pp0_iter0_data_2482_V_read2552_phi_reg_106281.read();
        }
    } else {
        ap_phi_mux_data_2482_V_read2552_phi_phi_fu_106285_p4 = ap_phi_reg_pp0_iter0_data_2482_V_read2552_phi_reg_106281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_63953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_63953_p6 = data_2482_V_read2552_phi_reg_106281.read();
    } else {
        ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_63953_p6 = data_2482_V_read2552_rewind_reg_63949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2483_V_read2553_phi_phi_fu_106298_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2483_V_read2553_phi_phi_fu_106298_p4 = ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_63967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2483_V_read2553_phi_phi_fu_106298_p4 = data_2483_V_read.read();
        } else {
            ap_phi_mux_data_2483_V_read2553_phi_phi_fu_106298_p4 = ap_phi_reg_pp0_iter0_data_2483_V_read2553_phi_reg_106294.read();
        }
    } else {
        ap_phi_mux_data_2483_V_read2553_phi_phi_fu_106298_p4 = ap_phi_reg_pp0_iter0_data_2483_V_read2553_phi_reg_106294.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_63967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_63967_p6 = data_2483_V_read2553_phi_reg_106294.read();
    } else {
        ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_63967_p6 = data_2483_V_read2553_rewind_reg_63963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2484_V_read2554_phi_phi_fu_106311_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2484_V_read2554_phi_phi_fu_106311_p4 = ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_63981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2484_V_read2554_phi_phi_fu_106311_p4 = data_2484_V_read.read();
        } else {
            ap_phi_mux_data_2484_V_read2554_phi_phi_fu_106311_p4 = ap_phi_reg_pp0_iter0_data_2484_V_read2554_phi_reg_106307.read();
        }
    } else {
        ap_phi_mux_data_2484_V_read2554_phi_phi_fu_106311_p4 = ap_phi_reg_pp0_iter0_data_2484_V_read2554_phi_reg_106307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_63981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_63981_p6 = data_2484_V_read2554_phi_reg_106307.read();
    } else {
        ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_63981_p6 = data_2484_V_read2554_rewind_reg_63977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2485_V_read2555_phi_phi_fu_106324_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2485_V_read2555_phi_phi_fu_106324_p4 = ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_63995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2485_V_read2555_phi_phi_fu_106324_p4 = data_2485_V_read.read();
        } else {
            ap_phi_mux_data_2485_V_read2555_phi_phi_fu_106324_p4 = ap_phi_reg_pp0_iter0_data_2485_V_read2555_phi_reg_106320.read();
        }
    } else {
        ap_phi_mux_data_2485_V_read2555_phi_phi_fu_106324_p4 = ap_phi_reg_pp0_iter0_data_2485_V_read2555_phi_reg_106320.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_63995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_63995_p6 = data_2485_V_read2555_phi_reg_106320.read();
    } else {
        ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_63995_p6 = data_2485_V_read2555_rewind_reg_63991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2486_V_read2556_phi_phi_fu_106337_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2486_V_read2556_phi_phi_fu_106337_p4 = ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_64009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2486_V_read2556_phi_phi_fu_106337_p4 = data_2486_V_read.read();
        } else {
            ap_phi_mux_data_2486_V_read2556_phi_phi_fu_106337_p4 = ap_phi_reg_pp0_iter0_data_2486_V_read2556_phi_reg_106333.read();
        }
    } else {
        ap_phi_mux_data_2486_V_read2556_phi_phi_fu_106337_p4 = ap_phi_reg_pp0_iter0_data_2486_V_read2556_phi_reg_106333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_64009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_64009_p6 = data_2486_V_read2556_phi_reg_106333.read();
    } else {
        ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_64009_p6 = data_2486_V_read2556_rewind_reg_64005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2487_V_read2557_phi_phi_fu_106350_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2487_V_read2557_phi_phi_fu_106350_p4 = ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_64023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2487_V_read2557_phi_phi_fu_106350_p4 = data_2487_V_read.read();
        } else {
            ap_phi_mux_data_2487_V_read2557_phi_phi_fu_106350_p4 = ap_phi_reg_pp0_iter0_data_2487_V_read2557_phi_reg_106346.read();
        }
    } else {
        ap_phi_mux_data_2487_V_read2557_phi_phi_fu_106350_p4 = ap_phi_reg_pp0_iter0_data_2487_V_read2557_phi_reg_106346.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_64023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_64023_p6 = data_2487_V_read2557_phi_reg_106346.read();
    } else {
        ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_64023_p6 = data_2487_V_read2557_rewind_reg_64019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2488_V_read2558_phi_phi_fu_106363_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2488_V_read2558_phi_phi_fu_106363_p4 = ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_64037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2488_V_read2558_phi_phi_fu_106363_p4 = data_2488_V_read.read();
        } else {
            ap_phi_mux_data_2488_V_read2558_phi_phi_fu_106363_p4 = ap_phi_reg_pp0_iter0_data_2488_V_read2558_phi_reg_106359.read();
        }
    } else {
        ap_phi_mux_data_2488_V_read2558_phi_phi_fu_106363_p4 = ap_phi_reg_pp0_iter0_data_2488_V_read2558_phi_reg_106359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_64037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_64037_p6 = data_2488_V_read2558_phi_reg_106359.read();
    } else {
        ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_64037_p6 = data_2488_V_read2558_rewind_reg_64033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2489_V_read2559_phi_phi_fu_106376_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2489_V_read2559_phi_phi_fu_106376_p4 = ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_64051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2489_V_read2559_phi_phi_fu_106376_p4 = data_2489_V_read.read();
        } else {
            ap_phi_mux_data_2489_V_read2559_phi_phi_fu_106376_p4 = ap_phi_reg_pp0_iter0_data_2489_V_read2559_phi_reg_106372.read();
        }
    } else {
        ap_phi_mux_data_2489_V_read2559_phi_phi_fu_106376_p4 = ap_phi_reg_pp0_iter0_data_2489_V_read2559_phi_reg_106372.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_64051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_64051_p6 = data_2489_V_read2559_phi_reg_106372.read();
    } else {
        ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_64051_p6 = data_2489_V_read2559_rewind_reg_64047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_248_V_read318_phi_phi_fu_77243_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_248_V_read318_phi_phi_fu_77243_p4 = ap_phi_mux_data_248_V_read318_rewind_phi_fu_32677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_248_V_read318_phi_phi_fu_77243_p4 = data_248_V_read.read();
        } else {
            ap_phi_mux_data_248_V_read318_phi_phi_fu_77243_p4 = ap_phi_reg_pp0_iter0_data_248_V_read318_phi_reg_77239.read();
        }
    } else {
        ap_phi_mux_data_248_V_read318_phi_phi_fu_77243_p4 = ap_phi_reg_pp0_iter0_data_248_V_read318_phi_reg_77239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_248_V_read318_rewind_phi_fu_32677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_248_V_read318_rewind_phi_fu_32677_p6 = data_248_V_read318_phi_reg_77239.read();
    } else {
        ap_phi_mux_data_248_V_read318_rewind_phi_fu_32677_p6 = data_248_V_read318_rewind_reg_32673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2490_V_read2560_phi_phi_fu_106389_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2490_V_read2560_phi_phi_fu_106389_p4 = ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_64065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2490_V_read2560_phi_phi_fu_106389_p4 = data_2490_V_read.read();
        } else {
            ap_phi_mux_data_2490_V_read2560_phi_phi_fu_106389_p4 = ap_phi_reg_pp0_iter0_data_2490_V_read2560_phi_reg_106385.read();
        }
    } else {
        ap_phi_mux_data_2490_V_read2560_phi_phi_fu_106389_p4 = ap_phi_reg_pp0_iter0_data_2490_V_read2560_phi_reg_106385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_64065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_64065_p6 = data_2490_V_read2560_phi_reg_106385.read();
    } else {
        ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_64065_p6 = data_2490_V_read2560_rewind_reg_64061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2491_V_read2561_phi_phi_fu_106402_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2491_V_read2561_phi_phi_fu_106402_p4 = ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_64079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2491_V_read2561_phi_phi_fu_106402_p4 = data_2491_V_read.read();
        } else {
            ap_phi_mux_data_2491_V_read2561_phi_phi_fu_106402_p4 = ap_phi_reg_pp0_iter0_data_2491_V_read2561_phi_reg_106398.read();
        }
    } else {
        ap_phi_mux_data_2491_V_read2561_phi_phi_fu_106402_p4 = ap_phi_reg_pp0_iter0_data_2491_V_read2561_phi_reg_106398.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_64079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_64079_p6 = data_2491_V_read2561_phi_reg_106398.read();
    } else {
        ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_64079_p6 = data_2491_V_read2561_rewind_reg_64075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2492_V_read2562_phi_phi_fu_106415_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2492_V_read2562_phi_phi_fu_106415_p4 = ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_64093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2492_V_read2562_phi_phi_fu_106415_p4 = data_2492_V_read.read();
        } else {
            ap_phi_mux_data_2492_V_read2562_phi_phi_fu_106415_p4 = ap_phi_reg_pp0_iter0_data_2492_V_read2562_phi_reg_106411.read();
        }
    } else {
        ap_phi_mux_data_2492_V_read2562_phi_phi_fu_106415_p4 = ap_phi_reg_pp0_iter0_data_2492_V_read2562_phi_reg_106411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_64093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_64093_p6 = data_2492_V_read2562_phi_reg_106411.read();
    } else {
        ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_64093_p6 = data_2492_V_read2562_rewind_reg_64089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2493_V_read2563_phi_phi_fu_106428_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2493_V_read2563_phi_phi_fu_106428_p4 = ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_64107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2493_V_read2563_phi_phi_fu_106428_p4 = data_2493_V_read.read();
        } else {
            ap_phi_mux_data_2493_V_read2563_phi_phi_fu_106428_p4 = ap_phi_reg_pp0_iter0_data_2493_V_read2563_phi_reg_106424.read();
        }
    } else {
        ap_phi_mux_data_2493_V_read2563_phi_phi_fu_106428_p4 = ap_phi_reg_pp0_iter0_data_2493_V_read2563_phi_reg_106424.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_64107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_64107_p6 = data_2493_V_read2563_phi_reg_106424.read();
    } else {
        ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_64107_p6 = data_2493_V_read2563_rewind_reg_64103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2494_V_read2564_phi_phi_fu_106441_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2494_V_read2564_phi_phi_fu_106441_p4 = ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_64121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2494_V_read2564_phi_phi_fu_106441_p4 = data_2494_V_read.read();
        } else {
            ap_phi_mux_data_2494_V_read2564_phi_phi_fu_106441_p4 = ap_phi_reg_pp0_iter0_data_2494_V_read2564_phi_reg_106437.read();
        }
    } else {
        ap_phi_mux_data_2494_V_read2564_phi_phi_fu_106441_p4 = ap_phi_reg_pp0_iter0_data_2494_V_read2564_phi_reg_106437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_64121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_64121_p6 = data_2494_V_read2564_phi_reg_106437.read();
    } else {
        ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_64121_p6 = data_2494_V_read2564_rewind_reg_64117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2495_V_read2565_phi_phi_fu_106454_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2495_V_read2565_phi_phi_fu_106454_p4 = ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_64135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2495_V_read2565_phi_phi_fu_106454_p4 = data_2495_V_read.read();
        } else {
            ap_phi_mux_data_2495_V_read2565_phi_phi_fu_106454_p4 = ap_phi_reg_pp0_iter0_data_2495_V_read2565_phi_reg_106450.read();
        }
    } else {
        ap_phi_mux_data_2495_V_read2565_phi_phi_fu_106454_p4 = ap_phi_reg_pp0_iter0_data_2495_V_read2565_phi_reg_106450.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_64135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_64135_p6 = data_2495_V_read2565_phi_reg_106450.read();
    } else {
        ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_64135_p6 = data_2495_V_read2565_rewind_reg_64131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2496_V_read2566_phi_phi_fu_106467_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2496_V_read2566_phi_phi_fu_106467_p4 = ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_64149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2496_V_read2566_phi_phi_fu_106467_p4 = data_2496_V_read.read();
        } else {
            ap_phi_mux_data_2496_V_read2566_phi_phi_fu_106467_p4 = ap_phi_reg_pp0_iter0_data_2496_V_read2566_phi_reg_106463.read();
        }
    } else {
        ap_phi_mux_data_2496_V_read2566_phi_phi_fu_106467_p4 = ap_phi_reg_pp0_iter0_data_2496_V_read2566_phi_reg_106463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_64149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_64149_p6 = data_2496_V_read2566_phi_reg_106463.read();
    } else {
        ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_64149_p6 = data_2496_V_read2566_rewind_reg_64145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2497_V_read2567_phi_phi_fu_106480_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2497_V_read2567_phi_phi_fu_106480_p4 = ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_64163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2497_V_read2567_phi_phi_fu_106480_p4 = data_2497_V_read.read();
        } else {
            ap_phi_mux_data_2497_V_read2567_phi_phi_fu_106480_p4 = ap_phi_reg_pp0_iter0_data_2497_V_read2567_phi_reg_106476.read();
        }
    } else {
        ap_phi_mux_data_2497_V_read2567_phi_phi_fu_106480_p4 = ap_phi_reg_pp0_iter0_data_2497_V_read2567_phi_reg_106476.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_64163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_64163_p6 = data_2497_V_read2567_phi_reg_106476.read();
    } else {
        ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_64163_p6 = data_2497_V_read2567_rewind_reg_64159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2498_V_read2568_phi_phi_fu_106493_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2498_V_read2568_phi_phi_fu_106493_p4 = ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_64177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2498_V_read2568_phi_phi_fu_106493_p4 = data_2498_V_read.read();
        } else {
            ap_phi_mux_data_2498_V_read2568_phi_phi_fu_106493_p4 = ap_phi_reg_pp0_iter0_data_2498_V_read2568_phi_reg_106489.read();
        }
    } else {
        ap_phi_mux_data_2498_V_read2568_phi_phi_fu_106493_p4 = ap_phi_reg_pp0_iter0_data_2498_V_read2568_phi_reg_106489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_64177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_64177_p6 = data_2498_V_read2568_phi_reg_106489.read();
    } else {
        ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_64177_p6 = data_2498_V_read2568_rewind_reg_64173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2499_V_read2569_phi_phi_fu_106506_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2499_V_read2569_phi_phi_fu_106506_p4 = ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_64191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2499_V_read2569_phi_phi_fu_106506_p4 = data_2499_V_read.read();
        } else {
            ap_phi_mux_data_2499_V_read2569_phi_phi_fu_106506_p4 = ap_phi_reg_pp0_iter0_data_2499_V_read2569_phi_reg_106502.read();
        }
    } else {
        ap_phi_mux_data_2499_V_read2569_phi_phi_fu_106506_p4 = ap_phi_reg_pp0_iter0_data_2499_V_read2569_phi_reg_106502.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_64191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_64191_p6 = data_2499_V_read2569_phi_reg_106502.read();
    } else {
        ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_64191_p6 = data_2499_V_read2569_rewind_reg_64187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_249_V_read319_phi_phi_fu_77256_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_249_V_read319_phi_phi_fu_77256_p4 = ap_phi_mux_data_249_V_read319_rewind_phi_fu_32691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_249_V_read319_phi_phi_fu_77256_p4 = data_249_V_read.read();
        } else {
            ap_phi_mux_data_249_V_read319_phi_phi_fu_77256_p4 = ap_phi_reg_pp0_iter0_data_249_V_read319_phi_reg_77252.read();
        }
    } else {
        ap_phi_mux_data_249_V_read319_phi_phi_fu_77256_p4 = ap_phi_reg_pp0_iter0_data_249_V_read319_phi_reg_77252.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_249_V_read319_rewind_phi_fu_32691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_249_V_read319_rewind_phi_fu_32691_p6 = data_249_V_read319_phi_reg_77252.read();
    } else {
        ap_phi_mux_data_249_V_read319_rewind_phi_fu_32691_p6 = data_249_V_read319_rewind_reg_32687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_24_V_read94_phi_phi_fu_74331_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_24_V_read94_phi_phi_fu_74331_p4 = ap_phi_mux_data_24_V_read94_rewind_phi_fu_29541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_24_V_read94_phi_phi_fu_74331_p4 = data_24_V_read.read();
        } else {
            ap_phi_mux_data_24_V_read94_phi_phi_fu_74331_p4 = ap_phi_reg_pp0_iter0_data_24_V_read94_phi_reg_74327.read();
        }
    } else {
        ap_phi_mux_data_24_V_read94_phi_phi_fu_74331_p4 = ap_phi_reg_pp0_iter0_data_24_V_read94_phi_reg_74327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_24_V_read94_rewind_phi_fu_29541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_24_V_read94_rewind_phi_fu_29541_p6 = data_24_V_read94_phi_reg_74327.read();
    } else {
        ap_phi_mux_data_24_V_read94_rewind_phi_fu_29541_p6 = data_24_V_read94_rewind_reg_29537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2500_V_read2570_phi_phi_fu_106519_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2500_V_read2570_phi_phi_fu_106519_p4 = ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_64205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2500_V_read2570_phi_phi_fu_106519_p4 = data_2500_V_read.read();
        } else {
            ap_phi_mux_data_2500_V_read2570_phi_phi_fu_106519_p4 = ap_phi_reg_pp0_iter0_data_2500_V_read2570_phi_reg_106515.read();
        }
    } else {
        ap_phi_mux_data_2500_V_read2570_phi_phi_fu_106519_p4 = ap_phi_reg_pp0_iter0_data_2500_V_read2570_phi_reg_106515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_64205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_64205_p6 = data_2500_V_read2570_phi_reg_106515.read();
    } else {
        ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_64205_p6 = data_2500_V_read2570_rewind_reg_64201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2501_V_read2571_phi_phi_fu_106532_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2501_V_read2571_phi_phi_fu_106532_p4 = ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_64219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2501_V_read2571_phi_phi_fu_106532_p4 = data_2501_V_read.read();
        } else {
            ap_phi_mux_data_2501_V_read2571_phi_phi_fu_106532_p4 = ap_phi_reg_pp0_iter0_data_2501_V_read2571_phi_reg_106528.read();
        }
    } else {
        ap_phi_mux_data_2501_V_read2571_phi_phi_fu_106532_p4 = ap_phi_reg_pp0_iter0_data_2501_V_read2571_phi_reg_106528.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_64219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_64219_p6 = data_2501_V_read2571_phi_reg_106528.read();
    } else {
        ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_64219_p6 = data_2501_V_read2571_rewind_reg_64215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2502_V_read2572_phi_phi_fu_106545_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2502_V_read2572_phi_phi_fu_106545_p4 = ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_64233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2502_V_read2572_phi_phi_fu_106545_p4 = data_2502_V_read.read();
        } else {
            ap_phi_mux_data_2502_V_read2572_phi_phi_fu_106545_p4 = ap_phi_reg_pp0_iter0_data_2502_V_read2572_phi_reg_106541.read();
        }
    } else {
        ap_phi_mux_data_2502_V_read2572_phi_phi_fu_106545_p4 = ap_phi_reg_pp0_iter0_data_2502_V_read2572_phi_reg_106541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_64233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_64233_p6 = data_2502_V_read2572_phi_reg_106541.read();
    } else {
        ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_64233_p6 = data_2502_V_read2572_rewind_reg_64229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2503_V_read2573_phi_phi_fu_106558_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2503_V_read2573_phi_phi_fu_106558_p4 = ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_64247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2503_V_read2573_phi_phi_fu_106558_p4 = data_2503_V_read.read();
        } else {
            ap_phi_mux_data_2503_V_read2573_phi_phi_fu_106558_p4 = ap_phi_reg_pp0_iter0_data_2503_V_read2573_phi_reg_106554.read();
        }
    } else {
        ap_phi_mux_data_2503_V_read2573_phi_phi_fu_106558_p4 = ap_phi_reg_pp0_iter0_data_2503_V_read2573_phi_reg_106554.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_64247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_64247_p6 = data_2503_V_read2573_phi_reg_106554.read();
    } else {
        ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_64247_p6 = data_2503_V_read2573_rewind_reg_64243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2504_V_read2574_phi_phi_fu_106571_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2504_V_read2574_phi_phi_fu_106571_p4 = ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_64261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2504_V_read2574_phi_phi_fu_106571_p4 = data_2504_V_read.read();
        } else {
            ap_phi_mux_data_2504_V_read2574_phi_phi_fu_106571_p4 = ap_phi_reg_pp0_iter0_data_2504_V_read2574_phi_reg_106567.read();
        }
    } else {
        ap_phi_mux_data_2504_V_read2574_phi_phi_fu_106571_p4 = ap_phi_reg_pp0_iter0_data_2504_V_read2574_phi_reg_106567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_64261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_64261_p6 = data_2504_V_read2574_phi_reg_106567.read();
    } else {
        ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_64261_p6 = data_2504_V_read2574_rewind_reg_64257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2505_V_read2575_phi_phi_fu_106584_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2505_V_read2575_phi_phi_fu_106584_p4 = ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_64275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2505_V_read2575_phi_phi_fu_106584_p4 = data_2505_V_read.read();
        } else {
            ap_phi_mux_data_2505_V_read2575_phi_phi_fu_106584_p4 = ap_phi_reg_pp0_iter0_data_2505_V_read2575_phi_reg_106580.read();
        }
    } else {
        ap_phi_mux_data_2505_V_read2575_phi_phi_fu_106584_p4 = ap_phi_reg_pp0_iter0_data_2505_V_read2575_phi_reg_106580.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_64275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_64275_p6 = data_2505_V_read2575_phi_reg_106580.read();
    } else {
        ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_64275_p6 = data_2505_V_read2575_rewind_reg_64271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2506_V_read2576_phi_phi_fu_106597_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2506_V_read2576_phi_phi_fu_106597_p4 = ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_64289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2506_V_read2576_phi_phi_fu_106597_p4 = data_2506_V_read.read();
        } else {
            ap_phi_mux_data_2506_V_read2576_phi_phi_fu_106597_p4 = ap_phi_reg_pp0_iter0_data_2506_V_read2576_phi_reg_106593.read();
        }
    } else {
        ap_phi_mux_data_2506_V_read2576_phi_phi_fu_106597_p4 = ap_phi_reg_pp0_iter0_data_2506_V_read2576_phi_reg_106593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_64289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_64289_p6 = data_2506_V_read2576_phi_reg_106593.read();
    } else {
        ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_64289_p6 = data_2506_V_read2576_rewind_reg_64285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2507_V_read2577_phi_phi_fu_106610_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2507_V_read2577_phi_phi_fu_106610_p4 = ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_64303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2507_V_read2577_phi_phi_fu_106610_p4 = data_2507_V_read.read();
        } else {
            ap_phi_mux_data_2507_V_read2577_phi_phi_fu_106610_p4 = ap_phi_reg_pp0_iter0_data_2507_V_read2577_phi_reg_106606.read();
        }
    } else {
        ap_phi_mux_data_2507_V_read2577_phi_phi_fu_106610_p4 = ap_phi_reg_pp0_iter0_data_2507_V_read2577_phi_reg_106606.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_64303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_64303_p6 = data_2507_V_read2577_phi_reg_106606.read();
    } else {
        ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_64303_p6 = data_2507_V_read2577_rewind_reg_64299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2508_V_read2578_phi_phi_fu_106623_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2508_V_read2578_phi_phi_fu_106623_p4 = ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_64317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2508_V_read2578_phi_phi_fu_106623_p4 = data_2508_V_read.read();
        } else {
            ap_phi_mux_data_2508_V_read2578_phi_phi_fu_106623_p4 = ap_phi_reg_pp0_iter0_data_2508_V_read2578_phi_reg_106619.read();
        }
    } else {
        ap_phi_mux_data_2508_V_read2578_phi_phi_fu_106623_p4 = ap_phi_reg_pp0_iter0_data_2508_V_read2578_phi_reg_106619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_64317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_64317_p6 = data_2508_V_read2578_phi_reg_106619.read();
    } else {
        ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_64317_p6 = data_2508_V_read2578_rewind_reg_64313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2509_V_read2579_phi_phi_fu_106636_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2509_V_read2579_phi_phi_fu_106636_p4 = ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_64331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2509_V_read2579_phi_phi_fu_106636_p4 = data_2509_V_read.read();
        } else {
            ap_phi_mux_data_2509_V_read2579_phi_phi_fu_106636_p4 = ap_phi_reg_pp0_iter0_data_2509_V_read2579_phi_reg_106632.read();
        }
    } else {
        ap_phi_mux_data_2509_V_read2579_phi_phi_fu_106636_p4 = ap_phi_reg_pp0_iter0_data_2509_V_read2579_phi_reg_106632.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_64331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_64331_p6 = data_2509_V_read2579_phi_reg_106632.read();
    } else {
        ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_64331_p6 = data_2509_V_read2579_rewind_reg_64327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_250_V_read320_phi_phi_fu_77269_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_250_V_read320_phi_phi_fu_77269_p4 = ap_phi_mux_data_250_V_read320_rewind_phi_fu_32705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_250_V_read320_phi_phi_fu_77269_p4 = data_250_V_read.read();
        } else {
            ap_phi_mux_data_250_V_read320_phi_phi_fu_77269_p4 = ap_phi_reg_pp0_iter0_data_250_V_read320_phi_reg_77265.read();
        }
    } else {
        ap_phi_mux_data_250_V_read320_phi_phi_fu_77269_p4 = ap_phi_reg_pp0_iter0_data_250_V_read320_phi_reg_77265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_250_V_read320_rewind_phi_fu_32705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_250_V_read320_rewind_phi_fu_32705_p6 = data_250_V_read320_phi_reg_77265.read();
    } else {
        ap_phi_mux_data_250_V_read320_rewind_phi_fu_32705_p6 = data_250_V_read320_rewind_reg_32701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2510_V_read2580_phi_phi_fu_106649_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2510_V_read2580_phi_phi_fu_106649_p4 = ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_64345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2510_V_read2580_phi_phi_fu_106649_p4 = data_2510_V_read.read();
        } else {
            ap_phi_mux_data_2510_V_read2580_phi_phi_fu_106649_p4 = ap_phi_reg_pp0_iter0_data_2510_V_read2580_phi_reg_106645.read();
        }
    } else {
        ap_phi_mux_data_2510_V_read2580_phi_phi_fu_106649_p4 = ap_phi_reg_pp0_iter0_data_2510_V_read2580_phi_reg_106645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_64345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_64345_p6 = data_2510_V_read2580_phi_reg_106645.read();
    } else {
        ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_64345_p6 = data_2510_V_read2580_rewind_reg_64341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2511_V_read2581_phi_phi_fu_106662_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2511_V_read2581_phi_phi_fu_106662_p4 = ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_64359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2511_V_read2581_phi_phi_fu_106662_p4 = data_2511_V_read.read();
        } else {
            ap_phi_mux_data_2511_V_read2581_phi_phi_fu_106662_p4 = ap_phi_reg_pp0_iter0_data_2511_V_read2581_phi_reg_106658.read();
        }
    } else {
        ap_phi_mux_data_2511_V_read2581_phi_phi_fu_106662_p4 = ap_phi_reg_pp0_iter0_data_2511_V_read2581_phi_reg_106658.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_64359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_64359_p6 = data_2511_V_read2581_phi_reg_106658.read();
    } else {
        ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_64359_p6 = data_2511_V_read2581_rewind_reg_64355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2512_V_read2582_phi_phi_fu_106675_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2512_V_read2582_phi_phi_fu_106675_p4 = ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_64373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2512_V_read2582_phi_phi_fu_106675_p4 = data_2512_V_read.read();
        } else {
            ap_phi_mux_data_2512_V_read2582_phi_phi_fu_106675_p4 = ap_phi_reg_pp0_iter0_data_2512_V_read2582_phi_reg_106671.read();
        }
    } else {
        ap_phi_mux_data_2512_V_read2582_phi_phi_fu_106675_p4 = ap_phi_reg_pp0_iter0_data_2512_V_read2582_phi_reg_106671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_64373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_64373_p6 = data_2512_V_read2582_phi_reg_106671.read();
    } else {
        ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_64373_p6 = data_2512_V_read2582_rewind_reg_64369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2513_V_read2583_phi_phi_fu_106688_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2513_V_read2583_phi_phi_fu_106688_p4 = ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_64387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2513_V_read2583_phi_phi_fu_106688_p4 = data_2513_V_read.read();
        } else {
            ap_phi_mux_data_2513_V_read2583_phi_phi_fu_106688_p4 = ap_phi_reg_pp0_iter0_data_2513_V_read2583_phi_reg_106684.read();
        }
    } else {
        ap_phi_mux_data_2513_V_read2583_phi_phi_fu_106688_p4 = ap_phi_reg_pp0_iter0_data_2513_V_read2583_phi_reg_106684.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_64387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_64387_p6 = data_2513_V_read2583_phi_reg_106684.read();
    } else {
        ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_64387_p6 = data_2513_V_read2583_rewind_reg_64383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2514_V_read2584_phi_phi_fu_106701_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2514_V_read2584_phi_phi_fu_106701_p4 = ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_64401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2514_V_read2584_phi_phi_fu_106701_p4 = data_2514_V_read.read();
        } else {
            ap_phi_mux_data_2514_V_read2584_phi_phi_fu_106701_p4 = ap_phi_reg_pp0_iter0_data_2514_V_read2584_phi_reg_106697.read();
        }
    } else {
        ap_phi_mux_data_2514_V_read2584_phi_phi_fu_106701_p4 = ap_phi_reg_pp0_iter0_data_2514_V_read2584_phi_reg_106697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_64401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_64401_p6 = data_2514_V_read2584_phi_reg_106697.read();
    } else {
        ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_64401_p6 = data_2514_V_read2584_rewind_reg_64397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2515_V_read2585_phi_phi_fu_106714_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2515_V_read2585_phi_phi_fu_106714_p4 = ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_64415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2515_V_read2585_phi_phi_fu_106714_p4 = data_2515_V_read.read();
        } else {
            ap_phi_mux_data_2515_V_read2585_phi_phi_fu_106714_p4 = ap_phi_reg_pp0_iter0_data_2515_V_read2585_phi_reg_106710.read();
        }
    } else {
        ap_phi_mux_data_2515_V_read2585_phi_phi_fu_106714_p4 = ap_phi_reg_pp0_iter0_data_2515_V_read2585_phi_reg_106710.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_64415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_64415_p6 = data_2515_V_read2585_phi_reg_106710.read();
    } else {
        ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_64415_p6 = data_2515_V_read2585_rewind_reg_64411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2516_V_read2586_phi_phi_fu_106727_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2516_V_read2586_phi_phi_fu_106727_p4 = ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_64429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2516_V_read2586_phi_phi_fu_106727_p4 = data_2516_V_read.read();
        } else {
            ap_phi_mux_data_2516_V_read2586_phi_phi_fu_106727_p4 = ap_phi_reg_pp0_iter0_data_2516_V_read2586_phi_reg_106723.read();
        }
    } else {
        ap_phi_mux_data_2516_V_read2586_phi_phi_fu_106727_p4 = ap_phi_reg_pp0_iter0_data_2516_V_read2586_phi_reg_106723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_64429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_64429_p6 = data_2516_V_read2586_phi_reg_106723.read();
    } else {
        ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_64429_p6 = data_2516_V_read2586_rewind_reg_64425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2517_V_read2587_phi_phi_fu_106740_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2517_V_read2587_phi_phi_fu_106740_p4 = ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_64443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2517_V_read2587_phi_phi_fu_106740_p4 = data_2517_V_read.read();
        } else {
            ap_phi_mux_data_2517_V_read2587_phi_phi_fu_106740_p4 = ap_phi_reg_pp0_iter0_data_2517_V_read2587_phi_reg_106736.read();
        }
    } else {
        ap_phi_mux_data_2517_V_read2587_phi_phi_fu_106740_p4 = ap_phi_reg_pp0_iter0_data_2517_V_read2587_phi_reg_106736.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_64443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_64443_p6 = data_2517_V_read2587_phi_reg_106736.read();
    } else {
        ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_64443_p6 = data_2517_V_read2587_rewind_reg_64439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2518_V_read2588_phi_phi_fu_106753_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2518_V_read2588_phi_phi_fu_106753_p4 = ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_64457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2518_V_read2588_phi_phi_fu_106753_p4 = data_2518_V_read.read();
        } else {
            ap_phi_mux_data_2518_V_read2588_phi_phi_fu_106753_p4 = ap_phi_reg_pp0_iter0_data_2518_V_read2588_phi_reg_106749.read();
        }
    } else {
        ap_phi_mux_data_2518_V_read2588_phi_phi_fu_106753_p4 = ap_phi_reg_pp0_iter0_data_2518_V_read2588_phi_reg_106749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_64457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_64457_p6 = data_2518_V_read2588_phi_reg_106749.read();
    } else {
        ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_64457_p6 = data_2518_V_read2588_rewind_reg_64453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2519_V_read2589_phi_phi_fu_106766_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2519_V_read2589_phi_phi_fu_106766_p4 = ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_64471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2519_V_read2589_phi_phi_fu_106766_p4 = data_2519_V_read.read();
        } else {
            ap_phi_mux_data_2519_V_read2589_phi_phi_fu_106766_p4 = ap_phi_reg_pp0_iter0_data_2519_V_read2589_phi_reg_106762.read();
        }
    } else {
        ap_phi_mux_data_2519_V_read2589_phi_phi_fu_106766_p4 = ap_phi_reg_pp0_iter0_data_2519_V_read2589_phi_reg_106762.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_64471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_64471_p6 = data_2519_V_read2589_phi_reg_106762.read();
    } else {
        ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_64471_p6 = data_2519_V_read2589_rewind_reg_64467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_251_V_read321_phi_phi_fu_77282_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_251_V_read321_phi_phi_fu_77282_p4 = ap_phi_mux_data_251_V_read321_rewind_phi_fu_32719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_251_V_read321_phi_phi_fu_77282_p4 = data_251_V_read.read();
        } else {
            ap_phi_mux_data_251_V_read321_phi_phi_fu_77282_p4 = ap_phi_reg_pp0_iter0_data_251_V_read321_phi_reg_77278.read();
        }
    } else {
        ap_phi_mux_data_251_V_read321_phi_phi_fu_77282_p4 = ap_phi_reg_pp0_iter0_data_251_V_read321_phi_reg_77278.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_251_V_read321_rewind_phi_fu_32719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_251_V_read321_rewind_phi_fu_32719_p6 = data_251_V_read321_phi_reg_77278.read();
    } else {
        ap_phi_mux_data_251_V_read321_rewind_phi_fu_32719_p6 = data_251_V_read321_rewind_reg_32715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2520_V_read2590_phi_phi_fu_106779_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2520_V_read2590_phi_phi_fu_106779_p4 = ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_64485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2520_V_read2590_phi_phi_fu_106779_p4 = data_2520_V_read.read();
        } else {
            ap_phi_mux_data_2520_V_read2590_phi_phi_fu_106779_p4 = ap_phi_reg_pp0_iter0_data_2520_V_read2590_phi_reg_106775.read();
        }
    } else {
        ap_phi_mux_data_2520_V_read2590_phi_phi_fu_106779_p4 = ap_phi_reg_pp0_iter0_data_2520_V_read2590_phi_reg_106775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_64485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_64485_p6 = data_2520_V_read2590_phi_reg_106775.read();
    } else {
        ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_64485_p6 = data_2520_V_read2590_rewind_reg_64481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2521_V_read2591_phi_phi_fu_106792_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2521_V_read2591_phi_phi_fu_106792_p4 = ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_64499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2521_V_read2591_phi_phi_fu_106792_p4 = data_2521_V_read.read();
        } else {
            ap_phi_mux_data_2521_V_read2591_phi_phi_fu_106792_p4 = ap_phi_reg_pp0_iter0_data_2521_V_read2591_phi_reg_106788.read();
        }
    } else {
        ap_phi_mux_data_2521_V_read2591_phi_phi_fu_106792_p4 = ap_phi_reg_pp0_iter0_data_2521_V_read2591_phi_reg_106788.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_64499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_64499_p6 = data_2521_V_read2591_phi_reg_106788.read();
    } else {
        ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_64499_p6 = data_2521_V_read2591_rewind_reg_64495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2522_V_read2592_phi_phi_fu_106805_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2522_V_read2592_phi_phi_fu_106805_p4 = ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_64513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2522_V_read2592_phi_phi_fu_106805_p4 = data_2522_V_read.read();
        } else {
            ap_phi_mux_data_2522_V_read2592_phi_phi_fu_106805_p4 = ap_phi_reg_pp0_iter0_data_2522_V_read2592_phi_reg_106801.read();
        }
    } else {
        ap_phi_mux_data_2522_V_read2592_phi_phi_fu_106805_p4 = ap_phi_reg_pp0_iter0_data_2522_V_read2592_phi_reg_106801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_64513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_64513_p6 = data_2522_V_read2592_phi_reg_106801.read();
    } else {
        ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_64513_p6 = data_2522_V_read2592_rewind_reg_64509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2523_V_read2593_phi_phi_fu_106818_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2523_V_read2593_phi_phi_fu_106818_p4 = ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_64527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2523_V_read2593_phi_phi_fu_106818_p4 = data_2523_V_read.read();
        } else {
            ap_phi_mux_data_2523_V_read2593_phi_phi_fu_106818_p4 = ap_phi_reg_pp0_iter0_data_2523_V_read2593_phi_reg_106814.read();
        }
    } else {
        ap_phi_mux_data_2523_V_read2593_phi_phi_fu_106818_p4 = ap_phi_reg_pp0_iter0_data_2523_V_read2593_phi_reg_106814.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_64527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_64527_p6 = data_2523_V_read2593_phi_reg_106814.read();
    } else {
        ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_64527_p6 = data_2523_V_read2593_rewind_reg_64523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2524_V_read2594_phi_phi_fu_106831_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2524_V_read2594_phi_phi_fu_106831_p4 = ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_64541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2524_V_read2594_phi_phi_fu_106831_p4 = data_2524_V_read.read();
        } else {
            ap_phi_mux_data_2524_V_read2594_phi_phi_fu_106831_p4 = ap_phi_reg_pp0_iter0_data_2524_V_read2594_phi_reg_106827.read();
        }
    } else {
        ap_phi_mux_data_2524_V_read2594_phi_phi_fu_106831_p4 = ap_phi_reg_pp0_iter0_data_2524_V_read2594_phi_reg_106827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_64541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_64541_p6 = data_2524_V_read2594_phi_reg_106827.read();
    } else {
        ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_64541_p6 = data_2524_V_read2594_rewind_reg_64537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2525_V_read2595_phi_phi_fu_106844_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2525_V_read2595_phi_phi_fu_106844_p4 = ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_64555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2525_V_read2595_phi_phi_fu_106844_p4 = data_2525_V_read.read();
        } else {
            ap_phi_mux_data_2525_V_read2595_phi_phi_fu_106844_p4 = ap_phi_reg_pp0_iter0_data_2525_V_read2595_phi_reg_106840.read();
        }
    } else {
        ap_phi_mux_data_2525_V_read2595_phi_phi_fu_106844_p4 = ap_phi_reg_pp0_iter0_data_2525_V_read2595_phi_reg_106840.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_64555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_64555_p6 = data_2525_V_read2595_phi_reg_106840.read();
    } else {
        ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_64555_p6 = data_2525_V_read2595_rewind_reg_64551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2526_V_read2596_phi_phi_fu_106857_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2526_V_read2596_phi_phi_fu_106857_p4 = ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_64569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2526_V_read2596_phi_phi_fu_106857_p4 = data_2526_V_read.read();
        } else {
            ap_phi_mux_data_2526_V_read2596_phi_phi_fu_106857_p4 = ap_phi_reg_pp0_iter0_data_2526_V_read2596_phi_reg_106853.read();
        }
    } else {
        ap_phi_mux_data_2526_V_read2596_phi_phi_fu_106857_p4 = ap_phi_reg_pp0_iter0_data_2526_V_read2596_phi_reg_106853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_64569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_64569_p6 = data_2526_V_read2596_phi_reg_106853.read();
    } else {
        ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_64569_p6 = data_2526_V_read2596_rewind_reg_64565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2527_V_read2597_phi_phi_fu_106870_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2527_V_read2597_phi_phi_fu_106870_p4 = ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_64583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2527_V_read2597_phi_phi_fu_106870_p4 = data_2527_V_read.read();
        } else {
            ap_phi_mux_data_2527_V_read2597_phi_phi_fu_106870_p4 = ap_phi_reg_pp0_iter0_data_2527_V_read2597_phi_reg_106866.read();
        }
    } else {
        ap_phi_mux_data_2527_V_read2597_phi_phi_fu_106870_p4 = ap_phi_reg_pp0_iter0_data_2527_V_read2597_phi_reg_106866.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_64583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_64583_p6 = data_2527_V_read2597_phi_reg_106866.read();
    } else {
        ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_64583_p6 = data_2527_V_read2597_rewind_reg_64579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2528_V_read2598_phi_phi_fu_106883_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2528_V_read2598_phi_phi_fu_106883_p4 = ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_64597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2528_V_read2598_phi_phi_fu_106883_p4 = data_2528_V_read.read();
        } else {
            ap_phi_mux_data_2528_V_read2598_phi_phi_fu_106883_p4 = ap_phi_reg_pp0_iter0_data_2528_V_read2598_phi_reg_106879.read();
        }
    } else {
        ap_phi_mux_data_2528_V_read2598_phi_phi_fu_106883_p4 = ap_phi_reg_pp0_iter0_data_2528_V_read2598_phi_reg_106879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_64597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_64597_p6 = data_2528_V_read2598_phi_reg_106879.read();
    } else {
        ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_64597_p6 = data_2528_V_read2598_rewind_reg_64593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2529_V_read2599_phi_phi_fu_106896_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2529_V_read2599_phi_phi_fu_106896_p4 = ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_64611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2529_V_read2599_phi_phi_fu_106896_p4 = data_2529_V_read.read();
        } else {
            ap_phi_mux_data_2529_V_read2599_phi_phi_fu_106896_p4 = ap_phi_reg_pp0_iter0_data_2529_V_read2599_phi_reg_106892.read();
        }
    } else {
        ap_phi_mux_data_2529_V_read2599_phi_phi_fu_106896_p4 = ap_phi_reg_pp0_iter0_data_2529_V_read2599_phi_reg_106892.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_64611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_64611_p6 = data_2529_V_read2599_phi_reg_106892.read();
    } else {
        ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_64611_p6 = data_2529_V_read2599_rewind_reg_64607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_252_V_read322_phi_phi_fu_77295_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_252_V_read322_phi_phi_fu_77295_p4 = ap_phi_mux_data_252_V_read322_rewind_phi_fu_32733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_252_V_read322_phi_phi_fu_77295_p4 = data_252_V_read.read();
        } else {
            ap_phi_mux_data_252_V_read322_phi_phi_fu_77295_p4 = ap_phi_reg_pp0_iter0_data_252_V_read322_phi_reg_77291.read();
        }
    } else {
        ap_phi_mux_data_252_V_read322_phi_phi_fu_77295_p4 = ap_phi_reg_pp0_iter0_data_252_V_read322_phi_reg_77291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_252_V_read322_rewind_phi_fu_32733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_252_V_read322_rewind_phi_fu_32733_p6 = data_252_V_read322_phi_reg_77291.read();
    } else {
        ap_phi_mux_data_252_V_read322_rewind_phi_fu_32733_p6 = data_252_V_read322_rewind_reg_32729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2530_V_read2600_phi_phi_fu_106909_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2530_V_read2600_phi_phi_fu_106909_p4 = ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_64625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2530_V_read2600_phi_phi_fu_106909_p4 = data_2530_V_read.read();
        } else {
            ap_phi_mux_data_2530_V_read2600_phi_phi_fu_106909_p4 = ap_phi_reg_pp0_iter0_data_2530_V_read2600_phi_reg_106905.read();
        }
    } else {
        ap_phi_mux_data_2530_V_read2600_phi_phi_fu_106909_p4 = ap_phi_reg_pp0_iter0_data_2530_V_read2600_phi_reg_106905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_64625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_64625_p6 = data_2530_V_read2600_phi_reg_106905.read();
    } else {
        ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_64625_p6 = data_2530_V_read2600_rewind_reg_64621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2531_V_read2601_phi_phi_fu_106922_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2531_V_read2601_phi_phi_fu_106922_p4 = ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_64639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2531_V_read2601_phi_phi_fu_106922_p4 = data_2531_V_read.read();
        } else {
            ap_phi_mux_data_2531_V_read2601_phi_phi_fu_106922_p4 = ap_phi_reg_pp0_iter0_data_2531_V_read2601_phi_reg_106918.read();
        }
    } else {
        ap_phi_mux_data_2531_V_read2601_phi_phi_fu_106922_p4 = ap_phi_reg_pp0_iter0_data_2531_V_read2601_phi_reg_106918.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_64639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_64639_p6 = data_2531_V_read2601_phi_reg_106918.read();
    } else {
        ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_64639_p6 = data_2531_V_read2601_rewind_reg_64635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2532_V_read2602_phi_phi_fu_106935_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2532_V_read2602_phi_phi_fu_106935_p4 = ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_64653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2532_V_read2602_phi_phi_fu_106935_p4 = data_2532_V_read.read();
        } else {
            ap_phi_mux_data_2532_V_read2602_phi_phi_fu_106935_p4 = ap_phi_reg_pp0_iter0_data_2532_V_read2602_phi_reg_106931.read();
        }
    } else {
        ap_phi_mux_data_2532_V_read2602_phi_phi_fu_106935_p4 = ap_phi_reg_pp0_iter0_data_2532_V_read2602_phi_reg_106931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_64653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_64653_p6 = data_2532_V_read2602_phi_reg_106931.read();
    } else {
        ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_64653_p6 = data_2532_V_read2602_rewind_reg_64649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2533_V_read2603_phi_phi_fu_106948_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2533_V_read2603_phi_phi_fu_106948_p4 = ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_64667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2533_V_read2603_phi_phi_fu_106948_p4 = data_2533_V_read.read();
        } else {
            ap_phi_mux_data_2533_V_read2603_phi_phi_fu_106948_p4 = ap_phi_reg_pp0_iter0_data_2533_V_read2603_phi_reg_106944.read();
        }
    } else {
        ap_phi_mux_data_2533_V_read2603_phi_phi_fu_106948_p4 = ap_phi_reg_pp0_iter0_data_2533_V_read2603_phi_reg_106944.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_64667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_64667_p6 = data_2533_V_read2603_phi_reg_106944.read();
    } else {
        ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_64667_p6 = data_2533_V_read2603_rewind_reg_64663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2534_V_read2604_phi_phi_fu_106961_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2534_V_read2604_phi_phi_fu_106961_p4 = ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_64681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2534_V_read2604_phi_phi_fu_106961_p4 = data_2534_V_read.read();
        } else {
            ap_phi_mux_data_2534_V_read2604_phi_phi_fu_106961_p4 = ap_phi_reg_pp0_iter0_data_2534_V_read2604_phi_reg_106957.read();
        }
    } else {
        ap_phi_mux_data_2534_V_read2604_phi_phi_fu_106961_p4 = ap_phi_reg_pp0_iter0_data_2534_V_read2604_phi_reg_106957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_64681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_64681_p6 = data_2534_V_read2604_phi_reg_106957.read();
    } else {
        ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_64681_p6 = data_2534_V_read2604_rewind_reg_64677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2535_V_read2605_phi_phi_fu_106974_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2535_V_read2605_phi_phi_fu_106974_p4 = ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_64695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2535_V_read2605_phi_phi_fu_106974_p4 = data_2535_V_read.read();
        } else {
            ap_phi_mux_data_2535_V_read2605_phi_phi_fu_106974_p4 = ap_phi_reg_pp0_iter0_data_2535_V_read2605_phi_reg_106970.read();
        }
    } else {
        ap_phi_mux_data_2535_V_read2605_phi_phi_fu_106974_p4 = ap_phi_reg_pp0_iter0_data_2535_V_read2605_phi_reg_106970.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_64695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_64695_p6 = data_2535_V_read2605_phi_reg_106970.read();
    } else {
        ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_64695_p6 = data_2535_V_read2605_rewind_reg_64691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2536_V_read2606_phi_phi_fu_106987_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2536_V_read2606_phi_phi_fu_106987_p4 = ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_64709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2536_V_read2606_phi_phi_fu_106987_p4 = data_2536_V_read.read();
        } else {
            ap_phi_mux_data_2536_V_read2606_phi_phi_fu_106987_p4 = ap_phi_reg_pp0_iter0_data_2536_V_read2606_phi_reg_106983.read();
        }
    } else {
        ap_phi_mux_data_2536_V_read2606_phi_phi_fu_106987_p4 = ap_phi_reg_pp0_iter0_data_2536_V_read2606_phi_reg_106983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_64709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_64709_p6 = data_2536_V_read2606_phi_reg_106983.read();
    } else {
        ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_64709_p6 = data_2536_V_read2606_rewind_reg_64705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2537_V_read2607_phi_phi_fu_107000_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2537_V_read2607_phi_phi_fu_107000_p4 = ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_64723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2537_V_read2607_phi_phi_fu_107000_p4 = data_2537_V_read.read();
        } else {
            ap_phi_mux_data_2537_V_read2607_phi_phi_fu_107000_p4 = ap_phi_reg_pp0_iter0_data_2537_V_read2607_phi_reg_106996.read();
        }
    } else {
        ap_phi_mux_data_2537_V_read2607_phi_phi_fu_107000_p4 = ap_phi_reg_pp0_iter0_data_2537_V_read2607_phi_reg_106996.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_64723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_64723_p6 = data_2537_V_read2607_phi_reg_106996.read();
    } else {
        ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_64723_p6 = data_2537_V_read2607_rewind_reg_64719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2538_V_read2608_phi_phi_fu_107013_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2538_V_read2608_phi_phi_fu_107013_p4 = ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_64737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2538_V_read2608_phi_phi_fu_107013_p4 = data_2538_V_read.read();
        } else {
            ap_phi_mux_data_2538_V_read2608_phi_phi_fu_107013_p4 = ap_phi_reg_pp0_iter0_data_2538_V_read2608_phi_reg_107009.read();
        }
    } else {
        ap_phi_mux_data_2538_V_read2608_phi_phi_fu_107013_p4 = ap_phi_reg_pp0_iter0_data_2538_V_read2608_phi_reg_107009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_64737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_64737_p6 = data_2538_V_read2608_phi_reg_107009.read();
    } else {
        ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_64737_p6 = data_2538_V_read2608_rewind_reg_64733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2539_V_read2609_phi_phi_fu_107026_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2539_V_read2609_phi_phi_fu_107026_p4 = ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_64751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2539_V_read2609_phi_phi_fu_107026_p4 = data_2539_V_read.read();
        } else {
            ap_phi_mux_data_2539_V_read2609_phi_phi_fu_107026_p4 = ap_phi_reg_pp0_iter0_data_2539_V_read2609_phi_reg_107022.read();
        }
    } else {
        ap_phi_mux_data_2539_V_read2609_phi_phi_fu_107026_p4 = ap_phi_reg_pp0_iter0_data_2539_V_read2609_phi_reg_107022.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_64751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_64751_p6 = data_2539_V_read2609_phi_reg_107022.read();
    } else {
        ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_64751_p6 = data_2539_V_read2609_rewind_reg_64747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_253_V_read323_phi_phi_fu_77308_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_253_V_read323_phi_phi_fu_77308_p4 = ap_phi_mux_data_253_V_read323_rewind_phi_fu_32747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_253_V_read323_phi_phi_fu_77308_p4 = data_253_V_read.read();
        } else {
            ap_phi_mux_data_253_V_read323_phi_phi_fu_77308_p4 = ap_phi_reg_pp0_iter0_data_253_V_read323_phi_reg_77304.read();
        }
    } else {
        ap_phi_mux_data_253_V_read323_phi_phi_fu_77308_p4 = ap_phi_reg_pp0_iter0_data_253_V_read323_phi_reg_77304.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_253_V_read323_rewind_phi_fu_32747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_253_V_read323_rewind_phi_fu_32747_p6 = data_253_V_read323_phi_reg_77304.read();
    } else {
        ap_phi_mux_data_253_V_read323_rewind_phi_fu_32747_p6 = data_253_V_read323_rewind_reg_32743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2540_V_read2610_phi_phi_fu_107039_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2540_V_read2610_phi_phi_fu_107039_p4 = ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_64765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2540_V_read2610_phi_phi_fu_107039_p4 = data_2540_V_read.read();
        } else {
            ap_phi_mux_data_2540_V_read2610_phi_phi_fu_107039_p4 = ap_phi_reg_pp0_iter0_data_2540_V_read2610_phi_reg_107035.read();
        }
    } else {
        ap_phi_mux_data_2540_V_read2610_phi_phi_fu_107039_p4 = ap_phi_reg_pp0_iter0_data_2540_V_read2610_phi_reg_107035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_64765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_64765_p6 = data_2540_V_read2610_phi_reg_107035.read();
    } else {
        ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_64765_p6 = data_2540_V_read2610_rewind_reg_64761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2541_V_read2611_phi_phi_fu_107052_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2541_V_read2611_phi_phi_fu_107052_p4 = ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_64779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2541_V_read2611_phi_phi_fu_107052_p4 = data_2541_V_read.read();
        } else {
            ap_phi_mux_data_2541_V_read2611_phi_phi_fu_107052_p4 = ap_phi_reg_pp0_iter0_data_2541_V_read2611_phi_reg_107048.read();
        }
    } else {
        ap_phi_mux_data_2541_V_read2611_phi_phi_fu_107052_p4 = ap_phi_reg_pp0_iter0_data_2541_V_read2611_phi_reg_107048.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_64779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_64779_p6 = data_2541_V_read2611_phi_reg_107048.read();
    } else {
        ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_64779_p6 = data_2541_V_read2611_rewind_reg_64775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2542_V_read2612_phi_phi_fu_107065_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2542_V_read2612_phi_phi_fu_107065_p4 = ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_64793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2542_V_read2612_phi_phi_fu_107065_p4 = data_2542_V_read.read();
        } else {
            ap_phi_mux_data_2542_V_read2612_phi_phi_fu_107065_p4 = ap_phi_reg_pp0_iter0_data_2542_V_read2612_phi_reg_107061.read();
        }
    } else {
        ap_phi_mux_data_2542_V_read2612_phi_phi_fu_107065_p4 = ap_phi_reg_pp0_iter0_data_2542_V_read2612_phi_reg_107061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_64793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_64793_p6 = data_2542_V_read2612_phi_reg_107061.read();
    } else {
        ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_64793_p6 = data_2542_V_read2612_rewind_reg_64789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2543_V_read2613_phi_phi_fu_107078_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2543_V_read2613_phi_phi_fu_107078_p4 = ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_64807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2543_V_read2613_phi_phi_fu_107078_p4 = data_2543_V_read.read();
        } else {
            ap_phi_mux_data_2543_V_read2613_phi_phi_fu_107078_p4 = ap_phi_reg_pp0_iter0_data_2543_V_read2613_phi_reg_107074.read();
        }
    } else {
        ap_phi_mux_data_2543_V_read2613_phi_phi_fu_107078_p4 = ap_phi_reg_pp0_iter0_data_2543_V_read2613_phi_reg_107074.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_64807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_64807_p6 = data_2543_V_read2613_phi_reg_107074.read();
    } else {
        ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_64807_p6 = data_2543_V_read2613_rewind_reg_64803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2544_V_read2614_phi_phi_fu_107091_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2544_V_read2614_phi_phi_fu_107091_p4 = ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_64821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2544_V_read2614_phi_phi_fu_107091_p4 = data_2544_V_read.read();
        } else {
            ap_phi_mux_data_2544_V_read2614_phi_phi_fu_107091_p4 = ap_phi_reg_pp0_iter0_data_2544_V_read2614_phi_reg_107087.read();
        }
    } else {
        ap_phi_mux_data_2544_V_read2614_phi_phi_fu_107091_p4 = ap_phi_reg_pp0_iter0_data_2544_V_read2614_phi_reg_107087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_64821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_64821_p6 = data_2544_V_read2614_phi_reg_107087.read();
    } else {
        ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_64821_p6 = data_2544_V_read2614_rewind_reg_64817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2545_V_read2615_phi_phi_fu_107104_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2545_V_read2615_phi_phi_fu_107104_p4 = ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_64835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2545_V_read2615_phi_phi_fu_107104_p4 = data_2545_V_read.read();
        } else {
            ap_phi_mux_data_2545_V_read2615_phi_phi_fu_107104_p4 = ap_phi_reg_pp0_iter0_data_2545_V_read2615_phi_reg_107100.read();
        }
    } else {
        ap_phi_mux_data_2545_V_read2615_phi_phi_fu_107104_p4 = ap_phi_reg_pp0_iter0_data_2545_V_read2615_phi_reg_107100.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_64835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_64835_p6 = data_2545_V_read2615_phi_reg_107100.read();
    } else {
        ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_64835_p6 = data_2545_V_read2615_rewind_reg_64831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2546_V_read2616_phi_phi_fu_107117_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2546_V_read2616_phi_phi_fu_107117_p4 = ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_64849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2546_V_read2616_phi_phi_fu_107117_p4 = data_2546_V_read.read();
        } else {
            ap_phi_mux_data_2546_V_read2616_phi_phi_fu_107117_p4 = ap_phi_reg_pp0_iter0_data_2546_V_read2616_phi_reg_107113.read();
        }
    } else {
        ap_phi_mux_data_2546_V_read2616_phi_phi_fu_107117_p4 = ap_phi_reg_pp0_iter0_data_2546_V_read2616_phi_reg_107113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_64849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_64849_p6 = data_2546_V_read2616_phi_reg_107113.read();
    } else {
        ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_64849_p6 = data_2546_V_read2616_rewind_reg_64845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2547_V_read2617_phi_phi_fu_107130_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2547_V_read2617_phi_phi_fu_107130_p4 = ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_64863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2547_V_read2617_phi_phi_fu_107130_p4 = data_2547_V_read.read();
        } else {
            ap_phi_mux_data_2547_V_read2617_phi_phi_fu_107130_p4 = ap_phi_reg_pp0_iter0_data_2547_V_read2617_phi_reg_107126.read();
        }
    } else {
        ap_phi_mux_data_2547_V_read2617_phi_phi_fu_107130_p4 = ap_phi_reg_pp0_iter0_data_2547_V_read2617_phi_reg_107126.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_64863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_64863_p6 = data_2547_V_read2617_phi_reg_107126.read();
    } else {
        ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_64863_p6 = data_2547_V_read2617_rewind_reg_64859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2548_V_read2618_phi_phi_fu_107143_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2548_V_read2618_phi_phi_fu_107143_p4 = ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_64877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2548_V_read2618_phi_phi_fu_107143_p4 = data_2548_V_read.read();
        } else {
            ap_phi_mux_data_2548_V_read2618_phi_phi_fu_107143_p4 = ap_phi_reg_pp0_iter0_data_2548_V_read2618_phi_reg_107139.read();
        }
    } else {
        ap_phi_mux_data_2548_V_read2618_phi_phi_fu_107143_p4 = ap_phi_reg_pp0_iter0_data_2548_V_read2618_phi_reg_107139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_64877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_64877_p6 = data_2548_V_read2618_phi_reg_107139.read();
    } else {
        ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_64877_p6 = data_2548_V_read2618_rewind_reg_64873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2549_V_read2619_phi_phi_fu_107156_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2549_V_read2619_phi_phi_fu_107156_p4 = ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_64891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2549_V_read2619_phi_phi_fu_107156_p4 = data_2549_V_read.read();
        } else {
            ap_phi_mux_data_2549_V_read2619_phi_phi_fu_107156_p4 = ap_phi_reg_pp0_iter0_data_2549_V_read2619_phi_reg_107152.read();
        }
    } else {
        ap_phi_mux_data_2549_V_read2619_phi_phi_fu_107156_p4 = ap_phi_reg_pp0_iter0_data_2549_V_read2619_phi_reg_107152.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_64891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_64891_p6 = data_2549_V_read2619_phi_reg_107152.read();
    } else {
        ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_64891_p6 = data_2549_V_read2619_rewind_reg_64887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_254_V_read324_phi_phi_fu_77321_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_254_V_read324_phi_phi_fu_77321_p4 = ap_phi_mux_data_254_V_read324_rewind_phi_fu_32761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_254_V_read324_phi_phi_fu_77321_p4 = data_254_V_read.read();
        } else {
            ap_phi_mux_data_254_V_read324_phi_phi_fu_77321_p4 = ap_phi_reg_pp0_iter0_data_254_V_read324_phi_reg_77317.read();
        }
    } else {
        ap_phi_mux_data_254_V_read324_phi_phi_fu_77321_p4 = ap_phi_reg_pp0_iter0_data_254_V_read324_phi_reg_77317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_254_V_read324_rewind_phi_fu_32761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_254_V_read324_rewind_phi_fu_32761_p6 = data_254_V_read324_phi_reg_77317.read();
    } else {
        ap_phi_mux_data_254_V_read324_rewind_phi_fu_32761_p6 = data_254_V_read324_rewind_reg_32757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2550_V_read2620_phi_phi_fu_107169_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2550_V_read2620_phi_phi_fu_107169_p4 = ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_64905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2550_V_read2620_phi_phi_fu_107169_p4 = data_2550_V_read.read();
        } else {
            ap_phi_mux_data_2550_V_read2620_phi_phi_fu_107169_p4 = ap_phi_reg_pp0_iter0_data_2550_V_read2620_phi_reg_107165.read();
        }
    } else {
        ap_phi_mux_data_2550_V_read2620_phi_phi_fu_107169_p4 = ap_phi_reg_pp0_iter0_data_2550_V_read2620_phi_reg_107165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_64905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_64905_p6 = data_2550_V_read2620_phi_reg_107165.read();
    } else {
        ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_64905_p6 = data_2550_V_read2620_rewind_reg_64901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2551_V_read2621_phi_phi_fu_107182_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2551_V_read2621_phi_phi_fu_107182_p4 = ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_64919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2551_V_read2621_phi_phi_fu_107182_p4 = data_2551_V_read.read();
        } else {
            ap_phi_mux_data_2551_V_read2621_phi_phi_fu_107182_p4 = ap_phi_reg_pp0_iter0_data_2551_V_read2621_phi_reg_107178.read();
        }
    } else {
        ap_phi_mux_data_2551_V_read2621_phi_phi_fu_107182_p4 = ap_phi_reg_pp0_iter0_data_2551_V_read2621_phi_reg_107178.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_64919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_64919_p6 = data_2551_V_read2621_phi_reg_107178.read();
    } else {
        ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_64919_p6 = data_2551_V_read2621_rewind_reg_64915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2552_V_read2622_phi_phi_fu_107195_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2552_V_read2622_phi_phi_fu_107195_p4 = ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_64933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2552_V_read2622_phi_phi_fu_107195_p4 = data_2552_V_read.read();
        } else {
            ap_phi_mux_data_2552_V_read2622_phi_phi_fu_107195_p4 = ap_phi_reg_pp0_iter0_data_2552_V_read2622_phi_reg_107191.read();
        }
    } else {
        ap_phi_mux_data_2552_V_read2622_phi_phi_fu_107195_p4 = ap_phi_reg_pp0_iter0_data_2552_V_read2622_phi_reg_107191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_64933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_64933_p6 = data_2552_V_read2622_phi_reg_107191.read();
    } else {
        ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_64933_p6 = data_2552_V_read2622_rewind_reg_64929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2553_V_read2623_phi_phi_fu_107208_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2553_V_read2623_phi_phi_fu_107208_p4 = ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_64947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2553_V_read2623_phi_phi_fu_107208_p4 = data_2553_V_read.read();
        } else {
            ap_phi_mux_data_2553_V_read2623_phi_phi_fu_107208_p4 = ap_phi_reg_pp0_iter0_data_2553_V_read2623_phi_reg_107204.read();
        }
    } else {
        ap_phi_mux_data_2553_V_read2623_phi_phi_fu_107208_p4 = ap_phi_reg_pp0_iter0_data_2553_V_read2623_phi_reg_107204.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_64947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_64947_p6 = data_2553_V_read2623_phi_reg_107204.read();
    } else {
        ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_64947_p6 = data_2553_V_read2623_rewind_reg_64943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2554_V_read2624_phi_phi_fu_107221_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2554_V_read2624_phi_phi_fu_107221_p4 = ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_64961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2554_V_read2624_phi_phi_fu_107221_p4 = data_2554_V_read.read();
        } else {
            ap_phi_mux_data_2554_V_read2624_phi_phi_fu_107221_p4 = ap_phi_reg_pp0_iter0_data_2554_V_read2624_phi_reg_107217.read();
        }
    } else {
        ap_phi_mux_data_2554_V_read2624_phi_phi_fu_107221_p4 = ap_phi_reg_pp0_iter0_data_2554_V_read2624_phi_reg_107217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_64961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_64961_p6 = data_2554_V_read2624_phi_reg_107217.read();
    } else {
        ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_64961_p6 = data_2554_V_read2624_rewind_reg_64957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2555_V_read2625_phi_phi_fu_107234_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2555_V_read2625_phi_phi_fu_107234_p4 = ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_64975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2555_V_read2625_phi_phi_fu_107234_p4 = data_2555_V_read.read();
        } else {
            ap_phi_mux_data_2555_V_read2625_phi_phi_fu_107234_p4 = ap_phi_reg_pp0_iter0_data_2555_V_read2625_phi_reg_107230.read();
        }
    } else {
        ap_phi_mux_data_2555_V_read2625_phi_phi_fu_107234_p4 = ap_phi_reg_pp0_iter0_data_2555_V_read2625_phi_reg_107230.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_64975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_64975_p6 = data_2555_V_read2625_phi_reg_107230.read();
    } else {
        ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_64975_p6 = data_2555_V_read2625_rewind_reg_64971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2556_V_read2626_phi_phi_fu_107247_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2556_V_read2626_phi_phi_fu_107247_p4 = ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_64989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2556_V_read2626_phi_phi_fu_107247_p4 = data_2556_V_read.read();
        } else {
            ap_phi_mux_data_2556_V_read2626_phi_phi_fu_107247_p4 = ap_phi_reg_pp0_iter0_data_2556_V_read2626_phi_reg_107243.read();
        }
    } else {
        ap_phi_mux_data_2556_V_read2626_phi_phi_fu_107247_p4 = ap_phi_reg_pp0_iter0_data_2556_V_read2626_phi_reg_107243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_64989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_64989_p6 = data_2556_V_read2626_phi_reg_107243.read();
    } else {
        ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_64989_p6 = data_2556_V_read2626_rewind_reg_64985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2557_V_read2627_phi_phi_fu_107260_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2557_V_read2627_phi_phi_fu_107260_p4 = ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_65003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2557_V_read2627_phi_phi_fu_107260_p4 = data_2557_V_read.read();
        } else {
            ap_phi_mux_data_2557_V_read2627_phi_phi_fu_107260_p4 = ap_phi_reg_pp0_iter0_data_2557_V_read2627_phi_reg_107256.read();
        }
    } else {
        ap_phi_mux_data_2557_V_read2627_phi_phi_fu_107260_p4 = ap_phi_reg_pp0_iter0_data_2557_V_read2627_phi_reg_107256.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_65003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_65003_p6 = data_2557_V_read2627_phi_reg_107256.read();
    } else {
        ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_65003_p6 = data_2557_V_read2627_rewind_reg_64999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2558_V_read2628_phi_phi_fu_107273_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2558_V_read2628_phi_phi_fu_107273_p4 = ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_65017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2558_V_read2628_phi_phi_fu_107273_p4 = data_2558_V_read.read();
        } else {
            ap_phi_mux_data_2558_V_read2628_phi_phi_fu_107273_p4 = ap_phi_reg_pp0_iter0_data_2558_V_read2628_phi_reg_107269.read();
        }
    } else {
        ap_phi_mux_data_2558_V_read2628_phi_phi_fu_107273_p4 = ap_phi_reg_pp0_iter0_data_2558_V_read2628_phi_reg_107269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_65017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_65017_p6 = data_2558_V_read2628_phi_reg_107269.read();
    } else {
        ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_65017_p6 = data_2558_V_read2628_rewind_reg_65013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2559_V_read2629_phi_phi_fu_107286_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2559_V_read2629_phi_phi_fu_107286_p4 = ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_65031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2559_V_read2629_phi_phi_fu_107286_p4 = data_2559_V_read.read();
        } else {
            ap_phi_mux_data_2559_V_read2629_phi_phi_fu_107286_p4 = ap_phi_reg_pp0_iter0_data_2559_V_read2629_phi_reg_107282.read();
        }
    } else {
        ap_phi_mux_data_2559_V_read2629_phi_phi_fu_107286_p4 = ap_phi_reg_pp0_iter0_data_2559_V_read2629_phi_reg_107282.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_65031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_65031_p6 = data_2559_V_read2629_phi_reg_107282.read();
    } else {
        ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_65031_p6 = data_2559_V_read2629_rewind_reg_65027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_255_V_read325_phi_phi_fu_77334_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_255_V_read325_phi_phi_fu_77334_p4 = ap_phi_mux_data_255_V_read325_rewind_phi_fu_32775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_255_V_read325_phi_phi_fu_77334_p4 = data_255_V_read.read();
        } else {
            ap_phi_mux_data_255_V_read325_phi_phi_fu_77334_p4 = ap_phi_reg_pp0_iter0_data_255_V_read325_phi_reg_77330.read();
        }
    } else {
        ap_phi_mux_data_255_V_read325_phi_phi_fu_77334_p4 = ap_phi_reg_pp0_iter0_data_255_V_read325_phi_reg_77330.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_255_V_read325_rewind_phi_fu_32775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_255_V_read325_rewind_phi_fu_32775_p6 = data_255_V_read325_phi_reg_77330.read();
    } else {
        ap_phi_mux_data_255_V_read325_rewind_phi_fu_32775_p6 = data_255_V_read325_rewind_reg_32771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2560_V_read2630_phi_phi_fu_107299_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2560_V_read2630_phi_phi_fu_107299_p4 = ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_65045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2560_V_read2630_phi_phi_fu_107299_p4 = data_2560_V_read.read();
        } else {
            ap_phi_mux_data_2560_V_read2630_phi_phi_fu_107299_p4 = ap_phi_reg_pp0_iter0_data_2560_V_read2630_phi_reg_107295.read();
        }
    } else {
        ap_phi_mux_data_2560_V_read2630_phi_phi_fu_107299_p4 = ap_phi_reg_pp0_iter0_data_2560_V_read2630_phi_reg_107295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_65045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_65045_p6 = data_2560_V_read2630_phi_reg_107295.read();
    } else {
        ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_65045_p6 = data_2560_V_read2630_rewind_reg_65041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2561_V_read2631_phi_phi_fu_107312_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2561_V_read2631_phi_phi_fu_107312_p4 = ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_65059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2561_V_read2631_phi_phi_fu_107312_p4 = data_2561_V_read.read();
        } else {
            ap_phi_mux_data_2561_V_read2631_phi_phi_fu_107312_p4 = ap_phi_reg_pp0_iter0_data_2561_V_read2631_phi_reg_107308.read();
        }
    } else {
        ap_phi_mux_data_2561_V_read2631_phi_phi_fu_107312_p4 = ap_phi_reg_pp0_iter0_data_2561_V_read2631_phi_reg_107308.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_65059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_65059_p6 = data_2561_V_read2631_phi_reg_107308.read();
    } else {
        ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_65059_p6 = data_2561_V_read2631_rewind_reg_65055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2562_V_read2632_phi_phi_fu_107325_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2562_V_read2632_phi_phi_fu_107325_p4 = ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_65073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2562_V_read2632_phi_phi_fu_107325_p4 = data_2562_V_read.read();
        } else {
            ap_phi_mux_data_2562_V_read2632_phi_phi_fu_107325_p4 = ap_phi_reg_pp0_iter0_data_2562_V_read2632_phi_reg_107321.read();
        }
    } else {
        ap_phi_mux_data_2562_V_read2632_phi_phi_fu_107325_p4 = ap_phi_reg_pp0_iter0_data_2562_V_read2632_phi_reg_107321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_65073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_65073_p6 = data_2562_V_read2632_phi_reg_107321.read();
    } else {
        ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_65073_p6 = data_2562_V_read2632_rewind_reg_65069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2563_V_read2633_phi_phi_fu_107338_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2563_V_read2633_phi_phi_fu_107338_p4 = ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_65087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2563_V_read2633_phi_phi_fu_107338_p4 = data_2563_V_read.read();
        } else {
            ap_phi_mux_data_2563_V_read2633_phi_phi_fu_107338_p4 = ap_phi_reg_pp0_iter0_data_2563_V_read2633_phi_reg_107334.read();
        }
    } else {
        ap_phi_mux_data_2563_V_read2633_phi_phi_fu_107338_p4 = ap_phi_reg_pp0_iter0_data_2563_V_read2633_phi_reg_107334.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_65087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_65087_p6 = data_2563_V_read2633_phi_reg_107334.read();
    } else {
        ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_65087_p6 = data_2563_V_read2633_rewind_reg_65083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2564_V_read2634_phi_phi_fu_107351_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2564_V_read2634_phi_phi_fu_107351_p4 = ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_65101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2564_V_read2634_phi_phi_fu_107351_p4 = data_2564_V_read.read();
        } else {
            ap_phi_mux_data_2564_V_read2634_phi_phi_fu_107351_p4 = ap_phi_reg_pp0_iter0_data_2564_V_read2634_phi_reg_107347.read();
        }
    } else {
        ap_phi_mux_data_2564_V_read2634_phi_phi_fu_107351_p4 = ap_phi_reg_pp0_iter0_data_2564_V_read2634_phi_reg_107347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_65101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_65101_p6 = data_2564_V_read2634_phi_reg_107347.read();
    } else {
        ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_65101_p6 = data_2564_V_read2634_rewind_reg_65097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2565_V_read2635_phi_phi_fu_107364_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2565_V_read2635_phi_phi_fu_107364_p4 = ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_65115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2565_V_read2635_phi_phi_fu_107364_p4 = data_2565_V_read.read();
        } else {
            ap_phi_mux_data_2565_V_read2635_phi_phi_fu_107364_p4 = ap_phi_reg_pp0_iter0_data_2565_V_read2635_phi_reg_107360.read();
        }
    } else {
        ap_phi_mux_data_2565_V_read2635_phi_phi_fu_107364_p4 = ap_phi_reg_pp0_iter0_data_2565_V_read2635_phi_reg_107360.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_65115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_65115_p6 = data_2565_V_read2635_phi_reg_107360.read();
    } else {
        ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_65115_p6 = data_2565_V_read2635_rewind_reg_65111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2566_V_read2636_phi_phi_fu_107377_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2566_V_read2636_phi_phi_fu_107377_p4 = ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_65129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2566_V_read2636_phi_phi_fu_107377_p4 = data_2566_V_read.read();
        } else {
            ap_phi_mux_data_2566_V_read2636_phi_phi_fu_107377_p4 = ap_phi_reg_pp0_iter0_data_2566_V_read2636_phi_reg_107373.read();
        }
    } else {
        ap_phi_mux_data_2566_V_read2636_phi_phi_fu_107377_p4 = ap_phi_reg_pp0_iter0_data_2566_V_read2636_phi_reg_107373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_65129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_65129_p6 = data_2566_V_read2636_phi_reg_107373.read();
    } else {
        ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_65129_p6 = data_2566_V_read2636_rewind_reg_65125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2567_V_read2637_phi_phi_fu_107390_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2567_V_read2637_phi_phi_fu_107390_p4 = ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_65143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2567_V_read2637_phi_phi_fu_107390_p4 = data_2567_V_read.read();
        } else {
            ap_phi_mux_data_2567_V_read2637_phi_phi_fu_107390_p4 = ap_phi_reg_pp0_iter0_data_2567_V_read2637_phi_reg_107386.read();
        }
    } else {
        ap_phi_mux_data_2567_V_read2637_phi_phi_fu_107390_p4 = ap_phi_reg_pp0_iter0_data_2567_V_read2637_phi_reg_107386.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_65143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_65143_p6 = data_2567_V_read2637_phi_reg_107386.read();
    } else {
        ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_65143_p6 = data_2567_V_read2637_rewind_reg_65139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2568_V_read2638_phi_phi_fu_107403_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2568_V_read2638_phi_phi_fu_107403_p4 = ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_65157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2568_V_read2638_phi_phi_fu_107403_p4 = data_2568_V_read.read();
        } else {
            ap_phi_mux_data_2568_V_read2638_phi_phi_fu_107403_p4 = ap_phi_reg_pp0_iter0_data_2568_V_read2638_phi_reg_107399.read();
        }
    } else {
        ap_phi_mux_data_2568_V_read2638_phi_phi_fu_107403_p4 = ap_phi_reg_pp0_iter0_data_2568_V_read2638_phi_reg_107399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_65157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_65157_p6 = data_2568_V_read2638_phi_reg_107399.read();
    } else {
        ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_65157_p6 = data_2568_V_read2638_rewind_reg_65153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2569_V_read2639_phi_phi_fu_107416_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2569_V_read2639_phi_phi_fu_107416_p4 = ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_65171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2569_V_read2639_phi_phi_fu_107416_p4 = data_2569_V_read.read();
        } else {
            ap_phi_mux_data_2569_V_read2639_phi_phi_fu_107416_p4 = ap_phi_reg_pp0_iter0_data_2569_V_read2639_phi_reg_107412.read();
        }
    } else {
        ap_phi_mux_data_2569_V_read2639_phi_phi_fu_107416_p4 = ap_phi_reg_pp0_iter0_data_2569_V_read2639_phi_reg_107412.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_65171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_65171_p6 = data_2569_V_read2639_phi_reg_107412.read();
    } else {
        ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_65171_p6 = data_2569_V_read2639_rewind_reg_65167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_256_V_read326_phi_phi_fu_77347_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_256_V_read326_phi_phi_fu_77347_p4 = ap_phi_mux_data_256_V_read326_rewind_phi_fu_32789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_256_V_read326_phi_phi_fu_77347_p4 = data_256_V_read.read();
        } else {
            ap_phi_mux_data_256_V_read326_phi_phi_fu_77347_p4 = ap_phi_reg_pp0_iter0_data_256_V_read326_phi_reg_77343.read();
        }
    } else {
        ap_phi_mux_data_256_V_read326_phi_phi_fu_77347_p4 = ap_phi_reg_pp0_iter0_data_256_V_read326_phi_reg_77343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_256_V_read326_rewind_phi_fu_32789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_256_V_read326_rewind_phi_fu_32789_p6 = data_256_V_read326_phi_reg_77343.read();
    } else {
        ap_phi_mux_data_256_V_read326_rewind_phi_fu_32789_p6 = data_256_V_read326_rewind_reg_32785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2570_V_read2640_phi_phi_fu_107429_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2570_V_read2640_phi_phi_fu_107429_p4 = ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_65185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2570_V_read2640_phi_phi_fu_107429_p4 = data_2570_V_read.read();
        } else {
            ap_phi_mux_data_2570_V_read2640_phi_phi_fu_107429_p4 = ap_phi_reg_pp0_iter0_data_2570_V_read2640_phi_reg_107425.read();
        }
    } else {
        ap_phi_mux_data_2570_V_read2640_phi_phi_fu_107429_p4 = ap_phi_reg_pp0_iter0_data_2570_V_read2640_phi_reg_107425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_65185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_65185_p6 = data_2570_V_read2640_phi_reg_107425.read();
    } else {
        ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_65185_p6 = data_2570_V_read2640_rewind_reg_65181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2571_V_read2641_phi_phi_fu_107442_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2571_V_read2641_phi_phi_fu_107442_p4 = ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_65199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2571_V_read2641_phi_phi_fu_107442_p4 = data_2571_V_read.read();
        } else {
            ap_phi_mux_data_2571_V_read2641_phi_phi_fu_107442_p4 = ap_phi_reg_pp0_iter0_data_2571_V_read2641_phi_reg_107438.read();
        }
    } else {
        ap_phi_mux_data_2571_V_read2641_phi_phi_fu_107442_p4 = ap_phi_reg_pp0_iter0_data_2571_V_read2641_phi_reg_107438.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_65199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_65199_p6 = data_2571_V_read2641_phi_reg_107438.read();
    } else {
        ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_65199_p6 = data_2571_V_read2641_rewind_reg_65195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2572_V_read2642_phi_phi_fu_107455_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2572_V_read2642_phi_phi_fu_107455_p4 = ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_65213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2572_V_read2642_phi_phi_fu_107455_p4 = data_2572_V_read.read();
        } else {
            ap_phi_mux_data_2572_V_read2642_phi_phi_fu_107455_p4 = ap_phi_reg_pp0_iter0_data_2572_V_read2642_phi_reg_107451.read();
        }
    } else {
        ap_phi_mux_data_2572_V_read2642_phi_phi_fu_107455_p4 = ap_phi_reg_pp0_iter0_data_2572_V_read2642_phi_reg_107451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_65213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_65213_p6 = data_2572_V_read2642_phi_reg_107451.read();
    } else {
        ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_65213_p6 = data_2572_V_read2642_rewind_reg_65209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2573_V_read2643_phi_phi_fu_107468_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2573_V_read2643_phi_phi_fu_107468_p4 = ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_65227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2573_V_read2643_phi_phi_fu_107468_p4 = data_2573_V_read.read();
        } else {
            ap_phi_mux_data_2573_V_read2643_phi_phi_fu_107468_p4 = ap_phi_reg_pp0_iter0_data_2573_V_read2643_phi_reg_107464.read();
        }
    } else {
        ap_phi_mux_data_2573_V_read2643_phi_phi_fu_107468_p4 = ap_phi_reg_pp0_iter0_data_2573_V_read2643_phi_reg_107464.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_65227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_65227_p6 = data_2573_V_read2643_phi_reg_107464.read();
    } else {
        ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_65227_p6 = data_2573_V_read2643_rewind_reg_65223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2574_V_read2644_phi_phi_fu_107481_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2574_V_read2644_phi_phi_fu_107481_p4 = ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_65241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2574_V_read2644_phi_phi_fu_107481_p4 = data_2574_V_read.read();
        } else {
            ap_phi_mux_data_2574_V_read2644_phi_phi_fu_107481_p4 = ap_phi_reg_pp0_iter0_data_2574_V_read2644_phi_reg_107477.read();
        }
    } else {
        ap_phi_mux_data_2574_V_read2644_phi_phi_fu_107481_p4 = ap_phi_reg_pp0_iter0_data_2574_V_read2644_phi_reg_107477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_65241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_65241_p6 = data_2574_V_read2644_phi_reg_107477.read();
    } else {
        ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_65241_p6 = data_2574_V_read2644_rewind_reg_65237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2575_V_read2645_phi_phi_fu_107494_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2575_V_read2645_phi_phi_fu_107494_p4 = ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_65255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2575_V_read2645_phi_phi_fu_107494_p4 = data_2575_V_read.read();
        } else {
            ap_phi_mux_data_2575_V_read2645_phi_phi_fu_107494_p4 = ap_phi_reg_pp0_iter0_data_2575_V_read2645_phi_reg_107490.read();
        }
    } else {
        ap_phi_mux_data_2575_V_read2645_phi_phi_fu_107494_p4 = ap_phi_reg_pp0_iter0_data_2575_V_read2645_phi_reg_107490.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_65255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_65255_p6 = data_2575_V_read2645_phi_reg_107490.read();
    } else {
        ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_65255_p6 = data_2575_V_read2645_rewind_reg_65251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2576_V_read2646_phi_phi_fu_107507_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2576_V_read2646_phi_phi_fu_107507_p4 = ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_65269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2576_V_read2646_phi_phi_fu_107507_p4 = data_2576_V_read.read();
        } else {
            ap_phi_mux_data_2576_V_read2646_phi_phi_fu_107507_p4 = ap_phi_reg_pp0_iter0_data_2576_V_read2646_phi_reg_107503.read();
        }
    } else {
        ap_phi_mux_data_2576_V_read2646_phi_phi_fu_107507_p4 = ap_phi_reg_pp0_iter0_data_2576_V_read2646_phi_reg_107503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_65269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_65269_p6 = data_2576_V_read2646_phi_reg_107503.read();
    } else {
        ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_65269_p6 = data_2576_V_read2646_rewind_reg_65265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2577_V_read2647_phi_phi_fu_107520_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2577_V_read2647_phi_phi_fu_107520_p4 = ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_65283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2577_V_read2647_phi_phi_fu_107520_p4 = data_2577_V_read.read();
        } else {
            ap_phi_mux_data_2577_V_read2647_phi_phi_fu_107520_p4 = ap_phi_reg_pp0_iter0_data_2577_V_read2647_phi_reg_107516.read();
        }
    } else {
        ap_phi_mux_data_2577_V_read2647_phi_phi_fu_107520_p4 = ap_phi_reg_pp0_iter0_data_2577_V_read2647_phi_reg_107516.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_65283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_65283_p6 = data_2577_V_read2647_phi_reg_107516.read();
    } else {
        ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_65283_p6 = data_2577_V_read2647_rewind_reg_65279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2578_V_read2648_phi_phi_fu_107533_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2578_V_read2648_phi_phi_fu_107533_p4 = ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_65297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2578_V_read2648_phi_phi_fu_107533_p4 = data_2578_V_read.read();
        } else {
            ap_phi_mux_data_2578_V_read2648_phi_phi_fu_107533_p4 = ap_phi_reg_pp0_iter0_data_2578_V_read2648_phi_reg_107529.read();
        }
    } else {
        ap_phi_mux_data_2578_V_read2648_phi_phi_fu_107533_p4 = ap_phi_reg_pp0_iter0_data_2578_V_read2648_phi_reg_107529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_65297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_65297_p6 = data_2578_V_read2648_phi_reg_107529.read();
    } else {
        ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_65297_p6 = data_2578_V_read2648_rewind_reg_65293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2579_V_read2649_phi_phi_fu_107546_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2579_V_read2649_phi_phi_fu_107546_p4 = ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_65311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2579_V_read2649_phi_phi_fu_107546_p4 = data_2579_V_read.read();
        } else {
            ap_phi_mux_data_2579_V_read2649_phi_phi_fu_107546_p4 = ap_phi_reg_pp0_iter0_data_2579_V_read2649_phi_reg_107542.read();
        }
    } else {
        ap_phi_mux_data_2579_V_read2649_phi_phi_fu_107546_p4 = ap_phi_reg_pp0_iter0_data_2579_V_read2649_phi_reg_107542.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_65311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_65311_p6 = data_2579_V_read2649_phi_reg_107542.read();
    } else {
        ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_65311_p6 = data_2579_V_read2649_rewind_reg_65307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_257_V_read327_phi_phi_fu_77360_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_257_V_read327_phi_phi_fu_77360_p4 = ap_phi_mux_data_257_V_read327_rewind_phi_fu_32803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_257_V_read327_phi_phi_fu_77360_p4 = data_257_V_read.read();
        } else {
            ap_phi_mux_data_257_V_read327_phi_phi_fu_77360_p4 = ap_phi_reg_pp0_iter0_data_257_V_read327_phi_reg_77356.read();
        }
    } else {
        ap_phi_mux_data_257_V_read327_phi_phi_fu_77360_p4 = ap_phi_reg_pp0_iter0_data_257_V_read327_phi_reg_77356.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_257_V_read327_rewind_phi_fu_32803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_257_V_read327_rewind_phi_fu_32803_p6 = data_257_V_read327_phi_reg_77356.read();
    } else {
        ap_phi_mux_data_257_V_read327_rewind_phi_fu_32803_p6 = data_257_V_read327_rewind_reg_32799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2580_V_read2650_phi_phi_fu_107559_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2580_V_read2650_phi_phi_fu_107559_p4 = ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_65325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2580_V_read2650_phi_phi_fu_107559_p4 = data_2580_V_read.read();
        } else {
            ap_phi_mux_data_2580_V_read2650_phi_phi_fu_107559_p4 = ap_phi_reg_pp0_iter0_data_2580_V_read2650_phi_reg_107555.read();
        }
    } else {
        ap_phi_mux_data_2580_V_read2650_phi_phi_fu_107559_p4 = ap_phi_reg_pp0_iter0_data_2580_V_read2650_phi_reg_107555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_65325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_65325_p6 = data_2580_V_read2650_phi_reg_107555.read();
    } else {
        ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_65325_p6 = data_2580_V_read2650_rewind_reg_65321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2581_V_read2651_phi_phi_fu_107572_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2581_V_read2651_phi_phi_fu_107572_p4 = ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_65339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2581_V_read2651_phi_phi_fu_107572_p4 = data_2581_V_read.read();
        } else {
            ap_phi_mux_data_2581_V_read2651_phi_phi_fu_107572_p4 = ap_phi_reg_pp0_iter0_data_2581_V_read2651_phi_reg_107568.read();
        }
    } else {
        ap_phi_mux_data_2581_V_read2651_phi_phi_fu_107572_p4 = ap_phi_reg_pp0_iter0_data_2581_V_read2651_phi_reg_107568.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_65339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_65339_p6 = data_2581_V_read2651_phi_reg_107568.read();
    } else {
        ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_65339_p6 = data_2581_V_read2651_rewind_reg_65335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2582_V_read2652_phi_phi_fu_107585_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2582_V_read2652_phi_phi_fu_107585_p4 = ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_65353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2582_V_read2652_phi_phi_fu_107585_p4 = data_2582_V_read.read();
        } else {
            ap_phi_mux_data_2582_V_read2652_phi_phi_fu_107585_p4 = ap_phi_reg_pp0_iter0_data_2582_V_read2652_phi_reg_107581.read();
        }
    } else {
        ap_phi_mux_data_2582_V_read2652_phi_phi_fu_107585_p4 = ap_phi_reg_pp0_iter0_data_2582_V_read2652_phi_reg_107581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_65353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_65353_p6 = data_2582_V_read2652_phi_reg_107581.read();
    } else {
        ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_65353_p6 = data_2582_V_read2652_rewind_reg_65349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2583_V_read2653_phi_phi_fu_107598_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2583_V_read2653_phi_phi_fu_107598_p4 = ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_65367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2583_V_read2653_phi_phi_fu_107598_p4 = data_2583_V_read.read();
        } else {
            ap_phi_mux_data_2583_V_read2653_phi_phi_fu_107598_p4 = ap_phi_reg_pp0_iter0_data_2583_V_read2653_phi_reg_107594.read();
        }
    } else {
        ap_phi_mux_data_2583_V_read2653_phi_phi_fu_107598_p4 = ap_phi_reg_pp0_iter0_data_2583_V_read2653_phi_reg_107594.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_65367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_65367_p6 = data_2583_V_read2653_phi_reg_107594.read();
    } else {
        ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_65367_p6 = data_2583_V_read2653_rewind_reg_65363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2584_V_read2654_phi_phi_fu_107611_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2584_V_read2654_phi_phi_fu_107611_p4 = ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_65381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2584_V_read2654_phi_phi_fu_107611_p4 = data_2584_V_read.read();
        } else {
            ap_phi_mux_data_2584_V_read2654_phi_phi_fu_107611_p4 = ap_phi_reg_pp0_iter0_data_2584_V_read2654_phi_reg_107607.read();
        }
    } else {
        ap_phi_mux_data_2584_V_read2654_phi_phi_fu_107611_p4 = ap_phi_reg_pp0_iter0_data_2584_V_read2654_phi_reg_107607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_65381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_65381_p6 = data_2584_V_read2654_phi_reg_107607.read();
    } else {
        ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_65381_p6 = data_2584_V_read2654_rewind_reg_65377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2585_V_read2655_phi_phi_fu_107624_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2585_V_read2655_phi_phi_fu_107624_p4 = ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_65395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2585_V_read2655_phi_phi_fu_107624_p4 = data_2585_V_read.read();
        } else {
            ap_phi_mux_data_2585_V_read2655_phi_phi_fu_107624_p4 = ap_phi_reg_pp0_iter0_data_2585_V_read2655_phi_reg_107620.read();
        }
    } else {
        ap_phi_mux_data_2585_V_read2655_phi_phi_fu_107624_p4 = ap_phi_reg_pp0_iter0_data_2585_V_read2655_phi_reg_107620.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_65395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_65395_p6 = data_2585_V_read2655_phi_reg_107620.read();
    } else {
        ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_65395_p6 = data_2585_V_read2655_rewind_reg_65391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2586_V_read2656_phi_phi_fu_107637_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2586_V_read2656_phi_phi_fu_107637_p4 = ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_65409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2586_V_read2656_phi_phi_fu_107637_p4 = data_2586_V_read.read();
        } else {
            ap_phi_mux_data_2586_V_read2656_phi_phi_fu_107637_p4 = ap_phi_reg_pp0_iter0_data_2586_V_read2656_phi_reg_107633.read();
        }
    } else {
        ap_phi_mux_data_2586_V_read2656_phi_phi_fu_107637_p4 = ap_phi_reg_pp0_iter0_data_2586_V_read2656_phi_reg_107633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_65409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_65409_p6 = data_2586_V_read2656_phi_reg_107633.read();
    } else {
        ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_65409_p6 = data_2586_V_read2656_rewind_reg_65405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2587_V_read2657_phi_phi_fu_107650_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2587_V_read2657_phi_phi_fu_107650_p4 = ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_65423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2587_V_read2657_phi_phi_fu_107650_p4 = data_2587_V_read.read();
        } else {
            ap_phi_mux_data_2587_V_read2657_phi_phi_fu_107650_p4 = ap_phi_reg_pp0_iter0_data_2587_V_read2657_phi_reg_107646.read();
        }
    } else {
        ap_phi_mux_data_2587_V_read2657_phi_phi_fu_107650_p4 = ap_phi_reg_pp0_iter0_data_2587_V_read2657_phi_reg_107646.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_65423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_65423_p6 = data_2587_V_read2657_phi_reg_107646.read();
    } else {
        ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_65423_p6 = data_2587_V_read2657_rewind_reg_65419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2588_V_read2658_phi_phi_fu_107663_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2588_V_read2658_phi_phi_fu_107663_p4 = ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_65437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2588_V_read2658_phi_phi_fu_107663_p4 = data_2588_V_read.read();
        } else {
            ap_phi_mux_data_2588_V_read2658_phi_phi_fu_107663_p4 = ap_phi_reg_pp0_iter0_data_2588_V_read2658_phi_reg_107659.read();
        }
    } else {
        ap_phi_mux_data_2588_V_read2658_phi_phi_fu_107663_p4 = ap_phi_reg_pp0_iter0_data_2588_V_read2658_phi_reg_107659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_65437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_65437_p6 = data_2588_V_read2658_phi_reg_107659.read();
    } else {
        ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_65437_p6 = data_2588_V_read2658_rewind_reg_65433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2589_V_read2659_phi_phi_fu_107676_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2589_V_read2659_phi_phi_fu_107676_p4 = ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_65451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2589_V_read2659_phi_phi_fu_107676_p4 = data_2589_V_read.read();
        } else {
            ap_phi_mux_data_2589_V_read2659_phi_phi_fu_107676_p4 = ap_phi_reg_pp0_iter0_data_2589_V_read2659_phi_reg_107672.read();
        }
    } else {
        ap_phi_mux_data_2589_V_read2659_phi_phi_fu_107676_p4 = ap_phi_reg_pp0_iter0_data_2589_V_read2659_phi_reg_107672.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_65451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_65451_p6 = data_2589_V_read2659_phi_reg_107672.read();
    } else {
        ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_65451_p6 = data_2589_V_read2659_rewind_reg_65447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_258_V_read328_phi_phi_fu_77373_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_258_V_read328_phi_phi_fu_77373_p4 = ap_phi_mux_data_258_V_read328_rewind_phi_fu_32817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_258_V_read328_phi_phi_fu_77373_p4 = data_258_V_read.read();
        } else {
            ap_phi_mux_data_258_V_read328_phi_phi_fu_77373_p4 = ap_phi_reg_pp0_iter0_data_258_V_read328_phi_reg_77369.read();
        }
    } else {
        ap_phi_mux_data_258_V_read328_phi_phi_fu_77373_p4 = ap_phi_reg_pp0_iter0_data_258_V_read328_phi_reg_77369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_258_V_read328_rewind_phi_fu_32817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_258_V_read328_rewind_phi_fu_32817_p6 = data_258_V_read328_phi_reg_77369.read();
    } else {
        ap_phi_mux_data_258_V_read328_rewind_phi_fu_32817_p6 = data_258_V_read328_rewind_reg_32813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2590_V_read2660_phi_phi_fu_107689_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2590_V_read2660_phi_phi_fu_107689_p4 = ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_65465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2590_V_read2660_phi_phi_fu_107689_p4 = data_2590_V_read.read();
        } else {
            ap_phi_mux_data_2590_V_read2660_phi_phi_fu_107689_p4 = ap_phi_reg_pp0_iter0_data_2590_V_read2660_phi_reg_107685.read();
        }
    } else {
        ap_phi_mux_data_2590_V_read2660_phi_phi_fu_107689_p4 = ap_phi_reg_pp0_iter0_data_2590_V_read2660_phi_reg_107685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_65465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_65465_p6 = data_2590_V_read2660_phi_reg_107685.read();
    } else {
        ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_65465_p6 = data_2590_V_read2660_rewind_reg_65461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2591_V_read2661_phi_phi_fu_107702_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2591_V_read2661_phi_phi_fu_107702_p4 = ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_65479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2591_V_read2661_phi_phi_fu_107702_p4 = data_2591_V_read.read();
        } else {
            ap_phi_mux_data_2591_V_read2661_phi_phi_fu_107702_p4 = ap_phi_reg_pp0_iter0_data_2591_V_read2661_phi_reg_107698.read();
        }
    } else {
        ap_phi_mux_data_2591_V_read2661_phi_phi_fu_107702_p4 = ap_phi_reg_pp0_iter0_data_2591_V_read2661_phi_reg_107698.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_65479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_65479_p6 = data_2591_V_read2661_phi_reg_107698.read();
    } else {
        ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_65479_p6 = data_2591_V_read2661_rewind_reg_65475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2592_V_read2662_phi_phi_fu_107715_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2592_V_read2662_phi_phi_fu_107715_p4 = ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_65493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2592_V_read2662_phi_phi_fu_107715_p4 = data_2592_V_read.read();
        } else {
            ap_phi_mux_data_2592_V_read2662_phi_phi_fu_107715_p4 = ap_phi_reg_pp0_iter0_data_2592_V_read2662_phi_reg_107711.read();
        }
    } else {
        ap_phi_mux_data_2592_V_read2662_phi_phi_fu_107715_p4 = ap_phi_reg_pp0_iter0_data_2592_V_read2662_phi_reg_107711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_65493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_65493_p6 = data_2592_V_read2662_phi_reg_107711.read();
    } else {
        ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_65493_p6 = data_2592_V_read2662_rewind_reg_65489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2593_V_read2663_phi_phi_fu_107728_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2593_V_read2663_phi_phi_fu_107728_p4 = ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_65507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2593_V_read2663_phi_phi_fu_107728_p4 = data_2593_V_read.read();
        } else {
            ap_phi_mux_data_2593_V_read2663_phi_phi_fu_107728_p4 = ap_phi_reg_pp0_iter0_data_2593_V_read2663_phi_reg_107724.read();
        }
    } else {
        ap_phi_mux_data_2593_V_read2663_phi_phi_fu_107728_p4 = ap_phi_reg_pp0_iter0_data_2593_V_read2663_phi_reg_107724.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_65507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_65507_p6 = data_2593_V_read2663_phi_reg_107724.read();
    } else {
        ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_65507_p6 = data_2593_V_read2663_rewind_reg_65503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2594_V_read2664_phi_phi_fu_107741_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2594_V_read2664_phi_phi_fu_107741_p4 = ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_65521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2594_V_read2664_phi_phi_fu_107741_p4 = data_2594_V_read.read();
        } else {
            ap_phi_mux_data_2594_V_read2664_phi_phi_fu_107741_p4 = ap_phi_reg_pp0_iter0_data_2594_V_read2664_phi_reg_107737.read();
        }
    } else {
        ap_phi_mux_data_2594_V_read2664_phi_phi_fu_107741_p4 = ap_phi_reg_pp0_iter0_data_2594_V_read2664_phi_reg_107737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_65521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_65521_p6 = data_2594_V_read2664_phi_reg_107737.read();
    } else {
        ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_65521_p6 = data_2594_V_read2664_rewind_reg_65517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2595_V_read2665_phi_phi_fu_107754_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2595_V_read2665_phi_phi_fu_107754_p4 = ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_65535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2595_V_read2665_phi_phi_fu_107754_p4 = data_2595_V_read.read();
        } else {
            ap_phi_mux_data_2595_V_read2665_phi_phi_fu_107754_p4 = ap_phi_reg_pp0_iter0_data_2595_V_read2665_phi_reg_107750.read();
        }
    } else {
        ap_phi_mux_data_2595_V_read2665_phi_phi_fu_107754_p4 = ap_phi_reg_pp0_iter0_data_2595_V_read2665_phi_reg_107750.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_65535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_65535_p6 = data_2595_V_read2665_phi_reg_107750.read();
    } else {
        ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_65535_p6 = data_2595_V_read2665_rewind_reg_65531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2596_V_read2666_phi_phi_fu_107767_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2596_V_read2666_phi_phi_fu_107767_p4 = ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_65549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2596_V_read2666_phi_phi_fu_107767_p4 = data_2596_V_read.read();
        } else {
            ap_phi_mux_data_2596_V_read2666_phi_phi_fu_107767_p4 = ap_phi_reg_pp0_iter0_data_2596_V_read2666_phi_reg_107763.read();
        }
    } else {
        ap_phi_mux_data_2596_V_read2666_phi_phi_fu_107767_p4 = ap_phi_reg_pp0_iter0_data_2596_V_read2666_phi_reg_107763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_65549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_65549_p6 = data_2596_V_read2666_phi_reg_107763.read();
    } else {
        ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_65549_p6 = data_2596_V_read2666_rewind_reg_65545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2597_V_read2667_phi_phi_fu_107780_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2597_V_read2667_phi_phi_fu_107780_p4 = ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_65563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2597_V_read2667_phi_phi_fu_107780_p4 = data_2597_V_read.read();
        } else {
            ap_phi_mux_data_2597_V_read2667_phi_phi_fu_107780_p4 = ap_phi_reg_pp0_iter0_data_2597_V_read2667_phi_reg_107776.read();
        }
    } else {
        ap_phi_mux_data_2597_V_read2667_phi_phi_fu_107780_p4 = ap_phi_reg_pp0_iter0_data_2597_V_read2667_phi_reg_107776.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_65563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_65563_p6 = data_2597_V_read2667_phi_reg_107776.read();
    } else {
        ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_65563_p6 = data_2597_V_read2667_rewind_reg_65559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2598_V_read2668_phi_phi_fu_107793_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2598_V_read2668_phi_phi_fu_107793_p4 = ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_65577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2598_V_read2668_phi_phi_fu_107793_p4 = data_2598_V_read.read();
        } else {
            ap_phi_mux_data_2598_V_read2668_phi_phi_fu_107793_p4 = ap_phi_reg_pp0_iter0_data_2598_V_read2668_phi_reg_107789.read();
        }
    } else {
        ap_phi_mux_data_2598_V_read2668_phi_phi_fu_107793_p4 = ap_phi_reg_pp0_iter0_data_2598_V_read2668_phi_reg_107789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_65577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_65577_p6 = data_2598_V_read2668_phi_reg_107789.read();
    } else {
        ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_65577_p6 = data_2598_V_read2668_rewind_reg_65573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2599_V_read2669_phi_phi_fu_107806_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2599_V_read2669_phi_phi_fu_107806_p4 = ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_65591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2599_V_read2669_phi_phi_fu_107806_p4 = data_2599_V_read.read();
        } else {
            ap_phi_mux_data_2599_V_read2669_phi_phi_fu_107806_p4 = ap_phi_reg_pp0_iter0_data_2599_V_read2669_phi_reg_107802.read();
        }
    } else {
        ap_phi_mux_data_2599_V_read2669_phi_phi_fu_107806_p4 = ap_phi_reg_pp0_iter0_data_2599_V_read2669_phi_reg_107802.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_65591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_65591_p6 = data_2599_V_read2669_phi_reg_107802.read();
    } else {
        ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_65591_p6 = data_2599_V_read2669_rewind_reg_65587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_259_V_read329_phi_phi_fu_77386_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_259_V_read329_phi_phi_fu_77386_p4 = ap_phi_mux_data_259_V_read329_rewind_phi_fu_32831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_259_V_read329_phi_phi_fu_77386_p4 = data_259_V_read.read();
        } else {
            ap_phi_mux_data_259_V_read329_phi_phi_fu_77386_p4 = ap_phi_reg_pp0_iter0_data_259_V_read329_phi_reg_77382.read();
        }
    } else {
        ap_phi_mux_data_259_V_read329_phi_phi_fu_77386_p4 = ap_phi_reg_pp0_iter0_data_259_V_read329_phi_reg_77382.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_259_V_read329_rewind_phi_fu_32831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_259_V_read329_rewind_phi_fu_32831_p6 = data_259_V_read329_phi_reg_77382.read();
    } else {
        ap_phi_mux_data_259_V_read329_rewind_phi_fu_32831_p6 = data_259_V_read329_rewind_reg_32827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_25_V_read95_phi_phi_fu_74344_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_25_V_read95_phi_phi_fu_74344_p4 = ap_phi_mux_data_25_V_read95_rewind_phi_fu_29555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_25_V_read95_phi_phi_fu_74344_p4 = data_25_V_read.read();
        } else {
            ap_phi_mux_data_25_V_read95_phi_phi_fu_74344_p4 = ap_phi_reg_pp0_iter0_data_25_V_read95_phi_reg_74340.read();
        }
    } else {
        ap_phi_mux_data_25_V_read95_phi_phi_fu_74344_p4 = ap_phi_reg_pp0_iter0_data_25_V_read95_phi_reg_74340.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_25_V_read95_rewind_phi_fu_29555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_25_V_read95_rewind_phi_fu_29555_p6 = data_25_V_read95_phi_reg_74340.read();
    } else {
        ap_phi_mux_data_25_V_read95_rewind_phi_fu_29555_p6 = data_25_V_read95_rewind_reg_29551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2600_V_read2670_phi_phi_fu_107819_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2600_V_read2670_phi_phi_fu_107819_p4 = ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_65605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2600_V_read2670_phi_phi_fu_107819_p4 = data_2600_V_read.read();
        } else {
            ap_phi_mux_data_2600_V_read2670_phi_phi_fu_107819_p4 = ap_phi_reg_pp0_iter0_data_2600_V_read2670_phi_reg_107815.read();
        }
    } else {
        ap_phi_mux_data_2600_V_read2670_phi_phi_fu_107819_p4 = ap_phi_reg_pp0_iter0_data_2600_V_read2670_phi_reg_107815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_65605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_65605_p6 = data_2600_V_read2670_phi_reg_107815.read();
    } else {
        ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_65605_p6 = data_2600_V_read2670_rewind_reg_65601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2601_V_read2671_phi_phi_fu_107832_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2601_V_read2671_phi_phi_fu_107832_p4 = ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_65619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2601_V_read2671_phi_phi_fu_107832_p4 = data_2601_V_read.read();
        } else {
            ap_phi_mux_data_2601_V_read2671_phi_phi_fu_107832_p4 = ap_phi_reg_pp0_iter0_data_2601_V_read2671_phi_reg_107828.read();
        }
    } else {
        ap_phi_mux_data_2601_V_read2671_phi_phi_fu_107832_p4 = ap_phi_reg_pp0_iter0_data_2601_V_read2671_phi_reg_107828.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_65619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_65619_p6 = data_2601_V_read2671_phi_reg_107828.read();
    } else {
        ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_65619_p6 = data_2601_V_read2671_rewind_reg_65615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2602_V_read2672_phi_phi_fu_107845_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2602_V_read2672_phi_phi_fu_107845_p4 = ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_65633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2602_V_read2672_phi_phi_fu_107845_p4 = data_2602_V_read.read();
        } else {
            ap_phi_mux_data_2602_V_read2672_phi_phi_fu_107845_p4 = ap_phi_reg_pp0_iter0_data_2602_V_read2672_phi_reg_107841.read();
        }
    } else {
        ap_phi_mux_data_2602_V_read2672_phi_phi_fu_107845_p4 = ap_phi_reg_pp0_iter0_data_2602_V_read2672_phi_reg_107841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_65633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_65633_p6 = data_2602_V_read2672_phi_reg_107841.read();
    } else {
        ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_65633_p6 = data_2602_V_read2672_rewind_reg_65629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2603_V_read2673_phi_phi_fu_107858_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2603_V_read2673_phi_phi_fu_107858_p4 = ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_65647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2603_V_read2673_phi_phi_fu_107858_p4 = data_2603_V_read.read();
        } else {
            ap_phi_mux_data_2603_V_read2673_phi_phi_fu_107858_p4 = ap_phi_reg_pp0_iter0_data_2603_V_read2673_phi_reg_107854.read();
        }
    } else {
        ap_phi_mux_data_2603_V_read2673_phi_phi_fu_107858_p4 = ap_phi_reg_pp0_iter0_data_2603_V_read2673_phi_reg_107854.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_65647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_65647_p6 = data_2603_V_read2673_phi_reg_107854.read();
    } else {
        ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_65647_p6 = data_2603_V_read2673_rewind_reg_65643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2604_V_read2674_phi_phi_fu_107871_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2604_V_read2674_phi_phi_fu_107871_p4 = ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_65661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2604_V_read2674_phi_phi_fu_107871_p4 = data_2604_V_read.read();
        } else {
            ap_phi_mux_data_2604_V_read2674_phi_phi_fu_107871_p4 = ap_phi_reg_pp0_iter0_data_2604_V_read2674_phi_reg_107867.read();
        }
    } else {
        ap_phi_mux_data_2604_V_read2674_phi_phi_fu_107871_p4 = ap_phi_reg_pp0_iter0_data_2604_V_read2674_phi_reg_107867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_65661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_65661_p6 = data_2604_V_read2674_phi_reg_107867.read();
    } else {
        ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_65661_p6 = data_2604_V_read2674_rewind_reg_65657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2605_V_read2675_phi_phi_fu_107884_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2605_V_read2675_phi_phi_fu_107884_p4 = ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_65675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2605_V_read2675_phi_phi_fu_107884_p4 = data_2605_V_read.read();
        } else {
            ap_phi_mux_data_2605_V_read2675_phi_phi_fu_107884_p4 = ap_phi_reg_pp0_iter0_data_2605_V_read2675_phi_reg_107880.read();
        }
    } else {
        ap_phi_mux_data_2605_V_read2675_phi_phi_fu_107884_p4 = ap_phi_reg_pp0_iter0_data_2605_V_read2675_phi_reg_107880.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_65675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_65675_p6 = data_2605_V_read2675_phi_reg_107880.read();
    } else {
        ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_65675_p6 = data_2605_V_read2675_rewind_reg_65671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2606_V_read2676_phi_phi_fu_107897_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2606_V_read2676_phi_phi_fu_107897_p4 = ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_65689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2606_V_read2676_phi_phi_fu_107897_p4 = data_2606_V_read.read();
        } else {
            ap_phi_mux_data_2606_V_read2676_phi_phi_fu_107897_p4 = ap_phi_reg_pp0_iter0_data_2606_V_read2676_phi_reg_107893.read();
        }
    } else {
        ap_phi_mux_data_2606_V_read2676_phi_phi_fu_107897_p4 = ap_phi_reg_pp0_iter0_data_2606_V_read2676_phi_reg_107893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_65689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_65689_p6 = data_2606_V_read2676_phi_reg_107893.read();
    } else {
        ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_65689_p6 = data_2606_V_read2676_rewind_reg_65685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2607_V_read2677_phi_phi_fu_107910_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2607_V_read2677_phi_phi_fu_107910_p4 = ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_65703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2607_V_read2677_phi_phi_fu_107910_p4 = data_2607_V_read.read();
        } else {
            ap_phi_mux_data_2607_V_read2677_phi_phi_fu_107910_p4 = ap_phi_reg_pp0_iter0_data_2607_V_read2677_phi_reg_107906.read();
        }
    } else {
        ap_phi_mux_data_2607_V_read2677_phi_phi_fu_107910_p4 = ap_phi_reg_pp0_iter0_data_2607_V_read2677_phi_reg_107906.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_65703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_65703_p6 = data_2607_V_read2677_phi_reg_107906.read();
    } else {
        ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_65703_p6 = data_2607_V_read2677_rewind_reg_65699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2608_V_read2678_phi_phi_fu_107923_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2608_V_read2678_phi_phi_fu_107923_p4 = ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_65717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2608_V_read2678_phi_phi_fu_107923_p4 = data_2608_V_read.read();
        } else {
            ap_phi_mux_data_2608_V_read2678_phi_phi_fu_107923_p4 = ap_phi_reg_pp0_iter0_data_2608_V_read2678_phi_reg_107919.read();
        }
    } else {
        ap_phi_mux_data_2608_V_read2678_phi_phi_fu_107923_p4 = ap_phi_reg_pp0_iter0_data_2608_V_read2678_phi_reg_107919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_65717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_65717_p6 = data_2608_V_read2678_phi_reg_107919.read();
    } else {
        ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_65717_p6 = data_2608_V_read2678_rewind_reg_65713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2609_V_read2679_phi_phi_fu_107936_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2609_V_read2679_phi_phi_fu_107936_p4 = ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_65731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2609_V_read2679_phi_phi_fu_107936_p4 = data_2609_V_read.read();
        } else {
            ap_phi_mux_data_2609_V_read2679_phi_phi_fu_107936_p4 = ap_phi_reg_pp0_iter0_data_2609_V_read2679_phi_reg_107932.read();
        }
    } else {
        ap_phi_mux_data_2609_V_read2679_phi_phi_fu_107936_p4 = ap_phi_reg_pp0_iter0_data_2609_V_read2679_phi_reg_107932.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_65731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_65731_p6 = data_2609_V_read2679_phi_reg_107932.read();
    } else {
        ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_65731_p6 = data_2609_V_read2679_rewind_reg_65727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_260_V_read330_phi_phi_fu_77399_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_260_V_read330_phi_phi_fu_77399_p4 = ap_phi_mux_data_260_V_read330_rewind_phi_fu_32845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_260_V_read330_phi_phi_fu_77399_p4 = data_260_V_read.read();
        } else {
            ap_phi_mux_data_260_V_read330_phi_phi_fu_77399_p4 = ap_phi_reg_pp0_iter0_data_260_V_read330_phi_reg_77395.read();
        }
    } else {
        ap_phi_mux_data_260_V_read330_phi_phi_fu_77399_p4 = ap_phi_reg_pp0_iter0_data_260_V_read330_phi_reg_77395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_260_V_read330_rewind_phi_fu_32845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_260_V_read330_rewind_phi_fu_32845_p6 = data_260_V_read330_phi_reg_77395.read();
    } else {
        ap_phi_mux_data_260_V_read330_rewind_phi_fu_32845_p6 = data_260_V_read330_rewind_reg_32841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2610_V_read2680_phi_phi_fu_107949_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2610_V_read2680_phi_phi_fu_107949_p4 = ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_65745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2610_V_read2680_phi_phi_fu_107949_p4 = data_2610_V_read.read();
        } else {
            ap_phi_mux_data_2610_V_read2680_phi_phi_fu_107949_p4 = ap_phi_reg_pp0_iter0_data_2610_V_read2680_phi_reg_107945.read();
        }
    } else {
        ap_phi_mux_data_2610_V_read2680_phi_phi_fu_107949_p4 = ap_phi_reg_pp0_iter0_data_2610_V_read2680_phi_reg_107945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_65745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_65745_p6 = data_2610_V_read2680_phi_reg_107945.read();
    } else {
        ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_65745_p6 = data_2610_V_read2680_rewind_reg_65741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2611_V_read2681_phi_phi_fu_107962_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2611_V_read2681_phi_phi_fu_107962_p4 = ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_65759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2611_V_read2681_phi_phi_fu_107962_p4 = data_2611_V_read.read();
        } else {
            ap_phi_mux_data_2611_V_read2681_phi_phi_fu_107962_p4 = ap_phi_reg_pp0_iter0_data_2611_V_read2681_phi_reg_107958.read();
        }
    } else {
        ap_phi_mux_data_2611_V_read2681_phi_phi_fu_107962_p4 = ap_phi_reg_pp0_iter0_data_2611_V_read2681_phi_reg_107958.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_65759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_65759_p6 = data_2611_V_read2681_phi_reg_107958.read();
    } else {
        ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_65759_p6 = data_2611_V_read2681_rewind_reg_65755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2612_V_read2682_phi_phi_fu_107975_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2612_V_read2682_phi_phi_fu_107975_p4 = ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_65773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2612_V_read2682_phi_phi_fu_107975_p4 = data_2612_V_read.read();
        } else {
            ap_phi_mux_data_2612_V_read2682_phi_phi_fu_107975_p4 = ap_phi_reg_pp0_iter0_data_2612_V_read2682_phi_reg_107971.read();
        }
    } else {
        ap_phi_mux_data_2612_V_read2682_phi_phi_fu_107975_p4 = ap_phi_reg_pp0_iter0_data_2612_V_read2682_phi_reg_107971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_65773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_65773_p6 = data_2612_V_read2682_phi_reg_107971.read();
    } else {
        ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_65773_p6 = data_2612_V_read2682_rewind_reg_65769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2613_V_read2683_phi_phi_fu_107988_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2613_V_read2683_phi_phi_fu_107988_p4 = ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_65787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2613_V_read2683_phi_phi_fu_107988_p4 = data_2613_V_read.read();
        } else {
            ap_phi_mux_data_2613_V_read2683_phi_phi_fu_107988_p4 = ap_phi_reg_pp0_iter0_data_2613_V_read2683_phi_reg_107984.read();
        }
    } else {
        ap_phi_mux_data_2613_V_read2683_phi_phi_fu_107988_p4 = ap_phi_reg_pp0_iter0_data_2613_V_read2683_phi_reg_107984.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_65787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_65787_p6 = data_2613_V_read2683_phi_reg_107984.read();
    } else {
        ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_65787_p6 = data_2613_V_read2683_rewind_reg_65783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2614_V_read2684_phi_phi_fu_108001_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2614_V_read2684_phi_phi_fu_108001_p4 = ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_65801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2614_V_read2684_phi_phi_fu_108001_p4 = data_2614_V_read.read();
        } else {
            ap_phi_mux_data_2614_V_read2684_phi_phi_fu_108001_p4 = ap_phi_reg_pp0_iter0_data_2614_V_read2684_phi_reg_107997.read();
        }
    } else {
        ap_phi_mux_data_2614_V_read2684_phi_phi_fu_108001_p4 = ap_phi_reg_pp0_iter0_data_2614_V_read2684_phi_reg_107997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_65801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_65801_p6 = data_2614_V_read2684_phi_reg_107997.read();
    } else {
        ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_65801_p6 = data_2614_V_read2684_rewind_reg_65797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2615_V_read2685_phi_phi_fu_108014_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2615_V_read2685_phi_phi_fu_108014_p4 = ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_65815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2615_V_read2685_phi_phi_fu_108014_p4 = data_2615_V_read.read();
        } else {
            ap_phi_mux_data_2615_V_read2685_phi_phi_fu_108014_p4 = ap_phi_reg_pp0_iter0_data_2615_V_read2685_phi_reg_108010.read();
        }
    } else {
        ap_phi_mux_data_2615_V_read2685_phi_phi_fu_108014_p4 = ap_phi_reg_pp0_iter0_data_2615_V_read2685_phi_reg_108010.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_65815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_65815_p6 = data_2615_V_read2685_phi_reg_108010.read();
    } else {
        ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_65815_p6 = data_2615_V_read2685_rewind_reg_65811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2616_V_read2686_phi_phi_fu_108027_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2616_V_read2686_phi_phi_fu_108027_p4 = ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_65829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2616_V_read2686_phi_phi_fu_108027_p4 = data_2616_V_read.read();
        } else {
            ap_phi_mux_data_2616_V_read2686_phi_phi_fu_108027_p4 = ap_phi_reg_pp0_iter0_data_2616_V_read2686_phi_reg_108023.read();
        }
    } else {
        ap_phi_mux_data_2616_V_read2686_phi_phi_fu_108027_p4 = ap_phi_reg_pp0_iter0_data_2616_V_read2686_phi_reg_108023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_65829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_65829_p6 = data_2616_V_read2686_phi_reg_108023.read();
    } else {
        ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_65829_p6 = data_2616_V_read2686_rewind_reg_65825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2617_V_read2687_phi_phi_fu_108040_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2617_V_read2687_phi_phi_fu_108040_p4 = ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_65843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2617_V_read2687_phi_phi_fu_108040_p4 = data_2617_V_read.read();
        } else {
            ap_phi_mux_data_2617_V_read2687_phi_phi_fu_108040_p4 = ap_phi_reg_pp0_iter0_data_2617_V_read2687_phi_reg_108036.read();
        }
    } else {
        ap_phi_mux_data_2617_V_read2687_phi_phi_fu_108040_p4 = ap_phi_reg_pp0_iter0_data_2617_V_read2687_phi_reg_108036.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_65843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_65843_p6 = data_2617_V_read2687_phi_reg_108036.read();
    } else {
        ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_65843_p6 = data_2617_V_read2687_rewind_reg_65839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2618_V_read2688_phi_phi_fu_108053_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2618_V_read2688_phi_phi_fu_108053_p4 = ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_65857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2618_V_read2688_phi_phi_fu_108053_p4 = data_2618_V_read.read();
        } else {
            ap_phi_mux_data_2618_V_read2688_phi_phi_fu_108053_p4 = ap_phi_reg_pp0_iter0_data_2618_V_read2688_phi_reg_108049.read();
        }
    } else {
        ap_phi_mux_data_2618_V_read2688_phi_phi_fu_108053_p4 = ap_phi_reg_pp0_iter0_data_2618_V_read2688_phi_reg_108049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_65857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_65857_p6 = data_2618_V_read2688_phi_reg_108049.read();
    } else {
        ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_65857_p6 = data_2618_V_read2688_rewind_reg_65853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2619_V_read2689_phi_phi_fu_108066_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2619_V_read2689_phi_phi_fu_108066_p4 = ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_65871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2619_V_read2689_phi_phi_fu_108066_p4 = data_2619_V_read.read();
        } else {
            ap_phi_mux_data_2619_V_read2689_phi_phi_fu_108066_p4 = ap_phi_reg_pp0_iter0_data_2619_V_read2689_phi_reg_108062.read();
        }
    } else {
        ap_phi_mux_data_2619_V_read2689_phi_phi_fu_108066_p4 = ap_phi_reg_pp0_iter0_data_2619_V_read2689_phi_reg_108062.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_65871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_65871_p6 = data_2619_V_read2689_phi_reg_108062.read();
    } else {
        ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_65871_p6 = data_2619_V_read2689_rewind_reg_65867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_261_V_read331_phi_phi_fu_77412_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_261_V_read331_phi_phi_fu_77412_p4 = ap_phi_mux_data_261_V_read331_rewind_phi_fu_32859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_261_V_read331_phi_phi_fu_77412_p4 = data_261_V_read.read();
        } else {
            ap_phi_mux_data_261_V_read331_phi_phi_fu_77412_p4 = ap_phi_reg_pp0_iter0_data_261_V_read331_phi_reg_77408.read();
        }
    } else {
        ap_phi_mux_data_261_V_read331_phi_phi_fu_77412_p4 = ap_phi_reg_pp0_iter0_data_261_V_read331_phi_reg_77408.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_261_V_read331_rewind_phi_fu_32859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_261_V_read331_rewind_phi_fu_32859_p6 = data_261_V_read331_phi_reg_77408.read();
    } else {
        ap_phi_mux_data_261_V_read331_rewind_phi_fu_32859_p6 = data_261_V_read331_rewind_reg_32855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2620_V_read2690_phi_phi_fu_108079_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2620_V_read2690_phi_phi_fu_108079_p4 = ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_65885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2620_V_read2690_phi_phi_fu_108079_p4 = data_2620_V_read.read();
        } else {
            ap_phi_mux_data_2620_V_read2690_phi_phi_fu_108079_p4 = ap_phi_reg_pp0_iter0_data_2620_V_read2690_phi_reg_108075.read();
        }
    } else {
        ap_phi_mux_data_2620_V_read2690_phi_phi_fu_108079_p4 = ap_phi_reg_pp0_iter0_data_2620_V_read2690_phi_reg_108075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_65885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_65885_p6 = data_2620_V_read2690_phi_reg_108075.read();
    } else {
        ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_65885_p6 = data_2620_V_read2690_rewind_reg_65881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2621_V_read2691_phi_phi_fu_108092_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2621_V_read2691_phi_phi_fu_108092_p4 = ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_65899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2621_V_read2691_phi_phi_fu_108092_p4 = data_2621_V_read.read();
        } else {
            ap_phi_mux_data_2621_V_read2691_phi_phi_fu_108092_p4 = ap_phi_reg_pp0_iter0_data_2621_V_read2691_phi_reg_108088.read();
        }
    } else {
        ap_phi_mux_data_2621_V_read2691_phi_phi_fu_108092_p4 = ap_phi_reg_pp0_iter0_data_2621_V_read2691_phi_reg_108088.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_65899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_65899_p6 = data_2621_V_read2691_phi_reg_108088.read();
    } else {
        ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_65899_p6 = data_2621_V_read2691_rewind_reg_65895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2622_V_read2692_phi_phi_fu_108105_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2622_V_read2692_phi_phi_fu_108105_p4 = ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_65913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2622_V_read2692_phi_phi_fu_108105_p4 = data_2622_V_read.read();
        } else {
            ap_phi_mux_data_2622_V_read2692_phi_phi_fu_108105_p4 = ap_phi_reg_pp0_iter0_data_2622_V_read2692_phi_reg_108101.read();
        }
    } else {
        ap_phi_mux_data_2622_V_read2692_phi_phi_fu_108105_p4 = ap_phi_reg_pp0_iter0_data_2622_V_read2692_phi_reg_108101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_65913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_65913_p6 = data_2622_V_read2692_phi_reg_108101.read();
    } else {
        ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_65913_p6 = data_2622_V_read2692_rewind_reg_65909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2623_V_read2693_phi_phi_fu_108118_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2623_V_read2693_phi_phi_fu_108118_p4 = ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_65927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2623_V_read2693_phi_phi_fu_108118_p4 = data_2623_V_read.read();
        } else {
            ap_phi_mux_data_2623_V_read2693_phi_phi_fu_108118_p4 = ap_phi_reg_pp0_iter0_data_2623_V_read2693_phi_reg_108114.read();
        }
    } else {
        ap_phi_mux_data_2623_V_read2693_phi_phi_fu_108118_p4 = ap_phi_reg_pp0_iter0_data_2623_V_read2693_phi_reg_108114.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_65927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_65927_p6 = data_2623_V_read2693_phi_reg_108114.read();
    } else {
        ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_65927_p6 = data_2623_V_read2693_rewind_reg_65923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2624_V_read2694_phi_phi_fu_108131_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2624_V_read2694_phi_phi_fu_108131_p4 = ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_65941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2624_V_read2694_phi_phi_fu_108131_p4 = data_2624_V_read.read();
        } else {
            ap_phi_mux_data_2624_V_read2694_phi_phi_fu_108131_p4 = ap_phi_reg_pp0_iter0_data_2624_V_read2694_phi_reg_108127.read();
        }
    } else {
        ap_phi_mux_data_2624_V_read2694_phi_phi_fu_108131_p4 = ap_phi_reg_pp0_iter0_data_2624_V_read2694_phi_reg_108127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_65941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_65941_p6 = data_2624_V_read2694_phi_reg_108127.read();
    } else {
        ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_65941_p6 = data_2624_V_read2694_rewind_reg_65937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2625_V_read2695_phi_phi_fu_108144_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2625_V_read2695_phi_phi_fu_108144_p4 = ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_65955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2625_V_read2695_phi_phi_fu_108144_p4 = data_2625_V_read.read();
        } else {
            ap_phi_mux_data_2625_V_read2695_phi_phi_fu_108144_p4 = ap_phi_reg_pp0_iter0_data_2625_V_read2695_phi_reg_108140.read();
        }
    } else {
        ap_phi_mux_data_2625_V_read2695_phi_phi_fu_108144_p4 = ap_phi_reg_pp0_iter0_data_2625_V_read2695_phi_reg_108140.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_65955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_65955_p6 = data_2625_V_read2695_phi_reg_108140.read();
    } else {
        ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_65955_p6 = data_2625_V_read2695_rewind_reg_65951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2626_V_read2696_phi_phi_fu_108157_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2626_V_read2696_phi_phi_fu_108157_p4 = ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_65969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2626_V_read2696_phi_phi_fu_108157_p4 = data_2626_V_read.read();
        } else {
            ap_phi_mux_data_2626_V_read2696_phi_phi_fu_108157_p4 = ap_phi_reg_pp0_iter0_data_2626_V_read2696_phi_reg_108153.read();
        }
    } else {
        ap_phi_mux_data_2626_V_read2696_phi_phi_fu_108157_p4 = ap_phi_reg_pp0_iter0_data_2626_V_read2696_phi_reg_108153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_65969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_65969_p6 = data_2626_V_read2696_phi_reg_108153.read();
    } else {
        ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_65969_p6 = data_2626_V_read2696_rewind_reg_65965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2627_V_read2697_phi_phi_fu_108170_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2627_V_read2697_phi_phi_fu_108170_p4 = ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_65983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2627_V_read2697_phi_phi_fu_108170_p4 = data_2627_V_read.read();
        } else {
            ap_phi_mux_data_2627_V_read2697_phi_phi_fu_108170_p4 = ap_phi_reg_pp0_iter0_data_2627_V_read2697_phi_reg_108166.read();
        }
    } else {
        ap_phi_mux_data_2627_V_read2697_phi_phi_fu_108170_p4 = ap_phi_reg_pp0_iter0_data_2627_V_read2697_phi_reg_108166.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_65983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_65983_p6 = data_2627_V_read2697_phi_reg_108166.read();
    } else {
        ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_65983_p6 = data_2627_V_read2697_rewind_reg_65979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2628_V_read2698_phi_phi_fu_108183_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2628_V_read2698_phi_phi_fu_108183_p4 = ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_65997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2628_V_read2698_phi_phi_fu_108183_p4 = data_2628_V_read.read();
        } else {
            ap_phi_mux_data_2628_V_read2698_phi_phi_fu_108183_p4 = ap_phi_reg_pp0_iter0_data_2628_V_read2698_phi_reg_108179.read();
        }
    } else {
        ap_phi_mux_data_2628_V_read2698_phi_phi_fu_108183_p4 = ap_phi_reg_pp0_iter0_data_2628_V_read2698_phi_reg_108179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_65997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_65997_p6 = data_2628_V_read2698_phi_reg_108179.read();
    } else {
        ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_65997_p6 = data_2628_V_read2698_rewind_reg_65993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2629_V_read2699_phi_phi_fu_108196_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2629_V_read2699_phi_phi_fu_108196_p4 = ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_66011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2629_V_read2699_phi_phi_fu_108196_p4 = data_2629_V_read.read();
        } else {
            ap_phi_mux_data_2629_V_read2699_phi_phi_fu_108196_p4 = ap_phi_reg_pp0_iter0_data_2629_V_read2699_phi_reg_108192.read();
        }
    } else {
        ap_phi_mux_data_2629_V_read2699_phi_phi_fu_108196_p4 = ap_phi_reg_pp0_iter0_data_2629_V_read2699_phi_reg_108192.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_66011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_66011_p6 = data_2629_V_read2699_phi_reg_108192.read();
    } else {
        ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_66011_p6 = data_2629_V_read2699_rewind_reg_66007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_262_V_read332_phi_phi_fu_77425_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_262_V_read332_phi_phi_fu_77425_p4 = ap_phi_mux_data_262_V_read332_rewind_phi_fu_32873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_262_V_read332_phi_phi_fu_77425_p4 = data_262_V_read.read();
        } else {
            ap_phi_mux_data_262_V_read332_phi_phi_fu_77425_p4 = ap_phi_reg_pp0_iter0_data_262_V_read332_phi_reg_77421.read();
        }
    } else {
        ap_phi_mux_data_262_V_read332_phi_phi_fu_77425_p4 = ap_phi_reg_pp0_iter0_data_262_V_read332_phi_reg_77421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_262_V_read332_rewind_phi_fu_32873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_262_V_read332_rewind_phi_fu_32873_p6 = data_262_V_read332_phi_reg_77421.read();
    } else {
        ap_phi_mux_data_262_V_read332_rewind_phi_fu_32873_p6 = data_262_V_read332_rewind_reg_32869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2630_V_read2700_phi_phi_fu_108209_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2630_V_read2700_phi_phi_fu_108209_p4 = ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_66025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2630_V_read2700_phi_phi_fu_108209_p4 = data_2630_V_read.read();
        } else {
            ap_phi_mux_data_2630_V_read2700_phi_phi_fu_108209_p4 = ap_phi_reg_pp0_iter0_data_2630_V_read2700_phi_reg_108205.read();
        }
    } else {
        ap_phi_mux_data_2630_V_read2700_phi_phi_fu_108209_p4 = ap_phi_reg_pp0_iter0_data_2630_V_read2700_phi_reg_108205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_66025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_66025_p6 = data_2630_V_read2700_phi_reg_108205.read();
    } else {
        ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_66025_p6 = data_2630_V_read2700_rewind_reg_66021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2631_V_read2701_phi_phi_fu_108222_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2631_V_read2701_phi_phi_fu_108222_p4 = ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_66039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2631_V_read2701_phi_phi_fu_108222_p4 = data_2631_V_read.read();
        } else {
            ap_phi_mux_data_2631_V_read2701_phi_phi_fu_108222_p4 = ap_phi_reg_pp0_iter0_data_2631_V_read2701_phi_reg_108218.read();
        }
    } else {
        ap_phi_mux_data_2631_V_read2701_phi_phi_fu_108222_p4 = ap_phi_reg_pp0_iter0_data_2631_V_read2701_phi_reg_108218.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_66039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_66039_p6 = data_2631_V_read2701_phi_reg_108218.read();
    } else {
        ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_66039_p6 = data_2631_V_read2701_rewind_reg_66035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2632_V_read2702_phi_phi_fu_108235_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2632_V_read2702_phi_phi_fu_108235_p4 = ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_66053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2632_V_read2702_phi_phi_fu_108235_p4 = data_2632_V_read.read();
        } else {
            ap_phi_mux_data_2632_V_read2702_phi_phi_fu_108235_p4 = ap_phi_reg_pp0_iter0_data_2632_V_read2702_phi_reg_108231.read();
        }
    } else {
        ap_phi_mux_data_2632_V_read2702_phi_phi_fu_108235_p4 = ap_phi_reg_pp0_iter0_data_2632_V_read2702_phi_reg_108231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_66053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_66053_p6 = data_2632_V_read2702_phi_reg_108231.read();
    } else {
        ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_66053_p6 = data_2632_V_read2702_rewind_reg_66049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2633_V_read2703_phi_phi_fu_108248_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2633_V_read2703_phi_phi_fu_108248_p4 = ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_66067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2633_V_read2703_phi_phi_fu_108248_p4 = data_2633_V_read.read();
        } else {
            ap_phi_mux_data_2633_V_read2703_phi_phi_fu_108248_p4 = ap_phi_reg_pp0_iter0_data_2633_V_read2703_phi_reg_108244.read();
        }
    } else {
        ap_phi_mux_data_2633_V_read2703_phi_phi_fu_108248_p4 = ap_phi_reg_pp0_iter0_data_2633_V_read2703_phi_reg_108244.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_66067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_66067_p6 = data_2633_V_read2703_phi_reg_108244.read();
    } else {
        ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_66067_p6 = data_2633_V_read2703_rewind_reg_66063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2634_V_read2704_phi_phi_fu_108261_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2634_V_read2704_phi_phi_fu_108261_p4 = ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_66081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2634_V_read2704_phi_phi_fu_108261_p4 = data_2634_V_read.read();
        } else {
            ap_phi_mux_data_2634_V_read2704_phi_phi_fu_108261_p4 = ap_phi_reg_pp0_iter0_data_2634_V_read2704_phi_reg_108257.read();
        }
    } else {
        ap_phi_mux_data_2634_V_read2704_phi_phi_fu_108261_p4 = ap_phi_reg_pp0_iter0_data_2634_V_read2704_phi_reg_108257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_66081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_66081_p6 = data_2634_V_read2704_phi_reg_108257.read();
    } else {
        ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_66081_p6 = data_2634_V_read2704_rewind_reg_66077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2635_V_read2705_phi_phi_fu_108274_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2635_V_read2705_phi_phi_fu_108274_p4 = ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_66095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2635_V_read2705_phi_phi_fu_108274_p4 = data_2635_V_read.read();
        } else {
            ap_phi_mux_data_2635_V_read2705_phi_phi_fu_108274_p4 = ap_phi_reg_pp0_iter0_data_2635_V_read2705_phi_reg_108270.read();
        }
    } else {
        ap_phi_mux_data_2635_V_read2705_phi_phi_fu_108274_p4 = ap_phi_reg_pp0_iter0_data_2635_V_read2705_phi_reg_108270.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_66095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_66095_p6 = data_2635_V_read2705_phi_reg_108270.read();
    } else {
        ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_66095_p6 = data_2635_V_read2705_rewind_reg_66091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2636_V_read2706_phi_phi_fu_108287_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2636_V_read2706_phi_phi_fu_108287_p4 = ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_66109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2636_V_read2706_phi_phi_fu_108287_p4 = data_2636_V_read.read();
        } else {
            ap_phi_mux_data_2636_V_read2706_phi_phi_fu_108287_p4 = ap_phi_reg_pp0_iter0_data_2636_V_read2706_phi_reg_108283.read();
        }
    } else {
        ap_phi_mux_data_2636_V_read2706_phi_phi_fu_108287_p4 = ap_phi_reg_pp0_iter0_data_2636_V_read2706_phi_reg_108283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_66109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_66109_p6 = data_2636_V_read2706_phi_reg_108283.read();
    } else {
        ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_66109_p6 = data_2636_V_read2706_rewind_reg_66105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2637_V_read2707_phi_phi_fu_108300_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2637_V_read2707_phi_phi_fu_108300_p4 = ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_66123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2637_V_read2707_phi_phi_fu_108300_p4 = data_2637_V_read.read();
        } else {
            ap_phi_mux_data_2637_V_read2707_phi_phi_fu_108300_p4 = ap_phi_reg_pp0_iter0_data_2637_V_read2707_phi_reg_108296.read();
        }
    } else {
        ap_phi_mux_data_2637_V_read2707_phi_phi_fu_108300_p4 = ap_phi_reg_pp0_iter0_data_2637_V_read2707_phi_reg_108296.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_66123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_66123_p6 = data_2637_V_read2707_phi_reg_108296.read();
    } else {
        ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_66123_p6 = data_2637_V_read2707_rewind_reg_66119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2638_V_read2708_phi_phi_fu_108313_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2638_V_read2708_phi_phi_fu_108313_p4 = ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_66137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2638_V_read2708_phi_phi_fu_108313_p4 = data_2638_V_read.read();
        } else {
            ap_phi_mux_data_2638_V_read2708_phi_phi_fu_108313_p4 = ap_phi_reg_pp0_iter0_data_2638_V_read2708_phi_reg_108309.read();
        }
    } else {
        ap_phi_mux_data_2638_V_read2708_phi_phi_fu_108313_p4 = ap_phi_reg_pp0_iter0_data_2638_V_read2708_phi_reg_108309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_66137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_66137_p6 = data_2638_V_read2708_phi_reg_108309.read();
    } else {
        ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_66137_p6 = data_2638_V_read2708_rewind_reg_66133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2639_V_read2709_phi_phi_fu_108326_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2639_V_read2709_phi_phi_fu_108326_p4 = ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_66151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2639_V_read2709_phi_phi_fu_108326_p4 = data_2639_V_read.read();
        } else {
            ap_phi_mux_data_2639_V_read2709_phi_phi_fu_108326_p4 = ap_phi_reg_pp0_iter0_data_2639_V_read2709_phi_reg_108322.read();
        }
    } else {
        ap_phi_mux_data_2639_V_read2709_phi_phi_fu_108326_p4 = ap_phi_reg_pp0_iter0_data_2639_V_read2709_phi_reg_108322.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_66151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_66151_p6 = data_2639_V_read2709_phi_reg_108322.read();
    } else {
        ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_66151_p6 = data_2639_V_read2709_rewind_reg_66147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_263_V_read333_phi_phi_fu_77438_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_263_V_read333_phi_phi_fu_77438_p4 = ap_phi_mux_data_263_V_read333_rewind_phi_fu_32887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_263_V_read333_phi_phi_fu_77438_p4 = data_263_V_read.read();
        } else {
            ap_phi_mux_data_263_V_read333_phi_phi_fu_77438_p4 = ap_phi_reg_pp0_iter0_data_263_V_read333_phi_reg_77434.read();
        }
    } else {
        ap_phi_mux_data_263_V_read333_phi_phi_fu_77438_p4 = ap_phi_reg_pp0_iter0_data_263_V_read333_phi_reg_77434.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_263_V_read333_rewind_phi_fu_32887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_263_V_read333_rewind_phi_fu_32887_p6 = data_263_V_read333_phi_reg_77434.read();
    } else {
        ap_phi_mux_data_263_V_read333_rewind_phi_fu_32887_p6 = data_263_V_read333_rewind_reg_32883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2640_V_read2710_phi_phi_fu_108339_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2640_V_read2710_phi_phi_fu_108339_p4 = ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_66165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2640_V_read2710_phi_phi_fu_108339_p4 = data_2640_V_read.read();
        } else {
            ap_phi_mux_data_2640_V_read2710_phi_phi_fu_108339_p4 = ap_phi_reg_pp0_iter0_data_2640_V_read2710_phi_reg_108335.read();
        }
    } else {
        ap_phi_mux_data_2640_V_read2710_phi_phi_fu_108339_p4 = ap_phi_reg_pp0_iter0_data_2640_V_read2710_phi_reg_108335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_66165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_66165_p6 = data_2640_V_read2710_phi_reg_108335.read();
    } else {
        ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_66165_p6 = data_2640_V_read2710_rewind_reg_66161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2641_V_read2711_phi_phi_fu_108352_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2641_V_read2711_phi_phi_fu_108352_p4 = ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_66179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2641_V_read2711_phi_phi_fu_108352_p4 = data_2641_V_read.read();
        } else {
            ap_phi_mux_data_2641_V_read2711_phi_phi_fu_108352_p4 = ap_phi_reg_pp0_iter0_data_2641_V_read2711_phi_reg_108348.read();
        }
    } else {
        ap_phi_mux_data_2641_V_read2711_phi_phi_fu_108352_p4 = ap_phi_reg_pp0_iter0_data_2641_V_read2711_phi_reg_108348.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_66179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_66179_p6 = data_2641_V_read2711_phi_reg_108348.read();
    } else {
        ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_66179_p6 = data_2641_V_read2711_rewind_reg_66175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2642_V_read2712_phi_phi_fu_108365_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2642_V_read2712_phi_phi_fu_108365_p4 = ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_66193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2642_V_read2712_phi_phi_fu_108365_p4 = data_2642_V_read.read();
        } else {
            ap_phi_mux_data_2642_V_read2712_phi_phi_fu_108365_p4 = ap_phi_reg_pp0_iter0_data_2642_V_read2712_phi_reg_108361.read();
        }
    } else {
        ap_phi_mux_data_2642_V_read2712_phi_phi_fu_108365_p4 = ap_phi_reg_pp0_iter0_data_2642_V_read2712_phi_reg_108361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_66193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_66193_p6 = data_2642_V_read2712_phi_reg_108361.read();
    } else {
        ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_66193_p6 = data_2642_V_read2712_rewind_reg_66189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2643_V_read2713_phi_phi_fu_108378_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2643_V_read2713_phi_phi_fu_108378_p4 = ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_66207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2643_V_read2713_phi_phi_fu_108378_p4 = data_2643_V_read.read();
        } else {
            ap_phi_mux_data_2643_V_read2713_phi_phi_fu_108378_p4 = ap_phi_reg_pp0_iter0_data_2643_V_read2713_phi_reg_108374.read();
        }
    } else {
        ap_phi_mux_data_2643_V_read2713_phi_phi_fu_108378_p4 = ap_phi_reg_pp0_iter0_data_2643_V_read2713_phi_reg_108374.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_66207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_66207_p6 = data_2643_V_read2713_phi_reg_108374.read();
    } else {
        ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_66207_p6 = data_2643_V_read2713_rewind_reg_66203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2644_V_read2714_phi_phi_fu_108391_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2644_V_read2714_phi_phi_fu_108391_p4 = ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_66221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2644_V_read2714_phi_phi_fu_108391_p4 = data_2644_V_read.read();
        } else {
            ap_phi_mux_data_2644_V_read2714_phi_phi_fu_108391_p4 = ap_phi_reg_pp0_iter0_data_2644_V_read2714_phi_reg_108387.read();
        }
    } else {
        ap_phi_mux_data_2644_V_read2714_phi_phi_fu_108391_p4 = ap_phi_reg_pp0_iter0_data_2644_V_read2714_phi_reg_108387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_66221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_66221_p6 = data_2644_V_read2714_phi_reg_108387.read();
    } else {
        ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_66221_p6 = data_2644_V_read2714_rewind_reg_66217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2645_V_read2715_phi_phi_fu_108404_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2645_V_read2715_phi_phi_fu_108404_p4 = ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_66235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2645_V_read2715_phi_phi_fu_108404_p4 = data_2645_V_read.read();
        } else {
            ap_phi_mux_data_2645_V_read2715_phi_phi_fu_108404_p4 = ap_phi_reg_pp0_iter0_data_2645_V_read2715_phi_reg_108400.read();
        }
    } else {
        ap_phi_mux_data_2645_V_read2715_phi_phi_fu_108404_p4 = ap_phi_reg_pp0_iter0_data_2645_V_read2715_phi_reg_108400.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_66235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_66235_p6 = data_2645_V_read2715_phi_reg_108400.read();
    } else {
        ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_66235_p6 = data_2645_V_read2715_rewind_reg_66231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2646_V_read2716_phi_phi_fu_108417_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2646_V_read2716_phi_phi_fu_108417_p4 = ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_66249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2646_V_read2716_phi_phi_fu_108417_p4 = data_2646_V_read.read();
        } else {
            ap_phi_mux_data_2646_V_read2716_phi_phi_fu_108417_p4 = ap_phi_reg_pp0_iter0_data_2646_V_read2716_phi_reg_108413.read();
        }
    } else {
        ap_phi_mux_data_2646_V_read2716_phi_phi_fu_108417_p4 = ap_phi_reg_pp0_iter0_data_2646_V_read2716_phi_reg_108413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_66249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_66249_p6 = data_2646_V_read2716_phi_reg_108413.read();
    } else {
        ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_66249_p6 = data_2646_V_read2716_rewind_reg_66245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2647_V_read2717_phi_phi_fu_108430_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2647_V_read2717_phi_phi_fu_108430_p4 = ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_66263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2647_V_read2717_phi_phi_fu_108430_p4 = data_2647_V_read.read();
        } else {
            ap_phi_mux_data_2647_V_read2717_phi_phi_fu_108430_p4 = ap_phi_reg_pp0_iter0_data_2647_V_read2717_phi_reg_108426.read();
        }
    } else {
        ap_phi_mux_data_2647_V_read2717_phi_phi_fu_108430_p4 = ap_phi_reg_pp0_iter0_data_2647_V_read2717_phi_reg_108426.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_66263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_66263_p6 = data_2647_V_read2717_phi_reg_108426.read();
    } else {
        ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_66263_p6 = data_2647_V_read2717_rewind_reg_66259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2648_V_read2718_phi_phi_fu_108443_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2648_V_read2718_phi_phi_fu_108443_p4 = ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_66277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2648_V_read2718_phi_phi_fu_108443_p4 = data_2648_V_read.read();
        } else {
            ap_phi_mux_data_2648_V_read2718_phi_phi_fu_108443_p4 = ap_phi_reg_pp0_iter0_data_2648_V_read2718_phi_reg_108439.read();
        }
    } else {
        ap_phi_mux_data_2648_V_read2718_phi_phi_fu_108443_p4 = ap_phi_reg_pp0_iter0_data_2648_V_read2718_phi_reg_108439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_66277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_66277_p6 = data_2648_V_read2718_phi_reg_108439.read();
    } else {
        ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_66277_p6 = data_2648_V_read2718_rewind_reg_66273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2649_V_read2719_phi_phi_fu_108456_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2649_V_read2719_phi_phi_fu_108456_p4 = ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_66291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2649_V_read2719_phi_phi_fu_108456_p4 = data_2649_V_read.read();
        } else {
            ap_phi_mux_data_2649_V_read2719_phi_phi_fu_108456_p4 = ap_phi_reg_pp0_iter0_data_2649_V_read2719_phi_reg_108452.read();
        }
    } else {
        ap_phi_mux_data_2649_V_read2719_phi_phi_fu_108456_p4 = ap_phi_reg_pp0_iter0_data_2649_V_read2719_phi_reg_108452.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_66291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_66291_p6 = data_2649_V_read2719_phi_reg_108452.read();
    } else {
        ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_66291_p6 = data_2649_V_read2719_rewind_reg_66287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_264_V_read334_phi_phi_fu_77451_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_264_V_read334_phi_phi_fu_77451_p4 = ap_phi_mux_data_264_V_read334_rewind_phi_fu_32901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_264_V_read334_phi_phi_fu_77451_p4 = data_264_V_read.read();
        } else {
            ap_phi_mux_data_264_V_read334_phi_phi_fu_77451_p4 = ap_phi_reg_pp0_iter0_data_264_V_read334_phi_reg_77447.read();
        }
    } else {
        ap_phi_mux_data_264_V_read334_phi_phi_fu_77451_p4 = ap_phi_reg_pp0_iter0_data_264_V_read334_phi_reg_77447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_264_V_read334_rewind_phi_fu_32901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_264_V_read334_rewind_phi_fu_32901_p6 = data_264_V_read334_phi_reg_77447.read();
    } else {
        ap_phi_mux_data_264_V_read334_rewind_phi_fu_32901_p6 = data_264_V_read334_rewind_reg_32897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2650_V_read2720_phi_phi_fu_108469_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2650_V_read2720_phi_phi_fu_108469_p4 = ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_66305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2650_V_read2720_phi_phi_fu_108469_p4 = data_2650_V_read.read();
        } else {
            ap_phi_mux_data_2650_V_read2720_phi_phi_fu_108469_p4 = ap_phi_reg_pp0_iter0_data_2650_V_read2720_phi_reg_108465.read();
        }
    } else {
        ap_phi_mux_data_2650_V_read2720_phi_phi_fu_108469_p4 = ap_phi_reg_pp0_iter0_data_2650_V_read2720_phi_reg_108465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_66305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_66305_p6 = data_2650_V_read2720_phi_reg_108465.read();
    } else {
        ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_66305_p6 = data_2650_V_read2720_rewind_reg_66301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2651_V_read2721_phi_phi_fu_108482_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2651_V_read2721_phi_phi_fu_108482_p4 = ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_66319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2651_V_read2721_phi_phi_fu_108482_p4 = data_2651_V_read.read();
        } else {
            ap_phi_mux_data_2651_V_read2721_phi_phi_fu_108482_p4 = ap_phi_reg_pp0_iter0_data_2651_V_read2721_phi_reg_108478.read();
        }
    } else {
        ap_phi_mux_data_2651_V_read2721_phi_phi_fu_108482_p4 = ap_phi_reg_pp0_iter0_data_2651_V_read2721_phi_reg_108478.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_66319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_66319_p6 = data_2651_V_read2721_phi_reg_108478.read();
    } else {
        ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_66319_p6 = data_2651_V_read2721_rewind_reg_66315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2652_V_read2722_phi_phi_fu_108495_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2652_V_read2722_phi_phi_fu_108495_p4 = ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_66333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2652_V_read2722_phi_phi_fu_108495_p4 = data_2652_V_read.read();
        } else {
            ap_phi_mux_data_2652_V_read2722_phi_phi_fu_108495_p4 = ap_phi_reg_pp0_iter0_data_2652_V_read2722_phi_reg_108491.read();
        }
    } else {
        ap_phi_mux_data_2652_V_read2722_phi_phi_fu_108495_p4 = ap_phi_reg_pp0_iter0_data_2652_V_read2722_phi_reg_108491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_66333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_66333_p6 = data_2652_V_read2722_phi_reg_108491.read();
    } else {
        ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_66333_p6 = data_2652_V_read2722_rewind_reg_66329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2653_V_read2723_phi_phi_fu_108508_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2653_V_read2723_phi_phi_fu_108508_p4 = ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_66347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2653_V_read2723_phi_phi_fu_108508_p4 = data_2653_V_read.read();
        } else {
            ap_phi_mux_data_2653_V_read2723_phi_phi_fu_108508_p4 = ap_phi_reg_pp0_iter0_data_2653_V_read2723_phi_reg_108504.read();
        }
    } else {
        ap_phi_mux_data_2653_V_read2723_phi_phi_fu_108508_p4 = ap_phi_reg_pp0_iter0_data_2653_V_read2723_phi_reg_108504.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_66347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_66347_p6 = data_2653_V_read2723_phi_reg_108504.read();
    } else {
        ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_66347_p6 = data_2653_V_read2723_rewind_reg_66343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2654_V_read2724_phi_phi_fu_108521_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2654_V_read2724_phi_phi_fu_108521_p4 = ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_66361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2654_V_read2724_phi_phi_fu_108521_p4 = data_2654_V_read.read();
        } else {
            ap_phi_mux_data_2654_V_read2724_phi_phi_fu_108521_p4 = ap_phi_reg_pp0_iter0_data_2654_V_read2724_phi_reg_108517.read();
        }
    } else {
        ap_phi_mux_data_2654_V_read2724_phi_phi_fu_108521_p4 = ap_phi_reg_pp0_iter0_data_2654_V_read2724_phi_reg_108517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_66361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_66361_p6 = data_2654_V_read2724_phi_reg_108517.read();
    } else {
        ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_66361_p6 = data_2654_V_read2724_rewind_reg_66357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2655_V_read2725_phi_phi_fu_108534_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2655_V_read2725_phi_phi_fu_108534_p4 = ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_66375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2655_V_read2725_phi_phi_fu_108534_p4 = data_2655_V_read.read();
        } else {
            ap_phi_mux_data_2655_V_read2725_phi_phi_fu_108534_p4 = ap_phi_reg_pp0_iter0_data_2655_V_read2725_phi_reg_108530.read();
        }
    } else {
        ap_phi_mux_data_2655_V_read2725_phi_phi_fu_108534_p4 = ap_phi_reg_pp0_iter0_data_2655_V_read2725_phi_reg_108530.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_66375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_66375_p6 = data_2655_V_read2725_phi_reg_108530.read();
    } else {
        ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_66375_p6 = data_2655_V_read2725_rewind_reg_66371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2656_V_read2726_phi_phi_fu_108547_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2656_V_read2726_phi_phi_fu_108547_p4 = ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_66389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2656_V_read2726_phi_phi_fu_108547_p4 = data_2656_V_read.read();
        } else {
            ap_phi_mux_data_2656_V_read2726_phi_phi_fu_108547_p4 = ap_phi_reg_pp0_iter0_data_2656_V_read2726_phi_reg_108543.read();
        }
    } else {
        ap_phi_mux_data_2656_V_read2726_phi_phi_fu_108547_p4 = ap_phi_reg_pp0_iter0_data_2656_V_read2726_phi_reg_108543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_66389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_66389_p6 = data_2656_V_read2726_phi_reg_108543.read();
    } else {
        ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_66389_p6 = data_2656_V_read2726_rewind_reg_66385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2657_V_read2727_phi_phi_fu_108560_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2657_V_read2727_phi_phi_fu_108560_p4 = ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_66403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2657_V_read2727_phi_phi_fu_108560_p4 = data_2657_V_read.read();
        } else {
            ap_phi_mux_data_2657_V_read2727_phi_phi_fu_108560_p4 = ap_phi_reg_pp0_iter0_data_2657_V_read2727_phi_reg_108556.read();
        }
    } else {
        ap_phi_mux_data_2657_V_read2727_phi_phi_fu_108560_p4 = ap_phi_reg_pp0_iter0_data_2657_V_read2727_phi_reg_108556.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_66403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_66403_p6 = data_2657_V_read2727_phi_reg_108556.read();
    } else {
        ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_66403_p6 = data_2657_V_read2727_rewind_reg_66399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2658_V_read2728_phi_phi_fu_108573_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2658_V_read2728_phi_phi_fu_108573_p4 = ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_66417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2658_V_read2728_phi_phi_fu_108573_p4 = data_2658_V_read.read();
        } else {
            ap_phi_mux_data_2658_V_read2728_phi_phi_fu_108573_p4 = ap_phi_reg_pp0_iter0_data_2658_V_read2728_phi_reg_108569.read();
        }
    } else {
        ap_phi_mux_data_2658_V_read2728_phi_phi_fu_108573_p4 = ap_phi_reg_pp0_iter0_data_2658_V_read2728_phi_reg_108569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_66417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_66417_p6 = data_2658_V_read2728_phi_reg_108569.read();
    } else {
        ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_66417_p6 = data_2658_V_read2728_rewind_reg_66413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2659_V_read2729_phi_phi_fu_108586_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2659_V_read2729_phi_phi_fu_108586_p4 = ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_66431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2659_V_read2729_phi_phi_fu_108586_p4 = data_2659_V_read.read();
        } else {
            ap_phi_mux_data_2659_V_read2729_phi_phi_fu_108586_p4 = ap_phi_reg_pp0_iter0_data_2659_V_read2729_phi_reg_108582.read();
        }
    } else {
        ap_phi_mux_data_2659_V_read2729_phi_phi_fu_108586_p4 = ap_phi_reg_pp0_iter0_data_2659_V_read2729_phi_reg_108582.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_66431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_66431_p6 = data_2659_V_read2729_phi_reg_108582.read();
    } else {
        ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_66431_p6 = data_2659_V_read2729_rewind_reg_66427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_265_V_read335_phi_phi_fu_77464_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_265_V_read335_phi_phi_fu_77464_p4 = ap_phi_mux_data_265_V_read335_rewind_phi_fu_32915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_265_V_read335_phi_phi_fu_77464_p4 = data_265_V_read.read();
        } else {
            ap_phi_mux_data_265_V_read335_phi_phi_fu_77464_p4 = ap_phi_reg_pp0_iter0_data_265_V_read335_phi_reg_77460.read();
        }
    } else {
        ap_phi_mux_data_265_V_read335_phi_phi_fu_77464_p4 = ap_phi_reg_pp0_iter0_data_265_V_read335_phi_reg_77460.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_265_V_read335_rewind_phi_fu_32915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_265_V_read335_rewind_phi_fu_32915_p6 = data_265_V_read335_phi_reg_77460.read();
    } else {
        ap_phi_mux_data_265_V_read335_rewind_phi_fu_32915_p6 = data_265_V_read335_rewind_reg_32911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2660_V_read2730_phi_phi_fu_108599_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2660_V_read2730_phi_phi_fu_108599_p4 = ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_66445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2660_V_read2730_phi_phi_fu_108599_p4 = data_2660_V_read.read();
        } else {
            ap_phi_mux_data_2660_V_read2730_phi_phi_fu_108599_p4 = ap_phi_reg_pp0_iter0_data_2660_V_read2730_phi_reg_108595.read();
        }
    } else {
        ap_phi_mux_data_2660_V_read2730_phi_phi_fu_108599_p4 = ap_phi_reg_pp0_iter0_data_2660_V_read2730_phi_reg_108595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_66445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_66445_p6 = data_2660_V_read2730_phi_reg_108595.read();
    } else {
        ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_66445_p6 = data_2660_V_read2730_rewind_reg_66441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2661_V_read2731_phi_phi_fu_108612_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2661_V_read2731_phi_phi_fu_108612_p4 = ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_66459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2661_V_read2731_phi_phi_fu_108612_p4 = data_2661_V_read.read();
        } else {
            ap_phi_mux_data_2661_V_read2731_phi_phi_fu_108612_p4 = ap_phi_reg_pp0_iter0_data_2661_V_read2731_phi_reg_108608.read();
        }
    } else {
        ap_phi_mux_data_2661_V_read2731_phi_phi_fu_108612_p4 = ap_phi_reg_pp0_iter0_data_2661_V_read2731_phi_reg_108608.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_66459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_66459_p6 = data_2661_V_read2731_phi_reg_108608.read();
    } else {
        ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_66459_p6 = data_2661_V_read2731_rewind_reg_66455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2662_V_read2732_phi_phi_fu_108625_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2662_V_read2732_phi_phi_fu_108625_p4 = ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_66473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2662_V_read2732_phi_phi_fu_108625_p4 = data_2662_V_read.read();
        } else {
            ap_phi_mux_data_2662_V_read2732_phi_phi_fu_108625_p4 = ap_phi_reg_pp0_iter0_data_2662_V_read2732_phi_reg_108621.read();
        }
    } else {
        ap_phi_mux_data_2662_V_read2732_phi_phi_fu_108625_p4 = ap_phi_reg_pp0_iter0_data_2662_V_read2732_phi_reg_108621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_66473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_66473_p6 = data_2662_V_read2732_phi_reg_108621.read();
    } else {
        ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_66473_p6 = data_2662_V_read2732_rewind_reg_66469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2663_V_read2733_phi_phi_fu_108638_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2663_V_read2733_phi_phi_fu_108638_p4 = ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_66487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2663_V_read2733_phi_phi_fu_108638_p4 = data_2663_V_read.read();
        } else {
            ap_phi_mux_data_2663_V_read2733_phi_phi_fu_108638_p4 = ap_phi_reg_pp0_iter0_data_2663_V_read2733_phi_reg_108634.read();
        }
    } else {
        ap_phi_mux_data_2663_V_read2733_phi_phi_fu_108638_p4 = ap_phi_reg_pp0_iter0_data_2663_V_read2733_phi_reg_108634.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_66487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_66487_p6 = data_2663_V_read2733_phi_reg_108634.read();
    } else {
        ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_66487_p6 = data_2663_V_read2733_rewind_reg_66483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2664_V_read2734_phi_phi_fu_108651_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2664_V_read2734_phi_phi_fu_108651_p4 = ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_66501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2664_V_read2734_phi_phi_fu_108651_p4 = data_2664_V_read.read();
        } else {
            ap_phi_mux_data_2664_V_read2734_phi_phi_fu_108651_p4 = ap_phi_reg_pp0_iter0_data_2664_V_read2734_phi_reg_108647.read();
        }
    } else {
        ap_phi_mux_data_2664_V_read2734_phi_phi_fu_108651_p4 = ap_phi_reg_pp0_iter0_data_2664_V_read2734_phi_reg_108647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_66501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_66501_p6 = data_2664_V_read2734_phi_reg_108647.read();
    } else {
        ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_66501_p6 = data_2664_V_read2734_rewind_reg_66497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2665_V_read2735_phi_phi_fu_108664_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2665_V_read2735_phi_phi_fu_108664_p4 = ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_66515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2665_V_read2735_phi_phi_fu_108664_p4 = data_2665_V_read.read();
        } else {
            ap_phi_mux_data_2665_V_read2735_phi_phi_fu_108664_p4 = ap_phi_reg_pp0_iter0_data_2665_V_read2735_phi_reg_108660.read();
        }
    } else {
        ap_phi_mux_data_2665_V_read2735_phi_phi_fu_108664_p4 = ap_phi_reg_pp0_iter0_data_2665_V_read2735_phi_reg_108660.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_66515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_66515_p6 = data_2665_V_read2735_phi_reg_108660.read();
    } else {
        ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_66515_p6 = data_2665_V_read2735_rewind_reg_66511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2666_V_read2736_phi_phi_fu_108677_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2666_V_read2736_phi_phi_fu_108677_p4 = ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_66529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2666_V_read2736_phi_phi_fu_108677_p4 = data_2666_V_read.read();
        } else {
            ap_phi_mux_data_2666_V_read2736_phi_phi_fu_108677_p4 = ap_phi_reg_pp0_iter0_data_2666_V_read2736_phi_reg_108673.read();
        }
    } else {
        ap_phi_mux_data_2666_V_read2736_phi_phi_fu_108677_p4 = ap_phi_reg_pp0_iter0_data_2666_V_read2736_phi_reg_108673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_66529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_66529_p6 = data_2666_V_read2736_phi_reg_108673.read();
    } else {
        ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_66529_p6 = data_2666_V_read2736_rewind_reg_66525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2667_V_read2737_phi_phi_fu_108690_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2667_V_read2737_phi_phi_fu_108690_p4 = ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_66543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2667_V_read2737_phi_phi_fu_108690_p4 = data_2667_V_read.read();
        } else {
            ap_phi_mux_data_2667_V_read2737_phi_phi_fu_108690_p4 = ap_phi_reg_pp0_iter0_data_2667_V_read2737_phi_reg_108686.read();
        }
    } else {
        ap_phi_mux_data_2667_V_read2737_phi_phi_fu_108690_p4 = ap_phi_reg_pp0_iter0_data_2667_V_read2737_phi_reg_108686.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_66543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_66543_p6 = data_2667_V_read2737_phi_reg_108686.read();
    } else {
        ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_66543_p6 = data_2667_V_read2737_rewind_reg_66539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2668_V_read2738_phi_phi_fu_108703_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2668_V_read2738_phi_phi_fu_108703_p4 = ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_66557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2668_V_read2738_phi_phi_fu_108703_p4 = data_2668_V_read.read();
        } else {
            ap_phi_mux_data_2668_V_read2738_phi_phi_fu_108703_p4 = ap_phi_reg_pp0_iter0_data_2668_V_read2738_phi_reg_108699.read();
        }
    } else {
        ap_phi_mux_data_2668_V_read2738_phi_phi_fu_108703_p4 = ap_phi_reg_pp0_iter0_data_2668_V_read2738_phi_reg_108699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_66557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_66557_p6 = data_2668_V_read2738_phi_reg_108699.read();
    } else {
        ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_66557_p6 = data_2668_V_read2738_rewind_reg_66553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2669_V_read2739_phi_phi_fu_108716_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2669_V_read2739_phi_phi_fu_108716_p4 = ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_66571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2669_V_read2739_phi_phi_fu_108716_p4 = data_2669_V_read.read();
        } else {
            ap_phi_mux_data_2669_V_read2739_phi_phi_fu_108716_p4 = ap_phi_reg_pp0_iter0_data_2669_V_read2739_phi_reg_108712.read();
        }
    } else {
        ap_phi_mux_data_2669_V_read2739_phi_phi_fu_108716_p4 = ap_phi_reg_pp0_iter0_data_2669_V_read2739_phi_reg_108712.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_66571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_66571_p6 = data_2669_V_read2739_phi_reg_108712.read();
    } else {
        ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_66571_p6 = data_2669_V_read2739_rewind_reg_66567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_266_V_read336_phi_phi_fu_77477_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_266_V_read336_phi_phi_fu_77477_p4 = ap_phi_mux_data_266_V_read336_rewind_phi_fu_32929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_266_V_read336_phi_phi_fu_77477_p4 = data_266_V_read.read();
        } else {
            ap_phi_mux_data_266_V_read336_phi_phi_fu_77477_p4 = ap_phi_reg_pp0_iter0_data_266_V_read336_phi_reg_77473.read();
        }
    } else {
        ap_phi_mux_data_266_V_read336_phi_phi_fu_77477_p4 = ap_phi_reg_pp0_iter0_data_266_V_read336_phi_reg_77473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_266_V_read336_rewind_phi_fu_32929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_266_V_read336_rewind_phi_fu_32929_p6 = data_266_V_read336_phi_reg_77473.read();
    } else {
        ap_phi_mux_data_266_V_read336_rewind_phi_fu_32929_p6 = data_266_V_read336_rewind_reg_32925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2670_V_read2740_phi_phi_fu_108729_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2670_V_read2740_phi_phi_fu_108729_p4 = ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_66585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2670_V_read2740_phi_phi_fu_108729_p4 = data_2670_V_read.read();
        } else {
            ap_phi_mux_data_2670_V_read2740_phi_phi_fu_108729_p4 = ap_phi_reg_pp0_iter0_data_2670_V_read2740_phi_reg_108725.read();
        }
    } else {
        ap_phi_mux_data_2670_V_read2740_phi_phi_fu_108729_p4 = ap_phi_reg_pp0_iter0_data_2670_V_read2740_phi_reg_108725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_66585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_66585_p6 = data_2670_V_read2740_phi_reg_108725.read();
    } else {
        ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_66585_p6 = data_2670_V_read2740_rewind_reg_66581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2671_V_read2741_phi_phi_fu_108742_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2671_V_read2741_phi_phi_fu_108742_p4 = ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_66599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2671_V_read2741_phi_phi_fu_108742_p4 = data_2671_V_read.read();
        } else {
            ap_phi_mux_data_2671_V_read2741_phi_phi_fu_108742_p4 = ap_phi_reg_pp0_iter0_data_2671_V_read2741_phi_reg_108738.read();
        }
    } else {
        ap_phi_mux_data_2671_V_read2741_phi_phi_fu_108742_p4 = ap_phi_reg_pp0_iter0_data_2671_V_read2741_phi_reg_108738.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_66599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_66599_p6 = data_2671_V_read2741_phi_reg_108738.read();
    } else {
        ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_66599_p6 = data_2671_V_read2741_rewind_reg_66595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2672_V_read2742_phi_phi_fu_108755_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2672_V_read2742_phi_phi_fu_108755_p4 = ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_66613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2672_V_read2742_phi_phi_fu_108755_p4 = data_2672_V_read.read();
        } else {
            ap_phi_mux_data_2672_V_read2742_phi_phi_fu_108755_p4 = ap_phi_reg_pp0_iter0_data_2672_V_read2742_phi_reg_108751.read();
        }
    } else {
        ap_phi_mux_data_2672_V_read2742_phi_phi_fu_108755_p4 = ap_phi_reg_pp0_iter0_data_2672_V_read2742_phi_reg_108751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_66613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_66613_p6 = data_2672_V_read2742_phi_reg_108751.read();
    } else {
        ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_66613_p6 = data_2672_V_read2742_rewind_reg_66609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2673_V_read2743_phi_phi_fu_108768_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2673_V_read2743_phi_phi_fu_108768_p4 = ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_66627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2673_V_read2743_phi_phi_fu_108768_p4 = data_2673_V_read.read();
        } else {
            ap_phi_mux_data_2673_V_read2743_phi_phi_fu_108768_p4 = ap_phi_reg_pp0_iter0_data_2673_V_read2743_phi_reg_108764.read();
        }
    } else {
        ap_phi_mux_data_2673_V_read2743_phi_phi_fu_108768_p4 = ap_phi_reg_pp0_iter0_data_2673_V_read2743_phi_reg_108764.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_66627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_66627_p6 = data_2673_V_read2743_phi_reg_108764.read();
    } else {
        ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_66627_p6 = data_2673_V_read2743_rewind_reg_66623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2674_V_read2744_phi_phi_fu_108781_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2674_V_read2744_phi_phi_fu_108781_p4 = ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_66641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2674_V_read2744_phi_phi_fu_108781_p4 = data_2674_V_read.read();
        } else {
            ap_phi_mux_data_2674_V_read2744_phi_phi_fu_108781_p4 = ap_phi_reg_pp0_iter0_data_2674_V_read2744_phi_reg_108777.read();
        }
    } else {
        ap_phi_mux_data_2674_V_read2744_phi_phi_fu_108781_p4 = ap_phi_reg_pp0_iter0_data_2674_V_read2744_phi_reg_108777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_66641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_66641_p6 = data_2674_V_read2744_phi_reg_108777.read();
    } else {
        ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_66641_p6 = data_2674_V_read2744_rewind_reg_66637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2675_V_read2745_phi_phi_fu_108794_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2675_V_read2745_phi_phi_fu_108794_p4 = ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_66655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2675_V_read2745_phi_phi_fu_108794_p4 = data_2675_V_read.read();
        } else {
            ap_phi_mux_data_2675_V_read2745_phi_phi_fu_108794_p4 = ap_phi_reg_pp0_iter0_data_2675_V_read2745_phi_reg_108790.read();
        }
    } else {
        ap_phi_mux_data_2675_V_read2745_phi_phi_fu_108794_p4 = ap_phi_reg_pp0_iter0_data_2675_V_read2745_phi_reg_108790.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_66655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_66655_p6 = data_2675_V_read2745_phi_reg_108790.read();
    } else {
        ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_66655_p6 = data_2675_V_read2745_rewind_reg_66651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2676_V_read2746_phi_phi_fu_108807_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2676_V_read2746_phi_phi_fu_108807_p4 = ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_66669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2676_V_read2746_phi_phi_fu_108807_p4 = data_2676_V_read.read();
        } else {
            ap_phi_mux_data_2676_V_read2746_phi_phi_fu_108807_p4 = ap_phi_reg_pp0_iter0_data_2676_V_read2746_phi_reg_108803.read();
        }
    } else {
        ap_phi_mux_data_2676_V_read2746_phi_phi_fu_108807_p4 = ap_phi_reg_pp0_iter0_data_2676_V_read2746_phi_reg_108803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_66669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_66669_p6 = data_2676_V_read2746_phi_reg_108803.read();
    } else {
        ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_66669_p6 = data_2676_V_read2746_rewind_reg_66665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2677_V_read2747_phi_phi_fu_108820_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2677_V_read2747_phi_phi_fu_108820_p4 = ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_66683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2677_V_read2747_phi_phi_fu_108820_p4 = data_2677_V_read.read();
        } else {
            ap_phi_mux_data_2677_V_read2747_phi_phi_fu_108820_p4 = ap_phi_reg_pp0_iter0_data_2677_V_read2747_phi_reg_108816.read();
        }
    } else {
        ap_phi_mux_data_2677_V_read2747_phi_phi_fu_108820_p4 = ap_phi_reg_pp0_iter0_data_2677_V_read2747_phi_reg_108816.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_66683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_66683_p6 = data_2677_V_read2747_phi_reg_108816.read();
    } else {
        ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_66683_p6 = data_2677_V_read2747_rewind_reg_66679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2678_V_read2748_phi_phi_fu_108833_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2678_V_read2748_phi_phi_fu_108833_p4 = ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_66697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2678_V_read2748_phi_phi_fu_108833_p4 = data_2678_V_read.read();
        } else {
            ap_phi_mux_data_2678_V_read2748_phi_phi_fu_108833_p4 = ap_phi_reg_pp0_iter0_data_2678_V_read2748_phi_reg_108829.read();
        }
    } else {
        ap_phi_mux_data_2678_V_read2748_phi_phi_fu_108833_p4 = ap_phi_reg_pp0_iter0_data_2678_V_read2748_phi_reg_108829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_66697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_66697_p6 = data_2678_V_read2748_phi_reg_108829.read();
    } else {
        ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_66697_p6 = data_2678_V_read2748_rewind_reg_66693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2679_V_read2749_phi_phi_fu_108846_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2679_V_read2749_phi_phi_fu_108846_p4 = ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_66711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2679_V_read2749_phi_phi_fu_108846_p4 = data_2679_V_read.read();
        } else {
            ap_phi_mux_data_2679_V_read2749_phi_phi_fu_108846_p4 = ap_phi_reg_pp0_iter0_data_2679_V_read2749_phi_reg_108842.read();
        }
    } else {
        ap_phi_mux_data_2679_V_read2749_phi_phi_fu_108846_p4 = ap_phi_reg_pp0_iter0_data_2679_V_read2749_phi_reg_108842.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_66711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_66711_p6 = data_2679_V_read2749_phi_reg_108842.read();
    } else {
        ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_66711_p6 = data_2679_V_read2749_rewind_reg_66707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_267_V_read337_phi_phi_fu_77490_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_267_V_read337_phi_phi_fu_77490_p4 = ap_phi_mux_data_267_V_read337_rewind_phi_fu_32943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_267_V_read337_phi_phi_fu_77490_p4 = data_267_V_read.read();
        } else {
            ap_phi_mux_data_267_V_read337_phi_phi_fu_77490_p4 = ap_phi_reg_pp0_iter0_data_267_V_read337_phi_reg_77486.read();
        }
    } else {
        ap_phi_mux_data_267_V_read337_phi_phi_fu_77490_p4 = ap_phi_reg_pp0_iter0_data_267_V_read337_phi_reg_77486.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_267_V_read337_rewind_phi_fu_32943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_267_V_read337_rewind_phi_fu_32943_p6 = data_267_V_read337_phi_reg_77486.read();
    } else {
        ap_phi_mux_data_267_V_read337_rewind_phi_fu_32943_p6 = data_267_V_read337_rewind_reg_32939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2680_V_read2750_phi_phi_fu_108859_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2680_V_read2750_phi_phi_fu_108859_p4 = ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_66725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2680_V_read2750_phi_phi_fu_108859_p4 = data_2680_V_read.read();
        } else {
            ap_phi_mux_data_2680_V_read2750_phi_phi_fu_108859_p4 = ap_phi_reg_pp0_iter0_data_2680_V_read2750_phi_reg_108855.read();
        }
    } else {
        ap_phi_mux_data_2680_V_read2750_phi_phi_fu_108859_p4 = ap_phi_reg_pp0_iter0_data_2680_V_read2750_phi_reg_108855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_66725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_66725_p6 = data_2680_V_read2750_phi_reg_108855.read();
    } else {
        ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_66725_p6 = data_2680_V_read2750_rewind_reg_66721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2681_V_read2751_phi_phi_fu_108872_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2681_V_read2751_phi_phi_fu_108872_p4 = ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_66739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2681_V_read2751_phi_phi_fu_108872_p4 = data_2681_V_read.read();
        } else {
            ap_phi_mux_data_2681_V_read2751_phi_phi_fu_108872_p4 = ap_phi_reg_pp0_iter0_data_2681_V_read2751_phi_reg_108868.read();
        }
    } else {
        ap_phi_mux_data_2681_V_read2751_phi_phi_fu_108872_p4 = ap_phi_reg_pp0_iter0_data_2681_V_read2751_phi_reg_108868.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_66739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_66739_p6 = data_2681_V_read2751_phi_reg_108868.read();
    } else {
        ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_66739_p6 = data_2681_V_read2751_rewind_reg_66735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2682_V_read2752_phi_phi_fu_108885_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2682_V_read2752_phi_phi_fu_108885_p4 = ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_66753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2682_V_read2752_phi_phi_fu_108885_p4 = data_2682_V_read.read();
        } else {
            ap_phi_mux_data_2682_V_read2752_phi_phi_fu_108885_p4 = ap_phi_reg_pp0_iter0_data_2682_V_read2752_phi_reg_108881.read();
        }
    } else {
        ap_phi_mux_data_2682_V_read2752_phi_phi_fu_108885_p4 = ap_phi_reg_pp0_iter0_data_2682_V_read2752_phi_reg_108881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_66753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_66753_p6 = data_2682_V_read2752_phi_reg_108881.read();
    } else {
        ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_66753_p6 = data_2682_V_read2752_rewind_reg_66749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2683_V_read2753_phi_phi_fu_108898_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2683_V_read2753_phi_phi_fu_108898_p4 = ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_66767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2683_V_read2753_phi_phi_fu_108898_p4 = data_2683_V_read.read();
        } else {
            ap_phi_mux_data_2683_V_read2753_phi_phi_fu_108898_p4 = ap_phi_reg_pp0_iter0_data_2683_V_read2753_phi_reg_108894.read();
        }
    } else {
        ap_phi_mux_data_2683_V_read2753_phi_phi_fu_108898_p4 = ap_phi_reg_pp0_iter0_data_2683_V_read2753_phi_reg_108894.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_66767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_66767_p6 = data_2683_V_read2753_phi_reg_108894.read();
    } else {
        ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_66767_p6 = data_2683_V_read2753_rewind_reg_66763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2684_V_read2754_phi_phi_fu_108911_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2684_V_read2754_phi_phi_fu_108911_p4 = ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_66781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2684_V_read2754_phi_phi_fu_108911_p4 = data_2684_V_read.read();
        } else {
            ap_phi_mux_data_2684_V_read2754_phi_phi_fu_108911_p4 = ap_phi_reg_pp0_iter0_data_2684_V_read2754_phi_reg_108907.read();
        }
    } else {
        ap_phi_mux_data_2684_V_read2754_phi_phi_fu_108911_p4 = ap_phi_reg_pp0_iter0_data_2684_V_read2754_phi_reg_108907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_66781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_66781_p6 = data_2684_V_read2754_phi_reg_108907.read();
    } else {
        ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_66781_p6 = data_2684_V_read2754_rewind_reg_66777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2685_V_read2755_phi_phi_fu_108924_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2685_V_read2755_phi_phi_fu_108924_p4 = ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_66795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2685_V_read2755_phi_phi_fu_108924_p4 = data_2685_V_read.read();
        } else {
            ap_phi_mux_data_2685_V_read2755_phi_phi_fu_108924_p4 = ap_phi_reg_pp0_iter0_data_2685_V_read2755_phi_reg_108920.read();
        }
    } else {
        ap_phi_mux_data_2685_V_read2755_phi_phi_fu_108924_p4 = ap_phi_reg_pp0_iter0_data_2685_V_read2755_phi_reg_108920.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_66795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_66795_p6 = data_2685_V_read2755_phi_reg_108920.read();
    } else {
        ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_66795_p6 = data_2685_V_read2755_rewind_reg_66791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2686_V_read2756_phi_phi_fu_108937_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2686_V_read2756_phi_phi_fu_108937_p4 = ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_66809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2686_V_read2756_phi_phi_fu_108937_p4 = data_2686_V_read.read();
        } else {
            ap_phi_mux_data_2686_V_read2756_phi_phi_fu_108937_p4 = ap_phi_reg_pp0_iter0_data_2686_V_read2756_phi_reg_108933.read();
        }
    } else {
        ap_phi_mux_data_2686_V_read2756_phi_phi_fu_108937_p4 = ap_phi_reg_pp0_iter0_data_2686_V_read2756_phi_reg_108933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_66809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_66809_p6 = data_2686_V_read2756_phi_reg_108933.read();
    } else {
        ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_66809_p6 = data_2686_V_read2756_rewind_reg_66805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2687_V_read2757_phi_phi_fu_108950_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2687_V_read2757_phi_phi_fu_108950_p4 = ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_66823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2687_V_read2757_phi_phi_fu_108950_p4 = data_2687_V_read.read();
        } else {
            ap_phi_mux_data_2687_V_read2757_phi_phi_fu_108950_p4 = ap_phi_reg_pp0_iter0_data_2687_V_read2757_phi_reg_108946.read();
        }
    } else {
        ap_phi_mux_data_2687_V_read2757_phi_phi_fu_108950_p4 = ap_phi_reg_pp0_iter0_data_2687_V_read2757_phi_reg_108946.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_66823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_66823_p6 = data_2687_V_read2757_phi_reg_108946.read();
    } else {
        ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_66823_p6 = data_2687_V_read2757_rewind_reg_66819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2688_V_read2758_phi_phi_fu_108963_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2688_V_read2758_phi_phi_fu_108963_p4 = ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_66837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2688_V_read2758_phi_phi_fu_108963_p4 = data_2688_V_read.read();
        } else {
            ap_phi_mux_data_2688_V_read2758_phi_phi_fu_108963_p4 = ap_phi_reg_pp0_iter0_data_2688_V_read2758_phi_reg_108959.read();
        }
    } else {
        ap_phi_mux_data_2688_V_read2758_phi_phi_fu_108963_p4 = ap_phi_reg_pp0_iter0_data_2688_V_read2758_phi_reg_108959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_66837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_66837_p6 = data_2688_V_read2758_phi_reg_108959.read();
    } else {
        ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_66837_p6 = data_2688_V_read2758_rewind_reg_66833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2689_V_read2759_phi_phi_fu_108976_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2689_V_read2759_phi_phi_fu_108976_p4 = ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_66851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2689_V_read2759_phi_phi_fu_108976_p4 = data_2689_V_read.read();
        } else {
            ap_phi_mux_data_2689_V_read2759_phi_phi_fu_108976_p4 = ap_phi_reg_pp0_iter0_data_2689_V_read2759_phi_reg_108972.read();
        }
    } else {
        ap_phi_mux_data_2689_V_read2759_phi_phi_fu_108976_p4 = ap_phi_reg_pp0_iter0_data_2689_V_read2759_phi_reg_108972.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_66851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_66851_p6 = data_2689_V_read2759_phi_reg_108972.read();
    } else {
        ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_66851_p6 = data_2689_V_read2759_rewind_reg_66847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_268_V_read338_phi_phi_fu_77503_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_268_V_read338_phi_phi_fu_77503_p4 = ap_phi_mux_data_268_V_read338_rewind_phi_fu_32957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_268_V_read338_phi_phi_fu_77503_p4 = data_268_V_read.read();
        } else {
            ap_phi_mux_data_268_V_read338_phi_phi_fu_77503_p4 = ap_phi_reg_pp0_iter0_data_268_V_read338_phi_reg_77499.read();
        }
    } else {
        ap_phi_mux_data_268_V_read338_phi_phi_fu_77503_p4 = ap_phi_reg_pp0_iter0_data_268_V_read338_phi_reg_77499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_268_V_read338_rewind_phi_fu_32957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_268_V_read338_rewind_phi_fu_32957_p6 = data_268_V_read338_phi_reg_77499.read();
    } else {
        ap_phi_mux_data_268_V_read338_rewind_phi_fu_32957_p6 = data_268_V_read338_rewind_reg_32953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2690_V_read2760_phi_phi_fu_108989_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2690_V_read2760_phi_phi_fu_108989_p4 = ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_66865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2690_V_read2760_phi_phi_fu_108989_p4 = data_2690_V_read.read();
        } else {
            ap_phi_mux_data_2690_V_read2760_phi_phi_fu_108989_p4 = ap_phi_reg_pp0_iter0_data_2690_V_read2760_phi_reg_108985.read();
        }
    } else {
        ap_phi_mux_data_2690_V_read2760_phi_phi_fu_108989_p4 = ap_phi_reg_pp0_iter0_data_2690_V_read2760_phi_reg_108985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_66865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_66865_p6 = data_2690_V_read2760_phi_reg_108985.read();
    } else {
        ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_66865_p6 = data_2690_V_read2760_rewind_reg_66861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2691_V_read2761_phi_phi_fu_109002_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2691_V_read2761_phi_phi_fu_109002_p4 = ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_66879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2691_V_read2761_phi_phi_fu_109002_p4 = data_2691_V_read.read();
        } else {
            ap_phi_mux_data_2691_V_read2761_phi_phi_fu_109002_p4 = ap_phi_reg_pp0_iter0_data_2691_V_read2761_phi_reg_108998.read();
        }
    } else {
        ap_phi_mux_data_2691_V_read2761_phi_phi_fu_109002_p4 = ap_phi_reg_pp0_iter0_data_2691_V_read2761_phi_reg_108998.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_66879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_66879_p6 = data_2691_V_read2761_phi_reg_108998.read();
    } else {
        ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_66879_p6 = data_2691_V_read2761_rewind_reg_66875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2692_V_read2762_phi_phi_fu_109015_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2692_V_read2762_phi_phi_fu_109015_p4 = ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_66893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2692_V_read2762_phi_phi_fu_109015_p4 = data_2692_V_read.read();
        } else {
            ap_phi_mux_data_2692_V_read2762_phi_phi_fu_109015_p4 = ap_phi_reg_pp0_iter0_data_2692_V_read2762_phi_reg_109011.read();
        }
    } else {
        ap_phi_mux_data_2692_V_read2762_phi_phi_fu_109015_p4 = ap_phi_reg_pp0_iter0_data_2692_V_read2762_phi_reg_109011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_66893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_66893_p6 = data_2692_V_read2762_phi_reg_109011.read();
    } else {
        ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_66893_p6 = data_2692_V_read2762_rewind_reg_66889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2693_V_read2763_phi_phi_fu_109028_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2693_V_read2763_phi_phi_fu_109028_p4 = ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_66907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2693_V_read2763_phi_phi_fu_109028_p4 = data_2693_V_read.read();
        } else {
            ap_phi_mux_data_2693_V_read2763_phi_phi_fu_109028_p4 = ap_phi_reg_pp0_iter0_data_2693_V_read2763_phi_reg_109024.read();
        }
    } else {
        ap_phi_mux_data_2693_V_read2763_phi_phi_fu_109028_p4 = ap_phi_reg_pp0_iter0_data_2693_V_read2763_phi_reg_109024.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_66907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_66907_p6 = data_2693_V_read2763_phi_reg_109024.read();
    } else {
        ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_66907_p6 = data_2693_V_read2763_rewind_reg_66903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2694_V_read2764_phi_phi_fu_109041_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2694_V_read2764_phi_phi_fu_109041_p4 = ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_66921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2694_V_read2764_phi_phi_fu_109041_p4 = data_2694_V_read.read();
        } else {
            ap_phi_mux_data_2694_V_read2764_phi_phi_fu_109041_p4 = ap_phi_reg_pp0_iter0_data_2694_V_read2764_phi_reg_109037.read();
        }
    } else {
        ap_phi_mux_data_2694_V_read2764_phi_phi_fu_109041_p4 = ap_phi_reg_pp0_iter0_data_2694_V_read2764_phi_reg_109037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_66921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_66921_p6 = data_2694_V_read2764_phi_reg_109037.read();
    } else {
        ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_66921_p6 = data_2694_V_read2764_rewind_reg_66917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2695_V_read2765_phi_phi_fu_109054_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2695_V_read2765_phi_phi_fu_109054_p4 = ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_66935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2695_V_read2765_phi_phi_fu_109054_p4 = data_2695_V_read.read();
        } else {
            ap_phi_mux_data_2695_V_read2765_phi_phi_fu_109054_p4 = ap_phi_reg_pp0_iter0_data_2695_V_read2765_phi_reg_109050.read();
        }
    } else {
        ap_phi_mux_data_2695_V_read2765_phi_phi_fu_109054_p4 = ap_phi_reg_pp0_iter0_data_2695_V_read2765_phi_reg_109050.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_66935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_66935_p6 = data_2695_V_read2765_phi_reg_109050.read();
    } else {
        ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_66935_p6 = data_2695_V_read2765_rewind_reg_66931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2696_V_read2766_phi_phi_fu_109067_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2696_V_read2766_phi_phi_fu_109067_p4 = ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_66949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2696_V_read2766_phi_phi_fu_109067_p4 = data_2696_V_read.read();
        } else {
            ap_phi_mux_data_2696_V_read2766_phi_phi_fu_109067_p4 = ap_phi_reg_pp0_iter0_data_2696_V_read2766_phi_reg_109063.read();
        }
    } else {
        ap_phi_mux_data_2696_V_read2766_phi_phi_fu_109067_p4 = ap_phi_reg_pp0_iter0_data_2696_V_read2766_phi_reg_109063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_66949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_66949_p6 = data_2696_V_read2766_phi_reg_109063.read();
    } else {
        ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_66949_p6 = data_2696_V_read2766_rewind_reg_66945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2697_V_read2767_phi_phi_fu_109080_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2697_V_read2767_phi_phi_fu_109080_p4 = ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_66963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2697_V_read2767_phi_phi_fu_109080_p4 = data_2697_V_read.read();
        } else {
            ap_phi_mux_data_2697_V_read2767_phi_phi_fu_109080_p4 = ap_phi_reg_pp0_iter0_data_2697_V_read2767_phi_reg_109076.read();
        }
    } else {
        ap_phi_mux_data_2697_V_read2767_phi_phi_fu_109080_p4 = ap_phi_reg_pp0_iter0_data_2697_V_read2767_phi_reg_109076.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_66963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_66963_p6 = data_2697_V_read2767_phi_reg_109076.read();
    } else {
        ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_66963_p6 = data_2697_V_read2767_rewind_reg_66959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2698_V_read2768_phi_phi_fu_109093_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2698_V_read2768_phi_phi_fu_109093_p4 = ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_66977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2698_V_read2768_phi_phi_fu_109093_p4 = data_2698_V_read.read();
        } else {
            ap_phi_mux_data_2698_V_read2768_phi_phi_fu_109093_p4 = ap_phi_reg_pp0_iter0_data_2698_V_read2768_phi_reg_109089.read();
        }
    } else {
        ap_phi_mux_data_2698_V_read2768_phi_phi_fu_109093_p4 = ap_phi_reg_pp0_iter0_data_2698_V_read2768_phi_reg_109089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_66977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_66977_p6 = data_2698_V_read2768_phi_reg_109089.read();
    } else {
        ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_66977_p6 = data_2698_V_read2768_rewind_reg_66973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2699_V_read2769_phi_phi_fu_109106_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2699_V_read2769_phi_phi_fu_109106_p4 = ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_66991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2699_V_read2769_phi_phi_fu_109106_p4 = data_2699_V_read.read();
        } else {
            ap_phi_mux_data_2699_V_read2769_phi_phi_fu_109106_p4 = ap_phi_reg_pp0_iter0_data_2699_V_read2769_phi_reg_109102.read();
        }
    } else {
        ap_phi_mux_data_2699_V_read2769_phi_phi_fu_109106_p4 = ap_phi_reg_pp0_iter0_data_2699_V_read2769_phi_reg_109102.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_66991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_66991_p6 = data_2699_V_read2769_phi_reg_109102.read();
    } else {
        ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_66991_p6 = data_2699_V_read2769_rewind_reg_66987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_269_V_read339_phi_phi_fu_77516_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_269_V_read339_phi_phi_fu_77516_p4 = ap_phi_mux_data_269_V_read339_rewind_phi_fu_32971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_269_V_read339_phi_phi_fu_77516_p4 = data_269_V_read.read();
        } else {
            ap_phi_mux_data_269_V_read339_phi_phi_fu_77516_p4 = ap_phi_reg_pp0_iter0_data_269_V_read339_phi_reg_77512.read();
        }
    } else {
        ap_phi_mux_data_269_V_read339_phi_phi_fu_77516_p4 = ap_phi_reg_pp0_iter0_data_269_V_read339_phi_reg_77512.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_269_V_read339_rewind_phi_fu_32971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_269_V_read339_rewind_phi_fu_32971_p6 = data_269_V_read339_phi_reg_77512.read();
    } else {
        ap_phi_mux_data_269_V_read339_rewind_phi_fu_32971_p6 = data_269_V_read339_rewind_reg_32967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_26_V_read96_phi_phi_fu_74357_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_26_V_read96_phi_phi_fu_74357_p4 = ap_phi_mux_data_26_V_read96_rewind_phi_fu_29569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_26_V_read96_phi_phi_fu_74357_p4 = data_26_V_read.read();
        } else {
            ap_phi_mux_data_26_V_read96_phi_phi_fu_74357_p4 = ap_phi_reg_pp0_iter0_data_26_V_read96_phi_reg_74353.read();
        }
    } else {
        ap_phi_mux_data_26_V_read96_phi_phi_fu_74357_p4 = ap_phi_reg_pp0_iter0_data_26_V_read96_phi_reg_74353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_26_V_read96_rewind_phi_fu_29569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_26_V_read96_rewind_phi_fu_29569_p6 = data_26_V_read96_phi_reg_74353.read();
    } else {
        ap_phi_mux_data_26_V_read96_rewind_phi_fu_29569_p6 = data_26_V_read96_rewind_reg_29565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2700_V_read2770_phi_phi_fu_109119_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2700_V_read2770_phi_phi_fu_109119_p4 = ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_67005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2700_V_read2770_phi_phi_fu_109119_p4 = data_2700_V_read.read();
        } else {
            ap_phi_mux_data_2700_V_read2770_phi_phi_fu_109119_p4 = ap_phi_reg_pp0_iter0_data_2700_V_read2770_phi_reg_109115.read();
        }
    } else {
        ap_phi_mux_data_2700_V_read2770_phi_phi_fu_109119_p4 = ap_phi_reg_pp0_iter0_data_2700_V_read2770_phi_reg_109115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_67005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_67005_p6 = data_2700_V_read2770_phi_reg_109115.read();
    } else {
        ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_67005_p6 = data_2700_V_read2770_rewind_reg_67001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2701_V_read2771_phi_phi_fu_109132_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2701_V_read2771_phi_phi_fu_109132_p4 = ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_67019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2701_V_read2771_phi_phi_fu_109132_p4 = data_2701_V_read.read();
        } else {
            ap_phi_mux_data_2701_V_read2771_phi_phi_fu_109132_p4 = ap_phi_reg_pp0_iter0_data_2701_V_read2771_phi_reg_109128.read();
        }
    } else {
        ap_phi_mux_data_2701_V_read2771_phi_phi_fu_109132_p4 = ap_phi_reg_pp0_iter0_data_2701_V_read2771_phi_reg_109128.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_67019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_67019_p6 = data_2701_V_read2771_phi_reg_109128.read();
    } else {
        ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_67019_p6 = data_2701_V_read2771_rewind_reg_67015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2702_V_read2772_phi_phi_fu_109145_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2702_V_read2772_phi_phi_fu_109145_p4 = ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_67033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2702_V_read2772_phi_phi_fu_109145_p4 = data_2702_V_read.read();
        } else {
            ap_phi_mux_data_2702_V_read2772_phi_phi_fu_109145_p4 = ap_phi_reg_pp0_iter0_data_2702_V_read2772_phi_reg_109141.read();
        }
    } else {
        ap_phi_mux_data_2702_V_read2772_phi_phi_fu_109145_p4 = ap_phi_reg_pp0_iter0_data_2702_V_read2772_phi_reg_109141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_67033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_67033_p6 = data_2702_V_read2772_phi_reg_109141.read();
    } else {
        ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_67033_p6 = data_2702_V_read2772_rewind_reg_67029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2703_V_read2773_phi_phi_fu_109158_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2703_V_read2773_phi_phi_fu_109158_p4 = ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_67047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2703_V_read2773_phi_phi_fu_109158_p4 = data_2703_V_read.read();
        } else {
            ap_phi_mux_data_2703_V_read2773_phi_phi_fu_109158_p4 = ap_phi_reg_pp0_iter0_data_2703_V_read2773_phi_reg_109154.read();
        }
    } else {
        ap_phi_mux_data_2703_V_read2773_phi_phi_fu_109158_p4 = ap_phi_reg_pp0_iter0_data_2703_V_read2773_phi_reg_109154.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_67047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_67047_p6 = data_2703_V_read2773_phi_reg_109154.read();
    } else {
        ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_67047_p6 = data_2703_V_read2773_rewind_reg_67043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2704_V_read2774_phi_phi_fu_109171_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2704_V_read2774_phi_phi_fu_109171_p4 = ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_67061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2704_V_read2774_phi_phi_fu_109171_p4 = data_2704_V_read.read();
        } else {
            ap_phi_mux_data_2704_V_read2774_phi_phi_fu_109171_p4 = ap_phi_reg_pp0_iter0_data_2704_V_read2774_phi_reg_109167.read();
        }
    } else {
        ap_phi_mux_data_2704_V_read2774_phi_phi_fu_109171_p4 = ap_phi_reg_pp0_iter0_data_2704_V_read2774_phi_reg_109167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_67061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_67061_p6 = data_2704_V_read2774_phi_reg_109167.read();
    } else {
        ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_67061_p6 = data_2704_V_read2774_rewind_reg_67057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2705_V_read2775_phi_phi_fu_109184_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2705_V_read2775_phi_phi_fu_109184_p4 = ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_67075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2705_V_read2775_phi_phi_fu_109184_p4 = data_2705_V_read.read();
        } else {
            ap_phi_mux_data_2705_V_read2775_phi_phi_fu_109184_p4 = ap_phi_reg_pp0_iter0_data_2705_V_read2775_phi_reg_109180.read();
        }
    } else {
        ap_phi_mux_data_2705_V_read2775_phi_phi_fu_109184_p4 = ap_phi_reg_pp0_iter0_data_2705_V_read2775_phi_reg_109180.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_67075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_67075_p6 = data_2705_V_read2775_phi_reg_109180.read();
    } else {
        ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_67075_p6 = data_2705_V_read2775_rewind_reg_67071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2706_V_read2776_phi_phi_fu_109197_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2706_V_read2776_phi_phi_fu_109197_p4 = ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_67089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2706_V_read2776_phi_phi_fu_109197_p4 = data_2706_V_read.read();
        } else {
            ap_phi_mux_data_2706_V_read2776_phi_phi_fu_109197_p4 = ap_phi_reg_pp0_iter0_data_2706_V_read2776_phi_reg_109193.read();
        }
    } else {
        ap_phi_mux_data_2706_V_read2776_phi_phi_fu_109197_p4 = ap_phi_reg_pp0_iter0_data_2706_V_read2776_phi_reg_109193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_67089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_67089_p6 = data_2706_V_read2776_phi_reg_109193.read();
    } else {
        ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_67089_p6 = data_2706_V_read2776_rewind_reg_67085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2707_V_read2777_phi_phi_fu_109210_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2707_V_read2777_phi_phi_fu_109210_p4 = ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_67103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2707_V_read2777_phi_phi_fu_109210_p4 = data_2707_V_read.read();
        } else {
            ap_phi_mux_data_2707_V_read2777_phi_phi_fu_109210_p4 = ap_phi_reg_pp0_iter0_data_2707_V_read2777_phi_reg_109206.read();
        }
    } else {
        ap_phi_mux_data_2707_V_read2777_phi_phi_fu_109210_p4 = ap_phi_reg_pp0_iter0_data_2707_V_read2777_phi_reg_109206.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_67103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_67103_p6 = data_2707_V_read2777_phi_reg_109206.read();
    } else {
        ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_67103_p6 = data_2707_V_read2777_rewind_reg_67099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2708_V_read2778_phi_phi_fu_109223_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2708_V_read2778_phi_phi_fu_109223_p4 = ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_67117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2708_V_read2778_phi_phi_fu_109223_p4 = data_2708_V_read.read();
        } else {
            ap_phi_mux_data_2708_V_read2778_phi_phi_fu_109223_p4 = ap_phi_reg_pp0_iter0_data_2708_V_read2778_phi_reg_109219.read();
        }
    } else {
        ap_phi_mux_data_2708_V_read2778_phi_phi_fu_109223_p4 = ap_phi_reg_pp0_iter0_data_2708_V_read2778_phi_reg_109219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_67117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_67117_p6 = data_2708_V_read2778_phi_reg_109219.read();
    } else {
        ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_67117_p6 = data_2708_V_read2778_rewind_reg_67113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2709_V_read2779_phi_phi_fu_109236_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2709_V_read2779_phi_phi_fu_109236_p4 = ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_67131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2709_V_read2779_phi_phi_fu_109236_p4 = data_2709_V_read.read();
        } else {
            ap_phi_mux_data_2709_V_read2779_phi_phi_fu_109236_p4 = ap_phi_reg_pp0_iter0_data_2709_V_read2779_phi_reg_109232.read();
        }
    } else {
        ap_phi_mux_data_2709_V_read2779_phi_phi_fu_109236_p4 = ap_phi_reg_pp0_iter0_data_2709_V_read2779_phi_reg_109232.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_67131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_67131_p6 = data_2709_V_read2779_phi_reg_109232.read();
    } else {
        ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_67131_p6 = data_2709_V_read2779_rewind_reg_67127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_270_V_read340_phi_phi_fu_77529_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_270_V_read340_phi_phi_fu_77529_p4 = ap_phi_mux_data_270_V_read340_rewind_phi_fu_32985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_270_V_read340_phi_phi_fu_77529_p4 = data_270_V_read.read();
        } else {
            ap_phi_mux_data_270_V_read340_phi_phi_fu_77529_p4 = ap_phi_reg_pp0_iter0_data_270_V_read340_phi_reg_77525.read();
        }
    } else {
        ap_phi_mux_data_270_V_read340_phi_phi_fu_77529_p4 = ap_phi_reg_pp0_iter0_data_270_V_read340_phi_reg_77525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_270_V_read340_rewind_phi_fu_32985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_270_V_read340_rewind_phi_fu_32985_p6 = data_270_V_read340_phi_reg_77525.read();
    } else {
        ap_phi_mux_data_270_V_read340_rewind_phi_fu_32985_p6 = data_270_V_read340_rewind_reg_32981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2710_V_read2780_phi_phi_fu_109249_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2710_V_read2780_phi_phi_fu_109249_p4 = ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_67145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2710_V_read2780_phi_phi_fu_109249_p4 = data_2710_V_read.read();
        } else {
            ap_phi_mux_data_2710_V_read2780_phi_phi_fu_109249_p4 = ap_phi_reg_pp0_iter0_data_2710_V_read2780_phi_reg_109245.read();
        }
    } else {
        ap_phi_mux_data_2710_V_read2780_phi_phi_fu_109249_p4 = ap_phi_reg_pp0_iter0_data_2710_V_read2780_phi_reg_109245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_67145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_67145_p6 = data_2710_V_read2780_phi_reg_109245.read();
    } else {
        ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_67145_p6 = data_2710_V_read2780_rewind_reg_67141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2711_V_read2781_phi_phi_fu_109262_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2711_V_read2781_phi_phi_fu_109262_p4 = ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_67159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2711_V_read2781_phi_phi_fu_109262_p4 = data_2711_V_read.read();
        } else {
            ap_phi_mux_data_2711_V_read2781_phi_phi_fu_109262_p4 = ap_phi_reg_pp0_iter0_data_2711_V_read2781_phi_reg_109258.read();
        }
    } else {
        ap_phi_mux_data_2711_V_read2781_phi_phi_fu_109262_p4 = ap_phi_reg_pp0_iter0_data_2711_V_read2781_phi_reg_109258.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_67159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_67159_p6 = data_2711_V_read2781_phi_reg_109258.read();
    } else {
        ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_67159_p6 = data_2711_V_read2781_rewind_reg_67155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2712_V_read2782_phi_phi_fu_109275_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2712_V_read2782_phi_phi_fu_109275_p4 = ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_67173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2712_V_read2782_phi_phi_fu_109275_p4 = data_2712_V_read.read();
        } else {
            ap_phi_mux_data_2712_V_read2782_phi_phi_fu_109275_p4 = ap_phi_reg_pp0_iter0_data_2712_V_read2782_phi_reg_109271.read();
        }
    } else {
        ap_phi_mux_data_2712_V_read2782_phi_phi_fu_109275_p4 = ap_phi_reg_pp0_iter0_data_2712_V_read2782_phi_reg_109271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_67173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_67173_p6 = data_2712_V_read2782_phi_reg_109271.read();
    } else {
        ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_67173_p6 = data_2712_V_read2782_rewind_reg_67169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2713_V_read2783_phi_phi_fu_109288_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2713_V_read2783_phi_phi_fu_109288_p4 = ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_67187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2713_V_read2783_phi_phi_fu_109288_p4 = data_2713_V_read.read();
        } else {
            ap_phi_mux_data_2713_V_read2783_phi_phi_fu_109288_p4 = ap_phi_reg_pp0_iter0_data_2713_V_read2783_phi_reg_109284.read();
        }
    } else {
        ap_phi_mux_data_2713_V_read2783_phi_phi_fu_109288_p4 = ap_phi_reg_pp0_iter0_data_2713_V_read2783_phi_reg_109284.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_67187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_67187_p6 = data_2713_V_read2783_phi_reg_109284.read();
    } else {
        ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_67187_p6 = data_2713_V_read2783_rewind_reg_67183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2714_V_read2784_phi_phi_fu_109301_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2714_V_read2784_phi_phi_fu_109301_p4 = ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_67201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2714_V_read2784_phi_phi_fu_109301_p4 = data_2714_V_read.read();
        } else {
            ap_phi_mux_data_2714_V_read2784_phi_phi_fu_109301_p4 = ap_phi_reg_pp0_iter0_data_2714_V_read2784_phi_reg_109297.read();
        }
    } else {
        ap_phi_mux_data_2714_V_read2784_phi_phi_fu_109301_p4 = ap_phi_reg_pp0_iter0_data_2714_V_read2784_phi_reg_109297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_67201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_67201_p6 = data_2714_V_read2784_phi_reg_109297.read();
    } else {
        ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_67201_p6 = data_2714_V_read2784_rewind_reg_67197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2715_V_read2785_phi_phi_fu_109314_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2715_V_read2785_phi_phi_fu_109314_p4 = ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_67215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2715_V_read2785_phi_phi_fu_109314_p4 = data_2715_V_read.read();
        } else {
            ap_phi_mux_data_2715_V_read2785_phi_phi_fu_109314_p4 = ap_phi_reg_pp0_iter0_data_2715_V_read2785_phi_reg_109310.read();
        }
    } else {
        ap_phi_mux_data_2715_V_read2785_phi_phi_fu_109314_p4 = ap_phi_reg_pp0_iter0_data_2715_V_read2785_phi_reg_109310.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_67215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_67215_p6 = data_2715_V_read2785_phi_reg_109310.read();
    } else {
        ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_67215_p6 = data_2715_V_read2785_rewind_reg_67211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2716_V_read2786_phi_phi_fu_109327_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2716_V_read2786_phi_phi_fu_109327_p4 = ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_67229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2716_V_read2786_phi_phi_fu_109327_p4 = data_2716_V_read.read();
        } else {
            ap_phi_mux_data_2716_V_read2786_phi_phi_fu_109327_p4 = ap_phi_reg_pp0_iter0_data_2716_V_read2786_phi_reg_109323.read();
        }
    } else {
        ap_phi_mux_data_2716_V_read2786_phi_phi_fu_109327_p4 = ap_phi_reg_pp0_iter0_data_2716_V_read2786_phi_reg_109323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_67229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_67229_p6 = data_2716_V_read2786_phi_reg_109323.read();
    } else {
        ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_67229_p6 = data_2716_V_read2786_rewind_reg_67225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2717_V_read2787_phi_phi_fu_109340_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2717_V_read2787_phi_phi_fu_109340_p4 = ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_67243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2717_V_read2787_phi_phi_fu_109340_p4 = data_2717_V_read.read();
        } else {
            ap_phi_mux_data_2717_V_read2787_phi_phi_fu_109340_p4 = ap_phi_reg_pp0_iter0_data_2717_V_read2787_phi_reg_109336.read();
        }
    } else {
        ap_phi_mux_data_2717_V_read2787_phi_phi_fu_109340_p4 = ap_phi_reg_pp0_iter0_data_2717_V_read2787_phi_reg_109336.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_67243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_67243_p6 = data_2717_V_read2787_phi_reg_109336.read();
    } else {
        ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_67243_p6 = data_2717_V_read2787_rewind_reg_67239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2718_V_read2788_phi_phi_fu_109353_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2718_V_read2788_phi_phi_fu_109353_p4 = ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_67257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2718_V_read2788_phi_phi_fu_109353_p4 = data_2718_V_read.read();
        } else {
            ap_phi_mux_data_2718_V_read2788_phi_phi_fu_109353_p4 = ap_phi_reg_pp0_iter0_data_2718_V_read2788_phi_reg_109349.read();
        }
    } else {
        ap_phi_mux_data_2718_V_read2788_phi_phi_fu_109353_p4 = ap_phi_reg_pp0_iter0_data_2718_V_read2788_phi_reg_109349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_67257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_67257_p6 = data_2718_V_read2788_phi_reg_109349.read();
    } else {
        ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_67257_p6 = data_2718_V_read2788_rewind_reg_67253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2719_V_read2789_phi_phi_fu_109366_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2719_V_read2789_phi_phi_fu_109366_p4 = ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_67271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2719_V_read2789_phi_phi_fu_109366_p4 = data_2719_V_read.read();
        } else {
            ap_phi_mux_data_2719_V_read2789_phi_phi_fu_109366_p4 = ap_phi_reg_pp0_iter0_data_2719_V_read2789_phi_reg_109362.read();
        }
    } else {
        ap_phi_mux_data_2719_V_read2789_phi_phi_fu_109366_p4 = ap_phi_reg_pp0_iter0_data_2719_V_read2789_phi_reg_109362.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_67271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_67271_p6 = data_2719_V_read2789_phi_reg_109362.read();
    } else {
        ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_67271_p6 = data_2719_V_read2789_rewind_reg_67267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_271_V_read341_phi_phi_fu_77542_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_271_V_read341_phi_phi_fu_77542_p4 = ap_phi_mux_data_271_V_read341_rewind_phi_fu_32999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_271_V_read341_phi_phi_fu_77542_p4 = data_271_V_read.read();
        } else {
            ap_phi_mux_data_271_V_read341_phi_phi_fu_77542_p4 = ap_phi_reg_pp0_iter0_data_271_V_read341_phi_reg_77538.read();
        }
    } else {
        ap_phi_mux_data_271_V_read341_phi_phi_fu_77542_p4 = ap_phi_reg_pp0_iter0_data_271_V_read341_phi_reg_77538.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_271_V_read341_rewind_phi_fu_32999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_271_V_read341_rewind_phi_fu_32999_p6 = data_271_V_read341_phi_reg_77538.read();
    } else {
        ap_phi_mux_data_271_V_read341_rewind_phi_fu_32999_p6 = data_271_V_read341_rewind_reg_32995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2720_V_read2790_phi_phi_fu_109379_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2720_V_read2790_phi_phi_fu_109379_p4 = ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_67285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2720_V_read2790_phi_phi_fu_109379_p4 = data_2720_V_read.read();
        } else {
            ap_phi_mux_data_2720_V_read2790_phi_phi_fu_109379_p4 = ap_phi_reg_pp0_iter0_data_2720_V_read2790_phi_reg_109375.read();
        }
    } else {
        ap_phi_mux_data_2720_V_read2790_phi_phi_fu_109379_p4 = ap_phi_reg_pp0_iter0_data_2720_V_read2790_phi_reg_109375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_67285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_67285_p6 = data_2720_V_read2790_phi_reg_109375.read();
    } else {
        ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_67285_p6 = data_2720_V_read2790_rewind_reg_67281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2721_V_read2791_phi_phi_fu_109392_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2721_V_read2791_phi_phi_fu_109392_p4 = ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_67299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2721_V_read2791_phi_phi_fu_109392_p4 = data_2721_V_read.read();
        } else {
            ap_phi_mux_data_2721_V_read2791_phi_phi_fu_109392_p4 = ap_phi_reg_pp0_iter0_data_2721_V_read2791_phi_reg_109388.read();
        }
    } else {
        ap_phi_mux_data_2721_V_read2791_phi_phi_fu_109392_p4 = ap_phi_reg_pp0_iter0_data_2721_V_read2791_phi_reg_109388.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_67299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_67299_p6 = data_2721_V_read2791_phi_reg_109388.read();
    } else {
        ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_67299_p6 = data_2721_V_read2791_rewind_reg_67295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2722_V_read2792_phi_phi_fu_109405_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2722_V_read2792_phi_phi_fu_109405_p4 = ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_67313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2722_V_read2792_phi_phi_fu_109405_p4 = data_2722_V_read.read();
        } else {
            ap_phi_mux_data_2722_V_read2792_phi_phi_fu_109405_p4 = ap_phi_reg_pp0_iter0_data_2722_V_read2792_phi_reg_109401.read();
        }
    } else {
        ap_phi_mux_data_2722_V_read2792_phi_phi_fu_109405_p4 = ap_phi_reg_pp0_iter0_data_2722_V_read2792_phi_reg_109401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_67313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_67313_p6 = data_2722_V_read2792_phi_reg_109401.read();
    } else {
        ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_67313_p6 = data_2722_V_read2792_rewind_reg_67309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2723_V_read2793_phi_phi_fu_109418_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2723_V_read2793_phi_phi_fu_109418_p4 = ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_67327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2723_V_read2793_phi_phi_fu_109418_p4 = data_2723_V_read.read();
        } else {
            ap_phi_mux_data_2723_V_read2793_phi_phi_fu_109418_p4 = ap_phi_reg_pp0_iter0_data_2723_V_read2793_phi_reg_109414.read();
        }
    } else {
        ap_phi_mux_data_2723_V_read2793_phi_phi_fu_109418_p4 = ap_phi_reg_pp0_iter0_data_2723_V_read2793_phi_reg_109414.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_67327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_67327_p6 = data_2723_V_read2793_phi_reg_109414.read();
    } else {
        ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_67327_p6 = data_2723_V_read2793_rewind_reg_67323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2724_V_read2794_phi_phi_fu_109431_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2724_V_read2794_phi_phi_fu_109431_p4 = ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_67341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2724_V_read2794_phi_phi_fu_109431_p4 = data_2724_V_read.read();
        } else {
            ap_phi_mux_data_2724_V_read2794_phi_phi_fu_109431_p4 = ap_phi_reg_pp0_iter0_data_2724_V_read2794_phi_reg_109427.read();
        }
    } else {
        ap_phi_mux_data_2724_V_read2794_phi_phi_fu_109431_p4 = ap_phi_reg_pp0_iter0_data_2724_V_read2794_phi_reg_109427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_67341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_67341_p6 = data_2724_V_read2794_phi_reg_109427.read();
    } else {
        ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_67341_p6 = data_2724_V_read2794_rewind_reg_67337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2725_V_read2795_phi_phi_fu_109444_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2725_V_read2795_phi_phi_fu_109444_p4 = ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_67355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2725_V_read2795_phi_phi_fu_109444_p4 = data_2725_V_read.read();
        } else {
            ap_phi_mux_data_2725_V_read2795_phi_phi_fu_109444_p4 = ap_phi_reg_pp0_iter0_data_2725_V_read2795_phi_reg_109440.read();
        }
    } else {
        ap_phi_mux_data_2725_V_read2795_phi_phi_fu_109444_p4 = ap_phi_reg_pp0_iter0_data_2725_V_read2795_phi_reg_109440.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_67355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_67355_p6 = data_2725_V_read2795_phi_reg_109440.read();
    } else {
        ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_67355_p6 = data_2725_V_read2795_rewind_reg_67351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2726_V_read2796_phi_phi_fu_109457_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2726_V_read2796_phi_phi_fu_109457_p4 = ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_67369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2726_V_read2796_phi_phi_fu_109457_p4 = data_2726_V_read.read();
        } else {
            ap_phi_mux_data_2726_V_read2796_phi_phi_fu_109457_p4 = ap_phi_reg_pp0_iter0_data_2726_V_read2796_phi_reg_109453.read();
        }
    } else {
        ap_phi_mux_data_2726_V_read2796_phi_phi_fu_109457_p4 = ap_phi_reg_pp0_iter0_data_2726_V_read2796_phi_reg_109453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_67369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_67369_p6 = data_2726_V_read2796_phi_reg_109453.read();
    } else {
        ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_67369_p6 = data_2726_V_read2796_rewind_reg_67365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2727_V_read2797_phi_phi_fu_109470_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2727_V_read2797_phi_phi_fu_109470_p4 = ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_67383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2727_V_read2797_phi_phi_fu_109470_p4 = data_2727_V_read.read();
        } else {
            ap_phi_mux_data_2727_V_read2797_phi_phi_fu_109470_p4 = ap_phi_reg_pp0_iter0_data_2727_V_read2797_phi_reg_109466.read();
        }
    } else {
        ap_phi_mux_data_2727_V_read2797_phi_phi_fu_109470_p4 = ap_phi_reg_pp0_iter0_data_2727_V_read2797_phi_reg_109466.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_67383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_67383_p6 = data_2727_V_read2797_phi_reg_109466.read();
    } else {
        ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_67383_p6 = data_2727_V_read2797_rewind_reg_67379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2728_V_read2798_phi_phi_fu_109483_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2728_V_read2798_phi_phi_fu_109483_p4 = ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_67397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2728_V_read2798_phi_phi_fu_109483_p4 = data_2728_V_read.read();
        } else {
            ap_phi_mux_data_2728_V_read2798_phi_phi_fu_109483_p4 = ap_phi_reg_pp0_iter0_data_2728_V_read2798_phi_reg_109479.read();
        }
    } else {
        ap_phi_mux_data_2728_V_read2798_phi_phi_fu_109483_p4 = ap_phi_reg_pp0_iter0_data_2728_V_read2798_phi_reg_109479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_67397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_67397_p6 = data_2728_V_read2798_phi_reg_109479.read();
    } else {
        ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_67397_p6 = data_2728_V_read2798_rewind_reg_67393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2729_V_read2799_phi_phi_fu_109496_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2729_V_read2799_phi_phi_fu_109496_p4 = ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_67411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2729_V_read2799_phi_phi_fu_109496_p4 = data_2729_V_read.read();
        } else {
            ap_phi_mux_data_2729_V_read2799_phi_phi_fu_109496_p4 = ap_phi_reg_pp0_iter0_data_2729_V_read2799_phi_reg_109492.read();
        }
    } else {
        ap_phi_mux_data_2729_V_read2799_phi_phi_fu_109496_p4 = ap_phi_reg_pp0_iter0_data_2729_V_read2799_phi_reg_109492.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_67411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_67411_p6 = data_2729_V_read2799_phi_reg_109492.read();
    } else {
        ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_67411_p6 = data_2729_V_read2799_rewind_reg_67407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_272_V_read342_phi_phi_fu_77555_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_272_V_read342_phi_phi_fu_77555_p4 = ap_phi_mux_data_272_V_read342_rewind_phi_fu_33013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_272_V_read342_phi_phi_fu_77555_p4 = data_272_V_read.read();
        } else {
            ap_phi_mux_data_272_V_read342_phi_phi_fu_77555_p4 = ap_phi_reg_pp0_iter0_data_272_V_read342_phi_reg_77551.read();
        }
    } else {
        ap_phi_mux_data_272_V_read342_phi_phi_fu_77555_p4 = ap_phi_reg_pp0_iter0_data_272_V_read342_phi_reg_77551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_272_V_read342_rewind_phi_fu_33013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_272_V_read342_rewind_phi_fu_33013_p6 = data_272_V_read342_phi_reg_77551.read();
    } else {
        ap_phi_mux_data_272_V_read342_rewind_phi_fu_33013_p6 = data_272_V_read342_rewind_reg_33009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2730_V_read2800_phi_phi_fu_109509_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2730_V_read2800_phi_phi_fu_109509_p4 = ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_67425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2730_V_read2800_phi_phi_fu_109509_p4 = data_2730_V_read.read();
        } else {
            ap_phi_mux_data_2730_V_read2800_phi_phi_fu_109509_p4 = ap_phi_reg_pp0_iter0_data_2730_V_read2800_phi_reg_109505.read();
        }
    } else {
        ap_phi_mux_data_2730_V_read2800_phi_phi_fu_109509_p4 = ap_phi_reg_pp0_iter0_data_2730_V_read2800_phi_reg_109505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_67425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_67425_p6 = data_2730_V_read2800_phi_reg_109505.read();
    } else {
        ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_67425_p6 = data_2730_V_read2800_rewind_reg_67421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2731_V_read2801_phi_phi_fu_109522_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2731_V_read2801_phi_phi_fu_109522_p4 = ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_67439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2731_V_read2801_phi_phi_fu_109522_p4 = data_2731_V_read.read();
        } else {
            ap_phi_mux_data_2731_V_read2801_phi_phi_fu_109522_p4 = ap_phi_reg_pp0_iter0_data_2731_V_read2801_phi_reg_109518.read();
        }
    } else {
        ap_phi_mux_data_2731_V_read2801_phi_phi_fu_109522_p4 = ap_phi_reg_pp0_iter0_data_2731_V_read2801_phi_reg_109518.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_67439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_67439_p6 = data_2731_V_read2801_phi_reg_109518.read();
    } else {
        ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_67439_p6 = data_2731_V_read2801_rewind_reg_67435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2732_V_read2802_phi_phi_fu_109535_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2732_V_read2802_phi_phi_fu_109535_p4 = ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_67453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2732_V_read2802_phi_phi_fu_109535_p4 = data_2732_V_read.read();
        } else {
            ap_phi_mux_data_2732_V_read2802_phi_phi_fu_109535_p4 = ap_phi_reg_pp0_iter0_data_2732_V_read2802_phi_reg_109531.read();
        }
    } else {
        ap_phi_mux_data_2732_V_read2802_phi_phi_fu_109535_p4 = ap_phi_reg_pp0_iter0_data_2732_V_read2802_phi_reg_109531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_67453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_67453_p6 = data_2732_V_read2802_phi_reg_109531.read();
    } else {
        ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_67453_p6 = data_2732_V_read2802_rewind_reg_67449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2733_V_read2803_phi_phi_fu_109548_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2733_V_read2803_phi_phi_fu_109548_p4 = ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_67467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2733_V_read2803_phi_phi_fu_109548_p4 = data_2733_V_read.read();
        } else {
            ap_phi_mux_data_2733_V_read2803_phi_phi_fu_109548_p4 = ap_phi_reg_pp0_iter0_data_2733_V_read2803_phi_reg_109544.read();
        }
    } else {
        ap_phi_mux_data_2733_V_read2803_phi_phi_fu_109548_p4 = ap_phi_reg_pp0_iter0_data_2733_V_read2803_phi_reg_109544.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_67467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_67467_p6 = data_2733_V_read2803_phi_reg_109544.read();
    } else {
        ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_67467_p6 = data_2733_V_read2803_rewind_reg_67463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2734_V_read2804_phi_phi_fu_109561_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2734_V_read2804_phi_phi_fu_109561_p4 = ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_67481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2734_V_read2804_phi_phi_fu_109561_p4 = data_2734_V_read.read();
        } else {
            ap_phi_mux_data_2734_V_read2804_phi_phi_fu_109561_p4 = ap_phi_reg_pp0_iter0_data_2734_V_read2804_phi_reg_109557.read();
        }
    } else {
        ap_phi_mux_data_2734_V_read2804_phi_phi_fu_109561_p4 = ap_phi_reg_pp0_iter0_data_2734_V_read2804_phi_reg_109557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_67481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_67481_p6 = data_2734_V_read2804_phi_reg_109557.read();
    } else {
        ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_67481_p6 = data_2734_V_read2804_rewind_reg_67477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2735_V_read2805_phi_phi_fu_109574_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2735_V_read2805_phi_phi_fu_109574_p4 = ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_67495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2735_V_read2805_phi_phi_fu_109574_p4 = data_2735_V_read.read();
        } else {
            ap_phi_mux_data_2735_V_read2805_phi_phi_fu_109574_p4 = ap_phi_reg_pp0_iter0_data_2735_V_read2805_phi_reg_109570.read();
        }
    } else {
        ap_phi_mux_data_2735_V_read2805_phi_phi_fu_109574_p4 = ap_phi_reg_pp0_iter0_data_2735_V_read2805_phi_reg_109570.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_67495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_67495_p6 = data_2735_V_read2805_phi_reg_109570.read();
    } else {
        ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_67495_p6 = data_2735_V_read2805_rewind_reg_67491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2736_V_read2806_phi_phi_fu_109587_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2736_V_read2806_phi_phi_fu_109587_p4 = ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_67509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2736_V_read2806_phi_phi_fu_109587_p4 = data_2736_V_read.read();
        } else {
            ap_phi_mux_data_2736_V_read2806_phi_phi_fu_109587_p4 = ap_phi_reg_pp0_iter0_data_2736_V_read2806_phi_reg_109583.read();
        }
    } else {
        ap_phi_mux_data_2736_V_read2806_phi_phi_fu_109587_p4 = ap_phi_reg_pp0_iter0_data_2736_V_read2806_phi_reg_109583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_67509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_67509_p6 = data_2736_V_read2806_phi_reg_109583.read();
    } else {
        ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_67509_p6 = data_2736_V_read2806_rewind_reg_67505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2737_V_read2807_phi_phi_fu_109600_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2737_V_read2807_phi_phi_fu_109600_p4 = ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_67523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2737_V_read2807_phi_phi_fu_109600_p4 = data_2737_V_read.read();
        } else {
            ap_phi_mux_data_2737_V_read2807_phi_phi_fu_109600_p4 = ap_phi_reg_pp0_iter0_data_2737_V_read2807_phi_reg_109596.read();
        }
    } else {
        ap_phi_mux_data_2737_V_read2807_phi_phi_fu_109600_p4 = ap_phi_reg_pp0_iter0_data_2737_V_read2807_phi_reg_109596.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_67523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_67523_p6 = data_2737_V_read2807_phi_reg_109596.read();
    } else {
        ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_67523_p6 = data_2737_V_read2807_rewind_reg_67519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2738_V_read2808_phi_phi_fu_109613_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2738_V_read2808_phi_phi_fu_109613_p4 = ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_67537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2738_V_read2808_phi_phi_fu_109613_p4 = data_2738_V_read.read();
        } else {
            ap_phi_mux_data_2738_V_read2808_phi_phi_fu_109613_p4 = ap_phi_reg_pp0_iter0_data_2738_V_read2808_phi_reg_109609.read();
        }
    } else {
        ap_phi_mux_data_2738_V_read2808_phi_phi_fu_109613_p4 = ap_phi_reg_pp0_iter0_data_2738_V_read2808_phi_reg_109609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_67537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_67537_p6 = data_2738_V_read2808_phi_reg_109609.read();
    } else {
        ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_67537_p6 = data_2738_V_read2808_rewind_reg_67533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2739_V_read2809_phi_phi_fu_109626_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2739_V_read2809_phi_phi_fu_109626_p4 = ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_67551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2739_V_read2809_phi_phi_fu_109626_p4 = data_2739_V_read.read();
        } else {
            ap_phi_mux_data_2739_V_read2809_phi_phi_fu_109626_p4 = ap_phi_reg_pp0_iter0_data_2739_V_read2809_phi_reg_109622.read();
        }
    } else {
        ap_phi_mux_data_2739_V_read2809_phi_phi_fu_109626_p4 = ap_phi_reg_pp0_iter0_data_2739_V_read2809_phi_reg_109622.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_67551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_67551_p6 = data_2739_V_read2809_phi_reg_109622.read();
    } else {
        ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_67551_p6 = data_2739_V_read2809_rewind_reg_67547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_273_V_read343_phi_phi_fu_77568_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_273_V_read343_phi_phi_fu_77568_p4 = ap_phi_mux_data_273_V_read343_rewind_phi_fu_33027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_273_V_read343_phi_phi_fu_77568_p4 = data_273_V_read.read();
        } else {
            ap_phi_mux_data_273_V_read343_phi_phi_fu_77568_p4 = ap_phi_reg_pp0_iter0_data_273_V_read343_phi_reg_77564.read();
        }
    } else {
        ap_phi_mux_data_273_V_read343_phi_phi_fu_77568_p4 = ap_phi_reg_pp0_iter0_data_273_V_read343_phi_reg_77564.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_273_V_read343_rewind_phi_fu_33027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_273_V_read343_rewind_phi_fu_33027_p6 = data_273_V_read343_phi_reg_77564.read();
    } else {
        ap_phi_mux_data_273_V_read343_rewind_phi_fu_33027_p6 = data_273_V_read343_rewind_reg_33023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2740_V_read2810_phi_phi_fu_109639_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2740_V_read2810_phi_phi_fu_109639_p4 = ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_67565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2740_V_read2810_phi_phi_fu_109639_p4 = data_2740_V_read.read();
        } else {
            ap_phi_mux_data_2740_V_read2810_phi_phi_fu_109639_p4 = ap_phi_reg_pp0_iter0_data_2740_V_read2810_phi_reg_109635.read();
        }
    } else {
        ap_phi_mux_data_2740_V_read2810_phi_phi_fu_109639_p4 = ap_phi_reg_pp0_iter0_data_2740_V_read2810_phi_reg_109635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_67565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_67565_p6 = data_2740_V_read2810_phi_reg_109635.read();
    } else {
        ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_67565_p6 = data_2740_V_read2810_rewind_reg_67561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2741_V_read2811_phi_phi_fu_109652_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2741_V_read2811_phi_phi_fu_109652_p4 = ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_67579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2741_V_read2811_phi_phi_fu_109652_p4 = data_2741_V_read.read();
        } else {
            ap_phi_mux_data_2741_V_read2811_phi_phi_fu_109652_p4 = ap_phi_reg_pp0_iter0_data_2741_V_read2811_phi_reg_109648.read();
        }
    } else {
        ap_phi_mux_data_2741_V_read2811_phi_phi_fu_109652_p4 = ap_phi_reg_pp0_iter0_data_2741_V_read2811_phi_reg_109648.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_67579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_67579_p6 = data_2741_V_read2811_phi_reg_109648.read();
    } else {
        ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_67579_p6 = data_2741_V_read2811_rewind_reg_67575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2742_V_read2812_phi_phi_fu_109665_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2742_V_read2812_phi_phi_fu_109665_p4 = ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_67593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2742_V_read2812_phi_phi_fu_109665_p4 = data_2742_V_read.read();
        } else {
            ap_phi_mux_data_2742_V_read2812_phi_phi_fu_109665_p4 = ap_phi_reg_pp0_iter0_data_2742_V_read2812_phi_reg_109661.read();
        }
    } else {
        ap_phi_mux_data_2742_V_read2812_phi_phi_fu_109665_p4 = ap_phi_reg_pp0_iter0_data_2742_V_read2812_phi_reg_109661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_67593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_67593_p6 = data_2742_V_read2812_phi_reg_109661.read();
    } else {
        ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_67593_p6 = data_2742_V_read2812_rewind_reg_67589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2743_V_read2813_phi_phi_fu_109678_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2743_V_read2813_phi_phi_fu_109678_p4 = ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_67607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2743_V_read2813_phi_phi_fu_109678_p4 = data_2743_V_read.read();
        } else {
            ap_phi_mux_data_2743_V_read2813_phi_phi_fu_109678_p4 = ap_phi_reg_pp0_iter0_data_2743_V_read2813_phi_reg_109674.read();
        }
    } else {
        ap_phi_mux_data_2743_V_read2813_phi_phi_fu_109678_p4 = ap_phi_reg_pp0_iter0_data_2743_V_read2813_phi_reg_109674.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_67607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_67607_p6 = data_2743_V_read2813_phi_reg_109674.read();
    } else {
        ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_67607_p6 = data_2743_V_read2813_rewind_reg_67603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2744_V_read2814_phi_phi_fu_109691_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2744_V_read2814_phi_phi_fu_109691_p4 = ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_67621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2744_V_read2814_phi_phi_fu_109691_p4 = data_2744_V_read.read();
        } else {
            ap_phi_mux_data_2744_V_read2814_phi_phi_fu_109691_p4 = ap_phi_reg_pp0_iter0_data_2744_V_read2814_phi_reg_109687.read();
        }
    } else {
        ap_phi_mux_data_2744_V_read2814_phi_phi_fu_109691_p4 = ap_phi_reg_pp0_iter0_data_2744_V_read2814_phi_reg_109687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_67621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_67621_p6 = data_2744_V_read2814_phi_reg_109687.read();
    } else {
        ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_67621_p6 = data_2744_V_read2814_rewind_reg_67617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2745_V_read2815_phi_phi_fu_109704_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2745_V_read2815_phi_phi_fu_109704_p4 = ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_67635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2745_V_read2815_phi_phi_fu_109704_p4 = data_2745_V_read.read();
        } else {
            ap_phi_mux_data_2745_V_read2815_phi_phi_fu_109704_p4 = ap_phi_reg_pp0_iter0_data_2745_V_read2815_phi_reg_109700.read();
        }
    } else {
        ap_phi_mux_data_2745_V_read2815_phi_phi_fu_109704_p4 = ap_phi_reg_pp0_iter0_data_2745_V_read2815_phi_reg_109700.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_67635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_67635_p6 = data_2745_V_read2815_phi_reg_109700.read();
    } else {
        ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_67635_p6 = data_2745_V_read2815_rewind_reg_67631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2746_V_read2816_phi_phi_fu_109717_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2746_V_read2816_phi_phi_fu_109717_p4 = ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_67649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2746_V_read2816_phi_phi_fu_109717_p4 = data_2746_V_read.read();
        } else {
            ap_phi_mux_data_2746_V_read2816_phi_phi_fu_109717_p4 = ap_phi_reg_pp0_iter0_data_2746_V_read2816_phi_reg_109713.read();
        }
    } else {
        ap_phi_mux_data_2746_V_read2816_phi_phi_fu_109717_p4 = ap_phi_reg_pp0_iter0_data_2746_V_read2816_phi_reg_109713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_67649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_67649_p6 = data_2746_V_read2816_phi_reg_109713.read();
    } else {
        ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_67649_p6 = data_2746_V_read2816_rewind_reg_67645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2747_V_read2817_phi_phi_fu_109730_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2747_V_read2817_phi_phi_fu_109730_p4 = ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_67663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2747_V_read2817_phi_phi_fu_109730_p4 = data_2747_V_read.read();
        } else {
            ap_phi_mux_data_2747_V_read2817_phi_phi_fu_109730_p4 = ap_phi_reg_pp0_iter0_data_2747_V_read2817_phi_reg_109726.read();
        }
    } else {
        ap_phi_mux_data_2747_V_read2817_phi_phi_fu_109730_p4 = ap_phi_reg_pp0_iter0_data_2747_V_read2817_phi_reg_109726.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_67663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_67663_p6 = data_2747_V_read2817_phi_reg_109726.read();
    } else {
        ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_67663_p6 = data_2747_V_read2817_rewind_reg_67659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2748_V_read2818_phi_phi_fu_109743_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2748_V_read2818_phi_phi_fu_109743_p4 = ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_67677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2748_V_read2818_phi_phi_fu_109743_p4 = data_2748_V_read.read();
        } else {
            ap_phi_mux_data_2748_V_read2818_phi_phi_fu_109743_p4 = ap_phi_reg_pp0_iter0_data_2748_V_read2818_phi_reg_109739.read();
        }
    } else {
        ap_phi_mux_data_2748_V_read2818_phi_phi_fu_109743_p4 = ap_phi_reg_pp0_iter0_data_2748_V_read2818_phi_reg_109739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_67677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_67677_p6 = data_2748_V_read2818_phi_reg_109739.read();
    } else {
        ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_67677_p6 = data_2748_V_read2818_rewind_reg_67673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2749_V_read2819_phi_phi_fu_109756_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2749_V_read2819_phi_phi_fu_109756_p4 = ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_67691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2749_V_read2819_phi_phi_fu_109756_p4 = data_2749_V_read.read();
        } else {
            ap_phi_mux_data_2749_V_read2819_phi_phi_fu_109756_p4 = ap_phi_reg_pp0_iter0_data_2749_V_read2819_phi_reg_109752.read();
        }
    } else {
        ap_phi_mux_data_2749_V_read2819_phi_phi_fu_109756_p4 = ap_phi_reg_pp0_iter0_data_2749_V_read2819_phi_reg_109752.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_67691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_67691_p6 = data_2749_V_read2819_phi_reg_109752.read();
    } else {
        ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_67691_p6 = data_2749_V_read2819_rewind_reg_67687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_274_V_read344_phi_phi_fu_77581_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_274_V_read344_phi_phi_fu_77581_p4 = ap_phi_mux_data_274_V_read344_rewind_phi_fu_33041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_274_V_read344_phi_phi_fu_77581_p4 = data_274_V_read.read();
        } else {
            ap_phi_mux_data_274_V_read344_phi_phi_fu_77581_p4 = ap_phi_reg_pp0_iter0_data_274_V_read344_phi_reg_77577.read();
        }
    } else {
        ap_phi_mux_data_274_V_read344_phi_phi_fu_77581_p4 = ap_phi_reg_pp0_iter0_data_274_V_read344_phi_reg_77577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_274_V_read344_rewind_phi_fu_33041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_274_V_read344_rewind_phi_fu_33041_p6 = data_274_V_read344_phi_reg_77577.read();
    } else {
        ap_phi_mux_data_274_V_read344_rewind_phi_fu_33041_p6 = data_274_V_read344_rewind_reg_33037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2750_V_read2820_phi_phi_fu_109769_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2750_V_read2820_phi_phi_fu_109769_p4 = ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_67705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2750_V_read2820_phi_phi_fu_109769_p4 = data_2750_V_read.read();
        } else {
            ap_phi_mux_data_2750_V_read2820_phi_phi_fu_109769_p4 = ap_phi_reg_pp0_iter0_data_2750_V_read2820_phi_reg_109765.read();
        }
    } else {
        ap_phi_mux_data_2750_V_read2820_phi_phi_fu_109769_p4 = ap_phi_reg_pp0_iter0_data_2750_V_read2820_phi_reg_109765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_67705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_67705_p6 = data_2750_V_read2820_phi_reg_109765.read();
    } else {
        ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_67705_p6 = data_2750_V_read2820_rewind_reg_67701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2751_V_read2821_phi_phi_fu_109782_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2751_V_read2821_phi_phi_fu_109782_p4 = ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_67719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2751_V_read2821_phi_phi_fu_109782_p4 = data_2751_V_read.read();
        } else {
            ap_phi_mux_data_2751_V_read2821_phi_phi_fu_109782_p4 = ap_phi_reg_pp0_iter0_data_2751_V_read2821_phi_reg_109778.read();
        }
    } else {
        ap_phi_mux_data_2751_V_read2821_phi_phi_fu_109782_p4 = ap_phi_reg_pp0_iter0_data_2751_V_read2821_phi_reg_109778.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_67719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_67719_p6 = data_2751_V_read2821_phi_reg_109778.read();
    } else {
        ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_67719_p6 = data_2751_V_read2821_rewind_reg_67715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2752_V_read2822_phi_phi_fu_109795_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2752_V_read2822_phi_phi_fu_109795_p4 = ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_67733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2752_V_read2822_phi_phi_fu_109795_p4 = data_2752_V_read.read();
        } else {
            ap_phi_mux_data_2752_V_read2822_phi_phi_fu_109795_p4 = ap_phi_reg_pp0_iter0_data_2752_V_read2822_phi_reg_109791.read();
        }
    } else {
        ap_phi_mux_data_2752_V_read2822_phi_phi_fu_109795_p4 = ap_phi_reg_pp0_iter0_data_2752_V_read2822_phi_reg_109791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_67733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_67733_p6 = data_2752_V_read2822_phi_reg_109791.read();
    } else {
        ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_67733_p6 = data_2752_V_read2822_rewind_reg_67729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2753_V_read2823_phi_phi_fu_109808_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2753_V_read2823_phi_phi_fu_109808_p4 = ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_67747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2753_V_read2823_phi_phi_fu_109808_p4 = data_2753_V_read.read();
        } else {
            ap_phi_mux_data_2753_V_read2823_phi_phi_fu_109808_p4 = ap_phi_reg_pp0_iter0_data_2753_V_read2823_phi_reg_109804.read();
        }
    } else {
        ap_phi_mux_data_2753_V_read2823_phi_phi_fu_109808_p4 = ap_phi_reg_pp0_iter0_data_2753_V_read2823_phi_reg_109804.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_67747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_67747_p6 = data_2753_V_read2823_phi_reg_109804.read();
    } else {
        ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_67747_p6 = data_2753_V_read2823_rewind_reg_67743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2754_V_read2824_phi_phi_fu_109821_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2754_V_read2824_phi_phi_fu_109821_p4 = ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_67761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2754_V_read2824_phi_phi_fu_109821_p4 = data_2754_V_read.read();
        } else {
            ap_phi_mux_data_2754_V_read2824_phi_phi_fu_109821_p4 = ap_phi_reg_pp0_iter0_data_2754_V_read2824_phi_reg_109817.read();
        }
    } else {
        ap_phi_mux_data_2754_V_read2824_phi_phi_fu_109821_p4 = ap_phi_reg_pp0_iter0_data_2754_V_read2824_phi_reg_109817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_67761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_67761_p6 = data_2754_V_read2824_phi_reg_109817.read();
    } else {
        ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_67761_p6 = data_2754_V_read2824_rewind_reg_67757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2755_V_read2825_phi_phi_fu_109834_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2755_V_read2825_phi_phi_fu_109834_p4 = ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_67775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2755_V_read2825_phi_phi_fu_109834_p4 = data_2755_V_read.read();
        } else {
            ap_phi_mux_data_2755_V_read2825_phi_phi_fu_109834_p4 = ap_phi_reg_pp0_iter0_data_2755_V_read2825_phi_reg_109830.read();
        }
    } else {
        ap_phi_mux_data_2755_V_read2825_phi_phi_fu_109834_p4 = ap_phi_reg_pp0_iter0_data_2755_V_read2825_phi_reg_109830.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_67775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_67775_p6 = data_2755_V_read2825_phi_reg_109830.read();
    } else {
        ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_67775_p6 = data_2755_V_read2825_rewind_reg_67771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2756_V_read2826_phi_phi_fu_109847_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2756_V_read2826_phi_phi_fu_109847_p4 = ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_67789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2756_V_read2826_phi_phi_fu_109847_p4 = data_2756_V_read.read();
        } else {
            ap_phi_mux_data_2756_V_read2826_phi_phi_fu_109847_p4 = ap_phi_reg_pp0_iter0_data_2756_V_read2826_phi_reg_109843.read();
        }
    } else {
        ap_phi_mux_data_2756_V_read2826_phi_phi_fu_109847_p4 = ap_phi_reg_pp0_iter0_data_2756_V_read2826_phi_reg_109843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_67789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_67789_p6 = data_2756_V_read2826_phi_reg_109843.read();
    } else {
        ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_67789_p6 = data_2756_V_read2826_rewind_reg_67785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2757_V_read2827_phi_phi_fu_109860_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2757_V_read2827_phi_phi_fu_109860_p4 = ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_67803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2757_V_read2827_phi_phi_fu_109860_p4 = data_2757_V_read.read();
        } else {
            ap_phi_mux_data_2757_V_read2827_phi_phi_fu_109860_p4 = ap_phi_reg_pp0_iter0_data_2757_V_read2827_phi_reg_109856.read();
        }
    } else {
        ap_phi_mux_data_2757_V_read2827_phi_phi_fu_109860_p4 = ap_phi_reg_pp0_iter0_data_2757_V_read2827_phi_reg_109856.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_67803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_67803_p6 = data_2757_V_read2827_phi_reg_109856.read();
    } else {
        ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_67803_p6 = data_2757_V_read2827_rewind_reg_67799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2758_V_read2828_phi_phi_fu_109873_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2758_V_read2828_phi_phi_fu_109873_p4 = ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_67817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2758_V_read2828_phi_phi_fu_109873_p4 = data_2758_V_read.read();
        } else {
            ap_phi_mux_data_2758_V_read2828_phi_phi_fu_109873_p4 = ap_phi_reg_pp0_iter0_data_2758_V_read2828_phi_reg_109869.read();
        }
    } else {
        ap_phi_mux_data_2758_V_read2828_phi_phi_fu_109873_p4 = ap_phi_reg_pp0_iter0_data_2758_V_read2828_phi_reg_109869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_67817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_67817_p6 = data_2758_V_read2828_phi_reg_109869.read();
    } else {
        ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_67817_p6 = data_2758_V_read2828_rewind_reg_67813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2759_V_read2829_phi_phi_fu_109886_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2759_V_read2829_phi_phi_fu_109886_p4 = ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_67831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2759_V_read2829_phi_phi_fu_109886_p4 = data_2759_V_read.read();
        } else {
            ap_phi_mux_data_2759_V_read2829_phi_phi_fu_109886_p4 = ap_phi_reg_pp0_iter0_data_2759_V_read2829_phi_reg_109882.read();
        }
    } else {
        ap_phi_mux_data_2759_V_read2829_phi_phi_fu_109886_p4 = ap_phi_reg_pp0_iter0_data_2759_V_read2829_phi_reg_109882.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_67831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_67831_p6 = data_2759_V_read2829_phi_reg_109882.read();
    } else {
        ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_67831_p6 = data_2759_V_read2829_rewind_reg_67827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_275_V_read345_phi_phi_fu_77594_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_275_V_read345_phi_phi_fu_77594_p4 = ap_phi_mux_data_275_V_read345_rewind_phi_fu_33055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_275_V_read345_phi_phi_fu_77594_p4 = data_275_V_read.read();
        } else {
            ap_phi_mux_data_275_V_read345_phi_phi_fu_77594_p4 = ap_phi_reg_pp0_iter0_data_275_V_read345_phi_reg_77590.read();
        }
    } else {
        ap_phi_mux_data_275_V_read345_phi_phi_fu_77594_p4 = ap_phi_reg_pp0_iter0_data_275_V_read345_phi_reg_77590.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_275_V_read345_rewind_phi_fu_33055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_275_V_read345_rewind_phi_fu_33055_p6 = data_275_V_read345_phi_reg_77590.read();
    } else {
        ap_phi_mux_data_275_V_read345_rewind_phi_fu_33055_p6 = data_275_V_read345_rewind_reg_33051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2760_V_read2830_phi_phi_fu_109899_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2760_V_read2830_phi_phi_fu_109899_p4 = ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_67845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2760_V_read2830_phi_phi_fu_109899_p4 = data_2760_V_read.read();
        } else {
            ap_phi_mux_data_2760_V_read2830_phi_phi_fu_109899_p4 = ap_phi_reg_pp0_iter0_data_2760_V_read2830_phi_reg_109895.read();
        }
    } else {
        ap_phi_mux_data_2760_V_read2830_phi_phi_fu_109899_p4 = ap_phi_reg_pp0_iter0_data_2760_V_read2830_phi_reg_109895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_67845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_67845_p6 = data_2760_V_read2830_phi_reg_109895.read();
    } else {
        ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_67845_p6 = data_2760_V_read2830_rewind_reg_67841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2761_V_read2831_phi_phi_fu_109912_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2761_V_read2831_phi_phi_fu_109912_p4 = ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_67859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2761_V_read2831_phi_phi_fu_109912_p4 = data_2761_V_read.read();
        } else {
            ap_phi_mux_data_2761_V_read2831_phi_phi_fu_109912_p4 = ap_phi_reg_pp0_iter0_data_2761_V_read2831_phi_reg_109908.read();
        }
    } else {
        ap_phi_mux_data_2761_V_read2831_phi_phi_fu_109912_p4 = ap_phi_reg_pp0_iter0_data_2761_V_read2831_phi_reg_109908.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_67859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_67859_p6 = data_2761_V_read2831_phi_reg_109908.read();
    } else {
        ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_67859_p6 = data_2761_V_read2831_rewind_reg_67855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2762_V_read2832_phi_phi_fu_109925_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2762_V_read2832_phi_phi_fu_109925_p4 = ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_67873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2762_V_read2832_phi_phi_fu_109925_p4 = data_2762_V_read.read();
        } else {
            ap_phi_mux_data_2762_V_read2832_phi_phi_fu_109925_p4 = ap_phi_reg_pp0_iter0_data_2762_V_read2832_phi_reg_109921.read();
        }
    } else {
        ap_phi_mux_data_2762_V_read2832_phi_phi_fu_109925_p4 = ap_phi_reg_pp0_iter0_data_2762_V_read2832_phi_reg_109921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_67873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_67873_p6 = data_2762_V_read2832_phi_reg_109921.read();
    } else {
        ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_67873_p6 = data_2762_V_read2832_rewind_reg_67869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2763_V_read2833_phi_phi_fu_109938_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2763_V_read2833_phi_phi_fu_109938_p4 = ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_67887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2763_V_read2833_phi_phi_fu_109938_p4 = data_2763_V_read.read();
        } else {
            ap_phi_mux_data_2763_V_read2833_phi_phi_fu_109938_p4 = ap_phi_reg_pp0_iter0_data_2763_V_read2833_phi_reg_109934.read();
        }
    } else {
        ap_phi_mux_data_2763_V_read2833_phi_phi_fu_109938_p4 = ap_phi_reg_pp0_iter0_data_2763_V_read2833_phi_reg_109934.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_67887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_67887_p6 = data_2763_V_read2833_phi_reg_109934.read();
    } else {
        ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_67887_p6 = data_2763_V_read2833_rewind_reg_67883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2764_V_read2834_phi_phi_fu_109951_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2764_V_read2834_phi_phi_fu_109951_p4 = ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_67901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2764_V_read2834_phi_phi_fu_109951_p4 = data_2764_V_read.read();
        } else {
            ap_phi_mux_data_2764_V_read2834_phi_phi_fu_109951_p4 = ap_phi_reg_pp0_iter0_data_2764_V_read2834_phi_reg_109947.read();
        }
    } else {
        ap_phi_mux_data_2764_V_read2834_phi_phi_fu_109951_p4 = ap_phi_reg_pp0_iter0_data_2764_V_read2834_phi_reg_109947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_67901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_67901_p6 = data_2764_V_read2834_phi_reg_109947.read();
    } else {
        ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_67901_p6 = data_2764_V_read2834_rewind_reg_67897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2765_V_read2835_phi_phi_fu_109964_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2765_V_read2835_phi_phi_fu_109964_p4 = ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_67915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2765_V_read2835_phi_phi_fu_109964_p4 = data_2765_V_read.read();
        } else {
            ap_phi_mux_data_2765_V_read2835_phi_phi_fu_109964_p4 = ap_phi_reg_pp0_iter0_data_2765_V_read2835_phi_reg_109960.read();
        }
    } else {
        ap_phi_mux_data_2765_V_read2835_phi_phi_fu_109964_p4 = ap_phi_reg_pp0_iter0_data_2765_V_read2835_phi_reg_109960.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_67915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_67915_p6 = data_2765_V_read2835_phi_reg_109960.read();
    } else {
        ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_67915_p6 = data_2765_V_read2835_rewind_reg_67911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2766_V_read2836_phi_phi_fu_109977_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2766_V_read2836_phi_phi_fu_109977_p4 = ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_67929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2766_V_read2836_phi_phi_fu_109977_p4 = data_2766_V_read.read();
        } else {
            ap_phi_mux_data_2766_V_read2836_phi_phi_fu_109977_p4 = ap_phi_reg_pp0_iter0_data_2766_V_read2836_phi_reg_109973.read();
        }
    } else {
        ap_phi_mux_data_2766_V_read2836_phi_phi_fu_109977_p4 = ap_phi_reg_pp0_iter0_data_2766_V_read2836_phi_reg_109973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_67929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_67929_p6 = data_2766_V_read2836_phi_reg_109973.read();
    } else {
        ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_67929_p6 = data_2766_V_read2836_rewind_reg_67925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2767_V_read2837_phi_phi_fu_109990_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2767_V_read2837_phi_phi_fu_109990_p4 = ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_67943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2767_V_read2837_phi_phi_fu_109990_p4 = data_2767_V_read.read();
        } else {
            ap_phi_mux_data_2767_V_read2837_phi_phi_fu_109990_p4 = ap_phi_reg_pp0_iter0_data_2767_V_read2837_phi_reg_109986.read();
        }
    } else {
        ap_phi_mux_data_2767_V_read2837_phi_phi_fu_109990_p4 = ap_phi_reg_pp0_iter0_data_2767_V_read2837_phi_reg_109986.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_67943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_67943_p6 = data_2767_V_read2837_phi_reg_109986.read();
    } else {
        ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_67943_p6 = data_2767_V_read2837_rewind_reg_67939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2768_V_read2838_phi_phi_fu_110003_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2768_V_read2838_phi_phi_fu_110003_p4 = ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_67957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2768_V_read2838_phi_phi_fu_110003_p4 = data_2768_V_read.read();
        } else {
            ap_phi_mux_data_2768_V_read2838_phi_phi_fu_110003_p4 = ap_phi_reg_pp0_iter0_data_2768_V_read2838_phi_reg_109999.read();
        }
    } else {
        ap_phi_mux_data_2768_V_read2838_phi_phi_fu_110003_p4 = ap_phi_reg_pp0_iter0_data_2768_V_read2838_phi_reg_109999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_67957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_67957_p6 = data_2768_V_read2838_phi_reg_109999.read();
    } else {
        ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_67957_p6 = data_2768_V_read2838_rewind_reg_67953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2769_V_read2839_phi_phi_fu_110016_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2769_V_read2839_phi_phi_fu_110016_p4 = ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_67971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2769_V_read2839_phi_phi_fu_110016_p4 = data_2769_V_read.read();
        } else {
            ap_phi_mux_data_2769_V_read2839_phi_phi_fu_110016_p4 = ap_phi_reg_pp0_iter0_data_2769_V_read2839_phi_reg_110012.read();
        }
    } else {
        ap_phi_mux_data_2769_V_read2839_phi_phi_fu_110016_p4 = ap_phi_reg_pp0_iter0_data_2769_V_read2839_phi_reg_110012.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_67971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_67971_p6 = data_2769_V_read2839_phi_reg_110012.read();
    } else {
        ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_67971_p6 = data_2769_V_read2839_rewind_reg_67967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_276_V_read346_phi_phi_fu_77607_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_276_V_read346_phi_phi_fu_77607_p4 = ap_phi_mux_data_276_V_read346_rewind_phi_fu_33069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_276_V_read346_phi_phi_fu_77607_p4 = data_276_V_read.read();
        } else {
            ap_phi_mux_data_276_V_read346_phi_phi_fu_77607_p4 = ap_phi_reg_pp0_iter0_data_276_V_read346_phi_reg_77603.read();
        }
    } else {
        ap_phi_mux_data_276_V_read346_phi_phi_fu_77607_p4 = ap_phi_reg_pp0_iter0_data_276_V_read346_phi_reg_77603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_276_V_read346_rewind_phi_fu_33069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_276_V_read346_rewind_phi_fu_33069_p6 = data_276_V_read346_phi_reg_77603.read();
    } else {
        ap_phi_mux_data_276_V_read346_rewind_phi_fu_33069_p6 = data_276_V_read346_rewind_reg_33065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2770_V_read2840_phi_phi_fu_110029_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2770_V_read2840_phi_phi_fu_110029_p4 = ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_67985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2770_V_read2840_phi_phi_fu_110029_p4 = data_2770_V_read.read();
        } else {
            ap_phi_mux_data_2770_V_read2840_phi_phi_fu_110029_p4 = ap_phi_reg_pp0_iter0_data_2770_V_read2840_phi_reg_110025.read();
        }
    } else {
        ap_phi_mux_data_2770_V_read2840_phi_phi_fu_110029_p4 = ap_phi_reg_pp0_iter0_data_2770_V_read2840_phi_reg_110025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_67985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_67985_p6 = data_2770_V_read2840_phi_reg_110025.read();
    } else {
        ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_67985_p6 = data_2770_V_read2840_rewind_reg_67981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2771_V_read2841_phi_phi_fu_110042_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2771_V_read2841_phi_phi_fu_110042_p4 = ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_67999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2771_V_read2841_phi_phi_fu_110042_p4 = data_2771_V_read.read();
        } else {
            ap_phi_mux_data_2771_V_read2841_phi_phi_fu_110042_p4 = ap_phi_reg_pp0_iter0_data_2771_V_read2841_phi_reg_110038.read();
        }
    } else {
        ap_phi_mux_data_2771_V_read2841_phi_phi_fu_110042_p4 = ap_phi_reg_pp0_iter0_data_2771_V_read2841_phi_reg_110038.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_67999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_67999_p6 = data_2771_V_read2841_phi_reg_110038.read();
    } else {
        ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_67999_p6 = data_2771_V_read2841_rewind_reg_67995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2772_V_read2842_phi_phi_fu_110055_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2772_V_read2842_phi_phi_fu_110055_p4 = ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_68013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2772_V_read2842_phi_phi_fu_110055_p4 = data_2772_V_read.read();
        } else {
            ap_phi_mux_data_2772_V_read2842_phi_phi_fu_110055_p4 = ap_phi_reg_pp0_iter0_data_2772_V_read2842_phi_reg_110051.read();
        }
    } else {
        ap_phi_mux_data_2772_V_read2842_phi_phi_fu_110055_p4 = ap_phi_reg_pp0_iter0_data_2772_V_read2842_phi_reg_110051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_68013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_68013_p6 = data_2772_V_read2842_phi_reg_110051.read();
    } else {
        ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_68013_p6 = data_2772_V_read2842_rewind_reg_68009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2773_V_read2843_phi_phi_fu_110068_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2773_V_read2843_phi_phi_fu_110068_p4 = ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_68027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2773_V_read2843_phi_phi_fu_110068_p4 = data_2773_V_read.read();
        } else {
            ap_phi_mux_data_2773_V_read2843_phi_phi_fu_110068_p4 = ap_phi_reg_pp0_iter0_data_2773_V_read2843_phi_reg_110064.read();
        }
    } else {
        ap_phi_mux_data_2773_V_read2843_phi_phi_fu_110068_p4 = ap_phi_reg_pp0_iter0_data_2773_V_read2843_phi_reg_110064.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_68027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_68027_p6 = data_2773_V_read2843_phi_reg_110064.read();
    } else {
        ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_68027_p6 = data_2773_V_read2843_rewind_reg_68023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2774_V_read2844_phi_phi_fu_110081_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2774_V_read2844_phi_phi_fu_110081_p4 = ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_68041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2774_V_read2844_phi_phi_fu_110081_p4 = data_2774_V_read.read();
        } else {
            ap_phi_mux_data_2774_V_read2844_phi_phi_fu_110081_p4 = ap_phi_reg_pp0_iter0_data_2774_V_read2844_phi_reg_110077.read();
        }
    } else {
        ap_phi_mux_data_2774_V_read2844_phi_phi_fu_110081_p4 = ap_phi_reg_pp0_iter0_data_2774_V_read2844_phi_reg_110077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_68041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_68041_p6 = data_2774_V_read2844_phi_reg_110077.read();
    } else {
        ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_68041_p6 = data_2774_V_read2844_rewind_reg_68037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2775_V_read2845_phi_phi_fu_110094_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2775_V_read2845_phi_phi_fu_110094_p4 = ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_68055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2775_V_read2845_phi_phi_fu_110094_p4 = data_2775_V_read.read();
        } else {
            ap_phi_mux_data_2775_V_read2845_phi_phi_fu_110094_p4 = ap_phi_reg_pp0_iter0_data_2775_V_read2845_phi_reg_110090.read();
        }
    } else {
        ap_phi_mux_data_2775_V_read2845_phi_phi_fu_110094_p4 = ap_phi_reg_pp0_iter0_data_2775_V_read2845_phi_reg_110090.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_68055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_68055_p6 = data_2775_V_read2845_phi_reg_110090.read();
    } else {
        ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_68055_p6 = data_2775_V_read2845_rewind_reg_68051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2776_V_read2846_phi_phi_fu_110107_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2776_V_read2846_phi_phi_fu_110107_p4 = ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_68069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2776_V_read2846_phi_phi_fu_110107_p4 = data_2776_V_read.read();
        } else {
            ap_phi_mux_data_2776_V_read2846_phi_phi_fu_110107_p4 = ap_phi_reg_pp0_iter0_data_2776_V_read2846_phi_reg_110103.read();
        }
    } else {
        ap_phi_mux_data_2776_V_read2846_phi_phi_fu_110107_p4 = ap_phi_reg_pp0_iter0_data_2776_V_read2846_phi_reg_110103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_68069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_68069_p6 = data_2776_V_read2846_phi_reg_110103.read();
    } else {
        ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_68069_p6 = data_2776_V_read2846_rewind_reg_68065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2777_V_read2847_phi_phi_fu_110120_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2777_V_read2847_phi_phi_fu_110120_p4 = ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_68083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2777_V_read2847_phi_phi_fu_110120_p4 = data_2777_V_read.read();
        } else {
            ap_phi_mux_data_2777_V_read2847_phi_phi_fu_110120_p4 = ap_phi_reg_pp0_iter0_data_2777_V_read2847_phi_reg_110116.read();
        }
    } else {
        ap_phi_mux_data_2777_V_read2847_phi_phi_fu_110120_p4 = ap_phi_reg_pp0_iter0_data_2777_V_read2847_phi_reg_110116.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_68083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_68083_p6 = data_2777_V_read2847_phi_reg_110116.read();
    } else {
        ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_68083_p6 = data_2777_V_read2847_rewind_reg_68079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2778_V_read2848_phi_phi_fu_110133_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2778_V_read2848_phi_phi_fu_110133_p4 = ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_68097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2778_V_read2848_phi_phi_fu_110133_p4 = data_2778_V_read.read();
        } else {
            ap_phi_mux_data_2778_V_read2848_phi_phi_fu_110133_p4 = ap_phi_reg_pp0_iter0_data_2778_V_read2848_phi_reg_110129.read();
        }
    } else {
        ap_phi_mux_data_2778_V_read2848_phi_phi_fu_110133_p4 = ap_phi_reg_pp0_iter0_data_2778_V_read2848_phi_reg_110129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_68097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_68097_p6 = data_2778_V_read2848_phi_reg_110129.read();
    } else {
        ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_68097_p6 = data_2778_V_read2848_rewind_reg_68093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2779_V_read2849_phi_phi_fu_110146_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2779_V_read2849_phi_phi_fu_110146_p4 = ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_68111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2779_V_read2849_phi_phi_fu_110146_p4 = data_2779_V_read.read();
        } else {
            ap_phi_mux_data_2779_V_read2849_phi_phi_fu_110146_p4 = ap_phi_reg_pp0_iter0_data_2779_V_read2849_phi_reg_110142.read();
        }
    } else {
        ap_phi_mux_data_2779_V_read2849_phi_phi_fu_110146_p4 = ap_phi_reg_pp0_iter0_data_2779_V_read2849_phi_reg_110142.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_68111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_68111_p6 = data_2779_V_read2849_phi_reg_110142.read();
    } else {
        ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_68111_p6 = data_2779_V_read2849_rewind_reg_68107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_277_V_read347_phi_phi_fu_77620_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_277_V_read347_phi_phi_fu_77620_p4 = ap_phi_mux_data_277_V_read347_rewind_phi_fu_33083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_277_V_read347_phi_phi_fu_77620_p4 = data_277_V_read.read();
        } else {
            ap_phi_mux_data_277_V_read347_phi_phi_fu_77620_p4 = ap_phi_reg_pp0_iter0_data_277_V_read347_phi_reg_77616.read();
        }
    } else {
        ap_phi_mux_data_277_V_read347_phi_phi_fu_77620_p4 = ap_phi_reg_pp0_iter0_data_277_V_read347_phi_reg_77616.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_277_V_read347_rewind_phi_fu_33083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_277_V_read347_rewind_phi_fu_33083_p6 = data_277_V_read347_phi_reg_77616.read();
    } else {
        ap_phi_mux_data_277_V_read347_rewind_phi_fu_33083_p6 = data_277_V_read347_rewind_reg_33079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2780_V_read2850_phi_phi_fu_110159_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2780_V_read2850_phi_phi_fu_110159_p4 = ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_68125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2780_V_read2850_phi_phi_fu_110159_p4 = data_2780_V_read.read();
        } else {
            ap_phi_mux_data_2780_V_read2850_phi_phi_fu_110159_p4 = ap_phi_reg_pp0_iter0_data_2780_V_read2850_phi_reg_110155.read();
        }
    } else {
        ap_phi_mux_data_2780_V_read2850_phi_phi_fu_110159_p4 = ap_phi_reg_pp0_iter0_data_2780_V_read2850_phi_reg_110155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_68125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_68125_p6 = data_2780_V_read2850_phi_reg_110155.read();
    } else {
        ap_phi_mux_data_2780_V_read2850_rewind_phi_fu_68125_p6 = data_2780_V_read2850_rewind_reg_68121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2781_V_read2851_phi_phi_fu_110172_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2781_V_read2851_phi_phi_fu_110172_p4 = ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_68139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2781_V_read2851_phi_phi_fu_110172_p4 = data_2781_V_read.read();
        } else {
            ap_phi_mux_data_2781_V_read2851_phi_phi_fu_110172_p4 = ap_phi_reg_pp0_iter0_data_2781_V_read2851_phi_reg_110168.read();
        }
    } else {
        ap_phi_mux_data_2781_V_read2851_phi_phi_fu_110172_p4 = ap_phi_reg_pp0_iter0_data_2781_V_read2851_phi_reg_110168.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_68139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_68139_p6 = data_2781_V_read2851_phi_reg_110168.read();
    } else {
        ap_phi_mux_data_2781_V_read2851_rewind_phi_fu_68139_p6 = data_2781_V_read2851_rewind_reg_68135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2782_V_read2852_phi_phi_fu_110185_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2782_V_read2852_phi_phi_fu_110185_p4 = ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_68153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2782_V_read2852_phi_phi_fu_110185_p4 = data_2782_V_read.read();
        } else {
            ap_phi_mux_data_2782_V_read2852_phi_phi_fu_110185_p4 = ap_phi_reg_pp0_iter0_data_2782_V_read2852_phi_reg_110181.read();
        }
    } else {
        ap_phi_mux_data_2782_V_read2852_phi_phi_fu_110185_p4 = ap_phi_reg_pp0_iter0_data_2782_V_read2852_phi_reg_110181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_68153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_68153_p6 = data_2782_V_read2852_phi_reg_110181.read();
    } else {
        ap_phi_mux_data_2782_V_read2852_rewind_phi_fu_68153_p6 = data_2782_V_read2852_rewind_reg_68149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2783_V_read2853_phi_phi_fu_110198_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2783_V_read2853_phi_phi_fu_110198_p4 = ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_68167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2783_V_read2853_phi_phi_fu_110198_p4 = data_2783_V_read.read();
        } else {
            ap_phi_mux_data_2783_V_read2853_phi_phi_fu_110198_p4 = ap_phi_reg_pp0_iter0_data_2783_V_read2853_phi_reg_110194.read();
        }
    } else {
        ap_phi_mux_data_2783_V_read2853_phi_phi_fu_110198_p4 = ap_phi_reg_pp0_iter0_data_2783_V_read2853_phi_reg_110194.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_68167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_68167_p6 = data_2783_V_read2853_phi_reg_110194.read();
    } else {
        ap_phi_mux_data_2783_V_read2853_rewind_phi_fu_68167_p6 = data_2783_V_read2853_rewind_reg_68163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2784_V_read2854_phi_phi_fu_110211_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2784_V_read2854_phi_phi_fu_110211_p4 = ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_68181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2784_V_read2854_phi_phi_fu_110211_p4 = data_2784_V_read.read();
        } else {
            ap_phi_mux_data_2784_V_read2854_phi_phi_fu_110211_p4 = ap_phi_reg_pp0_iter0_data_2784_V_read2854_phi_reg_110207.read();
        }
    } else {
        ap_phi_mux_data_2784_V_read2854_phi_phi_fu_110211_p4 = ap_phi_reg_pp0_iter0_data_2784_V_read2854_phi_reg_110207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_68181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_68181_p6 = data_2784_V_read2854_phi_reg_110207.read();
    } else {
        ap_phi_mux_data_2784_V_read2854_rewind_phi_fu_68181_p6 = data_2784_V_read2854_rewind_reg_68177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2785_V_read2855_phi_phi_fu_110224_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2785_V_read2855_phi_phi_fu_110224_p4 = ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_68195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2785_V_read2855_phi_phi_fu_110224_p4 = data_2785_V_read.read();
        } else {
            ap_phi_mux_data_2785_V_read2855_phi_phi_fu_110224_p4 = ap_phi_reg_pp0_iter0_data_2785_V_read2855_phi_reg_110220.read();
        }
    } else {
        ap_phi_mux_data_2785_V_read2855_phi_phi_fu_110224_p4 = ap_phi_reg_pp0_iter0_data_2785_V_read2855_phi_reg_110220.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_68195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_68195_p6 = data_2785_V_read2855_phi_reg_110220.read();
    } else {
        ap_phi_mux_data_2785_V_read2855_rewind_phi_fu_68195_p6 = data_2785_V_read2855_rewind_reg_68191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2786_V_read2856_phi_phi_fu_110237_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2786_V_read2856_phi_phi_fu_110237_p4 = ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_68209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2786_V_read2856_phi_phi_fu_110237_p4 = data_2786_V_read.read();
        } else {
            ap_phi_mux_data_2786_V_read2856_phi_phi_fu_110237_p4 = ap_phi_reg_pp0_iter0_data_2786_V_read2856_phi_reg_110233.read();
        }
    } else {
        ap_phi_mux_data_2786_V_read2856_phi_phi_fu_110237_p4 = ap_phi_reg_pp0_iter0_data_2786_V_read2856_phi_reg_110233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_68209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_68209_p6 = data_2786_V_read2856_phi_reg_110233.read();
    } else {
        ap_phi_mux_data_2786_V_read2856_rewind_phi_fu_68209_p6 = data_2786_V_read2856_rewind_reg_68205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2787_V_read2857_phi_phi_fu_110250_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2787_V_read2857_phi_phi_fu_110250_p4 = ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_68223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2787_V_read2857_phi_phi_fu_110250_p4 = data_2787_V_read.read();
        } else {
            ap_phi_mux_data_2787_V_read2857_phi_phi_fu_110250_p4 = ap_phi_reg_pp0_iter0_data_2787_V_read2857_phi_reg_110246.read();
        }
    } else {
        ap_phi_mux_data_2787_V_read2857_phi_phi_fu_110250_p4 = ap_phi_reg_pp0_iter0_data_2787_V_read2857_phi_reg_110246.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_68223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_68223_p6 = data_2787_V_read2857_phi_reg_110246.read();
    } else {
        ap_phi_mux_data_2787_V_read2857_rewind_phi_fu_68223_p6 = data_2787_V_read2857_rewind_reg_68219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2788_V_read2858_phi_phi_fu_110263_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2788_V_read2858_phi_phi_fu_110263_p4 = ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_68237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2788_V_read2858_phi_phi_fu_110263_p4 = data_2788_V_read.read();
        } else {
            ap_phi_mux_data_2788_V_read2858_phi_phi_fu_110263_p4 = ap_phi_reg_pp0_iter0_data_2788_V_read2858_phi_reg_110259.read();
        }
    } else {
        ap_phi_mux_data_2788_V_read2858_phi_phi_fu_110263_p4 = ap_phi_reg_pp0_iter0_data_2788_V_read2858_phi_reg_110259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_68237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_68237_p6 = data_2788_V_read2858_phi_reg_110259.read();
    } else {
        ap_phi_mux_data_2788_V_read2858_rewind_phi_fu_68237_p6 = data_2788_V_read2858_rewind_reg_68233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2789_V_read2859_phi_phi_fu_110276_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2789_V_read2859_phi_phi_fu_110276_p4 = ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_68251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2789_V_read2859_phi_phi_fu_110276_p4 = data_2789_V_read.read();
        } else {
            ap_phi_mux_data_2789_V_read2859_phi_phi_fu_110276_p4 = ap_phi_reg_pp0_iter0_data_2789_V_read2859_phi_reg_110272.read();
        }
    } else {
        ap_phi_mux_data_2789_V_read2859_phi_phi_fu_110276_p4 = ap_phi_reg_pp0_iter0_data_2789_V_read2859_phi_reg_110272.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_68251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_68251_p6 = data_2789_V_read2859_phi_reg_110272.read();
    } else {
        ap_phi_mux_data_2789_V_read2859_rewind_phi_fu_68251_p6 = data_2789_V_read2859_rewind_reg_68247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_278_V_read348_phi_phi_fu_77633_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_278_V_read348_phi_phi_fu_77633_p4 = ap_phi_mux_data_278_V_read348_rewind_phi_fu_33097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_278_V_read348_phi_phi_fu_77633_p4 = data_278_V_read.read();
        } else {
            ap_phi_mux_data_278_V_read348_phi_phi_fu_77633_p4 = ap_phi_reg_pp0_iter0_data_278_V_read348_phi_reg_77629.read();
        }
    } else {
        ap_phi_mux_data_278_V_read348_phi_phi_fu_77633_p4 = ap_phi_reg_pp0_iter0_data_278_V_read348_phi_reg_77629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_278_V_read348_rewind_phi_fu_33097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_278_V_read348_rewind_phi_fu_33097_p6 = data_278_V_read348_phi_reg_77629.read();
    } else {
        ap_phi_mux_data_278_V_read348_rewind_phi_fu_33097_p6 = data_278_V_read348_rewind_reg_33093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2790_V_read2860_phi_phi_fu_110289_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2790_V_read2860_phi_phi_fu_110289_p4 = ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_68265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2790_V_read2860_phi_phi_fu_110289_p4 = data_2790_V_read.read();
        } else {
            ap_phi_mux_data_2790_V_read2860_phi_phi_fu_110289_p4 = ap_phi_reg_pp0_iter0_data_2790_V_read2860_phi_reg_110285.read();
        }
    } else {
        ap_phi_mux_data_2790_V_read2860_phi_phi_fu_110289_p4 = ap_phi_reg_pp0_iter0_data_2790_V_read2860_phi_reg_110285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_68265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_68265_p6 = data_2790_V_read2860_phi_reg_110285.read();
    } else {
        ap_phi_mux_data_2790_V_read2860_rewind_phi_fu_68265_p6 = data_2790_V_read2860_rewind_reg_68261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2791_V_read2861_phi_phi_fu_110302_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2791_V_read2861_phi_phi_fu_110302_p4 = ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_68279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2791_V_read2861_phi_phi_fu_110302_p4 = data_2791_V_read.read();
        } else {
            ap_phi_mux_data_2791_V_read2861_phi_phi_fu_110302_p4 = ap_phi_reg_pp0_iter0_data_2791_V_read2861_phi_reg_110298.read();
        }
    } else {
        ap_phi_mux_data_2791_V_read2861_phi_phi_fu_110302_p4 = ap_phi_reg_pp0_iter0_data_2791_V_read2861_phi_reg_110298.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_68279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_68279_p6 = data_2791_V_read2861_phi_reg_110298.read();
    } else {
        ap_phi_mux_data_2791_V_read2861_rewind_phi_fu_68279_p6 = data_2791_V_read2861_rewind_reg_68275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2792_V_read2862_phi_phi_fu_110315_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2792_V_read2862_phi_phi_fu_110315_p4 = ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_68293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2792_V_read2862_phi_phi_fu_110315_p4 = data_2792_V_read.read();
        } else {
            ap_phi_mux_data_2792_V_read2862_phi_phi_fu_110315_p4 = ap_phi_reg_pp0_iter0_data_2792_V_read2862_phi_reg_110311.read();
        }
    } else {
        ap_phi_mux_data_2792_V_read2862_phi_phi_fu_110315_p4 = ap_phi_reg_pp0_iter0_data_2792_V_read2862_phi_reg_110311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_68293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_68293_p6 = data_2792_V_read2862_phi_reg_110311.read();
    } else {
        ap_phi_mux_data_2792_V_read2862_rewind_phi_fu_68293_p6 = data_2792_V_read2862_rewind_reg_68289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2793_V_read2863_phi_phi_fu_110328_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2793_V_read2863_phi_phi_fu_110328_p4 = ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_68307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2793_V_read2863_phi_phi_fu_110328_p4 = data_2793_V_read.read();
        } else {
            ap_phi_mux_data_2793_V_read2863_phi_phi_fu_110328_p4 = ap_phi_reg_pp0_iter0_data_2793_V_read2863_phi_reg_110324.read();
        }
    } else {
        ap_phi_mux_data_2793_V_read2863_phi_phi_fu_110328_p4 = ap_phi_reg_pp0_iter0_data_2793_V_read2863_phi_reg_110324.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_68307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_68307_p6 = data_2793_V_read2863_phi_reg_110324.read();
    } else {
        ap_phi_mux_data_2793_V_read2863_rewind_phi_fu_68307_p6 = data_2793_V_read2863_rewind_reg_68303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2794_V_read2864_phi_phi_fu_110341_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2794_V_read2864_phi_phi_fu_110341_p4 = ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_68321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2794_V_read2864_phi_phi_fu_110341_p4 = data_2794_V_read.read();
        } else {
            ap_phi_mux_data_2794_V_read2864_phi_phi_fu_110341_p4 = ap_phi_reg_pp0_iter0_data_2794_V_read2864_phi_reg_110337.read();
        }
    } else {
        ap_phi_mux_data_2794_V_read2864_phi_phi_fu_110341_p4 = ap_phi_reg_pp0_iter0_data_2794_V_read2864_phi_reg_110337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_68321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_68321_p6 = data_2794_V_read2864_phi_reg_110337.read();
    } else {
        ap_phi_mux_data_2794_V_read2864_rewind_phi_fu_68321_p6 = data_2794_V_read2864_rewind_reg_68317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2795_V_read2865_phi_phi_fu_110354_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2795_V_read2865_phi_phi_fu_110354_p4 = ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_68335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2795_V_read2865_phi_phi_fu_110354_p4 = data_2795_V_read.read();
        } else {
            ap_phi_mux_data_2795_V_read2865_phi_phi_fu_110354_p4 = ap_phi_reg_pp0_iter0_data_2795_V_read2865_phi_reg_110350.read();
        }
    } else {
        ap_phi_mux_data_2795_V_read2865_phi_phi_fu_110354_p4 = ap_phi_reg_pp0_iter0_data_2795_V_read2865_phi_reg_110350.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_68335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_68335_p6 = data_2795_V_read2865_phi_reg_110350.read();
    } else {
        ap_phi_mux_data_2795_V_read2865_rewind_phi_fu_68335_p6 = data_2795_V_read2865_rewind_reg_68331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2796_V_read2866_phi_phi_fu_110367_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2796_V_read2866_phi_phi_fu_110367_p4 = ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_68349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2796_V_read2866_phi_phi_fu_110367_p4 = data_2796_V_read.read();
        } else {
            ap_phi_mux_data_2796_V_read2866_phi_phi_fu_110367_p4 = ap_phi_reg_pp0_iter0_data_2796_V_read2866_phi_reg_110363.read();
        }
    } else {
        ap_phi_mux_data_2796_V_read2866_phi_phi_fu_110367_p4 = ap_phi_reg_pp0_iter0_data_2796_V_read2866_phi_reg_110363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_68349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_68349_p6 = data_2796_V_read2866_phi_reg_110363.read();
    } else {
        ap_phi_mux_data_2796_V_read2866_rewind_phi_fu_68349_p6 = data_2796_V_read2866_rewind_reg_68345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2797_V_read2867_phi_phi_fu_110380_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2797_V_read2867_phi_phi_fu_110380_p4 = ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_68363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2797_V_read2867_phi_phi_fu_110380_p4 = data_2797_V_read.read();
        } else {
            ap_phi_mux_data_2797_V_read2867_phi_phi_fu_110380_p4 = ap_phi_reg_pp0_iter0_data_2797_V_read2867_phi_reg_110376.read();
        }
    } else {
        ap_phi_mux_data_2797_V_read2867_phi_phi_fu_110380_p4 = ap_phi_reg_pp0_iter0_data_2797_V_read2867_phi_reg_110376.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_68363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_68363_p6 = data_2797_V_read2867_phi_reg_110376.read();
    } else {
        ap_phi_mux_data_2797_V_read2867_rewind_phi_fu_68363_p6 = data_2797_V_read2867_rewind_reg_68359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2798_V_read2868_phi_phi_fu_110393_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2798_V_read2868_phi_phi_fu_110393_p4 = ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_68377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2798_V_read2868_phi_phi_fu_110393_p4 = data_2798_V_read.read();
        } else {
            ap_phi_mux_data_2798_V_read2868_phi_phi_fu_110393_p4 = ap_phi_reg_pp0_iter0_data_2798_V_read2868_phi_reg_110389.read();
        }
    } else {
        ap_phi_mux_data_2798_V_read2868_phi_phi_fu_110393_p4 = ap_phi_reg_pp0_iter0_data_2798_V_read2868_phi_reg_110389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_68377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_68377_p6 = data_2798_V_read2868_phi_reg_110389.read();
    } else {
        ap_phi_mux_data_2798_V_read2868_rewind_phi_fu_68377_p6 = data_2798_V_read2868_rewind_reg_68373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2799_V_read2869_phi_phi_fu_110406_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2799_V_read2869_phi_phi_fu_110406_p4 = ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_68391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2799_V_read2869_phi_phi_fu_110406_p4 = data_2799_V_read.read();
        } else {
            ap_phi_mux_data_2799_V_read2869_phi_phi_fu_110406_p4 = ap_phi_reg_pp0_iter0_data_2799_V_read2869_phi_reg_110402.read();
        }
    } else {
        ap_phi_mux_data_2799_V_read2869_phi_phi_fu_110406_p4 = ap_phi_reg_pp0_iter0_data_2799_V_read2869_phi_reg_110402.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_68391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_68391_p6 = data_2799_V_read2869_phi_reg_110402.read();
    } else {
        ap_phi_mux_data_2799_V_read2869_rewind_phi_fu_68391_p6 = data_2799_V_read2869_rewind_reg_68387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_279_V_read349_phi_phi_fu_77646_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_279_V_read349_phi_phi_fu_77646_p4 = ap_phi_mux_data_279_V_read349_rewind_phi_fu_33111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_279_V_read349_phi_phi_fu_77646_p4 = data_279_V_read.read();
        } else {
            ap_phi_mux_data_279_V_read349_phi_phi_fu_77646_p4 = ap_phi_reg_pp0_iter0_data_279_V_read349_phi_reg_77642.read();
        }
    } else {
        ap_phi_mux_data_279_V_read349_phi_phi_fu_77646_p4 = ap_phi_reg_pp0_iter0_data_279_V_read349_phi_reg_77642.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_279_V_read349_rewind_phi_fu_33111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_279_V_read349_rewind_phi_fu_33111_p6 = data_279_V_read349_phi_reg_77642.read();
    } else {
        ap_phi_mux_data_279_V_read349_rewind_phi_fu_33111_p6 = data_279_V_read349_rewind_reg_33107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_27_V_read97_phi_phi_fu_74370_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_27_V_read97_phi_phi_fu_74370_p4 = ap_phi_mux_data_27_V_read97_rewind_phi_fu_29583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_27_V_read97_phi_phi_fu_74370_p4 = data_27_V_read.read();
        } else {
            ap_phi_mux_data_27_V_read97_phi_phi_fu_74370_p4 = ap_phi_reg_pp0_iter0_data_27_V_read97_phi_reg_74366.read();
        }
    } else {
        ap_phi_mux_data_27_V_read97_phi_phi_fu_74370_p4 = ap_phi_reg_pp0_iter0_data_27_V_read97_phi_reg_74366.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_27_V_read97_rewind_phi_fu_29583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_27_V_read97_rewind_phi_fu_29583_p6 = data_27_V_read97_phi_reg_74366.read();
    } else {
        ap_phi_mux_data_27_V_read97_rewind_phi_fu_29583_p6 = data_27_V_read97_rewind_reg_29579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2800_V_read2870_phi_phi_fu_110419_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2800_V_read2870_phi_phi_fu_110419_p4 = ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_68405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2800_V_read2870_phi_phi_fu_110419_p4 = data_2800_V_read.read();
        } else {
            ap_phi_mux_data_2800_V_read2870_phi_phi_fu_110419_p4 = ap_phi_reg_pp0_iter0_data_2800_V_read2870_phi_reg_110415.read();
        }
    } else {
        ap_phi_mux_data_2800_V_read2870_phi_phi_fu_110419_p4 = ap_phi_reg_pp0_iter0_data_2800_V_read2870_phi_reg_110415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_68405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_68405_p6 = data_2800_V_read2870_phi_reg_110415.read();
    } else {
        ap_phi_mux_data_2800_V_read2870_rewind_phi_fu_68405_p6 = data_2800_V_read2870_rewind_reg_68401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2801_V_read2871_phi_phi_fu_110432_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2801_V_read2871_phi_phi_fu_110432_p4 = ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_68419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2801_V_read2871_phi_phi_fu_110432_p4 = data_2801_V_read.read();
        } else {
            ap_phi_mux_data_2801_V_read2871_phi_phi_fu_110432_p4 = ap_phi_reg_pp0_iter0_data_2801_V_read2871_phi_reg_110428.read();
        }
    } else {
        ap_phi_mux_data_2801_V_read2871_phi_phi_fu_110432_p4 = ap_phi_reg_pp0_iter0_data_2801_V_read2871_phi_reg_110428.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_68419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_68419_p6 = data_2801_V_read2871_phi_reg_110428.read();
    } else {
        ap_phi_mux_data_2801_V_read2871_rewind_phi_fu_68419_p6 = data_2801_V_read2871_rewind_reg_68415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2802_V_read2872_phi_phi_fu_110445_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2802_V_read2872_phi_phi_fu_110445_p4 = ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_68433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2802_V_read2872_phi_phi_fu_110445_p4 = data_2802_V_read.read();
        } else {
            ap_phi_mux_data_2802_V_read2872_phi_phi_fu_110445_p4 = ap_phi_reg_pp0_iter0_data_2802_V_read2872_phi_reg_110441.read();
        }
    } else {
        ap_phi_mux_data_2802_V_read2872_phi_phi_fu_110445_p4 = ap_phi_reg_pp0_iter0_data_2802_V_read2872_phi_reg_110441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_68433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_68433_p6 = data_2802_V_read2872_phi_reg_110441.read();
    } else {
        ap_phi_mux_data_2802_V_read2872_rewind_phi_fu_68433_p6 = data_2802_V_read2872_rewind_reg_68429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2803_V_read2873_phi_phi_fu_110458_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2803_V_read2873_phi_phi_fu_110458_p4 = ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_68447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2803_V_read2873_phi_phi_fu_110458_p4 = data_2803_V_read.read();
        } else {
            ap_phi_mux_data_2803_V_read2873_phi_phi_fu_110458_p4 = ap_phi_reg_pp0_iter0_data_2803_V_read2873_phi_reg_110454.read();
        }
    } else {
        ap_phi_mux_data_2803_V_read2873_phi_phi_fu_110458_p4 = ap_phi_reg_pp0_iter0_data_2803_V_read2873_phi_reg_110454.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_68447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_68447_p6 = data_2803_V_read2873_phi_reg_110454.read();
    } else {
        ap_phi_mux_data_2803_V_read2873_rewind_phi_fu_68447_p6 = data_2803_V_read2873_rewind_reg_68443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2804_V_read2874_phi_phi_fu_110471_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2804_V_read2874_phi_phi_fu_110471_p4 = ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_68461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2804_V_read2874_phi_phi_fu_110471_p4 = data_2804_V_read.read();
        } else {
            ap_phi_mux_data_2804_V_read2874_phi_phi_fu_110471_p4 = ap_phi_reg_pp0_iter0_data_2804_V_read2874_phi_reg_110467.read();
        }
    } else {
        ap_phi_mux_data_2804_V_read2874_phi_phi_fu_110471_p4 = ap_phi_reg_pp0_iter0_data_2804_V_read2874_phi_reg_110467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_68461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_68461_p6 = data_2804_V_read2874_phi_reg_110467.read();
    } else {
        ap_phi_mux_data_2804_V_read2874_rewind_phi_fu_68461_p6 = data_2804_V_read2874_rewind_reg_68457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2805_V_read2875_phi_phi_fu_110484_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2805_V_read2875_phi_phi_fu_110484_p4 = ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_68475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2805_V_read2875_phi_phi_fu_110484_p4 = data_2805_V_read.read();
        } else {
            ap_phi_mux_data_2805_V_read2875_phi_phi_fu_110484_p4 = ap_phi_reg_pp0_iter0_data_2805_V_read2875_phi_reg_110480.read();
        }
    } else {
        ap_phi_mux_data_2805_V_read2875_phi_phi_fu_110484_p4 = ap_phi_reg_pp0_iter0_data_2805_V_read2875_phi_reg_110480.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_68475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_68475_p6 = data_2805_V_read2875_phi_reg_110480.read();
    } else {
        ap_phi_mux_data_2805_V_read2875_rewind_phi_fu_68475_p6 = data_2805_V_read2875_rewind_reg_68471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2806_V_read2876_phi_phi_fu_110497_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2806_V_read2876_phi_phi_fu_110497_p4 = ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_68489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2806_V_read2876_phi_phi_fu_110497_p4 = data_2806_V_read.read();
        } else {
            ap_phi_mux_data_2806_V_read2876_phi_phi_fu_110497_p4 = ap_phi_reg_pp0_iter0_data_2806_V_read2876_phi_reg_110493.read();
        }
    } else {
        ap_phi_mux_data_2806_V_read2876_phi_phi_fu_110497_p4 = ap_phi_reg_pp0_iter0_data_2806_V_read2876_phi_reg_110493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_68489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_68489_p6 = data_2806_V_read2876_phi_reg_110493.read();
    } else {
        ap_phi_mux_data_2806_V_read2876_rewind_phi_fu_68489_p6 = data_2806_V_read2876_rewind_reg_68485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2807_V_read2877_phi_phi_fu_110510_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2807_V_read2877_phi_phi_fu_110510_p4 = ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_68503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2807_V_read2877_phi_phi_fu_110510_p4 = data_2807_V_read.read();
        } else {
            ap_phi_mux_data_2807_V_read2877_phi_phi_fu_110510_p4 = ap_phi_reg_pp0_iter0_data_2807_V_read2877_phi_reg_110506.read();
        }
    } else {
        ap_phi_mux_data_2807_V_read2877_phi_phi_fu_110510_p4 = ap_phi_reg_pp0_iter0_data_2807_V_read2877_phi_reg_110506.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_68503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_68503_p6 = data_2807_V_read2877_phi_reg_110506.read();
    } else {
        ap_phi_mux_data_2807_V_read2877_rewind_phi_fu_68503_p6 = data_2807_V_read2877_rewind_reg_68499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2808_V_read2878_phi_phi_fu_110523_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2808_V_read2878_phi_phi_fu_110523_p4 = ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_68517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2808_V_read2878_phi_phi_fu_110523_p4 = data_2808_V_read.read();
        } else {
            ap_phi_mux_data_2808_V_read2878_phi_phi_fu_110523_p4 = ap_phi_reg_pp0_iter0_data_2808_V_read2878_phi_reg_110519.read();
        }
    } else {
        ap_phi_mux_data_2808_V_read2878_phi_phi_fu_110523_p4 = ap_phi_reg_pp0_iter0_data_2808_V_read2878_phi_reg_110519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_68517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_68517_p6 = data_2808_V_read2878_phi_reg_110519.read();
    } else {
        ap_phi_mux_data_2808_V_read2878_rewind_phi_fu_68517_p6 = data_2808_V_read2878_rewind_reg_68513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2809_V_read2879_phi_phi_fu_110536_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2809_V_read2879_phi_phi_fu_110536_p4 = ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_68531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2809_V_read2879_phi_phi_fu_110536_p4 = data_2809_V_read.read();
        } else {
            ap_phi_mux_data_2809_V_read2879_phi_phi_fu_110536_p4 = ap_phi_reg_pp0_iter0_data_2809_V_read2879_phi_reg_110532.read();
        }
    } else {
        ap_phi_mux_data_2809_V_read2879_phi_phi_fu_110536_p4 = ap_phi_reg_pp0_iter0_data_2809_V_read2879_phi_reg_110532.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_68531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_68531_p6 = data_2809_V_read2879_phi_reg_110532.read();
    } else {
        ap_phi_mux_data_2809_V_read2879_rewind_phi_fu_68531_p6 = data_2809_V_read2879_rewind_reg_68527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_280_V_read350_phi_phi_fu_77659_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_280_V_read350_phi_phi_fu_77659_p4 = ap_phi_mux_data_280_V_read350_rewind_phi_fu_33125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_280_V_read350_phi_phi_fu_77659_p4 = data_280_V_read.read();
        } else {
            ap_phi_mux_data_280_V_read350_phi_phi_fu_77659_p4 = ap_phi_reg_pp0_iter0_data_280_V_read350_phi_reg_77655.read();
        }
    } else {
        ap_phi_mux_data_280_V_read350_phi_phi_fu_77659_p4 = ap_phi_reg_pp0_iter0_data_280_V_read350_phi_reg_77655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_280_V_read350_rewind_phi_fu_33125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_280_V_read350_rewind_phi_fu_33125_p6 = data_280_V_read350_phi_reg_77655.read();
    } else {
        ap_phi_mux_data_280_V_read350_rewind_phi_fu_33125_p6 = data_280_V_read350_rewind_reg_33121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2810_V_read2880_phi_phi_fu_110549_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2810_V_read2880_phi_phi_fu_110549_p4 = ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_68545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2810_V_read2880_phi_phi_fu_110549_p4 = data_2810_V_read.read();
        } else {
            ap_phi_mux_data_2810_V_read2880_phi_phi_fu_110549_p4 = ap_phi_reg_pp0_iter0_data_2810_V_read2880_phi_reg_110545.read();
        }
    } else {
        ap_phi_mux_data_2810_V_read2880_phi_phi_fu_110549_p4 = ap_phi_reg_pp0_iter0_data_2810_V_read2880_phi_reg_110545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_68545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_68545_p6 = data_2810_V_read2880_phi_reg_110545.read();
    } else {
        ap_phi_mux_data_2810_V_read2880_rewind_phi_fu_68545_p6 = data_2810_V_read2880_rewind_reg_68541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2811_V_read2881_phi_phi_fu_110562_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2811_V_read2881_phi_phi_fu_110562_p4 = ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_68559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2811_V_read2881_phi_phi_fu_110562_p4 = data_2811_V_read.read();
        } else {
            ap_phi_mux_data_2811_V_read2881_phi_phi_fu_110562_p4 = ap_phi_reg_pp0_iter0_data_2811_V_read2881_phi_reg_110558.read();
        }
    } else {
        ap_phi_mux_data_2811_V_read2881_phi_phi_fu_110562_p4 = ap_phi_reg_pp0_iter0_data_2811_V_read2881_phi_reg_110558.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_68559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_68559_p6 = data_2811_V_read2881_phi_reg_110558.read();
    } else {
        ap_phi_mux_data_2811_V_read2881_rewind_phi_fu_68559_p6 = data_2811_V_read2881_rewind_reg_68555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2812_V_read2882_phi_phi_fu_110575_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2812_V_read2882_phi_phi_fu_110575_p4 = ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_68573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2812_V_read2882_phi_phi_fu_110575_p4 = data_2812_V_read.read();
        } else {
            ap_phi_mux_data_2812_V_read2882_phi_phi_fu_110575_p4 = ap_phi_reg_pp0_iter0_data_2812_V_read2882_phi_reg_110571.read();
        }
    } else {
        ap_phi_mux_data_2812_V_read2882_phi_phi_fu_110575_p4 = ap_phi_reg_pp0_iter0_data_2812_V_read2882_phi_reg_110571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_68573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_68573_p6 = data_2812_V_read2882_phi_reg_110571.read();
    } else {
        ap_phi_mux_data_2812_V_read2882_rewind_phi_fu_68573_p6 = data_2812_V_read2882_rewind_reg_68569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2813_V_read2883_phi_phi_fu_110588_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2813_V_read2883_phi_phi_fu_110588_p4 = ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_68587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2813_V_read2883_phi_phi_fu_110588_p4 = data_2813_V_read.read();
        } else {
            ap_phi_mux_data_2813_V_read2883_phi_phi_fu_110588_p4 = ap_phi_reg_pp0_iter0_data_2813_V_read2883_phi_reg_110584.read();
        }
    } else {
        ap_phi_mux_data_2813_V_read2883_phi_phi_fu_110588_p4 = ap_phi_reg_pp0_iter0_data_2813_V_read2883_phi_reg_110584.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_68587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_68587_p6 = data_2813_V_read2883_phi_reg_110584.read();
    } else {
        ap_phi_mux_data_2813_V_read2883_rewind_phi_fu_68587_p6 = data_2813_V_read2883_rewind_reg_68583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2814_V_read2884_phi_phi_fu_110601_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2814_V_read2884_phi_phi_fu_110601_p4 = ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_68601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2814_V_read2884_phi_phi_fu_110601_p4 = data_2814_V_read.read();
        } else {
            ap_phi_mux_data_2814_V_read2884_phi_phi_fu_110601_p4 = ap_phi_reg_pp0_iter0_data_2814_V_read2884_phi_reg_110597.read();
        }
    } else {
        ap_phi_mux_data_2814_V_read2884_phi_phi_fu_110601_p4 = ap_phi_reg_pp0_iter0_data_2814_V_read2884_phi_reg_110597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_68601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_68601_p6 = data_2814_V_read2884_phi_reg_110597.read();
    } else {
        ap_phi_mux_data_2814_V_read2884_rewind_phi_fu_68601_p6 = data_2814_V_read2884_rewind_reg_68597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2815_V_read2885_phi_phi_fu_110614_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2815_V_read2885_phi_phi_fu_110614_p4 = ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_68615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2815_V_read2885_phi_phi_fu_110614_p4 = data_2815_V_read.read();
        } else {
            ap_phi_mux_data_2815_V_read2885_phi_phi_fu_110614_p4 = ap_phi_reg_pp0_iter0_data_2815_V_read2885_phi_reg_110610.read();
        }
    } else {
        ap_phi_mux_data_2815_V_read2885_phi_phi_fu_110614_p4 = ap_phi_reg_pp0_iter0_data_2815_V_read2885_phi_reg_110610.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_68615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_68615_p6 = data_2815_V_read2885_phi_reg_110610.read();
    } else {
        ap_phi_mux_data_2815_V_read2885_rewind_phi_fu_68615_p6 = data_2815_V_read2885_rewind_reg_68611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2816_V_read2886_phi_phi_fu_110627_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2816_V_read2886_phi_phi_fu_110627_p4 = ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_68629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2816_V_read2886_phi_phi_fu_110627_p4 = data_2816_V_read.read();
        } else {
            ap_phi_mux_data_2816_V_read2886_phi_phi_fu_110627_p4 = ap_phi_reg_pp0_iter0_data_2816_V_read2886_phi_reg_110623.read();
        }
    } else {
        ap_phi_mux_data_2816_V_read2886_phi_phi_fu_110627_p4 = ap_phi_reg_pp0_iter0_data_2816_V_read2886_phi_reg_110623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_68629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_68629_p6 = data_2816_V_read2886_phi_reg_110623.read();
    } else {
        ap_phi_mux_data_2816_V_read2886_rewind_phi_fu_68629_p6 = data_2816_V_read2886_rewind_reg_68625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2817_V_read2887_phi_phi_fu_110640_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2817_V_read2887_phi_phi_fu_110640_p4 = ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_68643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2817_V_read2887_phi_phi_fu_110640_p4 = data_2817_V_read.read();
        } else {
            ap_phi_mux_data_2817_V_read2887_phi_phi_fu_110640_p4 = ap_phi_reg_pp0_iter0_data_2817_V_read2887_phi_reg_110636.read();
        }
    } else {
        ap_phi_mux_data_2817_V_read2887_phi_phi_fu_110640_p4 = ap_phi_reg_pp0_iter0_data_2817_V_read2887_phi_reg_110636.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_68643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_68643_p6 = data_2817_V_read2887_phi_reg_110636.read();
    } else {
        ap_phi_mux_data_2817_V_read2887_rewind_phi_fu_68643_p6 = data_2817_V_read2887_rewind_reg_68639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2818_V_read2888_phi_phi_fu_110653_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2818_V_read2888_phi_phi_fu_110653_p4 = ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_68657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2818_V_read2888_phi_phi_fu_110653_p4 = data_2818_V_read.read();
        } else {
            ap_phi_mux_data_2818_V_read2888_phi_phi_fu_110653_p4 = ap_phi_reg_pp0_iter0_data_2818_V_read2888_phi_reg_110649.read();
        }
    } else {
        ap_phi_mux_data_2818_V_read2888_phi_phi_fu_110653_p4 = ap_phi_reg_pp0_iter0_data_2818_V_read2888_phi_reg_110649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_68657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_68657_p6 = data_2818_V_read2888_phi_reg_110649.read();
    } else {
        ap_phi_mux_data_2818_V_read2888_rewind_phi_fu_68657_p6 = data_2818_V_read2888_rewind_reg_68653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2819_V_read2889_phi_phi_fu_110666_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2819_V_read2889_phi_phi_fu_110666_p4 = ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_68671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2819_V_read2889_phi_phi_fu_110666_p4 = data_2819_V_read.read();
        } else {
            ap_phi_mux_data_2819_V_read2889_phi_phi_fu_110666_p4 = ap_phi_reg_pp0_iter0_data_2819_V_read2889_phi_reg_110662.read();
        }
    } else {
        ap_phi_mux_data_2819_V_read2889_phi_phi_fu_110666_p4 = ap_phi_reg_pp0_iter0_data_2819_V_read2889_phi_reg_110662.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_68671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_68671_p6 = data_2819_V_read2889_phi_reg_110662.read();
    } else {
        ap_phi_mux_data_2819_V_read2889_rewind_phi_fu_68671_p6 = data_2819_V_read2889_rewind_reg_68667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_281_V_read351_phi_phi_fu_77672_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_281_V_read351_phi_phi_fu_77672_p4 = ap_phi_mux_data_281_V_read351_rewind_phi_fu_33139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_281_V_read351_phi_phi_fu_77672_p4 = data_281_V_read.read();
        } else {
            ap_phi_mux_data_281_V_read351_phi_phi_fu_77672_p4 = ap_phi_reg_pp0_iter0_data_281_V_read351_phi_reg_77668.read();
        }
    } else {
        ap_phi_mux_data_281_V_read351_phi_phi_fu_77672_p4 = ap_phi_reg_pp0_iter0_data_281_V_read351_phi_reg_77668.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_281_V_read351_rewind_phi_fu_33139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_281_V_read351_rewind_phi_fu_33139_p6 = data_281_V_read351_phi_reg_77668.read();
    } else {
        ap_phi_mux_data_281_V_read351_rewind_phi_fu_33139_p6 = data_281_V_read351_rewind_reg_33135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2820_V_read2890_phi_phi_fu_110679_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2820_V_read2890_phi_phi_fu_110679_p4 = ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_68685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2820_V_read2890_phi_phi_fu_110679_p4 = data_2820_V_read.read();
        } else {
            ap_phi_mux_data_2820_V_read2890_phi_phi_fu_110679_p4 = ap_phi_reg_pp0_iter0_data_2820_V_read2890_phi_reg_110675.read();
        }
    } else {
        ap_phi_mux_data_2820_V_read2890_phi_phi_fu_110679_p4 = ap_phi_reg_pp0_iter0_data_2820_V_read2890_phi_reg_110675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_68685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_68685_p6 = data_2820_V_read2890_phi_reg_110675.read();
    } else {
        ap_phi_mux_data_2820_V_read2890_rewind_phi_fu_68685_p6 = data_2820_V_read2890_rewind_reg_68681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2821_V_read2891_phi_phi_fu_110692_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2821_V_read2891_phi_phi_fu_110692_p4 = ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_68699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2821_V_read2891_phi_phi_fu_110692_p4 = data_2821_V_read.read();
        } else {
            ap_phi_mux_data_2821_V_read2891_phi_phi_fu_110692_p4 = ap_phi_reg_pp0_iter0_data_2821_V_read2891_phi_reg_110688.read();
        }
    } else {
        ap_phi_mux_data_2821_V_read2891_phi_phi_fu_110692_p4 = ap_phi_reg_pp0_iter0_data_2821_V_read2891_phi_reg_110688.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_68699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_68699_p6 = data_2821_V_read2891_phi_reg_110688.read();
    } else {
        ap_phi_mux_data_2821_V_read2891_rewind_phi_fu_68699_p6 = data_2821_V_read2891_rewind_reg_68695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2822_V_read2892_phi_phi_fu_110705_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2822_V_read2892_phi_phi_fu_110705_p4 = ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_68713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2822_V_read2892_phi_phi_fu_110705_p4 = data_2822_V_read.read();
        } else {
            ap_phi_mux_data_2822_V_read2892_phi_phi_fu_110705_p4 = ap_phi_reg_pp0_iter0_data_2822_V_read2892_phi_reg_110701.read();
        }
    } else {
        ap_phi_mux_data_2822_V_read2892_phi_phi_fu_110705_p4 = ap_phi_reg_pp0_iter0_data_2822_V_read2892_phi_reg_110701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_68713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_68713_p6 = data_2822_V_read2892_phi_reg_110701.read();
    } else {
        ap_phi_mux_data_2822_V_read2892_rewind_phi_fu_68713_p6 = data_2822_V_read2892_rewind_reg_68709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2823_V_read2893_phi_phi_fu_110718_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2823_V_read2893_phi_phi_fu_110718_p4 = ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_68727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2823_V_read2893_phi_phi_fu_110718_p4 = data_2823_V_read.read();
        } else {
            ap_phi_mux_data_2823_V_read2893_phi_phi_fu_110718_p4 = ap_phi_reg_pp0_iter0_data_2823_V_read2893_phi_reg_110714.read();
        }
    } else {
        ap_phi_mux_data_2823_V_read2893_phi_phi_fu_110718_p4 = ap_phi_reg_pp0_iter0_data_2823_V_read2893_phi_reg_110714.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_68727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_68727_p6 = data_2823_V_read2893_phi_reg_110714.read();
    } else {
        ap_phi_mux_data_2823_V_read2893_rewind_phi_fu_68727_p6 = data_2823_V_read2893_rewind_reg_68723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2824_V_read2894_phi_phi_fu_110731_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2824_V_read2894_phi_phi_fu_110731_p4 = ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_68741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2824_V_read2894_phi_phi_fu_110731_p4 = data_2824_V_read.read();
        } else {
            ap_phi_mux_data_2824_V_read2894_phi_phi_fu_110731_p4 = ap_phi_reg_pp0_iter0_data_2824_V_read2894_phi_reg_110727.read();
        }
    } else {
        ap_phi_mux_data_2824_V_read2894_phi_phi_fu_110731_p4 = ap_phi_reg_pp0_iter0_data_2824_V_read2894_phi_reg_110727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_68741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_68741_p6 = data_2824_V_read2894_phi_reg_110727.read();
    } else {
        ap_phi_mux_data_2824_V_read2894_rewind_phi_fu_68741_p6 = data_2824_V_read2894_rewind_reg_68737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2825_V_read2895_phi_phi_fu_110744_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2825_V_read2895_phi_phi_fu_110744_p4 = ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_68755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2825_V_read2895_phi_phi_fu_110744_p4 = data_2825_V_read.read();
        } else {
            ap_phi_mux_data_2825_V_read2895_phi_phi_fu_110744_p4 = ap_phi_reg_pp0_iter0_data_2825_V_read2895_phi_reg_110740.read();
        }
    } else {
        ap_phi_mux_data_2825_V_read2895_phi_phi_fu_110744_p4 = ap_phi_reg_pp0_iter0_data_2825_V_read2895_phi_reg_110740.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_68755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_68755_p6 = data_2825_V_read2895_phi_reg_110740.read();
    } else {
        ap_phi_mux_data_2825_V_read2895_rewind_phi_fu_68755_p6 = data_2825_V_read2895_rewind_reg_68751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2826_V_read2896_phi_phi_fu_110757_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2826_V_read2896_phi_phi_fu_110757_p4 = ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_68769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2826_V_read2896_phi_phi_fu_110757_p4 = data_2826_V_read.read();
        } else {
            ap_phi_mux_data_2826_V_read2896_phi_phi_fu_110757_p4 = ap_phi_reg_pp0_iter0_data_2826_V_read2896_phi_reg_110753.read();
        }
    } else {
        ap_phi_mux_data_2826_V_read2896_phi_phi_fu_110757_p4 = ap_phi_reg_pp0_iter0_data_2826_V_read2896_phi_reg_110753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_68769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_68769_p6 = data_2826_V_read2896_phi_reg_110753.read();
    } else {
        ap_phi_mux_data_2826_V_read2896_rewind_phi_fu_68769_p6 = data_2826_V_read2896_rewind_reg_68765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2827_V_read2897_phi_phi_fu_110770_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2827_V_read2897_phi_phi_fu_110770_p4 = ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_68783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2827_V_read2897_phi_phi_fu_110770_p4 = data_2827_V_read.read();
        } else {
            ap_phi_mux_data_2827_V_read2897_phi_phi_fu_110770_p4 = ap_phi_reg_pp0_iter0_data_2827_V_read2897_phi_reg_110766.read();
        }
    } else {
        ap_phi_mux_data_2827_V_read2897_phi_phi_fu_110770_p4 = ap_phi_reg_pp0_iter0_data_2827_V_read2897_phi_reg_110766.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_68783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_68783_p6 = data_2827_V_read2897_phi_reg_110766.read();
    } else {
        ap_phi_mux_data_2827_V_read2897_rewind_phi_fu_68783_p6 = data_2827_V_read2897_rewind_reg_68779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2828_V_read2898_phi_phi_fu_110783_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2828_V_read2898_phi_phi_fu_110783_p4 = ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_68797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2828_V_read2898_phi_phi_fu_110783_p4 = data_2828_V_read.read();
        } else {
            ap_phi_mux_data_2828_V_read2898_phi_phi_fu_110783_p4 = ap_phi_reg_pp0_iter0_data_2828_V_read2898_phi_reg_110779.read();
        }
    } else {
        ap_phi_mux_data_2828_V_read2898_phi_phi_fu_110783_p4 = ap_phi_reg_pp0_iter0_data_2828_V_read2898_phi_reg_110779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_68797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_68797_p6 = data_2828_V_read2898_phi_reg_110779.read();
    } else {
        ap_phi_mux_data_2828_V_read2898_rewind_phi_fu_68797_p6 = data_2828_V_read2898_rewind_reg_68793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2829_V_read2899_phi_phi_fu_110796_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2829_V_read2899_phi_phi_fu_110796_p4 = ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_68811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2829_V_read2899_phi_phi_fu_110796_p4 = data_2829_V_read.read();
        } else {
            ap_phi_mux_data_2829_V_read2899_phi_phi_fu_110796_p4 = ap_phi_reg_pp0_iter0_data_2829_V_read2899_phi_reg_110792.read();
        }
    } else {
        ap_phi_mux_data_2829_V_read2899_phi_phi_fu_110796_p4 = ap_phi_reg_pp0_iter0_data_2829_V_read2899_phi_reg_110792.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_68811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_68811_p6 = data_2829_V_read2899_phi_reg_110792.read();
    } else {
        ap_phi_mux_data_2829_V_read2899_rewind_phi_fu_68811_p6 = data_2829_V_read2899_rewind_reg_68807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_282_V_read352_phi_phi_fu_77685_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_282_V_read352_phi_phi_fu_77685_p4 = ap_phi_mux_data_282_V_read352_rewind_phi_fu_33153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_282_V_read352_phi_phi_fu_77685_p4 = data_282_V_read.read();
        } else {
            ap_phi_mux_data_282_V_read352_phi_phi_fu_77685_p4 = ap_phi_reg_pp0_iter0_data_282_V_read352_phi_reg_77681.read();
        }
    } else {
        ap_phi_mux_data_282_V_read352_phi_phi_fu_77685_p4 = ap_phi_reg_pp0_iter0_data_282_V_read352_phi_reg_77681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_282_V_read352_rewind_phi_fu_33153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_282_V_read352_rewind_phi_fu_33153_p6 = data_282_V_read352_phi_reg_77681.read();
    } else {
        ap_phi_mux_data_282_V_read352_rewind_phi_fu_33153_p6 = data_282_V_read352_rewind_reg_33149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2830_V_read2900_phi_phi_fu_110809_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2830_V_read2900_phi_phi_fu_110809_p4 = ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_68825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2830_V_read2900_phi_phi_fu_110809_p4 = data_2830_V_read.read();
        } else {
            ap_phi_mux_data_2830_V_read2900_phi_phi_fu_110809_p4 = ap_phi_reg_pp0_iter0_data_2830_V_read2900_phi_reg_110805.read();
        }
    } else {
        ap_phi_mux_data_2830_V_read2900_phi_phi_fu_110809_p4 = ap_phi_reg_pp0_iter0_data_2830_V_read2900_phi_reg_110805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_68825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_68825_p6 = data_2830_V_read2900_phi_reg_110805.read();
    } else {
        ap_phi_mux_data_2830_V_read2900_rewind_phi_fu_68825_p6 = data_2830_V_read2900_rewind_reg_68821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2831_V_read2901_phi_phi_fu_110822_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2831_V_read2901_phi_phi_fu_110822_p4 = ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_68839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2831_V_read2901_phi_phi_fu_110822_p4 = data_2831_V_read.read();
        } else {
            ap_phi_mux_data_2831_V_read2901_phi_phi_fu_110822_p4 = ap_phi_reg_pp0_iter0_data_2831_V_read2901_phi_reg_110818.read();
        }
    } else {
        ap_phi_mux_data_2831_V_read2901_phi_phi_fu_110822_p4 = ap_phi_reg_pp0_iter0_data_2831_V_read2901_phi_reg_110818.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_68839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_68839_p6 = data_2831_V_read2901_phi_reg_110818.read();
    } else {
        ap_phi_mux_data_2831_V_read2901_rewind_phi_fu_68839_p6 = data_2831_V_read2901_rewind_reg_68835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2832_V_read2902_phi_phi_fu_110835_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2832_V_read2902_phi_phi_fu_110835_p4 = ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_68853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2832_V_read2902_phi_phi_fu_110835_p4 = data_2832_V_read.read();
        } else {
            ap_phi_mux_data_2832_V_read2902_phi_phi_fu_110835_p4 = ap_phi_reg_pp0_iter0_data_2832_V_read2902_phi_reg_110831.read();
        }
    } else {
        ap_phi_mux_data_2832_V_read2902_phi_phi_fu_110835_p4 = ap_phi_reg_pp0_iter0_data_2832_V_read2902_phi_reg_110831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_68853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_68853_p6 = data_2832_V_read2902_phi_reg_110831.read();
    } else {
        ap_phi_mux_data_2832_V_read2902_rewind_phi_fu_68853_p6 = data_2832_V_read2902_rewind_reg_68849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2833_V_read2903_phi_phi_fu_110848_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2833_V_read2903_phi_phi_fu_110848_p4 = ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_68867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2833_V_read2903_phi_phi_fu_110848_p4 = data_2833_V_read.read();
        } else {
            ap_phi_mux_data_2833_V_read2903_phi_phi_fu_110848_p4 = ap_phi_reg_pp0_iter0_data_2833_V_read2903_phi_reg_110844.read();
        }
    } else {
        ap_phi_mux_data_2833_V_read2903_phi_phi_fu_110848_p4 = ap_phi_reg_pp0_iter0_data_2833_V_read2903_phi_reg_110844.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_68867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_68867_p6 = data_2833_V_read2903_phi_reg_110844.read();
    } else {
        ap_phi_mux_data_2833_V_read2903_rewind_phi_fu_68867_p6 = data_2833_V_read2903_rewind_reg_68863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2834_V_read2904_phi_phi_fu_110861_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2834_V_read2904_phi_phi_fu_110861_p4 = ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_68881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2834_V_read2904_phi_phi_fu_110861_p4 = data_2834_V_read.read();
        } else {
            ap_phi_mux_data_2834_V_read2904_phi_phi_fu_110861_p4 = ap_phi_reg_pp0_iter0_data_2834_V_read2904_phi_reg_110857.read();
        }
    } else {
        ap_phi_mux_data_2834_V_read2904_phi_phi_fu_110861_p4 = ap_phi_reg_pp0_iter0_data_2834_V_read2904_phi_reg_110857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_68881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_68881_p6 = data_2834_V_read2904_phi_reg_110857.read();
    } else {
        ap_phi_mux_data_2834_V_read2904_rewind_phi_fu_68881_p6 = data_2834_V_read2904_rewind_reg_68877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2835_V_read2905_phi_phi_fu_110874_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2835_V_read2905_phi_phi_fu_110874_p4 = ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_68895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2835_V_read2905_phi_phi_fu_110874_p4 = data_2835_V_read.read();
        } else {
            ap_phi_mux_data_2835_V_read2905_phi_phi_fu_110874_p4 = ap_phi_reg_pp0_iter0_data_2835_V_read2905_phi_reg_110870.read();
        }
    } else {
        ap_phi_mux_data_2835_V_read2905_phi_phi_fu_110874_p4 = ap_phi_reg_pp0_iter0_data_2835_V_read2905_phi_reg_110870.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_68895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_68895_p6 = data_2835_V_read2905_phi_reg_110870.read();
    } else {
        ap_phi_mux_data_2835_V_read2905_rewind_phi_fu_68895_p6 = data_2835_V_read2905_rewind_reg_68891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2836_V_read2906_phi_phi_fu_110887_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2836_V_read2906_phi_phi_fu_110887_p4 = ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_68909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2836_V_read2906_phi_phi_fu_110887_p4 = data_2836_V_read.read();
        } else {
            ap_phi_mux_data_2836_V_read2906_phi_phi_fu_110887_p4 = ap_phi_reg_pp0_iter0_data_2836_V_read2906_phi_reg_110883.read();
        }
    } else {
        ap_phi_mux_data_2836_V_read2906_phi_phi_fu_110887_p4 = ap_phi_reg_pp0_iter0_data_2836_V_read2906_phi_reg_110883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_68909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_68909_p6 = data_2836_V_read2906_phi_reg_110883.read();
    } else {
        ap_phi_mux_data_2836_V_read2906_rewind_phi_fu_68909_p6 = data_2836_V_read2906_rewind_reg_68905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2837_V_read2907_phi_phi_fu_110900_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2837_V_read2907_phi_phi_fu_110900_p4 = ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_68923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2837_V_read2907_phi_phi_fu_110900_p4 = data_2837_V_read.read();
        } else {
            ap_phi_mux_data_2837_V_read2907_phi_phi_fu_110900_p4 = ap_phi_reg_pp0_iter0_data_2837_V_read2907_phi_reg_110896.read();
        }
    } else {
        ap_phi_mux_data_2837_V_read2907_phi_phi_fu_110900_p4 = ap_phi_reg_pp0_iter0_data_2837_V_read2907_phi_reg_110896.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_68923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_68923_p6 = data_2837_V_read2907_phi_reg_110896.read();
    } else {
        ap_phi_mux_data_2837_V_read2907_rewind_phi_fu_68923_p6 = data_2837_V_read2907_rewind_reg_68919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2838_V_read2908_phi_phi_fu_110913_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2838_V_read2908_phi_phi_fu_110913_p4 = ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_68937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2838_V_read2908_phi_phi_fu_110913_p4 = data_2838_V_read.read();
        } else {
            ap_phi_mux_data_2838_V_read2908_phi_phi_fu_110913_p4 = ap_phi_reg_pp0_iter0_data_2838_V_read2908_phi_reg_110909.read();
        }
    } else {
        ap_phi_mux_data_2838_V_read2908_phi_phi_fu_110913_p4 = ap_phi_reg_pp0_iter0_data_2838_V_read2908_phi_reg_110909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_68937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_68937_p6 = data_2838_V_read2908_phi_reg_110909.read();
    } else {
        ap_phi_mux_data_2838_V_read2908_rewind_phi_fu_68937_p6 = data_2838_V_read2908_rewind_reg_68933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2839_V_read2909_phi_phi_fu_110926_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2839_V_read2909_phi_phi_fu_110926_p4 = ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_68951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2839_V_read2909_phi_phi_fu_110926_p4 = data_2839_V_read.read();
        } else {
            ap_phi_mux_data_2839_V_read2909_phi_phi_fu_110926_p4 = ap_phi_reg_pp0_iter0_data_2839_V_read2909_phi_reg_110922.read();
        }
    } else {
        ap_phi_mux_data_2839_V_read2909_phi_phi_fu_110926_p4 = ap_phi_reg_pp0_iter0_data_2839_V_read2909_phi_reg_110922.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_68951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_68951_p6 = data_2839_V_read2909_phi_reg_110922.read();
    } else {
        ap_phi_mux_data_2839_V_read2909_rewind_phi_fu_68951_p6 = data_2839_V_read2909_rewind_reg_68947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_283_V_read353_phi_phi_fu_77698_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_283_V_read353_phi_phi_fu_77698_p4 = ap_phi_mux_data_283_V_read353_rewind_phi_fu_33167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_283_V_read353_phi_phi_fu_77698_p4 = data_283_V_read.read();
        } else {
            ap_phi_mux_data_283_V_read353_phi_phi_fu_77698_p4 = ap_phi_reg_pp0_iter0_data_283_V_read353_phi_reg_77694.read();
        }
    } else {
        ap_phi_mux_data_283_V_read353_phi_phi_fu_77698_p4 = ap_phi_reg_pp0_iter0_data_283_V_read353_phi_reg_77694.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_283_V_read353_rewind_phi_fu_33167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_283_V_read353_rewind_phi_fu_33167_p6 = data_283_V_read353_phi_reg_77694.read();
    } else {
        ap_phi_mux_data_283_V_read353_rewind_phi_fu_33167_p6 = data_283_V_read353_rewind_reg_33163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2840_V_read2910_phi_phi_fu_110939_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2840_V_read2910_phi_phi_fu_110939_p4 = ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_68965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2840_V_read2910_phi_phi_fu_110939_p4 = data_2840_V_read.read();
        } else {
            ap_phi_mux_data_2840_V_read2910_phi_phi_fu_110939_p4 = ap_phi_reg_pp0_iter0_data_2840_V_read2910_phi_reg_110935.read();
        }
    } else {
        ap_phi_mux_data_2840_V_read2910_phi_phi_fu_110939_p4 = ap_phi_reg_pp0_iter0_data_2840_V_read2910_phi_reg_110935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_68965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_68965_p6 = data_2840_V_read2910_phi_reg_110935.read();
    } else {
        ap_phi_mux_data_2840_V_read2910_rewind_phi_fu_68965_p6 = data_2840_V_read2910_rewind_reg_68961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2841_V_read2911_phi_phi_fu_110952_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2841_V_read2911_phi_phi_fu_110952_p4 = ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_68979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2841_V_read2911_phi_phi_fu_110952_p4 = data_2841_V_read.read();
        } else {
            ap_phi_mux_data_2841_V_read2911_phi_phi_fu_110952_p4 = ap_phi_reg_pp0_iter0_data_2841_V_read2911_phi_reg_110948.read();
        }
    } else {
        ap_phi_mux_data_2841_V_read2911_phi_phi_fu_110952_p4 = ap_phi_reg_pp0_iter0_data_2841_V_read2911_phi_reg_110948.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_68979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_68979_p6 = data_2841_V_read2911_phi_reg_110948.read();
    } else {
        ap_phi_mux_data_2841_V_read2911_rewind_phi_fu_68979_p6 = data_2841_V_read2911_rewind_reg_68975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2842_V_read2912_phi_phi_fu_110965_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2842_V_read2912_phi_phi_fu_110965_p4 = ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_68993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2842_V_read2912_phi_phi_fu_110965_p4 = data_2842_V_read.read();
        } else {
            ap_phi_mux_data_2842_V_read2912_phi_phi_fu_110965_p4 = ap_phi_reg_pp0_iter0_data_2842_V_read2912_phi_reg_110961.read();
        }
    } else {
        ap_phi_mux_data_2842_V_read2912_phi_phi_fu_110965_p4 = ap_phi_reg_pp0_iter0_data_2842_V_read2912_phi_reg_110961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_68993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_68993_p6 = data_2842_V_read2912_phi_reg_110961.read();
    } else {
        ap_phi_mux_data_2842_V_read2912_rewind_phi_fu_68993_p6 = data_2842_V_read2912_rewind_reg_68989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2843_V_read2913_phi_phi_fu_110978_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2843_V_read2913_phi_phi_fu_110978_p4 = ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_69007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2843_V_read2913_phi_phi_fu_110978_p4 = data_2843_V_read.read();
        } else {
            ap_phi_mux_data_2843_V_read2913_phi_phi_fu_110978_p4 = ap_phi_reg_pp0_iter0_data_2843_V_read2913_phi_reg_110974.read();
        }
    } else {
        ap_phi_mux_data_2843_V_read2913_phi_phi_fu_110978_p4 = ap_phi_reg_pp0_iter0_data_2843_V_read2913_phi_reg_110974.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_69007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_69007_p6 = data_2843_V_read2913_phi_reg_110974.read();
    } else {
        ap_phi_mux_data_2843_V_read2913_rewind_phi_fu_69007_p6 = data_2843_V_read2913_rewind_reg_69003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2844_V_read2914_phi_phi_fu_110991_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2844_V_read2914_phi_phi_fu_110991_p4 = ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_69021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2844_V_read2914_phi_phi_fu_110991_p4 = data_2844_V_read.read();
        } else {
            ap_phi_mux_data_2844_V_read2914_phi_phi_fu_110991_p4 = ap_phi_reg_pp0_iter0_data_2844_V_read2914_phi_reg_110987.read();
        }
    } else {
        ap_phi_mux_data_2844_V_read2914_phi_phi_fu_110991_p4 = ap_phi_reg_pp0_iter0_data_2844_V_read2914_phi_reg_110987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_69021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_69021_p6 = data_2844_V_read2914_phi_reg_110987.read();
    } else {
        ap_phi_mux_data_2844_V_read2914_rewind_phi_fu_69021_p6 = data_2844_V_read2914_rewind_reg_69017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2845_V_read2915_phi_phi_fu_111004_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2845_V_read2915_phi_phi_fu_111004_p4 = ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_69035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2845_V_read2915_phi_phi_fu_111004_p4 = data_2845_V_read.read();
        } else {
            ap_phi_mux_data_2845_V_read2915_phi_phi_fu_111004_p4 = ap_phi_reg_pp0_iter0_data_2845_V_read2915_phi_reg_111000.read();
        }
    } else {
        ap_phi_mux_data_2845_V_read2915_phi_phi_fu_111004_p4 = ap_phi_reg_pp0_iter0_data_2845_V_read2915_phi_reg_111000.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_69035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_69035_p6 = data_2845_V_read2915_phi_reg_111000.read();
    } else {
        ap_phi_mux_data_2845_V_read2915_rewind_phi_fu_69035_p6 = data_2845_V_read2915_rewind_reg_69031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2846_V_read2916_phi_phi_fu_111017_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2846_V_read2916_phi_phi_fu_111017_p4 = ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_69049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2846_V_read2916_phi_phi_fu_111017_p4 = data_2846_V_read.read();
        } else {
            ap_phi_mux_data_2846_V_read2916_phi_phi_fu_111017_p4 = ap_phi_reg_pp0_iter0_data_2846_V_read2916_phi_reg_111013.read();
        }
    } else {
        ap_phi_mux_data_2846_V_read2916_phi_phi_fu_111017_p4 = ap_phi_reg_pp0_iter0_data_2846_V_read2916_phi_reg_111013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_69049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_69049_p6 = data_2846_V_read2916_phi_reg_111013.read();
    } else {
        ap_phi_mux_data_2846_V_read2916_rewind_phi_fu_69049_p6 = data_2846_V_read2916_rewind_reg_69045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2847_V_read2917_phi_phi_fu_111030_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2847_V_read2917_phi_phi_fu_111030_p4 = ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_69063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2847_V_read2917_phi_phi_fu_111030_p4 = data_2847_V_read.read();
        } else {
            ap_phi_mux_data_2847_V_read2917_phi_phi_fu_111030_p4 = ap_phi_reg_pp0_iter0_data_2847_V_read2917_phi_reg_111026.read();
        }
    } else {
        ap_phi_mux_data_2847_V_read2917_phi_phi_fu_111030_p4 = ap_phi_reg_pp0_iter0_data_2847_V_read2917_phi_reg_111026.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_69063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_69063_p6 = data_2847_V_read2917_phi_reg_111026.read();
    } else {
        ap_phi_mux_data_2847_V_read2917_rewind_phi_fu_69063_p6 = data_2847_V_read2917_rewind_reg_69059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2848_V_read2918_phi_phi_fu_111043_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2848_V_read2918_phi_phi_fu_111043_p4 = ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_69077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2848_V_read2918_phi_phi_fu_111043_p4 = data_2848_V_read.read();
        } else {
            ap_phi_mux_data_2848_V_read2918_phi_phi_fu_111043_p4 = ap_phi_reg_pp0_iter0_data_2848_V_read2918_phi_reg_111039.read();
        }
    } else {
        ap_phi_mux_data_2848_V_read2918_phi_phi_fu_111043_p4 = ap_phi_reg_pp0_iter0_data_2848_V_read2918_phi_reg_111039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_69077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_69077_p6 = data_2848_V_read2918_phi_reg_111039.read();
    } else {
        ap_phi_mux_data_2848_V_read2918_rewind_phi_fu_69077_p6 = data_2848_V_read2918_rewind_reg_69073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2849_V_read2919_phi_phi_fu_111056_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2849_V_read2919_phi_phi_fu_111056_p4 = ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_69091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2849_V_read2919_phi_phi_fu_111056_p4 = data_2849_V_read.read();
        } else {
            ap_phi_mux_data_2849_V_read2919_phi_phi_fu_111056_p4 = ap_phi_reg_pp0_iter0_data_2849_V_read2919_phi_reg_111052.read();
        }
    } else {
        ap_phi_mux_data_2849_V_read2919_phi_phi_fu_111056_p4 = ap_phi_reg_pp0_iter0_data_2849_V_read2919_phi_reg_111052.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_69091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_69091_p6 = data_2849_V_read2919_phi_reg_111052.read();
    } else {
        ap_phi_mux_data_2849_V_read2919_rewind_phi_fu_69091_p6 = data_2849_V_read2919_rewind_reg_69087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_284_V_read354_phi_phi_fu_77711_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_284_V_read354_phi_phi_fu_77711_p4 = ap_phi_mux_data_284_V_read354_rewind_phi_fu_33181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_284_V_read354_phi_phi_fu_77711_p4 = data_284_V_read.read();
        } else {
            ap_phi_mux_data_284_V_read354_phi_phi_fu_77711_p4 = ap_phi_reg_pp0_iter0_data_284_V_read354_phi_reg_77707.read();
        }
    } else {
        ap_phi_mux_data_284_V_read354_phi_phi_fu_77711_p4 = ap_phi_reg_pp0_iter0_data_284_V_read354_phi_reg_77707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_284_V_read354_rewind_phi_fu_33181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_284_V_read354_rewind_phi_fu_33181_p6 = data_284_V_read354_phi_reg_77707.read();
    } else {
        ap_phi_mux_data_284_V_read354_rewind_phi_fu_33181_p6 = data_284_V_read354_rewind_reg_33177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2850_V_read2920_phi_phi_fu_111069_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2850_V_read2920_phi_phi_fu_111069_p4 = ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_69105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2850_V_read2920_phi_phi_fu_111069_p4 = data_2850_V_read.read();
        } else {
            ap_phi_mux_data_2850_V_read2920_phi_phi_fu_111069_p4 = ap_phi_reg_pp0_iter0_data_2850_V_read2920_phi_reg_111065.read();
        }
    } else {
        ap_phi_mux_data_2850_V_read2920_phi_phi_fu_111069_p4 = ap_phi_reg_pp0_iter0_data_2850_V_read2920_phi_reg_111065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_69105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_69105_p6 = data_2850_V_read2920_phi_reg_111065.read();
    } else {
        ap_phi_mux_data_2850_V_read2920_rewind_phi_fu_69105_p6 = data_2850_V_read2920_rewind_reg_69101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2851_V_read2921_phi_phi_fu_111082_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2851_V_read2921_phi_phi_fu_111082_p4 = ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_69119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2851_V_read2921_phi_phi_fu_111082_p4 = data_2851_V_read.read();
        } else {
            ap_phi_mux_data_2851_V_read2921_phi_phi_fu_111082_p4 = ap_phi_reg_pp0_iter0_data_2851_V_read2921_phi_reg_111078.read();
        }
    } else {
        ap_phi_mux_data_2851_V_read2921_phi_phi_fu_111082_p4 = ap_phi_reg_pp0_iter0_data_2851_V_read2921_phi_reg_111078.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_69119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_69119_p6 = data_2851_V_read2921_phi_reg_111078.read();
    } else {
        ap_phi_mux_data_2851_V_read2921_rewind_phi_fu_69119_p6 = data_2851_V_read2921_rewind_reg_69115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2852_V_read2922_phi_phi_fu_111095_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2852_V_read2922_phi_phi_fu_111095_p4 = ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_69133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2852_V_read2922_phi_phi_fu_111095_p4 = data_2852_V_read.read();
        } else {
            ap_phi_mux_data_2852_V_read2922_phi_phi_fu_111095_p4 = ap_phi_reg_pp0_iter0_data_2852_V_read2922_phi_reg_111091.read();
        }
    } else {
        ap_phi_mux_data_2852_V_read2922_phi_phi_fu_111095_p4 = ap_phi_reg_pp0_iter0_data_2852_V_read2922_phi_reg_111091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_69133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_69133_p6 = data_2852_V_read2922_phi_reg_111091.read();
    } else {
        ap_phi_mux_data_2852_V_read2922_rewind_phi_fu_69133_p6 = data_2852_V_read2922_rewind_reg_69129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2853_V_read2923_phi_phi_fu_111108_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2853_V_read2923_phi_phi_fu_111108_p4 = ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_69147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2853_V_read2923_phi_phi_fu_111108_p4 = data_2853_V_read.read();
        } else {
            ap_phi_mux_data_2853_V_read2923_phi_phi_fu_111108_p4 = ap_phi_reg_pp0_iter0_data_2853_V_read2923_phi_reg_111104.read();
        }
    } else {
        ap_phi_mux_data_2853_V_read2923_phi_phi_fu_111108_p4 = ap_phi_reg_pp0_iter0_data_2853_V_read2923_phi_reg_111104.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_69147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_69147_p6 = data_2853_V_read2923_phi_reg_111104.read();
    } else {
        ap_phi_mux_data_2853_V_read2923_rewind_phi_fu_69147_p6 = data_2853_V_read2923_rewind_reg_69143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2854_V_read2924_phi_phi_fu_111121_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2854_V_read2924_phi_phi_fu_111121_p4 = ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_69161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2854_V_read2924_phi_phi_fu_111121_p4 = data_2854_V_read.read();
        } else {
            ap_phi_mux_data_2854_V_read2924_phi_phi_fu_111121_p4 = ap_phi_reg_pp0_iter0_data_2854_V_read2924_phi_reg_111117.read();
        }
    } else {
        ap_phi_mux_data_2854_V_read2924_phi_phi_fu_111121_p4 = ap_phi_reg_pp0_iter0_data_2854_V_read2924_phi_reg_111117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_69161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_69161_p6 = data_2854_V_read2924_phi_reg_111117.read();
    } else {
        ap_phi_mux_data_2854_V_read2924_rewind_phi_fu_69161_p6 = data_2854_V_read2924_rewind_reg_69157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2855_V_read2925_phi_phi_fu_111134_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2855_V_read2925_phi_phi_fu_111134_p4 = ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_69175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2855_V_read2925_phi_phi_fu_111134_p4 = data_2855_V_read.read();
        } else {
            ap_phi_mux_data_2855_V_read2925_phi_phi_fu_111134_p4 = ap_phi_reg_pp0_iter0_data_2855_V_read2925_phi_reg_111130.read();
        }
    } else {
        ap_phi_mux_data_2855_V_read2925_phi_phi_fu_111134_p4 = ap_phi_reg_pp0_iter0_data_2855_V_read2925_phi_reg_111130.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_69175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_69175_p6 = data_2855_V_read2925_phi_reg_111130.read();
    } else {
        ap_phi_mux_data_2855_V_read2925_rewind_phi_fu_69175_p6 = data_2855_V_read2925_rewind_reg_69171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2856_V_read2926_phi_phi_fu_111147_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2856_V_read2926_phi_phi_fu_111147_p4 = ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_69189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2856_V_read2926_phi_phi_fu_111147_p4 = data_2856_V_read.read();
        } else {
            ap_phi_mux_data_2856_V_read2926_phi_phi_fu_111147_p4 = ap_phi_reg_pp0_iter0_data_2856_V_read2926_phi_reg_111143.read();
        }
    } else {
        ap_phi_mux_data_2856_V_read2926_phi_phi_fu_111147_p4 = ap_phi_reg_pp0_iter0_data_2856_V_read2926_phi_reg_111143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_69189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_69189_p6 = data_2856_V_read2926_phi_reg_111143.read();
    } else {
        ap_phi_mux_data_2856_V_read2926_rewind_phi_fu_69189_p6 = data_2856_V_read2926_rewind_reg_69185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2857_V_read2927_phi_phi_fu_111160_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2857_V_read2927_phi_phi_fu_111160_p4 = ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_69203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2857_V_read2927_phi_phi_fu_111160_p4 = data_2857_V_read.read();
        } else {
            ap_phi_mux_data_2857_V_read2927_phi_phi_fu_111160_p4 = ap_phi_reg_pp0_iter0_data_2857_V_read2927_phi_reg_111156.read();
        }
    } else {
        ap_phi_mux_data_2857_V_read2927_phi_phi_fu_111160_p4 = ap_phi_reg_pp0_iter0_data_2857_V_read2927_phi_reg_111156.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_69203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_69203_p6 = data_2857_V_read2927_phi_reg_111156.read();
    } else {
        ap_phi_mux_data_2857_V_read2927_rewind_phi_fu_69203_p6 = data_2857_V_read2927_rewind_reg_69199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2858_V_read2928_phi_phi_fu_111173_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2858_V_read2928_phi_phi_fu_111173_p4 = ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_69217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2858_V_read2928_phi_phi_fu_111173_p4 = data_2858_V_read.read();
        } else {
            ap_phi_mux_data_2858_V_read2928_phi_phi_fu_111173_p4 = ap_phi_reg_pp0_iter0_data_2858_V_read2928_phi_reg_111169.read();
        }
    } else {
        ap_phi_mux_data_2858_V_read2928_phi_phi_fu_111173_p4 = ap_phi_reg_pp0_iter0_data_2858_V_read2928_phi_reg_111169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_69217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_69217_p6 = data_2858_V_read2928_phi_reg_111169.read();
    } else {
        ap_phi_mux_data_2858_V_read2928_rewind_phi_fu_69217_p6 = data_2858_V_read2928_rewind_reg_69213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2859_V_read2929_phi_phi_fu_111186_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2859_V_read2929_phi_phi_fu_111186_p4 = ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_69231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2859_V_read2929_phi_phi_fu_111186_p4 = data_2859_V_read.read();
        } else {
            ap_phi_mux_data_2859_V_read2929_phi_phi_fu_111186_p4 = ap_phi_reg_pp0_iter0_data_2859_V_read2929_phi_reg_111182.read();
        }
    } else {
        ap_phi_mux_data_2859_V_read2929_phi_phi_fu_111186_p4 = ap_phi_reg_pp0_iter0_data_2859_V_read2929_phi_reg_111182.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_69231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_69231_p6 = data_2859_V_read2929_phi_reg_111182.read();
    } else {
        ap_phi_mux_data_2859_V_read2929_rewind_phi_fu_69231_p6 = data_2859_V_read2929_rewind_reg_69227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_285_V_read355_phi_phi_fu_77724_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_285_V_read355_phi_phi_fu_77724_p4 = ap_phi_mux_data_285_V_read355_rewind_phi_fu_33195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_285_V_read355_phi_phi_fu_77724_p4 = data_285_V_read.read();
        } else {
            ap_phi_mux_data_285_V_read355_phi_phi_fu_77724_p4 = ap_phi_reg_pp0_iter0_data_285_V_read355_phi_reg_77720.read();
        }
    } else {
        ap_phi_mux_data_285_V_read355_phi_phi_fu_77724_p4 = ap_phi_reg_pp0_iter0_data_285_V_read355_phi_reg_77720.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_285_V_read355_rewind_phi_fu_33195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_285_V_read355_rewind_phi_fu_33195_p6 = data_285_V_read355_phi_reg_77720.read();
    } else {
        ap_phi_mux_data_285_V_read355_rewind_phi_fu_33195_p6 = data_285_V_read355_rewind_reg_33191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2860_V_read2930_phi_phi_fu_111199_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2860_V_read2930_phi_phi_fu_111199_p4 = ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_69245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2860_V_read2930_phi_phi_fu_111199_p4 = data_2860_V_read.read();
        } else {
            ap_phi_mux_data_2860_V_read2930_phi_phi_fu_111199_p4 = ap_phi_reg_pp0_iter0_data_2860_V_read2930_phi_reg_111195.read();
        }
    } else {
        ap_phi_mux_data_2860_V_read2930_phi_phi_fu_111199_p4 = ap_phi_reg_pp0_iter0_data_2860_V_read2930_phi_reg_111195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_69245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_69245_p6 = data_2860_V_read2930_phi_reg_111195.read();
    } else {
        ap_phi_mux_data_2860_V_read2930_rewind_phi_fu_69245_p6 = data_2860_V_read2930_rewind_reg_69241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2861_V_read2931_phi_phi_fu_111212_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2861_V_read2931_phi_phi_fu_111212_p4 = ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_69259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2861_V_read2931_phi_phi_fu_111212_p4 = data_2861_V_read.read();
        } else {
            ap_phi_mux_data_2861_V_read2931_phi_phi_fu_111212_p4 = ap_phi_reg_pp0_iter0_data_2861_V_read2931_phi_reg_111208.read();
        }
    } else {
        ap_phi_mux_data_2861_V_read2931_phi_phi_fu_111212_p4 = ap_phi_reg_pp0_iter0_data_2861_V_read2931_phi_reg_111208.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_69259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_69259_p6 = data_2861_V_read2931_phi_reg_111208.read();
    } else {
        ap_phi_mux_data_2861_V_read2931_rewind_phi_fu_69259_p6 = data_2861_V_read2931_rewind_reg_69255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2862_V_read2932_phi_phi_fu_111225_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2862_V_read2932_phi_phi_fu_111225_p4 = ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_69273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2862_V_read2932_phi_phi_fu_111225_p4 = data_2862_V_read.read();
        } else {
            ap_phi_mux_data_2862_V_read2932_phi_phi_fu_111225_p4 = ap_phi_reg_pp0_iter0_data_2862_V_read2932_phi_reg_111221.read();
        }
    } else {
        ap_phi_mux_data_2862_V_read2932_phi_phi_fu_111225_p4 = ap_phi_reg_pp0_iter0_data_2862_V_read2932_phi_reg_111221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_69273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_69273_p6 = data_2862_V_read2932_phi_reg_111221.read();
    } else {
        ap_phi_mux_data_2862_V_read2932_rewind_phi_fu_69273_p6 = data_2862_V_read2932_rewind_reg_69269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2863_V_read2933_phi_phi_fu_111238_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2863_V_read2933_phi_phi_fu_111238_p4 = ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_69287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2863_V_read2933_phi_phi_fu_111238_p4 = data_2863_V_read.read();
        } else {
            ap_phi_mux_data_2863_V_read2933_phi_phi_fu_111238_p4 = ap_phi_reg_pp0_iter0_data_2863_V_read2933_phi_reg_111234.read();
        }
    } else {
        ap_phi_mux_data_2863_V_read2933_phi_phi_fu_111238_p4 = ap_phi_reg_pp0_iter0_data_2863_V_read2933_phi_reg_111234.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_69287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_69287_p6 = data_2863_V_read2933_phi_reg_111234.read();
    } else {
        ap_phi_mux_data_2863_V_read2933_rewind_phi_fu_69287_p6 = data_2863_V_read2933_rewind_reg_69283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2864_V_read2934_phi_phi_fu_111251_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2864_V_read2934_phi_phi_fu_111251_p4 = ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_69301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2864_V_read2934_phi_phi_fu_111251_p4 = data_2864_V_read.read();
        } else {
            ap_phi_mux_data_2864_V_read2934_phi_phi_fu_111251_p4 = ap_phi_reg_pp0_iter0_data_2864_V_read2934_phi_reg_111247.read();
        }
    } else {
        ap_phi_mux_data_2864_V_read2934_phi_phi_fu_111251_p4 = ap_phi_reg_pp0_iter0_data_2864_V_read2934_phi_reg_111247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_69301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_69301_p6 = data_2864_V_read2934_phi_reg_111247.read();
    } else {
        ap_phi_mux_data_2864_V_read2934_rewind_phi_fu_69301_p6 = data_2864_V_read2934_rewind_reg_69297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2865_V_read2935_phi_phi_fu_111264_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2865_V_read2935_phi_phi_fu_111264_p4 = ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_69315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2865_V_read2935_phi_phi_fu_111264_p4 = data_2865_V_read.read();
        } else {
            ap_phi_mux_data_2865_V_read2935_phi_phi_fu_111264_p4 = ap_phi_reg_pp0_iter0_data_2865_V_read2935_phi_reg_111260.read();
        }
    } else {
        ap_phi_mux_data_2865_V_read2935_phi_phi_fu_111264_p4 = ap_phi_reg_pp0_iter0_data_2865_V_read2935_phi_reg_111260.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_69315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_69315_p6 = data_2865_V_read2935_phi_reg_111260.read();
    } else {
        ap_phi_mux_data_2865_V_read2935_rewind_phi_fu_69315_p6 = data_2865_V_read2935_rewind_reg_69311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2866_V_read2936_phi_phi_fu_111277_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2866_V_read2936_phi_phi_fu_111277_p4 = ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_69329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2866_V_read2936_phi_phi_fu_111277_p4 = data_2866_V_read.read();
        } else {
            ap_phi_mux_data_2866_V_read2936_phi_phi_fu_111277_p4 = ap_phi_reg_pp0_iter0_data_2866_V_read2936_phi_reg_111273.read();
        }
    } else {
        ap_phi_mux_data_2866_V_read2936_phi_phi_fu_111277_p4 = ap_phi_reg_pp0_iter0_data_2866_V_read2936_phi_reg_111273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_69329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_69329_p6 = data_2866_V_read2936_phi_reg_111273.read();
    } else {
        ap_phi_mux_data_2866_V_read2936_rewind_phi_fu_69329_p6 = data_2866_V_read2936_rewind_reg_69325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2867_V_read2937_phi_phi_fu_111290_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2867_V_read2937_phi_phi_fu_111290_p4 = ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_69343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2867_V_read2937_phi_phi_fu_111290_p4 = data_2867_V_read.read();
        } else {
            ap_phi_mux_data_2867_V_read2937_phi_phi_fu_111290_p4 = ap_phi_reg_pp0_iter0_data_2867_V_read2937_phi_reg_111286.read();
        }
    } else {
        ap_phi_mux_data_2867_V_read2937_phi_phi_fu_111290_p4 = ap_phi_reg_pp0_iter0_data_2867_V_read2937_phi_reg_111286.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_69343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_69343_p6 = data_2867_V_read2937_phi_reg_111286.read();
    } else {
        ap_phi_mux_data_2867_V_read2937_rewind_phi_fu_69343_p6 = data_2867_V_read2937_rewind_reg_69339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2868_V_read2938_phi_phi_fu_111303_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2868_V_read2938_phi_phi_fu_111303_p4 = ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_69357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2868_V_read2938_phi_phi_fu_111303_p4 = data_2868_V_read.read();
        } else {
            ap_phi_mux_data_2868_V_read2938_phi_phi_fu_111303_p4 = ap_phi_reg_pp0_iter0_data_2868_V_read2938_phi_reg_111299.read();
        }
    } else {
        ap_phi_mux_data_2868_V_read2938_phi_phi_fu_111303_p4 = ap_phi_reg_pp0_iter0_data_2868_V_read2938_phi_reg_111299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_69357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_69357_p6 = data_2868_V_read2938_phi_reg_111299.read();
    } else {
        ap_phi_mux_data_2868_V_read2938_rewind_phi_fu_69357_p6 = data_2868_V_read2938_rewind_reg_69353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2869_V_read2939_phi_phi_fu_111316_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2869_V_read2939_phi_phi_fu_111316_p4 = ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_69371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2869_V_read2939_phi_phi_fu_111316_p4 = data_2869_V_read.read();
        } else {
            ap_phi_mux_data_2869_V_read2939_phi_phi_fu_111316_p4 = ap_phi_reg_pp0_iter0_data_2869_V_read2939_phi_reg_111312.read();
        }
    } else {
        ap_phi_mux_data_2869_V_read2939_phi_phi_fu_111316_p4 = ap_phi_reg_pp0_iter0_data_2869_V_read2939_phi_reg_111312.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_69371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_69371_p6 = data_2869_V_read2939_phi_reg_111312.read();
    } else {
        ap_phi_mux_data_2869_V_read2939_rewind_phi_fu_69371_p6 = data_2869_V_read2939_rewind_reg_69367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_286_V_read356_phi_phi_fu_77737_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_286_V_read356_phi_phi_fu_77737_p4 = ap_phi_mux_data_286_V_read356_rewind_phi_fu_33209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_286_V_read356_phi_phi_fu_77737_p4 = data_286_V_read.read();
        } else {
            ap_phi_mux_data_286_V_read356_phi_phi_fu_77737_p4 = ap_phi_reg_pp0_iter0_data_286_V_read356_phi_reg_77733.read();
        }
    } else {
        ap_phi_mux_data_286_V_read356_phi_phi_fu_77737_p4 = ap_phi_reg_pp0_iter0_data_286_V_read356_phi_reg_77733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_286_V_read356_rewind_phi_fu_33209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_286_V_read356_rewind_phi_fu_33209_p6 = data_286_V_read356_phi_reg_77733.read();
    } else {
        ap_phi_mux_data_286_V_read356_rewind_phi_fu_33209_p6 = data_286_V_read356_rewind_reg_33205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2870_V_read2940_phi_phi_fu_111329_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2870_V_read2940_phi_phi_fu_111329_p4 = ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_69385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2870_V_read2940_phi_phi_fu_111329_p4 = data_2870_V_read.read();
        } else {
            ap_phi_mux_data_2870_V_read2940_phi_phi_fu_111329_p4 = ap_phi_reg_pp0_iter0_data_2870_V_read2940_phi_reg_111325.read();
        }
    } else {
        ap_phi_mux_data_2870_V_read2940_phi_phi_fu_111329_p4 = ap_phi_reg_pp0_iter0_data_2870_V_read2940_phi_reg_111325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_69385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_69385_p6 = data_2870_V_read2940_phi_reg_111325.read();
    } else {
        ap_phi_mux_data_2870_V_read2940_rewind_phi_fu_69385_p6 = data_2870_V_read2940_rewind_reg_69381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2871_V_read2941_phi_phi_fu_111342_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2871_V_read2941_phi_phi_fu_111342_p4 = ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_69399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2871_V_read2941_phi_phi_fu_111342_p4 = data_2871_V_read.read();
        } else {
            ap_phi_mux_data_2871_V_read2941_phi_phi_fu_111342_p4 = ap_phi_reg_pp0_iter0_data_2871_V_read2941_phi_reg_111338.read();
        }
    } else {
        ap_phi_mux_data_2871_V_read2941_phi_phi_fu_111342_p4 = ap_phi_reg_pp0_iter0_data_2871_V_read2941_phi_reg_111338.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_69399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_69399_p6 = data_2871_V_read2941_phi_reg_111338.read();
    } else {
        ap_phi_mux_data_2871_V_read2941_rewind_phi_fu_69399_p6 = data_2871_V_read2941_rewind_reg_69395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2872_V_read2942_phi_phi_fu_111355_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2872_V_read2942_phi_phi_fu_111355_p4 = ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_69413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2872_V_read2942_phi_phi_fu_111355_p4 = data_2872_V_read.read();
        } else {
            ap_phi_mux_data_2872_V_read2942_phi_phi_fu_111355_p4 = ap_phi_reg_pp0_iter0_data_2872_V_read2942_phi_reg_111351.read();
        }
    } else {
        ap_phi_mux_data_2872_V_read2942_phi_phi_fu_111355_p4 = ap_phi_reg_pp0_iter0_data_2872_V_read2942_phi_reg_111351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_69413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_69413_p6 = data_2872_V_read2942_phi_reg_111351.read();
    } else {
        ap_phi_mux_data_2872_V_read2942_rewind_phi_fu_69413_p6 = data_2872_V_read2942_rewind_reg_69409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2873_V_read2943_phi_phi_fu_111368_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2873_V_read2943_phi_phi_fu_111368_p4 = ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_69427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2873_V_read2943_phi_phi_fu_111368_p4 = data_2873_V_read.read();
        } else {
            ap_phi_mux_data_2873_V_read2943_phi_phi_fu_111368_p4 = ap_phi_reg_pp0_iter0_data_2873_V_read2943_phi_reg_111364.read();
        }
    } else {
        ap_phi_mux_data_2873_V_read2943_phi_phi_fu_111368_p4 = ap_phi_reg_pp0_iter0_data_2873_V_read2943_phi_reg_111364.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_69427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_69427_p6 = data_2873_V_read2943_phi_reg_111364.read();
    } else {
        ap_phi_mux_data_2873_V_read2943_rewind_phi_fu_69427_p6 = data_2873_V_read2943_rewind_reg_69423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2874_V_read2944_phi_phi_fu_111381_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2874_V_read2944_phi_phi_fu_111381_p4 = ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_69441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2874_V_read2944_phi_phi_fu_111381_p4 = data_2874_V_read.read();
        } else {
            ap_phi_mux_data_2874_V_read2944_phi_phi_fu_111381_p4 = ap_phi_reg_pp0_iter0_data_2874_V_read2944_phi_reg_111377.read();
        }
    } else {
        ap_phi_mux_data_2874_V_read2944_phi_phi_fu_111381_p4 = ap_phi_reg_pp0_iter0_data_2874_V_read2944_phi_reg_111377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_69441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_69441_p6 = data_2874_V_read2944_phi_reg_111377.read();
    } else {
        ap_phi_mux_data_2874_V_read2944_rewind_phi_fu_69441_p6 = data_2874_V_read2944_rewind_reg_69437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2875_V_read2945_phi_phi_fu_111394_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2875_V_read2945_phi_phi_fu_111394_p4 = ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_69455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2875_V_read2945_phi_phi_fu_111394_p4 = data_2875_V_read.read();
        } else {
            ap_phi_mux_data_2875_V_read2945_phi_phi_fu_111394_p4 = ap_phi_reg_pp0_iter0_data_2875_V_read2945_phi_reg_111390.read();
        }
    } else {
        ap_phi_mux_data_2875_V_read2945_phi_phi_fu_111394_p4 = ap_phi_reg_pp0_iter0_data_2875_V_read2945_phi_reg_111390.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_69455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_69455_p6 = data_2875_V_read2945_phi_reg_111390.read();
    } else {
        ap_phi_mux_data_2875_V_read2945_rewind_phi_fu_69455_p6 = data_2875_V_read2945_rewind_reg_69451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2876_V_read2946_phi_phi_fu_111407_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2876_V_read2946_phi_phi_fu_111407_p4 = ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_69469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2876_V_read2946_phi_phi_fu_111407_p4 = data_2876_V_read.read();
        } else {
            ap_phi_mux_data_2876_V_read2946_phi_phi_fu_111407_p4 = ap_phi_reg_pp0_iter0_data_2876_V_read2946_phi_reg_111403.read();
        }
    } else {
        ap_phi_mux_data_2876_V_read2946_phi_phi_fu_111407_p4 = ap_phi_reg_pp0_iter0_data_2876_V_read2946_phi_reg_111403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_69469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_69469_p6 = data_2876_V_read2946_phi_reg_111403.read();
    } else {
        ap_phi_mux_data_2876_V_read2946_rewind_phi_fu_69469_p6 = data_2876_V_read2946_rewind_reg_69465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2877_V_read2947_phi_phi_fu_111420_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2877_V_read2947_phi_phi_fu_111420_p4 = ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_69483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2877_V_read2947_phi_phi_fu_111420_p4 = data_2877_V_read.read();
        } else {
            ap_phi_mux_data_2877_V_read2947_phi_phi_fu_111420_p4 = ap_phi_reg_pp0_iter0_data_2877_V_read2947_phi_reg_111416.read();
        }
    } else {
        ap_phi_mux_data_2877_V_read2947_phi_phi_fu_111420_p4 = ap_phi_reg_pp0_iter0_data_2877_V_read2947_phi_reg_111416.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_69483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_69483_p6 = data_2877_V_read2947_phi_reg_111416.read();
    } else {
        ap_phi_mux_data_2877_V_read2947_rewind_phi_fu_69483_p6 = data_2877_V_read2947_rewind_reg_69479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2878_V_read2948_phi_phi_fu_111433_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2878_V_read2948_phi_phi_fu_111433_p4 = ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_69497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2878_V_read2948_phi_phi_fu_111433_p4 = data_2878_V_read.read();
        } else {
            ap_phi_mux_data_2878_V_read2948_phi_phi_fu_111433_p4 = ap_phi_reg_pp0_iter0_data_2878_V_read2948_phi_reg_111429.read();
        }
    } else {
        ap_phi_mux_data_2878_V_read2948_phi_phi_fu_111433_p4 = ap_phi_reg_pp0_iter0_data_2878_V_read2948_phi_reg_111429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_69497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_69497_p6 = data_2878_V_read2948_phi_reg_111429.read();
    } else {
        ap_phi_mux_data_2878_V_read2948_rewind_phi_fu_69497_p6 = data_2878_V_read2948_rewind_reg_69493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2879_V_read2949_phi_phi_fu_111446_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2879_V_read2949_phi_phi_fu_111446_p4 = ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_69511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2879_V_read2949_phi_phi_fu_111446_p4 = data_2879_V_read.read();
        } else {
            ap_phi_mux_data_2879_V_read2949_phi_phi_fu_111446_p4 = ap_phi_reg_pp0_iter0_data_2879_V_read2949_phi_reg_111442.read();
        }
    } else {
        ap_phi_mux_data_2879_V_read2949_phi_phi_fu_111446_p4 = ap_phi_reg_pp0_iter0_data_2879_V_read2949_phi_reg_111442.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_69511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_69511_p6 = data_2879_V_read2949_phi_reg_111442.read();
    } else {
        ap_phi_mux_data_2879_V_read2949_rewind_phi_fu_69511_p6 = data_2879_V_read2949_rewind_reg_69507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_287_V_read357_phi_phi_fu_77750_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_287_V_read357_phi_phi_fu_77750_p4 = ap_phi_mux_data_287_V_read357_rewind_phi_fu_33223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_287_V_read357_phi_phi_fu_77750_p4 = data_287_V_read.read();
        } else {
            ap_phi_mux_data_287_V_read357_phi_phi_fu_77750_p4 = ap_phi_reg_pp0_iter0_data_287_V_read357_phi_reg_77746.read();
        }
    } else {
        ap_phi_mux_data_287_V_read357_phi_phi_fu_77750_p4 = ap_phi_reg_pp0_iter0_data_287_V_read357_phi_reg_77746.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_287_V_read357_rewind_phi_fu_33223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_287_V_read357_rewind_phi_fu_33223_p6 = data_287_V_read357_phi_reg_77746.read();
    } else {
        ap_phi_mux_data_287_V_read357_rewind_phi_fu_33223_p6 = data_287_V_read357_rewind_reg_33219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2880_V_read2950_phi_phi_fu_111459_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2880_V_read2950_phi_phi_fu_111459_p4 = ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_69525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2880_V_read2950_phi_phi_fu_111459_p4 = data_2880_V_read.read();
        } else {
            ap_phi_mux_data_2880_V_read2950_phi_phi_fu_111459_p4 = ap_phi_reg_pp0_iter0_data_2880_V_read2950_phi_reg_111455.read();
        }
    } else {
        ap_phi_mux_data_2880_V_read2950_phi_phi_fu_111459_p4 = ap_phi_reg_pp0_iter0_data_2880_V_read2950_phi_reg_111455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_69525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_69525_p6 = data_2880_V_read2950_phi_reg_111455.read();
    } else {
        ap_phi_mux_data_2880_V_read2950_rewind_phi_fu_69525_p6 = data_2880_V_read2950_rewind_reg_69521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2881_V_read2951_phi_phi_fu_111472_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2881_V_read2951_phi_phi_fu_111472_p4 = ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_69539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2881_V_read2951_phi_phi_fu_111472_p4 = data_2881_V_read.read();
        } else {
            ap_phi_mux_data_2881_V_read2951_phi_phi_fu_111472_p4 = ap_phi_reg_pp0_iter0_data_2881_V_read2951_phi_reg_111468.read();
        }
    } else {
        ap_phi_mux_data_2881_V_read2951_phi_phi_fu_111472_p4 = ap_phi_reg_pp0_iter0_data_2881_V_read2951_phi_reg_111468.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_69539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_69539_p6 = data_2881_V_read2951_phi_reg_111468.read();
    } else {
        ap_phi_mux_data_2881_V_read2951_rewind_phi_fu_69539_p6 = data_2881_V_read2951_rewind_reg_69535.read();
    }
}

}

