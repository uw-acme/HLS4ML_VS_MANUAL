#include "sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s::thread_ap_clk_no_reset_() {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_102_reg_10374 = select_ln117_1_fu_1541_p3.read().range(15, 10);
        tmp_106_reg_10384 = select_ln117_2_fu_1655_p3.read().range(15, 10);
        tmp_110_reg_10394 = select_ln117_3_fu_1769_p3.read().range(15, 10);
        tmp_114_reg_10404 = select_ln117_4_fu_1883_p3.read().range(15, 10);
        tmp_118_reg_10414 = select_ln117_5_fu_1997_p3.read().range(15, 10);
        tmp_122_reg_10424 = select_ln117_6_fu_2111_p3.read().range(15, 10);
        tmp_126_reg_10434 = select_ln117_7_fu_2225_p3.read().range(15, 10);
        tmp_130_reg_10444 = select_ln117_8_fu_2339_p3.read().range(15, 10);
        tmp_134_reg_10454 = select_ln117_9_fu_2453_p3.read().range(15, 10);
        tmp_138_reg_10464 = select_ln117_10_fu_2567_p3.read().range(15, 10);
        tmp_142_reg_10474 = select_ln117_11_fu_2681_p3.read().range(15, 10);
        tmp_146_reg_10484 = select_ln117_12_fu_2795_p3.read().range(15, 10);
        tmp_150_reg_10494 = select_ln117_13_fu_2909_p3.read().range(15, 10);
        tmp_154_reg_10504 = select_ln117_14_fu_3023_p3.read().range(15, 10);
        tmp_158_reg_10514 = select_ln117_15_fu_3137_p3.read().range(15, 10);
        tmp_162_reg_10524 = select_ln117_16_fu_3251_p3.read().range(15, 10);
        tmp_166_reg_10534 = select_ln117_17_fu_3365_p3.read().range(15, 10);
        tmp_170_reg_10544 = select_ln117_18_fu_3479_p3.read().range(15, 10);
        tmp_174_reg_10554 = select_ln117_19_fu_3593_p3.read().range(15, 10);
        tmp_178_reg_10564 = select_ln117_20_fu_3707_p3.read().range(15, 10);
        tmp_182_reg_10574 = select_ln117_21_fu_3821_p3.read().range(15, 10);
        tmp_186_reg_10584 = select_ln117_22_fu_3935_p3.read().range(15, 10);
        tmp_189_reg_10594 = select_ln117_23_fu_4049_p3.read().range(15, 10);
        tmp_191_reg_10604 = select_ln117_24_fu_4163_p3.read().range(15, 10);
        tmp_193_reg_10614 = select_ln117_25_fu_4277_p3.read().range(15, 10);
        tmp_195_reg_10624 = select_ln117_26_fu_4391_p3.read().range(15, 10);
        tmp_197_reg_10634 = select_ln117_27_fu_4505_p3.read().range(15, 10);
        tmp_199_reg_10644 = select_ln117_28_fu_4619_p3.read().range(15, 10);
        tmp_201_reg_10654 = select_ln117_29_fu_4733_p3.read().range(15, 10);
        tmp_203_reg_10664 = select_ln117_30_fu_4847_p3.read().range(15, 10);
        tmp_205_reg_10674 = select_ln117_31_fu_4961_p3.read().range(15, 10);
        tmp_207_reg_10684 = select_ln117_32_fu_5075_p3.read().range(15, 10);
        tmp_209_reg_10694 = select_ln117_33_fu_5189_p3.read().range(15, 10);
        tmp_211_reg_10704 = select_ln117_34_fu_5303_p3.read().range(15, 10);
        tmp_213_reg_10714 = select_ln117_35_fu_5417_p3.read().range(15, 10);
        tmp_215_reg_10724 = select_ln117_36_fu_5531_p3.read().range(15, 10);
        tmp_217_reg_10734 = select_ln117_37_fu_5645_p3.read().range(15, 10);
        tmp_219_reg_10744 = select_ln117_38_fu_5759_p3.read().range(15, 10);
        tmp_221_reg_10754 = select_ln117_39_fu_5873_p3.read().range(15, 10);
        tmp_223_reg_10764 = select_ln117_40_fu_5987_p3.read().range(15, 10);
        tmp_225_reg_10774 = select_ln117_41_fu_6101_p3.read().range(15, 10);
        tmp_227_reg_10784 = select_ln117_42_fu_6215_p3.read().range(15, 10);
        tmp_229_reg_10794 = select_ln117_43_fu_6329_p3.read().range(15, 10);
        tmp_231_reg_10804 = select_ln117_44_fu_6443_p3.read().range(15, 10);
        tmp_233_reg_10814 = select_ln117_45_fu_6557_p3.read().range(15, 10);
        tmp_235_reg_10824 = select_ln117_46_fu_6671_p3.read().range(15, 10);
        tmp_237_reg_10834 = select_ln117_47_fu_6785_p3.read().range(15, 10);
        tmp_239_reg_10844 = select_ln117_48_fu_6899_p3.read().range(15, 10);
        tmp_241_reg_10854 = select_ln117_49_fu_7013_p3.read().range(15, 10);
        tmp_243_reg_10864 = select_ln117_50_fu_7127_p3.read().range(15, 10);
        tmp_245_reg_10874 = select_ln117_51_fu_7241_p3.read().range(15, 10);
        tmp_247_reg_10884 = select_ln117_52_fu_7355_p3.read().range(15, 10);
        tmp_249_reg_10894 = select_ln117_53_fu_7469_p3.read().range(15, 10);
        tmp_251_reg_10904 = select_ln117_54_fu_7583_p3.read().range(15, 10);
        tmp_253_reg_10914 = select_ln117_55_fu_7697_p3.read().range(15, 10);
        tmp_255_reg_10924 = select_ln117_56_fu_7811_p3.read().range(15, 10);
        tmp_257_reg_10934 = select_ln117_57_fu_7925_p3.read().range(15, 10);
        tmp_259_reg_10944 = select_ln117_58_fu_8039_p3.read().range(15, 10);
        tmp_261_reg_10954 = select_ln117_59_fu_8153_p3.read().range(15, 10);
        tmp_263_reg_10964 = select_ln117_60_fu_8267_p3.read().range(15, 10);
        tmp_265_reg_10974 = select_ln117_61_fu_8381_p3.read().range(15, 10);
        tmp_267_reg_10984 = select_ln117_62_fu_8495_p3.read().range(15, 10);
        tmp_269_reg_10994 = select_ln117_63_fu_8609_p3.read().range(15, 10);
        tmp_98_reg_10364 = select_ln117_fu_1427_p3.read().range(15, 10);
        trunc_ln117_10_reg_10459 = trunc_ln117_10_fu_2575_p1.read();
        trunc_ln117_11_reg_10469 = trunc_ln117_11_fu_2689_p1.read();
        trunc_ln117_12_reg_10479 = trunc_ln117_12_fu_2803_p1.read();
        trunc_ln117_13_reg_10489 = trunc_ln117_13_fu_2917_p1.read();
        trunc_ln117_14_reg_10499 = trunc_ln117_14_fu_3031_p1.read();
        trunc_ln117_15_reg_10509 = trunc_ln117_15_fu_3145_p1.read();
        trunc_ln117_16_reg_10519 = trunc_ln117_16_fu_3259_p1.read();
        trunc_ln117_17_reg_10529 = trunc_ln117_17_fu_3373_p1.read();
        trunc_ln117_18_reg_10539 = trunc_ln117_18_fu_3487_p1.read();
        trunc_ln117_19_reg_10549 = trunc_ln117_19_fu_3601_p1.read();
        trunc_ln117_1_reg_10369 = trunc_ln117_1_fu_1549_p1.read();
        trunc_ln117_20_reg_10559 = trunc_ln117_20_fu_3715_p1.read();
        trunc_ln117_21_reg_10569 = trunc_ln117_21_fu_3829_p1.read();
        trunc_ln117_22_reg_10579 = trunc_ln117_22_fu_3943_p1.read();
        trunc_ln117_23_reg_10589 = trunc_ln117_23_fu_4057_p1.read();
        trunc_ln117_24_reg_10599 = trunc_ln117_24_fu_4171_p1.read();
        trunc_ln117_25_reg_10609 = trunc_ln117_25_fu_4285_p1.read();
        trunc_ln117_26_reg_10619 = trunc_ln117_26_fu_4399_p1.read();
        trunc_ln117_27_reg_10629 = trunc_ln117_27_fu_4513_p1.read();
        trunc_ln117_28_reg_10639 = trunc_ln117_28_fu_4627_p1.read();
        trunc_ln117_29_reg_10649 = trunc_ln117_29_fu_4741_p1.read();
        trunc_ln117_2_reg_10379 = trunc_ln117_2_fu_1663_p1.read();
        trunc_ln117_30_reg_10659 = trunc_ln117_30_fu_4855_p1.read();
        trunc_ln117_31_reg_10669 = trunc_ln117_31_fu_4969_p1.read();
        trunc_ln117_32_reg_10679 = trunc_ln117_32_fu_5083_p1.read();
        trunc_ln117_33_reg_10689 = trunc_ln117_33_fu_5197_p1.read();
        trunc_ln117_34_reg_10699 = trunc_ln117_34_fu_5311_p1.read();
        trunc_ln117_35_reg_10709 = trunc_ln117_35_fu_5425_p1.read();
        trunc_ln117_36_reg_10719 = trunc_ln117_36_fu_5539_p1.read();
        trunc_ln117_37_reg_10729 = trunc_ln117_37_fu_5653_p1.read();
        trunc_ln117_38_reg_10739 = trunc_ln117_38_fu_5767_p1.read();
        trunc_ln117_39_reg_10749 = trunc_ln117_39_fu_5881_p1.read();
        trunc_ln117_3_reg_10389 = trunc_ln117_3_fu_1777_p1.read();
        trunc_ln117_40_reg_10759 = trunc_ln117_40_fu_5995_p1.read();
        trunc_ln117_41_reg_10769 = trunc_ln117_41_fu_6109_p1.read();
        trunc_ln117_42_reg_10779 = trunc_ln117_42_fu_6223_p1.read();
        trunc_ln117_43_reg_10789 = trunc_ln117_43_fu_6337_p1.read();
        trunc_ln117_44_reg_10799 = trunc_ln117_44_fu_6451_p1.read();
        trunc_ln117_45_reg_10809 = trunc_ln117_45_fu_6565_p1.read();
        trunc_ln117_46_reg_10819 = trunc_ln117_46_fu_6679_p1.read();
        trunc_ln117_47_reg_10829 = trunc_ln117_47_fu_6793_p1.read();
        trunc_ln117_48_reg_10839 = trunc_ln117_48_fu_6907_p1.read();
        trunc_ln117_49_reg_10849 = trunc_ln117_49_fu_7021_p1.read();
        trunc_ln117_4_reg_10399 = trunc_ln117_4_fu_1891_p1.read();
        trunc_ln117_50_reg_10859 = trunc_ln117_50_fu_7135_p1.read();
        trunc_ln117_51_reg_10869 = trunc_ln117_51_fu_7249_p1.read();
        trunc_ln117_52_reg_10879 = trunc_ln117_52_fu_7363_p1.read();
        trunc_ln117_53_reg_10889 = trunc_ln117_53_fu_7477_p1.read();
        trunc_ln117_54_reg_10899 = trunc_ln117_54_fu_7591_p1.read();
        trunc_ln117_55_reg_10909 = trunc_ln117_55_fu_7705_p1.read();
        trunc_ln117_56_reg_10919 = trunc_ln117_56_fu_7819_p1.read();
        trunc_ln117_57_reg_10929 = trunc_ln117_57_fu_7933_p1.read();
        trunc_ln117_58_reg_10939 = trunc_ln117_58_fu_8047_p1.read();
        trunc_ln117_59_reg_10949 = trunc_ln117_59_fu_8161_p1.read();
        trunc_ln117_5_reg_10409 = trunc_ln117_5_fu_2005_p1.read();
        trunc_ln117_60_reg_10959 = trunc_ln117_60_fu_8275_p1.read();
        trunc_ln117_61_reg_10969 = trunc_ln117_61_fu_8389_p1.read();
        trunc_ln117_62_reg_10979 = trunc_ln117_62_fu_8503_p1.read();
        trunc_ln117_63_reg_10989 = trunc_ln117_63_fu_8617_p1.read();
        trunc_ln117_6_reg_10419 = trunc_ln117_6_fu_2119_p1.read();
        trunc_ln117_7_reg_10429 = trunc_ln117_7_fu_2233_p1.read();
        trunc_ln117_8_reg_10439 = trunc_ln117_8_fu_2347_p1.read();
        trunc_ln117_9_reg_10449 = trunc_ln117_9_fu_2461_p1.read();
        trunc_ln117_reg_10359 = trunc_ln117_fu_1435_p1.read();
    }
}

void sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s::thread_ap_NS_fsm() {
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

