#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2329_V_read2399_phi_phi_fu_100974_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2329_V_read2399_phi_phi_fu_100974_p4 = ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_58489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2329_V_read2399_phi_phi_fu_100974_p4 = data_2329_V_read.read();
        } else {
            ap_phi_mux_data_2329_V_read2399_phi_phi_fu_100974_p4 = ap_phi_reg_pp0_iter0_data_2329_V_read2399_phi_reg_100970.read();
        }
    } else {
        ap_phi_mux_data_2329_V_read2399_phi_phi_fu_100974_p4 = ap_phi_reg_pp0_iter0_data_2329_V_read2399_phi_reg_100970.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_58489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_58489_p6 = data_2329_V_read2399_phi_reg_100970.read();
    } else {
        ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_58489_p6 = data_2329_V_read2399_rewind_reg_58485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_232_V_read302_phi_phi_fu_73713_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_232_V_read302_phi_phi_fu_73713_p4 = ap_phi_mux_data_232_V_read302_rewind_phi_fu_29131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_232_V_read302_phi_phi_fu_73713_p4 = data_232_V_read.read();
        } else {
            ap_phi_mux_data_232_V_read302_phi_phi_fu_73713_p4 = ap_phi_reg_pp0_iter0_data_232_V_read302_phi_reg_73709.read();
        }
    } else {
        ap_phi_mux_data_232_V_read302_phi_phi_fu_73713_p4 = ap_phi_reg_pp0_iter0_data_232_V_read302_phi_reg_73709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_232_V_read302_rewind_phi_fu_29131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_232_V_read302_rewind_phi_fu_29131_p6 = data_232_V_read302_phi_reg_73709.read();
    } else {
        ap_phi_mux_data_232_V_read302_rewind_phi_fu_29131_p6 = data_232_V_read302_rewind_reg_29127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2330_V_read2400_phi_phi_fu_100987_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2330_V_read2400_phi_phi_fu_100987_p4 = ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_58503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2330_V_read2400_phi_phi_fu_100987_p4 = data_2330_V_read.read();
        } else {
            ap_phi_mux_data_2330_V_read2400_phi_phi_fu_100987_p4 = ap_phi_reg_pp0_iter0_data_2330_V_read2400_phi_reg_100983.read();
        }
    } else {
        ap_phi_mux_data_2330_V_read2400_phi_phi_fu_100987_p4 = ap_phi_reg_pp0_iter0_data_2330_V_read2400_phi_reg_100983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_58503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_58503_p6 = data_2330_V_read2400_phi_reg_100983.read();
    } else {
        ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_58503_p6 = data_2330_V_read2400_rewind_reg_58499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2331_V_read2401_phi_phi_fu_101000_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2331_V_read2401_phi_phi_fu_101000_p4 = ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_58517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2331_V_read2401_phi_phi_fu_101000_p4 = data_2331_V_read.read();
        } else {
            ap_phi_mux_data_2331_V_read2401_phi_phi_fu_101000_p4 = ap_phi_reg_pp0_iter0_data_2331_V_read2401_phi_reg_100996.read();
        }
    } else {
        ap_phi_mux_data_2331_V_read2401_phi_phi_fu_101000_p4 = ap_phi_reg_pp0_iter0_data_2331_V_read2401_phi_reg_100996.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_58517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_58517_p6 = data_2331_V_read2401_phi_reg_100996.read();
    } else {
        ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_58517_p6 = data_2331_V_read2401_rewind_reg_58513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2332_V_read2402_phi_phi_fu_101013_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2332_V_read2402_phi_phi_fu_101013_p4 = ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_58531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2332_V_read2402_phi_phi_fu_101013_p4 = data_2332_V_read.read();
        } else {
            ap_phi_mux_data_2332_V_read2402_phi_phi_fu_101013_p4 = ap_phi_reg_pp0_iter0_data_2332_V_read2402_phi_reg_101009.read();
        }
    } else {
        ap_phi_mux_data_2332_V_read2402_phi_phi_fu_101013_p4 = ap_phi_reg_pp0_iter0_data_2332_V_read2402_phi_reg_101009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_58531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_58531_p6 = data_2332_V_read2402_phi_reg_101009.read();
    } else {
        ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_58531_p6 = data_2332_V_read2402_rewind_reg_58527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2333_V_read2403_phi_phi_fu_101026_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2333_V_read2403_phi_phi_fu_101026_p4 = ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_58545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2333_V_read2403_phi_phi_fu_101026_p4 = data_2333_V_read.read();
        } else {
            ap_phi_mux_data_2333_V_read2403_phi_phi_fu_101026_p4 = ap_phi_reg_pp0_iter0_data_2333_V_read2403_phi_reg_101022.read();
        }
    } else {
        ap_phi_mux_data_2333_V_read2403_phi_phi_fu_101026_p4 = ap_phi_reg_pp0_iter0_data_2333_V_read2403_phi_reg_101022.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_58545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_58545_p6 = data_2333_V_read2403_phi_reg_101022.read();
    } else {
        ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_58545_p6 = data_2333_V_read2403_rewind_reg_58541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2334_V_read2404_phi_phi_fu_101039_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2334_V_read2404_phi_phi_fu_101039_p4 = ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_58559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2334_V_read2404_phi_phi_fu_101039_p4 = data_2334_V_read.read();
        } else {
            ap_phi_mux_data_2334_V_read2404_phi_phi_fu_101039_p4 = ap_phi_reg_pp0_iter0_data_2334_V_read2404_phi_reg_101035.read();
        }
    } else {
        ap_phi_mux_data_2334_V_read2404_phi_phi_fu_101039_p4 = ap_phi_reg_pp0_iter0_data_2334_V_read2404_phi_reg_101035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_58559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_58559_p6 = data_2334_V_read2404_phi_reg_101035.read();
    } else {
        ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_58559_p6 = data_2334_V_read2404_rewind_reg_58555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2335_V_read2405_phi_phi_fu_101052_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2335_V_read2405_phi_phi_fu_101052_p4 = ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_58573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2335_V_read2405_phi_phi_fu_101052_p4 = data_2335_V_read.read();
        } else {
            ap_phi_mux_data_2335_V_read2405_phi_phi_fu_101052_p4 = ap_phi_reg_pp0_iter0_data_2335_V_read2405_phi_reg_101048.read();
        }
    } else {
        ap_phi_mux_data_2335_V_read2405_phi_phi_fu_101052_p4 = ap_phi_reg_pp0_iter0_data_2335_V_read2405_phi_reg_101048.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_58573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_58573_p6 = data_2335_V_read2405_phi_reg_101048.read();
    } else {
        ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_58573_p6 = data_2335_V_read2405_rewind_reg_58569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2336_V_read2406_phi_phi_fu_101065_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2336_V_read2406_phi_phi_fu_101065_p4 = ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_58587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2336_V_read2406_phi_phi_fu_101065_p4 = data_2336_V_read.read();
        } else {
            ap_phi_mux_data_2336_V_read2406_phi_phi_fu_101065_p4 = ap_phi_reg_pp0_iter0_data_2336_V_read2406_phi_reg_101061.read();
        }
    } else {
        ap_phi_mux_data_2336_V_read2406_phi_phi_fu_101065_p4 = ap_phi_reg_pp0_iter0_data_2336_V_read2406_phi_reg_101061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_58587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_58587_p6 = data_2336_V_read2406_phi_reg_101061.read();
    } else {
        ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_58587_p6 = data_2336_V_read2406_rewind_reg_58583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2337_V_read2407_phi_phi_fu_101078_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2337_V_read2407_phi_phi_fu_101078_p4 = ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_58601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2337_V_read2407_phi_phi_fu_101078_p4 = data_2337_V_read.read();
        } else {
            ap_phi_mux_data_2337_V_read2407_phi_phi_fu_101078_p4 = ap_phi_reg_pp0_iter0_data_2337_V_read2407_phi_reg_101074.read();
        }
    } else {
        ap_phi_mux_data_2337_V_read2407_phi_phi_fu_101078_p4 = ap_phi_reg_pp0_iter0_data_2337_V_read2407_phi_reg_101074.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_58601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_58601_p6 = data_2337_V_read2407_phi_reg_101074.read();
    } else {
        ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_58601_p6 = data_2337_V_read2407_rewind_reg_58597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2338_V_read2408_phi_phi_fu_101091_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2338_V_read2408_phi_phi_fu_101091_p4 = ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_58615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2338_V_read2408_phi_phi_fu_101091_p4 = data_2338_V_read.read();
        } else {
            ap_phi_mux_data_2338_V_read2408_phi_phi_fu_101091_p4 = ap_phi_reg_pp0_iter0_data_2338_V_read2408_phi_reg_101087.read();
        }
    } else {
        ap_phi_mux_data_2338_V_read2408_phi_phi_fu_101091_p4 = ap_phi_reg_pp0_iter0_data_2338_V_read2408_phi_reg_101087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_58615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_58615_p6 = data_2338_V_read2408_phi_reg_101087.read();
    } else {
        ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_58615_p6 = data_2338_V_read2408_rewind_reg_58611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2339_V_read2409_phi_phi_fu_101104_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2339_V_read2409_phi_phi_fu_101104_p4 = ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_58629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2339_V_read2409_phi_phi_fu_101104_p4 = data_2339_V_read.read();
        } else {
            ap_phi_mux_data_2339_V_read2409_phi_phi_fu_101104_p4 = ap_phi_reg_pp0_iter0_data_2339_V_read2409_phi_reg_101100.read();
        }
    } else {
        ap_phi_mux_data_2339_V_read2409_phi_phi_fu_101104_p4 = ap_phi_reg_pp0_iter0_data_2339_V_read2409_phi_reg_101100.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_58629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_58629_p6 = data_2339_V_read2409_phi_reg_101100.read();
    } else {
        ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_58629_p6 = data_2339_V_read2409_rewind_reg_58625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_233_V_read303_phi_phi_fu_73726_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_233_V_read303_phi_phi_fu_73726_p4 = ap_phi_mux_data_233_V_read303_rewind_phi_fu_29145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_233_V_read303_phi_phi_fu_73726_p4 = data_233_V_read.read();
        } else {
            ap_phi_mux_data_233_V_read303_phi_phi_fu_73726_p4 = ap_phi_reg_pp0_iter0_data_233_V_read303_phi_reg_73722.read();
        }
    } else {
        ap_phi_mux_data_233_V_read303_phi_phi_fu_73726_p4 = ap_phi_reg_pp0_iter0_data_233_V_read303_phi_reg_73722.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_233_V_read303_rewind_phi_fu_29145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_233_V_read303_rewind_phi_fu_29145_p6 = data_233_V_read303_phi_reg_73722.read();
    } else {
        ap_phi_mux_data_233_V_read303_rewind_phi_fu_29145_p6 = data_233_V_read303_rewind_reg_29141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2340_V_read2410_phi_phi_fu_101117_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2340_V_read2410_phi_phi_fu_101117_p4 = ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_58643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2340_V_read2410_phi_phi_fu_101117_p4 = data_2340_V_read.read();
        } else {
            ap_phi_mux_data_2340_V_read2410_phi_phi_fu_101117_p4 = ap_phi_reg_pp0_iter0_data_2340_V_read2410_phi_reg_101113.read();
        }
    } else {
        ap_phi_mux_data_2340_V_read2410_phi_phi_fu_101117_p4 = ap_phi_reg_pp0_iter0_data_2340_V_read2410_phi_reg_101113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_58643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_58643_p6 = data_2340_V_read2410_phi_reg_101113.read();
    } else {
        ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_58643_p6 = data_2340_V_read2410_rewind_reg_58639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2341_V_read2411_phi_phi_fu_101130_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2341_V_read2411_phi_phi_fu_101130_p4 = ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_58657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2341_V_read2411_phi_phi_fu_101130_p4 = data_2341_V_read.read();
        } else {
            ap_phi_mux_data_2341_V_read2411_phi_phi_fu_101130_p4 = ap_phi_reg_pp0_iter0_data_2341_V_read2411_phi_reg_101126.read();
        }
    } else {
        ap_phi_mux_data_2341_V_read2411_phi_phi_fu_101130_p4 = ap_phi_reg_pp0_iter0_data_2341_V_read2411_phi_reg_101126.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_58657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_58657_p6 = data_2341_V_read2411_phi_reg_101126.read();
    } else {
        ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_58657_p6 = data_2341_V_read2411_rewind_reg_58653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2342_V_read2412_phi_phi_fu_101143_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2342_V_read2412_phi_phi_fu_101143_p4 = ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_58671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2342_V_read2412_phi_phi_fu_101143_p4 = data_2342_V_read.read();
        } else {
            ap_phi_mux_data_2342_V_read2412_phi_phi_fu_101143_p4 = ap_phi_reg_pp0_iter0_data_2342_V_read2412_phi_reg_101139.read();
        }
    } else {
        ap_phi_mux_data_2342_V_read2412_phi_phi_fu_101143_p4 = ap_phi_reg_pp0_iter0_data_2342_V_read2412_phi_reg_101139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_58671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_58671_p6 = data_2342_V_read2412_phi_reg_101139.read();
    } else {
        ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_58671_p6 = data_2342_V_read2412_rewind_reg_58667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2343_V_read2413_phi_phi_fu_101156_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2343_V_read2413_phi_phi_fu_101156_p4 = ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_58685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2343_V_read2413_phi_phi_fu_101156_p4 = data_2343_V_read.read();
        } else {
            ap_phi_mux_data_2343_V_read2413_phi_phi_fu_101156_p4 = ap_phi_reg_pp0_iter0_data_2343_V_read2413_phi_reg_101152.read();
        }
    } else {
        ap_phi_mux_data_2343_V_read2413_phi_phi_fu_101156_p4 = ap_phi_reg_pp0_iter0_data_2343_V_read2413_phi_reg_101152.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_58685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_58685_p6 = data_2343_V_read2413_phi_reg_101152.read();
    } else {
        ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_58685_p6 = data_2343_V_read2413_rewind_reg_58681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2344_V_read2414_phi_phi_fu_101169_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2344_V_read2414_phi_phi_fu_101169_p4 = ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_58699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2344_V_read2414_phi_phi_fu_101169_p4 = data_2344_V_read.read();
        } else {
            ap_phi_mux_data_2344_V_read2414_phi_phi_fu_101169_p4 = ap_phi_reg_pp0_iter0_data_2344_V_read2414_phi_reg_101165.read();
        }
    } else {
        ap_phi_mux_data_2344_V_read2414_phi_phi_fu_101169_p4 = ap_phi_reg_pp0_iter0_data_2344_V_read2414_phi_reg_101165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_58699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_58699_p6 = data_2344_V_read2414_phi_reg_101165.read();
    } else {
        ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_58699_p6 = data_2344_V_read2414_rewind_reg_58695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2345_V_read2415_phi_phi_fu_101182_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2345_V_read2415_phi_phi_fu_101182_p4 = ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_58713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2345_V_read2415_phi_phi_fu_101182_p4 = data_2345_V_read.read();
        } else {
            ap_phi_mux_data_2345_V_read2415_phi_phi_fu_101182_p4 = ap_phi_reg_pp0_iter0_data_2345_V_read2415_phi_reg_101178.read();
        }
    } else {
        ap_phi_mux_data_2345_V_read2415_phi_phi_fu_101182_p4 = ap_phi_reg_pp0_iter0_data_2345_V_read2415_phi_reg_101178.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_58713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_58713_p6 = data_2345_V_read2415_phi_reg_101178.read();
    } else {
        ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_58713_p6 = data_2345_V_read2415_rewind_reg_58709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2346_V_read2416_phi_phi_fu_101195_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2346_V_read2416_phi_phi_fu_101195_p4 = ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_58727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2346_V_read2416_phi_phi_fu_101195_p4 = data_2346_V_read.read();
        } else {
            ap_phi_mux_data_2346_V_read2416_phi_phi_fu_101195_p4 = ap_phi_reg_pp0_iter0_data_2346_V_read2416_phi_reg_101191.read();
        }
    } else {
        ap_phi_mux_data_2346_V_read2416_phi_phi_fu_101195_p4 = ap_phi_reg_pp0_iter0_data_2346_V_read2416_phi_reg_101191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_58727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_58727_p6 = data_2346_V_read2416_phi_reg_101191.read();
    } else {
        ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_58727_p6 = data_2346_V_read2416_rewind_reg_58723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2347_V_read2417_phi_phi_fu_101208_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2347_V_read2417_phi_phi_fu_101208_p4 = ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_58741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2347_V_read2417_phi_phi_fu_101208_p4 = data_2347_V_read.read();
        } else {
            ap_phi_mux_data_2347_V_read2417_phi_phi_fu_101208_p4 = ap_phi_reg_pp0_iter0_data_2347_V_read2417_phi_reg_101204.read();
        }
    } else {
        ap_phi_mux_data_2347_V_read2417_phi_phi_fu_101208_p4 = ap_phi_reg_pp0_iter0_data_2347_V_read2417_phi_reg_101204.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_58741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_58741_p6 = data_2347_V_read2417_phi_reg_101204.read();
    } else {
        ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_58741_p6 = data_2347_V_read2417_rewind_reg_58737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2348_V_read2418_phi_phi_fu_101221_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2348_V_read2418_phi_phi_fu_101221_p4 = ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_58755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2348_V_read2418_phi_phi_fu_101221_p4 = data_2348_V_read.read();
        } else {
            ap_phi_mux_data_2348_V_read2418_phi_phi_fu_101221_p4 = ap_phi_reg_pp0_iter0_data_2348_V_read2418_phi_reg_101217.read();
        }
    } else {
        ap_phi_mux_data_2348_V_read2418_phi_phi_fu_101221_p4 = ap_phi_reg_pp0_iter0_data_2348_V_read2418_phi_reg_101217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_58755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_58755_p6 = data_2348_V_read2418_phi_reg_101217.read();
    } else {
        ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_58755_p6 = data_2348_V_read2418_rewind_reg_58751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2349_V_read2419_phi_phi_fu_101234_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2349_V_read2419_phi_phi_fu_101234_p4 = ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_58769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2349_V_read2419_phi_phi_fu_101234_p4 = data_2349_V_read.read();
        } else {
            ap_phi_mux_data_2349_V_read2419_phi_phi_fu_101234_p4 = ap_phi_reg_pp0_iter0_data_2349_V_read2419_phi_reg_101230.read();
        }
    } else {
        ap_phi_mux_data_2349_V_read2419_phi_phi_fu_101234_p4 = ap_phi_reg_pp0_iter0_data_2349_V_read2419_phi_reg_101230.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_58769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_58769_p6 = data_2349_V_read2419_phi_reg_101230.read();
    } else {
        ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_58769_p6 = data_2349_V_read2419_rewind_reg_58765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_234_V_read304_phi_phi_fu_73739_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_234_V_read304_phi_phi_fu_73739_p4 = ap_phi_mux_data_234_V_read304_rewind_phi_fu_29159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_234_V_read304_phi_phi_fu_73739_p4 = data_234_V_read.read();
        } else {
            ap_phi_mux_data_234_V_read304_phi_phi_fu_73739_p4 = ap_phi_reg_pp0_iter0_data_234_V_read304_phi_reg_73735.read();
        }
    } else {
        ap_phi_mux_data_234_V_read304_phi_phi_fu_73739_p4 = ap_phi_reg_pp0_iter0_data_234_V_read304_phi_reg_73735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_234_V_read304_rewind_phi_fu_29159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_234_V_read304_rewind_phi_fu_29159_p6 = data_234_V_read304_phi_reg_73735.read();
    } else {
        ap_phi_mux_data_234_V_read304_rewind_phi_fu_29159_p6 = data_234_V_read304_rewind_reg_29155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2350_V_read2420_phi_phi_fu_101247_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2350_V_read2420_phi_phi_fu_101247_p4 = ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_58783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2350_V_read2420_phi_phi_fu_101247_p4 = data_2350_V_read.read();
        } else {
            ap_phi_mux_data_2350_V_read2420_phi_phi_fu_101247_p4 = ap_phi_reg_pp0_iter0_data_2350_V_read2420_phi_reg_101243.read();
        }
    } else {
        ap_phi_mux_data_2350_V_read2420_phi_phi_fu_101247_p4 = ap_phi_reg_pp0_iter0_data_2350_V_read2420_phi_reg_101243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_58783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_58783_p6 = data_2350_V_read2420_phi_reg_101243.read();
    } else {
        ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_58783_p6 = data_2350_V_read2420_rewind_reg_58779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2351_V_read2421_phi_phi_fu_101260_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2351_V_read2421_phi_phi_fu_101260_p4 = ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_58797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2351_V_read2421_phi_phi_fu_101260_p4 = data_2351_V_read.read();
        } else {
            ap_phi_mux_data_2351_V_read2421_phi_phi_fu_101260_p4 = ap_phi_reg_pp0_iter0_data_2351_V_read2421_phi_reg_101256.read();
        }
    } else {
        ap_phi_mux_data_2351_V_read2421_phi_phi_fu_101260_p4 = ap_phi_reg_pp0_iter0_data_2351_V_read2421_phi_reg_101256.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_58797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_58797_p6 = data_2351_V_read2421_phi_reg_101256.read();
    } else {
        ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_58797_p6 = data_2351_V_read2421_rewind_reg_58793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2352_V_read2422_phi_phi_fu_101273_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2352_V_read2422_phi_phi_fu_101273_p4 = ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_58811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2352_V_read2422_phi_phi_fu_101273_p4 = data_2352_V_read.read();
        } else {
            ap_phi_mux_data_2352_V_read2422_phi_phi_fu_101273_p4 = ap_phi_reg_pp0_iter0_data_2352_V_read2422_phi_reg_101269.read();
        }
    } else {
        ap_phi_mux_data_2352_V_read2422_phi_phi_fu_101273_p4 = ap_phi_reg_pp0_iter0_data_2352_V_read2422_phi_reg_101269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_58811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_58811_p6 = data_2352_V_read2422_phi_reg_101269.read();
    } else {
        ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_58811_p6 = data_2352_V_read2422_rewind_reg_58807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2353_V_read2423_phi_phi_fu_101286_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2353_V_read2423_phi_phi_fu_101286_p4 = ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_58825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2353_V_read2423_phi_phi_fu_101286_p4 = data_2353_V_read.read();
        } else {
            ap_phi_mux_data_2353_V_read2423_phi_phi_fu_101286_p4 = ap_phi_reg_pp0_iter0_data_2353_V_read2423_phi_reg_101282.read();
        }
    } else {
        ap_phi_mux_data_2353_V_read2423_phi_phi_fu_101286_p4 = ap_phi_reg_pp0_iter0_data_2353_V_read2423_phi_reg_101282.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_58825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_58825_p6 = data_2353_V_read2423_phi_reg_101282.read();
    } else {
        ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_58825_p6 = data_2353_V_read2423_rewind_reg_58821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2354_V_read2424_phi_phi_fu_101299_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2354_V_read2424_phi_phi_fu_101299_p4 = ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_58839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2354_V_read2424_phi_phi_fu_101299_p4 = data_2354_V_read.read();
        } else {
            ap_phi_mux_data_2354_V_read2424_phi_phi_fu_101299_p4 = ap_phi_reg_pp0_iter0_data_2354_V_read2424_phi_reg_101295.read();
        }
    } else {
        ap_phi_mux_data_2354_V_read2424_phi_phi_fu_101299_p4 = ap_phi_reg_pp0_iter0_data_2354_V_read2424_phi_reg_101295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_58839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_58839_p6 = data_2354_V_read2424_phi_reg_101295.read();
    } else {
        ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_58839_p6 = data_2354_V_read2424_rewind_reg_58835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2355_V_read2425_phi_phi_fu_101312_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2355_V_read2425_phi_phi_fu_101312_p4 = ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_58853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2355_V_read2425_phi_phi_fu_101312_p4 = data_2355_V_read.read();
        } else {
            ap_phi_mux_data_2355_V_read2425_phi_phi_fu_101312_p4 = ap_phi_reg_pp0_iter0_data_2355_V_read2425_phi_reg_101308.read();
        }
    } else {
        ap_phi_mux_data_2355_V_read2425_phi_phi_fu_101312_p4 = ap_phi_reg_pp0_iter0_data_2355_V_read2425_phi_reg_101308.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_58853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_58853_p6 = data_2355_V_read2425_phi_reg_101308.read();
    } else {
        ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_58853_p6 = data_2355_V_read2425_rewind_reg_58849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2356_V_read2426_phi_phi_fu_101325_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2356_V_read2426_phi_phi_fu_101325_p4 = ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_58867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2356_V_read2426_phi_phi_fu_101325_p4 = data_2356_V_read.read();
        } else {
            ap_phi_mux_data_2356_V_read2426_phi_phi_fu_101325_p4 = ap_phi_reg_pp0_iter0_data_2356_V_read2426_phi_reg_101321.read();
        }
    } else {
        ap_phi_mux_data_2356_V_read2426_phi_phi_fu_101325_p4 = ap_phi_reg_pp0_iter0_data_2356_V_read2426_phi_reg_101321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_58867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_58867_p6 = data_2356_V_read2426_phi_reg_101321.read();
    } else {
        ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_58867_p6 = data_2356_V_read2426_rewind_reg_58863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2357_V_read2427_phi_phi_fu_101338_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2357_V_read2427_phi_phi_fu_101338_p4 = ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_58881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2357_V_read2427_phi_phi_fu_101338_p4 = data_2357_V_read.read();
        } else {
            ap_phi_mux_data_2357_V_read2427_phi_phi_fu_101338_p4 = ap_phi_reg_pp0_iter0_data_2357_V_read2427_phi_reg_101334.read();
        }
    } else {
        ap_phi_mux_data_2357_V_read2427_phi_phi_fu_101338_p4 = ap_phi_reg_pp0_iter0_data_2357_V_read2427_phi_reg_101334.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_58881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_58881_p6 = data_2357_V_read2427_phi_reg_101334.read();
    } else {
        ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_58881_p6 = data_2357_V_read2427_rewind_reg_58877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2358_V_read2428_phi_phi_fu_101351_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2358_V_read2428_phi_phi_fu_101351_p4 = ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_58895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2358_V_read2428_phi_phi_fu_101351_p4 = data_2358_V_read.read();
        } else {
            ap_phi_mux_data_2358_V_read2428_phi_phi_fu_101351_p4 = ap_phi_reg_pp0_iter0_data_2358_V_read2428_phi_reg_101347.read();
        }
    } else {
        ap_phi_mux_data_2358_V_read2428_phi_phi_fu_101351_p4 = ap_phi_reg_pp0_iter0_data_2358_V_read2428_phi_reg_101347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_58895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_58895_p6 = data_2358_V_read2428_phi_reg_101347.read();
    } else {
        ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_58895_p6 = data_2358_V_read2428_rewind_reg_58891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2359_V_read2429_phi_phi_fu_101364_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2359_V_read2429_phi_phi_fu_101364_p4 = ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_58909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2359_V_read2429_phi_phi_fu_101364_p4 = data_2359_V_read.read();
        } else {
            ap_phi_mux_data_2359_V_read2429_phi_phi_fu_101364_p4 = ap_phi_reg_pp0_iter0_data_2359_V_read2429_phi_reg_101360.read();
        }
    } else {
        ap_phi_mux_data_2359_V_read2429_phi_phi_fu_101364_p4 = ap_phi_reg_pp0_iter0_data_2359_V_read2429_phi_reg_101360.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_58909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_58909_p6 = data_2359_V_read2429_phi_reg_101360.read();
    } else {
        ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_58909_p6 = data_2359_V_read2429_rewind_reg_58905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_235_V_read305_phi_phi_fu_73752_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_235_V_read305_phi_phi_fu_73752_p4 = ap_phi_mux_data_235_V_read305_rewind_phi_fu_29173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_235_V_read305_phi_phi_fu_73752_p4 = data_235_V_read.read();
        } else {
            ap_phi_mux_data_235_V_read305_phi_phi_fu_73752_p4 = ap_phi_reg_pp0_iter0_data_235_V_read305_phi_reg_73748.read();
        }
    } else {
        ap_phi_mux_data_235_V_read305_phi_phi_fu_73752_p4 = ap_phi_reg_pp0_iter0_data_235_V_read305_phi_reg_73748.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_235_V_read305_rewind_phi_fu_29173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_235_V_read305_rewind_phi_fu_29173_p6 = data_235_V_read305_phi_reg_73748.read();
    } else {
        ap_phi_mux_data_235_V_read305_rewind_phi_fu_29173_p6 = data_235_V_read305_rewind_reg_29169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2360_V_read2430_phi_phi_fu_101377_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2360_V_read2430_phi_phi_fu_101377_p4 = ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_58923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2360_V_read2430_phi_phi_fu_101377_p4 = data_2360_V_read.read();
        } else {
            ap_phi_mux_data_2360_V_read2430_phi_phi_fu_101377_p4 = ap_phi_reg_pp0_iter0_data_2360_V_read2430_phi_reg_101373.read();
        }
    } else {
        ap_phi_mux_data_2360_V_read2430_phi_phi_fu_101377_p4 = ap_phi_reg_pp0_iter0_data_2360_V_read2430_phi_reg_101373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_58923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_58923_p6 = data_2360_V_read2430_phi_reg_101373.read();
    } else {
        ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_58923_p6 = data_2360_V_read2430_rewind_reg_58919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2361_V_read2431_phi_phi_fu_101390_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2361_V_read2431_phi_phi_fu_101390_p4 = ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_58937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2361_V_read2431_phi_phi_fu_101390_p4 = data_2361_V_read.read();
        } else {
            ap_phi_mux_data_2361_V_read2431_phi_phi_fu_101390_p4 = ap_phi_reg_pp0_iter0_data_2361_V_read2431_phi_reg_101386.read();
        }
    } else {
        ap_phi_mux_data_2361_V_read2431_phi_phi_fu_101390_p4 = ap_phi_reg_pp0_iter0_data_2361_V_read2431_phi_reg_101386.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_58937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_58937_p6 = data_2361_V_read2431_phi_reg_101386.read();
    } else {
        ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_58937_p6 = data_2361_V_read2431_rewind_reg_58933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2362_V_read2432_phi_phi_fu_101403_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2362_V_read2432_phi_phi_fu_101403_p4 = ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_58951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2362_V_read2432_phi_phi_fu_101403_p4 = data_2362_V_read.read();
        } else {
            ap_phi_mux_data_2362_V_read2432_phi_phi_fu_101403_p4 = ap_phi_reg_pp0_iter0_data_2362_V_read2432_phi_reg_101399.read();
        }
    } else {
        ap_phi_mux_data_2362_V_read2432_phi_phi_fu_101403_p4 = ap_phi_reg_pp0_iter0_data_2362_V_read2432_phi_reg_101399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_58951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_58951_p6 = data_2362_V_read2432_phi_reg_101399.read();
    } else {
        ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_58951_p6 = data_2362_V_read2432_rewind_reg_58947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2363_V_read2433_phi_phi_fu_101416_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2363_V_read2433_phi_phi_fu_101416_p4 = ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_58965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2363_V_read2433_phi_phi_fu_101416_p4 = data_2363_V_read.read();
        } else {
            ap_phi_mux_data_2363_V_read2433_phi_phi_fu_101416_p4 = ap_phi_reg_pp0_iter0_data_2363_V_read2433_phi_reg_101412.read();
        }
    } else {
        ap_phi_mux_data_2363_V_read2433_phi_phi_fu_101416_p4 = ap_phi_reg_pp0_iter0_data_2363_V_read2433_phi_reg_101412.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_58965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_58965_p6 = data_2363_V_read2433_phi_reg_101412.read();
    } else {
        ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_58965_p6 = data_2363_V_read2433_rewind_reg_58961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2364_V_read2434_phi_phi_fu_101429_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2364_V_read2434_phi_phi_fu_101429_p4 = ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_58979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2364_V_read2434_phi_phi_fu_101429_p4 = data_2364_V_read.read();
        } else {
            ap_phi_mux_data_2364_V_read2434_phi_phi_fu_101429_p4 = ap_phi_reg_pp0_iter0_data_2364_V_read2434_phi_reg_101425.read();
        }
    } else {
        ap_phi_mux_data_2364_V_read2434_phi_phi_fu_101429_p4 = ap_phi_reg_pp0_iter0_data_2364_V_read2434_phi_reg_101425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_58979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_58979_p6 = data_2364_V_read2434_phi_reg_101425.read();
    } else {
        ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_58979_p6 = data_2364_V_read2434_rewind_reg_58975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2365_V_read2435_phi_phi_fu_101442_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2365_V_read2435_phi_phi_fu_101442_p4 = ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_58993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2365_V_read2435_phi_phi_fu_101442_p4 = data_2365_V_read.read();
        } else {
            ap_phi_mux_data_2365_V_read2435_phi_phi_fu_101442_p4 = ap_phi_reg_pp0_iter0_data_2365_V_read2435_phi_reg_101438.read();
        }
    } else {
        ap_phi_mux_data_2365_V_read2435_phi_phi_fu_101442_p4 = ap_phi_reg_pp0_iter0_data_2365_V_read2435_phi_reg_101438.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_58993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_58993_p6 = data_2365_V_read2435_phi_reg_101438.read();
    } else {
        ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_58993_p6 = data_2365_V_read2435_rewind_reg_58989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2366_V_read2436_phi_phi_fu_101455_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2366_V_read2436_phi_phi_fu_101455_p4 = ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_59007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2366_V_read2436_phi_phi_fu_101455_p4 = data_2366_V_read.read();
        } else {
            ap_phi_mux_data_2366_V_read2436_phi_phi_fu_101455_p4 = ap_phi_reg_pp0_iter0_data_2366_V_read2436_phi_reg_101451.read();
        }
    } else {
        ap_phi_mux_data_2366_V_read2436_phi_phi_fu_101455_p4 = ap_phi_reg_pp0_iter0_data_2366_V_read2436_phi_reg_101451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_59007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_59007_p6 = data_2366_V_read2436_phi_reg_101451.read();
    } else {
        ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_59007_p6 = data_2366_V_read2436_rewind_reg_59003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2367_V_read2437_phi_phi_fu_101468_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2367_V_read2437_phi_phi_fu_101468_p4 = ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_59021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2367_V_read2437_phi_phi_fu_101468_p4 = data_2367_V_read.read();
        } else {
            ap_phi_mux_data_2367_V_read2437_phi_phi_fu_101468_p4 = ap_phi_reg_pp0_iter0_data_2367_V_read2437_phi_reg_101464.read();
        }
    } else {
        ap_phi_mux_data_2367_V_read2437_phi_phi_fu_101468_p4 = ap_phi_reg_pp0_iter0_data_2367_V_read2437_phi_reg_101464.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_59021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_59021_p6 = data_2367_V_read2437_phi_reg_101464.read();
    } else {
        ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_59021_p6 = data_2367_V_read2437_rewind_reg_59017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2368_V_read2438_phi_phi_fu_101481_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2368_V_read2438_phi_phi_fu_101481_p4 = ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_59035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2368_V_read2438_phi_phi_fu_101481_p4 = data_2368_V_read.read();
        } else {
            ap_phi_mux_data_2368_V_read2438_phi_phi_fu_101481_p4 = ap_phi_reg_pp0_iter0_data_2368_V_read2438_phi_reg_101477.read();
        }
    } else {
        ap_phi_mux_data_2368_V_read2438_phi_phi_fu_101481_p4 = ap_phi_reg_pp0_iter0_data_2368_V_read2438_phi_reg_101477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_59035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_59035_p6 = data_2368_V_read2438_phi_reg_101477.read();
    } else {
        ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_59035_p6 = data_2368_V_read2438_rewind_reg_59031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2369_V_read2439_phi_phi_fu_101494_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2369_V_read2439_phi_phi_fu_101494_p4 = ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_59049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2369_V_read2439_phi_phi_fu_101494_p4 = data_2369_V_read.read();
        } else {
            ap_phi_mux_data_2369_V_read2439_phi_phi_fu_101494_p4 = ap_phi_reg_pp0_iter0_data_2369_V_read2439_phi_reg_101490.read();
        }
    } else {
        ap_phi_mux_data_2369_V_read2439_phi_phi_fu_101494_p4 = ap_phi_reg_pp0_iter0_data_2369_V_read2439_phi_reg_101490.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_59049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_59049_p6 = data_2369_V_read2439_phi_reg_101490.read();
    } else {
        ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_59049_p6 = data_2369_V_read2439_rewind_reg_59045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_236_V_read306_phi_phi_fu_73765_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_236_V_read306_phi_phi_fu_73765_p4 = ap_phi_mux_data_236_V_read306_rewind_phi_fu_29187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_236_V_read306_phi_phi_fu_73765_p4 = data_236_V_read.read();
        } else {
            ap_phi_mux_data_236_V_read306_phi_phi_fu_73765_p4 = ap_phi_reg_pp0_iter0_data_236_V_read306_phi_reg_73761.read();
        }
    } else {
        ap_phi_mux_data_236_V_read306_phi_phi_fu_73765_p4 = ap_phi_reg_pp0_iter0_data_236_V_read306_phi_reg_73761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_236_V_read306_rewind_phi_fu_29187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_236_V_read306_rewind_phi_fu_29187_p6 = data_236_V_read306_phi_reg_73761.read();
    } else {
        ap_phi_mux_data_236_V_read306_rewind_phi_fu_29187_p6 = data_236_V_read306_rewind_reg_29183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2370_V_read2440_phi_phi_fu_101507_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2370_V_read2440_phi_phi_fu_101507_p4 = ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_59063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2370_V_read2440_phi_phi_fu_101507_p4 = data_2370_V_read.read();
        } else {
            ap_phi_mux_data_2370_V_read2440_phi_phi_fu_101507_p4 = ap_phi_reg_pp0_iter0_data_2370_V_read2440_phi_reg_101503.read();
        }
    } else {
        ap_phi_mux_data_2370_V_read2440_phi_phi_fu_101507_p4 = ap_phi_reg_pp0_iter0_data_2370_V_read2440_phi_reg_101503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_59063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_59063_p6 = data_2370_V_read2440_phi_reg_101503.read();
    } else {
        ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_59063_p6 = data_2370_V_read2440_rewind_reg_59059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2371_V_read2441_phi_phi_fu_101520_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2371_V_read2441_phi_phi_fu_101520_p4 = ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_59077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2371_V_read2441_phi_phi_fu_101520_p4 = data_2371_V_read.read();
        } else {
            ap_phi_mux_data_2371_V_read2441_phi_phi_fu_101520_p4 = ap_phi_reg_pp0_iter0_data_2371_V_read2441_phi_reg_101516.read();
        }
    } else {
        ap_phi_mux_data_2371_V_read2441_phi_phi_fu_101520_p4 = ap_phi_reg_pp0_iter0_data_2371_V_read2441_phi_reg_101516.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_59077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_59077_p6 = data_2371_V_read2441_phi_reg_101516.read();
    } else {
        ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_59077_p6 = data_2371_V_read2441_rewind_reg_59073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2372_V_read2442_phi_phi_fu_101533_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2372_V_read2442_phi_phi_fu_101533_p4 = ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_59091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2372_V_read2442_phi_phi_fu_101533_p4 = data_2372_V_read.read();
        } else {
            ap_phi_mux_data_2372_V_read2442_phi_phi_fu_101533_p4 = ap_phi_reg_pp0_iter0_data_2372_V_read2442_phi_reg_101529.read();
        }
    } else {
        ap_phi_mux_data_2372_V_read2442_phi_phi_fu_101533_p4 = ap_phi_reg_pp0_iter0_data_2372_V_read2442_phi_reg_101529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_59091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_59091_p6 = data_2372_V_read2442_phi_reg_101529.read();
    } else {
        ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_59091_p6 = data_2372_V_read2442_rewind_reg_59087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2373_V_read2443_phi_phi_fu_101546_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2373_V_read2443_phi_phi_fu_101546_p4 = ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_59105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2373_V_read2443_phi_phi_fu_101546_p4 = data_2373_V_read.read();
        } else {
            ap_phi_mux_data_2373_V_read2443_phi_phi_fu_101546_p4 = ap_phi_reg_pp0_iter0_data_2373_V_read2443_phi_reg_101542.read();
        }
    } else {
        ap_phi_mux_data_2373_V_read2443_phi_phi_fu_101546_p4 = ap_phi_reg_pp0_iter0_data_2373_V_read2443_phi_reg_101542.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_59105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_59105_p6 = data_2373_V_read2443_phi_reg_101542.read();
    } else {
        ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_59105_p6 = data_2373_V_read2443_rewind_reg_59101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2374_V_read2444_phi_phi_fu_101559_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2374_V_read2444_phi_phi_fu_101559_p4 = ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_59119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2374_V_read2444_phi_phi_fu_101559_p4 = data_2374_V_read.read();
        } else {
            ap_phi_mux_data_2374_V_read2444_phi_phi_fu_101559_p4 = ap_phi_reg_pp0_iter0_data_2374_V_read2444_phi_reg_101555.read();
        }
    } else {
        ap_phi_mux_data_2374_V_read2444_phi_phi_fu_101559_p4 = ap_phi_reg_pp0_iter0_data_2374_V_read2444_phi_reg_101555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_59119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_59119_p6 = data_2374_V_read2444_phi_reg_101555.read();
    } else {
        ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_59119_p6 = data_2374_V_read2444_rewind_reg_59115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2375_V_read2445_phi_phi_fu_101572_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2375_V_read2445_phi_phi_fu_101572_p4 = ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_59133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2375_V_read2445_phi_phi_fu_101572_p4 = data_2375_V_read.read();
        } else {
            ap_phi_mux_data_2375_V_read2445_phi_phi_fu_101572_p4 = ap_phi_reg_pp0_iter0_data_2375_V_read2445_phi_reg_101568.read();
        }
    } else {
        ap_phi_mux_data_2375_V_read2445_phi_phi_fu_101572_p4 = ap_phi_reg_pp0_iter0_data_2375_V_read2445_phi_reg_101568.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_59133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_59133_p6 = data_2375_V_read2445_phi_reg_101568.read();
    } else {
        ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_59133_p6 = data_2375_V_read2445_rewind_reg_59129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2376_V_read2446_phi_phi_fu_101585_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2376_V_read2446_phi_phi_fu_101585_p4 = ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_59147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2376_V_read2446_phi_phi_fu_101585_p4 = data_2376_V_read.read();
        } else {
            ap_phi_mux_data_2376_V_read2446_phi_phi_fu_101585_p4 = ap_phi_reg_pp0_iter0_data_2376_V_read2446_phi_reg_101581.read();
        }
    } else {
        ap_phi_mux_data_2376_V_read2446_phi_phi_fu_101585_p4 = ap_phi_reg_pp0_iter0_data_2376_V_read2446_phi_reg_101581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_59147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_59147_p6 = data_2376_V_read2446_phi_reg_101581.read();
    } else {
        ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_59147_p6 = data_2376_V_read2446_rewind_reg_59143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2377_V_read2447_phi_phi_fu_101598_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2377_V_read2447_phi_phi_fu_101598_p4 = ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_59161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2377_V_read2447_phi_phi_fu_101598_p4 = data_2377_V_read.read();
        } else {
            ap_phi_mux_data_2377_V_read2447_phi_phi_fu_101598_p4 = ap_phi_reg_pp0_iter0_data_2377_V_read2447_phi_reg_101594.read();
        }
    } else {
        ap_phi_mux_data_2377_V_read2447_phi_phi_fu_101598_p4 = ap_phi_reg_pp0_iter0_data_2377_V_read2447_phi_reg_101594.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_59161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_59161_p6 = data_2377_V_read2447_phi_reg_101594.read();
    } else {
        ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_59161_p6 = data_2377_V_read2447_rewind_reg_59157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2378_V_read2448_phi_phi_fu_101611_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2378_V_read2448_phi_phi_fu_101611_p4 = ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_59175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2378_V_read2448_phi_phi_fu_101611_p4 = data_2378_V_read.read();
        } else {
            ap_phi_mux_data_2378_V_read2448_phi_phi_fu_101611_p4 = ap_phi_reg_pp0_iter0_data_2378_V_read2448_phi_reg_101607.read();
        }
    } else {
        ap_phi_mux_data_2378_V_read2448_phi_phi_fu_101611_p4 = ap_phi_reg_pp0_iter0_data_2378_V_read2448_phi_reg_101607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_59175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_59175_p6 = data_2378_V_read2448_phi_reg_101607.read();
    } else {
        ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_59175_p6 = data_2378_V_read2448_rewind_reg_59171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2379_V_read2449_phi_phi_fu_101624_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2379_V_read2449_phi_phi_fu_101624_p4 = ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_59189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2379_V_read2449_phi_phi_fu_101624_p4 = data_2379_V_read.read();
        } else {
            ap_phi_mux_data_2379_V_read2449_phi_phi_fu_101624_p4 = ap_phi_reg_pp0_iter0_data_2379_V_read2449_phi_reg_101620.read();
        }
    } else {
        ap_phi_mux_data_2379_V_read2449_phi_phi_fu_101624_p4 = ap_phi_reg_pp0_iter0_data_2379_V_read2449_phi_reg_101620.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_59189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_59189_p6 = data_2379_V_read2449_phi_reg_101620.read();
    } else {
        ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_59189_p6 = data_2379_V_read2449_rewind_reg_59185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_237_V_read307_phi_phi_fu_73778_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_237_V_read307_phi_phi_fu_73778_p4 = ap_phi_mux_data_237_V_read307_rewind_phi_fu_29201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_237_V_read307_phi_phi_fu_73778_p4 = data_237_V_read.read();
        } else {
            ap_phi_mux_data_237_V_read307_phi_phi_fu_73778_p4 = ap_phi_reg_pp0_iter0_data_237_V_read307_phi_reg_73774.read();
        }
    } else {
        ap_phi_mux_data_237_V_read307_phi_phi_fu_73778_p4 = ap_phi_reg_pp0_iter0_data_237_V_read307_phi_reg_73774.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_237_V_read307_rewind_phi_fu_29201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_237_V_read307_rewind_phi_fu_29201_p6 = data_237_V_read307_phi_reg_73774.read();
    } else {
        ap_phi_mux_data_237_V_read307_rewind_phi_fu_29201_p6 = data_237_V_read307_rewind_reg_29197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2380_V_read2450_phi_phi_fu_101637_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2380_V_read2450_phi_phi_fu_101637_p4 = ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_59203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2380_V_read2450_phi_phi_fu_101637_p4 = data_2380_V_read.read();
        } else {
            ap_phi_mux_data_2380_V_read2450_phi_phi_fu_101637_p4 = ap_phi_reg_pp0_iter0_data_2380_V_read2450_phi_reg_101633.read();
        }
    } else {
        ap_phi_mux_data_2380_V_read2450_phi_phi_fu_101637_p4 = ap_phi_reg_pp0_iter0_data_2380_V_read2450_phi_reg_101633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_59203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_59203_p6 = data_2380_V_read2450_phi_reg_101633.read();
    } else {
        ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_59203_p6 = data_2380_V_read2450_rewind_reg_59199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2381_V_read2451_phi_phi_fu_101650_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2381_V_read2451_phi_phi_fu_101650_p4 = ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_59217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2381_V_read2451_phi_phi_fu_101650_p4 = data_2381_V_read.read();
        } else {
            ap_phi_mux_data_2381_V_read2451_phi_phi_fu_101650_p4 = ap_phi_reg_pp0_iter0_data_2381_V_read2451_phi_reg_101646.read();
        }
    } else {
        ap_phi_mux_data_2381_V_read2451_phi_phi_fu_101650_p4 = ap_phi_reg_pp0_iter0_data_2381_V_read2451_phi_reg_101646.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_59217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_59217_p6 = data_2381_V_read2451_phi_reg_101646.read();
    } else {
        ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_59217_p6 = data_2381_V_read2451_rewind_reg_59213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2382_V_read2452_phi_phi_fu_101663_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2382_V_read2452_phi_phi_fu_101663_p4 = ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_59231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2382_V_read2452_phi_phi_fu_101663_p4 = data_2382_V_read.read();
        } else {
            ap_phi_mux_data_2382_V_read2452_phi_phi_fu_101663_p4 = ap_phi_reg_pp0_iter0_data_2382_V_read2452_phi_reg_101659.read();
        }
    } else {
        ap_phi_mux_data_2382_V_read2452_phi_phi_fu_101663_p4 = ap_phi_reg_pp0_iter0_data_2382_V_read2452_phi_reg_101659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_59231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_59231_p6 = data_2382_V_read2452_phi_reg_101659.read();
    } else {
        ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_59231_p6 = data_2382_V_read2452_rewind_reg_59227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2383_V_read2453_phi_phi_fu_101676_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2383_V_read2453_phi_phi_fu_101676_p4 = ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_59245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2383_V_read2453_phi_phi_fu_101676_p4 = data_2383_V_read.read();
        } else {
            ap_phi_mux_data_2383_V_read2453_phi_phi_fu_101676_p4 = ap_phi_reg_pp0_iter0_data_2383_V_read2453_phi_reg_101672.read();
        }
    } else {
        ap_phi_mux_data_2383_V_read2453_phi_phi_fu_101676_p4 = ap_phi_reg_pp0_iter0_data_2383_V_read2453_phi_reg_101672.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_59245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_59245_p6 = data_2383_V_read2453_phi_reg_101672.read();
    } else {
        ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_59245_p6 = data_2383_V_read2453_rewind_reg_59241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2384_V_read2454_phi_phi_fu_101689_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2384_V_read2454_phi_phi_fu_101689_p4 = ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_59259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2384_V_read2454_phi_phi_fu_101689_p4 = data_2384_V_read.read();
        } else {
            ap_phi_mux_data_2384_V_read2454_phi_phi_fu_101689_p4 = ap_phi_reg_pp0_iter0_data_2384_V_read2454_phi_reg_101685.read();
        }
    } else {
        ap_phi_mux_data_2384_V_read2454_phi_phi_fu_101689_p4 = ap_phi_reg_pp0_iter0_data_2384_V_read2454_phi_reg_101685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_59259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_59259_p6 = data_2384_V_read2454_phi_reg_101685.read();
    } else {
        ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_59259_p6 = data_2384_V_read2454_rewind_reg_59255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2385_V_read2455_phi_phi_fu_101702_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2385_V_read2455_phi_phi_fu_101702_p4 = ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_59273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2385_V_read2455_phi_phi_fu_101702_p4 = data_2385_V_read.read();
        } else {
            ap_phi_mux_data_2385_V_read2455_phi_phi_fu_101702_p4 = ap_phi_reg_pp0_iter0_data_2385_V_read2455_phi_reg_101698.read();
        }
    } else {
        ap_phi_mux_data_2385_V_read2455_phi_phi_fu_101702_p4 = ap_phi_reg_pp0_iter0_data_2385_V_read2455_phi_reg_101698.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_59273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_59273_p6 = data_2385_V_read2455_phi_reg_101698.read();
    } else {
        ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_59273_p6 = data_2385_V_read2455_rewind_reg_59269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2386_V_read2456_phi_phi_fu_101715_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2386_V_read2456_phi_phi_fu_101715_p4 = ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_59287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2386_V_read2456_phi_phi_fu_101715_p4 = data_2386_V_read.read();
        } else {
            ap_phi_mux_data_2386_V_read2456_phi_phi_fu_101715_p4 = ap_phi_reg_pp0_iter0_data_2386_V_read2456_phi_reg_101711.read();
        }
    } else {
        ap_phi_mux_data_2386_V_read2456_phi_phi_fu_101715_p4 = ap_phi_reg_pp0_iter0_data_2386_V_read2456_phi_reg_101711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_59287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_59287_p6 = data_2386_V_read2456_phi_reg_101711.read();
    } else {
        ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_59287_p6 = data_2386_V_read2456_rewind_reg_59283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2387_V_read2457_phi_phi_fu_101728_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2387_V_read2457_phi_phi_fu_101728_p4 = ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_59301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2387_V_read2457_phi_phi_fu_101728_p4 = data_2387_V_read.read();
        } else {
            ap_phi_mux_data_2387_V_read2457_phi_phi_fu_101728_p4 = ap_phi_reg_pp0_iter0_data_2387_V_read2457_phi_reg_101724.read();
        }
    } else {
        ap_phi_mux_data_2387_V_read2457_phi_phi_fu_101728_p4 = ap_phi_reg_pp0_iter0_data_2387_V_read2457_phi_reg_101724.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_59301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_59301_p6 = data_2387_V_read2457_phi_reg_101724.read();
    } else {
        ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_59301_p6 = data_2387_V_read2457_rewind_reg_59297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2388_V_read2458_phi_phi_fu_101741_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2388_V_read2458_phi_phi_fu_101741_p4 = ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_59315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2388_V_read2458_phi_phi_fu_101741_p4 = data_2388_V_read.read();
        } else {
            ap_phi_mux_data_2388_V_read2458_phi_phi_fu_101741_p4 = ap_phi_reg_pp0_iter0_data_2388_V_read2458_phi_reg_101737.read();
        }
    } else {
        ap_phi_mux_data_2388_V_read2458_phi_phi_fu_101741_p4 = ap_phi_reg_pp0_iter0_data_2388_V_read2458_phi_reg_101737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_59315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_59315_p6 = data_2388_V_read2458_phi_reg_101737.read();
    } else {
        ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_59315_p6 = data_2388_V_read2458_rewind_reg_59311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2389_V_read2459_phi_phi_fu_101754_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2389_V_read2459_phi_phi_fu_101754_p4 = ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_59329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2389_V_read2459_phi_phi_fu_101754_p4 = data_2389_V_read.read();
        } else {
            ap_phi_mux_data_2389_V_read2459_phi_phi_fu_101754_p4 = ap_phi_reg_pp0_iter0_data_2389_V_read2459_phi_reg_101750.read();
        }
    } else {
        ap_phi_mux_data_2389_V_read2459_phi_phi_fu_101754_p4 = ap_phi_reg_pp0_iter0_data_2389_V_read2459_phi_reg_101750.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_59329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_59329_p6 = data_2389_V_read2459_phi_reg_101750.read();
    } else {
        ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_59329_p6 = data_2389_V_read2459_rewind_reg_59325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_238_V_read308_phi_phi_fu_73791_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_238_V_read308_phi_phi_fu_73791_p4 = ap_phi_mux_data_238_V_read308_rewind_phi_fu_29215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_238_V_read308_phi_phi_fu_73791_p4 = data_238_V_read.read();
        } else {
            ap_phi_mux_data_238_V_read308_phi_phi_fu_73791_p4 = ap_phi_reg_pp0_iter0_data_238_V_read308_phi_reg_73787.read();
        }
    } else {
        ap_phi_mux_data_238_V_read308_phi_phi_fu_73791_p4 = ap_phi_reg_pp0_iter0_data_238_V_read308_phi_reg_73787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_238_V_read308_rewind_phi_fu_29215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_238_V_read308_rewind_phi_fu_29215_p6 = data_238_V_read308_phi_reg_73787.read();
    } else {
        ap_phi_mux_data_238_V_read308_rewind_phi_fu_29215_p6 = data_238_V_read308_rewind_reg_29211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2390_V_read2460_phi_phi_fu_101767_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2390_V_read2460_phi_phi_fu_101767_p4 = ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_59343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2390_V_read2460_phi_phi_fu_101767_p4 = data_2390_V_read.read();
        } else {
            ap_phi_mux_data_2390_V_read2460_phi_phi_fu_101767_p4 = ap_phi_reg_pp0_iter0_data_2390_V_read2460_phi_reg_101763.read();
        }
    } else {
        ap_phi_mux_data_2390_V_read2460_phi_phi_fu_101767_p4 = ap_phi_reg_pp0_iter0_data_2390_V_read2460_phi_reg_101763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_59343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_59343_p6 = data_2390_V_read2460_phi_reg_101763.read();
    } else {
        ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_59343_p6 = data_2390_V_read2460_rewind_reg_59339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2391_V_read2461_phi_phi_fu_101780_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2391_V_read2461_phi_phi_fu_101780_p4 = ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_59357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2391_V_read2461_phi_phi_fu_101780_p4 = data_2391_V_read.read();
        } else {
            ap_phi_mux_data_2391_V_read2461_phi_phi_fu_101780_p4 = ap_phi_reg_pp0_iter0_data_2391_V_read2461_phi_reg_101776.read();
        }
    } else {
        ap_phi_mux_data_2391_V_read2461_phi_phi_fu_101780_p4 = ap_phi_reg_pp0_iter0_data_2391_V_read2461_phi_reg_101776.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_59357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_59357_p6 = data_2391_V_read2461_phi_reg_101776.read();
    } else {
        ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_59357_p6 = data_2391_V_read2461_rewind_reg_59353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2392_V_read2462_phi_phi_fu_101793_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2392_V_read2462_phi_phi_fu_101793_p4 = ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_59371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2392_V_read2462_phi_phi_fu_101793_p4 = data_2392_V_read.read();
        } else {
            ap_phi_mux_data_2392_V_read2462_phi_phi_fu_101793_p4 = ap_phi_reg_pp0_iter0_data_2392_V_read2462_phi_reg_101789.read();
        }
    } else {
        ap_phi_mux_data_2392_V_read2462_phi_phi_fu_101793_p4 = ap_phi_reg_pp0_iter0_data_2392_V_read2462_phi_reg_101789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_59371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_59371_p6 = data_2392_V_read2462_phi_reg_101789.read();
    } else {
        ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_59371_p6 = data_2392_V_read2462_rewind_reg_59367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2393_V_read2463_phi_phi_fu_101806_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2393_V_read2463_phi_phi_fu_101806_p4 = ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_59385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2393_V_read2463_phi_phi_fu_101806_p4 = data_2393_V_read.read();
        } else {
            ap_phi_mux_data_2393_V_read2463_phi_phi_fu_101806_p4 = ap_phi_reg_pp0_iter0_data_2393_V_read2463_phi_reg_101802.read();
        }
    } else {
        ap_phi_mux_data_2393_V_read2463_phi_phi_fu_101806_p4 = ap_phi_reg_pp0_iter0_data_2393_V_read2463_phi_reg_101802.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_59385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_59385_p6 = data_2393_V_read2463_phi_reg_101802.read();
    } else {
        ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_59385_p6 = data_2393_V_read2463_rewind_reg_59381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2394_V_read2464_phi_phi_fu_101819_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2394_V_read2464_phi_phi_fu_101819_p4 = ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_59399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2394_V_read2464_phi_phi_fu_101819_p4 = data_2394_V_read.read();
        } else {
            ap_phi_mux_data_2394_V_read2464_phi_phi_fu_101819_p4 = ap_phi_reg_pp0_iter0_data_2394_V_read2464_phi_reg_101815.read();
        }
    } else {
        ap_phi_mux_data_2394_V_read2464_phi_phi_fu_101819_p4 = ap_phi_reg_pp0_iter0_data_2394_V_read2464_phi_reg_101815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_59399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_59399_p6 = data_2394_V_read2464_phi_reg_101815.read();
    } else {
        ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_59399_p6 = data_2394_V_read2464_rewind_reg_59395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2395_V_read2465_phi_phi_fu_101832_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2395_V_read2465_phi_phi_fu_101832_p4 = ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_59413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2395_V_read2465_phi_phi_fu_101832_p4 = data_2395_V_read.read();
        } else {
            ap_phi_mux_data_2395_V_read2465_phi_phi_fu_101832_p4 = ap_phi_reg_pp0_iter0_data_2395_V_read2465_phi_reg_101828.read();
        }
    } else {
        ap_phi_mux_data_2395_V_read2465_phi_phi_fu_101832_p4 = ap_phi_reg_pp0_iter0_data_2395_V_read2465_phi_reg_101828.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_59413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_59413_p6 = data_2395_V_read2465_phi_reg_101828.read();
    } else {
        ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_59413_p6 = data_2395_V_read2465_rewind_reg_59409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2396_V_read2466_phi_phi_fu_101845_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2396_V_read2466_phi_phi_fu_101845_p4 = ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_59427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2396_V_read2466_phi_phi_fu_101845_p4 = data_2396_V_read.read();
        } else {
            ap_phi_mux_data_2396_V_read2466_phi_phi_fu_101845_p4 = ap_phi_reg_pp0_iter0_data_2396_V_read2466_phi_reg_101841.read();
        }
    } else {
        ap_phi_mux_data_2396_V_read2466_phi_phi_fu_101845_p4 = ap_phi_reg_pp0_iter0_data_2396_V_read2466_phi_reg_101841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_59427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_59427_p6 = data_2396_V_read2466_phi_reg_101841.read();
    } else {
        ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_59427_p6 = data_2396_V_read2466_rewind_reg_59423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2397_V_read2467_phi_phi_fu_101858_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2397_V_read2467_phi_phi_fu_101858_p4 = ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_59441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2397_V_read2467_phi_phi_fu_101858_p4 = data_2397_V_read.read();
        } else {
            ap_phi_mux_data_2397_V_read2467_phi_phi_fu_101858_p4 = ap_phi_reg_pp0_iter0_data_2397_V_read2467_phi_reg_101854.read();
        }
    } else {
        ap_phi_mux_data_2397_V_read2467_phi_phi_fu_101858_p4 = ap_phi_reg_pp0_iter0_data_2397_V_read2467_phi_reg_101854.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_59441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_59441_p6 = data_2397_V_read2467_phi_reg_101854.read();
    } else {
        ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_59441_p6 = data_2397_V_read2467_rewind_reg_59437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2398_V_read2468_phi_phi_fu_101871_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2398_V_read2468_phi_phi_fu_101871_p4 = ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_59455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2398_V_read2468_phi_phi_fu_101871_p4 = data_2398_V_read.read();
        } else {
            ap_phi_mux_data_2398_V_read2468_phi_phi_fu_101871_p4 = ap_phi_reg_pp0_iter0_data_2398_V_read2468_phi_reg_101867.read();
        }
    } else {
        ap_phi_mux_data_2398_V_read2468_phi_phi_fu_101871_p4 = ap_phi_reg_pp0_iter0_data_2398_V_read2468_phi_reg_101867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_59455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_59455_p6 = data_2398_V_read2468_phi_reg_101867.read();
    } else {
        ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_59455_p6 = data_2398_V_read2468_rewind_reg_59451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2399_V_read2469_phi_phi_fu_101884_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2399_V_read2469_phi_phi_fu_101884_p4 = ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_59469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2399_V_read2469_phi_phi_fu_101884_p4 = data_2399_V_read.read();
        } else {
            ap_phi_mux_data_2399_V_read2469_phi_phi_fu_101884_p4 = ap_phi_reg_pp0_iter0_data_2399_V_read2469_phi_reg_101880.read();
        }
    } else {
        ap_phi_mux_data_2399_V_read2469_phi_phi_fu_101884_p4 = ap_phi_reg_pp0_iter0_data_2399_V_read2469_phi_reg_101880.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_59469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_59469_p6 = data_2399_V_read2469_phi_reg_101880.read();
    } else {
        ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_59469_p6 = data_2399_V_read2469_rewind_reg_59465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_239_V_read309_phi_phi_fu_73804_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_239_V_read309_phi_phi_fu_73804_p4 = ap_phi_mux_data_239_V_read309_rewind_phi_fu_29229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_239_V_read309_phi_phi_fu_73804_p4 = data_239_V_read.read();
        } else {
            ap_phi_mux_data_239_V_read309_phi_phi_fu_73804_p4 = ap_phi_reg_pp0_iter0_data_239_V_read309_phi_reg_73800.read();
        }
    } else {
        ap_phi_mux_data_239_V_read309_phi_phi_fu_73804_p4 = ap_phi_reg_pp0_iter0_data_239_V_read309_phi_reg_73800.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_239_V_read309_rewind_phi_fu_29229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_239_V_read309_rewind_phi_fu_29229_p6 = data_239_V_read309_phi_reg_73800.read();
    } else {
        ap_phi_mux_data_239_V_read309_rewind_phi_fu_29229_p6 = data_239_V_read309_rewind_reg_29225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_23_V_read93_phi_phi_fu_70996_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_23_V_read93_phi_phi_fu_70996_p4 = ap_phi_mux_data_23_V_read93_rewind_phi_fu_26205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_23_V_read93_phi_phi_fu_70996_p4 = data_23_V_read.read();
        } else {
            ap_phi_mux_data_23_V_read93_phi_phi_fu_70996_p4 = ap_phi_reg_pp0_iter0_data_23_V_read93_phi_reg_70992.read();
        }
    } else {
        ap_phi_mux_data_23_V_read93_phi_phi_fu_70996_p4 = ap_phi_reg_pp0_iter0_data_23_V_read93_phi_reg_70992.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_23_V_read93_rewind_phi_fu_26205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_23_V_read93_rewind_phi_fu_26205_p6 = data_23_V_read93_phi_reg_70992.read();
    } else {
        ap_phi_mux_data_23_V_read93_rewind_phi_fu_26205_p6 = data_23_V_read93_rewind_reg_26201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2400_V_read2470_phi_phi_fu_101897_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2400_V_read2470_phi_phi_fu_101897_p4 = ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_59483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2400_V_read2470_phi_phi_fu_101897_p4 = data_2400_V_read.read();
        } else {
            ap_phi_mux_data_2400_V_read2470_phi_phi_fu_101897_p4 = ap_phi_reg_pp0_iter0_data_2400_V_read2470_phi_reg_101893.read();
        }
    } else {
        ap_phi_mux_data_2400_V_read2470_phi_phi_fu_101897_p4 = ap_phi_reg_pp0_iter0_data_2400_V_read2470_phi_reg_101893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_59483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_59483_p6 = data_2400_V_read2470_phi_reg_101893.read();
    } else {
        ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_59483_p6 = data_2400_V_read2470_rewind_reg_59479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2401_V_read2471_phi_phi_fu_101910_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2401_V_read2471_phi_phi_fu_101910_p4 = ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_59497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2401_V_read2471_phi_phi_fu_101910_p4 = data_2401_V_read.read();
        } else {
            ap_phi_mux_data_2401_V_read2471_phi_phi_fu_101910_p4 = ap_phi_reg_pp0_iter0_data_2401_V_read2471_phi_reg_101906.read();
        }
    } else {
        ap_phi_mux_data_2401_V_read2471_phi_phi_fu_101910_p4 = ap_phi_reg_pp0_iter0_data_2401_V_read2471_phi_reg_101906.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_59497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_59497_p6 = data_2401_V_read2471_phi_reg_101906.read();
    } else {
        ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_59497_p6 = data_2401_V_read2471_rewind_reg_59493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2402_V_read2472_phi_phi_fu_101923_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2402_V_read2472_phi_phi_fu_101923_p4 = ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_59511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2402_V_read2472_phi_phi_fu_101923_p4 = data_2402_V_read.read();
        } else {
            ap_phi_mux_data_2402_V_read2472_phi_phi_fu_101923_p4 = ap_phi_reg_pp0_iter0_data_2402_V_read2472_phi_reg_101919.read();
        }
    } else {
        ap_phi_mux_data_2402_V_read2472_phi_phi_fu_101923_p4 = ap_phi_reg_pp0_iter0_data_2402_V_read2472_phi_reg_101919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_59511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_59511_p6 = data_2402_V_read2472_phi_reg_101919.read();
    } else {
        ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_59511_p6 = data_2402_V_read2472_rewind_reg_59507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2403_V_read2473_phi_phi_fu_101936_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2403_V_read2473_phi_phi_fu_101936_p4 = ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_59525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2403_V_read2473_phi_phi_fu_101936_p4 = data_2403_V_read.read();
        } else {
            ap_phi_mux_data_2403_V_read2473_phi_phi_fu_101936_p4 = ap_phi_reg_pp0_iter0_data_2403_V_read2473_phi_reg_101932.read();
        }
    } else {
        ap_phi_mux_data_2403_V_read2473_phi_phi_fu_101936_p4 = ap_phi_reg_pp0_iter0_data_2403_V_read2473_phi_reg_101932.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_59525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_59525_p6 = data_2403_V_read2473_phi_reg_101932.read();
    } else {
        ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_59525_p6 = data_2403_V_read2473_rewind_reg_59521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2404_V_read2474_phi_phi_fu_101949_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2404_V_read2474_phi_phi_fu_101949_p4 = ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_59539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2404_V_read2474_phi_phi_fu_101949_p4 = data_2404_V_read.read();
        } else {
            ap_phi_mux_data_2404_V_read2474_phi_phi_fu_101949_p4 = ap_phi_reg_pp0_iter0_data_2404_V_read2474_phi_reg_101945.read();
        }
    } else {
        ap_phi_mux_data_2404_V_read2474_phi_phi_fu_101949_p4 = ap_phi_reg_pp0_iter0_data_2404_V_read2474_phi_reg_101945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_59539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_59539_p6 = data_2404_V_read2474_phi_reg_101945.read();
    } else {
        ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_59539_p6 = data_2404_V_read2474_rewind_reg_59535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2405_V_read2475_phi_phi_fu_101962_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2405_V_read2475_phi_phi_fu_101962_p4 = ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_59553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2405_V_read2475_phi_phi_fu_101962_p4 = data_2405_V_read.read();
        } else {
            ap_phi_mux_data_2405_V_read2475_phi_phi_fu_101962_p4 = ap_phi_reg_pp0_iter0_data_2405_V_read2475_phi_reg_101958.read();
        }
    } else {
        ap_phi_mux_data_2405_V_read2475_phi_phi_fu_101962_p4 = ap_phi_reg_pp0_iter0_data_2405_V_read2475_phi_reg_101958.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_59553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_59553_p6 = data_2405_V_read2475_phi_reg_101958.read();
    } else {
        ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_59553_p6 = data_2405_V_read2475_rewind_reg_59549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2406_V_read2476_phi_phi_fu_101975_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2406_V_read2476_phi_phi_fu_101975_p4 = ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_59567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2406_V_read2476_phi_phi_fu_101975_p4 = data_2406_V_read.read();
        } else {
            ap_phi_mux_data_2406_V_read2476_phi_phi_fu_101975_p4 = ap_phi_reg_pp0_iter0_data_2406_V_read2476_phi_reg_101971.read();
        }
    } else {
        ap_phi_mux_data_2406_V_read2476_phi_phi_fu_101975_p4 = ap_phi_reg_pp0_iter0_data_2406_V_read2476_phi_reg_101971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_59567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_59567_p6 = data_2406_V_read2476_phi_reg_101971.read();
    } else {
        ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_59567_p6 = data_2406_V_read2476_rewind_reg_59563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2407_V_read2477_phi_phi_fu_101988_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2407_V_read2477_phi_phi_fu_101988_p4 = ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_59581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2407_V_read2477_phi_phi_fu_101988_p4 = data_2407_V_read.read();
        } else {
            ap_phi_mux_data_2407_V_read2477_phi_phi_fu_101988_p4 = ap_phi_reg_pp0_iter0_data_2407_V_read2477_phi_reg_101984.read();
        }
    } else {
        ap_phi_mux_data_2407_V_read2477_phi_phi_fu_101988_p4 = ap_phi_reg_pp0_iter0_data_2407_V_read2477_phi_reg_101984.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_59581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_59581_p6 = data_2407_V_read2477_phi_reg_101984.read();
    } else {
        ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_59581_p6 = data_2407_V_read2477_rewind_reg_59577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2408_V_read2478_phi_phi_fu_102001_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2408_V_read2478_phi_phi_fu_102001_p4 = ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_59595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2408_V_read2478_phi_phi_fu_102001_p4 = data_2408_V_read.read();
        } else {
            ap_phi_mux_data_2408_V_read2478_phi_phi_fu_102001_p4 = ap_phi_reg_pp0_iter0_data_2408_V_read2478_phi_reg_101997.read();
        }
    } else {
        ap_phi_mux_data_2408_V_read2478_phi_phi_fu_102001_p4 = ap_phi_reg_pp0_iter0_data_2408_V_read2478_phi_reg_101997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_59595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_59595_p6 = data_2408_V_read2478_phi_reg_101997.read();
    } else {
        ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_59595_p6 = data_2408_V_read2478_rewind_reg_59591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2409_V_read2479_phi_phi_fu_102014_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2409_V_read2479_phi_phi_fu_102014_p4 = ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_59609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2409_V_read2479_phi_phi_fu_102014_p4 = data_2409_V_read.read();
        } else {
            ap_phi_mux_data_2409_V_read2479_phi_phi_fu_102014_p4 = ap_phi_reg_pp0_iter0_data_2409_V_read2479_phi_reg_102010.read();
        }
    } else {
        ap_phi_mux_data_2409_V_read2479_phi_phi_fu_102014_p4 = ap_phi_reg_pp0_iter0_data_2409_V_read2479_phi_reg_102010.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_59609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_59609_p6 = data_2409_V_read2479_phi_reg_102010.read();
    } else {
        ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_59609_p6 = data_2409_V_read2479_rewind_reg_59605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_240_V_read310_phi_phi_fu_73817_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_240_V_read310_phi_phi_fu_73817_p4 = ap_phi_mux_data_240_V_read310_rewind_phi_fu_29243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_240_V_read310_phi_phi_fu_73817_p4 = data_240_V_read.read();
        } else {
            ap_phi_mux_data_240_V_read310_phi_phi_fu_73817_p4 = ap_phi_reg_pp0_iter0_data_240_V_read310_phi_reg_73813.read();
        }
    } else {
        ap_phi_mux_data_240_V_read310_phi_phi_fu_73817_p4 = ap_phi_reg_pp0_iter0_data_240_V_read310_phi_reg_73813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_240_V_read310_rewind_phi_fu_29243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_240_V_read310_rewind_phi_fu_29243_p6 = data_240_V_read310_phi_reg_73813.read();
    } else {
        ap_phi_mux_data_240_V_read310_rewind_phi_fu_29243_p6 = data_240_V_read310_rewind_reg_29239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2410_V_read2480_phi_phi_fu_102027_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2410_V_read2480_phi_phi_fu_102027_p4 = ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_59623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2410_V_read2480_phi_phi_fu_102027_p4 = data_2410_V_read.read();
        } else {
            ap_phi_mux_data_2410_V_read2480_phi_phi_fu_102027_p4 = ap_phi_reg_pp0_iter0_data_2410_V_read2480_phi_reg_102023.read();
        }
    } else {
        ap_phi_mux_data_2410_V_read2480_phi_phi_fu_102027_p4 = ap_phi_reg_pp0_iter0_data_2410_V_read2480_phi_reg_102023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_59623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_59623_p6 = data_2410_V_read2480_phi_reg_102023.read();
    } else {
        ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_59623_p6 = data_2410_V_read2480_rewind_reg_59619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2411_V_read2481_phi_phi_fu_102040_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2411_V_read2481_phi_phi_fu_102040_p4 = ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_59637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2411_V_read2481_phi_phi_fu_102040_p4 = data_2411_V_read.read();
        } else {
            ap_phi_mux_data_2411_V_read2481_phi_phi_fu_102040_p4 = ap_phi_reg_pp0_iter0_data_2411_V_read2481_phi_reg_102036.read();
        }
    } else {
        ap_phi_mux_data_2411_V_read2481_phi_phi_fu_102040_p4 = ap_phi_reg_pp0_iter0_data_2411_V_read2481_phi_reg_102036.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_59637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_59637_p6 = data_2411_V_read2481_phi_reg_102036.read();
    } else {
        ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_59637_p6 = data_2411_V_read2481_rewind_reg_59633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2412_V_read2482_phi_phi_fu_102053_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2412_V_read2482_phi_phi_fu_102053_p4 = ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_59651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2412_V_read2482_phi_phi_fu_102053_p4 = data_2412_V_read.read();
        } else {
            ap_phi_mux_data_2412_V_read2482_phi_phi_fu_102053_p4 = ap_phi_reg_pp0_iter0_data_2412_V_read2482_phi_reg_102049.read();
        }
    } else {
        ap_phi_mux_data_2412_V_read2482_phi_phi_fu_102053_p4 = ap_phi_reg_pp0_iter0_data_2412_V_read2482_phi_reg_102049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_59651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_59651_p6 = data_2412_V_read2482_phi_reg_102049.read();
    } else {
        ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_59651_p6 = data_2412_V_read2482_rewind_reg_59647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2413_V_read2483_phi_phi_fu_102066_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2413_V_read2483_phi_phi_fu_102066_p4 = ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_59665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2413_V_read2483_phi_phi_fu_102066_p4 = data_2413_V_read.read();
        } else {
            ap_phi_mux_data_2413_V_read2483_phi_phi_fu_102066_p4 = ap_phi_reg_pp0_iter0_data_2413_V_read2483_phi_reg_102062.read();
        }
    } else {
        ap_phi_mux_data_2413_V_read2483_phi_phi_fu_102066_p4 = ap_phi_reg_pp0_iter0_data_2413_V_read2483_phi_reg_102062.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_59665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_59665_p6 = data_2413_V_read2483_phi_reg_102062.read();
    } else {
        ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_59665_p6 = data_2413_V_read2483_rewind_reg_59661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2414_V_read2484_phi_phi_fu_102079_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2414_V_read2484_phi_phi_fu_102079_p4 = ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_59679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2414_V_read2484_phi_phi_fu_102079_p4 = data_2414_V_read.read();
        } else {
            ap_phi_mux_data_2414_V_read2484_phi_phi_fu_102079_p4 = ap_phi_reg_pp0_iter0_data_2414_V_read2484_phi_reg_102075.read();
        }
    } else {
        ap_phi_mux_data_2414_V_read2484_phi_phi_fu_102079_p4 = ap_phi_reg_pp0_iter0_data_2414_V_read2484_phi_reg_102075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_59679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_59679_p6 = data_2414_V_read2484_phi_reg_102075.read();
    } else {
        ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_59679_p6 = data_2414_V_read2484_rewind_reg_59675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2415_V_read2485_phi_phi_fu_102092_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2415_V_read2485_phi_phi_fu_102092_p4 = ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_59693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2415_V_read2485_phi_phi_fu_102092_p4 = data_2415_V_read.read();
        } else {
            ap_phi_mux_data_2415_V_read2485_phi_phi_fu_102092_p4 = ap_phi_reg_pp0_iter0_data_2415_V_read2485_phi_reg_102088.read();
        }
    } else {
        ap_phi_mux_data_2415_V_read2485_phi_phi_fu_102092_p4 = ap_phi_reg_pp0_iter0_data_2415_V_read2485_phi_reg_102088.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_59693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_59693_p6 = data_2415_V_read2485_phi_reg_102088.read();
    } else {
        ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_59693_p6 = data_2415_V_read2485_rewind_reg_59689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2416_V_read2486_phi_phi_fu_102105_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2416_V_read2486_phi_phi_fu_102105_p4 = ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_59707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2416_V_read2486_phi_phi_fu_102105_p4 = data_2416_V_read.read();
        } else {
            ap_phi_mux_data_2416_V_read2486_phi_phi_fu_102105_p4 = ap_phi_reg_pp0_iter0_data_2416_V_read2486_phi_reg_102101.read();
        }
    } else {
        ap_phi_mux_data_2416_V_read2486_phi_phi_fu_102105_p4 = ap_phi_reg_pp0_iter0_data_2416_V_read2486_phi_reg_102101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_59707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_59707_p6 = data_2416_V_read2486_phi_reg_102101.read();
    } else {
        ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_59707_p6 = data_2416_V_read2486_rewind_reg_59703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2417_V_read2487_phi_phi_fu_102118_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2417_V_read2487_phi_phi_fu_102118_p4 = ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_59721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2417_V_read2487_phi_phi_fu_102118_p4 = data_2417_V_read.read();
        } else {
            ap_phi_mux_data_2417_V_read2487_phi_phi_fu_102118_p4 = ap_phi_reg_pp0_iter0_data_2417_V_read2487_phi_reg_102114.read();
        }
    } else {
        ap_phi_mux_data_2417_V_read2487_phi_phi_fu_102118_p4 = ap_phi_reg_pp0_iter0_data_2417_V_read2487_phi_reg_102114.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_59721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_59721_p6 = data_2417_V_read2487_phi_reg_102114.read();
    } else {
        ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_59721_p6 = data_2417_V_read2487_rewind_reg_59717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2418_V_read2488_phi_phi_fu_102131_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2418_V_read2488_phi_phi_fu_102131_p4 = ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_59735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2418_V_read2488_phi_phi_fu_102131_p4 = data_2418_V_read.read();
        } else {
            ap_phi_mux_data_2418_V_read2488_phi_phi_fu_102131_p4 = ap_phi_reg_pp0_iter0_data_2418_V_read2488_phi_reg_102127.read();
        }
    } else {
        ap_phi_mux_data_2418_V_read2488_phi_phi_fu_102131_p4 = ap_phi_reg_pp0_iter0_data_2418_V_read2488_phi_reg_102127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_59735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_59735_p6 = data_2418_V_read2488_phi_reg_102127.read();
    } else {
        ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_59735_p6 = data_2418_V_read2488_rewind_reg_59731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2419_V_read2489_phi_phi_fu_102144_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2419_V_read2489_phi_phi_fu_102144_p4 = ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_59749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2419_V_read2489_phi_phi_fu_102144_p4 = data_2419_V_read.read();
        } else {
            ap_phi_mux_data_2419_V_read2489_phi_phi_fu_102144_p4 = ap_phi_reg_pp0_iter0_data_2419_V_read2489_phi_reg_102140.read();
        }
    } else {
        ap_phi_mux_data_2419_V_read2489_phi_phi_fu_102144_p4 = ap_phi_reg_pp0_iter0_data_2419_V_read2489_phi_reg_102140.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_59749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_59749_p6 = data_2419_V_read2489_phi_reg_102140.read();
    } else {
        ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_59749_p6 = data_2419_V_read2489_rewind_reg_59745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_241_V_read311_phi_phi_fu_73830_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_241_V_read311_phi_phi_fu_73830_p4 = ap_phi_mux_data_241_V_read311_rewind_phi_fu_29257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_241_V_read311_phi_phi_fu_73830_p4 = data_241_V_read.read();
        } else {
            ap_phi_mux_data_241_V_read311_phi_phi_fu_73830_p4 = ap_phi_reg_pp0_iter0_data_241_V_read311_phi_reg_73826.read();
        }
    } else {
        ap_phi_mux_data_241_V_read311_phi_phi_fu_73830_p4 = ap_phi_reg_pp0_iter0_data_241_V_read311_phi_reg_73826.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_241_V_read311_rewind_phi_fu_29257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_241_V_read311_rewind_phi_fu_29257_p6 = data_241_V_read311_phi_reg_73826.read();
    } else {
        ap_phi_mux_data_241_V_read311_rewind_phi_fu_29257_p6 = data_241_V_read311_rewind_reg_29253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2420_V_read2490_phi_phi_fu_102157_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2420_V_read2490_phi_phi_fu_102157_p4 = ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_59763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2420_V_read2490_phi_phi_fu_102157_p4 = data_2420_V_read.read();
        } else {
            ap_phi_mux_data_2420_V_read2490_phi_phi_fu_102157_p4 = ap_phi_reg_pp0_iter0_data_2420_V_read2490_phi_reg_102153.read();
        }
    } else {
        ap_phi_mux_data_2420_V_read2490_phi_phi_fu_102157_p4 = ap_phi_reg_pp0_iter0_data_2420_V_read2490_phi_reg_102153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_59763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_59763_p6 = data_2420_V_read2490_phi_reg_102153.read();
    } else {
        ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_59763_p6 = data_2420_V_read2490_rewind_reg_59759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2421_V_read2491_phi_phi_fu_102170_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2421_V_read2491_phi_phi_fu_102170_p4 = ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_59777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2421_V_read2491_phi_phi_fu_102170_p4 = data_2421_V_read.read();
        } else {
            ap_phi_mux_data_2421_V_read2491_phi_phi_fu_102170_p4 = ap_phi_reg_pp0_iter0_data_2421_V_read2491_phi_reg_102166.read();
        }
    } else {
        ap_phi_mux_data_2421_V_read2491_phi_phi_fu_102170_p4 = ap_phi_reg_pp0_iter0_data_2421_V_read2491_phi_reg_102166.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_59777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_59777_p6 = data_2421_V_read2491_phi_reg_102166.read();
    } else {
        ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_59777_p6 = data_2421_V_read2491_rewind_reg_59773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2422_V_read2492_phi_phi_fu_102183_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2422_V_read2492_phi_phi_fu_102183_p4 = ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_59791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2422_V_read2492_phi_phi_fu_102183_p4 = data_2422_V_read.read();
        } else {
            ap_phi_mux_data_2422_V_read2492_phi_phi_fu_102183_p4 = ap_phi_reg_pp0_iter0_data_2422_V_read2492_phi_reg_102179.read();
        }
    } else {
        ap_phi_mux_data_2422_V_read2492_phi_phi_fu_102183_p4 = ap_phi_reg_pp0_iter0_data_2422_V_read2492_phi_reg_102179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_59791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_59791_p6 = data_2422_V_read2492_phi_reg_102179.read();
    } else {
        ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_59791_p6 = data_2422_V_read2492_rewind_reg_59787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2423_V_read2493_phi_phi_fu_102196_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2423_V_read2493_phi_phi_fu_102196_p4 = ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_59805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2423_V_read2493_phi_phi_fu_102196_p4 = data_2423_V_read.read();
        } else {
            ap_phi_mux_data_2423_V_read2493_phi_phi_fu_102196_p4 = ap_phi_reg_pp0_iter0_data_2423_V_read2493_phi_reg_102192.read();
        }
    } else {
        ap_phi_mux_data_2423_V_read2493_phi_phi_fu_102196_p4 = ap_phi_reg_pp0_iter0_data_2423_V_read2493_phi_reg_102192.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_59805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_59805_p6 = data_2423_V_read2493_phi_reg_102192.read();
    } else {
        ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_59805_p6 = data_2423_V_read2493_rewind_reg_59801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2424_V_read2494_phi_phi_fu_102209_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2424_V_read2494_phi_phi_fu_102209_p4 = ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_59819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2424_V_read2494_phi_phi_fu_102209_p4 = data_2424_V_read.read();
        } else {
            ap_phi_mux_data_2424_V_read2494_phi_phi_fu_102209_p4 = ap_phi_reg_pp0_iter0_data_2424_V_read2494_phi_reg_102205.read();
        }
    } else {
        ap_phi_mux_data_2424_V_read2494_phi_phi_fu_102209_p4 = ap_phi_reg_pp0_iter0_data_2424_V_read2494_phi_reg_102205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_59819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_59819_p6 = data_2424_V_read2494_phi_reg_102205.read();
    } else {
        ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_59819_p6 = data_2424_V_read2494_rewind_reg_59815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2425_V_read2495_phi_phi_fu_102222_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2425_V_read2495_phi_phi_fu_102222_p4 = ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_59833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2425_V_read2495_phi_phi_fu_102222_p4 = data_2425_V_read.read();
        } else {
            ap_phi_mux_data_2425_V_read2495_phi_phi_fu_102222_p4 = ap_phi_reg_pp0_iter0_data_2425_V_read2495_phi_reg_102218.read();
        }
    } else {
        ap_phi_mux_data_2425_V_read2495_phi_phi_fu_102222_p4 = ap_phi_reg_pp0_iter0_data_2425_V_read2495_phi_reg_102218.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_59833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_59833_p6 = data_2425_V_read2495_phi_reg_102218.read();
    } else {
        ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_59833_p6 = data_2425_V_read2495_rewind_reg_59829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2426_V_read2496_phi_phi_fu_102235_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2426_V_read2496_phi_phi_fu_102235_p4 = ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_59847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2426_V_read2496_phi_phi_fu_102235_p4 = data_2426_V_read.read();
        } else {
            ap_phi_mux_data_2426_V_read2496_phi_phi_fu_102235_p4 = ap_phi_reg_pp0_iter0_data_2426_V_read2496_phi_reg_102231.read();
        }
    } else {
        ap_phi_mux_data_2426_V_read2496_phi_phi_fu_102235_p4 = ap_phi_reg_pp0_iter0_data_2426_V_read2496_phi_reg_102231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_59847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_59847_p6 = data_2426_V_read2496_phi_reg_102231.read();
    } else {
        ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_59847_p6 = data_2426_V_read2496_rewind_reg_59843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2427_V_read2497_phi_phi_fu_102248_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2427_V_read2497_phi_phi_fu_102248_p4 = ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_59861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2427_V_read2497_phi_phi_fu_102248_p4 = data_2427_V_read.read();
        } else {
            ap_phi_mux_data_2427_V_read2497_phi_phi_fu_102248_p4 = ap_phi_reg_pp0_iter0_data_2427_V_read2497_phi_reg_102244.read();
        }
    } else {
        ap_phi_mux_data_2427_V_read2497_phi_phi_fu_102248_p4 = ap_phi_reg_pp0_iter0_data_2427_V_read2497_phi_reg_102244.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_59861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_59861_p6 = data_2427_V_read2497_phi_reg_102244.read();
    } else {
        ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_59861_p6 = data_2427_V_read2497_rewind_reg_59857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2428_V_read2498_phi_phi_fu_102261_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2428_V_read2498_phi_phi_fu_102261_p4 = ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_59875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2428_V_read2498_phi_phi_fu_102261_p4 = data_2428_V_read.read();
        } else {
            ap_phi_mux_data_2428_V_read2498_phi_phi_fu_102261_p4 = ap_phi_reg_pp0_iter0_data_2428_V_read2498_phi_reg_102257.read();
        }
    } else {
        ap_phi_mux_data_2428_V_read2498_phi_phi_fu_102261_p4 = ap_phi_reg_pp0_iter0_data_2428_V_read2498_phi_reg_102257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_59875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_59875_p6 = data_2428_V_read2498_phi_reg_102257.read();
    } else {
        ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_59875_p6 = data_2428_V_read2498_rewind_reg_59871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2429_V_read2499_phi_phi_fu_102274_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2429_V_read2499_phi_phi_fu_102274_p4 = ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_59889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2429_V_read2499_phi_phi_fu_102274_p4 = data_2429_V_read.read();
        } else {
            ap_phi_mux_data_2429_V_read2499_phi_phi_fu_102274_p4 = ap_phi_reg_pp0_iter0_data_2429_V_read2499_phi_reg_102270.read();
        }
    } else {
        ap_phi_mux_data_2429_V_read2499_phi_phi_fu_102274_p4 = ap_phi_reg_pp0_iter0_data_2429_V_read2499_phi_reg_102270.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_59889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_59889_p6 = data_2429_V_read2499_phi_reg_102270.read();
    } else {
        ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_59889_p6 = data_2429_V_read2499_rewind_reg_59885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_242_V_read312_phi_phi_fu_73843_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_242_V_read312_phi_phi_fu_73843_p4 = ap_phi_mux_data_242_V_read312_rewind_phi_fu_29271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_242_V_read312_phi_phi_fu_73843_p4 = data_242_V_read.read();
        } else {
            ap_phi_mux_data_242_V_read312_phi_phi_fu_73843_p4 = ap_phi_reg_pp0_iter0_data_242_V_read312_phi_reg_73839.read();
        }
    } else {
        ap_phi_mux_data_242_V_read312_phi_phi_fu_73843_p4 = ap_phi_reg_pp0_iter0_data_242_V_read312_phi_reg_73839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_242_V_read312_rewind_phi_fu_29271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_242_V_read312_rewind_phi_fu_29271_p6 = data_242_V_read312_phi_reg_73839.read();
    } else {
        ap_phi_mux_data_242_V_read312_rewind_phi_fu_29271_p6 = data_242_V_read312_rewind_reg_29267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2430_V_read2500_phi_phi_fu_102287_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2430_V_read2500_phi_phi_fu_102287_p4 = ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_59903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2430_V_read2500_phi_phi_fu_102287_p4 = data_2430_V_read.read();
        } else {
            ap_phi_mux_data_2430_V_read2500_phi_phi_fu_102287_p4 = ap_phi_reg_pp0_iter0_data_2430_V_read2500_phi_reg_102283.read();
        }
    } else {
        ap_phi_mux_data_2430_V_read2500_phi_phi_fu_102287_p4 = ap_phi_reg_pp0_iter0_data_2430_V_read2500_phi_reg_102283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_59903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_59903_p6 = data_2430_V_read2500_phi_reg_102283.read();
    } else {
        ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_59903_p6 = data_2430_V_read2500_rewind_reg_59899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2431_V_read2501_phi_phi_fu_102300_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2431_V_read2501_phi_phi_fu_102300_p4 = ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_59917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2431_V_read2501_phi_phi_fu_102300_p4 = data_2431_V_read.read();
        } else {
            ap_phi_mux_data_2431_V_read2501_phi_phi_fu_102300_p4 = ap_phi_reg_pp0_iter0_data_2431_V_read2501_phi_reg_102296.read();
        }
    } else {
        ap_phi_mux_data_2431_V_read2501_phi_phi_fu_102300_p4 = ap_phi_reg_pp0_iter0_data_2431_V_read2501_phi_reg_102296.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_59917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_59917_p6 = data_2431_V_read2501_phi_reg_102296.read();
    } else {
        ap_phi_mux_data_2431_V_read2501_rewind_phi_fu_59917_p6 = data_2431_V_read2501_rewind_reg_59913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2432_V_read2502_phi_phi_fu_102313_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2432_V_read2502_phi_phi_fu_102313_p4 = ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_59931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2432_V_read2502_phi_phi_fu_102313_p4 = data_2432_V_read.read();
        } else {
            ap_phi_mux_data_2432_V_read2502_phi_phi_fu_102313_p4 = ap_phi_reg_pp0_iter0_data_2432_V_read2502_phi_reg_102309.read();
        }
    } else {
        ap_phi_mux_data_2432_V_read2502_phi_phi_fu_102313_p4 = ap_phi_reg_pp0_iter0_data_2432_V_read2502_phi_reg_102309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_59931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_59931_p6 = data_2432_V_read2502_phi_reg_102309.read();
    } else {
        ap_phi_mux_data_2432_V_read2502_rewind_phi_fu_59931_p6 = data_2432_V_read2502_rewind_reg_59927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2433_V_read2503_phi_phi_fu_102326_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2433_V_read2503_phi_phi_fu_102326_p4 = ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_59945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2433_V_read2503_phi_phi_fu_102326_p4 = data_2433_V_read.read();
        } else {
            ap_phi_mux_data_2433_V_read2503_phi_phi_fu_102326_p4 = ap_phi_reg_pp0_iter0_data_2433_V_read2503_phi_reg_102322.read();
        }
    } else {
        ap_phi_mux_data_2433_V_read2503_phi_phi_fu_102326_p4 = ap_phi_reg_pp0_iter0_data_2433_V_read2503_phi_reg_102322.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_59945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_59945_p6 = data_2433_V_read2503_phi_reg_102322.read();
    } else {
        ap_phi_mux_data_2433_V_read2503_rewind_phi_fu_59945_p6 = data_2433_V_read2503_rewind_reg_59941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2434_V_read2504_phi_phi_fu_102339_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2434_V_read2504_phi_phi_fu_102339_p4 = ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_59959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2434_V_read2504_phi_phi_fu_102339_p4 = data_2434_V_read.read();
        } else {
            ap_phi_mux_data_2434_V_read2504_phi_phi_fu_102339_p4 = ap_phi_reg_pp0_iter0_data_2434_V_read2504_phi_reg_102335.read();
        }
    } else {
        ap_phi_mux_data_2434_V_read2504_phi_phi_fu_102339_p4 = ap_phi_reg_pp0_iter0_data_2434_V_read2504_phi_reg_102335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_59959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_59959_p6 = data_2434_V_read2504_phi_reg_102335.read();
    } else {
        ap_phi_mux_data_2434_V_read2504_rewind_phi_fu_59959_p6 = data_2434_V_read2504_rewind_reg_59955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2435_V_read2505_phi_phi_fu_102352_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2435_V_read2505_phi_phi_fu_102352_p4 = ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_59973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2435_V_read2505_phi_phi_fu_102352_p4 = data_2435_V_read.read();
        } else {
            ap_phi_mux_data_2435_V_read2505_phi_phi_fu_102352_p4 = ap_phi_reg_pp0_iter0_data_2435_V_read2505_phi_reg_102348.read();
        }
    } else {
        ap_phi_mux_data_2435_V_read2505_phi_phi_fu_102352_p4 = ap_phi_reg_pp0_iter0_data_2435_V_read2505_phi_reg_102348.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_59973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_59973_p6 = data_2435_V_read2505_phi_reg_102348.read();
    } else {
        ap_phi_mux_data_2435_V_read2505_rewind_phi_fu_59973_p6 = data_2435_V_read2505_rewind_reg_59969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2436_V_read2506_phi_phi_fu_102365_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2436_V_read2506_phi_phi_fu_102365_p4 = ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_59987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2436_V_read2506_phi_phi_fu_102365_p4 = data_2436_V_read.read();
        } else {
            ap_phi_mux_data_2436_V_read2506_phi_phi_fu_102365_p4 = ap_phi_reg_pp0_iter0_data_2436_V_read2506_phi_reg_102361.read();
        }
    } else {
        ap_phi_mux_data_2436_V_read2506_phi_phi_fu_102365_p4 = ap_phi_reg_pp0_iter0_data_2436_V_read2506_phi_reg_102361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_59987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_59987_p6 = data_2436_V_read2506_phi_reg_102361.read();
    } else {
        ap_phi_mux_data_2436_V_read2506_rewind_phi_fu_59987_p6 = data_2436_V_read2506_rewind_reg_59983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2437_V_read2507_phi_phi_fu_102378_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2437_V_read2507_phi_phi_fu_102378_p4 = ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_60001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2437_V_read2507_phi_phi_fu_102378_p4 = data_2437_V_read.read();
        } else {
            ap_phi_mux_data_2437_V_read2507_phi_phi_fu_102378_p4 = ap_phi_reg_pp0_iter0_data_2437_V_read2507_phi_reg_102374.read();
        }
    } else {
        ap_phi_mux_data_2437_V_read2507_phi_phi_fu_102378_p4 = ap_phi_reg_pp0_iter0_data_2437_V_read2507_phi_reg_102374.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_60001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_60001_p6 = data_2437_V_read2507_phi_reg_102374.read();
    } else {
        ap_phi_mux_data_2437_V_read2507_rewind_phi_fu_60001_p6 = data_2437_V_read2507_rewind_reg_59997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2438_V_read2508_phi_phi_fu_102391_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2438_V_read2508_phi_phi_fu_102391_p4 = ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_60015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2438_V_read2508_phi_phi_fu_102391_p4 = data_2438_V_read.read();
        } else {
            ap_phi_mux_data_2438_V_read2508_phi_phi_fu_102391_p4 = ap_phi_reg_pp0_iter0_data_2438_V_read2508_phi_reg_102387.read();
        }
    } else {
        ap_phi_mux_data_2438_V_read2508_phi_phi_fu_102391_p4 = ap_phi_reg_pp0_iter0_data_2438_V_read2508_phi_reg_102387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_60015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_60015_p6 = data_2438_V_read2508_phi_reg_102387.read();
    } else {
        ap_phi_mux_data_2438_V_read2508_rewind_phi_fu_60015_p6 = data_2438_V_read2508_rewind_reg_60011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2439_V_read2509_phi_phi_fu_102404_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2439_V_read2509_phi_phi_fu_102404_p4 = ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_60029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2439_V_read2509_phi_phi_fu_102404_p4 = data_2439_V_read.read();
        } else {
            ap_phi_mux_data_2439_V_read2509_phi_phi_fu_102404_p4 = ap_phi_reg_pp0_iter0_data_2439_V_read2509_phi_reg_102400.read();
        }
    } else {
        ap_phi_mux_data_2439_V_read2509_phi_phi_fu_102404_p4 = ap_phi_reg_pp0_iter0_data_2439_V_read2509_phi_reg_102400.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_60029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_60029_p6 = data_2439_V_read2509_phi_reg_102400.read();
    } else {
        ap_phi_mux_data_2439_V_read2509_rewind_phi_fu_60029_p6 = data_2439_V_read2509_rewind_reg_60025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_243_V_read313_phi_phi_fu_73856_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_243_V_read313_phi_phi_fu_73856_p4 = ap_phi_mux_data_243_V_read313_rewind_phi_fu_29285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_243_V_read313_phi_phi_fu_73856_p4 = data_243_V_read.read();
        } else {
            ap_phi_mux_data_243_V_read313_phi_phi_fu_73856_p4 = ap_phi_reg_pp0_iter0_data_243_V_read313_phi_reg_73852.read();
        }
    } else {
        ap_phi_mux_data_243_V_read313_phi_phi_fu_73856_p4 = ap_phi_reg_pp0_iter0_data_243_V_read313_phi_reg_73852.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_243_V_read313_rewind_phi_fu_29285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_243_V_read313_rewind_phi_fu_29285_p6 = data_243_V_read313_phi_reg_73852.read();
    } else {
        ap_phi_mux_data_243_V_read313_rewind_phi_fu_29285_p6 = data_243_V_read313_rewind_reg_29281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2440_V_read2510_phi_phi_fu_102417_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2440_V_read2510_phi_phi_fu_102417_p4 = ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_60043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2440_V_read2510_phi_phi_fu_102417_p4 = data_2440_V_read.read();
        } else {
            ap_phi_mux_data_2440_V_read2510_phi_phi_fu_102417_p4 = ap_phi_reg_pp0_iter0_data_2440_V_read2510_phi_reg_102413.read();
        }
    } else {
        ap_phi_mux_data_2440_V_read2510_phi_phi_fu_102417_p4 = ap_phi_reg_pp0_iter0_data_2440_V_read2510_phi_reg_102413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_60043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_60043_p6 = data_2440_V_read2510_phi_reg_102413.read();
    } else {
        ap_phi_mux_data_2440_V_read2510_rewind_phi_fu_60043_p6 = data_2440_V_read2510_rewind_reg_60039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2441_V_read2511_phi_phi_fu_102430_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2441_V_read2511_phi_phi_fu_102430_p4 = ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_60057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2441_V_read2511_phi_phi_fu_102430_p4 = data_2441_V_read.read();
        } else {
            ap_phi_mux_data_2441_V_read2511_phi_phi_fu_102430_p4 = ap_phi_reg_pp0_iter0_data_2441_V_read2511_phi_reg_102426.read();
        }
    } else {
        ap_phi_mux_data_2441_V_read2511_phi_phi_fu_102430_p4 = ap_phi_reg_pp0_iter0_data_2441_V_read2511_phi_reg_102426.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_60057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_60057_p6 = data_2441_V_read2511_phi_reg_102426.read();
    } else {
        ap_phi_mux_data_2441_V_read2511_rewind_phi_fu_60057_p6 = data_2441_V_read2511_rewind_reg_60053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2442_V_read2512_phi_phi_fu_102443_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2442_V_read2512_phi_phi_fu_102443_p4 = ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_60071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2442_V_read2512_phi_phi_fu_102443_p4 = data_2442_V_read.read();
        } else {
            ap_phi_mux_data_2442_V_read2512_phi_phi_fu_102443_p4 = ap_phi_reg_pp0_iter0_data_2442_V_read2512_phi_reg_102439.read();
        }
    } else {
        ap_phi_mux_data_2442_V_read2512_phi_phi_fu_102443_p4 = ap_phi_reg_pp0_iter0_data_2442_V_read2512_phi_reg_102439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_60071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_60071_p6 = data_2442_V_read2512_phi_reg_102439.read();
    } else {
        ap_phi_mux_data_2442_V_read2512_rewind_phi_fu_60071_p6 = data_2442_V_read2512_rewind_reg_60067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2443_V_read2513_phi_phi_fu_102456_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2443_V_read2513_phi_phi_fu_102456_p4 = ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_60085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2443_V_read2513_phi_phi_fu_102456_p4 = data_2443_V_read.read();
        } else {
            ap_phi_mux_data_2443_V_read2513_phi_phi_fu_102456_p4 = ap_phi_reg_pp0_iter0_data_2443_V_read2513_phi_reg_102452.read();
        }
    } else {
        ap_phi_mux_data_2443_V_read2513_phi_phi_fu_102456_p4 = ap_phi_reg_pp0_iter0_data_2443_V_read2513_phi_reg_102452.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_60085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_60085_p6 = data_2443_V_read2513_phi_reg_102452.read();
    } else {
        ap_phi_mux_data_2443_V_read2513_rewind_phi_fu_60085_p6 = data_2443_V_read2513_rewind_reg_60081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2444_V_read2514_phi_phi_fu_102469_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2444_V_read2514_phi_phi_fu_102469_p4 = ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_60099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2444_V_read2514_phi_phi_fu_102469_p4 = data_2444_V_read.read();
        } else {
            ap_phi_mux_data_2444_V_read2514_phi_phi_fu_102469_p4 = ap_phi_reg_pp0_iter0_data_2444_V_read2514_phi_reg_102465.read();
        }
    } else {
        ap_phi_mux_data_2444_V_read2514_phi_phi_fu_102469_p4 = ap_phi_reg_pp0_iter0_data_2444_V_read2514_phi_reg_102465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_60099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_60099_p6 = data_2444_V_read2514_phi_reg_102465.read();
    } else {
        ap_phi_mux_data_2444_V_read2514_rewind_phi_fu_60099_p6 = data_2444_V_read2514_rewind_reg_60095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2445_V_read2515_phi_phi_fu_102482_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2445_V_read2515_phi_phi_fu_102482_p4 = ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_60113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2445_V_read2515_phi_phi_fu_102482_p4 = data_2445_V_read.read();
        } else {
            ap_phi_mux_data_2445_V_read2515_phi_phi_fu_102482_p4 = ap_phi_reg_pp0_iter0_data_2445_V_read2515_phi_reg_102478.read();
        }
    } else {
        ap_phi_mux_data_2445_V_read2515_phi_phi_fu_102482_p4 = ap_phi_reg_pp0_iter0_data_2445_V_read2515_phi_reg_102478.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_60113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_60113_p6 = data_2445_V_read2515_phi_reg_102478.read();
    } else {
        ap_phi_mux_data_2445_V_read2515_rewind_phi_fu_60113_p6 = data_2445_V_read2515_rewind_reg_60109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2446_V_read2516_phi_phi_fu_102495_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2446_V_read2516_phi_phi_fu_102495_p4 = ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_60127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2446_V_read2516_phi_phi_fu_102495_p4 = data_2446_V_read.read();
        } else {
            ap_phi_mux_data_2446_V_read2516_phi_phi_fu_102495_p4 = ap_phi_reg_pp0_iter0_data_2446_V_read2516_phi_reg_102491.read();
        }
    } else {
        ap_phi_mux_data_2446_V_read2516_phi_phi_fu_102495_p4 = ap_phi_reg_pp0_iter0_data_2446_V_read2516_phi_reg_102491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_60127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_60127_p6 = data_2446_V_read2516_phi_reg_102491.read();
    } else {
        ap_phi_mux_data_2446_V_read2516_rewind_phi_fu_60127_p6 = data_2446_V_read2516_rewind_reg_60123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2447_V_read2517_phi_phi_fu_102508_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2447_V_read2517_phi_phi_fu_102508_p4 = ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_60141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2447_V_read2517_phi_phi_fu_102508_p4 = data_2447_V_read.read();
        } else {
            ap_phi_mux_data_2447_V_read2517_phi_phi_fu_102508_p4 = ap_phi_reg_pp0_iter0_data_2447_V_read2517_phi_reg_102504.read();
        }
    } else {
        ap_phi_mux_data_2447_V_read2517_phi_phi_fu_102508_p4 = ap_phi_reg_pp0_iter0_data_2447_V_read2517_phi_reg_102504.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_60141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_60141_p6 = data_2447_V_read2517_phi_reg_102504.read();
    } else {
        ap_phi_mux_data_2447_V_read2517_rewind_phi_fu_60141_p6 = data_2447_V_read2517_rewind_reg_60137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2448_V_read2518_phi_phi_fu_102521_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2448_V_read2518_phi_phi_fu_102521_p4 = ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_60155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2448_V_read2518_phi_phi_fu_102521_p4 = data_2448_V_read.read();
        } else {
            ap_phi_mux_data_2448_V_read2518_phi_phi_fu_102521_p4 = ap_phi_reg_pp0_iter0_data_2448_V_read2518_phi_reg_102517.read();
        }
    } else {
        ap_phi_mux_data_2448_V_read2518_phi_phi_fu_102521_p4 = ap_phi_reg_pp0_iter0_data_2448_V_read2518_phi_reg_102517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_60155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_60155_p6 = data_2448_V_read2518_phi_reg_102517.read();
    } else {
        ap_phi_mux_data_2448_V_read2518_rewind_phi_fu_60155_p6 = data_2448_V_read2518_rewind_reg_60151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2449_V_read2519_phi_phi_fu_102534_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2449_V_read2519_phi_phi_fu_102534_p4 = ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_60169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2449_V_read2519_phi_phi_fu_102534_p4 = data_2449_V_read.read();
        } else {
            ap_phi_mux_data_2449_V_read2519_phi_phi_fu_102534_p4 = ap_phi_reg_pp0_iter0_data_2449_V_read2519_phi_reg_102530.read();
        }
    } else {
        ap_phi_mux_data_2449_V_read2519_phi_phi_fu_102534_p4 = ap_phi_reg_pp0_iter0_data_2449_V_read2519_phi_reg_102530.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_60169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_60169_p6 = data_2449_V_read2519_phi_reg_102530.read();
    } else {
        ap_phi_mux_data_2449_V_read2519_rewind_phi_fu_60169_p6 = data_2449_V_read2519_rewind_reg_60165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_244_V_read314_phi_phi_fu_73869_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_244_V_read314_phi_phi_fu_73869_p4 = ap_phi_mux_data_244_V_read314_rewind_phi_fu_29299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_244_V_read314_phi_phi_fu_73869_p4 = data_244_V_read.read();
        } else {
            ap_phi_mux_data_244_V_read314_phi_phi_fu_73869_p4 = ap_phi_reg_pp0_iter0_data_244_V_read314_phi_reg_73865.read();
        }
    } else {
        ap_phi_mux_data_244_V_read314_phi_phi_fu_73869_p4 = ap_phi_reg_pp0_iter0_data_244_V_read314_phi_reg_73865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_244_V_read314_rewind_phi_fu_29299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_244_V_read314_rewind_phi_fu_29299_p6 = data_244_V_read314_phi_reg_73865.read();
    } else {
        ap_phi_mux_data_244_V_read314_rewind_phi_fu_29299_p6 = data_244_V_read314_rewind_reg_29295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2450_V_read2520_phi_phi_fu_102547_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2450_V_read2520_phi_phi_fu_102547_p4 = ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_60183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2450_V_read2520_phi_phi_fu_102547_p4 = data_2450_V_read.read();
        } else {
            ap_phi_mux_data_2450_V_read2520_phi_phi_fu_102547_p4 = ap_phi_reg_pp0_iter0_data_2450_V_read2520_phi_reg_102543.read();
        }
    } else {
        ap_phi_mux_data_2450_V_read2520_phi_phi_fu_102547_p4 = ap_phi_reg_pp0_iter0_data_2450_V_read2520_phi_reg_102543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_60183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_60183_p6 = data_2450_V_read2520_phi_reg_102543.read();
    } else {
        ap_phi_mux_data_2450_V_read2520_rewind_phi_fu_60183_p6 = data_2450_V_read2520_rewind_reg_60179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2451_V_read2521_phi_phi_fu_102560_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2451_V_read2521_phi_phi_fu_102560_p4 = ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_60197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2451_V_read2521_phi_phi_fu_102560_p4 = data_2451_V_read.read();
        } else {
            ap_phi_mux_data_2451_V_read2521_phi_phi_fu_102560_p4 = ap_phi_reg_pp0_iter0_data_2451_V_read2521_phi_reg_102556.read();
        }
    } else {
        ap_phi_mux_data_2451_V_read2521_phi_phi_fu_102560_p4 = ap_phi_reg_pp0_iter0_data_2451_V_read2521_phi_reg_102556.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_60197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_60197_p6 = data_2451_V_read2521_phi_reg_102556.read();
    } else {
        ap_phi_mux_data_2451_V_read2521_rewind_phi_fu_60197_p6 = data_2451_V_read2521_rewind_reg_60193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2452_V_read2522_phi_phi_fu_102573_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2452_V_read2522_phi_phi_fu_102573_p4 = ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_60211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2452_V_read2522_phi_phi_fu_102573_p4 = data_2452_V_read.read();
        } else {
            ap_phi_mux_data_2452_V_read2522_phi_phi_fu_102573_p4 = ap_phi_reg_pp0_iter0_data_2452_V_read2522_phi_reg_102569.read();
        }
    } else {
        ap_phi_mux_data_2452_V_read2522_phi_phi_fu_102573_p4 = ap_phi_reg_pp0_iter0_data_2452_V_read2522_phi_reg_102569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_60211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_60211_p6 = data_2452_V_read2522_phi_reg_102569.read();
    } else {
        ap_phi_mux_data_2452_V_read2522_rewind_phi_fu_60211_p6 = data_2452_V_read2522_rewind_reg_60207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2453_V_read2523_phi_phi_fu_102586_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2453_V_read2523_phi_phi_fu_102586_p4 = ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_60225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2453_V_read2523_phi_phi_fu_102586_p4 = data_2453_V_read.read();
        } else {
            ap_phi_mux_data_2453_V_read2523_phi_phi_fu_102586_p4 = ap_phi_reg_pp0_iter0_data_2453_V_read2523_phi_reg_102582.read();
        }
    } else {
        ap_phi_mux_data_2453_V_read2523_phi_phi_fu_102586_p4 = ap_phi_reg_pp0_iter0_data_2453_V_read2523_phi_reg_102582.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_60225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_60225_p6 = data_2453_V_read2523_phi_reg_102582.read();
    } else {
        ap_phi_mux_data_2453_V_read2523_rewind_phi_fu_60225_p6 = data_2453_V_read2523_rewind_reg_60221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2454_V_read2524_phi_phi_fu_102599_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2454_V_read2524_phi_phi_fu_102599_p4 = ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_60239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2454_V_read2524_phi_phi_fu_102599_p4 = data_2454_V_read.read();
        } else {
            ap_phi_mux_data_2454_V_read2524_phi_phi_fu_102599_p4 = ap_phi_reg_pp0_iter0_data_2454_V_read2524_phi_reg_102595.read();
        }
    } else {
        ap_phi_mux_data_2454_V_read2524_phi_phi_fu_102599_p4 = ap_phi_reg_pp0_iter0_data_2454_V_read2524_phi_reg_102595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_60239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_60239_p6 = data_2454_V_read2524_phi_reg_102595.read();
    } else {
        ap_phi_mux_data_2454_V_read2524_rewind_phi_fu_60239_p6 = data_2454_V_read2524_rewind_reg_60235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2455_V_read2525_phi_phi_fu_102612_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2455_V_read2525_phi_phi_fu_102612_p4 = ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_60253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2455_V_read2525_phi_phi_fu_102612_p4 = data_2455_V_read.read();
        } else {
            ap_phi_mux_data_2455_V_read2525_phi_phi_fu_102612_p4 = ap_phi_reg_pp0_iter0_data_2455_V_read2525_phi_reg_102608.read();
        }
    } else {
        ap_phi_mux_data_2455_V_read2525_phi_phi_fu_102612_p4 = ap_phi_reg_pp0_iter0_data_2455_V_read2525_phi_reg_102608.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_60253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_60253_p6 = data_2455_V_read2525_phi_reg_102608.read();
    } else {
        ap_phi_mux_data_2455_V_read2525_rewind_phi_fu_60253_p6 = data_2455_V_read2525_rewind_reg_60249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2456_V_read2526_phi_phi_fu_102625_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2456_V_read2526_phi_phi_fu_102625_p4 = ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_60267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2456_V_read2526_phi_phi_fu_102625_p4 = data_2456_V_read.read();
        } else {
            ap_phi_mux_data_2456_V_read2526_phi_phi_fu_102625_p4 = ap_phi_reg_pp0_iter0_data_2456_V_read2526_phi_reg_102621.read();
        }
    } else {
        ap_phi_mux_data_2456_V_read2526_phi_phi_fu_102625_p4 = ap_phi_reg_pp0_iter0_data_2456_V_read2526_phi_reg_102621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_60267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_60267_p6 = data_2456_V_read2526_phi_reg_102621.read();
    } else {
        ap_phi_mux_data_2456_V_read2526_rewind_phi_fu_60267_p6 = data_2456_V_read2526_rewind_reg_60263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2457_V_read2527_phi_phi_fu_102638_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2457_V_read2527_phi_phi_fu_102638_p4 = ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_60281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2457_V_read2527_phi_phi_fu_102638_p4 = data_2457_V_read.read();
        } else {
            ap_phi_mux_data_2457_V_read2527_phi_phi_fu_102638_p4 = ap_phi_reg_pp0_iter0_data_2457_V_read2527_phi_reg_102634.read();
        }
    } else {
        ap_phi_mux_data_2457_V_read2527_phi_phi_fu_102638_p4 = ap_phi_reg_pp0_iter0_data_2457_V_read2527_phi_reg_102634.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_60281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_60281_p6 = data_2457_V_read2527_phi_reg_102634.read();
    } else {
        ap_phi_mux_data_2457_V_read2527_rewind_phi_fu_60281_p6 = data_2457_V_read2527_rewind_reg_60277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2458_V_read2528_phi_phi_fu_102651_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2458_V_read2528_phi_phi_fu_102651_p4 = ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_60295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2458_V_read2528_phi_phi_fu_102651_p4 = data_2458_V_read.read();
        } else {
            ap_phi_mux_data_2458_V_read2528_phi_phi_fu_102651_p4 = ap_phi_reg_pp0_iter0_data_2458_V_read2528_phi_reg_102647.read();
        }
    } else {
        ap_phi_mux_data_2458_V_read2528_phi_phi_fu_102651_p4 = ap_phi_reg_pp0_iter0_data_2458_V_read2528_phi_reg_102647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_60295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_60295_p6 = data_2458_V_read2528_phi_reg_102647.read();
    } else {
        ap_phi_mux_data_2458_V_read2528_rewind_phi_fu_60295_p6 = data_2458_V_read2528_rewind_reg_60291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2459_V_read2529_phi_phi_fu_102664_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2459_V_read2529_phi_phi_fu_102664_p4 = ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_60309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2459_V_read2529_phi_phi_fu_102664_p4 = data_2459_V_read.read();
        } else {
            ap_phi_mux_data_2459_V_read2529_phi_phi_fu_102664_p4 = ap_phi_reg_pp0_iter0_data_2459_V_read2529_phi_reg_102660.read();
        }
    } else {
        ap_phi_mux_data_2459_V_read2529_phi_phi_fu_102664_p4 = ap_phi_reg_pp0_iter0_data_2459_V_read2529_phi_reg_102660.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_60309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_60309_p6 = data_2459_V_read2529_phi_reg_102660.read();
    } else {
        ap_phi_mux_data_2459_V_read2529_rewind_phi_fu_60309_p6 = data_2459_V_read2529_rewind_reg_60305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_245_V_read315_phi_phi_fu_73882_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_245_V_read315_phi_phi_fu_73882_p4 = ap_phi_mux_data_245_V_read315_rewind_phi_fu_29313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_245_V_read315_phi_phi_fu_73882_p4 = data_245_V_read.read();
        } else {
            ap_phi_mux_data_245_V_read315_phi_phi_fu_73882_p4 = ap_phi_reg_pp0_iter0_data_245_V_read315_phi_reg_73878.read();
        }
    } else {
        ap_phi_mux_data_245_V_read315_phi_phi_fu_73882_p4 = ap_phi_reg_pp0_iter0_data_245_V_read315_phi_reg_73878.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_245_V_read315_rewind_phi_fu_29313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_245_V_read315_rewind_phi_fu_29313_p6 = data_245_V_read315_phi_reg_73878.read();
    } else {
        ap_phi_mux_data_245_V_read315_rewind_phi_fu_29313_p6 = data_245_V_read315_rewind_reg_29309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2460_V_read2530_phi_phi_fu_102677_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2460_V_read2530_phi_phi_fu_102677_p4 = ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_60323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2460_V_read2530_phi_phi_fu_102677_p4 = data_2460_V_read.read();
        } else {
            ap_phi_mux_data_2460_V_read2530_phi_phi_fu_102677_p4 = ap_phi_reg_pp0_iter0_data_2460_V_read2530_phi_reg_102673.read();
        }
    } else {
        ap_phi_mux_data_2460_V_read2530_phi_phi_fu_102677_p4 = ap_phi_reg_pp0_iter0_data_2460_V_read2530_phi_reg_102673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_60323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_60323_p6 = data_2460_V_read2530_phi_reg_102673.read();
    } else {
        ap_phi_mux_data_2460_V_read2530_rewind_phi_fu_60323_p6 = data_2460_V_read2530_rewind_reg_60319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2461_V_read2531_phi_phi_fu_102690_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2461_V_read2531_phi_phi_fu_102690_p4 = ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_60337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2461_V_read2531_phi_phi_fu_102690_p4 = data_2461_V_read.read();
        } else {
            ap_phi_mux_data_2461_V_read2531_phi_phi_fu_102690_p4 = ap_phi_reg_pp0_iter0_data_2461_V_read2531_phi_reg_102686.read();
        }
    } else {
        ap_phi_mux_data_2461_V_read2531_phi_phi_fu_102690_p4 = ap_phi_reg_pp0_iter0_data_2461_V_read2531_phi_reg_102686.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_60337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_60337_p6 = data_2461_V_read2531_phi_reg_102686.read();
    } else {
        ap_phi_mux_data_2461_V_read2531_rewind_phi_fu_60337_p6 = data_2461_V_read2531_rewind_reg_60333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2462_V_read2532_phi_phi_fu_102703_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2462_V_read2532_phi_phi_fu_102703_p4 = ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_60351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2462_V_read2532_phi_phi_fu_102703_p4 = data_2462_V_read.read();
        } else {
            ap_phi_mux_data_2462_V_read2532_phi_phi_fu_102703_p4 = ap_phi_reg_pp0_iter0_data_2462_V_read2532_phi_reg_102699.read();
        }
    } else {
        ap_phi_mux_data_2462_V_read2532_phi_phi_fu_102703_p4 = ap_phi_reg_pp0_iter0_data_2462_V_read2532_phi_reg_102699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_60351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_60351_p6 = data_2462_V_read2532_phi_reg_102699.read();
    } else {
        ap_phi_mux_data_2462_V_read2532_rewind_phi_fu_60351_p6 = data_2462_V_read2532_rewind_reg_60347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2463_V_read2533_phi_phi_fu_102716_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2463_V_read2533_phi_phi_fu_102716_p4 = ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_60365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2463_V_read2533_phi_phi_fu_102716_p4 = data_2463_V_read.read();
        } else {
            ap_phi_mux_data_2463_V_read2533_phi_phi_fu_102716_p4 = ap_phi_reg_pp0_iter0_data_2463_V_read2533_phi_reg_102712.read();
        }
    } else {
        ap_phi_mux_data_2463_V_read2533_phi_phi_fu_102716_p4 = ap_phi_reg_pp0_iter0_data_2463_V_read2533_phi_reg_102712.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_60365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_60365_p6 = data_2463_V_read2533_phi_reg_102712.read();
    } else {
        ap_phi_mux_data_2463_V_read2533_rewind_phi_fu_60365_p6 = data_2463_V_read2533_rewind_reg_60361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2464_V_read2534_phi_phi_fu_102729_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2464_V_read2534_phi_phi_fu_102729_p4 = ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_60379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2464_V_read2534_phi_phi_fu_102729_p4 = data_2464_V_read.read();
        } else {
            ap_phi_mux_data_2464_V_read2534_phi_phi_fu_102729_p4 = ap_phi_reg_pp0_iter0_data_2464_V_read2534_phi_reg_102725.read();
        }
    } else {
        ap_phi_mux_data_2464_V_read2534_phi_phi_fu_102729_p4 = ap_phi_reg_pp0_iter0_data_2464_V_read2534_phi_reg_102725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_60379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_60379_p6 = data_2464_V_read2534_phi_reg_102725.read();
    } else {
        ap_phi_mux_data_2464_V_read2534_rewind_phi_fu_60379_p6 = data_2464_V_read2534_rewind_reg_60375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2465_V_read2535_phi_phi_fu_102742_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2465_V_read2535_phi_phi_fu_102742_p4 = ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_60393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2465_V_read2535_phi_phi_fu_102742_p4 = data_2465_V_read.read();
        } else {
            ap_phi_mux_data_2465_V_read2535_phi_phi_fu_102742_p4 = ap_phi_reg_pp0_iter0_data_2465_V_read2535_phi_reg_102738.read();
        }
    } else {
        ap_phi_mux_data_2465_V_read2535_phi_phi_fu_102742_p4 = ap_phi_reg_pp0_iter0_data_2465_V_read2535_phi_reg_102738.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_60393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_60393_p6 = data_2465_V_read2535_phi_reg_102738.read();
    } else {
        ap_phi_mux_data_2465_V_read2535_rewind_phi_fu_60393_p6 = data_2465_V_read2535_rewind_reg_60389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2466_V_read2536_phi_phi_fu_102755_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2466_V_read2536_phi_phi_fu_102755_p4 = ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_60407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2466_V_read2536_phi_phi_fu_102755_p4 = data_2466_V_read.read();
        } else {
            ap_phi_mux_data_2466_V_read2536_phi_phi_fu_102755_p4 = ap_phi_reg_pp0_iter0_data_2466_V_read2536_phi_reg_102751.read();
        }
    } else {
        ap_phi_mux_data_2466_V_read2536_phi_phi_fu_102755_p4 = ap_phi_reg_pp0_iter0_data_2466_V_read2536_phi_reg_102751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_60407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_60407_p6 = data_2466_V_read2536_phi_reg_102751.read();
    } else {
        ap_phi_mux_data_2466_V_read2536_rewind_phi_fu_60407_p6 = data_2466_V_read2536_rewind_reg_60403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2467_V_read2537_phi_phi_fu_102768_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2467_V_read2537_phi_phi_fu_102768_p4 = ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_60421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2467_V_read2537_phi_phi_fu_102768_p4 = data_2467_V_read.read();
        } else {
            ap_phi_mux_data_2467_V_read2537_phi_phi_fu_102768_p4 = ap_phi_reg_pp0_iter0_data_2467_V_read2537_phi_reg_102764.read();
        }
    } else {
        ap_phi_mux_data_2467_V_read2537_phi_phi_fu_102768_p4 = ap_phi_reg_pp0_iter0_data_2467_V_read2537_phi_reg_102764.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_60421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_60421_p6 = data_2467_V_read2537_phi_reg_102764.read();
    } else {
        ap_phi_mux_data_2467_V_read2537_rewind_phi_fu_60421_p6 = data_2467_V_read2537_rewind_reg_60417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2468_V_read2538_phi_phi_fu_102781_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2468_V_read2538_phi_phi_fu_102781_p4 = ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_60435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2468_V_read2538_phi_phi_fu_102781_p4 = data_2468_V_read.read();
        } else {
            ap_phi_mux_data_2468_V_read2538_phi_phi_fu_102781_p4 = ap_phi_reg_pp0_iter0_data_2468_V_read2538_phi_reg_102777.read();
        }
    } else {
        ap_phi_mux_data_2468_V_read2538_phi_phi_fu_102781_p4 = ap_phi_reg_pp0_iter0_data_2468_V_read2538_phi_reg_102777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_60435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_60435_p6 = data_2468_V_read2538_phi_reg_102777.read();
    } else {
        ap_phi_mux_data_2468_V_read2538_rewind_phi_fu_60435_p6 = data_2468_V_read2538_rewind_reg_60431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2469_V_read2539_phi_phi_fu_102794_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2469_V_read2539_phi_phi_fu_102794_p4 = ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_60449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2469_V_read2539_phi_phi_fu_102794_p4 = data_2469_V_read.read();
        } else {
            ap_phi_mux_data_2469_V_read2539_phi_phi_fu_102794_p4 = ap_phi_reg_pp0_iter0_data_2469_V_read2539_phi_reg_102790.read();
        }
    } else {
        ap_phi_mux_data_2469_V_read2539_phi_phi_fu_102794_p4 = ap_phi_reg_pp0_iter0_data_2469_V_read2539_phi_reg_102790.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_60449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_60449_p6 = data_2469_V_read2539_phi_reg_102790.read();
    } else {
        ap_phi_mux_data_2469_V_read2539_rewind_phi_fu_60449_p6 = data_2469_V_read2539_rewind_reg_60445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_246_V_read316_phi_phi_fu_73895_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_246_V_read316_phi_phi_fu_73895_p4 = ap_phi_mux_data_246_V_read316_rewind_phi_fu_29327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_246_V_read316_phi_phi_fu_73895_p4 = data_246_V_read.read();
        } else {
            ap_phi_mux_data_246_V_read316_phi_phi_fu_73895_p4 = ap_phi_reg_pp0_iter0_data_246_V_read316_phi_reg_73891.read();
        }
    } else {
        ap_phi_mux_data_246_V_read316_phi_phi_fu_73895_p4 = ap_phi_reg_pp0_iter0_data_246_V_read316_phi_reg_73891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_246_V_read316_rewind_phi_fu_29327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_246_V_read316_rewind_phi_fu_29327_p6 = data_246_V_read316_phi_reg_73891.read();
    } else {
        ap_phi_mux_data_246_V_read316_rewind_phi_fu_29327_p6 = data_246_V_read316_rewind_reg_29323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2470_V_read2540_phi_phi_fu_102807_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2470_V_read2540_phi_phi_fu_102807_p4 = ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_60463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2470_V_read2540_phi_phi_fu_102807_p4 = data_2470_V_read.read();
        } else {
            ap_phi_mux_data_2470_V_read2540_phi_phi_fu_102807_p4 = ap_phi_reg_pp0_iter0_data_2470_V_read2540_phi_reg_102803.read();
        }
    } else {
        ap_phi_mux_data_2470_V_read2540_phi_phi_fu_102807_p4 = ap_phi_reg_pp0_iter0_data_2470_V_read2540_phi_reg_102803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_60463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_60463_p6 = data_2470_V_read2540_phi_reg_102803.read();
    } else {
        ap_phi_mux_data_2470_V_read2540_rewind_phi_fu_60463_p6 = data_2470_V_read2540_rewind_reg_60459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2471_V_read2541_phi_phi_fu_102820_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2471_V_read2541_phi_phi_fu_102820_p4 = ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_60477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2471_V_read2541_phi_phi_fu_102820_p4 = data_2471_V_read.read();
        } else {
            ap_phi_mux_data_2471_V_read2541_phi_phi_fu_102820_p4 = ap_phi_reg_pp0_iter0_data_2471_V_read2541_phi_reg_102816.read();
        }
    } else {
        ap_phi_mux_data_2471_V_read2541_phi_phi_fu_102820_p4 = ap_phi_reg_pp0_iter0_data_2471_V_read2541_phi_reg_102816.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_60477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_60477_p6 = data_2471_V_read2541_phi_reg_102816.read();
    } else {
        ap_phi_mux_data_2471_V_read2541_rewind_phi_fu_60477_p6 = data_2471_V_read2541_rewind_reg_60473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2472_V_read2542_phi_phi_fu_102833_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2472_V_read2542_phi_phi_fu_102833_p4 = ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_60491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2472_V_read2542_phi_phi_fu_102833_p4 = data_2472_V_read.read();
        } else {
            ap_phi_mux_data_2472_V_read2542_phi_phi_fu_102833_p4 = ap_phi_reg_pp0_iter0_data_2472_V_read2542_phi_reg_102829.read();
        }
    } else {
        ap_phi_mux_data_2472_V_read2542_phi_phi_fu_102833_p4 = ap_phi_reg_pp0_iter0_data_2472_V_read2542_phi_reg_102829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_60491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_60491_p6 = data_2472_V_read2542_phi_reg_102829.read();
    } else {
        ap_phi_mux_data_2472_V_read2542_rewind_phi_fu_60491_p6 = data_2472_V_read2542_rewind_reg_60487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2473_V_read2543_phi_phi_fu_102846_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2473_V_read2543_phi_phi_fu_102846_p4 = ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_60505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2473_V_read2543_phi_phi_fu_102846_p4 = data_2473_V_read.read();
        } else {
            ap_phi_mux_data_2473_V_read2543_phi_phi_fu_102846_p4 = ap_phi_reg_pp0_iter0_data_2473_V_read2543_phi_reg_102842.read();
        }
    } else {
        ap_phi_mux_data_2473_V_read2543_phi_phi_fu_102846_p4 = ap_phi_reg_pp0_iter0_data_2473_V_read2543_phi_reg_102842.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_60505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_60505_p6 = data_2473_V_read2543_phi_reg_102842.read();
    } else {
        ap_phi_mux_data_2473_V_read2543_rewind_phi_fu_60505_p6 = data_2473_V_read2543_rewind_reg_60501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2474_V_read2544_phi_phi_fu_102859_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2474_V_read2544_phi_phi_fu_102859_p4 = ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_60519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2474_V_read2544_phi_phi_fu_102859_p4 = data_2474_V_read.read();
        } else {
            ap_phi_mux_data_2474_V_read2544_phi_phi_fu_102859_p4 = ap_phi_reg_pp0_iter0_data_2474_V_read2544_phi_reg_102855.read();
        }
    } else {
        ap_phi_mux_data_2474_V_read2544_phi_phi_fu_102859_p4 = ap_phi_reg_pp0_iter0_data_2474_V_read2544_phi_reg_102855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_60519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_60519_p6 = data_2474_V_read2544_phi_reg_102855.read();
    } else {
        ap_phi_mux_data_2474_V_read2544_rewind_phi_fu_60519_p6 = data_2474_V_read2544_rewind_reg_60515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2475_V_read2545_phi_phi_fu_102872_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2475_V_read2545_phi_phi_fu_102872_p4 = ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_60533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2475_V_read2545_phi_phi_fu_102872_p4 = data_2475_V_read.read();
        } else {
            ap_phi_mux_data_2475_V_read2545_phi_phi_fu_102872_p4 = ap_phi_reg_pp0_iter0_data_2475_V_read2545_phi_reg_102868.read();
        }
    } else {
        ap_phi_mux_data_2475_V_read2545_phi_phi_fu_102872_p4 = ap_phi_reg_pp0_iter0_data_2475_V_read2545_phi_reg_102868.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_60533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_60533_p6 = data_2475_V_read2545_phi_reg_102868.read();
    } else {
        ap_phi_mux_data_2475_V_read2545_rewind_phi_fu_60533_p6 = data_2475_V_read2545_rewind_reg_60529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2476_V_read2546_phi_phi_fu_102885_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2476_V_read2546_phi_phi_fu_102885_p4 = ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_60547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2476_V_read2546_phi_phi_fu_102885_p4 = data_2476_V_read.read();
        } else {
            ap_phi_mux_data_2476_V_read2546_phi_phi_fu_102885_p4 = ap_phi_reg_pp0_iter0_data_2476_V_read2546_phi_reg_102881.read();
        }
    } else {
        ap_phi_mux_data_2476_V_read2546_phi_phi_fu_102885_p4 = ap_phi_reg_pp0_iter0_data_2476_V_read2546_phi_reg_102881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_60547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_60547_p6 = data_2476_V_read2546_phi_reg_102881.read();
    } else {
        ap_phi_mux_data_2476_V_read2546_rewind_phi_fu_60547_p6 = data_2476_V_read2546_rewind_reg_60543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2477_V_read2547_phi_phi_fu_102898_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2477_V_read2547_phi_phi_fu_102898_p4 = ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_60561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2477_V_read2547_phi_phi_fu_102898_p4 = data_2477_V_read.read();
        } else {
            ap_phi_mux_data_2477_V_read2547_phi_phi_fu_102898_p4 = ap_phi_reg_pp0_iter0_data_2477_V_read2547_phi_reg_102894.read();
        }
    } else {
        ap_phi_mux_data_2477_V_read2547_phi_phi_fu_102898_p4 = ap_phi_reg_pp0_iter0_data_2477_V_read2547_phi_reg_102894.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_60561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_60561_p6 = data_2477_V_read2547_phi_reg_102894.read();
    } else {
        ap_phi_mux_data_2477_V_read2547_rewind_phi_fu_60561_p6 = data_2477_V_read2547_rewind_reg_60557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2478_V_read2548_phi_phi_fu_102911_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2478_V_read2548_phi_phi_fu_102911_p4 = ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_60575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2478_V_read2548_phi_phi_fu_102911_p4 = data_2478_V_read.read();
        } else {
            ap_phi_mux_data_2478_V_read2548_phi_phi_fu_102911_p4 = ap_phi_reg_pp0_iter0_data_2478_V_read2548_phi_reg_102907.read();
        }
    } else {
        ap_phi_mux_data_2478_V_read2548_phi_phi_fu_102911_p4 = ap_phi_reg_pp0_iter0_data_2478_V_read2548_phi_reg_102907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_60575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_60575_p6 = data_2478_V_read2548_phi_reg_102907.read();
    } else {
        ap_phi_mux_data_2478_V_read2548_rewind_phi_fu_60575_p6 = data_2478_V_read2548_rewind_reg_60571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2479_V_read2549_phi_phi_fu_102924_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2479_V_read2549_phi_phi_fu_102924_p4 = ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_60589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2479_V_read2549_phi_phi_fu_102924_p4 = data_2479_V_read.read();
        } else {
            ap_phi_mux_data_2479_V_read2549_phi_phi_fu_102924_p4 = ap_phi_reg_pp0_iter0_data_2479_V_read2549_phi_reg_102920.read();
        }
    } else {
        ap_phi_mux_data_2479_V_read2549_phi_phi_fu_102924_p4 = ap_phi_reg_pp0_iter0_data_2479_V_read2549_phi_reg_102920.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_60589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_60589_p6 = data_2479_V_read2549_phi_reg_102920.read();
    } else {
        ap_phi_mux_data_2479_V_read2549_rewind_phi_fu_60589_p6 = data_2479_V_read2549_rewind_reg_60585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_247_V_read317_phi_phi_fu_73908_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_247_V_read317_phi_phi_fu_73908_p4 = ap_phi_mux_data_247_V_read317_rewind_phi_fu_29341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_247_V_read317_phi_phi_fu_73908_p4 = data_247_V_read.read();
        } else {
            ap_phi_mux_data_247_V_read317_phi_phi_fu_73908_p4 = ap_phi_reg_pp0_iter0_data_247_V_read317_phi_reg_73904.read();
        }
    } else {
        ap_phi_mux_data_247_V_read317_phi_phi_fu_73908_p4 = ap_phi_reg_pp0_iter0_data_247_V_read317_phi_reg_73904.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_247_V_read317_rewind_phi_fu_29341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_247_V_read317_rewind_phi_fu_29341_p6 = data_247_V_read317_phi_reg_73904.read();
    } else {
        ap_phi_mux_data_247_V_read317_rewind_phi_fu_29341_p6 = data_247_V_read317_rewind_reg_29337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2480_V_read2550_phi_phi_fu_102937_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2480_V_read2550_phi_phi_fu_102937_p4 = ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_60603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2480_V_read2550_phi_phi_fu_102937_p4 = data_2480_V_read.read();
        } else {
            ap_phi_mux_data_2480_V_read2550_phi_phi_fu_102937_p4 = ap_phi_reg_pp0_iter0_data_2480_V_read2550_phi_reg_102933.read();
        }
    } else {
        ap_phi_mux_data_2480_V_read2550_phi_phi_fu_102937_p4 = ap_phi_reg_pp0_iter0_data_2480_V_read2550_phi_reg_102933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_60603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_60603_p6 = data_2480_V_read2550_phi_reg_102933.read();
    } else {
        ap_phi_mux_data_2480_V_read2550_rewind_phi_fu_60603_p6 = data_2480_V_read2550_rewind_reg_60599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2481_V_read2551_phi_phi_fu_102950_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2481_V_read2551_phi_phi_fu_102950_p4 = ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_60617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2481_V_read2551_phi_phi_fu_102950_p4 = data_2481_V_read.read();
        } else {
            ap_phi_mux_data_2481_V_read2551_phi_phi_fu_102950_p4 = ap_phi_reg_pp0_iter0_data_2481_V_read2551_phi_reg_102946.read();
        }
    } else {
        ap_phi_mux_data_2481_V_read2551_phi_phi_fu_102950_p4 = ap_phi_reg_pp0_iter0_data_2481_V_read2551_phi_reg_102946.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_60617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_60617_p6 = data_2481_V_read2551_phi_reg_102946.read();
    } else {
        ap_phi_mux_data_2481_V_read2551_rewind_phi_fu_60617_p6 = data_2481_V_read2551_rewind_reg_60613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2482_V_read2552_phi_phi_fu_102963_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2482_V_read2552_phi_phi_fu_102963_p4 = ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_60631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2482_V_read2552_phi_phi_fu_102963_p4 = data_2482_V_read.read();
        } else {
            ap_phi_mux_data_2482_V_read2552_phi_phi_fu_102963_p4 = ap_phi_reg_pp0_iter0_data_2482_V_read2552_phi_reg_102959.read();
        }
    } else {
        ap_phi_mux_data_2482_V_read2552_phi_phi_fu_102963_p4 = ap_phi_reg_pp0_iter0_data_2482_V_read2552_phi_reg_102959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_60631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_60631_p6 = data_2482_V_read2552_phi_reg_102959.read();
    } else {
        ap_phi_mux_data_2482_V_read2552_rewind_phi_fu_60631_p6 = data_2482_V_read2552_rewind_reg_60627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2483_V_read2553_phi_phi_fu_102976_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2483_V_read2553_phi_phi_fu_102976_p4 = ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_60645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2483_V_read2553_phi_phi_fu_102976_p4 = data_2483_V_read.read();
        } else {
            ap_phi_mux_data_2483_V_read2553_phi_phi_fu_102976_p4 = ap_phi_reg_pp0_iter0_data_2483_V_read2553_phi_reg_102972.read();
        }
    } else {
        ap_phi_mux_data_2483_V_read2553_phi_phi_fu_102976_p4 = ap_phi_reg_pp0_iter0_data_2483_V_read2553_phi_reg_102972.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_60645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_60645_p6 = data_2483_V_read2553_phi_reg_102972.read();
    } else {
        ap_phi_mux_data_2483_V_read2553_rewind_phi_fu_60645_p6 = data_2483_V_read2553_rewind_reg_60641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2484_V_read2554_phi_phi_fu_102989_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2484_V_read2554_phi_phi_fu_102989_p4 = ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_60659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2484_V_read2554_phi_phi_fu_102989_p4 = data_2484_V_read.read();
        } else {
            ap_phi_mux_data_2484_V_read2554_phi_phi_fu_102989_p4 = ap_phi_reg_pp0_iter0_data_2484_V_read2554_phi_reg_102985.read();
        }
    } else {
        ap_phi_mux_data_2484_V_read2554_phi_phi_fu_102989_p4 = ap_phi_reg_pp0_iter0_data_2484_V_read2554_phi_reg_102985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_60659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_60659_p6 = data_2484_V_read2554_phi_reg_102985.read();
    } else {
        ap_phi_mux_data_2484_V_read2554_rewind_phi_fu_60659_p6 = data_2484_V_read2554_rewind_reg_60655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2485_V_read2555_phi_phi_fu_103002_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2485_V_read2555_phi_phi_fu_103002_p4 = ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_60673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2485_V_read2555_phi_phi_fu_103002_p4 = data_2485_V_read.read();
        } else {
            ap_phi_mux_data_2485_V_read2555_phi_phi_fu_103002_p4 = ap_phi_reg_pp0_iter0_data_2485_V_read2555_phi_reg_102998.read();
        }
    } else {
        ap_phi_mux_data_2485_V_read2555_phi_phi_fu_103002_p4 = ap_phi_reg_pp0_iter0_data_2485_V_read2555_phi_reg_102998.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_60673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_60673_p6 = data_2485_V_read2555_phi_reg_102998.read();
    } else {
        ap_phi_mux_data_2485_V_read2555_rewind_phi_fu_60673_p6 = data_2485_V_read2555_rewind_reg_60669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2486_V_read2556_phi_phi_fu_103015_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2486_V_read2556_phi_phi_fu_103015_p4 = ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_60687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2486_V_read2556_phi_phi_fu_103015_p4 = data_2486_V_read.read();
        } else {
            ap_phi_mux_data_2486_V_read2556_phi_phi_fu_103015_p4 = ap_phi_reg_pp0_iter0_data_2486_V_read2556_phi_reg_103011.read();
        }
    } else {
        ap_phi_mux_data_2486_V_read2556_phi_phi_fu_103015_p4 = ap_phi_reg_pp0_iter0_data_2486_V_read2556_phi_reg_103011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_60687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_60687_p6 = data_2486_V_read2556_phi_reg_103011.read();
    } else {
        ap_phi_mux_data_2486_V_read2556_rewind_phi_fu_60687_p6 = data_2486_V_read2556_rewind_reg_60683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2487_V_read2557_phi_phi_fu_103028_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2487_V_read2557_phi_phi_fu_103028_p4 = ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_60701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2487_V_read2557_phi_phi_fu_103028_p4 = data_2487_V_read.read();
        } else {
            ap_phi_mux_data_2487_V_read2557_phi_phi_fu_103028_p4 = ap_phi_reg_pp0_iter0_data_2487_V_read2557_phi_reg_103024.read();
        }
    } else {
        ap_phi_mux_data_2487_V_read2557_phi_phi_fu_103028_p4 = ap_phi_reg_pp0_iter0_data_2487_V_read2557_phi_reg_103024.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_60701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_60701_p6 = data_2487_V_read2557_phi_reg_103024.read();
    } else {
        ap_phi_mux_data_2487_V_read2557_rewind_phi_fu_60701_p6 = data_2487_V_read2557_rewind_reg_60697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2488_V_read2558_phi_phi_fu_103041_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2488_V_read2558_phi_phi_fu_103041_p4 = ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_60715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2488_V_read2558_phi_phi_fu_103041_p4 = data_2488_V_read.read();
        } else {
            ap_phi_mux_data_2488_V_read2558_phi_phi_fu_103041_p4 = ap_phi_reg_pp0_iter0_data_2488_V_read2558_phi_reg_103037.read();
        }
    } else {
        ap_phi_mux_data_2488_V_read2558_phi_phi_fu_103041_p4 = ap_phi_reg_pp0_iter0_data_2488_V_read2558_phi_reg_103037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_60715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_60715_p6 = data_2488_V_read2558_phi_reg_103037.read();
    } else {
        ap_phi_mux_data_2488_V_read2558_rewind_phi_fu_60715_p6 = data_2488_V_read2558_rewind_reg_60711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2489_V_read2559_phi_phi_fu_103054_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2489_V_read2559_phi_phi_fu_103054_p4 = ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_60729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2489_V_read2559_phi_phi_fu_103054_p4 = data_2489_V_read.read();
        } else {
            ap_phi_mux_data_2489_V_read2559_phi_phi_fu_103054_p4 = ap_phi_reg_pp0_iter0_data_2489_V_read2559_phi_reg_103050.read();
        }
    } else {
        ap_phi_mux_data_2489_V_read2559_phi_phi_fu_103054_p4 = ap_phi_reg_pp0_iter0_data_2489_V_read2559_phi_reg_103050.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_60729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_60729_p6 = data_2489_V_read2559_phi_reg_103050.read();
    } else {
        ap_phi_mux_data_2489_V_read2559_rewind_phi_fu_60729_p6 = data_2489_V_read2559_rewind_reg_60725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_248_V_read318_phi_phi_fu_73921_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_248_V_read318_phi_phi_fu_73921_p4 = ap_phi_mux_data_248_V_read318_rewind_phi_fu_29355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_248_V_read318_phi_phi_fu_73921_p4 = data_248_V_read.read();
        } else {
            ap_phi_mux_data_248_V_read318_phi_phi_fu_73921_p4 = ap_phi_reg_pp0_iter0_data_248_V_read318_phi_reg_73917.read();
        }
    } else {
        ap_phi_mux_data_248_V_read318_phi_phi_fu_73921_p4 = ap_phi_reg_pp0_iter0_data_248_V_read318_phi_reg_73917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_248_V_read318_rewind_phi_fu_29355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_248_V_read318_rewind_phi_fu_29355_p6 = data_248_V_read318_phi_reg_73917.read();
    } else {
        ap_phi_mux_data_248_V_read318_rewind_phi_fu_29355_p6 = data_248_V_read318_rewind_reg_29351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2490_V_read2560_phi_phi_fu_103067_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2490_V_read2560_phi_phi_fu_103067_p4 = ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_60743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2490_V_read2560_phi_phi_fu_103067_p4 = data_2490_V_read.read();
        } else {
            ap_phi_mux_data_2490_V_read2560_phi_phi_fu_103067_p4 = ap_phi_reg_pp0_iter0_data_2490_V_read2560_phi_reg_103063.read();
        }
    } else {
        ap_phi_mux_data_2490_V_read2560_phi_phi_fu_103067_p4 = ap_phi_reg_pp0_iter0_data_2490_V_read2560_phi_reg_103063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_60743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_60743_p6 = data_2490_V_read2560_phi_reg_103063.read();
    } else {
        ap_phi_mux_data_2490_V_read2560_rewind_phi_fu_60743_p6 = data_2490_V_read2560_rewind_reg_60739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2491_V_read2561_phi_phi_fu_103080_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2491_V_read2561_phi_phi_fu_103080_p4 = ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_60757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2491_V_read2561_phi_phi_fu_103080_p4 = data_2491_V_read.read();
        } else {
            ap_phi_mux_data_2491_V_read2561_phi_phi_fu_103080_p4 = ap_phi_reg_pp0_iter0_data_2491_V_read2561_phi_reg_103076.read();
        }
    } else {
        ap_phi_mux_data_2491_V_read2561_phi_phi_fu_103080_p4 = ap_phi_reg_pp0_iter0_data_2491_V_read2561_phi_reg_103076.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_60757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_60757_p6 = data_2491_V_read2561_phi_reg_103076.read();
    } else {
        ap_phi_mux_data_2491_V_read2561_rewind_phi_fu_60757_p6 = data_2491_V_read2561_rewind_reg_60753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2492_V_read2562_phi_phi_fu_103093_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2492_V_read2562_phi_phi_fu_103093_p4 = ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_60771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2492_V_read2562_phi_phi_fu_103093_p4 = data_2492_V_read.read();
        } else {
            ap_phi_mux_data_2492_V_read2562_phi_phi_fu_103093_p4 = ap_phi_reg_pp0_iter0_data_2492_V_read2562_phi_reg_103089.read();
        }
    } else {
        ap_phi_mux_data_2492_V_read2562_phi_phi_fu_103093_p4 = ap_phi_reg_pp0_iter0_data_2492_V_read2562_phi_reg_103089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_60771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_60771_p6 = data_2492_V_read2562_phi_reg_103089.read();
    } else {
        ap_phi_mux_data_2492_V_read2562_rewind_phi_fu_60771_p6 = data_2492_V_read2562_rewind_reg_60767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2493_V_read2563_phi_phi_fu_103106_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2493_V_read2563_phi_phi_fu_103106_p4 = ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_60785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2493_V_read2563_phi_phi_fu_103106_p4 = data_2493_V_read.read();
        } else {
            ap_phi_mux_data_2493_V_read2563_phi_phi_fu_103106_p4 = ap_phi_reg_pp0_iter0_data_2493_V_read2563_phi_reg_103102.read();
        }
    } else {
        ap_phi_mux_data_2493_V_read2563_phi_phi_fu_103106_p4 = ap_phi_reg_pp0_iter0_data_2493_V_read2563_phi_reg_103102.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_60785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_60785_p6 = data_2493_V_read2563_phi_reg_103102.read();
    } else {
        ap_phi_mux_data_2493_V_read2563_rewind_phi_fu_60785_p6 = data_2493_V_read2563_rewind_reg_60781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2494_V_read2564_phi_phi_fu_103119_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2494_V_read2564_phi_phi_fu_103119_p4 = ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_60799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2494_V_read2564_phi_phi_fu_103119_p4 = data_2494_V_read.read();
        } else {
            ap_phi_mux_data_2494_V_read2564_phi_phi_fu_103119_p4 = ap_phi_reg_pp0_iter0_data_2494_V_read2564_phi_reg_103115.read();
        }
    } else {
        ap_phi_mux_data_2494_V_read2564_phi_phi_fu_103119_p4 = ap_phi_reg_pp0_iter0_data_2494_V_read2564_phi_reg_103115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_60799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_60799_p6 = data_2494_V_read2564_phi_reg_103115.read();
    } else {
        ap_phi_mux_data_2494_V_read2564_rewind_phi_fu_60799_p6 = data_2494_V_read2564_rewind_reg_60795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2495_V_read2565_phi_phi_fu_103132_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2495_V_read2565_phi_phi_fu_103132_p4 = ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_60813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2495_V_read2565_phi_phi_fu_103132_p4 = data_2495_V_read.read();
        } else {
            ap_phi_mux_data_2495_V_read2565_phi_phi_fu_103132_p4 = ap_phi_reg_pp0_iter0_data_2495_V_read2565_phi_reg_103128.read();
        }
    } else {
        ap_phi_mux_data_2495_V_read2565_phi_phi_fu_103132_p4 = ap_phi_reg_pp0_iter0_data_2495_V_read2565_phi_reg_103128.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_60813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_60813_p6 = data_2495_V_read2565_phi_reg_103128.read();
    } else {
        ap_phi_mux_data_2495_V_read2565_rewind_phi_fu_60813_p6 = data_2495_V_read2565_rewind_reg_60809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2496_V_read2566_phi_phi_fu_103145_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2496_V_read2566_phi_phi_fu_103145_p4 = ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_60827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2496_V_read2566_phi_phi_fu_103145_p4 = data_2496_V_read.read();
        } else {
            ap_phi_mux_data_2496_V_read2566_phi_phi_fu_103145_p4 = ap_phi_reg_pp0_iter0_data_2496_V_read2566_phi_reg_103141.read();
        }
    } else {
        ap_phi_mux_data_2496_V_read2566_phi_phi_fu_103145_p4 = ap_phi_reg_pp0_iter0_data_2496_V_read2566_phi_reg_103141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_60827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_60827_p6 = data_2496_V_read2566_phi_reg_103141.read();
    } else {
        ap_phi_mux_data_2496_V_read2566_rewind_phi_fu_60827_p6 = data_2496_V_read2566_rewind_reg_60823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2497_V_read2567_phi_phi_fu_103158_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2497_V_read2567_phi_phi_fu_103158_p4 = ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_60841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2497_V_read2567_phi_phi_fu_103158_p4 = data_2497_V_read.read();
        } else {
            ap_phi_mux_data_2497_V_read2567_phi_phi_fu_103158_p4 = ap_phi_reg_pp0_iter0_data_2497_V_read2567_phi_reg_103154.read();
        }
    } else {
        ap_phi_mux_data_2497_V_read2567_phi_phi_fu_103158_p4 = ap_phi_reg_pp0_iter0_data_2497_V_read2567_phi_reg_103154.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_60841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_60841_p6 = data_2497_V_read2567_phi_reg_103154.read();
    } else {
        ap_phi_mux_data_2497_V_read2567_rewind_phi_fu_60841_p6 = data_2497_V_read2567_rewind_reg_60837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2498_V_read2568_phi_phi_fu_103171_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2498_V_read2568_phi_phi_fu_103171_p4 = ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_60855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2498_V_read2568_phi_phi_fu_103171_p4 = data_2498_V_read.read();
        } else {
            ap_phi_mux_data_2498_V_read2568_phi_phi_fu_103171_p4 = ap_phi_reg_pp0_iter0_data_2498_V_read2568_phi_reg_103167.read();
        }
    } else {
        ap_phi_mux_data_2498_V_read2568_phi_phi_fu_103171_p4 = ap_phi_reg_pp0_iter0_data_2498_V_read2568_phi_reg_103167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_60855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_60855_p6 = data_2498_V_read2568_phi_reg_103167.read();
    } else {
        ap_phi_mux_data_2498_V_read2568_rewind_phi_fu_60855_p6 = data_2498_V_read2568_rewind_reg_60851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2499_V_read2569_phi_phi_fu_103184_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2499_V_read2569_phi_phi_fu_103184_p4 = ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_60869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2499_V_read2569_phi_phi_fu_103184_p4 = data_2499_V_read.read();
        } else {
            ap_phi_mux_data_2499_V_read2569_phi_phi_fu_103184_p4 = ap_phi_reg_pp0_iter0_data_2499_V_read2569_phi_reg_103180.read();
        }
    } else {
        ap_phi_mux_data_2499_V_read2569_phi_phi_fu_103184_p4 = ap_phi_reg_pp0_iter0_data_2499_V_read2569_phi_reg_103180.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_60869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_60869_p6 = data_2499_V_read2569_phi_reg_103180.read();
    } else {
        ap_phi_mux_data_2499_V_read2569_rewind_phi_fu_60869_p6 = data_2499_V_read2569_rewind_reg_60865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_249_V_read319_phi_phi_fu_73934_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_249_V_read319_phi_phi_fu_73934_p4 = ap_phi_mux_data_249_V_read319_rewind_phi_fu_29369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_249_V_read319_phi_phi_fu_73934_p4 = data_249_V_read.read();
        } else {
            ap_phi_mux_data_249_V_read319_phi_phi_fu_73934_p4 = ap_phi_reg_pp0_iter0_data_249_V_read319_phi_reg_73930.read();
        }
    } else {
        ap_phi_mux_data_249_V_read319_phi_phi_fu_73934_p4 = ap_phi_reg_pp0_iter0_data_249_V_read319_phi_reg_73930.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_249_V_read319_rewind_phi_fu_29369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_249_V_read319_rewind_phi_fu_29369_p6 = data_249_V_read319_phi_reg_73930.read();
    } else {
        ap_phi_mux_data_249_V_read319_rewind_phi_fu_29369_p6 = data_249_V_read319_rewind_reg_29365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_24_V_read94_phi_phi_fu_71009_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_24_V_read94_phi_phi_fu_71009_p4 = ap_phi_mux_data_24_V_read94_rewind_phi_fu_26219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_24_V_read94_phi_phi_fu_71009_p4 = data_24_V_read.read();
        } else {
            ap_phi_mux_data_24_V_read94_phi_phi_fu_71009_p4 = ap_phi_reg_pp0_iter0_data_24_V_read94_phi_reg_71005.read();
        }
    } else {
        ap_phi_mux_data_24_V_read94_phi_phi_fu_71009_p4 = ap_phi_reg_pp0_iter0_data_24_V_read94_phi_reg_71005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_24_V_read94_rewind_phi_fu_26219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_24_V_read94_rewind_phi_fu_26219_p6 = data_24_V_read94_phi_reg_71005.read();
    } else {
        ap_phi_mux_data_24_V_read94_rewind_phi_fu_26219_p6 = data_24_V_read94_rewind_reg_26215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2500_V_read2570_phi_phi_fu_103197_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2500_V_read2570_phi_phi_fu_103197_p4 = ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_60883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2500_V_read2570_phi_phi_fu_103197_p4 = data_2500_V_read.read();
        } else {
            ap_phi_mux_data_2500_V_read2570_phi_phi_fu_103197_p4 = ap_phi_reg_pp0_iter0_data_2500_V_read2570_phi_reg_103193.read();
        }
    } else {
        ap_phi_mux_data_2500_V_read2570_phi_phi_fu_103197_p4 = ap_phi_reg_pp0_iter0_data_2500_V_read2570_phi_reg_103193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_60883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_60883_p6 = data_2500_V_read2570_phi_reg_103193.read();
    } else {
        ap_phi_mux_data_2500_V_read2570_rewind_phi_fu_60883_p6 = data_2500_V_read2570_rewind_reg_60879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2501_V_read2571_phi_phi_fu_103210_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2501_V_read2571_phi_phi_fu_103210_p4 = ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_60897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2501_V_read2571_phi_phi_fu_103210_p4 = data_2501_V_read.read();
        } else {
            ap_phi_mux_data_2501_V_read2571_phi_phi_fu_103210_p4 = ap_phi_reg_pp0_iter0_data_2501_V_read2571_phi_reg_103206.read();
        }
    } else {
        ap_phi_mux_data_2501_V_read2571_phi_phi_fu_103210_p4 = ap_phi_reg_pp0_iter0_data_2501_V_read2571_phi_reg_103206.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_60897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_60897_p6 = data_2501_V_read2571_phi_reg_103206.read();
    } else {
        ap_phi_mux_data_2501_V_read2571_rewind_phi_fu_60897_p6 = data_2501_V_read2571_rewind_reg_60893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2502_V_read2572_phi_phi_fu_103223_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2502_V_read2572_phi_phi_fu_103223_p4 = ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_60911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2502_V_read2572_phi_phi_fu_103223_p4 = data_2502_V_read.read();
        } else {
            ap_phi_mux_data_2502_V_read2572_phi_phi_fu_103223_p4 = ap_phi_reg_pp0_iter0_data_2502_V_read2572_phi_reg_103219.read();
        }
    } else {
        ap_phi_mux_data_2502_V_read2572_phi_phi_fu_103223_p4 = ap_phi_reg_pp0_iter0_data_2502_V_read2572_phi_reg_103219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_60911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_60911_p6 = data_2502_V_read2572_phi_reg_103219.read();
    } else {
        ap_phi_mux_data_2502_V_read2572_rewind_phi_fu_60911_p6 = data_2502_V_read2572_rewind_reg_60907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2503_V_read2573_phi_phi_fu_103236_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2503_V_read2573_phi_phi_fu_103236_p4 = ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_60925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2503_V_read2573_phi_phi_fu_103236_p4 = data_2503_V_read.read();
        } else {
            ap_phi_mux_data_2503_V_read2573_phi_phi_fu_103236_p4 = ap_phi_reg_pp0_iter0_data_2503_V_read2573_phi_reg_103232.read();
        }
    } else {
        ap_phi_mux_data_2503_V_read2573_phi_phi_fu_103236_p4 = ap_phi_reg_pp0_iter0_data_2503_V_read2573_phi_reg_103232.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_60925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_60925_p6 = data_2503_V_read2573_phi_reg_103232.read();
    } else {
        ap_phi_mux_data_2503_V_read2573_rewind_phi_fu_60925_p6 = data_2503_V_read2573_rewind_reg_60921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2504_V_read2574_phi_phi_fu_103249_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2504_V_read2574_phi_phi_fu_103249_p4 = ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_60939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2504_V_read2574_phi_phi_fu_103249_p4 = data_2504_V_read.read();
        } else {
            ap_phi_mux_data_2504_V_read2574_phi_phi_fu_103249_p4 = ap_phi_reg_pp0_iter0_data_2504_V_read2574_phi_reg_103245.read();
        }
    } else {
        ap_phi_mux_data_2504_V_read2574_phi_phi_fu_103249_p4 = ap_phi_reg_pp0_iter0_data_2504_V_read2574_phi_reg_103245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_60939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_60939_p6 = data_2504_V_read2574_phi_reg_103245.read();
    } else {
        ap_phi_mux_data_2504_V_read2574_rewind_phi_fu_60939_p6 = data_2504_V_read2574_rewind_reg_60935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2505_V_read2575_phi_phi_fu_103262_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2505_V_read2575_phi_phi_fu_103262_p4 = ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_60953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2505_V_read2575_phi_phi_fu_103262_p4 = data_2505_V_read.read();
        } else {
            ap_phi_mux_data_2505_V_read2575_phi_phi_fu_103262_p4 = ap_phi_reg_pp0_iter0_data_2505_V_read2575_phi_reg_103258.read();
        }
    } else {
        ap_phi_mux_data_2505_V_read2575_phi_phi_fu_103262_p4 = ap_phi_reg_pp0_iter0_data_2505_V_read2575_phi_reg_103258.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_60953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_60953_p6 = data_2505_V_read2575_phi_reg_103258.read();
    } else {
        ap_phi_mux_data_2505_V_read2575_rewind_phi_fu_60953_p6 = data_2505_V_read2575_rewind_reg_60949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2506_V_read2576_phi_phi_fu_103275_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2506_V_read2576_phi_phi_fu_103275_p4 = ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_60967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2506_V_read2576_phi_phi_fu_103275_p4 = data_2506_V_read.read();
        } else {
            ap_phi_mux_data_2506_V_read2576_phi_phi_fu_103275_p4 = ap_phi_reg_pp0_iter0_data_2506_V_read2576_phi_reg_103271.read();
        }
    } else {
        ap_phi_mux_data_2506_V_read2576_phi_phi_fu_103275_p4 = ap_phi_reg_pp0_iter0_data_2506_V_read2576_phi_reg_103271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_60967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_60967_p6 = data_2506_V_read2576_phi_reg_103271.read();
    } else {
        ap_phi_mux_data_2506_V_read2576_rewind_phi_fu_60967_p6 = data_2506_V_read2576_rewind_reg_60963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2507_V_read2577_phi_phi_fu_103288_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2507_V_read2577_phi_phi_fu_103288_p4 = ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_60981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2507_V_read2577_phi_phi_fu_103288_p4 = data_2507_V_read.read();
        } else {
            ap_phi_mux_data_2507_V_read2577_phi_phi_fu_103288_p4 = ap_phi_reg_pp0_iter0_data_2507_V_read2577_phi_reg_103284.read();
        }
    } else {
        ap_phi_mux_data_2507_V_read2577_phi_phi_fu_103288_p4 = ap_phi_reg_pp0_iter0_data_2507_V_read2577_phi_reg_103284.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_60981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_60981_p6 = data_2507_V_read2577_phi_reg_103284.read();
    } else {
        ap_phi_mux_data_2507_V_read2577_rewind_phi_fu_60981_p6 = data_2507_V_read2577_rewind_reg_60977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2508_V_read2578_phi_phi_fu_103301_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2508_V_read2578_phi_phi_fu_103301_p4 = ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_60995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2508_V_read2578_phi_phi_fu_103301_p4 = data_2508_V_read.read();
        } else {
            ap_phi_mux_data_2508_V_read2578_phi_phi_fu_103301_p4 = ap_phi_reg_pp0_iter0_data_2508_V_read2578_phi_reg_103297.read();
        }
    } else {
        ap_phi_mux_data_2508_V_read2578_phi_phi_fu_103301_p4 = ap_phi_reg_pp0_iter0_data_2508_V_read2578_phi_reg_103297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_60995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_60995_p6 = data_2508_V_read2578_phi_reg_103297.read();
    } else {
        ap_phi_mux_data_2508_V_read2578_rewind_phi_fu_60995_p6 = data_2508_V_read2578_rewind_reg_60991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2509_V_read2579_phi_phi_fu_103314_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2509_V_read2579_phi_phi_fu_103314_p4 = ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_61009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2509_V_read2579_phi_phi_fu_103314_p4 = data_2509_V_read.read();
        } else {
            ap_phi_mux_data_2509_V_read2579_phi_phi_fu_103314_p4 = ap_phi_reg_pp0_iter0_data_2509_V_read2579_phi_reg_103310.read();
        }
    } else {
        ap_phi_mux_data_2509_V_read2579_phi_phi_fu_103314_p4 = ap_phi_reg_pp0_iter0_data_2509_V_read2579_phi_reg_103310.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_61009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_61009_p6 = data_2509_V_read2579_phi_reg_103310.read();
    } else {
        ap_phi_mux_data_2509_V_read2579_rewind_phi_fu_61009_p6 = data_2509_V_read2579_rewind_reg_61005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_250_V_read320_phi_phi_fu_73947_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_250_V_read320_phi_phi_fu_73947_p4 = ap_phi_mux_data_250_V_read320_rewind_phi_fu_29383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_250_V_read320_phi_phi_fu_73947_p4 = data_250_V_read.read();
        } else {
            ap_phi_mux_data_250_V_read320_phi_phi_fu_73947_p4 = ap_phi_reg_pp0_iter0_data_250_V_read320_phi_reg_73943.read();
        }
    } else {
        ap_phi_mux_data_250_V_read320_phi_phi_fu_73947_p4 = ap_phi_reg_pp0_iter0_data_250_V_read320_phi_reg_73943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_250_V_read320_rewind_phi_fu_29383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_250_V_read320_rewind_phi_fu_29383_p6 = data_250_V_read320_phi_reg_73943.read();
    } else {
        ap_phi_mux_data_250_V_read320_rewind_phi_fu_29383_p6 = data_250_V_read320_rewind_reg_29379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2510_V_read2580_phi_phi_fu_103327_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2510_V_read2580_phi_phi_fu_103327_p4 = ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_61023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2510_V_read2580_phi_phi_fu_103327_p4 = data_2510_V_read.read();
        } else {
            ap_phi_mux_data_2510_V_read2580_phi_phi_fu_103327_p4 = ap_phi_reg_pp0_iter0_data_2510_V_read2580_phi_reg_103323.read();
        }
    } else {
        ap_phi_mux_data_2510_V_read2580_phi_phi_fu_103327_p4 = ap_phi_reg_pp0_iter0_data_2510_V_read2580_phi_reg_103323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_61023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_61023_p6 = data_2510_V_read2580_phi_reg_103323.read();
    } else {
        ap_phi_mux_data_2510_V_read2580_rewind_phi_fu_61023_p6 = data_2510_V_read2580_rewind_reg_61019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2511_V_read2581_phi_phi_fu_103340_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2511_V_read2581_phi_phi_fu_103340_p4 = ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_61037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2511_V_read2581_phi_phi_fu_103340_p4 = data_2511_V_read.read();
        } else {
            ap_phi_mux_data_2511_V_read2581_phi_phi_fu_103340_p4 = ap_phi_reg_pp0_iter0_data_2511_V_read2581_phi_reg_103336.read();
        }
    } else {
        ap_phi_mux_data_2511_V_read2581_phi_phi_fu_103340_p4 = ap_phi_reg_pp0_iter0_data_2511_V_read2581_phi_reg_103336.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_61037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_61037_p6 = data_2511_V_read2581_phi_reg_103336.read();
    } else {
        ap_phi_mux_data_2511_V_read2581_rewind_phi_fu_61037_p6 = data_2511_V_read2581_rewind_reg_61033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2512_V_read2582_phi_phi_fu_103353_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2512_V_read2582_phi_phi_fu_103353_p4 = ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_61051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2512_V_read2582_phi_phi_fu_103353_p4 = data_2512_V_read.read();
        } else {
            ap_phi_mux_data_2512_V_read2582_phi_phi_fu_103353_p4 = ap_phi_reg_pp0_iter0_data_2512_V_read2582_phi_reg_103349.read();
        }
    } else {
        ap_phi_mux_data_2512_V_read2582_phi_phi_fu_103353_p4 = ap_phi_reg_pp0_iter0_data_2512_V_read2582_phi_reg_103349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_61051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_61051_p6 = data_2512_V_read2582_phi_reg_103349.read();
    } else {
        ap_phi_mux_data_2512_V_read2582_rewind_phi_fu_61051_p6 = data_2512_V_read2582_rewind_reg_61047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2513_V_read2583_phi_phi_fu_103366_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2513_V_read2583_phi_phi_fu_103366_p4 = ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_61065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2513_V_read2583_phi_phi_fu_103366_p4 = data_2513_V_read.read();
        } else {
            ap_phi_mux_data_2513_V_read2583_phi_phi_fu_103366_p4 = ap_phi_reg_pp0_iter0_data_2513_V_read2583_phi_reg_103362.read();
        }
    } else {
        ap_phi_mux_data_2513_V_read2583_phi_phi_fu_103366_p4 = ap_phi_reg_pp0_iter0_data_2513_V_read2583_phi_reg_103362.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_61065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_61065_p6 = data_2513_V_read2583_phi_reg_103362.read();
    } else {
        ap_phi_mux_data_2513_V_read2583_rewind_phi_fu_61065_p6 = data_2513_V_read2583_rewind_reg_61061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2514_V_read2584_phi_phi_fu_103379_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2514_V_read2584_phi_phi_fu_103379_p4 = ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_61079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2514_V_read2584_phi_phi_fu_103379_p4 = data_2514_V_read.read();
        } else {
            ap_phi_mux_data_2514_V_read2584_phi_phi_fu_103379_p4 = ap_phi_reg_pp0_iter0_data_2514_V_read2584_phi_reg_103375.read();
        }
    } else {
        ap_phi_mux_data_2514_V_read2584_phi_phi_fu_103379_p4 = ap_phi_reg_pp0_iter0_data_2514_V_read2584_phi_reg_103375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_61079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_61079_p6 = data_2514_V_read2584_phi_reg_103375.read();
    } else {
        ap_phi_mux_data_2514_V_read2584_rewind_phi_fu_61079_p6 = data_2514_V_read2584_rewind_reg_61075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2515_V_read2585_phi_phi_fu_103392_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2515_V_read2585_phi_phi_fu_103392_p4 = ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_61093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2515_V_read2585_phi_phi_fu_103392_p4 = data_2515_V_read.read();
        } else {
            ap_phi_mux_data_2515_V_read2585_phi_phi_fu_103392_p4 = ap_phi_reg_pp0_iter0_data_2515_V_read2585_phi_reg_103388.read();
        }
    } else {
        ap_phi_mux_data_2515_V_read2585_phi_phi_fu_103392_p4 = ap_phi_reg_pp0_iter0_data_2515_V_read2585_phi_reg_103388.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_61093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_61093_p6 = data_2515_V_read2585_phi_reg_103388.read();
    } else {
        ap_phi_mux_data_2515_V_read2585_rewind_phi_fu_61093_p6 = data_2515_V_read2585_rewind_reg_61089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2516_V_read2586_phi_phi_fu_103405_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2516_V_read2586_phi_phi_fu_103405_p4 = ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_61107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2516_V_read2586_phi_phi_fu_103405_p4 = data_2516_V_read.read();
        } else {
            ap_phi_mux_data_2516_V_read2586_phi_phi_fu_103405_p4 = ap_phi_reg_pp0_iter0_data_2516_V_read2586_phi_reg_103401.read();
        }
    } else {
        ap_phi_mux_data_2516_V_read2586_phi_phi_fu_103405_p4 = ap_phi_reg_pp0_iter0_data_2516_V_read2586_phi_reg_103401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_61107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_61107_p6 = data_2516_V_read2586_phi_reg_103401.read();
    } else {
        ap_phi_mux_data_2516_V_read2586_rewind_phi_fu_61107_p6 = data_2516_V_read2586_rewind_reg_61103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2517_V_read2587_phi_phi_fu_103418_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2517_V_read2587_phi_phi_fu_103418_p4 = ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_61121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2517_V_read2587_phi_phi_fu_103418_p4 = data_2517_V_read.read();
        } else {
            ap_phi_mux_data_2517_V_read2587_phi_phi_fu_103418_p4 = ap_phi_reg_pp0_iter0_data_2517_V_read2587_phi_reg_103414.read();
        }
    } else {
        ap_phi_mux_data_2517_V_read2587_phi_phi_fu_103418_p4 = ap_phi_reg_pp0_iter0_data_2517_V_read2587_phi_reg_103414.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_61121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_61121_p6 = data_2517_V_read2587_phi_reg_103414.read();
    } else {
        ap_phi_mux_data_2517_V_read2587_rewind_phi_fu_61121_p6 = data_2517_V_read2587_rewind_reg_61117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2518_V_read2588_phi_phi_fu_103431_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2518_V_read2588_phi_phi_fu_103431_p4 = ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_61135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2518_V_read2588_phi_phi_fu_103431_p4 = data_2518_V_read.read();
        } else {
            ap_phi_mux_data_2518_V_read2588_phi_phi_fu_103431_p4 = ap_phi_reg_pp0_iter0_data_2518_V_read2588_phi_reg_103427.read();
        }
    } else {
        ap_phi_mux_data_2518_V_read2588_phi_phi_fu_103431_p4 = ap_phi_reg_pp0_iter0_data_2518_V_read2588_phi_reg_103427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_61135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_61135_p6 = data_2518_V_read2588_phi_reg_103427.read();
    } else {
        ap_phi_mux_data_2518_V_read2588_rewind_phi_fu_61135_p6 = data_2518_V_read2588_rewind_reg_61131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2519_V_read2589_phi_phi_fu_103444_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2519_V_read2589_phi_phi_fu_103444_p4 = ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_61149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2519_V_read2589_phi_phi_fu_103444_p4 = data_2519_V_read.read();
        } else {
            ap_phi_mux_data_2519_V_read2589_phi_phi_fu_103444_p4 = ap_phi_reg_pp0_iter0_data_2519_V_read2589_phi_reg_103440.read();
        }
    } else {
        ap_phi_mux_data_2519_V_read2589_phi_phi_fu_103444_p4 = ap_phi_reg_pp0_iter0_data_2519_V_read2589_phi_reg_103440.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_61149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_61149_p6 = data_2519_V_read2589_phi_reg_103440.read();
    } else {
        ap_phi_mux_data_2519_V_read2589_rewind_phi_fu_61149_p6 = data_2519_V_read2589_rewind_reg_61145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_251_V_read321_phi_phi_fu_73960_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_251_V_read321_phi_phi_fu_73960_p4 = ap_phi_mux_data_251_V_read321_rewind_phi_fu_29397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_251_V_read321_phi_phi_fu_73960_p4 = data_251_V_read.read();
        } else {
            ap_phi_mux_data_251_V_read321_phi_phi_fu_73960_p4 = ap_phi_reg_pp0_iter0_data_251_V_read321_phi_reg_73956.read();
        }
    } else {
        ap_phi_mux_data_251_V_read321_phi_phi_fu_73960_p4 = ap_phi_reg_pp0_iter0_data_251_V_read321_phi_reg_73956.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_251_V_read321_rewind_phi_fu_29397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_251_V_read321_rewind_phi_fu_29397_p6 = data_251_V_read321_phi_reg_73956.read();
    } else {
        ap_phi_mux_data_251_V_read321_rewind_phi_fu_29397_p6 = data_251_V_read321_rewind_reg_29393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2520_V_read2590_phi_phi_fu_103457_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2520_V_read2590_phi_phi_fu_103457_p4 = ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_61163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2520_V_read2590_phi_phi_fu_103457_p4 = data_2520_V_read.read();
        } else {
            ap_phi_mux_data_2520_V_read2590_phi_phi_fu_103457_p4 = ap_phi_reg_pp0_iter0_data_2520_V_read2590_phi_reg_103453.read();
        }
    } else {
        ap_phi_mux_data_2520_V_read2590_phi_phi_fu_103457_p4 = ap_phi_reg_pp0_iter0_data_2520_V_read2590_phi_reg_103453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_61163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_61163_p6 = data_2520_V_read2590_phi_reg_103453.read();
    } else {
        ap_phi_mux_data_2520_V_read2590_rewind_phi_fu_61163_p6 = data_2520_V_read2590_rewind_reg_61159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2521_V_read2591_phi_phi_fu_103470_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2521_V_read2591_phi_phi_fu_103470_p4 = ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_61177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2521_V_read2591_phi_phi_fu_103470_p4 = data_2521_V_read.read();
        } else {
            ap_phi_mux_data_2521_V_read2591_phi_phi_fu_103470_p4 = ap_phi_reg_pp0_iter0_data_2521_V_read2591_phi_reg_103466.read();
        }
    } else {
        ap_phi_mux_data_2521_V_read2591_phi_phi_fu_103470_p4 = ap_phi_reg_pp0_iter0_data_2521_V_read2591_phi_reg_103466.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_61177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_61177_p6 = data_2521_V_read2591_phi_reg_103466.read();
    } else {
        ap_phi_mux_data_2521_V_read2591_rewind_phi_fu_61177_p6 = data_2521_V_read2591_rewind_reg_61173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2522_V_read2592_phi_phi_fu_103483_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2522_V_read2592_phi_phi_fu_103483_p4 = ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_61191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2522_V_read2592_phi_phi_fu_103483_p4 = data_2522_V_read.read();
        } else {
            ap_phi_mux_data_2522_V_read2592_phi_phi_fu_103483_p4 = ap_phi_reg_pp0_iter0_data_2522_V_read2592_phi_reg_103479.read();
        }
    } else {
        ap_phi_mux_data_2522_V_read2592_phi_phi_fu_103483_p4 = ap_phi_reg_pp0_iter0_data_2522_V_read2592_phi_reg_103479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_61191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_61191_p6 = data_2522_V_read2592_phi_reg_103479.read();
    } else {
        ap_phi_mux_data_2522_V_read2592_rewind_phi_fu_61191_p6 = data_2522_V_read2592_rewind_reg_61187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2523_V_read2593_phi_phi_fu_103496_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2523_V_read2593_phi_phi_fu_103496_p4 = ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_61205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2523_V_read2593_phi_phi_fu_103496_p4 = data_2523_V_read.read();
        } else {
            ap_phi_mux_data_2523_V_read2593_phi_phi_fu_103496_p4 = ap_phi_reg_pp0_iter0_data_2523_V_read2593_phi_reg_103492.read();
        }
    } else {
        ap_phi_mux_data_2523_V_read2593_phi_phi_fu_103496_p4 = ap_phi_reg_pp0_iter0_data_2523_V_read2593_phi_reg_103492.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_61205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_61205_p6 = data_2523_V_read2593_phi_reg_103492.read();
    } else {
        ap_phi_mux_data_2523_V_read2593_rewind_phi_fu_61205_p6 = data_2523_V_read2593_rewind_reg_61201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2524_V_read2594_phi_phi_fu_103509_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2524_V_read2594_phi_phi_fu_103509_p4 = ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_61219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2524_V_read2594_phi_phi_fu_103509_p4 = data_2524_V_read.read();
        } else {
            ap_phi_mux_data_2524_V_read2594_phi_phi_fu_103509_p4 = ap_phi_reg_pp0_iter0_data_2524_V_read2594_phi_reg_103505.read();
        }
    } else {
        ap_phi_mux_data_2524_V_read2594_phi_phi_fu_103509_p4 = ap_phi_reg_pp0_iter0_data_2524_V_read2594_phi_reg_103505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_61219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_61219_p6 = data_2524_V_read2594_phi_reg_103505.read();
    } else {
        ap_phi_mux_data_2524_V_read2594_rewind_phi_fu_61219_p6 = data_2524_V_read2594_rewind_reg_61215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2525_V_read2595_phi_phi_fu_103522_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2525_V_read2595_phi_phi_fu_103522_p4 = ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_61233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2525_V_read2595_phi_phi_fu_103522_p4 = data_2525_V_read.read();
        } else {
            ap_phi_mux_data_2525_V_read2595_phi_phi_fu_103522_p4 = ap_phi_reg_pp0_iter0_data_2525_V_read2595_phi_reg_103518.read();
        }
    } else {
        ap_phi_mux_data_2525_V_read2595_phi_phi_fu_103522_p4 = ap_phi_reg_pp0_iter0_data_2525_V_read2595_phi_reg_103518.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_61233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_61233_p6 = data_2525_V_read2595_phi_reg_103518.read();
    } else {
        ap_phi_mux_data_2525_V_read2595_rewind_phi_fu_61233_p6 = data_2525_V_read2595_rewind_reg_61229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2526_V_read2596_phi_phi_fu_103535_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2526_V_read2596_phi_phi_fu_103535_p4 = ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_61247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2526_V_read2596_phi_phi_fu_103535_p4 = data_2526_V_read.read();
        } else {
            ap_phi_mux_data_2526_V_read2596_phi_phi_fu_103535_p4 = ap_phi_reg_pp0_iter0_data_2526_V_read2596_phi_reg_103531.read();
        }
    } else {
        ap_phi_mux_data_2526_V_read2596_phi_phi_fu_103535_p4 = ap_phi_reg_pp0_iter0_data_2526_V_read2596_phi_reg_103531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_61247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_61247_p6 = data_2526_V_read2596_phi_reg_103531.read();
    } else {
        ap_phi_mux_data_2526_V_read2596_rewind_phi_fu_61247_p6 = data_2526_V_read2596_rewind_reg_61243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2527_V_read2597_phi_phi_fu_103548_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2527_V_read2597_phi_phi_fu_103548_p4 = ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_61261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2527_V_read2597_phi_phi_fu_103548_p4 = data_2527_V_read.read();
        } else {
            ap_phi_mux_data_2527_V_read2597_phi_phi_fu_103548_p4 = ap_phi_reg_pp0_iter0_data_2527_V_read2597_phi_reg_103544.read();
        }
    } else {
        ap_phi_mux_data_2527_V_read2597_phi_phi_fu_103548_p4 = ap_phi_reg_pp0_iter0_data_2527_V_read2597_phi_reg_103544.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_61261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_61261_p6 = data_2527_V_read2597_phi_reg_103544.read();
    } else {
        ap_phi_mux_data_2527_V_read2597_rewind_phi_fu_61261_p6 = data_2527_V_read2597_rewind_reg_61257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2528_V_read2598_phi_phi_fu_103561_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2528_V_read2598_phi_phi_fu_103561_p4 = ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_61275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2528_V_read2598_phi_phi_fu_103561_p4 = data_2528_V_read.read();
        } else {
            ap_phi_mux_data_2528_V_read2598_phi_phi_fu_103561_p4 = ap_phi_reg_pp0_iter0_data_2528_V_read2598_phi_reg_103557.read();
        }
    } else {
        ap_phi_mux_data_2528_V_read2598_phi_phi_fu_103561_p4 = ap_phi_reg_pp0_iter0_data_2528_V_read2598_phi_reg_103557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_61275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_61275_p6 = data_2528_V_read2598_phi_reg_103557.read();
    } else {
        ap_phi_mux_data_2528_V_read2598_rewind_phi_fu_61275_p6 = data_2528_V_read2598_rewind_reg_61271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2529_V_read2599_phi_phi_fu_103574_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2529_V_read2599_phi_phi_fu_103574_p4 = ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_61289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2529_V_read2599_phi_phi_fu_103574_p4 = data_2529_V_read.read();
        } else {
            ap_phi_mux_data_2529_V_read2599_phi_phi_fu_103574_p4 = ap_phi_reg_pp0_iter0_data_2529_V_read2599_phi_reg_103570.read();
        }
    } else {
        ap_phi_mux_data_2529_V_read2599_phi_phi_fu_103574_p4 = ap_phi_reg_pp0_iter0_data_2529_V_read2599_phi_reg_103570.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_61289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_61289_p6 = data_2529_V_read2599_phi_reg_103570.read();
    } else {
        ap_phi_mux_data_2529_V_read2599_rewind_phi_fu_61289_p6 = data_2529_V_read2599_rewind_reg_61285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_252_V_read322_phi_phi_fu_73973_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_252_V_read322_phi_phi_fu_73973_p4 = ap_phi_mux_data_252_V_read322_rewind_phi_fu_29411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_252_V_read322_phi_phi_fu_73973_p4 = data_252_V_read.read();
        } else {
            ap_phi_mux_data_252_V_read322_phi_phi_fu_73973_p4 = ap_phi_reg_pp0_iter0_data_252_V_read322_phi_reg_73969.read();
        }
    } else {
        ap_phi_mux_data_252_V_read322_phi_phi_fu_73973_p4 = ap_phi_reg_pp0_iter0_data_252_V_read322_phi_reg_73969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_252_V_read322_rewind_phi_fu_29411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_252_V_read322_rewind_phi_fu_29411_p6 = data_252_V_read322_phi_reg_73969.read();
    } else {
        ap_phi_mux_data_252_V_read322_rewind_phi_fu_29411_p6 = data_252_V_read322_rewind_reg_29407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2530_V_read2600_phi_phi_fu_103587_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2530_V_read2600_phi_phi_fu_103587_p4 = ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_61303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2530_V_read2600_phi_phi_fu_103587_p4 = data_2530_V_read.read();
        } else {
            ap_phi_mux_data_2530_V_read2600_phi_phi_fu_103587_p4 = ap_phi_reg_pp0_iter0_data_2530_V_read2600_phi_reg_103583.read();
        }
    } else {
        ap_phi_mux_data_2530_V_read2600_phi_phi_fu_103587_p4 = ap_phi_reg_pp0_iter0_data_2530_V_read2600_phi_reg_103583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_61303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_61303_p6 = data_2530_V_read2600_phi_reg_103583.read();
    } else {
        ap_phi_mux_data_2530_V_read2600_rewind_phi_fu_61303_p6 = data_2530_V_read2600_rewind_reg_61299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2531_V_read2601_phi_phi_fu_103600_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2531_V_read2601_phi_phi_fu_103600_p4 = ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_61317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2531_V_read2601_phi_phi_fu_103600_p4 = data_2531_V_read.read();
        } else {
            ap_phi_mux_data_2531_V_read2601_phi_phi_fu_103600_p4 = ap_phi_reg_pp0_iter0_data_2531_V_read2601_phi_reg_103596.read();
        }
    } else {
        ap_phi_mux_data_2531_V_read2601_phi_phi_fu_103600_p4 = ap_phi_reg_pp0_iter0_data_2531_V_read2601_phi_reg_103596.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_61317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_61317_p6 = data_2531_V_read2601_phi_reg_103596.read();
    } else {
        ap_phi_mux_data_2531_V_read2601_rewind_phi_fu_61317_p6 = data_2531_V_read2601_rewind_reg_61313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2532_V_read2602_phi_phi_fu_103613_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2532_V_read2602_phi_phi_fu_103613_p4 = ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_61331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2532_V_read2602_phi_phi_fu_103613_p4 = data_2532_V_read.read();
        } else {
            ap_phi_mux_data_2532_V_read2602_phi_phi_fu_103613_p4 = ap_phi_reg_pp0_iter0_data_2532_V_read2602_phi_reg_103609.read();
        }
    } else {
        ap_phi_mux_data_2532_V_read2602_phi_phi_fu_103613_p4 = ap_phi_reg_pp0_iter0_data_2532_V_read2602_phi_reg_103609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_61331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_61331_p6 = data_2532_V_read2602_phi_reg_103609.read();
    } else {
        ap_phi_mux_data_2532_V_read2602_rewind_phi_fu_61331_p6 = data_2532_V_read2602_rewind_reg_61327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2533_V_read2603_phi_phi_fu_103626_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2533_V_read2603_phi_phi_fu_103626_p4 = ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_61345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2533_V_read2603_phi_phi_fu_103626_p4 = data_2533_V_read.read();
        } else {
            ap_phi_mux_data_2533_V_read2603_phi_phi_fu_103626_p4 = ap_phi_reg_pp0_iter0_data_2533_V_read2603_phi_reg_103622.read();
        }
    } else {
        ap_phi_mux_data_2533_V_read2603_phi_phi_fu_103626_p4 = ap_phi_reg_pp0_iter0_data_2533_V_read2603_phi_reg_103622.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_61345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_61345_p6 = data_2533_V_read2603_phi_reg_103622.read();
    } else {
        ap_phi_mux_data_2533_V_read2603_rewind_phi_fu_61345_p6 = data_2533_V_read2603_rewind_reg_61341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2534_V_read2604_phi_phi_fu_103639_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2534_V_read2604_phi_phi_fu_103639_p4 = ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_61359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2534_V_read2604_phi_phi_fu_103639_p4 = data_2534_V_read.read();
        } else {
            ap_phi_mux_data_2534_V_read2604_phi_phi_fu_103639_p4 = ap_phi_reg_pp0_iter0_data_2534_V_read2604_phi_reg_103635.read();
        }
    } else {
        ap_phi_mux_data_2534_V_read2604_phi_phi_fu_103639_p4 = ap_phi_reg_pp0_iter0_data_2534_V_read2604_phi_reg_103635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_61359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_61359_p6 = data_2534_V_read2604_phi_reg_103635.read();
    } else {
        ap_phi_mux_data_2534_V_read2604_rewind_phi_fu_61359_p6 = data_2534_V_read2604_rewind_reg_61355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2535_V_read2605_phi_phi_fu_103652_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2535_V_read2605_phi_phi_fu_103652_p4 = ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_61373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2535_V_read2605_phi_phi_fu_103652_p4 = data_2535_V_read.read();
        } else {
            ap_phi_mux_data_2535_V_read2605_phi_phi_fu_103652_p4 = ap_phi_reg_pp0_iter0_data_2535_V_read2605_phi_reg_103648.read();
        }
    } else {
        ap_phi_mux_data_2535_V_read2605_phi_phi_fu_103652_p4 = ap_phi_reg_pp0_iter0_data_2535_V_read2605_phi_reg_103648.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_61373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_61373_p6 = data_2535_V_read2605_phi_reg_103648.read();
    } else {
        ap_phi_mux_data_2535_V_read2605_rewind_phi_fu_61373_p6 = data_2535_V_read2605_rewind_reg_61369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2536_V_read2606_phi_phi_fu_103665_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2536_V_read2606_phi_phi_fu_103665_p4 = ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_61387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2536_V_read2606_phi_phi_fu_103665_p4 = data_2536_V_read.read();
        } else {
            ap_phi_mux_data_2536_V_read2606_phi_phi_fu_103665_p4 = ap_phi_reg_pp0_iter0_data_2536_V_read2606_phi_reg_103661.read();
        }
    } else {
        ap_phi_mux_data_2536_V_read2606_phi_phi_fu_103665_p4 = ap_phi_reg_pp0_iter0_data_2536_V_read2606_phi_reg_103661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_61387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_61387_p6 = data_2536_V_read2606_phi_reg_103661.read();
    } else {
        ap_phi_mux_data_2536_V_read2606_rewind_phi_fu_61387_p6 = data_2536_V_read2606_rewind_reg_61383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2537_V_read2607_phi_phi_fu_103678_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2537_V_read2607_phi_phi_fu_103678_p4 = ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_61401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2537_V_read2607_phi_phi_fu_103678_p4 = data_2537_V_read.read();
        } else {
            ap_phi_mux_data_2537_V_read2607_phi_phi_fu_103678_p4 = ap_phi_reg_pp0_iter0_data_2537_V_read2607_phi_reg_103674.read();
        }
    } else {
        ap_phi_mux_data_2537_V_read2607_phi_phi_fu_103678_p4 = ap_phi_reg_pp0_iter0_data_2537_V_read2607_phi_reg_103674.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_61401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_61401_p6 = data_2537_V_read2607_phi_reg_103674.read();
    } else {
        ap_phi_mux_data_2537_V_read2607_rewind_phi_fu_61401_p6 = data_2537_V_read2607_rewind_reg_61397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2538_V_read2608_phi_phi_fu_103691_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2538_V_read2608_phi_phi_fu_103691_p4 = ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_61415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2538_V_read2608_phi_phi_fu_103691_p4 = data_2538_V_read.read();
        } else {
            ap_phi_mux_data_2538_V_read2608_phi_phi_fu_103691_p4 = ap_phi_reg_pp0_iter0_data_2538_V_read2608_phi_reg_103687.read();
        }
    } else {
        ap_phi_mux_data_2538_V_read2608_phi_phi_fu_103691_p4 = ap_phi_reg_pp0_iter0_data_2538_V_read2608_phi_reg_103687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_61415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_61415_p6 = data_2538_V_read2608_phi_reg_103687.read();
    } else {
        ap_phi_mux_data_2538_V_read2608_rewind_phi_fu_61415_p6 = data_2538_V_read2608_rewind_reg_61411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2539_V_read2609_phi_phi_fu_103704_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2539_V_read2609_phi_phi_fu_103704_p4 = ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_61429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2539_V_read2609_phi_phi_fu_103704_p4 = data_2539_V_read.read();
        } else {
            ap_phi_mux_data_2539_V_read2609_phi_phi_fu_103704_p4 = ap_phi_reg_pp0_iter0_data_2539_V_read2609_phi_reg_103700.read();
        }
    } else {
        ap_phi_mux_data_2539_V_read2609_phi_phi_fu_103704_p4 = ap_phi_reg_pp0_iter0_data_2539_V_read2609_phi_reg_103700.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_61429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_61429_p6 = data_2539_V_read2609_phi_reg_103700.read();
    } else {
        ap_phi_mux_data_2539_V_read2609_rewind_phi_fu_61429_p6 = data_2539_V_read2609_rewind_reg_61425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_253_V_read323_phi_phi_fu_73986_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_253_V_read323_phi_phi_fu_73986_p4 = ap_phi_mux_data_253_V_read323_rewind_phi_fu_29425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_253_V_read323_phi_phi_fu_73986_p4 = data_253_V_read.read();
        } else {
            ap_phi_mux_data_253_V_read323_phi_phi_fu_73986_p4 = ap_phi_reg_pp0_iter0_data_253_V_read323_phi_reg_73982.read();
        }
    } else {
        ap_phi_mux_data_253_V_read323_phi_phi_fu_73986_p4 = ap_phi_reg_pp0_iter0_data_253_V_read323_phi_reg_73982.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_253_V_read323_rewind_phi_fu_29425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_253_V_read323_rewind_phi_fu_29425_p6 = data_253_V_read323_phi_reg_73982.read();
    } else {
        ap_phi_mux_data_253_V_read323_rewind_phi_fu_29425_p6 = data_253_V_read323_rewind_reg_29421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2540_V_read2610_phi_phi_fu_103717_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2540_V_read2610_phi_phi_fu_103717_p4 = ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_61443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2540_V_read2610_phi_phi_fu_103717_p4 = data_2540_V_read.read();
        } else {
            ap_phi_mux_data_2540_V_read2610_phi_phi_fu_103717_p4 = ap_phi_reg_pp0_iter0_data_2540_V_read2610_phi_reg_103713.read();
        }
    } else {
        ap_phi_mux_data_2540_V_read2610_phi_phi_fu_103717_p4 = ap_phi_reg_pp0_iter0_data_2540_V_read2610_phi_reg_103713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_61443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_61443_p6 = data_2540_V_read2610_phi_reg_103713.read();
    } else {
        ap_phi_mux_data_2540_V_read2610_rewind_phi_fu_61443_p6 = data_2540_V_read2610_rewind_reg_61439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2541_V_read2611_phi_phi_fu_103730_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2541_V_read2611_phi_phi_fu_103730_p4 = ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_61457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2541_V_read2611_phi_phi_fu_103730_p4 = data_2541_V_read.read();
        } else {
            ap_phi_mux_data_2541_V_read2611_phi_phi_fu_103730_p4 = ap_phi_reg_pp0_iter0_data_2541_V_read2611_phi_reg_103726.read();
        }
    } else {
        ap_phi_mux_data_2541_V_read2611_phi_phi_fu_103730_p4 = ap_phi_reg_pp0_iter0_data_2541_V_read2611_phi_reg_103726.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_61457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_61457_p6 = data_2541_V_read2611_phi_reg_103726.read();
    } else {
        ap_phi_mux_data_2541_V_read2611_rewind_phi_fu_61457_p6 = data_2541_V_read2611_rewind_reg_61453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2542_V_read2612_phi_phi_fu_103743_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2542_V_read2612_phi_phi_fu_103743_p4 = ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_61471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2542_V_read2612_phi_phi_fu_103743_p4 = data_2542_V_read.read();
        } else {
            ap_phi_mux_data_2542_V_read2612_phi_phi_fu_103743_p4 = ap_phi_reg_pp0_iter0_data_2542_V_read2612_phi_reg_103739.read();
        }
    } else {
        ap_phi_mux_data_2542_V_read2612_phi_phi_fu_103743_p4 = ap_phi_reg_pp0_iter0_data_2542_V_read2612_phi_reg_103739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_61471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_61471_p6 = data_2542_V_read2612_phi_reg_103739.read();
    } else {
        ap_phi_mux_data_2542_V_read2612_rewind_phi_fu_61471_p6 = data_2542_V_read2612_rewind_reg_61467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2543_V_read2613_phi_phi_fu_103756_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2543_V_read2613_phi_phi_fu_103756_p4 = ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_61485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2543_V_read2613_phi_phi_fu_103756_p4 = data_2543_V_read.read();
        } else {
            ap_phi_mux_data_2543_V_read2613_phi_phi_fu_103756_p4 = ap_phi_reg_pp0_iter0_data_2543_V_read2613_phi_reg_103752.read();
        }
    } else {
        ap_phi_mux_data_2543_V_read2613_phi_phi_fu_103756_p4 = ap_phi_reg_pp0_iter0_data_2543_V_read2613_phi_reg_103752.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_61485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_61485_p6 = data_2543_V_read2613_phi_reg_103752.read();
    } else {
        ap_phi_mux_data_2543_V_read2613_rewind_phi_fu_61485_p6 = data_2543_V_read2613_rewind_reg_61481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2544_V_read2614_phi_phi_fu_103769_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2544_V_read2614_phi_phi_fu_103769_p4 = ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_61499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2544_V_read2614_phi_phi_fu_103769_p4 = data_2544_V_read.read();
        } else {
            ap_phi_mux_data_2544_V_read2614_phi_phi_fu_103769_p4 = ap_phi_reg_pp0_iter0_data_2544_V_read2614_phi_reg_103765.read();
        }
    } else {
        ap_phi_mux_data_2544_V_read2614_phi_phi_fu_103769_p4 = ap_phi_reg_pp0_iter0_data_2544_V_read2614_phi_reg_103765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_61499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_61499_p6 = data_2544_V_read2614_phi_reg_103765.read();
    } else {
        ap_phi_mux_data_2544_V_read2614_rewind_phi_fu_61499_p6 = data_2544_V_read2614_rewind_reg_61495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2545_V_read2615_phi_phi_fu_103782_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2545_V_read2615_phi_phi_fu_103782_p4 = ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_61513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2545_V_read2615_phi_phi_fu_103782_p4 = data_2545_V_read.read();
        } else {
            ap_phi_mux_data_2545_V_read2615_phi_phi_fu_103782_p4 = ap_phi_reg_pp0_iter0_data_2545_V_read2615_phi_reg_103778.read();
        }
    } else {
        ap_phi_mux_data_2545_V_read2615_phi_phi_fu_103782_p4 = ap_phi_reg_pp0_iter0_data_2545_V_read2615_phi_reg_103778.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_61513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_61513_p6 = data_2545_V_read2615_phi_reg_103778.read();
    } else {
        ap_phi_mux_data_2545_V_read2615_rewind_phi_fu_61513_p6 = data_2545_V_read2615_rewind_reg_61509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2546_V_read2616_phi_phi_fu_103795_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2546_V_read2616_phi_phi_fu_103795_p4 = ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_61527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2546_V_read2616_phi_phi_fu_103795_p4 = data_2546_V_read.read();
        } else {
            ap_phi_mux_data_2546_V_read2616_phi_phi_fu_103795_p4 = ap_phi_reg_pp0_iter0_data_2546_V_read2616_phi_reg_103791.read();
        }
    } else {
        ap_phi_mux_data_2546_V_read2616_phi_phi_fu_103795_p4 = ap_phi_reg_pp0_iter0_data_2546_V_read2616_phi_reg_103791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_61527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_61527_p6 = data_2546_V_read2616_phi_reg_103791.read();
    } else {
        ap_phi_mux_data_2546_V_read2616_rewind_phi_fu_61527_p6 = data_2546_V_read2616_rewind_reg_61523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2547_V_read2617_phi_phi_fu_103808_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2547_V_read2617_phi_phi_fu_103808_p4 = ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_61541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2547_V_read2617_phi_phi_fu_103808_p4 = data_2547_V_read.read();
        } else {
            ap_phi_mux_data_2547_V_read2617_phi_phi_fu_103808_p4 = ap_phi_reg_pp0_iter0_data_2547_V_read2617_phi_reg_103804.read();
        }
    } else {
        ap_phi_mux_data_2547_V_read2617_phi_phi_fu_103808_p4 = ap_phi_reg_pp0_iter0_data_2547_V_read2617_phi_reg_103804.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_61541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_61541_p6 = data_2547_V_read2617_phi_reg_103804.read();
    } else {
        ap_phi_mux_data_2547_V_read2617_rewind_phi_fu_61541_p6 = data_2547_V_read2617_rewind_reg_61537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2548_V_read2618_phi_phi_fu_103821_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2548_V_read2618_phi_phi_fu_103821_p4 = ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_61555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2548_V_read2618_phi_phi_fu_103821_p4 = data_2548_V_read.read();
        } else {
            ap_phi_mux_data_2548_V_read2618_phi_phi_fu_103821_p4 = ap_phi_reg_pp0_iter0_data_2548_V_read2618_phi_reg_103817.read();
        }
    } else {
        ap_phi_mux_data_2548_V_read2618_phi_phi_fu_103821_p4 = ap_phi_reg_pp0_iter0_data_2548_V_read2618_phi_reg_103817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_61555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_61555_p6 = data_2548_V_read2618_phi_reg_103817.read();
    } else {
        ap_phi_mux_data_2548_V_read2618_rewind_phi_fu_61555_p6 = data_2548_V_read2618_rewind_reg_61551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2549_V_read2619_phi_phi_fu_103834_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2549_V_read2619_phi_phi_fu_103834_p4 = ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_61569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2549_V_read2619_phi_phi_fu_103834_p4 = data_2549_V_read.read();
        } else {
            ap_phi_mux_data_2549_V_read2619_phi_phi_fu_103834_p4 = ap_phi_reg_pp0_iter0_data_2549_V_read2619_phi_reg_103830.read();
        }
    } else {
        ap_phi_mux_data_2549_V_read2619_phi_phi_fu_103834_p4 = ap_phi_reg_pp0_iter0_data_2549_V_read2619_phi_reg_103830.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_61569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_61569_p6 = data_2549_V_read2619_phi_reg_103830.read();
    } else {
        ap_phi_mux_data_2549_V_read2619_rewind_phi_fu_61569_p6 = data_2549_V_read2619_rewind_reg_61565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_254_V_read324_phi_phi_fu_73999_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_254_V_read324_phi_phi_fu_73999_p4 = ap_phi_mux_data_254_V_read324_rewind_phi_fu_29439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_254_V_read324_phi_phi_fu_73999_p4 = data_254_V_read.read();
        } else {
            ap_phi_mux_data_254_V_read324_phi_phi_fu_73999_p4 = ap_phi_reg_pp0_iter0_data_254_V_read324_phi_reg_73995.read();
        }
    } else {
        ap_phi_mux_data_254_V_read324_phi_phi_fu_73999_p4 = ap_phi_reg_pp0_iter0_data_254_V_read324_phi_reg_73995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_254_V_read324_rewind_phi_fu_29439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_254_V_read324_rewind_phi_fu_29439_p6 = data_254_V_read324_phi_reg_73995.read();
    } else {
        ap_phi_mux_data_254_V_read324_rewind_phi_fu_29439_p6 = data_254_V_read324_rewind_reg_29435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2550_V_read2620_phi_phi_fu_103847_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2550_V_read2620_phi_phi_fu_103847_p4 = ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_61583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2550_V_read2620_phi_phi_fu_103847_p4 = data_2550_V_read.read();
        } else {
            ap_phi_mux_data_2550_V_read2620_phi_phi_fu_103847_p4 = ap_phi_reg_pp0_iter0_data_2550_V_read2620_phi_reg_103843.read();
        }
    } else {
        ap_phi_mux_data_2550_V_read2620_phi_phi_fu_103847_p4 = ap_phi_reg_pp0_iter0_data_2550_V_read2620_phi_reg_103843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_61583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_61583_p6 = data_2550_V_read2620_phi_reg_103843.read();
    } else {
        ap_phi_mux_data_2550_V_read2620_rewind_phi_fu_61583_p6 = data_2550_V_read2620_rewind_reg_61579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2551_V_read2621_phi_phi_fu_103860_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2551_V_read2621_phi_phi_fu_103860_p4 = ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_61597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2551_V_read2621_phi_phi_fu_103860_p4 = data_2551_V_read.read();
        } else {
            ap_phi_mux_data_2551_V_read2621_phi_phi_fu_103860_p4 = ap_phi_reg_pp0_iter0_data_2551_V_read2621_phi_reg_103856.read();
        }
    } else {
        ap_phi_mux_data_2551_V_read2621_phi_phi_fu_103860_p4 = ap_phi_reg_pp0_iter0_data_2551_V_read2621_phi_reg_103856.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_61597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_61597_p6 = data_2551_V_read2621_phi_reg_103856.read();
    } else {
        ap_phi_mux_data_2551_V_read2621_rewind_phi_fu_61597_p6 = data_2551_V_read2621_rewind_reg_61593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2552_V_read2622_phi_phi_fu_103873_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2552_V_read2622_phi_phi_fu_103873_p4 = ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_61611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2552_V_read2622_phi_phi_fu_103873_p4 = data_2552_V_read.read();
        } else {
            ap_phi_mux_data_2552_V_read2622_phi_phi_fu_103873_p4 = ap_phi_reg_pp0_iter0_data_2552_V_read2622_phi_reg_103869.read();
        }
    } else {
        ap_phi_mux_data_2552_V_read2622_phi_phi_fu_103873_p4 = ap_phi_reg_pp0_iter0_data_2552_V_read2622_phi_reg_103869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_61611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_61611_p6 = data_2552_V_read2622_phi_reg_103869.read();
    } else {
        ap_phi_mux_data_2552_V_read2622_rewind_phi_fu_61611_p6 = data_2552_V_read2622_rewind_reg_61607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2553_V_read2623_phi_phi_fu_103886_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2553_V_read2623_phi_phi_fu_103886_p4 = ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_61625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2553_V_read2623_phi_phi_fu_103886_p4 = data_2553_V_read.read();
        } else {
            ap_phi_mux_data_2553_V_read2623_phi_phi_fu_103886_p4 = ap_phi_reg_pp0_iter0_data_2553_V_read2623_phi_reg_103882.read();
        }
    } else {
        ap_phi_mux_data_2553_V_read2623_phi_phi_fu_103886_p4 = ap_phi_reg_pp0_iter0_data_2553_V_read2623_phi_reg_103882.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_61625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_61625_p6 = data_2553_V_read2623_phi_reg_103882.read();
    } else {
        ap_phi_mux_data_2553_V_read2623_rewind_phi_fu_61625_p6 = data_2553_V_read2623_rewind_reg_61621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2554_V_read2624_phi_phi_fu_103899_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2554_V_read2624_phi_phi_fu_103899_p4 = ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_61639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2554_V_read2624_phi_phi_fu_103899_p4 = data_2554_V_read.read();
        } else {
            ap_phi_mux_data_2554_V_read2624_phi_phi_fu_103899_p4 = ap_phi_reg_pp0_iter0_data_2554_V_read2624_phi_reg_103895.read();
        }
    } else {
        ap_phi_mux_data_2554_V_read2624_phi_phi_fu_103899_p4 = ap_phi_reg_pp0_iter0_data_2554_V_read2624_phi_reg_103895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_61639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_61639_p6 = data_2554_V_read2624_phi_reg_103895.read();
    } else {
        ap_phi_mux_data_2554_V_read2624_rewind_phi_fu_61639_p6 = data_2554_V_read2624_rewind_reg_61635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2555_V_read2625_phi_phi_fu_103912_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2555_V_read2625_phi_phi_fu_103912_p4 = ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_61653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2555_V_read2625_phi_phi_fu_103912_p4 = data_2555_V_read.read();
        } else {
            ap_phi_mux_data_2555_V_read2625_phi_phi_fu_103912_p4 = ap_phi_reg_pp0_iter0_data_2555_V_read2625_phi_reg_103908.read();
        }
    } else {
        ap_phi_mux_data_2555_V_read2625_phi_phi_fu_103912_p4 = ap_phi_reg_pp0_iter0_data_2555_V_read2625_phi_reg_103908.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_61653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_61653_p6 = data_2555_V_read2625_phi_reg_103908.read();
    } else {
        ap_phi_mux_data_2555_V_read2625_rewind_phi_fu_61653_p6 = data_2555_V_read2625_rewind_reg_61649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2556_V_read2626_phi_phi_fu_103925_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2556_V_read2626_phi_phi_fu_103925_p4 = ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_61667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2556_V_read2626_phi_phi_fu_103925_p4 = data_2556_V_read.read();
        } else {
            ap_phi_mux_data_2556_V_read2626_phi_phi_fu_103925_p4 = ap_phi_reg_pp0_iter0_data_2556_V_read2626_phi_reg_103921.read();
        }
    } else {
        ap_phi_mux_data_2556_V_read2626_phi_phi_fu_103925_p4 = ap_phi_reg_pp0_iter0_data_2556_V_read2626_phi_reg_103921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_61667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_61667_p6 = data_2556_V_read2626_phi_reg_103921.read();
    } else {
        ap_phi_mux_data_2556_V_read2626_rewind_phi_fu_61667_p6 = data_2556_V_read2626_rewind_reg_61663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2557_V_read2627_phi_phi_fu_103938_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2557_V_read2627_phi_phi_fu_103938_p4 = ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_61681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2557_V_read2627_phi_phi_fu_103938_p4 = data_2557_V_read.read();
        } else {
            ap_phi_mux_data_2557_V_read2627_phi_phi_fu_103938_p4 = ap_phi_reg_pp0_iter0_data_2557_V_read2627_phi_reg_103934.read();
        }
    } else {
        ap_phi_mux_data_2557_V_read2627_phi_phi_fu_103938_p4 = ap_phi_reg_pp0_iter0_data_2557_V_read2627_phi_reg_103934.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_61681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_61681_p6 = data_2557_V_read2627_phi_reg_103934.read();
    } else {
        ap_phi_mux_data_2557_V_read2627_rewind_phi_fu_61681_p6 = data_2557_V_read2627_rewind_reg_61677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2558_V_read2628_phi_phi_fu_103951_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2558_V_read2628_phi_phi_fu_103951_p4 = ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_61695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2558_V_read2628_phi_phi_fu_103951_p4 = data_2558_V_read.read();
        } else {
            ap_phi_mux_data_2558_V_read2628_phi_phi_fu_103951_p4 = ap_phi_reg_pp0_iter0_data_2558_V_read2628_phi_reg_103947.read();
        }
    } else {
        ap_phi_mux_data_2558_V_read2628_phi_phi_fu_103951_p4 = ap_phi_reg_pp0_iter0_data_2558_V_read2628_phi_reg_103947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_61695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_61695_p6 = data_2558_V_read2628_phi_reg_103947.read();
    } else {
        ap_phi_mux_data_2558_V_read2628_rewind_phi_fu_61695_p6 = data_2558_V_read2628_rewind_reg_61691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2559_V_read2629_phi_phi_fu_103964_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2559_V_read2629_phi_phi_fu_103964_p4 = ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_61709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2559_V_read2629_phi_phi_fu_103964_p4 = data_2559_V_read.read();
        } else {
            ap_phi_mux_data_2559_V_read2629_phi_phi_fu_103964_p4 = ap_phi_reg_pp0_iter0_data_2559_V_read2629_phi_reg_103960.read();
        }
    } else {
        ap_phi_mux_data_2559_V_read2629_phi_phi_fu_103964_p4 = ap_phi_reg_pp0_iter0_data_2559_V_read2629_phi_reg_103960.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_61709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_61709_p6 = data_2559_V_read2629_phi_reg_103960.read();
    } else {
        ap_phi_mux_data_2559_V_read2629_rewind_phi_fu_61709_p6 = data_2559_V_read2629_rewind_reg_61705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_255_V_read325_phi_phi_fu_74012_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_255_V_read325_phi_phi_fu_74012_p4 = ap_phi_mux_data_255_V_read325_rewind_phi_fu_29453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_255_V_read325_phi_phi_fu_74012_p4 = data_255_V_read.read();
        } else {
            ap_phi_mux_data_255_V_read325_phi_phi_fu_74012_p4 = ap_phi_reg_pp0_iter0_data_255_V_read325_phi_reg_74008.read();
        }
    } else {
        ap_phi_mux_data_255_V_read325_phi_phi_fu_74012_p4 = ap_phi_reg_pp0_iter0_data_255_V_read325_phi_reg_74008.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_255_V_read325_rewind_phi_fu_29453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_255_V_read325_rewind_phi_fu_29453_p6 = data_255_V_read325_phi_reg_74008.read();
    } else {
        ap_phi_mux_data_255_V_read325_rewind_phi_fu_29453_p6 = data_255_V_read325_rewind_reg_29449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2560_V_read2630_phi_phi_fu_103977_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2560_V_read2630_phi_phi_fu_103977_p4 = ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_61723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2560_V_read2630_phi_phi_fu_103977_p4 = data_2560_V_read.read();
        } else {
            ap_phi_mux_data_2560_V_read2630_phi_phi_fu_103977_p4 = ap_phi_reg_pp0_iter0_data_2560_V_read2630_phi_reg_103973.read();
        }
    } else {
        ap_phi_mux_data_2560_V_read2630_phi_phi_fu_103977_p4 = ap_phi_reg_pp0_iter0_data_2560_V_read2630_phi_reg_103973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_61723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_61723_p6 = data_2560_V_read2630_phi_reg_103973.read();
    } else {
        ap_phi_mux_data_2560_V_read2630_rewind_phi_fu_61723_p6 = data_2560_V_read2630_rewind_reg_61719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2561_V_read2631_phi_phi_fu_103990_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2561_V_read2631_phi_phi_fu_103990_p4 = ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_61737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2561_V_read2631_phi_phi_fu_103990_p4 = data_2561_V_read.read();
        } else {
            ap_phi_mux_data_2561_V_read2631_phi_phi_fu_103990_p4 = ap_phi_reg_pp0_iter0_data_2561_V_read2631_phi_reg_103986.read();
        }
    } else {
        ap_phi_mux_data_2561_V_read2631_phi_phi_fu_103990_p4 = ap_phi_reg_pp0_iter0_data_2561_V_read2631_phi_reg_103986.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_61737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_61737_p6 = data_2561_V_read2631_phi_reg_103986.read();
    } else {
        ap_phi_mux_data_2561_V_read2631_rewind_phi_fu_61737_p6 = data_2561_V_read2631_rewind_reg_61733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2562_V_read2632_phi_phi_fu_104003_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2562_V_read2632_phi_phi_fu_104003_p4 = ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_61751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2562_V_read2632_phi_phi_fu_104003_p4 = data_2562_V_read.read();
        } else {
            ap_phi_mux_data_2562_V_read2632_phi_phi_fu_104003_p4 = ap_phi_reg_pp0_iter0_data_2562_V_read2632_phi_reg_103999.read();
        }
    } else {
        ap_phi_mux_data_2562_V_read2632_phi_phi_fu_104003_p4 = ap_phi_reg_pp0_iter0_data_2562_V_read2632_phi_reg_103999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_61751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_61751_p6 = data_2562_V_read2632_phi_reg_103999.read();
    } else {
        ap_phi_mux_data_2562_V_read2632_rewind_phi_fu_61751_p6 = data_2562_V_read2632_rewind_reg_61747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2563_V_read2633_phi_phi_fu_104016_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2563_V_read2633_phi_phi_fu_104016_p4 = ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_61765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2563_V_read2633_phi_phi_fu_104016_p4 = data_2563_V_read.read();
        } else {
            ap_phi_mux_data_2563_V_read2633_phi_phi_fu_104016_p4 = ap_phi_reg_pp0_iter0_data_2563_V_read2633_phi_reg_104012.read();
        }
    } else {
        ap_phi_mux_data_2563_V_read2633_phi_phi_fu_104016_p4 = ap_phi_reg_pp0_iter0_data_2563_V_read2633_phi_reg_104012.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_61765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_61765_p6 = data_2563_V_read2633_phi_reg_104012.read();
    } else {
        ap_phi_mux_data_2563_V_read2633_rewind_phi_fu_61765_p6 = data_2563_V_read2633_rewind_reg_61761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2564_V_read2634_phi_phi_fu_104029_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2564_V_read2634_phi_phi_fu_104029_p4 = ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_61779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2564_V_read2634_phi_phi_fu_104029_p4 = data_2564_V_read.read();
        } else {
            ap_phi_mux_data_2564_V_read2634_phi_phi_fu_104029_p4 = ap_phi_reg_pp0_iter0_data_2564_V_read2634_phi_reg_104025.read();
        }
    } else {
        ap_phi_mux_data_2564_V_read2634_phi_phi_fu_104029_p4 = ap_phi_reg_pp0_iter0_data_2564_V_read2634_phi_reg_104025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_61779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_61779_p6 = data_2564_V_read2634_phi_reg_104025.read();
    } else {
        ap_phi_mux_data_2564_V_read2634_rewind_phi_fu_61779_p6 = data_2564_V_read2634_rewind_reg_61775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2565_V_read2635_phi_phi_fu_104042_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2565_V_read2635_phi_phi_fu_104042_p4 = ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_61793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2565_V_read2635_phi_phi_fu_104042_p4 = data_2565_V_read.read();
        } else {
            ap_phi_mux_data_2565_V_read2635_phi_phi_fu_104042_p4 = ap_phi_reg_pp0_iter0_data_2565_V_read2635_phi_reg_104038.read();
        }
    } else {
        ap_phi_mux_data_2565_V_read2635_phi_phi_fu_104042_p4 = ap_phi_reg_pp0_iter0_data_2565_V_read2635_phi_reg_104038.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_61793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_61793_p6 = data_2565_V_read2635_phi_reg_104038.read();
    } else {
        ap_phi_mux_data_2565_V_read2635_rewind_phi_fu_61793_p6 = data_2565_V_read2635_rewind_reg_61789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2566_V_read2636_phi_phi_fu_104055_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2566_V_read2636_phi_phi_fu_104055_p4 = ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_61807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2566_V_read2636_phi_phi_fu_104055_p4 = data_2566_V_read.read();
        } else {
            ap_phi_mux_data_2566_V_read2636_phi_phi_fu_104055_p4 = ap_phi_reg_pp0_iter0_data_2566_V_read2636_phi_reg_104051.read();
        }
    } else {
        ap_phi_mux_data_2566_V_read2636_phi_phi_fu_104055_p4 = ap_phi_reg_pp0_iter0_data_2566_V_read2636_phi_reg_104051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_61807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_61807_p6 = data_2566_V_read2636_phi_reg_104051.read();
    } else {
        ap_phi_mux_data_2566_V_read2636_rewind_phi_fu_61807_p6 = data_2566_V_read2636_rewind_reg_61803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2567_V_read2637_phi_phi_fu_104068_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2567_V_read2637_phi_phi_fu_104068_p4 = ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_61821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2567_V_read2637_phi_phi_fu_104068_p4 = data_2567_V_read.read();
        } else {
            ap_phi_mux_data_2567_V_read2637_phi_phi_fu_104068_p4 = ap_phi_reg_pp0_iter0_data_2567_V_read2637_phi_reg_104064.read();
        }
    } else {
        ap_phi_mux_data_2567_V_read2637_phi_phi_fu_104068_p4 = ap_phi_reg_pp0_iter0_data_2567_V_read2637_phi_reg_104064.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_61821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_61821_p6 = data_2567_V_read2637_phi_reg_104064.read();
    } else {
        ap_phi_mux_data_2567_V_read2637_rewind_phi_fu_61821_p6 = data_2567_V_read2637_rewind_reg_61817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2568_V_read2638_phi_phi_fu_104081_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2568_V_read2638_phi_phi_fu_104081_p4 = ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_61835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2568_V_read2638_phi_phi_fu_104081_p4 = data_2568_V_read.read();
        } else {
            ap_phi_mux_data_2568_V_read2638_phi_phi_fu_104081_p4 = ap_phi_reg_pp0_iter0_data_2568_V_read2638_phi_reg_104077.read();
        }
    } else {
        ap_phi_mux_data_2568_V_read2638_phi_phi_fu_104081_p4 = ap_phi_reg_pp0_iter0_data_2568_V_read2638_phi_reg_104077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_61835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_61835_p6 = data_2568_V_read2638_phi_reg_104077.read();
    } else {
        ap_phi_mux_data_2568_V_read2638_rewind_phi_fu_61835_p6 = data_2568_V_read2638_rewind_reg_61831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2569_V_read2639_phi_phi_fu_104094_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2569_V_read2639_phi_phi_fu_104094_p4 = ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_61849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2569_V_read2639_phi_phi_fu_104094_p4 = data_2569_V_read.read();
        } else {
            ap_phi_mux_data_2569_V_read2639_phi_phi_fu_104094_p4 = ap_phi_reg_pp0_iter0_data_2569_V_read2639_phi_reg_104090.read();
        }
    } else {
        ap_phi_mux_data_2569_V_read2639_phi_phi_fu_104094_p4 = ap_phi_reg_pp0_iter0_data_2569_V_read2639_phi_reg_104090.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_61849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_61849_p6 = data_2569_V_read2639_phi_reg_104090.read();
    } else {
        ap_phi_mux_data_2569_V_read2639_rewind_phi_fu_61849_p6 = data_2569_V_read2639_rewind_reg_61845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_256_V_read326_phi_phi_fu_74025_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_256_V_read326_phi_phi_fu_74025_p4 = ap_phi_mux_data_256_V_read326_rewind_phi_fu_29467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_256_V_read326_phi_phi_fu_74025_p4 = data_256_V_read.read();
        } else {
            ap_phi_mux_data_256_V_read326_phi_phi_fu_74025_p4 = ap_phi_reg_pp0_iter0_data_256_V_read326_phi_reg_74021.read();
        }
    } else {
        ap_phi_mux_data_256_V_read326_phi_phi_fu_74025_p4 = ap_phi_reg_pp0_iter0_data_256_V_read326_phi_reg_74021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_256_V_read326_rewind_phi_fu_29467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_256_V_read326_rewind_phi_fu_29467_p6 = data_256_V_read326_phi_reg_74021.read();
    } else {
        ap_phi_mux_data_256_V_read326_rewind_phi_fu_29467_p6 = data_256_V_read326_rewind_reg_29463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2570_V_read2640_phi_phi_fu_104107_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2570_V_read2640_phi_phi_fu_104107_p4 = ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_61863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2570_V_read2640_phi_phi_fu_104107_p4 = data_2570_V_read.read();
        } else {
            ap_phi_mux_data_2570_V_read2640_phi_phi_fu_104107_p4 = ap_phi_reg_pp0_iter0_data_2570_V_read2640_phi_reg_104103.read();
        }
    } else {
        ap_phi_mux_data_2570_V_read2640_phi_phi_fu_104107_p4 = ap_phi_reg_pp0_iter0_data_2570_V_read2640_phi_reg_104103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_61863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_61863_p6 = data_2570_V_read2640_phi_reg_104103.read();
    } else {
        ap_phi_mux_data_2570_V_read2640_rewind_phi_fu_61863_p6 = data_2570_V_read2640_rewind_reg_61859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2571_V_read2641_phi_phi_fu_104120_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2571_V_read2641_phi_phi_fu_104120_p4 = ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_61877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2571_V_read2641_phi_phi_fu_104120_p4 = data_2571_V_read.read();
        } else {
            ap_phi_mux_data_2571_V_read2641_phi_phi_fu_104120_p4 = ap_phi_reg_pp0_iter0_data_2571_V_read2641_phi_reg_104116.read();
        }
    } else {
        ap_phi_mux_data_2571_V_read2641_phi_phi_fu_104120_p4 = ap_phi_reg_pp0_iter0_data_2571_V_read2641_phi_reg_104116.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_61877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_61877_p6 = data_2571_V_read2641_phi_reg_104116.read();
    } else {
        ap_phi_mux_data_2571_V_read2641_rewind_phi_fu_61877_p6 = data_2571_V_read2641_rewind_reg_61873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2572_V_read2642_phi_phi_fu_104133_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2572_V_read2642_phi_phi_fu_104133_p4 = ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_61891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2572_V_read2642_phi_phi_fu_104133_p4 = data_2572_V_read.read();
        } else {
            ap_phi_mux_data_2572_V_read2642_phi_phi_fu_104133_p4 = ap_phi_reg_pp0_iter0_data_2572_V_read2642_phi_reg_104129.read();
        }
    } else {
        ap_phi_mux_data_2572_V_read2642_phi_phi_fu_104133_p4 = ap_phi_reg_pp0_iter0_data_2572_V_read2642_phi_reg_104129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_61891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_61891_p6 = data_2572_V_read2642_phi_reg_104129.read();
    } else {
        ap_phi_mux_data_2572_V_read2642_rewind_phi_fu_61891_p6 = data_2572_V_read2642_rewind_reg_61887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2573_V_read2643_phi_phi_fu_104146_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2573_V_read2643_phi_phi_fu_104146_p4 = ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_61905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2573_V_read2643_phi_phi_fu_104146_p4 = data_2573_V_read.read();
        } else {
            ap_phi_mux_data_2573_V_read2643_phi_phi_fu_104146_p4 = ap_phi_reg_pp0_iter0_data_2573_V_read2643_phi_reg_104142.read();
        }
    } else {
        ap_phi_mux_data_2573_V_read2643_phi_phi_fu_104146_p4 = ap_phi_reg_pp0_iter0_data_2573_V_read2643_phi_reg_104142.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_61905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_61905_p6 = data_2573_V_read2643_phi_reg_104142.read();
    } else {
        ap_phi_mux_data_2573_V_read2643_rewind_phi_fu_61905_p6 = data_2573_V_read2643_rewind_reg_61901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2574_V_read2644_phi_phi_fu_104159_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2574_V_read2644_phi_phi_fu_104159_p4 = ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_61919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2574_V_read2644_phi_phi_fu_104159_p4 = data_2574_V_read.read();
        } else {
            ap_phi_mux_data_2574_V_read2644_phi_phi_fu_104159_p4 = ap_phi_reg_pp0_iter0_data_2574_V_read2644_phi_reg_104155.read();
        }
    } else {
        ap_phi_mux_data_2574_V_read2644_phi_phi_fu_104159_p4 = ap_phi_reg_pp0_iter0_data_2574_V_read2644_phi_reg_104155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_61919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_61919_p6 = data_2574_V_read2644_phi_reg_104155.read();
    } else {
        ap_phi_mux_data_2574_V_read2644_rewind_phi_fu_61919_p6 = data_2574_V_read2644_rewind_reg_61915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2575_V_read2645_phi_phi_fu_104172_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2575_V_read2645_phi_phi_fu_104172_p4 = ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_61933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2575_V_read2645_phi_phi_fu_104172_p4 = data_2575_V_read.read();
        } else {
            ap_phi_mux_data_2575_V_read2645_phi_phi_fu_104172_p4 = ap_phi_reg_pp0_iter0_data_2575_V_read2645_phi_reg_104168.read();
        }
    } else {
        ap_phi_mux_data_2575_V_read2645_phi_phi_fu_104172_p4 = ap_phi_reg_pp0_iter0_data_2575_V_read2645_phi_reg_104168.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_61933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_61933_p6 = data_2575_V_read2645_phi_reg_104168.read();
    } else {
        ap_phi_mux_data_2575_V_read2645_rewind_phi_fu_61933_p6 = data_2575_V_read2645_rewind_reg_61929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2576_V_read2646_phi_phi_fu_104185_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2576_V_read2646_phi_phi_fu_104185_p4 = ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_61947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2576_V_read2646_phi_phi_fu_104185_p4 = data_2576_V_read.read();
        } else {
            ap_phi_mux_data_2576_V_read2646_phi_phi_fu_104185_p4 = ap_phi_reg_pp0_iter0_data_2576_V_read2646_phi_reg_104181.read();
        }
    } else {
        ap_phi_mux_data_2576_V_read2646_phi_phi_fu_104185_p4 = ap_phi_reg_pp0_iter0_data_2576_V_read2646_phi_reg_104181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_61947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_61947_p6 = data_2576_V_read2646_phi_reg_104181.read();
    } else {
        ap_phi_mux_data_2576_V_read2646_rewind_phi_fu_61947_p6 = data_2576_V_read2646_rewind_reg_61943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2577_V_read2647_phi_phi_fu_104198_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2577_V_read2647_phi_phi_fu_104198_p4 = ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_61961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2577_V_read2647_phi_phi_fu_104198_p4 = data_2577_V_read.read();
        } else {
            ap_phi_mux_data_2577_V_read2647_phi_phi_fu_104198_p4 = ap_phi_reg_pp0_iter0_data_2577_V_read2647_phi_reg_104194.read();
        }
    } else {
        ap_phi_mux_data_2577_V_read2647_phi_phi_fu_104198_p4 = ap_phi_reg_pp0_iter0_data_2577_V_read2647_phi_reg_104194.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_61961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_61961_p6 = data_2577_V_read2647_phi_reg_104194.read();
    } else {
        ap_phi_mux_data_2577_V_read2647_rewind_phi_fu_61961_p6 = data_2577_V_read2647_rewind_reg_61957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2578_V_read2648_phi_phi_fu_104211_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2578_V_read2648_phi_phi_fu_104211_p4 = ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_61975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2578_V_read2648_phi_phi_fu_104211_p4 = data_2578_V_read.read();
        } else {
            ap_phi_mux_data_2578_V_read2648_phi_phi_fu_104211_p4 = ap_phi_reg_pp0_iter0_data_2578_V_read2648_phi_reg_104207.read();
        }
    } else {
        ap_phi_mux_data_2578_V_read2648_phi_phi_fu_104211_p4 = ap_phi_reg_pp0_iter0_data_2578_V_read2648_phi_reg_104207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_61975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_61975_p6 = data_2578_V_read2648_phi_reg_104207.read();
    } else {
        ap_phi_mux_data_2578_V_read2648_rewind_phi_fu_61975_p6 = data_2578_V_read2648_rewind_reg_61971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2579_V_read2649_phi_phi_fu_104224_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2579_V_read2649_phi_phi_fu_104224_p4 = ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_61989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2579_V_read2649_phi_phi_fu_104224_p4 = data_2579_V_read.read();
        } else {
            ap_phi_mux_data_2579_V_read2649_phi_phi_fu_104224_p4 = ap_phi_reg_pp0_iter0_data_2579_V_read2649_phi_reg_104220.read();
        }
    } else {
        ap_phi_mux_data_2579_V_read2649_phi_phi_fu_104224_p4 = ap_phi_reg_pp0_iter0_data_2579_V_read2649_phi_reg_104220.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_61989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_61989_p6 = data_2579_V_read2649_phi_reg_104220.read();
    } else {
        ap_phi_mux_data_2579_V_read2649_rewind_phi_fu_61989_p6 = data_2579_V_read2649_rewind_reg_61985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_257_V_read327_phi_phi_fu_74038_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_257_V_read327_phi_phi_fu_74038_p4 = ap_phi_mux_data_257_V_read327_rewind_phi_fu_29481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_257_V_read327_phi_phi_fu_74038_p4 = data_257_V_read.read();
        } else {
            ap_phi_mux_data_257_V_read327_phi_phi_fu_74038_p4 = ap_phi_reg_pp0_iter0_data_257_V_read327_phi_reg_74034.read();
        }
    } else {
        ap_phi_mux_data_257_V_read327_phi_phi_fu_74038_p4 = ap_phi_reg_pp0_iter0_data_257_V_read327_phi_reg_74034.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_257_V_read327_rewind_phi_fu_29481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_257_V_read327_rewind_phi_fu_29481_p6 = data_257_V_read327_phi_reg_74034.read();
    } else {
        ap_phi_mux_data_257_V_read327_rewind_phi_fu_29481_p6 = data_257_V_read327_rewind_reg_29477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2580_V_read2650_phi_phi_fu_104237_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2580_V_read2650_phi_phi_fu_104237_p4 = ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_62003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2580_V_read2650_phi_phi_fu_104237_p4 = data_2580_V_read.read();
        } else {
            ap_phi_mux_data_2580_V_read2650_phi_phi_fu_104237_p4 = ap_phi_reg_pp0_iter0_data_2580_V_read2650_phi_reg_104233.read();
        }
    } else {
        ap_phi_mux_data_2580_V_read2650_phi_phi_fu_104237_p4 = ap_phi_reg_pp0_iter0_data_2580_V_read2650_phi_reg_104233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_62003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_62003_p6 = data_2580_V_read2650_phi_reg_104233.read();
    } else {
        ap_phi_mux_data_2580_V_read2650_rewind_phi_fu_62003_p6 = data_2580_V_read2650_rewind_reg_61999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2581_V_read2651_phi_phi_fu_104250_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2581_V_read2651_phi_phi_fu_104250_p4 = ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_62017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2581_V_read2651_phi_phi_fu_104250_p4 = data_2581_V_read.read();
        } else {
            ap_phi_mux_data_2581_V_read2651_phi_phi_fu_104250_p4 = ap_phi_reg_pp0_iter0_data_2581_V_read2651_phi_reg_104246.read();
        }
    } else {
        ap_phi_mux_data_2581_V_read2651_phi_phi_fu_104250_p4 = ap_phi_reg_pp0_iter0_data_2581_V_read2651_phi_reg_104246.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_62017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_62017_p6 = data_2581_V_read2651_phi_reg_104246.read();
    } else {
        ap_phi_mux_data_2581_V_read2651_rewind_phi_fu_62017_p6 = data_2581_V_read2651_rewind_reg_62013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2582_V_read2652_phi_phi_fu_104263_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2582_V_read2652_phi_phi_fu_104263_p4 = ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_62031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2582_V_read2652_phi_phi_fu_104263_p4 = data_2582_V_read.read();
        } else {
            ap_phi_mux_data_2582_V_read2652_phi_phi_fu_104263_p4 = ap_phi_reg_pp0_iter0_data_2582_V_read2652_phi_reg_104259.read();
        }
    } else {
        ap_phi_mux_data_2582_V_read2652_phi_phi_fu_104263_p4 = ap_phi_reg_pp0_iter0_data_2582_V_read2652_phi_reg_104259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_62031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_62031_p6 = data_2582_V_read2652_phi_reg_104259.read();
    } else {
        ap_phi_mux_data_2582_V_read2652_rewind_phi_fu_62031_p6 = data_2582_V_read2652_rewind_reg_62027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2583_V_read2653_phi_phi_fu_104276_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2583_V_read2653_phi_phi_fu_104276_p4 = ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_62045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2583_V_read2653_phi_phi_fu_104276_p4 = data_2583_V_read.read();
        } else {
            ap_phi_mux_data_2583_V_read2653_phi_phi_fu_104276_p4 = ap_phi_reg_pp0_iter0_data_2583_V_read2653_phi_reg_104272.read();
        }
    } else {
        ap_phi_mux_data_2583_V_read2653_phi_phi_fu_104276_p4 = ap_phi_reg_pp0_iter0_data_2583_V_read2653_phi_reg_104272.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_62045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_62045_p6 = data_2583_V_read2653_phi_reg_104272.read();
    } else {
        ap_phi_mux_data_2583_V_read2653_rewind_phi_fu_62045_p6 = data_2583_V_read2653_rewind_reg_62041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2584_V_read2654_phi_phi_fu_104289_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2584_V_read2654_phi_phi_fu_104289_p4 = ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_62059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2584_V_read2654_phi_phi_fu_104289_p4 = data_2584_V_read.read();
        } else {
            ap_phi_mux_data_2584_V_read2654_phi_phi_fu_104289_p4 = ap_phi_reg_pp0_iter0_data_2584_V_read2654_phi_reg_104285.read();
        }
    } else {
        ap_phi_mux_data_2584_V_read2654_phi_phi_fu_104289_p4 = ap_phi_reg_pp0_iter0_data_2584_V_read2654_phi_reg_104285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_62059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_62059_p6 = data_2584_V_read2654_phi_reg_104285.read();
    } else {
        ap_phi_mux_data_2584_V_read2654_rewind_phi_fu_62059_p6 = data_2584_V_read2654_rewind_reg_62055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2585_V_read2655_phi_phi_fu_104302_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2585_V_read2655_phi_phi_fu_104302_p4 = ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_62073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2585_V_read2655_phi_phi_fu_104302_p4 = data_2585_V_read.read();
        } else {
            ap_phi_mux_data_2585_V_read2655_phi_phi_fu_104302_p4 = ap_phi_reg_pp0_iter0_data_2585_V_read2655_phi_reg_104298.read();
        }
    } else {
        ap_phi_mux_data_2585_V_read2655_phi_phi_fu_104302_p4 = ap_phi_reg_pp0_iter0_data_2585_V_read2655_phi_reg_104298.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_62073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_62073_p6 = data_2585_V_read2655_phi_reg_104298.read();
    } else {
        ap_phi_mux_data_2585_V_read2655_rewind_phi_fu_62073_p6 = data_2585_V_read2655_rewind_reg_62069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2586_V_read2656_phi_phi_fu_104315_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2586_V_read2656_phi_phi_fu_104315_p4 = ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_62087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2586_V_read2656_phi_phi_fu_104315_p4 = data_2586_V_read.read();
        } else {
            ap_phi_mux_data_2586_V_read2656_phi_phi_fu_104315_p4 = ap_phi_reg_pp0_iter0_data_2586_V_read2656_phi_reg_104311.read();
        }
    } else {
        ap_phi_mux_data_2586_V_read2656_phi_phi_fu_104315_p4 = ap_phi_reg_pp0_iter0_data_2586_V_read2656_phi_reg_104311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_62087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_62087_p6 = data_2586_V_read2656_phi_reg_104311.read();
    } else {
        ap_phi_mux_data_2586_V_read2656_rewind_phi_fu_62087_p6 = data_2586_V_read2656_rewind_reg_62083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2587_V_read2657_phi_phi_fu_104328_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2587_V_read2657_phi_phi_fu_104328_p4 = ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_62101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2587_V_read2657_phi_phi_fu_104328_p4 = data_2587_V_read.read();
        } else {
            ap_phi_mux_data_2587_V_read2657_phi_phi_fu_104328_p4 = ap_phi_reg_pp0_iter0_data_2587_V_read2657_phi_reg_104324.read();
        }
    } else {
        ap_phi_mux_data_2587_V_read2657_phi_phi_fu_104328_p4 = ap_phi_reg_pp0_iter0_data_2587_V_read2657_phi_reg_104324.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_62101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_62101_p6 = data_2587_V_read2657_phi_reg_104324.read();
    } else {
        ap_phi_mux_data_2587_V_read2657_rewind_phi_fu_62101_p6 = data_2587_V_read2657_rewind_reg_62097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2588_V_read2658_phi_phi_fu_104341_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2588_V_read2658_phi_phi_fu_104341_p4 = ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_62115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2588_V_read2658_phi_phi_fu_104341_p4 = data_2588_V_read.read();
        } else {
            ap_phi_mux_data_2588_V_read2658_phi_phi_fu_104341_p4 = ap_phi_reg_pp0_iter0_data_2588_V_read2658_phi_reg_104337.read();
        }
    } else {
        ap_phi_mux_data_2588_V_read2658_phi_phi_fu_104341_p4 = ap_phi_reg_pp0_iter0_data_2588_V_read2658_phi_reg_104337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_62115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_62115_p6 = data_2588_V_read2658_phi_reg_104337.read();
    } else {
        ap_phi_mux_data_2588_V_read2658_rewind_phi_fu_62115_p6 = data_2588_V_read2658_rewind_reg_62111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2589_V_read2659_phi_phi_fu_104354_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2589_V_read2659_phi_phi_fu_104354_p4 = ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_62129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2589_V_read2659_phi_phi_fu_104354_p4 = data_2589_V_read.read();
        } else {
            ap_phi_mux_data_2589_V_read2659_phi_phi_fu_104354_p4 = ap_phi_reg_pp0_iter0_data_2589_V_read2659_phi_reg_104350.read();
        }
    } else {
        ap_phi_mux_data_2589_V_read2659_phi_phi_fu_104354_p4 = ap_phi_reg_pp0_iter0_data_2589_V_read2659_phi_reg_104350.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_62129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_62129_p6 = data_2589_V_read2659_phi_reg_104350.read();
    } else {
        ap_phi_mux_data_2589_V_read2659_rewind_phi_fu_62129_p6 = data_2589_V_read2659_rewind_reg_62125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_258_V_read328_phi_phi_fu_74051_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_258_V_read328_phi_phi_fu_74051_p4 = ap_phi_mux_data_258_V_read328_rewind_phi_fu_29495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_258_V_read328_phi_phi_fu_74051_p4 = data_258_V_read.read();
        } else {
            ap_phi_mux_data_258_V_read328_phi_phi_fu_74051_p4 = ap_phi_reg_pp0_iter0_data_258_V_read328_phi_reg_74047.read();
        }
    } else {
        ap_phi_mux_data_258_V_read328_phi_phi_fu_74051_p4 = ap_phi_reg_pp0_iter0_data_258_V_read328_phi_reg_74047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_258_V_read328_rewind_phi_fu_29495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_258_V_read328_rewind_phi_fu_29495_p6 = data_258_V_read328_phi_reg_74047.read();
    } else {
        ap_phi_mux_data_258_V_read328_rewind_phi_fu_29495_p6 = data_258_V_read328_rewind_reg_29491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2590_V_read2660_phi_phi_fu_104367_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2590_V_read2660_phi_phi_fu_104367_p4 = ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_62143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2590_V_read2660_phi_phi_fu_104367_p4 = data_2590_V_read.read();
        } else {
            ap_phi_mux_data_2590_V_read2660_phi_phi_fu_104367_p4 = ap_phi_reg_pp0_iter0_data_2590_V_read2660_phi_reg_104363.read();
        }
    } else {
        ap_phi_mux_data_2590_V_read2660_phi_phi_fu_104367_p4 = ap_phi_reg_pp0_iter0_data_2590_V_read2660_phi_reg_104363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_62143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_62143_p6 = data_2590_V_read2660_phi_reg_104363.read();
    } else {
        ap_phi_mux_data_2590_V_read2660_rewind_phi_fu_62143_p6 = data_2590_V_read2660_rewind_reg_62139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2591_V_read2661_phi_phi_fu_104380_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2591_V_read2661_phi_phi_fu_104380_p4 = ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_62157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2591_V_read2661_phi_phi_fu_104380_p4 = data_2591_V_read.read();
        } else {
            ap_phi_mux_data_2591_V_read2661_phi_phi_fu_104380_p4 = ap_phi_reg_pp0_iter0_data_2591_V_read2661_phi_reg_104376.read();
        }
    } else {
        ap_phi_mux_data_2591_V_read2661_phi_phi_fu_104380_p4 = ap_phi_reg_pp0_iter0_data_2591_V_read2661_phi_reg_104376.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_62157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_62157_p6 = data_2591_V_read2661_phi_reg_104376.read();
    } else {
        ap_phi_mux_data_2591_V_read2661_rewind_phi_fu_62157_p6 = data_2591_V_read2661_rewind_reg_62153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2592_V_read2662_phi_phi_fu_104393_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2592_V_read2662_phi_phi_fu_104393_p4 = ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_62171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2592_V_read2662_phi_phi_fu_104393_p4 = data_2592_V_read.read();
        } else {
            ap_phi_mux_data_2592_V_read2662_phi_phi_fu_104393_p4 = ap_phi_reg_pp0_iter0_data_2592_V_read2662_phi_reg_104389.read();
        }
    } else {
        ap_phi_mux_data_2592_V_read2662_phi_phi_fu_104393_p4 = ap_phi_reg_pp0_iter0_data_2592_V_read2662_phi_reg_104389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_62171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_62171_p6 = data_2592_V_read2662_phi_reg_104389.read();
    } else {
        ap_phi_mux_data_2592_V_read2662_rewind_phi_fu_62171_p6 = data_2592_V_read2662_rewind_reg_62167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2593_V_read2663_phi_phi_fu_104406_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2593_V_read2663_phi_phi_fu_104406_p4 = ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_62185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2593_V_read2663_phi_phi_fu_104406_p4 = data_2593_V_read.read();
        } else {
            ap_phi_mux_data_2593_V_read2663_phi_phi_fu_104406_p4 = ap_phi_reg_pp0_iter0_data_2593_V_read2663_phi_reg_104402.read();
        }
    } else {
        ap_phi_mux_data_2593_V_read2663_phi_phi_fu_104406_p4 = ap_phi_reg_pp0_iter0_data_2593_V_read2663_phi_reg_104402.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_62185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_62185_p6 = data_2593_V_read2663_phi_reg_104402.read();
    } else {
        ap_phi_mux_data_2593_V_read2663_rewind_phi_fu_62185_p6 = data_2593_V_read2663_rewind_reg_62181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2594_V_read2664_phi_phi_fu_104419_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2594_V_read2664_phi_phi_fu_104419_p4 = ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_62199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2594_V_read2664_phi_phi_fu_104419_p4 = data_2594_V_read.read();
        } else {
            ap_phi_mux_data_2594_V_read2664_phi_phi_fu_104419_p4 = ap_phi_reg_pp0_iter0_data_2594_V_read2664_phi_reg_104415.read();
        }
    } else {
        ap_phi_mux_data_2594_V_read2664_phi_phi_fu_104419_p4 = ap_phi_reg_pp0_iter0_data_2594_V_read2664_phi_reg_104415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_62199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_62199_p6 = data_2594_V_read2664_phi_reg_104415.read();
    } else {
        ap_phi_mux_data_2594_V_read2664_rewind_phi_fu_62199_p6 = data_2594_V_read2664_rewind_reg_62195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2595_V_read2665_phi_phi_fu_104432_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2595_V_read2665_phi_phi_fu_104432_p4 = ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_62213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2595_V_read2665_phi_phi_fu_104432_p4 = data_2595_V_read.read();
        } else {
            ap_phi_mux_data_2595_V_read2665_phi_phi_fu_104432_p4 = ap_phi_reg_pp0_iter0_data_2595_V_read2665_phi_reg_104428.read();
        }
    } else {
        ap_phi_mux_data_2595_V_read2665_phi_phi_fu_104432_p4 = ap_phi_reg_pp0_iter0_data_2595_V_read2665_phi_reg_104428.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_62213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_62213_p6 = data_2595_V_read2665_phi_reg_104428.read();
    } else {
        ap_phi_mux_data_2595_V_read2665_rewind_phi_fu_62213_p6 = data_2595_V_read2665_rewind_reg_62209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2596_V_read2666_phi_phi_fu_104445_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2596_V_read2666_phi_phi_fu_104445_p4 = ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_62227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2596_V_read2666_phi_phi_fu_104445_p4 = data_2596_V_read.read();
        } else {
            ap_phi_mux_data_2596_V_read2666_phi_phi_fu_104445_p4 = ap_phi_reg_pp0_iter0_data_2596_V_read2666_phi_reg_104441.read();
        }
    } else {
        ap_phi_mux_data_2596_V_read2666_phi_phi_fu_104445_p4 = ap_phi_reg_pp0_iter0_data_2596_V_read2666_phi_reg_104441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_62227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_62227_p6 = data_2596_V_read2666_phi_reg_104441.read();
    } else {
        ap_phi_mux_data_2596_V_read2666_rewind_phi_fu_62227_p6 = data_2596_V_read2666_rewind_reg_62223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2597_V_read2667_phi_phi_fu_104458_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2597_V_read2667_phi_phi_fu_104458_p4 = ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_62241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2597_V_read2667_phi_phi_fu_104458_p4 = data_2597_V_read.read();
        } else {
            ap_phi_mux_data_2597_V_read2667_phi_phi_fu_104458_p4 = ap_phi_reg_pp0_iter0_data_2597_V_read2667_phi_reg_104454.read();
        }
    } else {
        ap_phi_mux_data_2597_V_read2667_phi_phi_fu_104458_p4 = ap_phi_reg_pp0_iter0_data_2597_V_read2667_phi_reg_104454.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_62241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_62241_p6 = data_2597_V_read2667_phi_reg_104454.read();
    } else {
        ap_phi_mux_data_2597_V_read2667_rewind_phi_fu_62241_p6 = data_2597_V_read2667_rewind_reg_62237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2598_V_read2668_phi_phi_fu_104471_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2598_V_read2668_phi_phi_fu_104471_p4 = ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_62255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2598_V_read2668_phi_phi_fu_104471_p4 = data_2598_V_read.read();
        } else {
            ap_phi_mux_data_2598_V_read2668_phi_phi_fu_104471_p4 = ap_phi_reg_pp0_iter0_data_2598_V_read2668_phi_reg_104467.read();
        }
    } else {
        ap_phi_mux_data_2598_V_read2668_phi_phi_fu_104471_p4 = ap_phi_reg_pp0_iter0_data_2598_V_read2668_phi_reg_104467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_62255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_62255_p6 = data_2598_V_read2668_phi_reg_104467.read();
    } else {
        ap_phi_mux_data_2598_V_read2668_rewind_phi_fu_62255_p6 = data_2598_V_read2668_rewind_reg_62251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2599_V_read2669_phi_phi_fu_104484_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2599_V_read2669_phi_phi_fu_104484_p4 = ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_62269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2599_V_read2669_phi_phi_fu_104484_p4 = data_2599_V_read.read();
        } else {
            ap_phi_mux_data_2599_V_read2669_phi_phi_fu_104484_p4 = ap_phi_reg_pp0_iter0_data_2599_V_read2669_phi_reg_104480.read();
        }
    } else {
        ap_phi_mux_data_2599_V_read2669_phi_phi_fu_104484_p4 = ap_phi_reg_pp0_iter0_data_2599_V_read2669_phi_reg_104480.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_62269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_62269_p6 = data_2599_V_read2669_phi_reg_104480.read();
    } else {
        ap_phi_mux_data_2599_V_read2669_rewind_phi_fu_62269_p6 = data_2599_V_read2669_rewind_reg_62265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_259_V_read329_phi_phi_fu_74064_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_259_V_read329_phi_phi_fu_74064_p4 = ap_phi_mux_data_259_V_read329_rewind_phi_fu_29509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_259_V_read329_phi_phi_fu_74064_p4 = data_259_V_read.read();
        } else {
            ap_phi_mux_data_259_V_read329_phi_phi_fu_74064_p4 = ap_phi_reg_pp0_iter0_data_259_V_read329_phi_reg_74060.read();
        }
    } else {
        ap_phi_mux_data_259_V_read329_phi_phi_fu_74064_p4 = ap_phi_reg_pp0_iter0_data_259_V_read329_phi_reg_74060.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_259_V_read329_rewind_phi_fu_29509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_259_V_read329_rewind_phi_fu_29509_p6 = data_259_V_read329_phi_reg_74060.read();
    } else {
        ap_phi_mux_data_259_V_read329_rewind_phi_fu_29509_p6 = data_259_V_read329_rewind_reg_29505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_25_V_read95_phi_phi_fu_71022_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_25_V_read95_phi_phi_fu_71022_p4 = ap_phi_mux_data_25_V_read95_rewind_phi_fu_26233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_25_V_read95_phi_phi_fu_71022_p4 = data_25_V_read.read();
        } else {
            ap_phi_mux_data_25_V_read95_phi_phi_fu_71022_p4 = ap_phi_reg_pp0_iter0_data_25_V_read95_phi_reg_71018.read();
        }
    } else {
        ap_phi_mux_data_25_V_read95_phi_phi_fu_71022_p4 = ap_phi_reg_pp0_iter0_data_25_V_read95_phi_reg_71018.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_25_V_read95_rewind_phi_fu_26233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_25_V_read95_rewind_phi_fu_26233_p6 = data_25_V_read95_phi_reg_71018.read();
    } else {
        ap_phi_mux_data_25_V_read95_rewind_phi_fu_26233_p6 = data_25_V_read95_rewind_reg_26229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2600_V_read2670_phi_phi_fu_104497_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2600_V_read2670_phi_phi_fu_104497_p4 = ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_62283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2600_V_read2670_phi_phi_fu_104497_p4 = data_2600_V_read.read();
        } else {
            ap_phi_mux_data_2600_V_read2670_phi_phi_fu_104497_p4 = ap_phi_reg_pp0_iter0_data_2600_V_read2670_phi_reg_104493.read();
        }
    } else {
        ap_phi_mux_data_2600_V_read2670_phi_phi_fu_104497_p4 = ap_phi_reg_pp0_iter0_data_2600_V_read2670_phi_reg_104493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_62283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_62283_p6 = data_2600_V_read2670_phi_reg_104493.read();
    } else {
        ap_phi_mux_data_2600_V_read2670_rewind_phi_fu_62283_p6 = data_2600_V_read2670_rewind_reg_62279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2601_V_read2671_phi_phi_fu_104510_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2601_V_read2671_phi_phi_fu_104510_p4 = ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_62297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2601_V_read2671_phi_phi_fu_104510_p4 = data_2601_V_read.read();
        } else {
            ap_phi_mux_data_2601_V_read2671_phi_phi_fu_104510_p4 = ap_phi_reg_pp0_iter0_data_2601_V_read2671_phi_reg_104506.read();
        }
    } else {
        ap_phi_mux_data_2601_V_read2671_phi_phi_fu_104510_p4 = ap_phi_reg_pp0_iter0_data_2601_V_read2671_phi_reg_104506.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_62297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_62297_p6 = data_2601_V_read2671_phi_reg_104506.read();
    } else {
        ap_phi_mux_data_2601_V_read2671_rewind_phi_fu_62297_p6 = data_2601_V_read2671_rewind_reg_62293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2602_V_read2672_phi_phi_fu_104523_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2602_V_read2672_phi_phi_fu_104523_p4 = ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_62311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2602_V_read2672_phi_phi_fu_104523_p4 = data_2602_V_read.read();
        } else {
            ap_phi_mux_data_2602_V_read2672_phi_phi_fu_104523_p4 = ap_phi_reg_pp0_iter0_data_2602_V_read2672_phi_reg_104519.read();
        }
    } else {
        ap_phi_mux_data_2602_V_read2672_phi_phi_fu_104523_p4 = ap_phi_reg_pp0_iter0_data_2602_V_read2672_phi_reg_104519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_62311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_62311_p6 = data_2602_V_read2672_phi_reg_104519.read();
    } else {
        ap_phi_mux_data_2602_V_read2672_rewind_phi_fu_62311_p6 = data_2602_V_read2672_rewind_reg_62307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2603_V_read2673_phi_phi_fu_104536_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2603_V_read2673_phi_phi_fu_104536_p4 = ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_62325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2603_V_read2673_phi_phi_fu_104536_p4 = data_2603_V_read.read();
        } else {
            ap_phi_mux_data_2603_V_read2673_phi_phi_fu_104536_p4 = ap_phi_reg_pp0_iter0_data_2603_V_read2673_phi_reg_104532.read();
        }
    } else {
        ap_phi_mux_data_2603_V_read2673_phi_phi_fu_104536_p4 = ap_phi_reg_pp0_iter0_data_2603_V_read2673_phi_reg_104532.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_62325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_62325_p6 = data_2603_V_read2673_phi_reg_104532.read();
    } else {
        ap_phi_mux_data_2603_V_read2673_rewind_phi_fu_62325_p6 = data_2603_V_read2673_rewind_reg_62321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2604_V_read2674_phi_phi_fu_104549_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2604_V_read2674_phi_phi_fu_104549_p4 = ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_62339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2604_V_read2674_phi_phi_fu_104549_p4 = data_2604_V_read.read();
        } else {
            ap_phi_mux_data_2604_V_read2674_phi_phi_fu_104549_p4 = ap_phi_reg_pp0_iter0_data_2604_V_read2674_phi_reg_104545.read();
        }
    } else {
        ap_phi_mux_data_2604_V_read2674_phi_phi_fu_104549_p4 = ap_phi_reg_pp0_iter0_data_2604_V_read2674_phi_reg_104545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_62339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_62339_p6 = data_2604_V_read2674_phi_reg_104545.read();
    } else {
        ap_phi_mux_data_2604_V_read2674_rewind_phi_fu_62339_p6 = data_2604_V_read2674_rewind_reg_62335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2605_V_read2675_phi_phi_fu_104562_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2605_V_read2675_phi_phi_fu_104562_p4 = ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_62353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2605_V_read2675_phi_phi_fu_104562_p4 = data_2605_V_read.read();
        } else {
            ap_phi_mux_data_2605_V_read2675_phi_phi_fu_104562_p4 = ap_phi_reg_pp0_iter0_data_2605_V_read2675_phi_reg_104558.read();
        }
    } else {
        ap_phi_mux_data_2605_V_read2675_phi_phi_fu_104562_p4 = ap_phi_reg_pp0_iter0_data_2605_V_read2675_phi_reg_104558.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_62353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_62353_p6 = data_2605_V_read2675_phi_reg_104558.read();
    } else {
        ap_phi_mux_data_2605_V_read2675_rewind_phi_fu_62353_p6 = data_2605_V_read2675_rewind_reg_62349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2606_V_read2676_phi_phi_fu_104575_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2606_V_read2676_phi_phi_fu_104575_p4 = ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_62367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2606_V_read2676_phi_phi_fu_104575_p4 = data_2606_V_read.read();
        } else {
            ap_phi_mux_data_2606_V_read2676_phi_phi_fu_104575_p4 = ap_phi_reg_pp0_iter0_data_2606_V_read2676_phi_reg_104571.read();
        }
    } else {
        ap_phi_mux_data_2606_V_read2676_phi_phi_fu_104575_p4 = ap_phi_reg_pp0_iter0_data_2606_V_read2676_phi_reg_104571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_62367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_62367_p6 = data_2606_V_read2676_phi_reg_104571.read();
    } else {
        ap_phi_mux_data_2606_V_read2676_rewind_phi_fu_62367_p6 = data_2606_V_read2676_rewind_reg_62363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2607_V_read2677_phi_phi_fu_104588_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2607_V_read2677_phi_phi_fu_104588_p4 = ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_62381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2607_V_read2677_phi_phi_fu_104588_p4 = data_2607_V_read.read();
        } else {
            ap_phi_mux_data_2607_V_read2677_phi_phi_fu_104588_p4 = ap_phi_reg_pp0_iter0_data_2607_V_read2677_phi_reg_104584.read();
        }
    } else {
        ap_phi_mux_data_2607_V_read2677_phi_phi_fu_104588_p4 = ap_phi_reg_pp0_iter0_data_2607_V_read2677_phi_reg_104584.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_62381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_62381_p6 = data_2607_V_read2677_phi_reg_104584.read();
    } else {
        ap_phi_mux_data_2607_V_read2677_rewind_phi_fu_62381_p6 = data_2607_V_read2677_rewind_reg_62377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2608_V_read2678_phi_phi_fu_104601_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2608_V_read2678_phi_phi_fu_104601_p4 = ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_62395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2608_V_read2678_phi_phi_fu_104601_p4 = data_2608_V_read.read();
        } else {
            ap_phi_mux_data_2608_V_read2678_phi_phi_fu_104601_p4 = ap_phi_reg_pp0_iter0_data_2608_V_read2678_phi_reg_104597.read();
        }
    } else {
        ap_phi_mux_data_2608_V_read2678_phi_phi_fu_104601_p4 = ap_phi_reg_pp0_iter0_data_2608_V_read2678_phi_reg_104597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_62395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_62395_p6 = data_2608_V_read2678_phi_reg_104597.read();
    } else {
        ap_phi_mux_data_2608_V_read2678_rewind_phi_fu_62395_p6 = data_2608_V_read2678_rewind_reg_62391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2609_V_read2679_phi_phi_fu_104614_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2609_V_read2679_phi_phi_fu_104614_p4 = ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_62409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2609_V_read2679_phi_phi_fu_104614_p4 = data_2609_V_read.read();
        } else {
            ap_phi_mux_data_2609_V_read2679_phi_phi_fu_104614_p4 = ap_phi_reg_pp0_iter0_data_2609_V_read2679_phi_reg_104610.read();
        }
    } else {
        ap_phi_mux_data_2609_V_read2679_phi_phi_fu_104614_p4 = ap_phi_reg_pp0_iter0_data_2609_V_read2679_phi_reg_104610.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_62409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_62409_p6 = data_2609_V_read2679_phi_reg_104610.read();
    } else {
        ap_phi_mux_data_2609_V_read2679_rewind_phi_fu_62409_p6 = data_2609_V_read2679_rewind_reg_62405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_260_V_read330_phi_phi_fu_74077_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_260_V_read330_phi_phi_fu_74077_p4 = ap_phi_mux_data_260_V_read330_rewind_phi_fu_29523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_260_V_read330_phi_phi_fu_74077_p4 = data_260_V_read.read();
        } else {
            ap_phi_mux_data_260_V_read330_phi_phi_fu_74077_p4 = ap_phi_reg_pp0_iter0_data_260_V_read330_phi_reg_74073.read();
        }
    } else {
        ap_phi_mux_data_260_V_read330_phi_phi_fu_74077_p4 = ap_phi_reg_pp0_iter0_data_260_V_read330_phi_reg_74073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_260_V_read330_rewind_phi_fu_29523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_260_V_read330_rewind_phi_fu_29523_p6 = data_260_V_read330_phi_reg_74073.read();
    } else {
        ap_phi_mux_data_260_V_read330_rewind_phi_fu_29523_p6 = data_260_V_read330_rewind_reg_29519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2610_V_read2680_phi_phi_fu_104627_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2610_V_read2680_phi_phi_fu_104627_p4 = ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_62423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2610_V_read2680_phi_phi_fu_104627_p4 = data_2610_V_read.read();
        } else {
            ap_phi_mux_data_2610_V_read2680_phi_phi_fu_104627_p4 = ap_phi_reg_pp0_iter0_data_2610_V_read2680_phi_reg_104623.read();
        }
    } else {
        ap_phi_mux_data_2610_V_read2680_phi_phi_fu_104627_p4 = ap_phi_reg_pp0_iter0_data_2610_V_read2680_phi_reg_104623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_62423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_62423_p6 = data_2610_V_read2680_phi_reg_104623.read();
    } else {
        ap_phi_mux_data_2610_V_read2680_rewind_phi_fu_62423_p6 = data_2610_V_read2680_rewind_reg_62419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2611_V_read2681_phi_phi_fu_104640_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2611_V_read2681_phi_phi_fu_104640_p4 = ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_62437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2611_V_read2681_phi_phi_fu_104640_p4 = data_2611_V_read.read();
        } else {
            ap_phi_mux_data_2611_V_read2681_phi_phi_fu_104640_p4 = ap_phi_reg_pp0_iter0_data_2611_V_read2681_phi_reg_104636.read();
        }
    } else {
        ap_phi_mux_data_2611_V_read2681_phi_phi_fu_104640_p4 = ap_phi_reg_pp0_iter0_data_2611_V_read2681_phi_reg_104636.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_62437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_62437_p6 = data_2611_V_read2681_phi_reg_104636.read();
    } else {
        ap_phi_mux_data_2611_V_read2681_rewind_phi_fu_62437_p6 = data_2611_V_read2681_rewind_reg_62433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2612_V_read2682_phi_phi_fu_104653_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2612_V_read2682_phi_phi_fu_104653_p4 = ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_62451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2612_V_read2682_phi_phi_fu_104653_p4 = data_2612_V_read.read();
        } else {
            ap_phi_mux_data_2612_V_read2682_phi_phi_fu_104653_p4 = ap_phi_reg_pp0_iter0_data_2612_V_read2682_phi_reg_104649.read();
        }
    } else {
        ap_phi_mux_data_2612_V_read2682_phi_phi_fu_104653_p4 = ap_phi_reg_pp0_iter0_data_2612_V_read2682_phi_reg_104649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_62451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_62451_p6 = data_2612_V_read2682_phi_reg_104649.read();
    } else {
        ap_phi_mux_data_2612_V_read2682_rewind_phi_fu_62451_p6 = data_2612_V_read2682_rewind_reg_62447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2613_V_read2683_phi_phi_fu_104666_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2613_V_read2683_phi_phi_fu_104666_p4 = ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_62465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2613_V_read2683_phi_phi_fu_104666_p4 = data_2613_V_read.read();
        } else {
            ap_phi_mux_data_2613_V_read2683_phi_phi_fu_104666_p4 = ap_phi_reg_pp0_iter0_data_2613_V_read2683_phi_reg_104662.read();
        }
    } else {
        ap_phi_mux_data_2613_V_read2683_phi_phi_fu_104666_p4 = ap_phi_reg_pp0_iter0_data_2613_V_read2683_phi_reg_104662.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_62465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_62465_p6 = data_2613_V_read2683_phi_reg_104662.read();
    } else {
        ap_phi_mux_data_2613_V_read2683_rewind_phi_fu_62465_p6 = data_2613_V_read2683_rewind_reg_62461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2614_V_read2684_phi_phi_fu_104679_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2614_V_read2684_phi_phi_fu_104679_p4 = ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_62479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2614_V_read2684_phi_phi_fu_104679_p4 = data_2614_V_read.read();
        } else {
            ap_phi_mux_data_2614_V_read2684_phi_phi_fu_104679_p4 = ap_phi_reg_pp0_iter0_data_2614_V_read2684_phi_reg_104675.read();
        }
    } else {
        ap_phi_mux_data_2614_V_read2684_phi_phi_fu_104679_p4 = ap_phi_reg_pp0_iter0_data_2614_V_read2684_phi_reg_104675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_62479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_62479_p6 = data_2614_V_read2684_phi_reg_104675.read();
    } else {
        ap_phi_mux_data_2614_V_read2684_rewind_phi_fu_62479_p6 = data_2614_V_read2684_rewind_reg_62475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2615_V_read2685_phi_phi_fu_104692_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2615_V_read2685_phi_phi_fu_104692_p4 = ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_62493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2615_V_read2685_phi_phi_fu_104692_p4 = data_2615_V_read.read();
        } else {
            ap_phi_mux_data_2615_V_read2685_phi_phi_fu_104692_p4 = ap_phi_reg_pp0_iter0_data_2615_V_read2685_phi_reg_104688.read();
        }
    } else {
        ap_phi_mux_data_2615_V_read2685_phi_phi_fu_104692_p4 = ap_phi_reg_pp0_iter0_data_2615_V_read2685_phi_reg_104688.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_62493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_62493_p6 = data_2615_V_read2685_phi_reg_104688.read();
    } else {
        ap_phi_mux_data_2615_V_read2685_rewind_phi_fu_62493_p6 = data_2615_V_read2685_rewind_reg_62489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2616_V_read2686_phi_phi_fu_104705_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2616_V_read2686_phi_phi_fu_104705_p4 = ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_62507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2616_V_read2686_phi_phi_fu_104705_p4 = data_2616_V_read.read();
        } else {
            ap_phi_mux_data_2616_V_read2686_phi_phi_fu_104705_p4 = ap_phi_reg_pp0_iter0_data_2616_V_read2686_phi_reg_104701.read();
        }
    } else {
        ap_phi_mux_data_2616_V_read2686_phi_phi_fu_104705_p4 = ap_phi_reg_pp0_iter0_data_2616_V_read2686_phi_reg_104701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_62507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_62507_p6 = data_2616_V_read2686_phi_reg_104701.read();
    } else {
        ap_phi_mux_data_2616_V_read2686_rewind_phi_fu_62507_p6 = data_2616_V_read2686_rewind_reg_62503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2617_V_read2687_phi_phi_fu_104718_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2617_V_read2687_phi_phi_fu_104718_p4 = ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_62521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2617_V_read2687_phi_phi_fu_104718_p4 = data_2617_V_read.read();
        } else {
            ap_phi_mux_data_2617_V_read2687_phi_phi_fu_104718_p4 = ap_phi_reg_pp0_iter0_data_2617_V_read2687_phi_reg_104714.read();
        }
    } else {
        ap_phi_mux_data_2617_V_read2687_phi_phi_fu_104718_p4 = ap_phi_reg_pp0_iter0_data_2617_V_read2687_phi_reg_104714.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_62521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_62521_p6 = data_2617_V_read2687_phi_reg_104714.read();
    } else {
        ap_phi_mux_data_2617_V_read2687_rewind_phi_fu_62521_p6 = data_2617_V_read2687_rewind_reg_62517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2618_V_read2688_phi_phi_fu_104731_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2618_V_read2688_phi_phi_fu_104731_p4 = ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_62535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2618_V_read2688_phi_phi_fu_104731_p4 = data_2618_V_read.read();
        } else {
            ap_phi_mux_data_2618_V_read2688_phi_phi_fu_104731_p4 = ap_phi_reg_pp0_iter0_data_2618_V_read2688_phi_reg_104727.read();
        }
    } else {
        ap_phi_mux_data_2618_V_read2688_phi_phi_fu_104731_p4 = ap_phi_reg_pp0_iter0_data_2618_V_read2688_phi_reg_104727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_62535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_62535_p6 = data_2618_V_read2688_phi_reg_104727.read();
    } else {
        ap_phi_mux_data_2618_V_read2688_rewind_phi_fu_62535_p6 = data_2618_V_read2688_rewind_reg_62531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2619_V_read2689_phi_phi_fu_104744_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2619_V_read2689_phi_phi_fu_104744_p4 = ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_62549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2619_V_read2689_phi_phi_fu_104744_p4 = data_2619_V_read.read();
        } else {
            ap_phi_mux_data_2619_V_read2689_phi_phi_fu_104744_p4 = ap_phi_reg_pp0_iter0_data_2619_V_read2689_phi_reg_104740.read();
        }
    } else {
        ap_phi_mux_data_2619_V_read2689_phi_phi_fu_104744_p4 = ap_phi_reg_pp0_iter0_data_2619_V_read2689_phi_reg_104740.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_62549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_62549_p6 = data_2619_V_read2689_phi_reg_104740.read();
    } else {
        ap_phi_mux_data_2619_V_read2689_rewind_phi_fu_62549_p6 = data_2619_V_read2689_rewind_reg_62545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_261_V_read331_phi_phi_fu_74090_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_261_V_read331_phi_phi_fu_74090_p4 = ap_phi_mux_data_261_V_read331_rewind_phi_fu_29537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_261_V_read331_phi_phi_fu_74090_p4 = data_261_V_read.read();
        } else {
            ap_phi_mux_data_261_V_read331_phi_phi_fu_74090_p4 = ap_phi_reg_pp0_iter0_data_261_V_read331_phi_reg_74086.read();
        }
    } else {
        ap_phi_mux_data_261_V_read331_phi_phi_fu_74090_p4 = ap_phi_reg_pp0_iter0_data_261_V_read331_phi_reg_74086.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_261_V_read331_rewind_phi_fu_29537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_261_V_read331_rewind_phi_fu_29537_p6 = data_261_V_read331_phi_reg_74086.read();
    } else {
        ap_phi_mux_data_261_V_read331_rewind_phi_fu_29537_p6 = data_261_V_read331_rewind_reg_29533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2620_V_read2690_phi_phi_fu_104757_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2620_V_read2690_phi_phi_fu_104757_p4 = ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_62563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2620_V_read2690_phi_phi_fu_104757_p4 = data_2620_V_read.read();
        } else {
            ap_phi_mux_data_2620_V_read2690_phi_phi_fu_104757_p4 = ap_phi_reg_pp0_iter0_data_2620_V_read2690_phi_reg_104753.read();
        }
    } else {
        ap_phi_mux_data_2620_V_read2690_phi_phi_fu_104757_p4 = ap_phi_reg_pp0_iter0_data_2620_V_read2690_phi_reg_104753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_62563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_62563_p6 = data_2620_V_read2690_phi_reg_104753.read();
    } else {
        ap_phi_mux_data_2620_V_read2690_rewind_phi_fu_62563_p6 = data_2620_V_read2690_rewind_reg_62559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2621_V_read2691_phi_phi_fu_104770_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2621_V_read2691_phi_phi_fu_104770_p4 = ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_62577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2621_V_read2691_phi_phi_fu_104770_p4 = data_2621_V_read.read();
        } else {
            ap_phi_mux_data_2621_V_read2691_phi_phi_fu_104770_p4 = ap_phi_reg_pp0_iter0_data_2621_V_read2691_phi_reg_104766.read();
        }
    } else {
        ap_phi_mux_data_2621_V_read2691_phi_phi_fu_104770_p4 = ap_phi_reg_pp0_iter0_data_2621_V_read2691_phi_reg_104766.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_62577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_62577_p6 = data_2621_V_read2691_phi_reg_104766.read();
    } else {
        ap_phi_mux_data_2621_V_read2691_rewind_phi_fu_62577_p6 = data_2621_V_read2691_rewind_reg_62573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2622_V_read2692_phi_phi_fu_104783_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2622_V_read2692_phi_phi_fu_104783_p4 = ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_62591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2622_V_read2692_phi_phi_fu_104783_p4 = data_2622_V_read.read();
        } else {
            ap_phi_mux_data_2622_V_read2692_phi_phi_fu_104783_p4 = ap_phi_reg_pp0_iter0_data_2622_V_read2692_phi_reg_104779.read();
        }
    } else {
        ap_phi_mux_data_2622_V_read2692_phi_phi_fu_104783_p4 = ap_phi_reg_pp0_iter0_data_2622_V_read2692_phi_reg_104779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_62591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_62591_p6 = data_2622_V_read2692_phi_reg_104779.read();
    } else {
        ap_phi_mux_data_2622_V_read2692_rewind_phi_fu_62591_p6 = data_2622_V_read2692_rewind_reg_62587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2623_V_read2693_phi_phi_fu_104796_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2623_V_read2693_phi_phi_fu_104796_p4 = ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_62605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2623_V_read2693_phi_phi_fu_104796_p4 = data_2623_V_read.read();
        } else {
            ap_phi_mux_data_2623_V_read2693_phi_phi_fu_104796_p4 = ap_phi_reg_pp0_iter0_data_2623_V_read2693_phi_reg_104792.read();
        }
    } else {
        ap_phi_mux_data_2623_V_read2693_phi_phi_fu_104796_p4 = ap_phi_reg_pp0_iter0_data_2623_V_read2693_phi_reg_104792.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_62605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_62605_p6 = data_2623_V_read2693_phi_reg_104792.read();
    } else {
        ap_phi_mux_data_2623_V_read2693_rewind_phi_fu_62605_p6 = data_2623_V_read2693_rewind_reg_62601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2624_V_read2694_phi_phi_fu_104809_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2624_V_read2694_phi_phi_fu_104809_p4 = ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_62619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2624_V_read2694_phi_phi_fu_104809_p4 = data_2624_V_read.read();
        } else {
            ap_phi_mux_data_2624_V_read2694_phi_phi_fu_104809_p4 = ap_phi_reg_pp0_iter0_data_2624_V_read2694_phi_reg_104805.read();
        }
    } else {
        ap_phi_mux_data_2624_V_read2694_phi_phi_fu_104809_p4 = ap_phi_reg_pp0_iter0_data_2624_V_read2694_phi_reg_104805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_62619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_62619_p6 = data_2624_V_read2694_phi_reg_104805.read();
    } else {
        ap_phi_mux_data_2624_V_read2694_rewind_phi_fu_62619_p6 = data_2624_V_read2694_rewind_reg_62615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2625_V_read2695_phi_phi_fu_104822_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2625_V_read2695_phi_phi_fu_104822_p4 = ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_62633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2625_V_read2695_phi_phi_fu_104822_p4 = data_2625_V_read.read();
        } else {
            ap_phi_mux_data_2625_V_read2695_phi_phi_fu_104822_p4 = ap_phi_reg_pp0_iter0_data_2625_V_read2695_phi_reg_104818.read();
        }
    } else {
        ap_phi_mux_data_2625_V_read2695_phi_phi_fu_104822_p4 = ap_phi_reg_pp0_iter0_data_2625_V_read2695_phi_reg_104818.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_62633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_62633_p6 = data_2625_V_read2695_phi_reg_104818.read();
    } else {
        ap_phi_mux_data_2625_V_read2695_rewind_phi_fu_62633_p6 = data_2625_V_read2695_rewind_reg_62629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2626_V_read2696_phi_phi_fu_104835_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2626_V_read2696_phi_phi_fu_104835_p4 = ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_62647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2626_V_read2696_phi_phi_fu_104835_p4 = data_2626_V_read.read();
        } else {
            ap_phi_mux_data_2626_V_read2696_phi_phi_fu_104835_p4 = ap_phi_reg_pp0_iter0_data_2626_V_read2696_phi_reg_104831.read();
        }
    } else {
        ap_phi_mux_data_2626_V_read2696_phi_phi_fu_104835_p4 = ap_phi_reg_pp0_iter0_data_2626_V_read2696_phi_reg_104831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_62647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_62647_p6 = data_2626_V_read2696_phi_reg_104831.read();
    } else {
        ap_phi_mux_data_2626_V_read2696_rewind_phi_fu_62647_p6 = data_2626_V_read2696_rewind_reg_62643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2627_V_read2697_phi_phi_fu_104848_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2627_V_read2697_phi_phi_fu_104848_p4 = ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_62661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2627_V_read2697_phi_phi_fu_104848_p4 = data_2627_V_read.read();
        } else {
            ap_phi_mux_data_2627_V_read2697_phi_phi_fu_104848_p4 = ap_phi_reg_pp0_iter0_data_2627_V_read2697_phi_reg_104844.read();
        }
    } else {
        ap_phi_mux_data_2627_V_read2697_phi_phi_fu_104848_p4 = ap_phi_reg_pp0_iter0_data_2627_V_read2697_phi_reg_104844.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_62661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_62661_p6 = data_2627_V_read2697_phi_reg_104844.read();
    } else {
        ap_phi_mux_data_2627_V_read2697_rewind_phi_fu_62661_p6 = data_2627_V_read2697_rewind_reg_62657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2628_V_read2698_phi_phi_fu_104861_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2628_V_read2698_phi_phi_fu_104861_p4 = ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_62675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2628_V_read2698_phi_phi_fu_104861_p4 = data_2628_V_read.read();
        } else {
            ap_phi_mux_data_2628_V_read2698_phi_phi_fu_104861_p4 = ap_phi_reg_pp0_iter0_data_2628_V_read2698_phi_reg_104857.read();
        }
    } else {
        ap_phi_mux_data_2628_V_read2698_phi_phi_fu_104861_p4 = ap_phi_reg_pp0_iter0_data_2628_V_read2698_phi_reg_104857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_62675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_62675_p6 = data_2628_V_read2698_phi_reg_104857.read();
    } else {
        ap_phi_mux_data_2628_V_read2698_rewind_phi_fu_62675_p6 = data_2628_V_read2698_rewind_reg_62671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2629_V_read2699_phi_phi_fu_104874_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2629_V_read2699_phi_phi_fu_104874_p4 = ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_62689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2629_V_read2699_phi_phi_fu_104874_p4 = data_2629_V_read.read();
        } else {
            ap_phi_mux_data_2629_V_read2699_phi_phi_fu_104874_p4 = ap_phi_reg_pp0_iter0_data_2629_V_read2699_phi_reg_104870.read();
        }
    } else {
        ap_phi_mux_data_2629_V_read2699_phi_phi_fu_104874_p4 = ap_phi_reg_pp0_iter0_data_2629_V_read2699_phi_reg_104870.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_62689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_62689_p6 = data_2629_V_read2699_phi_reg_104870.read();
    } else {
        ap_phi_mux_data_2629_V_read2699_rewind_phi_fu_62689_p6 = data_2629_V_read2699_rewind_reg_62685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_262_V_read332_phi_phi_fu_74103_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_262_V_read332_phi_phi_fu_74103_p4 = ap_phi_mux_data_262_V_read332_rewind_phi_fu_29551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_262_V_read332_phi_phi_fu_74103_p4 = data_262_V_read.read();
        } else {
            ap_phi_mux_data_262_V_read332_phi_phi_fu_74103_p4 = ap_phi_reg_pp0_iter0_data_262_V_read332_phi_reg_74099.read();
        }
    } else {
        ap_phi_mux_data_262_V_read332_phi_phi_fu_74103_p4 = ap_phi_reg_pp0_iter0_data_262_V_read332_phi_reg_74099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_262_V_read332_rewind_phi_fu_29551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_262_V_read332_rewind_phi_fu_29551_p6 = data_262_V_read332_phi_reg_74099.read();
    } else {
        ap_phi_mux_data_262_V_read332_rewind_phi_fu_29551_p6 = data_262_V_read332_rewind_reg_29547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2630_V_read2700_phi_phi_fu_104887_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2630_V_read2700_phi_phi_fu_104887_p4 = ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_62703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2630_V_read2700_phi_phi_fu_104887_p4 = data_2630_V_read.read();
        } else {
            ap_phi_mux_data_2630_V_read2700_phi_phi_fu_104887_p4 = ap_phi_reg_pp0_iter0_data_2630_V_read2700_phi_reg_104883.read();
        }
    } else {
        ap_phi_mux_data_2630_V_read2700_phi_phi_fu_104887_p4 = ap_phi_reg_pp0_iter0_data_2630_V_read2700_phi_reg_104883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_62703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_62703_p6 = data_2630_V_read2700_phi_reg_104883.read();
    } else {
        ap_phi_mux_data_2630_V_read2700_rewind_phi_fu_62703_p6 = data_2630_V_read2700_rewind_reg_62699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2631_V_read2701_phi_phi_fu_104900_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2631_V_read2701_phi_phi_fu_104900_p4 = ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_62717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2631_V_read2701_phi_phi_fu_104900_p4 = data_2631_V_read.read();
        } else {
            ap_phi_mux_data_2631_V_read2701_phi_phi_fu_104900_p4 = ap_phi_reg_pp0_iter0_data_2631_V_read2701_phi_reg_104896.read();
        }
    } else {
        ap_phi_mux_data_2631_V_read2701_phi_phi_fu_104900_p4 = ap_phi_reg_pp0_iter0_data_2631_V_read2701_phi_reg_104896.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_62717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_62717_p6 = data_2631_V_read2701_phi_reg_104896.read();
    } else {
        ap_phi_mux_data_2631_V_read2701_rewind_phi_fu_62717_p6 = data_2631_V_read2701_rewind_reg_62713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2632_V_read2702_phi_phi_fu_104913_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2632_V_read2702_phi_phi_fu_104913_p4 = ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_62731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2632_V_read2702_phi_phi_fu_104913_p4 = data_2632_V_read.read();
        } else {
            ap_phi_mux_data_2632_V_read2702_phi_phi_fu_104913_p4 = ap_phi_reg_pp0_iter0_data_2632_V_read2702_phi_reg_104909.read();
        }
    } else {
        ap_phi_mux_data_2632_V_read2702_phi_phi_fu_104913_p4 = ap_phi_reg_pp0_iter0_data_2632_V_read2702_phi_reg_104909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_62731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_62731_p6 = data_2632_V_read2702_phi_reg_104909.read();
    } else {
        ap_phi_mux_data_2632_V_read2702_rewind_phi_fu_62731_p6 = data_2632_V_read2702_rewind_reg_62727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2633_V_read2703_phi_phi_fu_104926_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2633_V_read2703_phi_phi_fu_104926_p4 = ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_62745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2633_V_read2703_phi_phi_fu_104926_p4 = data_2633_V_read.read();
        } else {
            ap_phi_mux_data_2633_V_read2703_phi_phi_fu_104926_p4 = ap_phi_reg_pp0_iter0_data_2633_V_read2703_phi_reg_104922.read();
        }
    } else {
        ap_phi_mux_data_2633_V_read2703_phi_phi_fu_104926_p4 = ap_phi_reg_pp0_iter0_data_2633_V_read2703_phi_reg_104922.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_62745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_62745_p6 = data_2633_V_read2703_phi_reg_104922.read();
    } else {
        ap_phi_mux_data_2633_V_read2703_rewind_phi_fu_62745_p6 = data_2633_V_read2703_rewind_reg_62741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2634_V_read2704_phi_phi_fu_104939_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2634_V_read2704_phi_phi_fu_104939_p4 = ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_62759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2634_V_read2704_phi_phi_fu_104939_p4 = data_2634_V_read.read();
        } else {
            ap_phi_mux_data_2634_V_read2704_phi_phi_fu_104939_p4 = ap_phi_reg_pp0_iter0_data_2634_V_read2704_phi_reg_104935.read();
        }
    } else {
        ap_phi_mux_data_2634_V_read2704_phi_phi_fu_104939_p4 = ap_phi_reg_pp0_iter0_data_2634_V_read2704_phi_reg_104935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_62759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_62759_p6 = data_2634_V_read2704_phi_reg_104935.read();
    } else {
        ap_phi_mux_data_2634_V_read2704_rewind_phi_fu_62759_p6 = data_2634_V_read2704_rewind_reg_62755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2635_V_read2705_phi_phi_fu_104952_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2635_V_read2705_phi_phi_fu_104952_p4 = ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_62773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2635_V_read2705_phi_phi_fu_104952_p4 = data_2635_V_read.read();
        } else {
            ap_phi_mux_data_2635_V_read2705_phi_phi_fu_104952_p4 = ap_phi_reg_pp0_iter0_data_2635_V_read2705_phi_reg_104948.read();
        }
    } else {
        ap_phi_mux_data_2635_V_read2705_phi_phi_fu_104952_p4 = ap_phi_reg_pp0_iter0_data_2635_V_read2705_phi_reg_104948.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_62773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_62773_p6 = data_2635_V_read2705_phi_reg_104948.read();
    } else {
        ap_phi_mux_data_2635_V_read2705_rewind_phi_fu_62773_p6 = data_2635_V_read2705_rewind_reg_62769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2636_V_read2706_phi_phi_fu_104965_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2636_V_read2706_phi_phi_fu_104965_p4 = ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_62787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2636_V_read2706_phi_phi_fu_104965_p4 = data_2636_V_read.read();
        } else {
            ap_phi_mux_data_2636_V_read2706_phi_phi_fu_104965_p4 = ap_phi_reg_pp0_iter0_data_2636_V_read2706_phi_reg_104961.read();
        }
    } else {
        ap_phi_mux_data_2636_V_read2706_phi_phi_fu_104965_p4 = ap_phi_reg_pp0_iter0_data_2636_V_read2706_phi_reg_104961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_62787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_62787_p6 = data_2636_V_read2706_phi_reg_104961.read();
    } else {
        ap_phi_mux_data_2636_V_read2706_rewind_phi_fu_62787_p6 = data_2636_V_read2706_rewind_reg_62783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2637_V_read2707_phi_phi_fu_104978_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2637_V_read2707_phi_phi_fu_104978_p4 = ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_62801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2637_V_read2707_phi_phi_fu_104978_p4 = data_2637_V_read.read();
        } else {
            ap_phi_mux_data_2637_V_read2707_phi_phi_fu_104978_p4 = ap_phi_reg_pp0_iter0_data_2637_V_read2707_phi_reg_104974.read();
        }
    } else {
        ap_phi_mux_data_2637_V_read2707_phi_phi_fu_104978_p4 = ap_phi_reg_pp0_iter0_data_2637_V_read2707_phi_reg_104974.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_62801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_62801_p6 = data_2637_V_read2707_phi_reg_104974.read();
    } else {
        ap_phi_mux_data_2637_V_read2707_rewind_phi_fu_62801_p6 = data_2637_V_read2707_rewind_reg_62797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2638_V_read2708_phi_phi_fu_104991_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2638_V_read2708_phi_phi_fu_104991_p4 = ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_62815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2638_V_read2708_phi_phi_fu_104991_p4 = data_2638_V_read.read();
        } else {
            ap_phi_mux_data_2638_V_read2708_phi_phi_fu_104991_p4 = ap_phi_reg_pp0_iter0_data_2638_V_read2708_phi_reg_104987.read();
        }
    } else {
        ap_phi_mux_data_2638_V_read2708_phi_phi_fu_104991_p4 = ap_phi_reg_pp0_iter0_data_2638_V_read2708_phi_reg_104987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_62815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_62815_p6 = data_2638_V_read2708_phi_reg_104987.read();
    } else {
        ap_phi_mux_data_2638_V_read2708_rewind_phi_fu_62815_p6 = data_2638_V_read2708_rewind_reg_62811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2639_V_read2709_phi_phi_fu_105004_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2639_V_read2709_phi_phi_fu_105004_p4 = ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_62829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2639_V_read2709_phi_phi_fu_105004_p4 = data_2639_V_read.read();
        } else {
            ap_phi_mux_data_2639_V_read2709_phi_phi_fu_105004_p4 = ap_phi_reg_pp0_iter0_data_2639_V_read2709_phi_reg_105000.read();
        }
    } else {
        ap_phi_mux_data_2639_V_read2709_phi_phi_fu_105004_p4 = ap_phi_reg_pp0_iter0_data_2639_V_read2709_phi_reg_105000.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_62829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_62829_p6 = data_2639_V_read2709_phi_reg_105000.read();
    } else {
        ap_phi_mux_data_2639_V_read2709_rewind_phi_fu_62829_p6 = data_2639_V_read2709_rewind_reg_62825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_263_V_read333_phi_phi_fu_74116_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_263_V_read333_phi_phi_fu_74116_p4 = ap_phi_mux_data_263_V_read333_rewind_phi_fu_29565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_263_V_read333_phi_phi_fu_74116_p4 = data_263_V_read.read();
        } else {
            ap_phi_mux_data_263_V_read333_phi_phi_fu_74116_p4 = ap_phi_reg_pp0_iter0_data_263_V_read333_phi_reg_74112.read();
        }
    } else {
        ap_phi_mux_data_263_V_read333_phi_phi_fu_74116_p4 = ap_phi_reg_pp0_iter0_data_263_V_read333_phi_reg_74112.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_263_V_read333_rewind_phi_fu_29565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_263_V_read333_rewind_phi_fu_29565_p6 = data_263_V_read333_phi_reg_74112.read();
    } else {
        ap_phi_mux_data_263_V_read333_rewind_phi_fu_29565_p6 = data_263_V_read333_rewind_reg_29561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2640_V_read2710_phi_phi_fu_105017_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2640_V_read2710_phi_phi_fu_105017_p4 = ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_62843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2640_V_read2710_phi_phi_fu_105017_p4 = data_2640_V_read.read();
        } else {
            ap_phi_mux_data_2640_V_read2710_phi_phi_fu_105017_p4 = ap_phi_reg_pp0_iter0_data_2640_V_read2710_phi_reg_105013.read();
        }
    } else {
        ap_phi_mux_data_2640_V_read2710_phi_phi_fu_105017_p4 = ap_phi_reg_pp0_iter0_data_2640_V_read2710_phi_reg_105013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_62843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_62843_p6 = data_2640_V_read2710_phi_reg_105013.read();
    } else {
        ap_phi_mux_data_2640_V_read2710_rewind_phi_fu_62843_p6 = data_2640_V_read2710_rewind_reg_62839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2641_V_read2711_phi_phi_fu_105030_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2641_V_read2711_phi_phi_fu_105030_p4 = ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_62857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2641_V_read2711_phi_phi_fu_105030_p4 = data_2641_V_read.read();
        } else {
            ap_phi_mux_data_2641_V_read2711_phi_phi_fu_105030_p4 = ap_phi_reg_pp0_iter0_data_2641_V_read2711_phi_reg_105026.read();
        }
    } else {
        ap_phi_mux_data_2641_V_read2711_phi_phi_fu_105030_p4 = ap_phi_reg_pp0_iter0_data_2641_V_read2711_phi_reg_105026.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_62857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_62857_p6 = data_2641_V_read2711_phi_reg_105026.read();
    } else {
        ap_phi_mux_data_2641_V_read2711_rewind_phi_fu_62857_p6 = data_2641_V_read2711_rewind_reg_62853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2642_V_read2712_phi_phi_fu_105043_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2642_V_read2712_phi_phi_fu_105043_p4 = ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_62871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2642_V_read2712_phi_phi_fu_105043_p4 = data_2642_V_read.read();
        } else {
            ap_phi_mux_data_2642_V_read2712_phi_phi_fu_105043_p4 = ap_phi_reg_pp0_iter0_data_2642_V_read2712_phi_reg_105039.read();
        }
    } else {
        ap_phi_mux_data_2642_V_read2712_phi_phi_fu_105043_p4 = ap_phi_reg_pp0_iter0_data_2642_V_read2712_phi_reg_105039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_62871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_62871_p6 = data_2642_V_read2712_phi_reg_105039.read();
    } else {
        ap_phi_mux_data_2642_V_read2712_rewind_phi_fu_62871_p6 = data_2642_V_read2712_rewind_reg_62867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2643_V_read2713_phi_phi_fu_105056_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2643_V_read2713_phi_phi_fu_105056_p4 = ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_62885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2643_V_read2713_phi_phi_fu_105056_p4 = data_2643_V_read.read();
        } else {
            ap_phi_mux_data_2643_V_read2713_phi_phi_fu_105056_p4 = ap_phi_reg_pp0_iter0_data_2643_V_read2713_phi_reg_105052.read();
        }
    } else {
        ap_phi_mux_data_2643_V_read2713_phi_phi_fu_105056_p4 = ap_phi_reg_pp0_iter0_data_2643_V_read2713_phi_reg_105052.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_62885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_62885_p6 = data_2643_V_read2713_phi_reg_105052.read();
    } else {
        ap_phi_mux_data_2643_V_read2713_rewind_phi_fu_62885_p6 = data_2643_V_read2713_rewind_reg_62881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2644_V_read2714_phi_phi_fu_105069_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2644_V_read2714_phi_phi_fu_105069_p4 = ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_62899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2644_V_read2714_phi_phi_fu_105069_p4 = data_2644_V_read.read();
        } else {
            ap_phi_mux_data_2644_V_read2714_phi_phi_fu_105069_p4 = ap_phi_reg_pp0_iter0_data_2644_V_read2714_phi_reg_105065.read();
        }
    } else {
        ap_phi_mux_data_2644_V_read2714_phi_phi_fu_105069_p4 = ap_phi_reg_pp0_iter0_data_2644_V_read2714_phi_reg_105065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_62899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_62899_p6 = data_2644_V_read2714_phi_reg_105065.read();
    } else {
        ap_phi_mux_data_2644_V_read2714_rewind_phi_fu_62899_p6 = data_2644_V_read2714_rewind_reg_62895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2645_V_read2715_phi_phi_fu_105082_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2645_V_read2715_phi_phi_fu_105082_p4 = ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_62913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2645_V_read2715_phi_phi_fu_105082_p4 = data_2645_V_read.read();
        } else {
            ap_phi_mux_data_2645_V_read2715_phi_phi_fu_105082_p4 = ap_phi_reg_pp0_iter0_data_2645_V_read2715_phi_reg_105078.read();
        }
    } else {
        ap_phi_mux_data_2645_V_read2715_phi_phi_fu_105082_p4 = ap_phi_reg_pp0_iter0_data_2645_V_read2715_phi_reg_105078.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_62913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_62913_p6 = data_2645_V_read2715_phi_reg_105078.read();
    } else {
        ap_phi_mux_data_2645_V_read2715_rewind_phi_fu_62913_p6 = data_2645_V_read2715_rewind_reg_62909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2646_V_read2716_phi_phi_fu_105095_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2646_V_read2716_phi_phi_fu_105095_p4 = ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_62927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2646_V_read2716_phi_phi_fu_105095_p4 = data_2646_V_read.read();
        } else {
            ap_phi_mux_data_2646_V_read2716_phi_phi_fu_105095_p4 = ap_phi_reg_pp0_iter0_data_2646_V_read2716_phi_reg_105091.read();
        }
    } else {
        ap_phi_mux_data_2646_V_read2716_phi_phi_fu_105095_p4 = ap_phi_reg_pp0_iter0_data_2646_V_read2716_phi_reg_105091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_62927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_62927_p6 = data_2646_V_read2716_phi_reg_105091.read();
    } else {
        ap_phi_mux_data_2646_V_read2716_rewind_phi_fu_62927_p6 = data_2646_V_read2716_rewind_reg_62923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2647_V_read2717_phi_phi_fu_105108_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2647_V_read2717_phi_phi_fu_105108_p4 = ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_62941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2647_V_read2717_phi_phi_fu_105108_p4 = data_2647_V_read.read();
        } else {
            ap_phi_mux_data_2647_V_read2717_phi_phi_fu_105108_p4 = ap_phi_reg_pp0_iter0_data_2647_V_read2717_phi_reg_105104.read();
        }
    } else {
        ap_phi_mux_data_2647_V_read2717_phi_phi_fu_105108_p4 = ap_phi_reg_pp0_iter0_data_2647_V_read2717_phi_reg_105104.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_62941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_62941_p6 = data_2647_V_read2717_phi_reg_105104.read();
    } else {
        ap_phi_mux_data_2647_V_read2717_rewind_phi_fu_62941_p6 = data_2647_V_read2717_rewind_reg_62937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2648_V_read2718_phi_phi_fu_105121_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2648_V_read2718_phi_phi_fu_105121_p4 = ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_62955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2648_V_read2718_phi_phi_fu_105121_p4 = data_2648_V_read.read();
        } else {
            ap_phi_mux_data_2648_V_read2718_phi_phi_fu_105121_p4 = ap_phi_reg_pp0_iter0_data_2648_V_read2718_phi_reg_105117.read();
        }
    } else {
        ap_phi_mux_data_2648_V_read2718_phi_phi_fu_105121_p4 = ap_phi_reg_pp0_iter0_data_2648_V_read2718_phi_reg_105117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_62955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_62955_p6 = data_2648_V_read2718_phi_reg_105117.read();
    } else {
        ap_phi_mux_data_2648_V_read2718_rewind_phi_fu_62955_p6 = data_2648_V_read2718_rewind_reg_62951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2649_V_read2719_phi_phi_fu_105134_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2649_V_read2719_phi_phi_fu_105134_p4 = ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_62969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2649_V_read2719_phi_phi_fu_105134_p4 = data_2649_V_read.read();
        } else {
            ap_phi_mux_data_2649_V_read2719_phi_phi_fu_105134_p4 = ap_phi_reg_pp0_iter0_data_2649_V_read2719_phi_reg_105130.read();
        }
    } else {
        ap_phi_mux_data_2649_V_read2719_phi_phi_fu_105134_p4 = ap_phi_reg_pp0_iter0_data_2649_V_read2719_phi_reg_105130.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_62969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_62969_p6 = data_2649_V_read2719_phi_reg_105130.read();
    } else {
        ap_phi_mux_data_2649_V_read2719_rewind_phi_fu_62969_p6 = data_2649_V_read2719_rewind_reg_62965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_264_V_read334_phi_phi_fu_74129_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_264_V_read334_phi_phi_fu_74129_p4 = ap_phi_mux_data_264_V_read334_rewind_phi_fu_29579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_264_V_read334_phi_phi_fu_74129_p4 = data_264_V_read.read();
        } else {
            ap_phi_mux_data_264_V_read334_phi_phi_fu_74129_p4 = ap_phi_reg_pp0_iter0_data_264_V_read334_phi_reg_74125.read();
        }
    } else {
        ap_phi_mux_data_264_V_read334_phi_phi_fu_74129_p4 = ap_phi_reg_pp0_iter0_data_264_V_read334_phi_reg_74125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_264_V_read334_rewind_phi_fu_29579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_264_V_read334_rewind_phi_fu_29579_p6 = data_264_V_read334_phi_reg_74125.read();
    } else {
        ap_phi_mux_data_264_V_read334_rewind_phi_fu_29579_p6 = data_264_V_read334_rewind_reg_29575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2650_V_read2720_phi_phi_fu_105147_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2650_V_read2720_phi_phi_fu_105147_p4 = ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_62983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2650_V_read2720_phi_phi_fu_105147_p4 = data_2650_V_read.read();
        } else {
            ap_phi_mux_data_2650_V_read2720_phi_phi_fu_105147_p4 = ap_phi_reg_pp0_iter0_data_2650_V_read2720_phi_reg_105143.read();
        }
    } else {
        ap_phi_mux_data_2650_V_read2720_phi_phi_fu_105147_p4 = ap_phi_reg_pp0_iter0_data_2650_V_read2720_phi_reg_105143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_62983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_62983_p6 = data_2650_V_read2720_phi_reg_105143.read();
    } else {
        ap_phi_mux_data_2650_V_read2720_rewind_phi_fu_62983_p6 = data_2650_V_read2720_rewind_reg_62979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2651_V_read2721_phi_phi_fu_105160_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2651_V_read2721_phi_phi_fu_105160_p4 = ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_62997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2651_V_read2721_phi_phi_fu_105160_p4 = data_2651_V_read.read();
        } else {
            ap_phi_mux_data_2651_V_read2721_phi_phi_fu_105160_p4 = ap_phi_reg_pp0_iter0_data_2651_V_read2721_phi_reg_105156.read();
        }
    } else {
        ap_phi_mux_data_2651_V_read2721_phi_phi_fu_105160_p4 = ap_phi_reg_pp0_iter0_data_2651_V_read2721_phi_reg_105156.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_62997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_62997_p6 = data_2651_V_read2721_phi_reg_105156.read();
    } else {
        ap_phi_mux_data_2651_V_read2721_rewind_phi_fu_62997_p6 = data_2651_V_read2721_rewind_reg_62993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2652_V_read2722_phi_phi_fu_105173_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2652_V_read2722_phi_phi_fu_105173_p4 = ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_63011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2652_V_read2722_phi_phi_fu_105173_p4 = data_2652_V_read.read();
        } else {
            ap_phi_mux_data_2652_V_read2722_phi_phi_fu_105173_p4 = ap_phi_reg_pp0_iter0_data_2652_V_read2722_phi_reg_105169.read();
        }
    } else {
        ap_phi_mux_data_2652_V_read2722_phi_phi_fu_105173_p4 = ap_phi_reg_pp0_iter0_data_2652_V_read2722_phi_reg_105169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_63011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_63011_p6 = data_2652_V_read2722_phi_reg_105169.read();
    } else {
        ap_phi_mux_data_2652_V_read2722_rewind_phi_fu_63011_p6 = data_2652_V_read2722_rewind_reg_63007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2653_V_read2723_phi_phi_fu_105186_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2653_V_read2723_phi_phi_fu_105186_p4 = ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_63025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2653_V_read2723_phi_phi_fu_105186_p4 = data_2653_V_read.read();
        } else {
            ap_phi_mux_data_2653_V_read2723_phi_phi_fu_105186_p4 = ap_phi_reg_pp0_iter0_data_2653_V_read2723_phi_reg_105182.read();
        }
    } else {
        ap_phi_mux_data_2653_V_read2723_phi_phi_fu_105186_p4 = ap_phi_reg_pp0_iter0_data_2653_V_read2723_phi_reg_105182.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_63025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_63025_p6 = data_2653_V_read2723_phi_reg_105182.read();
    } else {
        ap_phi_mux_data_2653_V_read2723_rewind_phi_fu_63025_p6 = data_2653_V_read2723_rewind_reg_63021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2654_V_read2724_phi_phi_fu_105199_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2654_V_read2724_phi_phi_fu_105199_p4 = ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_63039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2654_V_read2724_phi_phi_fu_105199_p4 = data_2654_V_read.read();
        } else {
            ap_phi_mux_data_2654_V_read2724_phi_phi_fu_105199_p4 = ap_phi_reg_pp0_iter0_data_2654_V_read2724_phi_reg_105195.read();
        }
    } else {
        ap_phi_mux_data_2654_V_read2724_phi_phi_fu_105199_p4 = ap_phi_reg_pp0_iter0_data_2654_V_read2724_phi_reg_105195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_63039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_63039_p6 = data_2654_V_read2724_phi_reg_105195.read();
    } else {
        ap_phi_mux_data_2654_V_read2724_rewind_phi_fu_63039_p6 = data_2654_V_read2724_rewind_reg_63035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2655_V_read2725_phi_phi_fu_105212_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2655_V_read2725_phi_phi_fu_105212_p4 = ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_63053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2655_V_read2725_phi_phi_fu_105212_p4 = data_2655_V_read.read();
        } else {
            ap_phi_mux_data_2655_V_read2725_phi_phi_fu_105212_p4 = ap_phi_reg_pp0_iter0_data_2655_V_read2725_phi_reg_105208.read();
        }
    } else {
        ap_phi_mux_data_2655_V_read2725_phi_phi_fu_105212_p4 = ap_phi_reg_pp0_iter0_data_2655_V_read2725_phi_reg_105208.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_63053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_63053_p6 = data_2655_V_read2725_phi_reg_105208.read();
    } else {
        ap_phi_mux_data_2655_V_read2725_rewind_phi_fu_63053_p6 = data_2655_V_read2725_rewind_reg_63049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2656_V_read2726_phi_phi_fu_105225_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2656_V_read2726_phi_phi_fu_105225_p4 = ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_63067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2656_V_read2726_phi_phi_fu_105225_p4 = data_2656_V_read.read();
        } else {
            ap_phi_mux_data_2656_V_read2726_phi_phi_fu_105225_p4 = ap_phi_reg_pp0_iter0_data_2656_V_read2726_phi_reg_105221.read();
        }
    } else {
        ap_phi_mux_data_2656_V_read2726_phi_phi_fu_105225_p4 = ap_phi_reg_pp0_iter0_data_2656_V_read2726_phi_reg_105221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_63067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_63067_p6 = data_2656_V_read2726_phi_reg_105221.read();
    } else {
        ap_phi_mux_data_2656_V_read2726_rewind_phi_fu_63067_p6 = data_2656_V_read2726_rewind_reg_63063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2657_V_read2727_phi_phi_fu_105238_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2657_V_read2727_phi_phi_fu_105238_p4 = ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_63081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2657_V_read2727_phi_phi_fu_105238_p4 = data_2657_V_read.read();
        } else {
            ap_phi_mux_data_2657_V_read2727_phi_phi_fu_105238_p4 = ap_phi_reg_pp0_iter0_data_2657_V_read2727_phi_reg_105234.read();
        }
    } else {
        ap_phi_mux_data_2657_V_read2727_phi_phi_fu_105238_p4 = ap_phi_reg_pp0_iter0_data_2657_V_read2727_phi_reg_105234.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_63081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_63081_p6 = data_2657_V_read2727_phi_reg_105234.read();
    } else {
        ap_phi_mux_data_2657_V_read2727_rewind_phi_fu_63081_p6 = data_2657_V_read2727_rewind_reg_63077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2658_V_read2728_phi_phi_fu_105251_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2658_V_read2728_phi_phi_fu_105251_p4 = ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_63095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2658_V_read2728_phi_phi_fu_105251_p4 = data_2658_V_read.read();
        } else {
            ap_phi_mux_data_2658_V_read2728_phi_phi_fu_105251_p4 = ap_phi_reg_pp0_iter0_data_2658_V_read2728_phi_reg_105247.read();
        }
    } else {
        ap_phi_mux_data_2658_V_read2728_phi_phi_fu_105251_p4 = ap_phi_reg_pp0_iter0_data_2658_V_read2728_phi_reg_105247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_63095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_63095_p6 = data_2658_V_read2728_phi_reg_105247.read();
    } else {
        ap_phi_mux_data_2658_V_read2728_rewind_phi_fu_63095_p6 = data_2658_V_read2728_rewind_reg_63091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2659_V_read2729_phi_phi_fu_105264_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2659_V_read2729_phi_phi_fu_105264_p4 = ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_63109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2659_V_read2729_phi_phi_fu_105264_p4 = data_2659_V_read.read();
        } else {
            ap_phi_mux_data_2659_V_read2729_phi_phi_fu_105264_p4 = ap_phi_reg_pp0_iter0_data_2659_V_read2729_phi_reg_105260.read();
        }
    } else {
        ap_phi_mux_data_2659_V_read2729_phi_phi_fu_105264_p4 = ap_phi_reg_pp0_iter0_data_2659_V_read2729_phi_reg_105260.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_63109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_63109_p6 = data_2659_V_read2729_phi_reg_105260.read();
    } else {
        ap_phi_mux_data_2659_V_read2729_rewind_phi_fu_63109_p6 = data_2659_V_read2729_rewind_reg_63105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_265_V_read335_phi_phi_fu_74142_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_265_V_read335_phi_phi_fu_74142_p4 = ap_phi_mux_data_265_V_read335_rewind_phi_fu_29593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_265_V_read335_phi_phi_fu_74142_p4 = data_265_V_read.read();
        } else {
            ap_phi_mux_data_265_V_read335_phi_phi_fu_74142_p4 = ap_phi_reg_pp0_iter0_data_265_V_read335_phi_reg_74138.read();
        }
    } else {
        ap_phi_mux_data_265_V_read335_phi_phi_fu_74142_p4 = ap_phi_reg_pp0_iter0_data_265_V_read335_phi_reg_74138.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_265_V_read335_rewind_phi_fu_29593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_265_V_read335_rewind_phi_fu_29593_p6 = data_265_V_read335_phi_reg_74138.read();
    } else {
        ap_phi_mux_data_265_V_read335_rewind_phi_fu_29593_p6 = data_265_V_read335_rewind_reg_29589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2660_V_read2730_phi_phi_fu_105277_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2660_V_read2730_phi_phi_fu_105277_p4 = ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_63123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2660_V_read2730_phi_phi_fu_105277_p4 = data_2660_V_read.read();
        } else {
            ap_phi_mux_data_2660_V_read2730_phi_phi_fu_105277_p4 = ap_phi_reg_pp0_iter0_data_2660_V_read2730_phi_reg_105273.read();
        }
    } else {
        ap_phi_mux_data_2660_V_read2730_phi_phi_fu_105277_p4 = ap_phi_reg_pp0_iter0_data_2660_V_read2730_phi_reg_105273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_63123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_63123_p6 = data_2660_V_read2730_phi_reg_105273.read();
    } else {
        ap_phi_mux_data_2660_V_read2730_rewind_phi_fu_63123_p6 = data_2660_V_read2730_rewind_reg_63119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2661_V_read2731_phi_phi_fu_105290_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2661_V_read2731_phi_phi_fu_105290_p4 = ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_63137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2661_V_read2731_phi_phi_fu_105290_p4 = data_2661_V_read.read();
        } else {
            ap_phi_mux_data_2661_V_read2731_phi_phi_fu_105290_p4 = ap_phi_reg_pp0_iter0_data_2661_V_read2731_phi_reg_105286.read();
        }
    } else {
        ap_phi_mux_data_2661_V_read2731_phi_phi_fu_105290_p4 = ap_phi_reg_pp0_iter0_data_2661_V_read2731_phi_reg_105286.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_63137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_63137_p6 = data_2661_V_read2731_phi_reg_105286.read();
    } else {
        ap_phi_mux_data_2661_V_read2731_rewind_phi_fu_63137_p6 = data_2661_V_read2731_rewind_reg_63133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2662_V_read2732_phi_phi_fu_105303_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2662_V_read2732_phi_phi_fu_105303_p4 = ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_63151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2662_V_read2732_phi_phi_fu_105303_p4 = data_2662_V_read.read();
        } else {
            ap_phi_mux_data_2662_V_read2732_phi_phi_fu_105303_p4 = ap_phi_reg_pp0_iter0_data_2662_V_read2732_phi_reg_105299.read();
        }
    } else {
        ap_phi_mux_data_2662_V_read2732_phi_phi_fu_105303_p4 = ap_phi_reg_pp0_iter0_data_2662_V_read2732_phi_reg_105299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_63151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_63151_p6 = data_2662_V_read2732_phi_reg_105299.read();
    } else {
        ap_phi_mux_data_2662_V_read2732_rewind_phi_fu_63151_p6 = data_2662_V_read2732_rewind_reg_63147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2663_V_read2733_phi_phi_fu_105316_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2663_V_read2733_phi_phi_fu_105316_p4 = ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_63165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2663_V_read2733_phi_phi_fu_105316_p4 = data_2663_V_read.read();
        } else {
            ap_phi_mux_data_2663_V_read2733_phi_phi_fu_105316_p4 = ap_phi_reg_pp0_iter0_data_2663_V_read2733_phi_reg_105312.read();
        }
    } else {
        ap_phi_mux_data_2663_V_read2733_phi_phi_fu_105316_p4 = ap_phi_reg_pp0_iter0_data_2663_V_read2733_phi_reg_105312.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_63165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_63165_p6 = data_2663_V_read2733_phi_reg_105312.read();
    } else {
        ap_phi_mux_data_2663_V_read2733_rewind_phi_fu_63165_p6 = data_2663_V_read2733_rewind_reg_63161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2664_V_read2734_phi_phi_fu_105329_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2664_V_read2734_phi_phi_fu_105329_p4 = ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_63179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2664_V_read2734_phi_phi_fu_105329_p4 = data_2664_V_read.read();
        } else {
            ap_phi_mux_data_2664_V_read2734_phi_phi_fu_105329_p4 = ap_phi_reg_pp0_iter0_data_2664_V_read2734_phi_reg_105325.read();
        }
    } else {
        ap_phi_mux_data_2664_V_read2734_phi_phi_fu_105329_p4 = ap_phi_reg_pp0_iter0_data_2664_V_read2734_phi_reg_105325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_63179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_63179_p6 = data_2664_V_read2734_phi_reg_105325.read();
    } else {
        ap_phi_mux_data_2664_V_read2734_rewind_phi_fu_63179_p6 = data_2664_V_read2734_rewind_reg_63175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2665_V_read2735_phi_phi_fu_105342_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2665_V_read2735_phi_phi_fu_105342_p4 = ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_63193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2665_V_read2735_phi_phi_fu_105342_p4 = data_2665_V_read.read();
        } else {
            ap_phi_mux_data_2665_V_read2735_phi_phi_fu_105342_p4 = ap_phi_reg_pp0_iter0_data_2665_V_read2735_phi_reg_105338.read();
        }
    } else {
        ap_phi_mux_data_2665_V_read2735_phi_phi_fu_105342_p4 = ap_phi_reg_pp0_iter0_data_2665_V_read2735_phi_reg_105338.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_63193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_63193_p6 = data_2665_V_read2735_phi_reg_105338.read();
    } else {
        ap_phi_mux_data_2665_V_read2735_rewind_phi_fu_63193_p6 = data_2665_V_read2735_rewind_reg_63189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2666_V_read2736_phi_phi_fu_105355_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2666_V_read2736_phi_phi_fu_105355_p4 = ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_63207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2666_V_read2736_phi_phi_fu_105355_p4 = data_2666_V_read.read();
        } else {
            ap_phi_mux_data_2666_V_read2736_phi_phi_fu_105355_p4 = ap_phi_reg_pp0_iter0_data_2666_V_read2736_phi_reg_105351.read();
        }
    } else {
        ap_phi_mux_data_2666_V_read2736_phi_phi_fu_105355_p4 = ap_phi_reg_pp0_iter0_data_2666_V_read2736_phi_reg_105351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_63207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_63207_p6 = data_2666_V_read2736_phi_reg_105351.read();
    } else {
        ap_phi_mux_data_2666_V_read2736_rewind_phi_fu_63207_p6 = data_2666_V_read2736_rewind_reg_63203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2667_V_read2737_phi_phi_fu_105368_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2667_V_read2737_phi_phi_fu_105368_p4 = ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_63221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2667_V_read2737_phi_phi_fu_105368_p4 = data_2667_V_read.read();
        } else {
            ap_phi_mux_data_2667_V_read2737_phi_phi_fu_105368_p4 = ap_phi_reg_pp0_iter0_data_2667_V_read2737_phi_reg_105364.read();
        }
    } else {
        ap_phi_mux_data_2667_V_read2737_phi_phi_fu_105368_p4 = ap_phi_reg_pp0_iter0_data_2667_V_read2737_phi_reg_105364.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_63221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_63221_p6 = data_2667_V_read2737_phi_reg_105364.read();
    } else {
        ap_phi_mux_data_2667_V_read2737_rewind_phi_fu_63221_p6 = data_2667_V_read2737_rewind_reg_63217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2668_V_read2738_phi_phi_fu_105381_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2668_V_read2738_phi_phi_fu_105381_p4 = ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_63235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2668_V_read2738_phi_phi_fu_105381_p4 = data_2668_V_read.read();
        } else {
            ap_phi_mux_data_2668_V_read2738_phi_phi_fu_105381_p4 = ap_phi_reg_pp0_iter0_data_2668_V_read2738_phi_reg_105377.read();
        }
    } else {
        ap_phi_mux_data_2668_V_read2738_phi_phi_fu_105381_p4 = ap_phi_reg_pp0_iter0_data_2668_V_read2738_phi_reg_105377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_63235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_63235_p6 = data_2668_V_read2738_phi_reg_105377.read();
    } else {
        ap_phi_mux_data_2668_V_read2738_rewind_phi_fu_63235_p6 = data_2668_V_read2738_rewind_reg_63231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2669_V_read2739_phi_phi_fu_105394_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2669_V_read2739_phi_phi_fu_105394_p4 = ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_63249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2669_V_read2739_phi_phi_fu_105394_p4 = data_2669_V_read.read();
        } else {
            ap_phi_mux_data_2669_V_read2739_phi_phi_fu_105394_p4 = ap_phi_reg_pp0_iter0_data_2669_V_read2739_phi_reg_105390.read();
        }
    } else {
        ap_phi_mux_data_2669_V_read2739_phi_phi_fu_105394_p4 = ap_phi_reg_pp0_iter0_data_2669_V_read2739_phi_reg_105390.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_63249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_63249_p6 = data_2669_V_read2739_phi_reg_105390.read();
    } else {
        ap_phi_mux_data_2669_V_read2739_rewind_phi_fu_63249_p6 = data_2669_V_read2739_rewind_reg_63245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_266_V_read336_phi_phi_fu_74155_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_266_V_read336_phi_phi_fu_74155_p4 = ap_phi_mux_data_266_V_read336_rewind_phi_fu_29607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_266_V_read336_phi_phi_fu_74155_p4 = data_266_V_read.read();
        } else {
            ap_phi_mux_data_266_V_read336_phi_phi_fu_74155_p4 = ap_phi_reg_pp0_iter0_data_266_V_read336_phi_reg_74151.read();
        }
    } else {
        ap_phi_mux_data_266_V_read336_phi_phi_fu_74155_p4 = ap_phi_reg_pp0_iter0_data_266_V_read336_phi_reg_74151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_266_V_read336_rewind_phi_fu_29607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_266_V_read336_rewind_phi_fu_29607_p6 = data_266_V_read336_phi_reg_74151.read();
    } else {
        ap_phi_mux_data_266_V_read336_rewind_phi_fu_29607_p6 = data_266_V_read336_rewind_reg_29603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2670_V_read2740_phi_phi_fu_105407_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2670_V_read2740_phi_phi_fu_105407_p4 = ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_63263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2670_V_read2740_phi_phi_fu_105407_p4 = data_2670_V_read.read();
        } else {
            ap_phi_mux_data_2670_V_read2740_phi_phi_fu_105407_p4 = ap_phi_reg_pp0_iter0_data_2670_V_read2740_phi_reg_105403.read();
        }
    } else {
        ap_phi_mux_data_2670_V_read2740_phi_phi_fu_105407_p4 = ap_phi_reg_pp0_iter0_data_2670_V_read2740_phi_reg_105403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_63263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_63263_p6 = data_2670_V_read2740_phi_reg_105403.read();
    } else {
        ap_phi_mux_data_2670_V_read2740_rewind_phi_fu_63263_p6 = data_2670_V_read2740_rewind_reg_63259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2671_V_read2741_phi_phi_fu_105420_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2671_V_read2741_phi_phi_fu_105420_p4 = ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_63277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2671_V_read2741_phi_phi_fu_105420_p4 = data_2671_V_read.read();
        } else {
            ap_phi_mux_data_2671_V_read2741_phi_phi_fu_105420_p4 = ap_phi_reg_pp0_iter0_data_2671_V_read2741_phi_reg_105416.read();
        }
    } else {
        ap_phi_mux_data_2671_V_read2741_phi_phi_fu_105420_p4 = ap_phi_reg_pp0_iter0_data_2671_V_read2741_phi_reg_105416.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_63277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_63277_p6 = data_2671_V_read2741_phi_reg_105416.read();
    } else {
        ap_phi_mux_data_2671_V_read2741_rewind_phi_fu_63277_p6 = data_2671_V_read2741_rewind_reg_63273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2672_V_read2742_phi_phi_fu_105433_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2672_V_read2742_phi_phi_fu_105433_p4 = ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_63291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2672_V_read2742_phi_phi_fu_105433_p4 = data_2672_V_read.read();
        } else {
            ap_phi_mux_data_2672_V_read2742_phi_phi_fu_105433_p4 = ap_phi_reg_pp0_iter0_data_2672_V_read2742_phi_reg_105429.read();
        }
    } else {
        ap_phi_mux_data_2672_V_read2742_phi_phi_fu_105433_p4 = ap_phi_reg_pp0_iter0_data_2672_V_read2742_phi_reg_105429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_63291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_63291_p6 = data_2672_V_read2742_phi_reg_105429.read();
    } else {
        ap_phi_mux_data_2672_V_read2742_rewind_phi_fu_63291_p6 = data_2672_V_read2742_rewind_reg_63287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2673_V_read2743_phi_phi_fu_105446_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2673_V_read2743_phi_phi_fu_105446_p4 = ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_63305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2673_V_read2743_phi_phi_fu_105446_p4 = data_2673_V_read.read();
        } else {
            ap_phi_mux_data_2673_V_read2743_phi_phi_fu_105446_p4 = ap_phi_reg_pp0_iter0_data_2673_V_read2743_phi_reg_105442.read();
        }
    } else {
        ap_phi_mux_data_2673_V_read2743_phi_phi_fu_105446_p4 = ap_phi_reg_pp0_iter0_data_2673_V_read2743_phi_reg_105442.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_63305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_63305_p6 = data_2673_V_read2743_phi_reg_105442.read();
    } else {
        ap_phi_mux_data_2673_V_read2743_rewind_phi_fu_63305_p6 = data_2673_V_read2743_rewind_reg_63301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2674_V_read2744_phi_phi_fu_105459_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2674_V_read2744_phi_phi_fu_105459_p4 = ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_63319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2674_V_read2744_phi_phi_fu_105459_p4 = data_2674_V_read.read();
        } else {
            ap_phi_mux_data_2674_V_read2744_phi_phi_fu_105459_p4 = ap_phi_reg_pp0_iter0_data_2674_V_read2744_phi_reg_105455.read();
        }
    } else {
        ap_phi_mux_data_2674_V_read2744_phi_phi_fu_105459_p4 = ap_phi_reg_pp0_iter0_data_2674_V_read2744_phi_reg_105455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_63319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_63319_p6 = data_2674_V_read2744_phi_reg_105455.read();
    } else {
        ap_phi_mux_data_2674_V_read2744_rewind_phi_fu_63319_p6 = data_2674_V_read2744_rewind_reg_63315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2675_V_read2745_phi_phi_fu_105472_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2675_V_read2745_phi_phi_fu_105472_p4 = ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_63333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2675_V_read2745_phi_phi_fu_105472_p4 = data_2675_V_read.read();
        } else {
            ap_phi_mux_data_2675_V_read2745_phi_phi_fu_105472_p4 = ap_phi_reg_pp0_iter0_data_2675_V_read2745_phi_reg_105468.read();
        }
    } else {
        ap_phi_mux_data_2675_V_read2745_phi_phi_fu_105472_p4 = ap_phi_reg_pp0_iter0_data_2675_V_read2745_phi_reg_105468.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_63333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_63333_p6 = data_2675_V_read2745_phi_reg_105468.read();
    } else {
        ap_phi_mux_data_2675_V_read2745_rewind_phi_fu_63333_p6 = data_2675_V_read2745_rewind_reg_63329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2676_V_read2746_phi_phi_fu_105485_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2676_V_read2746_phi_phi_fu_105485_p4 = ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_63347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2676_V_read2746_phi_phi_fu_105485_p4 = data_2676_V_read.read();
        } else {
            ap_phi_mux_data_2676_V_read2746_phi_phi_fu_105485_p4 = ap_phi_reg_pp0_iter0_data_2676_V_read2746_phi_reg_105481.read();
        }
    } else {
        ap_phi_mux_data_2676_V_read2746_phi_phi_fu_105485_p4 = ap_phi_reg_pp0_iter0_data_2676_V_read2746_phi_reg_105481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_63347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_63347_p6 = data_2676_V_read2746_phi_reg_105481.read();
    } else {
        ap_phi_mux_data_2676_V_read2746_rewind_phi_fu_63347_p6 = data_2676_V_read2746_rewind_reg_63343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2677_V_read2747_phi_phi_fu_105498_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2677_V_read2747_phi_phi_fu_105498_p4 = ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_63361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2677_V_read2747_phi_phi_fu_105498_p4 = data_2677_V_read.read();
        } else {
            ap_phi_mux_data_2677_V_read2747_phi_phi_fu_105498_p4 = ap_phi_reg_pp0_iter0_data_2677_V_read2747_phi_reg_105494.read();
        }
    } else {
        ap_phi_mux_data_2677_V_read2747_phi_phi_fu_105498_p4 = ap_phi_reg_pp0_iter0_data_2677_V_read2747_phi_reg_105494.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_63361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_63361_p6 = data_2677_V_read2747_phi_reg_105494.read();
    } else {
        ap_phi_mux_data_2677_V_read2747_rewind_phi_fu_63361_p6 = data_2677_V_read2747_rewind_reg_63357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2678_V_read2748_phi_phi_fu_105511_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2678_V_read2748_phi_phi_fu_105511_p4 = ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_63375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2678_V_read2748_phi_phi_fu_105511_p4 = data_2678_V_read.read();
        } else {
            ap_phi_mux_data_2678_V_read2748_phi_phi_fu_105511_p4 = ap_phi_reg_pp0_iter0_data_2678_V_read2748_phi_reg_105507.read();
        }
    } else {
        ap_phi_mux_data_2678_V_read2748_phi_phi_fu_105511_p4 = ap_phi_reg_pp0_iter0_data_2678_V_read2748_phi_reg_105507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_63375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_63375_p6 = data_2678_V_read2748_phi_reg_105507.read();
    } else {
        ap_phi_mux_data_2678_V_read2748_rewind_phi_fu_63375_p6 = data_2678_V_read2748_rewind_reg_63371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2679_V_read2749_phi_phi_fu_105524_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2679_V_read2749_phi_phi_fu_105524_p4 = ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_63389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2679_V_read2749_phi_phi_fu_105524_p4 = data_2679_V_read.read();
        } else {
            ap_phi_mux_data_2679_V_read2749_phi_phi_fu_105524_p4 = ap_phi_reg_pp0_iter0_data_2679_V_read2749_phi_reg_105520.read();
        }
    } else {
        ap_phi_mux_data_2679_V_read2749_phi_phi_fu_105524_p4 = ap_phi_reg_pp0_iter0_data_2679_V_read2749_phi_reg_105520.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_63389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_63389_p6 = data_2679_V_read2749_phi_reg_105520.read();
    } else {
        ap_phi_mux_data_2679_V_read2749_rewind_phi_fu_63389_p6 = data_2679_V_read2749_rewind_reg_63385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_267_V_read337_phi_phi_fu_74168_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_267_V_read337_phi_phi_fu_74168_p4 = ap_phi_mux_data_267_V_read337_rewind_phi_fu_29621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_267_V_read337_phi_phi_fu_74168_p4 = data_267_V_read.read();
        } else {
            ap_phi_mux_data_267_V_read337_phi_phi_fu_74168_p4 = ap_phi_reg_pp0_iter0_data_267_V_read337_phi_reg_74164.read();
        }
    } else {
        ap_phi_mux_data_267_V_read337_phi_phi_fu_74168_p4 = ap_phi_reg_pp0_iter0_data_267_V_read337_phi_reg_74164.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_267_V_read337_rewind_phi_fu_29621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_267_V_read337_rewind_phi_fu_29621_p6 = data_267_V_read337_phi_reg_74164.read();
    } else {
        ap_phi_mux_data_267_V_read337_rewind_phi_fu_29621_p6 = data_267_V_read337_rewind_reg_29617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2680_V_read2750_phi_phi_fu_105537_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2680_V_read2750_phi_phi_fu_105537_p4 = ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_63403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2680_V_read2750_phi_phi_fu_105537_p4 = data_2680_V_read.read();
        } else {
            ap_phi_mux_data_2680_V_read2750_phi_phi_fu_105537_p4 = ap_phi_reg_pp0_iter0_data_2680_V_read2750_phi_reg_105533.read();
        }
    } else {
        ap_phi_mux_data_2680_V_read2750_phi_phi_fu_105537_p4 = ap_phi_reg_pp0_iter0_data_2680_V_read2750_phi_reg_105533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_63403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_63403_p6 = data_2680_V_read2750_phi_reg_105533.read();
    } else {
        ap_phi_mux_data_2680_V_read2750_rewind_phi_fu_63403_p6 = data_2680_V_read2750_rewind_reg_63399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2681_V_read2751_phi_phi_fu_105550_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2681_V_read2751_phi_phi_fu_105550_p4 = ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_63417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2681_V_read2751_phi_phi_fu_105550_p4 = data_2681_V_read.read();
        } else {
            ap_phi_mux_data_2681_V_read2751_phi_phi_fu_105550_p4 = ap_phi_reg_pp0_iter0_data_2681_V_read2751_phi_reg_105546.read();
        }
    } else {
        ap_phi_mux_data_2681_V_read2751_phi_phi_fu_105550_p4 = ap_phi_reg_pp0_iter0_data_2681_V_read2751_phi_reg_105546.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_63417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_63417_p6 = data_2681_V_read2751_phi_reg_105546.read();
    } else {
        ap_phi_mux_data_2681_V_read2751_rewind_phi_fu_63417_p6 = data_2681_V_read2751_rewind_reg_63413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2682_V_read2752_phi_phi_fu_105563_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2682_V_read2752_phi_phi_fu_105563_p4 = ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_63431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2682_V_read2752_phi_phi_fu_105563_p4 = data_2682_V_read.read();
        } else {
            ap_phi_mux_data_2682_V_read2752_phi_phi_fu_105563_p4 = ap_phi_reg_pp0_iter0_data_2682_V_read2752_phi_reg_105559.read();
        }
    } else {
        ap_phi_mux_data_2682_V_read2752_phi_phi_fu_105563_p4 = ap_phi_reg_pp0_iter0_data_2682_V_read2752_phi_reg_105559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_63431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_63431_p6 = data_2682_V_read2752_phi_reg_105559.read();
    } else {
        ap_phi_mux_data_2682_V_read2752_rewind_phi_fu_63431_p6 = data_2682_V_read2752_rewind_reg_63427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2683_V_read2753_phi_phi_fu_105576_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2683_V_read2753_phi_phi_fu_105576_p4 = ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_63445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2683_V_read2753_phi_phi_fu_105576_p4 = data_2683_V_read.read();
        } else {
            ap_phi_mux_data_2683_V_read2753_phi_phi_fu_105576_p4 = ap_phi_reg_pp0_iter0_data_2683_V_read2753_phi_reg_105572.read();
        }
    } else {
        ap_phi_mux_data_2683_V_read2753_phi_phi_fu_105576_p4 = ap_phi_reg_pp0_iter0_data_2683_V_read2753_phi_reg_105572.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_63445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_63445_p6 = data_2683_V_read2753_phi_reg_105572.read();
    } else {
        ap_phi_mux_data_2683_V_read2753_rewind_phi_fu_63445_p6 = data_2683_V_read2753_rewind_reg_63441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2684_V_read2754_phi_phi_fu_105589_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2684_V_read2754_phi_phi_fu_105589_p4 = ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_63459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2684_V_read2754_phi_phi_fu_105589_p4 = data_2684_V_read.read();
        } else {
            ap_phi_mux_data_2684_V_read2754_phi_phi_fu_105589_p4 = ap_phi_reg_pp0_iter0_data_2684_V_read2754_phi_reg_105585.read();
        }
    } else {
        ap_phi_mux_data_2684_V_read2754_phi_phi_fu_105589_p4 = ap_phi_reg_pp0_iter0_data_2684_V_read2754_phi_reg_105585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_63459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_63459_p6 = data_2684_V_read2754_phi_reg_105585.read();
    } else {
        ap_phi_mux_data_2684_V_read2754_rewind_phi_fu_63459_p6 = data_2684_V_read2754_rewind_reg_63455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2685_V_read2755_phi_phi_fu_105602_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2685_V_read2755_phi_phi_fu_105602_p4 = ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_63473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2685_V_read2755_phi_phi_fu_105602_p4 = data_2685_V_read.read();
        } else {
            ap_phi_mux_data_2685_V_read2755_phi_phi_fu_105602_p4 = ap_phi_reg_pp0_iter0_data_2685_V_read2755_phi_reg_105598.read();
        }
    } else {
        ap_phi_mux_data_2685_V_read2755_phi_phi_fu_105602_p4 = ap_phi_reg_pp0_iter0_data_2685_V_read2755_phi_reg_105598.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_63473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_63473_p6 = data_2685_V_read2755_phi_reg_105598.read();
    } else {
        ap_phi_mux_data_2685_V_read2755_rewind_phi_fu_63473_p6 = data_2685_V_read2755_rewind_reg_63469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2686_V_read2756_phi_phi_fu_105615_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2686_V_read2756_phi_phi_fu_105615_p4 = ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_63487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2686_V_read2756_phi_phi_fu_105615_p4 = data_2686_V_read.read();
        } else {
            ap_phi_mux_data_2686_V_read2756_phi_phi_fu_105615_p4 = ap_phi_reg_pp0_iter0_data_2686_V_read2756_phi_reg_105611.read();
        }
    } else {
        ap_phi_mux_data_2686_V_read2756_phi_phi_fu_105615_p4 = ap_phi_reg_pp0_iter0_data_2686_V_read2756_phi_reg_105611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_63487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_63487_p6 = data_2686_V_read2756_phi_reg_105611.read();
    } else {
        ap_phi_mux_data_2686_V_read2756_rewind_phi_fu_63487_p6 = data_2686_V_read2756_rewind_reg_63483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2687_V_read2757_phi_phi_fu_105628_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2687_V_read2757_phi_phi_fu_105628_p4 = ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_63501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2687_V_read2757_phi_phi_fu_105628_p4 = data_2687_V_read.read();
        } else {
            ap_phi_mux_data_2687_V_read2757_phi_phi_fu_105628_p4 = ap_phi_reg_pp0_iter0_data_2687_V_read2757_phi_reg_105624.read();
        }
    } else {
        ap_phi_mux_data_2687_V_read2757_phi_phi_fu_105628_p4 = ap_phi_reg_pp0_iter0_data_2687_V_read2757_phi_reg_105624.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_63501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_63501_p6 = data_2687_V_read2757_phi_reg_105624.read();
    } else {
        ap_phi_mux_data_2687_V_read2757_rewind_phi_fu_63501_p6 = data_2687_V_read2757_rewind_reg_63497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2688_V_read2758_phi_phi_fu_105641_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2688_V_read2758_phi_phi_fu_105641_p4 = ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_63515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2688_V_read2758_phi_phi_fu_105641_p4 = data_2688_V_read.read();
        } else {
            ap_phi_mux_data_2688_V_read2758_phi_phi_fu_105641_p4 = ap_phi_reg_pp0_iter0_data_2688_V_read2758_phi_reg_105637.read();
        }
    } else {
        ap_phi_mux_data_2688_V_read2758_phi_phi_fu_105641_p4 = ap_phi_reg_pp0_iter0_data_2688_V_read2758_phi_reg_105637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_63515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_63515_p6 = data_2688_V_read2758_phi_reg_105637.read();
    } else {
        ap_phi_mux_data_2688_V_read2758_rewind_phi_fu_63515_p6 = data_2688_V_read2758_rewind_reg_63511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2689_V_read2759_phi_phi_fu_105654_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2689_V_read2759_phi_phi_fu_105654_p4 = ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_63529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2689_V_read2759_phi_phi_fu_105654_p4 = data_2689_V_read.read();
        } else {
            ap_phi_mux_data_2689_V_read2759_phi_phi_fu_105654_p4 = ap_phi_reg_pp0_iter0_data_2689_V_read2759_phi_reg_105650.read();
        }
    } else {
        ap_phi_mux_data_2689_V_read2759_phi_phi_fu_105654_p4 = ap_phi_reg_pp0_iter0_data_2689_V_read2759_phi_reg_105650.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_63529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_63529_p6 = data_2689_V_read2759_phi_reg_105650.read();
    } else {
        ap_phi_mux_data_2689_V_read2759_rewind_phi_fu_63529_p6 = data_2689_V_read2759_rewind_reg_63525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_268_V_read338_phi_phi_fu_74181_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_268_V_read338_phi_phi_fu_74181_p4 = ap_phi_mux_data_268_V_read338_rewind_phi_fu_29635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_268_V_read338_phi_phi_fu_74181_p4 = data_268_V_read.read();
        } else {
            ap_phi_mux_data_268_V_read338_phi_phi_fu_74181_p4 = ap_phi_reg_pp0_iter0_data_268_V_read338_phi_reg_74177.read();
        }
    } else {
        ap_phi_mux_data_268_V_read338_phi_phi_fu_74181_p4 = ap_phi_reg_pp0_iter0_data_268_V_read338_phi_reg_74177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_268_V_read338_rewind_phi_fu_29635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_268_V_read338_rewind_phi_fu_29635_p6 = data_268_V_read338_phi_reg_74177.read();
    } else {
        ap_phi_mux_data_268_V_read338_rewind_phi_fu_29635_p6 = data_268_V_read338_rewind_reg_29631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2690_V_read2760_phi_phi_fu_105667_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2690_V_read2760_phi_phi_fu_105667_p4 = ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_63543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2690_V_read2760_phi_phi_fu_105667_p4 = data_2690_V_read.read();
        } else {
            ap_phi_mux_data_2690_V_read2760_phi_phi_fu_105667_p4 = ap_phi_reg_pp0_iter0_data_2690_V_read2760_phi_reg_105663.read();
        }
    } else {
        ap_phi_mux_data_2690_V_read2760_phi_phi_fu_105667_p4 = ap_phi_reg_pp0_iter0_data_2690_V_read2760_phi_reg_105663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_63543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_63543_p6 = data_2690_V_read2760_phi_reg_105663.read();
    } else {
        ap_phi_mux_data_2690_V_read2760_rewind_phi_fu_63543_p6 = data_2690_V_read2760_rewind_reg_63539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2691_V_read2761_phi_phi_fu_105680_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2691_V_read2761_phi_phi_fu_105680_p4 = ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_63557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2691_V_read2761_phi_phi_fu_105680_p4 = data_2691_V_read.read();
        } else {
            ap_phi_mux_data_2691_V_read2761_phi_phi_fu_105680_p4 = ap_phi_reg_pp0_iter0_data_2691_V_read2761_phi_reg_105676.read();
        }
    } else {
        ap_phi_mux_data_2691_V_read2761_phi_phi_fu_105680_p4 = ap_phi_reg_pp0_iter0_data_2691_V_read2761_phi_reg_105676.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_63557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_63557_p6 = data_2691_V_read2761_phi_reg_105676.read();
    } else {
        ap_phi_mux_data_2691_V_read2761_rewind_phi_fu_63557_p6 = data_2691_V_read2761_rewind_reg_63553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2692_V_read2762_phi_phi_fu_105693_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2692_V_read2762_phi_phi_fu_105693_p4 = ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_63571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2692_V_read2762_phi_phi_fu_105693_p4 = data_2692_V_read.read();
        } else {
            ap_phi_mux_data_2692_V_read2762_phi_phi_fu_105693_p4 = ap_phi_reg_pp0_iter0_data_2692_V_read2762_phi_reg_105689.read();
        }
    } else {
        ap_phi_mux_data_2692_V_read2762_phi_phi_fu_105693_p4 = ap_phi_reg_pp0_iter0_data_2692_V_read2762_phi_reg_105689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_63571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_63571_p6 = data_2692_V_read2762_phi_reg_105689.read();
    } else {
        ap_phi_mux_data_2692_V_read2762_rewind_phi_fu_63571_p6 = data_2692_V_read2762_rewind_reg_63567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2693_V_read2763_phi_phi_fu_105706_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2693_V_read2763_phi_phi_fu_105706_p4 = ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_63585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2693_V_read2763_phi_phi_fu_105706_p4 = data_2693_V_read.read();
        } else {
            ap_phi_mux_data_2693_V_read2763_phi_phi_fu_105706_p4 = ap_phi_reg_pp0_iter0_data_2693_V_read2763_phi_reg_105702.read();
        }
    } else {
        ap_phi_mux_data_2693_V_read2763_phi_phi_fu_105706_p4 = ap_phi_reg_pp0_iter0_data_2693_V_read2763_phi_reg_105702.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_63585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_63585_p6 = data_2693_V_read2763_phi_reg_105702.read();
    } else {
        ap_phi_mux_data_2693_V_read2763_rewind_phi_fu_63585_p6 = data_2693_V_read2763_rewind_reg_63581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2694_V_read2764_phi_phi_fu_105719_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2694_V_read2764_phi_phi_fu_105719_p4 = ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_63599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2694_V_read2764_phi_phi_fu_105719_p4 = data_2694_V_read.read();
        } else {
            ap_phi_mux_data_2694_V_read2764_phi_phi_fu_105719_p4 = ap_phi_reg_pp0_iter0_data_2694_V_read2764_phi_reg_105715.read();
        }
    } else {
        ap_phi_mux_data_2694_V_read2764_phi_phi_fu_105719_p4 = ap_phi_reg_pp0_iter0_data_2694_V_read2764_phi_reg_105715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_63599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_63599_p6 = data_2694_V_read2764_phi_reg_105715.read();
    } else {
        ap_phi_mux_data_2694_V_read2764_rewind_phi_fu_63599_p6 = data_2694_V_read2764_rewind_reg_63595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2695_V_read2765_phi_phi_fu_105732_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2695_V_read2765_phi_phi_fu_105732_p4 = ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_63613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2695_V_read2765_phi_phi_fu_105732_p4 = data_2695_V_read.read();
        } else {
            ap_phi_mux_data_2695_V_read2765_phi_phi_fu_105732_p4 = ap_phi_reg_pp0_iter0_data_2695_V_read2765_phi_reg_105728.read();
        }
    } else {
        ap_phi_mux_data_2695_V_read2765_phi_phi_fu_105732_p4 = ap_phi_reg_pp0_iter0_data_2695_V_read2765_phi_reg_105728.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_63613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_63613_p6 = data_2695_V_read2765_phi_reg_105728.read();
    } else {
        ap_phi_mux_data_2695_V_read2765_rewind_phi_fu_63613_p6 = data_2695_V_read2765_rewind_reg_63609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2696_V_read2766_phi_phi_fu_105745_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2696_V_read2766_phi_phi_fu_105745_p4 = ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_63627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2696_V_read2766_phi_phi_fu_105745_p4 = data_2696_V_read.read();
        } else {
            ap_phi_mux_data_2696_V_read2766_phi_phi_fu_105745_p4 = ap_phi_reg_pp0_iter0_data_2696_V_read2766_phi_reg_105741.read();
        }
    } else {
        ap_phi_mux_data_2696_V_read2766_phi_phi_fu_105745_p4 = ap_phi_reg_pp0_iter0_data_2696_V_read2766_phi_reg_105741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_63627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_63627_p6 = data_2696_V_read2766_phi_reg_105741.read();
    } else {
        ap_phi_mux_data_2696_V_read2766_rewind_phi_fu_63627_p6 = data_2696_V_read2766_rewind_reg_63623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2697_V_read2767_phi_phi_fu_105758_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2697_V_read2767_phi_phi_fu_105758_p4 = ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_63641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2697_V_read2767_phi_phi_fu_105758_p4 = data_2697_V_read.read();
        } else {
            ap_phi_mux_data_2697_V_read2767_phi_phi_fu_105758_p4 = ap_phi_reg_pp0_iter0_data_2697_V_read2767_phi_reg_105754.read();
        }
    } else {
        ap_phi_mux_data_2697_V_read2767_phi_phi_fu_105758_p4 = ap_phi_reg_pp0_iter0_data_2697_V_read2767_phi_reg_105754.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_63641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_63641_p6 = data_2697_V_read2767_phi_reg_105754.read();
    } else {
        ap_phi_mux_data_2697_V_read2767_rewind_phi_fu_63641_p6 = data_2697_V_read2767_rewind_reg_63637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2698_V_read2768_phi_phi_fu_105771_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2698_V_read2768_phi_phi_fu_105771_p4 = ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_63655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2698_V_read2768_phi_phi_fu_105771_p4 = data_2698_V_read.read();
        } else {
            ap_phi_mux_data_2698_V_read2768_phi_phi_fu_105771_p4 = ap_phi_reg_pp0_iter0_data_2698_V_read2768_phi_reg_105767.read();
        }
    } else {
        ap_phi_mux_data_2698_V_read2768_phi_phi_fu_105771_p4 = ap_phi_reg_pp0_iter0_data_2698_V_read2768_phi_reg_105767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_63655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_63655_p6 = data_2698_V_read2768_phi_reg_105767.read();
    } else {
        ap_phi_mux_data_2698_V_read2768_rewind_phi_fu_63655_p6 = data_2698_V_read2768_rewind_reg_63651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2699_V_read2769_phi_phi_fu_105784_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2699_V_read2769_phi_phi_fu_105784_p4 = ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_63669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2699_V_read2769_phi_phi_fu_105784_p4 = data_2699_V_read.read();
        } else {
            ap_phi_mux_data_2699_V_read2769_phi_phi_fu_105784_p4 = ap_phi_reg_pp0_iter0_data_2699_V_read2769_phi_reg_105780.read();
        }
    } else {
        ap_phi_mux_data_2699_V_read2769_phi_phi_fu_105784_p4 = ap_phi_reg_pp0_iter0_data_2699_V_read2769_phi_reg_105780.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_63669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_63669_p6 = data_2699_V_read2769_phi_reg_105780.read();
    } else {
        ap_phi_mux_data_2699_V_read2769_rewind_phi_fu_63669_p6 = data_2699_V_read2769_rewind_reg_63665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_269_V_read339_phi_phi_fu_74194_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_269_V_read339_phi_phi_fu_74194_p4 = ap_phi_mux_data_269_V_read339_rewind_phi_fu_29649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_269_V_read339_phi_phi_fu_74194_p4 = data_269_V_read.read();
        } else {
            ap_phi_mux_data_269_V_read339_phi_phi_fu_74194_p4 = ap_phi_reg_pp0_iter0_data_269_V_read339_phi_reg_74190.read();
        }
    } else {
        ap_phi_mux_data_269_V_read339_phi_phi_fu_74194_p4 = ap_phi_reg_pp0_iter0_data_269_V_read339_phi_reg_74190.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_269_V_read339_rewind_phi_fu_29649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_269_V_read339_rewind_phi_fu_29649_p6 = data_269_V_read339_phi_reg_74190.read();
    } else {
        ap_phi_mux_data_269_V_read339_rewind_phi_fu_29649_p6 = data_269_V_read339_rewind_reg_29645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_26_V_read96_phi_phi_fu_71035_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_26_V_read96_phi_phi_fu_71035_p4 = ap_phi_mux_data_26_V_read96_rewind_phi_fu_26247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_26_V_read96_phi_phi_fu_71035_p4 = data_26_V_read.read();
        } else {
            ap_phi_mux_data_26_V_read96_phi_phi_fu_71035_p4 = ap_phi_reg_pp0_iter0_data_26_V_read96_phi_reg_71031.read();
        }
    } else {
        ap_phi_mux_data_26_V_read96_phi_phi_fu_71035_p4 = ap_phi_reg_pp0_iter0_data_26_V_read96_phi_reg_71031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_26_V_read96_rewind_phi_fu_26247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_26_V_read96_rewind_phi_fu_26247_p6 = data_26_V_read96_phi_reg_71031.read();
    } else {
        ap_phi_mux_data_26_V_read96_rewind_phi_fu_26247_p6 = data_26_V_read96_rewind_reg_26243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2700_V_read2770_phi_phi_fu_105797_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2700_V_read2770_phi_phi_fu_105797_p4 = ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_63683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2700_V_read2770_phi_phi_fu_105797_p4 = data_2700_V_read.read();
        } else {
            ap_phi_mux_data_2700_V_read2770_phi_phi_fu_105797_p4 = ap_phi_reg_pp0_iter0_data_2700_V_read2770_phi_reg_105793.read();
        }
    } else {
        ap_phi_mux_data_2700_V_read2770_phi_phi_fu_105797_p4 = ap_phi_reg_pp0_iter0_data_2700_V_read2770_phi_reg_105793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_63683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_63683_p6 = data_2700_V_read2770_phi_reg_105793.read();
    } else {
        ap_phi_mux_data_2700_V_read2770_rewind_phi_fu_63683_p6 = data_2700_V_read2770_rewind_reg_63679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2701_V_read2771_phi_phi_fu_105810_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2701_V_read2771_phi_phi_fu_105810_p4 = ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_63697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2701_V_read2771_phi_phi_fu_105810_p4 = data_2701_V_read.read();
        } else {
            ap_phi_mux_data_2701_V_read2771_phi_phi_fu_105810_p4 = ap_phi_reg_pp0_iter0_data_2701_V_read2771_phi_reg_105806.read();
        }
    } else {
        ap_phi_mux_data_2701_V_read2771_phi_phi_fu_105810_p4 = ap_phi_reg_pp0_iter0_data_2701_V_read2771_phi_reg_105806.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_63697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_63697_p6 = data_2701_V_read2771_phi_reg_105806.read();
    } else {
        ap_phi_mux_data_2701_V_read2771_rewind_phi_fu_63697_p6 = data_2701_V_read2771_rewind_reg_63693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2702_V_read2772_phi_phi_fu_105823_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2702_V_read2772_phi_phi_fu_105823_p4 = ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_63711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2702_V_read2772_phi_phi_fu_105823_p4 = data_2702_V_read.read();
        } else {
            ap_phi_mux_data_2702_V_read2772_phi_phi_fu_105823_p4 = ap_phi_reg_pp0_iter0_data_2702_V_read2772_phi_reg_105819.read();
        }
    } else {
        ap_phi_mux_data_2702_V_read2772_phi_phi_fu_105823_p4 = ap_phi_reg_pp0_iter0_data_2702_V_read2772_phi_reg_105819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_63711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_63711_p6 = data_2702_V_read2772_phi_reg_105819.read();
    } else {
        ap_phi_mux_data_2702_V_read2772_rewind_phi_fu_63711_p6 = data_2702_V_read2772_rewind_reg_63707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2703_V_read2773_phi_phi_fu_105836_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2703_V_read2773_phi_phi_fu_105836_p4 = ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_63725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2703_V_read2773_phi_phi_fu_105836_p4 = data_2703_V_read.read();
        } else {
            ap_phi_mux_data_2703_V_read2773_phi_phi_fu_105836_p4 = ap_phi_reg_pp0_iter0_data_2703_V_read2773_phi_reg_105832.read();
        }
    } else {
        ap_phi_mux_data_2703_V_read2773_phi_phi_fu_105836_p4 = ap_phi_reg_pp0_iter0_data_2703_V_read2773_phi_reg_105832.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_63725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_63725_p6 = data_2703_V_read2773_phi_reg_105832.read();
    } else {
        ap_phi_mux_data_2703_V_read2773_rewind_phi_fu_63725_p6 = data_2703_V_read2773_rewind_reg_63721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2704_V_read2774_phi_phi_fu_105849_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2704_V_read2774_phi_phi_fu_105849_p4 = ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_63739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2704_V_read2774_phi_phi_fu_105849_p4 = data_2704_V_read.read();
        } else {
            ap_phi_mux_data_2704_V_read2774_phi_phi_fu_105849_p4 = ap_phi_reg_pp0_iter0_data_2704_V_read2774_phi_reg_105845.read();
        }
    } else {
        ap_phi_mux_data_2704_V_read2774_phi_phi_fu_105849_p4 = ap_phi_reg_pp0_iter0_data_2704_V_read2774_phi_reg_105845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_63739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_63739_p6 = data_2704_V_read2774_phi_reg_105845.read();
    } else {
        ap_phi_mux_data_2704_V_read2774_rewind_phi_fu_63739_p6 = data_2704_V_read2774_rewind_reg_63735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2705_V_read2775_phi_phi_fu_105862_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2705_V_read2775_phi_phi_fu_105862_p4 = ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_63753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2705_V_read2775_phi_phi_fu_105862_p4 = data_2705_V_read.read();
        } else {
            ap_phi_mux_data_2705_V_read2775_phi_phi_fu_105862_p4 = ap_phi_reg_pp0_iter0_data_2705_V_read2775_phi_reg_105858.read();
        }
    } else {
        ap_phi_mux_data_2705_V_read2775_phi_phi_fu_105862_p4 = ap_phi_reg_pp0_iter0_data_2705_V_read2775_phi_reg_105858.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_63753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_63753_p6 = data_2705_V_read2775_phi_reg_105858.read();
    } else {
        ap_phi_mux_data_2705_V_read2775_rewind_phi_fu_63753_p6 = data_2705_V_read2775_rewind_reg_63749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2706_V_read2776_phi_phi_fu_105875_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2706_V_read2776_phi_phi_fu_105875_p4 = ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_63767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2706_V_read2776_phi_phi_fu_105875_p4 = data_2706_V_read.read();
        } else {
            ap_phi_mux_data_2706_V_read2776_phi_phi_fu_105875_p4 = ap_phi_reg_pp0_iter0_data_2706_V_read2776_phi_reg_105871.read();
        }
    } else {
        ap_phi_mux_data_2706_V_read2776_phi_phi_fu_105875_p4 = ap_phi_reg_pp0_iter0_data_2706_V_read2776_phi_reg_105871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_63767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_63767_p6 = data_2706_V_read2776_phi_reg_105871.read();
    } else {
        ap_phi_mux_data_2706_V_read2776_rewind_phi_fu_63767_p6 = data_2706_V_read2776_rewind_reg_63763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2707_V_read2777_phi_phi_fu_105888_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2707_V_read2777_phi_phi_fu_105888_p4 = ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_63781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2707_V_read2777_phi_phi_fu_105888_p4 = data_2707_V_read.read();
        } else {
            ap_phi_mux_data_2707_V_read2777_phi_phi_fu_105888_p4 = ap_phi_reg_pp0_iter0_data_2707_V_read2777_phi_reg_105884.read();
        }
    } else {
        ap_phi_mux_data_2707_V_read2777_phi_phi_fu_105888_p4 = ap_phi_reg_pp0_iter0_data_2707_V_read2777_phi_reg_105884.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_63781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_63781_p6 = data_2707_V_read2777_phi_reg_105884.read();
    } else {
        ap_phi_mux_data_2707_V_read2777_rewind_phi_fu_63781_p6 = data_2707_V_read2777_rewind_reg_63777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2708_V_read2778_phi_phi_fu_105901_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2708_V_read2778_phi_phi_fu_105901_p4 = ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_63795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2708_V_read2778_phi_phi_fu_105901_p4 = data_2708_V_read.read();
        } else {
            ap_phi_mux_data_2708_V_read2778_phi_phi_fu_105901_p4 = ap_phi_reg_pp0_iter0_data_2708_V_read2778_phi_reg_105897.read();
        }
    } else {
        ap_phi_mux_data_2708_V_read2778_phi_phi_fu_105901_p4 = ap_phi_reg_pp0_iter0_data_2708_V_read2778_phi_reg_105897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_63795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_63795_p6 = data_2708_V_read2778_phi_reg_105897.read();
    } else {
        ap_phi_mux_data_2708_V_read2778_rewind_phi_fu_63795_p6 = data_2708_V_read2778_rewind_reg_63791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2709_V_read2779_phi_phi_fu_105914_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2709_V_read2779_phi_phi_fu_105914_p4 = ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_63809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2709_V_read2779_phi_phi_fu_105914_p4 = data_2709_V_read.read();
        } else {
            ap_phi_mux_data_2709_V_read2779_phi_phi_fu_105914_p4 = ap_phi_reg_pp0_iter0_data_2709_V_read2779_phi_reg_105910.read();
        }
    } else {
        ap_phi_mux_data_2709_V_read2779_phi_phi_fu_105914_p4 = ap_phi_reg_pp0_iter0_data_2709_V_read2779_phi_reg_105910.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_63809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_63809_p6 = data_2709_V_read2779_phi_reg_105910.read();
    } else {
        ap_phi_mux_data_2709_V_read2779_rewind_phi_fu_63809_p6 = data_2709_V_read2779_rewind_reg_63805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_270_V_read340_phi_phi_fu_74207_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_270_V_read340_phi_phi_fu_74207_p4 = ap_phi_mux_data_270_V_read340_rewind_phi_fu_29663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_270_V_read340_phi_phi_fu_74207_p4 = data_270_V_read.read();
        } else {
            ap_phi_mux_data_270_V_read340_phi_phi_fu_74207_p4 = ap_phi_reg_pp0_iter0_data_270_V_read340_phi_reg_74203.read();
        }
    } else {
        ap_phi_mux_data_270_V_read340_phi_phi_fu_74207_p4 = ap_phi_reg_pp0_iter0_data_270_V_read340_phi_reg_74203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_270_V_read340_rewind_phi_fu_29663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_270_V_read340_rewind_phi_fu_29663_p6 = data_270_V_read340_phi_reg_74203.read();
    } else {
        ap_phi_mux_data_270_V_read340_rewind_phi_fu_29663_p6 = data_270_V_read340_rewind_reg_29659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2710_V_read2780_phi_phi_fu_105927_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2710_V_read2780_phi_phi_fu_105927_p4 = ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_63823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2710_V_read2780_phi_phi_fu_105927_p4 = data_2710_V_read.read();
        } else {
            ap_phi_mux_data_2710_V_read2780_phi_phi_fu_105927_p4 = ap_phi_reg_pp0_iter0_data_2710_V_read2780_phi_reg_105923.read();
        }
    } else {
        ap_phi_mux_data_2710_V_read2780_phi_phi_fu_105927_p4 = ap_phi_reg_pp0_iter0_data_2710_V_read2780_phi_reg_105923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_63823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_63823_p6 = data_2710_V_read2780_phi_reg_105923.read();
    } else {
        ap_phi_mux_data_2710_V_read2780_rewind_phi_fu_63823_p6 = data_2710_V_read2780_rewind_reg_63819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2711_V_read2781_phi_phi_fu_105940_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2711_V_read2781_phi_phi_fu_105940_p4 = ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_63837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2711_V_read2781_phi_phi_fu_105940_p4 = data_2711_V_read.read();
        } else {
            ap_phi_mux_data_2711_V_read2781_phi_phi_fu_105940_p4 = ap_phi_reg_pp0_iter0_data_2711_V_read2781_phi_reg_105936.read();
        }
    } else {
        ap_phi_mux_data_2711_V_read2781_phi_phi_fu_105940_p4 = ap_phi_reg_pp0_iter0_data_2711_V_read2781_phi_reg_105936.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_63837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_63837_p6 = data_2711_V_read2781_phi_reg_105936.read();
    } else {
        ap_phi_mux_data_2711_V_read2781_rewind_phi_fu_63837_p6 = data_2711_V_read2781_rewind_reg_63833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2712_V_read2782_phi_phi_fu_105953_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2712_V_read2782_phi_phi_fu_105953_p4 = ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_63851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2712_V_read2782_phi_phi_fu_105953_p4 = data_2712_V_read.read();
        } else {
            ap_phi_mux_data_2712_V_read2782_phi_phi_fu_105953_p4 = ap_phi_reg_pp0_iter0_data_2712_V_read2782_phi_reg_105949.read();
        }
    } else {
        ap_phi_mux_data_2712_V_read2782_phi_phi_fu_105953_p4 = ap_phi_reg_pp0_iter0_data_2712_V_read2782_phi_reg_105949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_63851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_63851_p6 = data_2712_V_read2782_phi_reg_105949.read();
    } else {
        ap_phi_mux_data_2712_V_read2782_rewind_phi_fu_63851_p6 = data_2712_V_read2782_rewind_reg_63847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2713_V_read2783_phi_phi_fu_105966_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2713_V_read2783_phi_phi_fu_105966_p4 = ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_63865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2713_V_read2783_phi_phi_fu_105966_p4 = data_2713_V_read.read();
        } else {
            ap_phi_mux_data_2713_V_read2783_phi_phi_fu_105966_p4 = ap_phi_reg_pp0_iter0_data_2713_V_read2783_phi_reg_105962.read();
        }
    } else {
        ap_phi_mux_data_2713_V_read2783_phi_phi_fu_105966_p4 = ap_phi_reg_pp0_iter0_data_2713_V_read2783_phi_reg_105962.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_63865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_63865_p6 = data_2713_V_read2783_phi_reg_105962.read();
    } else {
        ap_phi_mux_data_2713_V_read2783_rewind_phi_fu_63865_p6 = data_2713_V_read2783_rewind_reg_63861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2714_V_read2784_phi_phi_fu_105979_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2714_V_read2784_phi_phi_fu_105979_p4 = ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_63879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2714_V_read2784_phi_phi_fu_105979_p4 = data_2714_V_read.read();
        } else {
            ap_phi_mux_data_2714_V_read2784_phi_phi_fu_105979_p4 = ap_phi_reg_pp0_iter0_data_2714_V_read2784_phi_reg_105975.read();
        }
    } else {
        ap_phi_mux_data_2714_V_read2784_phi_phi_fu_105979_p4 = ap_phi_reg_pp0_iter0_data_2714_V_read2784_phi_reg_105975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_63879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_63879_p6 = data_2714_V_read2784_phi_reg_105975.read();
    } else {
        ap_phi_mux_data_2714_V_read2784_rewind_phi_fu_63879_p6 = data_2714_V_read2784_rewind_reg_63875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2715_V_read2785_phi_phi_fu_105992_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2715_V_read2785_phi_phi_fu_105992_p4 = ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_63893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2715_V_read2785_phi_phi_fu_105992_p4 = data_2715_V_read.read();
        } else {
            ap_phi_mux_data_2715_V_read2785_phi_phi_fu_105992_p4 = ap_phi_reg_pp0_iter0_data_2715_V_read2785_phi_reg_105988.read();
        }
    } else {
        ap_phi_mux_data_2715_V_read2785_phi_phi_fu_105992_p4 = ap_phi_reg_pp0_iter0_data_2715_V_read2785_phi_reg_105988.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_63893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_63893_p6 = data_2715_V_read2785_phi_reg_105988.read();
    } else {
        ap_phi_mux_data_2715_V_read2785_rewind_phi_fu_63893_p6 = data_2715_V_read2785_rewind_reg_63889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2716_V_read2786_phi_phi_fu_106005_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2716_V_read2786_phi_phi_fu_106005_p4 = ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_63907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2716_V_read2786_phi_phi_fu_106005_p4 = data_2716_V_read.read();
        } else {
            ap_phi_mux_data_2716_V_read2786_phi_phi_fu_106005_p4 = ap_phi_reg_pp0_iter0_data_2716_V_read2786_phi_reg_106001.read();
        }
    } else {
        ap_phi_mux_data_2716_V_read2786_phi_phi_fu_106005_p4 = ap_phi_reg_pp0_iter0_data_2716_V_read2786_phi_reg_106001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_63907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_63907_p6 = data_2716_V_read2786_phi_reg_106001.read();
    } else {
        ap_phi_mux_data_2716_V_read2786_rewind_phi_fu_63907_p6 = data_2716_V_read2786_rewind_reg_63903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2717_V_read2787_phi_phi_fu_106018_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2717_V_read2787_phi_phi_fu_106018_p4 = ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_63921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2717_V_read2787_phi_phi_fu_106018_p4 = data_2717_V_read.read();
        } else {
            ap_phi_mux_data_2717_V_read2787_phi_phi_fu_106018_p4 = ap_phi_reg_pp0_iter0_data_2717_V_read2787_phi_reg_106014.read();
        }
    } else {
        ap_phi_mux_data_2717_V_read2787_phi_phi_fu_106018_p4 = ap_phi_reg_pp0_iter0_data_2717_V_read2787_phi_reg_106014.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_63921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_63921_p6 = data_2717_V_read2787_phi_reg_106014.read();
    } else {
        ap_phi_mux_data_2717_V_read2787_rewind_phi_fu_63921_p6 = data_2717_V_read2787_rewind_reg_63917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2718_V_read2788_phi_phi_fu_106031_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2718_V_read2788_phi_phi_fu_106031_p4 = ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_63935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2718_V_read2788_phi_phi_fu_106031_p4 = data_2718_V_read.read();
        } else {
            ap_phi_mux_data_2718_V_read2788_phi_phi_fu_106031_p4 = ap_phi_reg_pp0_iter0_data_2718_V_read2788_phi_reg_106027.read();
        }
    } else {
        ap_phi_mux_data_2718_V_read2788_phi_phi_fu_106031_p4 = ap_phi_reg_pp0_iter0_data_2718_V_read2788_phi_reg_106027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_63935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_63935_p6 = data_2718_V_read2788_phi_reg_106027.read();
    } else {
        ap_phi_mux_data_2718_V_read2788_rewind_phi_fu_63935_p6 = data_2718_V_read2788_rewind_reg_63931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2719_V_read2789_phi_phi_fu_106044_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2719_V_read2789_phi_phi_fu_106044_p4 = ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_63949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2719_V_read2789_phi_phi_fu_106044_p4 = data_2719_V_read.read();
        } else {
            ap_phi_mux_data_2719_V_read2789_phi_phi_fu_106044_p4 = ap_phi_reg_pp0_iter0_data_2719_V_read2789_phi_reg_106040.read();
        }
    } else {
        ap_phi_mux_data_2719_V_read2789_phi_phi_fu_106044_p4 = ap_phi_reg_pp0_iter0_data_2719_V_read2789_phi_reg_106040.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_63949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_63949_p6 = data_2719_V_read2789_phi_reg_106040.read();
    } else {
        ap_phi_mux_data_2719_V_read2789_rewind_phi_fu_63949_p6 = data_2719_V_read2789_rewind_reg_63945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_271_V_read341_phi_phi_fu_74220_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_271_V_read341_phi_phi_fu_74220_p4 = ap_phi_mux_data_271_V_read341_rewind_phi_fu_29677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_271_V_read341_phi_phi_fu_74220_p4 = data_271_V_read.read();
        } else {
            ap_phi_mux_data_271_V_read341_phi_phi_fu_74220_p4 = ap_phi_reg_pp0_iter0_data_271_V_read341_phi_reg_74216.read();
        }
    } else {
        ap_phi_mux_data_271_V_read341_phi_phi_fu_74220_p4 = ap_phi_reg_pp0_iter0_data_271_V_read341_phi_reg_74216.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_271_V_read341_rewind_phi_fu_29677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_271_V_read341_rewind_phi_fu_29677_p6 = data_271_V_read341_phi_reg_74216.read();
    } else {
        ap_phi_mux_data_271_V_read341_rewind_phi_fu_29677_p6 = data_271_V_read341_rewind_reg_29673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2720_V_read2790_phi_phi_fu_106057_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2720_V_read2790_phi_phi_fu_106057_p4 = ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_63963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2720_V_read2790_phi_phi_fu_106057_p4 = data_2720_V_read.read();
        } else {
            ap_phi_mux_data_2720_V_read2790_phi_phi_fu_106057_p4 = ap_phi_reg_pp0_iter0_data_2720_V_read2790_phi_reg_106053.read();
        }
    } else {
        ap_phi_mux_data_2720_V_read2790_phi_phi_fu_106057_p4 = ap_phi_reg_pp0_iter0_data_2720_V_read2790_phi_reg_106053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_63963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_63963_p6 = data_2720_V_read2790_phi_reg_106053.read();
    } else {
        ap_phi_mux_data_2720_V_read2790_rewind_phi_fu_63963_p6 = data_2720_V_read2790_rewind_reg_63959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2721_V_read2791_phi_phi_fu_106070_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2721_V_read2791_phi_phi_fu_106070_p4 = ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_63977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2721_V_read2791_phi_phi_fu_106070_p4 = data_2721_V_read.read();
        } else {
            ap_phi_mux_data_2721_V_read2791_phi_phi_fu_106070_p4 = ap_phi_reg_pp0_iter0_data_2721_V_read2791_phi_reg_106066.read();
        }
    } else {
        ap_phi_mux_data_2721_V_read2791_phi_phi_fu_106070_p4 = ap_phi_reg_pp0_iter0_data_2721_V_read2791_phi_reg_106066.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_63977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_63977_p6 = data_2721_V_read2791_phi_reg_106066.read();
    } else {
        ap_phi_mux_data_2721_V_read2791_rewind_phi_fu_63977_p6 = data_2721_V_read2791_rewind_reg_63973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2722_V_read2792_phi_phi_fu_106083_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2722_V_read2792_phi_phi_fu_106083_p4 = ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_63991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2722_V_read2792_phi_phi_fu_106083_p4 = data_2722_V_read.read();
        } else {
            ap_phi_mux_data_2722_V_read2792_phi_phi_fu_106083_p4 = ap_phi_reg_pp0_iter0_data_2722_V_read2792_phi_reg_106079.read();
        }
    } else {
        ap_phi_mux_data_2722_V_read2792_phi_phi_fu_106083_p4 = ap_phi_reg_pp0_iter0_data_2722_V_read2792_phi_reg_106079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_63991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_63991_p6 = data_2722_V_read2792_phi_reg_106079.read();
    } else {
        ap_phi_mux_data_2722_V_read2792_rewind_phi_fu_63991_p6 = data_2722_V_read2792_rewind_reg_63987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2723_V_read2793_phi_phi_fu_106096_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2723_V_read2793_phi_phi_fu_106096_p4 = ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_64005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2723_V_read2793_phi_phi_fu_106096_p4 = data_2723_V_read.read();
        } else {
            ap_phi_mux_data_2723_V_read2793_phi_phi_fu_106096_p4 = ap_phi_reg_pp0_iter0_data_2723_V_read2793_phi_reg_106092.read();
        }
    } else {
        ap_phi_mux_data_2723_V_read2793_phi_phi_fu_106096_p4 = ap_phi_reg_pp0_iter0_data_2723_V_read2793_phi_reg_106092.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_64005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_64005_p6 = data_2723_V_read2793_phi_reg_106092.read();
    } else {
        ap_phi_mux_data_2723_V_read2793_rewind_phi_fu_64005_p6 = data_2723_V_read2793_rewind_reg_64001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2724_V_read2794_phi_phi_fu_106109_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2724_V_read2794_phi_phi_fu_106109_p4 = ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_64019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2724_V_read2794_phi_phi_fu_106109_p4 = data_2724_V_read.read();
        } else {
            ap_phi_mux_data_2724_V_read2794_phi_phi_fu_106109_p4 = ap_phi_reg_pp0_iter0_data_2724_V_read2794_phi_reg_106105.read();
        }
    } else {
        ap_phi_mux_data_2724_V_read2794_phi_phi_fu_106109_p4 = ap_phi_reg_pp0_iter0_data_2724_V_read2794_phi_reg_106105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_64019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_64019_p6 = data_2724_V_read2794_phi_reg_106105.read();
    } else {
        ap_phi_mux_data_2724_V_read2794_rewind_phi_fu_64019_p6 = data_2724_V_read2794_rewind_reg_64015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2725_V_read2795_phi_phi_fu_106122_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2725_V_read2795_phi_phi_fu_106122_p4 = ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_64033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2725_V_read2795_phi_phi_fu_106122_p4 = data_2725_V_read.read();
        } else {
            ap_phi_mux_data_2725_V_read2795_phi_phi_fu_106122_p4 = ap_phi_reg_pp0_iter0_data_2725_V_read2795_phi_reg_106118.read();
        }
    } else {
        ap_phi_mux_data_2725_V_read2795_phi_phi_fu_106122_p4 = ap_phi_reg_pp0_iter0_data_2725_V_read2795_phi_reg_106118.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_64033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_64033_p6 = data_2725_V_read2795_phi_reg_106118.read();
    } else {
        ap_phi_mux_data_2725_V_read2795_rewind_phi_fu_64033_p6 = data_2725_V_read2795_rewind_reg_64029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2726_V_read2796_phi_phi_fu_106135_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2726_V_read2796_phi_phi_fu_106135_p4 = ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_64047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2726_V_read2796_phi_phi_fu_106135_p4 = data_2726_V_read.read();
        } else {
            ap_phi_mux_data_2726_V_read2796_phi_phi_fu_106135_p4 = ap_phi_reg_pp0_iter0_data_2726_V_read2796_phi_reg_106131.read();
        }
    } else {
        ap_phi_mux_data_2726_V_read2796_phi_phi_fu_106135_p4 = ap_phi_reg_pp0_iter0_data_2726_V_read2796_phi_reg_106131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_64047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_64047_p6 = data_2726_V_read2796_phi_reg_106131.read();
    } else {
        ap_phi_mux_data_2726_V_read2796_rewind_phi_fu_64047_p6 = data_2726_V_read2796_rewind_reg_64043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2727_V_read2797_phi_phi_fu_106148_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2727_V_read2797_phi_phi_fu_106148_p4 = ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_64061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2727_V_read2797_phi_phi_fu_106148_p4 = data_2727_V_read.read();
        } else {
            ap_phi_mux_data_2727_V_read2797_phi_phi_fu_106148_p4 = ap_phi_reg_pp0_iter0_data_2727_V_read2797_phi_reg_106144.read();
        }
    } else {
        ap_phi_mux_data_2727_V_read2797_phi_phi_fu_106148_p4 = ap_phi_reg_pp0_iter0_data_2727_V_read2797_phi_reg_106144.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_64061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_64061_p6 = data_2727_V_read2797_phi_reg_106144.read();
    } else {
        ap_phi_mux_data_2727_V_read2797_rewind_phi_fu_64061_p6 = data_2727_V_read2797_rewind_reg_64057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2728_V_read2798_phi_phi_fu_106161_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2728_V_read2798_phi_phi_fu_106161_p4 = ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_64075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2728_V_read2798_phi_phi_fu_106161_p4 = data_2728_V_read.read();
        } else {
            ap_phi_mux_data_2728_V_read2798_phi_phi_fu_106161_p4 = ap_phi_reg_pp0_iter0_data_2728_V_read2798_phi_reg_106157.read();
        }
    } else {
        ap_phi_mux_data_2728_V_read2798_phi_phi_fu_106161_p4 = ap_phi_reg_pp0_iter0_data_2728_V_read2798_phi_reg_106157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_64075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_64075_p6 = data_2728_V_read2798_phi_reg_106157.read();
    } else {
        ap_phi_mux_data_2728_V_read2798_rewind_phi_fu_64075_p6 = data_2728_V_read2798_rewind_reg_64071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2729_V_read2799_phi_phi_fu_106174_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2729_V_read2799_phi_phi_fu_106174_p4 = ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_64089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2729_V_read2799_phi_phi_fu_106174_p4 = data_2729_V_read.read();
        } else {
            ap_phi_mux_data_2729_V_read2799_phi_phi_fu_106174_p4 = ap_phi_reg_pp0_iter0_data_2729_V_read2799_phi_reg_106170.read();
        }
    } else {
        ap_phi_mux_data_2729_V_read2799_phi_phi_fu_106174_p4 = ap_phi_reg_pp0_iter0_data_2729_V_read2799_phi_reg_106170.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_64089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_64089_p6 = data_2729_V_read2799_phi_reg_106170.read();
    } else {
        ap_phi_mux_data_2729_V_read2799_rewind_phi_fu_64089_p6 = data_2729_V_read2799_rewind_reg_64085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_272_V_read342_phi_phi_fu_74233_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_272_V_read342_phi_phi_fu_74233_p4 = ap_phi_mux_data_272_V_read342_rewind_phi_fu_29691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_272_V_read342_phi_phi_fu_74233_p4 = data_272_V_read.read();
        } else {
            ap_phi_mux_data_272_V_read342_phi_phi_fu_74233_p4 = ap_phi_reg_pp0_iter0_data_272_V_read342_phi_reg_74229.read();
        }
    } else {
        ap_phi_mux_data_272_V_read342_phi_phi_fu_74233_p4 = ap_phi_reg_pp0_iter0_data_272_V_read342_phi_reg_74229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_272_V_read342_rewind_phi_fu_29691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_272_V_read342_rewind_phi_fu_29691_p6 = data_272_V_read342_phi_reg_74229.read();
    } else {
        ap_phi_mux_data_272_V_read342_rewind_phi_fu_29691_p6 = data_272_V_read342_rewind_reg_29687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2730_V_read2800_phi_phi_fu_106187_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2730_V_read2800_phi_phi_fu_106187_p4 = ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_64103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2730_V_read2800_phi_phi_fu_106187_p4 = data_2730_V_read.read();
        } else {
            ap_phi_mux_data_2730_V_read2800_phi_phi_fu_106187_p4 = ap_phi_reg_pp0_iter0_data_2730_V_read2800_phi_reg_106183.read();
        }
    } else {
        ap_phi_mux_data_2730_V_read2800_phi_phi_fu_106187_p4 = ap_phi_reg_pp0_iter0_data_2730_V_read2800_phi_reg_106183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_64103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_64103_p6 = data_2730_V_read2800_phi_reg_106183.read();
    } else {
        ap_phi_mux_data_2730_V_read2800_rewind_phi_fu_64103_p6 = data_2730_V_read2800_rewind_reg_64099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2731_V_read2801_phi_phi_fu_106200_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2731_V_read2801_phi_phi_fu_106200_p4 = ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_64117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2731_V_read2801_phi_phi_fu_106200_p4 = data_2731_V_read.read();
        } else {
            ap_phi_mux_data_2731_V_read2801_phi_phi_fu_106200_p4 = ap_phi_reg_pp0_iter0_data_2731_V_read2801_phi_reg_106196.read();
        }
    } else {
        ap_phi_mux_data_2731_V_read2801_phi_phi_fu_106200_p4 = ap_phi_reg_pp0_iter0_data_2731_V_read2801_phi_reg_106196.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_64117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_64117_p6 = data_2731_V_read2801_phi_reg_106196.read();
    } else {
        ap_phi_mux_data_2731_V_read2801_rewind_phi_fu_64117_p6 = data_2731_V_read2801_rewind_reg_64113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2732_V_read2802_phi_phi_fu_106213_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2732_V_read2802_phi_phi_fu_106213_p4 = ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_64131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2732_V_read2802_phi_phi_fu_106213_p4 = data_2732_V_read.read();
        } else {
            ap_phi_mux_data_2732_V_read2802_phi_phi_fu_106213_p4 = ap_phi_reg_pp0_iter0_data_2732_V_read2802_phi_reg_106209.read();
        }
    } else {
        ap_phi_mux_data_2732_V_read2802_phi_phi_fu_106213_p4 = ap_phi_reg_pp0_iter0_data_2732_V_read2802_phi_reg_106209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_64131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_64131_p6 = data_2732_V_read2802_phi_reg_106209.read();
    } else {
        ap_phi_mux_data_2732_V_read2802_rewind_phi_fu_64131_p6 = data_2732_V_read2802_rewind_reg_64127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2733_V_read2803_phi_phi_fu_106226_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2733_V_read2803_phi_phi_fu_106226_p4 = ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_64145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2733_V_read2803_phi_phi_fu_106226_p4 = data_2733_V_read.read();
        } else {
            ap_phi_mux_data_2733_V_read2803_phi_phi_fu_106226_p4 = ap_phi_reg_pp0_iter0_data_2733_V_read2803_phi_reg_106222.read();
        }
    } else {
        ap_phi_mux_data_2733_V_read2803_phi_phi_fu_106226_p4 = ap_phi_reg_pp0_iter0_data_2733_V_read2803_phi_reg_106222.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_64145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_64145_p6 = data_2733_V_read2803_phi_reg_106222.read();
    } else {
        ap_phi_mux_data_2733_V_read2803_rewind_phi_fu_64145_p6 = data_2733_V_read2803_rewind_reg_64141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2734_V_read2804_phi_phi_fu_106239_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2734_V_read2804_phi_phi_fu_106239_p4 = ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_64159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2734_V_read2804_phi_phi_fu_106239_p4 = data_2734_V_read.read();
        } else {
            ap_phi_mux_data_2734_V_read2804_phi_phi_fu_106239_p4 = ap_phi_reg_pp0_iter0_data_2734_V_read2804_phi_reg_106235.read();
        }
    } else {
        ap_phi_mux_data_2734_V_read2804_phi_phi_fu_106239_p4 = ap_phi_reg_pp0_iter0_data_2734_V_read2804_phi_reg_106235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_64159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_64159_p6 = data_2734_V_read2804_phi_reg_106235.read();
    } else {
        ap_phi_mux_data_2734_V_read2804_rewind_phi_fu_64159_p6 = data_2734_V_read2804_rewind_reg_64155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2735_V_read2805_phi_phi_fu_106252_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2735_V_read2805_phi_phi_fu_106252_p4 = ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_64173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2735_V_read2805_phi_phi_fu_106252_p4 = data_2735_V_read.read();
        } else {
            ap_phi_mux_data_2735_V_read2805_phi_phi_fu_106252_p4 = ap_phi_reg_pp0_iter0_data_2735_V_read2805_phi_reg_106248.read();
        }
    } else {
        ap_phi_mux_data_2735_V_read2805_phi_phi_fu_106252_p4 = ap_phi_reg_pp0_iter0_data_2735_V_read2805_phi_reg_106248.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_64173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_64173_p6 = data_2735_V_read2805_phi_reg_106248.read();
    } else {
        ap_phi_mux_data_2735_V_read2805_rewind_phi_fu_64173_p6 = data_2735_V_read2805_rewind_reg_64169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2736_V_read2806_phi_phi_fu_106265_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2736_V_read2806_phi_phi_fu_106265_p4 = ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_64187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2736_V_read2806_phi_phi_fu_106265_p4 = data_2736_V_read.read();
        } else {
            ap_phi_mux_data_2736_V_read2806_phi_phi_fu_106265_p4 = ap_phi_reg_pp0_iter0_data_2736_V_read2806_phi_reg_106261.read();
        }
    } else {
        ap_phi_mux_data_2736_V_read2806_phi_phi_fu_106265_p4 = ap_phi_reg_pp0_iter0_data_2736_V_read2806_phi_reg_106261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_64187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_64187_p6 = data_2736_V_read2806_phi_reg_106261.read();
    } else {
        ap_phi_mux_data_2736_V_read2806_rewind_phi_fu_64187_p6 = data_2736_V_read2806_rewind_reg_64183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2737_V_read2807_phi_phi_fu_106278_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2737_V_read2807_phi_phi_fu_106278_p4 = ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_64201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2737_V_read2807_phi_phi_fu_106278_p4 = data_2737_V_read.read();
        } else {
            ap_phi_mux_data_2737_V_read2807_phi_phi_fu_106278_p4 = ap_phi_reg_pp0_iter0_data_2737_V_read2807_phi_reg_106274.read();
        }
    } else {
        ap_phi_mux_data_2737_V_read2807_phi_phi_fu_106278_p4 = ap_phi_reg_pp0_iter0_data_2737_V_read2807_phi_reg_106274.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_64201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_64201_p6 = data_2737_V_read2807_phi_reg_106274.read();
    } else {
        ap_phi_mux_data_2737_V_read2807_rewind_phi_fu_64201_p6 = data_2737_V_read2807_rewind_reg_64197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2738_V_read2808_phi_phi_fu_106291_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2738_V_read2808_phi_phi_fu_106291_p4 = ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_64215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2738_V_read2808_phi_phi_fu_106291_p4 = data_2738_V_read.read();
        } else {
            ap_phi_mux_data_2738_V_read2808_phi_phi_fu_106291_p4 = ap_phi_reg_pp0_iter0_data_2738_V_read2808_phi_reg_106287.read();
        }
    } else {
        ap_phi_mux_data_2738_V_read2808_phi_phi_fu_106291_p4 = ap_phi_reg_pp0_iter0_data_2738_V_read2808_phi_reg_106287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_64215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_64215_p6 = data_2738_V_read2808_phi_reg_106287.read();
    } else {
        ap_phi_mux_data_2738_V_read2808_rewind_phi_fu_64215_p6 = data_2738_V_read2808_rewind_reg_64211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2739_V_read2809_phi_phi_fu_106304_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2739_V_read2809_phi_phi_fu_106304_p4 = ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_64229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2739_V_read2809_phi_phi_fu_106304_p4 = data_2739_V_read.read();
        } else {
            ap_phi_mux_data_2739_V_read2809_phi_phi_fu_106304_p4 = ap_phi_reg_pp0_iter0_data_2739_V_read2809_phi_reg_106300.read();
        }
    } else {
        ap_phi_mux_data_2739_V_read2809_phi_phi_fu_106304_p4 = ap_phi_reg_pp0_iter0_data_2739_V_read2809_phi_reg_106300.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_64229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_64229_p6 = data_2739_V_read2809_phi_reg_106300.read();
    } else {
        ap_phi_mux_data_2739_V_read2809_rewind_phi_fu_64229_p6 = data_2739_V_read2809_rewind_reg_64225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_273_V_read343_phi_phi_fu_74246_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_273_V_read343_phi_phi_fu_74246_p4 = ap_phi_mux_data_273_V_read343_rewind_phi_fu_29705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_273_V_read343_phi_phi_fu_74246_p4 = data_273_V_read.read();
        } else {
            ap_phi_mux_data_273_V_read343_phi_phi_fu_74246_p4 = ap_phi_reg_pp0_iter0_data_273_V_read343_phi_reg_74242.read();
        }
    } else {
        ap_phi_mux_data_273_V_read343_phi_phi_fu_74246_p4 = ap_phi_reg_pp0_iter0_data_273_V_read343_phi_reg_74242.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_273_V_read343_rewind_phi_fu_29705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_273_V_read343_rewind_phi_fu_29705_p6 = data_273_V_read343_phi_reg_74242.read();
    } else {
        ap_phi_mux_data_273_V_read343_rewind_phi_fu_29705_p6 = data_273_V_read343_rewind_reg_29701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2740_V_read2810_phi_phi_fu_106317_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2740_V_read2810_phi_phi_fu_106317_p4 = ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_64243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2740_V_read2810_phi_phi_fu_106317_p4 = data_2740_V_read.read();
        } else {
            ap_phi_mux_data_2740_V_read2810_phi_phi_fu_106317_p4 = ap_phi_reg_pp0_iter0_data_2740_V_read2810_phi_reg_106313.read();
        }
    } else {
        ap_phi_mux_data_2740_V_read2810_phi_phi_fu_106317_p4 = ap_phi_reg_pp0_iter0_data_2740_V_read2810_phi_reg_106313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_64243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_64243_p6 = data_2740_V_read2810_phi_reg_106313.read();
    } else {
        ap_phi_mux_data_2740_V_read2810_rewind_phi_fu_64243_p6 = data_2740_V_read2810_rewind_reg_64239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2741_V_read2811_phi_phi_fu_106330_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2741_V_read2811_phi_phi_fu_106330_p4 = ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_64257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2741_V_read2811_phi_phi_fu_106330_p4 = data_2741_V_read.read();
        } else {
            ap_phi_mux_data_2741_V_read2811_phi_phi_fu_106330_p4 = ap_phi_reg_pp0_iter0_data_2741_V_read2811_phi_reg_106326.read();
        }
    } else {
        ap_phi_mux_data_2741_V_read2811_phi_phi_fu_106330_p4 = ap_phi_reg_pp0_iter0_data_2741_V_read2811_phi_reg_106326.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_64257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_64257_p6 = data_2741_V_read2811_phi_reg_106326.read();
    } else {
        ap_phi_mux_data_2741_V_read2811_rewind_phi_fu_64257_p6 = data_2741_V_read2811_rewind_reg_64253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2742_V_read2812_phi_phi_fu_106343_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2742_V_read2812_phi_phi_fu_106343_p4 = ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_64271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2742_V_read2812_phi_phi_fu_106343_p4 = data_2742_V_read.read();
        } else {
            ap_phi_mux_data_2742_V_read2812_phi_phi_fu_106343_p4 = ap_phi_reg_pp0_iter0_data_2742_V_read2812_phi_reg_106339.read();
        }
    } else {
        ap_phi_mux_data_2742_V_read2812_phi_phi_fu_106343_p4 = ap_phi_reg_pp0_iter0_data_2742_V_read2812_phi_reg_106339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_64271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_64271_p6 = data_2742_V_read2812_phi_reg_106339.read();
    } else {
        ap_phi_mux_data_2742_V_read2812_rewind_phi_fu_64271_p6 = data_2742_V_read2812_rewind_reg_64267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2743_V_read2813_phi_phi_fu_106356_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2743_V_read2813_phi_phi_fu_106356_p4 = ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_64285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2743_V_read2813_phi_phi_fu_106356_p4 = data_2743_V_read.read();
        } else {
            ap_phi_mux_data_2743_V_read2813_phi_phi_fu_106356_p4 = ap_phi_reg_pp0_iter0_data_2743_V_read2813_phi_reg_106352.read();
        }
    } else {
        ap_phi_mux_data_2743_V_read2813_phi_phi_fu_106356_p4 = ap_phi_reg_pp0_iter0_data_2743_V_read2813_phi_reg_106352.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_64285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_64285_p6 = data_2743_V_read2813_phi_reg_106352.read();
    } else {
        ap_phi_mux_data_2743_V_read2813_rewind_phi_fu_64285_p6 = data_2743_V_read2813_rewind_reg_64281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2744_V_read2814_phi_phi_fu_106369_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2744_V_read2814_phi_phi_fu_106369_p4 = ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_64299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2744_V_read2814_phi_phi_fu_106369_p4 = data_2744_V_read.read();
        } else {
            ap_phi_mux_data_2744_V_read2814_phi_phi_fu_106369_p4 = ap_phi_reg_pp0_iter0_data_2744_V_read2814_phi_reg_106365.read();
        }
    } else {
        ap_phi_mux_data_2744_V_read2814_phi_phi_fu_106369_p4 = ap_phi_reg_pp0_iter0_data_2744_V_read2814_phi_reg_106365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_64299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_64299_p6 = data_2744_V_read2814_phi_reg_106365.read();
    } else {
        ap_phi_mux_data_2744_V_read2814_rewind_phi_fu_64299_p6 = data_2744_V_read2814_rewind_reg_64295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2745_V_read2815_phi_phi_fu_106382_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2745_V_read2815_phi_phi_fu_106382_p4 = ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_64313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2745_V_read2815_phi_phi_fu_106382_p4 = data_2745_V_read.read();
        } else {
            ap_phi_mux_data_2745_V_read2815_phi_phi_fu_106382_p4 = ap_phi_reg_pp0_iter0_data_2745_V_read2815_phi_reg_106378.read();
        }
    } else {
        ap_phi_mux_data_2745_V_read2815_phi_phi_fu_106382_p4 = ap_phi_reg_pp0_iter0_data_2745_V_read2815_phi_reg_106378.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_64313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_64313_p6 = data_2745_V_read2815_phi_reg_106378.read();
    } else {
        ap_phi_mux_data_2745_V_read2815_rewind_phi_fu_64313_p6 = data_2745_V_read2815_rewind_reg_64309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2746_V_read2816_phi_phi_fu_106395_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2746_V_read2816_phi_phi_fu_106395_p4 = ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_64327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2746_V_read2816_phi_phi_fu_106395_p4 = data_2746_V_read.read();
        } else {
            ap_phi_mux_data_2746_V_read2816_phi_phi_fu_106395_p4 = ap_phi_reg_pp0_iter0_data_2746_V_read2816_phi_reg_106391.read();
        }
    } else {
        ap_phi_mux_data_2746_V_read2816_phi_phi_fu_106395_p4 = ap_phi_reg_pp0_iter0_data_2746_V_read2816_phi_reg_106391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_64327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_64327_p6 = data_2746_V_read2816_phi_reg_106391.read();
    } else {
        ap_phi_mux_data_2746_V_read2816_rewind_phi_fu_64327_p6 = data_2746_V_read2816_rewind_reg_64323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2747_V_read2817_phi_phi_fu_106408_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2747_V_read2817_phi_phi_fu_106408_p4 = ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_64341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2747_V_read2817_phi_phi_fu_106408_p4 = data_2747_V_read.read();
        } else {
            ap_phi_mux_data_2747_V_read2817_phi_phi_fu_106408_p4 = ap_phi_reg_pp0_iter0_data_2747_V_read2817_phi_reg_106404.read();
        }
    } else {
        ap_phi_mux_data_2747_V_read2817_phi_phi_fu_106408_p4 = ap_phi_reg_pp0_iter0_data_2747_V_read2817_phi_reg_106404.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_64341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_64341_p6 = data_2747_V_read2817_phi_reg_106404.read();
    } else {
        ap_phi_mux_data_2747_V_read2817_rewind_phi_fu_64341_p6 = data_2747_V_read2817_rewind_reg_64337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2748_V_read2818_phi_phi_fu_106421_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2748_V_read2818_phi_phi_fu_106421_p4 = ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_64355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2748_V_read2818_phi_phi_fu_106421_p4 = data_2748_V_read.read();
        } else {
            ap_phi_mux_data_2748_V_read2818_phi_phi_fu_106421_p4 = ap_phi_reg_pp0_iter0_data_2748_V_read2818_phi_reg_106417.read();
        }
    } else {
        ap_phi_mux_data_2748_V_read2818_phi_phi_fu_106421_p4 = ap_phi_reg_pp0_iter0_data_2748_V_read2818_phi_reg_106417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_64355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_64355_p6 = data_2748_V_read2818_phi_reg_106417.read();
    } else {
        ap_phi_mux_data_2748_V_read2818_rewind_phi_fu_64355_p6 = data_2748_V_read2818_rewind_reg_64351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2749_V_read2819_phi_phi_fu_106434_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2749_V_read2819_phi_phi_fu_106434_p4 = ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_64369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2749_V_read2819_phi_phi_fu_106434_p4 = data_2749_V_read.read();
        } else {
            ap_phi_mux_data_2749_V_read2819_phi_phi_fu_106434_p4 = ap_phi_reg_pp0_iter0_data_2749_V_read2819_phi_reg_106430.read();
        }
    } else {
        ap_phi_mux_data_2749_V_read2819_phi_phi_fu_106434_p4 = ap_phi_reg_pp0_iter0_data_2749_V_read2819_phi_reg_106430.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_64369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_64369_p6 = data_2749_V_read2819_phi_reg_106430.read();
    } else {
        ap_phi_mux_data_2749_V_read2819_rewind_phi_fu_64369_p6 = data_2749_V_read2819_rewind_reg_64365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_274_V_read344_phi_phi_fu_74259_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_274_V_read344_phi_phi_fu_74259_p4 = ap_phi_mux_data_274_V_read344_rewind_phi_fu_29719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_274_V_read344_phi_phi_fu_74259_p4 = data_274_V_read.read();
        } else {
            ap_phi_mux_data_274_V_read344_phi_phi_fu_74259_p4 = ap_phi_reg_pp0_iter0_data_274_V_read344_phi_reg_74255.read();
        }
    } else {
        ap_phi_mux_data_274_V_read344_phi_phi_fu_74259_p4 = ap_phi_reg_pp0_iter0_data_274_V_read344_phi_reg_74255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_274_V_read344_rewind_phi_fu_29719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_274_V_read344_rewind_phi_fu_29719_p6 = data_274_V_read344_phi_reg_74255.read();
    } else {
        ap_phi_mux_data_274_V_read344_rewind_phi_fu_29719_p6 = data_274_V_read344_rewind_reg_29715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2750_V_read2820_phi_phi_fu_106447_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2750_V_read2820_phi_phi_fu_106447_p4 = ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_64383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2750_V_read2820_phi_phi_fu_106447_p4 = data_2750_V_read.read();
        } else {
            ap_phi_mux_data_2750_V_read2820_phi_phi_fu_106447_p4 = ap_phi_reg_pp0_iter0_data_2750_V_read2820_phi_reg_106443.read();
        }
    } else {
        ap_phi_mux_data_2750_V_read2820_phi_phi_fu_106447_p4 = ap_phi_reg_pp0_iter0_data_2750_V_read2820_phi_reg_106443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_64383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_64383_p6 = data_2750_V_read2820_phi_reg_106443.read();
    } else {
        ap_phi_mux_data_2750_V_read2820_rewind_phi_fu_64383_p6 = data_2750_V_read2820_rewind_reg_64379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2751_V_read2821_phi_phi_fu_106460_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2751_V_read2821_phi_phi_fu_106460_p4 = ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_64397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2751_V_read2821_phi_phi_fu_106460_p4 = data_2751_V_read.read();
        } else {
            ap_phi_mux_data_2751_V_read2821_phi_phi_fu_106460_p4 = ap_phi_reg_pp0_iter0_data_2751_V_read2821_phi_reg_106456.read();
        }
    } else {
        ap_phi_mux_data_2751_V_read2821_phi_phi_fu_106460_p4 = ap_phi_reg_pp0_iter0_data_2751_V_read2821_phi_reg_106456.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_64397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_64397_p6 = data_2751_V_read2821_phi_reg_106456.read();
    } else {
        ap_phi_mux_data_2751_V_read2821_rewind_phi_fu_64397_p6 = data_2751_V_read2821_rewind_reg_64393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2752_V_read2822_phi_phi_fu_106473_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2752_V_read2822_phi_phi_fu_106473_p4 = ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_64411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2752_V_read2822_phi_phi_fu_106473_p4 = data_2752_V_read.read();
        } else {
            ap_phi_mux_data_2752_V_read2822_phi_phi_fu_106473_p4 = ap_phi_reg_pp0_iter0_data_2752_V_read2822_phi_reg_106469.read();
        }
    } else {
        ap_phi_mux_data_2752_V_read2822_phi_phi_fu_106473_p4 = ap_phi_reg_pp0_iter0_data_2752_V_read2822_phi_reg_106469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_64411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_64411_p6 = data_2752_V_read2822_phi_reg_106469.read();
    } else {
        ap_phi_mux_data_2752_V_read2822_rewind_phi_fu_64411_p6 = data_2752_V_read2822_rewind_reg_64407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2753_V_read2823_phi_phi_fu_106486_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2753_V_read2823_phi_phi_fu_106486_p4 = ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_64425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2753_V_read2823_phi_phi_fu_106486_p4 = data_2753_V_read.read();
        } else {
            ap_phi_mux_data_2753_V_read2823_phi_phi_fu_106486_p4 = ap_phi_reg_pp0_iter0_data_2753_V_read2823_phi_reg_106482.read();
        }
    } else {
        ap_phi_mux_data_2753_V_read2823_phi_phi_fu_106486_p4 = ap_phi_reg_pp0_iter0_data_2753_V_read2823_phi_reg_106482.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_64425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_64425_p6 = data_2753_V_read2823_phi_reg_106482.read();
    } else {
        ap_phi_mux_data_2753_V_read2823_rewind_phi_fu_64425_p6 = data_2753_V_read2823_rewind_reg_64421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2754_V_read2824_phi_phi_fu_106499_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2754_V_read2824_phi_phi_fu_106499_p4 = ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_64439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2754_V_read2824_phi_phi_fu_106499_p4 = data_2754_V_read.read();
        } else {
            ap_phi_mux_data_2754_V_read2824_phi_phi_fu_106499_p4 = ap_phi_reg_pp0_iter0_data_2754_V_read2824_phi_reg_106495.read();
        }
    } else {
        ap_phi_mux_data_2754_V_read2824_phi_phi_fu_106499_p4 = ap_phi_reg_pp0_iter0_data_2754_V_read2824_phi_reg_106495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_64439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_64439_p6 = data_2754_V_read2824_phi_reg_106495.read();
    } else {
        ap_phi_mux_data_2754_V_read2824_rewind_phi_fu_64439_p6 = data_2754_V_read2824_rewind_reg_64435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2755_V_read2825_phi_phi_fu_106512_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2755_V_read2825_phi_phi_fu_106512_p4 = ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_64453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2755_V_read2825_phi_phi_fu_106512_p4 = data_2755_V_read.read();
        } else {
            ap_phi_mux_data_2755_V_read2825_phi_phi_fu_106512_p4 = ap_phi_reg_pp0_iter0_data_2755_V_read2825_phi_reg_106508.read();
        }
    } else {
        ap_phi_mux_data_2755_V_read2825_phi_phi_fu_106512_p4 = ap_phi_reg_pp0_iter0_data_2755_V_read2825_phi_reg_106508.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_64453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_64453_p6 = data_2755_V_read2825_phi_reg_106508.read();
    } else {
        ap_phi_mux_data_2755_V_read2825_rewind_phi_fu_64453_p6 = data_2755_V_read2825_rewind_reg_64449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2756_V_read2826_phi_phi_fu_106525_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2756_V_read2826_phi_phi_fu_106525_p4 = ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_64467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2756_V_read2826_phi_phi_fu_106525_p4 = data_2756_V_read.read();
        } else {
            ap_phi_mux_data_2756_V_read2826_phi_phi_fu_106525_p4 = ap_phi_reg_pp0_iter0_data_2756_V_read2826_phi_reg_106521.read();
        }
    } else {
        ap_phi_mux_data_2756_V_read2826_phi_phi_fu_106525_p4 = ap_phi_reg_pp0_iter0_data_2756_V_read2826_phi_reg_106521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_64467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_64467_p6 = data_2756_V_read2826_phi_reg_106521.read();
    } else {
        ap_phi_mux_data_2756_V_read2826_rewind_phi_fu_64467_p6 = data_2756_V_read2826_rewind_reg_64463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2757_V_read2827_phi_phi_fu_106538_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2757_V_read2827_phi_phi_fu_106538_p4 = ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_64481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2757_V_read2827_phi_phi_fu_106538_p4 = data_2757_V_read.read();
        } else {
            ap_phi_mux_data_2757_V_read2827_phi_phi_fu_106538_p4 = ap_phi_reg_pp0_iter0_data_2757_V_read2827_phi_reg_106534.read();
        }
    } else {
        ap_phi_mux_data_2757_V_read2827_phi_phi_fu_106538_p4 = ap_phi_reg_pp0_iter0_data_2757_V_read2827_phi_reg_106534.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_64481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_64481_p6 = data_2757_V_read2827_phi_reg_106534.read();
    } else {
        ap_phi_mux_data_2757_V_read2827_rewind_phi_fu_64481_p6 = data_2757_V_read2827_rewind_reg_64477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2758_V_read2828_phi_phi_fu_106551_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2758_V_read2828_phi_phi_fu_106551_p4 = ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_64495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2758_V_read2828_phi_phi_fu_106551_p4 = data_2758_V_read.read();
        } else {
            ap_phi_mux_data_2758_V_read2828_phi_phi_fu_106551_p4 = ap_phi_reg_pp0_iter0_data_2758_V_read2828_phi_reg_106547.read();
        }
    } else {
        ap_phi_mux_data_2758_V_read2828_phi_phi_fu_106551_p4 = ap_phi_reg_pp0_iter0_data_2758_V_read2828_phi_reg_106547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_64495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_64495_p6 = data_2758_V_read2828_phi_reg_106547.read();
    } else {
        ap_phi_mux_data_2758_V_read2828_rewind_phi_fu_64495_p6 = data_2758_V_read2828_rewind_reg_64491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2759_V_read2829_phi_phi_fu_106564_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2759_V_read2829_phi_phi_fu_106564_p4 = ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_64509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2759_V_read2829_phi_phi_fu_106564_p4 = data_2759_V_read.read();
        } else {
            ap_phi_mux_data_2759_V_read2829_phi_phi_fu_106564_p4 = ap_phi_reg_pp0_iter0_data_2759_V_read2829_phi_reg_106560.read();
        }
    } else {
        ap_phi_mux_data_2759_V_read2829_phi_phi_fu_106564_p4 = ap_phi_reg_pp0_iter0_data_2759_V_read2829_phi_reg_106560.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_64509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_64509_p6 = data_2759_V_read2829_phi_reg_106560.read();
    } else {
        ap_phi_mux_data_2759_V_read2829_rewind_phi_fu_64509_p6 = data_2759_V_read2829_rewind_reg_64505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_275_V_read345_phi_phi_fu_74272_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_275_V_read345_phi_phi_fu_74272_p4 = ap_phi_mux_data_275_V_read345_rewind_phi_fu_29733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_275_V_read345_phi_phi_fu_74272_p4 = data_275_V_read.read();
        } else {
            ap_phi_mux_data_275_V_read345_phi_phi_fu_74272_p4 = ap_phi_reg_pp0_iter0_data_275_V_read345_phi_reg_74268.read();
        }
    } else {
        ap_phi_mux_data_275_V_read345_phi_phi_fu_74272_p4 = ap_phi_reg_pp0_iter0_data_275_V_read345_phi_reg_74268.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_275_V_read345_rewind_phi_fu_29733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_275_V_read345_rewind_phi_fu_29733_p6 = data_275_V_read345_phi_reg_74268.read();
    } else {
        ap_phi_mux_data_275_V_read345_rewind_phi_fu_29733_p6 = data_275_V_read345_rewind_reg_29729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2760_V_read2830_phi_phi_fu_106577_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2760_V_read2830_phi_phi_fu_106577_p4 = ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_64523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2760_V_read2830_phi_phi_fu_106577_p4 = data_2760_V_read.read();
        } else {
            ap_phi_mux_data_2760_V_read2830_phi_phi_fu_106577_p4 = ap_phi_reg_pp0_iter0_data_2760_V_read2830_phi_reg_106573.read();
        }
    } else {
        ap_phi_mux_data_2760_V_read2830_phi_phi_fu_106577_p4 = ap_phi_reg_pp0_iter0_data_2760_V_read2830_phi_reg_106573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_64523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_64523_p6 = data_2760_V_read2830_phi_reg_106573.read();
    } else {
        ap_phi_mux_data_2760_V_read2830_rewind_phi_fu_64523_p6 = data_2760_V_read2830_rewind_reg_64519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2761_V_read2831_phi_phi_fu_106590_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2761_V_read2831_phi_phi_fu_106590_p4 = ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_64537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2761_V_read2831_phi_phi_fu_106590_p4 = data_2761_V_read.read();
        } else {
            ap_phi_mux_data_2761_V_read2831_phi_phi_fu_106590_p4 = ap_phi_reg_pp0_iter0_data_2761_V_read2831_phi_reg_106586.read();
        }
    } else {
        ap_phi_mux_data_2761_V_read2831_phi_phi_fu_106590_p4 = ap_phi_reg_pp0_iter0_data_2761_V_read2831_phi_reg_106586.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_64537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_64537_p6 = data_2761_V_read2831_phi_reg_106586.read();
    } else {
        ap_phi_mux_data_2761_V_read2831_rewind_phi_fu_64537_p6 = data_2761_V_read2831_rewind_reg_64533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2762_V_read2832_phi_phi_fu_106603_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2762_V_read2832_phi_phi_fu_106603_p4 = ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_64551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2762_V_read2832_phi_phi_fu_106603_p4 = data_2762_V_read.read();
        } else {
            ap_phi_mux_data_2762_V_read2832_phi_phi_fu_106603_p4 = ap_phi_reg_pp0_iter0_data_2762_V_read2832_phi_reg_106599.read();
        }
    } else {
        ap_phi_mux_data_2762_V_read2832_phi_phi_fu_106603_p4 = ap_phi_reg_pp0_iter0_data_2762_V_read2832_phi_reg_106599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_64551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_64551_p6 = data_2762_V_read2832_phi_reg_106599.read();
    } else {
        ap_phi_mux_data_2762_V_read2832_rewind_phi_fu_64551_p6 = data_2762_V_read2832_rewind_reg_64547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2763_V_read2833_phi_phi_fu_106616_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2763_V_read2833_phi_phi_fu_106616_p4 = ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_64565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2763_V_read2833_phi_phi_fu_106616_p4 = data_2763_V_read.read();
        } else {
            ap_phi_mux_data_2763_V_read2833_phi_phi_fu_106616_p4 = ap_phi_reg_pp0_iter0_data_2763_V_read2833_phi_reg_106612.read();
        }
    } else {
        ap_phi_mux_data_2763_V_read2833_phi_phi_fu_106616_p4 = ap_phi_reg_pp0_iter0_data_2763_V_read2833_phi_reg_106612.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_64565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_64565_p6 = data_2763_V_read2833_phi_reg_106612.read();
    } else {
        ap_phi_mux_data_2763_V_read2833_rewind_phi_fu_64565_p6 = data_2763_V_read2833_rewind_reg_64561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2764_V_read2834_phi_phi_fu_106629_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2764_V_read2834_phi_phi_fu_106629_p4 = ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_64579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2764_V_read2834_phi_phi_fu_106629_p4 = data_2764_V_read.read();
        } else {
            ap_phi_mux_data_2764_V_read2834_phi_phi_fu_106629_p4 = ap_phi_reg_pp0_iter0_data_2764_V_read2834_phi_reg_106625.read();
        }
    } else {
        ap_phi_mux_data_2764_V_read2834_phi_phi_fu_106629_p4 = ap_phi_reg_pp0_iter0_data_2764_V_read2834_phi_reg_106625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_64579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_64579_p6 = data_2764_V_read2834_phi_reg_106625.read();
    } else {
        ap_phi_mux_data_2764_V_read2834_rewind_phi_fu_64579_p6 = data_2764_V_read2834_rewind_reg_64575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2765_V_read2835_phi_phi_fu_106642_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2765_V_read2835_phi_phi_fu_106642_p4 = ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_64593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2765_V_read2835_phi_phi_fu_106642_p4 = data_2765_V_read.read();
        } else {
            ap_phi_mux_data_2765_V_read2835_phi_phi_fu_106642_p4 = ap_phi_reg_pp0_iter0_data_2765_V_read2835_phi_reg_106638.read();
        }
    } else {
        ap_phi_mux_data_2765_V_read2835_phi_phi_fu_106642_p4 = ap_phi_reg_pp0_iter0_data_2765_V_read2835_phi_reg_106638.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_64593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_64593_p6 = data_2765_V_read2835_phi_reg_106638.read();
    } else {
        ap_phi_mux_data_2765_V_read2835_rewind_phi_fu_64593_p6 = data_2765_V_read2835_rewind_reg_64589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2766_V_read2836_phi_phi_fu_106655_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2766_V_read2836_phi_phi_fu_106655_p4 = ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_64607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2766_V_read2836_phi_phi_fu_106655_p4 = data_2766_V_read.read();
        } else {
            ap_phi_mux_data_2766_V_read2836_phi_phi_fu_106655_p4 = ap_phi_reg_pp0_iter0_data_2766_V_read2836_phi_reg_106651.read();
        }
    } else {
        ap_phi_mux_data_2766_V_read2836_phi_phi_fu_106655_p4 = ap_phi_reg_pp0_iter0_data_2766_V_read2836_phi_reg_106651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_64607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_64607_p6 = data_2766_V_read2836_phi_reg_106651.read();
    } else {
        ap_phi_mux_data_2766_V_read2836_rewind_phi_fu_64607_p6 = data_2766_V_read2836_rewind_reg_64603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2767_V_read2837_phi_phi_fu_106668_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2767_V_read2837_phi_phi_fu_106668_p4 = ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_64621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2767_V_read2837_phi_phi_fu_106668_p4 = data_2767_V_read.read();
        } else {
            ap_phi_mux_data_2767_V_read2837_phi_phi_fu_106668_p4 = ap_phi_reg_pp0_iter0_data_2767_V_read2837_phi_reg_106664.read();
        }
    } else {
        ap_phi_mux_data_2767_V_read2837_phi_phi_fu_106668_p4 = ap_phi_reg_pp0_iter0_data_2767_V_read2837_phi_reg_106664.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_64621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_64621_p6 = data_2767_V_read2837_phi_reg_106664.read();
    } else {
        ap_phi_mux_data_2767_V_read2837_rewind_phi_fu_64621_p6 = data_2767_V_read2837_rewind_reg_64617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2768_V_read2838_phi_phi_fu_106681_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2768_V_read2838_phi_phi_fu_106681_p4 = ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_64635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2768_V_read2838_phi_phi_fu_106681_p4 = data_2768_V_read.read();
        } else {
            ap_phi_mux_data_2768_V_read2838_phi_phi_fu_106681_p4 = ap_phi_reg_pp0_iter0_data_2768_V_read2838_phi_reg_106677.read();
        }
    } else {
        ap_phi_mux_data_2768_V_read2838_phi_phi_fu_106681_p4 = ap_phi_reg_pp0_iter0_data_2768_V_read2838_phi_reg_106677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_64635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_64635_p6 = data_2768_V_read2838_phi_reg_106677.read();
    } else {
        ap_phi_mux_data_2768_V_read2838_rewind_phi_fu_64635_p6 = data_2768_V_read2838_rewind_reg_64631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2769_V_read2839_phi_phi_fu_106694_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2769_V_read2839_phi_phi_fu_106694_p4 = ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_64649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2769_V_read2839_phi_phi_fu_106694_p4 = data_2769_V_read.read();
        } else {
            ap_phi_mux_data_2769_V_read2839_phi_phi_fu_106694_p4 = ap_phi_reg_pp0_iter0_data_2769_V_read2839_phi_reg_106690.read();
        }
    } else {
        ap_phi_mux_data_2769_V_read2839_phi_phi_fu_106694_p4 = ap_phi_reg_pp0_iter0_data_2769_V_read2839_phi_reg_106690.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_64649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_64649_p6 = data_2769_V_read2839_phi_reg_106690.read();
    } else {
        ap_phi_mux_data_2769_V_read2839_rewind_phi_fu_64649_p6 = data_2769_V_read2839_rewind_reg_64645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_276_V_read346_phi_phi_fu_74285_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_276_V_read346_phi_phi_fu_74285_p4 = ap_phi_mux_data_276_V_read346_rewind_phi_fu_29747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_276_V_read346_phi_phi_fu_74285_p4 = data_276_V_read.read();
        } else {
            ap_phi_mux_data_276_V_read346_phi_phi_fu_74285_p4 = ap_phi_reg_pp0_iter0_data_276_V_read346_phi_reg_74281.read();
        }
    } else {
        ap_phi_mux_data_276_V_read346_phi_phi_fu_74285_p4 = ap_phi_reg_pp0_iter0_data_276_V_read346_phi_reg_74281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_276_V_read346_rewind_phi_fu_29747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_276_V_read346_rewind_phi_fu_29747_p6 = data_276_V_read346_phi_reg_74281.read();
    } else {
        ap_phi_mux_data_276_V_read346_rewind_phi_fu_29747_p6 = data_276_V_read346_rewind_reg_29743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2770_V_read2840_phi_phi_fu_106707_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2770_V_read2840_phi_phi_fu_106707_p4 = ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_64663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2770_V_read2840_phi_phi_fu_106707_p4 = data_2770_V_read.read();
        } else {
            ap_phi_mux_data_2770_V_read2840_phi_phi_fu_106707_p4 = ap_phi_reg_pp0_iter0_data_2770_V_read2840_phi_reg_106703.read();
        }
    } else {
        ap_phi_mux_data_2770_V_read2840_phi_phi_fu_106707_p4 = ap_phi_reg_pp0_iter0_data_2770_V_read2840_phi_reg_106703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_64663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_64663_p6 = data_2770_V_read2840_phi_reg_106703.read();
    } else {
        ap_phi_mux_data_2770_V_read2840_rewind_phi_fu_64663_p6 = data_2770_V_read2840_rewind_reg_64659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2771_V_read2841_phi_phi_fu_106720_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2771_V_read2841_phi_phi_fu_106720_p4 = ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_64677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2771_V_read2841_phi_phi_fu_106720_p4 = data_2771_V_read.read();
        } else {
            ap_phi_mux_data_2771_V_read2841_phi_phi_fu_106720_p4 = ap_phi_reg_pp0_iter0_data_2771_V_read2841_phi_reg_106716.read();
        }
    } else {
        ap_phi_mux_data_2771_V_read2841_phi_phi_fu_106720_p4 = ap_phi_reg_pp0_iter0_data_2771_V_read2841_phi_reg_106716.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_64677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_64677_p6 = data_2771_V_read2841_phi_reg_106716.read();
    } else {
        ap_phi_mux_data_2771_V_read2841_rewind_phi_fu_64677_p6 = data_2771_V_read2841_rewind_reg_64673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2772_V_read2842_phi_phi_fu_106733_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2772_V_read2842_phi_phi_fu_106733_p4 = ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_64691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2772_V_read2842_phi_phi_fu_106733_p4 = data_2772_V_read.read();
        } else {
            ap_phi_mux_data_2772_V_read2842_phi_phi_fu_106733_p4 = ap_phi_reg_pp0_iter0_data_2772_V_read2842_phi_reg_106729.read();
        }
    } else {
        ap_phi_mux_data_2772_V_read2842_phi_phi_fu_106733_p4 = ap_phi_reg_pp0_iter0_data_2772_V_read2842_phi_reg_106729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_64691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_64691_p6 = data_2772_V_read2842_phi_reg_106729.read();
    } else {
        ap_phi_mux_data_2772_V_read2842_rewind_phi_fu_64691_p6 = data_2772_V_read2842_rewind_reg_64687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2773_V_read2843_phi_phi_fu_106746_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2773_V_read2843_phi_phi_fu_106746_p4 = ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_64705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2773_V_read2843_phi_phi_fu_106746_p4 = data_2773_V_read.read();
        } else {
            ap_phi_mux_data_2773_V_read2843_phi_phi_fu_106746_p4 = ap_phi_reg_pp0_iter0_data_2773_V_read2843_phi_reg_106742.read();
        }
    } else {
        ap_phi_mux_data_2773_V_read2843_phi_phi_fu_106746_p4 = ap_phi_reg_pp0_iter0_data_2773_V_read2843_phi_reg_106742.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_64705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_64705_p6 = data_2773_V_read2843_phi_reg_106742.read();
    } else {
        ap_phi_mux_data_2773_V_read2843_rewind_phi_fu_64705_p6 = data_2773_V_read2843_rewind_reg_64701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2774_V_read2844_phi_phi_fu_106759_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2774_V_read2844_phi_phi_fu_106759_p4 = ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_64719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2774_V_read2844_phi_phi_fu_106759_p4 = data_2774_V_read.read();
        } else {
            ap_phi_mux_data_2774_V_read2844_phi_phi_fu_106759_p4 = ap_phi_reg_pp0_iter0_data_2774_V_read2844_phi_reg_106755.read();
        }
    } else {
        ap_phi_mux_data_2774_V_read2844_phi_phi_fu_106759_p4 = ap_phi_reg_pp0_iter0_data_2774_V_read2844_phi_reg_106755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_64719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_64719_p6 = data_2774_V_read2844_phi_reg_106755.read();
    } else {
        ap_phi_mux_data_2774_V_read2844_rewind_phi_fu_64719_p6 = data_2774_V_read2844_rewind_reg_64715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2775_V_read2845_phi_phi_fu_106772_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2775_V_read2845_phi_phi_fu_106772_p4 = ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_64733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2775_V_read2845_phi_phi_fu_106772_p4 = data_2775_V_read.read();
        } else {
            ap_phi_mux_data_2775_V_read2845_phi_phi_fu_106772_p4 = ap_phi_reg_pp0_iter0_data_2775_V_read2845_phi_reg_106768.read();
        }
    } else {
        ap_phi_mux_data_2775_V_read2845_phi_phi_fu_106772_p4 = ap_phi_reg_pp0_iter0_data_2775_V_read2845_phi_reg_106768.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_64733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_64733_p6 = data_2775_V_read2845_phi_reg_106768.read();
    } else {
        ap_phi_mux_data_2775_V_read2845_rewind_phi_fu_64733_p6 = data_2775_V_read2845_rewind_reg_64729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2776_V_read2846_phi_phi_fu_106785_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2776_V_read2846_phi_phi_fu_106785_p4 = ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_64747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2776_V_read2846_phi_phi_fu_106785_p4 = data_2776_V_read.read();
        } else {
            ap_phi_mux_data_2776_V_read2846_phi_phi_fu_106785_p4 = ap_phi_reg_pp0_iter0_data_2776_V_read2846_phi_reg_106781.read();
        }
    } else {
        ap_phi_mux_data_2776_V_read2846_phi_phi_fu_106785_p4 = ap_phi_reg_pp0_iter0_data_2776_V_read2846_phi_reg_106781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_64747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_64747_p6 = data_2776_V_read2846_phi_reg_106781.read();
    } else {
        ap_phi_mux_data_2776_V_read2846_rewind_phi_fu_64747_p6 = data_2776_V_read2846_rewind_reg_64743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2777_V_read2847_phi_phi_fu_106798_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2777_V_read2847_phi_phi_fu_106798_p4 = ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_64761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2777_V_read2847_phi_phi_fu_106798_p4 = data_2777_V_read.read();
        } else {
            ap_phi_mux_data_2777_V_read2847_phi_phi_fu_106798_p4 = ap_phi_reg_pp0_iter0_data_2777_V_read2847_phi_reg_106794.read();
        }
    } else {
        ap_phi_mux_data_2777_V_read2847_phi_phi_fu_106798_p4 = ap_phi_reg_pp0_iter0_data_2777_V_read2847_phi_reg_106794.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_64761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_64761_p6 = data_2777_V_read2847_phi_reg_106794.read();
    } else {
        ap_phi_mux_data_2777_V_read2847_rewind_phi_fu_64761_p6 = data_2777_V_read2847_rewind_reg_64757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2778_V_read2848_phi_phi_fu_106811_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2778_V_read2848_phi_phi_fu_106811_p4 = ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_64775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2778_V_read2848_phi_phi_fu_106811_p4 = data_2778_V_read.read();
        } else {
            ap_phi_mux_data_2778_V_read2848_phi_phi_fu_106811_p4 = ap_phi_reg_pp0_iter0_data_2778_V_read2848_phi_reg_106807.read();
        }
    } else {
        ap_phi_mux_data_2778_V_read2848_phi_phi_fu_106811_p4 = ap_phi_reg_pp0_iter0_data_2778_V_read2848_phi_reg_106807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_64775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_64775_p6 = data_2778_V_read2848_phi_reg_106807.read();
    } else {
        ap_phi_mux_data_2778_V_read2848_rewind_phi_fu_64775_p6 = data_2778_V_read2848_rewind_reg_64771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2779_V_read2849_phi_phi_fu_106824_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2779_V_read2849_phi_phi_fu_106824_p4 = ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_64789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2779_V_read2849_phi_phi_fu_106824_p4 = data_2779_V_read.read();
        } else {
            ap_phi_mux_data_2779_V_read2849_phi_phi_fu_106824_p4 = ap_phi_reg_pp0_iter0_data_2779_V_read2849_phi_reg_106820.read();
        }
    } else {
        ap_phi_mux_data_2779_V_read2849_phi_phi_fu_106824_p4 = ap_phi_reg_pp0_iter0_data_2779_V_read2849_phi_reg_106820.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_64789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_64789_p6 = data_2779_V_read2849_phi_reg_106820.read();
    } else {
        ap_phi_mux_data_2779_V_read2849_rewind_phi_fu_64789_p6 = data_2779_V_read2849_rewind_reg_64785.read();
    }
}

}

