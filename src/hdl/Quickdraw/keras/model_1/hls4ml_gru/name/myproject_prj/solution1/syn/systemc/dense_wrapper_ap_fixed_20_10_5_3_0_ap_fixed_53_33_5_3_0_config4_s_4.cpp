#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1429_V_read1499_phi_phi_fu_89274_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1429_V_read1499_phi_phi_fu_89274_p4 = ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_45889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1429_V_read1499_phi_phi_fu_89274_p4 = data_1429_V_read.read();
        } else {
            ap_phi_mux_data_1429_V_read1499_phi_phi_fu_89274_p4 = ap_phi_reg_pp0_iter0_data_1429_V_read1499_phi_reg_89270.read();
        }
    } else {
        ap_phi_mux_data_1429_V_read1499_phi_phi_fu_89274_p4 = ap_phi_reg_pp0_iter0_data_1429_V_read1499_phi_reg_89270.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_45889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_45889_p6 = data_1429_V_read1499_phi_reg_89270.read();
    } else {
        ap_phi_mux_data_1429_V_read1499_rewind_phi_fu_45889_p6 = data_1429_V_read1499_rewind_reg_45885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_142_V_read212_phi_phi_fu_72543_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_142_V_read212_phi_phi_fu_72543_p4 = ap_phi_mux_data_142_V_read212_rewind_phi_fu_27871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_142_V_read212_phi_phi_fu_72543_p4 = data_142_V_read.read();
        } else {
            ap_phi_mux_data_142_V_read212_phi_phi_fu_72543_p4 = ap_phi_reg_pp0_iter0_data_142_V_read212_phi_reg_72539.read();
        }
    } else {
        ap_phi_mux_data_142_V_read212_phi_phi_fu_72543_p4 = ap_phi_reg_pp0_iter0_data_142_V_read212_phi_reg_72539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_142_V_read212_rewind_phi_fu_27871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_142_V_read212_rewind_phi_fu_27871_p6 = data_142_V_read212_phi_reg_72539.read();
    } else {
        ap_phi_mux_data_142_V_read212_rewind_phi_fu_27871_p6 = data_142_V_read212_rewind_reg_27867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1430_V_read1500_phi_phi_fu_89287_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1430_V_read1500_phi_phi_fu_89287_p4 = ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_45903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1430_V_read1500_phi_phi_fu_89287_p4 = data_1430_V_read.read();
        } else {
            ap_phi_mux_data_1430_V_read1500_phi_phi_fu_89287_p4 = ap_phi_reg_pp0_iter0_data_1430_V_read1500_phi_reg_89283.read();
        }
    } else {
        ap_phi_mux_data_1430_V_read1500_phi_phi_fu_89287_p4 = ap_phi_reg_pp0_iter0_data_1430_V_read1500_phi_reg_89283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_45903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_45903_p6 = data_1430_V_read1500_phi_reg_89283.read();
    } else {
        ap_phi_mux_data_1430_V_read1500_rewind_phi_fu_45903_p6 = data_1430_V_read1500_rewind_reg_45899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1431_V_read1501_phi_phi_fu_89300_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1431_V_read1501_phi_phi_fu_89300_p4 = ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_45917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1431_V_read1501_phi_phi_fu_89300_p4 = data_1431_V_read.read();
        } else {
            ap_phi_mux_data_1431_V_read1501_phi_phi_fu_89300_p4 = ap_phi_reg_pp0_iter0_data_1431_V_read1501_phi_reg_89296.read();
        }
    } else {
        ap_phi_mux_data_1431_V_read1501_phi_phi_fu_89300_p4 = ap_phi_reg_pp0_iter0_data_1431_V_read1501_phi_reg_89296.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_45917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_45917_p6 = data_1431_V_read1501_phi_reg_89296.read();
    } else {
        ap_phi_mux_data_1431_V_read1501_rewind_phi_fu_45917_p6 = data_1431_V_read1501_rewind_reg_45913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1432_V_read1502_phi_phi_fu_89313_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1432_V_read1502_phi_phi_fu_89313_p4 = ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_45931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1432_V_read1502_phi_phi_fu_89313_p4 = data_1432_V_read.read();
        } else {
            ap_phi_mux_data_1432_V_read1502_phi_phi_fu_89313_p4 = ap_phi_reg_pp0_iter0_data_1432_V_read1502_phi_reg_89309.read();
        }
    } else {
        ap_phi_mux_data_1432_V_read1502_phi_phi_fu_89313_p4 = ap_phi_reg_pp0_iter0_data_1432_V_read1502_phi_reg_89309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_45931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_45931_p6 = data_1432_V_read1502_phi_reg_89309.read();
    } else {
        ap_phi_mux_data_1432_V_read1502_rewind_phi_fu_45931_p6 = data_1432_V_read1502_rewind_reg_45927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1433_V_read1503_phi_phi_fu_89326_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1433_V_read1503_phi_phi_fu_89326_p4 = ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_45945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1433_V_read1503_phi_phi_fu_89326_p4 = data_1433_V_read.read();
        } else {
            ap_phi_mux_data_1433_V_read1503_phi_phi_fu_89326_p4 = ap_phi_reg_pp0_iter0_data_1433_V_read1503_phi_reg_89322.read();
        }
    } else {
        ap_phi_mux_data_1433_V_read1503_phi_phi_fu_89326_p4 = ap_phi_reg_pp0_iter0_data_1433_V_read1503_phi_reg_89322.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_45945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_45945_p6 = data_1433_V_read1503_phi_reg_89322.read();
    } else {
        ap_phi_mux_data_1433_V_read1503_rewind_phi_fu_45945_p6 = data_1433_V_read1503_rewind_reg_45941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1434_V_read1504_phi_phi_fu_89339_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1434_V_read1504_phi_phi_fu_89339_p4 = ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_45959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1434_V_read1504_phi_phi_fu_89339_p4 = data_1434_V_read.read();
        } else {
            ap_phi_mux_data_1434_V_read1504_phi_phi_fu_89339_p4 = ap_phi_reg_pp0_iter0_data_1434_V_read1504_phi_reg_89335.read();
        }
    } else {
        ap_phi_mux_data_1434_V_read1504_phi_phi_fu_89339_p4 = ap_phi_reg_pp0_iter0_data_1434_V_read1504_phi_reg_89335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_45959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_45959_p6 = data_1434_V_read1504_phi_reg_89335.read();
    } else {
        ap_phi_mux_data_1434_V_read1504_rewind_phi_fu_45959_p6 = data_1434_V_read1504_rewind_reg_45955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1435_V_read1505_phi_phi_fu_89352_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1435_V_read1505_phi_phi_fu_89352_p4 = ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_45973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1435_V_read1505_phi_phi_fu_89352_p4 = data_1435_V_read.read();
        } else {
            ap_phi_mux_data_1435_V_read1505_phi_phi_fu_89352_p4 = ap_phi_reg_pp0_iter0_data_1435_V_read1505_phi_reg_89348.read();
        }
    } else {
        ap_phi_mux_data_1435_V_read1505_phi_phi_fu_89352_p4 = ap_phi_reg_pp0_iter0_data_1435_V_read1505_phi_reg_89348.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_45973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_45973_p6 = data_1435_V_read1505_phi_reg_89348.read();
    } else {
        ap_phi_mux_data_1435_V_read1505_rewind_phi_fu_45973_p6 = data_1435_V_read1505_rewind_reg_45969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1436_V_read1506_phi_phi_fu_89365_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1436_V_read1506_phi_phi_fu_89365_p4 = ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_45987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1436_V_read1506_phi_phi_fu_89365_p4 = data_1436_V_read.read();
        } else {
            ap_phi_mux_data_1436_V_read1506_phi_phi_fu_89365_p4 = ap_phi_reg_pp0_iter0_data_1436_V_read1506_phi_reg_89361.read();
        }
    } else {
        ap_phi_mux_data_1436_V_read1506_phi_phi_fu_89365_p4 = ap_phi_reg_pp0_iter0_data_1436_V_read1506_phi_reg_89361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_45987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_45987_p6 = data_1436_V_read1506_phi_reg_89361.read();
    } else {
        ap_phi_mux_data_1436_V_read1506_rewind_phi_fu_45987_p6 = data_1436_V_read1506_rewind_reg_45983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1437_V_read1507_phi_phi_fu_89378_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1437_V_read1507_phi_phi_fu_89378_p4 = ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_46001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1437_V_read1507_phi_phi_fu_89378_p4 = data_1437_V_read.read();
        } else {
            ap_phi_mux_data_1437_V_read1507_phi_phi_fu_89378_p4 = ap_phi_reg_pp0_iter0_data_1437_V_read1507_phi_reg_89374.read();
        }
    } else {
        ap_phi_mux_data_1437_V_read1507_phi_phi_fu_89378_p4 = ap_phi_reg_pp0_iter0_data_1437_V_read1507_phi_reg_89374.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_46001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_46001_p6 = data_1437_V_read1507_phi_reg_89374.read();
    } else {
        ap_phi_mux_data_1437_V_read1507_rewind_phi_fu_46001_p6 = data_1437_V_read1507_rewind_reg_45997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1438_V_read1508_phi_phi_fu_89391_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1438_V_read1508_phi_phi_fu_89391_p4 = ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_46015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1438_V_read1508_phi_phi_fu_89391_p4 = data_1438_V_read.read();
        } else {
            ap_phi_mux_data_1438_V_read1508_phi_phi_fu_89391_p4 = ap_phi_reg_pp0_iter0_data_1438_V_read1508_phi_reg_89387.read();
        }
    } else {
        ap_phi_mux_data_1438_V_read1508_phi_phi_fu_89391_p4 = ap_phi_reg_pp0_iter0_data_1438_V_read1508_phi_reg_89387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_46015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_46015_p6 = data_1438_V_read1508_phi_reg_89387.read();
    } else {
        ap_phi_mux_data_1438_V_read1508_rewind_phi_fu_46015_p6 = data_1438_V_read1508_rewind_reg_46011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1439_V_read1509_phi_phi_fu_89404_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1439_V_read1509_phi_phi_fu_89404_p4 = ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_46029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1439_V_read1509_phi_phi_fu_89404_p4 = data_1439_V_read.read();
        } else {
            ap_phi_mux_data_1439_V_read1509_phi_phi_fu_89404_p4 = ap_phi_reg_pp0_iter0_data_1439_V_read1509_phi_reg_89400.read();
        }
    } else {
        ap_phi_mux_data_1439_V_read1509_phi_phi_fu_89404_p4 = ap_phi_reg_pp0_iter0_data_1439_V_read1509_phi_reg_89400.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_46029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_46029_p6 = data_1439_V_read1509_phi_reg_89400.read();
    } else {
        ap_phi_mux_data_1439_V_read1509_rewind_phi_fu_46029_p6 = data_1439_V_read1509_rewind_reg_46025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_143_V_read213_phi_phi_fu_72556_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_143_V_read213_phi_phi_fu_72556_p4 = ap_phi_mux_data_143_V_read213_rewind_phi_fu_27885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_143_V_read213_phi_phi_fu_72556_p4 = data_143_V_read.read();
        } else {
            ap_phi_mux_data_143_V_read213_phi_phi_fu_72556_p4 = ap_phi_reg_pp0_iter0_data_143_V_read213_phi_reg_72552.read();
        }
    } else {
        ap_phi_mux_data_143_V_read213_phi_phi_fu_72556_p4 = ap_phi_reg_pp0_iter0_data_143_V_read213_phi_reg_72552.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_143_V_read213_rewind_phi_fu_27885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_143_V_read213_rewind_phi_fu_27885_p6 = data_143_V_read213_phi_reg_72552.read();
    } else {
        ap_phi_mux_data_143_V_read213_rewind_phi_fu_27885_p6 = data_143_V_read213_rewind_reg_27881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1440_V_read1510_phi_phi_fu_89417_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1440_V_read1510_phi_phi_fu_89417_p4 = ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_46043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1440_V_read1510_phi_phi_fu_89417_p4 = data_1440_V_read.read();
        } else {
            ap_phi_mux_data_1440_V_read1510_phi_phi_fu_89417_p4 = ap_phi_reg_pp0_iter0_data_1440_V_read1510_phi_reg_89413.read();
        }
    } else {
        ap_phi_mux_data_1440_V_read1510_phi_phi_fu_89417_p4 = ap_phi_reg_pp0_iter0_data_1440_V_read1510_phi_reg_89413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_46043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_46043_p6 = data_1440_V_read1510_phi_reg_89413.read();
    } else {
        ap_phi_mux_data_1440_V_read1510_rewind_phi_fu_46043_p6 = data_1440_V_read1510_rewind_reg_46039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1441_V_read1511_phi_phi_fu_89430_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1441_V_read1511_phi_phi_fu_89430_p4 = ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_46057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1441_V_read1511_phi_phi_fu_89430_p4 = data_1441_V_read.read();
        } else {
            ap_phi_mux_data_1441_V_read1511_phi_phi_fu_89430_p4 = ap_phi_reg_pp0_iter0_data_1441_V_read1511_phi_reg_89426.read();
        }
    } else {
        ap_phi_mux_data_1441_V_read1511_phi_phi_fu_89430_p4 = ap_phi_reg_pp0_iter0_data_1441_V_read1511_phi_reg_89426.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_46057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_46057_p6 = data_1441_V_read1511_phi_reg_89426.read();
    } else {
        ap_phi_mux_data_1441_V_read1511_rewind_phi_fu_46057_p6 = data_1441_V_read1511_rewind_reg_46053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1442_V_read1512_phi_phi_fu_89443_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1442_V_read1512_phi_phi_fu_89443_p4 = ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_46071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1442_V_read1512_phi_phi_fu_89443_p4 = data_1442_V_read.read();
        } else {
            ap_phi_mux_data_1442_V_read1512_phi_phi_fu_89443_p4 = ap_phi_reg_pp0_iter0_data_1442_V_read1512_phi_reg_89439.read();
        }
    } else {
        ap_phi_mux_data_1442_V_read1512_phi_phi_fu_89443_p4 = ap_phi_reg_pp0_iter0_data_1442_V_read1512_phi_reg_89439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_46071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_46071_p6 = data_1442_V_read1512_phi_reg_89439.read();
    } else {
        ap_phi_mux_data_1442_V_read1512_rewind_phi_fu_46071_p6 = data_1442_V_read1512_rewind_reg_46067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1443_V_read1513_phi_phi_fu_89456_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1443_V_read1513_phi_phi_fu_89456_p4 = ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_46085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1443_V_read1513_phi_phi_fu_89456_p4 = data_1443_V_read.read();
        } else {
            ap_phi_mux_data_1443_V_read1513_phi_phi_fu_89456_p4 = ap_phi_reg_pp0_iter0_data_1443_V_read1513_phi_reg_89452.read();
        }
    } else {
        ap_phi_mux_data_1443_V_read1513_phi_phi_fu_89456_p4 = ap_phi_reg_pp0_iter0_data_1443_V_read1513_phi_reg_89452.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_46085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_46085_p6 = data_1443_V_read1513_phi_reg_89452.read();
    } else {
        ap_phi_mux_data_1443_V_read1513_rewind_phi_fu_46085_p6 = data_1443_V_read1513_rewind_reg_46081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1444_V_read1514_phi_phi_fu_89469_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1444_V_read1514_phi_phi_fu_89469_p4 = ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_46099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1444_V_read1514_phi_phi_fu_89469_p4 = data_1444_V_read.read();
        } else {
            ap_phi_mux_data_1444_V_read1514_phi_phi_fu_89469_p4 = ap_phi_reg_pp0_iter0_data_1444_V_read1514_phi_reg_89465.read();
        }
    } else {
        ap_phi_mux_data_1444_V_read1514_phi_phi_fu_89469_p4 = ap_phi_reg_pp0_iter0_data_1444_V_read1514_phi_reg_89465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_46099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_46099_p6 = data_1444_V_read1514_phi_reg_89465.read();
    } else {
        ap_phi_mux_data_1444_V_read1514_rewind_phi_fu_46099_p6 = data_1444_V_read1514_rewind_reg_46095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1445_V_read1515_phi_phi_fu_89482_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1445_V_read1515_phi_phi_fu_89482_p4 = ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_46113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1445_V_read1515_phi_phi_fu_89482_p4 = data_1445_V_read.read();
        } else {
            ap_phi_mux_data_1445_V_read1515_phi_phi_fu_89482_p4 = ap_phi_reg_pp0_iter0_data_1445_V_read1515_phi_reg_89478.read();
        }
    } else {
        ap_phi_mux_data_1445_V_read1515_phi_phi_fu_89482_p4 = ap_phi_reg_pp0_iter0_data_1445_V_read1515_phi_reg_89478.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_46113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_46113_p6 = data_1445_V_read1515_phi_reg_89478.read();
    } else {
        ap_phi_mux_data_1445_V_read1515_rewind_phi_fu_46113_p6 = data_1445_V_read1515_rewind_reg_46109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1446_V_read1516_phi_phi_fu_89495_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1446_V_read1516_phi_phi_fu_89495_p4 = ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_46127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1446_V_read1516_phi_phi_fu_89495_p4 = data_1446_V_read.read();
        } else {
            ap_phi_mux_data_1446_V_read1516_phi_phi_fu_89495_p4 = ap_phi_reg_pp0_iter0_data_1446_V_read1516_phi_reg_89491.read();
        }
    } else {
        ap_phi_mux_data_1446_V_read1516_phi_phi_fu_89495_p4 = ap_phi_reg_pp0_iter0_data_1446_V_read1516_phi_reg_89491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_46127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_46127_p6 = data_1446_V_read1516_phi_reg_89491.read();
    } else {
        ap_phi_mux_data_1446_V_read1516_rewind_phi_fu_46127_p6 = data_1446_V_read1516_rewind_reg_46123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1447_V_read1517_phi_phi_fu_89508_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1447_V_read1517_phi_phi_fu_89508_p4 = ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_46141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1447_V_read1517_phi_phi_fu_89508_p4 = data_1447_V_read.read();
        } else {
            ap_phi_mux_data_1447_V_read1517_phi_phi_fu_89508_p4 = ap_phi_reg_pp0_iter0_data_1447_V_read1517_phi_reg_89504.read();
        }
    } else {
        ap_phi_mux_data_1447_V_read1517_phi_phi_fu_89508_p4 = ap_phi_reg_pp0_iter0_data_1447_V_read1517_phi_reg_89504.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_46141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_46141_p6 = data_1447_V_read1517_phi_reg_89504.read();
    } else {
        ap_phi_mux_data_1447_V_read1517_rewind_phi_fu_46141_p6 = data_1447_V_read1517_rewind_reg_46137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1448_V_read1518_phi_phi_fu_89521_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1448_V_read1518_phi_phi_fu_89521_p4 = ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_46155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1448_V_read1518_phi_phi_fu_89521_p4 = data_1448_V_read.read();
        } else {
            ap_phi_mux_data_1448_V_read1518_phi_phi_fu_89521_p4 = ap_phi_reg_pp0_iter0_data_1448_V_read1518_phi_reg_89517.read();
        }
    } else {
        ap_phi_mux_data_1448_V_read1518_phi_phi_fu_89521_p4 = ap_phi_reg_pp0_iter0_data_1448_V_read1518_phi_reg_89517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_46155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_46155_p6 = data_1448_V_read1518_phi_reg_89517.read();
    } else {
        ap_phi_mux_data_1448_V_read1518_rewind_phi_fu_46155_p6 = data_1448_V_read1518_rewind_reg_46151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1449_V_read1519_phi_phi_fu_89534_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1449_V_read1519_phi_phi_fu_89534_p4 = ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_46169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1449_V_read1519_phi_phi_fu_89534_p4 = data_1449_V_read.read();
        } else {
            ap_phi_mux_data_1449_V_read1519_phi_phi_fu_89534_p4 = ap_phi_reg_pp0_iter0_data_1449_V_read1519_phi_reg_89530.read();
        }
    } else {
        ap_phi_mux_data_1449_V_read1519_phi_phi_fu_89534_p4 = ap_phi_reg_pp0_iter0_data_1449_V_read1519_phi_reg_89530.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_46169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_46169_p6 = data_1449_V_read1519_phi_reg_89530.read();
    } else {
        ap_phi_mux_data_1449_V_read1519_rewind_phi_fu_46169_p6 = data_1449_V_read1519_rewind_reg_46165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_144_V_read214_phi_phi_fu_72569_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_144_V_read214_phi_phi_fu_72569_p4 = ap_phi_mux_data_144_V_read214_rewind_phi_fu_27899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_144_V_read214_phi_phi_fu_72569_p4 = data_144_V_read.read();
        } else {
            ap_phi_mux_data_144_V_read214_phi_phi_fu_72569_p4 = ap_phi_reg_pp0_iter0_data_144_V_read214_phi_reg_72565.read();
        }
    } else {
        ap_phi_mux_data_144_V_read214_phi_phi_fu_72569_p4 = ap_phi_reg_pp0_iter0_data_144_V_read214_phi_reg_72565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_144_V_read214_rewind_phi_fu_27899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_144_V_read214_rewind_phi_fu_27899_p6 = data_144_V_read214_phi_reg_72565.read();
    } else {
        ap_phi_mux_data_144_V_read214_rewind_phi_fu_27899_p6 = data_144_V_read214_rewind_reg_27895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1450_V_read1520_phi_phi_fu_89547_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1450_V_read1520_phi_phi_fu_89547_p4 = ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_46183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1450_V_read1520_phi_phi_fu_89547_p4 = data_1450_V_read.read();
        } else {
            ap_phi_mux_data_1450_V_read1520_phi_phi_fu_89547_p4 = ap_phi_reg_pp0_iter0_data_1450_V_read1520_phi_reg_89543.read();
        }
    } else {
        ap_phi_mux_data_1450_V_read1520_phi_phi_fu_89547_p4 = ap_phi_reg_pp0_iter0_data_1450_V_read1520_phi_reg_89543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_46183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_46183_p6 = data_1450_V_read1520_phi_reg_89543.read();
    } else {
        ap_phi_mux_data_1450_V_read1520_rewind_phi_fu_46183_p6 = data_1450_V_read1520_rewind_reg_46179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1451_V_read1521_phi_phi_fu_89560_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1451_V_read1521_phi_phi_fu_89560_p4 = ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_46197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1451_V_read1521_phi_phi_fu_89560_p4 = data_1451_V_read.read();
        } else {
            ap_phi_mux_data_1451_V_read1521_phi_phi_fu_89560_p4 = ap_phi_reg_pp0_iter0_data_1451_V_read1521_phi_reg_89556.read();
        }
    } else {
        ap_phi_mux_data_1451_V_read1521_phi_phi_fu_89560_p4 = ap_phi_reg_pp0_iter0_data_1451_V_read1521_phi_reg_89556.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_46197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_46197_p6 = data_1451_V_read1521_phi_reg_89556.read();
    } else {
        ap_phi_mux_data_1451_V_read1521_rewind_phi_fu_46197_p6 = data_1451_V_read1521_rewind_reg_46193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1452_V_read1522_phi_phi_fu_89573_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1452_V_read1522_phi_phi_fu_89573_p4 = ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_46211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1452_V_read1522_phi_phi_fu_89573_p4 = data_1452_V_read.read();
        } else {
            ap_phi_mux_data_1452_V_read1522_phi_phi_fu_89573_p4 = ap_phi_reg_pp0_iter0_data_1452_V_read1522_phi_reg_89569.read();
        }
    } else {
        ap_phi_mux_data_1452_V_read1522_phi_phi_fu_89573_p4 = ap_phi_reg_pp0_iter0_data_1452_V_read1522_phi_reg_89569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_46211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_46211_p6 = data_1452_V_read1522_phi_reg_89569.read();
    } else {
        ap_phi_mux_data_1452_V_read1522_rewind_phi_fu_46211_p6 = data_1452_V_read1522_rewind_reg_46207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1453_V_read1523_phi_phi_fu_89586_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1453_V_read1523_phi_phi_fu_89586_p4 = ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_46225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1453_V_read1523_phi_phi_fu_89586_p4 = data_1453_V_read.read();
        } else {
            ap_phi_mux_data_1453_V_read1523_phi_phi_fu_89586_p4 = ap_phi_reg_pp0_iter0_data_1453_V_read1523_phi_reg_89582.read();
        }
    } else {
        ap_phi_mux_data_1453_V_read1523_phi_phi_fu_89586_p4 = ap_phi_reg_pp0_iter0_data_1453_V_read1523_phi_reg_89582.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_46225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_46225_p6 = data_1453_V_read1523_phi_reg_89582.read();
    } else {
        ap_phi_mux_data_1453_V_read1523_rewind_phi_fu_46225_p6 = data_1453_V_read1523_rewind_reg_46221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1454_V_read1524_phi_phi_fu_89599_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1454_V_read1524_phi_phi_fu_89599_p4 = ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_46239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1454_V_read1524_phi_phi_fu_89599_p4 = data_1454_V_read.read();
        } else {
            ap_phi_mux_data_1454_V_read1524_phi_phi_fu_89599_p4 = ap_phi_reg_pp0_iter0_data_1454_V_read1524_phi_reg_89595.read();
        }
    } else {
        ap_phi_mux_data_1454_V_read1524_phi_phi_fu_89599_p4 = ap_phi_reg_pp0_iter0_data_1454_V_read1524_phi_reg_89595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_46239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_46239_p6 = data_1454_V_read1524_phi_reg_89595.read();
    } else {
        ap_phi_mux_data_1454_V_read1524_rewind_phi_fu_46239_p6 = data_1454_V_read1524_rewind_reg_46235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1455_V_read1525_phi_phi_fu_89612_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1455_V_read1525_phi_phi_fu_89612_p4 = ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_46253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1455_V_read1525_phi_phi_fu_89612_p4 = data_1455_V_read.read();
        } else {
            ap_phi_mux_data_1455_V_read1525_phi_phi_fu_89612_p4 = ap_phi_reg_pp0_iter0_data_1455_V_read1525_phi_reg_89608.read();
        }
    } else {
        ap_phi_mux_data_1455_V_read1525_phi_phi_fu_89612_p4 = ap_phi_reg_pp0_iter0_data_1455_V_read1525_phi_reg_89608.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_46253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_46253_p6 = data_1455_V_read1525_phi_reg_89608.read();
    } else {
        ap_phi_mux_data_1455_V_read1525_rewind_phi_fu_46253_p6 = data_1455_V_read1525_rewind_reg_46249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1456_V_read1526_phi_phi_fu_89625_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1456_V_read1526_phi_phi_fu_89625_p4 = ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_46267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1456_V_read1526_phi_phi_fu_89625_p4 = data_1456_V_read.read();
        } else {
            ap_phi_mux_data_1456_V_read1526_phi_phi_fu_89625_p4 = ap_phi_reg_pp0_iter0_data_1456_V_read1526_phi_reg_89621.read();
        }
    } else {
        ap_phi_mux_data_1456_V_read1526_phi_phi_fu_89625_p4 = ap_phi_reg_pp0_iter0_data_1456_V_read1526_phi_reg_89621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_46267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_46267_p6 = data_1456_V_read1526_phi_reg_89621.read();
    } else {
        ap_phi_mux_data_1456_V_read1526_rewind_phi_fu_46267_p6 = data_1456_V_read1526_rewind_reg_46263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1457_V_read1527_phi_phi_fu_89638_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1457_V_read1527_phi_phi_fu_89638_p4 = ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_46281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1457_V_read1527_phi_phi_fu_89638_p4 = data_1457_V_read.read();
        } else {
            ap_phi_mux_data_1457_V_read1527_phi_phi_fu_89638_p4 = ap_phi_reg_pp0_iter0_data_1457_V_read1527_phi_reg_89634.read();
        }
    } else {
        ap_phi_mux_data_1457_V_read1527_phi_phi_fu_89638_p4 = ap_phi_reg_pp0_iter0_data_1457_V_read1527_phi_reg_89634.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_46281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_46281_p6 = data_1457_V_read1527_phi_reg_89634.read();
    } else {
        ap_phi_mux_data_1457_V_read1527_rewind_phi_fu_46281_p6 = data_1457_V_read1527_rewind_reg_46277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1458_V_read1528_phi_phi_fu_89651_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1458_V_read1528_phi_phi_fu_89651_p4 = ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_46295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1458_V_read1528_phi_phi_fu_89651_p4 = data_1458_V_read.read();
        } else {
            ap_phi_mux_data_1458_V_read1528_phi_phi_fu_89651_p4 = ap_phi_reg_pp0_iter0_data_1458_V_read1528_phi_reg_89647.read();
        }
    } else {
        ap_phi_mux_data_1458_V_read1528_phi_phi_fu_89651_p4 = ap_phi_reg_pp0_iter0_data_1458_V_read1528_phi_reg_89647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_46295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_46295_p6 = data_1458_V_read1528_phi_reg_89647.read();
    } else {
        ap_phi_mux_data_1458_V_read1528_rewind_phi_fu_46295_p6 = data_1458_V_read1528_rewind_reg_46291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1459_V_read1529_phi_phi_fu_89664_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1459_V_read1529_phi_phi_fu_89664_p4 = ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_46309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1459_V_read1529_phi_phi_fu_89664_p4 = data_1459_V_read.read();
        } else {
            ap_phi_mux_data_1459_V_read1529_phi_phi_fu_89664_p4 = ap_phi_reg_pp0_iter0_data_1459_V_read1529_phi_reg_89660.read();
        }
    } else {
        ap_phi_mux_data_1459_V_read1529_phi_phi_fu_89664_p4 = ap_phi_reg_pp0_iter0_data_1459_V_read1529_phi_reg_89660.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_46309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_46309_p6 = data_1459_V_read1529_phi_reg_89660.read();
    } else {
        ap_phi_mux_data_1459_V_read1529_rewind_phi_fu_46309_p6 = data_1459_V_read1529_rewind_reg_46305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_145_V_read215_phi_phi_fu_72582_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_145_V_read215_phi_phi_fu_72582_p4 = ap_phi_mux_data_145_V_read215_rewind_phi_fu_27913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_145_V_read215_phi_phi_fu_72582_p4 = data_145_V_read.read();
        } else {
            ap_phi_mux_data_145_V_read215_phi_phi_fu_72582_p4 = ap_phi_reg_pp0_iter0_data_145_V_read215_phi_reg_72578.read();
        }
    } else {
        ap_phi_mux_data_145_V_read215_phi_phi_fu_72582_p4 = ap_phi_reg_pp0_iter0_data_145_V_read215_phi_reg_72578.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_145_V_read215_rewind_phi_fu_27913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_145_V_read215_rewind_phi_fu_27913_p6 = data_145_V_read215_phi_reg_72578.read();
    } else {
        ap_phi_mux_data_145_V_read215_rewind_phi_fu_27913_p6 = data_145_V_read215_rewind_reg_27909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1460_V_read1530_phi_phi_fu_89677_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1460_V_read1530_phi_phi_fu_89677_p4 = ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_46323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1460_V_read1530_phi_phi_fu_89677_p4 = data_1460_V_read.read();
        } else {
            ap_phi_mux_data_1460_V_read1530_phi_phi_fu_89677_p4 = ap_phi_reg_pp0_iter0_data_1460_V_read1530_phi_reg_89673.read();
        }
    } else {
        ap_phi_mux_data_1460_V_read1530_phi_phi_fu_89677_p4 = ap_phi_reg_pp0_iter0_data_1460_V_read1530_phi_reg_89673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_46323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_46323_p6 = data_1460_V_read1530_phi_reg_89673.read();
    } else {
        ap_phi_mux_data_1460_V_read1530_rewind_phi_fu_46323_p6 = data_1460_V_read1530_rewind_reg_46319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1461_V_read1531_phi_phi_fu_89690_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1461_V_read1531_phi_phi_fu_89690_p4 = ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_46337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1461_V_read1531_phi_phi_fu_89690_p4 = data_1461_V_read.read();
        } else {
            ap_phi_mux_data_1461_V_read1531_phi_phi_fu_89690_p4 = ap_phi_reg_pp0_iter0_data_1461_V_read1531_phi_reg_89686.read();
        }
    } else {
        ap_phi_mux_data_1461_V_read1531_phi_phi_fu_89690_p4 = ap_phi_reg_pp0_iter0_data_1461_V_read1531_phi_reg_89686.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_46337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_46337_p6 = data_1461_V_read1531_phi_reg_89686.read();
    } else {
        ap_phi_mux_data_1461_V_read1531_rewind_phi_fu_46337_p6 = data_1461_V_read1531_rewind_reg_46333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1462_V_read1532_phi_phi_fu_89703_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1462_V_read1532_phi_phi_fu_89703_p4 = ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_46351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1462_V_read1532_phi_phi_fu_89703_p4 = data_1462_V_read.read();
        } else {
            ap_phi_mux_data_1462_V_read1532_phi_phi_fu_89703_p4 = ap_phi_reg_pp0_iter0_data_1462_V_read1532_phi_reg_89699.read();
        }
    } else {
        ap_phi_mux_data_1462_V_read1532_phi_phi_fu_89703_p4 = ap_phi_reg_pp0_iter0_data_1462_V_read1532_phi_reg_89699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_46351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_46351_p6 = data_1462_V_read1532_phi_reg_89699.read();
    } else {
        ap_phi_mux_data_1462_V_read1532_rewind_phi_fu_46351_p6 = data_1462_V_read1532_rewind_reg_46347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1463_V_read1533_phi_phi_fu_89716_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1463_V_read1533_phi_phi_fu_89716_p4 = ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_46365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1463_V_read1533_phi_phi_fu_89716_p4 = data_1463_V_read.read();
        } else {
            ap_phi_mux_data_1463_V_read1533_phi_phi_fu_89716_p4 = ap_phi_reg_pp0_iter0_data_1463_V_read1533_phi_reg_89712.read();
        }
    } else {
        ap_phi_mux_data_1463_V_read1533_phi_phi_fu_89716_p4 = ap_phi_reg_pp0_iter0_data_1463_V_read1533_phi_reg_89712.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_46365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_46365_p6 = data_1463_V_read1533_phi_reg_89712.read();
    } else {
        ap_phi_mux_data_1463_V_read1533_rewind_phi_fu_46365_p6 = data_1463_V_read1533_rewind_reg_46361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1464_V_read1534_phi_phi_fu_89729_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1464_V_read1534_phi_phi_fu_89729_p4 = ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_46379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1464_V_read1534_phi_phi_fu_89729_p4 = data_1464_V_read.read();
        } else {
            ap_phi_mux_data_1464_V_read1534_phi_phi_fu_89729_p4 = ap_phi_reg_pp0_iter0_data_1464_V_read1534_phi_reg_89725.read();
        }
    } else {
        ap_phi_mux_data_1464_V_read1534_phi_phi_fu_89729_p4 = ap_phi_reg_pp0_iter0_data_1464_V_read1534_phi_reg_89725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_46379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_46379_p6 = data_1464_V_read1534_phi_reg_89725.read();
    } else {
        ap_phi_mux_data_1464_V_read1534_rewind_phi_fu_46379_p6 = data_1464_V_read1534_rewind_reg_46375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1465_V_read1535_phi_phi_fu_89742_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1465_V_read1535_phi_phi_fu_89742_p4 = ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_46393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1465_V_read1535_phi_phi_fu_89742_p4 = data_1465_V_read.read();
        } else {
            ap_phi_mux_data_1465_V_read1535_phi_phi_fu_89742_p4 = ap_phi_reg_pp0_iter0_data_1465_V_read1535_phi_reg_89738.read();
        }
    } else {
        ap_phi_mux_data_1465_V_read1535_phi_phi_fu_89742_p4 = ap_phi_reg_pp0_iter0_data_1465_V_read1535_phi_reg_89738.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_46393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_46393_p6 = data_1465_V_read1535_phi_reg_89738.read();
    } else {
        ap_phi_mux_data_1465_V_read1535_rewind_phi_fu_46393_p6 = data_1465_V_read1535_rewind_reg_46389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1466_V_read1536_phi_phi_fu_89755_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1466_V_read1536_phi_phi_fu_89755_p4 = ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_46407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1466_V_read1536_phi_phi_fu_89755_p4 = data_1466_V_read.read();
        } else {
            ap_phi_mux_data_1466_V_read1536_phi_phi_fu_89755_p4 = ap_phi_reg_pp0_iter0_data_1466_V_read1536_phi_reg_89751.read();
        }
    } else {
        ap_phi_mux_data_1466_V_read1536_phi_phi_fu_89755_p4 = ap_phi_reg_pp0_iter0_data_1466_V_read1536_phi_reg_89751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_46407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_46407_p6 = data_1466_V_read1536_phi_reg_89751.read();
    } else {
        ap_phi_mux_data_1466_V_read1536_rewind_phi_fu_46407_p6 = data_1466_V_read1536_rewind_reg_46403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1467_V_read1537_phi_phi_fu_89768_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1467_V_read1537_phi_phi_fu_89768_p4 = ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_46421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1467_V_read1537_phi_phi_fu_89768_p4 = data_1467_V_read.read();
        } else {
            ap_phi_mux_data_1467_V_read1537_phi_phi_fu_89768_p4 = ap_phi_reg_pp0_iter0_data_1467_V_read1537_phi_reg_89764.read();
        }
    } else {
        ap_phi_mux_data_1467_V_read1537_phi_phi_fu_89768_p4 = ap_phi_reg_pp0_iter0_data_1467_V_read1537_phi_reg_89764.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_46421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_46421_p6 = data_1467_V_read1537_phi_reg_89764.read();
    } else {
        ap_phi_mux_data_1467_V_read1537_rewind_phi_fu_46421_p6 = data_1467_V_read1537_rewind_reg_46417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1468_V_read1538_phi_phi_fu_89781_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1468_V_read1538_phi_phi_fu_89781_p4 = ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_46435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1468_V_read1538_phi_phi_fu_89781_p4 = data_1468_V_read.read();
        } else {
            ap_phi_mux_data_1468_V_read1538_phi_phi_fu_89781_p4 = ap_phi_reg_pp0_iter0_data_1468_V_read1538_phi_reg_89777.read();
        }
    } else {
        ap_phi_mux_data_1468_V_read1538_phi_phi_fu_89781_p4 = ap_phi_reg_pp0_iter0_data_1468_V_read1538_phi_reg_89777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_46435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_46435_p6 = data_1468_V_read1538_phi_reg_89777.read();
    } else {
        ap_phi_mux_data_1468_V_read1538_rewind_phi_fu_46435_p6 = data_1468_V_read1538_rewind_reg_46431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1469_V_read1539_phi_phi_fu_89794_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1469_V_read1539_phi_phi_fu_89794_p4 = ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_46449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1469_V_read1539_phi_phi_fu_89794_p4 = data_1469_V_read.read();
        } else {
            ap_phi_mux_data_1469_V_read1539_phi_phi_fu_89794_p4 = ap_phi_reg_pp0_iter0_data_1469_V_read1539_phi_reg_89790.read();
        }
    } else {
        ap_phi_mux_data_1469_V_read1539_phi_phi_fu_89794_p4 = ap_phi_reg_pp0_iter0_data_1469_V_read1539_phi_reg_89790.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_46449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_46449_p6 = data_1469_V_read1539_phi_reg_89790.read();
    } else {
        ap_phi_mux_data_1469_V_read1539_rewind_phi_fu_46449_p6 = data_1469_V_read1539_rewind_reg_46445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_146_V_read216_phi_phi_fu_72595_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_146_V_read216_phi_phi_fu_72595_p4 = ap_phi_mux_data_146_V_read216_rewind_phi_fu_27927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_146_V_read216_phi_phi_fu_72595_p4 = data_146_V_read.read();
        } else {
            ap_phi_mux_data_146_V_read216_phi_phi_fu_72595_p4 = ap_phi_reg_pp0_iter0_data_146_V_read216_phi_reg_72591.read();
        }
    } else {
        ap_phi_mux_data_146_V_read216_phi_phi_fu_72595_p4 = ap_phi_reg_pp0_iter0_data_146_V_read216_phi_reg_72591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_146_V_read216_rewind_phi_fu_27927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_146_V_read216_rewind_phi_fu_27927_p6 = data_146_V_read216_phi_reg_72591.read();
    } else {
        ap_phi_mux_data_146_V_read216_rewind_phi_fu_27927_p6 = data_146_V_read216_rewind_reg_27923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1470_V_read1540_phi_phi_fu_89807_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1470_V_read1540_phi_phi_fu_89807_p4 = ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_46463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1470_V_read1540_phi_phi_fu_89807_p4 = data_1470_V_read.read();
        } else {
            ap_phi_mux_data_1470_V_read1540_phi_phi_fu_89807_p4 = ap_phi_reg_pp0_iter0_data_1470_V_read1540_phi_reg_89803.read();
        }
    } else {
        ap_phi_mux_data_1470_V_read1540_phi_phi_fu_89807_p4 = ap_phi_reg_pp0_iter0_data_1470_V_read1540_phi_reg_89803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_46463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_46463_p6 = data_1470_V_read1540_phi_reg_89803.read();
    } else {
        ap_phi_mux_data_1470_V_read1540_rewind_phi_fu_46463_p6 = data_1470_V_read1540_rewind_reg_46459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1471_V_read1541_phi_phi_fu_89820_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1471_V_read1541_phi_phi_fu_89820_p4 = ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_46477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1471_V_read1541_phi_phi_fu_89820_p4 = data_1471_V_read.read();
        } else {
            ap_phi_mux_data_1471_V_read1541_phi_phi_fu_89820_p4 = ap_phi_reg_pp0_iter0_data_1471_V_read1541_phi_reg_89816.read();
        }
    } else {
        ap_phi_mux_data_1471_V_read1541_phi_phi_fu_89820_p4 = ap_phi_reg_pp0_iter0_data_1471_V_read1541_phi_reg_89816.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_46477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_46477_p6 = data_1471_V_read1541_phi_reg_89816.read();
    } else {
        ap_phi_mux_data_1471_V_read1541_rewind_phi_fu_46477_p6 = data_1471_V_read1541_rewind_reg_46473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1472_V_read1542_phi_phi_fu_89833_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1472_V_read1542_phi_phi_fu_89833_p4 = ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_46491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1472_V_read1542_phi_phi_fu_89833_p4 = data_1472_V_read.read();
        } else {
            ap_phi_mux_data_1472_V_read1542_phi_phi_fu_89833_p4 = ap_phi_reg_pp0_iter0_data_1472_V_read1542_phi_reg_89829.read();
        }
    } else {
        ap_phi_mux_data_1472_V_read1542_phi_phi_fu_89833_p4 = ap_phi_reg_pp0_iter0_data_1472_V_read1542_phi_reg_89829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_46491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_46491_p6 = data_1472_V_read1542_phi_reg_89829.read();
    } else {
        ap_phi_mux_data_1472_V_read1542_rewind_phi_fu_46491_p6 = data_1472_V_read1542_rewind_reg_46487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1473_V_read1543_phi_phi_fu_89846_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1473_V_read1543_phi_phi_fu_89846_p4 = ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_46505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1473_V_read1543_phi_phi_fu_89846_p4 = data_1473_V_read.read();
        } else {
            ap_phi_mux_data_1473_V_read1543_phi_phi_fu_89846_p4 = ap_phi_reg_pp0_iter0_data_1473_V_read1543_phi_reg_89842.read();
        }
    } else {
        ap_phi_mux_data_1473_V_read1543_phi_phi_fu_89846_p4 = ap_phi_reg_pp0_iter0_data_1473_V_read1543_phi_reg_89842.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_46505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_46505_p6 = data_1473_V_read1543_phi_reg_89842.read();
    } else {
        ap_phi_mux_data_1473_V_read1543_rewind_phi_fu_46505_p6 = data_1473_V_read1543_rewind_reg_46501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1474_V_read1544_phi_phi_fu_89859_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1474_V_read1544_phi_phi_fu_89859_p4 = ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_46519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1474_V_read1544_phi_phi_fu_89859_p4 = data_1474_V_read.read();
        } else {
            ap_phi_mux_data_1474_V_read1544_phi_phi_fu_89859_p4 = ap_phi_reg_pp0_iter0_data_1474_V_read1544_phi_reg_89855.read();
        }
    } else {
        ap_phi_mux_data_1474_V_read1544_phi_phi_fu_89859_p4 = ap_phi_reg_pp0_iter0_data_1474_V_read1544_phi_reg_89855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_46519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_46519_p6 = data_1474_V_read1544_phi_reg_89855.read();
    } else {
        ap_phi_mux_data_1474_V_read1544_rewind_phi_fu_46519_p6 = data_1474_V_read1544_rewind_reg_46515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1475_V_read1545_phi_phi_fu_89872_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1475_V_read1545_phi_phi_fu_89872_p4 = ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_46533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1475_V_read1545_phi_phi_fu_89872_p4 = data_1475_V_read.read();
        } else {
            ap_phi_mux_data_1475_V_read1545_phi_phi_fu_89872_p4 = ap_phi_reg_pp0_iter0_data_1475_V_read1545_phi_reg_89868.read();
        }
    } else {
        ap_phi_mux_data_1475_V_read1545_phi_phi_fu_89872_p4 = ap_phi_reg_pp0_iter0_data_1475_V_read1545_phi_reg_89868.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_46533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_46533_p6 = data_1475_V_read1545_phi_reg_89868.read();
    } else {
        ap_phi_mux_data_1475_V_read1545_rewind_phi_fu_46533_p6 = data_1475_V_read1545_rewind_reg_46529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1476_V_read1546_phi_phi_fu_89885_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1476_V_read1546_phi_phi_fu_89885_p4 = ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_46547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1476_V_read1546_phi_phi_fu_89885_p4 = data_1476_V_read.read();
        } else {
            ap_phi_mux_data_1476_V_read1546_phi_phi_fu_89885_p4 = ap_phi_reg_pp0_iter0_data_1476_V_read1546_phi_reg_89881.read();
        }
    } else {
        ap_phi_mux_data_1476_V_read1546_phi_phi_fu_89885_p4 = ap_phi_reg_pp0_iter0_data_1476_V_read1546_phi_reg_89881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_46547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_46547_p6 = data_1476_V_read1546_phi_reg_89881.read();
    } else {
        ap_phi_mux_data_1476_V_read1546_rewind_phi_fu_46547_p6 = data_1476_V_read1546_rewind_reg_46543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1477_V_read1547_phi_phi_fu_89898_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1477_V_read1547_phi_phi_fu_89898_p4 = ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_46561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1477_V_read1547_phi_phi_fu_89898_p4 = data_1477_V_read.read();
        } else {
            ap_phi_mux_data_1477_V_read1547_phi_phi_fu_89898_p4 = ap_phi_reg_pp0_iter0_data_1477_V_read1547_phi_reg_89894.read();
        }
    } else {
        ap_phi_mux_data_1477_V_read1547_phi_phi_fu_89898_p4 = ap_phi_reg_pp0_iter0_data_1477_V_read1547_phi_reg_89894.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_46561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_46561_p6 = data_1477_V_read1547_phi_reg_89894.read();
    } else {
        ap_phi_mux_data_1477_V_read1547_rewind_phi_fu_46561_p6 = data_1477_V_read1547_rewind_reg_46557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1478_V_read1548_phi_phi_fu_89911_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1478_V_read1548_phi_phi_fu_89911_p4 = ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_46575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1478_V_read1548_phi_phi_fu_89911_p4 = data_1478_V_read.read();
        } else {
            ap_phi_mux_data_1478_V_read1548_phi_phi_fu_89911_p4 = ap_phi_reg_pp0_iter0_data_1478_V_read1548_phi_reg_89907.read();
        }
    } else {
        ap_phi_mux_data_1478_V_read1548_phi_phi_fu_89911_p4 = ap_phi_reg_pp0_iter0_data_1478_V_read1548_phi_reg_89907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_46575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_46575_p6 = data_1478_V_read1548_phi_reg_89907.read();
    } else {
        ap_phi_mux_data_1478_V_read1548_rewind_phi_fu_46575_p6 = data_1478_V_read1548_rewind_reg_46571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1479_V_read1549_phi_phi_fu_89924_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1479_V_read1549_phi_phi_fu_89924_p4 = ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_46589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1479_V_read1549_phi_phi_fu_89924_p4 = data_1479_V_read.read();
        } else {
            ap_phi_mux_data_1479_V_read1549_phi_phi_fu_89924_p4 = ap_phi_reg_pp0_iter0_data_1479_V_read1549_phi_reg_89920.read();
        }
    } else {
        ap_phi_mux_data_1479_V_read1549_phi_phi_fu_89924_p4 = ap_phi_reg_pp0_iter0_data_1479_V_read1549_phi_reg_89920.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_46589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_46589_p6 = data_1479_V_read1549_phi_reg_89920.read();
    } else {
        ap_phi_mux_data_1479_V_read1549_rewind_phi_fu_46589_p6 = data_1479_V_read1549_rewind_reg_46585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_147_V_read217_phi_phi_fu_72608_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_147_V_read217_phi_phi_fu_72608_p4 = ap_phi_mux_data_147_V_read217_rewind_phi_fu_27941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_147_V_read217_phi_phi_fu_72608_p4 = data_147_V_read.read();
        } else {
            ap_phi_mux_data_147_V_read217_phi_phi_fu_72608_p4 = ap_phi_reg_pp0_iter0_data_147_V_read217_phi_reg_72604.read();
        }
    } else {
        ap_phi_mux_data_147_V_read217_phi_phi_fu_72608_p4 = ap_phi_reg_pp0_iter0_data_147_V_read217_phi_reg_72604.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_147_V_read217_rewind_phi_fu_27941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_147_V_read217_rewind_phi_fu_27941_p6 = data_147_V_read217_phi_reg_72604.read();
    } else {
        ap_phi_mux_data_147_V_read217_rewind_phi_fu_27941_p6 = data_147_V_read217_rewind_reg_27937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1480_V_read1550_phi_phi_fu_89937_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1480_V_read1550_phi_phi_fu_89937_p4 = ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_46603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1480_V_read1550_phi_phi_fu_89937_p4 = data_1480_V_read.read();
        } else {
            ap_phi_mux_data_1480_V_read1550_phi_phi_fu_89937_p4 = ap_phi_reg_pp0_iter0_data_1480_V_read1550_phi_reg_89933.read();
        }
    } else {
        ap_phi_mux_data_1480_V_read1550_phi_phi_fu_89937_p4 = ap_phi_reg_pp0_iter0_data_1480_V_read1550_phi_reg_89933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_46603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_46603_p6 = data_1480_V_read1550_phi_reg_89933.read();
    } else {
        ap_phi_mux_data_1480_V_read1550_rewind_phi_fu_46603_p6 = data_1480_V_read1550_rewind_reg_46599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1481_V_read1551_phi_phi_fu_89950_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1481_V_read1551_phi_phi_fu_89950_p4 = ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_46617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1481_V_read1551_phi_phi_fu_89950_p4 = data_1481_V_read.read();
        } else {
            ap_phi_mux_data_1481_V_read1551_phi_phi_fu_89950_p4 = ap_phi_reg_pp0_iter0_data_1481_V_read1551_phi_reg_89946.read();
        }
    } else {
        ap_phi_mux_data_1481_V_read1551_phi_phi_fu_89950_p4 = ap_phi_reg_pp0_iter0_data_1481_V_read1551_phi_reg_89946.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_46617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_46617_p6 = data_1481_V_read1551_phi_reg_89946.read();
    } else {
        ap_phi_mux_data_1481_V_read1551_rewind_phi_fu_46617_p6 = data_1481_V_read1551_rewind_reg_46613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1482_V_read1552_phi_phi_fu_89963_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1482_V_read1552_phi_phi_fu_89963_p4 = ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_46631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1482_V_read1552_phi_phi_fu_89963_p4 = data_1482_V_read.read();
        } else {
            ap_phi_mux_data_1482_V_read1552_phi_phi_fu_89963_p4 = ap_phi_reg_pp0_iter0_data_1482_V_read1552_phi_reg_89959.read();
        }
    } else {
        ap_phi_mux_data_1482_V_read1552_phi_phi_fu_89963_p4 = ap_phi_reg_pp0_iter0_data_1482_V_read1552_phi_reg_89959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_46631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_46631_p6 = data_1482_V_read1552_phi_reg_89959.read();
    } else {
        ap_phi_mux_data_1482_V_read1552_rewind_phi_fu_46631_p6 = data_1482_V_read1552_rewind_reg_46627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1483_V_read1553_phi_phi_fu_89976_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1483_V_read1553_phi_phi_fu_89976_p4 = ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_46645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1483_V_read1553_phi_phi_fu_89976_p4 = data_1483_V_read.read();
        } else {
            ap_phi_mux_data_1483_V_read1553_phi_phi_fu_89976_p4 = ap_phi_reg_pp0_iter0_data_1483_V_read1553_phi_reg_89972.read();
        }
    } else {
        ap_phi_mux_data_1483_V_read1553_phi_phi_fu_89976_p4 = ap_phi_reg_pp0_iter0_data_1483_V_read1553_phi_reg_89972.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_46645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_46645_p6 = data_1483_V_read1553_phi_reg_89972.read();
    } else {
        ap_phi_mux_data_1483_V_read1553_rewind_phi_fu_46645_p6 = data_1483_V_read1553_rewind_reg_46641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1484_V_read1554_phi_phi_fu_89989_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1484_V_read1554_phi_phi_fu_89989_p4 = ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_46659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1484_V_read1554_phi_phi_fu_89989_p4 = data_1484_V_read.read();
        } else {
            ap_phi_mux_data_1484_V_read1554_phi_phi_fu_89989_p4 = ap_phi_reg_pp0_iter0_data_1484_V_read1554_phi_reg_89985.read();
        }
    } else {
        ap_phi_mux_data_1484_V_read1554_phi_phi_fu_89989_p4 = ap_phi_reg_pp0_iter0_data_1484_V_read1554_phi_reg_89985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_46659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_46659_p6 = data_1484_V_read1554_phi_reg_89985.read();
    } else {
        ap_phi_mux_data_1484_V_read1554_rewind_phi_fu_46659_p6 = data_1484_V_read1554_rewind_reg_46655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1485_V_read1555_phi_phi_fu_90002_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1485_V_read1555_phi_phi_fu_90002_p4 = ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_46673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1485_V_read1555_phi_phi_fu_90002_p4 = data_1485_V_read.read();
        } else {
            ap_phi_mux_data_1485_V_read1555_phi_phi_fu_90002_p4 = ap_phi_reg_pp0_iter0_data_1485_V_read1555_phi_reg_89998.read();
        }
    } else {
        ap_phi_mux_data_1485_V_read1555_phi_phi_fu_90002_p4 = ap_phi_reg_pp0_iter0_data_1485_V_read1555_phi_reg_89998.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_46673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_46673_p6 = data_1485_V_read1555_phi_reg_89998.read();
    } else {
        ap_phi_mux_data_1485_V_read1555_rewind_phi_fu_46673_p6 = data_1485_V_read1555_rewind_reg_46669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1486_V_read1556_phi_phi_fu_90015_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1486_V_read1556_phi_phi_fu_90015_p4 = ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_46687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1486_V_read1556_phi_phi_fu_90015_p4 = data_1486_V_read.read();
        } else {
            ap_phi_mux_data_1486_V_read1556_phi_phi_fu_90015_p4 = ap_phi_reg_pp0_iter0_data_1486_V_read1556_phi_reg_90011.read();
        }
    } else {
        ap_phi_mux_data_1486_V_read1556_phi_phi_fu_90015_p4 = ap_phi_reg_pp0_iter0_data_1486_V_read1556_phi_reg_90011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_46687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_46687_p6 = data_1486_V_read1556_phi_reg_90011.read();
    } else {
        ap_phi_mux_data_1486_V_read1556_rewind_phi_fu_46687_p6 = data_1486_V_read1556_rewind_reg_46683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1487_V_read1557_phi_phi_fu_90028_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1487_V_read1557_phi_phi_fu_90028_p4 = ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_46701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1487_V_read1557_phi_phi_fu_90028_p4 = data_1487_V_read.read();
        } else {
            ap_phi_mux_data_1487_V_read1557_phi_phi_fu_90028_p4 = ap_phi_reg_pp0_iter0_data_1487_V_read1557_phi_reg_90024.read();
        }
    } else {
        ap_phi_mux_data_1487_V_read1557_phi_phi_fu_90028_p4 = ap_phi_reg_pp0_iter0_data_1487_V_read1557_phi_reg_90024.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_46701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_46701_p6 = data_1487_V_read1557_phi_reg_90024.read();
    } else {
        ap_phi_mux_data_1487_V_read1557_rewind_phi_fu_46701_p6 = data_1487_V_read1557_rewind_reg_46697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1488_V_read1558_phi_phi_fu_90041_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1488_V_read1558_phi_phi_fu_90041_p4 = ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_46715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1488_V_read1558_phi_phi_fu_90041_p4 = data_1488_V_read.read();
        } else {
            ap_phi_mux_data_1488_V_read1558_phi_phi_fu_90041_p4 = ap_phi_reg_pp0_iter0_data_1488_V_read1558_phi_reg_90037.read();
        }
    } else {
        ap_phi_mux_data_1488_V_read1558_phi_phi_fu_90041_p4 = ap_phi_reg_pp0_iter0_data_1488_V_read1558_phi_reg_90037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_46715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_46715_p6 = data_1488_V_read1558_phi_reg_90037.read();
    } else {
        ap_phi_mux_data_1488_V_read1558_rewind_phi_fu_46715_p6 = data_1488_V_read1558_rewind_reg_46711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1489_V_read1559_phi_phi_fu_90054_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1489_V_read1559_phi_phi_fu_90054_p4 = ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_46729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1489_V_read1559_phi_phi_fu_90054_p4 = data_1489_V_read.read();
        } else {
            ap_phi_mux_data_1489_V_read1559_phi_phi_fu_90054_p4 = ap_phi_reg_pp0_iter0_data_1489_V_read1559_phi_reg_90050.read();
        }
    } else {
        ap_phi_mux_data_1489_V_read1559_phi_phi_fu_90054_p4 = ap_phi_reg_pp0_iter0_data_1489_V_read1559_phi_reg_90050.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_46729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_46729_p6 = data_1489_V_read1559_phi_reg_90050.read();
    } else {
        ap_phi_mux_data_1489_V_read1559_rewind_phi_fu_46729_p6 = data_1489_V_read1559_rewind_reg_46725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_148_V_read218_phi_phi_fu_72621_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_148_V_read218_phi_phi_fu_72621_p4 = ap_phi_mux_data_148_V_read218_rewind_phi_fu_27955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_148_V_read218_phi_phi_fu_72621_p4 = data_148_V_read.read();
        } else {
            ap_phi_mux_data_148_V_read218_phi_phi_fu_72621_p4 = ap_phi_reg_pp0_iter0_data_148_V_read218_phi_reg_72617.read();
        }
    } else {
        ap_phi_mux_data_148_V_read218_phi_phi_fu_72621_p4 = ap_phi_reg_pp0_iter0_data_148_V_read218_phi_reg_72617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_148_V_read218_rewind_phi_fu_27955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_148_V_read218_rewind_phi_fu_27955_p6 = data_148_V_read218_phi_reg_72617.read();
    } else {
        ap_phi_mux_data_148_V_read218_rewind_phi_fu_27955_p6 = data_148_V_read218_rewind_reg_27951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1490_V_read1560_phi_phi_fu_90067_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1490_V_read1560_phi_phi_fu_90067_p4 = ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_46743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1490_V_read1560_phi_phi_fu_90067_p4 = data_1490_V_read.read();
        } else {
            ap_phi_mux_data_1490_V_read1560_phi_phi_fu_90067_p4 = ap_phi_reg_pp0_iter0_data_1490_V_read1560_phi_reg_90063.read();
        }
    } else {
        ap_phi_mux_data_1490_V_read1560_phi_phi_fu_90067_p4 = ap_phi_reg_pp0_iter0_data_1490_V_read1560_phi_reg_90063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_46743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_46743_p6 = data_1490_V_read1560_phi_reg_90063.read();
    } else {
        ap_phi_mux_data_1490_V_read1560_rewind_phi_fu_46743_p6 = data_1490_V_read1560_rewind_reg_46739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1491_V_read1561_phi_phi_fu_90080_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1491_V_read1561_phi_phi_fu_90080_p4 = ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_46757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1491_V_read1561_phi_phi_fu_90080_p4 = data_1491_V_read.read();
        } else {
            ap_phi_mux_data_1491_V_read1561_phi_phi_fu_90080_p4 = ap_phi_reg_pp0_iter0_data_1491_V_read1561_phi_reg_90076.read();
        }
    } else {
        ap_phi_mux_data_1491_V_read1561_phi_phi_fu_90080_p4 = ap_phi_reg_pp0_iter0_data_1491_V_read1561_phi_reg_90076.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_46757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_46757_p6 = data_1491_V_read1561_phi_reg_90076.read();
    } else {
        ap_phi_mux_data_1491_V_read1561_rewind_phi_fu_46757_p6 = data_1491_V_read1561_rewind_reg_46753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1492_V_read1562_phi_phi_fu_90093_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1492_V_read1562_phi_phi_fu_90093_p4 = ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_46771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1492_V_read1562_phi_phi_fu_90093_p4 = data_1492_V_read.read();
        } else {
            ap_phi_mux_data_1492_V_read1562_phi_phi_fu_90093_p4 = ap_phi_reg_pp0_iter0_data_1492_V_read1562_phi_reg_90089.read();
        }
    } else {
        ap_phi_mux_data_1492_V_read1562_phi_phi_fu_90093_p4 = ap_phi_reg_pp0_iter0_data_1492_V_read1562_phi_reg_90089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_46771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_46771_p6 = data_1492_V_read1562_phi_reg_90089.read();
    } else {
        ap_phi_mux_data_1492_V_read1562_rewind_phi_fu_46771_p6 = data_1492_V_read1562_rewind_reg_46767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1493_V_read1563_phi_phi_fu_90106_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1493_V_read1563_phi_phi_fu_90106_p4 = ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_46785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1493_V_read1563_phi_phi_fu_90106_p4 = data_1493_V_read.read();
        } else {
            ap_phi_mux_data_1493_V_read1563_phi_phi_fu_90106_p4 = ap_phi_reg_pp0_iter0_data_1493_V_read1563_phi_reg_90102.read();
        }
    } else {
        ap_phi_mux_data_1493_V_read1563_phi_phi_fu_90106_p4 = ap_phi_reg_pp0_iter0_data_1493_V_read1563_phi_reg_90102.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_46785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_46785_p6 = data_1493_V_read1563_phi_reg_90102.read();
    } else {
        ap_phi_mux_data_1493_V_read1563_rewind_phi_fu_46785_p6 = data_1493_V_read1563_rewind_reg_46781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1494_V_read1564_phi_phi_fu_90119_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1494_V_read1564_phi_phi_fu_90119_p4 = ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_46799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1494_V_read1564_phi_phi_fu_90119_p4 = data_1494_V_read.read();
        } else {
            ap_phi_mux_data_1494_V_read1564_phi_phi_fu_90119_p4 = ap_phi_reg_pp0_iter0_data_1494_V_read1564_phi_reg_90115.read();
        }
    } else {
        ap_phi_mux_data_1494_V_read1564_phi_phi_fu_90119_p4 = ap_phi_reg_pp0_iter0_data_1494_V_read1564_phi_reg_90115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_46799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_46799_p6 = data_1494_V_read1564_phi_reg_90115.read();
    } else {
        ap_phi_mux_data_1494_V_read1564_rewind_phi_fu_46799_p6 = data_1494_V_read1564_rewind_reg_46795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1495_V_read1565_phi_phi_fu_90132_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1495_V_read1565_phi_phi_fu_90132_p4 = ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_46813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1495_V_read1565_phi_phi_fu_90132_p4 = data_1495_V_read.read();
        } else {
            ap_phi_mux_data_1495_V_read1565_phi_phi_fu_90132_p4 = ap_phi_reg_pp0_iter0_data_1495_V_read1565_phi_reg_90128.read();
        }
    } else {
        ap_phi_mux_data_1495_V_read1565_phi_phi_fu_90132_p4 = ap_phi_reg_pp0_iter0_data_1495_V_read1565_phi_reg_90128.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_46813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_46813_p6 = data_1495_V_read1565_phi_reg_90128.read();
    } else {
        ap_phi_mux_data_1495_V_read1565_rewind_phi_fu_46813_p6 = data_1495_V_read1565_rewind_reg_46809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1496_V_read1566_phi_phi_fu_90145_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1496_V_read1566_phi_phi_fu_90145_p4 = ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_46827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1496_V_read1566_phi_phi_fu_90145_p4 = data_1496_V_read.read();
        } else {
            ap_phi_mux_data_1496_V_read1566_phi_phi_fu_90145_p4 = ap_phi_reg_pp0_iter0_data_1496_V_read1566_phi_reg_90141.read();
        }
    } else {
        ap_phi_mux_data_1496_V_read1566_phi_phi_fu_90145_p4 = ap_phi_reg_pp0_iter0_data_1496_V_read1566_phi_reg_90141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_46827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_46827_p6 = data_1496_V_read1566_phi_reg_90141.read();
    } else {
        ap_phi_mux_data_1496_V_read1566_rewind_phi_fu_46827_p6 = data_1496_V_read1566_rewind_reg_46823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1497_V_read1567_phi_phi_fu_90158_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1497_V_read1567_phi_phi_fu_90158_p4 = ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_46841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1497_V_read1567_phi_phi_fu_90158_p4 = data_1497_V_read.read();
        } else {
            ap_phi_mux_data_1497_V_read1567_phi_phi_fu_90158_p4 = ap_phi_reg_pp0_iter0_data_1497_V_read1567_phi_reg_90154.read();
        }
    } else {
        ap_phi_mux_data_1497_V_read1567_phi_phi_fu_90158_p4 = ap_phi_reg_pp0_iter0_data_1497_V_read1567_phi_reg_90154.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_46841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_46841_p6 = data_1497_V_read1567_phi_reg_90154.read();
    } else {
        ap_phi_mux_data_1497_V_read1567_rewind_phi_fu_46841_p6 = data_1497_V_read1567_rewind_reg_46837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1498_V_read1568_phi_phi_fu_90171_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1498_V_read1568_phi_phi_fu_90171_p4 = ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_46855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1498_V_read1568_phi_phi_fu_90171_p4 = data_1498_V_read.read();
        } else {
            ap_phi_mux_data_1498_V_read1568_phi_phi_fu_90171_p4 = ap_phi_reg_pp0_iter0_data_1498_V_read1568_phi_reg_90167.read();
        }
    } else {
        ap_phi_mux_data_1498_V_read1568_phi_phi_fu_90171_p4 = ap_phi_reg_pp0_iter0_data_1498_V_read1568_phi_reg_90167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_46855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_46855_p6 = data_1498_V_read1568_phi_reg_90167.read();
    } else {
        ap_phi_mux_data_1498_V_read1568_rewind_phi_fu_46855_p6 = data_1498_V_read1568_rewind_reg_46851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1499_V_read1569_phi_phi_fu_90184_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1499_V_read1569_phi_phi_fu_90184_p4 = ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_46869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1499_V_read1569_phi_phi_fu_90184_p4 = data_1499_V_read.read();
        } else {
            ap_phi_mux_data_1499_V_read1569_phi_phi_fu_90184_p4 = ap_phi_reg_pp0_iter0_data_1499_V_read1569_phi_reg_90180.read();
        }
    } else {
        ap_phi_mux_data_1499_V_read1569_phi_phi_fu_90184_p4 = ap_phi_reg_pp0_iter0_data_1499_V_read1569_phi_reg_90180.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_46869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_46869_p6 = data_1499_V_read1569_phi_reg_90180.read();
    } else {
        ap_phi_mux_data_1499_V_read1569_rewind_phi_fu_46869_p6 = data_1499_V_read1569_rewind_reg_46865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_149_V_read219_phi_phi_fu_72634_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_149_V_read219_phi_phi_fu_72634_p4 = ap_phi_mux_data_149_V_read219_rewind_phi_fu_27969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_149_V_read219_phi_phi_fu_72634_p4 = data_149_V_read.read();
        } else {
            ap_phi_mux_data_149_V_read219_phi_phi_fu_72634_p4 = ap_phi_reg_pp0_iter0_data_149_V_read219_phi_reg_72630.read();
        }
    } else {
        ap_phi_mux_data_149_V_read219_phi_phi_fu_72634_p4 = ap_phi_reg_pp0_iter0_data_149_V_read219_phi_reg_72630.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_149_V_read219_rewind_phi_fu_27969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_149_V_read219_rewind_phi_fu_27969_p6 = data_149_V_read219_phi_reg_72630.read();
    } else {
        ap_phi_mux_data_149_V_read219_rewind_phi_fu_27969_p6 = data_149_V_read219_rewind_reg_27965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_14_V_read84_phi_phi_fu_70879_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_14_V_read84_phi_phi_fu_70879_p4 = ap_phi_mux_data_14_V_read84_rewind_phi_fu_26079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_14_V_read84_phi_phi_fu_70879_p4 = data_14_V_read.read();
        } else {
            ap_phi_mux_data_14_V_read84_phi_phi_fu_70879_p4 = ap_phi_reg_pp0_iter0_data_14_V_read84_phi_reg_70875.read();
        }
    } else {
        ap_phi_mux_data_14_V_read84_phi_phi_fu_70879_p4 = ap_phi_reg_pp0_iter0_data_14_V_read84_phi_reg_70875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_14_V_read84_rewind_phi_fu_26079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_14_V_read84_rewind_phi_fu_26079_p6 = data_14_V_read84_phi_reg_70875.read();
    } else {
        ap_phi_mux_data_14_V_read84_rewind_phi_fu_26079_p6 = data_14_V_read84_rewind_reg_26075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1500_V_read1570_phi_phi_fu_90197_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1500_V_read1570_phi_phi_fu_90197_p4 = ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_46883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1500_V_read1570_phi_phi_fu_90197_p4 = data_1500_V_read.read();
        } else {
            ap_phi_mux_data_1500_V_read1570_phi_phi_fu_90197_p4 = ap_phi_reg_pp0_iter0_data_1500_V_read1570_phi_reg_90193.read();
        }
    } else {
        ap_phi_mux_data_1500_V_read1570_phi_phi_fu_90197_p4 = ap_phi_reg_pp0_iter0_data_1500_V_read1570_phi_reg_90193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_46883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_46883_p6 = data_1500_V_read1570_phi_reg_90193.read();
    } else {
        ap_phi_mux_data_1500_V_read1570_rewind_phi_fu_46883_p6 = data_1500_V_read1570_rewind_reg_46879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1501_V_read1571_phi_phi_fu_90210_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1501_V_read1571_phi_phi_fu_90210_p4 = ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_46897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1501_V_read1571_phi_phi_fu_90210_p4 = data_1501_V_read.read();
        } else {
            ap_phi_mux_data_1501_V_read1571_phi_phi_fu_90210_p4 = ap_phi_reg_pp0_iter0_data_1501_V_read1571_phi_reg_90206.read();
        }
    } else {
        ap_phi_mux_data_1501_V_read1571_phi_phi_fu_90210_p4 = ap_phi_reg_pp0_iter0_data_1501_V_read1571_phi_reg_90206.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_46897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_46897_p6 = data_1501_V_read1571_phi_reg_90206.read();
    } else {
        ap_phi_mux_data_1501_V_read1571_rewind_phi_fu_46897_p6 = data_1501_V_read1571_rewind_reg_46893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1502_V_read1572_phi_phi_fu_90223_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1502_V_read1572_phi_phi_fu_90223_p4 = ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_46911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1502_V_read1572_phi_phi_fu_90223_p4 = data_1502_V_read.read();
        } else {
            ap_phi_mux_data_1502_V_read1572_phi_phi_fu_90223_p4 = ap_phi_reg_pp0_iter0_data_1502_V_read1572_phi_reg_90219.read();
        }
    } else {
        ap_phi_mux_data_1502_V_read1572_phi_phi_fu_90223_p4 = ap_phi_reg_pp0_iter0_data_1502_V_read1572_phi_reg_90219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_46911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_46911_p6 = data_1502_V_read1572_phi_reg_90219.read();
    } else {
        ap_phi_mux_data_1502_V_read1572_rewind_phi_fu_46911_p6 = data_1502_V_read1572_rewind_reg_46907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1503_V_read1573_phi_phi_fu_90236_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1503_V_read1573_phi_phi_fu_90236_p4 = ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_46925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1503_V_read1573_phi_phi_fu_90236_p4 = data_1503_V_read.read();
        } else {
            ap_phi_mux_data_1503_V_read1573_phi_phi_fu_90236_p4 = ap_phi_reg_pp0_iter0_data_1503_V_read1573_phi_reg_90232.read();
        }
    } else {
        ap_phi_mux_data_1503_V_read1573_phi_phi_fu_90236_p4 = ap_phi_reg_pp0_iter0_data_1503_V_read1573_phi_reg_90232.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_46925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_46925_p6 = data_1503_V_read1573_phi_reg_90232.read();
    } else {
        ap_phi_mux_data_1503_V_read1573_rewind_phi_fu_46925_p6 = data_1503_V_read1573_rewind_reg_46921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1504_V_read1574_phi_phi_fu_90249_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1504_V_read1574_phi_phi_fu_90249_p4 = ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_46939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1504_V_read1574_phi_phi_fu_90249_p4 = data_1504_V_read.read();
        } else {
            ap_phi_mux_data_1504_V_read1574_phi_phi_fu_90249_p4 = ap_phi_reg_pp0_iter0_data_1504_V_read1574_phi_reg_90245.read();
        }
    } else {
        ap_phi_mux_data_1504_V_read1574_phi_phi_fu_90249_p4 = ap_phi_reg_pp0_iter0_data_1504_V_read1574_phi_reg_90245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_46939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_46939_p6 = data_1504_V_read1574_phi_reg_90245.read();
    } else {
        ap_phi_mux_data_1504_V_read1574_rewind_phi_fu_46939_p6 = data_1504_V_read1574_rewind_reg_46935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1505_V_read1575_phi_phi_fu_90262_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1505_V_read1575_phi_phi_fu_90262_p4 = ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_46953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1505_V_read1575_phi_phi_fu_90262_p4 = data_1505_V_read.read();
        } else {
            ap_phi_mux_data_1505_V_read1575_phi_phi_fu_90262_p4 = ap_phi_reg_pp0_iter0_data_1505_V_read1575_phi_reg_90258.read();
        }
    } else {
        ap_phi_mux_data_1505_V_read1575_phi_phi_fu_90262_p4 = ap_phi_reg_pp0_iter0_data_1505_V_read1575_phi_reg_90258.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_46953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_46953_p6 = data_1505_V_read1575_phi_reg_90258.read();
    } else {
        ap_phi_mux_data_1505_V_read1575_rewind_phi_fu_46953_p6 = data_1505_V_read1575_rewind_reg_46949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1506_V_read1576_phi_phi_fu_90275_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1506_V_read1576_phi_phi_fu_90275_p4 = ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_46967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1506_V_read1576_phi_phi_fu_90275_p4 = data_1506_V_read.read();
        } else {
            ap_phi_mux_data_1506_V_read1576_phi_phi_fu_90275_p4 = ap_phi_reg_pp0_iter0_data_1506_V_read1576_phi_reg_90271.read();
        }
    } else {
        ap_phi_mux_data_1506_V_read1576_phi_phi_fu_90275_p4 = ap_phi_reg_pp0_iter0_data_1506_V_read1576_phi_reg_90271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_46967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_46967_p6 = data_1506_V_read1576_phi_reg_90271.read();
    } else {
        ap_phi_mux_data_1506_V_read1576_rewind_phi_fu_46967_p6 = data_1506_V_read1576_rewind_reg_46963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1507_V_read1577_phi_phi_fu_90288_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1507_V_read1577_phi_phi_fu_90288_p4 = ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_46981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1507_V_read1577_phi_phi_fu_90288_p4 = data_1507_V_read.read();
        } else {
            ap_phi_mux_data_1507_V_read1577_phi_phi_fu_90288_p4 = ap_phi_reg_pp0_iter0_data_1507_V_read1577_phi_reg_90284.read();
        }
    } else {
        ap_phi_mux_data_1507_V_read1577_phi_phi_fu_90288_p4 = ap_phi_reg_pp0_iter0_data_1507_V_read1577_phi_reg_90284.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_46981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_46981_p6 = data_1507_V_read1577_phi_reg_90284.read();
    } else {
        ap_phi_mux_data_1507_V_read1577_rewind_phi_fu_46981_p6 = data_1507_V_read1577_rewind_reg_46977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1508_V_read1578_phi_phi_fu_90301_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1508_V_read1578_phi_phi_fu_90301_p4 = ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_46995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1508_V_read1578_phi_phi_fu_90301_p4 = data_1508_V_read.read();
        } else {
            ap_phi_mux_data_1508_V_read1578_phi_phi_fu_90301_p4 = ap_phi_reg_pp0_iter0_data_1508_V_read1578_phi_reg_90297.read();
        }
    } else {
        ap_phi_mux_data_1508_V_read1578_phi_phi_fu_90301_p4 = ap_phi_reg_pp0_iter0_data_1508_V_read1578_phi_reg_90297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_46995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_46995_p6 = data_1508_V_read1578_phi_reg_90297.read();
    } else {
        ap_phi_mux_data_1508_V_read1578_rewind_phi_fu_46995_p6 = data_1508_V_read1578_rewind_reg_46991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1509_V_read1579_phi_phi_fu_90314_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1509_V_read1579_phi_phi_fu_90314_p4 = ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_47009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1509_V_read1579_phi_phi_fu_90314_p4 = data_1509_V_read.read();
        } else {
            ap_phi_mux_data_1509_V_read1579_phi_phi_fu_90314_p4 = ap_phi_reg_pp0_iter0_data_1509_V_read1579_phi_reg_90310.read();
        }
    } else {
        ap_phi_mux_data_1509_V_read1579_phi_phi_fu_90314_p4 = ap_phi_reg_pp0_iter0_data_1509_V_read1579_phi_reg_90310.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_47009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_47009_p6 = data_1509_V_read1579_phi_reg_90310.read();
    } else {
        ap_phi_mux_data_1509_V_read1579_rewind_phi_fu_47009_p6 = data_1509_V_read1579_rewind_reg_47005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_150_V_read220_phi_phi_fu_72647_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_150_V_read220_phi_phi_fu_72647_p4 = ap_phi_mux_data_150_V_read220_rewind_phi_fu_27983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_150_V_read220_phi_phi_fu_72647_p4 = data_150_V_read.read();
        } else {
            ap_phi_mux_data_150_V_read220_phi_phi_fu_72647_p4 = ap_phi_reg_pp0_iter0_data_150_V_read220_phi_reg_72643.read();
        }
    } else {
        ap_phi_mux_data_150_V_read220_phi_phi_fu_72647_p4 = ap_phi_reg_pp0_iter0_data_150_V_read220_phi_reg_72643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_150_V_read220_rewind_phi_fu_27983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_150_V_read220_rewind_phi_fu_27983_p6 = data_150_V_read220_phi_reg_72643.read();
    } else {
        ap_phi_mux_data_150_V_read220_rewind_phi_fu_27983_p6 = data_150_V_read220_rewind_reg_27979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1510_V_read1580_phi_phi_fu_90327_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1510_V_read1580_phi_phi_fu_90327_p4 = ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_47023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1510_V_read1580_phi_phi_fu_90327_p4 = data_1510_V_read.read();
        } else {
            ap_phi_mux_data_1510_V_read1580_phi_phi_fu_90327_p4 = ap_phi_reg_pp0_iter0_data_1510_V_read1580_phi_reg_90323.read();
        }
    } else {
        ap_phi_mux_data_1510_V_read1580_phi_phi_fu_90327_p4 = ap_phi_reg_pp0_iter0_data_1510_V_read1580_phi_reg_90323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_47023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_47023_p6 = data_1510_V_read1580_phi_reg_90323.read();
    } else {
        ap_phi_mux_data_1510_V_read1580_rewind_phi_fu_47023_p6 = data_1510_V_read1580_rewind_reg_47019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1511_V_read1581_phi_phi_fu_90340_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1511_V_read1581_phi_phi_fu_90340_p4 = ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_47037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1511_V_read1581_phi_phi_fu_90340_p4 = data_1511_V_read.read();
        } else {
            ap_phi_mux_data_1511_V_read1581_phi_phi_fu_90340_p4 = ap_phi_reg_pp0_iter0_data_1511_V_read1581_phi_reg_90336.read();
        }
    } else {
        ap_phi_mux_data_1511_V_read1581_phi_phi_fu_90340_p4 = ap_phi_reg_pp0_iter0_data_1511_V_read1581_phi_reg_90336.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_47037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_47037_p6 = data_1511_V_read1581_phi_reg_90336.read();
    } else {
        ap_phi_mux_data_1511_V_read1581_rewind_phi_fu_47037_p6 = data_1511_V_read1581_rewind_reg_47033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1512_V_read1582_phi_phi_fu_90353_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1512_V_read1582_phi_phi_fu_90353_p4 = ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_47051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1512_V_read1582_phi_phi_fu_90353_p4 = data_1512_V_read.read();
        } else {
            ap_phi_mux_data_1512_V_read1582_phi_phi_fu_90353_p4 = ap_phi_reg_pp0_iter0_data_1512_V_read1582_phi_reg_90349.read();
        }
    } else {
        ap_phi_mux_data_1512_V_read1582_phi_phi_fu_90353_p4 = ap_phi_reg_pp0_iter0_data_1512_V_read1582_phi_reg_90349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_47051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_47051_p6 = data_1512_V_read1582_phi_reg_90349.read();
    } else {
        ap_phi_mux_data_1512_V_read1582_rewind_phi_fu_47051_p6 = data_1512_V_read1582_rewind_reg_47047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1513_V_read1583_phi_phi_fu_90366_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1513_V_read1583_phi_phi_fu_90366_p4 = ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_47065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1513_V_read1583_phi_phi_fu_90366_p4 = data_1513_V_read.read();
        } else {
            ap_phi_mux_data_1513_V_read1583_phi_phi_fu_90366_p4 = ap_phi_reg_pp0_iter0_data_1513_V_read1583_phi_reg_90362.read();
        }
    } else {
        ap_phi_mux_data_1513_V_read1583_phi_phi_fu_90366_p4 = ap_phi_reg_pp0_iter0_data_1513_V_read1583_phi_reg_90362.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_47065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_47065_p6 = data_1513_V_read1583_phi_reg_90362.read();
    } else {
        ap_phi_mux_data_1513_V_read1583_rewind_phi_fu_47065_p6 = data_1513_V_read1583_rewind_reg_47061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1514_V_read1584_phi_phi_fu_90379_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1514_V_read1584_phi_phi_fu_90379_p4 = ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_47079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1514_V_read1584_phi_phi_fu_90379_p4 = data_1514_V_read.read();
        } else {
            ap_phi_mux_data_1514_V_read1584_phi_phi_fu_90379_p4 = ap_phi_reg_pp0_iter0_data_1514_V_read1584_phi_reg_90375.read();
        }
    } else {
        ap_phi_mux_data_1514_V_read1584_phi_phi_fu_90379_p4 = ap_phi_reg_pp0_iter0_data_1514_V_read1584_phi_reg_90375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_47079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_47079_p6 = data_1514_V_read1584_phi_reg_90375.read();
    } else {
        ap_phi_mux_data_1514_V_read1584_rewind_phi_fu_47079_p6 = data_1514_V_read1584_rewind_reg_47075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1515_V_read1585_phi_phi_fu_90392_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1515_V_read1585_phi_phi_fu_90392_p4 = ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_47093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1515_V_read1585_phi_phi_fu_90392_p4 = data_1515_V_read.read();
        } else {
            ap_phi_mux_data_1515_V_read1585_phi_phi_fu_90392_p4 = ap_phi_reg_pp0_iter0_data_1515_V_read1585_phi_reg_90388.read();
        }
    } else {
        ap_phi_mux_data_1515_V_read1585_phi_phi_fu_90392_p4 = ap_phi_reg_pp0_iter0_data_1515_V_read1585_phi_reg_90388.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_47093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_47093_p6 = data_1515_V_read1585_phi_reg_90388.read();
    } else {
        ap_phi_mux_data_1515_V_read1585_rewind_phi_fu_47093_p6 = data_1515_V_read1585_rewind_reg_47089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1516_V_read1586_phi_phi_fu_90405_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1516_V_read1586_phi_phi_fu_90405_p4 = ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_47107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1516_V_read1586_phi_phi_fu_90405_p4 = data_1516_V_read.read();
        } else {
            ap_phi_mux_data_1516_V_read1586_phi_phi_fu_90405_p4 = ap_phi_reg_pp0_iter0_data_1516_V_read1586_phi_reg_90401.read();
        }
    } else {
        ap_phi_mux_data_1516_V_read1586_phi_phi_fu_90405_p4 = ap_phi_reg_pp0_iter0_data_1516_V_read1586_phi_reg_90401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_47107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_47107_p6 = data_1516_V_read1586_phi_reg_90401.read();
    } else {
        ap_phi_mux_data_1516_V_read1586_rewind_phi_fu_47107_p6 = data_1516_V_read1586_rewind_reg_47103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1517_V_read1587_phi_phi_fu_90418_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1517_V_read1587_phi_phi_fu_90418_p4 = ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_47121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1517_V_read1587_phi_phi_fu_90418_p4 = data_1517_V_read.read();
        } else {
            ap_phi_mux_data_1517_V_read1587_phi_phi_fu_90418_p4 = ap_phi_reg_pp0_iter0_data_1517_V_read1587_phi_reg_90414.read();
        }
    } else {
        ap_phi_mux_data_1517_V_read1587_phi_phi_fu_90418_p4 = ap_phi_reg_pp0_iter0_data_1517_V_read1587_phi_reg_90414.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_47121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_47121_p6 = data_1517_V_read1587_phi_reg_90414.read();
    } else {
        ap_phi_mux_data_1517_V_read1587_rewind_phi_fu_47121_p6 = data_1517_V_read1587_rewind_reg_47117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1518_V_read1588_phi_phi_fu_90431_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1518_V_read1588_phi_phi_fu_90431_p4 = ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_47135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1518_V_read1588_phi_phi_fu_90431_p4 = data_1518_V_read.read();
        } else {
            ap_phi_mux_data_1518_V_read1588_phi_phi_fu_90431_p4 = ap_phi_reg_pp0_iter0_data_1518_V_read1588_phi_reg_90427.read();
        }
    } else {
        ap_phi_mux_data_1518_V_read1588_phi_phi_fu_90431_p4 = ap_phi_reg_pp0_iter0_data_1518_V_read1588_phi_reg_90427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_47135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_47135_p6 = data_1518_V_read1588_phi_reg_90427.read();
    } else {
        ap_phi_mux_data_1518_V_read1588_rewind_phi_fu_47135_p6 = data_1518_V_read1588_rewind_reg_47131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1519_V_read1589_phi_phi_fu_90444_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1519_V_read1589_phi_phi_fu_90444_p4 = ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_47149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1519_V_read1589_phi_phi_fu_90444_p4 = data_1519_V_read.read();
        } else {
            ap_phi_mux_data_1519_V_read1589_phi_phi_fu_90444_p4 = ap_phi_reg_pp0_iter0_data_1519_V_read1589_phi_reg_90440.read();
        }
    } else {
        ap_phi_mux_data_1519_V_read1589_phi_phi_fu_90444_p4 = ap_phi_reg_pp0_iter0_data_1519_V_read1589_phi_reg_90440.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_47149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_47149_p6 = data_1519_V_read1589_phi_reg_90440.read();
    } else {
        ap_phi_mux_data_1519_V_read1589_rewind_phi_fu_47149_p6 = data_1519_V_read1589_rewind_reg_47145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_151_V_read221_phi_phi_fu_72660_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_151_V_read221_phi_phi_fu_72660_p4 = ap_phi_mux_data_151_V_read221_rewind_phi_fu_27997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_151_V_read221_phi_phi_fu_72660_p4 = data_151_V_read.read();
        } else {
            ap_phi_mux_data_151_V_read221_phi_phi_fu_72660_p4 = ap_phi_reg_pp0_iter0_data_151_V_read221_phi_reg_72656.read();
        }
    } else {
        ap_phi_mux_data_151_V_read221_phi_phi_fu_72660_p4 = ap_phi_reg_pp0_iter0_data_151_V_read221_phi_reg_72656.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_151_V_read221_rewind_phi_fu_27997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_151_V_read221_rewind_phi_fu_27997_p6 = data_151_V_read221_phi_reg_72656.read();
    } else {
        ap_phi_mux_data_151_V_read221_rewind_phi_fu_27997_p6 = data_151_V_read221_rewind_reg_27993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1520_V_read1590_phi_phi_fu_90457_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1520_V_read1590_phi_phi_fu_90457_p4 = ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_47163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1520_V_read1590_phi_phi_fu_90457_p4 = data_1520_V_read.read();
        } else {
            ap_phi_mux_data_1520_V_read1590_phi_phi_fu_90457_p4 = ap_phi_reg_pp0_iter0_data_1520_V_read1590_phi_reg_90453.read();
        }
    } else {
        ap_phi_mux_data_1520_V_read1590_phi_phi_fu_90457_p4 = ap_phi_reg_pp0_iter0_data_1520_V_read1590_phi_reg_90453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_47163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_47163_p6 = data_1520_V_read1590_phi_reg_90453.read();
    } else {
        ap_phi_mux_data_1520_V_read1590_rewind_phi_fu_47163_p6 = data_1520_V_read1590_rewind_reg_47159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1521_V_read1591_phi_phi_fu_90470_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1521_V_read1591_phi_phi_fu_90470_p4 = ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_47177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1521_V_read1591_phi_phi_fu_90470_p4 = data_1521_V_read.read();
        } else {
            ap_phi_mux_data_1521_V_read1591_phi_phi_fu_90470_p4 = ap_phi_reg_pp0_iter0_data_1521_V_read1591_phi_reg_90466.read();
        }
    } else {
        ap_phi_mux_data_1521_V_read1591_phi_phi_fu_90470_p4 = ap_phi_reg_pp0_iter0_data_1521_V_read1591_phi_reg_90466.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_47177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_47177_p6 = data_1521_V_read1591_phi_reg_90466.read();
    } else {
        ap_phi_mux_data_1521_V_read1591_rewind_phi_fu_47177_p6 = data_1521_V_read1591_rewind_reg_47173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1522_V_read1592_phi_phi_fu_90483_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1522_V_read1592_phi_phi_fu_90483_p4 = ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_47191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1522_V_read1592_phi_phi_fu_90483_p4 = data_1522_V_read.read();
        } else {
            ap_phi_mux_data_1522_V_read1592_phi_phi_fu_90483_p4 = ap_phi_reg_pp0_iter0_data_1522_V_read1592_phi_reg_90479.read();
        }
    } else {
        ap_phi_mux_data_1522_V_read1592_phi_phi_fu_90483_p4 = ap_phi_reg_pp0_iter0_data_1522_V_read1592_phi_reg_90479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_47191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_47191_p6 = data_1522_V_read1592_phi_reg_90479.read();
    } else {
        ap_phi_mux_data_1522_V_read1592_rewind_phi_fu_47191_p6 = data_1522_V_read1592_rewind_reg_47187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1523_V_read1593_phi_phi_fu_90496_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1523_V_read1593_phi_phi_fu_90496_p4 = ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_47205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1523_V_read1593_phi_phi_fu_90496_p4 = data_1523_V_read.read();
        } else {
            ap_phi_mux_data_1523_V_read1593_phi_phi_fu_90496_p4 = ap_phi_reg_pp0_iter0_data_1523_V_read1593_phi_reg_90492.read();
        }
    } else {
        ap_phi_mux_data_1523_V_read1593_phi_phi_fu_90496_p4 = ap_phi_reg_pp0_iter0_data_1523_V_read1593_phi_reg_90492.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_47205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_47205_p6 = data_1523_V_read1593_phi_reg_90492.read();
    } else {
        ap_phi_mux_data_1523_V_read1593_rewind_phi_fu_47205_p6 = data_1523_V_read1593_rewind_reg_47201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1524_V_read1594_phi_phi_fu_90509_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1524_V_read1594_phi_phi_fu_90509_p4 = ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_47219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1524_V_read1594_phi_phi_fu_90509_p4 = data_1524_V_read.read();
        } else {
            ap_phi_mux_data_1524_V_read1594_phi_phi_fu_90509_p4 = ap_phi_reg_pp0_iter0_data_1524_V_read1594_phi_reg_90505.read();
        }
    } else {
        ap_phi_mux_data_1524_V_read1594_phi_phi_fu_90509_p4 = ap_phi_reg_pp0_iter0_data_1524_V_read1594_phi_reg_90505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_47219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_47219_p6 = data_1524_V_read1594_phi_reg_90505.read();
    } else {
        ap_phi_mux_data_1524_V_read1594_rewind_phi_fu_47219_p6 = data_1524_V_read1594_rewind_reg_47215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1525_V_read1595_phi_phi_fu_90522_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1525_V_read1595_phi_phi_fu_90522_p4 = ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_47233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1525_V_read1595_phi_phi_fu_90522_p4 = data_1525_V_read.read();
        } else {
            ap_phi_mux_data_1525_V_read1595_phi_phi_fu_90522_p4 = ap_phi_reg_pp0_iter0_data_1525_V_read1595_phi_reg_90518.read();
        }
    } else {
        ap_phi_mux_data_1525_V_read1595_phi_phi_fu_90522_p4 = ap_phi_reg_pp0_iter0_data_1525_V_read1595_phi_reg_90518.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_47233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_47233_p6 = data_1525_V_read1595_phi_reg_90518.read();
    } else {
        ap_phi_mux_data_1525_V_read1595_rewind_phi_fu_47233_p6 = data_1525_V_read1595_rewind_reg_47229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1526_V_read1596_phi_phi_fu_90535_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1526_V_read1596_phi_phi_fu_90535_p4 = ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_47247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1526_V_read1596_phi_phi_fu_90535_p4 = data_1526_V_read.read();
        } else {
            ap_phi_mux_data_1526_V_read1596_phi_phi_fu_90535_p4 = ap_phi_reg_pp0_iter0_data_1526_V_read1596_phi_reg_90531.read();
        }
    } else {
        ap_phi_mux_data_1526_V_read1596_phi_phi_fu_90535_p4 = ap_phi_reg_pp0_iter0_data_1526_V_read1596_phi_reg_90531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_47247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_47247_p6 = data_1526_V_read1596_phi_reg_90531.read();
    } else {
        ap_phi_mux_data_1526_V_read1596_rewind_phi_fu_47247_p6 = data_1526_V_read1596_rewind_reg_47243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1527_V_read1597_phi_phi_fu_90548_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1527_V_read1597_phi_phi_fu_90548_p4 = ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_47261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1527_V_read1597_phi_phi_fu_90548_p4 = data_1527_V_read.read();
        } else {
            ap_phi_mux_data_1527_V_read1597_phi_phi_fu_90548_p4 = ap_phi_reg_pp0_iter0_data_1527_V_read1597_phi_reg_90544.read();
        }
    } else {
        ap_phi_mux_data_1527_V_read1597_phi_phi_fu_90548_p4 = ap_phi_reg_pp0_iter0_data_1527_V_read1597_phi_reg_90544.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_47261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_47261_p6 = data_1527_V_read1597_phi_reg_90544.read();
    } else {
        ap_phi_mux_data_1527_V_read1597_rewind_phi_fu_47261_p6 = data_1527_V_read1597_rewind_reg_47257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1528_V_read1598_phi_phi_fu_90561_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1528_V_read1598_phi_phi_fu_90561_p4 = ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_47275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1528_V_read1598_phi_phi_fu_90561_p4 = data_1528_V_read.read();
        } else {
            ap_phi_mux_data_1528_V_read1598_phi_phi_fu_90561_p4 = ap_phi_reg_pp0_iter0_data_1528_V_read1598_phi_reg_90557.read();
        }
    } else {
        ap_phi_mux_data_1528_V_read1598_phi_phi_fu_90561_p4 = ap_phi_reg_pp0_iter0_data_1528_V_read1598_phi_reg_90557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_47275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_47275_p6 = data_1528_V_read1598_phi_reg_90557.read();
    } else {
        ap_phi_mux_data_1528_V_read1598_rewind_phi_fu_47275_p6 = data_1528_V_read1598_rewind_reg_47271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1529_V_read1599_phi_phi_fu_90574_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1529_V_read1599_phi_phi_fu_90574_p4 = ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_47289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1529_V_read1599_phi_phi_fu_90574_p4 = data_1529_V_read.read();
        } else {
            ap_phi_mux_data_1529_V_read1599_phi_phi_fu_90574_p4 = ap_phi_reg_pp0_iter0_data_1529_V_read1599_phi_reg_90570.read();
        }
    } else {
        ap_phi_mux_data_1529_V_read1599_phi_phi_fu_90574_p4 = ap_phi_reg_pp0_iter0_data_1529_V_read1599_phi_reg_90570.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_47289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_47289_p6 = data_1529_V_read1599_phi_reg_90570.read();
    } else {
        ap_phi_mux_data_1529_V_read1599_rewind_phi_fu_47289_p6 = data_1529_V_read1599_rewind_reg_47285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_152_V_read222_phi_phi_fu_72673_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_152_V_read222_phi_phi_fu_72673_p4 = ap_phi_mux_data_152_V_read222_rewind_phi_fu_28011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_152_V_read222_phi_phi_fu_72673_p4 = data_152_V_read.read();
        } else {
            ap_phi_mux_data_152_V_read222_phi_phi_fu_72673_p4 = ap_phi_reg_pp0_iter0_data_152_V_read222_phi_reg_72669.read();
        }
    } else {
        ap_phi_mux_data_152_V_read222_phi_phi_fu_72673_p4 = ap_phi_reg_pp0_iter0_data_152_V_read222_phi_reg_72669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_152_V_read222_rewind_phi_fu_28011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_152_V_read222_rewind_phi_fu_28011_p6 = data_152_V_read222_phi_reg_72669.read();
    } else {
        ap_phi_mux_data_152_V_read222_rewind_phi_fu_28011_p6 = data_152_V_read222_rewind_reg_28007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1530_V_read1600_phi_phi_fu_90587_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1530_V_read1600_phi_phi_fu_90587_p4 = ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_47303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1530_V_read1600_phi_phi_fu_90587_p4 = data_1530_V_read.read();
        } else {
            ap_phi_mux_data_1530_V_read1600_phi_phi_fu_90587_p4 = ap_phi_reg_pp0_iter0_data_1530_V_read1600_phi_reg_90583.read();
        }
    } else {
        ap_phi_mux_data_1530_V_read1600_phi_phi_fu_90587_p4 = ap_phi_reg_pp0_iter0_data_1530_V_read1600_phi_reg_90583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_47303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_47303_p6 = data_1530_V_read1600_phi_reg_90583.read();
    } else {
        ap_phi_mux_data_1530_V_read1600_rewind_phi_fu_47303_p6 = data_1530_V_read1600_rewind_reg_47299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1531_V_read1601_phi_phi_fu_90600_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1531_V_read1601_phi_phi_fu_90600_p4 = ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_47317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1531_V_read1601_phi_phi_fu_90600_p4 = data_1531_V_read.read();
        } else {
            ap_phi_mux_data_1531_V_read1601_phi_phi_fu_90600_p4 = ap_phi_reg_pp0_iter0_data_1531_V_read1601_phi_reg_90596.read();
        }
    } else {
        ap_phi_mux_data_1531_V_read1601_phi_phi_fu_90600_p4 = ap_phi_reg_pp0_iter0_data_1531_V_read1601_phi_reg_90596.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_47317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_47317_p6 = data_1531_V_read1601_phi_reg_90596.read();
    } else {
        ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_47317_p6 = data_1531_V_read1601_rewind_reg_47313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1532_V_read1602_phi_phi_fu_90613_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1532_V_read1602_phi_phi_fu_90613_p4 = ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_47331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1532_V_read1602_phi_phi_fu_90613_p4 = data_1532_V_read.read();
        } else {
            ap_phi_mux_data_1532_V_read1602_phi_phi_fu_90613_p4 = ap_phi_reg_pp0_iter0_data_1532_V_read1602_phi_reg_90609.read();
        }
    } else {
        ap_phi_mux_data_1532_V_read1602_phi_phi_fu_90613_p4 = ap_phi_reg_pp0_iter0_data_1532_V_read1602_phi_reg_90609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_47331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_47331_p6 = data_1532_V_read1602_phi_reg_90609.read();
    } else {
        ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_47331_p6 = data_1532_V_read1602_rewind_reg_47327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1533_V_read1603_phi_phi_fu_90626_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1533_V_read1603_phi_phi_fu_90626_p4 = ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_47345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1533_V_read1603_phi_phi_fu_90626_p4 = data_1533_V_read.read();
        } else {
            ap_phi_mux_data_1533_V_read1603_phi_phi_fu_90626_p4 = ap_phi_reg_pp0_iter0_data_1533_V_read1603_phi_reg_90622.read();
        }
    } else {
        ap_phi_mux_data_1533_V_read1603_phi_phi_fu_90626_p4 = ap_phi_reg_pp0_iter0_data_1533_V_read1603_phi_reg_90622.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_47345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_47345_p6 = data_1533_V_read1603_phi_reg_90622.read();
    } else {
        ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_47345_p6 = data_1533_V_read1603_rewind_reg_47341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1534_V_read1604_phi_phi_fu_90639_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1534_V_read1604_phi_phi_fu_90639_p4 = ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_47359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1534_V_read1604_phi_phi_fu_90639_p4 = data_1534_V_read.read();
        } else {
            ap_phi_mux_data_1534_V_read1604_phi_phi_fu_90639_p4 = ap_phi_reg_pp0_iter0_data_1534_V_read1604_phi_reg_90635.read();
        }
    } else {
        ap_phi_mux_data_1534_V_read1604_phi_phi_fu_90639_p4 = ap_phi_reg_pp0_iter0_data_1534_V_read1604_phi_reg_90635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_47359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_47359_p6 = data_1534_V_read1604_phi_reg_90635.read();
    } else {
        ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_47359_p6 = data_1534_V_read1604_rewind_reg_47355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1535_V_read1605_phi_phi_fu_90652_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1535_V_read1605_phi_phi_fu_90652_p4 = ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_47373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1535_V_read1605_phi_phi_fu_90652_p4 = data_1535_V_read.read();
        } else {
            ap_phi_mux_data_1535_V_read1605_phi_phi_fu_90652_p4 = ap_phi_reg_pp0_iter0_data_1535_V_read1605_phi_reg_90648.read();
        }
    } else {
        ap_phi_mux_data_1535_V_read1605_phi_phi_fu_90652_p4 = ap_phi_reg_pp0_iter0_data_1535_V_read1605_phi_reg_90648.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_47373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_47373_p6 = data_1535_V_read1605_phi_reg_90648.read();
    } else {
        ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_47373_p6 = data_1535_V_read1605_rewind_reg_47369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1536_V_read1606_phi_phi_fu_90665_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1536_V_read1606_phi_phi_fu_90665_p4 = ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_47387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1536_V_read1606_phi_phi_fu_90665_p4 = data_1536_V_read.read();
        } else {
            ap_phi_mux_data_1536_V_read1606_phi_phi_fu_90665_p4 = ap_phi_reg_pp0_iter0_data_1536_V_read1606_phi_reg_90661.read();
        }
    } else {
        ap_phi_mux_data_1536_V_read1606_phi_phi_fu_90665_p4 = ap_phi_reg_pp0_iter0_data_1536_V_read1606_phi_reg_90661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_47387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_47387_p6 = data_1536_V_read1606_phi_reg_90661.read();
    } else {
        ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_47387_p6 = data_1536_V_read1606_rewind_reg_47383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1537_V_read1607_phi_phi_fu_90678_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1537_V_read1607_phi_phi_fu_90678_p4 = ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_47401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1537_V_read1607_phi_phi_fu_90678_p4 = data_1537_V_read.read();
        } else {
            ap_phi_mux_data_1537_V_read1607_phi_phi_fu_90678_p4 = ap_phi_reg_pp0_iter0_data_1537_V_read1607_phi_reg_90674.read();
        }
    } else {
        ap_phi_mux_data_1537_V_read1607_phi_phi_fu_90678_p4 = ap_phi_reg_pp0_iter0_data_1537_V_read1607_phi_reg_90674.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_47401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_47401_p6 = data_1537_V_read1607_phi_reg_90674.read();
    } else {
        ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_47401_p6 = data_1537_V_read1607_rewind_reg_47397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1538_V_read1608_phi_phi_fu_90691_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1538_V_read1608_phi_phi_fu_90691_p4 = ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_47415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1538_V_read1608_phi_phi_fu_90691_p4 = data_1538_V_read.read();
        } else {
            ap_phi_mux_data_1538_V_read1608_phi_phi_fu_90691_p4 = ap_phi_reg_pp0_iter0_data_1538_V_read1608_phi_reg_90687.read();
        }
    } else {
        ap_phi_mux_data_1538_V_read1608_phi_phi_fu_90691_p4 = ap_phi_reg_pp0_iter0_data_1538_V_read1608_phi_reg_90687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_47415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_47415_p6 = data_1538_V_read1608_phi_reg_90687.read();
    } else {
        ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_47415_p6 = data_1538_V_read1608_rewind_reg_47411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1539_V_read1609_phi_phi_fu_90704_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1539_V_read1609_phi_phi_fu_90704_p4 = ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_47429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1539_V_read1609_phi_phi_fu_90704_p4 = data_1539_V_read.read();
        } else {
            ap_phi_mux_data_1539_V_read1609_phi_phi_fu_90704_p4 = ap_phi_reg_pp0_iter0_data_1539_V_read1609_phi_reg_90700.read();
        }
    } else {
        ap_phi_mux_data_1539_V_read1609_phi_phi_fu_90704_p4 = ap_phi_reg_pp0_iter0_data_1539_V_read1609_phi_reg_90700.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_47429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_47429_p6 = data_1539_V_read1609_phi_reg_90700.read();
    } else {
        ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_47429_p6 = data_1539_V_read1609_rewind_reg_47425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_153_V_read223_phi_phi_fu_72686_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_153_V_read223_phi_phi_fu_72686_p4 = ap_phi_mux_data_153_V_read223_rewind_phi_fu_28025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_153_V_read223_phi_phi_fu_72686_p4 = data_153_V_read.read();
        } else {
            ap_phi_mux_data_153_V_read223_phi_phi_fu_72686_p4 = ap_phi_reg_pp0_iter0_data_153_V_read223_phi_reg_72682.read();
        }
    } else {
        ap_phi_mux_data_153_V_read223_phi_phi_fu_72686_p4 = ap_phi_reg_pp0_iter0_data_153_V_read223_phi_reg_72682.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_153_V_read223_rewind_phi_fu_28025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_153_V_read223_rewind_phi_fu_28025_p6 = data_153_V_read223_phi_reg_72682.read();
    } else {
        ap_phi_mux_data_153_V_read223_rewind_phi_fu_28025_p6 = data_153_V_read223_rewind_reg_28021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1540_V_read1610_phi_phi_fu_90717_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1540_V_read1610_phi_phi_fu_90717_p4 = ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_47443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1540_V_read1610_phi_phi_fu_90717_p4 = data_1540_V_read.read();
        } else {
            ap_phi_mux_data_1540_V_read1610_phi_phi_fu_90717_p4 = ap_phi_reg_pp0_iter0_data_1540_V_read1610_phi_reg_90713.read();
        }
    } else {
        ap_phi_mux_data_1540_V_read1610_phi_phi_fu_90717_p4 = ap_phi_reg_pp0_iter0_data_1540_V_read1610_phi_reg_90713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_47443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_47443_p6 = data_1540_V_read1610_phi_reg_90713.read();
    } else {
        ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_47443_p6 = data_1540_V_read1610_rewind_reg_47439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1541_V_read1611_phi_phi_fu_90730_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1541_V_read1611_phi_phi_fu_90730_p4 = ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_47457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1541_V_read1611_phi_phi_fu_90730_p4 = data_1541_V_read.read();
        } else {
            ap_phi_mux_data_1541_V_read1611_phi_phi_fu_90730_p4 = ap_phi_reg_pp0_iter0_data_1541_V_read1611_phi_reg_90726.read();
        }
    } else {
        ap_phi_mux_data_1541_V_read1611_phi_phi_fu_90730_p4 = ap_phi_reg_pp0_iter0_data_1541_V_read1611_phi_reg_90726.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_47457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_47457_p6 = data_1541_V_read1611_phi_reg_90726.read();
    } else {
        ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_47457_p6 = data_1541_V_read1611_rewind_reg_47453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1542_V_read1612_phi_phi_fu_90743_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1542_V_read1612_phi_phi_fu_90743_p4 = ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_47471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1542_V_read1612_phi_phi_fu_90743_p4 = data_1542_V_read.read();
        } else {
            ap_phi_mux_data_1542_V_read1612_phi_phi_fu_90743_p4 = ap_phi_reg_pp0_iter0_data_1542_V_read1612_phi_reg_90739.read();
        }
    } else {
        ap_phi_mux_data_1542_V_read1612_phi_phi_fu_90743_p4 = ap_phi_reg_pp0_iter0_data_1542_V_read1612_phi_reg_90739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_47471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_47471_p6 = data_1542_V_read1612_phi_reg_90739.read();
    } else {
        ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_47471_p6 = data_1542_V_read1612_rewind_reg_47467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1543_V_read1613_phi_phi_fu_90756_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1543_V_read1613_phi_phi_fu_90756_p4 = ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_47485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1543_V_read1613_phi_phi_fu_90756_p4 = data_1543_V_read.read();
        } else {
            ap_phi_mux_data_1543_V_read1613_phi_phi_fu_90756_p4 = ap_phi_reg_pp0_iter0_data_1543_V_read1613_phi_reg_90752.read();
        }
    } else {
        ap_phi_mux_data_1543_V_read1613_phi_phi_fu_90756_p4 = ap_phi_reg_pp0_iter0_data_1543_V_read1613_phi_reg_90752.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_47485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_47485_p6 = data_1543_V_read1613_phi_reg_90752.read();
    } else {
        ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_47485_p6 = data_1543_V_read1613_rewind_reg_47481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1544_V_read1614_phi_phi_fu_90769_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1544_V_read1614_phi_phi_fu_90769_p4 = ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_47499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1544_V_read1614_phi_phi_fu_90769_p4 = data_1544_V_read.read();
        } else {
            ap_phi_mux_data_1544_V_read1614_phi_phi_fu_90769_p4 = ap_phi_reg_pp0_iter0_data_1544_V_read1614_phi_reg_90765.read();
        }
    } else {
        ap_phi_mux_data_1544_V_read1614_phi_phi_fu_90769_p4 = ap_phi_reg_pp0_iter0_data_1544_V_read1614_phi_reg_90765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_47499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_47499_p6 = data_1544_V_read1614_phi_reg_90765.read();
    } else {
        ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_47499_p6 = data_1544_V_read1614_rewind_reg_47495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1545_V_read1615_phi_phi_fu_90782_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1545_V_read1615_phi_phi_fu_90782_p4 = ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_47513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1545_V_read1615_phi_phi_fu_90782_p4 = data_1545_V_read.read();
        } else {
            ap_phi_mux_data_1545_V_read1615_phi_phi_fu_90782_p4 = ap_phi_reg_pp0_iter0_data_1545_V_read1615_phi_reg_90778.read();
        }
    } else {
        ap_phi_mux_data_1545_V_read1615_phi_phi_fu_90782_p4 = ap_phi_reg_pp0_iter0_data_1545_V_read1615_phi_reg_90778.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_47513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_47513_p6 = data_1545_V_read1615_phi_reg_90778.read();
    } else {
        ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_47513_p6 = data_1545_V_read1615_rewind_reg_47509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1546_V_read1616_phi_phi_fu_90795_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1546_V_read1616_phi_phi_fu_90795_p4 = ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_47527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1546_V_read1616_phi_phi_fu_90795_p4 = data_1546_V_read.read();
        } else {
            ap_phi_mux_data_1546_V_read1616_phi_phi_fu_90795_p4 = ap_phi_reg_pp0_iter0_data_1546_V_read1616_phi_reg_90791.read();
        }
    } else {
        ap_phi_mux_data_1546_V_read1616_phi_phi_fu_90795_p4 = ap_phi_reg_pp0_iter0_data_1546_V_read1616_phi_reg_90791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_47527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_47527_p6 = data_1546_V_read1616_phi_reg_90791.read();
    } else {
        ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_47527_p6 = data_1546_V_read1616_rewind_reg_47523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1547_V_read1617_phi_phi_fu_90808_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1547_V_read1617_phi_phi_fu_90808_p4 = ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_47541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1547_V_read1617_phi_phi_fu_90808_p4 = data_1547_V_read.read();
        } else {
            ap_phi_mux_data_1547_V_read1617_phi_phi_fu_90808_p4 = ap_phi_reg_pp0_iter0_data_1547_V_read1617_phi_reg_90804.read();
        }
    } else {
        ap_phi_mux_data_1547_V_read1617_phi_phi_fu_90808_p4 = ap_phi_reg_pp0_iter0_data_1547_V_read1617_phi_reg_90804.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_47541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_47541_p6 = data_1547_V_read1617_phi_reg_90804.read();
    } else {
        ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_47541_p6 = data_1547_V_read1617_rewind_reg_47537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1548_V_read1618_phi_phi_fu_90821_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1548_V_read1618_phi_phi_fu_90821_p4 = ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_47555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1548_V_read1618_phi_phi_fu_90821_p4 = data_1548_V_read.read();
        } else {
            ap_phi_mux_data_1548_V_read1618_phi_phi_fu_90821_p4 = ap_phi_reg_pp0_iter0_data_1548_V_read1618_phi_reg_90817.read();
        }
    } else {
        ap_phi_mux_data_1548_V_read1618_phi_phi_fu_90821_p4 = ap_phi_reg_pp0_iter0_data_1548_V_read1618_phi_reg_90817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_47555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_47555_p6 = data_1548_V_read1618_phi_reg_90817.read();
    } else {
        ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_47555_p6 = data_1548_V_read1618_rewind_reg_47551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1549_V_read1619_phi_phi_fu_90834_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1549_V_read1619_phi_phi_fu_90834_p4 = ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_47569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1549_V_read1619_phi_phi_fu_90834_p4 = data_1549_V_read.read();
        } else {
            ap_phi_mux_data_1549_V_read1619_phi_phi_fu_90834_p4 = ap_phi_reg_pp0_iter0_data_1549_V_read1619_phi_reg_90830.read();
        }
    } else {
        ap_phi_mux_data_1549_V_read1619_phi_phi_fu_90834_p4 = ap_phi_reg_pp0_iter0_data_1549_V_read1619_phi_reg_90830.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_47569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_47569_p6 = data_1549_V_read1619_phi_reg_90830.read();
    } else {
        ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_47569_p6 = data_1549_V_read1619_rewind_reg_47565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_154_V_read224_phi_phi_fu_72699_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_154_V_read224_phi_phi_fu_72699_p4 = ap_phi_mux_data_154_V_read224_rewind_phi_fu_28039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_154_V_read224_phi_phi_fu_72699_p4 = data_154_V_read.read();
        } else {
            ap_phi_mux_data_154_V_read224_phi_phi_fu_72699_p4 = ap_phi_reg_pp0_iter0_data_154_V_read224_phi_reg_72695.read();
        }
    } else {
        ap_phi_mux_data_154_V_read224_phi_phi_fu_72699_p4 = ap_phi_reg_pp0_iter0_data_154_V_read224_phi_reg_72695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_154_V_read224_rewind_phi_fu_28039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_154_V_read224_rewind_phi_fu_28039_p6 = data_154_V_read224_phi_reg_72695.read();
    } else {
        ap_phi_mux_data_154_V_read224_rewind_phi_fu_28039_p6 = data_154_V_read224_rewind_reg_28035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1550_V_read1620_phi_phi_fu_90847_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1550_V_read1620_phi_phi_fu_90847_p4 = ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_47583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1550_V_read1620_phi_phi_fu_90847_p4 = data_1550_V_read.read();
        } else {
            ap_phi_mux_data_1550_V_read1620_phi_phi_fu_90847_p4 = ap_phi_reg_pp0_iter0_data_1550_V_read1620_phi_reg_90843.read();
        }
    } else {
        ap_phi_mux_data_1550_V_read1620_phi_phi_fu_90847_p4 = ap_phi_reg_pp0_iter0_data_1550_V_read1620_phi_reg_90843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_47583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_47583_p6 = data_1550_V_read1620_phi_reg_90843.read();
    } else {
        ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_47583_p6 = data_1550_V_read1620_rewind_reg_47579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1551_V_read1621_phi_phi_fu_90860_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1551_V_read1621_phi_phi_fu_90860_p4 = ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_47597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1551_V_read1621_phi_phi_fu_90860_p4 = data_1551_V_read.read();
        } else {
            ap_phi_mux_data_1551_V_read1621_phi_phi_fu_90860_p4 = ap_phi_reg_pp0_iter0_data_1551_V_read1621_phi_reg_90856.read();
        }
    } else {
        ap_phi_mux_data_1551_V_read1621_phi_phi_fu_90860_p4 = ap_phi_reg_pp0_iter0_data_1551_V_read1621_phi_reg_90856.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_47597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_47597_p6 = data_1551_V_read1621_phi_reg_90856.read();
    } else {
        ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_47597_p6 = data_1551_V_read1621_rewind_reg_47593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1552_V_read1622_phi_phi_fu_90873_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1552_V_read1622_phi_phi_fu_90873_p4 = ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_47611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1552_V_read1622_phi_phi_fu_90873_p4 = data_1552_V_read.read();
        } else {
            ap_phi_mux_data_1552_V_read1622_phi_phi_fu_90873_p4 = ap_phi_reg_pp0_iter0_data_1552_V_read1622_phi_reg_90869.read();
        }
    } else {
        ap_phi_mux_data_1552_V_read1622_phi_phi_fu_90873_p4 = ap_phi_reg_pp0_iter0_data_1552_V_read1622_phi_reg_90869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_47611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_47611_p6 = data_1552_V_read1622_phi_reg_90869.read();
    } else {
        ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_47611_p6 = data_1552_V_read1622_rewind_reg_47607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1553_V_read1623_phi_phi_fu_90886_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1553_V_read1623_phi_phi_fu_90886_p4 = ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_47625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1553_V_read1623_phi_phi_fu_90886_p4 = data_1553_V_read.read();
        } else {
            ap_phi_mux_data_1553_V_read1623_phi_phi_fu_90886_p4 = ap_phi_reg_pp0_iter0_data_1553_V_read1623_phi_reg_90882.read();
        }
    } else {
        ap_phi_mux_data_1553_V_read1623_phi_phi_fu_90886_p4 = ap_phi_reg_pp0_iter0_data_1553_V_read1623_phi_reg_90882.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_47625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_47625_p6 = data_1553_V_read1623_phi_reg_90882.read();
    } else {
        ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_47625_p6 = data_1553_V_read1623_rewind_reg_47621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1554_V_read1624_phi_phi_fu_90899_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1554_V_read1624_phi_phi_fu_90899_p4 = ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_47639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1554_V_read1624_phi_phi_fu_90899_p4 = data_1554_V_read.read();
        } else {
            ap_phi_mux_data_1554_V_read1624_phi_phi_fu_90899_p4 = ap_phi_reg_pp0_iter0_data_1554_V_read1624_phi_reg_90895.read();
        }
    } else {
        ap_phi_mux_data_1554_V_read1624_phi_phi_fu_90899_p4 = ap_phi_reg_pp0_iter0_data_1554_V_read1624_phi_reg_90895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_47639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_47639_p6 = data_1554_V_read1624_phi_reg_90895.read();
    } else {
        ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_47639_p6 = data_1554_V_read1624_rewind_reg_47635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1555_V_read1625_phi_phi_fu_90912_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1555_V_read1625_phi_phi_fu_90912_p4 = ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_47653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1555_V_read1625_phi_phi_fu_90912_p4 = data_1555_V_read.read();
        } else {
            ap_phi_mux_data_1555_V_read1625_phi_phi_fu_90912_p4 = ap_phi_reg_pp0_iter0_data_1555_V_read1625_phi_reg_90908.read();
        }
    } else {
        ap_phi_mux_data_1555_V_read1625_phi_phi_fu_90912_p4 = ap_phi_reg_pp0_iter0_data_1555_V_read1625_phi_reg_90908.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_47653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_47653_p6 = data_1555_V_read1625_phi_reg_90908.read();
    } else {
        ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_47653_p6 = data_1555_V_read1625_rewind_reg_47649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1556_V_read1626_phi_phi_fu_90925_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1556_V_read1626_phi_phi_fu_90925_p4 = ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_47667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1556_V_read1626_phi_phi_fu_90925_p4 = data_1556_V_read.read();
        } else {
            ap_phi_mux_data_1556_V_read1626_phi_phi_fu_90925_p4 = ap_phi_reg_pp0_iter0_data_1556_V_read1626_phi_reg_90921.read();
        }
    } else {
        ap_phi_mux_data_1556_V_read1626_phi_phi_fu_90925_p4 = ap_phi_reg_pp0_iter0_data_1556_V_read1626_phi_reg_90921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_47667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_47667_p6 = data_1556_V_read1626_phi_reg_90921.read();
    } else {
        ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_47667_p6 = data_1556_V_read1626_rewind_reg_47663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1557_V_read1627_phi_phi_fu_90938_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1557_V_read1627_phi_phi_fu_90938_p4 = ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_47681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1557_V_read1627_phi_phi_fu_90938_p4 = data_1557_V_read.read();
        } else {
            ap_phi_mux_data_1557_V_read1627_phi_phi_fu_90938_p4 = ap_phi_reg_pp0_iter0_data_1557_V_read1627_phi_reg_90934.read();
        }
    } else {
        ap_phi_mux_data_1557_V_read1627_phi_phi_fu_90938_p4 = ap_phi_reg_pp0_iter0_data_1557_V_read1627_phi_reg_90934.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_47681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_47681_p6 = data_1557_V_read1627_phi_reg_90934.read();
    } else {
        ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_47681_p6 = data_1557_V_read1627_rewind_reg_47677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1558_V_read1628_phi_phi_fu_90951_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1558_V_read1628_phi_phi_fu_90951_p4 = ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_47695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1558_V_read1628_phi_phi_fu_90951_p4 = data_1558_V_read.read();
        } else {
            ap_phi_mux_data_1558_V_read1628_phi_phi_fu_90951_p4 = ap_phi_reg_pp0_iter0_data_1558_V_read1628_phi_reg_90947.read();
        }
    } else {
        ap_phi_mux_data_1558_V_read1628_phi_phi_fu_90951_p4 = ap_phi_reg_pp0_iter0_data_1558_V_read1628_phi_reg_90947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_47695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_47695_p6 = data_1558_V_read1628_phi_reg_90947.read();
    } else {
        ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_47695_p6 = data_1558_V_read1628_rewind_reg_47691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1559_V_read1629_phi_phi_fu_90964_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1559_V_read1629_phi_phi_fu_90964_p4 = ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_47709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1559_V_read1629_phi_phi_fu_90964_p4 = data_1559_V_read.read();
        } else {
            ap_phi_mux_data_1559_V_read1629_phi_phi_fu_90964_p4 = ap_phi_reg_pp0_iter0_data_1559_V_read1629_phi_reg_90960.read();
        }
    } else {
        ap_phi_mux_data_1559_V_read1629_phi_phi_fu_90964_p4 = ap_phi_reg_pp0_iter0_data_1559_V_read1629_phi_reg_90960.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_47709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_47709_p6 = data_1559_V_read1629_phi_reg_90960.read();
    } else {
        ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_47709_p6 = data_1559_V_read1629_rewind_reg_47705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_155_V_read225_phi_phi_fu_72712_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_155_V_read225_phi_phi_fu_72712_p4 = ap_phi_mux_data_155_V_read225_rewind_phi_fu_28053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_155_V_read225_phi_phi_fu_72712_p4 = data_155_V_read.read();
        } else {
            ap_phi_mux_data_155_V_read225_phi_phi_fu_72712_p4 = ap_phi_reg_pp0_iter0_data_155_V_read225_phi_reg_72708.read();
        }
    } else {
        ap_phi_mux_data_155_V_read225_phi_phi_fu_72712_p4 = ap_phi_reg_pp0_iter0_data_155_V_read225_phi_reg_72708.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_155_V_read225_rewind_phi_fu_28053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_155_V_read225_rewind_phi_fu_28053_p6 = data_155_V_read225_phi_reg_72708.read();
    } else {
        ap_phi_mux_data_155_V_read225_rewind_phi_fu_28053_p6 = data_155_V_read225_rewind_reg_28049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1560_V_read1630_phi_phi_fu_90977_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1560_V_read1630_phi_phi_fu_90977_p4 = ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_47723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1560_V_read1630_phi_phi_fu_90977_p4 = data_1560_V_read.read();
        } else {
            ap_phi_mux_data_1560_V_read1630_phi_phi_fu_90977_p4 = ap_phi_reg_pp0_iter0_data_1560_V_read1630_phi_reg_90973.read();
        }
    } else {
        ap_phi_mux_data_1560_V_read1630_phi_phi_fu_90977_p4 = ap_phi_reg_pp0_iter0_data_1560_V_read1630_phi_reg_90973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_47723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_47723_p6 = data_1560_V_read1630_phi_reg_90973.read();
    } else {
        ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_47723_p6 = data_1560_V_read1630_rewind_reg_47719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1561_V_read1631_phi_phi_fu_90990_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1561_V_read1631_phi_phi_fu_90990_p4 = ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_47737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1561_V_read1631_phi_phi_fu_90990_p4 = data_1561_V_read.read();
        } else {
            ap_phi_mux_data_1561_V_read1631_phi_phi_fu_90990_p4 = ap_phi_reg_pp0_iter0_data_1561_V_read1631_phi_reg_90986.read();
        }
    } else {
        ap_phi_mux_data_1561_V_read1631_phi_phi_fu_90990_p4 = ap_phi_reg_pp0_iter0_data_1561_V_read1631_phi_reg_90986.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_47737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_47737_p6 = data_1561_V_read1631_phi_reg_90986.read();
    } else {
        ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_47737_p6 = data_1561_V_read1631_rewind_reg_47733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1562_V_read1632_phi_phi_fu_91003_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1562_V_read1632_phi_phi_fu_91003_p4 = ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_47751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1562_V_read1632_phi_phi_fu_91003_p4 = data_1562_V_read.read();
        } else {
            ap_phi_mux_data_1562_V_read1632_phi_phi_fu_91003_p4 = ap_phi_reg_pp0_iter0_data_1562_V_read1632_phi_reg_90999.read();
        }
    } else {
        ap_phi_mux_data_1562_V_read1632_phi_phi_fu_91003_p4 = ap_phi_reg_pp0_iter0_data_1562_V_read1632_phi_reg_90999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_47751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_47751_p6 = data_1562_V_read1632_phi_reg_90999.read();
    } else {
        ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_47751_p6 = data_1562_V_read1632_rewind_reg_47747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1563_V_read1633_phi_phi_fu_91016_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1563_V_read1633_phi_phi_fu_91016_p4 = ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_47765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1563_V_read1633_phi_phi_fu_91016_p4 = data_1563_V_read.read();
        } else {
            ap_phi_mux_data_1563_V_read1633_phi_phi_fu_91016_p4 = ap_phi_reg_pp0_iter0_data_1563_V_read1633_phi_reg_91012.read();
        }
    } else {
        ap_phi_mux_data_1563_V_read1633_phi_phi_fu_91016_p4 = ap_phi_reg_pp0_iter0_data_1563_V_read1633_phi_reg_91012.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_47765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_47765_p6 = data_1563_V_read1633_phi_reg_91012.read();
    } else {
        ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_47765_p6 = data_1563_V_read1633_rewind_reg_47761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1564_V_read1634_phi_phi_fu_91029_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1564_V_read1634_phi_phi_fu_91029_p4 = ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_47779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1564_V_read1634_phi_phi_fu_91029_p4 = data_1564_V_read.read();
        } else {
            ap_phi_mux_data_1564_V_read1634_phi_phi_fu_91029_p4 = ap_phi_reg_pp0_iter0_data_1564_V_read1634_phi_reg_91025.read();
        }
    } else {
        ap_phi_mux_data_1564_V_read1634_phi_phi_fu_91029_p4 = ap_phi_reg_pp0_iter0_data_1564_V_read1634_phi_reg_91025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_47779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_47779_p6 = data_1564_V_read1634_phi_reg_91025.read();
    } else {
        ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_47779_p6 = data_1564_V_read1634_rewind_reg_47775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1565_V_read1635_phi_phi_fu_91042_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1565_V_read1635_phi_phi_fu_91042_p4 = ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_47793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1565_V_read1635_phi_phi_fu_91042_p4 = data_1565_V_read.read();
        } else {
            ap_phi_mux_data_1565_V_read1635_phi_phi_fu_91042_p4 = ap_phi_reg_pp0_iter0_data_1565_V_read1635_phi_reg_91038.read();
        }
    } else {
        ap_phi_mux_data_1565_V_read1635_phi_phi_fu_91042_p4 = ap_phi_reg_pp0_iter0_data_1565_V_read1635_phi_reg_91038.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_47793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_47793_p6 = data_1565_V_read1635_phi_reg_91038.read();
    } else {
        ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_47793_p6 = data_1565_V_read1635_rewind_reg_47789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1566_V_read1636_phi_phi_fu_91055_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1566_V_read1636_phi_phi_fu_91055_p4 = ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_47807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1566_V_read1636_phi_phi_fu_91055_p4 = data_1566_V_read.read();
        } else {
            ap_phi_mux_data_1566_V_read1636_phi_phi_fu_91055_p4 = ap_phi_reg_pp0_iter0_data_1566_V_read1636_phi_reg_91051.read();
        }
    } else {
        ap_phi_mux_data_1566_V_read1636_phi_phi_fu_91055_p4 = ap_phi_reg_pp0_iter0_data_1566_V_read1636_phi_reg_91051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_47807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_47807_p6 = data_1566_V_read1636_phi_reg_91051.read();
    } else {
        ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_47807_p6 = data_1566_V_read1636_rewind_reg_47803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1567_V_read1637_phi_phi_fu_91068_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1567_V_read1637_phi_phi_fu_91068_p4 = ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_47821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1567_V_read1637_phi_phi_fu_91068_p4 = data_1567_V_read.read();
        } else {
            ap_phi_mux_data_1567_V_read1637_phi_phi_fu_91068_p4 = ap_phi_reg_pp0_iter0_data_1567_V_read1637_phi_reg_91064.read();
        }
    } else {
        ap_phi_mux_data_1567_V_read1637_phi_phi_fu_91068_p4 = ap_phi_reg_pp0_iter0_data_1567_V_read1637_phi_reg_91064.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_47821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_47821_p6 = data_1567_V_read1637_phi_reg_91064.read();
    } else {
        ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_47821_p6 = data_1567_V_read1637_rewind_reg_47817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1568_V_read1638_phi_phi_fu_91081_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1568_V_read1638_phi_phi_fu_91081_p4 = ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_47835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1568_V_read1638_phi_phi_fu_91081_p4 = data_1568_V_read.read();
        } else {
            ap_phi_mux_data_1568_V_read1638_phi_phi_fu_91081_p4 = ap_phi_reg_pp0_iter0_data_1568_V_read1638_phi_reg_91077.read();
        }
    } else {
        ap_phi_mux_data_1568_V_read1638_phi_phi_fu_91081_p4 = ap_phi_reg_pp0_iter0_data_1568_V_read1638_phi_reg_91077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_47835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_47835_p6 = data_1568_V_read1638_phi_reg_91077.read();
    } else {
        ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_47835_p6 = data_1568_V_read1638_rewind_reg_47831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1569_V_read1639_phi_phi_fu_91094_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1569_V_read1639_phi_phi_fu_91094_p4 = ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_47849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1569_V_read1639_phi_phi_fu_91094_p4 = data_1569_V_read.read();
        } else {
            ap_phi_mux_data_1569_V_read1639_phi_phi_fu_91094_p4 = ap_phi_reg_pp0_iter0_data_1569_V_read1639_phi_reg_91090.read();
        }
    } else {
        ap_phi_mux_data_1569_V_read1639_phi_phi_fu_91094_p4 = ap_phi_reg_pp0_iter0_data_1569_V_read1639_phi_reg_91090.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_47849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_47849_p6 = data_1569_V_read1639_phi_reg_91090.read();
    } else {
        ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_47849_p6 = data_1569_V_read1639_rewind_reg_47845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_156_V_read226_phi_phi_fu_72725_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_156_V_read226_phi_phi_fu_72725_p4 = ap_phi_mux_data_156_V_read226_rewind_phi_fu_28067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_156_V_read226_phi_phi_fu_72725_p4 = data_156_V_read.read();
        } else {
            ap_phi_mux_data_156_V_read226_phi_phi_fu_72725_p4 = ap_phi_reg_pp0_iter0_data_156_V_read226_phi_reg_72721.read();
        }
    } else {
        ap_phi_mux_data_156_V_read226_phi_phi_fu_72725_p4 = ap_phi_reg_pp0_iter0_data_156_V_read226_phi_reg_72721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_156_V_read226_rewind_phi_fu_28067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_156_V_read226_rewind_phi_fu_28067_p6 = data_156_V_read226_phi_reg_72721.read();
    } else {
        ap_phi_mux_data_156_V_read226_rewind_phi_fu_28067_p6 = data_156_V_read226_rewind_reg_28063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1570_V_read1640_phi_phi_fu_91107_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1570_V_read1640_phi_phi_fu_91107_p4 = ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_47863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1570_V_read1640_phi_phi_fu_91107_p4 = data_1570_V_read.read();
        } else {
            ap_phi_mux_data_1570_V_read1640_phi_phi_fu_91107_p4 = ap_phi_reg_pp0_iter0_data_1570_V_read1640_phi_reg_91103.read();
        }
    } else {
        ap_phi_mux_data_1570_V_read1640_phi_phi_fu_91107_p4 = ap_phi_reg_pp0_iter0_data_1570_V_read1640_phi_reg_91103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_47863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_47863_p6 = data_1570_V_read1640_phi_reg_91103.read();
    } else {
        ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_47863_p6 = data_1570_V_read1640_rewind_reg_47859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1571_V_read1641_phi_phi_fu_91120_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1571_V_read1641_phi_phi_fu_91120_p4 = ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_47877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1571_V_read1641_phi_phi_fu_91120_p4 = data_1571_V_read.read();
        } else {
            ap_phi_mux_data_1571_V_read1641_phi_phi_fu_91120_p4 = ap_phi_reg_pp0_iter0_data_1571_V_read1641_phi_reg_91116.read();
        }
    } else {
        ap_phi_mux_data_1571_V_read1641_phi_phi_fu_91120_p4 = ap_phi_reg_pp0_iter0_data_1571_V_read1641_phi_reg_91116.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_47877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_47877_p6 = data_1571_V_read1641_phi_reg_91116.read();
    } else {
        ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_47877_p6 = data_1571_V_read1641_rewind_reg_47873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1572_V_read1642_phi_phi_fu_91133_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1572_V_read1642_phi_phi_fu_91133_p4 = ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_47891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1572_V_read1642_phi_phi_fu_91133_p4 = data_1572_V_read.read();
        } else {
            ap_phi_mux_data_1572_V_read1642_phi_phi_fu_91133_p4 = ap_phi_reg_pp0_iter0_data_1572_V_read1642_phi_reg_91129.read();
        }
    } else {
        ap_phi_mux_data_1572_V_read1642_phi_phi_fu_91133_p4 = ap_phi_reg_pp0_iter0_data_1572_V_read1642_phi_reg_91129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_47891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_47891_p6 = data_1572_V_read1642_phi_reg_91129.read();
    } else {
        ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_47891_p6 = data_1572_V_read1642_rewind_reg_47887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1573_V_read1643_phi_phi_fu_91146_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1573_V_read1643_phi_phi_fu_91146_p4 = ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_47905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1573_V_read1643_phi_phi_fu_91146_p4 = data_1573_V_read.read();
        } else {
            ap_phi_mux_data_1573_V_read1643_phi_phi_fu_91146_p4 = ap_phi_reg_pp0_iter0_data_1573_V_read1643_phi_reg_91142.read();
        }
    } else {
        ap_phi_mux_data_1573_V_read1643_phi_phi_fu_91146_p4 = ap_phi_reg_pp0_iter0_data_1573_V_read1643_phi_reg_91142.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_47905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_47905_p6 = data_1573_V_read1643_phi_reg_91142.read();
    } else {
        ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_47905_p6 = data_1573_V_read1643_rewind_reg_47901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1574_V_read1644_phi_phi_fu_91159_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1574_V_read1644_phi_phi_fu_91159_p4 = ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_47919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1574_V_read1644_phi_phi_fu_91159_p4 = data_1574_V_read.read();
        } else {
            ap_phi_mux_data_1574_V_read1644_phi_phi_fu_91159_p4 = ap_phi_reg_pp0_iter0_data_1574_V_read1644_phi_reg_91155.read();
        }
    } else {
        ap_phi_mux_data_1574_V_read1644_phi_phi_fu_91159_p4 = ap_phi_reg_pp0_iter0_data_1574_V_read1644_phi_reg_91155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_47919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_47919_p6 = data_1574_V_read1644_phi_reg_91155.read();
    } else {
        ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_47919_p6 = data_1574_V_read1644_rewind_reg_47915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1575_V_read1645_phi_phi_fu_91172_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1575_V_read1645_phi_phi_fu_91172_p4 = ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_47933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1575_V_read1645_phi_phi_fu_91172_p4 = data_1575_V_read.read();
        } else {
            ap_phi_mux_data_1575_V_read1645_phi_phi_fu_91172_p4 = ap_phi_reg_pp0_iter0_data_1575_V_read1645_phi_reg_91168.read();
        }
    } else {
        ap_phi_mux_data_1575_V_read1645_phi_phi_fu_91172_p4 = ap_phi_reg_pp0_iter0_data_1575_V_read1645_phi_reg_91168.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_47933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_47933_p6 = data_1575_V_read1645_phi_reg_91168.read();
    } else {
        ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_47933_p6 = data_1575_V_read1645_rewind_reg_47929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1576_V_read1646_phi_phi_fu_91185_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1576_V_read1646_phi_phi_fu_91185_p4 = ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_47947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1576_V_read1646_phi_phi_fu_91185_p4 = data_1576_V_read.read();
        } else {
            ap_phi_mux_data_1576_V_read1646_phi_phi_fu_91185_p4 = ap_phi_reg_pp0_iter0_data_1576_V_read1646_phi_reg_91181.read();
        }
    } else {
        ap_phi_mux_data_1576_V_read1646_phi_phi_fu_91185_p4 = ap_phi_reg_pp0_iter0_data_1576_V_read1646_phi_reg_91181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_47947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_47947_p6 = data_1576_V_read1646_phi_reg_91181.read();
    } else {
        ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_47947_p6 = data_1576_V_read1646_rewind_reg_47943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1577_V_read1647_phi_phi_fu_91198_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1577_V_read1647_phi_phi_fu_91198_p4 = ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_47961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1577_V_read1647_phi_phi_fu_91198_p4 = data_1577_V_read.read();
        } else {
            ap_phi_mux_data_1577_V_read1647_phi_phi_fu_91198_p4 = ap_phi_reg_pp0_iter0_data_1577_V_read1647_phi_reg_91194.read();
        }
    } else {
        ap_phi_mux_data_1577_V_read1647_phi_phi_fu_91198_p4 = ap_phi_reg_pp0_iter0_data_1577_V_read1647_phi_reg_91194.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_47961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_47961_p6 = data_1577_V_read1647_phi_reg_91194.read();
    } else {
        ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_47961_p6 = data_1577_V_read1647_rewind_reg_47957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1578_V_read1648_phi_phi_fu_91211_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1578_V_read1648_phi_phi_fu_91211_p4 = ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_47975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1578_V_read1648_phi_phi_fu_91211_p4 = data_1578_V_read.read();
        } else {
            ap_phi_mux_data_1578_V_read1648_phi_phi_fu_91211_p4 = ap_phi_reg_pp0_iter0_data_1578_V_read1648_phi_reg_91207.read();
        }
    } else {
        ap_phi_mux_data_1578_V_read1648_phi_phi_fu_91211_p4 = ap_phi_reg_pp0_iter0_data_1578_V_read1648_phi_reg_91207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_47975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_47975_p6 = data_1578_V_read1648_phi_reg_91207.read();
    } else {
        ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_47975_p6 = data_1578_V_read1648_rewind_reg_47971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1579_V_read1649_phi_phi_fu_91224_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1579_V_read1649_phi_phi_fu_91224_p4 = ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_47989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1579_V_read1649_phi_phi_fu_91224_p4 = data_1579_V_read.read();
        } else {
            ap_phi_mux_data_1579_V_read1649_phi_phi_fu_91224_p4 = ap_phi_reg_pp0_iter0_data_1579_V_read1649_phi_reg_91220.read();
        }
    } else {
        ap_phi_mux_data_1579_V_read1649_phi_phi_fu_91224_p4 = ap_phi_reg_pp0_iter0_data_1579_V_read1649_phi_reg_91220.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_47989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_47989_p6 = data_1579_V_read1649_phi_reg_91220.read();
    } else {
        ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_47989_p6 = data_1579_V_read1649_rewind_reg_47985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_157_V_read227_phi_phi_fu_72738_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_157_V_read227_phi_phi_fu_72738_p4 = ap_phi_mux_data_157_V_read227_rewind_phi_fu_28081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_157_V_read227_phi_phi_fu_72738_p4 = data_157_V_read.read();
        } else {
            ap_phi_mux_data_157_V_read227_phi_phi_fu_72738_p4 = ap_phi_reg_pp0_iter0_data_157_V_read227_phi_reg_72734.read();
        }
    } else {
        ap_phi_mux_data_157_V_read227_phi_phi_fu_72738_p4 = ap_phi_reg_pp0_iter0_data_157_V_read227_phi_reg_72734.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_157_V_read227_rewind_phi_fu_28081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_157_V_read227_rewind_phi_fu_28081_p6 = data_157_V_read227_phi_reg_72734.read();
    } else {
        ap_phi_mux_data_157_V_read227_rewind_phi_fu_28081_p6 = data_157_V_read227_rewind_reg_28077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1580_V_read1650_phi_phi_fu_91237_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1580_V_read1650_phi_phi_fu_91237_p4 = ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_48003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1580_V_read1650_phi_phi_fu_91237_p4 = data_1580_V_read.read();
        } else {
            ap_phi_mux_data_1580_V_read1650_phi_phi_fu_91237_p4 = ap_phi_reg_pp0_iter0_data_1580_V_read1650_phi_reg_91233.read();
        }
    } else {
        ap_phi_mux_data_1580_V_read1650_phi_phi_fu_91237_p4 = ap_phi_reg_pp0_iter0_data_1580_V_read1650_phi_reg_91233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_48003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_48003_p6 = data_1580_V_read1650_phi_reg_91233.read();
    } else {
        ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_48003_p6 = data_1580_V_read1650_rewind_reg_47999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1581_V_read1651_phi_phi_fu_91250_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1581_V_read1651_phi_phi_fu_91250_p4 = ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_48017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1581_V_read1651_phi_phi_fu_91250_p4 = data_1581_V_read.read();
        } else {
            ap_phi_mux_data_1581_V_read1651_phi_phi_fu_91250_p4 = ap_phi_reg_pp0_iter0_data_1581_V_read1651_phi_reg_91246.read();
        }
    } else {
        ap_phi_mux_data_1581_V_read1651_phi_phi_fu_91250_p4 = ap_phi_reg_pp0_iter0_data_1581_V_read1651_phi_reg_91246.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_48017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_48017_p6 = data_1581_V_read1651_phi_reg_91246.read();
    } else {
        ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_48017_p6 = data_1581_V_read1651_rewind_reg_48013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1582_V_read1652_phi_phi_fu_91263_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1582_V_read1652_phi_phi_fu_91263_p4 = ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_48031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1582_V_read1652_phi_phi_fu_91263_p4 = data_1582_V_read.read();
        } else {
            ap_phi_mux_data_1582_V_read1652_phi_phi_fu_91263_p4 = ap_phi_reg_pp0_iter0_data_1582_V_read1652_phi_reg_91259.read();
        }
    } else {
        ap_phi_mux_data_1582_V_read1652_phi_phi_fu_91263_p4 = ap_phi_reg_pp0_iter0_data_1582_V_read1652_phi_reg_91259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_48031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_48031_p6 = data_1582_V_read1652_phi_reg_91259.read();
    } else {
        ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_48031_p6 = data_1582_V_read1652_rewind_reg_48027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1583_V_read1653_phi_phi_fu_91276_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1583_V_read1653_phi_phi_fu_91276_p4 = ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_48045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1583_V_read1653_phi_phi_fu_91276_p4 = data_1583_V_read.read();
        } else {
            ap_phi_mux_data_1583_V_read1653_phi_phi_fu_91276_p4 = ap_phi_reg_pp0_iter0_data_1583_V_read1653_phi_reg_91272.read();
        }
    } else {
        ap_phi_mux_data_1583_V_read1653_phi_phi_fu_91276_p4 = ap_phi_reg_pp0_iter0_data_1583_V_read1653_phi_reg_91272.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_48045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_48045_p6 = data_1583_V_read1653_phi_reg_91272.read();
    } else {
        ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_48045_p6 = data_1583_V_read1653_rewind_reg_48041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1584_V_read1654_phi_phi_fu_91289_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1584_V_read1654_phi_phi_fu_91289_p4 = ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_48059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1584_V_read1654_phi_phi_fu_91289_p4 = data_1584_V_read.read();
        } else {
            ap_phi_mux_data_1584_V_read1654_phi_phi_fu_91289_p4 = ap_phi_reg_pp0_iter0_data_1584_V_read1654_phi_reg_91285.read();
        }
    } else {
        ap_phi_mux_data_1584_V_read1654_phi_phi_fu_91289_p4 = ap_phi_reg_pp0_iter0_data_1584_V_read1654_phi_reg_91285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_48059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_48059_p6 = data_1584_V_read1654_phi_reg_91285.read();
    } else {
        ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_48059_p6 = data_1584_V_read1654_rewind_reg_48055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1585_V_read1655_phi_phi_fu_91302_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1585_V_read1655_phi_phi_fu_91302_p4 = ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_48073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1585_V_read1655_phi_phi_fu_91302_p4 = data_1585_V_read.read();
        } else {
            ap_phi_mux_data_1585_V_read1655_phi_phi_fu_91302_p4 = ap_phi_reg_pp0_iter0_data_1585_V_read1655_phi_reg_91298.read();
        }
    } else {
        ap_phi_mux_data_1585_V_read1655_phi_phi_fu_91302_p4 = ap_phi_reg_pp0_iter0_data_1585_V_read1655_phi_reg_91298.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_48073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_48073_p6 = data_1585_V_read1655_phi_reg_91298.read();
    } else {
        ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_48073_p6 = data_1585_V_read1655_rewind_reg_48069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1586_V_read1656_phi_phi_fu_91315_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1586_V_read1656_phi_phi_fu_91315_p4 = ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_48087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1586_V_read1656_phi_phi_fu_91315_p4 = data_1586_V_read.read();
        } else {
            ap_phi_mux_data_1586_V_read1656_phi_phi_fu_91315_p4 = ap_phi_reg_pp0_iter0_data_1586_V_read1656_phi_reg_91311.read();
        }
    } else {
        ap_phi_mux_data_1586_V_read1656_phi_phi_fu_91315_p4 = ap_phi_reg_pp0_iter0_data_1586_V_read1656_phi_reg_91311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_48087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_48087_p6 = data_1586_V_read1656_phi_reg_91311.read();
    } else {
        ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_48087_p6 = data_1586_V_read1656_rewind_reg_48083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1587_V_read1657_phi_phi_fu_91328_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1587_V_read1657_phi_phi_fu_91328_p4 = ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_48101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1587_V_read1657_phi_phi_fu_91328_p4 = data_1587_V_read.read();
        } else {
            ap_phi_mux_data_1587_V_read1657_phi_phi_fu_91328_p4 = ap_phi_reg_pp0_iter0_data_1587_V_read1657_phi_reg_91324.read();
        }
    } else {
        ap_phi_mux_data_1587_V_read1657_phi_phi_fu_91328_p4 = ap_phi_reg_pp0_iter0_data_1587_V_read1657_phi_reg_91324.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_48101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_48101_p6 = data_1587_V_read1657_phi_reg_91324.read();
    } else {
        ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_48101_p6 = data_1587_V_read1657_rewind_reg_48097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1588_V_read1658_phi_phi_fu_91341_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1588_V_read1658_phi_phi_fu_91341_p4 = ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_48115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1588_V_read1658_phi_phi_fu_91341_p4 = data_1588_V_read.read();
        } else {
            ap_phi_mux_data_1588_V_read1658_phi_phi_fu_91341_p4 = ap_phi_reg_pp0_iter0_data_1588_V_read1658_phi_reg_91337.read();
        }
    } else {
        ap_phi_mux_data_1588_V_read1658_phi_phi_fu_91341_p4 = ap_phi_reg_pp0_iter0_data_1588_V_read1658_phi_reg_91337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_48115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_48115_p6 = data_1588_V_read1658_phi_reg_91337.read();
    } else {
        ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_48115_p6 = data_1588_V_read1658_rewind_reg_48111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1589_V_read1659_phi_phi_fu_91354_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1589_V_read1659_phi_phi_fu_91354_p4 = ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_48129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1589_V_read1659_phi_phi_fu_91354_p4 = data_1589_V_read.read();
        } else {
            ap_phi_mux_data_1589_V_read1659_phi_phi_fu_91354_p4 = ap_phi_reg_pp0_iter0_data_1589_V_read1659_phi_reg_91350.read();
        }
    } else {
        ap_phi_mux_data_1589_V_read1659_phi_phi_fu_91354_p4 = ap_phi_reg_pp0_iter0_data_1589_V_read1659_phi_reg_91350.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_48129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_48129_p6 = data_1589_V_read1659_phi_reg_91350.read();
    } else {
        ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_48129_p6 = data_1589_V_read1659_rewind_reg_48125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_158_V_read228_phi_phi_fu_72751_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_158_V_read228_phi_phi_fu_72751_p4 = ap_phi_mux_data_158_V_read228_rewind_phi_fu_28095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_158_V_read228_phi_phi_fu_72751_p4 = data_158_V_read.read();
        } else {
            ap_phi_mux_data_158_V_read228_phi_phi_fu_72751_p4 = ap_phi_reg_pp0_iter0_data_158_V_read228_phi_reg_72747.read();
        }
    } else {
        ap_phi_mux_data_158_V_read228_phi_phi_fu_72751_p4 = ap_phi_reg_pp0_iter0_data_158_V_read228_phi_reg_72747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_158_V_read228_rewind_phi_fu_28095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_158_V_read228_rewind_phi_fu_28095_p6 = data_158_V_read228_phi_reg_72747.read();
    } else {
        ap_phi_mux_data_158_V_read228_rewind_phi_fu_28095_p6 = data_158_V_read228_rewind_reg_28091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1590_V_read1660_phi_phi_fu_91367_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1590_V_read1660_phi_phi_fu_91367_p4 = ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_48143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1590_V_read1660_phi_phi_fu_91367_p4 = data_1590_V_read.read();
        } else {
            ap_phi_mux_data_1590_V_read1660_phi_phi_fu_91367_p4 = ap_phi_reg_pp0_iter0_data_1590_V_read1660_phi_reg_91363.read();
        }
    } else {
        ap_phi_mux_data_1590_V_read1660_phi_phi_fu_91367_p4 = ap_phi_reg_pp0_iter0_data_1590_V_read1660_phi_reg_91363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_48143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_48143_p6 = data_1590_V_read1660_phi_reg_91363.read();
    } else {
        ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_48143_p6 = data_1590_V_read1660_rewind_reg_48139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1591_V_read1661_phi_phi_fu_91380_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1591_V_read1661_phi_phi_fu_91380_p4 = ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_48157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1591_V_read1661_phi_phi_fu_91380_p4 = data_1591_V_read.read();
        } else {
            ap_phi_mux_data_1591_V_read1661_phi_phi_fu_91380_p4 = ap_phi_reg_pp0_iter0_data_1591_V_read1661_phi_reg_91376.read();
        }
    } else {
        ap_phi_mux_data_1591_V_read1661_phi_phi_fu_91380_p4 = ap_phi_reg_pp0_iter0_data_1591_V_read1661_phi_reg_91376.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_48157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_48157_p6 = data_1591_V_read1661_phi_reg_91376.read();
    } else {
        ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_48157_p6 = data_1591_V_read1661_rewind_reg_48153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1592_V_read1662_phi_phi_fu_91393_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1592_V_read1662_phi_phi_fu_91393_p4 = ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_48171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1592_V_read1662_phi_phi_fu_91393_p4 = data_1592_V_read.read();
        } else {
            ap_phi_mux_data_1592_V_read1662_phi_phi_fu_91393_p4 = ap_phi_reg_pp0_iter0_data_1592_V_read1662_phi_reg_91389.read();
        }
    } else {
        ap_phi_mux_data_1592_V_read1662_phi_phi_fu_91393_p4 = ap_phi_reg_pp0_iter0_data_1592_V_read1662_phi_reg_91389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_48171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_48171_p6 = data_1592_V_read1662_phi_reg_91389.read();
    } else {
        ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_48171_p6 = data_1592_V_read1662_rewind_reg_48167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1593_V_read1663_phi_phi_fu_91406_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1593_V_read1663_phi_phi_fu_91406_p4 = ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_48185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1593_V_read1663_phi_phi_fu_91406_p4 = data_1593_V_read.read();
        } else {
            ap_phi_mux_data_1593_V_read1663_phi_phi_fu_91406_p4 = ap_phi_reg_pp0_iter0_data_1593_V_read1663_phi_reg_91402.read();
        }
    } else {
        ap_phi_mux_data_1593_V_read1663_phi_phi_fu_91406_p4 = ap_phi_reg_pp0_iter0_data_1593_V_read1663_phi_reg_91402.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_48185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_48185_p6 = data_1593_V_read1663_phi_reg_91402.read();
    } else {
        ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_48185_p6 = data_1593_V_read1663_rewind_reg_48181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1594_V_read1664_phi_phi_fu_91419_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1594_V_read1664_phi_phi_fu_91419_p4 = ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_48199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1594_V_read1664_phi_phi_fu_91419_p4 = data_1594_V_read.read();
        } else {
            ap_phi_mux_data_1594_V_read1664_phi_phi_fu_91419_p4 = ap_phi_reg_pp0_iter0_data_1594_V_read1664_phi_reg_91415.read();
        }
    } else {
        ap_phi_mux_data_1594_V_read1664_phi_phi_fu_91419_p4 = ap_phi_reg_pp0_iter0_data_1594_V_read1664_phi_reg_91415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_48199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_48199_p6 = data_1594_V_read1664_phi_reg_91415.read();
    } else {
        ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_48199_p6 = data_1594_V_read1664_rewind_reg_48195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1595_V_read1665_phi_phi_fu_91432_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1595_V_read1665_phi_phi_fu_91432_p4 = ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_48213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1595_V_read1665_phi_phi_fu_91432_p4 = data_1595_V_read.read();
        } else {
            ap_phi_mux_data_1595_V_read1665_phi_phi_fu_91432_p4 = ap_phi_reg_pp0_iter0_data_1595_V_read1665_phi_reg_91428.read();
        }
    } else {
        ap_phi_mux_data_1595_V_read1665_phi_phi_fu_91432_p4 = ap_phi_reg_pp0_iter0_data_1595_V_read1665_phi_reg_91428.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_48213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_48213_p6 = data_1595_V_read1665_phi_reg_91428.read();
    } else {
        ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_48213_p6 = data_1595_V_read1665_rewind_reg_48209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1596_V_read1666_phi_phi_fu_91445_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1596_V_read1666_phi_phi_fu_91445_p4 = ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_48227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1596_V_read1666_phi_phi_fu_91445_p4 = data_1596_V_read.read();
        } else {
            ap_phi_mux_data_1596_V_read1666_phi_phi_fu_91445_p4 = ap_phi_reg_pp0_iter0_data_1596_V_read1666_phi_reg_91441.read();
        }
    } else {
        ap_phi_mux_data_1596_V_read1666_phi_phi_fu_91445_p4 = ap_phi_reg_pp0_iter0_data_1596_V_read1666_phi_reg_91441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_48227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_48227_p6 = data_1596_V_read1666_phi_reg_91441.read();
    } else {
        ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_48227_p6 = data_1596_V_read1666_rewind_reg_48223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1597_V_read1667_phi_phi_fu_91458_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1597_V_read1667_phi_phi_fu_91458_p4 = ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_48241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1597_V_read1667_phi_phi_fu_91458_p4 = data_1597_V_read.read();
        } else {
            ap_phi_mux_data_1597_V_read1667_phi_phi_fu_91458_p4 = ap_phi_reg_pp0_iter0_data_1597_V_read1667_phi_reg_91454.read();
        }
    } else {
        ap_phi_mux_data_1597_V_read1667_phi_phi_fu_91458_p4 = ap_phi_reg_pp0_iter0_data_1597_V_read1667_phi_reg_91454.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_48241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_48241_p6 = data_1597_V_read1667_phi_reg_91454.read();
    } else {
        ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_48241_p6 = data_1597_V_read1667_rewind_reg_48237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1598_V_read1668_phi_phi_fu_91471_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1598_V_read1668_phi_phi_fu_91471_p4 = ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_48255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1598_V_read1668_phi_phi_fu_91471_p4 = data_1598_V_read.read();
        } else {
            ap_phi_mux_data_1598_V_read1668_phi_phi_fu_91471_p4 = ap_phi_reg_pp0_iter0_data_1598_V_read1668_phi_reg_91467.read();
        }
    } else {
        ap_phi_mux_data_1598_V_read1668_phi_phi_fu_91471_p4 = ap_phi_reg_pp0_iter0_data_1598_V_read1668_phi_reg_91467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_48255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_48255_p6 = data_1598_V_read1668_phi_reg_91467.read();
    } else {
        ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_48255_p6 = data_1598_V_read1668_rewind_reg_48251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1599_V_read1669_phi_phi_fu_91484_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1599_V_read1669_phi_phi_fu_91484_p4 = ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_48269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1599_V_read1669_phi_phi_fu_91484_p4 = data_1599_V_read.read();
        } else {
            ap_phi_mux_data_1599_V_read1669_phi_phi_fu_91484_p4 = ap_phi_reg_pp0_iter0_data_1599_V_read1669_phi_reg_91480.read();
        }
    } else {
        ap_phi_mux_data_1599_V_read1669_phi_phi_fu_91484_p4 = ap_phi_reg_pp0_iter0_data_1599_V_read1669_phi_reg_91480.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_48269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_48269_p6 = data_1599_V_read1669_phi_reg_91480.read();
    } else {
        ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_48269_p6 = data_1599_V_read1669_rewind_reg_48265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_159_V_read229_phi_phi_fu_72764_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_159_V_read229_phi_phi_fu_72764_p4 = ap_phi_mux_data_159_V_read229_rewind_phi_fu_28109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_159_V_read229_phi_phi_fu_72764_p4 = data_159_V_read.read();
        } else {
            ap_phi_mux_data_159_V_read229_phi_phi_fu_72764_p4 = ap_phi_reg_pp0_iter0_data_159_V_read229_phi_reg_72760.read();
        }
    } else {
        ap_phi_mux_data_159_V_read229_phi_phi_fu_72764_p4 = ap_phi_reg_pp0_iter0_data_159_V_read229_phi_reg_72760.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_159_V_read229_rewind_phi_fu_28109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_159_V_read229_rewind_phi_fu_28109_p6 = data_159_V_read229_phi_reg_72760.read();
    } else {
        ap_phi_mux_data_159_V_read229_rewind_phi_fu_28109_p6 = data_159_V_read229_rewind_reg_28105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_15_V_read85_phi_phi_fu_70892_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_15_V_read85_phi_phi_fu_70892_p4 = ap_phi_mux_data_15_V_read85_rewind_phi_fu_26093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_15_V_read85_phi_phi_fu_70892_p4 = data_15_V_read.read();
        } else {
            ap_phi_mux_data_15_V_read85_phi_phi_fu_70892_p4 = ap_phi_reg_pp0_iter0_data_15_V_read85_phi_reg_70888.read();
        }
    } else {
        ap_phi_mux_data_15_V_read85_phi_phi_fu_70892_p4 = ap_phi_reg_pp0_iter0_data_15_V_read85_phi_reg_70888.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_15_V_read85_rewind_phi_fu_26093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_15_V_read85_rewind_phi_fu_26093_p6 = data_15_V_read85_phi_reg_70888.read();
    } else {
        ap_phi_mux_data_15_V_read85_rewind_phi_fu_26093_p6 = data_15_V_read85_rewind_reg_26089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1600_V_read1670_phi_phi_fu_91497_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1600_V_read1670_phi_phi_fu_91497_p4 = ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_48283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1600_V_read1670_phi_phi_fu_91497_p4 = data_1600_V_read.read();
        } else {
            ap_phi_mux_data_1600_V_read1670_phi_phi_fu_91497_p4 = ap_phi_reg_pp0_iter0_data_1600_V_read1670_phi_reg_91493.read();
        }
    } else {
        ap_phi_mux_data_1600_V_read1670_phi_phi_fu_91497_p4 = ap_phi_reg_pp0_iter0_data_1600_V_read1670_phi_reg_91493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_48283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_48283_p6 = data_1600_V_read1670_phi_reg_91493.read();
    } else {
        ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_48283_p6 = data_1600_V_read1670_rewind_reg_48279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1601_V_read1671_phi_phi_fu_91510_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1601_V_read1671_phi_phi_fu_91510_p4 = ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_48297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1601_V_read1671_phi_phi_fu_91510_p4 = data_1601_V_read.read();
        } else {
            ap_phi_mux_data_1601_V_read1671_phi_phi_fu_91510_p4 = ap_phi_reg_pp0_iter0_data_1601_V_read1671_phi_reg_91506.read();
        }
    } else {
        ap_phi_mux_data_1601_V_read1671_phi_phi_fu_91510_p4 = ap_phi_reg_pp0_iter0_data_1601_V_read1671_phi_reg_91506.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_48297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_48297_p6 = data_1601_V_read1671_phi_reg_91506.read();
    } else {
        ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_48297_p6 = data_1601_V_read1671_rewind_reg_48293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1602_V_read1672_phi_phi_fu_91523_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1602_V_read1672_phi_phi_fu_91523_p4 = ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_48311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1602_V_read1672_phi_phi_fu_91523_p4 = data_1602_V_read.read();
        } else {
            ap_phi_mux_data_1602_V_read1672_phi_phi_fu_91523_p4 = ap_phi_reg_pp0_iter0_data_1602_V_read1672_phi_reg_91519.read();
        }
    } else {
        ap_phi_mux_data_1602_V_read1672_phi_phi_fu_91523_p4 = ap_phi_reg_pp0_iter0_data_1602_V_read1672_phi_reg_91519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_48311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_48311_p6 = data_1602_V_read1672_phi_reg_91519.read();
    } else {
        ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_48311_p6 = data_1602_V_read1672_rewind_reg_48307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1603_V_read1673_phi_phi_fu_91536_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1603_V_read1673_phi_phi_fu_91536_p4 = ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_48325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1603_V_read1673_phi_phi_fu_91536_p4 = data_1603_V_read.read();
        } else {
            ap_phi_mux_data_1603_V_read1673_phi_phi_fu_91536_p4 = ap_phi_reg_pp0_iter0_data_1603_V_read1673_phi_reg_91532.read();
        }
    } else {
        ap_phi_mux_data_1603_V_read1673_phi_phi_fu_91536_p4 = ap_phi_reg_pp0_iter0_data_1603_V_read1673_phi_reg_91532.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_48325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_48325_p6 = data_1603_V_read1673_phi_reg_91532.read();
    } else {
        ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_48325_p6 = data_1603_V_read1673_rewind_reg_48321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1604_V_read1674_phi_phi_fu_91549_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1604_V_read1674_phi_phi_fu_91549_p4 = ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_48339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1604_V_read1674_phi_phi_fu_91549_p4 = data_1604_V_read.read();
        } else {
            ap_phi_mux_data_1604_V_read1674_phi_phi_fu_91549_p4 = ap_phi_reg_pp0_iter0_data_1604_V_read1674_phi_reg_91545.read();
        }
    } else {
        ap_phi_mux_data_1604_V_read1674_phi_phi_fu_91549_p4 = ap_phi_reg_pp0_iter0_data_1604_V_read1674_phi_reg_91545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_48339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_48339_p6 = data_1604_V_read1674_phi_reg_91545.read();
    } else {
        ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_48339_p6 = data_1604_V_read1674_rewind_reg_48335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1605_V_read1675_phi_phi_fu_91562_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1605_V_read1675_phi_phi_fu_91562_p4 = ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_48353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1605_V_read1675_phi_phi_fu_91562_p4 = data_1605_V_read.read();
        } else {
            ap_phi_mux_data_1605_V_read1675_phi_phi_fu_91562_p4 = ap_phi_reg_pp0_iter0_data_1605_V_read1675_phi_reg_91558.read();
        }
    } else {
        ap_phi_mux_data_1605_V_read1675_phi_phi_fu_91562_p4 = ap_phi_reg_pp0_iter0_data_1605_V_read1675_phi_reg_91558.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_48353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_48353_p6 = data_1605_V_read1675_phi_reg_91558.read();
    } else {
        ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_48353_p6 = data_1605_V_read1675_rewind_reg_48349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1606_V_read1676_phi_phi_fu_91575_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1606_V_read1676_phi_phi_fu_91575_p4 = ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_48367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1606_V_read1676_phi_phi_fu_91575_p4 = data_1606_V_read.read();
        } else {
            ap_phi_mux_data_1606_V_read1676_phi_phi_fu_91575_p4 = ap_phi_reg_pp0_iter0_data_1606_V_read1676_phi_reg_91571.read();
        }
    } else {
        ap_phi_mux_data_1606_V_read1676_phi_phi_fu_91575_p4 = ap_phi_reg_pp0_iter0_data_1606_V_read1676_phi_reg_91571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_48367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_48367_p6 = data_1606_V_read1676_phi_reg_91571.read();
    } else {
        ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_48367_p6 = data_1606_V_read1676_rewind_reg_48363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1607_V_read1677_phi_phi_fu_91588_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1607_V_read1677_phi_phi_fu_91588_p4 = ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_48381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1607_V_read1677_phi_phi_fu_91588_p4 = data_1607_V_read.read();
        } else {
            ap_phi_mux_data_1607_V_read1677_phi_phi_fu_91588_p4 = ap_phi_reg_pp0_iter0_data_1607_V_read1677_phi_reg_91584.read();
        }
    } else {
        ap_phi_mux_data_1607_V_read1677_phi_phi_fu_91588_p4 = ap_phi_reg_pp0_iter0_data_1607_V_read1677_phi_reg_91584.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_48381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_48381_p6 = data_1607_V_read1677_phi_reg_91584.read();
    } else {
        ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_48381_p6 = data_1607_V_read1677_rewind_reg_48377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1608_V_read1678_phi_phi_fu_91601_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1608_V_read1678_phi_phi_fu_91601_p4 = ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_48395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1608_V_read1678_phi_phi_fu_91601_p4 = data_1608_V_read.read();
        } else {
            ap_phi_mux_data_1608_V_read1678_phi_phi_fu_91601_p4 = ap_phi_reg_pp0_iter0_data_1608_V_read1678_phi_reg_91597.read();
        }
    } else {
        ap_phi_mux_data_1608_V_read1678_phi_phi_fu_91601_p4 = ap_phi_reg_pp0_iter0_data_1608_V_read1678_phi_reg_91597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_48395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_48395_p6 = data_1608_V_read1678_phi_reg_91597.read();
    } else {
        ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_48395_p6 = data_1608_V_read1678_rewind_reg_48391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1609_V_read1679_phi_phi_fu_91614_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1609_V_read1679_phi_phi_fu_91614_p4 = ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_48409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1609_V_read1679_phi_phi_fu_91614_p4 = data_1609_V_read.read();
        } else {
            ap_phi_mux_data_1609_V_read1679_phi_phi_fu_91614_p4 = ap_phi_reg_pp0_iter0_data_1609_V_read1679_phi_reg_91610.read();
        }
    } else {
        ap_phi_mux_data_1609_V_read1679_phi_phi_fu_91614_p4 = ap_phi_reg_pp0_iter0_data_1609_V_read1679_phi_reg_91610.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_48409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_48409_p6 = data_1609_V_read1679_phi_reg_91610.read();
    } else {
        ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_48409_p6 = data_1609_V_read1679_rewind_reg_48405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_160_V_read230_phi_phi_fu_72777_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_160_V_read230_phi_phi_fu_72777_p4 = ap_phi_mux_data_160_V_read230_rewind_phi_fu_28123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_160_V_read230_phi_phi_fu_72777_p4 = data_160_V_read.read();
        } else {
            ap_phi_mux_data_160_V_read230_phi_phi_fu_72777_p4 = ap_phi_reg_pp0_iter0_data_160_V_read230_phi_reg_72773.read();
        }
    } else {
        ap_phi_mux_data_160_V_read230_phi_phi_fu_72777_p4 = ap_phi_reg_pp0_iter0_data_160_V_read230_phi_reg_72773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_160_V_read230_rewind_phi_fu_28123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_160_V_read230_rewind_phi_fu_28123_p6 = data_160_V_read230_phi_reg_72773.read();
    } else {
        ap_phi_mux_data_160_V_read230_rewind_phi_fu_28123_p6 = data_160_V_read230_rewind_reg_28119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1610_V_read1680_phi_phi_fu_91627_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1610_V_read1680_phi_phi_fu_91627_p4 = ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_48423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1610_V_read1680_phi_phi_fu_91627_p4 = data_1610_V_read.read();
        } else {
            ap_phi_mux_data_1610_V_read1680_phi_phi_fu_91627_p4 = ap_phi_reg_pp0_iter0_data_1610_V_read1680_phi_reg_91623.read();
        }
    } else {
        ap_phi_mux_data_1610_V_read1680_phi_phi_fu_91627_p4 = ap_phi_reg_pp0_iter0_data_1610_V_read1680_phi_reg_91623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_48423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_48423_p6 = data_1610_V_read1680_phi_reg_91623.read();
    } else {
        ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_48423_p6 = data_1610_V_read1680_rewind_reg_48419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1611_V_read1681_phi_phi_fu_91640_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1611_V_read1681_phi_phi_fu_91640_p4 = ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_48437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1611_V_read1681_phi_phi_fu_91640_p4 = data_1611_V_read.read();
        } else {
            ap_phi_mux_data_1611_V_read1681_phi_phi_fu_91640_p4 = ap_phi_reg_pp0_iter0_data_1611_V_read1681_phi_reg_91636.read();
        }
    } else {
        ap_phi_mux_data_1611_V_read1681_phi_phi_fu_91640_p4 = ap_phi_reg_pp0_iter0_data_1611_V_read1681_phi_reg_91636.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_48437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_48437_p6 = data_1611_V_read1681_phi_reg_91636.read();
    } else {
        ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_48437_p6 = data_1611_V_read1681_rewind_reg_48433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1612_V_read1682_phi_phi_fu_91653_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1612_V_read1682_phi_phi_fu_91653_p4 = ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_48451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1612_V_read1682_phi_phi_fu_91653_p4 = data_1612_V_read.read();
        } else {
            ap_phi_mux_data_1612_V_read1682_phi_phi_fu_91653_p4 = ap_phi_reg_pp0_iter0_data_1612_V_read1682_phi_reg_91649.read();
        }
    } else {
        ap_phi_mux_data_1612_V_read1682_phi_phi_fu_91653_p4 = ap_phi_reg_pp0_iter0_data_1612_V_read1682_phi_reg_91649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_48451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_48451_p6 = data_1612_V_read1682_phi_reg_91649.read();
    } else {
        ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_48451_p6 = data_1612_V_read1682_rewind_reg_48447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1613_V_read1683_phi_phi_fu_91666_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1613_V_read1683_phi_phi_fu_91666_p4 = ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_48465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1613_V_read1683_phi_phi_fu_91666_p4 = data_1613_V_read.read();
        } else {
            ap_phi_mux_data_1613_V_read1683_phi_phi_fu_91666_p4 = ap_phi_reg_pp0_iter0_data_1613_V_read1683_phi_reg_91662.read();
        }
    } else {
        ap_phi_mux_data_1613_V_read1683_phi_phi_fu_91666_p4 = ap_phi_reg_pp0_iter0_data_1613_V_read1683_phi_reg_91662.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_48465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_48465_p6 = data_1613_V_read1683_phi_reg_91662.read();
    } else {
        ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_48465_p6 = data_1613_V_read1683_rewind_reg_48461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1614_V_read1684_phi_phi_fu_91679_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1614_V_read1684_phi_phi_fu_91679_p4 = ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_48479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1614_V_read1684_phi_phi_fu_91679_p4 = data_1614_V_read.read();
        } else {
            ap_phi_mux_data_1614_V_read1684_phi_phi_fu_91679_p4 = ap_phi_reg_pp0_iter0_data_1614_V_read1684_phi_reg_91675.read();
        }
    } else {
        ap_phi_mux_data_1614_V_read1684_phi_phi_fu_91679_p4 = ap_phi_reg_pp0_iter0_data_1614_V_read1684_phi_reg_91675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_48479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_48479_p6 = data_1614_V_read1684_phi_reg_91675.read();
    } else {
        ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_48479_p6 = data_1614_V_read1684_rewind_reg_48475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1615_V_read1685_phi_phi_fu_91692_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1615_V_read1685_phi_phi_fu_91692_p4 = ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_48493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1615_V_read1685_phi_phi_fu_91692_p4 = data_1615_V_read.read();
        } else {
            ap_phi_mux_data_1615_V_read1685_phi_phi_fu_91692_p4 = ap_phi_reg_pp0_iter0_data_1615_V_read1685_phi_reg_91688.read();
        }
    } else {
        ap_phi_mux_data_1615_V_read1685_phi_phi_fu_91692_p4 = ap_phi_reg_pp0_iter0_data_1615_V_read1685_phi_reg_91688.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_48493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_48493_p6 = data_1615_V_read1685_phi_reg_91688.read();
    } else {
        ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_48493_p6 = data_1615_V_read1685_rewind_reg_48489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1616_V_read1686_phi_phi_fu_91705_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1616_V_read1686_phi_phi_fu_91705_p4 = ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_48507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1616_V_read1686_phi_phi_fu_91705_p4 = data_1616_V_read.read();
        } else {
            ap_phi_mux_data_1616_V_read1686_phi_phi_fu_91705_p4 = ap_phi_reg_pp0_iter0_data_1616_V_read1686_phi_reg_91701.read();
        }
    } else {
        ap_phi_mux_data_1616_V_read1686_phi_phi_fu_91705_p4 = ap_phi_reg_pp0_iter0_data_1616_V_read1686_phi_reg_91701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_48507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_48507_p6 = data_1616_V_read1686_phi_reg_91701.read();
    } else {
        ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_48507_p6 = data_1616_V_read1686_rewind_reg_48503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1617_V_read1687_phi_phi_fu_91718_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1617_V_read1687_phi_phi_fu_91718_p4 = ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_48521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1617_V_read1687_phi_phi_fu_91718_p4 = data_1617_V_read.read();
        } else {
            ap_phi_mux_data_1617_V_read1687_phi_phi_fu_91718_p4 = ap_phi_reg_pp0_iter0_data_1617_V_read1687_phi_reg_91714.read();
        }
    } else {
        ap_phi_mux_data_1617_V_read1687_phi_phi_fu_91718_p4 = ap_phi_reg_pp0_iter0_data_1617_V_read1687_phi_reg_91714.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_48521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_48521_p6 = data_1617_V_read1687_phi_reg_91714.read();
    } else {
        ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_48521_p6 = data_1617_V_read1687_rewind_reg_48517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1618_V_read1688_phi_phi_fu_91731_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1618_V_read1688_phi_phi_fu_91731_p4 = ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_48535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1618_V_read1688_phi_phi_fu_91731_p4 = data_1618_V_read.read();
        } else {
            ap_phi_mux_data_1618_V_read1688_phi_phi_fu_91731_p4 = ap_phi_reg_pp0_iter0_data_1618_V_read1688_phi_reg_91727.read();
        }
    } else {
        ap_phi_mux_data_1618_V_read1688_phi_phi_fu_91731_p4 = ap_phi_reg_pp0_iter0_data_1618_V_read1688_phi_reg_91727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_48535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_48535_p6 = data_1618_V_read1688_phi_reg_91727.read();
    } else {
        ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_48535_p6 = data_1618_V_read1688_rewind_reg_48531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1619_V_read1689_phi_phi_fu_91744_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1619_V_read1689_phi_phi_fu_91744_p4 = ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_48549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1619_V_read1689_phi_phi_fu_91744_p4 = data_1619_V_read.read();
        } else {
            ap_phi_mux_data_1619_V_read1689_phi_phi_fu_91744_p4 = ap_phi_reg_pp0_iter0_data_1619_V_read1689_phi_reg_91740.read();
        }
    } else {
        ap_phi_mux_data_1619_V_read1689_phi_phi_fu_91744_p4 = ap_phi_reg_pp0_iter0_data_1619_V_read1689_phi_reg_91740.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_48549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_48549_p6 = data_1619_V_read1689_phi_reg_91740.read();
    } else {
        ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_48549_p6 = data_1619_V_read1689_rewind_reg_48545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_161_V_read231_phi_phi_fu_72790_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_161_V_read231_phi_phi_fu_72790_p4 = ap_phi_mux_data_161_V_read231_rewind_phi_fu_28137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_161_V_read231_phi_phi_fu_72790_p4 = data_161_V_read.read();
        } else {
            ap_phi_mux_data_161_V_read231_phi_phi_fu_72790_p4 = ap_phi_reg_pp0_iter0_data_161_V_read231_phi_reg_72786.read();
        }
    } else {
        ap_phi_mux_data_161_V_read231_phi_phi_fu_72790_p4 = ap_phi_reg_pp0_iter0_data_161_V_read231_phi_reg_72786.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_161_V_read231_rewind_phi_fu_28137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_161_V_read231_rewind_phi_fu_28137_p6 = data_161_V_read231_phi_reg_72786.read();
    } else {
        ap_phi_mux_data_161_V_read231_rewind_phi_fu_28137_p6 = data_161_V_read231_rewind_reg_28133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1620_V_read1690_phi_phi_fu_91757_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1620_V_read1690_phi_phi_fu_91757_p4 = ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_48563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1620_V_read1690_phi_phi_fu_91757_p4 = data_1620_V_read.read();
        } else {
            ap_phi_mux_data_1620_V_read1690_phi_phi_fu_91757_p4 = ap_phi_reg_pp0_iter0_data_1620_V_read1690_phi_reg_91753.read();
        }
    } else {
        ap_phi_mux_data_1620_V_read1690_phi_phi_fu_91757_p4 = ap_phi_reg_pp0_iter0_data_1620_V_read1690_phi_reg_91753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_48563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_48563_p6 = data_1620_V_read1690_phi_reg_91753.read();
    } else {
        ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_48563_p6 = data_1620_V_read1690_rewind_reg_48559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1621_V_read1691_phi_phi_fu_91770_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1621_V_read1691_phi_phi_fu_91770_p4 = ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_48577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1621_V_read1691_phi_phi_fu_91770_p4 = data_1621_V_read.read();
        } else {
            ap_phi_mux_data_1621_V_read1691_phi_phi_fu_91770_p4 = ap_phi_reg_pp0_iter0_data_1621_V_read1691_phi_reg_91766.read();
        }
    } else {
        ap_phi_mux_data_1621_V_read1691_phi_phi_fu_91770_p4 = ap_phi_reg_pp0_iter0_data_1621_V_read1691_phi_reg_91766.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_48577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_48577_p6 = data_1621_V_read1691_phi_reg_91766.read();
    } else {
        ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_48577_p6 = data_1621_V_read1691_rewind_reg_48573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1622_V_read1692_phi_phi_fu_91783_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1622_V_read1692_phi_phi_fu_91783_p4 = ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_48591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1622_V_read1692_phi_phi_fu_91783_p4 = data_1622_V_read.read();
        } else {
            ap_phi_mux_data_1622_V_read1692_phi_phi_fu_91783_p4 = ap_phi_reg_pp0_iter0_data_1622_V_read1692_phi_reg_91779.read();
        }
    } else {
        ap_phi_mux_data_1622_V_read1692_phi_phi_fu_91783_p4 = ap_phi_reg_pp0_iter0_data_1622_V_read1692_phi_reg_91779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_48591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_48591_p6 = data_1622_V_read1692_phi_reg_91779.read();
    } else {
        ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_48591_p6 = data_1622_V_read1692_rewind_reg_48587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1623_V_read1693_phi_phi_fu_91796_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1623_V_read1693_phi_phi_fu_91796_p4 = ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_48605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1623_V_read1693_phi_phi_fu_91796_p4 = data_1623_V_read.read();
        } else {
            ap_phi_mux_data_1623_V_read1693_phi_phi_fu_91796_p4 = ap_phi_reg_pp0_iter0_data_1623_V_read1693_phi_reg_91792.read();
        }
    } else {
        ap_phi_mux_data_1623_V_read1693_phi_phi_fu_91796_p4 = ap_phi_reg_pp0_iter0_data_1623_V_read1693_phi_reg_91792.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_48605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_48605_p6 = data_1623_V_read1693_phi_reg_91792.read();
    } else {
        ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_48605_p6 = data_1623_V_read1693_rewind_reg_48601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1624_V_read1694_phi_phi_fu_91809_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1624_V_read1694_phi_phi_fu_91809_p4 = ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_48619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1624_V_read1694_phi_phi_fu_91809_p4 = data_1624_V_read.read();
        } else {
            ap_phi_mux_data_1624_V_read1694_phi_phi_fu_91809_p4 = ap_phi_reg_pp0_iter0_data_1624_V_read1694_phi_reg_91805.read();
        }
    } else {
        ap_phi_mux_data_1624_V_read1694_phi_phi_fu_91809_p4 = ap_phi_reg_pp0_iter0_data_1624_V_read1694_phi_reg_91805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_48619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_48619_p6 = data_1624_V_read1694_phi_reg_91805.read();
    } else {
        ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_48619_p6 = data_1624_V_read1694_rewind_reg_48615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1625_V_read1695_phi_phi_fu_91822_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1625_V_read1695_phi_phi_fu_91822_p4 = ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_48633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1625_V_read1695_phi_phi_fu_91822_p4 = data_1625_V_read.read();
        } else {
            ap_phi_mux_data_1625_V_read1695_phi_phi_fu_91822_p4 = ap_phi_reg_pp0_iter0_data_1625_V_read1695_phi_reg_91818.read();
        }
    } else {
        ap_phi_mux_data_1625_V_read1695_phi_phi_fu_91822_p4 = ap_phi_reg_pp0_iter0_data_1625_V_read1695_phi_reg_91818.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_48633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_48633_p6 = data_1625_V_read1695_phi_reg_91818.read();
    } else {
        ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_48633_p6 = data_1625_V_read1695_rewind_reg_48629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1626_V_read1696_phi_phi_fu_91835_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1626_V_read1696_phi_phi_fu_91835_p4 = ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_48647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1626_V_read1696_phi_phi_fu_91835_p4 = data_1626_V_read.read();
        } else {
            ap_phi_mux_data_1626_V_read1696_phi_phi_fu_91835_p4 = ap_phi_reg_pp0_iter0_data_1626_V_read1696_phi_reg_91831.read();
        }
    } else {
        ap_phi_mux_data_1626_V_read1696_phi_phi_fu_91835_p4 = ap_phi_reg_pp0_iter0_data_1626_V_read1696_phi_reg_91831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_48647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_48647_p6 = data_1626_V_read1696_phi_reg_91831.read();
    } else {
        ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_48647_p6 = data_1626_V_read1696_rewind_reg_48643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1627_V_read1697_phi_phi_fu_91848_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1627_V_read1697_phi_phi_fu_91848_p4 = ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_48661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1627_V_read1697_phi_phi_fu_91848_p4 = data_1627_V_read.read();
        } else {
            ap_phi_mux_data_1627_V_read1697_phi_phi_fu_91848_p4 = ap_phi_reg_pp0_iter0_data_1627_V_read1697_phi_reg_91844.read();
        }
    } else {
        ap_phi_mux_data_1627_V_read1697_phi_phi_fu_91848_p4 = ap_phi_reg_pp0_iter0_data_1627_V_read1697_phi_reg_91844.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_48661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_48661_p6 = data_1627_V_read1697_phi_reg_91844.read();
    } else {
        ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_48661_p6 = data_1627_V_read1697_rewind_reg_48657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1628_V_read1698_phi_phi_fu_91861_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1628_V_read1698_phi_phi_fu_91861_p4 = ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_48675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1628_V_read1698_phi_phi_fu_91861_p4 = data_1628_V_read.read();
        } else {
            ap_phi_mux_data_1628_V_read1698_phi_phi_fu_91861_p4 = ap_phi_reg_pp0_iter0_data_1628_V_read1698_phi_reg_91857.read();
        }
    } else {
        ap_phi_mux_data_1628_V_read1698_phi_phi_fu_91861_p4 = ap_phi_reg_pp0_iter0_data_1628_V_read1698_phi_reg_91857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_48675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_48675_p6 = data_1628_V_read1698_phi_reg_91857.read();
    } else {
        ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_48675_p6 = data_1628_V_read1698_rewind_reg_48671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1629_V_read1699_phi_phi_fu_91874_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1629_V_read1699_phi_phi_fu_91874_p4 = ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_48689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1629_V_read1699_phi_phi_fu_91874_p4 = data_1629_V_read.read();
        } else {
            ap_phi_mux_data_1629_V_read1699_phi_phi_fu_91874_p4 = ap_phi_reg_pp0_iter0_data_1629_V_read1699_phi_reg_91870.read();
        }
    } else {
        ap_phi_mux_data_1629_V_read1699_phi_phi_fu_91874_p4 = ap_phi_reg_pp0_iter0_data_1629_V_read1699_phi_reg_91870.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_48689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_48689_p6 = data_1629_V_read1699_phi_reg_91870.read();
    } else {
        ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_48689_p6 = data_1629_V_read1699_rewind_reg_48685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_162_V_read232_phi_phi_fu_72803_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_162_V_read232_phi_phi_fu_72803_p4 = ap_phi_mux_data_162_V_read232_rewind_phi_fu_28151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_162_V_read232_phi_phi_fu_72803_p4 = data_162_V_read.read();
        } else {
            ap_phi_mux_data_162_V_read232_phi_phi_fu_72803_p4 = ap_phi_reg_pp0_iter0_data_162_V_read232_phi_reg_72799.read();
        }
    } else {
        ap_phi_mux_data_162_V_read232_phi_phi_fu_72803_p4 = ap_phi_reg_pp0_iter0_data_162_V_read232_phi_reg_72799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_162_V_read232_rewind_phi_fu_28151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_162_V_read232_rewind_phi_fu_28151_p6 = data_162_V_read232_phi_reg_72799.read();
    } else {
        ap_phi_mux_data_162_V_read232_rewind_phi_fu_28151_p6 = data_162_V_read232_rewind_reg_28147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1630_V_read1700_phi_phi_fu_91887_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1630_V_read1700_phi_phi_fu_91887_p4 = ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_48703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1630_V_read1700_phi_phi_fu_91887_p4 = data_1630_V_read.read();
        } else {
            ap_phi_mux_data_1630_V_read1700_phi_phi_fu_91887_p4 = ap_phi_reg_pp0_iter0_data_1630_V_read1700_phi_reg_91883.read();
        }
    } else {
        ap_phi_mux_data_1630_V_read1700_phi_phi_fu_91887_p4 = ap_phi_reg_pp0_iter0_data_1630_V_read1700_phi_reg_91883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_48703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_48703_p6 = data_1630_V_read1700_phi_reg_91883.read();
    } else {
        ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_48703_p6 = data_1630_V_read1700_rewind_reg_48699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1631_V_read1701_phi_phi_fu_91900_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1631_V_read1701_phi_phi_fu_91900_p4 = ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_48717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1631_V_read1701_phi_phi_fu_91900_p4 = data_1631_V_read.read();
        } else {
            ap_phi_mux_data_1631_V_read1701_phi_phi_fu_91900_p4 = ap_phi_reg_pp0_iter0_data_1631_V_read1701_phi_reg_91896.read();
        }
    } else {
        ap_phi_mux_data_1631_V_read1701_phi_phi_fu_91900_p4 = ap_phi_reg_pp0_iter0_data_1631_V_read1701_phi_reg_91896.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_48717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_48717_p6 = data_1631_V_read1701_phi_reg_91896.read();
    } else {
        ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_48717_p6 = data_1631_V_read1701_rewind_reg_48713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1632_V_read1702_phi_phi_fu_91913_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1632_V_read1702_phi_phi_fu_91913_p4 = ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_48731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1632_V_read1702_phi_phi_fu_91913_p4 = data_1632_V_read.read();
        } else {
            ap_phi_mux_data_1632_V_read1702_phi_phi_fu_91913_p4 = ap_phi_reg_pp0_iter0_data_1632_V_read1702_phi_reg_91909.read();
        }
    } else {
        ap_phi_mux_data_1632_V_read1702_phi_phi_fu_91913_p4 = ap_phi_reg_pp0_iter0_data_1632_V_read1702_phi_reg_91909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_48731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_48731_p6 = data_1632_V_read1702_phi_reg_91909.read();
    } else {
        ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_48731_p6 = data_1632_V_read1702_rewind_reg_48727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1633_V_read1703_phi_phi_fu_91926_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1633_V_read1703_phi_phi_fu_91926_p4 = ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_48745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1633_V_read1703_phi_phi_fu_91926_p4 = data_1633_V_read.read();
        } else {
            ap_phi_mux_data_1633_V_read1703_phi_phi_fu_91926_p4 = ap_phi_reg_pp0_iter0_data_1633_V_read1703_phi_reg_91922.read();
        }
    } else {
        ap_phi_mux_data_1633_V_read1703_phi_phi_fu_91926_p4 = ap_phi_reg_pp0_iter0_data_1633_V_read1703_phi_reg_91922.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_48745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_48745_p6 = data_1633_V_read1703_phi_reg_91922.read();
    } else {
        ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_48745_p6 = data_1633_V_read1703_rewind_reg_48741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1634_V_read1704_phi_phi_fu_91939_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1634_V_read1704_phi_phi_fu_91939_p4 = ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_48759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1634_V_read1704_phi_phi_fu_91939_p4 = data_1634_V_read.read();
        } else {
            ap_phi_mux_data_1634_V_read1704_phi_phi_fu_91939_p4 = ap_phi_reg_pp0_iter0_data_1634_V_read1704_phi_reg_91935.read();
        }
    } else {
        ap_phi_mux_data_1634_V_read1704_phi_phi_fu_91939_p4 = ap_phi_reg_pp0_iter0_data_1634_V_read1704_phi_reg_91935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_48759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_48759_p6 = data_1634_V_read1704_phi_reg_91935.read();
    } else {
        ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_48759_p6 = data_1634_V_read1704_rewind_reg_48755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1635_V_read1705_phi_phi_fu_91952_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1635_V_read1705_phi_phi_fu_91952_p4 = ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_48773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1635_V_read1705_phi_phi_fu_91952_p4 = data_1635_V_read.read();
        } else {
            ap_phi_mux_data_1635_V_read1705_phi_phi_fu_91952_p4 = ap_phi_reg_pp0_iter0_data_1635_V_read1705_phi_reg_91948.read();
        }
    } else {
        ap_phi_mux_data_1635_V_read1705_phi_phi_fu_91952_p4 = ap_phi_reg_pp0_iter0_data_1635_V_read1705_phi_reg_91948.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_48773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_48773_p6 = data_1635_V_read1705_phi_reg_91948.read();
    } else {
        ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_48773_p6 = data_1635_V_read1705_rewind_reg_48769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1636_V_read1706_phi_phi_fu_91965_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1636_V_read1706_phi_phi_fu_91965_p4 = ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_48787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1636_V_read1706_phi_phi_fu_91965_p4 = data_1636_V_read.read();
        } else {
            ap_phi_mux_data_1636_V_read1706_phi_phi_fu_91965_p4 = ap_phi_reg_pp0_iter0_data_1636_V_read1706_phi_reg_91961.read();
        }
    } else {
        ap_phi_mux_data_1636_V_read1706_phi_phi_fu_91965_p4 = ap_phi_reg_pp0_iter0_data_1636_V_read1706_phi_reg_91961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_48787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_48787_p6 = data_1636_V_read1706_phi_reg_91961.read();
    } else {
        ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_48787_p6 = data_1636_V_read1706_rewind_reg_48783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1637_V_read1707_phi_phi_fu_91978_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1637_V_read1707_phi_phi_fu_91978_p4 = ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_48801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1637_V_read1707_phi_phi_fu_91978_p4 = data_1637_V_read.read();
        } else {
            ap_phi_mux_data_1637_V_read1707_phi_phi_fu_91978_p4 = ap_phi_reg_pp0_iter0_data_1637_V_read1707_phi_reg_91974.read();
        }
    } else {
        ap_phi_mux_data_1637_V_read1707_phi_phi_fu_91978_p4 = ap_phi_reg_pp0_iter0_data_1637_V_read1707_phi_reg_91974.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_48801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_48801_p6 = data_1637_V_read1707_phi_reg_91974.read();
    } else {
        ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_48801_p6 = data_1637_V_read1707_rewind_reg_48797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1638_V_read1708_phi_phi_fu_91991_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1638_V_read1708_phi_phi_fu_91991_p4 = ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_48815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1638_V_read1708_phi_phi_fu_91991_p4 = data_1638_V_read.read();
        } else {
            ap_phi_mux_data_1638_V_read1708_phi_phi_fu_91991_p4 = ap_phi_reg_pp0_iter0_data_1638_V_read1708_phi_reg_91987.read();
        }
    } else {
        ap_phi_mux_data_1638_V_read1708_phi_phi_fu_91991_p4 = ap_phi_reg_pp0_iter0_data_1638_V_read1708_phi_reg_91987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_48815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_48815_p6 = data_1638_V_read1708_phi_reg_91987.read();
    } else {
        ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_48815_p6 = data_1638_V_read1708_rewind_reg_48811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1639_V_read1709_phi_phi_fu_92004_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1639_V_read1709_phi_phi_fu_92004_p4 = ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_48829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1639_V_read1709_phi_phi_fu_92004_p4 = data_1639_V_read.read();
        } else {
            ap_phi_mux_data_1639_V_read1709_phi_phi_fu_92004_p4 = ap_phi_reg_pp0_iter0_data_1639_V_read1709_phi_reg_92000.read();
        }
    } else {
        ap_phi_mux_data_1639_V_read1709_phi_phi_fu_92004_p4 = ap_phi_reg_pp0_iter0_data_1639_V_read1709_phi_reg_92000.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_48829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_48829_p6 = data_1639_V_read1709_phi_reg_92000.read();
    } else {
        ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_48829_p6 = data_1639_V_read1709_rewind_reg_48825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_163_V_read233_phi_phi_fu_72816_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_163_V_read233_phi_phi_fu_72816_p4 = ap_phi_mux_data_163_V_read233_rewind_phi_fu_28165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_163_V_read233_phi_phi_fu_72816_p4 = data_163_V_read.read();
        } else {
            ap_phi_mux_data_163_V_read233_phi_phi_fu_72816_p4 = ap_phi_reg_pp0_iter0_data_163_V_read233_phi_reg_72812.read();
        }
    } else {
        ap_phi_mux_data_163_V_read233_phi_phi_fu_72816_p4 = ap_phi_reg_pp0_iter0_data_163_V_read233_phi_reg_72812.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_163_V_read233_rewind_phi_fu_28165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_163_V_read233_rewind_phi_fu_28165_p6 = data_163_V_read233_phi_reg_72812.read();
    } else {
        ap_phi_mux_data_163_V_read233_rewind_phi_fu_28165_p6 = data_163_V_read233_rewind_reg_28161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1640_V_read1710_phi_phi_fu_92017_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1640_V_read1710_phi_phi_fu_92017_p4 = ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_48843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1640_V_read1710_phi_phi_fu_92017_p4 = data_1640_V_read.read();
        } else {
            ap_phi_mux_data_1640_V_read1710_phi_phi_fu_92017_p4 = ap_phi_reg_pp0_iter0_data_1640_V_read1710_phi_reg_92013.read();
        }
    } else {
        ap_phi_mux_data_1640_V_read1710_phi_phi_fu_92017_p4 = ap_phi_reg_pp0_iter0_data_1640_V_read1710_phi_reg_92013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_48843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_48843_p6 = data_1640_V_read1710_phi_reg_92013.read();
    } else {
        ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_48843_p6 = data_1640_V_read1710_rewind_reg_48839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1641_V_read1711_phi_phi_fu_92030_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1641_V_read1711_phi_phi_fu_92030_p4 = ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_48857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1641_V_read1711_phi_phi_fu_92030_p4 = data_1641_V_read.read();
        } else {
            ap_phi_mux_data_1641_V_read1711_phi_phi_fu_92030_p4 = ap_phi_reg_pp0_iter0_data_1641_V_read1711_phi_reg_92026.read();
        }
    } else {
        ap_phi_mux_data_1641_V_read1711_phi_phi_fu_92030_p4 = ap_phi_reg_pp0_iter0_data_1641_V_read1711_phi_reg_92026.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_48857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_48857_p6 = data_1641_V_read1711_phi_reg_92026.read();
    } else {
        ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_48857_p6 = data_1641_V_read1711_rewind_reg_48853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1642_V_read1712_phi_phi_fu_92043_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1642_V_read1712_phi_phi_fu_92043_p4 = ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_48871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1642_V_read1712_phi_phi_fu_92043_p4 = data_1642_V_read.read();
        } else {
            ap_phi_mux_data_1642_V_read1712_phi_phi_fu_92043_p4 = ap_phi_reg_pp0_iter0_data_1642_V_read1712_phi_reg_92039.read();
        }
    } else {
        ap_phi_mux_data_1642_V_read1712_phi_phi_fu_92043_p4 = ap_phi_reg_pp0_iter0_data_1642_V_read1712_phi_reg_92039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_48871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_48871_p6 = data_1642_V_read1712_phi_reg_92039.read();
    } else {
        ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_48871_p6 = data_1642_V_read1712_rewind_reg_48867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1643_V_read1713_phi_phi_fu_92056_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1643_V_read1713_phi_phi_fu_92056_p4 = ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_48885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1643_V_read1713_phi_phi_fu_92056_p4 = data_1643_V_read.read();
        } else {
            ap_phi_mux_data_1643_V_read1713_phi_phi_fu_92056_p4 = ap_phi_reg_pp0_iter0_data_1643_V_read1713_phi_reg_92052.read();
        }
    } else {
        ap_phi_mux_data_1643_V_read1713_phi_phi_fu_92056_p4 = ap_phi_reg_pp0_iter0_data_1643_V_read1713_phi_reg_92052.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_48885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_48885_p6 = data_1643_V_read1713_phi_reg_92052.read();
    } else {
        ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_48885_p6 = data_1643_V_read1713_rewind_reg_48881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1644_V_read1714_phi_phi_fu_92069_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1644_V_read1714_phi_phi_fu_92069_p4 = ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_48899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1644_V_read1714_phi_phi_fu_92069_p4 = data_1644_V_read.read();
        } else {
            ap_phi_mux_data_1644_V_read1714_phi_phi_fu_92069_p4 = ap_phi_reg_pp0_iter0_data_1644_V_read1714_phi_reg_92065.read();
        }
    } else {
        ap_phi_mux_data_1644_V_read1714_phi_phi_fu_92069_p4 = ap_phi_reg_pp0_iter0_data_1644_V_read1714_phi_reg_92065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_48899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_48899_p6 = data_1644_V_read1714_phi_reg_92065.read();
    } else {
        ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_48899_p6 = data_1644_V_read1714_rewind_reg_48895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1645_V_read1715_phi_phi_fu_92082_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1645_V_read1715_phi_phi_fu_92082_p4 = ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_48913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1645_V_read1715_phi_phi_fu_92082_p4 = data_1645_V_read.read();
        } else {
            ap_phi_mux_data_1645_V_read1715_phi_phi_fu_92082_p4 = ap_phi_reg_pp0_iter0_data_1645_V_read1715_phi_reg_92078.read();
        }
    } else {
        ap_phi_mux_data_1645_V_read1715_phi_phi_fu_92082_p4 = ap_phi_reg_pp0_iter0_data_1645_V_read1715_phi_reg_92078.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_48913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_48913_p6 = data_1645_V_read1715_phi_reg_92078.read();
    } else {
        ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_48913_p6 = data_1645_V_read1715_rewind_reg_48909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1646_V_read1716_phi_phi_fu_92095_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1646_V_read1716_phi_phi_fu_92095_p4 = ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_48927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1646_V_read1716_phi_phi_fu_92095_p4 = data_1646_V_read.read();
        } else {
            ap_phi_mux_data_1646_V_read1716_phi_phi_fu_92095_p4 = ap_phi_reg_pp0_iter0_data_1646_V_read1716_phi_reg_92091.read();
        }
    } else {
        ap_phi_mux_data_1646_V_read1716_phi_phi_fu_92095_p4 = ap_phi_reg_pp0_iter0_data_1646_V_read1716_phi_reg_92091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_48927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_48927_p6 = data_1646_V_read1716_phi_reg_92091.read();
    } else {
        ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_48927_p6 = data_1646_V_read1716_rewind_reg_48923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1647_V_read1717_phi_phi_fu_92108_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1647_V_read1717_phi_phi_fu_92108_p4 = ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_48941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1647_V_read1717_phi_phi_fu_92108_p4 = data_1647_V_read.read();
        } else {
            ap_phi_mux_data_1647_V_read1717_phi_phi_fu_92108_p4 = ap_phi_reg_pp0_iter0_data_1647_V_read1717_phi_reg_92104.read();
        }
    } else {
        ap_phi_mux_data_1647_V_read1717_phi_phi_fu_92108_p4 = ap_phi_reg_pp0_iter0_data_1647_V_read1717_phi_reg_92104.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_48941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_48941_p6 = data_1647_V_read1717_phi_reg_92104.read();
    } else {
        ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_48941_p6 = data_1647_V_read1717_rewind_reg_48937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1648_V_read1718_phi_phi_fu_92121_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1648_V_read1718_phi_phi_fu_92121_p4 = ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_48955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1648_V_read1718_phi_phi_fu_92121_p4 = data_1648_V_read.read();
        } else {
            ap_phi_mux_data_1648_V_read1718_phi_phi_fu_92121_p4 = ap_phi_reg_pp0_iter0_data_1648_V_read1718_phi_reg_92117.read();
        }
    } else {
        ap_phi_mux_data_1648_V_read1718_phi_phi_fu_92121_p4 = ap_phi_reg_pp0_iter0_data_1648_V_read1718_phi_reg_92117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_48955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_48955_p6 = data_1648_V_read1718_phi_reg_92117.read();
    } else {
        ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_48955_p6 = data_1648_V_read1718_rewind_reg_48951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1649_V_read1719_phi_phi_fu_92134_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1649_V_read1719_phi_phi_fu_92134_p4 = ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_48969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1649_V_read1719_phi_phi_fu_92134_p4 = data_1649_V_read.read();
        } else {
            ap_phi_mux_data_1649_V_read1719_phi_phi_fu_92134_p4 = ap_phi_reg_pp0_iter0_data_1649_V_read1719_phi_reg_92130.read();
        }
    } else {
        ap_phi_mux_data_1649_V_read1719_phi_phi_fu_92134_p4 = ap_phi_reg_pp0_iter0_data_1649_V_read1719_phi_reg_92130.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_48969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_48969_p6 = data_1649_V_read1719_phi_reg_92130.read();
    } else {
        ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_48969_p6 = data_1649_V_read1719_rewind_reg_48965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_164_V_read234_phi_phi_fu_72829_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_164_V_read234_phi_phi_fu_72829_p4 = ap_phi_mux_data_164_V_read234_rewind_phi_fu_28179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_164_V_read234_phi_phi_fu_72829_p4 = data_164_V_read.read();
        } else {
            ap_phi_mux_data_164_V_read234_phi_phi_fu_72829_p4 = ap_phi_reg_pp0_iter0_data_164_V_read234_phi_reg_72825.read();
        }
    } else {
        ap_phi_mux_data_164_V_read234_phi_phi_fu_72829_p4 = ap_phi_reg_pp0_iter0_data_164_V_read234_phi_reg_72825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_164_V_read234_rewind_phi_fu_28179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_164_V_read234_rewind_phi_fu_28179_p6 = data_164_V_read234_phi_reg_72825.read();
    } else {
        ap_phi_mux_data_164_V_read234_rewind_phi_fu_28179_p6 = data_164_V_read234_rewind_reg_28175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1650_V_read1720_phi_phi_fu_92147_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1650_V_read1720_phi_phi_fu_92147_p4 = ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_48983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1650_V_read1720_phi_phi_fu_92147_p4 = data_1650_V_read.read();
        } else {
            ap_phi_mux_data_1650_V_read1720_phi_phi_fu_92147_p4 = ap_phi_reg_pp0_iter0_data_1650_V_read1720_phi_reg_92143.read();
        }
    } else {
        ap_phi_mux_data_1650_V_read1720_phi_phi_fu_92147_p4 = ap_phi_reg_pp0_iter0_data_1650_V_read1720_phi_reg_92143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_48983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_48983_p6 = data_1650_V_read1720_phi_reg_92143.read();
    } else {
        ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_48983_p6 = data_1650_V_read1720_rewind_reg_48979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1651_V_read1721_phi_phi_fu_92160_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1651_V_read1721_phi_phi_fu_92160_p4 = ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_48997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1651_V_read1721_phi_phi_fu_92160_p4 = data_1651_V_read.read();
        } else {
            ap_phi_mux_data_1651_V_read1721_phi_phi_fu_92160_p4 = ap_phi_reg_pp0_iter0_data_1651_V_read1721_phi_reg_92156.read();
        }
    } else {
        ap_phi_mux_data_1651_V_read1721_phi_phi_fu_92160_p4 = ap_phi_reg_pp0_iter0_data_1651_V_read1721_phi_reg_92156.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_48997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_48997_p6 = data_1651_V_read1721_phi_reg_92156.read();
    } else {
        ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_48997_p6 = data_1651_V_read1721_rewind_reg_48993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1652_V_read1722_phi_phi_fu_92173_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1652_V_read1722_phi_phi_fu_92173_p4 = ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_49011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1652_V_read1722_phi_phi_fu_92173_p4 = data_1652_V_read.read();
        } else {
            ap_phi_mux_data_1652_V_read1722_phi_phi_fu_92173_p4 = ap_phi_reg_pp0_iter0_data_1652_V_read1722_phi_reg_92169.read();
        }
    } else {
        ap_phi_mux_data_1652_V_read1722_phi_phi_fu_92173_p4 = ap_phi_reg_pp0_iter0_data_1652_V_read1722_phi_reg_92169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_49011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_49011_p6 = data_1652_V_read1722_phi_reg_92169.read();
    } else {
        ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_49011_p6 = data_1652_V_read1722_rewind_reg_49007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1653_V_read1723_phi_phi_fu_92186_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1653_V_read1723_phi_phi_fu_92186_p4 = ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_49025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1653_V_read1723_phi_phi_fu_92186_p4 = data_1653_V_read.read();
        } else {
            ap_phi_mux_data_1653_V_read1723_phi_phi_fu_92186_p4 = ap_phi_reg_pp0_iter0_data_1653_V_read1723_phi_reg_92182.read();
        }
    } else {
        ap_phi_mux_data_1653_V_read1723_phi_phi_fu_92186_p4 = ap_phi_reg_pp0_iter0_data_1653_V_read1723_phi_reg_92182.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_49025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_49025_p6 = data_1653_V_read1723_phi_reg_92182.read();
    } else {
        ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_49025_p6 = data_1653_V_read1723_rewind_reg_49021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1654_V_read1724_phi_phi_fu_92199_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1654_V_read1724_phi_phi_fu_92199_p4 = ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_49039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1654_V_read1724_phi_phi_fu_92199_p4 = data_1654_V_read.read();
        } else {
            ap_phi_mux_data_1654_V_read1724_phi_phi_fu_92199_p4 = ap_phi_reg_pp0_iter0_data_1654_V_read1724_phi_reg_92195.read();
        }
    } else {
        ap_phi_mux_data_1654_V_read1724_phi_phi_fu_92199_p4 = ap_phi_reg_pp0_iter0_data_1654_V_read1724_phi_reg_92195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_49039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_49039_p6 = data_1654_V_read1724_phi_reg_92195.read();
    } else {
        ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_49039_p6 = data_1654_V_read1724_rewind_reg_49035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1655_V_read1725_phi_phi_fu_92212_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1655_V_read1725_phi_phi_fu_92212_p4 = ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_49053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1655_V_read1725_phi_phi_fu_92212_p4 = data_1655_V_read.read();
        } else {
            ap_phi_mux_data_1655_V_read1725_phi_phi_fu_92212_p4 = ap_phi_reg_pp0_iter0_data_1655_V_read1725_phi_reg_92208.read();
        }
    } else {
        ap_phi_mux_data_1655_V_read1725_phi_phi_fu_92212_p4 = ap_phi_reg_pp0_iter0_data_1655_V_read1725_phi_reg_92208.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_49053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_49053_p6 = data_1655_V_read1725_phi_reg_92208.read();
    } else {
        ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_49053_p6 = data_1655_V_read1725_rewind_reg_49049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1656_V_read1726_phi_phi_fu_92225_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1656_V_read1726_phi_phi_fu_92225_p4 = ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_49067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1656_V_read1726_phi_phi_fu_92225_p4 = data_1656_V_read.read();
        } else {
            ap_phi_mux_data_1656_V_read1726_phi_phi_fu_92225_p4 = ap_phi_reg_pp0_iter0_data_1656_V_read1726_phi_reg_92221.read();
        }
    } else {
        ap_phi_mux_data_1656_V_read1726_phi_phi_fu_92225_p4 = ap_phi_reg_pp0_iter0_data_1656_V_read1726_phi_reg_92221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_49067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_49067_p6 = data_1656_V_read1726_phi_reg_92221.read();
    } else {
        ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_49067_p6 = data_1656_V_read1726_rewind_reg_49063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1657_V_read1727_phi_phi_fu_92238_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1657_V_read1727_phi_phi_fu_92238_p4 = ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_49081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1657_V_read1727_phi_phi_fu_92238_p4 = data_1657_V_read.read();
        } else {
            ap_phi_mux_data_1657_V_read1727_phi_phi_fu_92238_p4 = ap_phi_reg_pp0_iter0_data_1657_V_read1727_phi_reg_92234.read();
        }
    } else {
        ap_phi_mux_data_1657_V_read1727_phi_phi_fu_92238_p4 = ap_phi_reg_pp0_iter0_data_1657_V_read1727_phi_reg_92234.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_49081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_49081_p6 = data_1657_V_read1727_phi_reg_92234.read();
    } else {
        ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_49081_p6 = data_1657_V_read1727_rewind_reg_49077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1658_V_read1728_phi_phi_fu_92251_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1658_V_read1728_phi_phi_fu_92251_p4 = ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_49095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1658_V_read1728_phi_phi_fu_92251_p4 = data_1658_V_read.read();
        } else {
            ap_phi_mux_data_1658_V_read1728_phi_phi_fu_92251_p4 = ap_phi_reg_pp0_iter0_data_1658_V_read1728_phi_reg_92247.read();
        }
    } else {
        ap_phi_mux_data_1658_V_read1728_phi_phi_fu_92251_p4 = ap_phi_reg_pp0_iter0_data_1658_V_read1728_phi_reg_92247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_49095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_49095_p6 = data_1658_V_read1728_phi_reg_92247.read();
    } else {
        ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_49095_p6 = data_1658_V_read1728_rewind_reg_49091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1659_V_read1729_phi_phi_fu_92264_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1659_V_read1729_phi_phi_fu_92264_p4 = ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_49109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1659_V_read1729_phi_phi_fu_92264_p4 = data_1659_V_read.read();
        } else {
            ap_phi_mux_data_1659_V_read1729_phi_phi_fu_92264_p4 = ap_phi_reg_pp0_iter0_data_1659_V_read1729_phi_reg_92260.read();
        }
    } else {
        ap_phi_mux_data_1659_V_read1729_phi_phi_fu_92264_p4 = ap_phi_reg_pp0_iter0_data_1659_V_read1729_phi_reg_92260.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_49109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_49109_p6 = data_1659_V_read1729_phi_reg_92260.read();
    } else {
        ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_49109_p6 = data_1659_V_read1729_rewind_reg_49105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_165_V_read235_phi_phi_fu_72842_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_165_V_read235_phi_phi_fu_72842_p4 = ap_phi_mux_data_165_V_read235_rewind_phi_fu_28193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_165_V_read235_phi_phi_fu_72842_p4 = data_165_V_read.read();
        } else {
            ap_phi_mux_data_165_V_read235_phi_phi_fu_72842_p4 = ap_phi_reg_pp0_iter0_data_165_V_read235_phi_reg_72838.read();
        }
    } else {
        ap_phi_mux_data_165_V_read235_phi_phi_fu_72842_p4 = ap_phi_reg_pp0_iter0_data_165_V_read235_phi_reg_72838.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_165_V_read235_rewind_phi_fu_28193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_165_V_read235_rewind_phi_fu_28193_p6 = data_165_V_read235_phi_reg_72838.read();
    } else {
        ap_phi_mux_data_165_V_read235_rewind_phi_fu_28193_p6 = data_165_V_read235_rewind_reg_28189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1660_V_read1730_phi_phi_fu_92277_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1660_V_read1730_phi_phi_fu_92277_p4 = ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_49123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1660_V_read1730_phi_phi_fu_92277_p4 = data_1660_V_read.read();
        } else {
            ap_phi_mux_data_1660_V_read1730_phi_phi_fu_92277_p4 = ap_phi_reg_pp0_iter0_data_1660_V_read1730_phi_reg_92273.read();
        }
    } else {
        ap_phi_mux_data_1660_V_read1730_phi_phi_fu_92277_p4 = ap_phi_reg_pp0_iter0_data_1660_V_read1730_phi_reg_92273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_49123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_49123_p6 = data_1660_V_read1730_phi_reg_92273.read();
    } else {
        ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_49123_p6 = data_1660_V_read1730_rewind_reg_49119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1661_V_read1731_phi_phi_fu_92290_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1661_V_read1731_phi_phi_fu_92290_p4 = ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_49137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1661_V_read1731_phi_phi_fu_92290_p4 = data_1661_V_read.read();
        } else {
            ap_phi_mux_data_1661_V_read1731_phi_phi_fu_92290_p4 = ap_phi_reg_pp0_iter0_data_1661_V_read1731_phi_reg_92286.read();
        }
    } else {
        ap_phi_mux_data_1661_V_read1731_phi_phi_fu_92290_p4 = ap_phi_reg_pp0_iter0_data_1661_V_read1731_phi_reg_92286.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_49137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_49137_p6 = data_1661_V_read1731_phi_reg_92286.read();
    } else {
        ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_49137_p6 = data_1661_V_read1731_rewind_reg_49133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1662_V_read1732_phi_phi_fu_92303_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1662_V_read1732_phi_phi_fu_92303_p4 = ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_49151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1662_V_read1732_phi_phi_fu_92303_p4 = data_1662_V_read.read();
        } else {
            ap_phi_mux_data_1662_V_read1732_phi_phi_fu_92303_p4 = ap_phi_reg_pp0_iter0_data_1662_V_read1732_phi_reg_92299.read();
        }
    } else {
        ap_phi_mux_data_1662_V_read1732_phi_phi_fu_92303_p4 = ap_phi_reg_pp0_iter0_data_1662_V_read1732_phi_reg_92299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_49151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_49151_p6 = data_1662_V_read1732_phi_reg_92299.read();
    } else {
        ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_49151_p6 = data_1662_V_read1732_rewind_reg_49147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1663_V_read1733_phi_phi_fu_92316_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1663_V_read1733_phi_phi_fu_92316_p4 = ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_49165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1663_V_read1733_phi_phi_fu_92316_p4 = data_1663_V_read.read();
        } else {
            ap_phi_mux_data_1663_V_read1733_phi_phi_fu_92316_p4 = ap_phi_reg_pp0_iter0_data_1663_V_read1733_phi_reg_92312.read();
        }
    } else {
        ap_phi_mux_data_1663_V_read1733_phi_phi_fu_92316_p4 = ap_phi_reg_pp0_iter0_data_1663_V_read1733_phi_reg_92312.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_49165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_49165_p6 = data_1663_V_read1733_phi_reg_92312.read();
    } else {
        ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_49165_p6 = data_1663_V_read1733_rewind_reg_49161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1664_V_read1734_phi_phi_fu_92329_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1664_V_read1734_phi_phi_fu_92329_p4 = ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_49179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1664_V_read1734_phi_phi_fu_92329_p4 = data_1664_V_read.read();
        } else {
            ap_phi_mux_data_1664_V_read1734_phi_phi_fu_92329_p4 = ap_phi_reg_pp0_iter0_data_1664_V_read1734_phi_reg_92325.read();
        }
    } else {
        ap_phi_mux_data_1664_V_read1734_phi_phi_fu_92329_p4 = ap_phi_reg_pp0_iter0_data_1664_V_read1734_phi_reg_92325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_49179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_49179_p6 = data_1664_V_read1734_phi_reg_92325.read();
    } else {
        ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_49179_p6 = data_1664_V_read1734_rewind_reg_49175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1665_V_read1735_phi_phi_fu_92342_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1665_V_read1735_phi_phi_fu_92342_p4 = ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_49193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1665_V_read1735_phi_phi_fu_92342_p4 = data_1665_V_read.read();
        } else {
            ap_phi_mux_data_1665_V_read1735_phi_phi_fu_92342_p4 = ap_phi_reg_pp0_iter0_data_1665_V_read1735_phi_reg_92338.read();
        }
    } else {
        ap_phi_mux_data_1665_V_read1735_phi_phi_fu_92342_p4 = ap_phi_reg_pp0_iter0_data_1665_V_read1735_phi_reg_92338.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_49193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_49193_p6 = data_1665_V_read1735_phi_reg_92338.read();
    } else {
        ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_49193_p6 = data_1665_V_read1735_rewind_reg_49189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1666_V_read1736_phi_phi_fu_92355_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1666_V_read1736_phi_phi_fu_92355_p4 = ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_49207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1666_V_read1736_phi_phi_fu_92355_p4 = data_1666_V_read.read();
        } else {
            ap_phi_mux_data_1666_V_read1736_phi_phi_fu_92355_p4 = ap_phi_reg_pp0_iter0_data_1666_V_read1736_phi_reg_92351.read();
        }
    } else {
        ap_phi_mux_data_1666_V_read1736_phi_phi_fu_92355_p4 = ap_phi_reg_pp0_iter0_data_1666_V_read1736_phi_reg_92351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_49207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_49207_p6 = data_1666_V_read1736_phi_reg_92351.read();
    } else {
        ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_49207_p6 = data_1666_V_read1736_rewind_reg_49203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1667_V_read1737_phi_phi_fu_92368_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1667_V_read1737_phi_phi_fu_92368_p4 = ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_49221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1667_V_read1737_phi_phi_fu_92368_p4 = data_1667_V_read.read();
        } else {
            ap_phi_mux_data_1667_V_read1737_phi_phi_fu_92368_p4 = ap_phi_reg_pp0_iter0_data_1667_V_read1737_phi_reg_92364.read();
        }
    } else {
        ap_phi_mux_data_1667_V_read1737_phi_phi_fu_92368_p4 = ap_phi_reg_pp0_iter0_data_1667_V_read1737_phi_reg_92364.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_49221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_49221_p6 = data_1667_V_read1737_phi_reg_92364.read();
    } else {
        ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_49221_p6 = data_1667_V_read1737_rewind_reg_49217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1668_V_read1738_phi_phi_fu_92381_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1668_V_read1738_phi_phi_fu_92381_p4 = ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_49235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1668_V_read1738_phi_phi_fu_92381_p4 = data_1668_V_read.read();
        } else {
            ap_phi_mux_data_1668_V_read1738_phi_phi_fu_92381_p4 = ap_phi_reg_pp0_iter0_data_1668_V_read1738_phi_reg_92377.read();
        }
    } else {
        ap_phi_mux_data_1668_V_read1738_phi_phi_fu_92381_p4 = ap_phi_reg_pp0_iter0_data_1668_V_read1738_phi_reg_92377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_49235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_49235_p6 = data_1668_V_read1738_phi_reg_92377.read();
    } else {
        ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_49235_p6 = data_1668_V_read1738_rewind_reg_49231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1669_V_read1739_phi_phi_fu_92394_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1669_V_read1739_phi_phi_fu_92394_p4 = ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_49249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1669_V_read1739_phi_phi_fu_92394_p4 = data_1669_V_read.read();
        } else {
            ap_phi_mux_data_1669_V_read1739_phi_phi_fu_92394_p4 = ap_phi_reg_pp0_iter0_data_1669_V_read1739_phi_reg_92390.read();
        }
    } else {
        ap_phi_mux_data_1669_V_read1739_phi_phi_fu_92394_p4 = ap_phi_reg_pp0_iter0_data_1669_V_read1739_phi_reg_92390.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_49249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_49249_p6 = data_1669_V_read1739_phi_reg_92390.read();
    } else {
        ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_49249_p6 = data_1669_V_read1739_rewind_reg_49245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_166_V_read236_phi_phi_fu_72855_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_166_V_read236_phi_phi_fu_72855_p4 = ap_phi_mux_data_166_V_read236_rewind_phi_fu_28207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_166_V_read236_phi_phi_fu_72855_p4 = data_166_V_read.read();
        } else {
            ap_phi_mux_data_166_V_read236_phi_phi_fu_72855_p4 = ap_phi_reg_pp0_iter0_data_166_V_read236_phi_reg_72851.read();
        }
    } else {
        ap_phi_mux_data_166_V_read236_phi_phi_fu_72855_p4 = ap_phi_reg_pp0_iter0_data_166_V_read236_phi_reg_72851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_166_V_read236_rewind_phi_fu_28207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_166_V_read236_rewind_phi_fu_28207_p6 = data_166_V_read236_phi_reg_72851.read();
    } else {
        ap_phi_mux_data_166_V_read236_rewind_phi_fu_28207_p6 = data_166_V_read236_rewind_reg_28203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1670_V_read1740_phi_phi_fu_92407_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1670_V_read1740_phi_phi_fu_92407_p4 = ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_49263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1670_V_read1740_phi_phi_fu_92407_p4 = data_1670_V_read.read();
        } else {
            ap_phi_mux_data_1670_V_read1740_phi_phi_fu_92407_p4 = ap_phi_reg_pp0_iter0_data_1670_V_read1740_phi_reg_92403.read();
        }
    } else {
        ap_phi_mux_data_1670_V_read1740_phi_phi_fu_92407_p4 = ap_phi_reg_pp0_iter0_data_1670_V_read1740_phi_reg_92403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_49263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_49263_p6 = data_1670_V_read1740_phi_reg_92403.read();
    } else {
        ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_49263_p6 = data_1670_V_read1740_rewind_reg_49259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1671_V_read1741_phi_phi_fu_92420_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1671_V_read1741_phi_phi_fu_92420_p4 = ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_49277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1671_V_read1741_phi_phi_fu_92420_p4 = data_1671_V_read.read();
        } else {
            ap_phi_mux_data_1671_V_read1741_phi_phi_fu_92420_p4 = ap_phi_reg_pp0_iter0_data_1671_V_read1741_phi_reg_92416.read();
        }
    } else {
        ap_phi_mux_data_1671_V_read1741_phi_phi_fu_92420_p4 = ap_phi_reg_pp0_iter0_data_1671_V_read1741_phi_reg_92416.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_49277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_49277_p6 = data_1671_V_read1741_phi_reg_92416.read();
    } else {
        ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_49277_p6 = data_1671_V_read1741_rewind_reg_49273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1672_V_read1742_phi_phi_fu_92433_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1672_V_read1742_phi_phi_fu_92433_p4 = ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_49291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1672_V_read1742_phi_phi_fu_92433_p4 = data_1672_V_read.read();
        } else {
            ap_phi_mux_data_1672_V_read1742_phi_phi_fu_92433_p4 = ap_phi_reg_pp0_iter0_data_1672_V_read1742_phi_reg_92429.read();
        }
    } else {
        ap_phi_mux_data_1672_V_read1742_phi_phi_fu_92433_p4 = ap_phi_reg_pp0_iter0_data_1672_V_read1742_phi_reg_92429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_49291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_49291_p6 = data_1672_V_read1742_phi_reg_92429.read();
    } else {
        ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_49291_p6 = data_1672_V_read1742_rewind_reg_49287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1673_V_read1743_phi_phi_fu_92446_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1673_V_read1743_phi_phi_fu_92446_p4 = ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_49305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1673_V_read1743_phi_phi_fu_92446_p4 = data_1673_V_read.read();
        } else {
            ap_phi_mux_data_1673_V_read1743_phi_phi_fu_92446_p4 = ap_phi_reg_pp0_iter0_data_1673_V_read1743_phi_reg_92442.read();
        }
    } else {
        ap_phi_mux_data_1673_V_read1743_phi_phi_fu_92446_p4 = ap_phi_reg_pp0_iter0_data_1673_V_read1743_phi_reg_92442.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_49305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_49305_p6 = data_1673_V_read1743_phi_reg_92442.read();
    } else {
        ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_49305_p6 = data_1673_V_read1743_rewind_reg_49301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1674_V_read1744_phi_phi_fu_92459_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1674_V_read1744_phi_phi_fu_92459_p4 = ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_49319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1674_V_read1744_phi_phi_fu_92459_p4 = data_1674_V_read.read();
        } else {
            ap_phi_mux_data_1674_V_read1744_phi_phi_fu_92459_p4 = ap_phi_reg_pp0_iter0_data_1674_V_read1744_phi_reg_92455.read();
        }
    } else {
        ap_phi_mux_data_1674_V_read1744_phi_phi_fu_92459_p4 = ap_phi_reg_pp0_iter0_data_1674_V_read1744_phi_reg_92455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_49319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_49319_p6 = data_1674_V_read1744_phi_reg_92455.read();
    } else {
        ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_49319_p6 = data_1674_V_read1744_rewind_reg_49315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1675_V_read1745_phi_phi_fu_92472_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1675_V_read1745_phi_phi_fu_92472_p4 = ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_49333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1675_V_read1745_phi_phi_fu_92472_p4 = data_1675_V_read.read();
        } else {
            ap_phi_mux_data_1675_V_read1745_phi_phi_fu_92472_p4 = ap_phi_reg_pp0_iter0_data_1675_V_read1745_phi_reg_92468.read();
        }
    } else {
        ap_phi_mux_data_1675_V_read1745_phi_phi_fu_92472_p4 = ap_phi_reg_pp0_iter0_data_1675_V_read1745_phi_reg_92468.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_49333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_49333_p6 = data_1675_V_read1745_phi_reg_92468.read();
    } else {
        ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_49333_p6 = data_1675_V_read1745_rewind_reg_49329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1676_V_read1746_phi_phi_fu_92485_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1676_V_read1746_phi_phi_fu_92485_p4 = ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_49347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1676_V_read1746_phi_phi_fu_92485_p4 = data_1676_V_read.read();
        } else {
            ap_phi_mux_data_1676_V_read1746_phi_phi_fu_92485_p4 = ap_phi_reg_pp0_iter0_data_1676_V_read1746_phi_reg_92481.read();
        }
    } else {
        ap_phi_mux_data_1676_V_read1746_phi_phi_fu_92485_p4 = ap_phi_reg_pp0_iter0_data_1676_V_read1746_phi_reg_92481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_49347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_49347_p6 = data_1676_V_read1746_phi_reg_92481.read();
    } else {
        ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_49347_p6 = data_1676_V_read1746_rewind_reg_49343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1677_V_read1747_phi_phi_fu_92498_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1677_V_read1747_phi_phi_fu_92498_p4 = ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_49361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1677_V_read1747_phi_phi_fu_92498_p4 = data_1677_V_read.read();
        } else {
            ap_phi_mux_data_1677_V_read1747_phi_phi_fu_92498_p4 = ap_phi_reg_pp0_iter0_data_1677_V_read1747_phi_reg_92494.read();
        }
    } else {
        ap_phi_mux_data_1677_V_read1747_phi_phi_fu_92498_p4 = ap_phi_reg_pp0_iter0_data_1677_V_read1747_phi_reg_92494.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_49361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_49361_p6 = data_1677_V_read1747_phi_reg_92494.read();
    } else {
        ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_49361_p6 = data_1677_V_read1747_rewind_reg_49357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1678_V_read1748_phi_phi_fu_92511_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1678_V_read1748_phi_phi_fu_92511_p4 = ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_49375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1678_V_read1748_phi_phi_fu_92511_p4 = data_1678_V_read.read();
        } else {
            ap_phi_mux_data_1678_V_read1748_phi_phi_fu_92511_p4 = ap_phi_reg_pp0_iter0_data_1678_V_read1748_phi_reg_92507.read();
        }
    } else {
        ap_phi_mux_data_1678_V_read1748_phi_phi_fu_92511_p4 = ap_phi_reg_pp0_iter0_data_1678_V_read1748_phi_reg_92507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_49375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_49375_p6 = data_1678_V_read1748_phi_reg_92507.read();
    } else {
        ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_49375_p6 = data_1678_V_read1748_rewind_reg_49371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1679_V_read1749_phi_phi_fu_92524_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1679_V_read1749_phi_phi_fu_92524_p4 = ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_49389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1679_V_read1749_phi_phi_fu_92524_p4 = data_1679_V_read.read();
        } else {
            ap_phi_mux_data_1679_V_read1749_phi_phi_fu_92524_p4 = ap_phi_reg_pp0_iter0_data_1679_V_read1749_phi_reg_92520.read();
        }
    } else {
        ap_phi_mux_data_1679_V_read1749_phi_phi_fu_92524_p4 = ap_phi_reg_pp0_iter0_data_1679_V_read1749_phi_reg_92520.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_49389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_49389_p6 = data_1679_V_read1749_phi_reg_92520.read();
    } else {
        ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_49389_p6 = data_1679_V_read1749_rewind_reg_49385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_167_V_read237_phi_phi_fu_72868_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_167_V_read237_phi_phi_fu_72868_p4 = ap_phi_mux_data_167_V_read237_rewind_phi_fu_28221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_167_V_read237_phi_phi_fu_72868_p4 = data_167_V_read.read();
        } else {
            ap_phi_mux_data_167_V_read237_phi_phi_fu_72868_p4 = ap_phi_reg_pp0_iter0_data_167_V_read237_phi_reg_72864.read();
        }
    } else {
        ap_phi_mux_data_167_V_read237_phi_phi_fu_72868_p4 = ap_phi_reg_pp0_iter0_data_167_V_read237_phi_reg_72864.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_167_V_read237_rewind_phi_fu_28221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_167_V_read237_rewind_phi_fu_28221_p6 = data_167_V_read237_phi_reg_72864.read();
    } else {
        ap_phi_mux_data_167_V_read237_rewind_phi_fu_28221_p6 = data_167_V_read237_rewind_reg_28217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1680_V_read1750_phi_phi_fu_92537_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1680_V_read1750_phi_phi_fu_92537_p4 = ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_49403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1680_V_read1750_phi_phi_fu_92537_p4 = data_1680_V_read.read();
        } else {
            ap_phi_mux_data_1680_V_read1750_phi_phi_fu_92537_p4 = ap_phi_reg_pp0_iter0_data_1680_V_read1750_phi_reg_92533.read();
        }
    } else {
        ap_phi_mux_data_1680_V_read1750_phi_phi_fu_92537_p4 = ap_phi_reg_pp0_iter0_data_1680_V_read1750_phi_reg_92533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_49403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_49403_p6 = data_1680_V_read1750_phi_reg_92533.read();
    } else {
        ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_49403_p6 = data_1680_V_read1750_rewind_reg_49399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1681_V_read1751_phi_phi_fu_92550_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1681_V_read1751_phi_phi_fu_92550_p4 = ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_49417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1681_V_read1751_phi_phi_fu_92550_p4 = data_1681_V_read.read();
        } else {
            ap_phi_mux_data_1681_V_read1751_phi_phi_fu_92550_p4 = ap_phi_reg_pp0_iter0_data_1681_V_read1751_phi_reg_92546.read();
        }
    } else {
        ap_phi_mux_data_1681_V_read1751_phi_phi_fu_92550_p4 = ap_phi_reg_pp0_iter0_data_1681_V_read1751_phi_reg_92546.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_49417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_49417_p6 = data_1681_V_read1751_phi_reg_92546.read();
    } else {
        ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_49417_p6 = data_1681_V_read1751_rewind_reg_49413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1682_V_read1752_phi_phi_fu_92563_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1682_V_read1752_phi_phi_fu_92563_p4 = ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_49431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1682_V_read1752_phi_phi_fu_92563_p4 = data_1682_V_read.read();
        } else {
            ap_phi_mux_data_1682_V_read1752_phi_phi_fu_92563_p4 = ap_phi_reg_pp0_iter0_data_1682_V_read1752_phi_reg_92559.read();
        }
    } else {
        ap_phi_mux_data_1682_V_read1752_phi_phi_fu_92563_p4 = ap_phi_reg_pp0_iter0_data_1682_V_read1752_phi_reg_92559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_49431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_49431_p6 = data_1682_V_read1752_phi_reg_92559.read();
    } else {
        ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_49431_p6 = data_1682_V_read1752_rewind_reg_49427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1683_V_read1753_phi_phi_fu_92576_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1683_V_read1753_phi_phi_fu_92576_p4 = ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_49445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1683_V_read1753_phi_phi_fu_92576_p4 = data_1683_V_read.read();
        } else {
            ap_phi_mux_data_1683_V_read1753_phi_phi_fu_92576_p4 = ap_phi_reg_pp0_iter0_data_1683_V_read1753_phi_reg_92572.read();
        }
    } else {
        ap_phi_mux_data_1683_V_read1753_phi_phi_fu_92576_p4 = ap_phi_reg_pp0_iter0_data_1683_V_read1753_phi_reg_92572.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_49445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_49445_p6 = data_1683_V_read1753_phi_reg_92572.read();
    } else {
        ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_49445_p6 = data_1683_V_read1753_rewind_reg_49441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1684_V_read1754_phi_phi_fu_92589_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1684_V_read1754_phi_phi_fu_92589_p4 = ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_49459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1684_V_read1754_phi_phi_fu_92589_p4 = data_1684_V_read.read();
        } else {
            ap_phi_mux_data_1684_V_read1754_phi_phi_fu_92589_p4 = ap_phi_reg_pp0_iter0_data_1684_V_read1754_phi_reg_92585.read();
        }
    } else {
        ap_phi_mux_data_1684_V_read1754_phi_phi_fu_92589_p4 = ap_phi_reg_pp0_iter0_data_1684_V_read1754_phi_reg_92585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_49459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_49459_p6 = data_1684_V_read1754_phi_reg_92585.read();
    } else {
        ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_49459_p6 = data_1684_V_read1754_rewind_reg_49455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1685_V_read1755_phi_phi_fu_92602_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1685_V_read1755_phi_phi_fu_92602_p4 = ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_49473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1685_V_read1755_phi_phi_fu_92602_p4 = data_1685_V_read.read();
        } else {
            ap_phi_mux_data_1685_V_read1755_phi_phi_fu_92602_p4 = ap_phi_reg_pp0_iter0_data_1685_V_read1755_phi_reg_92598.read();
        }
    } else {
        ap_phi_mux_data_1685_V_read1755_phi_phi_fu_92602_p4 = ap_phi_reg_pp0_iter0_data_1685_V_read1755_phi_reg_92598.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_49473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_49473_p6 = data_1685_V_read1755_phi_reg_92598.read();
    } else {
        ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_49473_p6 = data_1685_V_read1755_rewind_reg_49469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1686_V_read1756_phi_phi_fu_92615_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1686_V_read1756_phi_phi_fu_92615_p4 = ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_49487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1686_V_read1756_phi_phi_fu_92615_p4 = data_1686_V_read.read();
        } else {
            ap_phi_mux_data_1686_V_read1756_phi_phi_fu_92615_p4 = ap_phi_reg_pp0_iter0_data_1686_V_read1756_phi_reg_92611.read();
        }
    } else {
        ap_phi_mux_data_1686_V_read1756_phi_phi_fu_92615_p4 = ap_phi_reg_pp0_iter0_data_1686_V_read1756_phi_reg_92611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_49487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_49487_p6 = data_1686_V_read1756_phi_reg_92611.read();
    } else {
        ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_49487_p6 = data_1686_V_read1756_rewind_reg_49483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1687_V_read1757_phi_phi_fu_92628_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1687_V_read1757_phi_phi_fu_92628_p4 = ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_49501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1687_V_read1757_phi_phi_fu_92628_p4 = data_1687_V_read.read();
        } else {
            ap_phi_mux_data_1687_V_read1757_phi_phi_fu_92628_p4 = ap_phi_reg_pp0_iter0_data_1687_V_read1757_phi_reg_92624.read();
        }
    } else {
        ap_phi_mux_data_1687_V_read1757_phi_phi_fu_92628_p4 = ap_phi_reg_pp0_iter0_data_1687_V_read1757_phi_reg_92624.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_49501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_49501_p6 = data_1687_V_read1757_phi_reg_92624.read();
    } else {
        ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_49501_p6 = data_1687_V_read1757_rewind_reg_49497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1688_V_read1758_phi_phi_fu_92641_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1688_V_read1758_phi_phi_fu_92641_p4 = ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_49515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1688_V_read1758_phi_phi_fu_92641_p4 = data_1688_V_read.read();
        } else {
            ap_phi_mux_data_1688_V_read1758_phi_phi_fu_92641_p4 = ap_phi_reg_pp0_iter0_data_1688_V_read1758_phi_reg_92637.read();
        }
    } else {
        ap_phi_mux_data_1688_V_read1758_phi_phi_fu_92641_p4 = ap_phi_reg_pp0_iter0_data_1688_V_read1758_phi_reg_92637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_49515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_49515_p6 = data_1688_V_read1758_phi_reg_92637.read();
    } else {
        ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_49515_p6 = data_1688_V_read1758_rewind_reg_49511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1689_V_read1759_phi_phi_fu_92654_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1689_V_read1759_phi_phi_fu_92654_p4 = ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_49529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1689_V_read1759_phi_phi_fu_92654_p4 = data_1689_V_read.read();
        } else {
            ap_phi_mux_data_1689_V_read1759_phi_phi_fu_92654_p4 = ap_phi_reg_pp0_iter0_data_1689_V_read1759_phi_reg_92650.read();
        }
    } else {
        ap_phi_mux_data_1689_V_read1759_phi_phi_fu_92654_p4 = ap_phi_reg_pp0_iter0_data_1689_V_read1759_phi_reg_92650.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_49529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_49529_p6 = data_1689_V_read1759_phi_reg_92650.read();
    } else {
        ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_49529_p6 = data_1689_V_read1759_rewind_reg_49525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_168_V_read238_phi_phi_fu_72881_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_168_V_read238_phi_phi_fu_72881_p4 = ap_phi_mux_data_168_V_read238_rewind_phi_fu_28235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_168_V_read238_phi_phi_fu_72881_p4 = data_168_V_read.read();
        } else {
            ap_phi_mux_data_168_V_read238_phi_phi_fu_72881_p4 = ap_phi_reg_pp0_iter0_data_168_V_read238_phi_reg_72877.read();
        }
    } else {
        ap_phi_mux_data_168_V_read238_phi_phi_fu_72881_p4 = ap_phi_reg_pp0_iter0_data_168_V_read238_phi_reg_72877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_168_V_read238_rewind_phi_fu_28235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_168_V_read238_rewind_phi_fu_28235_p6 = data_168_V_read238_phi_reg_72877.read();
    } else {
        ap_phi_mux_data_168_V_read238_rewind_phi_fu_28235_p6 = data_168_V_read238_rewind_reg_28231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1690_V_read1760_phi_phi_fu_92667_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1690_V_read1760_phi_phi_fu_92667_p4 = ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_49543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1690_V_read1760_phi_phi_fu_92667_p4 = data_1690_V_read.read();
        } else {
            ap_phi_mux_data_1690_V_read1760_phi_phi_fu_92667_p4 = ap_phi_reg_pp0_iter0_data_1690_V_read1760_phi_reg_92663.read();
        }
    } else {
        ap_phi_mux_data_1690_V_read1760_phi_phi_fu_92667_p4 = ap_phi_reg_pp0_iter0_data_1690_V_read1760_phi_reg_92663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_49543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_49543_p6 = data_1690_V_read1760_phi_reg_92663.read();
    } else {
        ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_49543_p6 = data_1690_V_read1760_rewind_reg_49539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1691_V_read1761_phi_phi_fu_92680_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1691_V_read1761_phi_phi_fu_92680_p4 = ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_49557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1691_V_read1761_phi_phi_fu_92680_p4 = data_1691_V_read.read();
        } else {
            ap_phi_mux_data_1691_V_read1761_phi_phi_fu_92680_p4 = ap_phi_reg_pp0_iter0_data_1691_V_read1761_phi_reg_92676.read();
        }
    } else {
        ap_phi_mux_data_1691_V_read1761_phi_phi_fu_92680_p4 = ap_phi_reg_pp0_iter0_data_1691_V_read1761_phi_reg_92676.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_49557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_49557_p6 = data_1691_V_read1761_phi_reg_92676.read();
    } else {
        ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_49557_p6 = data_1691_V_read1761_rewind_reg_49553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1692_V_read1762_phi_phi_fu_92693_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1692_V_read1762_phi_phi_fu_92693_p4 = ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_49571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1692_V_read1762_phi_phi_fu_92693_p4 = data_1692_V_read.read();
        } else {
            ap_phi_mux_data_1692_V_read1762_phi_phi_fu_92693_p4 = ap_phi_reg_pp0_iter0_data_1692_V_read1762_phi_reg_92689.read();
        }
    } else {
        ap_phi_mux_data_1692_V_read1762_phi_phi_fu_92693_p4 = ap_phi_reg_pp0_iter0_data_1692_V_read1762_phi_reg_92689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_49571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_49571_p6 = data_1692_V_read1762_phi_reg_92689.read();
    } else {
        ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_49571_p6 = data_1692_V_read1762_rewind_reg_49567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1693_V_read1763_phi_phi_fu_92706_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1693_V_read1763_phi_phi_fu_92706_p4 = ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_49585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1693_V_read1763_phi_phi_fu_92706_p4 = data_1693_V_read.read();
        } else {
            ap_phi_mux_data_1693_V_read1763_phi_phi_fu_92706_p4 = ap_phi_reg_pp0_iter0_data_1693_V_read1763_phi_reg_92702.read();
        }
    } else {
        ap_phi_mux_data_1693_V_read1763_phi_phi_fu_92706_p4 = ap_phi_reg_pp0_iter0_data_1693_V_read1763_phi_reg_92702.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_49585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_49585_p6 = data_1693_V_read1763_phi_reg_92702.read();
    } else {
        ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_49585_p6 = data_1693_V_read1763_rewind_reg_49581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1694_V_read1764_phi_phi_fu_92719_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1694_V_read1764_phi_phi_fu_92719_p4 = ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_49599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1694_V_read1764_phi_phi_fu_92719_p4 = data_1694_V_read.read();
        } else {
            ap_phi_mux_data_1694_V_read1764_phi_phi_fu_92719_p4 = ap_phi_reg_pp0_iter0_data_1694_V_read1764_phi_reg_92715.read();
        }
    } else {
        ap_phi_mux_data_1694_V_read1764_phi_phi_fu_92719_p4 = ap_phi_reg_pp0_iter0_data_1694_V_read1764_phi_reg_92715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_49599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_49599_p6 = data_1694_V_read1764_phi_reg_92715.read();
    } else {
        ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_49599_p6 = data_1694_V_read1764_rewind_reg_49595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1695_V_read1765_phi_phi_fu_92732_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1695_V_read1765_phi_phi_fu_92732_p4 = ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_49613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1695_V_read1765_phi_phi_fu_92732_p4 = data_1695_V_read.read();
        } else {
            ap_phi_mux_data_1695_V_read1765_phi_phi_fu_92732_p4 = ap_phi_reg_pp0_iter0_data_1695_V_read1765_phi_reg_92728.read();
        }
    } else {
        ap_phi_mux_data_1695_V_read1765_phi_phi_fu_92732_p4 = ap_phi_reg_pp0_iter0_data_1695_V_read1765_phi_reg_92728.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_49613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_49613_p6 = data_1695_V_read1765_phi_reg_92728.read();
    } else {
        ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_49613_p6 = data_1695_V_read1765_rewind_reg_49609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1696_V_read1766_phi_phi_fu_92745_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1696_V_read1766_phi_phi_fu_92745_p4 = ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_49627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1696_V_read1766_phi_phi_fu_92745_p4 = data_1696_V_read.read();
        } else {
            ap_phi_mux_data_1696_V_read1766_phi_phi_fu_92745_p4 = ap_phi_reg_pp0_iter0_data_1696_V_read1766_phi_reg_92741.read();
        }
    } else {
        ap_phi_mux_data_1696_V_read1766_phi_phi_fu_92745_p4 = ap_phi_reg_pp0_iter0_data_1696_V_read1766_phi_reg_92741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_49627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_49627_p6 = data_1696_V_read1766_phi_reg_92741.read();
    } else {
        ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_49627_p6 = data_1696_V_read1766_rewind_reg_49623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1697_V_read1767_phi_phi_fu_92758_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1697_V_read1767_phi_phi_fu_92758_p4 = ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_49641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1697_V_read1767_phi_phi_fu_92758_p4 = data_1697_V_read.read();
        } else {
            ap_phi_mux_data_1697_V_read1767_phi_phi_fu_92758_p4 = ap_phi_reg_pp0_iter0_data_1697_V_read1767_phi_reg_92754.read();
        }
    } else {
        ap_phi_mux_data_1697_V_read1767_phi_phi_fu_92758_p4 = ap_phi_reg_pp0_iter0_data_1697_V_read1767_phi_reg_92754.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_49641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_49641_p6 = data_1697_V_read1767_phi_reg_92754.read();
    } else {
        ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_49641_p6 = data_1697_V_read1767_rewind_reg_49637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1698_V_read1768_phi_phi_fu_92771_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1698_V_read1768_phi_phi_fu_92771_p4 = ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_49655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1698_V_read1768_phi_phi_fu_92771_p4 = data_1698_V_read.read();
        } else {
            ap_phi_mux_data_1698_V_read1768_phi_phi_fu_92771_p4 = ap_phi_reg_pp0_iter0_data_1698_V_read1768_phi_reg_92767.read();
        }
    } else {
        ap_phi_mux_data_1698_V_read1768_phi_phi_fu_92771_p4 = ap_phi_reg_pp0_iter0_data_1698_V_read1768_phi_reg_92767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_49655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_49655_p6 = data_1698_V_read1768_phi_reg_92767.read();
    } else {
        ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_49655_p6 = data_1698_V_read1768_rewind_reg_49651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1699_V_read1769_phi_phi_fu_92784_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1699_V_read1769_phi_phi_fu_92784_p4 = ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_49669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1699_V_read1769_phi_phi_fu_92784_p4 = data_1699_V_read.read();
        } else {
            ap_phi_mux_data_1699_V_read1769_phi_phi_fu_92784_p4 = ap_phi_reg_pp0_iter0_data_1699_V_read1769_phi_reg_92780.read();
        }
    } else {
        ap_phi_mux_data_1699_V_read1769_phi_phi_fu_92784_p4 = ap_phi_reg_pp0_iter0_data_1699_V_read1769_phi_reg_92780.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_49669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_49669_p6 = data_1699_V_read1769_phi_reg_92780.read();
    } else {
        ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_49669_p6 = data_1699_V_read1769_rewind_reg_49665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_169_V_read239_phi_phi_fu_72894_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_169_V_read239_phi_phi_fu_72894_p4 = ap_phi_mux_data_169_V_read239_rewind_phi_fu_28249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_169_V_read239_phi_phi_fu_72894_p4 = data_169_V_read.read();
        } else {
            ap_phi_mux_data_169_V_read239_phi_phi_fu_72894_p4 = ap_phi_reg_pp0_iter0_data_169_V_read239_phi_reg_72890.read();
        }
    } else {
        ap_phi_mux_data_169_V_read239_phi_phi_fu_72894_p4 = ap_phi_reg_pp0_iter0_data_169_V_read239_phi_reg_72890.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_169_V_read239_rewind_phi_fu_28249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_169_V_read239_rewind_phi_fu_28249_p6 = data_169_V_read239_phi_reg_72890.read();
    } else {
        ap_phi_mux_data_169_V_read239_rewind_phi_fu_28249_p6 = data_169_V_read239_rewind_reg_28245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_16_V_read86_phi_phi_fu_70905_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_16_V_read86_phi_phi_fu_70905_p4 = ap_phi_mux_data_16_V_read86_rewind_phi_fu_26107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_16_V_read86_phi_phi_fu_70905_p4 = data_16_V_read.read();
        } else {
            ap_phi_mux_data_16_V_read86_phi_phi_fu_70905_p4 = ap_phi_reg_pp0_iter0_data_16_V_read86_phi_reg_70901.read();
        }
    } else {
        ap_phi_mux_data_16_V_read86_phi_phi_fu_70905_p4 = ap_phi_reg_pp0_iter0_data_16_V_read86_phi_reg_70901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_16_V_read86_rewind_phi_fu_26107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_16_V_read86_rewind_phi_fu_26107_p6 = data_16_V_read86_phi_reg_70901.read();
    } else {
        ap_phi_mux_data_16_V_read86_rewind_phi_fu_26107_p6 = data_16_V_read86_rewind_reg_26103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1700_V_read1770_phi_phi_fu_92797_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1700_V_read1770_phi_phi_fu_92797_p4 = ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_49683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1700_V_read1770_phi_phi_fu_92797_p4 = data_1700_V_read.read();
        } else {
            ap_phi_mux_data_1700_V_read1770_phi_phi_fu_92797_p4 = ap_phi_reg_pp0_iter0_data_1700_V_read1770_phi_reg_92793.read();
        }
    } else {
        ap_phi_mux_data_1700_V_read1770_phi_phi_fu_92797_p4 = ap_phi_reg_pp0_iter0_data_1700_V_read1770_phi_reg_92793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_49683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_49683_p6 = data_1700_V_read1770_phi_reg_92793.read();
    } else {
        ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_49683_p6 = data_1700_V_read1770_rewind_reg_49679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1701_V_read1771_phi_phi_fu_92810_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1701_V_read1771_phi_phi_fu_92810_p4 = ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_49697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1701_V_read1771_phi_phi_fu_92810_p4 = data_1701_V_read.read();
        } else {
            ap_phi_mux_data_1701_V_read1771_phi_phi_fu_92810_p4 = ap_phi_reg_pp0_iter0_data_1701_V_read1771_phi_reg_92806.read();
        }
    } else {
        ap_phi_mux_data_1701_V_read1771_phi_phi_fu_92810_p4 = ap_phi_reg_pp0_iter0_data_1701_V_read1771_phi_reg_92806.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_49697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_49697_p6 = data_1701_V_read1771_phi_reg_92806.read();
    } else {
        ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_49697_p6 = data_1701_V_read1771_rewind_reg_49693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1702_V_read1772_phi_phi_fu_92823_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1702_V_read1772_phi_phi_fu_92823_p4 = ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_49711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1702_V_read1772_phi_phi_fu_92823_p4 = data_1702_V_read.read();
        } else {
            ap_phi_mux_data_1702_V_read1772_phi_phi_fu_92823_p4 = ap_phi_reg_pp0_iter0_data_1702_V_read1772_phi_reg_92819.read();
        }
    } else {
        ap_phi_mux_data_1702_V_read1772_phi_phi_fu_92823_p4 = ap_phi_reg_pp0_iter0_data_1702_V_read1772_phi_reg_92819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_49711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_49711_p6 = data_1702_V_read1772_phi_reg_92819.read();
    } else {
        ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_49711_p6 = data_1702_V_read1772_rewind_reg_49707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1703_V_read1773_phi_phi_fu_92836_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1703_V_read1773_phi_phi_fu_92836_p4 = ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_49725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1703_V_read1773_phi_phi_fu_92836_p4 = data_1703_V_read.read();
        } else {
            ap_phi_mux_data_1703_V_read1773_phi_phi_fu_92836_p4 = ap_phi_reg_pp0_iter0_data_1703_V_read1773_phi_reg_92832.read();
        }
    } else {
        ap_phi_mux_data_1703_V_read1773_phi_phi_fu_92836_p4 = ap_phi_reg_pp0_iter0_data_1703_V_read1773_phi_reg_92832.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_49725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_49725_p6 = data_1703_V_read1773_phi_reg_92832.read();
    } else {
        ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_49725_p6 = data_1703_V_read1773_rewind_reg_49721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1704_V_read1774_phi_phi_fu_92849_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1704_V_read1774_phi_phi_fu_92849_p4 = ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_49739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1704_V_read1774_phi_phi_fu_92849_p4 = data_1704_V_read.read();
        } else {
            ap_phi_mux_data_1704_V_read1774_phi_phi_fu_92849_p4 = ap_phi_reg_pp0_iter0_data_1704_V_read1774_phi_reg_92845.read();
        }
    } else {
        ap_phi_mux_data_1704_V_read1774_phi_phi_fu_92849_p4 = ap_phi_reg_pp0_iter0_data_1704_V_read1774_phi_reg_92845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_49739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_49739_p6 = data_1704_V_read1774_phi_reg_92845.read();
    } else {
        ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_49739_p6 = data_1704_V_read1774_rewind_reg_49735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1705_V_read1775_phi_phi_fu_92862_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1705_V_read1775_phi_phi_fu_92862_p4 = ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_49753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1705_V_read1775_phi_phi_fu_92862_p4 = data_1705_V_read.read();
        } else {
            ap_phi_mux_data_1705_V_read1775_phi_phi_fu_92862_p4 = ap_phi_reg_pp0_iter0_data_1705_V_read1775_phi_reg_92858.read();
        }
    } else {
        ap_phi_mux_data_1705_V_read1775_phi_phi_fu_92862_p4 = ap_phi_reg_pp0_iter0_data_1705_V_read1775_phi_reg_92858.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_49753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_49753_p6 = data_1705_V_read1775_phi_reg_92858.read();
    } else {
        ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_49753_p6 = data_1705_V_read1775_rewind_reg_49749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1706_V_read1776_phi_phi_fu_92875_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1706_V_read1776_phi_phi_fu_92875_p4 = ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_49767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1706_V_read1776_phi_phi_fu_92875_p4 = data_1706_V_read.read();
        } else {
            ap_phi_mux_data_1706_V_read1776_phi_phi_fu_92875_p4 = ap_phi_reg_pp0_iter0_data_1706_V_read1776_phi_reg_92871.read();
        }
    } else {
        ap_phi_mux_data_1706_V_read1776_phi_phi_fu_92875_p4 = ap_phi_reg_pp0_iter0_data_1706_V_read1776_phi_reg_92871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_49767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_49767_p6 = data_1706_V_read1776_phi_reg_92871.read();
    } else {
        ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_49767_p6 = data_1706_V_read1776_rewind_reg_49763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1707_V_read1777_phi_phi_fu_92888_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1707_V_read1777_phi_phi_fu_92888_p4 = ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_49781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1707_V_read1777_phi_phi_fu_92888_p4 = data_1707_V_read.read();
        } else {
            ap_phi_mux_data_1707_V_read1777_phi_phi_fu_92888_p4 = ap_phi_reg_pp0_iter0_data_1707_V_read1777_phi_reg_92884.read();
        }
    } else {
        ap_phi_mux_data_1707_V_read1777_phi_phi_fu_92888_p4 = ap_phi_reg_pp0_iter0_data_1707_V_read1777_phi_reg_92884.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_49781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_49781_p6 = data_1707_V_read1777_phi_reg_92884.read();
    } else {
        ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_49781_p6 = data_1707_V_read1777_rewind_reg_49777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1708_V_read1778_phi_phi_fu_92901_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1708_V_read1778_phi_phi_fu_92901_p4 = ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_49795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1708_V_read1778_phi_phi_fu_92901_p4 = data_1708_V_read.read();
        } else {
            ap_phi_mux_data_1708_V_read1778_phi_phi_fu_92901_p4 = ap_phi_reg_pp0_iter0_data_1708_V_read1778_phi_reg_92897.read();
        }
    } else {
        ap_phi_mux_data_1708_V_read1778_phi_phi_fu_92901_p4 = ap_phi_reg_pp0_iter0_data_1708_V_read1778_phi_reg_92897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_49795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_49795_p6 = data_1708_V_read1778_phi_reg_92897.read();
    } else {
        ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_49795_p6 = data_1708_V_read1778_rewind_reg_49791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1709_V_read1779_phi_phi_fu_92914_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1709_V_read1779_phi_phi_fu_92914_p4 = ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_49809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1709_V_read1779_phi_phi_fu_92914_p4 = data_1709_V_read.read();
        } else {
            ap_phi_mux_data_1709_V_read1779_phi_phi_fu_92914_p4 = ap_phi_reg_pp0_iter0_data_1709_V_read1779_phi_reg_92910.read();
        }
    } else {
        ap_phi_mux_data_1709_V_read1779_phi_phi_fu_92914_p4 = ap_phi_reg_pp0_iter0_data_1709_V_read1779_phi_reg_92910.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_49809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_49809_p6 = data_1709_V_read1779_phi_reg_92910.read();
    } else {
        ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_49809_p6 = data_1709_V_read1779_rewind_reg_49805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_170_V_read240_phi_phi_fu_72907_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_170_V_read240_phi_phi_fu_72907_p4 = ap_phi_mux_data_170_V_read240_rewind_phi_fu_28263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_170_V_read240_phi_phi_fu_72907_p4 = data_170_V_read.read();
        } else {
            ap_phi_mux_data_170_V_read240_phi_phi_fu_72907_p4 = ap_phi_reg_pp0_iter0_data_170_V_read240_phi_reg_72903.read();
        }
    } else {
        ap_phi_mux_data_170_V_read240_phi_phi_fu_72907_p4 = ap_phi_reg_pp0_iter0_data_170_V_read240_phi_reg_72903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_170_V_read240_rewind_phi_fu_28263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_170_V_read240_rewind_phi_fu_28263_p6 = data_170_V_read240_phi_reg_72903.read();
    } else {
        ap_phi_mux_data_170_V_read240_rewind_phi_fu_28263_p6 = data_170_V_read240_rewind_reg_28259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1710_V_read1780_phi_phi_fu_92927_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1710_V_read1780_phi_phi_fu_92927_p4 = ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_49823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1710_V_read1780_phi_phi_fu_92927_p4 = data_1710_V_read.read();
        } else {
            ap_phi_mux_data_1710_V_read1780_phi_phi_fu_92927_p4 = ap_phi_reg_pp0_iter0_data_1710_V_read1780_phi_reg_92923.read();
        }
    } else {
        ap_phi_mux_data_1710_V_read1780_phi_phi_fu_92927_p4 = ap_phi_reg_pp0_iter0_data_1710_V_read1780_phi_reg_92923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_49823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_49823_p6 = data_1710_V_read1780_phi_reg_92923.read();
    } else {
        ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_49823_p6 = data_1710_V_read1780_rewind_reg_49819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1711_V_read1781_phi_phi_fu_92940_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1711_V_read1781_phi_phi_fu_92940_p4 = ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_49837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1711_V_read1781_phi_phi_fu_92940_p4 = data_1711_V_read.read();
        } else {
            ap_phi_mux_data_1711_V_read1781_phi_phi_fu_92940_p4 = ap_phi_reg_pp0_iter0_data_1711_V_read1781_phi_reg_92936.read();
        }
    } else {
        ap_phi_mux_data_1711_V_read1781_phi_phi_fu_92940_p4 = ap_phi_reg_pp0_iter0_data_1711_V_read1781_phi_reg_92936.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_49837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_49837_p6 = data_1711_V_read1781_phi_reg_92936.read();
    } else {
        ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_49837_p6 = data_1711_V_read1781_rewind_reg_49833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1712_V_read1782_phi_phi_fu_92953_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1712_V_read1782_phi_phi_fu_92953_p4 = ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_49851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1712_V_read1782_phi_phi_fu_92953_p4 = data_1712_V_read.read();
        } else {
            ap_phi_mux_data_1712_V_read1782_phi_phi_fu_92953_p4 = ap_phi_reg_pp0_iter0_data_1712_V_read1782_phi_reg_92949.read();
        }
    } else {
        ap_phi_mux_data_1712_V_read1782_phi_phi_fu_92953_p4 = ap_phi_reg_pp0_iter0_data_1712_V_read1782_phi_reg_92949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_49851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_49851_p6 = data_1712_V_read1782_phi_reg_92949.read();
    } else {
        ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_49851_p6 = data_1712_V_read1782_rewind_reg_49847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1713_V_read1783_phi_phi_fu_92966_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1713_V_read1783_phi_phi_fu_92966_p4 = ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_49865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1713_V_read1783_phi_phi_fu_92966_p4 = data_1713_V_read.read();
        } else {
            ap_phi_mux_data_1713_V_read1783_phi_phi_fu_92966_p4 = ap_phi_reg_pp0_iter0_data_1713_V_read1783_phi_reg_92962.read();
        }
    } else {
        ap_phi_mux_data_1713_V_read1783_phi_phi_fu_92966_p4 = ap_phi_reg_pp0_iter0_data_1713_V_read1783_phi_reg_92962.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_49865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_49865_p6 = data_1713_V_read1783_phi_reg_92962.read();
    } else {
        ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_49865_p6 = data_1713_V_read1783_rewind_reg_49861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1714_V_read1784_phi_phi_fu_92979_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1714_V_read1784_phi_phi_fu_92979_p4 = ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_49879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1714_V_read1784_phi_phi_fu_92979_p4 = data_1714_V_read.read();
        } else {
            ap_phi_mux_data_1714_V_read1784_phi_phi_fu_92979_p4 = ap_phi_reg_pp0_iter0_data_1714_V_read1784_phi_reg_92975.read();
        }
    } else {
        ap_phi_mux_data_1714_V_read1784_phi_phi_fu_92979_p4 = ap_phi_reg_pp0_iter0_data_1714_V_read1784_phi_reg_92975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_49879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_49879_p6 = data_1714_V_read1784_phi_reg_92975.read();
    } else {
        ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_49879_p6 = data_1714_V_read1784_rewind_reg_49875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1715_V_read1785_phi_phi_fu_92992_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1715_V_read1785_phi_phi_fu_92992_p4 = ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_49893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1715_V_read1785_phi_phi_fu_92992_p4 = data_1715_V_read.read();
        } else {
            ap_phi_mux_data_1715_V_read1785_phi_phi_fu_92992_p4 = ap_phi_reg_pp0_iter0_data_1715_V_read1785_phi_reg_92988.read();
        }
    } else {
        ap_phi_mux_data_1715_V_read1785_phi_phi_fu_92992_p4 = ap_phi_reg_pp0_iter0_data_1715_V_read1785_phi_reg_92988.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_49893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_49893_p6 = data_1715_V_read1785_phi_reg_92988.read();
    } else {
        ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_49893_p6 = data_1715_V_read1785_rewind_reg_49889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1716_V_read1786_phi_phi_fu_93005_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1716_V_read1786_phi_phi_fu_93005_p4 = ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_49907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1716_V_read1786_phi_phi_fu_93005_p4 = data_1716_V_read.read();
        } else {
            ap_phi_mux_data_1716_V_read1786_phi_phi_fu_93005_p4 = ap_phi_reg_pp0_iter0_data_1716_V_read1786_phi_reg_93001.read();
        }
    } else {
        ap_phi_mux_data_1716_V_read1786_phi_phi_fu_93005_p4 = ap_phi_reg_pp0_iter0_data_1716_V_read1786_phi_reg_93001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_49907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_49907_p6 = data_1716_V_read1786_phi_reg_93001.read();
    } else {
        ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_49907_p6 = data_1716_V_read1786_rewind_reg_49903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1717_V_read1787_phi_phi_fu_93018_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1717_V_read1787_phi_phi_fu_93018_p4 = ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_49921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1717_V_read1787_phi_phi_fu_93018_p4 = data_1717_V_read.read();
        } else {
            ap_phi_mux_data_1717_V_read1787_phi_phi_fu_93018_p4 = ap_phi_reg_pp0_iter0_data_1717_V_read1787_phi_reg_93014.read();
        }
    } else {
        ap_phi_mux_data_1717_V_read1787_phi_phi_fu_93018_p4 = ap_phi_reg_pp0_iter0_data_1717_V_read1787_phi_reg_93014.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_49921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_49921_p6 = data_1717_V_read1787_phi_reg_93014.read();
    } else {
        ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_49921_p6 = data_1717_V_read1787_rewind_reg_49917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1718_V_read1788_phi_phi_fu_93031_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1718_V_read1788_phi_phi_fu_93031_p4 = ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_49935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1718_V_read1788_phi_phi_fu_93031_p4 = data_1718_V_read.read();
        } else {
            ap_phi_mux_data_1718_V_read1788_phi_phi_fu_93031_p4 = ap_phi_reg_pp0_iter0_data_1718_V_read1788_phi_reg_93027.read();
        }
    } else {
        ap_phi_mux_data_1718_V_read1788_phi_phi_fu_93031_p4 = ap_phi_reg_pp0_iter0_data_1718_V_read1788_phi_reg_93027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_49935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_49935_p6 = data_1718_V_read1788_phi_reg_93027.read();
    } else {
        ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_49935_p6 = data_1718_V_read1788_rewind_reg_49931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1719_V_read1789_phi_phi_fu_93044_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1719_V_read1789_phi_phi_fu_93044_p4 = ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_49949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1719_V_read1789_phi_phi_fu_93044_p4 = data_1719_V_read.read();
        } else {
            ap_phi_mux_data_1719_V_read1789_phi_phi_fu_93044_p4 = ap_phi_reg_pp0_iter0_data_1719_V_read1789_phi_reg_93040.read();
        }
    } else {
        ap_phi_mux_data_1719_V_read1789_phi_phi_fu_93044_p4 = ap_phi_reg_pp0_iter0_data_1719_V_read1789_phi_reg_93040.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_49949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_49949_p6 = data_1719_V_read1789_phi_reg_93040.read();
    } else {
        ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_49949_p6 = data_1719_V_read1789_rewind_reg_49945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_171_V_read241_phi_phi_fu_72920_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_171_V_read241_phi_phi_fu_72920_p4 = ap_phi_mux_data_171_V_read241_rewind_phi_fu_28277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_171_V_read241_phi_phi_fu_72920_p4 = data_171_V_read.read();
        } else {
            ap_phi_mux_data_171_V_read241_phi_phi_fu_72920_p4 = ap_phi_reg_pp0_iter0_data_171_V_read241_phi_reg_72916.read();
        }
    } else {
        ap_phi_mux_data_171_V_read241_phi_phi_fu_72920_p4 = ap_phi_reg_pp0_iter0_data_171_V_read241_phi_reg_72916.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_171_V_read241_rewind_phi_fu_28277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_171_V_read241_rewind_phi_fu_28277_p6 = data_171_V_read241_phi_reg_72916.read();
    } else {
        ap_phi_mux_data_171_V_read241_rewind_phi_fu_28277_p6 = data_171_V_read241_rewind_reg_28273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1720_V_read1790_phi_phi_fu_93057_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1720_V_read1790_phi_phi_fu_93057_p4 = ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_49963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1720_V_read1790_phi_phi_fu_93057_p4 = data_1720_V_read.read();
        } else {
            ap_phi_mux_data_1720_V_read1790_phi_phi_fu_93057_p4 = ap_phi_reg_pp0_iter0_data_1720_V_read1790_phi_reg_93053.read();
        }
    } else {
        ap_phi_mux_data_1720_V_read1790_phi_phi_fu_93057_p4 = ap_phi_reg_pp0_iter0_data_1720_V_read1790_phi_reg_93053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_49963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_49963_p6 = data_1720_V_read1790_phi_reg_93053.read();
    } else {
        ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_49963_p6 = data_1720_V_read1790_rewind_reg_49959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1721_V_read1791_phi_phi_fu_93070_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1721_V_read1791_phi_phi_fu_93070_p4 = ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_49977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1721_V_read1791_phi_phi_fu_93070_p4 = data_1721_V_read.read();
        } else {
            ap_phi_mux_data_1721_V_read1791_phi_phi_fu_93070_p4 = ap_phi_reg_pp0_iter0_data_1721_V_read1791_phi_reg_93066.read();
        }
    } else {
        ap_phi_mux_data_1721_V_read1791_phi_phi_fu_93070_p4 = ap_phi_reg_pp0_iter0_data_1721_V_read1791_phi_reg_93066.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_49977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_49977_p6 = data_1721_V_read1791_phi_reg_93066.read();
    } else {
        ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_49977_p6 = data_1721_V_read1791_rewind_reg_49973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1722_V_read1792_phi_phi_fu_93083_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1722_V_read1792_phi_phi_fu_93083_p4 = ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_49991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1722_V_read1792_phi_phi_fu_93083_p4 = data_1722_V_read.read();
        } else {
            ap_phi_mux_data_1722_V_read1792_phi_phi_fu_93083_p4 = ap_phi_reg_pp0_iter0_data_1722_V_read1792_phi_reg_93079.read();
        }
    } else {
        ap_phi_mux_data_1722_V_read1792_phi_phi_fu_93083_p4 = ap_phi_reg_pp0_iter0_data_1722_V_read1792_phi_reg_93079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_49991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_49991_p6 = data_1722_V_read1792_phi_reg_93079.read();
    } else {
        ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_49991_p6 = data_1722_V_read1792_rewind_reg_49987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1723_V_read1793_phi_phi_fu_93096_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1723_V_read1793_phi_phi_fu_93096_p4 = ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_50005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1723_V_read1793_phi_phi_fu_93096_p4 = data_1723_V_read.read();
        } else {
            ap_phi_mux_data_1723_V_read1793_phi_phi_fu_93096_p4 = ap_phi_reg_pp0_iter0_data_1723_V_read1793_phi_reg_93092.read();
        }
    } else {
        ap_phi_mux_data_1723_V_read1793_phi_phi_fu_93096_p4 = ap_phi_reg_pp0_iter0_data_1723_V_read1793_phi_reg_93092.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_50005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_50005_p6 = data_1723_V_read1793_phi_reg_93092.read();
    } else {
        ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_50005_p6 = data_1723_V_read1793_rewind_reg_50001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1724_V_read1794_phi_phi_fu_93109_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1724_V_read1794_phi_phi_fu_93109_p4 = ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_50019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1724_V_read1794_phi_phi_fu_93109_p4 = data_1724_V_read.read();
        } else {
            ap_phi_mux_data_1724_V_read1794_phi_phi_fu_93109_p4 = ap_phi_reg_pp0_iter0_data_1724_V_read1794_phi_reg_93105.read();
        }
    } else {
        ap_phi_mux_data_1724_V_read1794_phi_phi_fu_93109_p4 = ap_phi_reg_pp0_iter0_data_1724_V_read1794_phi_reg_93105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_50019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_50019_p6 = data_1724_V_read1794_phi_reg_93105.read();
    } else {
        ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_50019_p6 = data_1724_V_read1794_rewind_reg_50015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1725_V_read1795_phi_phi_fu_93122_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1725_V_read1795_phi_phi_fu_93122_p4 = ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_50033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1725_V_read1795_phi_phi_fu_93122_p4 = data_1725_V_read.read();
        } else {
            ap_phi_mux_data_1725_V_read1795_phi_phi_fu_93122_p4 = ap_phi_reg_pp0_iter0_data_1725_V_read1795_phi_reg_93118.read();
        }
    } else {
        ap_phi_mux_data_1725_V_read1795_phi_phi_fu_93122_p4 = ap_phi_reg_pp0_iter0_data_1725_V_read1795_phi_reg_93118.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_50033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_50033_p6 = data_1725_V_read1795_phi_reg_93118.read();
    } else {
        ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_50033_p6 = data_1725_V_read1795_rewind_reg_50029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1726_V_read1796_phi_phi_fu_93135_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1726_V_read1796_phi_phi_fu_93135_p4 = ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_50047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1726_V_read1796_phi_phi_fu_93135_p4 = data_1726_V_read.read();
        } else {
            ap_phi_mux_data_1726_V_read1796_phi_phi_fu_93135_p4 = ap_phi_reg_pp0_iter0_data_1726_V_read1796_phi_reg_93131.read();
        }
    } else {
        ap_phi_mux_data_1726_V_read1796_phi_phi_fu_93135_p4 = ap_phi_reg_pp0_iter0_data_1726_V_read1796_phi_reg_93131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_50047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_50047_p6 = data_1726_V_read1796_phi_reg_93131.read();
    } else {
        ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_50047_p6 = data_1726_V_read1796_rewind_reg_50043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1727_V_read1797_phi_phi_fu_93148_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1727_V_read1797_phi_phi_fu_93148_p4 = ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_50061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1727_V_read1797_phi_phi_fu_93148_p4 = data_1727_V_read.read();
        } else {
            ap_phi_mux_data_1727_V_read1797_phi_phi_fu_93148_p4 = ap_phi_reg_pp0_iter0_data_1727_V_read1797_phi_reg_93144.read();
        }
    } else {
        ap_phi_mux_data_1727_V_read1797_phi_phi_fu_93148_p4 = ap_phi_reg_pp0_iter0_data_1727_V_read1797_phi_reg_93144.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_50061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_50061_p6 = data_1727_V_read1797_phi_reg_93144.read();
    } else {
        ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_50061_p6 = data_1727_V_read1797_rewind_reg_50057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1728_V_read1798_phi_phi_fu_93161_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1728_V_read1798_phi_phi_fu_93161_p4 = ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_50075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1728_V_read1798_phi_phi_fu_93161_p4 = data_1728_V_read.read();
        } else {
            ap_phi_mux_data_1728_V_read1798_phi_phi_fu_93161_p4 = ap_phi_reg_pp0_iter0_data_1728_V_read1798_phi_reg_93157.read();
        }
    } else {
        ap_phi_mux_data_1728_V_read1798_phi_phi_fu_93161_p4 = ap_phi_reg_pp0_iter0_data_1728_V_read1798_phi_reg_93157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_50075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_50075_p6 = data_1728_V_read1798_phi_reg_93157.read();
    } else {
        ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_50075_p6 = data_1728_V_read1798_rewind_reg_50071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1729_V_read1799_phi_phi_fu_93174_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1729_V_read1799_phi_phi_fu_93174_p4 = ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_50089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1729_V_read1799_phi_phi_fu_93174_p4 = data_1729_V_read.read();
        } else {
            ap_phi_mux_data_1729_V_read1799_phi_phi_fu_93174_p4 = ap_phi_reg_pp0_iter0_data_1729_V_read1799_phi_reg_93170.read();
        }
    } else {
        ap_phi_mux_data_1729_V_read1799_phi_phi_fu_93174_p4 = ap_phi_reg_pp0_iter0_data_1729_V_read1799_phi_reg_93170.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_50089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_50089_p6 = data_1729_V_read1799_phi_reg_93170.read();
    } else {
        ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_50089_p6 = data_1729_V_read1799_rewind_reg_50085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_172_V_read242_phi_phi_fu_72933_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_172_V_read242_phi_phi_fu_72933_p4 = ap_phi_mux_data_172_V_read242_rewind_phi_fu_28291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_172_V_read242_phi_phi_fu_72933_p4 = data_172_V_read.read();
        } else {
            ap_phi_mux_data_172_V_read242_phi_phi_fu_72933_p4 = ap_phi_reg_pp0_iter0_data_172_V_read242_phi_reg_72929.read();
        }
    } else {
        ap_phi_mux_data_172_V_read242_phi_phi_fu_72933_p4 = ap_phi_reg_pp0_iter0_data_172_V_read242_phi_reg_72929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_172_V_read242_rewind_phi_fu_28291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_172_V_read242_rewind_phi_fu_28291_p6 = data_172_V_read242_phi_reg_72929.read();
    } else {
        ap_phi_mux_data_172_V_read242_rewind_phi_fu_28291_p6 = data_172_V_read242_rewind_reg_28287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1730_V_read1800_phi_phi_fu_93187_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1730_V_read1800_phi_phi_fu_93187_p4 = ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_50103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1730_V_read1800_phi_phi_fu_93187_p4 = data_1730_V_read.read();
        } else {
            ap_phi_mux_data_1730_V_read1800_phi_phi_fu_93187_p4 = ap_phi_reg_pp0_iter0_data_1730_V_read1800_phi_reg_93183.read();
        }
    } else {
        ap_phi_mux_data_1730_V_read1800_phi_phi_fu_93187_p4 = ap_phi_reg_pp0_iter0_data_1730_V_read1800_phi_reg_93183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_50103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_50103_p6 = data_1730_V_read1800_phi_reg_93183.read();
    } else {
        ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_50103_p6 = data_1730_V_read1800_rewind_reg_50099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1731_V_read1801_phi_phi_fu_93200_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1731_V_read1801_phi_phi_fu_93200_p4 = ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_50117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1731_V_read1801_phi_phi_fu_93200_p4 = data_1731_V_read.read();
        } else {
            ap_phi_mux_data_1731_V_read1801_phi_phi_fu_93200_p4 = ap_phi_reg_pp0_iter0_data_1731_V_read1801_phi_reg_93196.read();
        }
    } else {
        ap_phi_mux_data_1731_V_read1801_phi_phi_fu_93200_p4 = ap_phi_reg_pp0_iter0_data_1731_V_read1801_phi_reg_93196.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_50117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_50117_p6 = data_1731_V_read1801_phi_reg_93196.read();
    } else {
        ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_50117_p6 = data_1731_V_read1801_rewind_reg_50113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1732_V_read1802_phi_phi_fu_93213_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1732_V_read1802_phi_phi_fu_93213_p4 = ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_50131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1732_V_read1802_phi_phi_fu_93213_p4 = data_1732_V_read.read();
        } else {
            ap_phi_mux_data_1732_V_read1802_phi_phi_fu_93213_p4 = ap_phi_reg_pp0_iter0_data_1732_V_read1802_phi_reg_93209.read();
        }
    } else {
        ap_phi_mux_data_1732_V_read1802_phi_phi_fu_93213_p4 = ap_phi_reg_pp0_iter0_data_1732_V_read1802_phi_reg_93209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_50131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_50131_p6 = data_1732_V_read1802_phi_reg_93209.read();
    } else {
        ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_50131_p6 = data_1732_V_read1802_rewind_reg_50127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1733_V_read1803_phi_phi_fu_93226_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1733_V_read1803_phi_phi_fu_93226_p4 = ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_50145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1733_V_read1803_phi_phi_fu_93226_p4 = data_1733_V_read.read();
        } else {
            ap_phi_mux_data_1733_V_read1803_phi_phi_fu_93226_p4 = ap_phi_reg_pp0_iter0_data_1733_V_read1803_phi_reg_93222.read();
        }
    } else {
        ap_phi_mux_data_1733_V_read1803_phi_phi_fu_93226_p4 = ap_phi_reg_pp0_iter0_data_1733_V_read1803_phi_reg_93222.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_50145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_50145_p6 = data_1733_V_read1803_phi_reg_93222.read();
    } else {
        ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_50145_p6 = data_1733_V_read1803_rewind_reg_50141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1734_V_read1804_phi_phi_fu_93239_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1734_V_read1804_phi_phi_fu_93239_p4 = ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_50159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1734_V_read1804_phi_phi_fu_93239_p4 = data_1734_V_read.read();
        } else {
            ap_phi_mux_data_1734_V_read1804_phi_phi_fu_93239_p4 = ap_phi_reg_pp0_iter0_data_1734_V_read1804_phi_reg_93235.read();
        }
    } else {
        ap_phi_mux_data_1734_V_read1804_phi_phi_fu_93239_p4 = ap_phi_reg_pp0_iter0_data_1734_V_read1804_phi_reg_93235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_50159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_50159_p6 = data_1734_V_read1804_phi_reg_93235.read();
    } else {
        ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_50159_p6 = data_1734_V_read1804_rewind_reg_50155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1735_V_read1805_phi_phi_fu_93252_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1735_V_read1805_phi_phi_fu_93252_p4 = ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_50173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1735_V_read1805_phi_phi_fu_93252_p4 = data_1735_V_read.read();
        } else {
            ap_phi_mux_data_1735_V_read1805_phi_phi_fu_93252_p4 = ap_phi_reg_pp0_iter0_data_1735_V_read1805_phi_reg_93248.read();
        }
    } else {
        ap_phi_mux_data_1735_V_read1805_phi_phi_fu_93252_p4 = ap_phi_reg_pp0_iter0_data_1735_V_read1805_phi_reg_93248.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_50173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_50173_p6 = data_1735_V_read1805_phi_reg_93248.read();
    } else {
        ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_50173_p6 = data_1735_V_read1805_rewind_reg_50169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1736_V_read1806_phi_phi_fu_93265_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1736_V_read1806_phi_phi_fu_93265_p4 = ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_50187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1736_V_read1806_phi_phi_fu_93265_p4 = data_1736_V_read.read();
        } else {
            ap_phi_mux_data_1736_V_read1806_phi_phi_fu_93265_p4 = ap_phi_reg_pp0_iter0_data_1736_V_read1806_phi_reg_93261.read();
        }
    } else {
        ap_phi_mux_data_1736_V_read1806_phi_phi_fu_93265_p4 = ap_phi_reg_pp0_iter0_data_1736_V_read1806_phi_reg_93261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_50187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_50187_p6 = data_1736_V_read1806_phi_reg_93261.read();
    } else {
        ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_50187_p6 = data_1736_V_read1806_rewind_reg_50183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1737_V_read1807_phi_phi_fu_93278_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1737_V_read1807_phi_phi_fu_93278_p4 = ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_50201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1737_V_read1807_phi_phi_fu_93278_p4 = data_1737_V_read.read();
        } else {
            ap_phi_mux_data_1737_V_read1807_phi_phi_fu_93278_p4 = ap_phi_reg_pp0_iter0_data_1737_V_read1807_phi_reg_93274.read();
        }
    } else {
        ap_phi_mux_data_1737_V_read1807_phi_phi_fu_93278_p4 = ap_phi_reg_pp0_iter0_data_1737_V_read1807_phi_reg_93274.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_50201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_50201_p6 = data_1737_V_read1807_phi_reg_93274.read();
    } else {
        ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_50201_p6 = data_1737_V_read1807_rewind_reg_50197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1738_V_read1808_phi_phi_fu_93291_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1738_V_read1808_phi_phi_fu_93291_p4 = ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_50215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1738_V_read1808_phi_phi_fu_93291_p4 = data_1738_V_read.read();
        } else {
            ap_phi_mux_data_1738_V_read1808_phi_phi_fu_93291_p4 = ap_phi_reg_pp0_iter0_data_1738_V_read1808_phi_reg_93287.read();
        }
    } else {
        ap_phi_mux_data_1738_V_read1808_phi_phi_fu_93291_p4 = ap_phi_reg_pp0_iter0_data_1738_V_read1808_phi_reg_93287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_50215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_50215_p6 = data_1738_V_read1808_phi_reg_93287.read();
    } else {
        ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_50215_p6 = data_1738_V_read1808_rewind_reg_50211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1739_V_read1809_phi_phi_fu_93304_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1739_V_read1809_phi_phi_fu_93304_p4 = ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_50229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1739_V_read1809_phi_phi_fu_93304_p4 = data_1739_V_read.read();
        } else {
            ap_phi_mux_data_1739_V_read1809_phi_phi_fu_93304_p4 = ap_phi_reg_pp0_iter0_data_1739_V_read1809_phi_reg_93300.read();
        }
    } else {
        ap_phi_mux_data_1739_V_read1809_phi_phi_fu_93304_p4 = ap_phi_reg_pp0_iter0_data_1739_V_read1809_phi_reg_93300.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_50229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_50229_p6 = data_1739_V_read1809_phi_reg_93300.read();
    } else {
        ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_50229_p6 = data_1739_V_read1809_rewind_reg_50225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_173_V_read243_phi_phi_fu_72946_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_173_V_read243_phi_phi_fu_72946_p4 = ap_phi_mux_data_173_V_read243_rewind_phi_fu_28305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_173_V_read243_phi_phi_fu_72946_p4 = data_173_V_read.read();
        } else {
            ap_phi_mux_data_173_V_read243_phi_phi_fu_72946_p4 = ap_phi_reg_pp0_iter0_data_173_V_read243_phi_reg_72942.read();
        }
    } else {
        ap_phi_mux_data_173_V_read243_phi_phi_fu_72946_p4 = ap_phi_reg_pp0_iter0_data_173_V_read243_phi_reg_72942.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_173_V_read243_rewind_phi_fu_28305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_173_V_read243_rewind_phi_fu_28305_p6 = data_173_V_read243_phi_reg_72942.read();
    } else {
        ap_phi_mux_data_173_V_read243_rewind_phi_fu_28305_p6 = data_173_V_read243_rewind_reg_28301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1740_V_read1810_phi_phi_fu_93317_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1740_V_read1810_phi_phi_fu_93317_p4 = ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_50243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1740_V_read1810_phi_phi_fu_93317_p4 = data_1740_V_read.read();
        } else {
            ap_phi_mux_data_1740_V_read1810_phi_phi_fu_93317_p4 = ap_phi_reg_pp0_iter0_data_1740_V_read1810_phi_reg_93313.read();
        }
    } else {
        ap_phi_mux_data_1740_V_read1810_phi_phi_fu_93317_p4 = ap_phi_reg_pp0_iter0_data_1740_V_read1810_phi_reg_93313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_50243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_50243_p6 = data_1740_V_read1810_phi_reg_93313.read();
    } else {
        ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_50243_p6 = data_1740_V_read1810_rewind_reg_50239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1741_V_read1811_phi_phi_fu_93330_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1741_V_read1811_phi_phi_fu_93330_p4 = ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_50257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1741_V_read1811_phi_phi_fu_93330_p4 = data_1741_V_read.read();
        } else {
            ap_phi_mux_data_1741_V_read1811_phi_phi_fu_93330_p4 = ap_phi_reg_pp0_iter0_data_1741_V_read1811_phi_reg_93326.read();
        }
    } else {
        ap_phi_mux_data_1741_V_read1811_phi_phi_fu_93330_p4 = ap_phi_reg_pp0_iter0_data_1741_V_read1811_phi_reg_93326.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_50257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_50257_p6 = data_1741_V_read1811_phi_reg_93326.read();
    } else {
        ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_50257_p6 = data_1741_V_read1811_rewind_reg_50253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1742_V_read1812_phi_phi_fu_93343_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1742_V_read1812_phi_phi_fu_93343_p4 = ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_50271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1742_V_read1812_phi_phi_fu_93343_p4 = data_1742_V_read.read();
        } else {
            ap_phi_mux_data_1742_V_read1812_phi_phi_fu_93343_p4 = ap_phi_reg_pp0_iter0_data_1742_V_read1812_phi_reg_93339.read();
        }
    } else {
        ap_phi_mux_data_1742_V_read1812_phi_phi_fu_93343_p4 = ap_phi_reg_pp0_iter0_data_1742_V_read1812_phi_reg_93339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_50271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_50271_p6 = data_1742_V_read1812_phi_reg_93339.read();
    } else {
        ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_50271_p6 = data_1742_V_read1812_rewind_reg_50267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1743_V_read1813_phi_phi_fu_93356_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1743_V_read1813_phi_phi_fu_93356_p4 = ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_50285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1743_V_read1813_phi_phi_fu_93356_p4 = data_1743_V_read.read();
        } else {
            ap_phi_mux_data_1743_V_read1813_phi_phi_fu_93356_p4 = ap_phi_reg_pp0_iter0_data_1743_V_read1813_phi_reg_93352.read();
        }
    } else {
        ap_phi_mux_data_1743_V_read1813_phi_phi_fu_93356_p4 = ap_phi_reg_pp0_iter0_data_1743_V_read1813_phi_reg_93352.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_50285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_50285_p6 = data_1743_V_read1813_phi_reg_93352.read();
    } else {
        ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_50285_p6 = data_1743_V_read1813_rewind_reg_50281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1744_V_read1814_phi_phi_fu_93369_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1744_V_read1814_phi_phi_fu_93369_p4 = ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_50299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1744_V_read1814_phi_phi_fu_93369_p4 = data_1744_V_read.read();
        } else {
            ap_phi_mux_data_1744_V_read1814_phi_phi_fu_93369_p4 = ap_phi_reg_pp0_iter0_data_1744_V_read1814_phi_reg_93365.read();
        }
    } else {
        ap_phi_mux_data_1744_V_read1814_phi_phi_fu_93369_p4 = ap_phi_reg_pp0_iter0_data_1744_V_read1814_phi_reg_93365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_50299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_50299_p6 = data_1744_V_read1814_phi_reg_93365.read();
    } else {
        ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_50299_p6 = data_1744_V_read1814_rewind_reg_50295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1745_V_read1815_phi_phi_fu_93382_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1745_V_read1815_phi_phi_fu_93382_p4 = ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_50313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1745_V_read1815_phi_phi_fu_93382_p4 = data_1745_V_read.read();
        } else {
            ap_phi_mux_data_1745_V_read1815_phi_phi_fu_93382_p4 = ap_phi_reg_pp0_iter0_data_1745_V_read1815_phi_reg_93378.read();
        }
    } else {
        ap_phi_mux_data_1745_V_read1815_phi_phi_fu_93382_p4 = ap_phi_reg_pp0_iter0_data_1745_V_read1815_phi_reg_93378.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_50313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_50313_p6 = data_1745_V_read1815_phi_reg_93378.read();
    } else {
        ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_50313_p6 = data_1745_V_read1815_rewind_reg_50309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1746_V_read1816_phi_phi_fu_93395_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1746_V_read1816_phi_phi_fu_93395_p4 = ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_50327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1746_V_read1816_phi_phi_fu_93395_p4 = data_1746_V_read.read();
        } else {
            ap_phi_mux_data_1746_V_read1816_phi_phi_fu_93395_p4 = ap_phi_reg_pp0_iter0_data_1746_V_read1816_phi_reg_93391.read();
        }
    } else {
        ap_phi_mux_data_1746_V_read1816_phi_phi_fu_93395_p4 = ap_phi_reg_pp0_iter0_data_1746_V_read1816_phi_reg_93391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_50327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_50327_p6 = data_1746_V_read1816_phi_reg_93391.read();
    } else {
        ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_50327_p6 = data_1746_V_read1816_rewind_reg_50323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1747_V_read1817_phi_phi_fu_93408_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1747_V_read1817_phi_phi_fu_93408_p4 = ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_50341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1747_V_read1817_phi_phi_fu_93408_p4 = data_1747_V_read.read();
        } else {
            ap_phi_mux_data_1747_V_read1817_phi_phi_fu_93408_p4 = ap_phi_reg_pp0_iter0_data_1747_V_read1817_phi_reg_93404.read();
        }
    } else {
        ap_phi_mux_data_1747_V_read1817_phi_phi_fu_93408_p4 = ap_phi_reg_pp0_iter0_data_1747_V_read1817_phi_reg_93404.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_50341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_50341_p6 = data_1747_V_read1817_phi_reg_93404.read();
    } else {
        ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_50341_p6 = data_1747_V_read1817_rewind_reg_50337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1748_V_read1818_phi_phi_fu_93421_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1748_V_read1818_phi_phi_fu_93421_p4 = ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_50355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1748_V_read1818_phi_phi_fu_93421_p4 = data_1748_V_read.read();
        } else {
            ap_phi_mux_data_1748_V_read1818_phi_phi_fu_93421_p4 = ap_phi_reg_pp0_iter0_data_1748_V_read1818_phi_reg_93417.read();
        }
    } else {
        ap_phi_mux_data_1748_V_read1818_phi_phi_fu_93421_p4 = ap_phi_reg_pp0_iter0_data_1748_V_read1818_phi_reg_93417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_50355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_50355_p6 = data_1748_V_read1818_phi_reg_93417.read();
    } else {
        ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_50355_p6 = data_1748_V_read1818_rewind_reg_50351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1749_V_read1819_phi_phi_fu_93434_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1749_V_read1819_phi_phi_fu_93434_p4 = ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_50369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1749_V_read1819_phi_phi_fu_93434_p4 = data_1749_V_read.read();
        } else {
            ap_phi_mux_data_1749_V_read1819_phi_phi_fu_93434_p4 = ap_phi_reg_pp0_iter0_data_1749_V_read1819_phi_reg_93430.read();
        }
    } else {
        ap_phi_mux_data_1749_V_read1819_phi_phi_fu_93434_p4 = ap_phi_reg_pp0_iter0_data_1749_V_read1819_phi_reg_93430.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_50369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_50369_p6 = data_1749_V_read1819_phi_reg_93430.read();
    } else {
        ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_50369_p6 = data_1749_V_read1819_rewind_reg_50365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_174_V_read244_phi_phi_fu_72959_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_174_V_read244_phi_phi_fu_72959_p4 = ap_phi_mux_data_174_V_read244_rewind_phi_fu_28319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_174_V_read244_phi_phi_fu_72959_p4 = data_174_V_read.read();
        } else {
            ap_phi_mux_data_174_V_read244_phi_phi_fu_72959_p4 = ap_phi_reg_pp0_iter0_data_174_V_read244_phi_reg_72955.read();
        }
    } else {
        ap_phi_mux_data_174_V_read244_phi_phi_fu_72959_p4 = ap_phi_reg_pp0_iter0_data_174_V_read244_phi_reg_72955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_174_V_read244_rewind_phi_fu_28319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_174_V_read244_rewind_phi_fu_28319_p6 = data_174_V_read244_phi_reg_72955.read();
    } else {
        ap_phi_mux_data_174_V_read244_rewind_phi_fu_28319_p6 = data_174_V_read244_rewind_reg_28315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1750_V_read1820_phi_phi_fu_93447_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1750_V_read1820_phi_phi_fu_93447_p4 = ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_50383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1750_V_read1820_phi_phi_fu_93447_p4 = data_1750_V_read.read();
        } else {
            ap_phi_mux_data_1750_V_read1820_phi_phi_fu_93447_p4 = ap_phi_reg_pp0_iter0_data_1750_V_read1820_phi_reg_93443.read();
        }
    } else {
        ap_phi_mux_data_1750_V_read1820_phi_phi_fu_93447_p4 = ap_phi_reg_pp0_iter0_data_1750_V_read1820_phi_reg_93443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_50383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_50383_p6 = data_1750_V_read1820_phi_reg_93443.read();
    } else {
        ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_50383_p6 = data_1750_V_read1820_rewind_reg_50379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1751_V_read1821_phi_phi_fu_93460_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1751_V_read1821_phi_phi_fu_93460_p4 = ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_50397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1751_V_read1821_phi_phi_fu_93460_p4 = data_1751_V_read.read();
        } else {
            ap_phi_mux_data_1751_V_read1821_phi_phi_fu_93460_p4 = ap_phi_reg_pp0_iter0_data_1751_V_read1821_phi_reg_93456.read();
        }
    } else {
        ap_phi_mux_data_1751_V_read1821_phi_phi_fu_93460_p4 = ap_phi_reg_pp0_iter0_data_1751_V_read1821_phi_reg_93456.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_50397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_50397_p6 = data_1751_V_read1821_phi_reg_93456.read();
    } else {
        ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_50397_p6 = data_1751_V_read1821_rewind_reg_50393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1752_V_read1822_phi_phi_fu_93473_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1752_V_read1822_phi_phi_fu_93473_p4 = ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_50411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1752_V_read1822_phi_phi_fu_93473_p4 = data_1752_V_read.read();
        } else {
            ap_phi_mux_data_1752_V_read1822_phi_phi_fu_93473_p4 = ap_phi_reg_pp0_iter0_data_1752_V_read1822_phi_reg_93469.read();
        }
    } else {
        ap_phi_mux_data_1752_V_read1822_phi_phi_fu_93473_p4 = ap_phi_reg_pp0_iter0_data_1752_V_read1822_phi_reg_93469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_50411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_50411_p6 = data_1752_V_read1822_phi_reg_93469.read();
    } else {
        ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_50411_p6 = data_1752_V_read1822_rewind_reg_50407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1753_V_read1823_phi_phi_fu_93486_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1753_V_read1823_phi_phi_fu_93486_p4 = ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_50425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1753_V_read1823_phi_phi_fu_93486_p4 = data_1753_V_read.read();
        } else {
            ap_phi_mux_data_1753_V_read1823_phi_phi_fu_93486_p4 = ap_phi_reg_pp0_iter0_data_1753_V_read1823_phi_reg_93482.read();
        }
    } else {
        ap_phi_mux_data_1753_V_read1823_phi_phi_fu_93486_p4 = ap_phi_reg_pp0_iter0_data_1753_V_read1823_phi_reg_93482.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_50425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_50425_p6 = data_1753_V_read1823_phi_reg_93482.read();
    } else {
        ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_50425_p6 = data_1753_V_read1823_rewind_reg_50421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1754_V_read1824_phi_phi_fu_93499_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1754_V_read1824_phi_phi_fu_93499_p4 = ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_50439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1754_V_read1824_phi_phi_fu_93499_p4 = data_1754_V_read.read();
        } else {
            ap_phi_mux_data_1754_V_read1824_phi_phi_fu_93499_p4 = ap_phi_reg_pp0_iter0_data_1754_V_read1824_phi_reg_93495.read();
        }
    } else {
        ap_phi_mux_data_1754_V_read1824_phi_phi_fu_93499_p4 = ap_phi_reg_pp0_iter0_data_1754_V_read1824_phi_reg_93495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_50439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_50439_p6 = data_1754_V_read1824_phi_reg_93495.read();
    } else {
        ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_50439_p6 = data_1754_V_read1824_rewind_reg_50435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1755_V_read1825_phi_phi_fu_93512_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1755_V_read1825_phi_phi_fu_93512_p4 = ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_50453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1755_V_read1825_phi_phi_fu_93512_p4 = data_1755_V_read.read();
        } else {
            ap_phi_mux_data_1755_V_read1825_phi_phi_fu_93512_p4 = ap_phi_reg_pp0_iter0_data_1755_V_read1825_phi_reg_93508.read();
        }
    } else {
        ap_phi_mux_data_1755_V_read1825_phi_phi_fu_93512_p4 = ap_phi_reg_pp0_iter0_data_1755_V_read1825_phi_reg_93508.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_50453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_50453_p6 = data_1755_V_read1825_phi_reg_93508.read();
    } else {
        ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_50453_p6 = data_1755_V_read1825_rewind_reg_50449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1756_V_read1826_phi_phi_fu_93525_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1756_V_read1826_phi_phi_fu_93525_p4 = ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_50467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1756_V_read1826_phi_phi_fu_93525_p4 = data_1756_V_read.read();
        } else {
            ap_phi_mux_data_1756_V_read1826_phi_phi_fu_93525_p4 = ap_phi_reg_pp0_iter0_data_1756_V_read1826_phi_reg_93521.read();
        }
    } else {
        ap_phi_mux_data_1756_V_read1826_phi_phi_fu_93525_p4 = ap_phi_reg_pp0_iter0_data_1756_V_read1826_phi_reg_93521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_50467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_50467_p6 = data_1756_V_read1826_phi_reg_93521.read();
    } else {
        ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_50467_p6 = data_1756_V_read1826_rewind_reg_50463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1757_V_read1827_phi_phi_fu_93538_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1757_V_read1827_phi_phi_fu_93538_p4 = ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_50481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1757_V_read1827_phi_phi_fu_93538_p4 = data_1757_V_read.read();
        } else {
            ap_phi_mux_data_1757_V_read1827_phi_phi_fu_93538_p4 = ap_phi_reg_pp0_iter0_data_1757_V_read1827_phi_reg_93534.read();
        }
    } else {
        ap_phi_mux_data_1757_V_read1827_phi_phi_fu_93538_p4 = ap_phi_reg_pp0_iter0_data_1757_V_read1827_phi_reg_93534.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_50481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_50481_p6 = data_1757_V_read1827_phi_reg_93534.read();
    } else {
        ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_50481_p6 = data_1757_V_read1827_rewind_reg_50477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1758_V_read1828_phi_phi_fu_93551_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1758_V_read1828_phi_phi_fu_93551_p4 = ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_50495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1758_V_read1828_phi_phi_fu_93551_p4 = data_1758_V_read.read();
        } else {
            ap_phi_mux_data_1758_V_read1828_phi_phi_fu_93551_p4 = ap_phi_reg_pp0_iter0_data_1758_V_read1828_phi_reg_93547.read();
        }
    } else {
        ap_phi_mux_data_1758_V_read1828_phi_phi_fu_93551_p4 = ap_phi_reg_pp0_iter0_data_1758_V_read1828_phi_reg_93547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_50495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_50495_p6 = data_1758_V_read1828_phi_reg_93547.read();
    } else {
        ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_50495_p6 = data_1758_V_read1828_rewind_reg_50491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1759_V_read1829_phi_phi_fu_93564_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1759_V_read1829_phi_phi_fu_93564_p4 = ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_50509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1759_V_read1829_phi_phi_fu_93564_p4 = data_1759_V_read.read();
        } else {
            ap_phi_mux_data_1759_V_read1829_phi_phi_fu_93564_p4 = ap_phi_reg_pp0_iter0_data_1759_V_read1829_phi_reg_93560.read();
        }
    } else {
        ap_phi_mux_data_1759_V_read1829_phi_phi_fu_93564_p4 = ap_phi_reg_pp0_iter0_data_1759_V_read1829_phi_reg_93560.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_50509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_50509_p6 = data_1759_V_read1829_phi_reg_93560.read();
    } else {
        ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_50509_p6 = data_1759_V_read1829_rewind_reg_50505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_175_V_read245_phi_phi_fu_72972_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_175_V_read245_phi_phi_fu_72972_p4 = ap_phi_mux_data_175_V_read245_rewind_phi_fu_28333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_175_V_read245_phi_phi_fu_72972_p4 = data_175_V_read.read();
        } else {
            ap_phi_mux_data_175_V_read245_phi_phi_fu_72972_p4 = ap_phi_reg_pp0_iter0_data_175_V_read245_phi_reg_72968.read();
        }
    } else {
        ap_phi_mux_data_175_V_read245_phi_phi_fu_72972_p4 = ap_phi_reg_pp0_iter0_data_175_V_read245_phi_reg_72968.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_175_V_read245_rewind_phi_fu_28333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_175_V_read245_rewind_phi_fu_28333_p6 = data_175_V_read245_phi_reg_72968.read();
    } else {
        ap_phi_mux_data_175_V_read245_rewind_phi_fu_28333_p6 = data_175_V_read245_rewind_reg_28329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1760_V_read1830_phi_phi_fu_93577_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1760_V_read1830_phi_phi_fu_93577_p4 = ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_50523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1760_V_read1830_phi_phi_fu_93577_p4 = data_1760_V_read.read();
        } else {
            ap_phi_mux_data_1760_V_read1830_phi_phi_fu_93577_p4 = ap_phi_reg_pp0_iter0_data_1760_V_read1830_phi_reg_93573.read();
        }
    } else {
        ap_phi_mux_data_1760_V_read1830_phi_phi_fu_93577_p4 = ap_phi_reg_pp0_iter0_data_1760_V_read1830_phi_reg_93573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_50523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_50523_p6 = data_1760_V_read1830_phi_reg_93573.read();
    } else {
        ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_50523_p6 = data_1760_V_read1830_rewind_reg_50519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1761_V_read1831_phi_phi_fu_93590_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1761_V_read1831_phi_phi_fu_93590_p4 = ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_50537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1761_V_read1831_phi_phi_fu_93590_p4 = data_1761_V_read.read();
        } else {
            ap_phi_mux_data_1761_V_read1831_phi_phi_fu_93590_p4 = ap_phi_reg_pp0_iter0_data_1761_V_read1831_phi_reg_93586.read();
        }
    } else {
        ap_phi_mux_data_1761_V_read1831_phi_phi_fu_93590_p4 = ap_phi_reg_pp0_iter0_data_1761_V_read1831_phi_reg_93586.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_50537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_50537_p6 = data_1761_V_read1831_phi_reg_93586.read();
    } else {
        ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_50537_p6 = data_1761_V_read1831_rewind_reg_50533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1762_V_read1832_phi_phi_fu_93603_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1762_V_read1832_phi_phi_fu_93603_p4 = ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_50551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1762_V_read1832_phi_phi_fu_93603_p4 = data_1762_V_read.read();
        } else {
            ap_phi_mux_data_1762_V_read1832_phi_phi_fu_93603_p4 = ap_phi_reg_pp0_iter0_data_1762_V_read1832_phi_reg_93599.read();
        }
    } else {
        ap_phi_mux_data_1762_V_read1832_phi_phi_fu_93603_p4 = ap_phi_reg_pp0_iter0_data_1762_V_read1832_phi_reg_93599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_50551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_50551_p6 = data_1762_V_read1832_phi_reg_93599.read();
    } else {
        ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_50551_p6 = data_1762_V_read1832_rewind_reg_50547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1763_V_read1833_phi_phi_fu_93616_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1763_V_read1833_phi_phi_fu_93616_p4 = ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_50565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1763_V_read1833_phi_phi_fu_93616_p4 = data_1763_V_read.read();
        } else {
            ap_phi_mux_data_1763_V_read1833_phi_phi_fu_93616_p4 = ap_phi_reg_pp0_iter0_data_1763_V_read1833_phi_reg_93612.read();
        }
    } else {
        ap_phi_mux_data_1763_V_read1833_phi_phi_fu_93616_p4 = ap_phi_reg_pp0_iter0_data_1763_V_read1833_phi_reg_93612.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_50565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_50565_p6 = data_1763_V_read1833_phi_reg_93612.read();
    } else {
        ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_50565_p6 = data_1763_V_read1833_rewind_reg_50561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1764_V_read1834_phi_phi_fu_93629_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1764_V_read1834_phi_phi_fu_93629_p4 = ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_50579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1764_V_read1834_phi_phi_fu_93629_p4 = data_1764_V_read.read();
        } else {
            ap_phi_mux_data_1764_V_read1834_phi_phi_fu_93629_p4 = ap_phi_reg_pp0_iter0_data_1764_V_read1834_phi_reg_93625.read();
        }
    } else {
        ap_phi_mux_data_1764_V_read1834_phi_phi_fu_93629_p4 = ap_phi_reg_pp0_iter0_data_1764_V_read1834_phi_reg_93625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_50579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_50579_p6 = data_1764_V_read1834_phi_reg_93625.read();
    } else {
        ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_50579_p6 = data_1764_V_read1834_rewind_reg_50575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1765_V_read1835_phi_phi_fu_93642_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1765_V_read1835_phi_phi_fu_93642_p4 = ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_50593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1765_V_read1835_phi_phi_fu_93642_p4 = data_1765_V_read.read();
        } else {
            ap_phi_mux_data_1765_V_read1835_phi_phi_fu_93642_p4 = ap_phi_reg_pp0_iter0_data_1765_V_read1835_phi_reg_93638.read();
        }
    } else {
        ap_phi_mux_data_1765_V_read1835_phi_phi_fu_93642_p4 = ap_phi_reg_pp0_iter0_data_1765_V_read1835_phi_reg_93638.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_50593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_50593_p6 = data_1765_V_read1835_phi_reg_93638.read();
    } else {
        ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_50593_p6 = data_1765_V_read1835_rewind_reg_50589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1766_V_read1836_phi_phi_fu_93655_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1766_V_read1836_phi_phi_fu_93655_p4 = ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_50607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1766_V_read1836_phi_phi_fu_93655_p4 = data_1766_V_read.read();
        } else {
            ap_phi_mux_data_1766_V_read1836_phi_phi_fu_93655_p4 = ap_phi_reg_pp0_iter0_data_1766_V_read1836_phi_reg_93651.read();
        }
    } else {
        ap_phi_mux_data_1766_V_read1836_phi_phi_fu_93655_p4 = ap_phi_reg_pp0_iter0_data_1766_V_read1836_phi_reg_93651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_50607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_50607_p6 = data_1766_V_read1836_phi_reg_93651.read();
    } else {
        ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_50607_p6 = data_1766_V_read1836_rewind_reg_50603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1767_V_read1837_phi_phi_fu_93668_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1767_V_read1837_phi_phi_fu_93668_p4 = ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_50621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1767_V_read1837_phi_phi_fu_93668_p4 = data_1767_V_read.read();
        } else {
            ap_phi_mux_data_1767_V_read1837_phi_phi_fu_93668_p4 = ap_phi_reg_pp0_iter0_data_1767_V_read1837_phi_reg_93664.read();
        }
    } else {
        ap_phi_mux_data_1767_V_read1837_phi_phi_fu_93668_p4 = ap_phi_reg_pp0_iter0_data_1767_V_read1837_phi_reg_93664.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_50621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_50621_p6 = data_1767_V_read1837_phi_reg_93664.read();
    } else {
        ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_50621_p6 = data_1767_V_read1837_rewind_reg_50617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1768_V_read1838_phi_phi_fu_93681_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1768_V_read1838_phi_phi_fu_93681_p4 = ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_50635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1768_V_read1838_phi_phi_fu_93681_p4 = data_1768_V_read.read();
        } else {
            ap_phi_mux_data_1768_V_read1838_phi_phi_fu_93681_p4 = ap_phi_reg_pp0_iter0_data_1768_V_read1838_phi_reg_93677.read();
        }
    } else {
        ap_phi_mux_data_1768_V_read1838_phi_phi_fu_93681_p4 = ap_phi_reg_pp0_iter0_data_1768_V_read1838_phi_reg_93677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_50635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_50635_p6 = data_1768_V_read1838_phi_reg_93677.read();
    } else {
        ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_50635_p6 = data_1768_V_read1838_rewind_reg_50631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1769_V_read1839_phi_phi_fu_93694_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1769_V_read1839_phi_phi_fu_93694_p4 = ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_50649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1769_V_read1839_phi_phi_fu_93694_p4 = data_1769_V_read.read();
        } else {
            ap_phi_mux_data_1769_V_read1839_phi_phi_fu_93694_p4 = ap_phi_reg_pp0_iter0_data_1769_V_read1839_phi_reg_93690.read();
        }
    } else {
        ap_phi_mux_data_1769_V_read1839_phi_phi_fu_93694_p4 = ap_phi_reg_pp0_iter0_data_1769_V_read1839_phi_reg_93690.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_50649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_50649_p6 = data_1769_V_read1839_phi_reg_93690.read();
    } else {
        ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_50649_p6 = data_1769_V_read1839_rewind_reg_50645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_176_V_read246_phi_phi_fu_72985_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_176_V_read246_phi_phi_fu_72985_p4 = ap_phi_mux_data_176_V_read246_rewind_phi_fu_28347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_176_V_read246_phi_phi_fu_72985_p4 = data_176_V_read.read();
        } else {
            ap_phi_mux_data_176_V_read246_phi_phi_fu_72985_p4 = ap_phi_reg_pp0_iter0_data_176_V_read246_phi_reg_72981.read();
        }
    } else {
        ap_phi_mux_data_176_V_read246_phi_phi_fu_72985_p4 = ap_phi_reg_pp0_iter0_data_176_V_read246_phi_reg_72981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_176_V_read246_rewind_phi_fu_28347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_176_V_read246_rewind_phi_fu_28347_p6 = data_176_V_read246_phi_reg_72981.read();
    } else {
        ap_phi_mux_data_176_V_read246_rewind_phi_fu_28347_p6 = data_176_V_read246_rewind_reg_28343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1770_V_read1840_phi_phi_fu_93707_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1770_V_read1840_phi_phi_fu_93707_p4 = ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_50663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1770_V_read1840_phi_phi_fu_93707_p4 = data_1770_V_read.read();
        } else {
            ap_phi_mux_data_1770_V_read1840_phi_phi_fu_93707_p4 = ap_phi_reg_pp0_iter0_data_1770_V_read1840_phi_reg_93703.read();
        }
    } else {
        ap_phi_mux_data_1770_V_read1840_phi_phi_fu_93707_p4 = ap_phi_reg_pp0_iter0_data_1770_V_read1840_phi_reg_93703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_50663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_50663_p6 = data_1770_V_read1840_phi_reg_93703.read();
    } else {
        ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_50663_p6 = data_1770_V_read1840_rewind_reg_50659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1771_V_read1841_phi_phi_fu_93720_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1771_V_read1841_phi_phi_fu_93720_p4 = ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_50677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1771_V_read1841_phi_phi_fu_93720_p4 = data_1771_V_read.read();
        } else {
            ap_phi_mux_data_1771_V_read1841_phi_phi_fu_93720_p4 = ap_phi_reg_pp0_iter0_data_1771_V_read1841_phi_reg_93716.read();
        }
    } else {
        ap_phi_mux_data_1771_V_read1841_phi_phi_fu_93720_p4 = ap_phi_reg_pp0_iter0_data_1771_V_read1841_phi_reg_93716.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_50677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_50677_p6 = data_1771_V_read1841_phi_reg_93716.read();
    } else {
        ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_50677_p6 = data_1771_V_read1841_rewind_reg_50673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1772_V_read1842_phi_phi_fu_93733_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1772_V_read1842_phi_phi_fu_93733_p4 = ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_50691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1772_V_read1842_phi_phi_fu_93733_p4 = data_1772_V_read.read();
        } else {
            ap_phi_mux_data_1772_V_read1842_phi_phi_fu_93733_p4 = ap_phi_reg_pp0_iter0_data_1772_V_read1842_phi_reg_93729.read();
        }
    } else {
        ap_phi_mux_data_1772_V_read1842_phi_phi_fu_93733_p4 = ap_phi_reg_pp0_iter0_data_1772_V_read1842_phi_reg_93729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_50691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_50691_p6 = data_1772_V_read1842_phi_reg_93729.read();
    } else {
        ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_50691_p6 = data_1772_V_read1842_rewind_reg_50687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1773_V_read1843_phi_phi_fu_93746_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1773_V_read1843_phi_phi_fu_93746_p4 = ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_50705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1773_V_read1843_phi_phi_fu_93746_p4 = data_1773_V_read.read();
        } else {
            ap_phi_mux_data_1773_V_read1843_phi_phi_fu_93746_p4 = ap_phi_reg_pp0_iter0_data_1773_V_read1843_phi_reg_93742.read();
        }
    } else {
        ap_phi_mux_data_1773_V_read1843_phi_phi_fu_93746_p4 = ap_phi_reg_pp0_iter0_data_1773_V_read1843_phi_reg_93742.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_50705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_50705_p6 = data_1773_V_read1843_phi_reg_93742.read();
    } else {
        ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_50705_p6 = data_1773_V_read1843_rewind_reg_50701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1774_V_read1844_phi_phi_fu_93759_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1774_V_read1844_phi_phi_fu_93759_p4 = ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_50719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1774_V_read1844_phi_phi_fu_93759_p4 = data_1774_V_read.read();
        } else {
            ap_phi_mux_data_1774_V_read1844_phi_phi_fu_93759_p4 = ap_phi_reg_pp0_iter0_data_1774_V_read1844_phi_reg_93755.read();
        }
    } else {
        ap_phi_mux_data_1774_V_read1844_phi_phi_fu_93759_p4 = ap_phi_reg_pp0_iter0_data_1774_V_read1844_phi_reg_93755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_50719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_50719_p6 = data_1774_V_read1844_phi_reg_93755.read();
    } else {
        ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_50719_p6 = data_1774_V_read1844_rewind_reg_50715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1775_V_read1845_phi_phi_fu_93772_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1775_V_read1845_phi_phi_fu_93772_p4 = ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_50733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1775_V_read1845_phi_phi_fu_93772_p4 = data_1775_V_read.read();
        } else {
            ap_phi_mux_data_1775_V_read1845_phi_phi_fu_93772_p4 = ap_phi_reg_pp0_iter0_data_1775_V_read1845_phi_reg_93768.read();
        }
    } else {
        ap_phi_mux_data_1775_V_read1845_phi_phi_fu_93772_p4 = ap_phi_reg_pp0_iter0_data_1775_V_read1845_phi_reg_93768.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_50733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_50733_p6 = data_1775_V_read1845_phi_reg_93768.read();
    } else {
        ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_50733_p6 = data_1775_V_read1845_rewind_reg_50729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1776_V_read1846_phi_phi_fu_93785_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1776_V_read1846_phi_phi_fu_93785_p4 = ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_50747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1776_V_read1846_phi_phi_fu_93785_p4 = data_1776_V_read.read();
        } else {
            ap_phi_mux_data_1776_V_read1846_phi_phi_fu_93785_p4 = ap_phi_reg_pp0_iter0_data_1776_V_read1846_phi_reg_93781.read();
        }
    } else {
        ap_phi_mux_data_1776_V_read1846_phi_phi_fu_93785_p4 = ap_phi_reg_pp0_iter0_data_1776_V_read1846_phi_reg_93781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_50747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_50747_p6 = data_1776_V_read1846_phi_reg_93781.read();
    } else {
        ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_50747_p6 = data_1776_V_read1846_rewind_reg_50743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1777_V_read1847_phi_phi_fu_93798_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1777_V_read1847_phi_phi_fu_93798_p4 = ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_50761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1777_V_read1847_phi_phi_fu_93798_p4 = data_1777_V_read.read();
        } else {
            ap_phi_mux_data_1777_V_read1847_phi_phi_fu_93798_p4 = ap_phi_reg_pp0_iter0_data_1777_V_read1847_phi_reg_93794.read();
        }
    } else {
        ap_phi_mux_data_1777_V_read1847_phi_phi_fu_93798_p4 = ap_phi_reg_pp0_iter0_data_1777_V_read1847_phi_reg_93794.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_50761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_50761_p6 = data_1777_V_read1847_phi_reg_93794.read();
    } else {
        ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_50761_p6 = data_1777_V_read1847_rewind_reg_50757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1778_V_read1848_phi_phi_fu_93811_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1778_V_read1848_phi_phi_fu_93811_p4 = ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_50775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1778_V_read1848_phi_phi_fu_93811_p4 = data_1778_V_read.read();
        } else {
            ap_phi_mux_data_1778_V_read1848_phi_phi_fu_93811_p4 = ap_phi_reg_pp0_iter0_data_1778_V_read1848_phi_reg_93807.read();
        }
    } else {
        ap_phi_mux_data_1778_V_read1848_phi_phi_fu_93811_p4 = ap_phi_reg_pp0_iter0_data_1778_V_read1848_phi_reg_93807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_50775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_50775_p6 = data_1778_V_read1848_phi_reg_93807.read();
    } else {
        ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_50775_p6 = data_1778_V_read1848_rewind_reg_50771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1779_V_read1849_phi_phi_fu_93824_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1779_V_read1849_phi_phi_fu_93824_p4 = ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_50789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1779_V_read1849_phi_phi_fu_93824_p4 = data_1779_V_read.read();
        } else {
            ap_phi_mux_data_1779_V_read1849_phi_phi_fu_93824_p4 = ap_phi_reg_pp0_iter0_data_1779_V_read1849_phi_reg_93820.read();
        }
    } else {
        ap_phi_mux_data_1779_V_read1849_phi_phi_fu_93824_p4 = ap_phi_reg_pp0_iter0_data_1779_V_read1849_phi_reg_93820.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_50789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_50789_p6 = data_1779_V_read1849_phi_reg_93820.read();
    } else {
        ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_50789_p6 = data_1779_V_read1849_rewind_reg_50785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_177_V_read247_phi_phi_fu_72998_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_177_V_read247_phi_phi_fu_72998_p4 = ap_phi_mux_data_177_V_read247_rewind_phi_fu_28361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_177_V_read247_phi_phi_fu_72998_p4 = data_177_V_read.read();
        } else {
            ap_phi_mux_data_177_V_read247_phi_phi_fu_72998_p4 = ap_phi_reg_pp0_iter0_data_177_V_read247_phi_reg_72994.read();
        }
    } else {
        ap_phi_mux_data_177_V_read247_phi_phi_fu_72998_p4 = ap_phi_reg_pp0_iter0_data_177_V_read247_phi_reg_72994.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_177_V_read247_rewind_phi_fu_28361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_177_V_read247_rewind_phi_fu_28361_p6 = data_177_V_read247_phi_reg_72994.read();
    } else {
        ap_phi_mux_data_177_V_read247_rewind_phi_fu_28361_p6 = data_177_V_read247_rewind_reg_28357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1780_V_read1850_phi_phi_fu_93837_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1780_V_read1850_phi_phi_fu_93837_p4 = ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_50803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1780_V_read1850_phi_phi_fu_93837_p4 = data_1780_V_read.read();
        } else {
            ap_phi_mux_data_1780_V_read1850_phi_phi_fu_93837_p4 = ap_phi_reg_pp0_iter0_data_1780_V_read1850_phi_reg_93833.read();
        }
    } else {
        ap_phi_mux_data_1780_V_read1850_phi_phi_fu_93837_p4 = ap_phi_reg_pp0_iter0_data_1780_V_read1850_phi_reg_93833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_50803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_50803_p6 = data_1780_V_read1850_phi_reg_93833.read();
    } else {
        ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_50803_p6 = data_1780_V_read1850_rewind_reg_50799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1781_V_read1851_phi_phi_fu_93850_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1781_V_read1851_phi_phi_fu_93850_p4 = ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_50817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1781_V_read1851_phi_phi_fu_93850_p4 = data_1781_V_read.read();
        } else {
            ap_phi_mux_data_1781_V_read1851_phi_phi_fu_93850_p4 = ap_phi_reg_pp0_iter0_data_1781_V_read1851_phi_reg_93846.read();
        }
    } else {
        ap_phi_mux_data_1781_V_read1851_phi_phi_fu_93850_p4 = ap_phi_reg_pp0_iter0_data_1781_V_read1851_phi_reg_93846.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_50817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_50817_p6 = data_1781_V_read1851_phi_reg_93846.read();
    } else {
        ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_50817_p6 = data_1781_V_read1851_rewind_reg_50813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1782_V_read1852_phi_phi_fu_93863_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1782_V_read1852_phi_phi_fu_93863_p4 = ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_50831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1782_V_read1852_phi_phi_fu_93863_p4 = data_1782_V_read.read();
        } else {
            ap_phi_mux_data_1782_V_read1852_phi_phi_fu_93863_p4 = ap_phi_reg_pp0_iter0_data_1782_V_read1852_phi_reg_93859.read();
        }
    } else {
        ap_phi_mux_data_1782_V_read1852_phi_phi_fu_93863_p4 = ap_phi_reg_pp0_iter0_data_1782_V_read1852_phi_reg_93859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_50831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_50831_p6 = data_1782_V_read1852_phi_reg_93859.read();
    } else {
        ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_50831_p6 = data_1782_V_read1852_rewind_reg_50827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1783_V_read1853_phi_phi_fu_93876_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1783_V_read1853_phi_phi_fu_93876_p4 = ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_50845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1783_V_read1853_phi_phi_fu_93876_p4 = data_1783_V_read.read();
        } else {
            ap_phi_mux_data_1783_V_read1853_phi_phi_fu_93876_p4 = ap_phi_reg_pp0_iter0_data_1783_V_read1853_phi_reg_93872.read();
        }
    } else {
        ap_phi_mux_data_1783_V_read1853_phi_phi_fu_93876_p4 = ap_phi_reg_pp0_iter0_data_1783_V_read1853_phi_reg_93872.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_50845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_50845_p6 = data_1783_V_read1853_phi_reg_93872.read();
    } else {
        ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_50845_p6 = data_1783_V_read1853_rewind_reg_50841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1784_V_read1854_phi_phi_fu_93889_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1784_V_read1854_phi_phi_fu_93889_p4 = ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_50859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1784_V_read1854_phi_phi_fu_93889_p4 = data_1784_V_read.read();
        } else {
            ap_phi_mux_data_1784_V_read1854_phi_phi_fu_93889_p4 = ap_phi_reg_pp0_iter0_data_1784_V_read1854_phi_reg_93885.read();
        }
    } else {
        ap_phi_mux_data_1784_V_read1854_phi_phi_fu_93889_p4 = ap_phi_reg_pp0_iter0_data_1784_V_read1854_phi_reg_93885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_50859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_50859_p6 = data_1784_V_read1854_phi_reg_93885.read();
    } else {
        ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_50859_p6 = data_1784_V_read1854_rewind_reg_50855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1785_V_read1855_phi_phi_fu_93902_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1785_V_read1855_phi_phi_fu_93902_p4 = ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_50873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1785_V_read1855_phi_phi_fu_93902_p4 = data_1785_V_read.read();
        } else {
            ap_phi_mux_data_1785_V_read1855_phi_phi_fu_93902_p4 = ap_phi_reg_pp0_iter0_data_1785_V_read1855_phi_reg_93898.read();
        }
    } else {
        ap_phi_mux_data_1785_V_read1855_phi_phi_fu_93902_p4 = ap_phi_reg_pp0_iter0_data_1785_V_read1855_phi_reg_93898.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_50873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_50873_p6 = data_1785_V_read1855_phi_reg_93898.read();
    } else {
        ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_50873_p6 = data_1785_V_read1855_rewind_reg_50869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1786_V_read1856_phi_phi_fu_93915_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1786_V_read1856_phi_phi_fu_93915_p4 = ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_50887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1786_V_read1856_phi_phi_fu_93915_p4 = data_1786_V_read.read();
        } else {
            ap_phi_mux_data_1786_V_read1856_phi_phi_fu_93915_p4 = ap_phi_reg_pp0_iter0_data_1786_V_read1856_phi_reg_93911.read();
        }
    } else {
        ap_phi_mux_data_1786_V_read1856_phi_phi_fu_93915_p4 = ap_phi_reg_pp0_iter0_data_1786_V_read1856_phi_reg_93911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_50887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_50887_p6 = data_1786_V_read1856_phi_reg_93911.read();
    } else {
        ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_50887_p6 = data_1786_V_read1856_rewind_reg_50883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1787_V_read1857_phi_phi_fu_93928_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1787_V_read1857_phi_phi_fu_93928_p4 = ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_50901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1787_V_read1857_phi_phi_fu_93928_p4 = data_1787_V_read.read();
        } else {
            ap_phi_mux_data_1787_V_read1857_phi_phi_fu_93928_p4 = ap_phi_reg_pp0_iter0_data_1787_V_read1857_phi_reg_93924.read();
        }
    } else {
        ap_phi_mux_data_1787_V_read1857_phi_phi_fu_93928_p4 = ap_phi_reg_pp0_iter0_data_1787_V_read1857_phi_reg_93924.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_50901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_50901_p6 = data_1787_V_read1857_phi_reg_93924.read();
    } else {
        ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_50901_p6 = data_1787_V_read1857_rewind_reg_50897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1788_V_read1858_phi_phi_fu_93941_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1788_V_read1858_phi_phi_fu_93941_p4 = ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_50915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1788_V_read1858_phi_phi_fu_93941_p4 = data_1788_V_read.read();
        } else {
            ap_phi_mux_data_1788_V_read1858_phi_phi_fu_93941_p4 = ap_phi_reg_pp0_iter0_data_1788_V_read1858_phi_reg_93937.read();
        }
    } else {
        ap_phi_mux_data_1788_V_read1858_phi_phi_fu_93941_p4 = ap_phi_reg_pp0_iter0_data_1788_V_read1858_phi_reg_93937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_50915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_50915_p6 = data_1788_V_read1858_phi_reg_93937.read();
    } else {
        ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_50915_p6 = data_1788_V_read1858_rewind_reg_50911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1789_V_read1859_phi_phi_fu_93954_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1789_V_read1859_phi_phi_fu_93954_p4 = ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_50929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1789_V_read1859_phi_phi_fu_93954_p4 = data_1789_V_read.read();
        } else {
            ap_phi_mux_data_1789_V_read1859_phi_phi_fu_93954_p4 = ap_phi_reg_pp0_iter0_data_1789_V_read1859_phi_reg_93950.read();
        }
    } else {
        ap_phi_mux_data_1789_V_read1859_phi_phi_fu_93954_p4 = ap_phi_reg_pp0_iter0_data_1789_V_read1859_phi_reg_93950.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_50929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_50929_p6 = data_1789_V_read1859_phi_reg_93950.read();
    } else {
        ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_50929_p6 = data_1789_V_read1859_rewind_reg_50925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_178_V_read248_phi_phi_fu_73011_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_178_V_read248_phi_phi_fu_73011_p4 = ap_phi_mux_data_178_V_read248_rewind_phi_fu_28375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_178_V_read248_phi_phi_fu_73011_p4 = data_178_V_read.read();
        } else {
            ap_phi_mux_data_178_V_read248_phi_phi_fu_73011_p4 = ap_phi_reg_pp0_iter0_data_178_V_read248_phi_reg_73007.read();
        }
    } else {
        ap_phi_mux_data_178_V_read248_phi_phi_fu_73011_p4 = ap_phi_reg_pp0_iter0_data_178_V_read248_phi_reg_73007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_178_V_read248_rewind_phi_fu_28375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_178_V_read248_rewind_phi_fu_28375_p6 = data_178_V_read248_phi_reg_73007.read();
    } else {
        ap_phi_mux_data_178_V_read248_rewind_phi_fu_28375_p6 = data_178_V_read248_rewind_reg_28371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1790_V_read1860_phi_phi_fu_93967_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1790_V_read1860_phi_phi_fu_93967_p4 = ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_50943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1790_V_read1860_phi_phi_fu_93967_p4 = data_1790_V_read.read();
        } else {
            ap_phi_mux_data_1790_V_read1860_phi_phi_fu_93967_p4 = ap_phi_reg_pp0_iter0_data_1790_V_read1860_phi_reg_93963.read();
        }
    } else {
        ap_phi_mux_data_1790_V_read1860_phi_phi_fu_93967_p4 = ap_phi_reg_pp0_iter0_data_1790_V_read1860_phi_reg_93963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_50943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_50943_p6 = data_1790_V_read1860_phi_reg_93963.read();
    } else {
        ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_50943_p6 = data_1790_V_read1860_rewind_reg_50939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1791_V_read1861_phi_phi_fu_93980_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1791_V_read1861_phi_phi_fu_93980_p4 = ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_50957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1791_V_read1861_phi_phi_fu_93980_p4 = data_1791_V_read.read();
        } else {
            ap_phi_mux_data_1791_V_read1861_phi_phi_fu_93980_p4 = ap_phi_reg_pp0_iter0_data_1791_V_read1861_phi_reg_93976.read();
        }
    } else {
        ap_phi_mux_data_1791_V_read1861_phi_phi_fu_93980_p4 = ap_phi_reg_pp0_iter0_data_1791_V_read1861_phi_reg_93976.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_50957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_50957_p6 = data_1791_V_read1861_phi_reg_93976.read();
    } else {
        ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_50957_p6 = data_1791_V_read1861_rewind_reg_50953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1792_V_read1862_phi_phi_fu_93993_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1792_V_read1862_phi_phi_fu_93993_p4 = ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_50971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1792_V_read1862_phi_phi_fu_93993_p4 = data_1792_V_read.read();
        } else {
            ap_phi_mux_data_1792_V_read1862_phi_phi_fu_93993_p4 = ap_phi_reg_pp0_iter0_data_1792_V_read1862_phi_reg_93989.read();
        }
    } else {
        ap_phi_mux_data_1792_V_read1862_phi_phi_fu_93993_p4 = ap_phi_reg_pp0_iter0_data_1792_V_read1862_phi_reg_93989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_50971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_50971_p6 = data_1792_V_read1862_phi_reg_93989.read();
    } else {
        ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_50971_p6 = data_1792_V_read1862_rewind_reg_50967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1793_V_read1863_phi_phi_fu_94006_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1793_V_read1863_phi_phi_fu_94006_p4 = ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_50985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1793_V_read1863_phi_phi_fu_94006_p4 = data_1793_V_read.read();
        } else {
            ap_phi_mux_data_1793_V_read1863_phi_phi_fu_94006_p4 = ap_phi_reg_pp0_iter0_data_1793_V_read1863_phi_reg_94002.read();
        }
    } else {
        ap_phi_mux_data_1793_V_read1863_phi_phi_fu_94006_p4 = ap_phi_reg_pp0_iter0_data_1793_V_read1863_phi_reg_94002.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_50985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_50985_p6 = data_1793_V_read1863_phi_reg_94002.read();
    } else {
        ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_50985_p6 = data_1793_V_read1863_rewind_reg_50981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1794_V_read1864_phi_phi_fu_94019_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1794_V_read1864_phi_phi_fu_94019_p4 = ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_50999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1794_V_read1864_phi_phi_fu_94019_p4 = data_1794_V_read.read();
        } else {
            ap_phi_mux_data_1794_V_read1864_phi_phi_fu_94019_p4 = ap_phi_reg_pp0_iter0_data_1794_V_read1864_phi_reg_94015.read();
        }
    } else {
        ap_phi_mux_data_1794_V_read1864_phi_phi_fu_94019_p4 = ap_phi_reg_pp0_iter0_data_1794_V_read1864_phi_reg_94015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_50999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_50999_p6 = data_1794_V_read1864_phi_reg_94015.read();
    } else {
        ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_50999_p6 = data_1794_V_read1864_rewind_reg_50995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1795_V_read1865_phi_phi_fu_94032_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1795_V_read1865_phi_phi_fu_94032_p4 = ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_51013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1795_V_read1865_phi_phi_fu_94032_p4 = data_1795_V_read.read();
        } else {
            ap_phi_mux_data_1795_V_read1865_phi_phi_fu_94032_p4 = ap_phi_reg_pp0_iter0_data_1795_V_read1865_phi_reg_94028.read();
        }
    } else {
        ap_phi_mux_data_1795_V_read1865_phi_phi_fu_94032_p4 = ap_phi_reg_pp0_iter0_data_1795_V_read1865_phi_reg_94028.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_51013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_51013_p6 = data_1795_V_read1865_phi_reg_94028.read();
    } else {
        ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_51013_p6 = data_1795_V_read1865_rewind_reg_51009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1796_V_read1866_phi_phi_fu_94045_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1796_V_read1866_phi_phi_fu_94045_p4 = ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_51027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1796_V_read1866_phi_phi_fu_94045_p4 = data_1796_V_read.read();
        } else {
            ap_phi_mux_data_1796_V_read1866_phi_phi_fu_94045_p4 = ap_phi_reg_pp0_iter0_data_1796_V_read1866_phi_reg_94041.read();
        }
    } else {
        ap_phi_mux_data_1796_V_read1866_phi_phi_fu_94045_p4 = ap_phi_reg_pp0_iter0_data_1796_V_read1866_phi_reg_94041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_51027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_51027_p6 = data_1796_V_read1866_phi_reg_94041.read();
    } else {
        ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_51027_p6 = data_1796_V_read1866_rewind_reg_51023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1797_V_read1867_phi_phi_fu_94058_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1797_V_read1867_phi_phi_fu_94058_p4 = ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_51041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1797_V_read1867_phi_phi_fu_94058_p4 = data_1797_V_read.read();
        } else {
            ap_phi_mux_data_1797_V_read1867_phi_phi_fu_94058_p4 = ap_phi_reg_pp0_iter0_data_1797_V_read1867_phi_reg_94054.read();
        }
    } else {
        ap_phi_mux_data_1797_V_read1867_phi_phi_fu_94058_p4 = ap_phi_reg_pp0_iter0_data_1797_V_read1867_phi_reg_94054.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_51041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_51041_p6 = data_1797_V_read1867_phi_reg_94054.read();
    } else {
        ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_51041_p6 = data_1797_V_read1867_rewind_reg_51037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1798_V_read1868_phi_phi_fu_94071_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1798_V_read1868_phi_phi_fu_94071_p4 = ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_51055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1798_V_read1868_phi_phi_fu_94071_p4 = data_1798_V_read.read();
        } else {
            ap_phi_mux_data_1798_V_read1868_phi_phi_fu_94071_p4 = ap_phi_reg_pp0_iter0_data_1798_V_read1868_phi_reg_94067.read();
        }
    } else {
        ap_phi_mux_data_1798_V_read1868_phi_phi_fu_94071_p4 = ap_phi_reg_pp0_iter0_data_1798_V_read1868_phi_reg_94067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_51055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_51055_p6 = data_1798_V_read1868_phi_reg_94067.read();
    } else {
        ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_51055_p6 = data_1798_V_read1868_rewind_reg_51051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1799_V_read1869_phi_phi_fu_94084_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1799_V_read1869_phi_phi_fu_94084_p4 = ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_51069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1799_V_read1869_phi_phi_fu_94084_p4 = data_1799_V_read.read();
        } else {
            ap_phi_mux_data_1799_V_read1869_phi_phi_fu_94084_p4 = ap_phi_reg_pp0_iter0_data_1799_V_read1869_phi_reg_94080.read();
        }
    } else {
        ap_phi_mux_data_1799_V_read1869_phi_phi_fu_94084_p4 = ap_phi_reg_pp0_iter0_data_1799_V_read1869_phi_reg_94080.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_51069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_51069_p6 = data_1799_V_read1869_phi_reg_94080.read();
    } else {
        ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_51069_p6 = data_1799_V_read1869_rewind_reg_51065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_179_V_read249_phi_phi_fu_73024_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_179_V_read249_phi_phi_fu_73024_p4 = ap_phi_mux_data_179_V_read249_rewind_phi_fu_28389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_179_V_read249_phi_phi_fu_73024_p4 = data_179_V_read.read();
        } else {
            ap_phi_mux_data_179_V_read249_phi_phi_fu_73024_p4 = ap_phi_reg_pp0_iter0_data_179_V_read249_phi_reg_73020.read();
        }
    } else {
        ap_phi_mux_data_179_V_read249_phi_phi_fu_73024_p4 = ap_phi_reg_pp0_iter0_data_179_V_read249_phi_reg_73020.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_179_V_read249_rewind_phi_fu_28389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_179_V_read249_rewind_phi_fu_28389_p6 = data_179_V_read249_phi_reg_73020.read();
    } else {
        ap_phi_mux_data_179_V_read249_rewind_phi_fu_28389_p6 = data_179_V_read249_rewind_reg_28385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_17_V_read87_phi_phi_fu_70918_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_17_V_read87_phi_phi_fu_70918_p4 = ap_phi_mux_data_17_V_read87_rewind_phi_fu_26121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_17_V_read87_phi_phi_fu_70918_p4 = data_17_V_read.read();
        } else {
            ap_phi_mux_data_17_V_read87_phi_phi_fu_70918_p4 = ap_phi_reg_pp0_iter0_data_17_V_read87_phi_reg_70914.read();
        }
    } else {
        ap_phi_mux_data_17_V_read87_phi_phi_fu_70918_p4 = ap_phi_reg_pp0_iter0_data_17_V_read87_phi_reg_70914.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_17_V_read87_rewind_phi_fu_26121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_17_V_read87_rewind_phi_fu_26121_p6 = data_17_V_read87_phi_reg_70914.read();
    } else {
        ap_phi_mux_data_17_V_read87_rewind_phi_fu_26121_p6 = data_17_V_read87_rewind_reg_26117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1800_V_read1870_phi_phi_fu_94097_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1800_V_read1870_phi_phi_fu_94097_p4 = ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_51083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1800_V_read1870_phi_phi_fu_94097_p4 = data_1800_V_read.read();
        } else {
            ap_phi_mux_data_1800_V_read1870_phi_phi_fu_94097_p4 = ap_phi_reg_pp0_iter0_data_1800_V_read1870_phi_reg_94093.read();
        }
    } else {
        ap_phi_mux_data_1800_V_read1870_phi_phi_fu_94097_p4 = ap_phi_reg_pp0_iter0_data_1800_V_read1870_phi_reg_94093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_51083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_51083_p6 = data_1800_V_read1870_phi_reg_94093.read();
    } else {
        ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_51083_p6 = data_1800_V_read1870_rewind_reg_51079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1801_V_read1871_phi_phi_fu_94110_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1801_V_read1871_phi_phi_fu_94110_p4 = ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_51097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1801_V_read1871_phi_phi_fu_94110_p4 = data_1801_V_read.read();
        } else {
            ap_phi_mux_data_1801_V_read1871_phi_phi_fu_94110_p4 = ap_phi_reg_pp0_iter0_data_1801_V_read1871_phi_reg_94106.read();
        }
    } else {
        ap_phi_mux_data_1801_V_read1871_phi_phi_fu_94110_p4 = ap_phi_reg_pp0_iter0_data_1801_V_read1871_phi_reg_94106.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_51097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_51097_p6 = data_1801_V_read1871_phi_reg_94106.read();
    } else {
        ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_51097_p6 = data_1801_V_read1871_rewind_reg_51093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1802_V_read1872_phi_phi_fu_94123_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1802_V_read1872_phi_phi_fu_94123_p4 = ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_51111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1802_V_read1872_phi_phi_fu_94123_p4 = data_1802_V_read.read();
        } else {
            ap_phi_mux_data_1802_V_read1872_phi_phi_fu_94123_p4 = ap_phi_reg_pp0_iter0_data_1802_V_read1872_phi_reg_94119.read();
        }
    } else {
        ap_phi_mux_data_1802_V_read1872_phi_phi_fu_94123_p4 = ap_phi_reg_pp0_iter0_data_1802_V_read1872_phi_reg_94119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_51111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_51111_p6 = data_1802_V_read1872_phi_reg_94119.read();
    } else {
        ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_51111_p6 = data_1802_V_read1872_rewind_reg_51107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1803_V_read1873_phi_phi_fu_94136_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1803_V_read1873_phi_phi_fu_94136_p4 = ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_51125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1803_V_read1873_phi_phi_fu_94136_p4 = data_1803_V_read.read();
        } else {
            ap_phi_mux_data_1803_V_read1873_phi_phi_fu_94136_p4 = ap_phi_reg_pp0_iter0_data_1803_V_read1873_phi_reg_94132.read();
        }
    } else {
        ap_phi_mux_data_1803_V_read1873_phi_phi_fu_94136_p4 = ap_phi_reg_pp0_iter0_data_1803_V_read1873_phi_reg_94132.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_51125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_51125_p6 = data_1803_V_read1873_phi_reg_94132.read();
    } else {
        ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_51125_p6 = data_1803_V_read1873_rewind_reg_51121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1804_V_read1874_phi_phi_fu_94149_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1804_V_read1874_phi_phi_fu_94149_p4 = ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_51139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1804_V_read1874_phi_phi_fu_94149_p4 = data_1804_V_read.read();
        } else {
            ap_phi_mux_data_1804_V_read1874_phi_phi_fu_94149_p4 = ap_phi_reg_pp0_iter0_data_1804_V_read1874_phi_reg_94145.read();
        }
    } else {
        ap_phi_mux_data_1804_V_read1874_phi_phi_fu_94149_p4 = ap_phi_reg_pp0_iter0_data_1804_V_read1874_phi_reg_94145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_51139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_51139_p6 = data_1804_V_read1874_phi_reg_94145.read();
    } else {
        ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_51139_p6 = data_1804_V_read1874_rewind_reg_51135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1805_V_read1875_phi_phi_fu_94162_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1805_V_read1875_phi_phi_fu_94162_p4 = ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_51153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1805_V_read1875_phi_phi_fu_94162_p4 = data_1805_V_read.read();
        } else {
            ap_phi_mux_data_1805_V_read1875_phi_phi_fu_94162_p4 = ap_phi_reg_pp0_iter0_data_1805_V_read1875_phi_reg_94158.read();
        }
    } else {
        ap_phi_mux_data_1805_V_read1875_phi_phi_fu_94162_p4 = ap_phi_reg_pp0_iter0_data_1805_V_read1875_phi_reg_94158.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_51153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_51153_p6 = data_1805_V_read1875_phi_reg_94158.read();
    } else {
        ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_51153_p6 = data_1805_V_read1875_rewind_reg_51149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1806_V_read1876_phi_phi_fu_94175_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1806_V_read1876_phi_phi_fu_94175_p4 = ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_51167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1806_V_read1876_phi_phi_fu_94175_p4 = data_1806_V_read.read();
        } else {
            ap_phi_mux_data_1806_V_read1876_phi_phi_fu_94175_p4 = ap_phi_reg_pp0_iter0_data_1806_V_read1876_phi_reg_94171.read();
        }
    } else {
        ap_phi_mux_data_1806_V_read1876_phi_phi_fu_94175_p4 = ap_phi_reg_pp0_iter0_data_1806_V_read1876_phi_reg_94171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_51167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_51167_p6 = data_1806_V_read1876_phi_reg_94171.read();
    } else {
        ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_51167_p6 = data_1806_V_read1876_rewind_reg_51163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1807_V_read1877_phi_phi_fu_94188_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1807_V_read1877_phi_phi_fu_94188_p4 = ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_51181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1807_V_read1877_phi_phi_fu_94188_p4 = data_1807_V_read.read();
        } else {
            ap_phi_mux_data_1807_V_read1877_phi_phi_fu_94188_p4 = ap_phi_reg_pp0_iter0_data_1807_V_read1877_phi_reg_94184.read();
        }
    } else {
        ap_phi_mux_data_1807_V_read1877_phi_phi_fu_94188_p4 = ap_phi_reg_pp0_iter0_data_1807_V_read1877_phi_reg_94184.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_51181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_51181_p6 = data_1807_V_read1877_phi_reg_94184.read();
    } else {
        ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_51181_p6 = data_1807_V_read1877_rewind_reg_51177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1808_V_read1878_phi_phi_fu_94201_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1808_V_read1878_phi_phi_fu_94201_p4 = ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_51195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1808_V_read1878_phi_phi_fu_94201_p4 = data_1808_V_read.read();
        } else {
            ap_phi_mux_data_1808_V_read1878_phi_phi_fu_94201_p4 = ap_phi_reg_pp0_iter0_data_1808_V_read1878_phi_reg_94197.read();
        }
    } else {
        ap_phi_mux_data_1808_V_read1878_phi_phi_fu_94201_p4 = ap_phi_reg_pp0_iter0_data_1808_V_read1878_phi_reg_94197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_51195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_51195_p6 = data_1808_V_read1878_phi_reg_94197.read();
    } else {
        ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_51195_p6 = data_1808_V_read1878_rewind_reg_51191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1809_V_read1879_phi_phi_fu_94214_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1809_V_read1879_phi_phi_fu_94214_p4 = ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_51209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1809_V_read1879_phi_phi_fu_94214_p4 = data_1809_V_read.read();
        } else {
            ap_phi_mux_data_1809_V_read1879_phi_phi_fu_94214_p4 = ap_phi_reg_pp0_iter0_data_1809_V_read1879_phi_reg_94210.read();
        }
    } else {
        ap_phi_mux_data_1809_V_read1879_phi_phi_fu_94214_p4 = ap_phi_reg_pp0_iter0_data_1809_V_read1879_phi_reg_94210.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_51209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_51209_p6 = data_1809_V_read1879_phi_reg_94210.read();
    } else {
        ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_51209_p6 = data_1809_V_read1879_rewind_reg_51205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_180_V_read250_phi_phi_fu_73037_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_180_V_read250_phi_phi_fu_73037_p4 = ap_phi_mux_data_180_V_read250_rewind_phi_fu_28403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_180_V_read250_phi_phi_fu_73037_p4 = data_180_V_read.read();
        } else {
            ap_phi_mux_data_180_V_read250_phi_phi_fu_73037_p4 = ap_phi_reg_pp0_iter0_data_180_V_read250_phi_reg_73033.read();
        }
    } else {
        ap_phi_mux_data_180_V_read250_phi_phi_fu_73037_p4 = ap_phi_reg_pp0_iter0_data_180_V_read250_phi_reg_73033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_180_V_read250_rewind_phi_fu_28403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_180_V_read250_rewind_phi_fu_28403_p6 = data_180_V_read250_phi_reg_73033.read();
    } else {
        ap_phi_mux_data_180_V_read250_rewind_phi_fu_28403_p6 = data_180_V_read250_rewind_reg_28399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1810_V_read1880_phi_phi_fu_94227_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1810_V_read1880_phi_phi_fu_94227_p4 = ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_51223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1810_V_read1880_phi_phi_fu_94227_p4 = data_1810_V_read.read();
        } else {
            ap_phi_mux_data_1810_V_read1880_phi_phi_fu_94227_p4 = ap_phi_reg_pp0_iter0_data_1810_V_read1880_phi_reg_94223.read();
        }
    } else {
        ap_phi_mux_data_1810_V_read1880_phi_phi_fu_94227_p4 = ap_phi_reg_pp0_iter0_data_1810_V_read1880_phi_reg_94223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_51223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_51223_p6 = data_1810_V_read1880_phi_reg_94223.read();
    } else {
        ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_51223_p6 = data_1810_V_read1880_rewind_reg_51219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1811_V_read1881_phi_phi_fu_94240_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1811_V_read1881_phi_phi_fu_94240_p4 = ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_51237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1811_V_read1881_phi_phi_fu_94240_p4 = data_1811_V_read.read();
        } else {
            ap_phi_mux_data_1811_V_read1881_phi_phi_fu_94240_p4 = ap_phi_reg_pp0_iter0_data_1811_V_read1881_phi_reg_94236.read();
        }
    } else {
        ap_phi_mux_data_1811_V_read1881_phi_phi_fu_94240_p4 = ap_phi_reg_pp0_iter0_data_1811_V_read1881_phi_reg_94236.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_51237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_51237_p6 = data_1811_V_read1881_phi_reg_94236.read();
    } else {
        ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_51237_p6 = data_1811_V_read1881_rewind_reg_51233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1812_V_read1882_phi_phi_fu_94253_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1812_V_read1882_phi_phi_fu_94253_p4 = ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_51251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1812_V_read1882_phi_phi_fu_94253_p4 = data_1812_V_read.read();
        } else {
            ap_phi_mux_data_1812_V_read1882_phi_phi_fu_94253_p4 = ap_phi_reg_pp0_iter0_data_1812_V_read1882_phi_reg_94249.read();
        }
    } else {
        ap_phi_mux_data_1812_V_read1882_phi_phi_fu_94253_p4 = ap_phi_reg_pp0_iter0_data_1812_V_read1882_phi_reg_94249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_51251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_51251_p6 = data_1812_V_read1882_phi_reg_94249.read();
    } else {
        ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_51251_p6 = data_1812_V_read1882_rewind_reg_51247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1813_V_read1883_phi_phi_fu_94266_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1813_V_read1883_phi_phi_fu_94266_p4 = ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_51265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1813_V_read1883_phi_phi_fu_94266_p4 = data_1813_V_read.read();
        } else {
            ap_phi_mux_data_1813_V_read1883_phi_phi_fu_94266_p4 = ap_phi_reg_pp0_iter0_data_1813_V_read1883_phi_reg_94262.read();
        }
    } else {
        ap_phi_mux_data_1813_V_read1883_phi_phi_fu_94266_p4 = ap_phi_reg_pp0_iter0_data_1813_V_read1883_phi_reg_94262.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_51265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_51265_p6 = data_1813_V_read1883_phi_reg_94262.read();
    } else {
        ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_51265_p6 = data_1813_V_read1883_rewind_reg_51261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1814_V_read1884_phi_phi_fu_94279_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1814_V_read1884_phi_phi_fu_94279_p4 = ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_51279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1814_V_read1884_phi_phi_fu_94279_p4 = data_1814_V_read.read();
        } else {
            ap_phi_mux_data_1814_V_read1884_phi_phi_fu_94279_p4 = ap_phi_reg_pp0_iter0_data_1814_V_read1884_phi_reg_94275.read();
        }
    } else {
        ap_phi_mux_data_1814_V_read1884_phi_phi_fu_94279_p4 = ap_phi_reg_pp0_iter0_data_1814_V_read1884_phi_reg_94275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_51279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_51279_p6 = data_1814_V_read1884_phi_reg_94275.read();
    } else {
        ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_51279_p6 = data_1814_V_read1884_rewind_reg_51275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1815_V_read1885_phi_phi_fu_94292_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1815_V_read1885_phi_phi_fu_94292_p4 = ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_51293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1815_V_read1885_phi_phi_fu_94292_p4 = data_1815_V_read.read();
        } else {
            ap_phi_mux_data_1815_V_read1885_phi_phi_fu_94292_p4 = ap_phi_reg_pp0_iter0_data_1815_V_read1885_phi_reg_94288.read();
        }
    } else {
        ap_phi_mux_data_1815_V_read1885_phi_phi_fu_94292_p4 = ap_phi_reg_pp0_iter0_data_1815_V_read1885_phi_reg_94288.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_51293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_51293_p6 = data_1815_V_read1885_phi_reg_94288.read();
    } else {
        ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_51293_p6 = data_1815_V_read1885_rewind_reg_51289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1816_V_read1886_phi_phi_fu_94305_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1816_V_read1886_phi_phi_fu_94305_p4 = ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_51307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1816_V_read1886_phi_phi_fu_94305_p4 = data_1816_V_read.read();
        } else {
            ap_phi_mux_data_1816_V_read1886_phi_phi_fu_94305_p4 = ap_phi_reg_pp0_iter0_data_1816_V_read1886_phi_reg_94301.read();
        }
    } else {
        ap_phi_mux_data_1816_V_read1886_phi_phi_fu_94305_p4 = ap_phi_reg_pp0_iter0_data_1816_V_read1886_phi_reg_94301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_51307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_51307_p6 = data_1816_V_read1886_phi_reg_94301.read();
    } else {
        ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_51307_p6 = data_1816_V_read1886_rewind_reg_51303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1817_V_read1887_phi_phi_fu_94318_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1817_V_read1887_phi_phi_fu_94318_p4 = ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_51321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1817_V_read1887_phi_phi_fu_94318_p4 = data_1817_V_read.read();
        } else {
            ap_phi_mux_data_1817_V_read1887_phi_phi_fu_94318_p4 = ap_phi_reg_pp0_iter0_data_1817_V_read1887_phi_reg_94314.read();
        }
    } else {
        ap_phi_mux_data_1817_V_read1887_phi_phi_fu_94318_p4 = ap_phi_reg_pp0_iter0_data_1817_V_read1887_phi_reg_94314.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_51321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_51321_p6 = data_1817_V_read1887_phi_reg_94314.read();
    } else {
        ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_51321_p6 = data_1817_V_read1887_rewind_reg_51317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1818_V_read1888_phi_phi_fu_94331_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1818_V_read1888_phi_phi_fu_94331_p4 = ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_51335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1818_V_read1888_phi_phi_fu_94331_p4 = data_1818_V_read.read();
        } else {
            ap_phi_mux_data_1818_V_read1888_phi_phi_fu_94331_p4 = ap_phi_reg_pp0_iter0_data_1818_V_read1888_phi_reg_94327.read();
        }
    } else {
        ap_phi_mux_data_1818_V_read1888_phi_phi_fu_94331_p4 = ap_phi_reg_pp0_iter0_data_1818_V_read1888_phi_reg_94327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_51335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_51335_p6 = data_1818_V_read1888_phi_reg_94327.read();
    } else {
        ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_51335_p6 = data_1818_V_read1888_rewind_reg_51331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1819_V_read1889_phi_phi_fu_94344_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1819_V_read1889_phi_phi_fu_94344_p4 = ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_51349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1819_V_read1889_phi_phi_fu_94344_p4 = data_1819_V_read.read();
        } else {
            ap_phi_mux_data_1819_V_read1889_phi_phi_fu_94344_p4 = ap_phi_reg_pp0_iter0_data_1819_V_read1889_phi_reg_94340.read();
        }
    } else {
        ap_phi_mux_data_1819_V_read1889_phi_phi_fu_94344_p4 = ap_phi_reg_pp0_iter0_data_1819_V_read1889_phi_reg_94340.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_51349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_51349_p6 = data_1819_V_read1889_phi_reg_94340.read();
    } else {
        ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_51349_p6 = data_1819_V_read1889_rewind_reg_51345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_181_V_read251_phi_phi_fu_73050_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_181_V_read251_phi_phi_fu_73050_p4 = ap_phi_mux_data_181_V_read251_rewind_phi_fu_28417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_181_V_read251_phi_phi_fu_73050_p4 = data_181_V_read.read();
        } else {
            ap_phi_mux_data_181_V_read251_phi_phi_fu_73050_p4 = ap_phi_reg_pp0_iter0_data_181_V_read251_phi_reg_73046.read();
        }
    } else {
        ap_phi_mux_data_181_V_read251_phi_phi_fu_73050_p4 = ap_phi_reg_pp0_iter0_data_181_V_read251_phi_reg_73046.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_181_V_read251_rewind_phi_fu_28417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_181_V_read251_rewind_phi_fu_28417_p6 = data_181_V_read251_phi_reg_73046.read();
    } else {
        ap_phi_mux_data_181_V_read251_rewind_phi_fu_28417_p6 = data_181_V_read251_rewind_reg_28413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1820_V_read1890_phi_phi_fu_94357_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1820_V_read1890_phi_phi_fu_94357_p4 = ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_51363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1820_V_read1890_phi_phi_fu_94357_p4 = data_1820_V_read.read();
        } else {
            ap_phi_mux_data_1820_V_read1890_phi_phi_fu_94357_p4 = ap_phi_reg_pp0_iter0_data_1820_V_read1890_phi_reg_94353.read();
        }
    } else {
        ap_phi_mux_data_1820_V_read1890_phi_phi_fu_94357_p4 = ap_phi_reg_pp0_iter0_data_1820_V_read1890_phi_reg_94353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_51363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_51363_p6 = data_1820_V_read1890_phi_reg_94353.read();
    } else {
        ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_51363_p6 = data_1820_V_read1890_rewind_reg_51359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1821_V_read1891_phi_phi_fu_94370_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1821_V_read1891_phi_phi_fu_94370_p4 = ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_51377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1821_V_read1891_phi_phi_fu_94370_p4 = data_1821_V_read.read();
        } else {
            ap_phi_mux_data_1821_V_read1891_phi_phi_fu_94370_p4 = ap_phi_reg_pp0_iter0_data_1821_V_read1891_phi_reg_94366.read();
        }
    } else {
        ap_phi_mux_data_1821_V_read1891_phi_phi_fu_94370_p4 = ap_phi_reg_pp0_iter0_data_1821_V_read1891_phi_reg_94366.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_51377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_51377_p6 = data_1821_V_read1891_phi_reg_94366.read();
    } else {
        ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_51377_p6 = data_1821_V_read1891_rewind_reg_51373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1822_V_read1892_phi_phi_fu_94383_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1822_V_read1892_phi_phi_fu_94383_p4 = ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_51391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1822_V_read1892_phi_phi_fu_94383_p4 = data_1822_V_read.read();
        } else {
            ap_phi_mux_data_1822_V_read1892_phi_phi_fu_94383_p4 = ap_phi_reg_pp0_iter0_data_1822_V_read1892_phi_reg_94379.read();
        }
    } else {
        ap_phi_mux_data_1822_V_read1892_phi_phi_fu_94383_p4 = ap_phi_reg_pp0_iter0_data_1822_V_read1892_phi_reg_94379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_51391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_51391_p6 = data_1822_V_read1892_phi_reg_94379.read();
    } else {
        ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_51391_p6 = data_1822_V_read1892_rewind_reg_51387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1823_V_read1893_phi_phi_fu_94396_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1823_V_read1893_phi_phi_fu_94396_p4 = ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_51405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1823_V_read1893_phi_phi_fu_94396_p4 = data_1823_V_read.read();
        } else {
            ap_phi_mux_data_1823_V_read1893_phi_phi_fu_94396_p4 = ap_phi_reg_pp0_iter0_data_1823_V_read1893_phi_reg_94392.read();
        }
    } else {
        ap_phi_mux_data_1823_V_read1893_phi_phi_fu_94396_p4 = ap_phi_reg_pp0_iter0_data_1823_V_read1893_phi_reg_94392.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_51405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_51405_p6 = data_1823_V_read1893_phi_reg_94392.read();
    } else {
        ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_51405_p6 = data_1823_V_read1893_rewind_reg_51401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1824_V_read1894_phi_phi_fu_94409_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1824_V_read1894_phi_phi_fu_94409_p4 = ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_51419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1824_V_read1894_phi_phi_fu_94409_p4 = data_1824_V_read.read();
        } else {
            ap_phi_mux_data_1824_V_read1894_phi_phi_fu_94409_p4 = ap_phi_reg_pp0_iter0_data_1824_V_read1894_phi_reg_94405.read();
        }
    } else {
        ap_phi_mux_data_1824_V_read1894_phi_phi_fu_94409_p4 = ap_phi_reg_pp0_iter0_data_1824_V_read1894_phi_reg_94405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_51419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_51419_p6 = data_1824_V_read1894_phi_reg_94405.read();
    } else {
        ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_51419_p6 = data_1824_V_read1894_rewind_reg_51415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1825_V_read1895_phi_phi_fu_94422_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1825_V_read1895_phi_phi_fu_94422_p4 = ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_51433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1825_V_read1895_phi_phi_fu_94422_p4 = data_1825_V_read.read();
        } else {
            ap_phi_mux_data_1825_V_read1895_phi_phi_fu_94422_p4 = ap_phi_reg_pp0_iter0_data_1825_V_read1895_phi_reg_94418.read();
        }
    } else {
        ap_phi_mux_data_1825_V_read1895_phi_phi_fu_94422_p4 = ap_phi_reg_pp0_iter0_data_1825_V_read1895_phi_reg_94418.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_51433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_51433_p6 = data_1825_V_read1895_phi_reg_94418.read();
    } else {
        ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_51433_p6 = data_1825_V_read1895_rewind_reg_51429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1826_V_read1896_phi_phi_fu_94435_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1826_V_read1896_phi_phi_fu_94435_p4 = ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_51447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1826_V_read1896_phi_phi_fu_94435_p4 = data_1826_V_read.read();
        } else {
            ap_phi_mux_data_1826_V_read1896_phi_phi_fu_94435_p4 = ap_phi_reg_pp0_iter0_data_1826_V_read1896_phi_reg_94431.read();
        }
    } else {
        ap_phi_mux_data_1826_V_read1896_phi_phi_fu_94435_p4 = ap_phi_reg_pp0_iter0_data_1826_V_read1896_phi_reg_94431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_51447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_51447_p6 = data_1826_V_read1896_phi_reg_94431.read();
    } else {
        ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_51447_p6 = data_1826_V_read1896_rewind_reg_51443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1827_V_read1897_phi_phi_fu_94448_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1827_V_read1897_phi_phi_fu_94448_p4 = ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_51461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1827_V_read1897_phi_phi_fu_94448_p4 = data_1827_V_read.read();
        } else {
            ap_phi_mux_data_1827_V_read1897_phi_phi_fu_94448_p4 = ap_phi_reg_pp0_iter0_data_1827_V_read1897_phi_reg_94444.read();
        }
    } else {
        ap_phi_mux_data_1827_V_read1897_phi_phi_fu_94448_p4 = ap_phi_reg_pp0_iter0_data_1827_V_read1897_phi_reg_94444.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_51461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_51461_p6 = data_1827_V_read1897_phi_reg_94444.read();
    } else {
        ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_51461_p6 = data_1827_V_read1897_rewind_reg_51457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1828_V_read1898_phi_phi_fu_94461_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1828_V_read1898_phi_phi_fu_94461_p4 = ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_51475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1828_V_read1898_phi_phi_fu_94461_p4 = data_1828_V_read.read();
        } else {
            ap_phi_mux_data_1828_V_read1898_phi_phi_fu_94461_p4 = ap_phi_reg_pp0_iter0_data_1828_V_read1898_phi_reg_94457.read();
        }
    } else {
        ap_phi_mux_data_1828_V_read1898_phi_phi_fu_94461_p4 = ap_phi_reg_pp0_iter0_data_1828_V_read1898_phi_reg_94457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_51475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_51475_p6 = data_1828_V_read1898_phi_reg_94457.read();
    } else {
        ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_51475_p6 = data_1828_V_read1898_rewind_reg_51471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1829_V_read1899_phi_phi_fu_94474_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1829_V_read1899_phi_phi_fu_94474_p4 = ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_51489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1829_V_read1899_phi_phi_fu_94474_p4 = data_1829_V_read.read();
        } else {
            ap_phi_mux_data_1829_V_read1899_phi_phi_fu_94474_p4 = ap_phi_reg_pp0_iter0_data_1829_V_read1899_phi_reg_94470.read();
        }
    } else {
        ap_phi_mux_data_1829_V_read1899_phi_phi_fu_94474_p4 = ap_phi_reg_pp0_iter0_data_1829_V_read1899_phi_reg_94470.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_51489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_51489_p6 = data_1829_V_read1899_phi_reg_94470.read();
    } else {
        ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_51489_p6 = data_1829_V_read1899_rewind_reg_51485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_182_V_read252_phi_phi_fu_73063_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_182_V_read252_phi_phi_fu_73063_p4 = ap_phi_mux_data_182_V_read252_rewind_phi_fu_28431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_182_V_read252_phi_phi_fu_73063_p4 = data_182_V_read.read();
        } else {
            ap_phi_mux_data_182_V_read252_phi_phi_fu_73063_p4 = ap_phi_reg_pp0_iter0_data_182_V_read252_phi_reg_73059.read();
        }
    } else {
        ap_phi_mux_data_182_V_read252_phi_phi_fu_73063_p4 = ap_phi_reg_pp0_iter0_data_182_V_read252_phi_reg_73059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_182_V_read252_rewind_phi_fu_28431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_182_V_read252_rewind_phi_fu_28431_p6 = data_182_V_read252_phi_reg_73059.read();
    } else {
        ap_phi_mux_data_182_V_read252_rewind_phi_fu_28431_p6 = data_182_V_read252_rewind_reg_28427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1830_V_read1900_phi_phi_fu_94487_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1830_V_read1900_phi_phi_fu_94487_p4 = ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_51503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1830_V_read1900_phi_phi_fu_94487_p4 = data_1830_V_read.read();
        } else {
            ap_phi_mux_data_1830_V_read1900_phi_phi_fu_94487_p4 = ap_phi_reg_pp0_iter0_data_1830_V_read1900_phi_reg_94483.read();
        }
    } else {
        ap_phi_mux_data_1830_V_read1900_phi_phi_fu_94487_p4 = ap_phi_reg_pp0_iter0_data_1830_V_read1900_phi_reg_94483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_51503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_51503_p6 = data_1830_V_read1900_phi_reg_94483.read();
    } else {
        ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_51503_p6 = data_1830_V_read1900_rewind_reg_51499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1831_V_read1901_phi_phi_fu_94500_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1831_V_read1901_phi_phi_fu_94500_p4 = ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_51517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1831_V_read1901_phi_phi_fu_94500_p4 = data_1831_V_read.read();
        } else {
            ap_phi_mux_data_1831_V_read1901_phi_phi_fu_94500_p4 = ap_phi_reg_pp0_iter0_data_1831_V_read1901_phi_reg_94496.read();
        }
    } else {
        ap_phi_mux_data_1831_V_read1901_phi_phi_fu_94500_p4 = ap_phi_reg_pp0_iter0_data_1831_V_read1901_phi_reg_94496.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_51517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_51517_p6 = data_1831_V_read1901_phi_reg_94496.read();
    } else {
        ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_51517_p6 = data_1831_V_read1901_rewind_reg_51513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1832_V_read1902_phi_phi_fu_94513_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1832_V_read1902_phi_phi_fu_94513_p4 = ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_51531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1832_V_read1902_phi_phi_fu_94513_p4 = data_1832_V_read.read();
        } else {
            ap_phi_mux_data_1832_V_read1902_phi_phi_fu_94513_p4 = ap_phi_reg_pp0_iter0_data_1832_V_read1902_phi_reg_94509.read();
        }
    } else {
        ap_phi_mux_data_1832_V_read1902_phi_phi_fu_94513_p4 = ap_phi_reg_pp0_iter0_data_1832_V_read1902_phi_reg_94509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_51531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_51531_p6 = data_1832_V_read1902_phi_reg_94509.read();
    } else {
        ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_51531_p6 = data_1832_V_read1902_rewind_reg_51527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1833_V_read1903_phi_phi_fu_94526_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1833_V_read1903_phi_phi_fu_94526_p4 = ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_51545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1833_V_read1903_phi_phi_fu_94526_p4 = data_1833_V_read.read();
        } else {
            ap_phi_mux_data_1833_V_read1903_phi_phi_fu_94526_p4 = ap_phi_reg_pp0_iter0_data_1833_V_read1903_phi_reg_94522.read();
        }
    } else {
        ap_phi_mux_data_1833_V_read1903_phi_phi_fu_94526_p4 = ap_phi_reg_pp0_iter0_data_1833_V_read1903_phi_reg_94522.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_51545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_51545_p6 = data_1833_V_read1903_phi_reg_94522.read();
    } else {
        ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_51545_p6 = data_1833_V_read1903_rewind_reg_51541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1834_V_read1904_phi_phi_fu_94539_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1834_V_read1904_phi_phi_fu_94539_p4 = ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_51559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1834_V_read1904_phi_phi_fu_94539_p4 = data_1834_V_read.read();
        } else {
            ap_phi_mux_data_1834_V_read1904_phi_phi_fu_94539_p4 = ap_phi_reg_pp0_iter0_data_1834_V_read1904_phi_reg_94535.read();
        }
    } else {
        ap_phi_mux_data_1834_V_read1904_phi_phi_fu_94539_p4 = ap_phi_reg_pp0_iter0_data_1834_V_read1904_phi_reg_94535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_51559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_51559_p6 = data_1834_V_read1904_phi_reg_94535.read();
    } else {
        ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_51559_p6 = data_1834_V_read1904_rewind_reg_51555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1835_V_read1905_phi_phi_fu_94552_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1835_V_read1905_phi_phi_fu_94552_p4 = ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_51573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1835_V_read1905_phi_phi_fu_94552_p4 = data_1835_V_read.read();
        } else {
            ap_phi_mux_data_1835_V_read1905_phi_phi_fu_94552_p4 = ap_phi_reg_pp0_iter0_data_1835_V_read1905_phi_reg_94548.read();
        }
    } else {
        ap_phi_mux_data_1835_V_read1905_phi_phi_fu_94552_p4 = ap_phi_reg_pp0_iter0_data_1835_V_read1905_phi_reg_94548.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_51573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_51573_p6 = data_1835_V_read1905_phi_reg_94548.read();
    } else {
        ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_51573_p6 = data_1835_V_read1905_rewind_reg_51569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1836_V_read1906_phi_phi_fu_94565_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1836_V_read1906_phi_phi_fu_94565_p4 = ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_51587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1836_V_read1906_phi_phi_fu_94565_p4 = data_1836_V_read.read();
        } else {
            ap_phi_mux_data_1836_V_read1906_phi_phi_fu_94565_p4 = ap_phi_reg_pp0_iter0_data_1836_V_read1906_phi_reg_94561.read();
        }
    } else {
        ap_phi_mux_data_1836_V_read1906_phi_phi_fu_94565_p4 = ap_phi_reg_pp0_iter0_data_1836_V_read1906_phi_reg_94561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_51587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_51587_p6 = data_1836_V_read1906_phi_reg_94561.read();
    } else {
        ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_51587_p6 = data_1836_V_read1906_rewind_reg_51583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1837_V_read1907_phi_phi_fu_94578_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1837_V_read1907_phi_phi_fu_94578_p4 = ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_51601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1837_V_read1907_phi_phi_fu_94578_p4 = data_1837_V_read.read();
        } else {
            ap_phi_mux_data_1837_V_read1907_phi_phi_fu_94578_p4 = ap_phi_reg_pp0_iter0_data_1837_V_read1907_phi_reg_94574.read();
        }
    } else {
        ap_phi_mux_data_1837_V_read1907_phi_phi_fu_94578_p4 = ap_phi_reg_pp0_iter0_data_1837_V_read1907_phi_reg_94574.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_51601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_51601_p6 = data_1837_V_read1907_phi_reg_94574.read();
    } else {
        ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_51601_p6 = data_1837_V_read1907_rewind_reg_51597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1838_V_read1908_phi_phi_fu_94591_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1838_V_read1908_phi_phi_fu_94591_p4 = ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_51615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1838_V_read1908_phi_phi_fu_94591_p4 = data_1838_V_read.read();
        } else {
            ap_phi_mux_data_1838_V_read1908_phi_phi_fu_94591_p4 = ap_phi_reg_pp0_iter0_data_1838_V_read1908_phi_reg_94587.read();
        }
    } else {
        ap_phi_mux_data_1838_V_read1908_phi_phi_fu_94591_p4 = ap_phi_reg_pp0_iter0_data_1838_V_read1908_phi_reg_94587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_51615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_51615_p6 = data_1838_V_read1908_phi_reg_94587.read();
    } else {
        ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_51615_p6 = data_1838_V_read1908_rewind_reg_51611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1839_V_read1909_phi_phi_fu_94604_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1839_V_read1909_phi_phi_fu_94604_p4 = ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_51629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1839_V_read1909_phi_phi_fu_94604_p4 = data_1839_V_read.read();
        } else {
            ap_phi_mux_data_1839_V_read1909_phi_phi_fu_94604_p4 = ap_phi_reg_pp0_iter0_data_1839_V_read1909_phi_reg_94600.read();
        }
    } else {
        ap_phi_mux_data_1839_V_read1909_phi_phi_fu_94604_p4 = ap_phi_reg_pp0_iter0_data_1839_V_read1909_phi_reg_94600.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_51629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_51629_p6 = data_1839_V_read1909_phi_reg_94600.read();
    } else {
        ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_51629_p6 = data_1839_V_read1909_rewind_reg_51625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_183_V_read253_phi_phi_fu_73076_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_183_V_read253_phi_phi_fu_73076_p4 = ap_phi_mux_data_183_V_read253_rewind_phi_fu_28445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_183_V_read253_phi_phi_fu_73076_p4 = data_183_V_read.read();
        } else {
            ap_phi_mux_data_183_V_read253_phi_phi_fu_73076_p4 = ap_phi_reg_pp0_iter0_data_183_V_read253_phi_reg_73072.read();
        }
    } else {
        ap_phi_mux_data_183_V_read253_phi_phi_fu_73076_p4 = ap_phi_reg_pp0_iter0_data_183_V_read253_phi_reg_73072.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_183_V_read253_rewind_phi_fu_28445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_183_V_read253_rewind_phi_fu_28445_p6 = data_183_V_read253_phi_reg_73072.read();
    } else {
        ap_phi_mux_data_183_V_read253_rewind_phi_fu_28445_p6 = data_183_V_read253_rewind_reg_28441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1840_V_read1910_phi_phi_fu_94617_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1840_V_read1910_phi_phi_fu_94617_p4 = ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_51643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1840_V_read1910_phi_phi_fu_94617_p4 = data_1840_V_read.read();
        } else {
            ap_phi_mux_data_1840_V_read1910_phi_phi_fu_94617_p4 = ap_phi_reg_pp0_iter0_data_1840_V_read1910_phi_reg_94613.read();
        }
    } else {
        ap_phi_mux_data_1840_V_read1910_phi_phi_fu_94617_p4 = ap_phi_reg_pp0_iter0_data_1840_V_read1910_phi_reg_94613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_51643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_51643_p6 = data_1840_V_read1910_phi_reg_94613.read();
    } else {
        ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_51643_p6 = data_1840_V_read1910_rewind_reg_51639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1841_V_read1911_phi_phi_fu_94630_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1841_V_read1911_phi_phi_fu_94630_p4 = ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_51657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1841_V_read1911_phi_phi_fu_94630_p4 = data_1841_V_read.read();
        } else {
            ap_phi_mux_data_1841_V_read1911_phi_phi_fu_94630_p4 = ap_phi_reg_pp0_iter0_data_1841_V_read1911_phi_reg_94626.read();
        }
    } else {
        ap_phi_mux_data_1841_V_read1911_phi_phi_fu_94630_p4 = ap_phi_reg_pp0_iter0_data_1841_V_read1911_phi_reg_94626.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_51657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_51657_p6 = data_1841_V_read1911_phi_reg_94626.read();
    } else {
        ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_51657_p6 = data_1841_V_read1911_rewind_reg_51653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1842_V_read1912_phi_phi_fu_94643_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1842_V_read1912_phi_phi_fu_94643_p4 = ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_51671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1842_V_read1912_phi_phi_fu_94643_p4 = data_1842_V_read.read();
        } else {
            ap_phi_mux_data_1842_V_read1912_phi_phi_fu_94643_p4 = ap_phi_reg_pp0_iter0_data_1842_V_read1912_phi_reg_94639.read();
        }
    } else {
        ap_phi_mux_data_1842_V_read1912_phi_phi_fu_94643_p4 = ap_phi_reg_pp0_iter0_data_1842_V_read1912_phi_reg_94639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_51671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_51671_p6 = data_1842_V_read1912_phi_reg_94639.read();
    } else {
        ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_51671_p6 = data_1842_V_read1912_rewind_reg_51667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1843_V_read1913_phi_phi_fu_94656_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1843_V_read1913_phi_phi_fu_94656_p4 = ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_51685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1843_V_read1913_phi_phi_fu_94656_p4 = data_1843_V_read.read();
        } else {
            ap_phi_mux_data_1843_V_read1913_phi_phi_fu_94656_p4 = ap_phi_reg_pp0_iter0_data_1843_V_read1913_phi_reg_94652.read();
        }
    } else {
        ap_phi_mux_data_1843_V_read1913_phi_phi_fu_94656_p4 = ap_phi_reg_pp0_iter0_data_1843_V_read1913_phi_reg_94652.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_51685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_51685_p6 = data_1843_V_read1913_phi_reg_94652.read();
    } else {
        ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_51685_p6 = data_1843_V_read1913_rewind_reg_51681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1844_V_read1914_phi_phi_fu_94669_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1844_V_read1914_phi_phi_fu_94669_p4 = ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_51699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1844_V_read1914_phi_phi_fu_94669_p4 = data_1844_V_read.read();
        } else {
            ap_phi_mux_data_1844_V_read1914_phi_phi_fu_94669_p4 = ap_phi_reg_pp0_iter0_data_1844_V_read1914_phi_reg_94665.read();
        }
    } else {
        ap_phi_mux_data_1844_V_read1914_phi_phi_fu_94669_p4 = ap_phi_reg_pp0_iter0_data_1844_V_read1914_phi_reg_94665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_51699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_51699_p6 = data_1844_V_read1914_phi_reg_94665.read();
    } else {
        ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_51699_p6 = data_1844_V_read1914_rewind_reg_51695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1845_V_read1915_phi_phi_fu_94682_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1845_V_read1915_phi_phi_fu_94682_p4 = ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_51713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1845_V_read1915_phi_phi_fu_94682_p4 = data_1845_V_read.read();
        } else {
            ap_phi_mux_data_1845_V_read1915_phi_phi_fu_94682_p4 = ap_phi_reg_pp0_iter0_data_1845_V_read1915_phi_reg_94678.read();
        }
    } else {
        ap_phi_mux_data_1845_V_read1915_phi_phi_fu_94682_p4 = ap_phi_reg_pp0_iter0_data_1845_V_read1915_phi_reg_94678.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_51713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_51713_p6 = data_1845_V_read1915_phi_reg_94678.read();
    } else {
        ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_51713_p6 = data_1845_V_read1915_rewind_reg_51709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1846_V_read1916_phi_phi_fu_94695_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1846_V_read1916_phi_phi_fu_94695_p4 = ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_51727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1846_V_read1916_phi_phi_fu_94695_p4 = data_1846_V_read.read();
        } else {
            ap_phi_mux_data_1846_V_read1916_phi_phi_fu_94695_p4 = ap_phi_reg_pp0_iter0_data_1846_V_read1916_phi_reg_94691.read();
        }
    } else {
        ap_phi_mux_data_1846_V_read1916_phi_phi_fu_94695_p4 = ap_phi_reg_pp0_iter0_data_1846_V_read1916_phi_reg_94691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_51727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_51727_p6 = data_1846_V_read1916_phi_reg_94691.read();
    } else {
        ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_51727_p6 = data_1846_V_read1916_rewind_reg_51723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1847_V_read1917_phi_phi_fu_94708_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1847_V_read1917_phi_phi_fu_94708_p4 = ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_51741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1847_V_read1917_phi_phi_fu_94708_p4 = data_1847_V_read.read();
        } else {
            ap_phi_mux_data_1847_V_read1917_phi_phi_fu_94708_p4 = ap_phi_reg_pp0_iter0_data_1847_V_read1917_phi_reg_94704.read();
        }
    } else {
        ap_phi_mux_data_1847_V_read1917_phi_phi_fu_94708_p4 = ap_phi_reg_pp0_iter0_data_1847_V_read1917_phi_reg_94704.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_51741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_51741_p6 = data_1847_V_read1917_phi_reg_94704.read();
    } else {
        ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_51741_p6 = data_1847_V_read1917_rewind_reg_51737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1848_V_read1918_phi_phi_fu_94721_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1848_V_read1918_phi_phi_fu_94721_p4 = ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_51755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1848_V_read1918_phi_phi_fu_94721_p4 = data_1848_V_read.read();
        } else {
            ap_phi_mux_data_1848_V_read1918_phi_phi_fu_94721_p4 = ap_phi_reg_pp0_iter0_data_1848_V_read1918_phi_reg_94717.read();
        }
    } else {
        ap_phi_mux_data_1848_V_read1918_phi_phi_fu_94721_p4 = ap_phi_reg_pp0_iter0_data_1848_V_read1918_phi_reg_94717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_51755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_51755_p6 = data_1848_V_read1918_phi_reg_94717.read();
    } else {
        ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_51755_p6 = data_1848_V_read1918_rewind_reg_51751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1849_V_read1919_phi_phi_fu_94734_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1849_V_read1919_phi_phi_fu_94734_p4 = ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_51769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1849_V_read1919_phi_phi_fu_94734_p4 = data_1849_V_read.read();
        } else {
            ap_phi_mux_data_1849_V_read1919_phi_phi_fu_94734_p4 = ap_phi_reg_pp0_iter0_data_1849_V_read1919_phi_reg_94730.read();
        }
    } else {
        ap_phi_mux_data_1849_V_read1919_phi_phi_fu_94734_p4 = ap_phi_reg_pp0_iter0_data_1849_V_read1919_phi_reg_94730.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_51769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_51769_p6 = data_1849_V_read1919_phi_reg_94730.read();
    } else {
        ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_51769_p6 = data_1849_V_read1919_rewind_reg_51765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_184_V_read254_phi_phi_fu_73089_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_184_V_read254_phi_phi_fu_73089_p4 = ap_phi_mux_data_184_V_read254_rewind_phi_fu_28459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_184_V_read254_phi_phi_fu_73089_p4 = data_184_V_read.read();
        } else {
            ap_phi_mux_data_184_V_read254_phi_phi_fu_73089_p4 = ap_phi_reg_pp0_iter0_data_184_V_read254_phi_reg_73085.read();
        }
    } else {
        ap_phi_mux_data_184_V_read254_phi_phi_fu_73089_p4 = ap_phi_reg_pp0_iter0_data_184_V_read254_phi_reg_73085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_184_V_read254_rewind_phi_fu_28459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_184_V_read254_rewind_phi_fu_28459_p6 = data_184_V_read254_phi_reg_73085.read();
    } else {
        ap_phi_mux_data_184_V_read254_rewind_phi_fu_28459_p6 = data_184_V_read254_rewind_reg_28455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1850_V_read1920_phi_phi_fu_94747_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1850_V_read1920_phi_phi_fu_94747_p4 = ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_51783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1850_V_read1920_phi_phi_fu_94747_p4 = data_1850_V_read.read();
        } else {
            ap_phi_mux_data_1850_V_read1920_phi_phi_fu_94747_p4 = ap_phi_reg_pp0_iter0_data_1850_V_read1920_phi_reg_94743.read();
        }
    } else {
        ap_phi_mux_data_1850_V_read1920_phi_phi_fu_94747_p4 = ap_phi_reg_pp0_iter0_data_1850_V_read1920_phi_reg_94743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_51783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_51783_p6 = data_1850_V_read1920_phi_reg_94743.read();
    } else {
        ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_51783_p6 = data_1850_V_read1920_rewind_reg_51779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1851_V_read1921_phi_phi_fu_94760_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1851_V_read1921_phi_phi_fu_94760_p4 = ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_51797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1851_V_read1921_phi_phi_fu_94760_p4 = data_1851_V_read.read();
        } else {
            ap_phi_mux_data_1851_V_read1921_phi_phi_fu_94760_p4 = ap_phi_reg_pp0_iter0_data_1851_V_read1921_phi_reg_94756.read();
        }
    } else {
        ap_phi_mux_data_1851_V_read1921_phi_phi_fu_94760_p4 = ap_phi_reg_pp0_iter0_data_1851_V_read1921_phi_reg_94756.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_51797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_51797_p6 = data_1851_V_read1921_phi_reg_94756.read();
    } else {
        ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_51797_p6 = data_1851_V_read1921_rewind_reg_51793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1852_V_read1922_phi_phi_fu_94773_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1852_V_read1922_phi_phi_fu_94773_p4 = ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_51811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1852_V_read1922_phi_phi_fu_94773_p4 = data_1852_V_read.read();
        } else {
            ap_phi_mux_data_1852_V_read1922_phi_phi_fu_94773_p4 = ap_phi_reg_pp0_iter0_data_1852_V_read1922_phi_reg_94769.read();
        }
    } else {
        ap_phi_mux_data_1852_V_read1922_phi_phi_fu_94773_p4 = ap_phi_reg_pp0_iter0_data_1852_V_read1922_phi_reg_94769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_51811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_51811_p6 = data_1852_V_read1922_phi_reg_94769.read();
    } else {
        ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_51811_p6 = data_1852_V_read1922_rewind_reg_51807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1853_V_read1923_phi_phi_fu_94786_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1853_V_read1923_phi_phi_fu_94786_p4 = ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_51825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1853_V_read1923_phi_phi_fu_94786_p4 = data_1853_V_read.read();
        } else {
            ap_phi_mux_data_1853_V_read1923_phi_phi_fu_94786_p4 = ap_phi_reg_pp0_iter0_data_1853_V_read1923_phi_reg_94782.read();
        }
    } else {
        ap_phi_mux_data_1853_V_read1923_phi_phi_fu_94786_p4 = ap_phi_reg_pp0_iter0_data_1853_V_read1923_phi_reg_94782.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_51825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_51825_p6 = data_1853_V_read1923_phi_reg_94782.read();
    } else {
        ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_51825_p6 = data_1853_V_read1923_rewind_reg_51821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1854_V_read1924_phi_phi_fu_94799_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1854_V_read1924_phi_phi_fu_94799_p4 = ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_51839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1854_V_read1924_phi_phi_fu_94799_p4 = data_1854_V_read.read();
        } else {
            ap_phi_mux_data_1854_V_read1924_phi_phi_fu_94799_p4 = ap_phi_reg_pp0_iter0_data_1854_V_read1924_phi_reg_94795.read();
        }
    } else {
        ap_phi_mux_data_1854_V_read1924_phi_phi_fu_94799_p4 = ap_phi_reg_pp0_iter0_data_1854_V_read1924_phi_reg_94795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_51839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_51839_p6 = data_1854_V_read1924_phi_reg_94795.read();
    } else {
        ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_51839_p6 = data_1854_V_read1924_rewind_reg_51835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1855_V_read1925_phi_phi_fu_94812_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1855_V_read1925_phi_phi_fu_94812_p4 = ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_51853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1855_V_read1925_phi_phi_fu_94812_p4 = data_1855_V_read.read();
        } else {
            ap_phi_mux_data_1855_V_read1925_phi_phi_fu_94812_p4 = ap_phi_reg_pp0_iter0_data_1855_V_read1925_phi_reg_94808.read();
        }
    } else {
        ap_phi_mux_data_1855_V_read1925_phi_phi_fu_94812_p4 = ap_phi_reg_pp0_iter0_data_1855_V_read1925_phi_reg_94808.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_51853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_51853_p6 = data_1855_V_read1925_phi_reg_94808.read();
    } else {
        ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_51853_p6 = data_1855_V_read1925_rewind_reg_51849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1856_V_read1926_phi_phi_fu_94825_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1856_V_read1926_phi_phi_fu_94825_p4 = ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_51867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1856_V_read1926_phi_phi_fu_94825_p4 = data_1856_V_read.read();
        } else {
            ap_phi_mux_data_1856_V_read1926_phi_phi_fu_94825_p4 = ap_phi_reg_pp0_iter0_data_1856_V_read1926_phi_reg_94821.read();
        }
    } else {
        ap_phi_mux_data_1856_V_read1926_phi_phi_fu_94825_p4 = ap_phi_reg_pp0_iter0_data_1856_V_read1926_phi_reg_94821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_51867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_51867_p6 = data_1856_V_read1926_phi_reg_94821.read();
    } else {
        ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_51867_p6 = data_1856_V_read1926_rewind_reg_51863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1857_V_read1927_phi_phi_fu_94838_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1857_V_read1927_phi_phi_fu_94838_p4 = ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_51881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1857_V_read1927_phi_phi_fu_94838_p4 = data_1857_V_read.read();
        } else {
            ap_phi_mux_data_1857_V_read1927_phi_phi_fu_94838_p4 = ap_phi_reg_pp0_iter0_data_1857_V_read1927_phi_reg_94834.read();
        }
    } else {
        ap_phi_mux_data_1857_V_read1927_phi_phi_fu_94838_p4 = ap_phi_reg_pp0_iter0_data_1857_V_read1927_phi_reg_94834.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_51881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_51881_p6 = data_1857_V_read1927_phi_reg_94834.read();
    } else {
        ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_51881_p6 = data_1857_V_read1927_rewind_reg_51877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1858_V_read1928_phi_phi_fu_94851_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1858_V_read1928_phi_phi_fu_94851_p4 = ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_51895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1858_V_read1928_phi_phi_fu_94851_p4 = data_1858_V_read.read();
        } else {
            ap_phi_mux_data_1858_V_read1928_phi_phi_fu_94851_p4 = ap_phi_reg_pp0_iter0_data_1858_V_read1928_phi_reg_94847.read();
        }
    } else {
        ap_phi_mux_data_1858_V_read1928_phi_phi_fu_94851_p4 = ap_phi_reg_pp0_iter0_data_1858_V_read1928_phi_reg_94847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_51895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_51895_p6 = data_1858_V_read1928_phi_reg_94847.read();
    } else {
        ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_51895_p6 = data_1858_V_read1928_rewind_reg_51891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1859_V_read1929_phi_phi_fu_94864_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1859_V_read1929_phi_phi_fu_94864_p4 = ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_51909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1859_V_read1929_phi_phi_fu_94864_p4 = data_1859_V_read.read();
        } else {
            ap_phi_mux_data_1859_V_read1929_phi_phi_fu_94864_p4 = ap_phi_reg_pp0_iter0_data_1859_V_read1929_phi_reg_94860.read();
        }
    } else {
        ap_phi_mux_data_1859_V_read1929_phi_phi_fu_94864_p4 = ap_phi_reg_pp0_iter0_data_1859_V_read1929_phi_reg_94860.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_51909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_51909_p6 = data_1859_V_read1929_phi_reg_94860.read();
    } else {
        ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_51909_p6 = data_1859_V_read1929_rewind_reg_51905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_185_V_read255_phi_phi_fu_73102_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_185_V_read255_phi_phi_fu_73102_p4 = ap_phi_mux_data_185_V_read255_rewind_phi_fu_28473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_185_V_read255_phi_phi_fu_73102_p4 = data_185_V_read.read();
        } else {
            ap_phi_mux_data_185_V_read255_phi_phi_fu_73102_p4 = ap_phi_reg_pp0_iter0_data_185_V_read255_phi_reg_73098.read();
        }
    } else {
        ap_phi_mux_data_185_V_read255_phi_phi_fu_73102_p4 = ap_phi_reg_pp0_iter0_data_185_V_read255_phi_reg_73098.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_185_V_read255_rewind_phi_fu_28473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_185_V_read255_rewind_phi_fu_28473_p6 = data_185_V_read255_phi_reg_73098.read();
    } else {
        ap_phi_mux_data_185_V_read255_rewind_phi_fu_28473_p6 = data_185_V_read255_rewind_reg_28469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1860_V_read1930_phi_phi_fu_94877_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1860_V_read1930_phi_phi_fu_94877_p4 = ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_51923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1860_V_read1930_phi_phi_fu_94877_p4 = data_1860_V_read.read();
        } else {
            ap_phi_mux_data_1860_V_read1930_phi_phi_fu_94877_p4 = ap_phi_reg_pp0_iter0_data_1860_V_read1930_phi_reg_94873.read();
        }
    } else {
        ap_phi_mux_data_1860_V_read1930_phi_phi_fu_94877_p4 = ap_phi_reg_pp0_iter0_data_1860_V_read1930_phi_reg_94873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_51923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_51923_p6 = data_1860_V_read1930_phi_reg_94873.read();
    } else {
        ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_51923_p6 = data_1860_V_read1930_rewind_reg_51919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1861_V_read1931_phi_phi_fu_94890_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1861_V_read1931_phi_phi_fu_94890_p4 = ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_51937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1861_V_read1931_phi_phi_fu_94890_p4 = data_1861_V_read.read();
        } else {
            ap_phi_mux_data_1861_V_read1931_phi_phi_fu_94890_p4 = ap_phi_reg_pp0_iter0_data_1861_V_read1931_phi_reg_94886.read();
        }
    } else {
        ap_phi_mux_data_1861_V_read1931_phi_phi_fu_94890_p4 = ap_phi_reg_pp0_iter0_data_1861_V_read1931_phi_reg_94886.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_51937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_51937_p6 = data_1861_V_read1931_phi_reg_94886.read();
    } else {
        ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_51937_p6 = data_1861_V_read1931_rewind_reg_51933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1862_V_read1932_phi_phi_fu_94903_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1862_V_read1932_phi_phi_fu_94903_p4 = ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_51951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1862_V_read1932_phi_phi_fu_94903_p4 = data_1862_V_read.read();
        } else {
            ap_phi_mux_data_1862_V_read1932_phi_phi_fu_94903_p4 = ap_phi_reg_pp0_iter0_data_1862_V_read1932_phi_reg_94899.read();
        }
    } else {
        ap_phi_mux_data_1862_V_read1932_phi_phi_fu_94903_p4 = ap_phi_reg_pp0_iter0_data_1862_V_read1932_phi_reg_94899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_51951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_51951_p6 = data_1862_V_read1932_phi_reg_94899.read();
    } else {
        ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_51951_p6 = data_1862_V_read1932_rewind_reg_51947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1863_V_read1933_phi_phi_fu_94916_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1863_V_read1933_phi_phi_fu_94916_p4 = ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_51965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1863_V_read1933_phi_phi_fu_94916_p4 = data_1863_V_read.read();
        } else {
            ap_phi_mux_data_1863_V_read1933_phi_phi_fu_94916_p4 = ap_phi_reg_pp0_iter0_data_1863_V_read1933_phi_reg_94912.read();
        }
    } else {
        ap_phi_mux_data_1863_V_read1933_phi_phi_fu_94916_p4 = ap_phi_reg_pp0_iter0_data_1863_V_read1933_phi_reg_94912.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_51965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_51965_p6 = data_1863_V_read1933_phi_reg_94912.read();
    } else {
        ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_51965_p6 = data_1863_V_read1933_rewind_reg_51961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1864_V_read1934_phi_phi_fu_94929_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1864_V_read1934_phi_phi_fu_94929_p4 = ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_51979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1864_V_read1934_phi_phi_fu_94929_p4 = data_1864_V_read.read();
        } else {
            ap_phi_mux_data_1864_V_read1934_phi_phi_fu_94929_p4 = ap_phi_reg_pp0_iter0_data_1864_V_read1934_phi_reg_94925.read();
        }
    } else {
        ap_phi_mux_data_1864_V_read1934_phi_phi_fu_94929_p4 = ap_phi_reg_pp0_iter0_data_1864_V_read1934_phi_reg_94925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_51979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_51979_p6 = data_1864_V_read1934_phi_reg_94925.read();
    } else {
        ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_51979_p6 = data_1864_V_read1934_rewind_reg_51975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1865_V_read1935_phi_phi_fu_94942_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1865_V_read1935_phi_phi_fu_94942_p4 = ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_51993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1865_V_read1935_phi_phi_fu_94942_p4 = data_1865_V_read.read();
        } else {
            ap_phi_mux_data_1865_V_read1935_phi_phi_fu_94942_p4 = ap_phi_reg_pp0_iter0_data_1865_V_read1935_phi_reg_94938.read();
        }
    } else {
        ap_phi_mux_data_1865_V_read1935_phi_phi_fu_94942_p4 = ap_phi_reg_pp0_iter0_data_1865_V_read1935_phi_reg_94938.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_51993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_51993_p6 = data_1865_V_read1935_phi_reg_94938.read();
    } else {
        ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_51993_p6 = data_1865_V_read1935_rewind_reg_51989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1866_V_read1936_phi_phi_fu_94955_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1866_V_read1936_phi_phi_fu_94955_p4 = ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_52007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1866_V_read1936_phi_phi_fu_94955_p4 = data_1866_V_read.read();
        } else {
            ap_phi_mux_data_1866_V_read1936_phi_phi_fu_94955_p4 = ap_phi_reg_pp0_iter0_data_1866_V_read1936_phi_reg_94951.read();
        }
    } else {
        ap_phi_mux_data_1866_V_read1936_phi_phi_fu_94955_p4 = ap_phi_reg_pp0_iter0_data_1866_V_read1936_phi_reg_94951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_52007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_52007_p6 = data_1866_V_read1936_phi_reg_94951.read();
    } else {
        ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_52007_p6 = data_1866_V_read1936_rewind_reg_52003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1867_V_read1937_phi_phi_fu_94968_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1867_V_read1937_phi_phi_fu_94968_p4 = ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_52021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1867_V_read1937_phi_phi_fu_94968_p4 = data_1867_V_read.read();
        } else {
            ap_phi_mux_data_1867_V_read1937_phi_phi_fu_94968_p4 = ap_phi_reg_pp0_iter0_data_1867_V_read1937_phi_reg_94964.read();
        }
    } else {
        ap_phi_mux_data_1867_V_read1937_phi_phi_fu_94968_p4 = ap_phi_reg_pp0_iter0_data_1867_V_read1937_phi_reg_94964.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_52021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_52021_p6 = data_1867_V_read1937_phi_reg_94964.read();
    } else {
        ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_52021_p6 = data_1867_V_read1937_rewind_reg_52017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1868_V_read1938_phi_phi_fu_94981_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1868_V_read1938_phi_phi_fu_94981_p4 = ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_52035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1868_V_read1938_phi_phi_fu_94981_p4 = data_1868_V_read.read();
        } else {
            ap_phi_mux_data_1868_V_read1938_phi_phi_fu_94981_p4 = ap_phi_reg_pp0_iter0_data_1868_V_read1938_phi_reg_94977.read();
        }
    } else {
        ap_phi_mux_data_1868_V_read1938_phi_phi_fu_94981_p4 = ap_phi_reg_pp0_iter0_data_1868_V_read1938_phi_reg_94977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_52035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_52035_p6 = data_1868_V_read1938_phi_reg_94977.read();
    } else {
        ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_52035_p6 = data_1868_V_read1938_rewind_reg_52031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1869_V_read1939_phi_phi_fu_94994_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1869_V_read1939_phi_phi_fu_94994_p4 = ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_52049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1869_V_read1939_phi_phi_fu_94994_p4 = data_1869_V_read.read();
        } else {
            ap_phi_mux_data_1869_V_read1939_phi_phi_fu_94994_p4 = ap_phi_reg_pp0_iter0_data_1869_V_read1939_phi_reg_94990.read();
        }
    } else {
        ap_phi_mux_data_1869_V_read1939_phi_phi_fu_94994_p4 = ap_phi_reg_pp0_iter0_data_1869_V_read1939_phi_reg_94990.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_52049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_52049_p6 = data_1869_V_read1939_phi_reg_94990.read();
    } else {
        ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_52049_p6 = data_1869_V_read1939_rewind_reg_52045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_186_V_read256_phi_phi_fu_73115_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_186_V_read256_phi_phi_fu_73115_p4 = ap_phi_mux_data_186_V_read256_rewind_phi_fu_28487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_186_V_read256_phi_phi_fu_73115_p4 = data_186_V_read.read();
        } else {
            ap_phi_mux_data_186_V_read256_phi_phi_fu_73115_p4 = ap_phi_reg_pp0_iter0_data_186_V_read256_phi_reg_73111.read();
        }
    } else {
        ap_phi_mux_data_186_V_read256_phi_phi_fu_73115_p4 = ap_phi_reg_pp0_iter0_data_186_V_read256_phi_reg_73111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_186_V_read256_rewind_phi_fu_28487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_186_V_read256_rewind_phi_fu_28487_p6 = data_186_V_read256_phi_reg_73111.read();
    } else {
        ap_phi_mux_data_186_V_read256_rewind_phi_fu_28487_p6 = data_186_V_read256_rewind_reg_28483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1870_V_read1940_phi_phi_fu_95007_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1870_V_read1940_phi_phi_fu_95007_p4 = ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_52063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1870_V_read1940_phi_phi_fu_95007_p4 = data_1870_V_read.read();
        } else {
            ap_phi_mux_data_1870_V_read1940_phi_phi_fu_95007_p4 = ap_phi_reg_pp0_iter0_data_1870_V_read1940_phi_reg_95003.read();
        }
    } else {
        ap_phi_mux_data_1870_V_read1940_phi_phi_fu_95007_p4 = ap_phi_reg_pp0_iter0_data_1870_V_read1940_phi_reg_95003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_52063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_52063_p6 = data_1870_V_read1940_phi_reg_95003.read();
    } else {
        ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_52063_p6 = data_1870_V_read1940_rewind_reg_52059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1871_V_read1941_phi_phi_fu_95020_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1871_V_read1941_phi_phi_fu_95020_p4 = ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_52077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1871_V_read1941_phi_phi_fu_95020_p4 = data_1871_V_read.read();
        } else {
            ap_phi_mux_data_1871_V_read1941_phi_phi_fu_95020_p4 = ap_phi_reg_pp0_iter0_data_1871_V_read1941_phi_reg_95016.read();
        }
    } else {
        ap_phi_mux_data_1871_V_read1941_phi_phi_fu_95020_p4 = ap_phi_reg_pp0_iter0_data_1871_V_read1941_phi_reg_95016.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_52077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_52077_p6 = data_1871_V_read1941_phi_reg_95016.read();
    } else {
        ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_52077_p6 = data_1871_V_read1941_rewind_reg_52073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1872_V_read1942_phi_phi_fu_95033_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1872_V_read1942_phi_phi_fu_95033_p4 = ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_52091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1872_V_read1942_phi_phi_fu_95033_p4 = data_1872_V_read.read();
        } else {
            ap_phi_mux_data_1872_V_read1942_phi_phi_fu_95033_p4 = ap_phi_reg_pp0_iter0_data_1872_V_read1942_phi_reg_95029.read();
        }
    } else {
        ap_phi_mux_data_1872_V_read1942_phi_phi_fu_95033_p4 = ap_phi_reg_pp0_iter0_data_1872_V_read1942_phi_reg_95029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_52091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_52091_p6 = data_1872_V_read1942_phi_reg_95029.read();
    } else {
        ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_52091_p6 = data_1872_V_read1942_rewind_reg_52087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1873_V_read1943_phi_phi_fu_95046_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1873_V_read1943_phi_phi_fu_95046_p4 = ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_52105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1873_V_read1943_phi_phi_fu_95046_p4 = data_1873_V_read.read();
        } else {
            ap_phi_mux_data_1873_V_read1943_phi_phi_fu_95046_p4 = ap_phi_reg_pp0_iter0_data_1873_V_read1943_phi_reg_95042.read();
        }
    } else {
        ap_phi_mux_data_1873_V_read1943_phi_phi_fu_95046_p4 = ap_phi_reg_pp0_iter0_data_1873_V_read1943_phi_reg_95042.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_52105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_52105_p6 = data_1873_V_read1943_phi_reg_95042.read();
    } else {
        ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_52105_p6 = data_1873_V_read1943_rewind_reg_52101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1874_V_read1944_phi_phi_fu_95059_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1874_V_read1944_phi_phi_fu_95059_p4 = ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_52119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1874_V_read1944_phi_phi_fu_95059_p4 = data_1874_V_read.read();
        } else {
            ap_phi_mux_data_1874_V_read1944_phi_phi_fu_95059_p4 = ap_phi_reg_pp0_iter0_data_1874_V_read1944_phi_reg_95055.read();
        }
    } else {
        ap_phi_mux_data_1874_V_read1944_phi_phi_fu_95059_p4 = ap_phi_reg_pp0_iter0_data_1874_V_read1944_phi_reg_95055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_52119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_52119_p6 = data_1874_V_read1944_phi_reg_95055.read();
    } else {
        ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_52119_p6 = data_1874_V_read1944_rewind_reg_52115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1875_V_read1945_phi_phi_fu_95072_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1875_V_read1945_phi_phi_fu_95072_p4 = ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_52133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1875_V_read1945_phi_phi_fu_95072_p4 = data_1875_V_read.read();
        } else {
            ap_phi_mux_data_1875_V_read1945_phi_phi_fu_95072_p4 = ap_phi_reg_pp0_iter0_data_1875_V_read1945_phi_reg_95068.read();
        }
    } else {
        ap_phi_mux_data_1875_V_read1945_phi_phi_fu_95072_p4 = ap_phi_reg_pp0_iter0_data_1875_V_read1945_phi_reg_95068.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_52133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_52133_p6 = data_1875_V_read1945_phi_reg_95068.read();
    } else {
        ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_52133_p6 = data_1875_V_read1945_rewind_reg_52129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1876_V_read1946_phi_phi_fu_95085_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1876_V_read1946_phi_phi_fu_95085_p4 = ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_52147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1876_V_read1946_phi_phi_fu_95085_p4 = data_1876_V_read.read();
        } else {
            ap_phi_mux_data_1876_V_read1946_phi_phi_fu_95085_p4 = ap_phi_reg_pp0_iter0_data_1876_V_read1946_phi_reg_95081.read();
        }
    } else {
        ap_phi_mux_data_1876_V_read1946_phi_phi_fu_95085_p4 = ap_phi_reg_pp0_iter0_data_1876_V_read1946_phi_reg_95081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_52147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_52147_p6 = data_1876_V_read1946_phi_reg_95081.read();
    } else {
        ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_52147_p6 = data_1876_V_read1946_rewind_reg_52143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1877_V_read1947_phi_phi_fu_95098_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1877_V_read1947_phi_phi_fu_95098_p4 = ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_52161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1877_V_read1947_phi_phi_fu_95098_p4 = data_1877_V_read.read();
        } else {
            ap_phi_mux_data_1877_V_read1947_phi_phi_fu_95098_p4 = ap_phi_reg_pp0_iter0_data_1877_V_read1947_phi_reg_95094.read();
        }
    } else {
        ap_phi_mux_data_1877_V_read1947_phi_phi_fu_95098_p4 = ap_phi_reg_pp0_iter0_data_1877_V_read1947_phi_reg_95094.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_52161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_52161_p6 = data_1877_V_read1947_phi_reg_95094.read();
    } else {
        ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_52161_p6 = data_1877_V_read1947_rewind_reg_52157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1878_V_read1948_phi_phi_fu_95111_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1878_V_read1948_phi_phi_fu_95111_p4 = ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_52175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1878_V_read1948_phi_phi_fu_95111_p4 = data_1878_V_read.read();
        } else {
            ap_phi_mux_data_1878_V_read1948_phi_phi_fu_95111_p4 = ap_phi_reg_pp0_iter0_data_1878_V_read1948_phi_reg_95107.read();
        }
    } else {
        ap_phi_mux_data_1878_V_read1948_phi_phi_fu_95111_p4 = ap_phi_reg_pp0_iter0_data_1878_V_read1948_phi_reg_95107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_52175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_52175_p6 = data_1878_V_read1948_phi_reg_95107.read();
    } else {
        ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_52175_p6 = data_1878_V_read1948_rewind_reg_52171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1879_V_read1949_phi_phi_fu_95124_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1879_V_read1949_phi_phi_fu_95124_p4 = ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_52189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1879_V_read1949_phi_phi_fu_95124_p4 = data_1879_V_read.read();
        } else {
            ap_phi_mux_data_1879_V_read1949_phi_phi_fu_95124_p4 = ap_phi_reg_pp0_iter0_data_1879_V_read1949_phi_reg_95120.read();
        }
    } else {
        ap_phi_mux_data_1879_V_read1949_phi_phi_fu_95124_p4 = ap_phi_reg_pp0_iter0_data_1879_V_read1949_phi_reg_95120.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_52189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_52189_p6 = data_1879_V_read1949_phi_reg_95120.read();
    } else {
        ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_52189_p6 = data_1879_V_read1949_rewind_reg_52185.read();
    }
}

}

