#include "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_382.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_condition_990.read(), ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_523 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_523 = ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()))) {
        indvar_flatten_reg_512 = add_ln241_fu_540_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        indvar_flatten_reg_512 = ap_const_lv12_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_977.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read())) {
            pX_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln212_fu_566_p2.read())) {
            pX_1 = add_ln225_fu_572_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_996.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln216_fu_590_p2.read())) {
            pY_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_fu_590_p2.read())) {
            pY_1 = add_ln220_fu_596_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_981.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5606.read())) {
            sX_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln212_reg_5606.read())) {
            sX_1 = select_ln227_fu_680_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        and_ln191_4_reg_5656 = and_ln191_4_fu_668_p2.read();
        shift_buffer_3_0_V_reg_5614 = data_V_data_0_V_dout.read();
        shift_buffer_3_1_V_reg_5621 = data_V_data_1_V_dout.read();
        shift_buffer_3_2_V_reg_5628 = data_V_data_2_V_dout.read();
        shift_buffer_3_3_V_reg_5635 = data_V_data_3_V_dout.read();
        shift_buffer_3_4_V_reg_5642 = data_V_data_4_V_dout.read();
        shift_buffer_3_5_V_reg_5649 = data_V_data_5_V_dout.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln191_4_reg_5656_pp0_iter2_reg = and_ln191_4_reg_5656.read();
        and_ln191_4_reg_5656_pp0_iter3_reg = and_ln191_4_reg_5656_pp0_iter2_reg.read();
        and_ln191_4_reg_5656_pp0_iter4_reg = and_ln191_4_reg_5656_pp0_iter3_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(and_ln191_4_reg_5656.read(), ap_const_lv1_1))) {
        icmp_ln1496_100_reg_6485 = icmp_ln1496_100_fu_2739_p2.read();
        icmp_ln1496_103_reg_6491 = icmp_ln1496_103_fu_2745_p2.read();
        icmp_ln1496_104_reg_6496 = icmp_ln1496_104_fu_2759_p2.read();
        icmp_ln1496_105_reg_6501 = icmp_ln1496_105_fu_2773_p2.read();
        icmp_ln1496_106_reg_6506 = icmp_ln1496_106_fu_2779_p2.read();
        icmp_ln1496_107_reg_6512 = icmp_ln1496_107_fu_2785_p2.read();
        icmp_ln1496_1_reg_5895 = icmp_ln1496_1_fu_1933_p2.read();
        icmp_ln1496_24_reg_5758 = icmp_ln1496_24_fu_1742_p2.read();
        icmp_ln1496_26_reg_5764 = icmp_ln1496_26_fu_1748_p2.read();
        icmp_ln1496_27_reg_5770 = icmp_ln1496_27_fu_1754_p2.read();
        icmp_ln1496_2_reg_6038 = icmp_ln1496_2_fu_2130_p2.read();
        icmp_ln1496_30_reg_5776 = icmp_ln1496_30_fu_1760_p2.read();
        icmp_ln1496_31_reg_5781 = icmp_ln1496_31_fu_1774_p2.read();
        icmp_ln1496_32_reg_5786 = icmp_ln1496_32_fu_1788_p2.read();
        icmp_ln1496_33_reg_5791 = icmp_ln1496_33_fu_1794_p2.read();
        icmp_ln1496_34_reg_5797 = icmp_ln1496_34_fu_1800_p2.read();
        icmp_ln1496_38_reg_5901 = icmp_ln1496_38_fu_1939_p2.read();
        icmp_ln1496_40_reg_5907 = icmp_ln1496_40_fu_1945_p2.read();
        icmp_ln1496_41_reg_5913 = icmp_ln1496_41_fu_1951_p2.read();
        icmp_ln1496_44_reg_5919 = icmp_ln1496_44_fu_1957_p2.read();
        icmp_ln1496_45_reg_5924 = icmp_ln1496_45_fu_1971_p2.read();
        icmp_ln1496_46_reg_5929 = icmp_ln1496_46_fu_1985_p2.read();
        icmp_ln1496_47_reg_5934 = icmp_ln1496_47_fu_1991_p2.read();
        icmp_ln1496_48_reg_5940 = icmp_ln1496_48_fu_1997_p2.read();
        icmp_ln1496_52_reg_6044 = icmp_ln1496_52_fu_2136_p2.read();
        icmp_ln1496_54_reg_6050 = icmp_ln1496_54_fu_2142_p2.read();
        icmp_ln1496_55_reg_6056 = icmp_ln1496_55_fu_2148_p2.read();
        icmp_ln1496_58_reg_6062 = icmp_ln1496_58_fu_2154_p2.read();
        icmp_ln1496_59_reg_6067 = icmp_ln1496_59_fu_2168_p2.read();
        icmp_ln1496_60_reg_6072 = icmp_ln1496_60_fu_2182_p2.read();
        icmp_ln1496_61_reg_6077 = icmp_ln1496_61_fu_2188_p2.read();
        icmp_ln1496_62_reg_6083 = icmp_ln1496_62_fu_2194_p2.read();
        icmp_ln1496_66_reg_6181 = icmp_ln1496_66_fu_2327_p2.read();
        icmp_ln1496_67_reg_6187 = icmp_ln1496_67_fu_2333_p2.read();
        icmp_ln1496_69_reg_6193 = icmp_ln1496_69_fu_2339_p2.read();
        icmp_ln1496_70_reg_6199 = icmp_ln1496_70_fu_2345_p2.read();
        icmp_ln1496_73_reg_6205 = icmp_ln1496_73_fu_2351_p2.read();
        icmp_ln1496_74_reg_6210 = icmp_ln1496_74_fu_2365_p2.read();
        icmp_ln1496_75_reg_6215 = icmp_ln1496_75_fu_2379_p2.read();
        icmp_ln1496_76_reg_6220 = icmp_ln1496_76_fu_2385_p2.read();
        icmp_ln1496_77_reg_6226 = icmp_ln1496_77_fu_2391_p2.read();
        icmp_ln1496_81_reg_6324 = icmp_ln1496_81_fu_2524_p2.read();
        icmp_ln1496_82_reg_6330 = icmp_ln1496_82_fu_2530_p2.read();
        icmp_ln1496_84_reg_6336 = icmp_ln1496_84_fu_2536_p2.read();
        icmp_ln1496_85_reg_6342 = icmp_ln1496_85_fu_2542_p2.read();
        icmp_ln1496_88_reg_6348 = icmp_ln1496_88_fu_2548_p2.read();
        icmp_ln1496_89_reg_6353 = icmp_ln1496_89_fu_2562_p2.read();
        icmp_ln1496_90_reg_6358 = icmp_ln1496_90_fu_2576_p2.read();
        icmp_ln1496_91_reg_6363 = icmp_ln1496_91_fu_2582_p2.read();
        icmp_ln1496_92_reg_6369 = icmp_ln1496_92_fu_2588_p2.read();
        icmp_ln1496_96_reg_6467 = icmp_ln1496_96_fu_2721_p2.read();
        icmp_ln1496_97_reg_6473 = icmp_ln1496_97_fu_2727_p2.read();
        icmp_ln1496_99_reg_6479 = icmp_ln1496_99_fu_2733_p2.read();
        icmp_ln1496_reg_5752 = icmp_ln1496_fu_1736_p2.read();
        pool_window_0_V_17_reg_5803 = pool_window_0_V_17_fu_1806_p3.read();
        pool_window_0_V_19_reg_5946 = pool_window_0_V_19_fu_2003_p3.read();
        pool_window_0_V_21_reg_6089 = pool_window_0_V_21_fu_2200_p3.read();
        pool_window_0_V_23_reg_6232 = pool_window_0_V_23_fu_2397_p3.read();
        pool_window_0_V_25_reg_6375 = pool_window_0_V_25_fu_2594_p3.read();
        pool_window_0_V_reg_5660 = pool_window_0_V_fu_1609_p3.read();
        pool_window_10_V_10_reg_6433 = pool_window_10_V_10_fu_2674_p3.read();
        pool_window_10_V_2_reg_5861 = pool_window_10_V_2_fu_1886_p3.read();
        pool_window_10_V_4_reg_6004 = pool_window_10_V_4_fu_2083_p3.read();
        pool_window_10_V_6_reg_6147 = pool_window_10_V_6_fu_2280_p3.read();
        pool_window_10_V_8_reg_6290 = pool_window_10_V_8_fu_2477_p3.read();
        pool_window_10_V_reg_5718 = pool_window_10_V_fu_1689_p3.read();
        pool_window_11_V_10_reg_6438 = pool_window_11_V_10_fu_2682_p3.read();
        pool_window_11_V_2_reg_5866 = pool_window_11_V_2_fu_1894_p3.read();
        pool_window_11_V_4_reg_6009 = pool_window_11_V_4_fu_2091_p3.read();
        pool_window_11_V_6_reg_6152 = pool_window_11_V_6_fu_2288_p3.read();
        pool_window_11_V_8_reg_6295 = pool_window_11_V_8_fu_2485_p3.read();
        pool_window_11_V_reg_5723 = pool_window_11_V_fu_1697_p3.read();
        pool_window_12_V_10_reg_6443 = pool_window_12_V_10_fu_2690_p3.read();
        pool_window_12_V_2_reg_5871 = pool_window_12_V_2_fu_1902_p3.read();
        pool_window_12_V_4_reg_6014 = pool_window_12_V_4_fu_2099_p3.read();
        pool_window_12_V_6_reg_6157 = pool_window_12_V_6_fu_2296_p3.read();
        pool_window_12_V_8_reg_6300 = pool_window_12_V_8_fu_2493_p3.read();
        pool_window_12_V_reg_5728 = pool_window_12_V_fu_1705_p3.read();
        pool_window_13_V_10_reg_6449 = pool_window_13_V_10_fu_2698_p3.read();
        pool_window_13_V_2_reg_5877 = pool_window_13_V_2_fu_1910_p3.read();
        pool_window_13_V_4_reg_6020 = pool_window_13_V_4_fu_2107_p3.read();
        pool_window_13_V_6_reg_6163 = pool_window_13_V_6_fu_2304_p3.read();
        pool_window_13_V_8_reg_6306 = pool_window_13_V_8_fu_2501_p3.read();
        pool_window_13_V_reg_5734 = pool_window_13_V_fu_1713_p3.read();
        pool_window_14_V_10_reg_6455 = pool_window_14_V_10_fu_2706_p3.read();
        pool_window_14_V_2_reg_5883 = pool_window_14_V_2_fu_1918_p3.read();
        pool_window_14_V_4_reg_6026 = pool_window_14_V_4_fu_2115_p3.read();
        pool_window_14_V_6_reg_6169 = pool_window_14_V_6_fu_2312_p3.read();
        pool_window_14_V_8_reg_6312 = pool_window_14_V_8_fu_2509_p3.read();
        pool_window_14_V_reg_5740 = pool_window_14_V_fu_1721_p3.read();
        pool_window_15_V_10_reg_6461 = pool_window_15_V_10_fu_2714_p3.read();
        pool_window_15_V_2_reg_5889 = pool_window_15_V_2_fu_1926_p3.read();
        pool_window_15_V_4_reg_6032 = pool_window_15_V_4_fu_2123_p3.read();
        pool_window_15_V_6_reg_6175 = pool_window_15_V_6_fu_2320_p3.read();
        pool_window_15_V_8_reg_6318 = pool_window_15_V_8_fu_2517_p3.read();
        pool_window_15_V_reg_5746 = pool_window_15_V_fu_1729_p3.read();
        pool_window_1_V_17_reg_5809 = pool_window_1_V_17_fu_1814_p3.read();
        pool_window_1_V_19_reg_5952 = pool_window_1_V_19_fu_2011_p3.read();
        pool_window_1_V_21_reg_6095 = pool_window_1_V_21_fu_2208_p3.read();
        pool_window_1_V_23_reg_6238 = pool_window_1_V_23_fu_2405_p3.read();
        pool_window_1_V_25_reg_6381 = pool_window_1_V_25_fu_2602_p3.read();
        pool_window_1_V_reg_5666 = pool_window_1_V_fu_1617_p3.read();
        pool_window_2_V_17_reg_5815 = pool_window_2_V_17_fu_1822_p3.read();
        pool_window_2_V_19_reg_5958 = pool_window_2_V_19_fu_2019_p3.read();
        pool_window_2_V_21_reg_6101 = pool_window_2_V_21_fu_2216_p3.read();
        pool_window_2_V_23_reg_6244 = pool_window_2_V_23_fu_2413_p3.read();
        pool_window_2_V_25_reg_6387 = pool_window_2_V_25_fu_2610_p3.read();
        pool_window_2_V_reg_5672 = pool_window_2_V_fu_1625_p3.read();
        pool_window_3_V_17_reg_5821 = pool_window_3_V_17_fu_1830_p3.read();
        pool_window_3_V_19_reg_5964 = pool_window_3_V_19_fu_2027_p3.read();
        pool_window_3_V_21_reg_6107 = pool_window_3_V_21_fu_2224_p3.read();
        pool_window_3_V_23_reg_6250 = pool_window_3_V_23_fu_2421_p3.read();
        pool_window_3_V_25_reg_6393 = pool_window_3_V_25_fu_2618_p3.read();
        pool_window_3_V_reg_5678 = pool_window_3_V_fu_1633_p3.read();
        pool_window_4_V_10_reg_6399 = pool_window_4_V_10_fu_2626_p3.read();
        pool_window_4_V_2_reg_5827 = pool_window_4_V_2_fu_1838_p3.read();
        pool_window_4_V_4_reg_5970 = pool_window_4_V_4_fu_2035_p3.read();
        pool_window_4_V_6_reg_6113 = pool_window_4_V_6_fu_2232_p3.read();
        pool_window_4_V_8_reg_6256 = pool_window_4_V_8_fu_2429_p3.read();
        pool_window_4_V_reg_5684 = pool_window_4_V_fu_1641_p3.read();
        pool_window_5_V_10_reg_6405 = pool_window_5_V_10_fu_2634_p3.read();
        pool_window_5_V_2_reg_5833 = pool_window_5_V_2_fu_1846_p3.read();
        pool_window_5_V_4_reg_5976 = pool_window_5_V_4_fu_2043_p3.read();
        pool_window_5_V_6_reg_6119 = pool_window_5_V_6_fu_2240_p3.read();
        pool_window_5_V_8_reg_6262 = pool_window_5_V_8_fu_2437_p3.read();
        pool_window_5_V_reg_5690 = pool_window_5_V_fu_1649_p3.read();
        pool_window_6_V_10_reg_6411 = pool_window_6_V_10_fu_2642_p3.read();
        pool_window_6_V_2_reg_5839 = pool_window_6_V_2_fu_1854_p3.read();
        pool_window_6_V_4_reg_5982 = pool_window_6_V_4_fu_2051_p3.read();
        pool_window_6_V_6_reg_6125 = pool_window_6_V_6_fu_2248_p3.read();
        pool_window_6_V_8_reg_6268 = pool_window_6_V_8_fu_2445_p3.read();
        pool_window_6_V_reg_5696 = pool_window_6_V_fu_1657_p3.read();
        pool_window_7_V_10_reg_6417 = pool_window_7_V_10_fu_2650_p3.read();
        pool_window_7_V_2_reg_5845 = pool_window_7_V_2_fu_1862_p3.read();
        pool_window_7_V_4_reg_5988 = pool_window_7_V_4_fu_2059_p3.read();
        pool_window_7_V_6_reg_6131 = pool_window_7_V_6_fu_2256_p3.read();
        pool_window_7_V_8_reg_6274 = pool_window_7_V_8_fu_2453_p3.read();
        pool_window_7_V_reg_5702 = pool_window_7_V_fu_1665_p3.read();
        pool_window_8_V_10_reg_6423 = pool_window_8_V_10_fu_2658_p3.read();
        pool_window_8_V_2_reg_5851 = pool_window_8_V_2_fu_1870_p3.read();
        pool_window_8_V_4_reg_5994 = pool_window_8_V_4_fu_2067_p3.read();
        pool_window_8_V_6_reg_6137 = pool_window_8_V_6_fu_2264_p3.read();
        pool_window_8_V_8_reg_6280 = pool_window_8_V_8_fu_2461_p3.read();
        pool_window_8_V_reg_5708 = pool_window_8_V_fu_1673_p3.read();
        pool_window_9_V_10_reg_6428 = pool_window_9_V_10_fu_2666_p3.read();
        pool_window_9_V_2_reg_5856 = pool_window_9_V_2_fu_1878_p3.read();
        pool_window_9_V_4_reg_5999 = pool_window_9_V_4_fu_2075_p3.read();
        pool_window_9_V_6_reg_6142 = pool_window_9_V_6_fu_2272_p3.read();
        pool_window_9_V_8_reg_6285 = pool_window_9_V_8_fu_2469_p3.read();
        pool_window_9_V_reg_5713 = pool_window_9_V_fu_1681_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()))) {
        icmp_ln191_5_reg_5596 = icmp_ln191_5_fu_550_p2.read();
        icmp_ln191_6_reg_5601 = icmp_ln191_6_fu_560_p2.read();
        icmp_ln212_reg_5606 = icmp_ln212_fu_566_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()))) {
        icmp_ln216_reg_5610 = icmp_ln216_fu_590_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln241_reg_5587 = icmp_ln241_fu_534_p2.read();
        icmp_ln241_reg_5587_pp0_iter1_reg = icmp_ln241_reg_5587.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        kernel_data_V_4_10 = kernel_data_V_4_16.read();
        kernel_data_V_4_11 = kernel_data_V_4_17.read();
        kernel_data_V_4_12 = kernel_data_V_4_18.read();
        kernel_data_V_4_13 = kernel_data_V_4_19.read();
        kernel_data_V_4_14 = kernel_data_V_4_20.read();
        kernel_data_V_4_15 = kernel_data_V_4_21.read();
        kernel_data_V_4_16 = kernel_data_V_4_22.read();
        kernel_data_V_4_17 = kernel_data_V_4_23.read();
        kernel_data_V_4_18 = line_buffer_Array_V_4_2_0_q0.read();
        kernel_data_V_4_19 = line_buffer_Array_V_4_2_1_q0.read();
        kernel_data_V_4_20 = line_buffer_Array_V_4_2_2_q0.read();
        kernel_data_V_4_21 = line_buffer_Array_V_4_2_3_q0.read();
        kernel_data_V_4_22 = line_buffer_Array_V_4_2_4_q0.read();
        kernel_data_V_4_23 = line_buffer_Array_V_4_2_5_q0.read();
        kernel_data_V_4_30 = kernel_data_V_4_36.read();
        kernel_data_V_4_31 = kernel_data_V_4_37.read();
        kernel_data_V_4_32 = kernel_data_V_4_38.read();
        kernel_data_V_4_33 = kernel_data_V_4_39.read();
        kernel_data_V_4_34 = kernel_data_V_4_40.read();
        kernel_data_V_4_35 = kernel_data_V_4_41.read();
        kernel_data_V_4_36 = kernel_data_V_4_42.read();
        kernel_data_V_4_37 = kernel_data_V_4_43.read();
        kernel_data_V_4_38 = kernel_data_V_4_44.read();
        kernel_data_V_4_39 = kernel_data_V_4_45.read();
        kernel_data_V_4_40 = kernel_data_V_4_46.read();
        kernel_data_V_4_41 = kernel_data_V_4_47.read();
        kernel_data_V_4_42 = line_buffer_Array_V_4_1_0_q0.read();
        kernel_data_V_4_43 = line_buffer_Array_V_4_1_1_q0.read();
        kernel_data_V_4_44 = line_buffer_Array_V_4_1_2_q0.read();
        kernel_data_V_4_45 = line_buffer_Array_V_4_1_3_q0.read();
        kernel_data_V_4_46 = line_buffer_Array_V_4_1_4_q0.read();
        kernel_data_V_4_47 = line_buffer_Array_V_4_1_5_q0.read();
        kernel_data_V_4_54 = kernel_data_V_4_60.read();
        kernel_data_V_4_55 = kernel_data_V_4_61.read();
        kernel_data_V_4_56 = kernel_data_V_4_62.read();
        kernel_data_V_4_57 = kernel_data_V_4_63.read();
        kernel_data_V_4_58 = kernel_data_V_4_64.read();
        kernel_data_V_4_59 = kernel_data_V_4_65.read();
        kernel_data_V_4_6 = kernel_data_V_4_12.read();
        kernel_data_V_4_60 = kernel_data_V_4_66.read();
        kernel_data_V_4_61 = kernel_data_V_4_67.read();
        kernel_data_V_4_62 = kernel_data_V_4_68.read();
        kernel_data_V_4_63 = kernel_data_V_4_69.read();
        kernel_data_V_4_64 = kernel_data_V_4_70.read();
        kernel_data_V_4_65 = kernel_data_V_4_71.read();
        kernel_data_V_4_66 = line_buffer_Array_V_4_0_0_q0.read();
        kernel_data_V_4_67 = line_buffer_Array_V_4_0_1_q0.read();
        kernel_data_V_4_68 = line_buffer_Array_V_4_0_2_q0.read();
        kernel_data_V_4_69 = line_buffer_Array_V_4_0_3_q0.read();
        kernel_data_V_4_7 = kernel_data_V_4_13.read();
        kernel_data_V_4_70 = line_buffer_Array_V_4_0_4_q0.read();
        kernel_data_V_4_71 = line_buffer_Array_V_4_0_5_q0.read();
        kernel_data_V_4_78 = kernel_data_V_4_84.read();
        kernel_data_V_4_79 = kernel_data_V_4_85.read();
        kernel_data_V_4_8 = kernel_data_V_4_14.read();
        kernel_data_V_4_80 = kernel_data_V_4_86.read();
        kernel_data_V_4_81 = kernel_data_V_4_87.read();
        kernel_data_V_4_82 = kernel_data_V_4_88.read();
        kernel_data_V_4_83 = kernel_data_V_4_89.read();
        kernel_data_V_4_84 = kernel_data_V_4_90.read();
        kernel_data_V_4_85 = kernel_data_V_4_91.read();
        kernel_data_V_4_86 = kernel_data_V_4_92.read();
        kernel_data_V_4_87 = kernel_data_V_4_93.read();
        kernel_data_V_4_88 = kernel_data_V_4_94.read();
        kernel_data_V_4_89 = kernel_data_V_4_95.read();
        kernel_data_V_4_9 = kernel_data_V_4_15.read();
        kernel_data_V_4_90 = shift_buffer_3_0_V_reg_5614.read();
        kernel_data_V_4_91 = shift_buffer_3_1_V_reg_5621.read();
        kernel_data_V_4_92 = shift_buffer_3_2_V_reg_5628.read();
        kernel_data_V_4_93 = shift_buffer_3_3_V_reg_5635.read();
        kernel_data_V_4_94 = shift_buffer_3_4_V_reg_5642.read();
        kernel_data_V_4_95 = shift_buffer_3_5_V_reg_5649.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln191_4_reg_5656_pp0_iter2_reg.read()))) {
        pool_window_0_V_16_reg_6518 = pool_window_0_V_16_fu_2791_p1.read();
        pool_window_0_V_18_reg_6641 = pool_window_0_V_18_fu_3166_p1.read();
        pool_window_0_V_20_reg_6764 = pool_window_0_V_20_fu_3541_p1.read();
        pool_window_0_V_22_reg_6887 = pool_window_0_V_22_fu_3916_p1.read();
        pool_window_0_V_24_reg_7010 = pool_window_0_V_24_fu_4291_p1.read();
        pool_window_0_V_26_reg_7133 = pool_window_0_V_26_fu_4666_p1.read();
        pool_window_10_V_11_reg_7201 = pool_window_10_V_11_fu_4696_p1.read();
        pool_window_10_V_1_reg_6586 = pool_window_10_V_1_fu_2821_p1.read();
        pool_window_10_V_3_reg_6709 = pool_window_10_V_3_fu_3196_p1.read();
        pool_window_10_V_5_reg_6832 = pool_window_10_V_5_fu_3571_p1.read();
        pool_window_10_V_7_reg_6955 = pool_window_10_V_7_fu_3946_p1.read();
        pool_window_10_V_9_reg_7078 = pool_window_10_V_9_fu_4321_p1.read();
        pool_window_11_V_11_reg_7207 = pool_window_11_V_11_fu_4699_p1.read();
        pool_window_11_V_1_reg_6592 = pool_window_11_V_1_fu_2824_p1.read();
        pool_window_11_V_3_reg_6715 = pool_window_11_V_3_fu_3199_p1.read();
        pool_window_11_V_5_reg_6838 = pool_window_11_V_5_fu_3574_p1.read();
        pool_window_11_V_7_reg_6961 = pool_window_11_V_7_fu_3949_p1.read();
        pool_window_11_V_9_reg_7084 = pool_window_11_V_9_fu_4324_p1.read();
        pool_window_12_V_11_reg_7213 = pool_window_12_V_11_fu_4702_p1.read();
        pool_window_12_V_1_reg_6598 = pool_window_12_V_1_fu_2827_p1.read();
        pool_window_12_V_3_reg_6721 = pool_window_12_V_3_fu_3202_p1.read();
        pool_window_12_V_5_reg_6844 = pool_window_12_V_5_fu_3577_p1.read();
        pool_window_12_V_7_reg_6967 = pool_window_12_V_7_fu_3952_p1.read();
        pool_window_12_V_9_reg_7090 = pool_window_12_V_9_fu_4327_p1.read();
        pool_window_13_V_11_reg_7219 = pool_window_13_V_11_fu_4705_p1.read();
        pool_window_13_V_1_reg_6604 = pool_window_13_V_1_fu_2830_p1.read();
        pool_window_13_V_3_reg_6727 = pool_window_13_V_3_fu_3205_p1.read();
        pool_window_13_V_5_reg_6850 = pool_window_13_V_5_fu_3580_p1.read();
        pool_window_13_V_7_reg_6973 = pool_window_13_V_7_fu_3955_p1.read();
        pool_window_13_V_9_reg_7096 = pool_window_13_V_9_fu_4330_p1.read();
        pool_window_14_V_11_reg_7225 = pool_window_14_V_11_fu_4708_p1.read();
        pool_window_14_V_1_reg_6610 = pool_window_14_V_1_fu_2833_p1.read();
        pool_window_14_V_3_reg_6733 = pool_window_14_V_3_fu_3208_p1.read();
        pool_window_14_V_5_reg_6856 = pool_window_14_V_5_fu_3583_p1.read();
        pool_window_14_V_7_reg_6979 = pool_window_14_V_7_fu_3958_p1.read();
        pool_window_14_V_9_reg_7102 = pool_window_14_V_9_fu_4333_p1.read();
        pool_window_15_V_11_reg_7231 = pool_window_15_V_11_fu_4711_p1.read();
        pool_window_15_V_1_reg_6616 = pool_window_15_V_1_fu_2836_p1.read();
        pool_window_15_V_3_reg_6739 = pool_window_15_V_3_fu_3211_p1.read();
        pool_window_15_V_5_reg_6862 = pool_window_15_V_5_fu_3586_p1.read();
        pool_window_15_V_7_reg_6985 = pool_window_15_V_7_fu_3961_p1.read();
        pool_window_15_V_9_reg_7108 = pool_window_15_V_9_fu_4336_p1.read();
        pool_window_1_V_16_reg_6524 = pool_window_1_V_16_fu_2794_p1.read();
        pool_window_1_V_18_reg_6647 = pool_window_1_V_18_fu_3169_p1.read();
        pool_window_1_V_20_reg_6770 = pool_window_1_V_20_fu_3544_p1.read();
        pool_window_1_V_22_reg_6893 = pool_window_1_V_22_fu_3919_p1.read();
        pool_window_1_V_24_reg_7016 = pool_window_1_V_24_fu_4294_p1.read();
        pool_window_1_V_26_reg_7139 = pool_window_1_V_26_fu_4669_p1.read();
        pool_window_2_V_16_reg_6530 = pool_window_2_V_16_fu_2797_p1.read();
        pool_window_2_V_18_reg_6653 = pool_window_2_V_18_fu_3172_p1.read();
        pool_window_2_V_20_reg_6776 = pool_window_2_V_20_fu_3547_p1.read();
        pool_window_2_V_22_reg_6899 = pool_window_2_V_22_fu_3922_p1.read();
        pool_window_2_V_24_reg_7022 = pool_window_2_V_24_fu_4297_p1.read();
        pool_window_2_V_26_reg_7145 = pool_window_2_V_26_fu_4672_p1.read();
        pool_window_3_V_16_reg_6536 = pool_window_3_V_16_fu_2800_p1.read();
        pool_window_3_V_18_reg_6659 = pool_window_3_V_18_fu_3175_p1.read();
        pool_window_3_V_20_reg_6782 = pool_window_3_V_20_fu_3550_p1.read();
        pool_window_3_V_22_reg_6905 = pool_window_3_V_22_fu_3925_p1.read();
        pool_window_3_V_24_reg_7028 = pool_window_3_V_24_fu_4300_p1.read();
        pool_window_3_V_26_reg_7151 = pool_window_3_V_26_fu_4675_p1.read();
        pool_window_4_V_11_reg_7157 = pool_window_4_V_11_fu_4678_p1.read();
        pool_window_4_V_1_reg_6542 = pool_window_4_V_1_fu_2803_p1.read();
        pool_window_4_V_3_reg_6665 = pool_window_4_V_3_fu_3178_p1.read();
        pool_window_4_V_5_reg_6788 = pool_window_4_V_5_fu_3553_p1.read();
        pool_window_4_V_7_reg_6911 = pool_window_4_V_7_fu_3928_p1.read();
        pool_window_4_V_9_reg_7034 = pool_window_4_V_9_fu_4303_p1.read();
        pool_window_5_V_11_reg_7163 = pool_window_5_V_11_fu_4681_p1.read();
        pool_window_5_V_1_reg_6548 = pool_window_5_V_1_fu_2806_p1.read();
        pool_window_5_V_3_reg_6671 = pool_window_5_V_3_fu_3181_p1.read();
        pool_window_5_V_5_reg_6794 = pool_window_5_V_5_fu_3556_p1.read();
        pool_window_5_V_7_reg_6917 = pool_window_5_V_7_fu_3931_p1.read();
        pool_window_5_V_9_reg_7040 = pool_window_5_V_9_fu_4306_p1.read();
        pool_window_6_V_11_reg_7169 = pool_window_6_V_11_fu_4684_p1.read();
        pool_window_6_V_1_reg_6554 = pool_window_6_V_1_fu_2809_p1.read();
        pool_window_6_V_3_reg_6677 = pool_window_6_V_3_fu_3184_p1.read();
        pool_window_6_V_5_reg_6800 = pool_window_6_V_5_fu_3559_p1.read();
        pool_window_6_V_7_reg_6923 = pool_window_6_V_7_fu_3934_p1.read();
        pool_window_6_V_9_reg_7046 = pool_window_6_V_9_fu_4309_p1.read();
        pool_window_7_V_11_reg_7175 = pool_window_7_V_11_fu_4687_p1.read();
        pool_window_7_V_1_reg_6560 = pool_window_7_V_1_fu_2812_p1.read();
        pool_window_7_V_3_reg_6683 = pool_window_7_V_3_fu_3187_p1.read();
        pool_window_7_V_5_reg_6806 = pool_window_7_V_5_fu_3562_p1.read();
        pool_window_7_V_7_reg_6929 = pool_window_7_V_7_fu_3937_p1.read();
        pool_window_7_V_9_reg_7052 = pool_window_7_V_9_fu_4312_p1.read();
        pool_window_8_V_11_reg_7189 = pool_window_8_V_11_fu_4690_p1.read();
        pool_window_8_V_1_reg_6574 = pool_window_8_V_1_fu_2815_p1.read();
        pool_window_8_V_3_reg_6697 = pool_window_8_V_3_fu_3190_p1.read();
        pool_window_8_V_5_reg_6820 = pool_window_8_V_5_fu_3565_p1.read();
        pool_window_8_V_7_reg_6943 = pool_window_8_V_7_fu_3940_p1.read();
        pool_window_8_V_9_reg_7066 = pool_window_8_V_9_fu_4315_p1.read();
        pool_window_9_V_11_reg_7195 = pool_window_9_V_11_fu_4693_p1.read();
        pool_window_9_V_1_reg_6580 = pool_window_9_V_1_fu_2818_p1.read();
        pool_window_9_V_3_reg_6703 = pool_window_9_V_3_fu_3193_p1.read();
        pool_window_9_V_5_reg_6826 = pool_window_9_V_5_fu_3568_p1.read();
        pool_window_9_V_7_reg_6949 = pool_window_9_V_7_fu_3943_p1.read();
        pool_window_9_V_9_reg_7072 = pool_window_9_V_9_fu_4318_p1.read();
        select_ln66_106_reg_6999 = select_ln66_106_fu_4130_p3.read();
        select_ln66_117_reg_7004 = select_ln66_117_fu_4283_p3.read();
        select_ln66_128_reg_7122 = select_ln66_128_fu_4505_p3.read();
        select_ln66_139_reg_7127 = select_ln66_139_fu_4658_p3.read();
        select_ln66_150_reg_7245 = select_ln66_150_fu_4880_p3.read();
        select_ln66_161_reg_7250 = select_ln66_161_fu_5033_p3.read();
        select_ln66_40_reg_6630 = select_ln66_40_fu_3005_p3.read();
        select_ln66_51_reg_6635 = select_ln66_51_fu_3158_p3.read();
        select_ln66_62_reg_6753 = select_ln66_62_fu_3380_p3.read();
        select_ln66_73_reg_6758 = select_ln66_73_fu_3533_p3.read();
        select_ln66_84_reg_6876 = select_ln66_84_fu_3755_p3.read();
        select_ln66_95_reg_6881 = select_ln66_95_fu_3908_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5606.read()))) {
        sY_1 = ap_phi_mux_storemerge_i_i_phi_fu_527_p4.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln191_4_reg_5656_pp0_iter3_reg.read()))) {
        tmp_data_0_V_reg_7256 = tmp_9_fu_5100_p18.read().range(11, 4);
        tmp_data_1_V_reg_7261 = tmp_1_fu_5191_p18.read().range(11, 4);
        tmp_data_2_V_reg_7266 = tmp_2_fu_5282_p18.read().range(11, 4);
        tmp_data_3_V_reg_7271 = tmp_3_fu_5373_p18.read().range(11, 4);
        tmp_data_4_V_reg_7276 = tmp_4_fu_5464_p18.read().range(11, 4);
        tmp_data_5_V_reg_7281 = tmp_5_fu_5555_p18.read().range(11, 4);
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_534_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

