#include "dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln703_2541_reg_9754 = add_ln703_2541_fu_686_p2.read();
        add_ln703_2594_reg_9775 = add_ln703_2594_fu_757_p2.read();
        add_ln703_2624_reg_9809 = add_ln703_2624_fu_839_p2.read();
        add_ln703_2762_reg_9876 = add_ln703_2762_fu_998_p2.read();
        add_ln703_2774_reg_9886 = add_ln703_2774_fu_1046_p2.read();
        add_ln703_2780_reg_9896 = add_ln703_2780_fu_1094_p2.read();
        add_ln703_2786_reg_9901 = add_ln703_2786_fu_1133_p2.read();
        add_ln703_2798_reg_9906 = add_ln703_2798_fu_1172_p2.read();
        add_ln703_2804_reg_9911 = add_ln703_2804_fu_1211_p2.read();
        add_ln703_2816_reg_9926 = add_ln703_2816_fu_1268_p2.read();
        add_ln703_2822_reg_9931 = add_ln703_2822_fu_1307_p2.read();
        add_ln703_2834_reg_9941 = add_ln703_2834_fu_1355_p2.read();
        add_ln703_2849_reg_9951 = add_ln703_2849_fu_1429_p2.read();
        add_ln703_2852_reg_9956 = add_ln703_2852_fu_1468_p2.read();
        add_ln703_2858_reg_9961 = add_ln703_2858_fu_1507_p2.read();
        add_ln703_2864_reg_9966 = add_ln703_2864_fu_1546_p2.read();
        add_ln703_2870_reg_9976 = add_ln703_2870_fu_1595_p2.read();
        sext_ln1118_924_reg_9657 = sext_ln1118_924_fu_616_p1.read();
        sext_ln1118_930_reg_9663 = sext_ln1118_930_fu_620_p1.read();
        sext_ln1118_933_reg_9670 = sext_ln1118_933_fu_628_p1.read();
        sext_ln1118_934_reg_9678 = sext_ln1118_934_fu_632_p1.read();
        sext_ln1118_945_reg_9701 = sext_ln1118_945_fu_662_p1.read();
        sext_ln1118_946_reg_9708 = sext_ln1118_946_fu_666_p1.read();
        sext_ln1118_947_reg_9717 = sext_ln1118_947_fu_670_p1.read();
        sext_ln1118_954_reg_9722 = sext_ln1118_954_fu_674_p1.read();
        sext_ln1118_955_reg_9731 = sext_ln1118_955_fu_678_p1.read();
        sext_ln1118_961_reg_9745 = sext_ln1118_961_fu_682_p1.read();
        sext_ln1118_reg_9643 = sext_ln1118_fu_612_p1.read();
        sext_ln708_38_reg_9688 = sext_ln708_38_fu_640_p1.read();
        sext_ln708_39_reg_9695 = sext_ln708_39_fu_644_p1.read();
        trunc_ln708_2511_reg_9759 = mul_ln1118_2250_fu_8567_p2.read().range(23, 10);
        trunc_ln708_2513_reg_9764 = mul_ln1118_2252_fu_8574_p2.read().range(25, 10);
        trunc_ln708_2529_reg_9769 = trunc_ln708_2529_fu_710_p1.read().range(17, 9);
        trunc_ln708_2559_reg_9780 = trunc_ln708_2559_fu_763_p1.read().range(17, 7);
        trunc_ln708_2563_reg_9786 = mul_ln1118_2274_fu_8602_p2.read().range(24, 10);
        trunc_ln708_2566_reg_9791 = mul_ln1118_2276_fu_8609_p2.read().range(23, 10);
        trunc_ln708_2569_reg_9796 = trunc_ln708_2569_fu_791_p1.read().range(17, 10);
        trunc_ln708_2579_reg_9802 = trunc_ln708_2579_fu_801_p1.read().range(17, 10);
        trunc_ln708_2597_reg_9814 = trunc_ln708_2597_fu_845_p1.read().range(17, 7);
        trunc_ln708_2599_reg_9819 = trunc_ln708_2599_fu_855_p1.read().range(17, 8);
        trunc_ln708_2600_reg_9825 = trunc_ln708_2600_fu_865_p1.read().range(17, 8);
        trunc_ln708_2602_reg_9830 = trunc_ln708_2602_fu_875_p1.read().range(17, 10);
        trunc_ln708_2604_reg_9835 = trunc_ln708_2604_fu_885_p1.read().range(17, 9);
        trunc_ln708_2607_reg_9840 = trunc_ln708_2607_fu_895_p1.read().range(17, 10);
        trunc_ln708_2614_reg_9846 = trunc_ln708_2614_fu_905_p1.read().range(17, 9);
        trunc_ln708_2617_reg_9851 = trunc_ln708_2617_fu_915_p1.read().range(17, 8);
        trunc_ln708_2620_reg_9856 = trunc_ln708_2620_fu_925_p1.read().range(17, 6);
        trunc_ln708_2638_reg_9861 = trunc_ln708_2638_fu_935_p1.read().range(17, 8);
        trunc_ln708_2657_reg_9866 = trunc_ln708_2657_fu_945_p1.read().range(17, 9);
        trunc_ln708_2658_reg_9871 = trunc_ln708_2658_fu_955_p1.read().range(17, 9);
        trunc_ln708_2669_reg_9881 = mul_ln1118_2314_fu_8637_p2.read().range(25, 10);
        trunc_ln708_2679_reg_9891 = mul_ln1118_2323_fu_8679_p2.read().range(25, 10);
        trunc_ln708_2704_reg_9916 = mul_ln1118_2346_fu_8756_p2.read().range(24, 10);
        trunc_ln708_2707_reg_9921 = mul_ln1118_2349_fu_8763_p2.read().range(25, 10);
        trunc_ln708_2725_reg_9936 = mul_ln1118_2363_fu_8812_p2.read().range(24, 10);
        trunc_ln708_2734_reg_9946 = mul_ln1118_2372_fu_8840_p2.read().range(25, 10);
        trunc_ln708_2766_reg_9971 = trunc_ln708_2766_fu_1570_p1.read().range(17, 7);
        trunc_ln708_2768_reg_9981 = trunc_ln708_2768_fu_1601_p1.read().range(17, 7);
    }
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

}

