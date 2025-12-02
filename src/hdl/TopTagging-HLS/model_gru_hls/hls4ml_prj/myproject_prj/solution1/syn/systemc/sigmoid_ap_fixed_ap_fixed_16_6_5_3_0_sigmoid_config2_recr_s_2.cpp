#include "sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        tmp_100_reg_6592 = select_ln117_9_fu_1975_p3.read().range(11, 10);
        tmp_104_reg_6602 = select_ln117_10_fu_2089_p3.read().range(11, 10);
        tmp_108_reg_6612 = select_ln117_11_fu_2203_p3.read().range(11, 10);
        tmp_112_reg_6622 = select_ln117_12_fu_2317_p3.read().range(11, 10);
        tmp_116_reg_6632 = select_ln117_13_fu_2431_p3.read().range(11, 10);
        tmp_118_reg_6642 = select_ln117_14_fu_2545_p3.read().range(11, 10);
        tmp_120_reg_6652 = select_ln117_15_fu_2659_p3.read().range(11, 10);
        tmp_122_reg_6662 = select_ln117_16_fu_2773_p3.read().range(11, 10);
        tmp_124_reg_6672 = select_ln117_17_fu_2887_p3.read().range(11, 10);
        tmp_126_reg_6682 = select_ln117_18_fu_3001_p3.read().range(11, 10);
        tmp_128_reg_6692 = select_ln117_19_fu_3115_p3.read().range(11, 10);
        tmp_130_reg_6702 = select_ln117_20_fu_3229_p3.read().range(11, 10);
        tmp_132_reg_6712 = select_ln117_21_fu_3343_p3.read().range(11, 10);
        tmp_134_reg_6722 = select_ln117_22_fu_3457_p3.read().range(11, 10);
        tmp_136_reg_6732 = select_ln117_23_fu_3571_p3.read().range(11, 10);
        tmp_138_reg_6742 = select_ln117_24_fu_3685_p3.read().range(11, 10);
        tmp_140_reg_6752 = select_ln117_25_fu_3799_p3.read().range(11, 10);
        tmp_142_reg_6762 = select_ln117_26_fu_3913_p3.read().range(11, 10);
        tmp_144_reg_6772 = select_ln117_27_fu_4027_p3.read().range(11, 10);
        tmp_146_reg_6782 = select_ln117_28_fu_4141_p3.read().range(11, 10);
        tmp_148_reg_6792 = select_ln117_29_fu_4255_p3.read().range(11, 10);
        tmp_150_reg_6802 = select_ln117_30_fu_4369_p3.read().range(11, 10);
        tmp_152_reg_6812 = select_ln117_31_fu_4483_p3.read().range(11, 10);
        tmp_154_reg_6822 = select_ln117_32_fu_4597_p3.read().range(11, 10);
        tmp_156_reg_6832 = select_ln117_33_fu_4711_p3.read().range(11, 10);
        tmp_158_reg_6842 = select_ln117_34_fu_4825_p3.read().range(11, 10);
        tmp_160_reg_6852 = select_ln117_35_fu_4939_p3.read().range(11, 10);
        tmp_162_reg_6862 = select_ln117_36_fu_5053_p3.read().range(11, 10);
        tmp_164_reg_6872 = select_ln117_37_fu_5167_p3.read().range(11, 10);
        tmp_166_reg_6882 = select_ln117_38_fu_5281_p3.read().range(11, 10);
        tmp_168_reg_6892 = select_ln117_39_fu_5395_p3.read().range(11, 10);
        tmp_64_reg_6502 = select_ln117_fu_949_p3.read().range(11, 10);
        tmp_68_reg_6512 = select_ln117_1_fu_1063_p3.read().range(11, 10);
        tmp_72_reg_6522 = select_ln117_2_fu_1177_p3.read().range(11, 10);
        tmp_76_reg_6532 = select_ln117_3_fu_1291_p3.read().range(11, 10);
        tmp_80_reg_6542 = select_ln117_4_fu_1405_p3.read().range(11, 10);
        tmp_84_reg_6552 = select_ln117_5_fu_1519_p3.read().range(11, 10);
        tmp_88_reg_6562 = select_ln117_6_fu_1633_p3.read().range(11, 10);
        tmp_92_reg_6572 = select_ln117_7_fu_1747_p3.read().range(11, 10);
        tmp_96_reg_6582 = select_ln117_8_fu_1861_p3.read().range(11, 10);
        trunc_ln117_10_reg_6597 = trunc_ln117_10_fu_2097_p1.read();
        trunc_ln117_11_reg_6607 = trunc_ln117_11_fu_2211_p1.read();
        trunc_ln117_12_reg_6617 = trunc_ln117_12_fu_2325_p1.read();
        trunc_ln117_13_reg_6627 = trunc_ln117_13_fu_2439_p1.read();
        trunc_ln117_14_reg_6637 = trunc_ln117_14_fu_2553_p1.read();
        trunc_ln117_15_reg_6647 = trunc_ln117_15_fu_2667_p1.read();
        trunc_ln117_16_reg_6657 = trunc_ln117_16_fu_2781_p1.read();
        trunc_ln117_17_reg_6667 = trunc_ln117_17_fu_2895_p1.read();
        trunc_ln117_18_reg_6677 = trunc_ln117_18_fu_3009_p1.read();
        trunc_ln117_19_reg_6687 = trunc_ln117_19_fu_3123_p1.read();
        trunc_ln117_1_reg_6507 = trunc_ln117_1_fu_1071_p1.read();
        trunc_ln117_20_reg_6697 = trunc_ln117_20_fu_3237_p1.read();
        trunc_ln117_21_reg_6707 = trunc_ln117_21_fu_3351_p1.read();
        trunc_ln117_22_reg_6717 = trunc_ln117_22_fu_3465_p1.read();
        trunc_ln117_23_reg_6727 = trunc_ln117_23_fu_3579_p1.read();
        trunc_ln117_24_reg_6737 = trunc_ln117_24_fu_3693_p1.read();
        trunc_ln117_25_reg_6747 = trunc_ln117_25_fu_3807_p1.read();
        trunc_ln117_26_reg_6757 = trunc_ln117_26_fu_3921_p1.read();
        trunc_ln117_27_reg_6767 = trunc_ln117_27_fu_4035_p1.read();
        trunc_ln117_28_reg_6777 = trunc_ln117_28_fu_4149_p1.read();
        trunc_ln117_29_reg_6787 = trunc_ln117_29_fu_4263_p1.read();
        trunc_ln117_2_reg_6517 = trunc_ln117_2_fu_1185_p1.read();
        trunc_ln117_30_reg_6797 = trunc_ln117_30_fu_4377_p1.read();
        trunc_ln117_31_reg_6807 = trunc_ln117_31_fu_4491_p1.read();
        trunc_ln117_32_reg_6817 = trunc_ln117_32_fu_4605_p1.read();
        trunc_ln117_33_reg_6827 = trunc_ln117_33_fu_4719_p1.read();
        trunc_ln117_34_reg_6837 = trunc_ln117_34_fu_4833_p1.read();
        trunc_ln117_35_reg_6847 = trunc_ln117_35_fu_4947_p1.read();
        trunc_ln117_36_reg_6857 = trunc_ln117_36_fu_5061_p1.read();
        trunc_ln117_37_reg_6867 = trunc_ln117_37_fu_5175_p1.read();
        trunc_ln117_38_reg_6877 = trunc_ln117_38_fu_5289_p1.read();
        trunc_ln117_39_reg_6887 = trunc_ln117_39_fu_5403_p1.read();
        trunc_ln117_3_reg_6527 = trunc_ln117_3_fu_1299_p1.read();
        trunc_ln117_4_reg_6537 = trunc_ln117_4_fu_1413_p1.read();
        trunc_ln117_5_reg_6547 = trunc_ln117_5_fu_1527_p1.read();
        trunc_ln117_6_reg_6557 = trunc_ln117_6_fu_1641_p1.read();
        trunc_ln117_7_reg_6567 = trunc_ln117_7_fu_1755_p1.read();
        trunc_ln117_8_reg_6577 = trunc_ln117_8_fu_1869_p1.read();
        trunc_ln117_9_reg_6587 = trunc_ln117_9_fu_1983_p1.read();
        trunc_ln117_reg_6497 = trunc_ln117_fu_957_p1.read();
    }
}

void sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

