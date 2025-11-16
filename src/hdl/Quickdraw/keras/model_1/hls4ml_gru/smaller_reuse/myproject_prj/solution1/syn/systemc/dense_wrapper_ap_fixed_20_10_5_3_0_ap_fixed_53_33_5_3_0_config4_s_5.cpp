#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1531_V_read1601_phi_phi_fu_93922_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1531_V_read1601_phi_phi_fu_93922_p4 = ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_50639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1531_V_read1601_phi_phi_fu_93922_p4 = data_1531_V_read.read();
        } else {
            ap_phi_mux_data_1531_V_read1601_phi_phi_fu_93922_p4 = ap_phi_reg_pp0_iter0_data_1531_V_read1601_phi_reg_93918.read();
        }
    } else {
        ap_phi_mux_data_1531_V_read1601_phi_phi_fu_93922_p4 = ap_phi_reg_pp0_iter0_data_1531_V_read1601_phi_reg_93918.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_50639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_50639_p6 = data_1531_V_read1601_phi_reg_93918.read();
    } else {
        ap_phi_mux_data_1531_V_read1601_rewind_phi_fu_50639_p6 = data_1531_V_read1601_rewind_reg_50635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1532_V_read1602_phi_phi_fu_93935_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1532_V_read1602_phi_phi_fu_93935_p4 = ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_50653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1532_V_read1602_phi_phi_fu_93935_p4 = data_1532_V_read.read();
        } else {
            ap_phi_mux_data_1532_V_read1602_phi_phi_fu_93935_p4 = ap_phi_reg_pp0_iter0_data_1532_V_read1602_phi_reg_93931.read();
        }
    } else {
        ap_phi_mux_data_1532_V_read1602_phi_phi_fu_93935_p4 = ap_phi_reg_pp0_iter0_data_1532_V_read1602_phi_reg_93931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_50653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_50653_p6 = data_1532_V_read1602_phi_reg_93931.read();
    } else {
        ap_phi_mux_data_1532_V_read1602_rewind_phi_fu_50653_p6 = data_1532_V_read1602_rewind_reg_50649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1533_V_read1603_phi_phi_fu_93948_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1533_V_read1603_phi_phi_fu_93948_p4 = ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_50667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1533_V_read1603_phi_phi_fu_93948_p4 = data_1533_V_read.read();
        } else {
            ap_phi_mux_data_1533_V_read1603_phi_phi_fu_93948_p4 = ap_phi_reg_pp0_iter0_data_1533_V_read1603_phi_reg_93944.read();
        }
    } else {
        ap_phi_mux_data_1533_V_read1603_phi_phi_fu_93948_p4 = ap_phi_reg_pp0_iter0_data_1533_V_read1603_phi_reg_93944.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_50667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_50667_p6 = data_1533_V_read1603_phi_reg_93944.read();
    } else {
        ap_phi_mux_data_1533_V_read1603_rewind_phi_fu_50667_p6 = data_1533_V_read1603_rewind_reg_50663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1534_V_read1604_phi_phi_fu_93961_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1534_V_read1604_phi_phi_fu_93961_p4 = ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_50681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1534_V_read1604_phi_phi_fu_93961_p4 = data_1534_V_read.read();
        } else {
            ap_phi_mux_data_1534_V_read1604_phi_phi_fu_93961_p4 = ap_phi_reg_pp0_iter0_data_1534_V_read1604_phi_reg_93957.read();
        }
    } else {
        ap_phi_mux_data_1534_V_read1604_phi_phi_fu_93961_p4 = ap_phi_reg_pp0_iter0_data_1534_V_read1604_phi_reg_93957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_50681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_50681_p6 = data_1534_V_read1604_phi_reg_93957.read();
    } else {
        ap_phi_mux_data_1534_V_read1604_rewind_phi_fu_50681_p6 = data_1534_V_read1604_rewind_reg_50677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1535_V_read1605_phi_phi_fu_93974_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1535_V_read1605_phi_phi_fu_93974_p4 = ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_50695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1535_V_read1605_phi_phi_fu_93974_p4 = data_1535_V_read.read();
        } else {
            ap_phi_mux_data_1535_V_read1605_phi_phi_fu_93974_p4 = ap_phi_reg_pp0_iter0_data_1535_V_read1605_phi_reg_93970.read();
        }
    } else {
        ap_phi_mux_data_1535_V_read1605_phi_phi_fu_93974_p4 = ap_phi_reg_pp0_iter0_data_1535_V_read1605_phi_reg_93970.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_50695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_50695_p6 = data_1535_V_read1605_phi_reg_93970.read();
    } else {
        ap_phi_mux_data_1535_V_read1605_rewind_phi_fu_50695_p6 = data_1535_V_read1605_rewind_reg_50691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1536_V_read1606_phi_phi_fu_93987_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1536_V_read1606_phi_phi_fu_93987_p4 = ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_50709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1536_V_read1606_phi_phi_fu_93987_p4 = data_1536_V_read.read();
        } else {
            ap_phi_mux_data_1536_V_read1606_phi_phi_fu_93987_p4 = ap_phi_reg_pp0_iter0_data_1536_V_read1606_phi_reg_93983.read();
        }
    } else {
        ap_phi_mux_data_1536_V_read1606_phi_phi_fu_93987_p4 = ap_phi_reg_pp0_iter0_data_1536_V_read1606_phi_reg_93983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_50709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_50709_p6 = data_1536_V_read1606_phi_reg_93983.read();
    } else {
        ap_phi_mux_data_1536_V_read1606_rewind_phi_fu_50709_p6 = data_1536_V_read1606_rewind_reg_50705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1537_V_read1607_phi_phi_fu_94000_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1537_V_read1607_phi_phi_fu_94000_p4 = ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_50723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1537_V_read1607_phi_phi_fu_94000_p4 = data_1537_V_read.read();
        } else {
            ap_phi_mux_data_1537_V_read1607_phi_phi_fu_94000_p4 = ap_phi_reg_pp0_iter0_data_1537_V_read1607_phi_reg_93996.read();
        }
    } else {
        ap_phi_mux_data_1537_V_read1607_phi_phi_fu_94000_p4 = ap_phi_reg_pp0_iter0_data_1537_V_read1607_phi_reg_93996.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_50723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_50723_p6 = data_1537_V_read1607_phi_reg_93996.read();
    } else {
        ap_phi_mux_data_1537_V_read1607_rewind_phi_fu_50723_p6 = data_1537_V_read1607_rewind_reg_50719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1538_V_read1608_phi_phi_fu_94013_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1538_V_read1608_phi_phi_fu_94013_p4 = ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_50737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1538_V_read1608_phi_phi_fu_94013_p4 = data_1538_V_read.read();
        } else {
            ap_phi_mux_data_1538_V_read1608_phi_phi_fu_94013_p4 = ap_phi_reg_pp0_iter0_data_1538_V_read1608_phi_reg_94009.read();
        }
    } else {
        ap_phi_mux_data_1538_V_read1608_phi_phi_fu_94013_p4 = ap_phi_reg_pp0_iter0_data_1538_V_read1608_phi_reg_94009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_50737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_50737_p6 = data_1538_V_read1608_phi_reg_94009.read();
    } else {
        ap_phi_mux_data_1538_V_read1608_rewind_phi_fu_50737_p6 = data_1538_V_read1608_rewind_reg_50733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1539_V_read1609_phi_phi_fu_94026_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1539_V_read1609_phi_phi_fu_94026_p4 = ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_50751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1539_V_read1609_phi_phi_fu_94026_p4 = data_1539_V_read.read();
        } else {
            ap_phi_mux_data_1539_V_read1609_phi_phi_fu_94026_p4 = ap_phi_reg_pp0_iter0_data_1539_V_read1609_phi_reg_94022.read();
        }
    } else {
        ap_phi_mux_data_1539_V_read1609_phi_phi_fu_94026_p4 = ap_phi_reg_pp0_iter0_data_1539_V_read1609_phi_reg_94022.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_50751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_50751_p6 = data_1539_V_read1609_phi_reg_94022.read();
    } else {
        ap_phi_mux_data_1539_V_read1609_rewind_phi_fu_50751_p6 = data_1539_V_read1609_rewind_reg_50747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_153_V_read223_phi_phi_fu_76008_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_153_V_read223_phi_phi_fu_76008_p4 = ap_phi_mux_data_153_V_read223_rewind_phi_fu_31347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_153_V_read223_phi_phi_fu_76008_p4 = data_153_V_read.read();
        } else {
            ap_phi_mux_data_153_V_read223_phi_phi_fu_76008_p4 = ap_phi_reg_pp0_iter0_data_153_V_read223_phi_reg_76004.read();
        }
    } else {
        ap_phi_mux_data_153_V_read223_phi_phi_fu_76008_p4 = ap_phi_reg_pp0_iter0_data_153_V_read223_phi_reg_76004.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_153_V_read223_rewind_phi_fu_31347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_153_V_read223_rewind_phi_fu_31347_p6 = data_153_V_read223_phi_reg_76004.read();
    } else {
        ap_phi_mux_data_153_V_read223_rewind_phi_fu_31347_p6 = data_153_V_read223_rewind_reg_31343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1540_V_read1610_phi_phi_fu_94039_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1540_V_read1610_phi_phi_fu_94039_p4 = ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_50765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1540_V_read1610_phi_phi_fu_94039_p4 = data_1540_V_read.read();
        } else {
            ap_phi_mux_data_1540_V_read1610_phi_phi_fu_94039_p4 = ap_phi_reg_pp0_iter0_data_1540_V_read1610_phi_reg_94035.read();
        }
    } else {
        ap_phi_mux_data_1540_V_read1610_phi_phi_fu_94039_p4 = ap_phi_reg_pp0_iter0_data_1540_V_read1610_phi_reg_94035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_50765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_50765_p6 = data_1540_V_read1610_phi_reg_94035.read();
    } else {
        ap_phi_mux_data_1540_V_read1610_rewind_phi_fu_50765_p6 = data_1540_V_read1610_rewind_reg_50761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1541_V_read1611_phi_phi_fu_94052_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1541_V_read1611_phi_phi_fu_94052_p4 = ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_50779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1541_V_read1611_phi_phi_fu_94052_p4 = data_1541_V_read.read();
        } else {
            ap_phi_mux_data_1541_V_read1611_phi_phi_fu_94052_p4 = ap_phi_reg_pp0_iter0_data_1541_V_read1611_phi_reg_94048.read();
        }
    } else {
        ap_phi_mux_data_1541_V_read1611_phi_phi_fu_94052_p4 = ap_phi_reg_pp0_iter0_data_1541_V_read1611_phi_reg_94048.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_50779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_50779_p6 = data_1541_V_read1611_phi_reg_94048.read();
    } else {
        ap_phi_mux_data_1541_V_read1611_rewind_phi_fu_50779_p6 = data_1541_V_read1611_rewind_reg_50775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1542_V_read1612_phi_phi_fu_94065_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1542_V_read1612_phi_phi_fu_94065_p4 = ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_50793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1542_V_read1612_phi_phi_fu_94065_p4 = data_1542_V_read.read();
        } else {
            ap_phi_mux_data_1542_V_read1612_phi_phi_fu_94065_p4 = ap_phi_reg_pp0_iter0_data_1542_V_read1612_phi_reg_94061.read();
        }
    } else {
        ap_phi_mux_data_1542_V_read1612_phi_phi_fu_94065_p4 = ap_phi_reg_pp0_iter0_data_1542_V_read1612_phi_reg_94061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_50793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_50793_p6 = data_1542_V_read1612_phi_reg_94061.read();
    } else {
        ap_phi_mux_data_1542_V_read1612_rewind_phi_fu_50793_p6 = data_1542_V_read1612_rewind_reg_50789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1543_V_read1613_phi_phi_fu_94078_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1543_V_read1613_phi_phi_fu_94078_p4 = ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_50807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1543_V_read1613_phi_phi_fu_94078_p4 = data_1543_V_read.read();
        } else {
            ap_phi_mux_data_1543_V_read1613_phi_phi_fu_94078_p4 = ap_phi_reg_pp0_iter0_data_1543_V_read1613_phi_reg_94074.read();
        }
    } else {
        ap_phi_mux_data_1543_V_read1613_phi_phi_fu_94078_p4 = ap_phi_reg_pp0_iter0_data_1543_V_read1613_phi_reg_94074.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_50807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_50807_p6 = data_1543_V_read1613_phi_reg_94074.read();
    } else {
        ap_phi_mux_data_1543_V_read1613_rewind_phi_fu_50807_p6 = data_1543_V_read1613_rewind_reg_50803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1544_V_read1614_phi_phi_fu_94091_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1544_V_read1614_phi_phi_fu_94091_p4 = ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_50821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1544_V_read1614_phi_phi_fu_94091_p4 = data_1544_V_read.read();
        } else {
            ap_phi_mux_data_1544_V_read1614_phi_phi_fu_94091_p4 = ap_phi_reg_pp0_iter0_data_1544_V_read1614_phi_reg_94087.read();
        }
    } else {
        ap_phi_mux_data_1544_V_read1614_phi_phi_fu_94091_p4 = ap_phi_reg_pp0_iter0_data_1544_V_read1614_phi_reg_94087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_50821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_50821_p6 = data_1544_V_read1614_phi_reg_94087.read();
    } else {
        ap_phi_mux_data_1544_V_read1614_rewind_phi_fu_50821_p6 = data_1544_V_read1614_rewind_reg_50817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1545_V_read1615_phi_phi_fu_94104_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1545_V_read1615_phi_phi_fu_94104_p4 = ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_50835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1545_V_read1615_phi_phi_fu_94104_p4 = data_1545_V_read.read();
        } else {
            ap_phi_mux_data_1545_V_read1615_phi_phi_fu_94104_p4 = ap_phi_reg_pp0_iter0_data_1545_V_read1615_phi_reg_94100.read();
        }
    } else {
        ap_phi_mux_data_1545_V_read1615_phi_phi_fu_94104_p4 = ap_phi_reg_pp0_iter0_data_1545_V_read1615_phi_reg_94100.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_50835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_50835_p6 = data_1545_V_read1615_phi_reg_94100.read();
    } else {
        ap_phi_mux_data_1545_V_read1615_rewind_phi_fu_50835_p6 = data_1545_V_read1615_rewind_reg_50831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1546_V_read1616_phi_phi_fu_94117_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1546_V_read1616_phi_phi_fu_94117_p4 = ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_50849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1546_V_read1616_phi_phi_fu_94117_p4 = data_1546_V_read.read();
        } else {
            ap_phi_mux_data_1546_V_read1616_phi_phi_fu_94117_p4 = ap_phi_reg_pp0_iter0_data_1546_V_read1616_phi_reg_94113.read();
        }
    } else {
        ap_phi_mux_data_1546_V_read1616_phi_phi_fu_94117_p4 = ap_phi_reg_pp0_iter0_data_1546_V_read1616_phi_reg_94113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_50849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_50849_p6 = data_1546_V_read1616_phi_reg_94113.read();
    } else {
        ap_phi_mux_data_1546_V_read1616_rewind_phi_fu_50849_p6 = data_1546_V_read1616_rewind_reg_50845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1547_V_read1617_phi_phi_fu_94130_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1547_V_read1617_phi_phi_fu_94130_p4 = ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_50863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1547_V_read1617_phi_phi_fu_94130_p4 = data_1547_V_read.read();
        } else {
            ap_phi_mux_data_1547_V_read1617_phi_phi_fu_94130_p4 = ap_phi_reg_pp0_iter0_data_1547_V_read1617_phi_reg_94126.read();
        }
    } else {
        ap_phi_mux_data_1547_V_read1617_phi_phi_fu_94130_p4 = ap_phi_reg_pp0_iter0_data_1547_V_read1617_phi_reg_94126.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_50863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_50863_p6 = data_1547_V_read1617_phi_reg_94126.read();
    } else {
        ap_phi_mux_data_1547_V_read1617_rewind_phi_fu_50863_p6 = data_1547_V_read1617_rewind_reg_50859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1548_V_read1618_phi_phi_fu_94143_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1548_V_read1618_phi_phi_fu_94143_p4 = ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_50877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1548_V_read1618_phi_phi_fu_94143_p4 = data_1548_V_read.read();
        } else {
            ap_phi_mux_data_1548_V_read1618_phi_phi_fu_94143_p4 = ap_phi_reg_pp0_iter0_data_1548_V_read1618_phi_reg_94139.read();
        }
    } else {
        ap_phi_mux_data_1548_V_read1618_phi_phi_fu_94143_p4 = ap_phi_reg_pp0_iter0_data_1548_V_read1618_phi_reg_94139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_50877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_50877_p6 = data_1548_V_read1618_phi_reg_94139.read();
    } else {
        ap_phi_mux_data_1548_V_read1618_rewind_phi_fu_50877_p6 = data_1548_V_read1618_rewind_reg_50873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1549_V_read1619_phi_phi_fu_94156_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1549_V_read1619_phi_phi_fu_94156_p4 = ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_50891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1549_V_read1619_phi_phi_fu_94156_p4 = data_1549_V_read.read();
        } else {
            ap_phi_mux_data_1549_V_read1619_phi_phi_fu_94156_p4 = ap_phi_reg_pp0_iter0_data_1549_V_read1619_phi_reg_94152.read();
        }
    } else {
        ap_phi_mux_data_1549_V_read1619_phi_phi_fu_94156_p4 = ap_phi_reg_pp0_iter0_data_1549_V_read1619_phi_reg_94152.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_50891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_50891_p6 = data_1549_V_read1619_phi_reg_94152.read();
    } else {
        ap_phi_mux_data_1549_V_read1619_rewind_phi_fu_50891_p6 = data_1549_V_read1619_rewind_reg_50887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_154_V_read224_phi_phi_fu_76021_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_154_V_read224_phi_phi_fu_76021_p4 = ap_phi_mux_data_154_V_read224_rewind_phi_fu_31361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_154_V_read224_phi_phi_fu_76021_p4 = data_154_V_read.read();
        } else {
            ap_phi_mux_data_154_V_read224_phi_phi_fu_76021_p4 = ap_phi_reg_pp0_iter0_data_154_V_read224_phi_reg_76017.read();
        }
    } else {
        ap_phi_mux_data_154_V_read224_phi_phi_fu_76021_p4 = ap_phi_reg_pp0_iter0_data_154_V_read224_phi_reg_76017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_154_V_read224_rewind_phi_fu_31361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_154_V_read224_rewind_phi_fu_31361_p6 = data_154_V_read224_phi_reg_76017.read();
    } else {
        ap_phi_mux_data_154_V_read224_rewind_phi_fu_31361_p6 = data_154_V_read224_rewind_reg_31357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1550_V_read1620_phi_phi_fu_94169_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1550_V_read1620_phi_phi_fu_94169_p4 = ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_50905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1550_V_read1620_phi_phi_fu_94169_p4 = data_1550_V_read.read();
        } else {
            ap_phi_mux_data_1550_V_read1620_phi_phi_fu_94169_p4 = ap_phi_reg_pp0_iter0_data_1550_V_read1620_phi_reg_94165.read();
        }
    } else {
        ap_phi_mux_data_1550_V_read1620_phi_phi_fu_94169_p4 = ap_phi_reg_pp0_iter0_data_1550_V_read1620_phi_reg_94165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_50905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_50905_p6 = data_1550_V_read1620_phi_reg_94165.read();
    } else {
        ap_phi_mux_data_1550_V_read1620_rewind_phi_fu_50905_p6 = data_1550_V_read1620_rewind_reg_50901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1551_V_read1621_phi_phi_fu_94182_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1551_V_read1621_phi_phi_fu_94182_p4 = ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_50919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1551_V_read1621_phi_phi_fu_94182_p4 = data_1551_V_read.read();
        } else {
            ap_phi_mux_data_1551_V_read1621_phi_phi_fu_94182_p4 = ap_phi_reg_pp0_iter0_data_1551_V_read1621_phi_reg_94178.read();
        }
    } else {
        ap_phi_mux_data_1551_V_read1621_phi_phi_fu_94182_p4 = ap_phi_reg_pp0_iter0_data_1551_V_read1621_phi_reg_94178.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_50919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_50919_p6 = data_1551_V_read1621_phi_reg_94178.read();
    } else {
        ap_phi_mux_data_1551_V_read1621_rewind_phi_fu_50919_p6 = data_1551_V_read1621_rewind_reg_50915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1552_V_read1622_phi_phi_fu_94195_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1552_V_read1622_phi_phi_fu_94195_p4 = ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_50933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1552_V_read1622_phi_phi_fu_94195_p4 = data_1552_V_read.read();
        } else {
            ap_phi_mux_data_1552_V_read1622_phi_phi_fu_94195_p4 = ap_phi_reg_pp0_iter0_data_1552_V_read1622_phi_reg_94191.read();
        }
    } else {
        ap_phi_mux_data_1552_V_read1622_phi_phi_fu_94195_p4 = ap_phi_reg_pp0_iter0_data_1552_V_read1622_phi_reg_94191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_50933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_50933_p6 = data_1552_V_read1622_phi_reg_94191.read();
    } else {
        ap_phi_mux_data_1552_V_read1622_rewind_phi_fu_50933_p6 = data_1552_V_read1622_rewind_reg_50929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1553_V_read1623_phi_phi_fu_94208_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1553_V_read1623_phi_phi_fu_94208_p4 = ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_50947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1553_V_read1623_phi_phi_fu_94208_p4 = data_1553_V_read.read();
        } else {
            ap_phi_mux_data_1553_V_read1623_phi_phi_fu_94208_p4 = ap_phi_reg_pp0_iter0_data_1553_V_read1623_phi_reg_94204.read();
        }
    } else {
        ap_phi_mux_data_1553_V_read1623_phi_phi_fu_94208_p4 = ap_phi_reg_pp0_iter0_data_1553_V_read1623_phi_reg_94204.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_50947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_50947_p6 = data_1553_V_read1623_phi_reg_94204.read();
    } else {
        ap_phi_mux_data_1553_V_read1623_rewind_phi_fu_50947_p6 = data_1553_V_read1623_rewind_reg_50943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1554_V_read1624_phi_phi_fu_94221_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1554_V_read1624_phi_phi_fu_94221_p4 = ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_50961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1554_V_read1624_phi_phi_fu_94221_p4 = data_1554_V_read.read();
        } else {
            ap_phi_mux_data_1554_V_read1624_phi_phi_fu_94221_p4 = ap_phi_reg_pp0_iter0_data_1554_V_read1624_phi_reg_94217.read();
        }
    } else {
        ap_phi_mux_data_1554_V_read1624_phi_phi_fu_94221_p4 = ap_phi_reg_pp0_iter0_data_1554_V_read1624_phi_reg_94217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_50961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_50961_p6 = data_1554_V_read1624_phi_reg_94217.read();
    } else {
        ap_phi_mux_data_1554_V_read1624_rewind_phi_fu_50961_p6 = data_1554_V_read1624_rewind_reg_50957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1555_V_read1625_phi_phi_fu_94234_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1555_V_read1625_phi_phi_fu_94234_p4 = ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_50975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1555_V_read1625_phi_phi_fu_94234_p4 = data_1555_V_read.read();
        } else {
            ap_phi_mux_data_1555_V_read1625_phi_phi_fu_94234_p4 = ap_phi_reg_pp0_iter0_data_1555_V_read1625_phi_reg_94230.read();
        }
    } else {
        ap_phi_mux_data_1555_V_read1625_phi_phi_fu_94234_p4 = ap_phi_reg_pp0_iter0_data_1555_V_read1625_phi_reg_94230.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_50975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_50975_p6 = data_1555_V_read1625_phi_reg_94230.read();
    } else {
        ap_phi_mux_data_1555_V_read1625_rewind_phi_fu_50975_p6 = data_1555_V_read1625_rewind_reg_50971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1556_V_read1626_phi_phi_fu_94247_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1556_V_read1626_phi_phi_fu_94247_p4 = ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_50989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1556_V_read1626_phi_phi_fu_94247_p4 = data_1556_V_read.read();
        } else {
            ap_phi_mux_data_1556_V_read1626_phi_phi_fu_94247_p4 = ap_phi_reg_pp0_iter0_data_1556_V_read1626_phi_reg_94243.read();
        }
    } else {
        ap_phi_mux_data_1556_V_read1626_phi_phi_fu_94247_p4 = ap_phi_reg_pp0_iter0_data_1556_V_read1626_phi_reg_94243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_50989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_50989_p6 = data_1556_V_read1626_phi_reg_94243.read();
    } else {
        ap_phi_mux_data_1556_V_read1626_rewind_phi_fu_50989_p6 = data_1556_V_read1626_rewind_reg_50985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1557_V_read1627_phi_phi_fu_94260_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1557_V_read1627_phi_phi_fu_94260_p4 = ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_51003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1557_V_read1627_phi_phi_fu_94260_p4 = data_1557_V_read.read();
        } else {
            ap_phi_mux_data_1557_V_read1627_phi_phi_fu_94260_p4 = ap_phi_reg_pp0_iter0_data_1557_V_read1627_phi_reg_94256.read();
        }
    } else {
        ap_phi_mux_data_1557_V_read1627_phi_phi_fu_94260_p4 = ap_phi_reg_pp0_iter0_data_1557_V_read1627_phi_reg_94256.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_51003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_51003_p6 = data_1557_V_read1627_phi_reg_94256.read();
    } else {
        ap_phi_mux_data_1557_V_read1627_rewind_phi_fu_51003_p6 = data_1557_V_read1627_rewind_reg_50999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1558_V_read1628_phi_phi_fu_94273_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1558_V_read1628_phi_phi_fu_94273_p4 = ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_51017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1558_V_read1628_phi_phi_fu_94273_p4 = data_1558_V_read.read();
        } else {
            ap_phi_mux_data_1558_V_read1628_phi_phi_fu_94273_p4 = ap_phi_reg_pp0_iter0_data_1558_V_read1628_phi_reg_94269.read();
        }
    } else {
        ap_phi_mux_data_1558_V_read1628_phi_phi_fu_94273_p4 = ap_phi_reg_pp0_iter0_data_1558_V_read1628_phi_reg_94269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_51017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_51017_p6 = data_1558_V_read1628_phi_reg_94269.read();
    } else {
        ap_phi_mux_data_1558_V_read1628_rewind_phi_fu_51017_p6 = data_1558_V_read1628_rewind_reg_51013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1559_V_read1629_phi_phi_fu_94286_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1559_V_read1629_phi_phi_fu_94286_p4 = ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_51031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1559_V_read1629_phi_phi_fu_94286_p4 = data_1559_V_read.read();
        } else {
            ap_phi_mux_data_1559_V_read1629_phi_phi_fu_94286_p4 = ap_phi_reg_pp0_iter0_data_1559_V_read1629_phi_reg_94282.read();
        }
    } else {
        ap_phi_mux_data_1559_V_read1629_phi_phi_fu_94286_p4 = ap_phi_reg_pp0_iter0_data_1559_V_read1629_phi_reg_94282.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_51031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_51031_p6 = data_1559_V_read1629_phi_reg_94282.read();
    } else {
        ap_phi_mux_data_1559_V_read1629_rewind_phi_fu_51031_p6 = data_1559_V_read1629_rewind_reg_51027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_155_V_read225_phi_phi_fu_76034_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_155_V_read225_phi_phi_fu_76034_p4 = ap_phi_mux_data_155_V_read225_rewind_phi_fu_31375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_155_V_read225_phi_phi_fu_76034_p4 = data_155_V_read.read();
        } else {
            ap_phi_mux_data_155_V_read225_phi_phi_fu_76034_p4 = ap_phi_reg_pp0_iter0_data_155_V_read225_phi_reg_76030.read();
        }
    } else {
        ap_phi_mux_data_155_V_read225_phi_phi_fu_76034_p4 = ap_phi_reg_pp0_iter0_data_155_V_read225_phi_reg_76030.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_155_V_read225_rewind_phi_fu_31375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_155_V_read225_rewind_phi_fu_31375_p6 = data_155_V_read225_phi_reg_76030.read();
    } else {
        ap_phi_mux_data_155_V_read225_rewind_phi_fu_31375_p6 = data_155_V_read225_rewind_reg_31371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1560_V_read1630_phi_phi_fu_94299_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1560_V_read1630_phi_phi_fu_94299_p4 = ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_51045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1560_V_read1630_phi_phi_fu_94299_p4 = data_1560_V_read.read();
        } else {
            ap_phi_mux_data_1560_V_read1630_phi_phi_fu_94299_p4 = ap_phi_reg_pp0_iter0_data_1560_V_read1630_phi_reg_94295.read();
        }
    } else {
        ap_phi_mux_data_1560_V_read1630_phi_phi_fu_94299_p4 = ap_phi_reg_pp0_iter0_data_1560_V_read1630_phi_reg_94295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_51045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_51045_p6 = data_1560_V_read1630_phi_reg_94295.read();
    } else {
        ap_phi_mux_data_1560_V_read1630_rewind_phi_fu_51045_p6 = data_1560_V_read1630_rewind_reg_51041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1561_V_read1631_phi_phi_fu_94312_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1561_V_read1631_phi_phi_fu_94312_p4 = ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_51059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1561_V_read1631_phi_phi_fu_94312_p4 = data_1561_V_read.read();
        } else {
            ap_phi_mux_data_1561_V_read1631_phi_phi_fu_94312_p4 = ap_phi_reg_pp0_iter0_data_1561_V_read1631_phi_reg_94308.read();
        }
    } else {
        ap_phi_mux_data_1561_V_read1631_phi_phi_fu_94312_p4 = ap_phi_reg_pp0_iter0_data_1561_V_read1631_phi_reg_94308.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_51059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_51059_p6 = data_1561_V_read1631_phi_reg_94308.read();
    } else {
        ap_phi_mux_data_1561_V_read1631_rewind_phi_fu_51059_p6 = data_1561_V_read1631_rewind_reg_51055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1562_V_read1632_phi_phi_fu_94325_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1562_V_read1632_phi_phi_fu_94325_p4 = ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_51073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1562_V_read1632_phi_phi_fu_94325_p4 = data_1562_V_read.read();
        } else {
            ap_phi_mux_data_1562_V_read1632_phi_phi_fu_94325_p4 = ap_phi_reg_pp0_iter0_data_1562_V_read1632_phi_reg_94321.read();
        }
    } else {
        ap_phi_mux_data_1562_V_read1632_phi_phi_fu_94325_p4 = ap_phi_reg_pp0_iter0_data_1562_V_read1632_phi_reg_94321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_51073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_51073_p6 = data_1562_V_read1632_phi_reg_94321.read();
    } else {
        ap_phi_mux_data_1562_V_read1632_rewind_phi_fu_51073_p6 = data_1562_V_read1632_rewind_reg_51069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1563_V_read1633_phi_phi_fu_94338_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1563_V_read1633_phi_phi_fu_94338_p4 = ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_51087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1563_V_read1633_phi_phi_fu_94338_p4 = data_1563_V_read.read();
        } else {
            ap_phi_mux_data_1563_V_read1633_phi_phi_fu_94338_p4 = ap_phi_reg_pp0_iter0_data_1563_V_read1633_phi_reg_94334.read();
        }
    } else {
        ap_phi_mux_data_1563_V_read1633_phi_phi_fu_94338_p4 = ap_phi_reg_pp0_iter0_data_1563_V_read1633_phi_reg_94334.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_51087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_51087_p6 = data_1563_V_read1633_phi_reg_94334.read();
    } else {
        ap_phi_mux_data_1563_V_read1633_rewind_phi_fu_51087_p6 = data_1563_V_read1633_rewind_reg_51083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1564_V_read1634_phi_phi_fu_94351_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1564_V_read1634_phi_phi_fu_94351_p4 = ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_51101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1564_V_read1634_phi_phi_fu_94351_p4 = data_1564_V_read.read();
        } else {
            ap_phi_mux_data_1564_V_read1634_phi_phi_fu_94351_p4 = ap_phi_reg_pp0_iter0_data_1564_V_read1634_phi_reg_94347.read();
        }
    } else {
        ap_phi_mux_data_1564_V_read1634_phi_phi_fu_94351_p4 = ap_phi_reg_pp0_iter0_data_1564_V_read1634_phi_reg_94347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_51101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_51101_p6 = data_1564_V_read1634_phi_reg_94347.read();
    } else {
        ap_phi_mux_data_1564_V_read1634_rewind_phi_fu_51101_p6 = data_1564_V_read1634_rewind_reg_51097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1565_V_read1635_phi_phi_fu_94364_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1565_V_read1635_phi_phi_fu_94364_p4 = ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_51115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1565_V_read1635_phi_phi_fu_94364_p4 = data_1565_V_read.read();
        } else {
            ap_phi_mux_data_1565_V_read1635_phi_phi_fu_94364_p4 = ap_phi_reg_pp0_iter0_data_1565_V_read1635_phi_reg_94360.read();
        }
    } else {
        ap_phi_mux_data_1565_V_read1635_phi_phi_fu_94364_p4 = ap_phi_reg_pp0_iter0_data_1565_V_read1635_phi_reg_94360.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_51115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_51115_p6 = data_1565_V_read1635_phi_reg_94360.read();
    } else {
        ap_phi_mux_data_1565_V_read1635_rewind_phi_fu_51115_p6 = data_1565_V_read1635_rewind_reg_51111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1566_V_read1636_phi_phi_fu_94377_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1566_V_read1636_phi_phi_fu_94377_p4 = ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_51129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1566_V_read1636_phi_phi_fu_94377_p4 = data_1566_V_read.read();
        } else {
            ap_phi_mux_data_1566_V_read1636_phi_phi_fu_94377_p4 = ap_phi_reg_pp0_iter0_data_1566_V_read1636_phi_reg_94373.read();
        }
    } else {
        ap_phi_mux_data_1566_V_read1636_phi_phi_fu_94377_p4 = ap_phi_reg_pp0_iter0_data_1566_V_read1636_phi_reg_94373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_51129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_51129_p6 = data_1566_V_read1636_phi_reg_94373.read();
    } else {
        ap_phi_mux_data_1566_V_read1636_rewind_phi_fu_51129_p6 = data_1566_V_read1636_rewind_reg_51125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1567_V_read1637_phi_phi_fu_94390_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1567_V_read1637_phi_phi_fu_94390_p4 = ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_51143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1567_V_read1637_phi_phi_fu_94390_p4 = data_1567_V_read.read();
        } else {
            ap_phi_mux_data_1567_V_read1637_phi_phi_fu_94390_p4 = ap_phi_reg_pp0_iter0_data_1567_V_read1637_phi_reg_94386.read();
        }
    } else {
        ap_phi_mux_data_1567_V_read1637_phi_phi_fu_94390_p4 = ap_phi_reg_pp0_iter0_data_1567_V_read1637_phi_reg_94386.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_51143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_51143_p6 = data_1567_V_read1637_phi_reg_94386.read();
    } else {
        ap_phi_mux_data_1567_V_read1637_rewind_phi_fu_51143_p6 = data_1567_V_read1637_rewind_reg_51139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1568_V_read1638_phi_phi_fu_94403_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1568_V_read1638_phi_phi_fu_94403_p4 = ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_51157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1568_V_read1638_phi_phi_fu_94403_p4 = data_1568_V_read.read();
        } else {
            ap_phi_mux_data_1568_V_read1638_phi_phi_fu_94403_p4 = ap_phi_reg_pp0_iter0_data_1568_V_read1638_phi_reg_94399.read();
        }
    } else {
        ap_phi_mux_data_1568_V_read1638_phi_phi_fu_94403_p4 = ap_phi_reg_pp0_iter0_data_1568_V_read1638_phi_reg_94399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_51157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_51157_p6 = data_1568_V_read1638_phi_reg_94399.read();
    } else {
        ap_phi_mux_data_1568_V_read1638_rewind_phi_fu_51157_p6 = data_1568_V_read1638_rewind_reg_51153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1569_V_read1639_phi_phi_fu_94416_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1569_V_read1639_phi_phi_fu_94416_p4 = ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_51171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1569_V_read1639_phi_phi_fu_94416_p4 = data_1569_V_read.read();
        } else {
            ap_phi_mux_data_1569_V_read1639_phi_phi_fu_94416_p4 = ap_phi_reg_pp0_iter0_data_1569_V_read1639_phi_reg_94412.read();
        }
    } else {
        ap_phi_mux_data_1569_V_read1639_phi_phi_fu_94416_p4 = ap_phi_reg_pp0_iter0_data_1569_V_read1639_phi_reg_94412.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_51171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_51171_p6 = data_1569_V_read1639_phi_reg_94412.read();
    } else {
        ap_phi_mux_data_1569_V_read1639_rewind_phi_fu_51171_p6 = data_1569_V_read1639_rewind_reg_51167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_156_V_read226_phi_phi_fu_76047_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_156_V_read226_phi_phi_fu_76047_p4 = ap_phi_mux_data_156_V_read226_rewind_phi_fu_31389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_156_V_read226_phi_phi_fu_76047_p4 = data_156_V_read.read();
        } else {
            ap_phi_mux_data_156_V_read226_phi_phi_fu_76047_p4 = ap_phi_reg_pp0_iter0_data_156_V_read226_phi_reg_76043.read();
        }
    } else {
        ap_phi_mux_data_156_V_read226_phi_phi_fu_76047_p4 = ap_phi_reg_pp0_iter0_data_156_V_read226_phi_reg_76043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_156_V_read226_rewind_phi_fu_31389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_156_V_read226_rewind_phi_fu_31389_p6 = data_156_V_read226_phi_reg_76043.read();
    } else {
        ap_phi_mux_data_156_V_read226_rewind_phi_fu_31389_p6 = data_156_V_read226_rewind_reg_31385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1570_V_read1640_phi_phi_fu_94429_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1570_V_read1640_phi_phi_fu_94429_p4 = ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_51185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1570_V_read1640_phi_phi_fu_94429_p4 = data_1570_V_read.read();
        } else {
            ap_phi_mux_data_1570_V_read1640_phi_phi_fu_94429_p4 = ap_phi_reg_pp0_iter0_data_1570_V_read1640_phi_reg_94425.read();
        }
    } else {
        ap_phi_mux_data_1570_V_read1640_phi_phi_fu_94429_p4 = ap_phi_reg_pp0_iter0_data_1570_V_read1640_phi_reg_94425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_51185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_51185_p6 = data_1570_V_read1640_phi_reg_94425.read();
    } else {
        ap_phi_mux_data_1570_V_read1640_rewind_phi_fu_51185_p6 = data_1570_V_read1640_rewind_reg_51181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1571_V_read1641_phi_phi_fu_94442_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1571_V_read1641_phi_phi_fu_94442_p4 = ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_51199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1571_V_read1641_phi_phi_fu_94442_p4 = data_1571_V_read.read();
        } else {
            ap_phi_mux_data_1571_V_read1641_phi_phi_fu_94442_p4 = ap_phi_reg_pp0_iter0_data_1571_V_read1641_phi_reg_94438.read();
        }
    } else {
        ap_phi_mux_data_1571_V_read1641_phi_phi_fu_94442_p4 = ap_phi_reg_pp0_iter0_data_1571_V_read1641_phi_reg_94438.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_51199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_51199_p6 = data_1571_V_read1641_phi_reg_94438.read();
    } else {
        ap_phi_mux_data_1571_V_read1641_rewind_phi_fu_51199_p6 = data_1571_V_read1641_rewind_reg_51195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1572_V_read1642_phi_phi_fu_94455_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1572_V_read1642_phi_phi_fu_94455_p4 = ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_51213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1572_V_read1642_phi_phi_fu_94455_p4 = data_1572_V_read.read();
        } else {
            ap_phi_mux_data_1572_V_read1642_phi_phi_fu_94455_p4 = ap_phi_reg_pp0_iter0_data_1572_V_read1642_phi_reg_94451.read();
        }
    } else {
        ap_phi_mux_data_1572_V_read1642_phi_phi_fu_94455_p4 = ap_phi_reg_pp0_iter0_data_1572_V_read1642_phi_reg_94451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_51213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_51213_p6 = data_1572_V_read1642_phi_reg_94451.read();
    } else {
        ap_phi_mux_data_1572_V_read1642_rewind_phi_fu_51213_p6 = data_1572_V_read1642_rewind_reg_51209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1573_V_read1643_phi_phi_fu_94468_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1573_V_read1643_phi_phi_fu_94468_p4 = ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_51227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1573_V_read1643_phi_phi_fu_94468_p4 = data_1573_V_read.read();
        } else {
            ap_phi_mux_data_1573_V_read1643_phi_phi_fu_94468_p4 = ap_phi_reg_pp0_iter0_data_1573_V_read1643_phi_reg_94464.read();
        }
    } else {
        ap_phi_mux_data_1573_V_read1643_phi_phi_fu_94468_p4 = ap_phi_reg_pp0_iter0_data_1573_V_read1643_phi_reg_94464.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_51227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_51227_p6 = data_1573_V_read1643_phi_reg_94464.read();
    } else {
        ap_phi_mux_data_1573_V_read1643_rewind_phi_fu_51227_p6 = data_1573_V_read1643_rewind_reg_51223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1574_V_read1644_phi_phi_fu_94481_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1574_V_read1644_phi_phi_fu_94481_p4 = ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_51241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1574_V_read1644_phi_phi_fu_94481_p4 = data_1574_V_read.read();
        } else {
            ap_phi_mux_data_1574_V_read1644_phi_phi_fu_94481_p4 = ap_phi_reg_pp0_iter0_data_1574_V_read1644_phi_reg_94477.read();
        }
    } else {
        ap_phi_mux_data_1574_V_read1644_phi_phi_fu_94481_p4 = ap_phi_reg_pp0_iter0_data_1574_V_read1644_phi_reg_94477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_51241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_51241_p6 = data_1574_V_read1644_phi_reg_94477.read();
    } else {
        ap_phi_mux_data_1574_V_read1644_rewind_phi_fu_51241_p6 = data_1574_V_read1644_rewind_reg_51237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1575_V_read1645_phi_phi_fu_94494_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1575_V_read1645_phi_phi_fu_94494_p4 = ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_51255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1575_V_read1645_phi_phi_fu_94494_p4 = data_1575_V_read.read();
        } else {
            ap_phi_mux_data_1575_V_read1645_phi_phi_fu_94494_p4 = ap_phi_reg_pp0_iter0_data_1575_V_read1645_phi_reg_94490.read();
        }
    } else {
        ap_phi_mux_data_1575_V_read1645_phi_phi_fu_94494_p4 = ap_phi_reg_pp0_iter0_data_1575_V_read1645_phi_reg_94490.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_51255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_51255_p6 = data_1575_V_read1645_phi_reg_94490.read();
    } else {
        ap_phi_mux_data_1575_V_read1645_rewind_phi_fu_51255_p6 = data_1575_V_read1645_rewind_reg_51251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1576_V_read1646_phi_phi_fu_94507_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1576_V_read1646_phi_phi_fu_94507_p4 = ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_51269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1576_V_read1646_phi_phi_fu_94507_p4 = data_1576_V_read.read();
        } else {
            ap_phi_mux_data_1576_V_read1646_phi_phi_fu_94507_p4 = ap_phi_reg_pp0_iter0_data_1576_V_read1646_phi_reg_94503.read();
        }
    } else {
        ap_phi_mux_data_1576_V_read1646_phi_phi_fu_94507_p4 = ap_phi_reg_pp0_iter0_data_1576_V_read1646_phi_reg_94503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_51269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_51269_p6 = data_1576_V_read1646_phi_reg_94503.read();
    } else {
        ap_phi_mux_data_1576_V_read1646_rewind_phi_fu_51269_p6 = data_1576_V_read1646_rewind_reg_51265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1577_V_read1647_phi_phi_fu_94520_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1577_V_read1647_phi_phi_fu_94520_p4 = ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_51283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1577_V_read1647_phi_phi_fu_94520_p4 = data_1577_V_read.read();
        } else {
            ap_phi_mux_data_1577_V_read1647_phi_phi_fu_94520_p4 = ap_phi_reg_pp0_iter0_data_1577_V_read1647_phi_reg_94516.read();
        }
    } else {
        ap_phi_mux_data_1577_V_read1647_phi_phi_fu_94520_p4 = ap_phi_reg_pp0_iter0_data_1577_V_read1647_phi_reg_94516.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_51283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_51283_p6 = data_1577_V_read1647_phi_reg_94516.read();
    } else {
        ap_phi_mux_data_1577_V_read1647_rewind_phi_fu_51283_p6 = data_1577_V_read1647_rewind_reg_51279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1578_V_read1648_phi_phi_fu_94533_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1578_V_read1648_phi_phi_fu_94533_p4 = ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_51297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1578_V_read1648_phi_phi_fu_94533_p4 = data_1578_V_read.read();
        } else {
            ap_phi_mux_data_1578_V_read1648_phi_phi_fu_94533_p4 = ap_phi_reg_pp0_iter0_data_1578_V_read1648_phi_reg_94529.read();
        }
    } else {
        ap_phi_mux_data_1578_V_read1648_phi_phi_fu_94533_p4 = ap_phi_reg_pp0_iter0_data_1578_V_read1648_phi_reg_94529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_51297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_51297_p6 = data_1578_V_read1648_phi_reg_94529.read();
    } else {
        ap_phi_mux_data_1578_V_read1648_rewind_phi_fu_51297_p6 = data_1578_V_read1648_rewind_reg_51293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1579_V_read1649_phi_phi_fu_94546_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1579_V_read1649_phi_phi_fu_94546_p4 = ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_51311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1579_V_read1649_phi_phi_fu_94546_p4 = data_1579_V_read.read();
        } else {
            ap_phi_mux_data_1579_V_read1649_phi_phi_fu_94546_p4 = ap_phi_reg_pp0_iter0_data_1579_V_read1649_phi_reg_94542.read();
        }
    } else {
        ap_phi_mux_data_1579_V_read1649_phi_phi_fu_94546_p4 = ap_phi_reg_pp0_iter0_data_1579_V_read1649_phi_reg_94542.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_51311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_51311_p6 = data_1579_V_read1649_phi_reg_94542.read();
    } else {
        ap_phi_mux_data_1579_V_read1649_rewind_phi_fu_51311_p6 = data_1579_V_read1649_rewind_reg_51307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_157_V_read227_phi_phi_fu_76060_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_157_V_read227_phi_phi_fu_76060_p4 = ap_phi_mux_data_157_V_read227_rewind_phi_fu_31403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_157_V_read227_phi_phi_fu_76060_p4 = data_157_V_read.read();
        } else {
            ap_phi_mux_data_157_V_read227_phi_phi_fu_76060_p4 = ap_phi_reg_pp0_iter0_data_157_V_read227_phi_reg_76056.read();
        }
    } else {
        ap_phi_mux_data_157_V_read227_phi_phi_fu_76060_p4 = ap_phi_reg_pp0_iter0_data_157_V_read227_phi_reg_76056.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_157_V_read227_rewind_phi_fu_31403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_157_V_read227_rewind_phi_fu_31403_p6 = data_157_V_read227_phi_reg_76056.read();
    } else {
        ap_phi_mux_data_157_V_read227_rewind_phi_fu_31403_p6 = data_157_V_read227_rewind_reg_31399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1580_V_read1650_phi_phi_fu_94559_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1580_V_read1650_phi_phi_fu_94559_p4 = ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_51325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1580_V_read1650_phi_phi_fu_94559_p4 = data_1580_V_read.read();
        } else {
            ap_phi_mux_data_1580_V_read1650_phi_phi_fu_94559_p4 = ap_phi_reg_pp0_iter0_data_1580_V_read1650_phi_reg_94555.read();
        }
    } else {
        ap_phi_mux_data_1580_V_read1650_phi_phi_fu_94559_p4 = ap_phi_reg_pp0_iter0_data_1580_V_read1650_phi_reg_94555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_51325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_51325_p6 = data_1580_V_read1650_phi_reg_94555.read();
    } else {
        ap_phi_mux_data_1580_V_read1650_rewind_phi_fu_51325_p6 = data_1580_V_read1650_rewind_reg_51321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1581_V_read1651_phi_phi_fu_94572_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1581_V_read1651_phi_phi_fu_94572_p4 = ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_51339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1581_V_read1651_phi_phi_fu_94572_p4 = data_1581_V_read.read();
        } else {
            ap_phi_mux_data_1581_V_read1651_phi_phi_fu_94572_p4 = ap_phi_reg_pp0_iter0_data_1581_V_read1651_phi_reg_94568.read();
        }
    } else {
        ap_phi_mux_data_1581_V_read1651_phi_phi_fu_94572_p4 = ap_phi_reg_pp0_iter0_data_1581_V_read1651_phi_reg_94568.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_51339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_51339_p6 = data_1581_V_read1651_phi_reg_94568.read();
    } else {
        ap_phi_mux_data_1581_V_read1651_rewind_phi_fu_51339_p6 = data_1581_V_read1651_rewind_reg_51335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1582_V_read1652_phi_phi_fu_94585_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1582_V_read1652_phi_phi_fu_94585_p4 = ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_51353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1582_V_read1652_phi_phi_fu_94585_p4 = data_1582_V_read.read();
        } else {
            ap_phi_mux_data_1582_V_read1652_phi_phi_fu_94585_p4 = ap_phi_reg_pp0_iter0_data_1582_V_read1652_phi_reg_94581.read();
        }
    } else {
        ap_phi_mux_data_1582_V_read1652_phi_phi_fu_94585_p4 = ap_phi_reg_pp0_iter0_data_1582_V_read1652_phi_reg_94581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_51353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_51353_p6 = data_1582_V_read1652_phi_reg_94581.read();
    } else {
        ap_phi_mux_data_1582_V_read1652_rewind_phi_fu_51353_p6 = data_1582_V_read1652_rewind_reg_51349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1583_V_read1653_phi_phi_fu_94598_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1583_V_read1653_phi_phi_fu_94598_p4 = ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_51367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1583_V_read1653_phi_phi_fu_94598_p4 = data_1583_V_read.read();
        } else {
            ap_phi_mux_data_1583_V_read1653_phi_phi_fu_94598_p4 = ap_phi_reg_pp0_iter0_data_1583_V_read1653_phi_reg_94594.read();
        }
    } else {
        ap_phi_mux_data_1583_V_read1653_phi_phi_fu_94598_p4 = ap_phi_reg_pp0_iter0_data_1583_V_read1653_phi_reg_94594.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_51367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_51367_p6 = data_1583_V_read1653_phi_reg_94594.read();
    } else {
        ap_phi_mux_data_1583_V_read1653_rewind_phi_fu_51367_p6 = data_1583_V_read1653_rewind_reg_51363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1584_V_read1654_phi_phi_fu_94611_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1584_V_read1654_phi_phi_fu_94611_p4 = ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_51381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1584_V_read1654_phi_phi_fu_94611_p4 = data_1584_V_read.read();
        } else {
            ap_phi_mux_data_1584_V_read1654_phi_phi_fu_94611_p4 = ap_phi_reg_pp0_iter0_data_1584_V_read1654_phi_reg_94607.read();
        }
    } else {
        ap_phi_mux_data_1584_V_read1654_phi_phi_fu_94611_p4 = ap_phi_reg_pp0_iter0_data_1584_V_read1654_phi_reg_94607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_51381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_51381_p6 = data_1584_V_read1654_phi_reg_94607.read();
    } else {
        ap_phi_mux_data_1584_V_read1654_rewind_phi_fu_51381_p6 = data_1584_V_read1654_rewind_reg_51377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1585_V_read1655_phi_phi_fu_94624_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1585_V_read1655_phi_phi_fu_94624_p4 = ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_51395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1585_V_read1655_phi_phi_fu_94624_p4 = data_1585_V_read.read();
        } else {
            ap_phi_mux_data_1585_V_read1655_phi_phi_fu_94624_p4 = ap_phi_reg_pp0_iter0_data_1585_V_read1655_phi_reg_94620.read();
        }
    } else {
        ap_phi_mux_data_1585_V_read1655_phi_phi_fu_94624_p4 = ap_phi_reg_pp0_iter0_data_1585_V_read1655_phi_reg_94620.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_51395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_51395_p6 = data_1585_V_read1655_phi_reg_94620.read();
    } else {
        ap_phi_mux_data_1585_V_read1655_rewind_phi_fu_51395_p6 = data_1585_V_read1655_rewind_reg_51391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1586_V_read1656_phi_phi_fu_94637_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1586_V_read1656_phi_phi_fu_94637_p4 = ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_51409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1586_V_read1656_phi_phi_fu_94637_p4 = data_1586_V_read.read();
        } else {
            ap_phi_mux_data_1586_V_read1656_phi_phi_fu_94637_p4 = ap_phi_reg_pp0_iter0_data_1586_V_read1656_phi_reg_94633.read();
        }
    } else {
        ap_phi_mux_data_1586_V_read1656_phi_phi_fu_94637_p4 = ap_phi_reg_pp0_iter0_data_1586_V_read1656_phi_reg_94633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_51409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_51409_p6 = data_1586_V_read1656_phi_reg_94633.read();
    } else {
        ap_phi_mux_data_1586_V_read1656_rewind_phi_fu_51409_p6 = data_1586_V_read1656_rewind_reg_51405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1587_V_read1657_phi_phi_fu_94650_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1587_V_read1657_phi_phi_fu_94650_p4 = ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_51423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1587_V_read1657_phi_phi_fu_94650_p4 = data_1587_V_read.read();
        } else {
            ap_phi_mux_data_1587_V_read1657_phi_phi_fu_94650_p4 = ap_phi_reg_pp0_iter0_data_1587_V_read1657_phi_reg_94646.read();
        }
    } else {
        ap_phi_mux_data_1587_V_read1657_phi_phi_fu_94650_p4 = ap_phi_reg_pp0_iter0_data_1587_V_read1657_phi_reg_94646.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_51423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_51423_p6 = data_1587_V_read1657_phi_reg_94646.read();
    } else {
        ap_phi_mux_data_1587_V_read1657_rewind_phi_fu_51423_p6 = data_1587_V_read1657_rewind_reg_51419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1588_V_read1658_phi_phi_fu_94663_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1588_V_read1658_phi_phi_fu_94663_p4 = ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_51437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1588_V_read1658_phi_phi_fu_94663_p4 = data_1588_V_read.read();
        } else {
            ap_phi_mux_data_1588_V_read1658_phi_phi_fu_94663_p4 = ap_phi_reg_pp0_iter0_data_1588_V_read1658_phi_reg_94659.read();
        }
    } else {
        ap_phi_mux_data_1588_V_read1658_phi_phi_fu_94663_p4 = ap_phi_reg_pp0_iter0_data_1588_V_read1658_phi_reg_94659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_51437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_51437_p6 = data_1588_V_read1658_phi_reg_94659.read();
    } else {
        ap_phi_mux_data_1588_V_read1658_rewind_phi_fu_51437_p6 = data_1588_V_read1658_rewind_reg_51433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1589_V_read1659_phi_phi_fu_94676_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1589_V_read1659_phi_phi_fu_94676_p4 = ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_51451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1589_V_read1659_phi_phi_fu_94676_p4 = data_1589_V_read.read();
        } else {
            ap_phi_mux_data_1589_V_read1659_phi_phi_fu_94676_p4 = ap_phi_reg_pp0_iter0_data_1589_V_read1659_phi_reg_94672.read();
        }
    } else {
        ap_phi_mux_data_1589_V_read1659_phi_phi_fu_94676_p4 = ap_phi_reg_pp0_iter0_data_1589_V_read1659_phi_reg_94672.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_51451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_51451_p6 = data_1589_V_read1659_phi_reg_94672.read();
    } else {
        ap_phi_mux_data_1589_V_read1659_rewind_phi_fu_51451_p6 = data_1589_V_read1659_rewind_reg_51447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_158_V_read228_phi_phi_fu_76073_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_158_V_read228_phi_phi_fu_76073_p4 = ap_phi_mux_data_158_V_read228_rewind_phi_fu_31417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_158_V_read228_phi_phi_fu_76073_p4 = data_158_V_read.read();
        } else {
            ap_phi_mux_data_158_V_read228_phi_phi_fu_76073_p4 = ap_phi_reg_pp0_iter0_data_158_V_read228_phi_reg_76069.read();
        }
    } else {
        ap_phi_mux_data_158_V_read228_phi_phi_fu_76073_p4 = ap_phi_reg_pp0_iter0_data_158_V_read228_phi_reg_76069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_158_V_read228_rewind_phi_fu_31417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_158_V_read228_rewind_phi_fu_31417_p6 = data_158_V_read228_phi_reg_76069.read();
    } else {
        ap_phi_mux_data_158_V_read228_rewind_phi_fu_31417_p6 = data_158_V_read228_rewind_reg_31413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1590_V_read1660_phi_phi_fu_94689_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1590_V_read1660_phi_phi_fu_94689_p4 = ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_51465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1590_V_read1660_phi_phi_fu_94689_p4 = data_1590_V_read.read();
        } else {
            ap_phi_mux_data_1590_V_read1660_phi_phi_fu_94689_p4 = ap_phi_reg_pp0_iter0_data_1590_V_read1660_phi_reg_94685.read();
        }
    } else {
        ap_phi_mux_data_1590_V_read1660_phi_phi_fu_94689_p4 = ap_phi_reg_pp0_iter0_data_1590_V_read1660_phi_reg_94685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_51465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_51465_p6 = data_1590_V_read1660_phi_reg_94685.read();
    } else {
        ap_phi_mux_data_1590_V_read1660_rewind_phi_fu_51465_p6 = data_1590_V_read1660_rewind_reg_51461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1591_V_read1661_phi_phi_fu_94702_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1591_V_read1661_phi_phi_fu_94702_p4 = ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_51479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1591_V_read1661_phi_phi_fu_94702_p4 = data_1591_V_read.read();
        } else {
            ap_phi_mux_data_1591_V_read1661_phi_phi_fu_94702_p4 = ap_phi_reg_pp0_iter0_data_1591_V_read1661_phi_reg_94698.read();
        }
    } else {
        ap_phi_mux_data_1591_V_read1661_phi_phi_fu_94702_p4 = ap_phi_reg_pp0_iter0_data_1591_V_read1661_phi_reg_94698.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_51479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_51479_p6 = data_1591_V_read1661_phi_reg_94698.read();
    } else {
        ap_phi_mux_data_1591_V_read1661_rewind_phi_fu_51479_p6 = data_1591_V_read1661_rewind_reg_51475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1592_V_read1662_phi_phi_fu_94715_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1592_V_read1662_phi_phi_fu_94715_p4 = ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_51493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1592_V_read1662_phi_phi_fu_94715_p4 = data_1592_V_read.read();
        } else {
            ap_phi_mux_data_1592_V_read1662_phi_phi_fu_94715_p4 = ap_phi_reg_pp0_iter0_data_1592_V_read1662_phi_reg_94711.read();
        }
    } else {
        ap_phi_mux_data_1592_V_read1662_phi_phi_fu_94715_p4 = ap_phi_reg_pp0_iter0_data_1592_V_read1662_phi_reg_94711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_51493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_51493_p6 = data_1592_V_read1662_phi_reg_94711.read();
    } else {
        ap_phi_mux_data_1592_V_read1662_rewind_phi_fu_51493_p6 = data_1592_V_read1662_rewind_reg_51489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1593_V_read1663_phi_phi_fu_94728_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1593_V_read1663_phi_phi_fu_94728_p4 = ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_51507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1593_V_read1663_phi_phi_fu_94728_p4 = data_1593_V_read.read();
        } else {
            ap_phi_mux_data_1593_V_read1663_phi_phi_fu_94728_p4 = ap_phi_reg_pp0_iter0_data_1593_V_read1663_phi_reg_94724.read();
        }
    } else {
        ap_phi_mux_data_1593_V_read1663_phi_phi_fu_94728_p4 = ap_phi_reg_pp0_iter0_data_1593_V_read1663_phi_reg_94724.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_51507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_51507_p6 = data_1593_V_read1663_phi_reg_94724.read();
    } else {
        ap_phi_mux_data_1593_V_read1663_rewind_phi_fu_51507_p6 = data_1593_V_read1663_rewind_reg_51503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1594_V_read1664_phi_phi_fu_94741_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1594_V_read1664_phi_phi_fu_94741_p4 = ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_51521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1594_V_read1664_phi_phi_fu_94741_p4 = data_1594_V_read.read();
        } else {
            ap_phi_mux_data_1594_V_read1664_phi_phi_fu_94741_p4 = ap_phi_reg_pp0_iter0_data_1594_V_read1664_phi_reg_94737.read();
        }
    } else {
        ap_phi_mux_data_1594_V_read1664_phi_phi_fu_94741_p4 = ap_phi_reg_pp0_iter0_data_1594_V_read1664_phi_reg_94737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_51521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_51521_p6 = data_1594_V_read1664_phi_reg_94737.read();
    } else {
        ap_phi_mux_data_1594_V_read1664_rewind_phi_fu_51521_p6 = data_1594_V_read1664_rewind_reg_51517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1595_V_read1665_phi_phi_fu_94754_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1595_V_read1665_phi_phi_fu_94754_p4 = ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_51535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1595_V_read1665_phi_phi_fu_94754_p4 = data_1595_V_read.read();
        } else {
            ap_phi_mux_data_1595_V_read1665_phi_phi_fu_94754_p4 = ap_phi_reg_pp0_iter0_data_1595_V_read1665_phi_reg_94750.read();
        }
    } else {
        ap_phi_mux_data_1595_V_read1665_phi_phi_fu_94754_p4 = ap_phi_reg_pp0_iter0_data_1595_V_read1665_phi_reg_94750.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_51535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_51535_p6 = data_1595_V_read1665_phi_reg_94750.read();
    } else {
        ap_phi_mux_data_1595_V_read1665_rewind_phi_fu_51535_p6 = data_1595_V_read1665_rewind_reg_51531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1596_V_read1666_phi_phi_fu_94767_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1596_V_read1666_phi_phi_fu_94767_p4 = ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_51549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1596_V_read1666_phi_phi_fu_94767_p4 = data_1596_V_read.read();
        } else {
            ap_phi_mux_data_1596_V_read1666_phi_phi_fu_94767_p4 = ap_phi_reg_pp0_iter0_data_1596_V_read1666_phi_reg_94763.read();
        }
    } else {
        ap_phi_mux_data_1596_V_read1666_phi_phi_fu_94767_p4 = ap_phi_reg_pp0_iter0_data_1596_V_read1666_phi_reg_94763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_51549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_51549_p6 = data_1596_V_read1666_phi_reg_94763.read();
    } else {
        ap_phi_mux_data_1596_V_read1666_rewind_phi_fu_51549_p6 = data_1596_V_read1666_rewind_reg_51545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1597_V_read1667_phi_phi_fu_94780_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1597_V_read1667_phi_phi_fu_94780_p4 = ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_51563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1597_V_read1667_phi_phi_fu_94780_p4 = data_1597_V_read.read();
        } else {
            ap_phi_mux_data_1597_V_read1667_phi_phi_fu_94780_p4 = ap_phi_reg_pp0_iter0_data_1597_V_read1667_phi_reg_94776.read();
        }
    } else {
        ap_phi_mux_data_1597_V_read1667_phi_phi_fu_94780_p4 = ap_phi_reg_pp0_iter0_data_1597_V_read1667_phi_reg_94776.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_51563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_51563_p6 = data_1597_V_read1667_phi_reg_94776.read();
    } else {
        ap_phi_mux_data_1597_V_read1667_rewind_phi_fu_51563_p6 = data_1597_V_read1667_rewind_reg_51559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1598_V_read1668_phi_phi_fu_94793_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1598_V_read1668_phi_phi_fu_94793_p4 = ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_51577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1598_V_read1668_phi_phi_fu_94793_p4 = data_1598_V_read.read();
        } else {
            ap_phi_mux_data_1598_V_read1668_phi_phi_fu_94793_p4 = ap_phi_reg_pp0_iter0_data_1598_V_read1668_phi_reg_94789.read();
        }
    } else {
        ap_phi_mux_data_1598_V_read1668_phi_phi_fu_94793_p4 = ap_phi_reg_pp0_iter0_data_1598_V_read1668_phi_reg_94789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_51577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_51577_p6 = data_1598_V_read1668_phi_reg_94789.read();
    } else {
        ap_phi_mux_data_1598_V_read1668_rewind_phi_fu_51577_p6 = data_1598_V_read1668_rewind_reg_51573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1599_V_read1669_phi_phi_fu_94806_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1599_V_read1669_phi_phi_fu_94806_p4 = ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_51591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1599_V_read1669_phi_phi_fu_94806_p4 = data_1599_V_read.read();
        } else {
            ap_phi_mux_data_1599_V_read1669_phi_phi_fu_94806_p4 = ap_phi_reg_pp0_iter0_data_1599_V_read1669_phi_reg_94802.read();
        }
    } else {
        ap_phi_mux_data_1599_V_read1669_phi_phi_fu_94806_p4 = ap_phi_reg_pp0_iter0_data_1599_V_read1669_phi_reg_94802.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_51591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_51591_p6 = data_1599_V_read1669_phi_reg_94802.read();
    } else {
        ap_phi_mux_data_1599_V_read1669_rewind_phi_fu_51591_p6 = data_1599_V_read1669_rewind_reg_51587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_159_V_read229_phi_phi_fu_76086_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_159_V_read229_phi_phi_fu_76086_p4 = ap_phi_mux_data_159_V_read229_rewind_phi_fu_31431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_159_V_read229_phi_phi_fu_76086_p4 = data_159_V_read.read();
        } else {
            ap_phi_mux_data_159_V_read229_phi_phi_fu_76086_p4 = ap_phi_reg_pp0_iter0_data_159_V_read229_phi_reg_76082.read();
        }
    } else {
        ap_phi_mux_data_159_V_read229_phi_phi_fu_76086_p4 = ap_phi_reg_pp0_iter0_data_159_V_read229_phi_reg_76082.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_159_V_read229_rewind_phi_fu_31431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_159_V_read229_rewind_phi_fu_31431_p6 = data_159_V_read229_phi_reg_76082.read();
    } else {
        ap_phi_mux_data_159_V_read229_rewind_phi_fu_31431_p6 = data_159_V_read229_rewind_reg_31427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_15_V_read85_phi_phi_fu_74214_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_15_V_read85_phi_phi_fu_74214_p4 = ap_phi_mux_data_15_V_read85_rewind_phi_fu_29415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_15_V_read85_phi_phi_fu_74214_p4 = data_15_V_read.read();
        } else {
            ap_phi_mux_data_15_V_read85_phi_phi_fu_74214_p4 = ap_phi_reg_pp0_iter0_data_15_V_read85_phi_reg_74210.read();
        }
    } else {
        ap_phi_mux_data_15_V_read85_phi_phi_fu_74214_p4 = ap_phi_reg_pp0_iter0_data_15_V_read85_phi_reg_74210.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_15_V_read85_rewind_phi_fu_29415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_15_V_read85_rewind_phi_fu_29415_p6 = data_15_V_read85_phi_reg_74210.read();
    } else {
        ap_phi_mux_data_15_V_read85_rewind_phi_fu_29415_p6 = data_15_V_read85_rewind_reg_29411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1600_V_read1670_phi_phi_fu_94819_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1600_V_read1670_phi_phi_fu_94819_p4 = ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_51605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1600_V_read1670_phi_phi_fu_94819_p4 = data_1600_V_read.read();
        } else {
            ap_phi_mux_data_1600_V_read1670_phi_phi_fu_94819_p4 = ap_phi_reg_pp0_iter0_data_1600_V_read1670_phi_reg_94815.read();
        }
    } else {
        ap_phi_mux_data_1600_V_read1670_phi_phi_fu_94819_p4 = ap_phi_reg_pp0_iter0_data_1600_V_read1670_phi_reg_94815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_51605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_51605_p6 = data_1600_V_read1670_phi_reg_94815.read();
    } else {
        ap_phi_mux_data_1600_V_read1670_rewind_phi_fu_51605_p6 = data_1600_V_read1670_rewind_reg_51601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1601_V_read1671_phi_phi_fu_94832_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1601_V_read1671_phi_phi_fu_94832_p4 = ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_51619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1601_V_read1671_phi_phi_fu_94832_p4 = data_1601_V_read.read();
        } else {
            ap_phi_mux_data_1601_V_read1671_phi_phi_fu_94832_p4 = ap_phi_reg_pp0_iter0_data_1601_V_read1671_phi_reg_94828.read();
        }
    } else {
        ap_phi_mux_data_1601_V_read1671_phi_phi_fu_94832_p4 = ap_phi_reg_pp0_iter0_data_1601_V_read1671_phi_reg_94828.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_51619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_51619_p6 = data_1601_V_read1671_phi_reg_94828.read();
    } else {
        ap_phi_mux_data_1601_V_read1671_rewind_phi_fu_51619_p6 = data_1601_V_read1671_rewind_reg_51615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1602_V_read1672_phi_phi_fu_94845_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1602_V_read1672_phi_phi_fu_94845_p4 = ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_51633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1602_V_read1672_phi_phi_fu_94845_p4 = data_1602_V_read.read();
        } else {
            ap_phi_mux_data_1602_V_read1672_phi_phi_fu_94845_p4 = ap_phi_reg_pp0_iter0_data_1602_V_read1672_phi_reg_94841.read();
        }
    } else {
        ap_phi_mux_data_1602_V_read1672_phi_phi_fu_94845_p4 = ap_phi_reg_pp0_iter0_data_1602_V_read1672_phi_reg_94841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_51633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_51633_p6 = data_1602_V_read1672_phi_reg_94841.read();
    } else {
        ap_phi_mux_data_1602_V_read1672_rewind_phi_fu_51633_p6 = data_1602_V_read1672_rewind_reg_51629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1603_V_read1673_phi_phi_fu_94858_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1603_V_read1673_phi_phi_fu_94858_p4 = ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_51647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1603_V_read1673_phi_phi_fu_94858_p4 = data_1603_V_read.read();
        } else {
            ap_phi_mux_data_1603_V_read1673_phi_phi_fu_94858_p4 = ap_phi_reg_pp0_iter0_data_1603_V_read1673_phi_reg_94854.read();
        }
    } else {
        ap_phi_mux_data_1603_V_read1673_phi_phi_fu_94858_p4 = ap_phi_reg_pp0_iter0_data_1603_V_read1673_phi_reg_94854.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_51647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_51647_p6 = data_1603_V_read1673_phi_reg_94854.read();
    } else {
        ap_phi_mux_data_1603_V_read1673_rewind_phi_fu_51647_p6 = data_1603_V_read1673_rewind_reg_51643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1604_V_read1674_phi_phi_fu_94871_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1604_V_read1674_phi_phi_fu_94871_p4 = ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_51661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1604_V_read1674_phi_phi_fu_94871_p4 = data_1604_V_read.read();
        } else {
            ap_phi_mux_data_1604_V_read1674_phi_phi_fu_94871_p4 = ap_phi_reg_pp0_iter0_data_1604_V_read1674_phi_reg_94867.read();
        }
    } else {
        ap_phi_mux_data_1604_V_read1674_phi_phi_fu_94871_p4 = ap_phi_reg_pp0_iter0_data_1604_V_read1674_phi_reg_94867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_51661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_51661_p6 = data_1604_V_read1674_phi_reg_94867.read();
    } else {
        ap_phi_mux_data_1604_V_read1674_rewind_phi_fu_51661_p6 = data_1604_V_read1674_rewind_reg_51657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1605_V_read1675_phi_phi_fu_94884_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1605_V_read1675_phi_phi_fu_94884_p4 = ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_51675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1605_V_read1675_phi_phi_fu_94884_p4 = data_1605_V_read.read();
        } else {
            ap_phi_mux_data_1605_V_read1675_phi_phi_fu_94884_p4 = ap_phi_reg_pp0_iter0_data_1605_V_read1675_phi_reg_94880.read();
        }
    } else {
        ap_phi_mux_data_1605_V_read1675_phi_phi_fu_94884_p4 = ap_phi_reg_pp0_iter0_data_1605_V_read1675_phi_reg_94880.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_51675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_51675_p6 = data_1605_V_read1675_phi_reg_94880.read();
    } else {
        ap_phi_mux_data_1605_V_read1675_rewind_phi_fu_51675_p6 = data_1605_V_read1675_rewind_reg_51671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1606_V_read1676_phi_phi_fu_94897_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1606_V_read1676_phi_phi_fu_94897_p4 = ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_51689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1606_V_read1676_phi_phi_fu_94897_p4 = data_1606_V_read.read();
        } else {
            ap_phi_mux_data_1606_V_read1676_phi_phi_fu_94897_p4 = ap_phi_reg_pp0_iter0_data_1606_V_read1676_phi_reg_94893.read();
        }
    } else {
        ap_phi_mux_data_1606_V_read1676_phi_phi_fu_94897_p4 = ap_phi_reg_pp0_iter0_data_1606_V_read1676_phi_reg_94893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_51689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_51689_p6 = data_1606_V_read1676_phi_reg_94893.read();
    } else {
        ap_phi_mux_data_1606_V_read1676_rewind_phi_fu_51689_p6 = data_1606_V_read1676_rewind_reg_51685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1607_V_read1677_phi_phi_fu_94910_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1607_V_read1677_phi_phi_fu_94910_p4 = ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_51703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1607_V_read1677_phi_phi_fu_94910_p4 = data_1607_V_read.read();
        } else {
            ap_phi_mux_data_1607_V_read1677_phi_phi_fu_94910_p4 = ap_phi_reg_pp0_iter0_data_1607_V_read1677_phi_reg_94906.read();
        }
    } else {
        ap_phi_mux_data_1607_V_read1677_phi_phi_fu_94910_p4 = ap_phi_reg_pp0_iter0_data_1607_V_read1677_phi_reg_94906.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_51703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_51703_p6 = data_1607_V_read1677_phi_reg_94906.read();
    } else {
        ap_phi_mux_data_1607_V_read1677_rewind_phi_fu_51703_p6 = data_1607_V_read1677_rewind_reg_51699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1608_V_read1678_phi_phi_fu_94923_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1608_V_read1678_phi_phi_fu_94923_p4 = ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_51717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1608_V_read1678_phi_phi_fu_94923_p4 = data_1608_V_read.read();
        } else {
            ap_phi_mux_data_1608_V_read1678_phi_phi_fu_94923_p4 = ap_phi_reg_pp0_iter0_data_1608_V_read1678_phi_reg_94919.read();
        }
    } else {
        ap_phi_mux_data_1608_V_read1678_phi_phi_fu_94923_p4 = ap_phi_reg_pp0_iter0_data_1608_V_read1678_phi_reg_94919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_51717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_51717_p6 = data_1608_V_read1678_phi_reg_94919.read();
    } else {
        ap_phi_mux_data_1608_V_read1678_rewind_phi_fu_51717_p6 = data_1608_V_read1678_rewind_reg_51713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1609_V_read1679_phi_phi_fu_94936_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1609_V_read1679_phi_phi_fu_94936_p4 = ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_51731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1609_V_read1679_phi_phi_fu_94936_p4 = data_1609_V_read.read();
        } else {
            ap_phi_mux_data_1609_V_read1679_phi_phi_fu_94936_p4 = ap_phi_reg_pp0_iter0_data_1609_V_read1679_phi_reg_94932.read();
        }
    } else {
        ap_phi_mux_data_1609_V_read1679_phi_phi_fu_94936_p4 = ap_phi_reg_pp0_iter0_data_1609_V_read1679_phi_reg_94932.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_51731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_51731_p6 = data_1609_V_read1679_phi_reg_94932.read();
    } else {
        ap_phi_mux_data_1609_V_read1679_rewind_phi_fu_51731_p6 = data_1609_V_read1679_rewind_reg_51727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_160_V_read230_phi_phi_fu_76099_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_160_V_read230_phi_phi_fu_76099_p4 = ap_phi_mux_data_160_V_read230_rewind_phi_fu_31445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_160_V_read230_phi_phi_fu_76099_p4 = data_160_V_read.read();
        } else {
            ap_phi_mux_data_160_V_read230_phi_phi_fu_76099_p4 = ap_phi_reg_pp0_iter0_data_160_V_read230_phi_reg_76095.read();
        }
    } else {
        ap_phi_mux_data_160_V_read230_phi_phi_fu_76099_p4 = ap_phi_reg_pp0_iter0_data_160_V_read230_phi_reg_76095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_160_V_read230_rewind_phi_fu_31445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_160_V_read230_rewind_phi_fu_31445_p6 = data_160_V_read230_phi_reg_76095.read();
    } else {
        ap_phi_mux_data_160_V_read230_rewind_phi_fu_31445_p6 = data_160_V_read230_rewind_reg_31441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1610_V_read1680_phi_phi_fu_94949_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1610_V_read1680_phi_phi_fu_94949_p4 = ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_51745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1610_V_read1680_phi_phi_fu_94949_p4 = data_1610_V_read.read();
        } else {
            ap_phi_mux_data_1610_V_read1680_phi_phi_fu_94949_p4 = ap_phi_reg_pp0_iter0_data_1610_V_read1680_phi_reg_94945.read();
        }
    } else {
        ap_phi_mux_data_1610_V_read1680_phi_phi_fu_94949_p4 = ap_phi_reg_pp0_iter0_data_1610_V_read1680_phi_reg_94945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_51745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_51745_p6 = data_1610_V_read1680_phi_reg_94945.read();
    } else {
        ap_phi_mux_data_1610_V_read1680_rewind_phi_fu_51745_p6 = data_1610_V_read1680_rewind_reg_51741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1611_V_read1681_phi_phi_fu_94962_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1611_V_read1681_phi_phi_fu_94962_p4 = ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_51759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1611_V_read1681_phi_phi_fu_94962_p4 = data_1611_V_read.read();
        } else {
            ap_phi_mux_data_1611_V_read1681_phi_phi_fu_94962_p4 = ap_phi_reg_pp0_iter0_data_1611_V_read1681_phi_reg_94958.read();
        }
    } else {
        ap_phi_mux_data_1611_V_read1681_phi_phi_fu_94962_p4 = ap_phi_reg_pp0_iter0_data_1611_V_read1681_phi_reg_94958.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_51759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_51759_p6 = data_1611_V_read1681_phi_reg_94958.read();
    } else {
        ap_phi_mux_data_1611_V_read1681_rewind_phi_fu_51759_p6 = data_1611_V_read1681_rewind_reg_51755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1612_V_read1682_phi_phi_fu_94975_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1612_V_read1682_phi_phi_fu_94975_p4 = ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_51773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1612_V_read1682_phi_phi_fu_94975_p4 = data_1612_V_read.read();
        } else {
            ap_phi_mux_data_1612_V_read1682_phi_phi_fu_94975_p4 = ap_phi_reg_pp0_iter0_data_1612_V_read1682_phi_reg_94971.read();
        }
    } else {
        ap_phi_mux_data_1612_V_read1682_phi_phi_fu_94975_p4 = ap_phi_reg_pp0_iter0_data_1612_V_read1682_phi_reg_94971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_51773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_51773_p6 = data_1612_V_read1682_phi_reg_94971.read();
    } else {
        ap_phi_mux_data_1612_V_read1682_rewind_phi_fu_51773_p6 = data_1612_V_read1682_rewind_reg_51769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1613_V_read1683_phi_phi_fu_94988_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1613_V_read1683_phi_phi_fu_94988_p4 = ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_51787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1613_V_read1683_phi_phi_fu_94988_p4 = data_1613_V_read.read();
        } else {
            ap_phi_mux_data_1613_V_read1683_phi_phi_fu_94988_p4 = ap_phi_reg_pp0_iter0_data_1613_V_read1683_phi_reg_94984.read();
        }
    } else {
        ap_phi_mux_data_1613_V_read1683_phi_phi_fu_94988_p4 = ap_phi_reg_pp0_iter0_data_1613_V_read1683_phi_reg_94984.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_51787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_51787_p6 = data_1613_V_read1683_phi_reg_94984.read();
    } else {
        ap_phi_mux_data_1613_V_read1683_rewind_phi_fu_51787_p6 = data_1613_V_read1683_rewind_reg_51783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1614_V_read1684_phi_phi_fu_95001_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1614_V_read1684_phi_phi_fu_95001_p4 = ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_51801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1614_V_read1684_phi_phi_fu_95001_p4 = data_1614_V_read.read();
        } else {
            ap_phi_mux_data_1614_V_read1684_phi_phi_fu_95001_p4 = ap_phi_reg_pp0_iter0_data_1614_V_read1684_phi_reg_94997.read();
        }
    } else {
        ap_phi_mux_data_1614_V_read1684_phi_phi_fu_95001_p4 = ap_phi_reg_pp0_iter0_data_1614_V_read1684_phi_reg_94997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_51801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_51801_p6 = data_1614_V_read1684_phi_reg_94997.read();
    } else {
        ap_phi_mux_data_1614_V_read1684_rewind_phi_fu_51801_p6 = data_1614_V_read1684_rewind_reg_51797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1615_V_read1685_phi_phi_fu_95014_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1615_V_read1685_phi_phi_fu_95014_p4 = ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_51815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1615_V_read1685_phi_phi_fu_95014_p4 = data_1615_V_read.read();
        } else {
            ap_phi_mux_data_1615_V_read1685_phi_phi_fu_95014_p4 = ap_phi_reg_pp0_iter0_data_1615_V_read1685_phi_reg_95010.read();
        }
    } else {
        ap_phi_mux_data_1615_V_read1685_phi_phi_fu_95014_p4 = ap_phi_reg_pp0_iter0_data_1615_V_read1685_phi_reg_95010.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_51815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_51815_p6 = data_1615_V_read1685_phi_reg_95010.read();
    } else {
        ap_phi_mux_data_1615_V_read1685_rewind_phi_fu_51815_p6 = data_1615_V_read1685_rewind_reg_51811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1616_V_read1686_phi_phi_fu_95027_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1616_V_read1686_phi_phi_fu_95027_p4 = ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_51829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1616_V_read1686_phi_phi_fu_95027_p4 = data_1616_V_read.read();
        } else {
            ap_phi_mux_data_1616_V_read1686_phi_phi_fu_95027_p4 = ap_phi_reg_pp0_iter0_data_1616_V_read1686_phi_reg_95023.read();
        }
    } else {
        ap_phi_mux_data_1616_V_read1686_phi_phi_fu_95027_p4 = ap_phi_reg_pp0_iter0_data_1616_V_read1686_phi_reg_95023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_51829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_51829_p6 = data_1616_V_read1686_phi_reg_95023.read();
    } else {
        ap_phi_mux_data_1616_V_read1686_rewind_phi_fu_51829_p6 = data_1616_V_read1686_rewind_reg_51825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1617_V_read1687_phi_phi_fu_95040_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1617_V_read1687_phi_phi_fu_95040_p4 = ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_51843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1617_V_read1687_phi_phi_fu_95040_p4 = data_1617_V_read.read();
        } else {
            ap_phi_mux_data_1617_V_read1687_phi_phi_fu_95040_p4 = ap_phi_reg_pp0_iter0_data_1617_V_read1687_phi_reg_95036.read();
        }
    } else {
        ap_phi_mux_data_1617_V_read1687_phi_phi_fu_95040_p4 = ap_phi_reg_pp0_iter0_data_1617_V_read1687_phi_reg_95036.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_51843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_51843_p6 = data_1617_V_read1687_phi_reg_95036.read();
    } else {
        ap_phi_mux_data_1617_V_read1687_rewind_phi_fu_51843_p6 = data_1617_V_read1687_rewind_reg_51839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1618_V_read1688_phi_phi_fu_95053_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1618_V_read1688_phi_phi_fu_95053_p4 = ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_51857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1618_V_read1688_phi_phi_fu_95053_p4 = data_1618_V_read.read();
        } else {
            ap_phi_mux_data_1618_V_read1688_phi_phi_fu_95053_p4 = ap_phi_reg_pp0_iter0_data_1618_V_read1688_phi_reg_95049.read();
        }
    } else {
        ap_phi_mux_data_1618_V_read1688_phi_phi_fu_95053_p4 = ap_phi_reg_pp0_iter0_data_1618_V_read1688_phi_reg_95049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_51857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_51857_p6 = data_1618_V_read1688_phi_reg_95049.read();
    } else {
        ap_phi_mux_data_1618_V_read1688_rewind_phi_fu_51857_p6 = data_1618_V_read1688_rewind_reg_51853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1619_V_read1689_phi_phi_fu_95066_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1619_V_read1689_phi_phi_fu_95066_p4 = ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_51871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1619_V_read1689_phi_phi_fu_95066_p4 = data_1619_V_read.read();
        } else {
            ap_phi_mux_data_1619_V_read1689_phi_phi_fu_95066_p4 = ap_phi_reg_pp0_iter0_data_1619_V_read1689_phi_reg_95062.read();
        }
    } else {
        ap_phi_mux_data_1619_V_read1689_phi_phi_fu_95066_p4 = ap_phi_reg_pp0_iter0_data_1619_V_read1689_phi_reg_95062.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_51871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_51871_p6 = data_1619_V_read1689_phi_reg_95062.read();
    } else {
        ap_phi_mux_data_1619_V_read1689_rewind_phi_fu_51871_p6 = data_1619_V_read1689_rewind_reg_51867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_161_V_read231_phi_phi_fu_76112_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_161_V_read231_phi_phi_fu_76112_p4 = ap_phi_mux_data_161_V_read231_rewind_phi_fu_31459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_161_V_read231_phi_phi_fu_76112_p4 = data_161_V_read.read();
        } else {
            ap_phi_mux_data_161_V_read231_phi_phi_fu_76112_p4 = ap_phi_reg_pp0_iter0_data_161_V_read231_phi_reg_76108.read();
        }
    } else {
        ap_phi_mux_data_161_V_read231_phi_phi_fu_76112_p4 = ap_phi_reg_pp0_iter0_data_161_V_read231_phi_reg_76108.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_161_V_read231_rewind_phi_fu_31459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_161_V_read231_rewind_phi_fu_31459_p6 = data_161_V_read231_phi_reg_76108.read();
    } else {
        ap_phi_mux_data_161_V_read231_rewind_phi_fu_31459_p6 = data_161_V_read231_rewind_reg_31455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1620_V_read1690_phi_phi_fu_95079_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1620_V_read1690_phi_phi_fu_95079_p4 = ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_51885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1620_V_read1690_phi_phi_fu_95079_p4 = data_1620_V_read.read();
        } else {
            ap_phi_mux_data_1620_V_read1690_phi_phi_fu_95079_p4 = ap_phi_reg_pp0_iter0_data_1620_V_read1690_phi_reg_95075.read();
        }
    } else {
        ap_phi_mux_data_1620_V_read1690_phi_phi_fu_95079_p4 = ap_phi_reg_pp0_iter0_data_1620_V_read1690_phi_reg_95075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_51885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_51885_p6 = data_1620_V_read1690_phi_reg_95075.read();
    } else {
        ap_phi_mux_data_1620_V_read1690_rewind_phi_fu_51885_p6 = data_1620_V_read1690_rewind_reg_51881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1621_V_read1691_phi_phi_fu_95092_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1621_V_read1691_phi_phi_fu_95092_p4 = ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_51899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1621_V_read1691_phi_phi_fu_95092_p4 = data_1621_V_read.read();
        } else {
            ap_phi_mux_data_1621_V_read1691_phi_phi_fu_95092_p4 = ap_phi_reg_pp0_iter0_data_1621_V_read1691_phi_reg_95088.read();
        }
    } else {
        ap_phi_mux_data_1621_V_read1691_phi_phi_fu_95092_p4 = ap_phi_reg_pp0_iter0_data_1621_V_read1691_phi_reg_95088.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_51899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_51899_p6 = data_1621_V_read1691_phi_reg_95088.read();
    } else {
        ap_phi_mux_data_1621_V_read1691_rewind_phi_fu_51899_p6 = data_1621_V_read1691_rewind_reg_51895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1622_V_read1692_phi_phi_fu_95105_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1622_V_read1692_phi_phi_fu_95105_p4 = ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_51913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1622_V_read1692_phi_phi_fu_95105_p4 = data_1622_V_read.read();
        } else {
            ap_phi_mux_data_1622_V_read1692_phi_phi_fu_95105_p4 = ap_phi_reg_pp0_iter0_data_1622_V_read1692_phi_reg_95101.read();
        }
    } else {
        ap_phi_mux_data_1622_V_read1692_phi_phi_fu_95105_p4 = ap_phi_reg_pp0_iter0_data_1622_V_read1692_phi_reg_95101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_51913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_51913_p6 = data_1622_V_read1692_phi_reg_95101.read();
    } else {
        ap_phi_mux_data_1622_V_read1692_rewind_phi_fu_51913_p6 = data_1622_V_read1692_rewind_reg_51909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1623_V_read1693_phi_phi_fu_95118_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1623_V_read1693_phi_phi_fu_95118_p4 = ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_51927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1623_V_read1693_phi_phi_fu_95118_p4 = data_1623_V_read.read();
        } else {
            ap_phi_mux_data_1623_V_read1693_phi_phi_fu_95118_p4 = ap_phi_reg_pp0_iter0_data_1623_V_read1693_phi_reg_95114.read();
        }
    } else {
        ap_phi_mux_data_1623_V_read1693_phi_phi_fu_95118_p4 = ap_phi_reg_pp0_iter0_data_1623_V_read1693_phi_reg_95114.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_51927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_51927_p6 = data_1623_V_read1693_phi_reg_95114.read();
    } else {
        ap_phi_mux_data_1623_V_read1693_rewind_phi_fu_51927_p6 = data_1623_V_read1693_rewind_reg_51923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1624_V_read1694_phi_phi_fu_95131_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1624_V_read1694_phi_phi_fu_95131_p4 = ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_51941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1624_V_read1694_phi_phi_fu_95131_p4 = data_1624_V_read.read();
        } else {
            ap_phi_mux_data_1624_V_read1694_phi_phi_fu_95131_p4 = ap_phi_reg_pp0_iter0_data_1624_V_read1694_phi_reg_95127.read();
        }
    } else {
        ap_phi_mux_data_1624_V_read1694_phi_phi_fu_95131_p4 = ap_phi_reg_pp0_iter0_data_1624_V_read1694_phi_reg_95127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_51941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_51941_p6 = data_1624_V_read1694_phi_reg_95127.read();
    } else {
        ap_phi_mux_data_1624_V_read1694_rewind_phi_fu_51941_p6 = data_1624_V_read1694_rewind_reg_51937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1625_V_read1695_phi_phi_fu_95144_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1625_V_read1695_phi_phi_fu_95144_p4 = ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_51955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1625_V_read1695_phi_phi_fu_95144_p4 = data_1625_V_read.read();
        } else {
            ap_phi_mux_data_1625_V_read1695_phi_phi_fu_95144_p4 = ap_phi_reg_pp0_iter0_data_1625_V_read1695_phi_reg_95140.read();
        }
    } else {
        ap_phi_mux_data_1625_V_read1695_phi_phi_fu_95144_p4 = ap_phi_reg_pp0_iter0_data_1625_V_read1695_phi_reg_95140.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_51955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_51955_p6 = data_1625_V_read1695_phi_reg_95140.read();
    } else {
        ap_phi_mux_data_1625_V_read1695_rewind_phi_fu_51955_p6 = data_1625_V_read1695_rewind_reg_51951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1626_V_read1696_phi_phi_fu_95157_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1626_V_read1696_phi_phi_fu_95157_p4 = ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_51969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1626_V_read1696_phi_phi_fu_95157_p4 = data_1626_V_read.read();
        } else {
            ap_phi_mux_data_1626_V_read1696_phi_phi_fu_95157_p4 = ap_phi_reg_pp0_iter0_data_1626_V_read1696_phi_reg_95153.read();
        }
    } else {
        ap_phi_mux_data_1626_V_read1696_phi_phi_fu_95157_p4 = ap_phi_reg_pp0_iter0_data_1626_V_read1696_phi_reg_95153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_51969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_51969_p6 = data_1626_V_read1696_phi_reg_95153.read();
    } else {
        ap_phi_mux_data_1626_V_read1696_rewind_phi_fu_51969_p6 = data_1626_V_read1696_rewind_reg_51965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1627_V_read1697_phi_phi_fu_95170_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1627_V_read1697_phi_phi_fu_95170_p4 = ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_51983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1627_V_read1697_phi_phi_fu_95170_p4 = data_1627_V_read.read();
        } else {
            ap_phi_mux_data_1627_V_read1697_phi_phi_fu_95170_p4 = ap_phi_reg_pp0_iter0_data_1627_V_read1697_phi_reg_95166.read();
        }
    } else {
        ap_phi_mux_data_1627_V_read1697_phi_phi_fu_95170_p4 = ap_phi_reg_pp0_iter0_data_1627_V_read1697_phi_reg_95166.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_51983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_51983_p6 = data_1627_V_read1697_phi_reg_95166.read();
    } else {
        ap_phi_mux_data_1627_V_read1697_rewind_phi_fu_51983_p6 = data_1627_V_read1697_rewind_reg_51979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1628_V_read1698_phi_phi_fu_95183_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1628_V_read1698_phi_phi_fu_95183_p4 = ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_51997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1628_V_read1698_phi_phi_fu_95183_p4 = data_1628_V_read.read();
        } else {
            ap_phi_mux_data_1628_V_read1698_phi_phi_fu_95183_p4 = ap_phi_reg_pp0_iter0_data_1628_V_read1698_phi_reg_95179.read();
        }
    } else {
        ap_phi_mux_data_1628_V_read1698_phi_phi_fu_95183_p4 = ap_phi_reg_pp0_iter0_data_1628_V_read1698_phi_reg_95179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_51997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_51997_p6 = data_1628_V_read1698_phi_reg_95179.read();
    } else {
        ap_phi_mux_data_1628_V_read1698_rewind_phi_fu_51997_p6 = data_1628_V_read1698_rewind_reg_51993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1629_V_read1699_phi_phi_fu_95196_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1629_V_read1699_phi_phi_fu_95196_p4 = ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_52011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1629_V_read1699_phi_phi_fu_95196_p4 = data_1629_V_read.read();
        } else {
            ap_phi_mux_data_1629_V_read1699_phi_phi_fu_95196_p4 = ap_phi_reg_pp0_iter0_data_1629_V_read1699_phi_reg_95192.read();
        }
    } else {
        ap_phi_mux_data_1629_V_read1699_phi_phi_fu_95196_p4 = ap_phi_reg_pp0_iter0_data_1629_V_read1699_phi_reg_95192.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_52011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_52011_p6 = data_1629_V_read1699_phi_reg_95192.read();
    } else {
        ap_phi_mux_data_1629_V_read1699_rewind_phi_fu_52011_p6 = data_1629_V_read1699_rewind_reg_52007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_162_V_read232_phi_phi_fu_76125_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_162_V_read232_phi_phi_fu_76125_p4 = ap_phi_mux_data_162_V_read232_rewind_phi_fu_31473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_162_V_read232_phi_phi_fu_76125_p4 = data_162_V_read.read();
        } else {
            ap_phi_mux_data_162_V_read232_phi_phi_fu_76125_p4 = ap_phi_reg_pp0_iter0_data_162_V_read232_phi_reg_76121.read();
        }
    } else {
        ap_phi_mux_data_162_V_read232_phi_phi_fu_76125_p4 = ap_phi_reg_pp0_iter0_data_162_V_read232_phi_reg_76121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_162_V_read232_rewind_phi_fu_31473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_162_V_read232_rewind_phi_fu_31473_p6 = data_162_V_read232_phi_reg_76121.read();
    } else {
        ap_phi_mux_data_162_V_read232_rewind_phi_fu_31473_p6 = data_162_V_read232_rewind_reg_31469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1630_V_read1700_phi_phi_fu_95209_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1630_V_read1700_phi_phi_fu_95209_p4 = ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_52025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1630_V_read1700_phi_phi_fu_95209_p4 = data_1630_V_read.read();
        } else {
            ap_phi_mux_data_1630_V_read1700_phi_phi_fu_95209_p4 = ap_phi_reg_pp0_iter0_data_1630_V_read1700_phi_reg_95205.read();
        }
    } else {
        ap_phi_mux_data_1630_V_read1700_phi_phi_fu_95209_p4 = ap_phi_reg_pp0_iter0_data_1630_V_read1700_phi_reg_95205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_52025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_52025_p6 = data_1630_V_read1700_phi_reg_95205.read();
    } else {
        ap_phi_mux_data_1630_V_read1700_rewind_phi_fu_52025_p6 = data_1630_V_read1700_rewind_reg_52021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1631_V_read1701_phi_phi_fu_95222_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1631_V_read1701_phi_phi_fu_95222_p4 = ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_52039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1631_V_read1701_phi_phi_fu_95222_p4 = data_1631_V_read.read();
        } else {
            ap_phi_mux_data_1631_V_read1701_phi_phi_fu_95222_p4 = ap_phi_reg_pp0_iter0_data_1631_V_read1701_phi_reg_95218.read();
        }
    } else {
        ap_phi_mux_data_1631_V_read1701_phi_phi_fu_95222_p4 = ap_phi_reg_pp0_iter0_data_1631_V_read1701_phi_reg_95218.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_52039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_52039_p6 = data_1631_V_read1701_phi_reg_95218.read();
    } else {
        ap_phi_mux_data_1631_V_read1701_rewind_phi_fu_52039_p6 = data_1631_V_read1701_rewind_reg_52035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1632_V_read1702_phi_phi_fu_95235_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1632_V_read1702_phi_phi_fu_95235_p4 = ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_52053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1632_V_read1702_phi_phi_fu_95235_p4 = data_1632_V_read.read();
        } else {
            ap_phi_mux_data_1632_V_read1702_phi_phi_fu_95235_p4 = ap_phi_reg_pp0_iter0_data_1632_V_read1702_phi_reg_95231.read();
        }
    } else {
        ap_phi_mux_data_1632_V_read1702_phi_phi_fu_95235_p4 = ap_phi_reg_pp0_iter0_data_1632_V_read1702_phi_reg_95231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_52053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_52053_p6 = data_1632_V_read1702_phi_reg_95231.read();
    } else {
        ap_phi_mux_data_1632_V_read1702_rewind_phi_fu_52053_p6 = data_1632_V_read1702_rewind_reg_52049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1633_V_read1703_phi_phi_fu_95248_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1633_V_read1703_phi_phi_fu_95248_p4 = ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_52067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1633_V_read1703_phi_phi_fu_95248_p4 = data_1633_V_read.read();
        } else {
            ap_phi_mux_data_1633_V_read1703_phi_phi_fu_95248_p4 = ap_phi_reg_pp0_iter0_data_1633_V_read1703_phi_reg_95244.read();
        }
    } else {
        ap_phi_mux_data_1633_V_read1703_phi_phi_fu_95248_p4 = ap_phi_reg_pp0_iter0_data_1633_V_read1703_phi_reg_95244.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_52067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_52067_p6 = data_1633_V_read1703_phi_reg_95244.read();
    } else {
        ap_phi_mux_data_1633_V_read1703_rewind_phi_fu_52067_p6 = data_1633_V_read1703_rewind_reg_52063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1634_V_read1704_phi_phi_fu_95261_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1634_V_read1704_phi_phi_fu_95261_p4 = ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_52081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1634_V_read1704_phi_phi_fu_95261_p4 = data_1634_V_read.read();
        } else {
            ap_phi_mux_data_1634_V_read1704_phi_phi_fu_95261_p4 = ap_phi_reg_pp0_iter0_data_1634_V_read1704_phi_reg_95257.read();
        }
    } else {
        ap_phi_mux_data_1634_V_read1704_phi_phi_fu_95261_p4 = ap_phi_reg_pp0_iter0_data_1634_V_read1704_phi_reg_95257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_52081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_52081_p6 = data_1634_V_read1704_phi_reg_95257.read();
    } else {
        ap_phi_mux_data_1634_V_read1704_rewind_phi_fu_52081_p6 = data_1634_V_read1704_rewind_reg_52077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1635_V_read1705_phi_phi_fu_95274_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1635_V_read1705_phi_phi_fu_95274_p4 = ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_52095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1635_V_read1705_phi_phi_fu_95274_p4 = data_1635_V_read.read();
        } else {
            ap_phi_mux_data_1635_V_read1705_phi_phi_fu_95274_p4 = ap_phi_reg_pp0_iter0_data_1635_V_read1705_phi_reg_95270.read();
        }
    } else {
        ap_phi_mux_data_1635_V_read1705_phi_phi_fu_95274_p4 = ap_phi_reg_pp0_iter0_data_1635_V_read1705_phi_reg_95270.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_52095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_52095_p6 = data_1635_V_read1705_phi_reg_95270.read();
    } else {
        ap_phi_mux_data_1635_V_read1705_rewind_phi_fu_52095_p6 = data_1635_V_read1705_rewind_reg_52091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1636_V_read1706_phi_phi_fu_95287_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1636_V_read1706_phi_phi_fu_95287_p4 = ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_52109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1636_V_read1706_phi_phi_fu_95287_p4 = data_1636_V_read.read();
        } else {
            ap_phi_mux_data_1636_V_read1706_phi_phi_fu_95287_p4 = ap_phi_reg_pp0_iter0_data_1636_V_read1706_phi_reg_95283.read();
        }
    } else {
        ap_phi_mux_data_1636_V_read1706_phi_phi_fu_95287_p4 = ap_phi_reg_pp0_iter0_data_1636_V_read1706_phi_reg_95283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_52109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_52109_p6 = data_1636_V_read1706_phi_reg_95283.read();
    } else {
        ap_phi_mux_data_1636_V_read1706_rewind_phi_fu_52109_p6 = data_1636_V_read1706_rewind_reg_52105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1637_V_read1707_phi_phi_fu_95300_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1637_V_read1707_phi_phi_fu_95300_p4 = ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_52123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1637_V_read1707_phi_phi_fu_95300_p4 = data_1637_V_read.read();
        } else {
            ap_phi_mux_data_1637_V_read1707_phi_phi_fu_95300_p4 = ap_phi_reg_pp0_iter0_data_1637_V_read1707_phi_reg_95296.read();
        }
    } else {
        ap_phi_mux_data_1637_V_read1707_phi_phi_fu_95300_p4 = ap_phi_reg_pp0_iter0_data_1637_V_read1707_phi_reg_95296.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_52123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_52123_p6 = data_1637_V_read1707_phi_reg_95296.read();
    } else {
        ap_phi_mux_data_1637_V_read1707_rewind_phi_fu_52123_p6 = data_1637_V_read1707_rewind_reg_52119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1638_V_read1708_phi_phi_fu_95313_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1638_V_read1708_phi_phi_fu_95313_p4 = ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_52137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1638_V_read1708_phi_phi_fu_95313_p4 = data_1638_V_read.read();
        } else {
            ap_phi_mux_data_1638_V_read1708_phi_phi_fu_95313_p4 = ap_phi_reg_pp0_iter0_data_1638_V_read1708_phi_reg_95309.read();
        }
    } else {
        ap_phi_mux_data_1638_V_read1708_phi_phi_fu_95313_p4 = ap_phi_reg_pp0_iter0_data_1638_V_read1708_phi_reg_95309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_52137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_52137_p6 = data_1638_V_read1708_phi_reg_95309.read();
    } else {
        ap_phi_mux_data_1638_V_read1708_rewind_phi_fu_52137_p6 = data_1638_V_read1708_rewind_reg_52133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1639_V_read1709_phi_phi_fu_95326_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1639_V_read1709_phi_phi_fu_95326_p4 = ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_52151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1639_V_read1709_phi_phi_fu_95326_p4 = data_1639_V_read.read();
        } else {
            ap_phi_mux_data_1639_V_read1709_phi_phi_fu_95326_p4 = ap_phi_reg_pp0_iter0_data_1639_V_read1709_phi_reg_95322.read();
        }
    } else {
        ap_phi_mux_data_1639_V_read1709_phi_phi_fu_95326_p4 = ap_phi_reg_pp0_iter0_data_1639_V_read1709_phi_reg_95322.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_52151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_52151_p6 = data_1639_V_read1709_phi_reg_95322.read();
    } else {
        ap_phi_mux_data_1639_V_read1709_rewind_phi_fu_52151_p6 = data_1639_V_read1709_rewind_reg_52147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_163_V_read233_phi_phi_fu_76138_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_163_V_read233_phi_phi_fu_76138_p4 = ap_phi_mux_data_163_V_read233_rewind_phi_fu_31487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_163_V_read233_phi_phi_fu_76138_p4 = data_163_V_read.read();
        } else {
            ap_phi_mux_data_163_V_read233_phi_phi_fu_76138_p4 = ap_phi_reg_pp0_iter0_data_163_V_read233_phi_reg_76134.read();
        }
    } else {
        ap_phi_mux_data_163_V_read233_phi_phi_fu_76138_p4 = ap_phi_reg_pp0_iter0_data_163_V_read233_phi_reg_76134.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_163_V_read233_rewind_phi_fu_31487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_163_V_read233_rewind_phi_fu_31487_p6 = data_163_V_read233_phi_reg_76134.read();
    } else {
        ap_phi_mux_data_163_V_read233_rewind_phi_fu_31487_p6 = data_163_V_read233_rewind_reg_31483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1640_V_read1710_phi_phi_fu_95339_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1640_V_read1710_phi_phi_fu_95339_p4 = ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_52165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1640_V_read1710_phi_phi_fu_95339_p4 = data_1640_V_read.read();
        } else {
            ap_phi_mux_data_1640_V_read1710_phi_phi_fu_95339_p4 = ap_phi_reg_pp0_iter0_data_1640_V_read1710_phi_reg_95335.read();
        }
    } else {
        ap_phi_mux_data_1640_V_read1710_phi_phi_fu_95339_p4 = ap_phi_reg_pp0_iter0_data_1640_V_read1710_phi_reg_95335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_52165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_52165_p6 = data_1640_V_read1710_phi_reg_95335.read();
    } else {
        ap_phi_mux_data_1640_V_read1710_rewind_phi_fu_52165_p6 = data_1640_V_read1710_rewind_reg_52161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1641_V_read1711_phi_phi_fu_95352_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1641_V_read1711_phi_phi_fu_95352_p4 = ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_52179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1641_V_read1711_phi_phi_fu_95352_p4 = data_1641_V_read.read();
        } else {
            ap_phi_mux_data_1641_V_read1711_phi_phi_fu_95352_p4 = ap_phi_reg_pp0_iter0_data_1641_V_read1711_phi_reg_95348.read();
        }
    } else {
        ap_phi_mux_data_1641_V_read1711_phi_phi_fu_95352_p4 = ap_phi_reg_pp0_iter0_data_1641_V_read1711_phi_reg_95348.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_52179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_52179_p6 = data_1641_V_read1711_phi_reg_95348.read();
    } else {
        ap_phi_mux_data_1641_V_read1711_rewind_phi_fu_52179_p6 = data_1641_V_read1711_rewind_reg_52175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1642_V_read1712_phi_phi_fu_95365_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1642_V_read1712_phi_phi_fu_95365_p4 = ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_52193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1642_V_read1712_phi_phi_fu_95365_p4 = data_1642_V_read.read();
        } else {
            ap_phi_mux_data_1642_V_read1712_phi_phi_fu_95365_p4 = ap_phi_reg_pp0_iter0_data_1642_V_read1712_phi_reg_95361.read();
        }
    } else {
        ap_phi_mux_data_1642_V_read1712_phi_phi_fu_95365_p4 = ap_phi_reg_pp0_iter0_data_1642_V_read1712_phi_reg_95361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_52193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_52193_p6 = data_1642_V_read1712_phi_reg_95361.read();
    } else {
        ap_phi_mux_data_1642_V_read1712_rewind_phi_fu_52193_p6 = data_1642_V_read1712_rewind_reg_52189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1643_V_read1713_phi_phi_fu_95378_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1643_V_read1713_phi_phi_fu_95378_p4 = ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_52207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1643_V_read1713_phi_phi_fu_95378_p4 = data_1643_V_read.read();
        } else {
            ap_phi_mux_data_1643_V_read1713_phi_phi_fu_95378_p4 = ap_phi_reg_pp0_iter0_data_1643_V_read1713_phi_reg_95374.read();
        }
    } else {
        ap_phi_mux_data_1643_V_read1713_phi_phi_fu_95378_p4 = ap_phi_reg_pp0_iter0_data_1643_V_read1713_phi_reg_95374.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_52207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_52207_p6 = data_1643_V_read1713_phi_reg_95374.read();
    } else {
        ap_phi_mux_data_1643_V_read1713_rewind_phi_fu_52207_p6 = data_1643_V_read1713_rewind_reg_52203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1644_V_read1714_phi_phi_fu_95391_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1644_V_read1714_phi_phi_fu_95391_p4 = ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_52221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1644_V_read1714_phi_phi_fu_95391_p4 = data_1644_V_read.read();
        } else {
            ap_phi_mux_data_1644_V_read1714_phi_phi_fu_95391_p4 = ap_phi_reg_pp0_iter0_data_1644_V_read1714_phi_reg_95387.read();
        }
    } else {
        ap_phi_mux_data_1644_V_read1714_phi_phi_fu_95391_p4 = ap_phi_reg_pp0_iter0_data_1644_V_read1714_phi_reg_95387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_52221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_52221_p6 = data_1644_V_read1714_phi_reg_95387.read();
    } else {
        ap_phi_mux_data_1644_V_read1714_rewind_phi_fu_52221_p6 = data_1644_V_read1714_rewind_reg_52217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1645_V_read1715_phi_phi_fu_95404_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1645_V_read1715_phi_phi_fu_95404_p4 = ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_52235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1645_V_read1715_phi_phi_fu_95404_p4 = data_1645_V_read.read();
        } else {
            ap_phi_mux_data_1645_V_read1715_phi_phi_fu_95404_p4 = ap_phi_reg_pp0_iter0_data_1645_V_read1715_phi_reg_95400.read();
        }
    } else {
        ap_phi_mux_data_1645_V_read1715_phi_phi_fu_95404_p4 = ap_phi_reg_pp0_iter0_data_1645_V_read1715_phi_reg_95400.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_52235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_52235_p6 = data_1645_V_read1715_phi_reg_95400.read();
    } else {
        ap_phi_mux_data_1645_V_read1715_rewind_phi_fu_52235_p6 = data_1645_V_read1715_rewind_reg_52231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1646_V_read1716_phi_phi_fu_95417_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1646_V_read1716_phi_phi_fu_95417_p4 = ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_52249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1646_V_read1716_phi_phi_fu_95417_p4 = data_1646_V_read.read();
        } else {
            ap_phi_mux_data_1646_V_read1716_phi_phi_fu_95417_p4 = ap_phi_reg_pp0_iter0_data_1646_V_read1716_phi_reg_95413.read();
        }
    } else {
        ap_phi_mux_data_1646_V_read1716_phi_phi_fu_95417_p4 = ap_phi_reg_pp0_iter0_data_1646_V_read1716_phi_reg_95413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_52249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_52249_p6 = data_1646_V_read1716_phi_reg_95413.read();
    } else {
        ap_phi_mux_data_1646_V_read1716_rewind_phi_fu_52249_p6 = data_1646_V_read1716_rewind_reg_52245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1647_V_read1717_phi_phi_fu_95430_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1647_V_read1717_phi_phi_fu_95430_p4 = ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_52263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1647_V_read1717_phi_phi_fu_95430_p4 = data_1647_V_read.read();
        } else {
            ap_phi_mux_data_1647_V_read1717_phi_phi_fu_95430_p4 = ap_phi_reg_pp0_iter0_data_1647_V_read1717_phi_reg_95426.read();
        }
    } else {
        ap_phi_mux_data_1647_V_read1717_phi_phi_fu_95430_p4 = ap_phi_reg_pp0_iter0_data_1647_V_read1717_phi_reg_95426.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_52263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_52263_p6 = data_1647_V_read1717_phi_reg_95426.read();
    } else {
        ap_phi_mux_data_1647_V_read1717_rewind_phi_fu_52263_p6 = data_1647_V_read1717_rewind_reg_52259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1648_V_read1718_phi_phi_fu_95443_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1648_V_read1718_phi_phi_fu_95443_p4 = ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_52277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1648_V_read1718_phi_phi_fu_95443_p4 = data_1648_V_read.read();
        } else {
            ap_phi_mux_data_1648_V_read1718_phi_phi_fu_95443_p4 = ap_phi_reg_pp0_iter0_data_1648_V_read1718_phi_reg_95439.read();
        }
    } else {
        ap_phi_mux_data_1648_V_read1718_phi_phi_fu_95443_p4 = ap_phi_reg_pp0_iter0_data_1648_V_read1718_phi_reg_95439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_52277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_52277_p6 = data_1648_V_read1718_phi_reg_95439.read();
    } else {
        ap_phi_mux_data_1648_V_read1718_rewind_phi_fu_52277_p6 = data_1648_V_read1718_rewind_reg_52273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1649_V_read1719_phi_phi_fu_95456_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1649_V_read1719_phi_phi_fu_95456_p4 = ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_52291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1649_V_read1719_phi_phi_fu_95456_p4 = data_1649_V_read.read();
        } else {
            ap_phi_mux_data_1649_V_read1719_phi_phi_fu_95456_p4 = ap_phi_reg_pp0_iter0_data_1649_V_read1719_phi_reg_95452.read();
        }
    } else {
        ap_phi_mux_data_1649_V_read1719_phi_phi_fu_95456_p4 = ap_phi_reg_pp0_iter0_data_1649_V_read1719_phi_reg_95452.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_52291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_52291_p6 = data_1649_V_read1719_phi_reg_95452.read();
    } else {
        ap_phi_mux_data_1649_V_read1719_rewind_phi_fu_52291_p6 = data_1649_V_read1719_rewind_reg_52287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_164_V_read234_phi_phi_fu_76151_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_164_V_read234_phi_phi_fu_76151_p4 = ap_phi_mux_data_164_V_read234_rewind_phi_fu_31501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_164_V_read234_phi_phi_fu_76151_p4 = data_164_V_read.read();
        } else {
            ap_phi_mux_data_164_V_read234_phi_phi_fu_76151_p4 = ap_phi_reg_pp0_iter0_data_164_V_read234_phi_reg_76147.read();
        }
    } else {
        ap_phi_mux_data_164_V_read234_phi_phi_fu_76151_p4 = ap_phi_reg_pp0_iter0_data_164_V_read234_phi_reg_76147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_164_V_read234_rewind_phi_fu_31501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_164_V_read234_rewind_phi_fu_31501_p6 = data_164_V_read234_phi_reg_76147.read();
    } else {
        ap_phi_mux_data_164_V_read234_rewind_phi_fu_31501_p6 = data_164_V_read234_rewind_reg_31497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1650_V_read1720_phi_phi_fu_95469_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1650_V_read1720_phi_phi_fu_95469_p4 = ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_52305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1650_V_read1720_phi_phi_fu_95469_p4 = data_1650_V_read.read();
        } else {
            ap_phi_mux_data_1650_V_read1720_phi_phi_fu_95469_p4 = ap_phi_reg_pp0_iter0_data_1650_V_read1720_phi_reg_95465.read();
        }
    } else {
        ap_phi_mux_data_1650_V_read1720_phi_phi_fu_95469_p4 = ap_phi_reg_pp0_iter0_data_1650_V_read1720_phi_reg_95465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_52305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_52305_p6 = data_1650_V_read1720_phi_reg_95465.read();
    } else {
        ap_phi_mux_data_1650_V_read1720_rewind_phi_fu_52305_p6 = data_1650_V_read1720_rewind_reg_52301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1651_V_read1721_phi_phi_fu_95482_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1651_V_read1721_phi_phi_fu_95482_p4 = ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_52319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1651_V_read1721_phi_phi_fu_95482_p4 = data_1651_V_read.read();
        } else {
            ap_phi_mux_data_1651_V_read1721_phi_phi_fu_95482_p4 = ap_phi_reg_pp0_iter0_data_1651_V_read1721_phi_reg_95478.read();
        }
    } else {
        ap_phi_mux_data_1651_V_read1721_phi_phi_fu_95482_p4 = ap_phi_reg_pp0_iter0_data_1651_V_read1721_phi_reg_95478.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_52319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_52319_p6 = data_1651_V_read1721_phi_reg_95478.read();
    } else {
        ap_phi_mux_data_1651_V_read1721_rewind_phi_fu_52319_p6 = data_1651_V_read1721_rewind_reg_52315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1652_V_read1722_phi_phi_fu_95495_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1652_V_read1722_phi_phi_fu_95495_p4 = ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_52333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1652_V_read1722_phi_phi_fu_95495_p4 = data_1652_V_read.read();
        } else {
            ap_phi_mux_data_1652_V_read1722_phi_phi_fu_95495_p4 = ap_phi_reg_pp0_iter0_data_1652_V_read1722_phi_reg_95491.read();
        }
    } else {
        ap_phi_mux_data_1652_V_read1722_phi_phi_fu_95495_p4 = ap_phi_reg_pp0_iter0_data_1652_V_read1722_phi_reg_95491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_52333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_52333_p6 = data_1652_V_read1722_phi_reg_95491.read();
    } else {
        ap_phi_mux_data_1652_V_read1722_rewind_phi_fu_52333_p6 = data_1652_V_read1722_rewind_reg_52329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1653_V_read1723_phi_phi_fu_95508_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1653_V_read1723_phi_phi_fu_95508_p4 = ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_52347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1653_V_read1723_phi_phi_fu_95508_p4 = data_1653_V_read.read();
        } else {
            ap_phi_mux_data_1653_V_read1723_phi_phi_fu_95508_p4 = ap_phi_reg_pp0_iter0_data_1653_V_read1723_phi_reg_95504.read();
        }
    } else {
        ap_phi_mux_data_1653_V_read1723_phi_phi_fu_95508_p4 = ap_phi_reg_pp0_iter0_data_1653_V_read1723_phi_reg_95504.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_52347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_52347_p6 = data_1653_V_read1723_phi_reg_95504.read();
    } else {
        ap_phi_mux_data_1653_V_read1723_rewind_phi_fu_52347_p6 = data_1653_V_read1723_rewind_reg_52343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1654_V_read1724_phi_phi_fu_95521_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1654_V_read1724_phi_phi_fu_95521_p4 = ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_52361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1654_V_read1724_phi_phi_fu_95521_p4 = data_1654_V_read.read();
        } else {
            ap_phi_mux_data_1654_V_read1724_phi_phi_fu_95521_p4 = ap_phi_reg_pp0_iter0_data_1654_V_read1724_phi_reg_95517.read();
        }
    } else {
        ap_phi_mux_data_1654_V_read1724_phi_phi_fu_95521_p4 = ap_phi_reg_pp0_iter0_data_1654_V_read1724_phi_reg_95517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_52361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_52361_p6 = data_1654_V_read1724_phi_reg_95517.read();
    } else {
        ap_phi_mux_data_1654_V_read1724_rewind_phi_fu_52361_p6 = data_1654_V_read1724_rewind_reg_52357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1655_V_read1725_phi_phi_fu_95534_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1655_V_read1725_phi_phi_fu_95534_p4 = ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_52375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1655_V_read1725_phi_phi_fu_95534_p4 = data_1655_V_read.read();
        } else {
            ap_phi_mux_data_1655_V_read1725_phi_phi_fu_95534_p4 = ap_phi_reg_pp0_iter0_data_1655_V_read1725_phi_reg_95530.read();
        }
    } else {
        ap_phi_mux_data_1655_V_read1725_phi_phi_fu_95534_p4 = ap_phi_reg_pp0_iter0_data_1655_V_read1725_phi_reg_95530.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_52375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_52375_p6 = data_1655_V_read1725_phi_reg_95530.read();
    } else {
        ap_phi_mux_data_1655_V_read1725_rewind_phi_fu_52375_p6 = data_1655_V_read1725_rewind_reg_52371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1656_V_read1726_phi_phi_fu_95547_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1656_V_read1726_phi_phi_fu_95547_p4 = ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_52389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1656_V_read1726_phi_phi_fu_95547_p4 = data_1656_V_read.read();
        } else {
            ap_phi_mux_data_1656_V_read1726_phi_phi_fu_95547_p4 = ap_phi_reg_pp0_iter0_data_1656_V_read1726_phi_reg_95543.read();
        }
    } else {
        ap_phi_mux_data_1656_V_read1726_phi_phi_fu_95547_p4 = ap_phi_reg_pp0_iter0_data_1656_V_read1726_phi_reg_95543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_52389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_52389_p6 = data_1656_V_read1726_phi_reg_95543.read();
    } else {
        ap_phi_mux_data_1656_V_read1726_rewind_phi_fu_52389_p6 = data_1656_V_read1726_rewind_reg_52385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1657_V_read1727_phi_phi_fu_95560_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1657_V_read1727_phi_phi_fu_95560_p4 = ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_52403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1657_V_read1727_phi_phi_fu_95560_p4 = data_1657_V_read.read();
        } else {
            ap_phi_mux_data_1657_V_read1727_phi_phi_fu_95560_p4 = ap_phi_reg_pp0_iter0_data_1657_V_read1727_phi_reg_95556.read();
        }
    } else {
        ap_phi_mux_data_1657_V_read1727_phi_phi_fu_95560_p4 = ap_phi_reg_pp0_iter0_data_1657_V_read1727_phi_reg_95556.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_52403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_52403_p6 = data_1657_V_read1727_phi_reg_95556.read();
    } else {
        ap_phi_mux_data_1657_V_read1727_rewind_phi_fu_52403_p6 = data_1657_V_read1727_rewind_reg_52399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1658_V_read1728_phi_phi_fu_95573_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1658_V_read1728_phi_phi_fu_95573_p4 = ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_52417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1658_V_read1728_phi_phi_fu_95573_p4 = data_1658_V_read.read();
        } else {
            ap_phi_mux_data_1658_V_read1728_phi_phi_fu_95573_p4 = ap_phi_reg_pp0_iter0_data_1658_V_read1728_phi_reg_95569.read();
        }
    } else {
        ap_phi_mux_data_1658_V_read1728_phi_phi_fu_95573_p4 = ap_phi_reg_pp0_iter0_data_1658_V_read1728_phi_reg_95569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_52417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_52417_p6 = data_1658_V_read1728_phi_reg_95569.read();
    } else {
        ap_phi_mux_data_1658_V_read1728_rewind_phi_fu_52417_p6 = data_1658_V_read1728_rewind_reg_52413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1659_V_read1729_phi_phi_fu_95586_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1659_V_read1729_phi_phi_fu_95586_p4 = ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_52431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1659_V_read1729_phi_phi_fu_95586_p4 = data_1659_V_read.read();
        } else {
            ap_phi_mux_data_1659_V_read1729_phi_phi_fu_95586_p4 = ap_phi_reg_pp0_iter0_data_1659_V_read1729_phi_reg_95582.read();
        }
    } else {
        ap_phi_mux_data_1659_V_read1729_phi_phi_fu_95586_p4 = ap_phi_reg_pp0_iter0_data_1659_V_read1729_phi_reg_95582.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_52431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_52431_p6 = data_1659_V_read1729_phi_reg_95582.read();
    } else {
        ap_phi_mux_data_1659_V_read1729_rewind_phi_fu_52431_p6 = data_1659_V_read1729_rewind_reg_52427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_165_V_read235_phi_phi_fu_76164_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_165_V_read235_phi_phi_fu_76164_p4 = ap_phi_mux_data_165_V_read235_rewind_phi_fu_31515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_165_V_read235_phi_phi_fu_76164_p4 = data_165_V_read.read();
        } else {
            ap_phi_mux_data_165_V_read235_phi_phi_fu_76164_p4 = ap_phi_reg_pp0_iter0_data_165_V_read235_phi_reg_76160.read();
        }
    } else {
        ap_phi_mux_data_165_V_read235_phi_phi_fu_76164_p4 = ap_phi_reg_pp0_iter0_data_165_V_read235_phi_reg_76160.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_165_V_read235_rewind_phi_fu_31515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_165_V_read235_rewind_phi_fu_31515_p6 = data_165_V_read235_phi_reg_76160.read();
    } else {
        ap_phi_mux_data_165_V_read235_rewind_phi_fu_31515_p6 = data_165_V_read235_rewind_reg_31511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1660_V_read1730_phi_phi_fu_95599_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1660_V_read1730_phi_phi_fu_95599_p4 = ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_52445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1660_V_read1730_phi_phi_fu_95599_p4 = data_1660_V_read.read();
        } else {
            ap_phi_mux_data_1660_V_read1730_phi_phi_fu_95599_p4 = ap_phi_reg_pp0_iter0_data_1660_V_read1730_phi_reg_95595.read();
        }
    } else {
        ap_phi_mux_data_1660_V_read1730_phi_phi_fu_95599_p4 = ap_phi_reg_pp0_iter0_data_1660_V_read1730_phi_reg_95595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_52445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_52445_p6 = data_1660_V_read1730_phi_reg_95595.read();
    } else {
        ap_phi_mux_data_1660_V_read1730_rewind_phi_fu_52445_p6 = data_1660_V_read1730_rewind_reg_52441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1661_V_read1731_phi_phi_fu_95612_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1661_V_read1731_phi_phi_fu_95612_p4 = ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_52459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1661_V_read1731_phi_phi_fu_95612_p4 = data_1661_V_read.read();
        } else {
            ap_phi_mux_data_1661_V_read1731_phi_phi_fu_95612_p4 = ap_phi_reg_pp0_iter0_data_1661_V_read1731_phi_reg_95608.read();
        }
    } else {
        ap_phi_mux_data_1661_V_read1731_phi_phi_fu_95612_p4 = ap_phi_reg_pp0_iter0_data_1661_V_read1731_phi_reg_95608.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_52459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_52459_p6 = data_1661_V_read1731_phi_reg_95608.read();
    } else {
        ap_phi_mux_data_1661_V_read1731_rewind_phi_fu_52459_p6 = data_1661_V_read1731_rewind_reg_52455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1662_V_read1732_phi_phi_fu_95625_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1662_V_read1732_phi_phi_fu_95625_p4 = ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_52473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1662_V_read1732_phi_phi_fu_95625_p4 = data_1662_V_read.read();
        } else {
            ap_phi_mux_data_1662_V_read1732_phi_phi_fu_95625_p4 = ap_phi_reg_pp0_iter0_data_1662_V_read1732_phi_reg_95621.read();
        }
    } else {
        ap_phi_mux_data_1662_V_read1732_phi_phi_fu_95625_p4 = ap_phi_reg_pp0_iter0_data_1662_V_read1732_phi_reg_95621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_52473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_52473_p6 = data_1662_V_read1732_phi_reg_95621.read();
    } else {
        ap_phi_mux_data_1662_V_read1732_rewind_phi_fu_52473_p6 = data_1662_V_read1732_rewind_reg_52469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1663_V_read1733_phi_phi_fu_95638_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1663_V_read1733_phi_phi_fu_95638_p4 = ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_52487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1663_V_read1733_phi_phi_fu_95638_p4 = data_1663_V_read.read();
        } else {
            ap_phi_mux_data_1663_V_read1733_phi_phi_fu_95638_p4 = ap_phi_reg_pp0_iter0_data_1663_V_read1733_phi_reg_95634.read();
        }
    } else {
        ap_phi_mux_data_1663_V_read1733_phi_phi_fu_95638_p4 = ap_phi_reg_pp0_iter0_data_1663_V_read1733_phi_reg_95634.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_52487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_52487_p6 = data_1663_V_read1733_phi_reg_95634.read();
    } else {
        ap_phi_mux_data_1663_V_read1733_rewind_phi_fu_52487_p6 = data_1663_V_read1733_rewind_reg_52483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1664_V_read1734_phi_phi_fu_95651_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1664_V_read1734_phi_phi_fu_95651_p4 = ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_52501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1664_V_read1734_phi_phi_fu_95651_p4 = data_1664_V_read.read();
        } else {
            ap_phi_mux_data_1664_V_read1734_phi_phi_fu_95651_p4 = ap_phi_reg_pp0_iter0_data_1664_V_read1734_phi_reg_95647.read();
        }
    } else {
        ap_phi_mux_data_1664_V_read1734_phi_phi_fu_95651_p4 = ap_phi_reg_pp0_iter0_data_1664_V_read1734_phi_reg_95647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_52501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_52501_p6 = data_1664_V_read1734_phi_reg_95647.read();
    } else {
        ap_phi_mux_data_1664_V_read1734_rewind_phi_fu_52501_p6 = data_1664_V_read1734_rewind_reg_52497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1665_V_read1735_phi_phi_fu_95664_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1665_V_read1735_phi_phi_fu_95664_p4 = ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_52515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1665_V_read1735_phi_phi_fu_95664_p4 = data_1665_V_read.read();
        } else {
            ap_phi_mux_data_1665_V_read1735_phi_phi_fu_95664_p4 = ap_phi_reg_pp0_iter0_data_1665_V_read1735_phi_reg_95660.read();
        }
    } else {
        ap_phi_mux_data_1665_V_read1735_phi_phi_fu_95664_p4 = ap_phi_reg_pp0_iter0_data_1665_V_read1735_phi_reg_95660.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_52515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_52515_p6 = data_1665_V_read1735_phi_reg_95660.read();
    } else {
        ap_phi_mux_data_1665_V_read1735_rewind_phi_fu_52515_p6 = data_1665_V_read1735_rewind_reg_52511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1666_V_read1736_phi_phi_fu_95677_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1666_V_read1736_phi_phi_fu_95677_p4 = ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_52529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1666_V_read1736_phi_phi_fu_95677_p4 = data_1666_V_read.read();
        } else {
            ap_phi_mux_data_1666_V_read1736_phi_phi_fu_95677_p4 = ap_phi_reg_pp0_iter0_data_1666_V_read1736_phi_reg_95673.read();
        }
    } else {
        ap_phi_mux_data_1666_V_read1736_phi_phi_fu_95677_p4 = ap_phi_reg_pp0_iter0_data_1666_V_read1736_phi_reg_95673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_52529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_52529_p6 = data_1666_V_read1736_phi_reg_95673.read();
    } else {
        ap_phi_mux_data_1666_V_read1736_rewind_phi_fu_52529_p6 = data_1666_V_read1736_rewind_reg_52525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1667_V_read1737_phi_phi_fu_95690_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1667_V_read1737_phi_phi_fu_95690_p4 = ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_52543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1667_V_read1737_phi_phi_fu_95690_p4 = data_1667_V_read.read();
        } else {
            ap_phi_mux_data_1667_V_read1737_phi_phi_fu_95690_p4 = ap_phi_reg_pp0_iter0_data_1667_V_read1737_phi_reg_95686.read();
        }
    } else {
        ap_phi_mux_data_1667_V_read1737_phi_phi_fu_95690_p4 = ap_phi_reg_pp0_iter0_data_1667_V_read1737_phi_reg_95686.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_52543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_52543_p6 = data_1667_V_read1737_phi_reg_95686.read();
    } else {
        ap_phi_mux_data_1667_V_read1737_rewind_phi_fu_52543_p6 = data_1667_V_read1737_rewind_reg_52539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1668_V_read1738_phi_phi_fu_95703_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1668_V_read1738_phi_phi_fu_95703_p4 = ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_52557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1668_V_read1738_phi_phi_fu_95703_p4 = data_1668_V_read.read();
        } else {
            ap_phi_mux_data_1668_V_read1738_phi_phi_fu_95703_p4 = ap_phi_reg_pp0_iter0_data_1668_V_read1738_phi_reg_95699.read();
        }
    } else {
        ap_phi_mux_data_1668_V_read1738_phi_phi_fu_95703_p4 = ap_phi_reg_pp0_iter0_data_1668_V_read1738_phi_reg_95699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_52557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_52557_p6 = data_1668_V_read1738_phi_reg_95699.read();
    } else {
        ap_phi_mux_data_1668_V_read1738_rewind_phi_fu_52557_p6 = data_1668_V_read1738_rewind_reg_52553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1669_V_read1739_phi_phi_fu_95716_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1669_V_read1739_phi_phi_fu_95716_p4 = ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_52571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1669_V_read1739_phi_phi_fu_95716_p4 = data_1669_V_read.read();
        } else {
            ap_phi_mux_data_1669_V_read1739_phi_phi_fu_95716_p4 = ap_phi_reg_pp0_iter0_data_1669_V_read1739_phi_reg_95712.read();
        }
    } else {
        ap_phi_mux_data_1669_V_read1739_phi_phi_fu_95716_p4 = ap_phi_reg_pp0_iter0_data_1669_V_read1739_phi_reg_95712.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_52571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_52571_p6 = data_1669_V_read1739_phi_reg_95712.read();
    } else {
        ap_phi_mux_data_1669_V_read1739_rewind_phi_fu_52571_p6 = data_1669_V_read1739_rewind_reg_52567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_166_V_read236_phi_phi_fu_76177_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_166_V_read236_phi_phi_fu_76177_p4 = ap_phi_mux_data_166_V_read236_rewind_phi_fu_31529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_166_V_read236_phi_phi_fu_76177_p4 = data_166_V_read.read();
        } else {
            ap_phi_mux_data_166_V_read236_phi_phi_fu_76177_p4 = ap_phi_reg_pp0_iter0_data_166_V_read236_phi_reg_76173.read();
        }
    } else {
        ap_phi_mux_data_166_V_read236_phi_phi_fu_76177_p4 = ap_phi_reg_pp0_iter0_data_166_V_read236_phi_reg_76173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_166_V_read236_rewind_phi_fu_31529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_166_V_read236_rewind_phi_fu_31529_p6 = data_166_V_read236_phi_reg_76173.read();
    } else {
        ap_phi_mux_data_166_V_read236_rewind_phi_fu_31529_p6 = data_166_V_read236_rewind_reg_31525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1670_V_read1740_phi_phi_fu_95729_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1670_V_read1740_phi_phi_fu_95729_p4 = ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_52585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1670_V_read1740_phi_phi_fu_95729_p4 = data_1670_V_read.read();
        } else {
            ap_phi_mux_data_1670_V_read1740_phi_phi_fu_95729_p4 = ap_phi_reg_pp0_iter0_data_1670_V_read1740_phi_reg_95725.read();
        }
    } else {
        ap_phi_mux_data_1670_V_read1740_phi_phi_fu_95729_p4 = ap_phi_reg_pp0_iter0_data_1670_V_read1740_phi_reg_95725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_52585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_52585_p6 = data_1670_V_read1740_phi_reg_95725.read();
    } else {
        ap_phi_mux_data_1670_V_read1740_rewind_phi_fu_52585_p6 = data_1670_V_read1740_rewind_reg_52581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1671_V_read1741_phi_phi_fu_95742_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1671_V_read1741_phi_phi_fu_95742_p4 = ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_52599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1671_V_read1741_phi_phi_fu_95742_p4 = data_1671_V_read.read();
        } else {
            ap_phi_mux_data_1671_V_read1741_phi_phi_fu_95742_p4 = ap_phi_reg_pp0_iter0_data_1671_V_read1741_phi_reg_95738.read();
        }
    } else {
        ap_phi_mux_data_1671_V_read1741_phi_phi_fu_95742_p4 = ap_phi_reg_pp0_iter0_data_1671_V_read1741_phi_reg_95738.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_52599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_52599_p6 = data_1671_V_read1741_phi_reg_95738.read();
    } else {
        ap_phi_mux_data_1671_V_read1741_rewind_phi_fu_52599_p6 = data_1671_V_read1741_rewind_reg_52595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1672_V_read1742_phi_phi_fu_95755_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1672_V_read1742_phi_phi_fu_95755_p4 = ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_52613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1672_V_read1742_phi_phi_fu_95755_p4 = data_1672_V_read.read();
        } else {
            ap_phi_mux_data_1672_V_read1742_phi_phi_fu_95755_p4 = ap_phi_reg_pp0_iter0_data_1672_V_read1742_phi_reg_95751.read();
        }
    } else {
        ap_phi_mux_data_1672_V_read1742_phi_phi_fu_95755_p4 = ap_phi_reg_pp0_iter0_data_1672_V_read1742_phi_reg_95751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_52613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_52613_p6 = data_1672_V_read1742_phi_reg_95751.read();
    } else {
        ap_phi_mux_data_1672_V_read1742_rewind_phi_fu_52613_p6 = data_1672_V_read1742_rewind_reg_52609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1673_V_read1743_phi_phi_fu_95768_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1673_V_read1743_phi_phi_fu_95768_p4 = ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_52627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1673_V_read1743_phi_phi_fu_95768_p4 = data_1673_V_read.read();
        } else {
            ap_phi_mux_data_1673_V_read1743_phi_phi_fu_95768_p4 = ap_phi_reg_pp0_iter0_data_1673_V_read1743_phi_reg_95764.read();
        }
    } else {
        ap_phi_mux_data_1673_V_read1743_phi_phi_fu_95768_p4 = ap_phi_reg_pp0_iter0_data_1673_V_read1743_phi_reg_95764.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_52627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_52627_p6 = data_1673_V_read1743_phi_reg_95764.read();
    } else {
        ap_phi_mux_data_1673_V_read1743_rewind_phi_fu_52627_p6 = data_1673_V_read1743_rewind_reg_52623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1674_V_read1744_phi_phi_fu_95781_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1674_V_read1744_phi_phi_fu_95781_p4 = ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_52641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1674_V_read1744_phi_phi_fu_95781_p4 = data_1674_V_read.read();
        } else {
            ap_phi_mux_data_1674_V_read1744_phi_phi_fu_95781_p4 = ap_phi_reg_pp0_iter0_data_1674_V_read1744_phi_reg_95777.read();
        }
    } else {
        ap_phi_mux_data_1674_V_read1744_phi_phi_fu_95781_p4 = ap_phi_reg_pp0_iter0_data_1674_V_read1744_phi_reg_95777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_52641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_52641_p6 = data_1674_V_read1744_phi_reg_95777.read();
    } else {
        ap_phi_mux_data_1674_V_read1744_rewind_phi_fu_52641_p6 = data_1674_V_read1744_rewind_reg_52637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1675_V_read1745_phi_phi_fu_95794_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1675_V_read1745_phi_phi_fu_95794_p4 = ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_52655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1675_V_read1745_phi_phi_fu_95794_p4 = data_1675_V_read.read();
        } else {
            ap_phi_mux_data_1675_V_read1745_phi_phi_fu_95794_p4 = ap_phi_reg_pp0_iter0_data_1675_V_read1745_phi_reg_95790.read();
        }
    } else {
        ap_phi_mux_data_1675_V_read1745_phi_phi_fu_95794_p4 = ap_phi_reg_pp0_iter0_data_1675_V_read1745_phi_reg_95790.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_52655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_52655_p6 = data_1675_V_read1745_phi_reg_95790.read();
    } else {
        ap_phi_mux_data_1675_V_read1745_rewind_phi_fu_52655_p6 = data_1675_V_read1745_rewind_reg_52651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1676_V_read1746_phi_phi_fu_95807_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1676_V_read1746_phi_phi_fu_95807_p4 = ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_52669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1676_V_read1746_phi_phi_fu_95807_p4 = data_1676_V_read.read();
        } else {
            ap_phi_mux_data_1676_V_read1746_phi_phi_fu_95807_p4 = ap_phi_reg_pp0_iter0_data_1676_V_read1746_phi_reg_95803.read();
        }
    } else {
        ap_phi_mux_data_1676_V_read1746_phi_phi_fu_95807_p4 = ap_phi_reg_pp0_iter0_data_1676_V_read1746_phi_reg_95803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_52669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_52669_p6 = data_1676_V_read1746_phi_reg_95803.read();
    } else {
        ap_phi_mux_data_1676_V_read1746_rewind_phi_fu_52669_p6 = data_1676_V_read1746_rewind_reg_52665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1677_V_read1747_phi_phi_fu_95820_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1677_V_read1747_phi_phi_fu_95820_p4 = ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_52683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1677_V_read1747_phi_phi_fu_95820_p4 = data_1677_V_read.read();
        } else {
            ap_phi_mux_data_1677_V_read1747_phi_phi_fu_95820_p4 = ap_phi_reg_pp0_iter0_data_1677_V_read1747_phi_reg_95816.read();
        }
    } else {
        ap_phi_mux_data_1677_V_read1747_phi_phi_fu_95820_p4 = ap_phi_reg_pp0_iter0_data_1677_V_read1747_phi_reg_95816.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_52683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_52683_p6 = data_1677_V_read1747_phi_reg_95816.read();
    } else {
        ap_phi_mux_data_1677_V_read1747_rewind_phi_fu_52683_p6 = data_1677_V_read1747_rewind_reg_52679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1678_V_read1748_phi_phi_fu_95833_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1678_V_read1748_phi_phi_fu_95833_p4 = ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_52697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1678_V_read1748_phi_phi_fu_95833_p4 = data_1678_V_read.read();
        } else {
            ap_phi_mux_data_1678_V_read1748_phi_phi_fu_95833_p4 = ap_phi_reg_pp0_iter0_data_1678_V_read1748_phi_reg_95829.read();
        }
    } else {
        ap_phi_mux_data_1678_V_read1748_phi_phi_fu_95833_p4 = ap_phi_reg_pp0_iter0_data_1678_V_read1748_phi_reg_95829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_52697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_52697_p6 = data_1678_V_read1748_phi_reg_95829.read();
    } else {
        ap_phi_mux_data_1678_V_read1748_rewind_phi_fu_52697_p6 = data_1678_V_read1748_rewind_reg_52693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1679_V_read1749_phi_phi_fu_95846_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1679_V_read1749_phi_phi_fu_95846_p4 = ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_52711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1679_V_read1749_phi_phi_fu_95846_p4 = data_1679_V_read.read();
        } else {
            ap_phi_mux_data_1679_V_read1749_phi_phi_fu_95846_p4 = ap_phi_reg_pp0_iter0_data_1679_V_read1749_phi_reg_95842.read();
        }
    } else {
        ap_phi_mux_data_1679_V_read1749_phi_phi_fu_95846_p4 = ap_phi_reg_pp0_iter0_data_1679_V_read1749_phi_reg_95842.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_52711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_52711_p6 = data_1679_V_read1749_phi_reg_95842.read();
    } else {
        ap_phi_mux_data_1679_V_read1749_rewind_phi_fu_52711_p6 = data_1679_V_read1749_rewind_reg_52707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_167_V_read237_phi_phi_fu_76190_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_167_V_read237_phi_phi_fu_76190_p4 = ap_phi_mux_data_167_V_read237_rewind_phi_fu_31543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_167_V_read237_phi_phi_fu_76190_p4 = data_167_V_read.read();
        } else {
            ap_phi_mux_data_167_V_read237_phi_phi_fu_76190_p4 = ap_phi_reg_pp0_iter0_data_167_V_read237_phi_reg_76186.read();
        }
    } else {
        ap_phi_mux_data_167_V_read237_phi_phi_fu_76190_p4 = ap_phi_reg_pp0_iter0_data_167_V_read237_phi_reg_76186.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_167_V_read237_rewind_phi_fu_31543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_167_V_read237_rewind_phi_fu_31543_p6 = data_167_V_read237_phi_reg_76186.read();
    } else {
        ap_phi_mux_data_167_V_read237_rewind_phi_fu_31543_p6 = data_167_V_read237_rewind_reg_31539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1680_V_read1750_phi_phi_fu_95859_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1680_V_read1750_phi_phi_fu_95859_p4 = ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_52725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1680_V_read1750_phi_phi_fu_95859_p4 = data_1680_V_read.read();
        } else {
            ap_phi_mux_data_1680_V_read1750_phi_phi_fu_95859_p4 = ap_phi_reg_pp0_iter0_data_1680_V_read1750_phi_reg_95855.read();
        }
    } else {
        ap_phi_mux_data_1680_V_read1750_phi_phi_fu_95859_p4 = ap_phi_reg_pp0_iter0_data_1680_V_read1750_phi_reg_95855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_52725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_52725_p6 = data_1680_V_read1750_phi_reg_95855.read();
    } else {
        ap_phi_mux_data_1680_V_read1750_rewind_phi_fu_52725_p6 = data_1680_V_read1750_rewind_reg_52721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1681_V_read1751_phi_phi_fu_95872_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1681_V_read1751_phi_phi_fu_95872_p4 = ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_52739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1681_V_read1751_phi_phi_fu_95872_p4 = data_1681_V_read.read();
        } else {
            ap_phi_mux_data_1681_V_read1751_phi_phi_fu_95872_p4 = ap_phi_reg_pp0_iter0_data_1681_V_read1751_phi_reg_95868.read();
        }
    } else {
        ap_phi_mux_data_1681_V_read1751_phi_phi_fu_95872_p4 = ap_phi_reg_pp0_iter0_data_1681_V_read1751_phi_reg_95868.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_52739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_52739_p6 = data_1681_V_read1751_phi_reg_95868.read();
    } else {
        ap_phi_mux_data_1681_V_read1751_rewind_phi_fu_52739_p6 = data_1681_V_read1751_rewind_reg_52735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1682_V_read1752_phi_phi_fu_95885_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1682_V_read1752_phi_phi_fu_95885_p4 = ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_52753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1682_V_read1752_phi_phi_fu_95885_p4 = data_1682_V_read.read();
        } else {
            ap_phi_mux_data_1682_V_read1752_phi_phi_fu_95885_p4 = ap_phi_reg_pp0_iter0_data_1682_V_read1752_phi_reg_95881.read();
        }
    } else {
        ap_phi_mux_data_1682_V_read1752_phi_phi_fu_95885_p4 = ap_phi_reg_pp0_iter0_data_1682_V_read1752_phi_reg_95881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_52753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_52753_p6 = data_1682_V_read1752_phi_reg_95881.read();
    } else {
        ap_phi_mux_data_1682_V_read1752_rewind_phi_fu_52753_p6 = data_1682_V_read1752_rewind_reg_52749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1683_V_read1753_phi_phi_fu_95898_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1683_V_read1753_phi_phi_fu_95898_p4 = ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_52767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1683_V_read1753_phi_phi_fu_95898_p4 = data_1683_V_read.read();
        } else {
            ap_phi_mux_data_1683_V_read1753_phi_phi_fu_95898_p4 = ap_phi_reg_pp0_iter0_data_1683_V_read1753_phi_reg_95894.read();
        }
    } else {
        ap_phi_mux_data_1683_V_read1753_phi_phi_fu_95898_p4 = ap_phi_reg_pp0_iter0_data_1683_V_read1753_phi_reg_95894.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_52767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_52767_p6 = data_1683_V_read1753_phi_reg_95894.read();
    } else {
        ap_phi_mux_data_1683_V_read1753_rewind_phi_fu_52767_p6 = data_1683_V_read1753_rewind_reg_52763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1684_V_read1754_phi_phi_fu_95911_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1684_V_read1754_phi_phi_fu_95911_p4 = ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_52781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1684_V_read1754_phi_phi_fu_95911_p4 = data_1684_V_read.read();
        } else {
            ap_phi_mux_data_1684_V_read1754_phi_phi_fu_95911_p4 = ap_phi_reg_pp0_iter0_data_1684_V_read1754_phi_reg_95907.read();
        }
    } else {
        ap_phi_mux_data_1684_V_read1754_phi_phi_fu_95911_p4 = ap_phi_reg_pp0_iter0_data_1684_V_read1754_phi_reg_95907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_52781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_52781_p6 = data_1684_V_read1754_phi_reg_95907.read();
    } else {
        ap_phi_mux_data_1684_V_read1754_rewind_phi_fu_52781_p6 = data_1684_V_read1754_rewind_reg_52777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1685_V_read1755_phi_phi_fu_95924_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1685_V_read1755_phi_phi_fu_95924_p4 = ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_52795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1685_V_read1755_phi_phi_fu_95924_p4 = data_1685_V_read.read();
        } else {
            ap_phi_mux_data_1685_V_read1755_phi_phi_fu_95924_p4 = ap_phi_reg_pp0_iter0_data_1685_V_read1755_phi_reg_95920.read();
        }
    } else {
        ap_phi_mux_data_1685_V_read1755_phi_phi_fu_95924_p4 = ap_phi_reg_pp0_iter0_data_1685_V_read1755_phi_reg_95920.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_52795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_52795_p6 = data_1685_V_read1755_phi_reg_95920.read();
    } else {
        ap_phi_mux_data_1685_V_read1755_rewind_phi_fu_52795_p6 = data_1685_V_read1755_rewind_reg_52791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1686_V_read1756_phi_phi_fu_95937_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1686_V_read1756_phi_phi_fu_95937_p4 = ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_52809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1686_V_read1756_phi_phi_fu_95937_p4 = data_1686_V_read.read();
        } else {
            ap_phi_mux_data_1686_V_read1756_phi_phi_fu_95937_p4 = ap_phi_reg_pp0_iter0_data_1686_V_read1756_phi_reg_95933.read();
        }
    } else {
        ap_phi_mux_data_1686_V_read1756_phi_phi_fu_95937_p4 = ap_phi_reg_pp0_iter0_data_1686_V_read1756_phi_reg_95933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_52809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_52809_p6 = data_1686_V_read1756_phi_reg_95933.read();
    } else {
        ap_phi_mux_data_1686_V_read1756_rewind_phi_fu_52809_p6 = data_1686_V_read1756_rewind_reg_52805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1687_V_read1757_phi_phi_fu_95950_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1687_V_read1757_phi_phi_fu_95950_p4 = ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_52823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1687_V_read1757_phi_phi_fu_95950_p4 = data_1687_V_read.read();
        } else {
            ap_phi_mux_data_1687_V_read1757_phi_phi_fu_95950_p4 = ap_phi_reg_pp0_iter0_data_1687_V_read1757_phi_reg_95946.read();
        }
    } else {
        ap_phi_mux_data_1687_V_read1757_phi_phi_fu_95950_p4 = ap_phi_reg_pp0_iter0_data_1687_V_read1757_phi_reg_95946.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_52823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_52823_p6 = data_1687_V_read1757_phi_reg_95946.read();
    } else {
        ap_phi_mux_data_1687_V_read1757_rewind_phi_fu_52823_p6 = data_1687_V_read1757_rewind_reg_52819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1688_V_read1758_phi_phi_fu_95963_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1688_V_read1758_phi_phi_fu_95963_p4 = ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_52837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1688_V_read1758_phi_phi_fu_95963_p4 = data_1688_V_read.read();
        } else {
            ap_phi_mux_data_1688_V_read1758_phi_phi_fu_95963_p4 = ap_phi_reg_pp0_iter0_data_1688_V_read1758_phi_reg_95959.read();
        }
    } else {
        ap_phi_mux_data_1688_V_read1758_phi_phi_fu_95963_p4 = ap_phi_reg_pp0_iter0_data_1688_V_read1758_phi_reg_95959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_52837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_52837_p6 = data_1688_V_read1758_phi_reg_95959.read();
    } else {
        ap_phi_mux_data_1688_V_read1758_rewind_phi_fu_52837_p6 = data_1688_V_read1758_rewind_reg_52833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1689_V_read1759_phi_phi_fu_95976_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1689_V_read1759_phi_phi_fu_95976_p4 = ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_52851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1689_V_read1759_phi_phi_fu_95976_p4 = data_1689_V_read.read();
        } else {
            ap_phi_mux_data_1689_V_read1759_phi_phi_fu_95976_p4 = ap_phi_reg_pp0_iter0_data_1689_V_read1759_phi_reg_95972.read();
        }
    } else {
        ap_phi_mux_data_1689_V_read1759_phi_phi_fu_95976_p4 = ap_phi_reg_pp0_iter0_data_1689_V_read1759_phi_reg_95972.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_52851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_52851_p6 = data_1689_V_read1759_phi_reg_95972.read();
    } else {
        ap_phi_mux_data_1689_V_read1759_rewind_phi_fu_52851_p6 = data_1689_V_read1759_rewind_reg_52847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_168_V_read238_phi_phi_fu_76203_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_168_V_read238_phi_phi_fu_76203_p4 = ap_phi_mux_data_168_V_read238_rewind_phi_fu_31557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_168_V_read238_phi_phi_fu_76203_p4 = data_168_V_read.read();
        } else {
            ap_phi_mux_data_168_V_read238_phi_phi_fu_76203_p4 = ap_phi_reg_pp0_iter0_data_168_V_read238_phi_reg_76199.read();
        }
    } else {
        ap_phi_mux_data_168_V_read238_phi_phi_fu_76203_p4 = ap_phi_reg_pp0_iter0_data_168_V_read238_phi_reg_76199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_168_V_read238_rewind_phi_fu_31557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_168_V_read238_rewind_phi_fu_31557_p6 = data_168_V_read238_phi_reg_76199.read();
    } else {
        ap_phi_mux_data_168_V_read238_rewind_phi_fu_31557_p6 = data_168_V_read238_rewind_reg_31553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1690_V_read1760_phi_phi_fu_95989_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1690_V_read1760_phi_phi_fu_95989_p4 = ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_52865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1690_V_read1760_phi_phi_fu_95989_p4 = data_1690_V_read.read();
        } else {
            ap_phi_mux_data_1690_V_read1760_phi_phi_fu_95989_p4 = ap_phi_reg_pp0_iter0_data_1690_V_read1760_phi_reg_95985.read();
        }
    } else {
        ap_phi_mux_data_1690_V_read1760_phi_phi_fu_95989_p4 = ap_phi_reg_pp0_iter0_data_1690_V_read1760_phi_reg_95985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_52865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_52865_p6 = data_1690_V_read1760_phi_reg_95985.read();
    } else {
        ap_phi_mux_data_1690_V_read1760_rewind_phi_fu_52865_p6 = data_1690_V_read1760_rewind_reg_52861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1691_V_read1761_phi_phi_fu_96002_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1691_V_read1761_phi_phi_fu_96002_p4 = ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_52879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1691_V_read1761_phi_phi_fu_96002_p4 = data_1691_V_read.read();
        } else {
            ap_phi_mux_data_1691_V_read1761_phi_phi_fu_96002_p4 = ap_phi_reg_pp0_iter0_data_1691_V_read1761_phi_reg_95998.read();
        }
    } else {
        ap_phi_mux_data_1691_V_read1761_phi_phi_fu_96002_p4 = ap_phi_reg_pp0_iter0_data_1691_V_read1761_phi_reg_95998.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_52879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_52879_p6 = data_1691_V_read1761_phi_reg_95998.read();
    } else {
        ap_phi_mux_data_1691_V_read1761_rewind_phi_fu_52879_p6 = data_1691_V_read1761_rewind_reg_52875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1692_V_read1762_phi_phi_fu_96015_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1692_V_read1762_phi_phi_fu_96015_p4 = ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_52893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1692_V_read1762_phi_phi_fu_96015_p4 = data_1692_V_read.read();
        } else {
            ap_phi_mux_data_1692_V_read1762_phi_phi_fu_96015_p4 = ap_phi_reg_pp0_iter0_data_1692_V_read1762_phi_reg_96011.read();
        }
    } else {
        ap_phi_mux_data_1692_V_read1762_phi_phi_fu_96015_p4 = ap_phi_reg_pp0_iter0_data_1692_V_read1762_phi_reg_96011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_52893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_52893_p6 = data_1692_V_read1762_phi_reg_96011.read();
    } else {
        ap_phi_mux_data_1692_V_read1762_rewind_phi_fu_52893_p6 = data_1692_V_read1762_rewind_reg_52889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1693_V_read1763_phi_phi_fu_96028_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1693_V_read1763_phi_phi_fu_96028_p4 = ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_52907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1693_V_read1763_phi_phi_fu_96028_p4 = data_1693_V_read.read();
        } else {
            ap_phi_mux_data_1693_V_read1763_phi_phi_fu_96028_p4 = ap_phi_reg_pp0_iter0_data_1693_V_read1763_phi_reg_96024.read();
        }
    } else {
        ap_phi_mux_data_1693_V_read1763_phi_phi_fu_96028_p4 = ap_phi_reg_pp0_iter0_data_1693_V_read1763_phi_reg_96024.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_52907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_52907_p6 = data_1693_V_read1763_phi_reg_96024.read();
    } else {
        ap_phi_mux_data_1693_V_read1763_rewind_phi_fu_52907_p6 = data_1693_V_read1763_rewind_reg_52903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1694_V_read1764_phi_phi_fu_96041_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1694_V_read1764_phi_phi_fu_96041_p4 = ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_52921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1694_V_read1764_phi_phi_fu_96041_p4 = data_1694_V_read.read();
        } else {
            ap_phi_mux_data_1694_V_read1764_phi_phi_fu_96041_p4 = ap_phi_reg_pp0_iter0_data_1694_V_read1764_phi_reg_96037.read();
        }
    } else {
        ap_phi_mux_data_1694_V_read1764_phi_phi_fu_96041_p4 = ap_phi_reg_pp0_iter0_data_1694_V_read1764_phi_reg_96037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_52921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_52921_p6 = data_1694_V_read1764_phi_reg_96037.read();
    } else {
        ap_phi_mux_data_1694_V_read1764_rewind_phi_fu_52921_p6 = data_1694_V_read1764_rewind_reg_52917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1695_V_read1765_phi_phi_fu_96054_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1695_V_read1765_phi_phi_fu_96054_p4 = ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_52935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1695_V_read1765_phi_phi_fu_96054_p4 = data_1695_V_read.read();
        } else {
            ap_phi_mux_data_1695_V_read1765_phi_phi_fu_96054_p4 = ap_phi_reg_pp0_iter0_data_1695_V_read1765_phi_reg_96050.read();
        }
    } else {
        ap_phi_mux_data_1695_V_read1765_phi_phi_fu_96054_p4 = ap_phi_reg_pp0_iter0_data_1695_V_read1765_phi_reg_96050.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_52935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_52935_p6 = data_1695_V_read1765_phi_reg_96050.read();
    } else {
        ap_phi_mux_data_1695_V_read1765_rewind_phi_fu_52935_p6 = data_1695_V_read1765_rewind_reg_52931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1696_V_read1766_phi_phi_fu_96067_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1696_V_read1766_phi_phi_fu_96067_p4 = ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_52949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1696_V_read1766_phi_phi_fu_96067_p4 = data_1696_V_read.read();
        } else {
            ap_phi_mux_data_1696_V_read1766_phi_phi_fu_96067_p4 = ap_phi_reg_pp0_iter0_data_1696_V_read1766_phi_reg_96063.read();
        }
    } else {
        ap_phi_mux_data_1696_V_read1766_phi_phi_fu_96067_p4 = ap_phi_reg_pp0_iter0_data_1696_V_read1766_phi_reg_96063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_52949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_52949_p6 = data_1696_V_read1766_phi_reg_96063.read();
    } else {
        ap_phi_mux_data_1696_V_read1766_rewind_phi_fu_52949_p6 = data_1696_V_read1766_rewind_reg_52945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1697_V_read1767_phi_phi_fu_96080_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1697_V_read1767_phi_phi_fu_96080_p4 = ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_52963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1697_V_read1767_phi_phi_fu_96080_p4 = data_1697_V_read.read();
        } else {
            ap_phi_mux_data_1697_V_read1767_phi_phi_fu_96080_p4 = ap_phi_reg_pp0_iter0_data_1697_V_read1767_phi_reg_96076.read();
        }
    } else {
        ap_phi_mux_data_1697_V_read1767_phi_phi_fu_96080_p4 = ap_phi_reg_pp0_iter0_data_1697_V_read1767_phi_reg_96076.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_52963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_52963_p6 = data_1697_V_read1767_phi_reg_96076.read();
    } else {
        ap_phi_mux_data_1697_V_read1767_rewind_phi_fu_52963_p6 = data_1697_V_read1767_rewind_reg_52959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1698_V_read1768_phi_phi_fu_96093_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1698_V_read1768_phi_phi_fu_96093_p4 = ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_52977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1698_V_read1768_phi_phi_fu_96093_p4 = data_1698_V_read.read();
        } else {
            ap_phi_mux_data_1698_V_read1768_phi_phi_fu_96093_p4 = ap_phi_reg_pp0_iter0_data_1698_V_read1768_phi_reg_96089.read();
        }
    } else {
        ap_phi_mux_data_1698_V_read1768_phi_phi_fu_96093_p4 = ap_phi_reg_pp0_iter0_data_1698_V_read1768_phi_reg_96089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_52977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_52977_p6 = data_1698_V_read1768_phi_reg_96089.read();
    } else {
        ap_phi_mux_data_1698_V_read1768_rewind_phi_fu_52977_p6 = data_1698_V_read1768_rewind_reg_52973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1699_V_read1769_phi_phi_fu_96106_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1699_V_read1769_phi_phi_fu_96106_p4 = ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_52991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1699_V_read1769_phi_phi_fu_96106_p4 = data_1699_V_read.read();
        } else {
            ap_phi_mux_data_1699_V_read1769_phi_phi_fu_96106_p4 = ap_phi_reg_pp0_iter0_data_1699_V_read1769_phi_reg_96102.read();
        }
    } else {
        ap_phi_mux_data_1699_V_read1769_phi_phi_fu_96106_p4 = ap_phi_reg_pp0_iter0_data_1699_V_read1769_phi_reg_96102.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_52991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_52991_p6 = data_1699_V_read1769_phi_reg_96102.read();
    } else {
        ap_phi_mux_data_1699_V_read1769_rewind_phi_fu_52991_p6 = data_1699_V_read1769_rewind_reg_52987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_169_V_read239_phi_phi_fu_76216_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_169_V_read239_phi_phi_fu_76216_p4 = ap_phi_mux_data_169_V_read239_rewind_phi_fu_31571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_169_V_read239_phi_phi_fu_76216_p4 = data_169_V_read.read();
        } else {
            ap_phi_mux_data_169_V_read239_phi_phi_fu_76216_p4 = ap_phi_reg_pp0_iter0_data_169_V_read239_phi_reg_76212.read();
        }
    } else {
        ap_phi_mux_data_169_V_read239_phi_phi_fu_76216_p4 = ap_phi_reg_pp0_iter0_data_169_V_read239_phi_reg_76212.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_169_V_read239_rewind_phi_fu_31571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_169_V_read239_rewind_phi_fu_31571_p6 = data_169_V_read239_phi_reg_76212.read();
    } else {
        ap_phi_mux_data_169_V_read239_rewind_phi_fu_31571_p6 = data_169_V_read239_rewind_reg_31567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_16_V_read86_phi_phi_fu_74227_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_16_V_read86_phi_phi_fu_74227_p4 = ap_phi_mux_data_16_V_read86_rewind_phi_fu_29429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_16_V_read86_phi_phi_fu_74227_p4 = data_16_V_read.read();
        } else {
            ap_phi_mux_data_16_V_read86_phi_phi_fu_74227_p4 = ap_phi_reg_pp0_iter0_data_16_V_read86_phi_reg_74223.read();
        }
    } else {
        ap_phi_mux_data_16_V_read86_phi_phi_fu_74227_p4 = ap_phi_reg_pp0_iter0_data_16_V_read86_phi_reg_74223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_16_V_read86_rewind_phi_fu_29429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_16_V_read86_rewind_phi_fu_29429_p6 = data_16_V_read86_phi_reg_74223.read();
    } else {
        ap_phi_mux_data_16_V_read86_rewind_phi_fu_29429_p6 = data_16_V_read86_rewind_reg_29425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1700_V_read1770_phi_phi_fu_96119_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1700_V_read1770_phi_phi_fu_96119_p4 = ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_53005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1700_V_read1770_phi_phi_fu_96119_p4 = data_1700_V_read.read();
        } else {
            ap_phi_mux_data_1700_V_read1770_phi_phi_fu_96119_p4 = ap_phi_reg_pp0_iter0_data_1700_V_read1770_phi_reg_96115.read();
        }
    } else {
        ap_phi_mux_data_1700_V_read1770_phi_phi_fu_96119_p4 = ap_phi_reg_pp0_iter0_data_1700_V_read1770_phi_reg_96115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_53005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_53005_p6 = data_1700_V_read1770_phi_reg_96115.read();
    } else {
        ap_phi_mux_data_1700_V_read1770_rewind_phi_fu_53005_p6 = data_1700_V_read1770_rewind_reg_53001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1701_V_read1771_phi_phi_fu_96132_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1701_V_read1771_phi_phi_fu_96132_p4 = ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_53019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1701_V_read1771_phi_phi_fu_96132_p4 = data_1701_V_read.read();
        } else {
            ap_phi_mux_data_1701_V_read1771_phi_phi_fu_96132_p4 = ap_phi_reg_pp0_iter0_data_1701_V_read1771_phi_reg_96128.read();
        }
    } else {
        ap_phi_mux_data_1701_V_read1771_phi_phi_fu_96132_p4 = ap_phi_reg_pp0_iter0_data_1701_V_read1771_phi_reg_96128.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_53019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_53019_p6 = data_1701_V_read1771_phi_reg_96128.read();
    } else {
        ap_phi_mux_data_1701_V_read1771_rewind_phi_fu_53019_p6 = data_1701_V_read1771_rewind_reg_53015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1702_V_read1772_phi_phi_fu_96145_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1702_V_read1772_phi_phi_fu_96145_p4 = ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_53033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1702_V_read1772_phi_phi_fu_96145_p4 = data_1702_V_read.read();
        } else {
            ap_phi_mux_data_1702_V_read1772_phi_phi_fu_96145_p4 = ap_phi_reg_pp0_iter0_data_1702_V_read1772_phi_reg_96141.read();
        }
    } else {
        ap_phi_mux_data_1702_V_read1772_phi_phi_fu_96145_p4 = ap_phi_reg_pp0_iter0_data_1702_V_read1772_phi_reg_96141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_53033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_53033_p6 = data_1702_V_read1772_phi_reg_96141.read();
    } else {
        ap_phi_mux_data_1702_V_read1772_rewind_phi_fu_53033_p6 = data_1702_V_read1772_rewind_reg_53029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1703_V_read1773_phi_phi_fu_96158_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1703_V_read1773_phi_phi_fu_96158_p4 = ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_53047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1703_V_read1773_phi_phi_fu_96158_p4 = data_1703_V_read.read();
        } else {
            ap_phi_mux_data_1703_V_read1773_phi_phi_fu_96158_p4 = ap_phi_reg_pp0_iter0_data_1703_V_read1773_phi_reg_96154.read();
        }
    } else {
        ap_phi_mux_data_1703_V_read1773_phi_phi_fu_96158_p4 = ap_phi_reg_pp0_iter0_data_1703_V_read1773_phi_reg_96154.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_53047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_53047_p6 = data_1703_V_read1773_phi_reg_96154.read();
    } else {
        ap_phi_mux_data_1703_V_read1773_rewind_phi_fu_53047_p6 = data_1703_V_read1773_rewind_reg_53043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1704_V_read1774_phi_phi_fu_96171_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1704_V_read1774_phi_phi_fu_96171_p4 = ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_53061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1704_V_read1774_phi_phi_fu_96171_p4 = data_1704_V_read.read();
        } else {
            ap_phi_mux_data_1704_V_read1774_phi_phi_fu_96171_p4 = ap_phi_reg_pp0_iter0_data_1704_V_read1774_phi_reg_96167.read();
        }
    } else {
        ap_phi_mux_data_1704_V_read1774_phi_phi_fu_96171_p4 = ap_phi_reg_pp0_iter0_data_1704_V_read1774_phi_reg_96167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_53061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_53061_p6 = data_1704_V_read1774_phi_reg_96167.read();
    } else {
        ap_phi_mux_data_1704_V_read1774_rewind_phi_fu_53061_p6 = data_1704_V_read1774_rewind_reg_53057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1705_V_read1775_phi_phi_fu_96184_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1705_V_read1775_phi_phi_fu_96184_p4 = ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_53075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1705_V_read1775_phi_phi_fu_96184_p4 = data_1705_V_read.read();
        } else {
            ap_phi_mux_data_1705_V_read1775_phi_phi_fu_96184_p4 = ap_phi_reg_pp0_iter0_data_1705_V_read1775_phi_reg_96180.read();
        }
    } else {
        ap_phi_mux_data_1705_V_read1775_phi_phi_fu_96184_p4 = ap_phi_reg_pp0_iter0_data_1705_V_read1775_phi_reg_96180.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_53075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_53075_p6 = data_1705_V_read1775_phi_reg_96180.read();
    } else {
        ap_phi_mux_data_1705_V_read1775_rewind_phi_fu_53075_p6 = data_1705_V_read1775_rewind_reg_53071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1706_V_read1776_phi_phi_fu_96197_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1706_V_read1776_phi_phi_fu_96197_p4 = ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_53089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1706_V_read1776_phi_phi_fu_96197_p4 = data_1706_V_read.read();
        } else {
            ap_phi_mux_data_1706_V_read1776_phi_phi_fu_96197_p4 = ap_phi_reg_pp0_iter0_data_1706_V_read1776_phi_reg_96193.read();
        }
    } else {
        ap_phi_mux_data_1706_V_read1776_phi_phi_fu_96197_p4 = ap_phi_reg_pp0_iter0_data_1706_V_read1776_phi_reg_96193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_53089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_53089_p6 = data_1706_V_read1776_phi_reg_96193.read();
    } else {
        ap_phi_mux_data_1706_V_read1776_rewind_phi_fu_53089_p6 = data_1706_V_read1776_rewind_reg_53085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1707_V_read1777_phi_phi_fu_96210_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1707_V_read1777_phi_phi_fu_96210_p4 = ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_53103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1707_V_read1777_phi_phi_fu_96210_p4 = data_1707_V_read.read();
        } else {
            ap_phi_mux_data_1707_V_read1777_phi_phi_fu_96210_p4 = ap_phi_reg_pp0_iter0_data_1707_V_read1777_phi_reg_96206.read();
        }
    } else {
        ap_phi_mux_data_1707_V_read1777_phi_phi_fu_96210_p4 = ap_phi_reg_pp0_iter0_data_1707_V_read1777_phi_reg_96206.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_53103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_53103_p6 = data_1707_V_read1777_phi_reg_96206.read();
    } else {
        ap_phi_mux_data_1707_V_read1777_rewind_phi_fu_53103_p6 = data_1707_V_read1777_rewind_reg_53099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1708_V_read1778_phi_phi_fu_96223_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1708_V_read1778_phi_phi_fu_96223_p4 = ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_53117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1708_V_read1778_phi_phi_fu_96223_p4 = data_1708_V_read.read();
        } else {
            ap_phi_mux_data_1708_V_read1778_phi_phi_fu_96223_p4 = ap_phi_reg_pp0_iter0_data_1708_V_read1778_phi_reg_96219.read();
        }
    } else {
        ap_phi_mux_data_1708_V_read1778_phi_phi_fu_96223_p4 = ap_phi_reg_pp0_iter0_data_1708_V_read1778_phi_reg_96219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_53117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_53117_p6 = data_1708_V_read1778_phi_reg_96219.read();
    } else {
        ap_phi_mux_data_1708_V_read1778_rewind_phi_fu_53117_p6 = data_1708_V_read1778_rewind_reg_53113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1709_V_read1779_phi_phi_fu_96236_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1709_V_read1779_phi_phi_fu_96236_p4 = ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_53131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1709_V_read1779_phi_phi_fu_96236_p4 = data_1709_V_read.read();
        } else {
            ap_phi_mux_data_1709_V_read1779_phi_phi_fu_96236_p4 = ap_phi_reg_pp0_iter0_data_1709_V_read1779_phi_reg_96232.read();
        }
    } else {
        ap_phi_mux_data_1709_V_read1779_phi_phi_fu_96236_p4 = ap_phi_reg_pp0_iter0_data_1709_V_read1779_phi_reg_96232.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_53131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_53131_p6 = data_1709_V_read1779_phi_reg_96232.read();
    } else {
        ap_phi_mux_data_1709_V_read1779_rewind_phi_fu_53131_p6 = data_1709_V_read1779_rewind_reg_53127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_170_V_read240_phi_phi_fu_76229_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_170_V_read240_phi_phi_fu_76229_p4 = ap_phi_mux_data_170_V_read240_rewind_phi_fu_31585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_170_V_read240_phi_phi_fu_76229_p4 = data_170_V_read.read();
        } else {
            ap_phi_mux_data_170_V_read240_phi_phi_fu_76229_p4 = ap_phi_reg_pp0_iter0_data_170_V_read240_phi_reg_76225.read();
        }
    } else {
        ap_phi_mux_data_170_V_read240_phi_phi_fu_76229_p4 = ap_phi_reg_pp0_iter0_data_170_V_read240_phi_reg_76225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_170_V_read240_rewind_phi_fu_31585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_170_V_read240_rewind_phi_fu_31585_p6 = data_170_V_read240_phi_reg_76225.read();
    } else {
        ap_phi_mux_data_170_V_read240_rewind_phi_fu_31585_p6 = data_170_V_read240_rewind_reg_31581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1710_V_read1780_phi_phi_fu_96249_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1710_V_read1780_phi_phi_fu_96249_p4 = ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_53145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1710_V_read1780_phi_phi_fu_96249_p4 = data_1710_V_read.read();
        } else {
            ap_phi_mux_data_1710_V_read1780_phi_phi_fu_96249_p4 = ap_phi_reg_pp0_iter0_data_1710_V_read1780_phi_reg_96245.read();
        }
    } else {
        ap_phi_mux_data_1710_V_read1780_phi_phi_fu_96249_p4 = ap_phi_reg_pp0_iter0_data_1710_V_read1780_phi_reg_96245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_53145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_53145_p6 = data_1710_V_read1780_phi_reg_96245.read();
    } else {
        ap_phi_mux_data_1710_V_read1780_rewind_phi_fu_53145_p6 = data_1710_V_read1780_rewind_reg_53141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1711_V_read1781_phi_phi_fu_96262_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1711_V_read1781_phi_phi_fu_96262_p4 = ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_53159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1711_V_read1781_phi_phi_fu_96262_p4 = data_1711_V_read.read();
        } else {
            ap_phi_mux_data_1711_V_read1781_phi_phi_fu_96262_p4 = ap_phi_reg_pp0_iter0_data_1711_V_read1781_phi_reg_96258.read();
        }
    } else {
        ap_phi_mux_data_1711_V_read1781_phi_phi_fu_96262_p4 = ap_phi_reg_pp0_iter0_data_1711_V_read1781_phi_reg_96258.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_53159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_53159_p6 = data_1711_V_read1781_phi_reg_96258.read();
    } else {
        ap_phi_mux_data_1711_V_read1781_rewind_phi_fu_53159_p6 = data_1711_V_read1781_rewind_reg_53155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1712_V_read1782_phi_phi_fu_96275_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1712_V_read1782_phi_phi_fu_96275_p4 = ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_53173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1712_V_read1782_phi_phi_fu_96275_p4 = data_1712_V_read.read();
        } else {
            ap_phi_mux_data_1712_V_read1782_phi_phi_fu_96275_p4 = ap_phi_reg_pp0_iter0_data_1712_V_read1782_phi_reg_96271.read();
        }
    } else {
        ap_phi_mux_data_1712_V_read1782_phi_phi_fu_96275_p4 = ap_phi_reg_pp0_iter0_data_1712_V_read1782_phi_reg_96271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_53173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_53173_p6 = data_1712_V_read1782_phi_reg_96271.read();
    } else {
        ap_phi_mux_data_1712_V_read1782_rewind_phi_fu_53173_p6 = data_1712_V_read1782_rewind_reg_53169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1713_V_read1783_phi_phi_fu_96288_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1713_V_read1783_phi_phi_fu_96288_p4 = ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_53187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1713_V_read1783_phi_phi_fu_96288_p4 = data_1713_V_read.read();
        } else {
            ap_phi_mux_data_1713_V_read1783_phi_phi_fu_96288_p4 = ap_phi_reg_pp0_iter0_data_1713_V_read1783_phi_reg_96284.read();
        }
    } else {
        ap_phi_mux_data_1713_V_read1783_phi_phi_fu_96288_p4 = ap_phi_reg_pp0_iter0_data_1713_V_read1783_phi_reg_96284.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_53187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_53187_p6 = data_1713_V_read1783_phi_reg_96284.read();
    } else {
        ap_phi_mux_data_1713_V_read1783_rewind_phi_fu_53187_p6 = data_1713_V_read1783_rewind_reg_53183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1714_V_read1784_phi_phi_fu_96301_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1714_V_read1784_phi_phi_fu_96301_p4 = ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_53201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1714_V_read1784_phi_phi_fu_96301_p4 = data_1714_V_read.read();
        } else {
            ap_phi_mux_data_1714_V_read1784_phi_phi_fu_96301_p4 = ap_phi_reg_pp0_iter0_data_1714_V_read1784_phi_reg_96297.read();
        }
    } else {
        ap_phi_mux_data_1714_V_read1784_phi_phi_fu_96301_p4 = ap_phi_reg_pp0_iter0_data_1714_V_read1784_phi_reg_96297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_53201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_53201_p6 = data_1714_V_read1784_phi_reg_96297.read();
    } else {
        ap_phi_mux_data_1714_V_read1784_rewind_phi_fu_53201_p6 = data_1714_V_read1784_rewind_reg_53197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1715_V_read1785_phi_phi_fu_96314_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1715_V_read1785_phi_phi_fu_96314_p4 = ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_53215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1715_V_read1785_phi_phi_fu_96314_p4 = data_1715_V_read.read();
        } else {
            ap_phi_mux_data_1715_V_read1785_phi_phi_fu_96314_p4 = ap_phi_reg_pp0_iter0_data_1715_V_read1785_phi_reg_96310.read();
        }
    } else {
        ap_phi_mux_data_1715_V_read1785_phi_phi_fu_96314_p4 = ap_phi_reg_pp0_iter0_data_1715_V_read1785_phi_reg_96310.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_53215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_53215_p6 = data_1715_V_read1785_phi_reg_96310.read();
    } else {
        ap_phi_mux_data_1715_V_read1785_rewind_phi_fu_53215_p6 = data_1715_V_read1785_rewind_reg_53211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1716_V_read1786_phi_phi_fu_96327_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1716_V_read1786_phi_phi_fu_96327_p4 = ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_53229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1716_V_read1786_phi_phi_fu_96327_p4 = data_1716_V_read.read();
        } else {
            ap_phi_mux_data_1716_V_read1786_phi_phi_fu_96327_p4 = ap_phi_reg_pp0_iter0_data_1716_V_read1786_phi_reg_96323.read();
        }
    } else {
        ap_phi_mux_data_1716_V_read1786_phi_phi_fu_96327_p4 = ap_phi_reg_pp0_iter0_data_1716_V_read1786_phi_reg_96323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_53229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_53229_p6 = data_1716_V_read1786_phi_reg_96323.read();
    } else {
        ap_phi_mux_data_1716_V_read1786_rewind_phi_fu_53229_p6 = data_1716_V_read1786_rewind_reg_53225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1717_V_read1787_phi_phi_fu_96340_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1717_V_read1787_phi_phi_fu_96340_p4 = ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_53243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1717_V_read1787_phi_phi_fu_96340_p4 = data_1717_V_read.read();
        } else {
            ap_phi_mux_data_1717_V_read1787_phi_phi_fu_96340_p4 = ap_phi_reg_pp0_iter0_data_1717_V_read1787_phi_reg_96336.read();
        }
    } else {
        ap_phi_mux_data_1717_V_read1787_phi_phi_fu_96340_p4 = ap_phi_reg_pp0_iter0_data_1717_V_read1787_phi_reg_96336.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_53243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_53243_p6 = data_1717_V_read1787_phi_reg_96336.read();
    } else {
        ap_phi_mux_data_1717_V_read1787_rewind_phi_fu_53243_p6 = data_1717_V_read1787_rewind_reg_53239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1718_V_read1788_phi_phi_fu_96353_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1718_V_read1788_phi_phi_fu_96353_p4 = ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_53257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1718_V_read1788_phi_phi_fu_96353_p4 = data_1718_V_read.read();
        } else {
            ap_phi_mux_data_1718_V_read1788_phi_phi_fu_96353_p4 = ap_phi_reg_pp0_iter0_data_1718_V_read1788_phi_reg_96349.read();
        }
    } else {
        ap_phi_mux_data_1718_V_read1788_phi_phi_fu_96353_p4 = ap_phi_reg_pp0_iter0_data_1718_V_read1788_phi_reg_96349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_53257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_53257_p6 = data_1718_V_read1788_phi_reg_96349.read();
    } else {
        ap_phi_mux_data_1718_V_read1788_rewind_phi_fu_53257_p6 = data_1718_V_read1788_rewind_reg_53253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1719_V_read1789_phi_phi_fu_96366_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1719_V_read1789_phi_phi_fu_96366_p4 = ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_53271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1719_V_read1789_phi_phi_fu_96366_p4 = data_1719_V_read.read();
        } else {
            ap_phi_mux_data_1719_V_read1789_phi_phi_fu_96366_p4 = ap_phi_reg_pp0_iter0_data_1719_V_read1789_phi_reg_96362.read();
        }
    } else {
        ap_phi_mux_data_1719_V_read1789_phi_phi_fu_96366_p4 = ap_phi_reg_pp0_iter0_data_1719_V_read1789_phi_reg_96362.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_53271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_53271_p6 = data_1719_V_read1789_phi_reg_96362.read();
    } else {
        ap_phi_mux_data_1719_V_read1789_rewind_phi_fu_53271_p6 = data_1719_V_read1789_rewind_reg_53267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_171_V_read241_phi_phi_fu_76242_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_171_V_read241_phi_phi_fu_76242_p4 = ap_phi_mux_data_171_V_read241_rewind_phi_fu_31599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_171_V_read241_phi_phi_fu_76242_p4 = data_171_V_read.read();
        } else {
            ap_phi_mux_data_171_V_read241_phi_phi_fu_76242_p4 = ap_phi_reg_pp0_iter0_data_171_V_read241_phi_reg_76238.read();
        }
    } else {
        ap_phi_mux_data_171_V_read241_phi_phi_fu_76242_p4 = ap_phi_reg_pp0_iter0_data_171_V_read241_phi_reg_76238.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_171_V_read241_rewind_phi_fu_31599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_171_V_read241_rewind_phi_fu_31599_p6 = data_171_V_read241_phi_reg_76238.read();
    } else {
        ap_phi_mux_data_171_V_read241_rewind_phi_fu_31599_p6 = data_171_V_read241_rewind_reg_31595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1720_V_read1790_phi_phi_fu_96379_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1720_V_read1790_phi_phi_fu_96379_p4 = ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_53285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1720_V_read1790_phi_phi_fu_96379_p4 = data_1720_V_read.read();
        } else {
            ap_phi_mux_data_1720_V_read1790_phi_phi_fu_96379_p4 = ap_phi_reg_pp0_iter0_data_1720_V_read1790_phi_reg_96375.read();
        }
    } else {
        ap_phi_mux_data_1720_V_read1790_phi_phi_fu_96379_p4 = ap_phi_reg_pp0_iter0_data_1720_V_read1790_phi_reg_96375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_53285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_53285_p6 = data_1720_V_read1790_phi_reg_96375.read();
    } else {
        ap_phi_mux_data_1720_V_read1790_rewind_phi_fu_53285_p6 = data_1720_V_read1790_rewind_reg_53281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1721_V_read1791_phi_phi_fu_96392_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1721_V_read1791_phi_phi_fu_96392_p4 = ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_53299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1721_V_read1791_phi_phi_fu_96392_p4 = data_1721_V_read.read();
        } else {
            ap_phi_mux_data_1721_V_read1791_phi_phi_fu_96392_p4 = ap_phi_reg_pp0_iter0_data_1721_V_read1791_phi_reg_96388.read();
        }
    } else {
        ap_phi_mux_data_1721_V_read1791_phi_phi_fu_96392_p4 = ap_phi_reg_pp0_iter0_data_1721_V_read1791_phi_reg_96388.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_53299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_53299_p6 = data_1721_V_read1791_phi_reg_96388.read();
    } else {
        ap_phi_mux_data_1721_V_read1791_rewind_phi_fu_53299_p6 = data_1721_V_read1791_rewind_reg_53295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1722_V_read1792_phi_phi_fu_96405_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1722_V_read1792_phi_phi_fu_96405_p4 = ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_53313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1722_V_read1792_phi_phi_fu_96405_p4 = data_1722_V_read.read();
        } else {
            ap_phi_mux_data_1722_V_read1792_phi_phi_fu_96405_p4 = ap_phi_reg_pp0_iter0_data_1722_V_read1792_phi_reg_96401.read();
        }
    } else {
        ap_phi_mux_data_1722_V_read1792_phi_phi_fu_96405_p4 = ap_phi_reg_pp0_iter0_data_1722_V_read1792_phi_reg_96401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_53313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_53313_p6 = data_1722_V_read1792_phi_reg_96401.read();
    } else {
        ap_phi_mux_data_1722_V_read1792_rewind_phi_fu_53313_p6 = data_1722_V_read1792_rewind_reg_53309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1723_V_read1793_phi_phi_fu_96418_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1723_V_read1793_phi_phi_fu_96418_p4 = ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_53327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1723_V_read1793_phi_phi_fu_96418_p4 = data_1723_V_read.read();
        } else {
            ap_phi_mux_data_1723_V_read1793_phi_phi_fu_96418_p4 = ap_phi_reg_pp0_iter0_data_1723_V_read1793_phi_reg_96414.read();
        }
    } else {
        ap_phi_mux_data_1723_V_read1793_phi_phi_fu_96418_p4 = ap_phi_reg_pp0_iter0_data_1723_V_read1793_phi_reg_96414.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_53327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_53327_p6 = data_1723_V_read1793_phi_reg_96414.read();
    } else {
        ap_phi_mux_data_1723_V_read1793_rewind_phi_fu_53327_p6 = data_1723_V_read1793_rewind_reg_53323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1724_V_read1794_phi_phi_fu_96431_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1724_V_read1794_phi_phi_fu_96431_p4 = ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_53341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1724_V_read1794_phi_phi_fu_96431_p4 = data_1724_V_read.read();
        } else {
            ap_phi_mux_data_1724_V_read1794_phi_phi_fu_96431_p4 = ap_phi_reg_pp0_iter0_data_1724_V_read1794_phi_reg_96427.read();
        }
    } else {
        ap_phi_mux_data_1724_V_read1794_phi_phi_fu_96431_p4 = ap_phi_reg_pp0_iter0_data_1724_V_read1794_phi_reg_96427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_53341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_53341_p6 = data_1724_V_read1794_phi_reg_96427.read();
    } else {
        ap_phi_mux_data_1724_V_read1794_rewind_phi_fu_53341_p6 = data_1724_V_read1794_rewind_reg_53337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1725_V_read1795_phi_phi_fu_96444_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1725_V_read1795_phi_phi_fu_96444_p4 = ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_53355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1725_V_read1795_phi_phi_fu_96444_p4 = data_1725_V_read.read();
        } else {
            ap_phi_mux_data_1725_V_read1795_phi_phi_fu_96444_p4 = ap_phi_reg_pp0_iter0_data_1725_V_read1795_phi_reg_96440.read();
        }
    } else {
        ap_phi_mux_data_1725_V_read1795_phi_phi_fu_96444_p4 = ap_phi_reg_pp0_iter0_data_1725_V_read1795_phi_reg_96440.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_53355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_53355_p6 = data_1725_V_read1795_phi_reg_96440.read();
    } else {
        ap_phi_mux_data_1725_V_read1795_rewind_phi_fu_53355_p6 = data_1725_V_read1795_rewind_reg_53351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1726_V_read1796_phi_phi_fu_96457_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1726_V_read1796_phi_phi_fu_96457_p4 = ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_53369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1726_V_read1796_phi_phi_fu_96457_p4 = data_1726_V_read.read();
        } else {
            ap_phi_mux_data_1726_V_read1796_phi_phi_fu_96457_p4 = ap_phi_reg_pp0_iter0_data_1726_V_read1796_phi_reg_96453.read();
        }
    } else {
        ap_phi_mux_data_1726_V_read1796_phi_phi_fu_96457_p4 = ap_phi_reg_pp0_iter0_data_1726_V_read1796_phi_reg_96453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_53369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_53369_p6 = data_1726_V_read1796_phi_reg_96453.read();
    } else {
        ap_phi_mux_data_1726_V_read1796_rewind_phi_fu_53369_p6 = data_1726_V_read1796_rewind_reg_53365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1727_V_read1797_phi_phi_fu_96470_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1727_V_read1797_phi_phi_fu_96470_p4 = ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_53383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1727_V_read1797_phi_phi_fu_96470_p4 = data_1727_V_read.read();
        } else {
            ap_phi_mux_data_1727_V_read1797_phi_phi_fu_96470_p4 = ap_phi_reg_pp0_iter0_data_1727_V_read1797_phi_reg_96466.read();
        }
    } else {
        ap_phi_mux_data_1727_V_read1797_phi_phi_fu_96470_p4 = ap_phi_reg_pp0_iter0_data_1727_V_read1797_phi_reg_96466.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_53383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_53383_p6 = data_1727_V_read1797_phi_reg_96466.read();
    } else {
        ap_phi_mux_data_1727_V_read1797_rewind_phi_fu_53383_p6 = data_1727_V_read1797_rewind_reg_53379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1728_V_read1798_phi_phi_fu_96483_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1728_V_read1798_phi_phi_fu_96483_p4 = ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_53397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1728_V_read1798_phi_phi_fu_96483_p4 = data_1728_V_read.read();
        } else {
            ap_phi_mux_data_1728_V_read1798_phi_phi_fu_96483_p4 = ap_phi_reg_pp0_iter0_data_1728_V_read1798_phi_reg_96479.read();
        }
    } else {
        ap_phi_mux_data_1728_V_read1798_phi_phi_fu_96483_p4 = ap_phi_reg_pp0_iter0_data_1728_V_read1798_phi_reg_96479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_53397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_53397_p6 = data_1728_V_read1798_phi_reg_96479.read();
    } else {
        ap_phi_mux_data_1728_V_read1798_rewind_phi_fu_53397_p6 = data_1728_V_read1798_rewind_reg_53393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1729_V_read1799_phi_phi_fu_96496_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1729_V_read1799_phi_phi_fu_96496_p4 = ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_53411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1729_V_read1799_phi_phi_fu_96496_p4 = data_1729_V_read.read();
        } else {
            ap_phi_mux_data_1729_V_read1799_phi_phi_fu_96496_p4 = ap_phi_reg_pp0_iter0_data_1729_V_read1799_phi_reg_96492.read();
        }
    } else {
        ap_phi_mux_data_1729_V_read1799_phi_phi_fu_96496_p4 = ap_phi_reg_pp0_iter0_data_1729_V_read1799_phi_reg_96492.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_53411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_53411_p6 = data_1729_V_read1799_phi_reg_96492.read();
    } else {
        ap_phi_mux_data_1729_V_read1799_rewind_phi_fu_53411_p6 = data_1729_V_read1799_rewind_reg_53407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_172_V_read242_phi_phi_fu_76255_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_172_V_read242_phi_phi_fu_76255_p4 = ap_phi_mux_data_172_V_read242_rewind_phi_fu_31613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_172_V_read242_phi_phi_fu_76255_p4 = data_172_V_read.read();
        } else {
            ap_phi_mux_data_172_V_read242_phi_phi_fu_76255_p4 = ap_phi_reg_pp0_iter0_data_172_V_read242_phi_reg_76251.read();
        }
    } else {
        ap_phi_mux_data_172_V_read242_phi_phi_fu_76255_p4 = ap_phi_reg_pp0_iter0_data_172_V_read242_phi_reg_76251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_172_V_read242_rewind_phi_fu_31613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_172_V_read242_rewind_phi_fu_31613_p6 = data_172_V_read242_phi_reg_76251.read();
    } else {
        ap_phi_mux_data_172_V_read242_rewind_phi_fu_31613_p6 = data_172_V_read242_rewind_reg_31609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1730_V_read1800_phi_phi_fu_96509_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1730_V_read1800_phi_phi_fu_96509_p4 = ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_53425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1730_V_read1800_phi_phi_fu_96509_p4 = data_1730_V_read.read();
        } else {
            ap_phi_mux_data_1730_V_read1800_phi_phi_fu_96509_p4 = ap_phi_reg_pp0_iter0_data_1730_V_read1800_phi_reg_96505.read();
        }
    } else {
        ap_phi_mux_data_1730_V_read1800_phi_phi_fu_96509_p4 = ap_phi_reg_pp0_iter0_data_1730_V_read1800_phi_reg_96505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_53425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_53425_p6 = data_1730_V_read1800_phi_reg_96505.read();
    } else {
        ap_phi_mux_data_1730_V_read1800_rewind_phi_fu_53425_p6 = data_1730_V_read1800_rewind_reg_53421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1731_V_read1801_phi_phi_fu_96522_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1731_V_read1801_phi_phi_fu_96522_p4 = ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_53439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1731_V_read1801_phi_phi_fu_96522_p4 = data_1731_V_read.read();
        } else {
            ap_phi_mux_data_1731_V_read1801_phi_phi_fu_96522_p4 = ap_phi_reg_pp0_iter0_data_1731_V_read1801_phi_reg_96518.read();
        }
    } else {
        ap_phi_mux_data_1731_V_read1801_phi_phi_fu_96522_p4 = ap_phi_reg_pp0_iter0_data_1731_V_read1801_phi_reg_96518.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_53439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_53439_p6 = data_1731_V_read1801_phi_reg_96518.read();
    } else {
        ap_phi_mux_data_1731_V_read1801_rewind_phi_fu_53439_p6 = data_1731_V_read1801_rewind_reg_53435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1732_V_read1802_phi_phi_fu_96535_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1732_V_read1802_phi_phi_fu_96535_p4 = ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_53453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1732_V_read1802_phi_phi_fu_96535_p4 = data_1732_V_read.read();
        } else {
            ap_phi_mux_data_1732_V_read1802_phi_phi_fu_96535_p4 = ap_phi_reg_pp0_iter0_data_1732_V_read1802_phi_reg_96531.read();
        }
    } else {
        ap_phi_mux_data_1732_V_read1802_phi_phi_fu_96535_p4 = ap_phi_reg_pp0_iter0_data_1732_V_read1802_phi_reg_96531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_53453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_53453_p6 = data_1732_V_read1802_phi_reg_96531.read();
    } else {
        ap_phi_mux_data_1732_V_read1802_rewind_phi_fu_53453_p6 = data_1732_V_read1802_rewind_reg_53449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1733_V_read1803_phi_phi_fu_96548_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1733_V_read1803_phi_phi_fu_96548_p4 = ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_53467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1733_V_read1803_phi_phi_fu_96548_p4 = data_1733_V_read.read();
        } else {
            ap_phi_mux_data_1733_V_read1803_phi_phi_fu_96548_p4 = ap_phi_reg_pp0_iter0_data_1733_V_read1803_phi_reg_96544.read();
        }
    } else {
        ap_phi_mux_data_1733_V_read1803_phi_phi_fu_96548_p4 = ap_phi_reg_pp0_iter0_data_1733_V_read1803_phi_reg_96544.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_53467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_53467_p6 = data_1733_V_read1803_phi_reg_96544.read();
    } else {
        ap_phi_mux_data_1733_V_read1803_rewind_phi_fu_53467_p6 = data_1733_V_read1803_rewind_reg_53463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1734_V_read1804_phi_phi_fu_96561_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1734_V_read1804_phi_phi_fu_96561_p4 = ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_53481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1734_V_read1804_phi_phi_fu_96561_p4 = data_1734_V_read.read();
        } else {
            ap_phi_mux_data_1734_V_read1804_phi_phi_fu_96561_p4 = ap_phi_reg_pp0_iter0_data_1734_V_read1804_phi_reg_96557.read();
        }
    } else {
        ap_phi_mux_data_1734_V_read1804_phi_phi_fu_96561_p4 = ap_phi_reg_pp0_iter0_data_1734_V_read1804_phi_reg_96557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_53481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_53481_p6 = data_1734_V_read1804_phi_reg_96557.read();
    } else {
        ap_phi_mux_data_1734_V_read1804_rewind_phi_fu_53481_p6 = data_1734_V_read1804_rewind_reg_53477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1735_V_read1805_phi_phi_fu_96574_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1735_V_read1805_phi_phi_fu_96574_p4 = ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_53495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1735_V_read1805_phi_phi_fu_96574_p4 = data_1735_V_read.read();
        } else {
            ap_phi_mux_data_1735_V_read1805_phi_phi_fu_96574_p4 = ap_phi_reg_pp0_iter0_data_1735_V_read1805_phi_reg_96570.read();
        }
    } else {
        ap_phi_mux_data_1735_V_read1805_phi_phi_fu_96574_p4 = ap_phi_reg_pp0_iter0_data_1735_V_read1805_phi_reg_96570.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_53495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_53495_p6 = data_1735_V_read1805_phi_reg_96570.read();
    } else {
        ap_phi_mux_data_1735_V_read1805_rewind_phi_fu_53495_p6 = data_1735_V_read1805_rewind_reg_53491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1736_V_read1806_phi_phi_fu_96587_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1736_V_read1806_phi_phi_fu_96587_p4 = ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_53509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1736_V_read1806_phi_phi_fu_96587_p4 = data_1736_V_read.read();
        } else {
            ap_phi_mux_data_1736_V_read1806_phi_phi_fu_96587_p4 = ap_phi_reg_pp0_iter0_data_1736_V_read1806_phi_reg_96583.read();
        }
    } else {
        ap_phi_mux_data_1736_V_read1806_phi_phi_fu_96587_p4 = ap_phi_reg_pp0_iter0_data_1736_V_read1806_phi_reg_96583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_53509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_53509_p6 = data_1736_V_read1806_phi_reg_96583.read();
    } else {
        ap_phi_mux_data_1736_V_read1806_rewind_phi_fu_53509_p6 = data_1736_V_read1806_rewind_reg_53505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1737_V_read1807_phi_phi_fu_96600_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1737_V_read1807_phi_phi_fu_96600_p4 = ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_53523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1737_V_read1807_phi_phi_fu_96600_p4 = data_1737_V_read.read();
        } else {
            ap_phi_mux_data_1737_V_read1807_phi_phi_fu_96600_p4 = ap_phi_reg_pp0_iter0_data_1737_V_read1807_phi_reg_96596.read();
        }
    } else {
        ap_phi_mux_data_1737_V_read1807_phi_phi_fu_96600_p4 = ap_phi_reg_pp0_iter0_data_1737_V_read1807_phi_reg_96596.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_53523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_53523_p6 = data_1737_V_read1807_phi_reg_96596.read();
    } else {
        ap_phi_mux_data_1737_V_read1807_rewind_phi_fu_53523_p6 = data_1737_V_read1807_rewind_reg_53519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1738_V_read1808_phi_phi_fu_96613_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1738_V_read1808_phi_phi_fu_96613_p4 = ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_53537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1738_V_read1808_phi_phi_fu_96613_p4 = data_1738_V_read.read();
        } else {
            ap_phi_mux_data_1738_V_read1808_phi_phi_fu_96613_p4 = ap_phi_reg_pp0_iter0_data_1738_V_read1808_phi_reg_96609.read();
        }
    } else {
        ap_phi_mux_data_1738_V_read1808_phi_phi_fu_96613_p4 = ap_phi_reg_pp0_iter0_data_1738_V_read1808_phi_reg_96609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_53537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_53537_p6 = data_1738_V_read1808_phi_reg_96609.read();
    } else {
        ap_phi_mux_data_1738_V_read1808_rewind_phi_fu_53537_p6 = data_1738_V_read1808_rewind_reg_53533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1739_V_read1809_phi_phi_fu_96626_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1739_V_read1809_phi_phi_fu_96626_p4 = ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_53551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1739_V_read1809_phi_phi_fu_96626_p4 = data_1739_V_read.read();
        } else {
            ap_phi_mux_data_1739_V_read1809_phi_phi_fu_96626_p4 = ap_phi_reg_pp0_iter0_data_1739_V_read1809_phi_reg_96622.read();
        }
    } else {
        ap_phi_mux_data_1739_V_read1809_phi_phi_fu_96626_p4 = ap_phi_reg_pp0_iter0_data_1739_V_read1809_phi_reg_96622.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_53551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_53551_p6 = data_1739_V_read1809_phi_reg_96622.read();
    } else {
        ap_phi_mux_data_1739_V_read1809_rewind_phi_fu_53551_p6 = data_1739_V_read1809_rewind_reg_53547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_173_V_read243_phi_phi_fu_76268_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_173_V_read243_phi_phi_fu_76268_p4 = ap_phi_mux_data_173_V_read243_rewind_phi_fu_31627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_173_V_read243_phi_phi_fu_76268_p4 = data_173_V_read.read();
        } else {
            ap_phi_mux_data_173_V_read243_phi_phi_fu_76268_p4 = ap_phi_reg_pp0_iter0_data_173_V_read243_phi_reg_76264.read();
        }
    } else {
        ap_phi_mux_data_173_V_read243_phi_phi_fu_76268_p4 = ap_phi_reg_pp0_iter0_data_173_V_read243_phi_reg_76264.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_173_V_read243_rewind_phi_fu_31627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_173_V_read243_rewind_phi_fu_31627_p6 = data_173_V_read243_phi_reg_76264.read();
    } else {
        ap_phi_mux_data_173_V_read243_rewind_phi_fu_31627_p6 = data_173_V_read243_rewind_reg_31623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1740_V_read1810_phi_phi_fu_96639_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1740_V_read1810_phi_phi_fu_96639_p4 = ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_53565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1740_V_read1810_phi_phi_fu_96639_p4 = data_1740_V_read.read();
        } else {
            ap_phi_mux_data_1740_V_read1810_phi_phi_fu_96639_p4 = ap_phi_reg_pp0_iter0_data_1740_V_read1810_phi_reg_96635.read();
        }
    } else {
        ap_phi_mux_data_1740_V_read1810_phi_phi_fu_96639_p4 = ap_phi_reg_pp0_iter0_data_1740_V_read1810_phi_reg_96635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_53565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_53565_p6 = data_1740_V_read1810_phi_reg_96635.read();
    } else {
        ap_phi_mux_data_1740_V_read1810_rewind_phi_fu_53565_p6 = data_1740_V_read1810_rewind_reg_53561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1741_V_read1811_phi_phi_fu_96652_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1741_V_read1811_phi_phi_fu_96652_p4 = ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_53579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1741_V_read1811_phi_phi_fu_96652_p4 = data_1741_V_read.read();
        } else {
            ap_phi_mux_data_1741_V_read1811_phi_phi_fu_96652_p4 = ap_phi_reg_pp0_iter0_data_1741_V_read1811_phi_reg_96648.read();
        }
    } else {
        ap_phi_mux_data_1741_V_read1811_phi_phi_fu_96652_p4 = ap_phi_reg_pp0_iter0_data_1741_V_read1811_phi_reg_96648.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_53579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_53579_p6 = data_1741_V_read1811_phi_reg_96648.read();
    } else {
        ap_phi_mux_data_1741_V_read1811_rewind_phi_fu_53579_p6 = data_1741_V_read1811_rewind_reg_53575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1742_V_read1812_phi_phi_fu_96665_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1742_V_read1812_phi_phi_fu_96665_p4 = ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_53593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1742_V_read1812_phi_phi_fu_96665_p4 = data_1742_V_read.read();
        } else {
            ap_phi_mux_data_1742_V_read1812_phi_phi_fu_96665_p4 = ap_phi_reg_pp0_iter0_data_1742_V_read1812_phi_reg_96661.read();
        }
    } else {
        ap_phi_mux_data_1742_V_read1812_phi_phi_fu_96665_p4 = ap_phi_reg_pp0_iter0_data_1742_V_read1812_phi_reg_96661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_53593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_53593_p6 = data_1742_V_read1812_phi_reg_96661.read();
    } else {
        ap_phi_mux_data_1742_V_read1812_rewind_phi_fu_53593_p6 = data_1742_V_read1812_rewind_reg_53589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1743_V_read1813_phi_phi_fu_96678_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1743_V_read1813_phi_phi_fu_96678_p4 = ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_53607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1743_V_read1813_phi_phi_fu_96678_p4 = data_1743_V_read.read();
        } else {
            ap_phi_mux_data_1743_V_read1813_phi_phi_fu_96678_p4 = ap_phi_reg_pp0_iter0_data_1743_V_read1813_phi_reg_96674.read();
        }
    } else {
        ap_phi_mux_data_1743_V_read1813_phi_phi_fu_96678_p4 = ap_phi_reg_pp0_iter0_data_1743_V_read1813_phi_reg_96674.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_53607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_53607_p6 = data_1743_V_read1813_phi_reg_96674.read();
    } else {
        ap_phi_mux_data_1743_V_read1813_rewind_phi_fu_53607_p6 = data_1743_V_read1813_rewind_reg_53603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1744_V_read1814_phi_phi_fu_96691_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1744_V_read1814_phi_phi_fu_96691_p4 = ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_53621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1744_V_read1814_phi_phi_fu_96691_p4 = data_1744_V_read.read();
        } else {
            ap_phi_mux_data_1744_V_read1814_phi_phi_fu_96691_p4 = ap_phi_reg_pp0_iter0_data_1744_V_read1814_phi_reg_96687.read();
        }
    } else {
        ap_phi_mux_data_1744_V_read1814_phi_phi_fu_96691_p4 = ap_phi_reg_pp0_iter0_data_1744_V_read1814_phi_reg_96687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_53621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_53621_p6 = data_1744_V_read1814_phi_reg_96687.read();
    } else {
        ap_phi_mux_data_1744_V_read1814_rewind_phi_fu_53621_p6 = data_1744_V_read1814_rewind_reg_53617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1745_V_read1815_phi_phi_fu_96704_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1745_V_read1815_phi_phi_fu_96704_p4 = ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_53635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1745_V_read1815_phi_phi_fu_96704_p4 = data_1745_V_read.read();
        } else {
            ap_phi_mux_data_1745_V_read1815_phi_phi_fu_96704_p4 = ap_phi_reg_pp0_iter0_data_1745_V_read1815_phi_reg_96700.read();
        }
    } else {
        ap_phi_mux_data_1745_V_read1815_phi_phi_fu_96704_p4 = ap_phi_reg_pp0_iter0_data_1745_V_read1815_phi_reg_96700.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_53635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_53635_p6 = data_1745_V_read1815_phi_reg_96700.read();
    } else {
        ap_phi_mux_data_1745_V_read1815_rewind_phi_fu_53635_p6 = data_1745_V_read1815_rewind_reg_53631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1746_V_read1816_phi_phi_fu_96717_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1746_V_read1816_phi_phi_fu_96717_p4 = ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_53649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1746_V_read1816_phi_phi_fu_96717_p4 = data_1746_V_read.read();
        } else {
            ap_phi_mux_data_1746_V_read1816_phi_phi_fu_96717_p4 = ap_phi_reg_pp0_iter0_data_1746_V_read1816_phi_reg_96713.read();
        }
    } else {
        ap_phi_mux_data_1746_V_read1816_phi_phi_fu_96717_p4 = ap_phi_reg_pp0_iter0_data_1746_V_read1816_phi_reg_96713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_53649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_53649_p6 = data_1746_V_read1816_phi_reg_96713.read();
    } else {
        ap_phi_mux_data_1746_V_read1816_rewind_phi_fu_53649_p6 = data_1746_V_read1816_rewind_reg_53645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1747_V_read1817_phi_phi_fu_96730_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1747_V_read1817_phi_phi_fu_96730_p4 = ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_53663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1747_V_read1817_phi_phi_fu_96730_p4 = data_1747_V_read.read();
        } else {
            ap_phi_mux_data_1747_V_read1817_phi_phi_fu_96730_p4 = ap_phi_reg_pp0_iter0_data_1747_V_read1817_phi_reg_96726.read();
        }
    } else {
        ap_phi_mux_data_1747_V_read1817_phi_phi_fu_96730_p4 = ap_phi_reg_pp0_iter0_data_1747_V_read1817_phi_reg_96726.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_53663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_53663_p6 = data_1747_V_read1817_phi_reg_96726.read();
    } else {
        ap_phi_mux_data_1747_V_read1817_rewind_phi_fu_53663_p6 = data_1747_V_read1817_rewind_reg_53659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1748_V_read1818_phi_phi_fu_96743_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1748_V_read1818_phi_phi_fu_96743_p4 = ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_53677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1748_V_read1818_phi_phi_fu_96743_p4 = data_1748_V_read.read();
        } else {
            ap_phi_mux_data_1748_V_read1818_phi_phi_fu_96743_p4 = ap_phi_reg_pp0_iter0_data_1748_V_read1818_phi_reg_96739.read();
        }
    } else {
        ap_phi_mux_data_1748_V_read1818_phi_phi_fu_96743_p4 = ap_phi_reg_pp0_iter0_data_1748_V_read1818_phi_reg_96739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_53677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_53677_p6 = data_1748_V_read1818_phi_reg_96739.read();
    } else {
        ap_phi_mux_data_1748_V_read1818_rewind_phi_fu_53677_p6 = data_1748_V_read1818_rewind_reg_53673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1749_V_read1819_phi_phi_fu_96756_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1749_V_read1819_phi_phi_fu_96756_p4 = ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_53691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1749_V_read1819_phi_phi_fu_96756_p4 = data_1749_V_read.read();
        } else {
            ap_phi_mux_data_1749_V_read1819_phi_phi_fu_96756_p4 = ap_phi_reg_pp0_iter0_data_1749_V_read1819_phi_reg_96752.read();
        }
    } else {
        ap_phi_mux_data_1749_V_read1819_phi_phi_fu_96756_p4 = ap_phi_reg_pp0_iter0_data_1749_V_read1819_phi_reg_96752.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_53691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_53691_p6 = data_1749_V_read1819_phi_reg_96752.read();
    } else {
        ap_phi_mux_data_1749_V_read1819_rewind_phi_fu_53691_p6 = data_1749_V_read1819_rewind_reg_53687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_174_V_read244_phi_phi_fu_76281_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_174_V_read244_phi_phi_fu_76281_p4 = ap_phi_mux_data_174_V_read244_rewind_phi_fu_31641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_174_V_read244_phi_phi_fu_76281_p4 = data_174_V_read.read();
        } else {
            ap_phi_mux_data_174_V_read244_phi_phi_fu_76281_p4 = ap_phi_reg_pp0_iter0_data_174_V_read244_phi_reg_76277.read();
        }
    } else {
        ap_phi_mux_data_174_V_read244_phi_phi_fu_76281_p4 = ap_phi_reg_pp0_iter0_data_174_V_read244_phi_reg_76277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_174_V_read244_rewind_phi_fu_31641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_174_V_read244_rewind_phi_fu_31641_p6 = data_174_V_read244_phi_reg_76277.read();
    } else {
        ap_phi_mux_data_174_V_read244_rewind_phi_fu_31641_p6 = data_174_V_read244_rewind_reg_31637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1750_V_read1820_phi_phi_fu_96769_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1750_V_read1820_phi_phi_fu_96769_p4 = ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_53705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1750_V_read1820_phi_phi_fu_96769_p4 = data_1750_V_read.read();
        } else {
            ap_phi_mux_data_1750_V_read1820_phi_phi_fu_96769_p4 = ap_phi_reg_pp0_iter0_data_1750_V_read1820_phi_reg_96765.read();
        }
    } else {
        ap_phi_mux_data_1750_V_read1820_phi_phi_fu_96769_p4 = ap_phi_reg_pp0_iter0_data_1750_V_read1820_phi_reg_96765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_53705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_53705_p6 = data_1750_V_read1820_phi_reg_96765.read();
    } else {
        ap_phi_mux_data_1750_V_read1820_rewind_phi_fu_53705_p6 = data_1750_V_read1820_rewind_reg_53701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1751_V_read1821_phi_phi_fu_96782_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1751_V_read1821_phi_phi_fu_96782_p4 = ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_53719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1751_V_read1821_phi_phi_fu_96782_p4 = data_1751_V_read.read();
        } else {
            ap_phi_mux_data_1751_V_read1821_phi_phi_fu_96782_p4 = ap_phi_reg_pp0_iter0_data_1751_V_read1821_phi_reg_96778.read();
        }
    } else {
        ap_phi_mux_data_1751_V_read1821_phi_phi_fu_96782_p4 = ap_phi_reg_pp0_iter0_data_1751_V_read1821_phi_reg_96778.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_53719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_53719_p6 = data_1751_V_read1821_phi_reg_96778.read();
    } else {
        ap_phi_mux_data_1751_V_read1821_rewind_phi_fu_53719_p6 = data_1751_V_read1821_rewind_reg_53715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1752_V_read1822_phi_phi_fu_96795_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1752_V_read1822_phi_phi_fu_96795_p4 = ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_53733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1752_V_read1822_phi_phi_fu_96795_p4 = data_1752_V_read.read();
        } else {
            ap_phi_mux_data_1752_V_read1822_phi_phi_fu_96795_p4 = ap_phi_reg_pp0_iter0_data_1752_V_read1822_phi_reg_96791.read();
        }
    } else {
        ap_phi_mux_data_1752_V_read1822_phi_phi_fu_96795_p4 = ap_phi_reg_pp0_iter0_data_1752_V_read1822_phi_reg_96791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_53733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_53733_p6 = data_1752_V_read1822_phi_reg_96791.read();
    } else {
        ap_phi_mux_data_1752_V_read1822_rewind_phi_fu_53733_p6 = data_1752_V_read1822_rewind_reg_53729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1753_V_read1823_phi_phi_fu_96808_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1753_V_read1823_phi_phi_fu_96808_p4 = ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_53747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1753_V_read1823_phi_phi_fu_96808_p4 = data_1753_V_read.read();
        } else {
            ap_phi_mux_data_1753_V_read1823_phi_phi_fu_96808_p4 = ap_phi_reg_pp0_iter0_data_1753_V_read1823_phi_reg_96804.read();
        }
    } else {
        ap_phi_mux_data_1753_V_read1823_phi_phi_fu_96808_p4 = ap_phi_reg_pp0_iter0_data_1753_V_read1823_phi_reg_96804.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_53747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_53747_p6 = data_1753_V_read1823_phi_reg_96804.read();
    } else {
        ap_phi_mux_data_1753_V_read1823_rewind_phi_fu_53747_p6 = data_1753_V_read1823_rewind_reg_53743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1754_V_read1824_phi_phi_fu_96821_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1754_V_read1824_phi_phi_fu_96821_p4 = ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_53761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1754_V_read1824_phi_phi_fu_96821_p4 = data_1754_V_read.read();
        } else {
            ap_phi_mux_data_1754_V_read1824_phi_phi_fu_96821_p4 = ap_phi_reg_pp0_iter0_data_1754_V_read1824_phi_reg_96817.read();
        }
    } else {
        ap_phi_mux_data_1754_V_read1824_phi_phi_fu_96821_p4 = ap_phi_reg_pp0_iter0_data_1754_V_read1824_phi_reg_96817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_53761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_53761_p6 = data_1754_V_read1824_phi_reg_96817.read();
    } else {
        ap_phi_mux_data_1754_V_read1824_rewind_phi_fu_53761_p6 = data_1754_V_read1824_rewind_reg_53757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1755_V_read1825_phi_phi_fu_96834_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1755_V_read1825_phi_phi_fu_96834_p4 = ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_53775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1755_V_read1825_phi_phi_fu_96834_p4 = data_1755_V_read.read();
        } else {
            ap_phi_mux_data_1755_V_read1825_phi_phi_fu_96834_p4 = ap_phi_reg_pp0_iter0_data_1755_V_read1825_phi_reg_96830.read();
        }
    } else {
        ap_phi_mux_data_1755_V_read1825_phi_phi_fu_96834_p4 = ap_phi_reg_pp0_iter0_data_1755_V_read1825_phi_reg_96830.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_53775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_53775_p6 = data_1755_V_read1825_phi_reg_96830.read();
    } else {
        ap_phi_mux_data_1755_V_read1825_rewind_phi_fu_53775_p6 = data_1755_V_read1825_rewind_reg_53771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1756_V_read1826_phi_phi_fu_96847_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1756_V_read1826_phi_phi_fu_96847_p4 = ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_53789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1756_V_read1826_phi_phi_fu_96847_p4 = data_1756_V_read.read();
        } else {
            ap_phi_mux_data_1756_V_read1826_phi_phi_fu_96847_p4 = ap_phi_reg_pp0_iter0_data_1756_V_read1826_phi_reg_96843.read();
        }
    } else {
        ap_phi_mux_data_1756_V_read1826_phi_phi_fu_96847_p4 = ap_phi_reg_pp0_iter0_data_1756_V_read1826_phi_reg_96843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_53789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_53789_p6 = data_1756_V_read1826_phi_reg_96843.read();
    } else {
        ap_phi_mux_data_1756_V_read1826_rewind_phi_fu_53789_p6 = data_1756_V_read1826_rewind_reg_53785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1757_V_read1827_phi_phi_fu_96860_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1757_V_read1827_phi_phi_fu_96860_p4 = ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_53803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1757_V_read1827_phi_phi_fu_96860_p4 = data_1757_V_read.read();
        } else {
            ap_phi_mux_data_1757_V_read1827_phi_phi_fu_96860_p4 = ap_phi_reg_pp0_iter0_data_1757_V_read1827_phi_reg_96856.read();
        }
    } else {
        ap_phi_mux_data_1757_V_read1827_phi_phi_fu_96860_p4 = ap_phi_reg_pp0_iter0_data_1757_V_read1827_phi_reg_96856.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_53803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_53803_p6 = data_1757_V_read1827_phi_reg_96856.read();
    } else {
        ap_phi_mux_data_1757_V_read1827_rewind_phi_fu_53803_p6 = data_1757_V_read1827_rewind_reg_53799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1758_V_read1828_phi_phi_fu_96873_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1758_V_read1828_phi_phi_fu_96873_p4 = ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_53817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1758_V_read1828_phi_phi_fu_96873_p4 = data_1758_V_read.read();
        } else {
            ap_phi_mux_data_1758_V_read1828_phi_phi_fu_96873_p4 = ap_phi_reg_pp0_iter0_data_1758_V_read1828_phi_reg_96869.read();
        }
    } else {
        ap_phi_mux_data_1758_V_read1828_phi_phi_fu_96873_p4 = ap_phi_reg_pp0_iter0_data_1758_V_read1828_phi_reg_96869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_53817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_53817_p6 = data_1758_V_read1828_phi_reg_96869.read();
    } else {
        ap_phi_mux_data_1758_V_read1828_rewind_phi_fu_53817_p6 = data_1758_V_read1828_rewind_reg_53813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1759_V_read1829_phi_phi_fu_96886_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1759_V_read1829_phi_phi_fu_96886_p4 = ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_53831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1759_V_read1829_phi_phi_fu_96886_p4 = data_1759_V_read.read();
        } else {
            ap_phi_mux_data_1759_V_read1829_phi_phi_fu_96886_p4 = ap_phi_reg_pp0_iter0_data_1759_V_read1829_phi_reg_96882.read();
        }
    } else {
        ap_phi_mux_data_1759_V_read1829_phi_phi_fu_96886_p4 = ap_phi_reg_pp0_iter0_data_1759_V_read1829_phi_reg_96882.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_53831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_53831_p6 = data_1759_V_read1829_phi_reg_96882.read();
    } else {
        ap_phi_mux_data_1759_V_read1829_rewind_phi_fu_53831_p6 = data_1759_V_read1829_rewind_reg_53827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_175_V_read245_phi_phi_fu_76294_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_175_V_read245_phi_phi_fu_76294_p4 = ap_phi_mux_data_175_V_read245_rewind_phi_fu_31655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_175_V_read245_phi_phi_fu_76294_p4 = data_175_V_read.read();
        } else {
            ap_phi_mux_data_175_V_read245_phi_phi_fu_76294_p4 = ap_phi_reg_pp0_iter0_data_175_V_read245_phi_reg_76290.read();
        }
    } else {
        ap_phi_mux_data_175_V_read245_phi_phi_fu_76294_p4 = ap_phi_reg_pp0_iter0_data_175_V_read245_phi_reg_76290.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_175_V_read245_rewind_phi_fu_31655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_175_V_read245_rewind_phi_fu_31655_p6 = data_175_V_read245_phi_reg_76290.read();
    } else {
        ap_phi_mux_data_175_V_read245_rewind_phi_fu_31655_p6 = data_175_V_read245_rewind_reg_31651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1760_V_read1830_phi_phi_fu_96899_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1760_V_read1830_phi_phi_fu_96899_p4 = ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_53845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1760_V_read1830_phi_phi_fu_96899_p4 = data_1760_V_read.read();
        } else {
            ap_phi_mux_data_1760_V_read1830_phi_phi_fu_96899_p4 = ap_phi_reg_pp0_iter0_data_1760_V_read1830_phi_reg_96895.read();
        }
    } else {
        ap_phi_mux_data_1760_V_read1830_phi_phi_fu_96899_p4 = ap_phi_reg_pp0_iter0_data_1760_V_read1830_phi_reg_96895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_53845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_53845_p6 = data_1760_V_read1830_phi_reg_96895.read();
    } else {
        ap_phi_mux_data_1760_V_read1830_rewind_phi_fu_53845_p6 = data_1760_V_read1830_rewind_reg_53841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1761_V_read1831_phi_phi_fu_96912_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1761_V_read1831_phi_phi_fu_96912_p4 = ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_53859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1761_V_read1831_phi_phi_fu_96912_p4 = data_1761_V_read.read();
        } else {
            ap_phi_mux_data_1761_V_read1831_phi_phi_fu_96912_p4 = ap_phi_reg_pp0_iter0_data_1761_V_read1831_phi_reg_96908.read();
        }
    } else {
        ap_phi_mux_data_1761_V_read1831_phi_phi_fu_96912_p4 = ap_phi_reg_pp0_iter0_data_1761_V_read1831_phi_reg_96908.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_53859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_53859_p6 = data_1761_V_read1831_phi_reg_96908.read();
    } else {
        ap_phi_mux_data_1761_V_read1831_rewind_phi_fu_53859_p6 = data_1761_V_read1831_rewind_reg_53855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1762_V_read1832_phi_phi_fu_96925_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1762_V_read1832_phi_phi_fu_96925_p4 = ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_53873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1762_V_read1832_phi_phi_fu_96925_p4 = data_1762_V_read.read();
        } else {
            ap_phi_mux_data_1762_V_read1832_phi_phi_fu_96925_p4 = ap_phi_reg_pp0_iter0_data_1762_V_read1832_phi_reg_96921.read();
        }
    } else {
        ap_phi_mux_data_1762_V_read1832_phi_phi_fu_96925_p4 = ap_phi_reg_pp0_iter0_data_1762_V_read1832_phi_reg_96921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_53873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_53873_p6 = data_1762_V_read1832_phi_reg_96921.read();
    } else {
        ap_phi_mux_data_1762_V_read1832_rewind_phi_fu_53873_p6 = data_1762_V_read1832_rewind_reg_53869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1763_V_read1833_phi_phi_fu_96938_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1763_V_read1833_phi_phi_fu_96938_p4 = ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_53887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1763_V_read1833_phi_phi_fu_96938_p4 = data_1763_V_read.read();
        } else {
            ap_phi_mux_data_1763_V_read1833_phi_phi_fu_96938_p4 = ap_phi_reg_pp0_iter0_data_1763_V_read1833_phi_reg_96934.read();
        }
    } else {
        ap_phi_mux_data_1763_V_read1833_phi_phi_fu_96938_p4 = ap_phi_reg_pp0_iter0_data_1763_V_read1833_phi_reg_96934.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_53887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_53887_p6 = data_1763_V_read1833_phi_reg_96934.read();
    } else {
        ap_phi_mux_data_1763_V_read1833_rewind_phi_fu_53887_p6 = data_1763_V_read1833_rewind_reg_53883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1764_V_read1834_phi_phi_fu_96951_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1764_V_read1834_phi_phi_fu_96951_p4 = ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_53901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1764_V_read1834_phi_phi_fu_96951_p4 = data_1764_V_read.read();
        } else {
            ap_phi_mux_data_1764_V_read1834_phi_phi_fu_96951_p4 = ap_phi_reg_pp0_iter0_data_1764_V_read1834_phi_reg_96947.read();
        }
    } else {
        ap_phi_mux_data_1764_V_read1834_phi_phi_fu_96951_p4 = ap_phi_reg_pp0_iter0_data_1764_V_read1834_phi_reg_96947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_53901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_53901_p6 = data_1764_V_read1834_phi_reg_96947.read();
    } else {
        ap_phi_mux_data_1764_V_read1834_rewind_phi_fu_53901_p6 = data_1764_V_read1834_rewind_reg_53897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1765_V_read1835_phi_phi_fu_96964_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1765_V_read1835_phi_phi_fu_96964_p4 = ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_53915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1765_V_read1835_phi_phi_fu_96964_p4 = data_1765_V_read.read();
        } else {
            ap_phi_mux_data_1765_V_read1835_phi_phi_fu_96964_p4 = ap_phi_reg_pp0_iter0_data_1765_V_read1835_phi_reg_96960.read();
        }
    } else {
        ap_phi_mux_data_1765_V_read1835_phi_phi_fu_96964_p4 = ap_phi_reg_pp0_iter0_data_1765_V_read1835_phi_reg_96960.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_53915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_53915_p6 = data_1765_V_read1835_phi_reg_96960.read();
    } else {
        ap_phi_mux_data_1765_V_read1835_rewind_phi_fu_53915_p6 = data_1765_V_read1835_rewind_reg_53911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1766_V_read1836_phi_phi_fu_96977_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1766_V_read1836_phi_phi_fu_96977_p4 = ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_53929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1766_V_read1836_phi_phi_fu_96977_p4 = data_1766_V_read.read();
        } else {
            ap_phi_mux_data_1766_V_read1836_phi_phi_fu_96977_p4 = ap_phi_reg_pp0_iter0_data_1766_V_read1836_phi_reg_96973.read();
        }
    } else {
        ap_phi_mux_data_1766_V_read1836_phi_phi_fu_96977_p4 = ap_phi_reg_pp0_iter0_data_1766_V_read1836_phi_reg_96973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_53929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_53929_p6 = data_1766_V_read1836_phi_reg_96973.read();
    } else {
        ap_phi_mux_data_1766_V_read1836_rewind_phi_fu_53929_p6 = data_1766_V_read1836_rewind_reg_53925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1767_V_read1837_phi_phi_fu_96990_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1767_V_read1837_phi_phi_fu_96990_p4 = ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_53943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1767_V_read1837_phi_phi_fu_96990_p4 = data_1767_V_read.read();
        } else {
            ap_phi_mux_data_1767_V_read1837_phi_phi_fu_96990_p4 = ap_phi_reg_pp0_iter0_data_1767_V_read1837_phi_reg_96986.read();
        }
    } else {
        ap_phi_mux_data_1767_V_read1837_phi_phi_fu_96990_p4 = ap_phi_reg_pp0_iter0_data_1767_V_read1837_phi_reg_96986.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_53943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_53943_p6 = data_1767_V_read1837_phi_reg_96986.read();
    } else {
        ap_phi_mux_data_1767_V_read1837_rewind_phi_fu_53943_p6 = data_1767_V_read1837_rewind_reg_53939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1768_V_read1838_phi_phi_fu_97003_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1768_V_read1838_phi_phi_fu_97003_p4 = ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_53957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1768_V_read1838_phi_phi_fu_97003_p4 = data_1768_V_read.read();
        } else {
            ap_phi_mux_data_1768_V_read1838_phi_phi_fu_97003_p4 = ap_phi_reg_pp0_iter0_data_1768_V_read1838_phi_reg_96999.read();
        }
    } else {
        ap_phi_mux_data_1768_V_read1838_phi_phi_fu_97003_p4 = ap_phi_reg_pp0_iter0_data_1768_V_read1838_phi_reg_96999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_53957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_53957_p6 = data_1768_V_read1838_phi_reg_96999.read();
    } else {
        ap_phi_mux_data_1768_V_read1838_rewind_phi_fu_53957_p6 = data_1768_V_read1838_rewind_reg_53953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1769_V_read1839_phi_phi_fu_97016_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1769_V_read1839_phi_phi_fu_97016_p4 = ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_53971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1769_V_read1839_phi_phi_fu_97016_p4 = data_1769_V_read.read();
        } else {
            ap_phi_mux_data_1769_V_read1839_phi_phi_fu_97016_p4 = ap_phi_reg_pp0_iter0_data_1769_V_read1839_phi_reg_97012.read();
        }
    } else {
        ap_phi_mux_data_1769_V_read1839_phi_phi_fu_97016_p4 = ap_phi_reg_pp0_iter0_data_1769_V_read1839_phi_reg_97012.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_53971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_53971_p6 = data_1769_V_read1839_phi_reg_97012.read();
    } else {
        ap_phi_mux_data_1769_V_read1839_rewind_phi_fu_53971_p6 = data_1769_V_read1839_rewind_reg_53967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_176_V_read246_phi_phi_fu_76307_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_176_V_read246_phi_phi_fu_76307_p4 = ap_phi_mux_data_176_V_read246_rewind_phi_fu_31669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_176_V_read246_phi_phi_fu_76307_p4 = data_176_V_read.read();
        } else {
            ap_phi_mux_data_176_V_read246_phi_phi_fu_76307_p4 = ap_phi_reg_pp0_iter0_data_176_V_read246_phi_reg_76303.read();
        }
    } else {
        ap_phi_mux_data_176_V_read246_phi_phi_fu_76307_p4 = ap_phi_reg_pp0_iter0_data_176_V_read246_phi_reg_76303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_176_V_read246_rewind_phi_fu_31669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_176_V_read246_rewind_phi_fu_31669_p6 = data_176_V_read246_phi_reg_76303.read();
    } else {
        ap_phi_mux_data_176_V_read246_rewind_phi_fu_31669_p6 = data_176_V_read246_rewind_reg_31665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1770_V_read1840_phi_phi_fu_97029_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1770_V_read1840_phi_phi_fu_97029_p4 = ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_53985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1770_V_read1840_phi_phi_fu_97029_p4 = data_1770_V_read.read();
        } else {
            ap_phi_mux_data_1770_V_read1840_phi_phi_fu_97029_p4 = ap_phi_reg_pp0_iter0_data_1770_V_read1840_phi_reg_97025.read();
        }
    } else {
        ap_phi_mux_data_1770_V_read1840_phi_phi_fu_97029_p4 = ap_phi_reg_pp0_iter0_data_1770_V_read1840_phi_reg_97025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_53985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_53985_p6 = data_1770_V_read1840_phi_reg_97025.read();
    } else {
        ap_phi_mux_data_1770_V_read1840_rewind_phi_fu_53985_p6 = data_1770_V_read1840_rewind_reg_53981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1771_V_read1841_phi_phi_fu_97042_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1771_V_read1841_phi_phi_fu_97042_p4 = ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_53999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1771_V_read1841_phi_phi_fu_97042_p4 = data_1771_V_read.read();
        } else {
            ap_phi_mux_data_1771_V_read1841_phi_phi_fu_97042_p4 = ap_phi_reg_pp0_iter0_data_1771_V_read1841_phi_reg_97038.read();
        }
    } else {
        ap_phi_mux_data_1771_V_read1841_phi_phi_fu_97042_p4 = ap_phi_reg_pp0_iter0_data_1771_V_read1841_phi_reg_97038.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_53999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_53999_p6 = data_1771_V_read1841_phi_reg_97038.read();
    } else {
        ap_phi_mux_data_1771_V_read1841_rewind_phi_fu_53999_p6 = data_1771_V_read1841_rewind_reg_53995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1772_V_read1842_phi_phi_fu_97055_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1772_V_read1842_phi_phi_fu_97055_p4 = ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_54013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1772_V_read1842_phi_phi_fu_97055_p4 = data_1772_V_read.read();
        } else {
            ap_phi_mux_data_1772_V_read1842_phi_phi_fu_97055_p4 = ap_phi_reg_pp0_iter0_data_1772_V_read1842_phi_reg_97051.read();
        }
    } else {
        ap_phi_mux_data_1772_V_read1842_phi_phi_fu_97055_p4 = ap_phi_reg_pp0_iter0_data_1772_V_read1842_phi_reg_97051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_54013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_54013_p6 = data_1772_V_read1842_phi_reg_97051.read();
    } else {
        ap_phi_mux_data_1772_V_read1842_rewind_phi_fu_54013_p6 = data_1772_V_read1842_rewind_reg_54009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1773_V_read1843_phi_phi_fu_97068_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1773_V_read1843_phi_phi_fu_97068_p4 = ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_54027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1773_V_read1843_phi_phi_fu_97068_p4 = data_1773_V_read.read();
        } else {
            ap_phi_mux_data_1773_V_read1843_phi_phi_fu_97068_p4 = ap_phi_reg_pp0_iter0_data_1773_V_read1843_phi_reg_97064.read();
        }
    } else {
        ap_phi_mux_data_1773_V_read1843_phi_phi_fu_97068_p4 = ap_phi_reg_pp0_iter0_data_1773_V_read1843_phi_reg_97064.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_54027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_54027_p6 = data_1773_V_read1843_phi_reg_97064.read();
    } else {
        ap_phi_mux_data_1773_V_read1843_rewind_phi_fu_54027_p6 = data_1773_V_read1843_rewind_reg_54023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1774_V_read1844_phi_phi_fu_97081_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1774_V_read1844_phi_phi_fu_97081_p4 = ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_54041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1774_V_read1844_phi_phi_fu_97081_p4 = data_1774_V_read.read();
        } else {
            ap_phi_mux_data_1774_V_read1844_phi_phi_fu_97081_p4 = ap_phi_reg_pp0_iter0_data_1774_V_read1844_phi_reg_97077.read();
        }
    } else {
        ap_phi_mux_data_1774_V_read1844_phi_phi_fu_97081_p4 = ap_phi_reg_pp0_iter0_data_1774_V_read1844_phi_reg_97077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_54041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_54041_p6 = data_1774_V_read1844_phi_reg_97077.read();
    } else {
        ap_phi_mux_data_1774_V_read1844_rewind_phi_fu_54041_p6 = data_1774_V_read1844_rewind_reg_54037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1775_V_read1845_phi_phi_fu_97094_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1775_V_read1845_phi_phi_fu_97094_p4 = ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_54055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1775_V_read1845_phi_phi_fu_97094_p4 = data_1775_V_read.read();
        } else {
            ap_phi_mux_data_1775_V_read1845_phi_phi_fu_97094_p4 = ap_phi_reg_pp0_iter0_data_1775_V_read1845_phi_reg_97090.read();
        }
    } else {
        ap_phi_mux_data_1775_V_read1845_phi_phi_fu_97094_p4 = ap_phi_reg_pp0_iter0_data_1775_V_read1845_phi_reg_97090.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_54055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_54055_p6 = data_1775_V_read1845_phi_reg_97090.read();
    } else {
        ap_phi_mux_data_1775_V_read1845_rewind_phi_fu_54055_p6 = data_1775_V_read1845_rewind_reg_54051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1776_V_read1846_phi_phi_fu_97107_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1776_V_read1846_phi_phi_fu_97107_p4 = ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_54069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1776_V_read1846_phi_phi_fu_97107_p4 = data_1776_V_read.read();
        } else {
            ap_phi_mux_data_1776_V_read1846_phi_phi_fu_97107_p4 = ap_phi_reg_pp0_iter0_data_1776_V_read1846_phi_reg_97103.read();
        }
    } else {
        ap_phi_mux_data_1776_V_read1846_phi_phi_fu_97107_p4 = ap_phi_reg_pp0_iter0_data_1776_V_read1846_phi_reg_97103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_54069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_54069_p6 = data_1776_V_read1846_phi_reg_97103.read();
    } else {
        ap_phi_mux_data_1776_V_read1846_rewind_phi_fu_54069_p6 = data_1776_V_read1846_rewind_reg_54065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1777_V_read1847_phi_phi_fu_97120_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1777_V_read1847_phi_phi_fu_97120_p4 = ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_54083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1777_V_read1847_phi_phi_fu_97120_p4 = data_1777_V_read.read();
        } else {
            ap_phi_mux_data_1777_V_read1847_phi_phi_fu_97120_p4 = ap_phi_reg_pp0_iter0_data_1777_V_read1847_phi_reg_97116.read();
        }
    } else {
        ap_phi_mux_data_1777_V_read1847_phi_phi_fu_97120_p4 = ap_phi_reg_pp0_iter0_data_1777_V_read1847_phi_reg_97116.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_54083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_54083_p6 = data_1777_V_read1847_phi_reg_97116.read();
    } else {
        ap_phi_mux_data_1777_V_read1847_rewind_phi_fu_54083_p6 = data_1777_V_read1847_rewind_reg_54079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1778_V_read1848_phi_phi_fu_97133_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1778_V_read1848_phi_phi_fu_97133_p4 = ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_54097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1778_V_read1848_phi_phi_fu_97133_p4 = data_1778_V_read.read();
        } else {
            ap_phi_mux_data_1778_V_read1848_phi_phi_fu_97133_p4 = ap_phi_reg_pp0_iter0_data_1778_V_read1848_phi_reg_97129.read();
        }
    } else {
        ap_phi_mux_data_1778_V_read1848_phi_phi_fu_97133_p4 = ap_phi_reg_pp0_iter0_data_1778_V_read1848_phi_reg_97129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_54097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_54097_p6 = data_1778_V_read1848_phi_reg_97129.read();
    } else {
        ap_phi_mux_data_1778_V_read1848_rewind_phi_fu_54097_p6 = data_1778_V_read1848_rewind_reg_54093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1779_V_read1849_phi_phi_fu_97146_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1779_V_read1849_phi_phi_fu_97146_p4 = ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_54111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1779_V_read1849_phi_phi_fu_97146_p4 = data_1779_V_read.read();
        } else {
            ap_phi_mux_data_1779_V_read1849_phi_phi_fu_97146_p4 = ap_phi_reg_pp0_iter0_data_1779_V_read1849_phi_reg_97142.read();
        }
    } else {
        ap_phi_mux_data_1779_V_read1849_phi_phi_fu_97146_p4 = ap_phi_reg_pp0_iter0_data_1779_V_read1849_phi_reg_97142.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_54111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_54111_p6 = data_1779_V_read1849_phi_reg_97142.read();
    } else {
        ap_phi_mux_data_1779_V_read1849_rewind_phi_fu_54111_p6 = data_1779_V_read1849_rewind_reg_54107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_177_V_read247_phi_phi_fu_76320_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_177_V_read247_phi_phi_fu_76320_p4 = ap_phi_mux_data_177_V_read247_rewind_phi_fu_31683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_177_V_read247_phi_phi_fu_76320_p4 = data_177_V_read.read();
        } else {
            ap_phi_mux_data_177_V_read247_phi_phi_fu_76320_p4 = ap_phi_reg_pp0_iter0_data_177_V_read247_phi_reg_76316.read();
        }
    } else {
        ap_phi_mux_data_177_V_read247_phi_phi_fu_76320_p4 = ap_phi_reg_pp0_iter0_data_177_V_read247_phi_reg_76316.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_177_V_read247_rewind_phi_fu_31683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_177_V_read247_rewind_phi_fu_31683_p6 = data_177_V_read247_phi_reg_76316.read();
    } else {
        ap_phi_mux_data_177_V_read247_rewind_phi_fu_31683_p6 = data_177_V_read247_rewind_reg_31679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1780_V_read1850_phi_phi_fu_97159_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1780_V_read1850_phi_phi_fu_97159_p4 = ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_54125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1780_V_read1850_phi_phi_fu_97159_p4 = data_1780_V_read.read();
        } else {
            ap_phi_mux_data_1780_V_read1850_phi_phi_fu_97159_p4 = ap_phi_reg_pp0_iter0_data_1780_V_read1850_phi_reg_97155.read();
        }
    } else {
        ap_phi_mux_data_1780_V_read1850_phi_phi_fu_97159_p4 = ap_phi_reg_pp0_iter0_data_1780_V_read1850_phi_reg_97155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_54125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_54125_p6 = data_1780_V_read1850_phi_reg_97155.read();
    } else {
        ap_phi_mux_data_1780_V_read1850_rewind_phi_fu_54125_p6 = data_1780_V_read1850_rewind_reg_54121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1781_V_read1851_phi_phi_fu_97172_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1781_V_read1851_phi_phi_fu_97172_p4 = ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_54139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1781_V_read1851_phi_phi_fu_97172_p4 = data_1781_V_read.read();
        } else {
            ap_phi_mux_data_1781_V_read1851_phi_phi_fu_97172_p4 = ap_phi_reg_pp0_iter0_data_1781_V_read1851_phi_reg_97168.read();
        }
    } else {
        ap_phi_mux_data_1781_V_read1851_phi_phi_fu_97172_p4 = ap_phi_reg_pp0_iter0_data_1781_V_read1851_phi_reg_97168.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_54139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_54139_p6 = data_1781_V_read1851_phi_reg_97168.read();
    } else {
        ap_phi_mux_data_1781_V_read1851_rewind_phi_fu_54139_p6 = data_1781_V_read1851_rewind_reg_54135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1782_V_read1852_phi_phi_fu_97185_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1782_V_read1852_phi_phi_fu_97185_p4 = ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_54153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1782_V_read1852_phi_phi_fu_97185_p4 = data_1782_V_read.read();
        } else {
            ap_phi_mux_data_1782_V_read1852_phi_phi_fu_97185_p4 = ap_phi_reg_pp0_iter0_data_1782_V_read1852_phi_reg_97181.read();
        }
    } else {
        ap_phi_mux_data_1782_V_read1852_phi_phi_fu_97185_p4 = ap_phi_reg_pp0_iter0_data_1782_V_read1852_phi_reg_97181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_54153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_54153_p6 = data_1782_V_read1852_phi_reg_97181.read();
    } else {
        ap_phi_mux_data_1782_V_read1852_rewind_phi_fu_54153_p6 = data_1782_V_read1852_rewind_reg_54149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1783_V_read1853_phi_phi_fu_97198_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1783_V_read1853_phi_phi_fu_97198_p4 = ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_54167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1783_V_read1853_phi_phi_fu_97198_p4 = data_1783_V_read.read();
        } else {
            ap_phi_mux_data_1783_V_read1853_phi_phi_fu_97198_p4 = ap_phi_reg_pp0_iter0_data_1783_V_read1853_phi_reg_97194.read();
        }
    } else {
        ap_phi_mux_data_1783_V_read1853_phi_phi_fu_97198_p4 = ap_phi_reg_pp0_iter0_data_1783_V_read1853_phi_reg_97194.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_54167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_54167_p6 = data_1783_V_read1853_phi_reg_97194.read();
    } else {
        ap_phi_mux_data_1783_V_read1853_rewind_phi_fu_54167_p6 = data_1783_V_read1853_rewind_reg_54163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1784_V_read1854_phi_phi_fu_97211_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1784_V_read1854_phi_phi_fu_97211_p4 = ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_54181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1784_V_read1854_phi_phi_fu_97211_p4 = data_1784_V_read.read();
        } else {
            ap_phi_mux_data_1784_V_read1854_phi_phi_fu_97211_p4 = ap_phi_reg_pp0_iter0_data_1784_V_read1854_phi_reg_97207.read();
        }
    } else {
        ap_phi_mux_data_1784_V_read1854_phi_phi_fu_97211_p4 = ap_phi_reg_pp0_iter0_data_1784_V_read1854_phi_reg_97207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_54181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_54181_p6 = data_1784_V_read1854_phi_reg_97207.read();
    } else {
        ap_phi_mux_data_1784_V_read1854_rewind_phi_fu_54181_p6 = data_1784_V_read1854_rewind_reg_54177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1785_V_read1855_phi_phi_fu_97224_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1785_V_read1855_phi_phi_fu_97224_p4 = ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_54195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1785_V_read1855_phi_phi_fu_97224_p4 = data_1785_V_read.read();
        } else {
            ap_phi_mux_data_1785_V_read1855_phi_phi_fu_97224_p4 = ap_phi_reg_pp0_iter0_data_1785_V_read1855_phi_reg_97220.read();
        }
    } else {
        ap_phi_mux_data_1785_V_read1855_phi_phi_fu_97224_p4 = ap_phi_reg_pp0_iter0_data_1785_V_read1855_phi_reg_97220.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_54195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_54195_p6 = data_1785_V_read1855_phi_reg_97220.read();
    } else {
        ap_phi_mux_data_1785_V_read1855_rewind_phi_fu_54195_p6 = data_1785_V_read1855_rewind_reg_54191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1786_V_read1856_phi_phi_fu_97237_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1786_V_read1856_phi_phi_fu_97237_p4 = ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_54209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1786_V_read1856_phi_phi_fu_97237_p4 = data_1786_V_read.read();
        } else {
            ap_phi_mux_data_1786_V_read1856_phi_phi_fu_97237_p4 = ap_phi_reg_pp0_iter0_data_1786_V_read1856_phi_reg_97233.read();
        }
    } else {
        ap_phi_mux_data_1786_V_read1856_phi_phi_fu_97237_p4 = ap_phi_reg_pp0_iter0_data_1786_V_read1856_phi_reg_97233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_54209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_54209_p6 = data_1786_V_read1856_phi_reg_97233.read();
    } else {
        ap_phi_mux_data_1786_V_read1856_rewind_phi_fu_54209_p6 = data_1786_V_read1856_rewind_reg_54205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1787_V_read1857_phi_phi_fu_97250_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1787_V_read1857_phi_phi_fu_97250_p4 = ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_54223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1787_V_read1857_phi_phi_fu_97250_p4 = data_1787_V_read.read();
        } else {
            ap_phi_mux_data_1787_V_read1857_phi_phi_fu_97250_p4 = ap_phi_reg_pp0_iter0_data_1787_V_read1857_phi_reg_97246.read();
        }
    } else {
        ap_phi_mux_data_1787_V_read1857_phi_phi_fu_97250_p4 = ap_phi_reg_pp0_iter0_data_1787_V_read1857_phi_reg_97246.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_54223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_54223_p6 = data_1787_V_read1857_phi_reg_97246.read();
    } else {
        ap_phi_mux_data_1787_V_read1857_rewind_phi_fu_54223_p6 = data_1787_V_read1857_rewind_reg_54219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1788_V_read1858_phi_phi_fu_97263_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1788_V_read1858_phi_phi_fu_97263_p4 = ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_54237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1788_V_read1858_phi_phi_fu_97263_p4 = data_1788_V_read.read();
        } else {
            ap_phi_mux_data_1788_V_read1858_phi_phi_fu_97263_p4 = ap_phi_reg_pp0_iter0_data_1788_V_read1858_phi_reg_97259.read();
        }
    } else {
        ap_phi_mux_data_1788_V_read1858_phi_phi_fu_97263_p4 = ap_phi_reg_pp0_iter0_data_1788_V_read1858_phi_reg_97259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_54237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_54237_p6 = data_1788_V_read1858_phi_reg_97259.read();
    } else {
        ap_phi_mux_data_1788_V_read1858_rewind_phi_fu_54237_p6 = data_1788_V_read1858_rewind_reg_54233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1789_V_read1859_phi_phi_fu_97276_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1789_V_read1859_phi_phi_fu_97276_p4 = ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_54251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1789_V_read1859_phi_phi_fu_97276_p4 = data_1789_V_read.read();
        } else {
            ap_phi_mux_data_1789_V_read1859_phi_phi_fu_97276_p4 = ap_phi_reg_pp0_iter0_data_1789_V_read1859_phi_reg_97272.read();
        }
    } else {
        ap_phi_mux_data_1789_V_read1859_phi_phi_fu_97276_p4 = ap_phi_reg_pp0_iter0_data_1789_V_read1859_phi_reg_97272.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_54251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_54251_p6 = data_1789_V_read1859_phi_reg_97272.read();
    } else {
        ap_phi_mux_data_1789_V_read1859_rewind_phi_fu_54251_p6 = data_1789_V_read1859_rewind_reg_54247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_178_V_read248_phi_phi_fu_76333_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_178_V_read248_phi_phi_fu_76333_p4 = ap_phi_mux_data_178_V_read248_rewind_phi_fu_31697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_178_V_read248_phi_phi_fu_76333_p4 = data_178_V_read.read();
        } else {
            ap_phi_mux_data_178_V_read248_phi_phi_fu_76333_p4 = ap_phi_reg_pp0_iter0_data_178_V_read248_phi_reg_76329.read();
        }
    } else {
        ap_phi_mux_data_178_V_read248_phi_phi_fu_76333_p4 = ap_phi_reg_pp0_iter0_data_178_V_read248_phi_reg_76329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_178_V_read248_rewind_phi_fu_31697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_178_V_read248_rewind_phi_fu_31697_p6 = data_178_V_read248_phi_reg_76329.read();
    } else {
        ap_phi_mux_data_178_V_read248_rewind_phi_fu_31697_p6 = data_178_V_read248_rewind_reg_31693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1790_V_read1860_phi_phi_fu_97289_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1790_V_read1860_phi_phi_fu_97289_p4 = ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_54265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1790_V_read1860_phi_phi_fu_97289_p4 = data_1790_V_read.read();
        } else {
            ap_phi_mux_data_1790_V_read1860_phi_phi_fu_97289_p4 = ap_phi_reg_pp0_iter0_data_1790_V_read1860_phi_reg_97285.read();
        }
    } else {
        ap_phi_mux_data_1790_V_read1860_phi_phi_fu_97289_p4 = ap_phi_reg_pp0_iter0_data_1790_V_read1860_phi_reg_97285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_54265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_54265_p6 = data_1790_V_read1860_phi_reg_97285.read();
    } else {
        ap_phi_mux_data_1790_V_read1860_rewind_phi_fu_54265_p6 = data_1790_V_read1860_rewind_reg_54261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1791_V_read1861_phi_phi_fu_97302_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1791_V_read1861_phi_phi_fu_97302_p4 = ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_54279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1791_V_read1861_phi_phi_fu_97302_p4 = data_1791_V_read.read();
        } else {
            ap_phi_mux_data_1791_V_read1861_phi_phi_fu_97302_p4 = ap_phi_reg_pp0_iter0_data_1791_V_read1861_phi_reg_97298.read();
        }
    } else {
        ap_phi_mux_data_1791_V_read1861_phi_phi_fu_97302_p4 = ap_phi_reg_pp0_iter0_data_1791_V_read1861_phi_reg_97298.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_54279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_54279_p6 = data_1791_V_read1861_phi_reg_97298.read();
    } else {
        ap_phi_mux_data_1791_V_read1861_rewind_phi_fu_54279_p6 = data_1791_V_read1861_rewind_reg_54275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1792_V_read1862_phi_phi_fu_97315_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1792_V_read1862_phi_phi_fu_97315_p4 = ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_54293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1792_V_read1862_phi_phi_fu_97315_p4 = data_1792_V_read.read();
        } else {
            ap_phi_mux_data_1792_V_read1862_phi_phi_fu_97315_p4 = ap_phi_reg_pp0_iter0_data_1792_V_read1862_phi_reg_97311.read();
        }
    } else {
        ap_phi_mux_data_1792_V_read1862_phi_phi_fu_97315_p4 = ap_phi_reg_pp0_iter0_data_1792_V_read1862_phi_reg_97311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_54293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_54293_p6 = data_1792_V_read1862_phi_reg_97311.read();
    } else {
        ap_phi_mux_data_1792_V_read1862_rewind_phi_fu_54293_p6 = data_1792_V_read1862_rewind_reg_54289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1793_V_read1863_phi_phi_fu_97328_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1793_V_read1863_phi_phi_fu_97328_p4 = ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_54307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1793_V_read1863_phi_phi_fu_97328_p4 = data_1793_V_read.read();
        } else {
            ap_phi_mux_data_1793_V_read1863_phi_phi_fu_97328_p4 = ap_phi_reg_pp0_iter0_data_1793_V_read1863_phi_reg_97324.read();
        }
    } else {
        ap_phi_mux_data_1793_V_read1863_phi_phi_fu_97328_p4 = ap_phi_reg_pp0_iter0_data_1793_V_read1863_phi_reg_97324.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_54307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_54307_p6 = data_1793_V_read1863_phi_reg_97324.read();
    } else {
        ap_phi_mux_data_1793_V_read1863_rewind_phi_fu_54307_p6 = data_1793_V_read1863_rewind_reg_54303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1794_V_read1864_phi_phi_fu_97341_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1794_V_read1864_phi_phi_fu_97341_p4 = ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_54321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1794_V_read1864_phi_phi_fu_97341_p4 = data_1794_V_read.read();
        } else {
            ap_phi_mux_data_1794_V_read1864_phi_phi_fu_97341_p4 = ap_phi_reg_pp0_iter0_data_1794_V_read1864_phi_reg_97337.read();
        }
    } else {
        ap_phi_mux_data_1794_V_read1864_phi_phi_fu_97341_p4 = ap_phi_reg_pp0_iter0_data_1794_V_read1864_phi_reg_97337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_54321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_54321_p6 = data_1794_V_read1864_phi_reg_97337.read();
    } else {
        ap_phi_mux_data_1794_V_read1864_rewind_phi_fu_54321_p6 = data_1794_V_read1864_rewind_reg_54317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1795_V_read1865_phi_phi_fu_97354_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1795_V_read1865_phi_phi_fu_97354_p4 = ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_54335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1795_V_read1865_phi_phi_fu_97354_p4 = data_1795_V_read.read();
        } else {
            ap_phi_mux_data_1795_V_read1865_phi_phi_fu_97354_p4 = ap_phi_reg_pp0_iter0_data_1795_V_read1865_phi_reg_97350.read();
        }
    } else {
        ap_phi_mux_data_1795_V_read1865_phi_phi_fu_97354_p4 = ap_phi_reg_pp0_iter0_data_1795_V_read1865_phi_reg_97350.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_54335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_54335_p6 = data_1795_V_read1865_phi_reg_97350.read();
    } else {
        ap_phi_mux_data_1795_V_read1865_rewind_phi_fu_54335_p6 = data_1795_V_read1865_rewind_reg_54331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1796_V_read1866_phi_phi_fu_97367_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1796_V_read1866_phi_phi_fu_97367_p4 = ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_54349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1796_V_read1866_phi_phi_fu_97367_p4 = data_1796_V_read.read();
        } else {
            ap_phi_mux_data_1796_V_read1866_phi_phi_fu_97367_p4 = ap_phi_reg_pp0_iter0_data_1796_V_read1866_phi_reg_97363.read();
        }
    } else {
        ap_phi_mux_data_1796_V_read1866_phi_phi_fu_97367_p4 = ap_phi_reg_pp0_iter0_data_1796_V_read1866_phi_reg_97363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_54349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_54349_p6 = data_1796_V_read1866_phi_reg_97363.read();
    } else {
        ap_phi_mux_data_1796_V_read1866_rewind_phi_fu_54349_p6 = data_1796_V_read1866_rewind_reg_54345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1797_V_read1867_phi_phi_fu_97380_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1797_V_read1867_phi_phi_fu_97380_p4 = ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_54363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1797_V_read1867_phi_phi_fu_97380_p4 = data_1797_V_read.read();
        } else {
            ap_phi_mux_data_1797_V_read1867_phi_phi_fu_97380_p4 = ap_phi_reg_pp0_iter0_data_1797_V_read1867_phi_reg_97376.read();
        }
    } else {
        ap_phi_mux_data_1797_V_read1867_phi_phi_fu_97380_p4 = ap_phi_reg_pp0_iter0_data_1797_V_read1867_phi_reg_97376.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_54363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_54363_p6 = data_1797_V_read1867_phi_reg_97376.read();
    } else {
        ap_phi_mux_data_1797_V_read1867_rewind_phi_fu_54363_p6 = data_1797_V_read1867_rewind_reg_54359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1798_V_read1868_phi_phi_fu_97393_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1798_V_read1868_phi_phi_fu_97393_p4 = ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_54377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1798_V_read1868_phi_phi_fu_97393_p4 = data_1798_V_read.read();
        } else {
            ap_phi_mux_data_1798_V_read1868_phi_phi_fu_97393_p4 = ap_phi_reg_pp0_iter0_data_1798_V_read1868_phi_reg_97389.read();
        }
    } else {
        ap_phi_mux_data_1798_V_read1868_phi_phi_fu_97393_p4 = ap_phi_reg_pp0_iter0_data_1798_V_read1868_phi_reg_97389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_54377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_54377_p6 = data_1798_V_read1868_phi_reg_97389.read();
    } else {
        ap_phi_mux_data_1798_V_read1868_rewind_phi_fu_54377_p6 = data_1798_V_read1868_rewind_reg_54373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1799_V_read1869_phi_phi_fu_97406_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1799_V_read1869_phi_phi_fu_97406_p4 = ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_54391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1799_V_read1869_phi_phi_fu_97406_p4 = data_1799_V_read.read();
        } else {
            ap_phi_mux_data_1799_V_read1869_phi_phi_fu_97406_p4 = ap_phi_reg_pp0_iter0_data_1799_V_read1869_phi_reg_97402.read();
        }
    } else {
        ap_phi_mux_data_1799_V_read1869_phi_phi_fu_97406_p4 = ap_phi_reg_pp0_iter0_data_1799_V_read1869_phi_reg_97402.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_54391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_54391_p6 = data_1799_V_read1869_phi_reg_97402.read();
    } else {
        ap_phi_mux_data_1799_V_read1869_rewind_phi_fu_54391_p6 = data_1799_V_read1869_rewind_reg_54387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_179_V_read249_phi_phi_fu_76346_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_179_V_read249_phi_phi_fu_76346_p4 = ap_phi_mux_data_179_V_read249_rewind_phi_fu_31711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_179_V_read249_phi_phi_fu_76346_p4 = data_179_V_read.read();
        } else {
            ap_phi_mux_data_179_V_read249_phi_phi_fu_76346_p4 = ap_phi_reg_pp0_iter0_data_179_V_read249_phi_reg_76342.read();
        }
    } else {
        ap_phi_mux_data_179_V_read249_phi_phi_fu_76346_p4 = ap_phi_reg_pp0_iter0_data_179_V_read249_phi_reg_76342.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_179_V_read249_rewind_phi_fu_31711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_179_V_read249_rewind_phi_fu_31711_p6 = data_179_V_read249_phi_reg_76342.read();
    } else {
        ap_phi_mux_data_179_V_read249_rewind_phi_fu_31711_p6 = data_179_V_read249_rewind_reg_31707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_17_V_read87_phi_phi_fu_74240_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_17_V_read87_phi_phi_fu_74240_p4 = ap_phi_mux_data_17_V_read87_rewind_phi_fu_29443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_17_V_read87_phi_phi_fu_74240_p4 = data_17_V_read.read();
        } else {
            ap_phi_mux_data_17_V_read87_phi_phi_fu_74240_p4 = ap_phi_reg_pp0_iter0_data_17_V_read87_phi_reg_74236.read();
        }
    } else {
        ap_phi_mux_data_17_V_read87_phi_phi_fu_74240_p4 = ap_phi_reg_pp0_iter0_data_17_V_read87_phi_reg_74236.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_17_V_read87_rewind_phi_fu_29443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_17_V_read87_rewind_phi_fu_29443_p6 = data_17_V_read87_phi_reg_74236.read();
    } else {
        ap_phi_mux_data_17_V_read87_rewind_phi_fu_29443_p6 = data_17_V_read87_rewind_reg_29439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1800_V_read1870_phi_phi_fu_97419_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1800_V_read1870_phi_phi_fu_97419_p4 = ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_54405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1800_V_read1870_phi_phi_fu_97419_p4 = data_1800_V_read.read();
        } else {
            ap_phi_mux_data_1800_V_read1870_phi_phi_fu_97419_p4 = ap_phi_reg_pp0_iter0_data_1800_V_read1870_phi_reg_97415.read();
        }
    } else {
        ap_phi_mux_data_1800_V_read1870_phi_phi_fu_97419_p4 = ap_phi_reg_pp0_iter0_data_1800_V_read1870_phi_reg_97415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_54405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_54405_p6 = data_1800_V_read1870_phi_reg_97415.read();
    } else {
        ap_phi_mux_data_1800_V_read1870_rewind_phi_fu_54405_p6 = data_1800_V_read1870_rewind_reg_54401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1801_V_read1871_phi_phi_fu_97432_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1801_V_read1871_phi_phi_fu_97432_p4 = ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_54419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1801_V_read1871_phi_phi_fu_97432_p4 = data_1801_V_read.read();
        } else {
            ap_phi_mux_data_1801_V_read1871_phi_phi_fu_97432_p4 = ap_phi_reg_pp0_iter0_data_1801_V_read1871_phi_reg_97428.read();
        }
    } else {
        ap_phi_mux_data_1801_V_read1871_phi_phi_fu_97432_p4 = ap_phi_reg_pp0_iter0_data_1801_V_read1871_phi_reg_97428.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_54419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_54419_p6 = data_1801_V_read1871_phi_reg_97428.read();
    } else {
        ap_phi_mux_data_1801_V_read1871_rewind_phi_fu_54419_p6 = data_1801_V_read1871_rewind_reg_54415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1802_V_read1872_phi_phi_fu_97445_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1802_V_read1872_phi_phi_fu_97445_p4 = ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_54433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1802_V_read1872_phi_phi_fu_97445_p4 = data_1802_V_read.read();
        } else {
            ap_phi_mux_data_1802_V_read1872_phi_phi_fu_97445_p4 = ap_phi_reg_pp0_iter0_data_1802_V_read1872_phi_reg_97441.read();
        }
    } else {
        ap_phi_mux_data_1802_V_read1872_phi_phi_fu_97445_p4 = ap_phi_reg_pp0_iter0_data_1802_V_read1872_phi_reg_97441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_54433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_54433_p6 = data_1802_V_read1872_phi_reg_97441.read();
    } else {
        ap_phi_mux_data_1802_V_read1872_rewind_phi_fu_54433_p6 = data_1802_V_read1872_rewind_reg_54429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1803_V_read1873_phi_phi_fu_97458_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1803_V_read1873_phi_phi_fu_97458_p4 = ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_54447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1803_V_read1873_phi_phi_fu_97458_p4 = data_1803_V_read.read();
        } else {
            ap_phi_mux_data_1803_V_read1873_phi_phi_fu_97458_p4 = ap_phi_reg_pp0_iter0_data_1803_V_read1873_phi_reg_97454.read();
        }
    } else {
        ap_phi_mux_data_1803_V_read1873_phi_phi_fu_97458_p4 = ap_phi_reg_pp0_iter0_data_1803_V_read1873_phi_reg_97454.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_54447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_54447_p6 = data_1803_V_read1873_phi_reg_97454.read();
    } else {
        ap_phi_mux_data_1803_V_read1873_rewind_phi_fu_54447_p6 = data_1803_V_read1873_rewind_reg_54443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1804_V_read1874_phi_phi_fu_97471_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1804_V_read1874_phi_phi_fu_97471_p4 = ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_54461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1804_V_read1874_phi_phi_fu_97471_p4 = data_1804_V_read.read();
        } else {
            ap_phi_mux_data_1804_V_read1874_phi_phi_fu_97471_p4 = ap_phi_reg_pp0_iter0_data_1804_V_read1874_phi_reg_97467.read();
        }
    } else {
        ap_phi_mux_data_1804_V_read1874_phi_phi_fu_97471_p4 = ap_phi_reg_pp0_iter0_data_1804_V_read1874_phi_reg_97467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_54461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_54461_p6 = data_1804_V_read1874_phi_reg_97467.read();
    } else {
        ap_phi_mux_data_1804_V_read1874_rewind_phi_fu_54461_p6 = data_1804_V_read1874_rewind_reg_54457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1805_V_read1875_phi_phi_fu_97484_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1805_V_read1875_phi_phi_fu_97484_p4 = ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_54475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1805_V_read1875_phi_phi_fu_97484_p4 = data_1805_V_read.read();
        } else {
            ap_phi_mux_data_1805_V_read1875_phi_phi_fu_97484_p4 = ap_phi_reg_pp0_iter0_data_1805_V_read1875_phi_reg_97480.read();
        }
    } else {
        ap_phi_mux_data_1805_V_read1875_phi_phi_fu_97484_p4 = ap_phi_reg_pp0_iter0_data_1805_V_read1875_phi_reg_97480.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_54475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_54475_p6 = data_1805_V_read1875_phi_reg_97480.read();
    } else {
        ap_phi_mux_data_1805_V_read1875_rewind_phi_fu_54475_p6 = data_1805_V_read1875_rewind_reg_54471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1806_V_read1876_phi_phi_fu_97497_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1806_V_read1876_phi_phi_fu_97497_p4 = ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_54489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1806_V_read1876_phi_phi_fu_97497_p4 = data_1806_V_read.read();
        } else {
            ap_phi_mux_data_1806_V_read1876_phi_phi_fu_97497_p4 = ap_phi_reg_pp0_iter0_data_1806_V_read1876_phi_reg_97493.read();
        }
    } else {
        ap_phi_mux_data_1806_V_read1876_phi_phi_fu_97497_p4 = ap_phi_reg_pp0_iter0_data_1806_V_read1876_phi_reg_97493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_54489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_54489_p6 = data_1806_V_read1876_phi_reg_97493.read();
    } else {
        ap_phi_mux_data_1806_V_read1876_rewind_phi_fu_54489_p6 = data_1806_V_read1876_rewind_reg_54485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1807_V_read1877_phi_phi_fu_97510_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1807_V_read1877_phi_phi_fu_97510_p4 = ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_54503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1807_V_read1877_phi_phi_fu_97510_p4 = data_1807_V_read.read();
        } else {
            ap_phi_mux_data_1807_V_read1877_phi_phi_fu_97510_p4 = ap_phi_reg_pp0_iter0_data_1807_V_read1877_phi_reg_97506.read();
        }
    } else {
        ap_phi_mux_data_1807_V_read1877_phi_phi_fu_97510_p4 = ap_phi_reg_pp0_iter0_data_1807_V_read1877_phi_reg_97506.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_54503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_54503_p6 = data_1807_V_read1877_phi_reg_97506.read();
    } else {
        ap_phi_mux_data_1807_V_read1877_rewind_phi_fu_54503_p6 = data_1807_V_read1877_rewind_reg_54499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1808_V_read1878_phi_phi_fu_97523_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1808_V_read1878_phi_phi_fu_97523_p4 = ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_54517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1808_V_read1878_phi_phi_fu_97523_p4 = data_1808_V_read.read();
        } else {
            ap_phi_mux_data_1808_V_read1878_phi_phi_fu_97523_p4 = ap_phi_reg_pp0_iter0_data_1808_V_read1878_phi_reg_97519.read();
        }
    } else {
        ap_phi_mux_data_1808_V_read1878_phi_phi_fu_97523_p4 = ap_phi_reg_pp0_iter0_data_1808_V_read1878_phi_reg_97519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_54517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_54517_p6 = data_1808_V_read1878_phi_reg_97519.read();
    } else {
        ap_phi_mux_data_1808_V_read1878_rewind_phi_fu_54517_p6 = data_1808_V_read1878_rewind_reg_54513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1809_V_read1879_phi_phi_fu_97536_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1809_V_read1879_phi_phi_fu_97536_p4 = ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_54531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1809_V_read1879_phi_phi_fu_97536_p4 = data_1809_V_read.read();
        } else {
            ap_phi_mux_data_1809_V_read1879_phi_phi_fu_97536_p4 = ap_phi_reg_pp0_iter0_data_1809_V_read1879_phi_reg_97532.read();
        }
    } else {
        ap_phi_mux_data_1809_V_read1879_phi_phi_fu_97536_p4 = ap_phi_reg_pp0_iter0_data_1809_V_read1879_phi_reg_97532.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_54531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_54531_p6 = data_1809_V_read1879_phi_reg_97532.read();
    } else {
        ap_phi_mux_data_1809_V_read1879_rewind_phi_fu_54531_p6 = data_1809_V_read1879_rewind_reg_54527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_180_V_read250_phi_phi_fu_76359_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_180_V_read250_phi_phi_fu_76359_p4 = ap_phi_mux_data_180_V_read250_rewind_phi_fu_31725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_180_V_read250_phi_phi_fu_76359_p4 = data_180_V_read.read();
        } else {
            ap_phi_mux_data_180_V_read250_phi_phi_fu_76359_p4 = ap_phi_reg_pp0_iter0_data_180_V_read250_phi_reg_76355.read();
        }
    } else {
        ap_phi_mux_data_180_V_read250_phi_phi_fu_76359_p4 = ap_phi_reg_pp0_iter0_data_180_V_read250_phi_reg_76355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_180_V_read250_rewind_phi_fu_31725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_180_V_read250_rewind_phi_fu_31725_p6 = data_180_V_read250_phi_reg_76355.read();
    } else {
        ap_phi_mux_data_180_V_read250_rewind_phi_fu_31725_p6 = data_180_V_read250_rewind_reg_31721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1810_V_read1880_phi_phi_fu_97549_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1810_V_read1880_phi_phi_fu_97549_p4 = ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_54545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1810_V_read1880_phi_phi_fu_97549_p4 = data_1810_V_read.read();
        } else {
            ap_phi_mux_data_1810_V_read1880_phi_phi_fu_97549_p4 = ap_phi_reg_pp0_iter0_data_1810_V_read1880_phi_reg_97545.read();
        }
    } else {
        ap_phi_mux_data_1810_V_read1880_phi_phi_fu_97549_p4 = ap_phi_reg_pp0_iter0_data_1810_V_read1880_phi_reg_97545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_54545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_54545_p6 = data_1810_V_read1880_phi_reg_97545.read();
    } else {
        ap_phi_mux_data_1810_V_read1880_rewind_phi_fu_54545_p6 = data_1810_V_read1880_rewind_reg_54541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1811_V_read1881_phi_phi_fu_97562_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1811_V_read1881_phi_phi_fu_97562_p4 = ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_54559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1811_V_read1881_phi_phi_fu_97562_p4 = data_1811_V_read.read();
        } else {
            ap_phi_mux_data_1811_V_read1881_phi_phi_fu_97562_p4 = ap_phi_reg_pp0_iter0_data_1811_V_read1881_phi_reg_97558.read();
        }
    } else {
        ap_phi_mux_data_1811_V_read1881_phi_phi_fu_97562_p4 = ap_phi_reg_pp0_iter0_data_1811_V_read1881_phi_reg_97558.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_54559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_54559_p6 = data_1811_V_read1881_phi_reg_97558.read();
    } else {
        ap_phi_mux_data_1811_V_read1881_rewind_phi_fu_54559_p6 = data_1811_V_read1881_rewind_reg_54555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1812_V_read1882_phi_phi_fu_97575_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1812_V_read1882_phi_phi_fu_97575_p4 = ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_54573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1812_V_read1882_phi_phi_fu_97575_p4 = data_1812_V_read.read();
        } else {
            ap_phi_mux_data_1812_V_read1882_phi_phi_fu_97575_p4 = ap_phi_reg_pp0_iter0_data_1812_V_read1882_phi_reg_97571.read();
        }
    } else {
        ap_phi_mux_data_1812_V_read1882_phi_phi_fu_97575_p4 = ap_phi_reg_pp0_iter0_data_1812_V_read1882_phi_reg_97571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_54573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_54573_p6 = data_1812_V_read1882_phi_reg_97571.read();
    } else {
        ap_phi_mux_data_1812_V_read1882_rewind_phi_fu_54573_p6 = data_1812_V_read1882_rewind_reg_54569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1813_V_read1883_phi_phi_fu_97588_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1813_V_read1883_phi_phi_fu_97588_p4 = ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_54587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1813_V_read1883_phi_phi_fu_97588_p4 = data_1813_V_read.read();
        } else {
            ap_phi_mux_data_1813_V_read1883_phi_phi_fu_97588_p4 = ap_phi_reg_pp0_iter0_data_1813_V_read1883_phi_reg_97584.read();
        }
    } else {
        ap_phi_mux_data_1813_V_read1883_phi_phi_fu_97588_p4 = ap_phi_reg_pp0_iter0_data_1813_V_read1883_phi_reg_97584.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_54587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_54587_p6 = data_1813_V_read1883_phi_reg_97584.read();
    } else {
        ap_phi_mux_data_1813_V_read1883_rewind_phi_fu_54587_p6 = data_1813_V_read1883_rewind_reg_54583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1814_V_read1884_phi_phi_fu_97601_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1814_V_read1884_phi_phi_fu_97601_p4 = ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_54601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1814_V_read1884_phi_phi_fu_97601_p4 = data_1814_V_read.read();
        } else {
            ap_phi_mux_data_1814_V_read1884_phi_phi_fu_97601_p4 = ap_phi_reg_pp0_iter0_data_1814_V_read1884_phi_reg_97597.read();
        }
    } else {
        ap_phi_mux_data_1814_V_read1884_phi_phi_fu_97601_p4 = ap_phi_reg_pp0_iter0_data_1814_V_read1884_phi_reg_97597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_54601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_54601_p6 = data_1814_V_read1884_phi_reg_97597.read();
    } else {
        ap_phi_mux_data_1814_V_read1884_rewind_phi_fu_54601_p6 = data_1814_V_read1884_rewind_reg_54597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1815_V_read1885_phi_phi_fu_97614_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1815_V_read1885_phi_phi_fu_97614_p4 = ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_54615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1815_V_read1885_phi_phi_fu_97614_p4 = data_1815_V_read.read();
        } else {
            ap_phi_mux_data_1815_V_read1885_phi_phi_fu_97614_p4 = ap_phi_reg_pp0_iter0_data_1815_V_read1885_phi_reg_97610.read();
        }
    } else {
        ap_phi_mux_data_1815_V_read1885_phi_phi_fu_97614_p4 = ap_phi_reg_pp0_iter0_data_1815_V_read1885_phi_reg_97610.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_54615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_54615_p6 = data_1815_V_read1885_phi_reg_97610.read();
    } else {
        ap_phi_mux_data_1815_V_read1885_rewind_phi_fu_54615_p6 = data_1815_V_read1885_rewind_reg_54611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1816_V_read1886_phi_phi_fu_97627_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1816_V_read1886_phi_phi_fu_97627_p4 = ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_54629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1816_V_read1886_phi_phi_fu_97627_p4 = data_1816_V_read.read();
        } else {
            ap_phi_mux_data_1816_V_read1886_phi_phi_fu_97627_p4 = ap_phi_reg_pp0_iter0_data_1816_V_read1886_phi_reg_97623.read();
        }
    } else {
        ap_phi_mux_data_1816_V_read1886_phi_phi_fu_97627_p4 = ap_phi_reg_pp0_iter0_data_1816_V_read1886_phi_reg_97623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_54629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_54629_p6 = data_1816_V_read1886_phi_reg_97623.read();
    } else {
        ap_phi_mux_data_1816_V_read1886_rewind_phi_fu_54629_p6 = data_1816_V_read1886_rewind_reg_54625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1817_V_read1887_phi_phi_fu_97640_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1817_V_read1887_phi_phi_fu_97640_p4 = ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_54643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1817_V_read1887_phi_phi_fu_97640_p4 = data_1817_V_read.read();
        } else {
            ap_phi_mux_data_1817_V_read1887_phi_phi_fu_97640_p4 = ap_phi_reg_pp0_iter0_data_1817_V_read1887_phi_reg_97636.read();
        }
    } else {
        ap_phi_mux_data_1817_V_read1887_phi_phi_fu_97640_p4 = ap_phi_reg_pp0_iter0_data_1817_V_read1887_phi_reg_97636.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_54643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_54643_p6 = data_1817_V_read1887_phi_reg_97636.read();
    } else {
        ap_phi_mux_data_1817_V_read1887_rewind_phi_fu_54643_p6 = data_1817_V_read1887_rewind_reg_54639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1818_V_read1888_phi_phi_fu_97653_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1818_V_read1888_phi_phi_fu_97653_p4 = ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_54657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1818_V_read1888_phi_phi_fu_97653_p4 = data_1818_V_read.read();
        } else {
            ap_phi_mux_data_1818_V_read1888_phi_phi_fu_97653_p4 = ap_phi_reg_pp0_iter0_data_1818_V_read1888_phi_reg_97649.read();
        }
    } else {
        ap_phi_mux_data_1818_V_read1888_phi_phi_fu_97653_p4 = ap_phi_reg_pp0_iter0_data_1818_V_read1888_phi_reg_97649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_54657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_54657_p6 = data_1818_V_read1888_phi_reg_97649.read();
    } else {
        ap_phi_mux_data_1818_V_read1888_rewind_phi_fu_54657_p6 = data_1818_V_read1888_rewind_reg_54653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1819_V_read1889_phi_phi_fu_97666_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1819_V_read1889_phi_phi_fu_97666_p4 = ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_54671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1819_V_read1889_phi_phi_fu_97666_p4 = data_1819_V_read.read();
        } else {
            ap_phi_mux_data_1819_V_read1889_phi_phi_fu_97666_p4 = ap_phi_reg_pp0_iter0_data_1819_V_read1889_phi_reg_97662.read();
        }
    } else {
        ap_phi_mux_data_1819_V_read1889_phi_phi_fu_97666_p4 = ap_phi_reg_pp0_iter0_data_1819_V_read1889_phi_reg_97662.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_54671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_54671_p6 = data_1819_V_read1889_phi_reg_97662.read();
    } else {
        ap_phi_mux_data_1819_V_read1889_rewind_phi_fu_54671_p6 = data_1819_V_read1889_rewind_reg_54667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_181_V_read251_phi_phi_fu_76372_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_181_V_read251_phi_phi_fu_76372_p4 = ap_phi_mux_data_181_V_read251_rewind_phi_fu_31739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_181_V_read251_phi_phi_fu_76372_p4 = data_181_V_read.read();
        } else {
            ap_phi_mux_data_181_V_read251_phi_phi_fu_76372_p4 = ap_phi_reg_pp0_iter0_data_181_V_read251_phi_reg_76368.read();
        }
    } else {
        ap_phi_mux_data_181_V_read251_phi_phi_fu_76372_p4 = ap_phi_reg_pp0_iter0_data_181_V_read251_phi_reg_76368.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_181_V_read251_rewind_phi_fu_31739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_181_V_read251_rewind_phi_fu_31739_p6 = data_181_V_read251_phi_reg_76368.read();
    } else {
        ap_phi_mux_data_181_V_read251_rewind_phi_fu_31739_p6 = data_181_V_read251_rewind_reg_31735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1820_V_read1890_phi_phi_fu_97679_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1820_V_read1890_phi_phi_fu_97679_p4 = ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_54685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1820_V_read1890_phi_phi_fu_97679_p4 = data_1820_V_read.read();
        } else {
            ap_phi_mux_data_1820_V_read1890_phi_phi_fu_97679_p4 = ap_phi_reg_pp0_iter0_data_1820_V_read1890_phi_reg_97675.read();
        }
    } else {
        ap_phi_mux_data_1820_V_read1890_phi_phi_fu_97679_p4 = ap_phi_reg_pp0_iter0_data_1820_V_read1890_phi_reg_97675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_54685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_54685_p6 = data_1820_V_read1890_phi_reg_97675.read();
    } else {
        ap_phi_mux_data_1820_V_read1890_rewind_phi_fu_54685_p6 = data_1820_V_read1890_rewind_reg_54681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1821_V_read1891_phi_phi_fu_97692_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1821_V_read1891_phi_phi_fu_97692_p4 = ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_54699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1821_V_read1891_phi_phi_fu_97692_p4 = data_1821_V_read.read();
        } else {
            ap_phi_mux_data_1821_V_read1891_phi_phi_fu_97692_p4 = ap_phi_reg_pp0_iter0_data_1821_V_read1891_phi_reg_97688.read();
        }
    } else {
        ap_phi_mux_data_1821_V_read1891_phi_phi_fu_97692_p4 = ap_phi_reg_pp0_iter0_data_1821_V_read1891_phi_reg_97688.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_54699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_54699_p6 = data_1821_V_read1891_phi_reg_97688.read();
    } else {
        ap_phi_mux_data_1821_V_read1891_rewind_phi_fu_54699_p6 = data_1821_V_read1891_rewind_reg_54695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1822_V_read1892_phi_phi_fu_97705_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1822_V_read1892_phi_phi_fu_97705_p4 = ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_54713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1822_V_read1892_phi_phi_fu_97705_p4 = data_1822_V_read.read();
        } else {
            ap_phi_mux_data_1822_V_read1892_phi_phi_fu_97705_p4 = ap_phi_reg_pp0_iter0_data_1822_V_read1892_phi_reg_97701.read();
        }
    } else {
        ap_phi_mux_data_1822_V_read1892_phi_phi_fu_97705_p4 = ap_phi_reg_pp0_iter0_data_1822_V_read1892_phi_reg_97701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_54713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_54713_p6 = data_1822_V_read1892_phi_reg_97701.read();
    } else {
        ap_phi_mux_data_1822_V_read1892_rewind_phi_fu_54713_p6 = data_1822_V_read1892_rewind_reg_54709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1823_V_read1893_phi_phi_fu_97718_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1823_V_read1893_phi_phi_fu_97718_p4 = ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_54727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1823_V_read1893_phi_phi_fu_97718_p4 = data_1823_V_read.read();
        } else {
            ap_phi_mux_data_1823_V_read1893_phi_phi_fu_97718_p4 = ap_phi_reg_pp0_iter0_data_1823_V_read1893_phi_reg_97714.read();
        }
    } else {
        ap_phi_mux_data_1823_V_read1893_phi_phi_fu_97718_p4 = ap_phi_reg_pp0_iter0_data_1823_V_read1893_phi_reg_97714.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_54727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_54727_p6 = data_1823_V_read1893_phi_reg_97714.read();
    } else {
        ap_phi_mux_data_1823_V_read1893_rewind_phi_fu_54727_p6 = data_1823_V_read1893_rewind_reg_54723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1824_V_read1894_phi_phi_fu_97731_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1824_V_read1894_phi_phi_fu_97731_p4 = ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_54741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1824_V_read1894_phi_phi_fu_97731_p4 = data_1824_V_read.read();
        } else {
            ap_phi_mux_data_1824_V_read1894_phi_phi_fu_97731_p4 = ap_phi_reg_pp0_iter0_data_1824_V_read1894_phi_reg_97727.read();
        }
    } else {
        ap_phi_mux_data_1824_V_read1894_phi_phi_fu_97731_p4 = ap_phi_reg_pp0_iter0_data_1824_V_read1894_phi_reg_97727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_54741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_54741_p6 = data_1824_V_read1894_phi_reg_97727.read();
    } else {
        ap_phi_mux_data_1824_V_read1894_rewind_phi_fu_54741_p6 = data_1824_V_read1894_rewind_reg_54737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1825_V_read1895_phi_phi_fu_97744_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1825_V_read1895_phi_phi_fu_97744_p4 = ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_54755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1825_V_read1895_phi_phi_fu_97744_p4 = data_1825_V_read.read();
        } else {
            ap_phi_mux_data_1825_V_read1895_phi_phi_fu_97744_p4 = ap_phi_reg_pp0_iter0_data_1825_V_read1895_phi_reg_97740.read();
        }
    } else {
        ap_phi_mux_data_1825_V_read1895_phi_phi_fu_97744_p4 = ap_phi_reg_pp0_iter0_data_1825_V_read1895_phi_reg_97740.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_54755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_54755_p6 = data_1825_V_read1895_phi_reg_97740.read();
    } else {
        ap_phi_mux_data_1825_V_read1895_rewind_phi_fu_54755_p6 = data_1825_V_read1895_rewind_reg_54751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1826_V_read1896_phi_phi_fu_97757_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1826_V_read1896_phi_phi_fu_97757_p4 = ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_54769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1826_V_read1896_phi_phi_fu_97757_p4 = data_1826_V_read.read();
        } else {
            ap_phi_mux_data_1826_V_read1896_phi_phi_fu_97757_p4 = ap_phi_reg_pp0_iter0_data_1826_V_read1896_phi_reg_97753.read();
        }
    } else {
        ap_phi_mux_data_1826_V_read1896_phi_phi_fu_97757_p4 = ap_phi_reg_pp0_iter0_data_1826_V_read1896_phi_reg_97753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_54769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_54769_p6 = data_1826_V_read1896_phi_reg_97753.read();
    } else {
        ap_phi_mux_data_1826_V_read1896_rewind_phi_fu_54769_p6 = data_1826_V_read1896_rewind_reg_54765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1827_V_read1897_phi_phi_fu_97770_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1827_V_read1897_phi_phi_fu_97770_p4 = ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_54783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1827_V_read1897_phi_phi_fu_97770_p4 = data_1827_V_read.read();
        } else {
            ap_phi_mux_data_1827_V_read1897_phi_phi_fu_97770_p4 = ap_phi_reg_pp0_iter0_data_1827_V_read1897_phi_reg_97766.read();
        }
    } else {
        ap_phi_mux_data_1827_V_read1897_phi_phi_fu_97770_p4 = ap_phi_reg_pp0_iter0_data_1827_V_read1897_phi_reg_97766.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_54783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_54783_p6 = data_1827_V_read1897_phi_reg_97766.read();
    } else {
        ap_phi_mux_data_1827_V_read1897_rewind_phi_fu_54783_p6 = data_1827_V_read1897_rewind_reg_54779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1828_V_read1898_phi_phi_fu_97783_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1828_V_read1898_phi_phi_fu_97783_p4 = ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_54797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1828_V_read1898_phi_phi_fu_97783_p4 = data_1828_V_read.read();
        } else {
            ap_phi_mux_data_1828_V_read1898_phi_phi_fu_97783_p4 = ap_phi_reg_pp0_iter0_data_1828_V_read1898_phi_reg_97779.read();
        }
    } else {
        ap_phi_mux_data_1828_V_read1898_phi_phi_fu_97783_p4 = ap_phi_reg_pp0_iter0_data_1828_V_read1898_phi_reg_97779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_54797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_54797_p6 = data_1828_V_read1898_phi_reg_97779.read();
    } else {
        ap_phi_mux_data_1828_V_read1898_rewind_phi_fu_54797_p6 = data_1828_V_read1898_rewind_reg_54793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1829_V_read1899_phi_phi_fu_97796_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1829_V_read1899_phi_phi_fu_97796_p4 = ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_54811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1829_V_read1899_phi_phi_fu_97796_p4 = data_1829_V_read.read();
        } else {
            ap_phi_mux_data_1829_V_read1899_phi_phi_fu_97796_p4 = ap_phi_reg_pp0_iter0_data_1829_V_read1899_phi_reg_97792.read();
        }
    } else {
        ap_phi_mux_data_1829_V_read1899_phi_phi_fu_97796_p4 = ap_phi_reg_pp0_iter0_data_1829_V_read1899_phi_reg_97792.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_54811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_54811_p6 = data_1829_V_read1899_phi_reg_97792.read();
    } else {
        ap_phi_mux_data_1829_V_read1899_rewind_phi_fu_54811_p6 = data_1829_V_read1899_rewind_reg_54807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_182_V_read252_phi_phi_fu_76385_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_182_V_read252_phi_phi_fu_76385_p4 = ap_phi_mux_data_182_V_read252_rewind_phi_fu_31753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_182_V_read252_phi_phi_fu_76385_p4 = data_182_V_read.read();
        } else {
            ap_phi_mux_data_182_V_read252_phi_phi_fu_76385_p4 = ap_phi_reg_pp0_iter0_data_182_V_read252_phi_reg_76381.read();
        }
    } else {
        ap_phi_mux_data_182_V_read252_phi_phi_fu_76385_p4 = ap_phi_reg_pp0_iter0_data_182_V_read252_phi_reg_76381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_182_V_read252_rewind_phi_fu_31753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_182_V_read252_rewind_phi_fu_31753_p6 = data_182_V_read252_phi_reg_76381.read();
    } else {
        ap_phi_mux_data_182_V_read252_rewind_phi_fu_31753_p6 = data_182_V_read252_rewind_reg_31749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1830_V_read1900_phi_phi_fu_97809_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1830_V_read1900_phi_phi_fu_97809_p4 = ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_54825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1830_V_read1900_phi_phi_fu_97809_p4 = data_1830_V_read.read();
        } else {
            ap_phi_mux_data_1830_V_read1900_phi_phi_fu_97809_p4 = ap_phi_reg_pp0_iter0_data_1830_V_read1900_phi_reg_97805.read();
        }
    } else {
        ap_phi_mux_data_1830_V_read1900_phi_phi_fu_97809_p4 = ap_phi_reg_pp0_iter0_data_1830_V_read1900_phi_reg_97805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_54825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_54825_p6 = data_1830_V_read1900_phi_reg_97805.read();
    } else {
        ap_phi_mux_data_1830_V_read1900_rewind_phi_fu_54825_p6 = data_1830_V_read1900_rewind_reg_54821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1831_V_read1901_phi_phi_fu_97822_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1831_V_read1901_phi_phi_fu_97822_p4 = ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_54839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1831_V_read1901_phi_phi_fu_97822_p4 = data_1831_V_read.read();
        } else {
            ap_phi_mux_data_1831_V_read1901_phi_phi_fu_97822_p4 = ap_phi_reg_pp0_iter0_data_1831_V_read1901_phi_reg_97818.read();
        }
    } else {
        ap_phi_mux_data_1831_V_read1901_phi_phi_fu_97822_p4 = ap_phi_reg_pp0_iter0_data_1831_V_read1901_phi_reg_97818.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_54839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_54839_p6 = data_1831_V_read1901_phi_reg_97818.read();
    } else {
        ap_phi_mux_data_1831_V_read1901_rewind_phi_fu_54839_p6 = data_1831_V_read1901_rewind_reg_54835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1832_V_read1902_phi_phi_fu_97835_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1832_V_read1902_phi_phi_fu_97835_p4 = ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_54853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1832_V_read1902_phi_phi_fu_97835_p4 = data_1832_V_read.read();
        } else {
            ap_phi_mux_data_1832_V_read1902_phi_phi_fu_97835_p4 = ap_phi_reg_pp0_iter0_data_1832_V_read1902_phi_reg_97831.read();
        }
    } else {
        ap_phi_mux_data_1832_V_read1902_phi_phi_fu_97835_p4 = ap_phi_reg_pp0_iter0_data_1832_V_read1902_phi_reg_97831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_54853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_54853_p6 = data_1832_V_read1902_phi_reg_97831.read();
    } else {
        ap_phi_mux_data_1832_V_read1902_rewind_phi_fu_54853_p6 = data_1832_V_read1902_rewind_reg_54849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1833_V_read1903_phi_phi_fu_97848_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1833_V_read1903_phi_phi_fu_97848_p4 = ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_54867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1833_V_read1903_phi_phi_fu_97848_p4 = data_1833_V_read.read();
        } else {
            ap_phi_mux_data_1833_V_read1903_phi_phi_fu_97848_p4 = ap_phi_reg_pp0_iter0_data_1833_V_read1903_phi_reg_97844.read();
        }
    } else {
        ap_phi_mux_data_1833_V_read1903_phi_phi_fu_97848_p4 = ap_phi_reg_pp0_iter0_data_1833_V_read1903_phi_reg_97844.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_54867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_54867_p6 = data_1833_V_read1903_phi_reg_97844.read();
    } else {
        ap_phi_mux_data_1833_V_read1903_rewind_phi_fu_54867_p6 = data_1833_V_read1903_rewind_reg_54863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1834_V_read1904_phi_phi_fu_97861_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1834_V_read1904_phi_phi_fu_97861_p4 = ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_54881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1834_V_read1904_phi_phi_fu_97861_p4 = data_1834_V_read.read();
        } else {
            ap_phi_mux_data_1834_V_read1904_phi_phi_fu_97861_p4 = ap_phi_reg_pp0_iter0_data_1834_V_read1904_phi_reg_97857.read();
        }
    } else {
        ap_phi_mux_data_1834_V_read1904_phi_phi_fu_97861_p4 = ap_phi_reg_pp0_iter0_data_1834_V_read1904_phi_reg_97857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_54881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_54881_p6 = data_1834_V_read1904_phi_reg_97857.read();
    } else {
        ap_phi_mux_data_1834_V_read1904_rewind_phi_fu_54881_p6 = data_1834_V_read1904_rewind_reg_54877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1835_V_read1905_phi_phi_fu_97874_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1835_V_read1905_phi_phi_fu_97874_p4 = ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_54895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1835_V_read1905_phi_phi_fu_97874_p4 = data_1835_V_read.read();
        } else {
            ap_phi_mux_data_1835_V_read1905_phi_phi_fu_97874_p4 = ap_phi_reg_pp0_iter0_data_1835_V_read1905_phi_reg_97870.read();
        }
    } else {
        ap_phi_mux_data_1835_V_read1905_phi_phi_fu_97874_p4 = ap_phi_reg_pp0_iter0_data_1835_V_read1905_phi_reg_97870.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_54895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_54895_p6 = data_1835_V_read1905_phi_reg_97870.read();
    } else {
        ap_phi_mux_data_1835_V_read1905_rewind_phi_fu_54895_p6 = data_1835_V_read1905_rewind_reg_54891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1836_V_read1906_phi_phi_fu_97887_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1836_V_read1906_phi_phi_fu_97887_p4 = ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_54909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1836_V_read1906_phi_phi_fu_97887_p4 = data_1836_V_read.read();
        } else {
            ap_phi_mux_data_1836_V_read1906_phi_phi_fu_97887_p4 = ap_phi_reg_pp0_iter0_data_1836_V_read1906_phi_reg_97883.read();
        }
    } else {
        ap_phi_mux_data_1836_V_read1906_phi_phi_fu_97887_p4 = ap_phi_reg_pp0_iter0_data_1836_V_read1906_phi_reg_97883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_54909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_54909_p6 = data_1836_V_read1906_phi_reg_97883.read();
    } else {
        ap_phi_mux_data_1836_V_read1906_rewind_phi_fu_54909_p6 = data_1836_V_read1906_rewind_reg_54905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1837_V_read1907_phi_phi_fu_97900_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1837_V_read1907_phi_phi_fu_97900_p4 = ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_54923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1837_V_read1907_phi_phi_fu_97900_p4 = data_1837_V_read.read();
        } else {
            ap_phi_mux_data_1837_V_read1907_phi_phi_fu_97900_p4 = ap_phi_reg_pp0_iter0_data_1837_V_read1907_phi_reg_97896.read();
        }
    } else {
        ap_phi_mux_data_1837_V_read1907_phi_phi_fu_97900_p4 = ap_phi_reg_pp0_iter0_data_1837_V_read1907_phi_reg_97896.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_54923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_54923_p6 = data_1837_V_read1907_phi_reg_97896.read();
    } else {
        ap_phi_mux_data_1837_V_read1907_rewind_phi_fu_54923_p6 = data_1837_V_read1907_rewind_reg_54919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1838_V_read1908_phi_phi_fu_97913_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1838_V_read1908_phi_phi_fu_97913_p4 = ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_54937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1838_V_read1908_phi_phi_fu_97913_p4 = data_1838_V_read.read();
        } else {
            ap_phi_mux_data_1838_V_read1908_phi_phi_fu_97913_p4 = ap_phi_reg_pp0_iter0_data_1838_V_read1908_phi_reg_97909.read();
        }
    } else {
        ap_phi_mux_data_1838_V_read1908_phi_phi_fu_97913_p4 = ap_phi_reg_pp0_iter0_data_1838_V_read1908_phi_reg_97909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_54937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_54937_p6 = data_1838_V_read1908_phi_reg_97909.read();
    } else {
        ap_phi_mux_data_1838_V_read1908_rewind_phi_fu_54937_p6 = data_1838_V_read1908_rewind_reg_54933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1839_V_read1909_phi_phi_fu_97926_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1839_V_read1909_phi_phi_fu_97926_p4 = ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_54951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1839_V_read1909_phi_phi_fu_97926_p4 = data_1839_V_read.read();
        } else {
            ap_phi_mux_data_1839_V_read1909_phi_phi_fu_97926_p4 = ap_phi_reg_pp0_iter0_data_1839_V_read1909_phi_reg_97922.read();
        }
    } else {
        ap_phi_mux_data_1839_V_read1909_phi_phi_fu_97926_p4 = ap_phi_reg_pp0_iter0_data_1839_V_read1909_phi_reg_97922.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_54951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_54951_p6 = data_1839_V_read1909_phi_reg_97922.read();
    } else {
        ap_phi_mux_data_1839_V_read1909_rewind_phi_fu_54951_p6 = data_1839_V_read1909_rewind_reg_54947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_183_V_read253_phi_phi_fu_76398_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_183_V_read253_phi_phi_fu_76398_p4 = ap_phi_mux_data_183_V_read253_rewind_phi_fu_31767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_183_V_read253_phi_phi_fu_76398_p4 = data_183_V_read.read();
        } else {
            ap_phi_mux_data_183_V_read253_phi_phi_fu_76398_p4 = ap_phi_reg_pp0_iter0_data_183_V_read253_phi_reg_76394.read();
        }
    } else {
        ap_phi_mux_data_183_V_read253_phi_phi_fu_76398_p4 = ap_phi_reg_pp0_iter0_data_183_V_read253_phi_reg_76394.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_183_V_read253_rewind_phi_fu_31767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_183_V_read253_rewind_phi_fu_31767_p6 = data_183_V_read253_phi_reg_76394.read();
    } else {
        ap_phi_mux_data_183_V_read253_rewind_phi_fu_31767_p6 = data_183_V_read253_rewind_reg_31763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1840_V_read1910_phi_phi_fu_97939_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1840_V_read1910_phi_phi_fu_97939_p4 = ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_54965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1840_V_read1910_phi_phi_fu_97939_p4 = data_1840_V_read.read();
        } else {
            ap_phi_mux_data_1840_V_read1910_phi_phi_fu_97939_p4 = ap_phi_reg_pp0_iter0_data_1840_V_read1910_phi_reg_97935.read();
        }
    } else {
        ap_phi_mux_data_1840_V_read1910_phi_phi_fu_97939_p4 = ap_phi_reg_pp0_iter0_data_1840_V_read1910_phi_reg_97935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_54965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_54965_p6 = data_1840_V_read1910_phi_reg_97935.read();
    } else {
        ap_phi_mux_data_1840_V_read1910_rewind_phi_fu_54965_p6 = data_1840_V_read1910_rewind_reg_54961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1841_V_read1911_phi_phi_fu_97952_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1841_V_read1911_phi_phi_fu_97952_p4 = ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_54979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1841_V_read1911_phi_phi_fu_97952_p4 = data_1841_V_read.read();
        } else {
            ap_phi_mux_data_1841_V_read1911_phi_phi_fu_97952_p4 = ap_phi_reg_pp0_iter0_data_1841_V_read1911_phi_reg_97948.read();
        }
    } else {
        ap_phi_mux_data_1841_V_read1911_phi_phi_fu_97952_p4 = ap_phi_reg_pp0_iter0_data_1841_V_read1911_phi_reg_97948.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_54979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_54979_p6 = data_1841_V_read1911_phi_reg_97948.read();
    } else {
        ap_phi_mux_data_1841_V_read1911_rewind_phi_fu_54979_p6 = data_1841_V_read1911_rewind_reg_54975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1842_V_read1912_phi_phi_fu_97965_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1842_V_read1912_phi_phi_fu_97965_p4 = ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_54993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1842_V_read1912_phi_phi_fu_97965_p4 = data_1842_V_read.read();
        } else {
            ap_phi_mux_data_1842_V_read1912_phi_phi_fu_97965_p4 = ap_phi_reg_pp0_iter0_data_1842_V_read1912_phi_reg_97961.read();
        }
    } else {
        ap_phi_mux_data_1842_V_read1912_phi_phi_fu_97965_p4 = ap_phi_reg_pp0_iter0_data_1842_V_read1912_phi_reg_97961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_54993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_54993_p6 = data_1842_V_read1912_phi_reg_97961.read();
    } else {
        ap_phi_mux_data_1842_V_read1912_rewind_phi_fu_54993_p6 = data_1842_V_read1912_rewind_reg_54989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1843_V_read1913_phi_phi_fu_97978_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1843_V_read1913_phi_phi_fu_97978_p4 = ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_55007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1843_V_read1913_phi_phi_fu_97978_p4 = data_1843_V_read.read();
        } else {
            ap_phi_mux_data_1843_V_read1913_phi_phi_fu_97978_p4 = ap_phi_reg_pp0_iter0_data_1843_V_read1913_phi_reg_97974.read();
        }
    } else {
        ap_phi_mux_data_1843_V_read1913_phi_phi_fu_97978_p4 = ap_phi_reg_pp0_iter0_data_1843_V_read1913_phi_reg_97974.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_55007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_55007_p6 = data_1843_V_read1913_phi_reg_97974.read();
    } else {
        ap_phi_mux_data_1843_V_read1913_rewind_phi_fu_55007_p6 = data_1843_V_read1913_rewind_reg_55003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1844_V_read1914_phi_phi_fu_97991_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1844_V_read1914_phi_phi_fu_97991_p4 = ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_55021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1844_V_read1914_phi_phi_fu_97991_p4 = data_1844_V_read.read();
        } else {
            ap_phi_mux_data_1844_V_read1914_phi_phi_fu_97991_p4 = ap_phi_reg_pp0_iter0_data_1844_V_read1914_phi_reg_97987.read();
        }
    } else {
        ap_phi_mux_data_1844_V_read1914_phi_phi_fu_97991_p4 = ap_phi_reg_pp0_iter0_data_1844_V_read1914_phi_reg_97987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_55021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_55021_p6 = data_1844_V_read1914_phi_reg_97987.read();
    } else {
        ap_phi_mux_data_1844_V_read1914_rewind_phi_fu_55021_p6 = data_1844_V_read1914_rewind_reg_55017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1845_V_read1915_phi_phi_fu_98004_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1845_V_read1915_phi_phi_fu_98004_p4 = ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_55035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1845_V_read1915_phi_phi_fu_98004_p4 = data_1845_V_read.read();
        } else {
            ap_phi_mux_data_1845_V_read1915_phi_phi_fu_98004_p4 = ap_phi_reg_pp0_iter0_data_1845_V_read1915_phi_reg_98000.read();
        }
    } else {
        ap_phi_mux_data_1845_V_read1915_phi_phi_fu_98004_p4 = ap_phi_reg_pp0_iter0_data_1845_V_read1915_phi_reg_98000.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_55035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_55035_p6 = data_1845_V_read1915_phi_reg_98000.read();
    } else {
        ap_phi_mux_data_1845_V_read1915_rewind_phi_fu_55035_p6 = data_1845_V_read1915_rewind_reg_55031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1846_V_read1916_phi_phi_fu_98017_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1846_V_read1916_phi_phi_fu_98017_p4 = ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_55049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1846_V_read1916_phi_phi_fu_98017_p4 = data_1846_V_read.read();
        } else {
            ap_phi_mux_data_1846_V_read1916_phi_phi_fu_98017_p4 = ap_phi_reg_pp0_iter0_data_1846_V_read1916_phi_reg_98013.read();
        }
    } else {
        ap_phi_mux_data_1846_V_read1916_phi_phi_fu_98017_p4 = ap_phi_reg_pp0_iter0_data_1846_V_read1916_phi_reg_98013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_55049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_55049_p6 = data_1846_V_read1916_phi_reg_98013.read();
    } else {
        ap_phi_mux_data_1846_V_read1916_rewind_phi_fu_55049_p6 = data_1846_V_read1916_rewind_reg_55045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1847_V_read1917_phi_phi_fu_98030_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1847_V_read1917_phi_phi_fu_98030_p4 = ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_55063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1847_V_read1917_phi_phi_fu_98030_p4 = data_1847_V_read.read();
        } else {
            ap_phi_mux_data_1847_V_read1917_phi_phi_fu_98030_p4 = ap_phi_reg_pp0_iter0_data_1847_V_read1917_phi_reg_98026.read();
        }
    } else {
        ap_phi_mux_data_1847_V_read1917_phi_phi_fu_98030_p4 = ap_phi_reg_pp0_iter0_data_1847_V_read1917_phi_reg_98026.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_55063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_55063_p6 = data_1847_V_read1917_phi_reg_98026.read();
    } else {
        ap_phi_mux_data_1847_V_read1917_rewind_phi_fu_55063_p6 = data_1847_V_read1917_rewind_reg_55059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1848_V_read1918_phi_phi_fu_98043_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1848_V_read1918_phi_phi_fu_98043_p4 = ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_55077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1848_V_read1918_phi_phi_fu_98043_p4 = data_1848_V_read.read();
        } else {
            ap_phi_mux_data_1848_V_read1918_phi_phi_fu_98043_p4 = ap_phi_reg_pp0_iter0_data_1848_V_read1918_phi_reg_98039.read();
        }
    } else {
        ap_phi_mux_data_1848_V_read1918_phi_phi_fu_98043_p4 = ap_phi_reg_pp0_iter0_data_1848_V_read1918_phi_reg_98039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_55077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_55077_p6 = data_1848_V_read1918_phi_reg_98039.read();
    } else {
        ap_phi_mux_data_1848_V_read1918_rewind_phi_fu_55077_p6 = data_1848_V_read1918_rewind_reg_55073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1849_V_read1919_phi_phi_fu_98056_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1849_V_read1919_phi_phi_fu_98056_p4 = ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_55091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1849_V_read1919_phi_phi_fu_98056_p4 = data_1849_V_read.read();
        } else {
            ap_phi_mux_data_1849_V_read1919_phi_phi_fu_98056_p4 = ap_phi_reg_pp0_iter0_data_1849_V_read1919_phi_reg_98052.read();
        }
    } else {
        ap_phi_mux_data_1849_V_read1919_phi_phi_fu_98056_p4 = ap_phi_reg_pp0_iter0_data_1849_V_read1919_phi_reg_98052.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_55091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_55091_p6 = data_1849_V_read1919_phi_reg_98052.read();
    } else {
        ap_phi_mux_data_1849_V_read1919_rewind_phi_fu_55091_p6 = data_1849_V_read1919_rewind_reg_55087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_184_V_read254_phi_phi_fu_76411_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_184_V_read254_phi_phi_fu_76411_p4 = ap_phi_mux_data_184_V_read254_rewind_phi_fu_31781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_184_V_read254_phi_phi_fu_76411_p4 = data_184_V_read.read();
        } else {
            ap_phi_mux_data_184_V_read254_phi_phi_fu_76411_p4 = ap_phi_reg_pp0_iter0_data_184_V_read254_phi_reg_76407.read();
        }
    } else {
        ap_phi_mux_data_184_V_read254_phi_phi_fu_76411_p4 = ap_phi_reg_pp0_iter0_data_184_V_read254_phi_reg_76407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_184_V_read254_rewind_phi_fu_31781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_184_V_read254_rewind_phi_fu_31781_p6 = data_184_V_read254_phi_reg_76407.read();
    } else {
        ap_phi_mux_data_184_V_read254_rewind_phi_fu_31781_p6 = data_184_V_read254_rewind_reg_31777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1850_V_read1920_phi_phi_fu_98069_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1850_V_read1920_phi_phi_fu_98069_p4 = ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_55105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1850_V_read1920_phi_phi_fu_98069_p4 = data_1850_V_read.read();
        } else {
            ap_phi_mux_data_1850_V_read1920_phi_phi_fu_98069_p4 = ap_phi_reg_pp0_iter0_data_1850_V_read1920_phi_reg_98065.read();
        }
    } else {
        ap_phi_mux_data_1850_V_read1920_phi_phi_fu_98069_p4 = ap_phi_reg_pp0_iter0_data_1850_V_read1920_phi_reg_98065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_55105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_55105_p6 = data_1850_V_read1920_phi_reg_98065.read();
    } else {
        ap_phi_mux_data_1850_V_read1920_rewind_phi_fu_55105_p6 = data_1850_V_read1920_rewind_reg_55101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1851_V_read1921_phi_phi_fu_98082_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1851_V_read1921_phi_phi_fu_98082_p4 = ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_55119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1851_V_read1921_phi_phi_fu_98082_p4 = data_1851_V_read.read();
        } else {
            ap_phi_mux_data_1851_V_read1921_phi_phi_fu_98082_p4 = ap_phi_reg_pp0_iter0_data_1851_V_read1921_phi_reg_98078.read();
        }
    } else {
        ap_phi_mux_data_1851_V_read1921_phi_phi_fu_98082_p4 = ap_phi_reg_pp0_iter0_data_1851_V_read1921_phi_reg_98078.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_55119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_55119_p6 = data_1851_V_read1921_phi_reg_98078.read();
    } else {
        ap_phi_mux_data_1851_V_read1921_rewind_phi_fu_55119_p6 = data_1851_V_read1921_rewind_reg_55115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1852_V_read1922_phi_phi_fu_98095_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1852_V_read1922_phi_phi_fu_98095_p4 = ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_55133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1852_V_read1922_phi_phi_fu_98095_p4 = data_1852_V_read.read();
        } else {
            ap_phi_mux_data_1852_V_read1922_phi_phi_fu_98095_p4 = ap_phi_reg_pp0_iter0_data_1852_V_read1922_phi_reg_98091.read();
        }
    } else {
        ap_phi_mux_data_1852_V_read1922_phi_phi_fu_98095_p4 = ap_phi_reg_pp0_iter0_data_1852_V_read1922_phi_reg_98091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_55133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_55133_p6 = data_1852_V_read1922_phi_reg_98091.read();
    } else {
        ap_phi_mux_data_1852_V_read1922_rewind_phi_fu_55133_p6 = data_1852_V_read1922_rewind_reg_55129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1853_V_read1923_phi_phi_fu_98108_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1853_V_read1923_phi_phi_fu_98108_p4 = ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_55147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1853_V_read1923_phi_phi_fu_98108_p4 = data_1853_V_read.read();
        } else {
            ap_phi_mux_data_1853_V_read1923_phi_phi_fu_98108_p4 = ap_phi_reg_pp0_iter0_data_1853_V_read1923_phi_reg_98104.read();
        }
    } else {
        ap_phi_mux_data_1853_V_read1923_phi_phi_fu_98108_p4 = ap_phi_reg_pp0_iter0_data_1853_V_read1923_phi_reg_98104.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_55147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_55147_p6 = data_1853_V_read1923_phi_reg_98104.read();
    } else {
        ap_phi_mux_data_1853_V_read1923_rewind_phi_fu_55147_p6 = data_1853_V_read1923_rewind_reg_55143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1854_V_read1924_phi_phi_fu_98121_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1854_V_read1924_phi_phi_fu_98121_p4 = ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_55161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1854_V_read1924_phi_phi_fu_98121_p4 = data_1854_V_read.read();
        } else {
            ap_phi_mux_data_1854_V_read1924_phi_phi_fu_98121_p4 = ap_phi_reg_pp0_iter0_data_1854_V_read1924_phi_reg_98117.read();
        }
    } else {
        ap_phi_mux_data_1854_V_read1924_phi_phi_fu_98121_p4 = ap_phi_reg_pp0_iter0_data_1854_V_read1924_phi_reg_98117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_55161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_55161_p6 = data_1854_V_read1924_phi_reg_98117.read();
    } else {
        ap_phi_mux_data_1854_V_read1924_rewind_phi_fu_55161_p6 = data_1854_V_read1924_rewind_reg_55157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1855_V_read1925_phi_phi_fu_98134_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1855_V_read1925_phi_phi_fu_98134_p4 = ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_55175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1855_V_read1925_phi_phi_fu_98134_p4 = data_1855_V_read.read();
        } else {
            ap_phi_mux_data_1855_V_read1925_phi_phi_fu_98134_p4 = ap_phi_reg_pp0_iter0_data_1855_V_read1925_phi_reg_98130.read();
        }
    } else {
        ap_phi_mux_data_1855_V_read1925_phi_phi_fu_98134_p4 = ap_phi_reg_pp0_iter0_data_1855_V_read1925_phi_reg_98130.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_55175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_55175_p6 = data_1855_V_read1925_phi_reg_98130.read();
    } else {
        ap_phi_mux_data_1855_V_read1925_rewind_phi_fu_55175_p6 = data_1855_V_read1925_rewind_reg_55171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1856_V_read1926_phi_phi_fu_98147_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1856_V_read1926_phi_phi_fu_98147_p4 = ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_55189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1856_V_read1926_phi_phi_fu_98147_p4 = data_1856_V_read.read();
        } else {
            ap_phi_mux_data_1856_V_read1926_phi_phi_fu_98147_p4 = ap_phi_reg_pp0_iter0_data_1856_V_read1926_phi_reg_98143.read();
        }
    } else {
        ap_phi_mux_data_1856_V_read1926_phi_phi_fu_98147_p4 = ap_phi_reg_pp0_iter0_data_1856_V_read1926_phi_reg_98143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_55189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_55189_p6 = data_1856_V_read1926_phi_reg_98143.read();
    } else {
        ap_phi_mux_data_1856_V_read1926_rewind_phi_fu_55189_p6 = data_1856_V_read1926_rewind_reg_55185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1857_V_read1927_phi_phi_fu_98160_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1857_V_read1927_phi_phi_fu_98160_p4 = ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_55203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1857_V_read1927_phi_phi_fu_98160_p4 = data_1857_V_read.read();
        } else {
            ap_phi_mux_data_1857_V_read1927_phi_phi_fu_98160_p4 = ap_phi_reg_pp0_iter0_data_1857_V_read1927_phi_reg_98156.read();
        }
    } else {
        ap_phi_mux_data_1857_V_read1927_phi_phi_fu_98160_p4 = ap_phi_reg_pp0_iter0_data_1857_V_read1927_phi_reg_98156.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_55203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_55203_p6 = data_1857_V_read1927_phi_reg_98156.read();
    } else {
        ap_phi_mux_data_1857_V_read1927_rewind_phi_fu_55203_p6 = data_1857_V_read1927_rewind_reg_55199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1858_V_read1928_phi_phi_fu_98173_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1858_V_read1928_phi_phi_fu_98173_p4 = ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_55217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1858_V_read1928_phi_phi_fu_98173_p4 = data_1858_V_read.read();
        } else {
            ap_phi_mux_data_1858_V_read1928_phi_phi_fu_98173_p4 = ap_phi_reg_pp0_iter0_data_1858_V_read1928_phi_reg_98169.read();
        }
    } else {
        ap_phi_mux_data_1858_V_read1928_phi_phi_fu_98173_p4 = ap_phi_reg_pp0_iter0_data_1858_V_read1928_phi_reg_98169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_55217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_55217_p6 = data_1858_V_read1928_phi_reg_98169.read();
    } else {
        ap_phi_mux_data_1858_V_read1928_rewind_phi_fu_55217_p6 = data_1858_V_read1928_rewind_reg_55213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1859_V_read1929_phi_phi_fu_98186_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1859_V_read1929_phi_phi_fu_98186_p4 = ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_55231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1859_V_read1929_phi_phi_fu_98186_p4 = data_1859_V_read.read();
        } else {
            ap_phi_mux_data_1859_V_read1929_phi_phi_fu_98186_p4 = ap_phi_reg_pp0_iter0_data_1859_V_read1929_phi_reg_98182.read();
        }
    } else {
        ap_phi_mux_data_1859_V_read1929_phi_phi_fu_98186_p4 = ap_phi_reg_pp0_iter0_data_1859_V_read1929_phi_reg_98182.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_55231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_55231_p6 = data_1859_V_read1929_phi_reg_98182.read();
    } else {
        ap_phi_mux_data_1859_V_read1929_rewind_phi_fu_55231_p6 = data_1859_V_read1929_rewind_reg_55227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_185_V_read255_phi_phi_fu_76424_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_185_V_read255_phi_phi_fu_76424_p4 = ap_phi_mux_data_185_V_read255_rewind_phi_fu_31795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_185_V_read255_phi_phi_fu_76424_p4 = data_185_V_read.read();
        } else {
            ap_phi_mux_data_185_V_read255_phi_phi_fu_76424_p4 = ap_phi_reg_pp0_iter0_data_185_V_read255_phi_reg_76420.read();
        }
    } else {
        ap_phi_mux_data_185_V_read255_phi_phi_fu_76424_p4 = ap_phi_reg_pp0_iter0_data_185_V_read255_phi_reg_76420.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_185_V_read255_rewind_phi_fu_31795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_185_V_read255_rewind_phi_fu_31795_p6 = data_185_V_read255_phi_reg_76420.read();
    } else {
        ap_phi_mux_data_185_V_read255_rewind_phi_fu_31795_p6 = data_185_V_read255_rewind_reg_31791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1860_V_read1930_phi_phi_fu_98199_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1860_V_read1930_phi_phi_fu_98199_p4 = ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_55245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1860_V_read1930_phi_phi_fu_98199_p4 = data_1860_V_read.read();
        } else {
            ap_phi_mux_data_1860_V_read1930_phi_phi_fu_98199_p4 = ap_phi_reg_pp0_iter0_data_1860_V_read1930_phi_reg_98195.read();
        }
    } else {
        ap_phi_mux_data_1860_V_read1930_phi_phi_fu_98199_p4 = ap_phi_reg_pp0_iter0_data_1860_V_read1930_phi_reg_98195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_55245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_55245_p6 = data_1860_V_read1930_phi_reg_98195.read();
    } else {
        ap_phi_mux_data_1860_V_read1930_rewind_phi_fu_55245_p6 = data_1860_V_read1930_rewind_reg_55241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1861_V_read1931_phi_phi_fu_98212_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1861_V_read1931_phi_phi_fu_98212_p4 = ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_55259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1861_V_read1931_phi_phi_fu_98212_p4 = data_1861_V_read.read();
        } else {
            ap_phi_mux_data_1861_V_read1931_phi_phi_fu_98212_p4 = ap_phi_reg_pp0_iter0_data_1861_V_read1931_phi_reg_98208.read();
        }
    } else {
        ap_phi_mux_data_1861_V_read1931_phi_phi_fu_98212_p4 = ap_phi_reg_pp0_iter0_data_1861_V_read1931_phi_reg_98208.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_55259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_55259_p6 = data_1861_V_read1931_phi_reg_98208.read();
    } else {
        ap_phi_mux_data_1861_V_read1931_rewind_phi_fu_55259_p6 = data_1861_V_read1931_rewind_reg_55255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1862_V_read1932_phi_phi_fu_98225_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1862_V_read1932_phi_phi_fu_98225_p4 = ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_55273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1862_V_read1932_phi_phi_fu_98225_p4 = data_1862_V_read.read();
        } else {
            ap_phi_mux_data_1862_V_read1932_phi_phi_fu_98225_p4 = ap_phi_reg_pp0_iter0_data_1862_V_read1932_phi_reg_98221.read();
        }
    } else {
        ap_phi_mux_data_1862_V_read1932_phi_phi_fu_98225_p4 = ap_phi_reg_pp0_iter0_data_1862_V_read1932_phi_reg_98221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_55273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_55273_p6 = data_1862_V_read1932_phi_reg_98221.read();
    } else {
        ap_phi_mux_data_1862_V_read1932_rewind_phi_fu_55273_p6 = data_1862_V_read1932_rewind_reg_55269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1863_V_read1933_phi_phi_fu_98238_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1863_V_read1933_phi_phi_fu_98238_p4 = ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_55287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1863_V_read1933_phi_phi_fu_98238_p4 = data_1863_V_read.read();
        } else {
            ap_phi_mux_data_1863_V_read1933_phi_phi_fu_98238_p4 = ap_phi_reg_pp0_iter0_data_1863_V_read1933_phi_reg_98234.read();
        }
    } else {
        ap_phi_mux_data_1863_V_read1933_phi_phi_fu_98238_p4 = ap_phi_reg_pp0_iter0_data_1863_V_read1933_phi_reg_98234.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_55287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_55287_p6 = data_1863_V_read1933_phi_reg_98234.read();
    } else {
        ap_phi_mux_data_1863_V_read1933_rewind_phi_fu_55287_p6 = data_1863_V_read1933_rewind_reg_55283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1864_V_read1934_phi_phi_fu_98251_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1864_V_read1934_phi_phi_fu_98251_p4 = ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_55301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1864_V_read1934_phi_phi_fu_98251_p4 = data_1864_V_read.read();
        } else {
            ap_phi_mux_data_1864_V_read1934_phi_phi_fu_98251_p4 = ap_phi_reg_pp0_iter0_data_1864_V_read1934_phi_reg_98247.read();
        }
    } else {
        ap_phi_mux_data_1864_V_read1934_phi_phi_fu_98251_p4 = ap_phi_reg_pp0_iter0_data_1864_V_read1934_phi_reg_98247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_55301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_55301_p6 = data_1864_V_read1934_phi_reg_98247.read();
    } else {
        ap_phi_mux_data_1864_V_read1934_rewind_phi_fu_55301_p6 = data_1864_V_read1934_rewind_reg_55297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1865_V_read1935_phi_phi_fu_98264_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1865_V_read1935_phi_phi_fu_98264_p4 = ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_55315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1865_V_read1935_phi_phi_fu_98264_p4 = data_1865_V_read.read();
        } else {
            ap_phi_mux_data_1865_V_read1935_phi_phi_fu_98264_p4 = ap_phi_reg_pp0_iter0_data_1865_V_read1935_phi_reg_98260.read();
        }
    } else {
        ap_phi_mux_data_1865_V_read1935_phi_phi_fu_98264_p4 = ap_phi_reg_pp0_iter0_data_1865_V_read1935_phi_reg_98260.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_55315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_55315_p6 = data_1865_V_read1935_phi_reg_98260.read();
    } else {
        ap_phi_mux_data_1865_V_read1935_rewind_phi_fu_55315_p6 = data_1865_V_read1935_rewind_reg_55311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1866_V_read1936_phi_phi_fu_98277_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1866_V_read1936_phi_phi_fu_98277_p4 = ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_55329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1866_V_read1936_phi_phi_fu_98277_p4 = data_1866_V_read.read();
        } else {
            ap_phi_mux_data_1866_V_read1936_phi_phi_fu_98277_p4 = ap_phi_reg_pp0_iter0_data_1866_V_read1936_phi_reg_98273.read();
        }
    } else {
        ap_phi_mux_data_1866_V_read1936_phi_phi_fu_98277_p4 = ap_phi_reg_pp0_iter0_data_1866_V_read1936_phi_reg_98273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_55329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_55329_p6 = data_1866_V_read1936_phi_reg_98273.read();
    } else {
        ap_phi_mux_data_1866_V_read1936_rewind_phi_fu_55329_p6 = data_1866_V_read1936_rewind_reg_55325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1867_V_read1937_phi_phi_fu_98290_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1867_V_read1937_phi_phi_fu_98290_p4 = ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_55343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1867_V_read1937_phi_phi_fu_98290_p4 = data_1867_V_read.read();
        } else {
            ap_phi_mux_data_1867_V_read1937_phi_phi_fu_98290_p4 = ap_phi_reg_pp0_iter0_data_1867_V_read1937_phi_reg_98286.read();
        }
    } else {
        ap_phi_mux_data_1867_V_read1937_phi_phi_fu_98290_p4 = ap_phi_reg_pp0_iter0_data_1867_V_read1937_phi_reg_98286.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_55343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_55343_p6 = data_1867_V_read1937_phi_reg_98286.read();
    } else {
        ap_phi_mux_data_1867_V_read1937_rewind_phi_fu_55343_p6 = data_1867_V_read1937_rewind_reg_55339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1868_V_read1938_phi_phi_fu_98303_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1868_V_read1938_phi_phi_fu_98303_p4 = ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_55357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1868_V_read1938_phi_phi_fu_98303_p4 = data_1868_V_read.read();
        } else {
            ap_phi_mux_data_1868_V_read1938_phi_phi_fu_98303_p4 = ap_phi_reg_pp0_iter0_data_1868_V_read1938_phi_reg_98299.read();
        }
    } else {
        ap_phi_mux_data_1868_V_read1938_phi_phi_fu_98303_p4 = ap_phi_reg_pp0_iter0_data_1868_V_read1938_phi_reg_98299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_55357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_55357_p6 = data_1868_V_read1938_phi_reg_98299.read();
    } else {
        ap_phi_mux_data_1868_V_read1938_rewind_phi_fu_55357_p6 = data_1868_V_read1938_rewind_reg_55353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1869_V_read1939_phi_phi_fu_98316_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1869_V_read1939_phi_phi_fu_98316_p4 = ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_55371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1869_V_read1939_phi_phi_fu_98316_p4 = data_1869_V_read.read();
        } else {
            ap_phi_mux_data_1869_V_read1939_phi_phi_fu_98316_p4 = ap_phi_reg_pp0_iter0_data_1869_V_read1939_phi_reg_98312.read();
        }
    } else {
        ap_phi_mux_data_1869_V_read1939_phi_phi_fu_98316_p4 = ap_phi_reg_pp0_iter0_data_1869_V_read1939_phi_reg_98312.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_55371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_55371_p6 = data_1869_V_read1939_phi_reg_98312.read();
    } else {
        ap_phi_mux_data_1869_V_read1939_rewind_phi_fu_55371_p6 = data_1869_V_read1939_rewind_reg_55367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_186_V_read256_phi_phi_fu_76437_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_186_V_read256_phi_phi_fu_76437_p4 = ap_phi_mux_data_186_V_read256_rewind_phi_fu_31809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_186_V_read256_phi_phi_fu_76437_p4 = data_186_V_read.read();
        } else {
            ap_phi_mux_data_186_V_read256_phi_phi_fu_76437_p4 = ap_phi_reg_pp0_iter0_data_186_V_read256_phi_reg_76433.read();
        }
    } else {
        ap_phi_mux_data_186_V_read256_phi_phi_fu_76437_p4 = ap_phi_reg_pp0_iter0_data_186_V_read256_phi_reg_76433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_186_V_read256_rewind_phi_fu_31809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_186_V_read256_rewind_phi_fu_31809_p6 = data_186_V_read256_phi_reg_76433.read();
    } else {
        ap_phi_mux_data_186_V_read256_rewind_phi_fu_31809_p6 = data_186_V_read256_rewind_reg_31805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1870_V_read1940_phi_phi_fu_98329_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1870_V_read1940_phi_phi_fu_98329_p4 = ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_55385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1870_V_read1940_phi_phi_fu_98329_p4 = data_1870_V_read.read();
        } else {
            ap_phi_mux_data_1870_V_read1940_phi_phi_fu_98329_p4 = ap_phi_reg_pp0_iter0_data_1870_V_read1940_phi_reg_98325.read();
        }
    } else {
        ap_phi_mux_data_1870_V_read1940_phi_phi_fu_98329_p4 = ap_phi_reg_pp0_iter0_data_1870_V_read1940_phi_reg_98325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_55385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_55385_p6 = data_1870_V_read1940_phi_reg_98325.read();
    } else {
        ap_phi_mux_data_1870_V_read1940_rewind_phi_fu_55385_p6 = data_1870_V_read1940_rewind_reg_55381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1871_V_read1941_phi_phi_fu_98342_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1871_V_read1941_phi_phi_fu_98342_p4 = ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_55399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1871_V_read1941_phi_phi_fu_98342_p4 = data_1871_V_read.read();
        } else {
            ap_phi_mux_data_1871_V_read1941_phi_phi_fu_98342_p4 = ap_phi_reg_pp0_iter0_data_1871_V_read1941_phi_reg_98338.read();
        }
    } else {
        ap_phi_mux_data_1871_V_read1941_phi_phi_fu_98342_p4 = ap_phi_reg_pp0_iter0_data_1871_V_read1941_phi_reg_98338.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_55399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_55399_p6 = data_1871_V_read1941_phi_reg_98338.read();
    } else {
        ap_phi_mux_data_1871_V_read1941_rewind_phi_fu_55399_p6 = data_1871_V_read1941_rewind_reg_55395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1872_V_read1942_phi_phi_fu_98355_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1872_V_read1942_phi_phi_fu_98355_p4 = ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_55413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1872_V_read1942_phi_phi_fu_98355_p4 = data_1872_V_read.read();
        } else {
            ap_phi_mux_data_1872_V_read1942_phi_phi_fu_98355_p4 = ap_phi_reg_pp0_iter0_data_1872_V_read1942_phi_reg_98351.read();
        }
    } else {
        ap_phi_mux_data_1872_V_read1942_phi_phi_fu_98355_p4 = ap_phi_reg_pp0_iter0_data_1872_V_read1942_phi_reg_98351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_55413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_55413_p6 = data_1872_V_read1942_phi_reg_98351.read();
    } else {
        ap_phi_mux_data_1872_V_read1942_rewind_phi_fu_55413_p6 = data_1872_V_read1942_rewind_reg_55409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1873_V_read1943_phi_phi_fu_98368_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1873_V_read1943_phi_phi_fu_98368_p4 = ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_55427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1873_V_read1943_phi_phi_fu_98368_p4 = data_1873_V_read.read();
        } else {
            ap_phi_mux_data_1873_V_read1943_phi_phi_fu_98368_p4 = ap_phi_reg_pp0_iter0_data_1873_V_read1943_phi_reg_98364.read();
        }
    } else {
        ap_phi_mux_data_1873_V_read1943_phi_phi_fu_98368_p4 = ap_phi_reg_pp0_iter0_data_1873_V_read1943_phi_reg_98364.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_55427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_55427_p6 = data_1873_V_read1943_phi_reg_98364.read();
    } else {
        ap_phi_mux_data_1873_V_read1943_rewind_phi_fu_55427_p6 = data_1873_V_read1943_rewind_reg_55423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1874_V_read1944_phi_phi_fu_98381_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1874_V_read1944_phi_phi_fu_98381_p4 = ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_55441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1874_V_read1944_phi_phi_fu_98381_p4 = data_1874_V_read.read();
        } else {
            ap_phi_mux_data_1874_V_read1944_phi_phi_fu_98381_p4 = ap_phi_reg_pp0_iter0_data_1874_V_read1944_phi_reg_98377.read();
        }
    } else {
        ap_phi_mux_data_1874_V_read1944_phi_phi_fu_98381_p4 = ap_phi_reg_pp0_iter0_data_1874_V_read1944_phi_reg_98377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_55441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_55441_p6 = data_1874_V_read1944_phi_reg_98377.read();
    } else {
        ap_phi_mux_data_1874_V_read1944_rewind_phi_fu_55441_p6 = data_1874_V_read1944_rewind_reg_55437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1875_V_read1945_phi_phi_fu_98394_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1875_V_read1945_phi_phi_fu_98394_p4 = ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_55455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1875_V_read1945_phi_phi_fu_98394_p4 = data_1875_V_read.read();
        } else {
            ap_phi_mux_data_1875_V_read1945_phi_phi_fu_98394_p4 = ap_phi_reg_pp0_iter0_data_1875_V_read1945_phi_reg_98390.read();
        }
    } else {
        ap_phi_mux_data_1875_V_read1945_phi_phi_fu_98394_p4 = ap_phi_reg_pp0_iter0_data_1875_V_read1945_phi_reg_98390.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_55455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_55455_p6 = data_1875_V_read1945_phi_reg_98390.read();
    } else {
        ap_phi_mux_data_1875_V_read1945_rewind_phi_fu_55455_p6 = data_1875_V_read1945_rewind_reg_55451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1876_V_read1946_phi_phi_fu_98407_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1876_V_read1946_phi_phi_fu_98407_p4 = ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_55469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1876_V_read1946_phi_phi_fu_98407_p4 = data_1876_V_read.read();
        } else {
            ap_phi_mux_data_1876_V_read1946_phi_phi_fu_98407_p4 = ap_phi_reg_pp0_iter0_data_1876_V_read1946_phi_reg_98403.read();
        }
    } else {
        ap_phi_mux_data_1876_V_read1946_phi_phi_fu_98407_p4 = ap_phi_reg_pp0_iter0_data_1876_V_read1946_phi_reg_98403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_55469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_55469_p6 = data_1876_V_read1946_phi_reg_98403.read();
    } else {
        ap_phi_mux_data_1876_V_read1946_rewind_phi_fu_55469_p6 = data_1876_V_read1946_rewind_reg_55465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1877_V_read1947_phi_phi_fu_98420_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1877_V_read1947_phi_phi_fu_98420_p4 = ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_55483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1877_V_read1947_phi_phi_fu_98420_p4 = data_1877_V_read.read();
        } else {
            ap_phi_mux_data_1877_V_read1947_phi_phi_fu_98420_p4 = ap_phi_reg_pp0_iter0_data_1877_V_read1947_phi_reg_98416.read();
        }
    } else {
        ap_phi_mux_data_1877_V_read1947_phi_phi_fu_98420_p4 = ap_phi_reg_pp0_iter0_data_1877_V_read1947_phi_reg_98416.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_55483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_55483_p6 = data_1877_V_read1947_phi_reg_98416.read();
    } else {
        ap_phi_mux_data_1877_V_read1947_rewind_phi_fu_55483_p6 = data_1877_V_read1947_rewind_reg_55479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1878_V_read1948_phi_phi_fu_98433_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1878_V_read1948_phi_phi_fu_98433_p4 = ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_55497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1878_V_read1948_phi_phi_fu_98433_p4 = data_1878_V_read.read();
        } else {
            ap_phi_mux_data_1878_V_read1948_phi_phi_fu_98433_p4 = ap_phi_reg_pp0_iter0_data_1878_V_read1948_phi_reg_98429.read();
        }
    } else {
        ap_phi_mux_data_1878_V_read1948_phi_phi_fu_98433_p4 = ap_phi_reg_pp0_iter0_data_1878_V_read1948_phi_reg_98429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_55497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_55497_p6 = data_1878_V_read1948_phi_reg_98429.read();
    } else {
        ap_phi_mux_data_1878_V_read1948_rewind_phi_fu_55497_p6 = data_1878_V_read1948_rewind_reg_55493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1879_V_read1949_phi_phi_fu_98446_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1879_V_read1949_phi_phi_fu_98446_p4 = ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_55511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1879_V_read1949_phi_phi_fu_98446_p4 = data_1879_V_read.read();
        } else {
            ap_phi_mux_data_1879_V_read1949_phi_phi_fu_98446_p4 = ap_phi_reg_pp0_iter0_data_1879_V_read1949_phi_reg_98442.read();
        }
    } else {
        ap_phi_mux_data_1879_V_read1949_phi_phi_fu_98446_p4 = ap_phi_reg_pp0_iter0_data_1879_V_read1949_phi_reg_98442.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_55511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_55511_p6 = data_1879_V_read1949_phi_reg_98442.read();
    } else {
        ap_phi_mux_data_1879_V_read1949_rewind_phi_fu_55511_p6 = data_1879_V_read1949_rewind_reg_55507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_187_V_read257_phi_phi_fu_76450_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_187_V_read257_phi_phi_fu_76450_p4 = ap_phi_mux_data_187_V_read257_rewind_phi_fu_31823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_187_V_read257_phi_phi_fu_76450_p4 = data_187_V_read.read();
        } else {
            ap_phi_mux_data_187_V_read257_phi_phi_fu_76450_p4 = ap_phi_reg_pp0_iter0_data_187_V_read257_phi_reg_76446.read();
        }
    } else {
        ap_phi_mux_data_187_V_read257_phi_phi_fu_76450_p4 = ap_phi_reg_pp0_iter0_data_187_V_read257_phi_reg_76446.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_187_V_read257_rewind_phi_fu_31823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_187_V_read257_rewind_phi_fu_31823_p6 = data_187_V_read257_phi_reg_76446.read();
    } else {
        ap_phi_mux_data_187_V_read257_rewind_phi_fu_31823_p6 = data_187_V_read257_rewind_reg_31819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1880_V_read1950_phi_phi_fu_98459_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1880_V_read1950_phi_phi_fu_98459_p4 = ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_55525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1880_V_read1950_phi_phi_fu_98459_p4 = data_1880_V_read.read();
        } else {
            ap_phi_mux_data_1880_V_read1950_phi_phi_fu_98459_p4 = ap_phi_reg_pp0_iter0_data_1880_V_read1950_phi_reg_98455.read();
        }
    } else {
        ap_phi_mux_data_1880_V_read1950_phi_phi_fu_98459_p4 = ap_phi_reg_pp0_iter0_data_1880_V_read1950_phi_reg_98455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_55525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_55525_p6 = data_1880_V_read1950_phi_reg_98455.read();
    } else {
        ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_55525_p6 = data_1880_V_read1950_rewind_reg_55521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1881_V_read1951_phi_phi_fu_98472_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1881_V_read1951_phi_phi_fu_98472_p4 = ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_55539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1881_V_read1951_phi_phi_fu_98472_p4 = data_1881_V_read.read();
        } else {
            ap_phi_mux_data_1881_V_read1951_phi_phi_fu_98472_p4 = ap_phi_reg_pp0_iter0_data_1881_V_read1951_phi_reg_98468.read();
        }
    } else {
        ap_phi_mux_data_1881_V_read1951_phi_phi_fu_98472_p4 = ap_phi_reg_pp0_iter0_data_1881_V_read1951_phi_reg_98468.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_55539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_55539_p6 = data_1881_V_read1951_phi_reg_98468.read();
    } else {
        ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_55539_p6 = data_1881_V_read1951_rewind_reg_55535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1882_V_read1952_phi_phi_fu_98485_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1882_V_read1952_phi_phi_fu_98485_p4 = ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_55553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1882_V_read1952_phi_phi_fu_98485_p4 = data_1882_V_read.read();
        } else {
            ap_phi_mux_data_1882_V_read1952_phi_phi_fu_98485_p4 = ap_phi_reg_pp0_iter0_data_1882_V_read1952_phi_reg_98481.read();
        }
    } else {
        ap_phi_mux_data_1882_V_read1952_phi_phi_fu_98485_p4 = ap_phi_reg_pp0_iter0_data_1882_V_read1952_phi_reg_98481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_55553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_55553_p6 = data_1882_V_read1952_phi_reg_98481.read();
    } else {
        ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_55553_p6 = data_1882_V_read1952_rewind_reg_55549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1883_V_read1953_phi_phi_fu_98498_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1883_V_read1953_phi_phi_fu_98498_p4 = ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_55567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1883_V_read1953_phi_phi_fu_98498_p4 = data_1883_V_read.read();
        } else {
            ap_phi_mux_data_1883_V_read1953_phi_phi_fu_98498_p4 = ap_phi_reg_pp0_iter0_data_1883_V_read1953_phi_reg_98494.read();
        }
    } else {
        ap_phi_mux_data_1883_V_read1953_phi_phi_fu_98498_p4 = ap_phi_reg_pp0_iter0_data_1883_V_read1953_phi_reg_98494.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_55567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_55567_p6 = data_1883_V_read1953_phi_reg_98494.read();
    } else {
        ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_55567_p6 = data_1883_V_read1953_rewind_reg_55563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1884_V_read1954_phi_phi_fu_98511_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1884_V_read1954_phi_phi_fu_98511_p4 = ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_55581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1884_V_read1954_phi_phi_fu_98511_p4 = data_1884_V_read.read();
        } else {
            ap_phi_mux_data_1884_V_read1954_phi_phi_fu_98511_p4 = ap_phi_reg_pp0_iter0_data_1884_V_read1954_phi_reg_98507.read();
        }
    } else {
        ap_phi_mux_data_1884_V_read1954_phi_phi_fu_98511_p4 = ap_phi_reg_pp0_iter0_data_1884_V_read1954_phi_reg_98507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_55581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_55581_p6 = data_1884_V_read1954_phi_reg_98507.read();
    } else {
        ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_55581_p6 = data_1884_V_read1954_rewind_reg_55577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1885_V_read1955_phi_phi_fu_98524_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1885_V_read1955_phi_phi_fu_98524_p4 = ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_55595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1885_V_read1955_phi_phi_fu_98524_p4 = data_1885_V_read.read();
        } else {
            ap_phi_mux_data_1885_V_read1955_phi_phi_fu_98524_p4 = ap_phi_reg_pp0_iter0_data_1885_V_read1955_phi_reg_98520.read();
        }
    } else {
        ap_phi_mux_data_1885_V_read1955_phi_phi_fu_98524_p4 = ap_phi_reg_pp0_iter0_data_1885_V_read1955_phi_reg_98520.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_55595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_55595_p6 = data_1885_V_read1955_phi_reg_98520.read();
    } else {
        ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_55595_p6 = data_1885_V_read1955_rewind_reg_55591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1886_V_read1956_phi_phi_fu_98537_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1886_V_read1956_phi_phi_fu_98537_p4 = ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_55609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1886_V_read1956_phi_phi_fu_98537_p4 = data_1886_V_read.read();
        } else {
            ap_phi_mux_data_1886_V_read1956_phi_phi_fu_98537_p4 = ap_phi_reg_pp0_iter0_data_1886_V_read1956_phi_reg_98533.read();
        }
    } else {
        ap_phi_mux_data_1886_V_read1956_phi_phi_fu_98537_p4 = ap_phi_reg_pp0_iter0_data_1886_V_read1956_phi_reg_98533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_55609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_55609_p6 = data_1886_V_read1956_phi_reg_98533.read();
    } else {
        ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_55609_p6 = data_1886_V_read1956_rewind_reg_55605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1887_V_read1957_phi_phi_fu_98550_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1887_V_read1957_phi_phi_fu_98550_p4 = ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_55623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1887_V_read1957_phi_phi_fu_98550_p4 = data_1887_V_read.read();
        } else {
            ap_phi_mux_data_1887_V_read1957_phi_phi_fu_98550_p4 = ap_phi_reg_pp0_iter0_data_1887_V_read1957_phi_reg_98546.read();
        }
    } else {
        ap_phi_mux_data_1887_V_read1957_phi_phi_fu_98550_p4 = ap_phi_reg_pp0_iter0_data_1887_V_read1957_phi_reg_98546.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_55623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_55623_p6 = data_1887_V_read1957_phi_reg_98546.read();
    } else {
        ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_55623_p6 = data_1887_V_read1957_rewind_reg_55619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1888_V_read1958_phi_phi_fu_98563_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1888_V_read1958_phi_phi_fu_98563_p4 = ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_55637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1888_V_read1958_phi_phi_fu_98563_p4 = data_1888_V_read.read();
        } else {
            ap_phi_mux_data_1888_V_read1958_phi_phi_fu_98563_p4 = ap_phi_reg_pp0_iter0_data_1888_V_read1958_phi_reg_98559.read();
        }
    } else {
        ap_phi_mux_data_1888_V_read1958_phi_phi_fu_98563_p4 = ap_phi_reg_pp0_iter0_data_1888_V_read1958_phi_reg_98559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_55637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_55637_p6 = data_1888_V_read1958_phi_reg_98559.read();
    } else {
        ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_55637_p6 = data_1888_V_read1958_rewind_reg_55633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1889_V_read1959_phi_phi_fu_98576_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1889_V_read1959_phi_phi_fu_98576_p4 = ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_55651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1889_V_read1959_phi_phi_fu_98576_p4 = data_1889_V_read.read();
        } else {
            ap_phi_mux_data_1889_V_read1959_phi_phi_fu_98576_p4 = ap_phi_reg_pp0_iter0_data_1889_V_read1959_phi_reg_98572.read();
        }
    } else {
        ap_phi_mux_data_1889_V_read1959_phi_phi_fu_98576_p4 = ap_phi_reg_pp0_iter0_data_1889_V_read1959_phi_reg_98572.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_55651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_55651_p6 = data_1889_V_read1959_phi_reg_98572.read();
    } else {
        ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_55651_p6 = data_1889_V_read1959_rewind_reg_55647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_188_V_read258_phi_phi_fu_76463_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_188_V_read258_phi_phi_fu_76463_p4 = ap_phi_mux_data_188_V_read258_rewind_phi_fu_31837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_188_V_read258_phi_phi_fu_76463_p4 = data_188_V_read.read();
        } else {
            ap_phi_mux_data_188_V_read258_phi_phi_fu_76463_p4 = ap_phi_reg_pp0_iter0_data_188_V_read258_phi_reg_76459.read();
        }
    } else {
        ap_phi_mux_data_188_V_read258_phi_phi_fu_76463_p4 = ap_phi_reg_pp0_iter0_data_188_V_read258_phi_reg_76459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_188_V_read258_rewind_phi_fu_31837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_188_V_read258_rewind_phi_fu_31837_p6 = data_188_V_read258_phi_reg_76459.read();
    } else {
        ap_phi_mux_data_188_V_read258_rewind_phi_fu_31837_p6 = data_188_V_read258_rewind_reg_31833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1890_V_read1960_phi_phi_fu_98589_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1890_V_read1960_phi_phi_fu_98589_p4 = ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_55665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1890_V_read1960_phi_phi_fu_98589_p4 = data_1890_V_read.read();
        } else {
            ap_phi_mux_data_1890_V_read1960_phi_phi_fu_98589_p4 = ap_phi_reg_pp0_iter0_data_1890_V_read1960_phi_reg_98585.read();
        }
    } else {
        ap_phi_mux_data_1890_V_read1960_phi_phi_fu_98589_p4 = ap_phi_reg_pp0_iter0_data_1890_V_read1960_phi_reg_98585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_55665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_55665_p6 = data_1890_V_read1960_phi_reg_98585.read();
    } else {
        ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_55665_p6 = data_1890_V_read1960_rewind_reg_55661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1891_V_read1961_phi_phi_fu_98602_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1891_V_read1961_phi_phi_fu_98602_p4 = ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_55679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1891_V_read1961_phi_phi_fu_98602_p4 = data_1891_V_read.read();
        } else {
            ap_phi_mux_data_1891_V_read1961_phi_phi_fu_98602_p4 = ap_phi_reg_pp0_iter0_data_1891_V_read1961_phi_reg_98598.read();
        }
    } else {
        ap_phi_mux_data_1891_V_read1961_phi_phi_fu_98602_p4 = ap_phi_reg_pp0_iter0_data_1891_V_read1961_phi_reg_98598.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_55679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_55679_p6 = data_1891_V_read1961_phi_reg_98598.read();
    } else {
        ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_55679_p6 = data_1891_V_read1961_rewind_reg_55675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1892_V_read1962_phi_phi_fu_98615_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1892_V_read1962_phi_phi_fu_98615_p4 = ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_55693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1892_V_read1962_phi_phi_fu_98615_p4 = data_1892_V_read.read();
        } else {
            ap_phi_mux_data_1892_V_read1962_phi_phi_fu_98615_p4 = ap_phi_reg_pp0_iter0_data_1892_V_read1962_phi_reg_98611.read();
        }
    } else {
        ap_phi_mux_data_1892_V_read1962_phi_phi_fu_98615_p4 = ap_phi_reg_pp0_iter0_data_1892_V_read1962_phi_reg_98611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_55693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_55693_p6 = data_1892_V_read1962_phi_reg_98611.read();
    } else {
        ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_55693_p6 = data_1892_V_read1962_rewind_reg_55689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1893_V_read1963_phi_phi_fu_98628_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1893_V_read1963_phi_phi_fu_98628_p4 = ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_55707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1893_V_read1963_phi_phi_fu_98628_p4 = data_1893_V_read.read();
        } else {
            ap_phi_mux_data_1893_V_read1963_phi_phi_fu_98628_p4 = ap_phi_reg_pp0_iter0_data_1893_V_read1963_phi_reg_98624.read();
        }
    } else {
        ap_phi_mux_data_1893_V_read1963_phi_phi_fu_98628_p4 = ap_phi_reg_pp0_iter0_data_1893_V_read1963_phi_reg_98624.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_55707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_55707_p6 = data_1893_V_read1963_phi_reg_98624.read();
    } else {
        ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_55707_p6 = data_1893_V_read1963_rewind_reg_55703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1894_V_read1964_phi_phi_fu_98641_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1894_V_read1964_phi_phi_fu_98641_p4 = ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_55721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1894_V_read1964_phi_phi_fu_98641_p4 = data_1894_V_read.read();
        } else {
            ap_phi_mux_data_1894_V_read1964_phi_phi_fu_98641_p4 = ap_phi_reg_pp0_iter0_data_1894_V_read1964_phi_reg_98637.read();
        }
    } else {
        ap_phi_mux_data_1894_V_read1964_phi_phi_fu_98641_p4 = ap_phi_reg_pp0_iter0_data_1894_V_read1964_phi_reg_98637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_55721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_55721_p6 = data_1894_V_read1964_phi_reg_98637.read();
    } else {
        ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_55721_p6 = data_1894_V_read1964_rewind_reg_55717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1895_V_read1965_phi_phi_fu_98654_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1895_V_read1965_phi_phi_fu_98654_p4 = ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_55735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1895_V_read1965_phi_phi_fu_98654_p4 = data_1895_V_read.read();
        } else {
            ap_phi_mux_data_1895_V_read1965_phi_phi_fu_98654_p4 = ap_phi_reg_pp0_iter0_data_1895_V_read1965_phi_reg_98650.read();
        }
    } else {
        ap_phi_mux_data_1895_V_read1965_phi_phi_fu_98654_p4 = ap_phi_reg_pp0_iter0_data_1895_V_read1965_phi_reg_98650.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_55735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_55735_p6 = data_1895_V_read1965_phi_reg_98650.read();
    } else {
        ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_55735_p6 = data_1895_V_read1965_rewind_reg_55731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1896_V_read1966_phi_phi_fu_98667_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1896_V_read1966_phi_phi_fu_98667_p4 = ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_55749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1896_V_read1966_phi_phi_fu_98667_p4 = data_1896_V_read.read();
        } else {
            ap_phi_mux_data_1896_V_read1966_phi_phi_fu_98667_p4 = ap_phi_reg_pp0_iter0_data_1896_V_read1966_phi_reg_98663.read();
        }
    } else {
        ap_phi_mux_data_1896_V_read1966_phi_phi_fu_98667_p4 = ap_phi_reg_pp0_iter0_data_1896_V_read1966_phi_reg_98663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_55749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_55749_p6 = data_1896_V_read1966_phi_reg_98663.read();
    } else {
        ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_55749_p6 = data_1896_V_read1966_rewind_reg_55745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1897_V_read1967_phi_phi_fu_98680_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1897_V_read1967_phi_phi_fu_98680_p4 = ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_55763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1897_V_read1967_phi_phi_fu_98680_p4 = data_1897_V_read.read();
        } else {
            ap_phi_mux_data_1897_V_read1967_phi_phi_fu_98680_p4 = ap_phi_reg_pp0_iter0_data_1897_V_read1967_phi_reg_98676.read();
        }
    } else {
        ap_phi_mux_data_1897_V_read1967_phi_phi_fu_98680_p4 = ap_phi_reg_pp0_iter0_data_1897_V_read1967_phi_reg_98676.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_55763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_55763_p6 = data_1897_V_read1967_phi_reg_98676.read();
    } else {
        ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_55763_p6 = data_1897_V_read1967_rewind_reg_55759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1898_V_read1968_phi_phi_fu_98693_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1898_V_read1968_phi_phi_fu_98693_p4 = ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_55777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1898_V_read1968_phi_phi_fu_98693_p4 = data_1898_V_read.read();
        } else {
            ap_phi_mux_data_1898_V_read1968_phi_phi_fu_98693_p4 = ap_phi_reg_pp0_iter0_data_1898_V_read1968_phi_reg_98689.read();
        }
    } else {
        ap_phi_mux_data_1898_V_read1968_phi_phi_fu_98693_p4 = ap_phi_reg_pp0_iter0_data_1898_V_read1968_phi_reg_98689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_55777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_55777_p6 = data_1898_V_read1968_phi_reg_98689.read();
    } else {
        ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_55777_p6 = data_1898_V_read1968_rewind_reg_55773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1899_V_read1969_phi_phi_fu_98706_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1899_V_read1969_phi_phi_fu_98706_p4 = ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_55791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1899_V_read1969_phi_phi_fu_98706_p4 = data_1899_V_read.read();
        } else {
            ap_phi_mux_data_1899_V_read1969_phi_phi_fu_98706_p4 = ap_phi_reg_pp0_iter0_data_1899_V_read1969_phi_reg_98702.read();
        }
    } else {
        ap_phi_mux_data_1899_V_read1969_phi_phi_fu_98706_p4 = ap_phi_reg_pp0_iter0_data_1899_V_read1969_phi_reg_98702.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_55791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_55791_p6 = data_1899_V_read1969_phi_reg_98702.read();
    } else {
        ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_55791_p6 = data_1899_V_read1969_rewind_reg_55787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_189_V_read259_phi_phi_fu_76476_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_189_V_read259_phi_phi_fu_76476_p4 = ap_phi_mux_data_189_V_read259_rewind_phi_fu_31851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_189_V_read259_phi_phi_fu_76476_p4 = data_189_V_read.read();
        } else {
            ap_phi_mux_data_189_V_read259_phi_phi_fu_76476_p4 = ap_phi_reg_pp0_iter0_data_189_V_read259_phi_reg_76472.read();
        }
    } else {
        ap_phi_mux_data_189_V_read259_phi_phi_fu_76476_p4 = ap_phi_reg_pp0_iter0_data_189_V_read259_phi_reg_76472.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_189_V_read259_rewind_phi_fu_31851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_189_V_read259_rewind_phi_fu_31851_p6 = data_189_V_read259_phi_reg_76472.read();
    } else {
        ap_phi_mux_data_189_V_read259_rewind_phi_fu_31851_p6 = data_189_V_read259_rewind_reg_31847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_18_V_read88_phi_phi_fu_74253_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_18_V_read88_phi_phi_fu_74253_p4 = ap_phi_mux_data_18_V_read88_rewind_phi_fu_29457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_18_V_read88_phi_phi_fu_74253_p4 = data_18_V_read.read();
        } else {
            ap_phi_mux_data_18_V_read88_phi_phi_fu_74253_p4 = ap_phi_reg_pp0_iter0_data_18_V_read88_phi_reg_74249.read();
        }
    } else {
        ap_phi_mux_data_18_V_read88_phi_phi_fu_74253_p4 = ap_phi_reg_pp0_iter0_data_18_V_read88_phi_reg_74249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_18_V_read88_rewind_phi_fu_29457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_18_V_read88_rewind_phi_fu_29457_p6 = data_18_V_read88_phi_reg_74249.read();
    } else {
        ap_phi_mux_data_18_V_read88_rewind_phi_fu_29457_p6 = data_18_V_read88_rewind_reg_29453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1900_V_read1970_phi_phi_fu_98719_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1900_V_read1970_phi_phi_fu_98719_p4 = ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_55805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1900_V_read1970_phi_phi_fu_98719_p4 = data_1900_V_read.read();
        } else {
            ap_phi_mux_data_1900_V_read1970_phi_phi_fu_98719_p4 = ap_phi_reg_pp0_iter0_data_1900_V_read1970_phi_reg_98715.read();
        }
    } else {
        ap_phi_mux_data_1900_V_read1970_phi_phi_fu_98719_p4 = ap_phi_reg_pp0_iter0_data_1900_V_read1970_phi_reg_98715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_55805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_55805_p6 = data_1900_V_read1970_phi_reg_98715.read();
    } else {
        ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_55805_p6 = data_1900_V_read1970_rewind_reg_55801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1901_V_read1971_phi_phi_fu_98732_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1901_V_read1971_phi_phi_fu_98732_p4 = ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_55819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1901_V_read1971_phi_phi_fu_98732_p4 = data_1901_V_read.read();
        } else {
            ap_phi_mux_data_1901_V_read1971_phi_phi_fu_98732_p4 = ap_phi_reg_pp0_iter0_data_1901_V_read1971_phi_reg_98728.read();
        }
    } else {
        ap_phi_mux_data_1901_V_read1971_phi_phi_fu_98732_p4 = ap_phi_reg_pp0_iter0_data_1901_V_read1971_phi_reg_98728.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_55819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_55819_p6 = data_1901_V_read1971_phi_reg_98728.read();
    } else {
        ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_55819_p6 = data_1901_V_read1971_rewind_reg_55815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1902_V_read1972_phi_phi_fu_98745_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1902_V_read1972_phi_phi_fu_98745_p4 = ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_55833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1902_V_read1972_phi_phi_fu_98745_p4 = data_1902_V_read.read();
        } else {
            ap_phi_mux_data_1902_V_read1972_phi_phi_fu_98745_p4 = ap_phi_reg_pp0_iter0_data_1902_V_read1972_phi_reg_98741.read();
        }
    } else {
        ap_phi_mux_data_1902_V_read1972_phi_phi_fu_98745_p4 = ap_phi_reg_pp0_iter0_data_1902_V_read1972_phi_reg_98741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_55833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_55833_p6 = data_1902_V_read1972_phi_reg_98741.read();
    } else {
        ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_55833_p6 = data_1902_V_read1972_rewind_reg_55829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1903_V_read1973_phi_phi_fu_98758_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1903_V_read1973_phi_phi_fu_98758_p4 = ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_55847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1903_V_read1973_phi_phi_fu_98758_p4 = data_1903_V_read.read();
        } else {
            ap_phi_mux_data_1903_V_read1973_phi_phi_fu_98758_p4 = ap_phi_reg_pp0_iter0_data_1903_V_read1973_phi_reg_98754.read();
        }
    } else {
        ap_phi_mux_data_1903_V_read1973_phi_phi_fu_98758_p4 = ap_phi_reg_pp0_iter0_data_1903_V_read1973_phi_reg_98754.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_55847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_55847_p6 = data_1903_V_read1973_phi_reg_98754.read();
    } else {
        ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_55847_p6 = data_1903_V_read1973_rewind_reg_55843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1904_V_read1974_phi_phi_fu_98771_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1904_V_read1974_phi_phi_fu_98771_p4 = ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_55861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1904_V_read1974_phi_phi_fu_98771_p4 = data_1904_V_read.read();
        } else {
            ap_phi_mux_data_1904_V_read1974_phi_phi_fu_98771_p4 = ap_phi_reg_pp0_iter0_data_1904_V_read1974_phi_reg_98767.read();
        }
    } else {
        ap_phi_mux_data_1904_V_read1974_phi_phi_fu_98771_p4 = ap_phi_reg_pp0_iter0_data_1904_V_read1974_phi_reg_98767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_55861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_55861_p6 = data_1904_V_read1974_phi_reg_98767.read();
    } else {
        ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_55861_p6 = data_1904_V_read1974_rewind_reg_55857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1905_V_read1975_phi_phi_fu_98784_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1905_V_read1975_phi_phi_fu_98784_p4 = ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_55875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1905_V_read1975_phi_phi_fu_98784_p4 = data_1905_V_read.read();
        } else {
            ap_phi_mux_data_1905_V_read1975_phi_phi_fu_98784_p4 = ap_phi_reg_pp0_iter0_data_1905_V_read1975_phi_reg_98780.read();
        }
    } else {
        ap_phi_mux_data_1905_V_read1975_phi_phi_fu_98784_p4 = ap_phi_reg_pp0_iter0_data_1905_V_read1975_phi_reg_98780.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_55875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_55875_p6 = data_1905_V_read1975_phi_reg_98780.read();
    } else {
        ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_55875_p6 = data_1905_V_read1975_rewind_reg_55871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1906_V_read1976_phi_phi_fu_98797_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1906_V_read1976_phi_phi_fu_98797_p4 = ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_55889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1906_V_read1976_phi_phi_fu_98797_p4 = data_1906_V_read.read();
        } else {
            ap_phi_mux_data_1906_V_read1976_phi_phi_fu_98797_p4 = ap_phi_reg_pp0_iter0_data_1906_V_read1976_phi_reg_98793.read();
        }
    } else {
        ap_phi_mux_data_1906_V_read1976_phi_phi_fu_98797_p4 = ap_phi_reg_pp0_iter0_data_1906_V_read1976_phi_reg_98793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_55889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_55889_p6 = data_1906_V_read1976_phi_reg_98793.read();
    } else {
        ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_55889_p6 = data_1906_V_read1976_rewind_reg_55885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1907_V_read1977_phi_phi_fu_98810_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1907_V_read1977_phi_phi_fu_98810_p4 = ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_55903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1907_V_read1977_phi_phi_fu_98810_p4 = data_1907_V_read.read();
        } else {
            ap_phi_mux_data_1907_V_read1977_phi_phi_fu_98810_p4 = ap_phi_reg_pp0_iter0_data_1907_V_read1977_phi_reg_98806.read();
        }
    } else {
        ap_phi_mux_data_1907_V_read1977_phi_phi_fu_98810_p4 = ap_phi_reg_pp0_iter0_data_1907_V_read1977_phi_reg_98806.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_55903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_55903_p6 = data_1907_V_read1977_phi_reg_98806.read();
    } else {
        ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_55903_p6 = data_1907_V_read1977_rewind_reg_55899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1908_V_read1978_phi_phi_fu_98823_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1908_V_read1978_phi_phi_fu_98823_p4 = ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_55917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1908_V_read1978_phi_phi_fu_98823_p4 = data_1908_V_read.read();
        } else {
            ap_phi_mux_data_1908_V_read1978_phi_phi_fu_98823_p4 = ap_phi_reg_pp0_iter0_data_1908_V_read1978_phi_reg_98819.read();
        }
    } else {
        ap_phi_mux_data_1908_V_read1978_phi_phi_fu_98823_p4 = ap_phi_reg_pp0_iter0_data_1908_V_read1978_phi_reg_98819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_55917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_55917_p6 = data_1908_V_read1978_phi_reg_98819.read();
    } else {
        ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_55917_p6 = data_1908_V_read1978_rewind_reg_55913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1909_V_read1979_phi_phi_fu_98836_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1909_V_read1979_phi_phi_fu_98836_p4 = ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_55931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1909_V_read1979_phi_phi_fu_98836_p4 = data_1909_V_read.read();
        } else {
            ap_phi_mux_data_1909_V_read1979_phi_phi_fu_98836_p4 = ap_phi_reg_pp0_iter0_data_1909_V_read1979_phi_reg_98832.read();
        }
    } else {
        ap_phi_mux_data_1909_V_read1979_phi_phi_fu_98836_p4 = ap_phi_reg_pp0_iter0_data_1909_V_read1979_phi_reg_98832.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_55931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_55931_p6 = data_1909_V_read1979_phi_reg_98832.read();
    } else {
        ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_55931_p6 = data_1909_V_read1979_rewind_reg_55927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_190_V_read260_phi_phi_fu_76489_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_190_V_read260_phi_phi_fu_76489_p4 = ap_phi_mux_data_190_V_read260_rewind_phi_fu_31865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_190_V_read260_phi_phi_fu_76489_p4 = data_190_V_read.read();
        } else {
            ap_phi_mux_data_190_V_read260_phi_phi_fu_76489_p4 = ap_phi_reg_pp0_iter0_data_190_V_read260_phi_reg_76485.read();
        }
    } else {
        ap_phi_mux_data_190_V_read260_phi_phi_fu_76489_p4 = ap_phi_reg_pp0_iter0_data_190_V_read260_phi_reg_76485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_190_V_read260_rewind_phi_fu_31865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_190_V_read260_rewind_phi_fu_31865_p6 = data_190_V_read260_phi_reg_76485.read();
    } else {
        ap_phi_mux_data_190_V_read260_rewind_phi_fu_31865_p6 = data_190_V_read260_rewind_reg_31861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1910_V_read1980_phi_phi_fu_98849_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1910_V_read1980_phi_phi_fu_98849_p4 = ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_55945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1910_V_read1980_phi_phi_fu_98849_p4 = data_1910_V_read.read();
        } else {
            ap_phi_mux_data_1910_V_read1980_phi_phi_fu_98849_p4 = ap_phi_reg_pp0_iter0_data_1910_V_read1980_phi_reg_98845.read();
        }
    } else {
        ap_phi_mux_data_1910_V_read1980_phi_phi_fu_98849_p4 = ap_phi_reg_pp0_iter0_data_1910_V_read1980_phi_reg_98845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_55945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_55945_p6 = data_1910_V_read1980_phi_reg_98845.read();
    } else {
        ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_55945_p6 = data_1910_V_read1980_rewind_reg_55941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1911_V_read1981_phi_phi_fu_98862_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1911_V_read1981_phi_phi_fu_98862_p4 = ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_55959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1911_V_read1981_phi_phi_fu_98862_p4 = data_1911_V_read.read();
        } else {
            ap_phi_mux_data_1911_V_read1981_phi_phi_fu_98862_p4 = ap_phi_reg_pp0_iter0_data_1911_V_read1981_phi_reg_98858.read();
        }
    } else {
        ap_phi_mux_data_1911_V_read1981_phi_phi_fu_98862_p4 = ap_phi_reg_pp0_iter0_data_1911_V_read1981_phi_reg_98858.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_55959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_55959_p6 = data_1911_V_read1981_phi_reg_98858.read();
    } else {
        ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_55959_p6 = data_1911_V_read1981_rewind_reg_55955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1912_V_read1982_phi_phi_fu_98875_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1912_V_read1982_phi_phi_fu_98875_p4 = ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_55973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1912_V_read1982_phi_phi_fu_98875_p4 = data_1912_V_read.read();
        } else {
            ap_phi_mux_data_1912_V_read1982_phi_phi_fu_98875_p4 = ap_phi_reg_pp0_iter0_data_1912_V_read1982_phi_reg_98871.read();
        }
    } else {
        ap_phi_mux_data_1912_V_read1982_phi_phi_fu_98875_p4 = ap_phi_reg_pp0_iter0_data_1912_V_read1982_phi_reg_98871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_55973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_55973_p6 = data_1912_V_read1982_phi_reg_98871.read();
    } else {
        ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_55973_p6 = data_1912_V_read1982_rewind_reg_55969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1913_V_read1983_phi_phi_fu_98888_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1913_V_read1983_phi_phi_fu_98888_p4 = ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_55987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1913_V_read1983_phi_phi_fu_98888_p4 = data_1913_V_read.read();
        } else {
            ap_phi_mux_data_1913_V_read1983_phi_phi_fu_98888_p4 = ap_phi_reg_pp0_iter0_data_1913_V_read1983_phi_reg_98884.read();
        }
    } else {
        ap_phi_mux_data_1913_V_read1983_phi_phi_fu_98888_p4 = ap_phi_reg_pp0_iter0_data_1913_V_read1983_phi_reg_98884.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_55987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_55987_p6 = data_1913_V_read1983_phi_reg_98884.read();
    } else {
        ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_55987_p6 = data_1913_V_read1983_rewind_reg_55983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1914_V_read1984_phi_phi_fu_98901_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1914_V_read1984_phi_phi_fu_98901_p4 = ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_56001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1914_V_read1984_phi_phi_fu_98901_p4 = data_1914_V_read.read();
        } else {
            ap_phi_mux_data_1914_V_read1984_phi_phi_fu_98901_p4 = ap_phi_reg_pp0_iter0_data_1914_V_read1984_phi_reg_98897.read();
        }
    } else {
        ap_phi_mux_data_1914_V_read1984_phi_phi_fu_98901_p4 = ap_phi_reg_pp0_iter0_data_1914_V_read1984_phi_reg_98897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_56001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_56001_p6 = data_1914_V_read1984_phi_reg_98897.read();
    } else {
        ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_56001_p6 = data_1914_V_read1984_rewind_reg_55997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1915_V_read1985_phi_phi_fu_98914_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1915_V_read1985_phi_phi_fu_98914_p4 = ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_56015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1915_V_read1985_phi_phi_fu_98914_p4 = data_1915_V_read.read();
        } else {
            ap_phi_mux_data_1915_V_read1985_phi_phi_fu_98914_p4 = ap_phi_reg_pp0_iter0_data_1915_V_read1985_phi_reg_98910.read();
        }
    } else {
        ap_phi_mux_data_1915_V_read1985_phi_phi_fu_98914_p4 = ap_phi_reg_pp0_iter0_data_1915_V_read1985_phi_reg_98910.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_56015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_56015_p6 = data_1915_V_read1985_phi_reg_98910.read();
    } else {
        ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_56015_p6 = data_1915_V_read1985_rewind_reg_56011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1916_V_read1986_phi_phi_fu_98927_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1916_V_read1986_phi_phi_fu_98927_p4 = ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_56029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1916_V_read1986_phi_phi_fu_98927_p4 = data_1916_V_read.read();
        } else {
            ap_phi_mux_data_1916_V_read1986_phi_phi_fu_98927_p4 = ap_phi_reg_pp0_iter0_data_1916_V_read1986_phi_reg_98923.read();
        }
    } else {
        ap_phi_mux_data_1916_V_read1986_phi_phi_fu_98927_p4 = ap_phi_reg_pp0_iter0_data_1916_V_read1986_phi_reg_98923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_56029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_56029_p6 = data_1916_V_read1986_phi_reg_98923.read();
    } else {
        ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_56029_p6 = data_1916_V_read1986_rewind_reg_56025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1917_V_read1987_phi_phi_fu_98940_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1917_V_read1987_phi_phi_fu_98940_p4 = ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_56043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1917_V_read1987_phi_phi_fu_98940_p4 = data_1917_V_read.read();
        } else {
            ap_phi_mux_data_1917_V_read1987_phi_phi_fu_98940_p4 = ap_phi_reg_pp0_iter0_data_1917_V_read1987_phi_reg_98936.read();
        }
    } else {
        ap_phi_mux_data_1917_V_read1987_phi_phi_fu_98940_p4 = ap_phi_reg_pp0_iter0_data_1917_V_read1987_phi_reg_98936.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_56043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_56043_p6 = data_1917_V_read1987_phi_reg_98936.read();
    } else {
        ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_56043_p6 = data_1917_V_read1987_rewind_reg_56039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1918_V_read1988_phi_phi_fu_98953_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1918_V_read1988_phi_phi_fu_98953_p4 = ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_56057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1918_V_read1988_phi_phi_fu_98953_p4 = data_1918_V_read.read();
        } else {
            ap_phi_mux_data_1918_V_read1988_phi_phi_fu_98953_p4 = ap_phi_reg_pp0_iter0_data_1918_V_read1988_phi_reg_98949.read();
        }
    } else {
        ap_phi_mux_data_1918_V_read1988_phi_phi_fu_98953_p4 = ap_phi_reg_pp0_iter0_data_1918_V_read1988_phi_reg_98949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_56057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_56057_p6 = data_1918_V_read1988_phi_reg_98949.read();
    } else {
        ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_56057_p6 = data_1918_V_read1988_rewind_reg_56053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1919_V_read1989_phi_phi_fu_98966_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1919_V_read1989_phi_phi_fu_98966_p4 = ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_56071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1919_V_read1989_phi_phi_fu_98966_p4 = data_1919_V_read.read();
        } else {
            ap_phi_mux_data_1919_V_read1989_phi_phi_fu_98966_p4 = ap_phi_reg_pp0_iter0_data_1919_V_read1989_phi_reg_98962.read();
        }
    } else {
        ap_phi_mux_data_1919_V_read1989_phi_phi_fu_98966_p4 = ap_phi_reg_pp0_iter0_data_1919_V_read1989_phi_reg_98962.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_56071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_56071_p6 = data_1919_V_read1989_phi_reg_98962.read();
    } else {
        ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_56071_p6 = data_1919_V_read1989_rewind_reg_56067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_191_V_read261_phi_phi_fu_76502_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_191_V_read261_phi_phi_fu_76502_p4 = ap_phi_mux_data_191_V_read261_rewind_phi_fu_31879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_191_V_read261_phi_phi_fu_76502_p4 = data_191_V_read.read();
        } else {
            ap_phi_mux_data_191_V_read261_phi_phi_fu_76502_p4 = ap_phi_reg_pp0_iter0_data_191_V_read261_phi_reg_76498.read();
        }
    } else {
        ap_phi_mux_data_191_V_read261_phi_phi_fu_76502_p4 = ap_phi_reg_pp0_iter0_data_191_V_read261_phi_reg_76498.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_191_V_read261_rewind_phi_fu_31879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_191_V_read261_rewind_phi_fu_31879_p6 = data_191_V_read261_phi_reg_76498.read();
    } else {
        ap_phi_mux_data_191_V_read261_rewind_phi_fu_31879_p6 = data_191_V_read261_rewind_reg_31875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1920_V_read1990_phi_phi_fu_98979_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1920_V_read1990_phi_phi_fu_98979_p4 = ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_56085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1920_V_read1990_phi_phi_fu_98979_p4 = data_1920_V_read.read();
        } else {
            ap_phi_mux_data_1920_V_read1990_phi_phi_fu_98979_p4 = ap_phi_reg_pp0_iter0_data_1920_V_read1990_phi_reg_98975.read();
        }
    } else {
        ap_phi_mux_data_1920_V_read1990_phi_phi_fu_98979_p4 = ap_phi_reg_pp0_iter0_data_1920_V_read1990_phi_reg_98975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_56085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_56085_p6 = data_1920_V_read1990_phi_reg_98975.read();
    } else {
        ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_56085_p6 = data_1920_V_read1990_rewind_reg_56081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1921_V_read1991_phi_phi_fu_98992_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1921_V_read1991_phi_phi_fu_98992_p4 = ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_56099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1921_V_read1991_phi_phi_fu_98992_p4 = data_1921_V_read.read();
        } else {
            ap_phi_mux_data_1921_V_read1991_phi_phi_fu_98992_p4 = ap_phi_reg_pp0_iter0_data_1921_V_read1991_phi_reg_98988.read();
        }
    } else {
        ap_phi_mux_data_1921_V_read1991_phi_phi_fu_98992_p4 = ap_phi_reg_pp0_iter0_data_1921_V_read1991_phi_reg_98988.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_56099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_56099_p6 = data_1921_V_read1991_phi_reg_98988.read();
    } else {
        ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_56099_p6 = data_1921_V_read1991_rewind_reg_56095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1922_V_read1992_phi_phi_fu_99005_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1922_V_read1992_phi_phi_fu_99005_p4 = ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_56113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1922_V_read1992_phi_phi_fu_99005_p4 = data_1922_V_read.read();
        } else {
            ap_phi_mux_data_1922_V_read1992_phi_phi_fu_99005_p4 = ap_phi_reg_pp0_iter0_data_1922_V_read1992_phi_reg_99001.read();
        }
    } else {
        ap_phi_mux_data_1922_V_read1992_phi_phi_fu_99005_p4 = ap_phi_reg_pp0_iter0_data_1922_V_read1992_phi_reg_99001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_56113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_56113_p6 = data_1922_V_read1992_phi_reg_99001.read();
    } else {
        ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_56113_p6 = data_1922_V_read1992_rewind_reg_56109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1923_V_read1993_phi_phi_fu_99018_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1923_V_read1993_phi_phi_fu_99018_p4 = ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_56127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1923_V_read1993_phi_phi_fu_99018_p4 = data_1923_V_read.read();
        } else {
            ap_phi_mux_data_1923_V_read1993_phi_phi_fu_99018_p4 = ap_phi_reg_pp0_iter0_data_1923_V_read1993_phi_reg_99014.read();
        }
    } else {
        ap_phi_mux_data_1923_V_read1993_phi_phi_fu_99018_p4 = ap_phi_reg_pp0_iter0_data_1923_V_read1993_phi_reg_99014.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_56127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_56127_p6 = data_1923_V_read1993_phi_reg_99014.read();
    } else {
        ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_56127_p6 = data_1923_V_read1993_rewind_reg_56123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1924_V_read1994_phi_phi_fu_99031_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1924_V_read1994_phi_phi_fu_99031_p4 = ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_56141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1924_V_read1994_phi_phi_fu_99031_p4 = data_1924_V_read.read();
        } else {
            ap_phi_mux_data_1924_V_read1994_phi_phi_fu_99031_p4 = ap_phi_reg_pp0_iter0_data_1924_V_read1994_phi_reg_99027.read();
        }
    } else {
        ap_phi_mux_data_1924_V_read1994_phi_phi_fu_99031_p4 = ap_phi_reg_pp0_iter0_data_1924_V_read1994_phi_reg_99027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_56141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_56141_p6 = data_1924_V_read1994_phi_reg_99027.read();
    } else {
        ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_56141_p6 = data_1924_V_read1994_rewind_reg_56137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1925_V_read1995_phi_phi_fu_99044_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1925_V_read1995_phi_phi_fu_99044_p4 = ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_56155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1925_V_read1995_phi_phi_fu_99044_p4 = data_1925_V_read.read();
        } else {
            ap_phi_mux_data_1925_V_read1995_phi_phi_fu_99044_p4 = ap_phi_reg_pp0_iter0_data_1925_V_read1995_phi_reg_99040.read();
        }
    } else {
        ap_phi_mux_data_1925_V_read1995_phi_phi_fu_99044_p4 = ap_phi_reg_pp0_iter0_data_1925_V_read1995_phi_reg_99040.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_56155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_56155_p6 = data_1925_V_read1995_phi_reg_99040.read();
    } else {
        ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_56155_p6 = data_1925_V_read1995_rewind_reg_56151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1926_V_read1996_phi_phi_fu_99057_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1926_V_read1996_phi_phi_fu_99057_p4 = ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_56169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1926_V_read1996_phi_phi_fu_99057_p4 = data_1926_V_read.read();
        } else {
            ap_phi_mux_data_1926_V_read1996_phi_phi_fu_99057_p4 = ap_phi_reg_pp0_iter0_data_1926_V_read1996_phi_reg_99053.read();
        }
    } else {
        ap_phi_mux_data_1926_V_read1996_phi_phi_fu_99057_p4 = ap_phi_reg_pp0_iter0_data_1926_V_read1996_phi_reg_99053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_56169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_56169_p6 = data_1926_V_read1996_phi_reg_99053.read();
    } else {
        ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_56169_p6 = data_1926_V_read1996_rewind_reg_56165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1927_V_read1997_phi_phi_fu_99070_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1927_V_read1997_phi_phi_fu_99070_p4 = ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_56183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1927_V_read1997_phi_phi_fu_99070_p4 = data_1927_V_read.read();
        } else {
            ap_phi_mux_data_1927_V_read1997_phi_phi_fu_99070_p4 = ap_phi_reg_pp0_iter0_data_1927_V_read1997_phi_reg_99066.read();
        }
    } else {
        ap_phi_mux_data_1927_V_read1997_phi_phi_fu_99070_p4 = ap_phi_reg_pp0_iter0_data_1927_V_read1997_phi_reg_99066.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_56183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_56183_p6 = data_1927_V_read1997_phi_reg_99066.read();
    } else {
        ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_56183_p6 = data_1927_V_read1997_rewind_reg_56179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1928_V_read1998_phi_phi_fu_99083_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1928_V_read1998_phi_phi_fu_99083_p4 = ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_56197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1928_V_read1998_phi_phi_fu_99083_p4 = data_1928_V_read.read();
        } else {
            ap_phi_mux_data_1928_V_read1998_phi_phi_fu_99083_p4 = ap_phi_reg_pp0_iter0_data_1928_V_read1998_phi_reg_99079.read();
        }
    } else {
        ap_phi_mux_data_1928_V_read1998_phi_phi_fu_99083_p4 = ap_phi_reg_pp0_iter0_data_1928_V_read1998_phi_reg_99079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_56197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_56197_p6 = data_1928_V_read1998_phi_reg_99079.read();
    } else {
        ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_56197_p6 = data_1928_V_read1998_rewind_reg_56193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1929_V_read1999_phi_phi_fu_99096_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1929_V_read1999_phi_phi_fu_99096_p4 = ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_56211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1929_V_read1999_phi_phi_fu_99096_p4 = data_1929_V_read.read();
        } else {
            ap_phi_mux_data_1929_V_read1999_phi_phi_fu_99096_p4 = ap_phi_reg_pp0_iter0_data_1929_V_read1999_phi_reg_99092.read();
        }
    } else {
        ap_phi_mux_data_1929_V_read1999_phi_phi_fu_99096_p4 = ap_phi_reg_pp0_iter0_data_1929_V_read1999_phi_reg_99092.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_56211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_56211_p6 = data_1929_V_read1999_phi_reg_99092.read();
    } else {
        ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_56211_p6 = data_1929_V_read1999_rewind_reg_56207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_192_V_read262_phi_phi_fu_76515_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_192_V_read262_phi_phi_fu_76515_p4 = ap_phi_mux_data_192_V_read262_rewind_phi_fu_31893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_192_V_read262_phi_phi_fu_76515_p4 = data_192_V_read.read();
        } else {
            ap_phi_mux_data_192_V_read262_phi_phi_fu_76515_p4 = ap_phi_reg_pp0_iter0_data_192_V_read262_phi_reg_76511.read();
        }
    } else {
        ap_phi_mux_data_192_V_read262_phi_phi_fu_76515_p4 = ap_phi_reg_pp0_iter0_data_192_V_read262_phi_reg_76511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_192_V_read262_rewind_phi_fu_31893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_192_V_read262_rewind_phi_fu_31893_p6 = data_192_V_read262_phi_reg_76511.read();
    } else {
        ap_phi_mux_data_192_V_read262_rewind_phi_fu_31893_p6 = data_192_V_read262_rewind_reg_31889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1930_V_read2000_phi_phi_fu_99109_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1930_V_read2000_phi_phi_fu_99109_p4 = ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_56225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1930_V_read2000_phi_phi_fu_99109_p4 = data_1930_V_read.read();
        } else {
            ap_phi_mux_data_1930_V_read2000_phi_phi_fu_99109_p4 = ap_phi_reg_pp0_iter0_data_1930_V_read2000_phi_reg_99105.read();
        }
    } else {
        ap_phi_mux_data_1930_V_read2000_phi_phi_fu_99109_p4 = ap_phi_reg_pp0_iter0_data_1930_V_read2000_phi_reg_99105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_56225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_56225_p6 = data_1930_V_read2000_phi_reg_99105.read();
    } else {
        ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_56225_p6 = data_1930_V_read2000_rewind_reg_56221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1931_V_read2001_phi_phi_fu_99122_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1931_V_read2001_phi_phi_fu_99122_p4 = ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_56239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1931_V_read2001_phi_phi_fu_99122_p4 = data_1931_V_read.read();
        } else {
            ap_phi_mux_data_1931_V_read2001_phi_phi_fu_99122_p4 = ap_phi_reg_pp0_iter0_data_1931_V_read2001_phi_reg_99118.read();
        }
    } else {
        ap_phi_mux_data_1931_V_read2001_phi_phi_fu_99122_p4 = ap_phi_reg_pp0_iter0_data_1931_V_read2001_phi_reg_99118.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_56239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_56239_p6 = data_1931_V_read2001_phi_reg_99118.read();
    } else {
        ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_56239_p6 = data_1931_V_read2001_rewind_reg_56235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1932_V_read2002_phi_phi_fu_99135_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1932_V_read2002_phi_phi_fu_99135_p4 = ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_56253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1932_V_read2002_phi_phi_fu_99135_p4 = data_1932_V_read.read();
        } else {
            ap_phi_mux_data_1932_V_read2002_phi_phi_fu_99135_p4 = ap_phi_reg_pp0_iter0_data_1932_V_read2002_phi_reg_99131.read();
        }
    } else {
        ap_phi_mux_data_1932_V_read2002_phi_phi_fu_99135_p4 = ap_phi_reg_pp0_iter0_data_1932_V_read2002_phi_reg_99131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_56253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_56253_p6 = data_1932_V_read2002_phi_reg_99131.read();
    } else {
        ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_56253_p6 = data_1932_V_read2002_rewind_reg_56249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1933_V_read2003_phi_phi_fu_99148_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1933_V_read2003_phi_phi_fu_99148_p4 = ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_56267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1933_V_read2003_phi_phi_fu_99148_p4 = data_1933_V_read.read();
        } else {
            ap_phi_mux_data_1933_V_read2003_phi_phi_fu_99148_p4 = ap_phi_reg_pp0_iter0_data_1933_V_read2003_phi_reg_99144.read();
        }
    } else {
        ap_phi_mux_data_1933_V_read2003_phi_phi_fu_99148_p4 = ap_phi_reg_pp0_iter0_data_1933_V_read2003_phi_reg_99144.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_56267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_56267_p6 = data_1933_V_read2003_phi_reg_99144.read();
    } else {
        ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_56267_p6 = data_1933_V_read2003_rewind_reg_56263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1934_V_read2004_phi_phi_fu_99161_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1934_V_read2004_phi_phi_fu_99161_p4 = ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_56281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1934_V_read2004_phi_phi_fu_99161_p4 = data_1934_V_read.read();
        } else {
            ap_phi_mux_data_1934_V_read2004_phi_phi_fu_99161_p4 = ap_phi_reg_pp0_iter0_data_1934_V_read2004_phi_reg_99157.read();
        }
    } else {
        ap_phi_mux_data_1934_V_read2004_phi_phi_fu_99161_p4 = ap_phi_reg_pp0_iter0_data_1934_V_read2004_phi_reg_99157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_56281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_56281_p6 = data_1934_V_read2004_phi_reg_99157.read();
    } else {
        ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_56281_p6 = data_1934_V_read2004_rewind_reg_56277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1935_V_read2005_phi_phi_fu_99174_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1935_V_read2005_phi_phi_fu_99174_p4 = ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_56295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1935_V_read2005_phi_phi_fu_99174_p4 = data_1935_V_read.read();
        } else {
            ap_phi_mux_data_1935_V_read2005_phi_phi_fu_99174_p4 = ap_phi_reg_pp0_iter0_data_1935_V_read2005_phi_reg_99170.read();
        }
    } else {
        ap_phi_mux_data_1935_V_read2005_phi_phi_fu_99174_p4 = ap_phi_reg_pp0_iter0_data_1935_V_read2005_phi_reg_99170.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_56295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_56295_p6 = data_1935_V_read2005_phi_reg_99170.read();
    } else {
        ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_56295_p6 = data_1935_V_read2005_rewind_reg_56291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1936_V_read2006_phi_phi_fu_99187_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1936_V_read2006_phi_phi_fu_99187_p4 = ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_56309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1936_V_read2006_phi_phi_fu_99187_p4 = data_1936_V_read.read();
        } else {
            ap_phi_mux_data_1936_V_read2006_phi_phi_fu_99187_p4 = ap_phi_reg_pp0_iter0_data_1936_V_read2006_phi_reg_99183.read();
        }
    } else {
        ap_phi_mux_data_1936_V_read2006_phi_phi_fu_99187_p4 = ap_phi_reg_pp0_iter0_data_1936_V_read2006_phi_reg_99183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_56309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_56309_p6 = data_1936_V_read2006_phi_reg_99183.read();
    } else {
        ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_56309_p6 = data_1936_V_read2006_rewind_reg_56305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1937_V_read2007_phi_phi_fu_99200_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1937_V_read2007_phi_phi_fu_99200_p4 = ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_56323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1937_V_read2007_phi_phi_fu_99200_p4 = data_1937_V_read.read();
        } else {
            ap_phi_mux_data_1937_V_read2007_phi_phi_fu_99200_p4 = ap_phi_reg_pp0_iter0_data_1937_V_read2007_phi_reg_99196.read();
        }
    } else {
        ap_phi_mux_data_1937_V_read2007_phi_phi_fu_99200_p4 = ap_phi_reg_pp0_iter0_data_1937_V_read2007_phi_reg_99196.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_56323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_56323_p6 = data_1937_V_read2007_phi_reg_99196.read();
    } else {
        ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_56323_p6 = data_1937_V_read2007_rewind_reg_56319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1938_V_read2008_phi_phi_fu_99213_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1938_V_read2008_phi_phi_fu_99213_p4 = ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_56337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1938_V_read2008_phi_phi_fu_99213_p4 = data_1938_V_read.read();
        } else {
            ap_phi_mux_data_1938_V_read2008_phi_phi_fu_99213_p4 = ap_phi_reg_pp0_iter0_data_1938_V_read2008_phi_reg_99209.read();
        }
    } else {
        ap_phi_mux_data_1938_V_read2008_phi_phi_fu_99213_p4 = ap_phi_reg_pp0_iter0_data_1938_V_read2008_phi_reg_99209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_56337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_56337_p6 = data_1938_V_read2008_phi_reg_99209.read();
    } else {
        ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_56337_p6 = data_1938_V_read2008_rewind_reg_56333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1939_V_read2009_phi_phi_fu_99226_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1939_V_read2009_phi_phi_fu_99226_p4 = ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_56351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1939_V_read2009_phi_phi_fu_99226_p4 = data_1939_V_read.read();
        } else {
            ap_phi_mux_data_1939_V_read2009_phi_phi_fu_99226_p4 = ap_phi_reg_pp0_iter0_data_1939_V_read2009_phi_reg_99222.read();
        }
    } else {
        ap_phi_mux_data_1939_V_read2009_phi_phi_fu_99226_p4 = ap_phi_reg_pp0_iter0_data_1939_V_read2009_phi_reg_99222.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_56351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_56351_p6 = data_1939_V_read2009_phi_reg_99222.read();
    } else {
        ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_56351_p6 = data_1939_V_read2009_rewind_reg_56347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_193_V_read263_phi_phi_fu_76528_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_193_V_read263_phi_phi_fu_76528_p4 = ap_phi_mux_data_193_V_read263_rewind_phi_fu_31907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_193_V_read263_phi_phi_fu_76528_p4 = data_193_V_read.read();
        } else {
            ap_phi_mux_data_193_V_read263_phi_phi_fu_76528_p4 = ap_phi_reg_pp0_iter0_data_193_V_read263_phi_reg_76524.read();
        }
    } else {
        ap_phi_mux_data_193_V_read263_phi_phi_fu_76528_p4 = ap_phi_reg_pp0_iter0_data_193_V_read263_phi_reg_76524.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_193_V_read263_rewind_phi_fu_31907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_193_V_read263_rewind_phi_fu_31907_p6 = data_193_V_read263_phi_reg_76524.read();
    } else {
        ap_phi_mux_data_193_V_read263_rewind_phi_fu_31907_p6 = data_193_V_read263_rewind_reg_31903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1940_V_read2010_phi_phi_fu_99239_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1940_V_read2010_phi_phi_fu_99239_p4 = ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_56365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1940_V_read2010_phi_phi_fu_99239_p4 = data_1940_V_read.read();
        } else {
            ap_phi_mux_data_1940_V_read2010_phi_phi_fu_99239_p4 = ap_phi_reg_pp0_iter0_data_1940_V_read2010_phi_reg_99235.read();
        }
    } else {
        ap_phi_mux_data_1940_V_read2010_phi_phi_fu_99239_p4 = ap_phi_reg_pp0_iter0_data_1940_V_read2010_phi_reg_99235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_56365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_56365_p6 = data_1940_V_read2010_phi_reg_99235.read();
    } else {
        ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_56365_p6 = data_1940_V_read2010_rewind_reg_56361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1941_V_read2011_phi_phi_fu_99252_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1941_V_read2011_phi_phi_fu_99252_p4 = ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_56379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1941_V_read2011_phi_phi_fu_99252_p4 = data_1941_V_read.read();
        } else {
            ap_phi_mux_data_1941_V_read2011_phi_phi_fu_99252_p4 = ap_phi_reg_pp0_iter0_data_1941_V_read2011_phi_reg_99248.read();
        }
    } else {
        ap_phi_mux_data_1941_V_read2011_phi_phi_fu_99252_p4 = ap_phi_reg_pp0_iter0_data_1941_V_read2011_phi_reg_99248.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_56379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_56379_p6 = data_1941_V_read2011_phi_reg_99248.read();
    } else {
        ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_56379_p6 = data_1941_V_read2011_rewind_reg_56375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1942_V_read2012_phi_phi_fu_99265_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1942_V_read2012_phi_phi_fu_99265_p4 = ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_56393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1942_V_read2012_phi_phi_fu_99265_p4 = data_1942_V_read.read();
        } else {
            ap_phi_mux_data_1942_V_read2012_phi_phi_fu_99265_p4 = ap_phi_reg_pp0_iter0_data_1942_V_read2012_phi_reg_99261.read();
        }
    } else {
        ap_phi_mux_data_1942_V_read2012_phi_phi_fu_99265_p4 = ap_phi_reg_pp0_iter0_data_1942_V_read2012_phi_reg_99261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_56393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_56393_p6 = data_1942_V_read2012_phi_reg_99261.read();
    } else {
        ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_56393_p6 = data_1942_V_read2012_rewind_reg_56389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1943_V_read2013_phi_phi_fu_99278_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1943_V_read2013_phi_phi_fu_99278_p4 = ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_56407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1943_V_read2013_phi_phi_fu_99278_p4 = data_1943_V_read.read();
        } else {
            ap_phi_mux_data_1943_V_read2013_phi_phi_fu_99278_p4 = ap_phi_reg_pp0_iter0_data_1943_V_read2013_phi_reg_99274.read();
        }
    } else {
        ap_phi_mux_data_1943_V_read2013_phi_phi_fu_99278_p4 = ap_phi_reg_pp0_iter0_data_1943_V_read2013_phi_reg_99274.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_56407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_56407_p6 = data_1943_V_read2013_phi_reg_99274.read();
    } else {
        ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_56407_p6 = data_1943_V_read2013_rewind_reg_56403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1944_V_read2014_phi_phi_fu_99291_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1944_V_read2014_phi_phi_fu_99291_p4 = ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_56421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1944_V_read2014_phi_phi_fu_99291_p4 = data_1944_V_read.read();
        } else {
            ap_phi_mux_data_1944_V_read2014_phi_phi_fu_99291_p4 = ap_phi_reg_pp0_iter0_data_1944_V_read2014_phi_reg_99287.read();
        }
    } else {
        ap_phi_mux_data_1944_V_read2014_phi_phi_fu_99291_p4 = ap_phi_reg_pp0_iter0_data_1944_V_read2014_phi_reg_99287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_56421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_56421_p6 = data_1944_V_read2014_phi_reg_99287.read();
    } else {
        ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_56421_p6 = data_1944_V_read2014_rewind_reg_56417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1945_V_read2015_phi_phi_fu_99304_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1945_V_read2015_phi_phi_fu_99304_p4 = ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_56435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1945_V_read2015_phi_phi_fu_99304_p4 = data_1945_V_read.read();
        } else {
            ap_phi_mux_data_1945_V_read2015_phi_phi_fu_99304_p4 = ap_phi_reg_pp0_iter0_data_1945_V_read2015_phi_reg_99300.read();
        }
    } else {
        ap_phi_mux_data_1945_V_read2015_phi_phi_fu_99304_p4 = ap_phi_reg_pp0_iter0_data_1945_V_read2015_phi_reg_99300.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_56435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_56435_p6 = data_1945_V_read2015_phi_reg_99300.read();
    } else {
        ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_56435_p6 = data_1945_V_read2015_rewind_reg_56431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1946_V_read2016_phi_phi_fu_99317_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1946_V_read2016_phi_phi_fu_99317_p4 = ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_56449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1946_V_read2016_phi_phi_fu_99317_p4 = data_1946_V_read.read();
        } else {
            ap_phi_mux_data_1946_V_read2016_phi_phi_fu_99317_p4 = ap_phi_reg_pp0_iter0_data_1946_V_read2016_phi_reg_99313.read();
        }
    } else {
        ap_phi_mux_data_1946_V_read2016_phi_phi_fu_99317_p4 = ap_phi_reg_pp0_iter0_data_1946_V_read2016_phi_reg_99313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_56449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_56449_p6 = data_1946_V_read2016_phi_reg_99313.read();
    } else {
        ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_56449_p6 = data_1946_V_read2016_rewind_reg_56445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1947_V_read2017_phi_phi_fu_99330_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1947_V_read2017_phi_phi_fu_99330_p4 = ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_56463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1947_V_read2017_phi_phi_fu_99330_p4 = data_1947_V_read.read();
        } else {
            ap_phi_mux_data_1947_V_read2017_phi_phi_fu_99330_p4 = ap_phi_reg_pp0_iter0_data_1947_V_read2017_phi_reg_99326.read();
        }
    } else {
        ap_phi_mux_data_1947_V_read2017_phi_phi_fu_99330_p4 = ap_phi_reg_pp0_iter0_data_1947_V_read2017_phi_reg_99326.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_56463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_56463_p6 = data_1947_V_read2017_phi_reg_99326.read();
    } else {
        ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_56463_p6 = data_1947_V_read2017_rewind_reg_56459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1948_V_read2018_phi_phi_fu_99343_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1948_V_read2018_phi_phi_fu_99343_p4 = ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_56477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1948_V_read2018_phi_phi_fu_99343_p4 = data_1948_V_read.read();
        } else {
            ap_phi_mux_data_1948_V_read2018_phi_phi_fu_99343_p4 = ap_phi_reg_pp0_iter0_data_1948_V_read2018_phi_reg_99339.read();
        }
    } else {
        ap_phi_mux_data_1948_V_read2018_phi_phi_fu_99343_p4 = ap_phi_reg_pp0_iter0_data_1948_V_read2018_phi_reg_99339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_56477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_56477_p6 = data_1948_V_read2018_phi_reg_99339.read();
    } else {
        ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_56477_p6 = data_1948_V_read2018_rewind_reg_56473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1949_V_read2019_phi_phi_fu_99356_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1949_V_read2019_phi_phi_fu_99356_p4 = ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_56491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1949_V_read2019_phi_phi_fu_99356_p4 = data_1949_V_read.read();
        } else {
            ap_phi_mux_data_1949_V_read2019_phi_phi_fu_99356_p4 = ap_phi_reg_pp0_iter0_data_1949_V_read2019_phi_reg_99352.read();
        }
    } else {
        ap_phi_mux_data_1949_V_read2019_phi_phi_fu_99356_p4 = ap_phi_reg_pp0_iter0_data_1949_V_read2019_phi_reg_99352.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_56491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_56491_p6 = data_1949_V_read2019_phi_reg_99352.read();
    } else {
        ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_56491_p6 = data_1949_V_read2019_rewind_reg_56487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_194_V_read264_phi_phi_fu_76541_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_194_V_read264_phi_phi_fu_76541_p4 = ap_phi_mux_data_194_V_read264_rewind_phi_fu_31921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_194_V_read264_phi_phi_fu_76541_p4 = data_194_V_read.read();
        } else {
            ap_phi_mux_data_194_V_read264_phi_phi_fu_76541_p4 = ap_phi_reg_pp0_iter0_data_194_V_read264_phi_reg_76537.read();
        }
    } else {
        ap_phi_mux_data_194_V_read264_phi_phi_fu_76541_p4 = ap_phi_reg_pp0_iter0_data_194_V_read264_phi_reg_76537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_194_V_read264_rewind_phi_fu_31921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_194_V_read264_rewind_phi_fu_31921_p6 = data_194_V_read264_phi_reg_76537.read();
    } else {
        ap_phi_mux_data_194_V_read264_rewind_phi_fu_31921_p6 = data_194_V_read264_rewind_reg_31917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1950_V_read2020_phi_phi_fu_99369_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1950_V_read2020_phi_phi_fu_99369_p4 = ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_56505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1950_V_read2020_phi_phi_fu_99369_p4 = data_1950_V_read.read();
        } else {
            ap_phi_mux_data_1950_V_read2020_phi_phi_fu_99369_p4 = ap_phi_reg_pp0_iter0_data_1950_V_read2020_phi_reg_99365.read();
        }
    } else {
        ap_phi_mux_data_1950_V_read2020_phi_phi_fu_99369_p4 = ap_phi_reg_pp0_iter0_data_1950_V_read2020_phi_reg_99365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_56505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_56505_p6 = data_1950_V_read2020_phi_reg_99365.read();
    } else {
        ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_56505_p6 = data_1950_V_read2020_rewind_reg_56501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1951_V_read2021_phi_phi_fu_99382_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1951_V_read2021_phi_phi_fu_99382_p4 = ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_56519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1951_V_read2021_phi_phi_fu_99382_p4 = data_1951_V_read.read();
        } else {
            ap_phi_mux_data_1951_V_read2021_phi_phi_fu_99382_p4 = ap_phi_reg_pp0_iter0_data_1951_V_read2021_phi_reg_99378.read();
        }
    } else {
        ap_phi_mux_data_1951_V_read2021_phi_phi_fu_99382_p4 = ap_phi_reg_pp0_iter0_data_1951_V_read2021_phi_reg_99378.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_56519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_56519_p6 = data_1951_V_read2021_phi_reg_99378.read();
    } else {
        ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_56519_p6 = data_1951_V_read2021_rewind_reg_56515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1952_V_read2022_phi_phi_fu_99395_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1952_V_read2022_phi_phi_fu_99395_p4 = ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_56533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1952_V_read2022_phi_phi_fu_99395_p4 = data_1952_V_read.read();
        } else {
            ap_phi_mux_data_1952_V_read2022_phi_phi_fu_99395_p4 = ap_phi_reg_pp0_iter0_data_1952_V_read2022_phi_reg_99391.read();
        }
    } else {
        ap_phi_mux_data_1952_V_read2022_phi_phi_fu_99395_p4 = ap_phi_reg_pp0_iter0_data_1952_V_read2022_phi_reg_99391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_56533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_56533_p6 = data_1952_V_read2022_phi_reg_99391.read();
    } else {
        ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_56533_p6 = data_1952_V_read2022_rewind_reg_56529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1953_V_read2023_phi_phi_fu_99408_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1953_V_read2023_phi_phi_fu_99408_p4 = ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_56547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1953_V_read2023_phi_phi_fu_99408_p4 = data_1953_V_read.read();
        } else {
            ap_phi_mux_data_1953_V_read2023_phi_phi_fu_99408_p4 = ap_phi_reg_pp0_iter0_data_1953_V_read2023_phi_reg_99404.read();
        }
    } else {
        ap_phi_mux_data_1953_V_read2023_phi_phi_fu_99408_p4 = ap_phi_reg_pp0_iter0_data_1953_V_read2023_phi_reg_99404.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_56547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_56547_p6 = data_1953_V_read2023_phi_reg_99404.read();
    } else {
        ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_56547_p6 = data_1953_V_read2023_rewind_reg_56543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1954_V_read2024_phi_phi_fu_99421_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1954_V_read2024_phi_phi_fu_99421_p4 = ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_56561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1954_V_read2024_phi_phi_fu_99421_p4 = data_1954_V_read.read();
        } else {
            ap_phi_mux_data_1954_V_read2024_phi_phi_fu_99421_p4 = ap_phi_reg_pp0_iter0_data_1954_V_read2024_phi_reg_99417.read();
        }
    } else {
        ap_phi_mux_data_1954_V_read2024_phi_phi_fu_99421_p4 = ap_phi_reg_pp0_iter0_data_1954_V_read2024_phi_reg_99417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_56561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_56561_p6 = data_1954_V_read2024_phi_reg_99417.read();
    } else {
        ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_56561_p6 = data_1954_V_read2024_rewind_reg_56557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1955_V_read2025_phi_phi_fu_99434_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1955_V_read2025_phi_phi_fu_99434_p4 = ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_56575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1955_V_read2025_phi_phi_fu_99434_p4 = data_1955_V_read.read();
        } else {
            ap_phi_mux_data_1955_V_read2025_phi_phi_fu_99434_p4 = ap_phi_reg_pp0_iter0_data_1955_V_read2025_phi_reg_99430.read();
        }
    } else {
        ap_phi_mux_data_1955_V_read2025_phi_phi_fu_99434_p4 = ap_phi_reg_pp0_iter0_data_1955_V_read2025_phi_reg_99430.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_56575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_56575_p6 = data_1955_V_read2025_phi_reg_99430.read();
    } else {
        ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_56575_p6 = data_1955_V_read2025_rewind_reg_56571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1956_V_read2026_phi_phi_fu_99447_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1956_V_read2026_phi_phi_fu_99447_p4 = ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_56589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1956_V_read2026_phi_phi_fu_99447_p4 = data_1956_V_read.read();
        } else {
            ap_phi_mux_data_1956_V_read2026_phi_phi_fu_99447_p4 = ap_phi_reg_pp0_iter0_data_1956_V_read2026_phi_reg_99443.read();
        }
    } else {
        ap_phi_mux_data_1956_V_read2026_phi_phi_fu_99447_p4 = ap_phi_reg_pp0_iter0_data_1956_V_read2026_phi_reg_99443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_56589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_56589_p6 = data_1956_V_read2026_phi_reg_99443.read();
    } else {
        ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_56589_p6 = data_1956_V_read2026_rewind_reg_56585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1957_V_read2027_phi_phi_fu_99460_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1957_V_read2027_phi_phi_fu_99460_p4 = ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_56603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1957_V_read2027_phi_phi_fu_99460_p4 = data_1957_V_read.read();
        } else {
            ap_phi_mux_data_1957_V_read2027_phi_phi_fu_99460_p4 = ap_phi_reg_pp0_iter0_data_1957_V_read2027_phi_reg_99456.read();
        }
    } else {
        ap_phi_mux_data_1957_V_read2027_phi_phi_fu_99460_p4 = ap_phi_reg_pp0_iter0_data_1957_V_read2027_phi_reg_99456.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_56603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_56603_p6 = data_1957_V_read2027_phi_reg_99456.read();
    } else {
        ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_56603_p6 = data_1957_V_read2027_rewind_reg_56599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1958_V_read2028_phi_phi_fu_99473_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1958_V_read2028_phi_phi_fu_99473_p4 = ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_56617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1958_V_read2028_phi_phi_fu_99473_p4 = data_1958_V_read.read();
        } else {
            ap_phi_mux_data_1958_V_read2028_phi_phi_fu_99473_p4 = ap_phi_reg_pp0_iter0_data_1958_V_read2028_phi_reg_99469.read();
        }
    } else {
        ap_phi_mux_data_1958_V_read2028_phi_phi_fu_99473_p4 = ap_phi_reg_pp0_iter0_data_1958_V_read2028_phi_reg_99469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_56617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_56617_p6 = data_1958_V_read2028_phi_reg_99469.read();
    } else {
        ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_56617_p6 = data_1958_V_read2028_rewind_reg_56613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1959_V_read2029_phi_phi_fu_99486_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1959_V_read2029_phi_phi_fu_99486_p4 = ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_56631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1959_V_read2029_phi_phi_fu_99486_p4 = data_1959_V_read.read();
        } else {
            ap_phi_mux_data_1959_V_read2029_phi_phi_fu_99486_p4 = ap_phi_reg_pp0_iter0_data_1959_V_read2029_phi_reg_99482.read();
        }
    } else {
        ap_phi_mux_data_1959_V_read2029_phi_phi_fu_99486_p4 = ap_phi_reg_pp0_iter0_data_1959_V_read2029_phi_reg_99482.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_56631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_56631_p6 = data_1959_V_read2029_phi_reg_99482.read();
    } else {
        ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_56631_p6 = data_1959_V_read2029_rewind_reg_56627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_195_V_read265_phi_phi_fu_76554_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_195_V_read265_phi_phi_fu_76554_p4 = ap_phi_mux_data_195_V_read265_rewind_phi_fu_31935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_195_V_read265_phi_phi_fu_76554_p4 = data_195_V_read.read();
        } else {
            ap_phi_mux_data_195_V_read265_phi_phi_fu_76554_p4 = ap_phi_reg_pp0_iter0_data_195_V_read265_phi_reg_76550.read();
        }
    } else {
        ap_phi_mux_data_195_V_read265_phi_phi_fu_76554_p4 = ap_phi_reg_pp0_iter0_data_195_V_read265_phi_reg_76550.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_195_V_read265_rewind_phi_fu_31935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_195_V_read265_rewind_phi_fu_31935_p6 = data_195_V_read265_phi_reg_76550.read();
    } else {
        ap_phi_mux_data_195_V_read265_rewind_phi_fu_31935_p6 = data_195_V_read265_rewind_reg_31931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1960_V_read2030_phi_phi_fu_99499_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1960_V_read2030_phi_phi_fu_99499_p4 = ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_56645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1960_V_read2030_phi_phi_fu_99499_p4 = data_1960_V_read.read();
        } else {
            ap_phi_mux_data_1960_V_read2030_phi_phi_fu_99499_p4 = ap_phi_reg_pp0_iter0_data_1960_V_read2030_phi_reg_99495.read();
        }
    } else {
        ap_phi_mux_data_1960_V_read2030_phi_phi_fu_99499_p4 = ap_phi_reg_pp0_iter0_data_1960_V_read2030_phi_reg_99495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_56645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_56645_p6 = data_1960_V_read2030_phi_reg_99495.read();
    } else {
        ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_56645_p6 = data_1960_V_read2030_rewind_reg_56641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1961_V_read2031_phi_phi_fu_99512_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1961_V_read2031_phi_phi_fu_99512_p4 = ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_56659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1961_V_read2031_phi_phi_fu_99512_p4 = data_1961_V_read.read();
        } else {
            ap_phi_mux_data_1961_V_read2031_phi_phi_fu_99512_p4 = ap_phi_reg_pp0_iter0_data_1961_V_read2031_phi_reg_99508.read();
        }
    } else {
        ap_phi_mux_data_1961_V_read2031_phi_phi_fu_99512_p4 = ap_phi_reg_pp0_iter0_data_1961_V_read2031_phi_reg_99508.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_56659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_56659_p6 = data_1961_V_read2031_phi_reg_99508.read();
    } else {
        ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_56659_p6 = data_1961_V_read2031_rewind_reg_56655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1962_V_read2032_phi_phi_fu_99525_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1962_V_read2032_phi_phi_fu_99525_p4 = ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_56673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1962_V_read2032_phi_phi_fu_99525_p4 = data_1962_V_read.read();
        } else {
            ap_phi_mux_data_1962_V_read2032_phi_phi_fu_99525_p4 = ap_phi_reg_pp0_iter0_data_1962_V_read2032_phi_reg_99521.read();
        }
    } else {
        ap_phi_mux_data_1962_V_read2032_phi_phi_fu_99525_p4 = ap_phi_reg_pp0_iter0_data_1962_V_read2032_phi_reg_99521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_56673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_56673_p6 = data_1962_V_read2032_phi_reg_99521.read();
    } else {
        ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_56673_p6 = data_1962_V_read2032_rewind_reg_56669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1963_V_read2033_phi_phi_fu_99538_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1963_V_read2033_phi_phi_fu_99538_p4 = ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_56687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1963_V_read2033_phi_phi_fu_99538_p4 = data_1963_V_read.read();
        } else {
            ap_phi_mux_data_1963_V_read2033_phi_phi_fu_99538_p4 = ap_phi_reg_pp0_iter0_data_1963_V_read2033_phi_reg_99534.read();
        }
    } else {
        ap_phi_mux_data_1963_V_read2033_phi_phi_fu_99538_p4 = ap_phi_reg_pp0_iter0_data_1963_V_read2033_phi_reg_99534.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_56687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_56687_p6 = data_1963_V_read2033_phi_reg_99534.read();
    } else {
        ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_56687_p6 = data_1963_V_read2033_rewind_reg_56683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1964_V_read2034_phi_phi_fu_99551_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1964_V_read2034_phi_phi_fu_99551_p4 = ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_56701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1964_V_read2034_phi_phi_fu_99551_p4 = data_1964_V_read.read();
        } else {
            ap_phi_mux_data_1964_V_read2034_phi_phi_fu_99551_p4 = ap_phi_reg_pp0_iter0_data_1964_V_read2034_phi_reg_99547.read();
        }
    } else {
        ap_phi_mux_data_1964_V_read2034_phi_phi_fu_99551_p4 = ap_phi_reg_pp0_iter0_data_1964_V_read2034_phi_reg_99547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_56701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_56701_p6 = data_1964_V_read2034_phi_reg_99547.read();
    } else {
        ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_56701_p6 = data_1964_V_read2034_rewind_reg_56697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1965_V_read2035_phi_phi_fu_99564_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1965_V_read2035_phi_phi_fu_99564_p4 = ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_56715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1965_V_read2035_phi_phi_fu_99564_p4 = data_1965_V_read.read();
        } else {
            ap_phi_mux_data_1965_V_read2035_phi_phi_fu_99564_p4 = ap_phi_reg_pp0_iter0_data_1965_V_read2035_phi_reg_99560.read();
        }
    } else {
        ap_phi_mux_data_1965_V_read2035_phi_phi_fu_99564_p4 = ap_phi_reg_pp0_iter0_data_1965_V_read2035_phi_reg_99560.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_56715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_56715_p6 = data_1965_V_read2035_phi_reg_99560.read();
    } else {
        ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_56715_p6 = data_1965_V_read2035_rewind_reg_56711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1966_V_read2036_phi_phi_fu_99577_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1966_V_read2036_phi_phi_fu_99577_p4 = ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_56729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1966_V_read2036_phi_phi_fu_99577_p4 = data_1966_V_read.read();
        } else {
            ap_phi_mux_data_1966_V_read2036_phi_phi_fu_99577_p4 = ap_phi_reg_pp0_iter0_data_1966_V_read2036_phi_reg_99573.read();
        }
    } else {
        ap_phi_mux_data_1966_V_read2036_phi_phi_fu_99577_p4 = ap_phi_reg_pp0_iter0_data_1966_V_read2036_phi_reg_99573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_56729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_56729_p6 = data_1966_V_read2036_phi_reg_99573.read();
    } else {
        ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_56729_p6 = data_1966_V_read2036_rewind_reg_56725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1967_V_read2037_phi_phi_fu_99590_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1967_V_read2037_phi_phi_fu_99590_p4 = ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_56743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1967_V_read2037_phi_phi_fu_99590_p4 = data_1967_V_read.read();
        } else {
            ap_phi_mux_data_1967_V_read2037_phi_phi_fu_99590_p4 = ap_phi_reg_pp0_iter0_data_1967_V_read2037_phi_reg_99586.read();
        }
    } else {
        ap_phi_mux_data_1967_V_read2037_phi_phi_fu_99590_p4 = ap_phi_reg_pp0_iter0_data_1967_V_read2037_phi_reg_99586.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_56743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_56743_p6 = data_1967_V_read2037_phi_reg_99586.read();
    } else {
        ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_56743_p6 = data_1967_V_read2037_rewind_reg_56739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1968_V_read2038_phi_phi_fu_99603_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1968_V_read2038_phi_phi_fu_99603_p4 = ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_56757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1968_V_read2038_phi_phi_fu_99603_p4 = data_1968_V_read.read();
        } else {
            ap_phi_mux_data_1968_V_read2038_phi_phi_fu_99603_p4 = ap_phi_reg_pp0_iter0_data_1968_V_read2038_phi_reg_99599.read();
        }
    } else {
        ap_phi_mux_data_1968_V_read2038_phi_phi_fu_99603_p4 = ap_phi_reg_pp0_iter0_data_1968_V_read2038_phi_reg_99599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_56757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_56757_p6 = data_1968_V_read2038_phi_reg_99599.read();
    } else {
        ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_56757_p6 = data_1968_V_read2038_rewind_reg_56753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1969_V_read2039_phi_phi_fu_99616_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1969_V_read2039_phi_phi_fu_99616_p4 = ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_56771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1969_V_read2039_phi_phi_fu_99616_p4 = data_1969_V_read.read();
        } else {
            ap_phi_mux_data_1969_V_read2039_phi_phi_fu_99616_p4 = ap_phi_reg_pp0_iter0_data_1969_V_read2039_phi_reg_99612.read();
        }
    } else {
        ap_phi_mux_data_1969_V_read2039_phi_phi_fu_99616_p4 = ap_phi_reg_pp0_iter0_data_1969_V_read2039_phi_reg_99612.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_56771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_56771_p6 = data_1969_V_read2039_phi_reg_99612.read();
    } else {
        ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_56771_p6 = data_1969_V_read2039_rewind_reg_56767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_196_V_read266_phi_phi_fu_76567_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_196_V_read266_phi_phi_fu_76567_p4 = ap_phi_mux_data_196_V_read266_rewind_phi_fu_31949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_196_V_read266_phi_phi_fu_76567_p4 = data_196_V_read.read();
        } else {
            ap_phi_mux_data_196_V_read266_phi_phi_fu_76567_p4 = ap_phi_reg_pp0_iter0_data_196_V_read266_phi_reg_76563.read();
        }
    } else {
        ap_phi_mux_data_196_V_read266_phi_phi_fu_76567_p4 = ap_phi_reg_pp0_iter0_data_196_V_read266_phi_reg_76563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_196_V_read266_rewind_phi_fu_31949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_196_V_read266_rewind_phi_fu_31949_p6 = data_196_V_read266_phi_reg_76563.read();
    } else {
        ap_phi_mux_data_196_V_read266_rewind_phi_fu_31949_p6 = data_196_V_read266_rewind_reg_31945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1970_V_read2040_phi_phi_fu_99629_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1970_V_read2040_phi_phi_fu_99629_p4 = ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_56785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1970_V_read2040_phi_phi_fu_99629_p4 = data_1970_V_read.read();
        } else {
            ap_phi_mux_data_1970_V_read2040_phi_phi_fu_99629_p4 = ap_phi_reg_pp0_iter0_data_1970_V_read2040_phi_reg_99625.read();
        }
    } else {
        ap_phi_mux_data_1970_V_read2040_phi_phi_fu_99629_p4 = ap_phi_reg_pp0_iter0_data_1970_V_read2040_phi_reg_99625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_56785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_56785_p6 = data_1970_V_read2040_phi_reg_99625.read();
    } else {
        ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_56785_p6 = data_1970_V_read2040_rewind_reg_56781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1971_V_read2041_phi_phi_fu_99642_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1971_V_read2041_phi_phi_fu_99642_p4 = ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_56799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1971_V_read2041_phi_phi_fu_99642_p4 = data_1971_V_read.read();
        } else {
            ap_phi_mux_data_1971_V_read2041_phi_phi_fu_99642_p4 = ap_phi_reg_pp0_iter0_data_1971_V_read2041_phi_reg_99638.read();
        }
    } else {
        ap_phi_mux_data_1971_V_read2041_phi_phi_fu_99642_p4 = ap_phi_reg_pp0_iter0_data_1971_V_read2041_phi_reg_99638.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_56799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_56799_p6 = data_1971_V_read2041_phi_reg_99638.read();
    } else {
        ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_56799_p6 = data_1971_V_read2041_rewind_reg_56795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1972_V_read2042_phi_phi_fu_99655_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1972_V_read2042_phi_phi_fu_99655_p4 = ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_56813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1972_V_read2042_phi_phi_fu_99655_p4 = data_1972_V_read.read();
        } else {
            ap_phi_mux_data_1972_V_read2042_phi_phi_fu_99655_p4 = ap_phi_reg_pp0_iter0_data_1972_V_read2042_phi_reg_99651.read();
        }
    } else {
        ap_phi_mux_data_1972_V_read2042_phi_phi_fu_99655_p4 = ap_phi_reg_pp0_iter0_data_1972_V_read2042_phi_reg_99651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_56813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_56813_p6 = data_1972_V_read2042_phi_reg_99651.read();
    } else {
        ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_56813_p6 = data_1972_V_read2042_rewind_reg_56809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1973_V_read2043_phi_phi_fu_99668_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1973_V_read2043_phi_phi_fu_99668_p4 = ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_56827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1973_V_read2043_phi_phi_fu_99668_p4 = data_1973_V_read.read();
        } else {
            ap_phi_mux_data_1973_V_read2043_phi_phi_fu_99668_p4 = ap_phi_reg_pp0_iter0_data_1973_V_read2043_phi_reg_99664.read();
        }
    } else {
        ap_phi_mux_data_1973_V_read2043_phi_phi_fu_99668_p4 = ap_phi_reg_pp0_iter0_data_1973_V_read2043_phi_reg_99664.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_56827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_56827_p6 = data_1973_V_read2043_phi_reg_99664.read();
    } else {
        ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_56827_p6 = data_1973_V_read2043_rewind_reg_56823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1974_V_read2044_phi_phi_fu_99681_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1974_V_read2044_phi_phi_fu_99681_p4 = ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_56841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1974_V_read2044_phi_phi_fu_99681_p4 = data_1974_V_read.read();
        } else {
            ap_phi_mux_data_1974_V_read2044_phi_phi_fu_99681_p4 = ap_phi_reg_pp0_iter0_data_1974_V_read2044_phi_reg_99677.read();
        }
    } else {
        ap_phi_mux_data_1974_V_read2044_phi_phi_fu_99681_p4 = ap_phi_reg_pp0_iter0_data_1974_V_read2044_phi_reg_99677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_56841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_56841_p6 = data_1974_V_read2044_phi_reg_99677.read();
    } else {
        ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_56841_p6 = data_1974_V_read2044_rewind_reg_56837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1975_V_read2045_phi_phi_fu_99694_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1975_V_read2045_phi_phi_fu_99694_p4 = ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_56855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1975_V_read2045_phi_phi_fu_99694_p4 = data_1975_V_read.read();
        } else {
            ap_phi_mux_data_1975_V_read2045_phi_phi_fu_99694_p4 = ap_phi_reg_pp0_iter0_data_1975_V_read2045_phi_reg_99690.read();
        }
    } else {
        ap_phi_mux_data_1975_V_read2045_phi_phi_fu_99694_p4 = ap_phi_reg_pp0_iter0_data_1975_V_read2045_phi_reg_99690.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_56855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_56855_p6 = data_1975_V_read2045_phi_reg_99690.read();
    } else {
        ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_56855_p6 = data_1975_V_read2045_rewind_reg_56851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1976_V_read2046_phi_phi_fu_99707_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1976_V_read2046_phi_phi_fu_99707_p4 = ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_56869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1976_V_read2046_phi_phi_fu_99707_p4 = data_1976_V_read.read();
        } else {
            ap_phi_mux_data_1976_V_read2046_phi_phi_fu_99707_p4 = ap_phi_reg_pp0_iter0_data_1976_V_read2046_phi_reg_99703.read();
        }
    } else {
        ap_phi_mux_data_1976_V_read2046_phi_phi_fu_99707_p4 = ap_phi_reg_pp0_iter0_data_1976_V_read2046_phi_reg_99703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_56869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_56869_p6 = data_1976_V_read2046_phi_reg_99703.read();
    } else {
        ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_56869_p6 = data_1976_V_read2046_rewind_reg_56865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1977_V_read2047_phi_phi_fu_99720_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1977_V_read2047_phi_phi_fu_99720_p4 = ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_56883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1977_V_read2047_phi_phi_fu_99720_p4 = data_1977_V_read.read();
        } else {
            ap_phi_mux_data_1977_V_read2047_phi_phi_fu_99720_p4 = ap_phi_reg_pp0_iter0_data_1977_V_read2047_phi_reg_99716.read();
        }
    } else {
        ap_phi_mux_data_1977_V_read2047_phi_phi_fu_99720_p4 = ap_phi_reg_pp0_iter0_data_1977_V_read2047_phi_reg_99716.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_56883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_56883_p6 = data_1977_V_read2047_phi_reg_99716.read();
    } else {
        ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_56883_p6 = data_1977_V_read2047_rewind_reg_56879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1978_V_read2048_phi_phi_fu_99733_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1978_V_read2048_phi_phi_fu_99733_p4 = ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_56897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1978_V_read2048_phi_phi_fu_99733_p4 = data_1978_V_read.read();
        } else {
            ap_phi_mux_data_1978_V_read2048_phi_phi_fu_99733_p4 = ap_phi_reg_pp0_iter0_data_1978_V_read2048_phi_reg_99729.read();
        }
    } else {
        ap_phi_mux_data_1978_V_read2048_phi_phi_fu_99733_p4 = ap_phi_reg_pp0_iter0_data_1978_V_read2048_phi_reg_99729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_56897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_56897_p6 = data_1978_V_read2048_phi_reg_99729.read();
    } else {
        ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_56897_p6 = data_1978_V_read2048_rewind_reg_56893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1979_V_read2049_phi_phi_fu_99746_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1979_V_read2049_phi_phi_fu_99746_p4 = ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_56911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1979_V_read2049_phi_phi_fu_99746_p4 = data_1979_V_read.read();
        } else {
            ap_phi_mux_data_1979_V_read2049_phi_phi_fu_99746_p4 = ap_phi_reg_pp0_iter0_data_1979_V_read2049_phi_reg_99742.read();
        }
    } else {
        ap_phi_mux_data_1979_V_read2049_phi_phi_fu_99746_p4 = ap_phi_reg_pp0_iter0_data_1979_V_read2049_phi_reg_99742.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_56911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_56911_p6 = data_1979_V_read2049_phi_reg_99742.read();
    } else {
        ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_56911_p6 = data_1979_V_read2049_rewind_reg_56907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_197_V_read267_phi_phi_fu_76580_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_197_V_read267_phi_phi_fu_76580_p4 = ap_phi_mux_data_197_V_read267_rewind_phi_fu_31963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_197_V_read267_phi_phi_fu_76580_p4 = data_197_V_read.read();
        } else {
            ap_phi_mux_data_197_V_read267_phi_phi_fu_76580_p4 = ap_phi_reg_pp0_iter0_data_197_V_read267_phi_reg_76576.read();
        }
    } else {
        ap_phi_mux_data_197_V_read267_phi_phi_fu_76580_p4 = ap_phi_reg_pp0_iter0_data_197_V_read267_phi_reg_76576.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_197_V_read267_rewind_phi_fu_31963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_197_V_read267_rewind_phi_fu_31963_p6 = data_197_V_read267_phi_reg_76576.read();
    } else {
        ap_phi_mux_data_197_V_read267_rewind_phi_fu_31963_p6 = data_197_V_read267_rewind_reg_31959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1980_V_read2050_phi_phi_fu_99759_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1980_V_read2050_phi_phi_fu_99759_p4 = ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_56925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1980_V_read2050_phi_phi_fu_99759_p4 = data_1980_V_read.read();
        } else {
            ap_phi_mux_data_1980_V_read2050_phi_phi_fu_99759_p4 = ap_phi_reg_pp0_iter0_data_1980_V_read2050_phi_reg_99755.read();
        }
    } else {
        ap_phi_mux_data_1980_V_read2050_phi_phi_fu_99759_p4 = ap_phi_reg_pp0_iter0_data_1980_V_read2050_phi_reg_99755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_56925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_56925_p6 = data_1980_V_read2050_phi_reg_99755.read();
    } else {
        ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_56925_p6 = data_1980_V_read2050_rewind_reg_56921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1981_V_read2051_phi_phi_fu_99772_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1981_V_read2051_phi_phi_fu_99772_p4 = ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_56939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1981_V_read2051_phi_phi_fu_99772_p4 = data_1981_V_read.read();
        } else {
            ap_phi_mux_data_1981_V_read2051_phi_phi_fu_99772_p4 = ap_phi_reg_pp0_iter0_data_1981_V_read2051_phi_reg_99768.read();
        }
    } else {
        ap_phi_mux_data_1981_V_read2051_phi_phi_fu_99772_p4 = ap_phi_reg_pp0_iter0_data_1981_V_read2051_phi_reg_99768.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_56939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_56939_p6 = data_1981_V_read2051_phi_reg_99768.read();
    } else {
        ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_56939_p6 = data_1981_V_read2051_rewind_reg_56935.read();
    }
}

}

