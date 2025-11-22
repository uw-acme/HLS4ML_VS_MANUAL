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
        tmp_100_reg_9812 = select_ln117_9_fu_2375_p3.read().range(11, 10);
        tmp_104_reg_9822 = select_ln117_10_fu_2489_p3.read().range(11, 10);
        tmp_108_reg_9832 = select_ln117_11_fu_2603_p3.read().range(11, 10);
        tmp_112_reg_9842 = select_ln117_12_fu_2717_p3.read().range(11, 10);
        tmp_116_reg_9852 = select_ln117_13_fu_2831_p3.read().range(11, 10);
        tmp_120_reg_9862 = select_ln117_14_fu_2945_p3.read().range(11, 10);
        tmp_124_reg_9872 = select_ln117_15_fu_3059_p3.read().range(11, 10);
        tmp_128_reg_9882 = select_ln117_16_fu_3173_p3.read().range(11, 10);
        tmp_132_reg_9892 = select_ln117_17_fu_3287_p3.read().range(11, 10);
        tmp_136_reg_9902 = select_ln117_18_fu_3401_p3.read().range(11, 10);
        tmp_140_reg_9912 = select_ln117_19_fu_3515_p3.read().range(11, 10);
        tmp_144_reg_9922 = select_ln117_20_fu_3629_p3.read().range(11, 10);
        tmp_148_reg_9932 = select_ln117_21_fu_3743_p3.read().range(11, 10);
        tmp_152_reg_9942 = select_ln117_22_fu_3857_p3.read().range(11, 10);
        tmp_156_reg_9952 = select_ln117_23_fu_3971_p3.read().range(11, 10);
        tmp_158_reg_9962 = select_ln117_24_fu_4085_p3.read().range(11, 10);
        tmp_160_reg_9972 = select_ln117_25_fu_4199_p3.read().range(11, 10);
        tmp_162_reg_9982 = select_ln117_26_fu_4313_p3.read().range(11, 10);
        tmp_164_reg_9992 = select_ln117_27_fu_4427_p3.read().range(11, 10);
        tmp_166_reg_10002 = select_ln117_28_fu_4541_p3.read().range(11, 10);
        tmp_168_reg_10012 = select_ln117_29_fu_4655_p3.read().range(11, 10);
        tmp_170_reg_10022 = select_ln117_30_fu_4769_p3.read().range(11, 10);
        tmp_172_reg_10032 = select_ln117_31_fu_4883_p3.read().range(11, 10);
        tmp_174_reg_10042 = select_ln117_32_fu_4997_p3.read().range(11, 10);
        tmp_176_reg_10052 = select_ln117_33_fu_5111_p3.read().range(11, 10);
        tmp_178_reg_10062 = select_ln117_34_fu_5225_p3.read().range(11, 10);
        tmp_180_reg_10072 = select_ln117_35_fu_5339_p3.read().range(11, 10);
        tmp_182_reg_10082 = select_ln117_36_fu_5453_p3.read().range(11, 10);
        tmp_184_reg_10092 = select_ln117_37_fu_5567_p3.read().range(11, 10);
        tmp_186_reg_10102 = select_ln117_38_fu_5681_p3.read().range(11, 10);
        tmp_188_reg_10112 = select_ln117_39_fu_5795_p3.read().range(11, 10);
        tmp_190_reg_10122 = select_ln117_40_fu_5909_p3.read().range(11, 10);
        tmp_192_reg_10132 = select_ln117_41_fu_6023_p3.read().range(11, 10);
        tmp_194_reg_10142 = select_ln117_42_fu_6137_p3.read().range(11, 10);
        tmp_196_reg_10152 = select_ln117_43_fu_6251_p3.read().range(11, 10);
        tmp_198_reg_10162 = select_ln117_44_fu_6365_p3.read().range(11, 10);
        tmp_200_reg_10172 = select_ln117_45_fu_6479_p3.read().range(11, 10);
        tmp_202_reg_10182 = select_ln117_46_fu_6593_p3.read().range(11, 10);
        tmp_204_reg_10192 = select_ln117_47_fu_6707_p3.read().range(11, 10);
        tmp_206_reg_10202 = select_ln117_48_fu_6821_p3.read().range(11, 10);
        tmp_208_reg_10212 = select_ln117_49_fu_6935_p3.read().range(11, 10);
        tmp_210_reg_10222 = select_ln117_50_fu_7049_p3.read().range(11, 10);
        tmp_212_reg_10232 = select_ln117_51_fu_7163_p3.read().range(11, 10);
        tmp_214_reg_10242 = select_ln117_52_fu_7277_p3.read().range(11, 10);
        tmp_216_reg_10252 = select_ln117_53_fu_7391_p3.read().range(11, 10);
        tmp_218_reg_10262 = select_ln117_54_fu_7505_p3.read().range(11, 10);
        tmp_220_reg_10272 = select_ln117_55_fu_7619_p3.read().range(11, 10);
        tmp_222_reg_10282 = select_ln117_56_fu_7733_p3.read().range(11, 10);
        tmp_224_reg_10292 = select_ln117_57_fu_7847_p3.read().range(11, 10);
        tmp_226_reg_10302 = select_ln117_58_fu_7961_p3.read().range(11, 10);
        tmp_228_reg_10312 = select_ln117_59_fu_8075_p3.read().range(11, 10);
        tmp_64_reg_9722 = select_ln117_fu_1349_p3.read().range(11, 10);
        tmp_68_reg_9732 = select_ln117_1_fu_1463_p3.read().range(11, 10);
        tmp_72_reg_9742 = select_ln117_2_fu_1577_p3.read().range(11, 10);
        tmp_76_reg_9752 = select_ln117_3_fu_1691_p3.read().range(11, 10);
        tmp_80_reg_9762 = select_ln117_4_fu_1805_p3.read().range(11, 10);
        tmp_84_reg_9772 = select_ln117_5_fu_1919_p3.read().range(11, 10);
        tmp_88_reg_9782 = select_ln117_6_fu_2033_p3.read().range(11, 10);
        tmp_92_reg_9792 = select_ln117_7_fu_2147_p3.read().range(11, 10);
        tmp_96_reg_9802 = select_ln117_8_fu_2261_p3.read().range(11, 10);
        trunc_ln117_10_reg_9817 = trunc_ln117_10_fu_2497_p1.read();
        trunc_ln117_11_reg_9827 = trunc_ln117_11_fu_2611_p1.read();
        trunc_ln117_12_reg_9837 = trunc_ln117_12_fu_2725_p1.read();
        trunc_ln117_13_reg_9847 = trunc_ln117_13_fu_2839_p1.read();
        trunc_ln117_14_reg_9857 = trunc_ln117_14_fu_2953_p1.read();
        trunc_ln117_15_reg_9867 = trunc_ln117_15_fu_3067_p1.read();
        trunc_ln117_16_reg_9877 = trunc_ln117_16_fu_3181_p1.read();
        trunc_ln117_17_reg_9887 = trunc_ln117_17_fu_3295_p1.read();
        trunc_ln117_18_reg_9897 = trunc_ln117_18_fu_3409_p1.read();
        trunc_ln117_19_reg_9907 = trunc_ln117_19_fu_3523_p1.read();
        trunc_ln117_1_reg_9727 = trunc_ln117_1_fu_1471_p1.read();
        trunc_ln117_20_reg_9917 = trunc_ln117_20_fu_3637_p1.read();
        trunc_ln117_21_reg_9927 = trunc_ln117_21_fu_3751_p1.read();
        trunc_ln117_22_reg_9937 = trunc_ln117_22_fu_3865_p1.read();
        trunc_ln117_23_reg_9947 = trunc_ln117_23_fu_3979_p1.read();
        trunc_ln117_24_reg_9957 = trunc_ln117_24_fu_4093_p1.read();
        trunc_ln117_25_reg_9967 = trunc_ln117_25_fu_4207_p1.read();
        trunc_ln117_26_reg_9977 = trunc_ln117_26_fu_4321_p1.read();
        trunc_ln117_27_reg_9987 = trunc_ln117_27_fu_4435_p1.read();
        trunc_ln117_28_reg_9997 = trunc_ln117_28_fu_4549_p1.read();
        trunc_ln117_29_reg_10007 = trunc_ln117_29_fu_4663_p1.read();
        trunc_ln117_2_reg_9737 = trunc_ln117_2_fu_1585_p1.read();
        trunc_ln117_30_reg_10017 = trunc_ln117_30_fu_4777_p1.read();
        trunc_ln117_31_reg_10027 = trunc_ln117_31_fu_4891_p1.read();
        trunc_ln117_32_reg_10037 = trunc_ln117_32_fu_5005_p1.read();
        trunc_ln117_33_reg_10047 = trunc_ln117_33_fu_5119_p1.read();
        trunc_ln117_34_reg_10057 = trunc_ln117_34_fu_5233_p1.read();
        trunc_ln117_35_reg_10067 = trunc_ln117_35_fu_5347_p1.read();
        trunc_ln117_36_reg_10077 = trunc_ln117_36_fu_5461_p1.read();
        trunc_ln117_37_reg_10087 = trunc_ln117_37_fu_5575_p1.read();
        trunc_ln117_38_reg_10097 = trunc_ln117_38_fu_5689_p1.read();
        trunc_ln117_39_reg_10107 = trunc_ln117_39_fu_5803_p1.read();
        trunc_ln117_3_reg_9747 = trunc_ln117_3_fu_1699_p1.read();
        trunc_ln117_40_reg_10117 = trunc_ln117_40_fu_5917_p1.read();
        trunc_ln117_41_reg_10127 = trunc_ln117_41_fu_6031_p1.read();
        trunc_ln117_42_reg_10137 = trunc_ln117_42_fu_6145_p1.read();
        trunc_ln117_43_reg_10147 = trunc_ln117_43_fu_6259_p1.read();
        trunc_ln117_44_reg_10157 = trunc_ln117_44_fu_6373_p1.read();
        trunc_ln117_45_reg_10167 = trunc_ln117_45_fu_6487_p1.read();
        trunc_ln117_46_reg_10177 = trunc_ln117_46_fu_6601_p1.read();
        trunc_ln117_47_reg_10187 = trunc_ln117_47_fu_6715_p1.read();
        trunc_ln117_48_reg_10197 = trunc_ln117_48_fu_6829_p1.read();
        trunc_ln117_49_reg_10207 = trunc_ln117_49_fu_6943_p1.read();
        trunc_ln117_4_reg_9757 = trunc_ln117_4_fu_1813_p1.read();
        trunc_ln117_50_reg_10217 = trunc_ln117_50_fu_7057_p1.read();
        trunc_ln117_51_reg_10227 = trunc_ln117_51_fu_7171_p1.read();
        trunc_ln117_52_reg_10237 = trunc_ln117_52_fu_7285_p1.read();
        trunc_ln117_53_reg_10247 = trunc_ln117_53_fu_7399_p1.read();
        trunc_ln117_54_reg_10257 = trunc_ln117_54_fu_7513_p1.read();
        trunc_ln117_55_reg_10267 = trunc_ln117_55_fu_7627_p1.read();
        trunc_ln117_56_reg_10277 = trunc_ln117_56_fu_7741_p1.read();
        trunc_ln117_57_reg_10287 = trunc_ln117_57_fu_7855_p1.read();
        trunc_ln117_58_reg_10297 = trunc_ln117_58_fu_7969_p1.read();
        trunc_ln117_59_reg_10307 = trunc_ln117_59_fu_8083_p1.read();
        trunc_ln117_5_reg_9767 = trunc_ln117_5_fu_1927_p1.read();
        trunc_ln117_6_reg_9777 = trunc_ln117_6_fu_2041_p1.read();
        trunc_ln117_7_reg_9787 = trunc_ln117_7_fu_2155_p1.read();
        trunc_ln117_8_reg_9797 = trunc_ln117_8_fu_2269_p1.read();
        trunc_ln117_9_reg_9807 = trunc_ln117_9_fu_2383_p1.read();
        trunc_ln117_reg_9717 = trunc_ln117_fu_1357_p1.read();
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

