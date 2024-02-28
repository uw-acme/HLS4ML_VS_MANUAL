#include "gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_NS_fsm_state3() {
    ap_NS_fsm_state3 = ap_NS_fsm.read()[2];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_NS_fsm_state5() {
    ap_NS_fsm_state5 = ap_NS_fsm.read()[4];
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_block_state2_on_subcall_done() {
    ap_block_state2_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_done.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_0() {
    ap_return_0 = grp_fu_18658_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_1() {
    ap_return_1 = grp_fu_18666_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_10() {
    ap_return_10 = grp_fu_18738_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_100() {
    ap_return_100 = grp_fu_19458_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_101() {
    ap_return_101 = grp_fu_19466_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_102() {
    ap_return_102 = grp_fu_19474_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_103() {
    ap_return_103 = grp_fu_19482_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_104() {
    ap_return_104 = grp_fu_19490_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_105() {
    ap_return_105 = grp_fu_19498_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_106() {
    ap_return_106 = grp_fu_19506_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_107() {
    ap_return_107 = grp_fu_19514_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_108() {
    ap_return_108 = grp_fu_19522_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_109() {
    ap_return_109 = grp_fu_19530_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_11() {
    ap_return_11 = grp_fu_18746_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_110() {
    ap_return_110 = grp_fu_19538_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_111() {
    ap_return_111 = grp_fu_19546_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_112() {
    ap_return_112 = grp_fu_19554_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_113() {
    ap_return_113 = grp_fu_19562_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_114() {
    ap_return_114 = grp_fu_19570_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_115() {
    ap_return_115 = grp_fu_19578_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_116() {
    ap_return_116 = grp_fu_19586_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_117() {
    ap_return_117 = grp_fu_19594_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_118() {
    ap_return_118 = grp_fu_19602_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_119() {
    ap_return_119 = grp_fu_19610_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_12() {
    ap_return_12 = grp_fu_18754_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_120() {
    ap_return_120 = grp_fu_19618_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_121() {
    ap_return_121 = grp_fu_19626_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_122() {
    ap_return_122 = grp_fu_19634_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_123() {
    ap_return_123 = grp_fu_19642_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_124() {
    ap_return_124 = grp_fu_19650_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_125() {
    ap_return_125 = grp_fu_19658_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_126() {
    ap_return_126 = grp_fu_19666_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_127() {
    ap_return_127 = grp_fu_19674_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_13() {
    ap_return_13 = grp_fu_18762_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_14() {
    ap_return_14 = grp_fu_18770_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_15() {
    ap_return_15 = grp_fu_18778_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_16() {
    ap_return_16 = grp_fu_18786_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_17() {
    ap_return_17 = grp_fu_18794_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_18() {
    ap_return_18 = grp_fu_18802_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_19() {
    ap_return_19 = grp_fu_18810_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_2() {
    ap_return_2 = grp_fu_18674_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_20() {
    ap_return_20 = grp_fu_18818_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_21() {
    ap_return_21 = grp_fu_18826_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_22() {
    ap_return_22 = grp_fu_18834_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_23() {
    ap_return_23 = grp_fu_18842_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_24() {
    ap_return_24 = grp_fu_18850_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_25() {
    ap_return_25 = grp_fu_18858_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_26() {
    ap_return_26 = grp_fu_18866_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_27() {
    ap_return_27 = grp_fu_18874_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_28() {
    ap_return_28 = grp_fu_18882_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_29() {
    ap_return_29 = grp_fu_18890_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_3() {
    ap_return_3 = grp_fu_18682_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_30() {
    ap_return_30 = grp_fu_18898_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_31() {
    ap_return_31 = grp_fu_18906_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_32() {
    ap_return_32 = grp_fu_18914_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_33() {
    ap_return_33 = grp_fu_18922_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_34() {
    ap_return_34 = grp_fu_18930_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_35() {
    ap_return_35 = grp_fu_18938_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_36() {
    ap_return_36 = grp_fu_18946_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_37() {
    ap_return_37 = grp_fu_18954_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_38() {
    ap_return_38 = grp_fu_18962_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_39() {
    ap_return_39 = grp_fu_18970_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_4() {
    ap_return_4 = grp_fu_18690_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_40() {
    ap_return_40 = grp_fu_18978_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_41() {
    ap_return_41 = grp_fu_18986_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_42() {
    ap_return_42 = grp_fu_18994_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_43() {
    ap_return_43 = grp_fu_19002_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_44() {
    ap_return_44 = grp_fu_19010_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_45() {
    ap_return_45 = grp_fu_19018_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_46() {
    ap_return_46 = grp_fu_19026_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_47() {
    ap_return_47 = grp_fu_19034_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_48() {
    ap_return_48 = grp_fu_19042_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_49() {
    ap_return_49 = grp_fu_19050_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_5() {
    ap_return_5 = grp_fu_18698_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_50() {
    ap_return_50 = grp_fu_19058_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_51() {
    ap_return_51 = grp_fu_19066_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_52() {
    ap_return_52 = grp_fu_19074_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_53() {
    ap_return_53 = grp_fu_19082_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_54() {
    ap_return_54 = grp_fu_19090_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_55() {
    ap_return_55 = grp_fu_19098_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_56() {
    ap_return_56 = grp_fu_19106_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_57() {
    ap_return_57 = grp_fu_19114_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_58() {
    ap_return_58 = grp_fu_19122_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_59() {
    ap_return_59 = grp_fu_19130_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_6() {
    ap_return_6 = grp_fu_18706_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_60() {
    ap_return_60 = grp_fu_19138_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_61() {
    ap_return_61 = grp_fu_19146_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_62() {
    ap_return_62 = grp_fu_19154_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_63() {
    ap_return_63 = grp_fu_19162_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_64() {
    ap_return_64 = grp_fu_19170_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_65() {
    ap_return_65 = grp_fu_19178_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_66() {
    ap_return_66 = grp_fu_19186_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_67() {
    ap_return_67 = grp_fu_19194_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_68() {
    ap_return_68 = grp_fu_19202_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_69() {
    ap_return_69 = grp_fu_19210_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_7() {
    ap_return_7 = grp_fu_18714_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_70() {
    ap_return_70 = grp_fu_19218_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_71() {
    ap_return_71 = grp_fu_19226_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_72() {
    ap_return_72 = grp_fu_19234_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_73() {
    ap_return_73 = grp_fu_19242_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_74() {
    ap_return_74 = grp_fu_19250_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_75() {
    ap_return_75 = grp_fu_19258_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_76() {
    ap_return_76 = grp_fu_19266_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_77() {
    ap_return_77 = grp_fu_19274_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_78() {
    ap_return_78 = grp_fu_19282_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_79() {
    ap_return_79 = grp_fu_19290_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_8() {
    ap_return_8 = grp_fu_18722_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_80() {
    ap_return_80 = grp_fu_19298_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_81() {
    ap_return_81 = grp_fu_19306_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_82() {
    ap_return_82 = grp_fu_19314_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_83() {
    ap_return_83 = grp_fu_19322_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_84() {
    ap_return_84 = grp_fu_19330_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_85() {
    ap_return_85 = grp_fu_19338_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_86() {
    ap_return_86 = grp_fu_19346_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_87() {
    ap_return_87 = grp_fu_19354_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_88() {
    ap_return_88 = grp_fu_19362_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_89() {
    ap_return_89 = grp_fu_19370_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_9() {
    ap_return_9 = grp_fu_18730_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_90() {
    ap_return_90 = grp_fu_19378_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_91() {
    ap_return_91 = grp_fu_19386_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_92() {
    ap_return_92 = grp_fu_19394_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_93() {
    ap_return_93 = grp_fu_19402_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_94() {
    ap_return_94 = grp_fu_19410_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_95() {
    ap_return_95 = grp_fu_19418_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_96() {
    ap_return_96 = grp_fu_19426_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_97() {
    ap_return_97 = grp_fu_19434_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_98() {
    ap_return_98 = grp_fu_19442_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_ap_return_99() {
    ap_return_99 = grp_fu_19450_p3.read().range(27, 10);
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_start() {
    grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_start = grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_start_reg.read();
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_start() {
    grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_start = grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_start_reg.read();
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18658_p0() {
    grp_fu_18658_p0 =  (sc_lv<18>) (sext_ln1192_1_fu_13541_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18658_p1() {
    grp_fu_18658_p1 =  (sc_lv<18>) (sext_ln1192_fu_13538_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18666_p0() {
    grp_fu_18666_p0 =  (sc_lv<18>) (sext_ln1192_3_fu_13556_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18666_p1() {
    grp_fu_18666_p1 =  (sc_lv<18>) (sext_ln1192_2_fu_13553_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18674_p0() {
    grp_fu_18674_p0 =  (sc_lv<18>) (sext_ln1192_5_fu_13571_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18674_p1() {
    grp_fu_18674_p1 =  (sc_lv<18>) (sext_ln1192_4_fu_13568_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18682_p0() {
    grp_fu_18682_p0 =  (sc_lv<18>) (sext_ln1192_7_fu_13586_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18682_p1() {
    grp_fu_18682_p1 =  (sc_lv<18>) (sext_ln1192_6_fu_13583_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18690_p0() {
    grp_fu_18690_p0 =  (sc_lv<18>) (sext_ln1192_9_fu_13601_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18690_p1() {
    grp_fu_18690_p1 =  (sc_lv<18>) (sext_ln1192_8_fu_13598_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18698_p0() {
    grp_fu_18698_p0 =  (sc_lv<18>) (sext_ln1192_11_fu_13616_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18698_p1() {
    grp_fu_18698_p1 =  (sc_lv<18>) (sext_ln1192_10_fu_13613_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18706_p0() {
    grp_fu_18706_p0 =  (sc_lv<18>) (sext_ln1192_13_fu_13631_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18706_p1() {
    grp_fu_18706_p1 =  (sc_lv<18>) (sext_ln1192_12_fu_13628_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18714_p0() {
    grp_fu_18714_p0 =  (sc_lv<18>) (sext_ln1192_15_fu_13646_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18714_p1() {
    grp_fu_18714_p1 =  (sc_lv<18>) (sext_ln1192_14_fu_13643_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18722_p0() {
    grp_fu_18722_p0 =  (sc_lv<18>) (sext_ln1192_17_fu_13661_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18722_p1() {
    grp_fu_18722_p1 =  (sc_lv<18>) (sext_ln1192_16_fu_13658_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18730_p0() {
    grp_fu_18730_p0 =  (sc_lv<18>) (sext_ln1192_19_fu_13676_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18730_p1() {
    grp_fu_18730_p1 =  (sc_lv<18>) (sext_ln1192_18_fu_13673_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18738_p0() {
    grp_fu_18738_p0 =  (sc_lv<18>) (sext_ln1192_21_fu_13691_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18738_p1() {
    grp_fu_18738_p1 =  (sc_lv<18>) (sext_ln1192_20_fu_13688_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18746_p0() {
    grp_fu_18746_p0 =  (sc_lv<18>) (sext_ln1192_23_fu_13706_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18746_p1() {
    grp_fu_18746_p1 =  (sc_lv<18>) (sext_ln1192_22_fu_13703_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18754_p0() {
    grp_fu_18754_p0 =  (sc_lv<18>) (sext_ln1192_25_fu_13721_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18754_p1() {
    grp_fu_18754_p1 =  (sc_lv<18>) (sext_ln1192_24_fu_13718_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18762_p0() {
    grp_fu_18762_p0 =  (sc_lv<18>) (sext_ln1192_27_fu_13736_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18762_p1() {
    grp_fu_18762_p1 =  (sc_lv<18>) (sext_ln1192_26_fu_13733_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18770_p0() {
    grp_fu_18770_p0 =  (sc_lv<18>) (sext_ln1192_29_fu_13751_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18770_p1() {
    grp_fu_18770_p1 =  (sc_lv<18>) (sext_ln1192_28_fu_13748_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18778_p0() {
    grp_fu_18778_p0 =  (sc_lv<18>) (sext_ln1192_31_fu_13766_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18778_p1() {
    grp_fu_18778_p1 =  (sc_lv<18>) (sext_ln1192_30_fu_13763_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18786_p0() {
    grp_fu_18786_p0 =  (sc_lv<18>) (sext_ln1192_33_fu_13781_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18786_p1() {
    grp_fu_18786_p1 =  (sc_lv<18>) (sext_ln1192_32_fu_13778_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18794_p0() {
    grp_fu_18794_p0 =  (sc_lv<18>) (sext_ln1192_35_fu_13796_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18794_p1() {
    grp_fu_18794_p1 =  (sc_lv<18>) (sext_ln1192_34_fu_13793_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18802_p0() {
    grp_fu_18802_p0 =  (sc_lv<18>) (sext_ln1192_37_fu_13811_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18802_p1() {
    grp_fu_18802_p1 =  (sc_lv<18>) (sext_ln1192_36_fu_13808_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18810_p0() {
    grp_fu_18810_p0 =  (sc_lv<18>) (sext_ln1192_39_fu_13826_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18810_p1() {
    grp_fu_18810_p1 =  (sc_lv<18>) (sext_ln1192_38_fu_13823_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18818_p0() {
    grp_fu_18818_p0 =  (sc_lv<18>) (sext_ln1192_41_fu_13841_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18818_p1() {
    grp_fu_18818_p1 =  (sc_lv<18>) (sext_ln1192_40_fu_13838_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18826_p0() {
    grp_fu_18826_p0 =  (sc_lv<18>) (sext_ln1192_43_fu_13856_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18826_p1() {
    grp_fu_18826_p1 =  (sc_lv<18>) (sext_ln1192_42_fu_13853_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18834_p0() {
    grp_fu_18834_p0 =  (sc_lv<18>) (sext_ln1192_45_fu_13871_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18834_p1() {
    grp_fu_18834_p1 =  (sc_lv<18>) (sext_ln1192_44_fu_13868_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18842_p0() {
    grp_fu_18842_p0 =  (sc_lv<18>) (sext_ln1192_47_fu_13886_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18842_p1() {
    grp_fu_18842_p1 =  (sc_lv<18>) (sext_ln1192_46_fu_13883_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18850_p0() {
    grp_fu_18850_p0 =  (sc_lv<18>) (sext_ln1192_49_fu_13901_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18850_p1() {
    grp_fu_18850_p1 =  (sc_lv<18>) (sext_ln1192_48_fu_13898_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18858_p0() {
    grp_fu_18858_p0 =  (sc_lv<18>) (sext_ln1192_51_fu_13916_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18858_p1() {
    grp_fu_18858_p1 =  (sc_lv<18>) (sext_ln1192_50_fu_13913_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18866_p0() {
    grp_fu_18866_p0 =  (sc_lv<18>) (sext_ln1192_53_fu_13931_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18866_p1() {
    grp_fu_18866_p1 =  (sc_lv<18>) (sext_ln1192_52_fu_13928_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18874_p0() {
    grp_fu_18874_p0 =  (sc_lv<18>) (sext_ln1192_55_fu_13946_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18874_p1() {
    grp_fu_18874_p1 =  (sc_lv<18>) (sext_ln1192_54_fu_13943_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18882_p0() {
    grp_fu_18882_p0 =  (sc_lv<18>) (sext_ln1192_57_fu_13961_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18882_p1() {
    grp_fu_18882_p1 =  (sc_lv<18>) (sext_ln1192_56_fu_13958_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18890_p0() {
    grp_fu_18890_p0 =  (sc_lv<18>) (sext_ln1192_59_fu_13976_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18890_p1() {
    grp_fu_18890_p1 =  (sc_lv<18>) (sext_ln1192_58_fu_13973_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18898_p0() {
    grp_fu_18898_p0 =  (sc_lv<18>) (sext_ln1192_61_fu_13991_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18898_p1() {
    grp_fu_18898_p1 =  (sc_lv<18>) (sext_ln1192_60_fu_13988_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18906_p0() {
    grp_fu_18906_p0 =  (sc_lv<18>) (sext_ln1192_63_fu_14006_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18906_p1() {
    grp_fu_18906_p1 =  (sc_lv<18>) (sext_ln1192_62_fu_14003_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18914_p0() {
    grp_fu_18914_p0 =  (sc_lv<18>) (sext_ln1192_65_fu_14021_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18914_p1() {
    grp_fu_18914_p1 =  (sc_lv<18>) (sext_ln1192_64_fu_14018_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18922_p0() {
    grp_fu_18922_p0 =  (sc_lv<18>) (sext_ln1192_67_fu_14036_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18922_p1() {
    grp_fu_18922_p1 =  (sc_lv<18>) (sext_ln1192_66_fu_14033_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18930_p0() {
    grp_fu_18930_p0 =  (sc_lv<18>) (sext_ln1192_69_fu_14051_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18930_p1() {
    grp_fu_18930_p1 =  (sc_lv<18>) (sext_ln1192_68_fu_14048_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18938_p0() {
    grp_fu_18938_p0 =  (sc_lv<18>) (sext_ln1192_71_fu_14066_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18938_p1() {
    grp_fu_18938_p1 =  (sc_lv<18>) (sext_ln1192_70_fu_14063_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18946_p0() {
    grp_fu_18946_p0 =  (sc_lv<18>) (sext_ln1192_73_fu_14081_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18946_p1() {
    grp_fu_18946_p1 =  (sc_lv<18>) (sext_ln1192_72_fu_14078_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18954_p0() {
    grp_fu_18954_p0 =  (sc_lv<18>) (sext_ln1192_75_fu_14096_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18954_p1() {
    grp_fu_18954_p1 =  (sc_lv<18>) (sext_ln1192_74_fu_14093_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18962_p0() {
    grp_fu_18962_p0 =  (sc_lv<18>) (sext_ln1192_77_fu_14111_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18962_p1() {
    grp_fu_18962_p1 =  (sc_lv<18>) (sext_ln1192_76_fu_14108_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18970_p0() {
    grp_fu_18970_p0 =  (sc_lv<18>) (sext_ln1192_79_fu_14126_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18970_p1() {
    grp_fu_18970_p1 =  (sc_lv<18>) (sext_ln1192_78_fu_14123_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18978_p0() {
    grp_fu_18978_p0 =  (sc_lv<18>) (sext_ln1192_81_fu_14141_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18978_p1() {
    grp_fu_18978_p1 =  (sc_lv<18>) (sext_ln1192_80_fu_14138_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18986_p0() {
    grp_fu_18986_p0 =  (sc_lv<18>) (sext_ln1192_83_fu_14156_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18986_p1() {
    grp_fu_18986_p1 =  (sc_lv<18>) (sext_ln1192_82_fu_14153_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18994_p0() {
    grp_fu_18994_p0 =  (sc_lv<18>) (sext_ln1192_85_fu_14171_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_18994_p1() {
    grp_fu_18994_p1 =  (sc_lv<18>) (sext_ln1192_84_fu_14168_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19002_p0() {
    grp_fu_19002_p0 =  (sc_lv<18>) (sext_ln1192_87_fu_14186_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19002_p1() {
    grp_fu_19002_p1 =  (sc_lv<18>) (sext_ln1192_86_fu_14183_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19010_p0() {
    grp_fu_19010_p0 =  (sc_lv<18>) (sext_ln1192_89_fu_14201_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19010_p1() {
    grp_fu_19010_p1 =  (sc_lv<18>) (sext_ln1192_88_fu_14198_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19018_p0() {
    grp_fu_19018_p0 =  (sc_lv<18>) (sext_ln1192_91_fu_14216_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19018_p1() {
    grp_fu_19018_p1 =  (sc_lv<18>) (sext_ln1192_90_fu_14213_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19026_p0() {
    grp_fu_19026_p0 =  (sc_lv<18>) (sext_ln1192_93_fu_14231_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19026_p1() {
    grp_fu_19026_p1 =  (sc_lv<18>) (sext_ln1192_92_fu_14228_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19034_p0() {
    grp_fu_19034_p0 =  (sc_lv<18>) (sext_ln1192_95_fu_14246_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19034_p1() {
    grp_fu_19034_p1 =  (sc_lv<18>) (sext_ln1192_94_fu_14243_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19042_p0() {
    grp_fu_19042_p0 =  (sc_lv<18>) (sext_ln1192_97_fu_14261_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19042_p1() {
    grp_fu_19042_p1 =  (sc_lv<18>) (sext_ln1192_96_fu_14258_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19050_p0() {
    grp_fu_19050_p0 =  (sc_lv<18>) (sext_ln1192_99_fu_14276_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19050_p1() {
    grp_fu_19050_p1 =  (sc_lv<18>) (sext_ln1192_98_fu_14273_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19058_p0() {
    grp_fu_19058_p0 =  (sc_lv<18>) (sext_ln1192_101_fu_14291_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19058_p1() {
    grp_fu_19058_p1 =  (sc_lv<18>) (sext_ln1192_100_fu_14288_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19066_p0() {
    grp_fu_19066_p0 =  (sc_lv<18>) (sext_ln1192_103_fu_14306_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19066_p1() {
    grp_fu_19066_p1 =  (sc_lv<18>) (sext_ln1192_102_fu_14303_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19074_p0() {
    grp_fu_19074_p0 =  (sc_lv<18>) (sext_ln1192_105_fu_14321_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19074_p1() {
    grp_fu_19074_p1 =  (sc_lv<18>) (sext_ln1192_104_fu_14318_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19082_p0() {
    grp_fu_19082_p0 =  (sc_lv<18>) (sext_ln1192_107_fu_14336_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19082_p1() {
    grp_fu_19082_p1 =  (sc_lv<18>) (sext_ln1192_106_fu_14333_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19090_p0() {
    grp_fu_19090_p0 =  (sc_lv<18>) (sext_ln1192_109_fu_14351_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19090_p1() {
    grp_fu_19090_p1 =  (sc_lv<18>) (sext_ln1192_108_fu_14348_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19098_p0() {
    grp_fu_19098_p0 =  (sc_lv<18>) (sext_ln1192_111_fu_14366_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19098_p1() {
    grp_fu_19098_p1 =  (sc_lv<18>) (sext_ln1192_110_fu_14363_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19106_p0() {
    grp_fu_19106_p0 =  (sc_lv<18>) (sext_ln1192_113_fu_14381_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19106_p1() {
    grp_fu_19106_p1 =  (sc_lv<18>) (sext_ln1192_112_fu_14378_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19114_p0() {
    grp_fu_19114_p0 =  (sc_lv<18>) (sext_ln1192_115_fu_14396_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19114_p1() {
    grp_fu_19114_p1 =  (sc_lv<18>) (sext_ln1192_114_fu_14393_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19122_p0() {
    grp_fu_19122_p0 =  (sc_lv<18>) (sext_ln1192_117_fu_14411_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19122_p1() {
    grp_fu_19122_p1 =  (sc_lv<18>) (sext_ln1192_116_fu_14408_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19130_p0() {
    grp_fu_19130_p0 =  (sc_lv<18>) (sext_ln1192_119_fu_14426_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19130_p1() {
    grp_fu_19130_p1 =  (sc_lv<18>) (sext_ln1192_118_fu_14423_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19138_p0() {
    grp_fu_19138_p0 =  (sc_lv<18>) (sext_ln1192_121_fu_14441_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19138_p1() {
    grp_fu_19138_p1 =  (sc_lv<18>) (sext_ln1192_120_fu_14438_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19146_p0() {
    grp_fu_19146_p0 =  (sc_lv<18>) (sext_ln1192_123_fu_14456_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19146_p1() {
    grp_fu_19146_p1 =  (sc_lv<18>) (sext_ln1192_122_fu_14453_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19154_p0() {
    grp_fu_19154_p0 =  (sc_lv<18>) (sext_ln1192_125_fu_14471_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19154_p1() {
    grp_fu_19154_p1 =  (sc_lv<18>) (sext_ln1192_124_fu_14468_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19162_p0() {
    grp_fu_19162_p0 =  (sc_lv<18>) (sext_ln1192_127_fu_14486_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19162_p1() {
    grp_fu_19162_p1 =  (sc_lv<18>) (sext_ln1192_126_fu_14483_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19170_p0() {
    grp_fu_19170_p0 =  (sc_lv<18>) (sext_ln1192_129_fu_14501_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19170_p1() {
    grp_fu_19170_p1 =  (sc_lv<18>) (sext_ln1192_128_fu_14498_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19178_p0() {
    grp_fu_19178_p0 =  (sc_lv<18>) (sext_ln1192_131_fu_14516_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19178_p1() {
    grp_fu_19178_p1 =  (sc_lv<18>) (sext_ln1192_130_fu_14513_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19186_p0() {
    grp_fu_19186_p0 =  (sc_lv<18>) (sext_ln1192_133_fu_14531_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19186_p1() {
    grp_fu_19186_p1 =  (sc_lv<18>) (sext_ln1192_132_fu_14528_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19194_p0() {
    grp_fu_19194_p0 =  (sc_lv<18>) (sext_ln1192_135_fu_14546_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19194_p1() {
    grp_fu_19194_p1 =  (sc_lv<18>) (sext_ln1192_134_fu_14543_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19202_p0() {
    grp_fu_19202_p0 =  (sc_lv<18>) (sext_ln1192_137_fu_14561_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19202_p1() {
    grp_fu_19202_p1 =  (sc_lv<18>) (sext_ln1192_136_fu_14558_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19210_p0() {
    grp_fu_19210_p0 =  (sc_lv<18>) (sext_ln1192_139_fu_14576_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19210_p1() {
    grp_fu_19210_p1 =  (sc_lv<18>) (sext_ln1192_138_fu_14573_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19218_p0() {
    grp_fu_19218_p0 =  (sc_lv<18>) (sext_ln1192_141_fu_14591_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19218_p1() {
    grp_fu_19218_p1 =  (sc_lv<18>) (sext_ln1192_140_fu_14588_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19226_p0() {
    grp_fu_19226_p0 =  (sc_lv<18>) (sext_ln1192_143_fu_14606_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19226_p1() {
    grp_fu_19226_p1 =  (sc_lv<18>) (sext_ln1192_142_fu_14603_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19234_p0() {
    grp_fu_19234_p0 =  (sc_lv<18>) (sext_ln1192_145_fu_14621_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19234_p1() {
    grp_fu_19234_p1 =  (sc_lv<18>) (sext_ln1192_144_fu_14618_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19242_p0() {
    grp_fu_19242_p0 =  (sc_lv<18>) (sext_ln1192_147_fu_14636_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19242_p1() {
    grp_fu_19242_p1 =  (sc_lv<18>) (sext_ln1192_146_fu_14633_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19250_p0() {
    grp_fu_19250_p0 =  (sc_lv<18>) (sext_ln1192_149_fu_14651_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19250_p1() {
    grp_fu_19250_p1 =  (sc_lv<18>) (sext_ln1192_148_fu_14648_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19258_p0() {
    grp_fu_19258_p0 =  (sc_lv<18>) (sext_ln1192_151_fu_14666_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19258_p1() {
    grp_fu_19258_p1 =  (sc_lv<18>) (sext_ln1192_150_fu_14663_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19266_p0() {
    grp_fu_19266_p0 =  (sc_lv<18>) (sext_ln1192_153_fu_14681_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19266_p1() {
    grp_fu_19266_p1 =  (sc_lv<18>) (sext_ln1192_152_fu_14678_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19274_p0() {
    grp_fu_19274_p0 =  (sc_lv<18>) (sext_ln1192_155_fu_14696_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19274_p1() {
    grp_fu_19274_p1 =  (sc_lv<18>) (sext_ln1192_154_fu_14693_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19282_p0() {
    grp_fu_19282_p0 =  (sc_lv<18>) (sext_ln1192_157_fu_14711_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19282_p1() {
    grp_fu_19282_p1 =  (sc_lv<18>) (sext_ln1192_156_fu_14708_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19290_p0() {
    grp_fu_19290_p0 =  (sc_lv<18>) (sext_ln1192_159_fu_14726_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19290_p1() {
    grp_fu_19290_p1 =  (sc_lv<18>) (sext_ln1192_158_fu_14723_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19298_p0() {
    grp_fu_19298_p0 =  (sc_lv<18>) (sext_ln1192_161_fu_14741_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19298_p1() {
    grp_fu_19298_p1 =  (sc_lv<18>) (sext_ln1192_160_fu_14738_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19306_p0() {
    grp_fu_19306_p0 =  (sc_lv<18>) (sext_ln1192_163_fu_14756_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19306_p1() {
    grp_fu_19306_p1 =  (sc_lv<18>) (sext_ln1192_162_fu_14753_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19314_p0() {
    grp_fu_19314_p0 =  (sc_lv<18>) (sext_ln1192_165_fu_14771_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19314_p1() {
    grp_fu_19314_p1 =  (sc_lv<18>) (sext_ln1192_164_fu_14768_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19322_p0() {
    grp_fu_19322_p0 =  (sc_lv<18>) (sext_ln1192_167_fu_14786_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19322_p1() {
    grp_fu_19322_p1 =  (sc_lv<18>) (sext_ln1192_166_fu_14783_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19330_p0() {
    grp_fu_19330_p0 =  (sc_lv<18>) (sext_ln1192_169_fu_14801_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19330_p1() {
    grp_fu_19330_p1 =  (sc_lv<18>) (sext_ln1192_168_fu_14798_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19338_p0() {
    grp_fu_19338_p0 =  (sc_lv<18>) (sext_ln1192_171_fu_14816_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19338_p1() {
    grp_fu_19338_p1 =  (sc_lv<18>) (sext_ln1192_170_fu_14813_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19346_p0() {
    grp_fu_19346_p0 =  (sc_lv<18>) (sext_ln1192_173_fu_14831_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19346_p1() {
    grp_fu_19346_p1 =  (sc_lv<18>) (sext_ln1192_172_fu_14828_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19354_p0() {
    grp_fu_19354_p0 =  (sc_lv<18>) (sext_ln1192_175_fu_14846_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19354_p1() {
    grp_fu_19354_p1 =  (sc_lv<18>) (sext_ln1192_174_fu_14843_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19362_p0() {
    grp_fu_19362_p0 =  (sc_lv<18>) (sext_ln1192_177_fu_14861_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19362_p1() {
    grp_fu_19362_p1 =  (sc_lv<18>) (sext_ln1192_176_fu_14858_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19370_p0() {
    grp_fu_19370_p0 =  (sc_lv<18>) (sext_ln1192_179_fu_14876_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19370_p1() {
    grp_fu_19370_p1 =  (sc_lv<18>) (sext_ln1192_178_fu_14873_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19378_p0() {
    grp_fu_19378_p0 =  (sc_lv<18>) (sext_ln1192_181_fu_14891_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19378_p1() {
    grp_fu_19378_p1 =  (sc_lv<18>) (sext_ln1192_180_fu_14888_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19386_p0() {
    grp_fu_19386_p0 =  (sc_lv<18>) (sext_ln1192_183_fu_14906_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19386_p1() {
    grp_fu_19386_p1 =  (sc_lv<18>) (sext_ln1192_182_fu_14903_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19394_p0() {
    grp_fu_19394_p0 =  (sc_lv<18>) (sext_ln1192_185_fu_14921_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19394_p1() {
    grp_fu_19394_p1 =  (sc_lv<18>) (sext_ln1192_184_fu_14918_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19402_p0() {
    grp_fu_19402_p0 =  (sc_lv<18>) (sext_ln1192_187_fu_14936_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19402_p1() {
    grp_fu_19402_p1 =  (sc_lv<18>) (sext_ln1192_186_fu_14933_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19410_p0() {
    grp_fu_19410_p0 =  (sc_lv<18>) (sext_ln1192_189_fu_14951_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19410_p1() {
    grp_fu_19410_p1 =  (sc_lv<18>) (sext_ln1192_188_fu_14948_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19418_p0() {
    grp_fu_19418_p0 =  (sc_lv<18>) (sext_ln1192_191_fu_14966_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19418_p1() {
    grp_fu_19418_p1 =  (sc_lv<18>) (sext_ln1192_190_fu_14963_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19426_p0() {
    grp_fu_19426_p0 =  (sc_lv<18>) (sext_ln1192_193_fu_14981_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19426_p1() {
    grp_fu_19426_p1 =  (sc_lv<18>) (sext_ln1192_192_fu_14978_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19434_p0() {
    grp_fu_19434_p0 =  (sc_lv<18>) (sext_ln1192_195_fu_14996_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19434_p1() {
    grp_fu_19434_p1 =  (sc_lv<18>) (sext_ln1192_194_fu_14993_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19442_p0() {
    grp_fu_19442_p0 =  (sc_lv<18>) (sext_ln1192_197_fu_15011_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19442_p1() {
    grp_fu_19442_p1 =  (sc_lv<18>) (sext_ln1192_196_fu_15008_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19450_p0() {
    grp_fu_19450_p0 =  (sc_lv<18>) (sext_ln1192_199_fu_15026_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19450_p1() {
    grp_fu_19450_p1 =  (sc_lv<18>) (sext_ln1192_198_fu_15023_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19458_p0() {
    grp_fu_19458_p0 =  (sc_lv<18>) (sext_ln1192_201_fu_15041_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19458_p1() {
    grp_fu_19458_p1 =  (sc_lv<18>) (sext_ln1192_200_fu_15038_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19466_p0() {
    grp_fu_19466_p0 =  (sc_lv<18>) (sext_ln1192_203_fu_15056_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19466_p1() {
    grp_fu_19466_p1 =  (sc_lv<18>) (sext_ln1192_202_fu_15053_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19474_p0() {
    grp_fu_19474_p0 =  (sc_lv<18>) (sext_ln1192_205_fu_15071_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19474_p1() {
    grp_fu_19474_p1 =  (sc_lv<18>) (sext_ln1192_204_fu_15068_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19482_p0() {
    grp_fu_19482_p0 =  (sc_lv<18>) (sext_ln1192_207_fu_15086_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19482_p1() {
    grp_fu_19482_p1 =  (sc_lv<18>) (sext_ln1192_206_fu_15083_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19490_p0() {
    grp_fu_19490_p0 =  (sc_lv<18>) (sext_ln1192_209_fu_15101_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19490_p1() {
    grp_fu_19490_p1 =  (sc_lv<18>) (sext_ln1192_208_fu_15098_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19498_p0() {
    grp_fu_19498_p0 =  (sc_lv<18>) (sext_ln1192_211_fu_15116_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19498_p1() {
    grp_fu_19498_p1 =  (sc_lv<18>) (sext_ln1192_210_fu_15113_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19506_p0() {
    grp_fu_19506_p0 =  (sc_lv<18>) (sext_ln1192_213_fu_15131_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19506_p1() {
    grp_fu_19506_p1 =  (sc_lv<18>) (sext_ln1192_212_fu_15128_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19514_p0() {
    grp_fu_19514_p0 =  (sc_lv<18>) (sext_ln1192_215_fu_15146_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19514_p1() {
    grp_fu_19514_p1 =  (sc_lv<18>) (sext_ln1192_214_fu_15143_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19522_p0() {
    grp_fu_19522_p0 =  (sc_lv<18>) (sext_ln1192_217_fu_15161_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19522_p1() {
    grp_fu_19522_p1 =  (sc_lv<18>) (sext_ln1192_216_fu_15158_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19530_p0() {
    grp_fu_19530_p0 =  (sc_lv<18>) (sext_ln1192_219_fu_15176_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19530_p1() {
    grp_fu_19530_p1 =  (sc_lv<18>) (sext_ln1192_218_fu_15173_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19538_p0() {
    grp_fu_19538_p0 =  (sc_lv<18>) (sext_ln1192_221_fu_15191_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19538_p1() {
    grp_fu_19538_p1 =  (sc_lv<18>) (sext_ln1192_220_fu_15188_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19546_p0() {
    grp_fu_19546_p0 =  (sc_lv<18>) (sext_ln1192_223_fu_15206_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19546_p1() {
    grp_fu_19546_p1 =  (sc_lv<18>) (sext_ln1192_222_fu_15203_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19554_p0() {
    grp_fu_19554_p0 =  (sc_lv<18>) (sext_ln1192_225_fu_15221_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19554_p1() {
    grp_fu_19554_p1 =  (sc_lv<18>) (sext_ln1192_224_fu_15218_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19562_p0() {
    grp_fu_19562_p0 =  (sc_lv<18>) (sext_ln1192_227_fu_15236_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19562_p1() {
    grp_fu_19562_p1 =  (sc_lv<18>) (sext_ln1192_226_fu_15233_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19570_p0() {
    grp_fu_19570_p0 =  (sc_lv<18>) (sext_ln1192_229_fu_15251_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19570_p1() {
    grp_fu_19570_p1 =  (sc_lv<18>) (sext_ln1192_228_fu_15248_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19578_p0() {
    grp_fu_19578_p0 =  (sc_lv<18>) (sext_ln1192_231_fu_15266_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19578_p1() {
    grp_fu_19578_p1 =  (sc_lv<18>) (sext_ln1192_230_fu_15263_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19586_p0() {
    grp_fu_19586_p0 =  (sc_lv<18>) (sext_ln1192_233_fu_15281_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19586_p1() {
    grp_fu_19586_p1 =  (sc_lv<18>) (sext_ln1192_232_fu_15278_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19594_p0() {
    grp_fu_19594_p0 =  (sc_lv<18>) (sext_ln1192_235_fu_15296_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19594_p1() {
    grp_fu_19594_p1 =  (sc_lv<18>) (sext_ln1192_234_fu_15293_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19602_p0() {
    grp_fu_19602_p0 =  (sc_lv<18>) (sext_ln1192_237_fu_15311_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19602_p1() {
    grp_fu_19602_p1 =  (sc_lv<18>) (sext_ln1192_236_fu_15308_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19610_p0() {
    grp_fu_19610_p0 =  (sc_lv<18>) (sext_ln1192_239_fu_15326_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19610_p1() {
    grp_fu_19610_p1 =  (sc_lv<18>) (sext_ln1192_238_fu_15323_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19618_p0() {
    grp_fu_19618_p0 =  (sc_lv<18>) (sext_ln1192_241_fu_15341_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19618_p1() {
    grp_fu_19618_p1 =  (sc_lv<18>) (sext_ln1192_240_fu_15338_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19626_p0() {
    grp_fu_19626_p0 =  (sc_lv<18>) (sext_ln1192_243_fu_15356_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19626_p1() {
    grp_fu_19626_p1 =  (sc_lv<18>) (sext_ln1192_242_fu_15353_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19634_p0() {
    grp_fu_19634_p0 =  (sc_lv<18>) (sext_ln1192_245_fu_15371_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19634_p1() {
    grp_fu_19634_p1 =  (sc_lv<18>) (sext_ln1192_244_fu_15368_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19642_p0() {
    grp_fu_19642_p0 =  (sc_lv<18>) (sext_ln1192_247_fu_15386_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19642_p1() {
    grp_fu_19642_p1 =  (sc_lv<18>) (sext_ln1192_246_fu_15383_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19650_p0() {
    grp_fu_19650_p0 =  (sc_lv<18>) (sext_ln1192_249_fu_15401_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19650_p1() {
    grp_fu_19650_p1 =  (sc_lv<18>) (sext_ln1192_248_fu_15398_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19658_p0() {
    grp_fu_19658_p0 =  (sc_lv<18>) (sext_ln1192_251_fu_15416_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19658_p1() {
    grp_fu_19658_p1 =  (sc_lv<18>) (sext_ln1192_250_fu_15413_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19666_p0() {
    grp_fu_19666_p0 =  (sc_lv<18>) (sext_ln1192_253_fu_15431_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19666_p1() {
    grp_fu_19666_p1 =  (sc_lv<18>) (sext_ln1192_252_fu_15428_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19674_p0() {
    grp_fu_19674_p0 =  (sc_lv<18>) (sext_ln1192_255_fu_15446_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_fu_19674_p1() {
    grp_fu_19674_p1 =  (sc_lv<18>) (sext_ln1192_254_fu_15443_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s_fu_456_ap_start() {
    grp_sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s_fu_456_ap_start = grp_sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s_fu_456_ap_start_reg.read();
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_grp_tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s_fu_732_ap_start() {
    grp_tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s_fu_732_ap_start = grp_tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s_fu_732_ap_start_reg.read();
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_0_V_fu_10082_p2() {
    inputacc_h_0_V_fu_10082_p2 = (!call_ret4_reg_20465_256.read().is_01() || !tmpres_state_h_0_V_fu_8041_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_256.read()) + sc_biguint<18>(tmpres_state_h_0_V_fu_8041_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_100_V_fu_10682_p2() {
    inputacc_h_100_V_fu_10682_p2 = (!call_ret4_reg_20465_356.read().is_01() || !trunc_ln708_18_fu_9641_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_356.read()) + sc_biguint<18>(trunc_ln708_18_fu_9641_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_101_V_fu_10688_p2() {
    inputacc_h_101_V_fu_10688_p2 = (!call_ret4_reg_20465_357.read().is_01() || !trunc_ln708_19_fu_9657_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_357.read()) + sc_biguint<18>(trunc_ln708_19_fu_9657_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_102_V_fu_10694_p2() {
    inputacc_h_102_V_fu_10694_p2 = (!call_ret4_reg_20465_358.read().is_01() || !trunc_ln708_20_fu_9673_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_358.read()) + sc_biguint<18>(trunc_ln708_20_fu_9673_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_103_V_fu_10700_p2() {
    inputacc_h_103_V_fu_10700_p2 = (!call_ret4_reg_20465_359.read().is_01() || !trunc_ln708_21_fu_9689_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_359.read()) + sc_biguint<18>(trunc_ln708_21_fu_9689_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_104_V_fu_10706_p2() {
    inputacc_h_104_V_fu_10706_p2 = (!call_ret4_reg_20465_360.read().is_01() || !trunc_ln708_22_fu_9705_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_360.read()) + sc_biguint<18>(trunc_ln708_22_fu_9705_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_105_V_fu_10712_p2() {
    inputacc_h_105_V_fu_10712_p2 = (!call_ret4_reg_20465_361.read().is_01() || !trunc_ln708_23_fu_9721_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_361.read()) + sc_biguint<18>(trunc_ln708_23_fu_9721_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_106_V_fu_10718_p2() {
    inputacc_h_106_V_fu_10718_p2 = (!call_ret4_reg_20465_362.read().is_01() || !trunc_ln708_24_fu_9737_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_362.read()) + sc_biguint<18>(trunc_ln708_24_fu_9737_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_107_V_fu_10724_p2() {
    inputacc_h_107_V_fu_10724_p2 = (!call_ret4_reg_20465_363.read().is_01() || !trunc_ln708_25_fu_9753_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_363.read()) + sc_biguint<18>(trunc_ln708_25_fu_9753_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_108_V_fu_10730_p2() {
    inputacc_h_108_V_fu_10730_p2 = (!call_ret4_reg_20465_364.read().is_01() || !trunc_ln708_26_fu_9769_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_364.read()) + sc_biguint<18>(trunc_ln708_26_fu_9769_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_109_V_fu_10736_p2() {
    inputacc_h_109_V_fu_10736_p2 = (!call_ret4_reg_20465_365.read().is_01() || !trunc_ln708_27_fu_9785_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_365.read()) + sc_biguint<18>(trunc_ln708_27_fu_9785_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_10_V_fu_10142_p2() {
    inputacc_h_10_V_fu_10142_p2 = (!call_ret4_reg_20465_266.read().is_01() || !tmpres_state_h_10_V_fu_8201_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_266.read()) + sc_biguint<18>(tmpres_state_h_10_V_fu_8201_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_110_V_fu_10742_p2() {
    inputacc_h_110_V_fu_10742_p2 = (!call_ret4_reg_20465_366.read().is_01() || !trunc_ln708_28_fu_9801_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_366.read()) + sc_biguint<18>(trunc_ln708_28_fu_9801_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_111_V_fu_10748_p2() {
    inputacc_h_111_V_fu_10748_p2 = (!call_ret4_reg_20465_367.read().is_01() || !trunc_ln708_29_fu_9817_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_367.read()) + sc_biguint<18>(trunc_ln708_29_fu_9817_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_112_V_fu_10754_p2() {
    inputacc_h_112_V_fu_10754_p2 = (!call_ret4_reg_20465_368.read().is_01() || !trunc_ln708_30_fu_9833_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_368.read()) + sc_biguint<18>(trunc_ln708_30_fu_9833_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_113_V_fu_10760_p2() {
    inputacc_h_113_V_fu_10760_p2 = (!call_ret4_reg_20465_369.read().is_01() || !trunc_ln708_31_fu_9849_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_369.read()) + sc_biguint<18>(trunc_ln708_31_fu_9849_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_114_V_fu_10766_p2() {
    inputacc_h_114_V_fu_10766_p2 = (!call_ret4_reg_20465_370.read().is_01() || !trunc_ln708_32_fu_9865_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_370.read()) + sc_biguint<18>(trunc_ln708_32_fu_9865_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_115_V_fu_10772_p2() {
    inputacc_h_115_V_fu_10772_p2 = (!call_ret4_reg_20465_371.read().is_01() || !trunc_ln708_33_fu_9881_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_371.read()) + sc_biguint<18>(trunc_ln708_33_fu_9881_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_116_V_fu_10778_p2() {
    inputacc_h_116_V_fu_10778_p2 = (!call_ret4_reg_20465_372.read().is_01() || !trunc_ln708_34_fu_9897_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_372.read()) + sc_biguint<18>(trunc_ln708_34_fu_9897_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_117_V_fu_10784_p2() {
    inputacc_h_117_V_fu_10784_p2 = (!call_ret4_reg_20465_373.read().is_01() || !trunc_ln708_35_fu_9913_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_373.read()) + sc_biguint<18>(trunc_ln708_35_fu_9913_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_118_V_fu_10790_p2() {
    inputacc_h_118_V_fu_10790_p2 = (!call_ret4_reg_20465_374.read().is_01() || !trunc_ln708_36_fu_9929_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_374.read()) + sc_biguint<18>(trunc_ln708_36_fu_9929_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_119_V_fu_10796_p2() {
    inputacc_h_119_V_fu_10796_p2 = (!call_ret4_reg_20465_375.read().is_01() || !trunc_ln708_37_fu_9945_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_375.read()) + sc_biguint<18>(trunc_ln708_37_fu_9945_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_11_V_fu_10148_p2() {
    inputacc_h_11_V_fu_10148_p2 = (!call_ret4_reg_20465_267.read().is_01() || !tmpres_state_h_11_V_fu_8217_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_267.read()) + sc_biguint<18>(tmpres_state_h_11_V_fu_8217_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_120_V_fu_10802_p2() {
    inputacc_h_120_V_fu_10802_p2 = (!call_ret4_reg_20465_376.read().is_01() || !trunc_ln708_38_fu_9961_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_376.read()) + sc_biguint<18>(trunc_ln708_38_fu_9961_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_121_V_fu_10808_p2() {
    inputacc_h_121_V_fu_10808_p2 = (!call_ret4_reg_20465_377.read().is_01() || !trunc_ln708_39_fu_9977_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_377.read()) + sc_biguint<18>(trunc_ln708_39_fu_9977_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_122_V_fu_10814_p2() {
    inputacc_h_122_V_fu_10814_p2 = (!call_ret4_reg_20465_378.read().is_01() || !trunc_ln708_40_fu_9993_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_378.read()) + sc_biguint<18>(trunc_ln708_40_fu_9993_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_123_V_fu_10820_p2() {
    inputacc_h_123_V_fu_10820_p2 = (!call_ret4_reg_20465_379.read().is_01() || !trunc_ln708_41_fu_10009_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_379.read()) + sc_biguint<18>(trunc_ln708_41_fu_10009_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_124_V_fu_10826_p2() {
    inputacc_h_124_V_fu_10826_p2 = (!call_ret4_reg_20465_380.read().is_01() || !trunc_ln708_42_fu_10025_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_380.read()) + sc_biguint<18>(trunc_ln708_42_fu_10025_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_125_V_fu_10832_p2() {
    inputacc_h_125_V_fu_10832_p2 = (!call_ret4_reg_20465_381.read().is_01() || !trunc_ln708_43_fu_10041_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_381.read()) + sc_biguint<18>(trunc_ln708_43_fu_10041_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_126_V_fu_10838_p2() {
    inputacc_h_126_V_fu_10838_p2 = (!call_ret4_reg_20465_382.read().is_01() || !trunc_ln708_44_fu_10057_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_382.read()) + sc_biguint<18>(trunc_ln708_44_fu_10057_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_127_V_fu_10844_p2() {
    inputacc_h_127_V_fu_10844_p2 = (!call_ret4_reg_20465_383.read().is_01() || !trunc_ln708_45_fu_10073_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_383.read()) + sc_biguint<18>(trunc_ln708_45_fu_10073_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_12_V_fu_10154_p2() {
    inputacc_h_12_V_fu_10154_p2 = (!call_ret4_reg_20465_268.read().is_01() || !tmpres_state_h_12_V_fu_8233_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_268.read()) + sc_biguint<18>(tmpres_state_h_12_V_fu_8233_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_13_V_fu_10160_p2() {
    inputacc_h_13_V_fu_10160_p2 = (!call_ret4_reg_20465_269.read().is_01() || !tmpres_state_h_13_V_fu_8249_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_269.read()) + sc_biguint<18>(tmpres_state_h_13_V_fu_8249_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_14_V_fu_10166_p2() {
    inputacc_h_14_V_fu_10166_p2 = (!call_ret4_reg_20465_270.read().is_01() || !tmpres_state_h_14_V_fu_8265_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_270.read()) + sc_biguint<18>(tmpres_state_h_14_V_fu_8265_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_15_V_fu_10172_p2() {
    inputacc_h_15_V_fu_10172_p2 = (!call_ret4_reg_20465_271.read().is_01() || !tmpres_state_h_15_V_fu_8281_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_271.read()) + sc_biguint<18>(tmpres_state_h_15_V_fu_8281_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_16_V_fu_10178_p2() {
    inputacc_h_16_V_fu_10178_p2 = (!call_ret4_reg_20465_272.read().is_01() || !tmpres_state_h_16_V_fu_8297_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_272.read()) + sc_biguint<18>(tmpres_state_h_16_V_fu_8297_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_17_V_fu_10184_p2() {
    inputacc_h_17_V_fu_10184_p2 = (!call_ret4_reg_20465_273.read().is_01() || !tmpres_state_h_17_V_fu_8313_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_273.read()) + sc_biguint<18>(tmpres_state_h_17_V_fu_8313_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_18_V_fu_10190_p2() {
    inputacc_h_18_V_fu_10190_p2 = (!call_ret4_reg_20465_274.read().is_01() || !tmpres_state_h_18_V_fu_8329_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_274.read()) + sc_biguint<18>(tmpres_state_h_18_V_fu_8329_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_19_V_fu_10196_p2() {
    inputacc_h_19_V_fu_10196_p2 = (!call_ret4_reg_20465_275.read().is_01() || !tmpres_state_h_19_V_fu_8345_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_275.read()) + sc_biguint<18>(tmpres_state_h_19_V_fu_8345_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_1_V_fu_10088_p2() {
    inputacc_h_1_V_fu_10088_p2 = (!call_ret4_reg_20465_257.read().is_01() || !tmpres_state_h_1_V_fu_8057_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_257.read()) + sc_biguint<18>(tmpres_state_h_1_V_fu_8057_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_20_V_fu_10202_p2() {
    inputacc_h_20_V_fu_10202_p2 = (!call_ret4_reg_20465_276.read().is_01() || !tmpres_state_h_20_V_fu_8361_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_276.read()) + sc_biguint<18>(tmpres_state_h_20_V_fu_8361_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_21_V_fu_10208_p2() {
    inputacc_h_21_V_fu_10208_p2 = (!call_ret4_reg_20465_277.read().is_01() || !tmpres_state_h_21_V_fu_8377_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_277.read()) + sc_biguint<18>(tmpres_state_h_21_V_fu_8377_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_22_V_fu_10214_p2() {
    inputacc_h_22_V_fu_10214_p2 = (!call_ret4_reg_20465_278.read().is_01() || !tmpres_state_h_22_V_fu_8393_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_278.read()) + sc_biguint<18>(tmpres_state_h_22_V_fu_8393_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_23_V_fu_10220_p2() {
    inputacc_h_23_V_fu_10220_p2 = (!call_ret4_reg_20465_279.read().is_01() || !tmpres_state_h_23_V_fu_8409_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_279.read()) + sc_biguint<18>(tmpres_state_h_23_V_fu_8409_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_24_V_fu_10226_p2() {
    inputacc_h_24_V_fu_10226_p2 = (!call_ret4_reg_20465_280.read().is_01() || !tmpres_state_h_24_V_fu_8425_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_280.read()) + sc_biguint<18>(tmpres_state_h_24_V_fu_8425_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_25_V_fu_10232_p2() {
    inputacc_h_25_V_fu_10232_p2 = (!call_ret4_reg_20465_281.read().is_01() || !tmpres_state_h_25_V_fu_8441_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_281.read()) + sc_biguint<18>(tmpres_state_h_25_V_fu_8441_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_26_V_fu_10238_p2() {
    inputacc_h_26_V_fu_10238_p2 = (!call_ret4_reg_20465_282.read().is_01() || !tmpres_state_h_26_V_fu_8457_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_282.read()) + sc_biguint<18>(tmpres_state_h_26_V_fu_8457_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_27_V_fu_10244_p2() {
    inputacc_h_27_V_fu_10244_p2 = (!call_ret4_reg_20465_283.read().is_01() || !tmpres_state_h_27_V_fu_8473_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_283.read()) + sc_biguint<18>(tmpres_state_h_27_V_fu_8473_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_28_V_fu_10250_p2() {
    inputacc_h_28_V_fu_10250_p2 = (!call_ret4_reg_20465_284.read().is_01() || !tmpres_state_h_28_V_fu_8489_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_284.read()) + sc_biguint<18>(tmpres_state_h_28_V_fu_8489_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_29_V_fu_10256_p2() {
    inputacc_h_29_V_fu_10256_p2 = (!call_ret4_reg_20465_285.read().is_01() || !tmpres_state_h_29_V_fu_8505_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_285.read()) + sc_biguint<18>(tmpres_state_h_29_V_fu_8505_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_2_V_fu_10094_p2() {
    inputacc_h_2_V_fu_10094_p2 = (!call_ret4_reg_20465_258.read().is_01() || !tmpres_state_h_2_V_fu_8073_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_258.read()) + sc_biguint<18>(tmpres_state_h_2_V_fu_8073_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_30_V_fu_10262_p2() {
    inputacc_h_30_V_fu_10262_p2 = (!call_ret4_reg_20465_286.read().is_01() || !tmpres_state_h_30_V_fu_8521_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_286.read()) + sc_biguint<18>(tmpres_state_h_30_V_fu_8521_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_31_V_fu_10268_p2() {
    inputacc_h_31_V_fu_10268_p2 = (!call_ret4_reg_20465_287.read().is_01() || !tmpres_state_h_31_V_fu_8537_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_287.read()) + sc_biguint<18>(tmpres_state_h_31_V_fu_8537_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_32_V_fu_10274_p2() {
    inputacc_h_32_V_fu_10274_p2 = (!call_ret4_reg_20465_288.read().is_01() || !tmpres_state_h_32_V_fu_8553_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_288.read()) + sc_biguint<18>(tmpres_state_h_32_V_fu_8553_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_33_V_fu_10280_p2() {
    inputacc_h_33_V_fu_10280_p2 = (!call_ret4_reg_20465_289.read().is_01() || !tmpres_state_h_33_V_fu_8569_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_289.read()) + sc_biguint<18>(tmpres_state_h_33_V_fu_8569_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_34_V_fu_10286_p2() {
    inputacc_h_34_V_fu_10286_p2 = (!call_ret4_reg_20465_290.read().is_01() || !tmpres_state_h_34_V_fu_8585_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_290.read()) + sc_biguint<18>(tmpres_state_h_34_V_fu_8585_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_35_V_fu_10292_p2() {
    inputacc_h_35_V_fu_10292_p2 = (!call_ret4_reg_20465_291.read().is_01() || !tmpres_state_h_35_V_fu_8601_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_291.read()) + sc_biguint<18>(tmpres_state_h_35_V_fu_8601_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_36_V_fu_10298_p2() {
    inputacc_h_36_V_fu_10298_p2 = (!call_ret4_reg_20465_292.read().is_01() || !tmpres_state_h_36_V_fu_8617_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_292.read()) + sc_biguint<18>(tmpres_state_h_36_V_fu_8617_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_37_V_fu_10304_p2() {
    inputacc_h_37_V_fu_10304_p2 = (!call_ret4_reg_20465_293.read().is_01() || !tmpres_state_h_37_V_fu_8633_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_293.read()) + sc_biguint<18>(tmpres_state_h_37_V_fu_8633_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_38_V_fu_10310_p2() {
    inputacc_h_38_V_fu_10310_p2 = (!call_ret4_reg_20465_294.read().is_01() || !tmpres_state_h_38_V_fu_8649_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_294.read()) + sc_biguint<18>(tmpres_state_h_38_V_fu_8649_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_39_V_fu_10316_p2() {
    inputacc_h_39_V_fu_10316_p2 = (!call_ret4_reg_20465_295.read().is_01() || !tmpres_state_h_39_V_fu_8665_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_295.read()) + sc_biguint<18>(tmpres_state_h_39_V_fu_8665_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_3_V_fu_10100_p2() {
    inputacc_h_3_V_fu_10100_p2 = (!call_ret4_reg_20465_259.read().is_01() || !tmpres_state_h_3_V_fu_8089_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_259.read()) + sc_biguint<18>(tmpres_state_h_3_V_fu_8089_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_40_V_fu_10322_p2() {
    inputacc_h_40_V_fu_10322_p2 = (!call_ret4_reg_20465_296.read().is_01() || !tmpres_state_h_40_V_fu_8681_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_296.read()) + sc_biguint<18>(tmpres_state_h_40_V_fu_8681_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_41_V_fu_10328_p2() {
    inputacc_h_41_V_fu_10328_p2 = (!call_ret4_reg_20465_297.read().is_01() || !tmpres_state_h_41_V_fu_8697_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_297.read()) + sc_biguint<18>(tmpres_state_h_41_V_fu_8697_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_42_V_fu_10334_p2() {
    inputacc_h_42_V_fu_10334_p2 = (!call_ret4_reg_20465_298.read().is_01() || !tmpres_state_h_42_V_fu_8713_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_298.read()) + sc_biguint<18>(tmpres_state_h_42_V_fu_8713_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_43_V_fu_10340_p2() {
    inputacc_h_43_V_fu_10340_p2 = (!call_ret4_reg_20465_299.read().is_01() || !tmpres_state_h_43_V_fu_8729_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_299.read()) + sc_biguint<18>(tmpres_state_h_43_V_fu_8729_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_44_V_fu_10346_p2() {
    inputacc_h_44_V_fu_10346_p2 = (!call_ret4_reg_20465_300.read().is_01() || !tmpres_state_h_44_V_fu_8745_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_300.read()) + sc_biguint<18>(tmpres_state_h_44_V_fu_8745_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_45_V_fu_10352_p2() {
    inputacc_h_45_V_fu_10352_p2 = (!call_ret4_reg_20465_301.read().is_01() || !tmpres_state_h_45_V_fu_8761_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_301.read()) + sc_biguint<18>(tmpres_state_h_45_V_fu_8761_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_46_V_fu_10358_p2() {
    inputacc_h_46_V_fu_10358_p2 = (!call_ret4_reg_20465_302.read().is_01() || !tmpres_state_h_46_V_fu_8777_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_302.read()) + sc_biguint<18>(tmpres_state_h_46_V_fu_8777_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_47_V_fu_10364_p2() {
    inputacc_h_47_V_fu_10364_p2 = (!call_ret4_reg_20465_303.read().is_01() || !tmpres_state_h_47_V_fu_8793_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_303.read()) + sc_biguint<18>(tmpres_state_h_47_V_fu_8793_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_48_V_fu_10370_p2() {
    inputacc_h_48_V_fu_10370_p2 = (!call_ret4_reg_20465_304.read().is_01() || !tmpres_state_h_48_V_fu_8809_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_304.read()) + sc_biguint<18>(tmpres_state_h_48_V_fu_8809_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_49_V_fu_10376_p2() {
    inputacc_h_49_V_fu_10376_p2 = (!call_ret4_reg_20465_305.read().is_01() || !tmpres_state_h_49_V_fu_8825_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_305.read()) + sc_biguint<18>(tmpres_state_h_49_V_fu_8825_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_4_V_fu_10106_p2() {
    inputacc_h_4_V_fu_10106_p2 = (!call_ret4_reg_20465_260.read().is_01() || !tmpres_state_h_4_V_fu_8105_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_260.read()) + sc_biguint<18>(tmpres_state_h_4_V_fu_8105_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_50_V_fu_10382_p2() {
    inputacc_h_50_V_fu_10382_p2 = (!call_ret4_reg_20465_306.read().is_01() || !tmpres_state_h_50_V_fu_8841_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_306.read()) + sc_biguint<18>(tmpres_state_h_50_V_fu_8841_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_51_V_fu_10388_p2() {
    inputacc_h_51_V_fu_10388_p2 = (!call_ret4_reg_20465_307.read().is_01() || !tmpres_state_h_51_V_fu_8857_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_307.read()) + sc_biguint<18>(tmpres_state_h_51_V_fu_8857_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_52_V_fu_10394_p2() {
    inputacc_h_52_V_fu_10394_p2 = (!call_ret4_reg_20465_308.read().is_01() || !tmpres_state_h_52_V_fu_8873_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_308.read()) + sc_biguint<18>(tmpres_state_h_52_V_fu_8873_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_53_V_fu_10400_p2() {
    inputacc_h_53_V_fu_10400_p2 = (!call_ret4_reg_20465_309.read().is_01() || !tmpres_state_h_53_V_fu_8889_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_309.read()) + sc_biguint<18>(tmpres_state_h_53_V_fu_8889_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_54_V_fu_10406_p2() {
    inputacc_h_54_V_fu_10406_p2 = (!call_ret4_reg_20465_310.read().is_01() || !tmpres_state_h_54_V_fu_8905_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_310.read()) + sc_biguint<18>(tmpres_state_h_54_V_fu_8905_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_55_V_fu_10412_p2() {
    inputacc_h_55_V_fu_10412_p2 = (!call_ret4_reg_20465_311.read().is_01() || !tmpres_state_h_55_V_fu_8921_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_311.read()) + sc_biguint<18>(tmpres_state_h_55_V_fu_8921_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_56_V_fu_10418_p2() {
    inputacc_h_56_V_fu_10418_p2 = (!call_ret4_reg_20465_312.read().is_01() || !tmpres_state_h_56_V_fu_8937_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_312.read()) + sc_biguint<18>(tmpres_state_h_56_V_fu_8937_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_57_V_fu_10424_p2() {
    inputacc_h_57_V_fu_10424_p2 = (!call_ret4_reg_20465_313.read().is_01() || !tmpres_state_h_57_V_fu_8953_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_313.read()) + sc_biguint<18>(tmpres_state_h_57_V_fu_8953_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_58_V_fu_10430_p2() {
    inputacc_h_58_V_fu_10430_p2 = (!call_ret4_reg_20465_314.read().is_01() || !tmpres_state_h_58_V_fu_8969_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_314.read()) + sc_biguint<18>(tmpres_state_h_58_V_fu_8969_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_59_V_fu_10436_p2() {
    inputacc_h_59_V_fu_10436_p2 = (!call_ret4_reg_20465_315.read().is_01() || !tmpres_state_h_59_V_fu_8985_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_315.read()) + sc_biguint<18>(tmpres_state_h_59_V_fu_8985_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_5_V_fu_10112_p2() {
    inputacc_h_5_V_fu_10112_p2 = (!call_ret4_reg_20465_261.read().is_01() || !tmpres_state_h_5_V_fu_8121_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_261.read()) + sc_biguint<18>(tmpres_state_h_5_V_fu_8121_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_60_V_fu_10442_p2() {
    inputacc_h_60_V_fu_10442_p2 = (!call_ret4_reg_20465_316.read().is_01() || !tmpres_state_h_60_V_fu_9001_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_316.read()) + sc_biguint<18>(tmpres_state_h_60_V_fu_9001_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_61_V_fu_10448_p2() {
    inputacc_h_61_V_fu_10448_p2 = (!call_ret4_reg_20465_317.read().is_01() || !tmpres_state_h_61_V_fu_9017_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_317.read()) + sc_biguint<18>(tmpres_state_h_61_V_fu_9017_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_62_V_fu_10454_p2() {
    inputacc_h_62_V_fu_10454_p2 = (!call_ret4_reg_20465_318.read().is_01() || !tmpres_state_h_62_V_fu_9033_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_318.read()) + sc_biguint<18>(tmpres_state_h_62_V_fu_9033_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_63_V_fu_10460_p2() {
    inputacc_h_63_V_fu_10460_p2 = (!call_ret4_reg_20465_319.read().is_01() || !tmpres_state_h_63_V_fu_9049_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_319.read()) + sc_biguint<18>(tmpres_state_h_63_V_fu_9049_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_64_V_fu_10466_p2() {
    inputacc_h_64_V_fu_10466_p2 = (!call_ret4_reg_20465_320.read().is_01() || !tmpres_state_h_64_V_fu_9065_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_320.read()) + sc_biguint<18>(tmpres_state_h_64_V_fu_9065_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_65_V_fu_10472_p2() {
    inputacc_h_65_V_fu_10472_p2 = (!call_ret4_reg_20465_321.read().is_01() || !tmpres_state_h_65_V_fu_9081_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_321.read()) + sc_biguint<18>(tmpres_state_h_65_V_fu_9081_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_66_V_fu_10478_p2() {
    inputacc_h_66_V_fu_10478_p2 = (!call_ret4_reg_20465_322.read().is_01() || !tmpres_state_h_66_V_fu_9097_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_322.read()) + sc_biguint<18>(tmpres_state_h_66_V_fu_9097_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_67_V_fu_10484_p2() {
    inputacc_h_67_V_fu_10484_p2 = (!call_ret4_reg_20465_323.read().is_01() || !tmpres_state_h_67_V_fu_9113_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_323.read()) + sc_biguint<18>(tmpres_state_h_67_V_fu_9113_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_68_V_fu_10490_p2() {
    inputacc_h_68_V_fu_10490_p2 = (!call_ret4_reg_20465_324.read().is_01() || !tmpres_state_h_68_V_fu_9129_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_324.read()) + sc_biguint<18>(tmpres_state_h_68_V_fu_9129_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_69_V_fu_10496_p2() {
    inputacc_h_69_V_fu_10496_p2 = (!call_ret4_reg_20465_325.read().is_01() || !tmpres_state_h_69_V_fu_9145_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_325.read()) + sc_biguint<18>(tmpres_state_h_69_V_fu_9145_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_6_V_fu_10118_p2() {
    inputacc_h_6_V_fu_10118_p2 = (!call_ret4_reg_20465_262.read().is_01() || !tmpres_state_h_6_V_fu_8137_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_262.read()) + sc_biguint<18>(tmpres_state_h_6_V_fu_8137_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_70_V_fu_10502_p2() {
    inputacc_h_70_V_fu_10502_p2 = (!call_ret4_reg_20465_326.read().is_01() || !tmpres_state_h_70_V_fu_9161_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_326.read()) + sc_biguint<18>(tmpres_state_h_70_V_fu_9161_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_71_V_fu_10508_p2() {
    inputacc_h_71_V_fu_10508_p2 = (!call_ret4_reg_20465_327.read().is_01() || !tmpres_state_h_71_V_fu_9177_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_327.read()) + sc_biguint<18>(tmpres_state_h_71_V_fu_9177_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_72_V_fu_10514_p2() {
    inputacc_h_72_V_fu_10514_p2 = (!call_ret4_reg_20465_328.read().is_01() || !tmpres_state_h_72_V_fu_9193_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_328.read()) + sc_biguint<18>(tmpres_state_h_72_V_fu_9193_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_73_V_fu_10520_p2() {
    inputacc_h_73_V_fu_10520_p2 = (!call_ret4_reg_20465_329.read().is_01() || !tmpres_state_h_73_V_fu_9209_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_329.read()) + sc_biguint<18>(tmpres_state_h_73_V_fu_9209_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_74_V_fu_10526_p2() {
    inputacc_h_74_V_fu_10526_p2 = (!call_ret4_reg_20465_330.read().is_01() || !tmpres_state_h_74_V_fu_9225_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_330.read()) + sc_biguint<18>(tmpres_state_h_74_V_fu_9225_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_75_V_fu_10532_p2() {
    inputacc_h_75_V_fu_10532_p2 = (!call_ret4_reg_20465_331.read().is_01() || !tmpres_state_h_75_V_fu_9241_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_331.read()) + sc_biguint<18>(tmpres_state_h_75_V_fu_9241_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_76_V_fu_10538_p2() {
    inputacc_h_76_V_fu_10538_p2 = (!call_ret4_reg_20465_332.read().is_01() || !tmpres_state_h_76_V_fu_9257_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_332.read()) + sc_biguint<18>(tmpres_state_h_76_V_fu_9257_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_77_V_fu_10544_p2() {
    inputacc_h_77_V_fu_10544_p2 = (!call_ret4_reg_20465_333.read().is_01() || !tmpres_state_h_77_V_fu_9273_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_333.read()) + sc_biguint<18>(tmpres_state_h_77_V_fu_9273_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_78_V_fu_10550_p2() {
    inputacc_h_78_V_fu_10550_p2 = (!call_ret4_reg_20465_334.read().is_01() || !tmpres_state_h_78_V_fu_9289_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_334.read()) + sc_biguint<18>(tmpres_state_h_78_V_fu_9289_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_79_V_fu_10556_p2() {
    inputacc_h_79_V_fu_10556_p2 = (!call_ret4_reg_20465_335.read().is_01() || !tmpres_state_h_79_V_fu_9305_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_335.read()) + sc_biguint<18>(tmpres_state_h_79_V_fu_9305_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_7_V_fu_10124_p2() {
    inputacc_h_7_V_fu_10124_p2 = (!call_ret4_reg_20465_263.read().is_01() || !tmpres_state_h_7_V_fu_8153_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_263.read()) + sc_biguint<18>(tmpres_state_h_7_V_fu_8153_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_80_V_fu_10562_p2() {
    inputacc_h_80_V_fu_10562_p2 = (!call_ret4_reg_20465_336.read().is_01() || !tmpres_state_h_80_V_fu_9321_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_336.read()) + sc_biguint<18>(tmpres_state_h_80_V_fu_9321_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_81_V_fu_10568_p2() {
    inputacc_h_81_V_fu_10568_p2 = (!call_ret4_reg_20465_337.read().is_01() || !trunc_ln_fu_9337_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_337.read()) + sc_biguint<18>(trunc_ln_fu_9337_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_82_V_fu_10574_p2() {
    inputacc_h_82_V_fu_10574_p2 = (!call_ret4_reg_20465_338.read().is_01() || !trunc_ln708_5_fu_9353_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_338.read()) + sc_biguint<18>(trunc_ln708_5_fu_9353_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_83_V_fu_10580_p2() {
    inputacc_h_83_V_fu_10580_p2 = (!call_ret4_reg_20465_339.read().is_01() || !trunc_ln708_6_fu_9369_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_339.read()) + sc_biguint<18>(trunc_ln708_6_fu_9369_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_84_V_fu_10586_p2() {
    inputacc_h_84_V_fu_10586_p2 = (!call_ret4_reg_20465_340.read().is_01() || !trunc_ln708_7_fu_9385_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_340.read()) + sc_biguint<18>(trunc_ln708_7_fu_9385_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_85_V_fu_10592_p2() {
    inputacc_h_85_V_fu_10592_p2 = (!call_ret4_reg_20465_341.read().is_01() || !trunc_ln708_8_fu_9401_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_341.read()) + sc_biguint<18>(trunc_ln708_8_fu_9401_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_86_V_fu_10598_p2() {
    inputacc_h_86_V_fu_10598_p2 = (!call_ret4_reg_20465_342.read().is_01() || !trunc_ln708_9_fu_9417_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_342.read()) + sc_biguint<18>(trunc_ln708_9_fu_9417_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_87_V_fu_10604_p2() {
    inputacc_h_87_V_fu_10604_p2 = (!call_ret4_reg_20465_343.read().is_01() || !trunc_ln708_s_fu_9433_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_343.read()) + sc_biguint<18>(trunc_ln708_s_fu_9433_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_88_V_fu_10610_p2() {
    inputacc_h_88_V_fu_10610_p2 = (!call_ret4_reg_20465_344.read().is_01() || !trunc_ln708_1_fu_9449_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_344.read()) + sc_biguint<18>(trunc_ln708_1_fu_9449_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_89_V_fu_10616_p2() {
    inputacc_h_89_V_fu_10616_p2 = (!call_ret4_reg_20465_345.read().is_01() || !trunc_ln708_2_fu_9465_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_345.read()) + sc_biguint<18>(trunc_ln708_2_fu_9465_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_8_V_fu_10130_p2() {
    inputacc_h_8_V_fu_10130_p2 = (!call_ret4_reg_20465_264.read().is_01() || !tmpres_state_h_8_V_fu_8169_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_264.read()) + sc_biguint<18>(tmpres_state_h_8_V_fu_8169_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_90_V_fu_10622_p2() {
    inputacc_h_90_V_fu_10622_p2 = (!call_ret4_reg_20465_346.read().is_01() || !trunc_ln708_3_fu_9481_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_346.read()) + sc_biguint<18>(trunc_ln708_3_fu_9481_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_91_V_fu_10628_p2() {
    inputacc_h_91_V_fu_10628_p2 = (!call_ret4_reg_20465_347.read().is_01() || !trunc_ln708_4_fu_9497_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_347.read()) + sc_biguint<18>(trunc_ln708_4_fu_9497_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_92_V_fu_10634_p2() {
    inputacc_h_92_V_fu_10634_p2 = (!call_ret4_reg_20465_348.read().is_01() || !trunc_ln708_10_fu_9513_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_348.read()) + sc_biguint<18>(trunc_ln708_10_fu_9513_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_93_V_fu_10640_p2() {
    inputacc_h_93_V_fu_10640_p2 = (!call_ret4_reg_20465_349.read().is_01() || !trunc_ln708_11_fu_9529_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_349.read()) + sc_biguint<18>(trunc_ln708_11_fu_9529_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_94_V_fu_10646_p2() {
    inputacc_h_94_V_fu_10646_p2 = (!call_ret4_reg_20465_350.read().is_01() || !trunc_ln708_12_fu_9545_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_350.read()) + sc_biguint<18>(trunc_ln708_12_fu_9545_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_95_V_fu_10652_p2() {
    inputacc_h_95_V_fu_10652_p2 = (!call_ret4_reg_20465_351.read().is_01() || !trunc_ln708_13_fu_9561_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_351.read()) + sc_biguint<18>(trunc_ln708_13_fu_9561_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_96_V_fu_10658_p2() {
    inputacc_h_96_V_fu_10658_p2 = (!call_ret4_reg_20465_352.read().is_01() || !trunc_ln708_14_fu_9577_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_352.read()) + sc_biguint<18>(trunc_ln708_14_fu_9577_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_97_V_fu_10664_p2() {
    inputacc_h_97_V_fu_10664_p2 = (!call_ret4_reg_20465_353.read().is_01() || !trunc_ln708_15_fu_9593_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_353.read()) + sc_biguint<18>(trunc_ln708_15_fu_9593_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_98_V_fu_10670_p2() {
    inputacc_h_98_V_fu_10670_p2 = (!call_ret4_reg_20465_354.read().is_01() || !trunc_ln708_16_fu_9609_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_354.read()) + sc_biguint<18>(trunc_ln708_16_fu_9609_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_99_V_fu_10676_p2() {
    inputacc_h_99_V_fu_10676_p2 = (!call_ret4_reg_20465_355.read().is_01() || !trunc_ln708_17_fu_9625_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_355.read()) + sc_biguint<18>(trunc_ln708_17_fu_9625_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_h_9_V_fu_10136_p2() {
    inputacc_h_9_V_fu_10136_p2 = (!call_ret4_reg_20465_265.read().is_01() || !tmpres_state_h_9_V_fu_8185_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(call_ret4_reg_20465_265.read()) + sc_biguint<18>(tmpres_state_h_9_V_fu_8185_p4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_0_V_fu_5090_p2() {
    inputacc_zr_0_V_fu_5090_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_0.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_0.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_0.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_0.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_100_V_fu_5690_p2() {
    inputacc_zr_100_V_fu_5690_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_100.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_100.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_100.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_100.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_101_V_fu_5696_p2() {
    inputacc_zr_101_V_fu_5696_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_101.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_101.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_101.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_101.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_102_V_fu_5702_p2() {
    inputacc_zr_102_V_fu_5702_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_102.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_102.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_102.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_102.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_103_V_fu_5708_p2() {
    inputacc_zr_103_V_fu_5708_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_103.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_103.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_103.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_103.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_104_V_fu_5714_p2() {
    inputacc_zr_104_V_fu_5714_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_104.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_104.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_104.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_104.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_105_V_fu_5720_p2() {
    inputacc_zr_105_V_fu_5720_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_105.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_105.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_105.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_105.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_106_V_fu_5726_p2() {
    inputacc_zr_106_V_fu_5726_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_106.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_106.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_106.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_106.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_107_V_fu_5732_p2() {
    inputacc_zr_107_V_fu_5732_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_107.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_107.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_107.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_107.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_108_V_fu_5738_p2() {
    inputacc_zr_108_V_fu_5738_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_108.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_108.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_108.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_108.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_109_V_fu_5744_p2() {
    inputacc_zr_109_V_fu_5744_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_109.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_109.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_109.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_109.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_10_V_fu_5150_p2() {
    inputacc_zr_10_V_fu_5150_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_10.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_10.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_10.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_10.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_110_V_fu_5750_p2() {
    inputacc_zr_110_V_fu_5750_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_110.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_110.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_110.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_110.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_111_V_fu_5756_p2() {
    inputacc_zr_111_V_fu_5756_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_111.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_111.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_111.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_111.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_112_V_fu_5762_p2() {
    inputacc_zr_112_V_fu_5762_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_112.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_112.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_112.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_112.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_113_V_fu_5768_p2() {
    inputacc_zr_113_V_fu_5768_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_113.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_113.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_113.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_113.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_114_V_fu_5774_p2() {
    inputacc_zr_114_V_fu_5774_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_114.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_114.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_114.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_114.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_115_V_fu_5780_p2() {
    inputacc_zr_115_V_fu_5780_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_115.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_115.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_115.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_115.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_116_V_fu_5786_p2() {
    inputacc_zr_116_V_fu_5786_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_116.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_116.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_116.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_116.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_117_V_fu_5792_p2() {
    inputacc_zr_117_V_fu_5792_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_117.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_117.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_117.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_117.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_118_V_fu_5798_p2() {
    inputacc_zr_118_V_fu_5798_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_118.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_118.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_118.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_118.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_119_V_fu_5804_p2() {
    inputacc_zr_119_V_fu_5804_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_119.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_119.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_119.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_119.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_11_V_fu_5156_p2() {
    inputacc_zr_11_V_fu_5156_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_11.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_11.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_11.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_11.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_120_V_fu_5810_p2() {
    inputacc_zr_120_V_fu_5810_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_120.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_120.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_120.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_120.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_121_V_fu_5816_p2() {
    inputacc_zr_121_V_fu_5816_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_121.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_121.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_121.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_121.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_122_V_fu_5822_p2() {
    inputacc_zr_122_V_fu_5822_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_122.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_122.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_122.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_122.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_123_V_fu_5828_p2() {
    inputacc_zr_123_V_fu_5828_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_123.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_123.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_123.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_123.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_124_V_fu_5834_p2() {
    inputacc_zr_124_V_fu_5834_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_124.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_124.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_124.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_124.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_125_V_fu_5840_p2() {
    inputacc_zr_125_V_fu_5840_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_125.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_125.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_125.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_125.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_126_V_fu_5846_p2() {
    inputacc_zr_126_V_fu_5846_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_126.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_126.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_126.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_126.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_127_V_fu_5852_p2() {
    inputacc_zr_127_V_fu_5852_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_127.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_127.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_127.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_127.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_128_V_fu_5858_p2() {
    inputacc_zr_128_V_fu_5858_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_128.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_128.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_128.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_128.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_129_V_fu_5864_p2() {
    inputacc_zr_129_V_fu_5864_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_129.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_129.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_129.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_129.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_12_V_fu_5162_p2() {
    inputacc_zr_12_V_fu_5162_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_12.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_12.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_12.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_12.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_130_V_fu_5870_p2() {
    inputacc_zr_130_V_fu_5870_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_130.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_130.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_130.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_130.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_131_V_fu_5876_p2() {
    inputacc_zr_131_V_fu_5876_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_131.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_131.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_131.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_131.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_132_V_fu_5882_p2() {
    inputacc_zr_132_V_fu_5882_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_132.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_132.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_132.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_132.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_133_V_fu_5888_p2() {
    inputacc_zr_133_V_fu_5888_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_133.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_133.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_133.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_133.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_134_V_fu_5894_p2() {
    inputacc_zr_134_V_fu_5894_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_134.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_134.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_134.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_134.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_135_V_fu_5900_p2() {
    inputacc_zr_135_V_fu_5900_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_135.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_135.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_135.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_135.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_136_V_fu_5906_p2() {
    inputacc_zr_136_V_fu_5906_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_136.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_136.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_136.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_136.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_137_V_fu_5912_p2() {
    inputacc_zr_137_V_fu_5912_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_137.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_137.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_137.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_137.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_138_V_fu_5918_p2() {
    inputacc_zr_138_V_fu_5918_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_138.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_138.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_138.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_138.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_139_V_fu_5924_p2() {
    inputacc_zr_139_V_fu_5924_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_139.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_139.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_139.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_139.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_13_V_fu_5168_p2() {
    inputacc_zr_13_V_fu_5168_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_13.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_13.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_13.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_13.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_140_V_fu_5930_p2() {
    inputacc_zr_140_V_fu_5930_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_140.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_140.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_140.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_140.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_141_V_fu_5936_p2() {
    inputacc_zr_141_V_fu_5936_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_141.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_141.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_141.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_141.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_142_V_fu_5942_p2() {
    inputacc_zr_142_V_fu_5942_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_142.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_142.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_142.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_142.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_143_V_fu_5948_p2() {
    inputacc_zr_143_V_fu_5948_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_143.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_143.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_143.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_143.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_144_V_fu_5954_p2() {
    inputacc_zr_144_V_fu_5954_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_144.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_144.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_144.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_144.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_145_V_fu_5960_p2() {
    inputacc_zr_145_V_fu_5960_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_145.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_145.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_145.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_145.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_146_V_fu_5966_p2() {
    inputacc_zr_146_V_fu_5966_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_146.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_146.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_146.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_146.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_147_V_fu_5972_p2() {
    inputacc_zr_147_V_fu_5972_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_147.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_147.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_147.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_147.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_148_V_fu_5978_p2() {
    inputacc_zr_148_V_fu_5978_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_148.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_148.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_148.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_148.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_149_V_fu_5984_p2() {
    inputacc_zr_149_V_fu_5984_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_149.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_149.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_149.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_149.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_14_V_fu_5174_p2() {
    inputacc_zr_14_V_fu_5174_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_14.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_14.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_14.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_14.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_150_V_fu_5990_p2() {
    inputacc_zr_150_V_fu_5990_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_150.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_150.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_150.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_150.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_151_V_fu_5996_p2() {
    inputacc_zr_151_V_fu_5996_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_151.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_151.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_151.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_151.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_152_V_fu_6002_p2() {
    inputacc_zr_152_V_fu_6002_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_152.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_152.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_152.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_152.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_153_V_fu_6008_p2() {
    inputacc_zr_153_V_fu_6008_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_153.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_153.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_153.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_153.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_154_V_fu_6014_p2() {
    inputacc_zr_154_V_fu_6014_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_154.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_154.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_154.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_154.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_155_V_fu_6020_p2() {
    inputacc_zr_155_V_fu_6020_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_155.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_155.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_155.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_155.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_156_V_fu_6026_p2() {
    inputacc_zr_156_V_fu_6026_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_156.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_156.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_156.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_156.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_157_V_fu_6032_p2() {
    inputacc_zr_157_V_fu_6032_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_157.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_157.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_157.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_157.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_158_V_fu_6038_p2() {
    inputacc_zr_158_V_fu_6038_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_158.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_158.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_158.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_158.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_159_V_fu_6044_p2() {
    inputacc_zr_159_V_fu_6044_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_159.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_159.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_159.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_159.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_15_V_fu_5180_p2() {
    inputacc_zr_15_V_fu_5180_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_15.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_15.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_15.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_15.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_160_V_fu_6050_p2() {
    inputacc_zr_160_V_fu_6050_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_160.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_160.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_160.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_160.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_161_V_fu_6056_p2() {
    inputacc_zr_161_V_fu_6056_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_161.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_161.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_161.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_161.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_162_V_fu_6062_p2() {
    inputacc_zr_162_V_fu_6062_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_162.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_162.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_162.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_162.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_163_V_fu_6068_p2() {
    inputacc_zr_163_V_fu_6068_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_163.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_163.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_163.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_163.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_164_V_fu_6074_p2() {
    inputacc_zr_164_V_fu_6074_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_164.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_164.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_164.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_164.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_165_V_fu_6080_p2() {
    inputacc_zr_165_V_fu_6080_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_165.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_165.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_165.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_165.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_166_V_fu_6086_p2() {
    inputacc_zr_166_V_fu_6086_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_166.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_166.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_166.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_166.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_167_V_fu_6092_p2() {
    inputacc_zr_167_V_fu_6092_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_167.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_167.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_167.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_167.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_168_V_fu_6098_p2() {
    inputacc_zr_168_V_fu_6098_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_168.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_168.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_168.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_168.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_169_V_fu_6104_p2() {
    inputacc_zr_169_V_fu_6104_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_169.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_169.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_169.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_169.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_16_V_fu_5186_p2() {
    inputacc_zr_16_V_fu_5186_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_16.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_16.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_16.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_16.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_170_V_fu_6110_p2() {
    inputacc_zr_170_V_fu_6110_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_170.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_170.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_170.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_170.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_171_V_fu_6116_p2() {
    inputacc_zr_171_V_fu_6116_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_171.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_171.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_171.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_171.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_172_V_fu_6122_p2() {
    inputacc_zr_172_V_fu_6122_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_172.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_172.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_172.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_172.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_173_V_fu_6128_p2() {
    inputacc_zr_173_V_fu_6128_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_173.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_173.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_173.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_173.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_174_V_fu_6134_p2() {
    inputacc_zr_174_V_fu_6134_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_174.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_174.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_174.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_174.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_175_V_fu_6140_p2() {
    inputacc_zr_175_V_fu_6140_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_175.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_175.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_175.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_175.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_176_V_fu_6146_p2() {
    inputacc_zr_176_V_fu_6146_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_176.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_176.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_176.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_176.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_177_V_fu_6152_p2() {
    inputacc_zr_177_V_fu_6152_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_177.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_177.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_177.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_177.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_178_V_fu_6158_p2() {
    inputacc_zr_178_V_fu_6158_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_178.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_178.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_178.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_178.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_179_V_fu_6164_p2() {
    inputacc_zr_179_V_fu_6164_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_179.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_179.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_179.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_179.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_17_V_fu_5192_p2() {
    inputacc_zr_17_V_fu_5192_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_17.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_17.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_17.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_17.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_180_V_fu_6170_p2() {
    inputacc_zr_180_V_fu_6170_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_180.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_180.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_180.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_180.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_181_V_fu_6176_p2() {
    inputacc_zr_181_V_fu_6176_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_181.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_181.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_181.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_181.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_182_V_fu_6182_p2() {
    inputacc_zr_182_V_fu_6182_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_182.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_182.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_182.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_182.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_183_V_fu_6188_p2() {
    inputacc_zr_183_V_fu_6188_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_183.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_183.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_183.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_183.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_184_V_fu_6194_p2() {
    inputacc_zr_184_V_fu_6194_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_184.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_184.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_184.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_184.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_185_V_fu_6200_p2() {
    inputacc_zr_185_V_fu_6200_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_185.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_185.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_185.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_185.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_186_V_fu_6206_p2() {
    inputacc_zr_186_V_fu_6206_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_186.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_186.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_186.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_186.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_187_V_fu_6212_p2() {
    inputacc_zr_187_V_fu_6212_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_187.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_187.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_187.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_187.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_188_V_fu_6218_p2() {
    inputacc_zr_188_V_fu_6218_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_188.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_188.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_188.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_188.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_189_V_fu_6224_p2() {
    inputacc_zr_189_V_fu_6224_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_189.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_189.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_189.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_189.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_18_V_fu_5198_p2() {
    inputacc_zr_18_V_fu_5198_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_18.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_18.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_18.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_18.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_190_V_fu_6230_p2() {
    inputacc_zr_190_V_fu_6230_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_190.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_190.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_190.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_190.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_191_V_fu_6236_p2() {
    inputacc_zr_191_V_fu_6236_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_191.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_191.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_191.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_191.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_192_V_fu_6242_p2() {
    inputacc_zr_192_V_fu_6242_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_192.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_192.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_192.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_192.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_193_V_fu_6248_p2() {
    inputacc_zr_193_V_fu_6248_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_193.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_193.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_193.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_193.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_194_V_fu_6254_p2() {
    inputacc_zr_194_V_fu_6254_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_194.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_194.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_194.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_194.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_195_V_fu_6260_p2() {
    inputacc_zr_195_V_fu_6260_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_195.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_195.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_195.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_195.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_196_V_fu_6266_p2() {
    inputacc_zr_196_V_fu_6266_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_196.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_196.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_196.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_196.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_197_V_fu_6272_p2() {
    inputacc_zr_197_V_fu_6272_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_197.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_197.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_197.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_197.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_198_V_fu_6278_p2() {
    inputacc_zr_198_V_fu_6278_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_198.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_198.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_198.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_198.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_199_V_fu_6284_p2() {
    inputacc_zr_199_V_fu_6284_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_199.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_199.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_199.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_199.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_19_V_fu_5204_p2() {
    inputacc_zr_19_V_fu_5204_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_19.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_19.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_19.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_19.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_1_V_fu_5096_p2() {
    inputacc_zr_1_V_fu_5096_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_1.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_1.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_1.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_200_V_fu_6290_p2() {
    inputacc_zr_200_V_fu_6290_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_200.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_200.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_200.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_200.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_201_V_fu_6296_p2() {
    inputacc_zr_201_V_fu_6296_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_201.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_201.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_201.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_201.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_202_V_fu_6302_p2() {
    inputacc_zr_202_V_fu_6302_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_202.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_202.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_202.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_202.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_203_V_fu_6308_p2() {
    inputacc_zr_203_V_fu_6308_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_203.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_203.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_203.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_203.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_204_V_fu_6314_p2() {
    inputacc_zr_204_V_fu_6314_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_204.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_204.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_204.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_204.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_205_V_fu_6320_p2() {
    inputacc_zr_205_V_fu_6320_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_205.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_205.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_205.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_205.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_206_V_fu_6326_p2() {
    inputacc_zr_206_V_fu_6326_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_206.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_206.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_206.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_206.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_207_V_fu_6332_p2() {
    inputacc_zr_207_V_fu_6332_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_207.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_207.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_207.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_207.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_208_V_fu_6338_p2() {
    inputacc_zr_208_V_fu_6338_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_208.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_208.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_208.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_208.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_209_V_fu_6344_p2() {
    inputacc_zr_209_V_fu_6344_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_209.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_209.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_209.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_209.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_20_V_fu_5210_p2() {
    inputacc_zr_20_V_fu_5210_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_20.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_20.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_20.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_20.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_210_V_fu_6350_p2() {
    inputacc_zr_210_V_fu_6350_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_210.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_210.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_210.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_210.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_211_V_fu_6356_p2() {
    inputacc_zr_211_V_fu_6356_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_211.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_211.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_211.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_211.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_212_V_fu_6362_p2() {
    inputacc_zr_212_V_fu_6362_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_212.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_212.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_212.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_212.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_213_V_fu_6368_p2() {
    inputacc_zr_213_V_fu_6368_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_213.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_213.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_213.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_213.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_214_V_fu_6374_p2() {
    inputacc_zr_214_V_fu_6374_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_214.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_214.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_214.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_214.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_215_V_fu_6380_p2() {
    inputacc_zr_215_V_fu_6380_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_215.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_215.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_215.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_215.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_216_V_fu_6386_p2() {
    inputacc_zr_216_V_fu_6386_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_216.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_216.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_216.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_216.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_217_V_fu_6392_p2() {
    inputacc_zr_217_V_fu_6392_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_217.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_217.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_217.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_217.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_218_V_fu_6398_p2() {
    inputacc_zr_218_V_fu_6398_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_218.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_218.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_218.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_218.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_219_V_fu_6404_p2() {
    inputacc_zr_219_V_fu_6404_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_219.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_219.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_219.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_219.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_21_V_fu_5216_p2() {
    inputacc_zr_21_V_fu_5216_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_21.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_21.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_21.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_21.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_220_V_fu_6410_p2() {
    inputacc_zr_220_V_fu_6410_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_220.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_220.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_220.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_220.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_221_V_fu_6416_p2() {
    inputacc_zr_221_V_fu_6416_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_221.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_221.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_221.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_221.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_222_V_fu_6422_p2() {
    inputacc_zr_222_V_fu_6422_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_222.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_222.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_222.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_222.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_223_V_fu_6428_p2() {
    inputacc_zr_223_V_fu_6428_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_223.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_223.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_223.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_223.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_224_V_fu_6434_p2() {
    inputacc_zr_224_V_fu_6434_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_224.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_224.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_224.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_224.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_225_V_fu_6440_p2() {
    inputacc_zr_225_V_fu_6440_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_225.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_225.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_225.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_225.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_226_V_fu_6446_p2() {
    inputacc_zr_226_V_fu_6446_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_226.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_226.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_226.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_226.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_227_V_fu_6452_p2() {
    inputacc_zr_227_V_fu_6452_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_227.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_227.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_227.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_227.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_228_V_fu_6458_p2() {
    inputacc_zr_228_V_fu_6458_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_228.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_228.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_228.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_228.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_229_V_fu_6464_p2() {
    inputacc_zr_229_V_fu_6464_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_229.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_229.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_229.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_229.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_22_V_fu_5222_p2() {
    inputacc_zr_22_V_fu_5222_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_22.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_22.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_22.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_22.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_230_V_fu_6470_p2() {
    inputacc_zr_230_V_fu_6470_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_230.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_230.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_230.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_230.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_231_V_fu_6476_p2() {
    inputacc_zr_231_V_fu_6476_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_231.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_231.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_231.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_231.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_232_V_fu_6482_p2() {
    inputacc_zr_232_V_fu_6482_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_232.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_232.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_232.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_232.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_233_V_fu_6488_p2() {
    inputacc_zr_233_V_fu_6488_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_233.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_233.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_233.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_233.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_234_V_fu_6494_p2() {
    inputacc_zr_234_V_fu_6494_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_234.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_234.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_234.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_234.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_235_V_fu_6500_p2() {
    inputacc_zr_235_V_fu_6500_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_235.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_235.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_235.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_235.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_236_V_fu_6506_p2() {
    inputacc_zr_236_V_fu_6506_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_236.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_236.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_236.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_236.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_237_V_fu_6512_p2() {
    inputacc_zr_237_V_fu_6512_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_237.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_237.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_237.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_237.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_238_V_fu_6518_p2() {
    inputacc_zr_238_V_fu_6518_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_238.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_238.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_238.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_238.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_239_V_fu_6524_p2() {
    inputacc_zr_239_V_fu_6524_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_239.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_239.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_239.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_239.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_23_V_fu_5228_p2() {
    inputacc_zr_23_V_fu_5228_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_23.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_23.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_23.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_23.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_240_V_fu_6530_p2() {
    inputacc_zr_240_V_fu_6530_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_240.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_240.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_240.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_240.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_241_V_fu_6536_p2() {
    inputacc_zr_241_V_fu_6536_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_241.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_241.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_241.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_241.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_242_V_fu_6542_p2() {
    inputacc_zr_242_V_fu_6542_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_242.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_242.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_242.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_242.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_243_V_fu_6548_p2() {
    inputacc_zr_243_V_fu_6548_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_243.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_243.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_243.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_243.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_244_V_fu_6554_p2() {
    inputacc_zr_244_V_fu_6554_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_244.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_244.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_244.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_244.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_245_V_fu_6560_p2() {
    inputacc_zr_245_V_fu_6560_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_245.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_245.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_245.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_245.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_246_V_fu_6566_p2() {
    inputacc_zr_246_V_fu_6566_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_246.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_246.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_246.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_246.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_247_V_fu_6572_p2() {
    inputacc_zr_247_V_fu_6572_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_247.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_247.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_247.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_247.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_248_V_fu_6578_p2() {
    inputacc_zr_248_V_fu_6578_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_248.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_248.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_248.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_248.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_249_V_fu_6584_p2() {
    inputacc_zr_249_V_fu_6584_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_249.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_249.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_249.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_249.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_24_V_fu_5234_p2() {
    inputacc_zr_24_V_fu_5234_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_24.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_24.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_24.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_24.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_250_V_fu_6590_p2() {
    inputacc_zr_250_V_fu_6590_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_250.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_250.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_250.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_250.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_251_V_fu_6596_p2() {
    inputacc_zr_251_V_fu_6596_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_251.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_251.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_251.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_251.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_252_V_fu_6602_p2() {
    inputacc_zr_252_V_fu_6602_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_252.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_252.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_252.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_252.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_253_V_fu_6608_p2() {
    inputacc_zr_253_V_fu_6608_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_253.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_253.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_253.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_253.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_254_V_fu_6614_p2() {
    inputacc_zr_254_V_fu_6614_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_254.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_254.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_254.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_254.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_255_V_fu_6620_p2() {
    inputacc_zr_255_V_fu_6620_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_255.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_255.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_255.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_255.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_25_V_fu_5240_p2() {
    inputacc_zr_25_V_fu_5240_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_25.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_25.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_25.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_25.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_26_V_fu_5246_p2() {
    inputacc_zr_26_V_fu_5246_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_26.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_26.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_26.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_26.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_27_V_fu_5252_p2() {
    inputacc_zr_27_V_fu_5252_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_27.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_27.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_27.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_27.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_28_V_fu_5258_p2() {
    inputacc_zr_28_V_fu_5258_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_28.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_28.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_28.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_28.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_29_V_fu_5264_p2() {
    inputacc_zr_29_V_fu_5264_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_29.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_29.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_29.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_29.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_2_V_fu_5102_p2() {
    inputacc_zr_2_V_fu_5102_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_2.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_2.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_2.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_30_V_fu_5270_p2() {
    inputacc_zr_30_V_fu_5270_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_30.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_30.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_30.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_30.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_31_V_fu_5276_p2() {
    inputacc_zr_31_V_fu_5276_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_31.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_31.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_31.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_31.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_32_V_fu_5282_p2() {
    inputacc_zr_32_V_fu_5282_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_32.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_32.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_32.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_32.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_33_V_fu_5288_p2() {
    inputacc_zr_33_V_fu_5288_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_33.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_33.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_33.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_33.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_34_V_fu_5294_p2() {
    inputacc_zr_34_V_fu_5294_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_34.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_34.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_34.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_34.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_35_V_fu_5300_p2() {
    inputacc_zr_35_V_fu_5300_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_35.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_35.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_35.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_35.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_36_V_fu_5306_p2() {
    inputacc_zr_36_V_fu_5306_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_36.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_36.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_36.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_36.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_37_V_fu_5312_p2() {
    inputacc_zr_37_V_fu_5312_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_37.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_37.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_37.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_37.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_38_V_fu_5318_p2() {
    inputacc_zr_38_V_fu_5318_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_38.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_38.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_38.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_38.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_39_V_fu_5324_p2() {
    inputacc_zr_39_V_fu_5324_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_39.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_39.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_39.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_39.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_3_V_fu_5108_p2() {
    inputacc_zr_3_V_fu_5108_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_3.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_3.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_3.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_3.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_40_V_fu_5330_p2() {
    inputacc_zr_40_V_fu_5330_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_40.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_40.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_40.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_40.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_41_V_fu_5336_p2() {
    inputacc_zr_41_V_fu_5336_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_41.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_41.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_41.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_41.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_42_V_fu_5342_p2() {
    inputacc_zr_42_V_fu_5342_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_42.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_42.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_42.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_42.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_43_V_fu_5348_p2() {
    inputacc_zr_43_V_fu_5348_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_43.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_43.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_43.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_43.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_44_V_fu_5354_p2() {
    inputacc_zr_44_V_fu_5354_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_44.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_44.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_44.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_44.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_45_V_fu_5360_p2() {
    inputacc_zr_45_V_fu_5360_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_45.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_45.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_45.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_45.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_46_V_fu_5366_p2() {
    inputacc_zr_46_V_fu_5366_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_46.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_46.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_46.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_46.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_47_V_fu_5372_p2() {
    inputacc_zr_47_V_fu_5372_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_47.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_47.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_47.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_47.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_48_V_fu_5378_p2() {
    inputacc_zr_48_V_fu_5378_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_48.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_48.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_48.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_48.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_49_V_fu_5384_p2() {
    inputacc_zr_49_V_fu_5384_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_49.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_49.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_49.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_49.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_4_V_fu_5114_p2() {
    inputacc_zr_4_V_fu_5114_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_4.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_4.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_4.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_50_V_fu_5390_p2() {
    inputacc_zr_50_V_fu_5390_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_50.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_50.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_50.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_50.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_51_V_fu_5396_p2() {
    inputacc_zr_51_V_fu_5396_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_51.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_51.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_51.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_51.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_52_V_fu_5402_p2() {
    inputacc_zr_52_V_fu_5402_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_52.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_52.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_52.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_52.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_53_V_fu_5408_p2() {
    inputacc_zr_53_V_fu_5408_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_53.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_53.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_53.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_53.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_54_V_fu_5414_p2() {
    inputacc_zr_54_V_fu_5414_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_54.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_54.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_54.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_54.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_55_V_fu_5420_p2() {
    inputacc_zr_55_V_fu_5420_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_55.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_55.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_55.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_55.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_56_V_fu_5426_p2() {
    inputacc_zr_56_V_fu_5426_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_56.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_56.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_56.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_56.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_57_V_fu_5432_p2() {
    inputacc_zr_57_V_fu_5432_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_57.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_57.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_57.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_57.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_58_V_fu_5438_p2() {
    inputacc_zr_58_V_fu_5438_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_58.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_58.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_58.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_58.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_59_V_fu_5444_p2() {
    inputacc_zr_59_V_fu_5444_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_59.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_59.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_59.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_59.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_5_V_fu_5120_p2() {
    inputacc_zr_5_V_fu_5120_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_5.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_5.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_5.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_5.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_60_V_fu_5450_p2() {
    inputacc_zr_60_V_fu_5450_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_60.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_60.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_60.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_60.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_61_V_fu_5456_p2() {
    inputacc_zr_61_V_fu_5456_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_61.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_61.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_61.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_61.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_62_V_fu_5462_p2() {
    inputacc_zr_62_V_fu_5462_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_62.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_62.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_62.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_62.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_63_V_fu_5468_p2() {
    inputacc_zr_63_V_fu_5468_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_63.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_63.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_63.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_63.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_64_V_fu_5474_p2() {
    inputacc_zr_64_V_fu_5474_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_64.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_64.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_64.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_64.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_65_V_fu_5480_p2() {
    inputacc_zr_65_V_fu_5480_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_65.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_65.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_65.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_65.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_66_V_fu_5486_p2() {
    inputacc_zr_66_V_fu_5486_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_66.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_66.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_66.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_66.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_67_V_fu_5492_p2() {
    inputacc_zr_67_V_fu_5492_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_67.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_67.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_67.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_67.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_68_V_fu_5498_p2() {
    inputacc_zr_68_V_fu_5498_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_68.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_68.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_68.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_68.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_69_V_fu_5504_p2() {
    inputacc_zr_69_V_fu_5504_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_69.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_69.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_69.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_69.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_6_V_fu_5126_p2() {
    inputacc_zr_6_V_fu_5126_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_6.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_6.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_6.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_6.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_70_V_fu_5510_p2() {
    inputacc_zr_70_V_fu_5510_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_70.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_70.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_70.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_70.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_71_V_fu_5516_p2() {
    inputacc_zr_71_V_fu_5516_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_71.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_71.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_71.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_71.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_72_V_fu_5522_p2() {
    inputacc_zr_72_V_fu_5522_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_72.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_72.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_72.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_72.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_73_V_fu_5528_p2() {
    inputacc_zr_73_V_fu_5528_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_73.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_73.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_73.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_73.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_74_V_fu_5534_p2() {
    inputacc_zr_74_V_fu_5534_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_74.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_74.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_74.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_74.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_75_V_fu_5540_p2() {
    inputacc_zr_75_V_fu_5540_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_75.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_75.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_75.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_75.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_76_V_fu_5546_p2() {
    inputacc_zr_76_V_fu_5546_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_76.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_76.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_76.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_76.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_77_V_fu_5552_p2() {
    inputacc_zr_77_V_fu_5552_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_77.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_77.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_77.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_77.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_78_V_fu_5558_p2() {
    inputacc_zr_78_V_fu_5558_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_78.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_78.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_78.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_78.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_79_V_fu_5564_p2() {
    inputacc_zr_79_V_fu_5564_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_79.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_79.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_79.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_79.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_7_V_fu_5132_p2() {
    inputacc_zr_7_V_fu_5132_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_7.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_7.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_7.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_7.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_80_V_fu_5570_p2() {
    inputacc_zr_80_V_fu_5570_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_80.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_80.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_80.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_80.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_81_V_fu_5576_p2() {
    inputacc_zr_81_V_fu_5576_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_81.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_81.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_81.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_81.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_82_V_fu_5582_p2() {
    inputacc_zr_82_V_fu_5582_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_82.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_82.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_82.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_82.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_83_V_fu_5588_p2() {
    inputacc_zr_83_V_fu_5588_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_83.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_83.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_83.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_83.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_84_V_fu_5594_p2() {
    inputacc_zr_84_V_fu_5594_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_84.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_84.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_84.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_84.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_85_V_fu_5600_p2() {
    inputacc_zr_85_V_fu_5600_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_85.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_85.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_85.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_85.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_86_V_fu_5606_p2() {
    inputacc_zr_86_V_fu_5606_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_86.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_86.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_86.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_86.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_87_V_fu_5612_p2() {
    inputacc_zr_87_V_fu_5612_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_87.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_87.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_87.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_87.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_88_V_fu_5618_p2() {
    inputacc_zr_88_V_fu_5618_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_88.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_88.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_88.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_88.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_89_V_fu_5624_p2() {
    inputacc_zr_89_V_fu_5624_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_89.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_89.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_89.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_89.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_8_V_fu_5138_p2() {
    inputacc_zr_8_V_fu_5138_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_8.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_8.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_8.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_8.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_90_V_fu_5630_p2() {
    inputacc_zr_90_V_fu_5630_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_90.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_90.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_90.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_90.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_91_V_fu_5636_p2() {
    inputacc_zr_91_V_fu_5636_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_91.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_91.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_91.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_91.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_92_V_fu_5642_p2() {
    inputacc_zr_92_V_fu_5642_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_92.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_92.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_92.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_92.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_93_V_fu_5648_p2() {
    inputacc_zr_93_V_fu_5648_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_93.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_93.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_93.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_93.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_94_V_fu_5654_p2() {
    inputacc_zr_94_V_fu_5654_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_94.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_94.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_94.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_94.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_95_V_fu_5660_p2() {
    inputacc_zr_95_V_fu_5660_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_95.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_95.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_95.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_95.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_96_V_fu_5666_p2() {
    inputacc_zr_96_V_fu_5666_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_96.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_96.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_96.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_96.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_97_V_fu_5672_p2() {
    inputacc_zr_97_V_fu_5672_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_97.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_97.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_97.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_97.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_98_V_fu_5678_p2() {
    inputacc_zr_98_V_fu_5678_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_98.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_98.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_98.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_98.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_99_V_fu_5684_p2() {
    inputacc_zr_99_V_fu_5684_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_99.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_99.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_99.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_99.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_inputacc_zr_9_V_fu_5144_p2() {
    inputacc_zr_9_V_fu_5144_p2 = (!grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_9.read().is_01() || !grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_9.read().is_01())? sc_lv<18>(): (sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_718_ap_return_9.read()) + sc_biguint<18>(grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_322_ap_return_9.read()));
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_100_fu_17666_p0() {
    mul_ln1118_100_fu_17666_p0 =  (sc_lv<18>) (sext_ln1118_192_fu_9570_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_100_fu_17666_p1() {
    mul_ln1118_100_fu_17666_p1 =  (sc_lv<18>) (sext_ln1118_193_fu_9574_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_101_fu_17673_p0() {
    mul_ln1118_101_fu_17673_p0 =  (sc_lv<18>) (sext_ln1118_194_fu_9586_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_101_fu_17673_p1() {
    mul_ln1118_101_fu_17673_p1 =  (sc_lv<18>) (sext_ln1118_195_fu_9590_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_102_fu_17680_p0() {
    mul_ln1118_102_fu_17680_p0 =  (sc_lv<18>) (sext_ln1118_196_fu_9602_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_102_fu_17680_p1() {
    mul_ln1118_102_fu_17680_p1 =  (sc_lv<18>) (sext_ln1118_197_fu_9606_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_103_fu_17687_p0() {
    mul_ln1118_103_fu_17687_p0 =  (sc_lv<18>) (sext_ln1118_198_fu_9618_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_103_fu_17687_p1() {
    mul_ln1118_103_fu_17687_p1 =  (sc_lv<18>) (sext_ln1118_199_fu_9622_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_104_fu_17694_p0() {
    mul_ln1118_104_fu_17694_p0 =  (sc_lv<18>) (sext_ln1118_200_fu_9634_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_104_fu_17694_p1() {
    mul_ln1118_104_fu_17694_p1 =  (sc_lv<18>) (sext_ln1118_201_fu_9638_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_105_fu_17701_p0() {
    mul_ln1118_105_fu_17701_p0 =  (sc_lv<18>) (sext_ln1118_202_fu_9650_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_105_fu_17701_p1() {
    mul_ln1118_105_fu_17701_p1 =  (sc_lv<18>) (sext_ln1118_203_fu_9654_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_106_fu_17708_p0() {
    mul_ln1118_106_fu_17708_p0 =  (sc_lv<18>) (sext_ln1118_204_fu_9666_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_106_fu_17708_p1() {
    mul_ln1118_106_fu_17708_p1 =  (sc_lv<18>) (sext_ln1118_205_fu_9670_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_107_fu_17715_p0() {
    mul_ln1118_107_fu_17715_p0 =  (sc_lv<18>) (sext_ln1118_206_fu_9682_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_107_fu_17715_p1() {
    mul_ln1118_107_fu_17715_p1 =  (sc_lv<18>) (sext_ln1118_207_fu_9686_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_108_fu_17722_p0() {
    mul_ln1118_108_fu_17722_p0 =  (sc_lv<18>) (sext_ln1118_208_fu_9698_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_108_fu_17722_p1() {
    mul_ln1118_108_fu_17722_p1 =  (sc_lv<18>) (sext_ln1118_209_fu_9702_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_109_fu_17729_p0() {
    mul_ln1118_109_fu_17729_p0 =  (sc_lv<18>) (sext_ln1118_210_fu_9714_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_109_fu_17729_p1() {
    mul_ln1118_109_fu_17729_p1 =  (sc_lv<18>) (sext_ln1118_211_fu_9718_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_10_fu_17036_p0() {
    mul_ln1118_10_fu_17036_p0 =  (sc_lv<18>) (sext_ln1118_12_fu_8130_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_10_fu_17036_p1() {
    mul_ln1118_10_fu_17036_p1 =  (sc_lv<18>) (sext_ln1118_13_fu_8134_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_110_fu_17736_p0() {
    mul_ln1118_110_fu_17736_p0 =  (sc_lv<18>) (sext_ln1118_212_fu_9730_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_110_fu_17736_p1() {
    mul_ln1118_110_fu_17736_p1 =  (sc_lv<18>) (sext_ln1118_213_fu_9734_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_111_fu_17743_p0() {
    mul_ln1118_111_fu_17743_p0 =  (sc_lv<18>) (sext_ln1118_214_fu_9746_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_111_fu_17743_p1() {
    mul_ln1118_111_fu_17743_p1 =  (sc_lv<18>) (sext_ln1118_215_fu_9750_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_112_fu_17750_p0() {
    mul_ln1118_112_fu_17750_p0 =  (sc_lv<18>) (sext_ln1118_216_fu_9762_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_112_fu_17750_p1() {
    mul_ln1118_112_fu_17750_p1 =  (sc_lv<18>) (sext_ln1118_217_fu_9766_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_113_fu_17757_p0() {
    mul_ln1118_113_fu_17757_p0 =  (sc_lv<18>) (sext_ln1118_218_fu_9778_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_113_fu_17757_p1() {
    mul_ln1118_113_fu_17757_p1 =  (sc_lv<18>) (sext_ln1118_219_fu_9782_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_114_fu_17764_p0() {
    mul_ln1118_114_fu_17764_p0 =  (sc_lv<18>) (sext_ln1118_220_fu_9794_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_114_fu_17764_p1() {
    mul_ln1118_114_fu_17764_p1 =  (sc_lv<18>) (sext_ln1118_221_fu_9798_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_115_fu_17771_p0() {
    mul_ln1118_115_fu_17771_p0 =  (sc_lv<18>) (sext_ln1118_222_fu_9810_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_115_fu_17771_p1() {
    mul_ln1118_115_fu_17771_p1 =  (sc_lv<18>) (sext_ln1118_223_fu_9814_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_116_fu_17778_p0() {
    mul_ln1118_116_fu_17778_p0 =  (sc_lv<18>) (sext_ln1118_224_fu_9826_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_116_fu_17778_p1() {
    mul_ln1118_116_fu_17778_p1 =  (sc_lv<18>) (sext_ln1118_225_fu_9830_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_117_fu_17785_p0() {
    mul_ln1118_117_fu_17785_p0 =  (sc_lv<18>) (sext_ln1118_226_fu_9842_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_117_fu_17785_p1() {
    mul_ln1118_117_fu_17785_p1 =  (sc_lv<18>) (sext_ln1118_227_fu_9846_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_118_fu_17792_p0() {
    mul_ln1118_118_fu_17792_p0 =  (sc_lv<18>) (sext_ln1118_228_fu_9858_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_118_fu_17792_p1() {
    mul_ln1118_118_fu_17792_p1 =  (sc_lv<18>) (sext_ln1118_229_fu_9862_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_119_fu_17799_p0() {
    mul_ln1118_119_fu_17799_p0 =  (sc_lv<18>) (sext_ln1118_230_fu_9874_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_119_fu_17799_p1() {
    mul_ln1118_119_fu_17799_p1 =  (sc_lv<18>) (sext_ln1118_231_fu_9878_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_11_fu_17043_p0() {
    mul_ln1118_11_fu_17043_p0 =  (sc_lv<18>) (sext_ln1118_14_fu_8146_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_11_fu_17043_p1() {
    mul_ln1118_11_fu_17043_p1 =  (sc_lv<18>) (sext_ln1118_15_fu_8150_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_120_fu_17806_p0() {
    mul_ln1118_120_fu_17806_p0 =  (sc_lv<18>) (sext_ln1118_232_fu_9890_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_120_fu_17806_p1() {
    mul_ln1118_120_fu_17806_p1 =  (sc_lv<18>) (sext_ln1118_233_fu_9894_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_121_fu_17813_p0() {
    mul_ln1118_121_fu_17813_p0 =  (sc_lv<18>) (sext_ln1118_234_fu_9906_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_121_fu_17813_p1() {
    mul_ln1118_121_fu_17813_p1 =  (sc_lv<18>) (sext_ln1118_235_fu_9910_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_122_fu_17820_p0() {
    mul_ln1118_122_fu_17820_p0 =  (sc_lv<18>) (sext_ln1118_236_fu_9922_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_122_fu_17820_p1() {
    mul_ln1118_122_fu_17820_p1 =  (sc_lv<18>) (sext_ln1118_237_fu_9926_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_123_fu_17827_p0() {
    mul_ln1118_123_fu_17827_p0 =  (sc_lv<18>) (sext_ln1118_238_fu_9938_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_123_fu_17827_p1() {
    mul_ln1118_123_fu_17827_p1 =  (sc_lv<18>) (sext_ln1118_239_fu_9942_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_124_fu_17834_p0() {
    mul_ln1118_124_fu_17834_p0 =  (sc_lv<18>) (sext_ln1118_240_fu_9954_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_124_fu_17834_p1() {
    mul_ln1118_124_fu_17834_p1 =  (sc_lv<18>) (sext_ln1118_241_fu_9958_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_125_fu_17841_p0() {
    mul_ln1118_125_fu_17841_p0 =  (sc_lv<18>) (sext_ln1118_242_fu_9970_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_125_fu_17841_p1() {
    mul_ln1118_125_fu_17841_p1 =  (sc_lv<18>) (sext_ln1118_243_fu_9974_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_126_fu_17848_p0() {
    mul_ln1118_126_fu_17848_p0 =  (sc_lv<18>) (sext_ln1118_244_fu_9986_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_126_fu_17848_p1() {
    mul_ln1118_126_fu_17848_p1 =  (sc_lv<18>) (sext_ln1118_245_fu_9990_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_127_fu_17855_p0() {
    mul_ln1118_127_fu_17855_p0 =  (sc_lv<18>) (sext_ln1118_246_fu_10002_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_127_fu_17855_p1() {
    mul_ln1118_127_fu_17855_p1 =  (sc_lv<18>) (sext_ln1118_247_fu_10006_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_128_fu_17862_p0() {
    mul_ln1118_128_fu_17862_p0 =  (sc_lv<18>) (sext_ln1118_248_fu_10018_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_128_fu_17862_p1() {
    mul_ln1118_128_fu_17862_p1 =  (sc_lv<18>) (sext_ln1118_249_fu_10022_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_129_fu_17869_p0() {
    mul_ln1118_129_fu_17869_p0 =  (sc_lv<18>) (sext_ln1118_250_fu_10034_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_129_fu_17869_p1() {
    mul_ln1118_129_fu_17869_p1 =  (sc_lv<18>) (sext_ln1118_251_fu_10038_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_12_fu_17050_p0() {
    mul_ln1118_12_fu_17050_p0 =  (sc_lv<18>) (sext_ln1118_16_fu_8162_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_12_fu_17050_p1() {
    mul_ln1118_12_fu_17050_p1 =  (sc_lv<18>) (sext_ln1118_17_fu_8166_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_130_fu_17876_p0() {
    mul_ln1118_130_fu_17876_p0 =  (sc_lv<18>) (sext_ln1118_252_fu_10050_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_130_fu_17876_p1() {
    mul_ln1118_130_fu_17876_p1 =  (sc_lv<18>) (sext_ln1118_253_fu_10054_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_131_fu_17883_p0() {
    mul_ln1118_131_fu_17883_p0 =  (sc_lv<18>) (sext_ln1118_254_fu_10066_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_131_fu_17883_p1() {
    mul_ln1118_131_fu_17883_p1 =  (sc_lv<18>) (sext_ln1118_255_fu_10070_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_13_fu_17057_p0() {
    mul_ln1118_13_fu_17057_p0 =  (sc_lv<18>) (sext_ln1118_18_fu_8178_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_13_fu_17057_p1() {
    mul_ln1118_13_fu_17057_p1 =  (sc_lv<18>) (sext_ln1118_19_fu_8182_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_14_fu_17064_p0() {
    mul_ln1118_14_fu_17064_p0 =  (sc_lv<18>) (sext_ln1118_20_fu_8194_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_14_fu_17064_p1() {
    mul_ln1118_14_fu_17064_p1 =  (sc_lv<18>) (sext_ln1118_21_fu_8198_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_15_fu_17071_p0() {
    mul_ln1118_15_fu_17071_p0 =  (sc_lv<18>) (sext_ln1118_22_fu_8210_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_15_fu_17071_p1() {
    mul_ln1118_15_fu_17071_p1 =  (sc_lv<18>) (sext_ln1118_23_fu_8214_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_16_fu_17078_p0() {
    mul_ln1118_16_fu_17078_p0 =  (sc_lv<18>) (sext_ln1118_24_fu_8226_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_16_fu_17078_p1() {
    mul_ln1118_16_fu_17078_p1 =  (sc_lv<18>) (sext_ln1118_25_fu_8230_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_17_fu_17085_p0() {
    mul_ln1118_17_fu_17085_p0 =  (sc_lv<18>) (sext_ln1118_26_fu_8242_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_17_fu_17085_p1() {
    mul_ln1118_17_fu_17085_p1 =  (sc_lv<18>) (sext_ln1118_27_fu_8246_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_18_fu_17092_p0() {
    mul_ln1118_18_fu_17092_p0 =  (sc_lv<18>) (sext_ln1118_28_fu_8258_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_18_fu_17092_p1() {
    mul_ln1118_18_fu_17092_p1 =  (sc_lv<18>) (sext_ln1118_29_fu_8262_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_19_fu_17099_p0() {
    mul_ln1118_19_fu_17099_p0 =  (sc_lv<18>) (sext_ln1118_30_fu_8274_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_19_fu_17099_p1() {
    mul_ln1118_19_fu_17099_p1 =  (sc_lv<18>) (sext_ln1118_31_fu_8278_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_20_fu_17106_p0() {
    mul_ln1118_20_fu_17106_p0 =  (sc_lv<18>) (sext_ln1118_32_fu_8290_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_20_fu_17106_p1() {
    mul_ln1118_20_fu_17106_p1 =  (sc_lv<18>) (sext_ln1118_33_fu_8294_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_21_fu_17113_p0() {
    mul_ln1118_21_fu_17113_p0 =  (sc_lv<18>) (sext_ln1118_34_fu_8306_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_21_fu_17113_p1() {
    mul_ln1118_21_fu_17113_p1 =  (sc_lv<18>) (sext_ln1118_35_fu_8310_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_22_fu_17120_p0() {
    mul_ln1118_22_fu_17120_p0 =  (sc_lv<18>) (sext_ln1118_36_fu_8322_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_22_fu_17120_p1() {
    mul_ln1118_22_fu_17120_p1 =  (sc_lv<18>) (sext_ln1118_37_fu_8326_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_23_fu_17127_p0() {
    mul_ln1118_23_fu_17127_p0 =  (sc_lv<18>) (sext_ln1118_38_fu_8338_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_23_fu_17127_p1() {
    mul_ln1118_23_fu_17127_p1 =  (sc_lv<18>) (sext_ln1118_39_fu_8342_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_24_fu_17134_p0() {
    mul_ln1118_24_fu_17134_p0 =  (sc_lv<18>) (sext_ln1118_40_fu_8354_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_24_fu_17134_p1() {
    mul_ln1118_24_fu_17134_p1 =  (sc_lv<18>) (sext_ln1118_41_fu_8358_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_25_fu_17141_p0() {
    mul_ln1118_25_fu_17141_p0 =  (sc_lv<18>) (sext_ln1118_42_fu_8370_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_25_fu_17141_p1() {
    mul_ln1118_25_fu_17141_p1 =  (sc_lv<18>) (sext_ln1118_43_fu_8374_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_26_fu_17148_p0() {
    mul_ln1118_26_fu_17148_p0 =  (sc_lv<18>) (sext_ln1118_44_fu_8386_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_26_fu_17148_p1() {
    mul_ln1118_26_fu_17148_p1 =  (sc_lv<18>) (sext_ln1118_45_fu_8390_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_27_fu_17155_p0() {
    mul_ln1118_27_fu_17155_p0 =  (sc_lv<18>) (sext_ln1118_46_fu_8402_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_27_fu_17155_p1() {
    mul_ln1118_27_fu_17155_p1 =  (sc_lv<18>) (sext_ln1118_47_fu_8406_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_28_fu_17162_p0() {
    mul_ln1118_28_fu_17162_p0 =  (sc_lv<18>) (sext_ln1118_48_fu_8418_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_28_fu_17162_p1() {
    mul_ln1118_28_fu_17162_p1 =  (sc_lv<18>) (sext_ln1118_49_fu_8422_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_29_fu_17169_p0() {
    mul_ln1118_29_fu_17169_p0 =  (sc_lv<18>) (sext_ln1118_50_fu_8434_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_29_fu_17169_p1() {
    mul_ln1118_29_fu_17169_p1 =  (sc_lv<18>) (sext_ln1118_51_fu_8438_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_30_fu_17176_p0() {
    mul_ln1118_30_fu_17176_p0 =  (sc_lv<18>) (sext_ln1118_52_fu_8450_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_30_fu_17176_p1() {
    mul_ln1118_30_fu_17176_p1 =  (sc_lv<18>) (sext_ln1118_53_fu_8454_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_31_fu_17183_p0() {
    mul_ln1118_31_fu_17183_p0 =  (sc_lv<18>) (sext_ln1118_54_fu_8466_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_31_fu_17183_p1() {
    mul_ln1118_31_fu_17183_p1 =  (sc_lv<18>) (sext_ln1118_55_fu_8470_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_32_fu_17190_p0() {
    mul_ln1118_32_fu_17190_p0 =  (sc_lv<18>) (sext_ln1118_56_fu_8482_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_32_fu_17190_p1() {
    mul_ln1118_32_fu_17190_p1 =  (sc_lv<18>) (sext_ln1118_57_fu_8486_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_33_fu_17197_p0() {
    mul_ln1118_33_fu_17197_p0 =  (sc_lv<18>) (sext_ln1118_58_fu_8498_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_33_fu_17197_p1() {
    mul_ln1118_33_fu_17197_p1 =  (sc_lv<18>) (sext_ln1118_59_fu_8502_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_34_fu_17204_p0() {
    mul_ln1118_34_fu_17204_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_8514_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_34_fu_17204_p1() {
    mul_ln1118_34_fu_17204_p1 =  (sc_lv<18>) (sext_ln1118_61_fu_8518_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_35_fu_17211_p0() {
    mul_ln1118_35_fu_17211_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_8530_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_35_fu_17211_p1() {
    mul_ln1118_35_fu_17211_p1 =  (sc_lv<18>) (sext_ln1118_63_fu_8534_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_36_fu_17218_p0() {
    mul_ln1118_36_fu_17218_p0 =  (sc_lv<18>) (sext_ln1118_64_fu_8546_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_36_fu_17218_p1() {
    mul_ln1118_36_fu_17218_p1 =  (sc_lv<18>) (sext_ln1118_65_fu_8550_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_37_fu_17225_p0() {
    mul_ln1118_37_fu_17225_p0 =  (sc_lv<18>) (sext_ln1118_66_fu_8562_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_37_fu_17225_p1() {
    mul_ln1118_37_fu_17225_p1 =  (sc_lv<18>) (sext_ln1118_67_fu_8566_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_38_fu_17232_p0() {
    mul_ln1118_38_fu_17232_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_8578_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_38_fu_17232_p1() {
    mul_ln1118_38_fu_17232_p1 =  (sc_lv<18>) (sext_ln1118_69_fu_8582_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_39_fu_17239_p0() {
    mul_ln1118_39_fu_17239_p0 =  (sc_lv<18>) (sext_ln1118_70_fu_8594_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_39_fu_17239_p1() {
    mul_ln1118_39_fu_17239_p1 =  (sc_lv<18>) (sext_ln1118_71_fu_8598_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_40_fu_17246_p0() {
    mul_ln1118_40_fu_17246_p0 =  (sc_lv<18>) (sext_ln1118_72_fu_8610_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_40_fu_17246_p1() {
    mul_ln1118_40_fu_17246_p1 =  (sc_lv<18>) (sext_ln1118_73_fu_8614_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_41_fu_17253_p0() {
    mul_ln1118_41_fu_17253_p0 =  (sc_lv<18>) (sext_ln1118_74_fu_8626_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_41_fu_17253_p1() {
    mul_ln1118_41_fu_17253_p1 =  (sc_lv<18>) (sext_ln1118_75_fu_8630_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_42_fu_17260_p0() {
    mul_ln1118_42_fu_17260_p0 =  (sc_lv<18>) (sext_ln1118_76_fu_8642_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_42_fu_17260_p1() {
    mul_ln1118_42_fu_17260_p1 =  (sc_lv<18>) (sext_ln1118_77_fu_8646_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_43_fu_17267_p0() {
    mul_ln1118_43_fu_17267_p0 =  (sc_lv<18>) (sext_ln1118_78_fu_8658_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_43_fu_17267_p1() {
    mul_ln1118_43_fu_17267_p1 =  (sc_lv<18>) (sext_ln1118_79_fu_8662_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_44_fu_17274_p0() {
    mul_ln1118_44_fu_17274_p0 =  (sc_lv<18>) (sext_ln1118_80_fu_8674_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_44_fu_17274_p1() {
    mul_ln1118_44_fu_17274_p1 =  (sc_lv<18>) (sext_ln1118_81_fu_8678_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_45_fu_17281_p0() {
    mul_ln1118_45_fu_17281_p0 =  (sc_lv<18>) (sext_ln1118_82_fu_8690_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_45_fu_17281_p1() {
    mul_ln1118_45_fu_17281_p1 =  (sc_lv<18>) (sext_ln1118_83_fu_8694_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_46_fu_17288_p0() {
    mul_ln1118_46_fu_17288_p0 =  (sc_lv<18>) (sext_ln1118_84_fu_8706_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_46_fu_17288_p1() {
    mul_ln1118_46_fu_17288_p1 =  (sc_lv<18>) (sext_ln1118_85_fu_8710_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_47_fu_17295_p0() {
    mul_ln1118_47_fu_17295_p0 =  (sc_lv<18>) (sext_ln1118_86_fu_8722_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_47_fu_17295_p1() {
    mul_ln1118_47_fu_17295_p1 =  (sc_lv<18>) (sext_ln1118_87_fu_8726_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_48_fu_17302_p0() {
    mul_ln1118_48_fu_17302_p0 =  (sc_lv<18>) (sext_ln1118_88_fu_8738_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_48_fu_17302_p1() {
    mul_ln1118_48_fu_17302_p1 =  (sc_lv<18>) (sext_ln1118_89_fu_8742_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_49_fu_17309_p0() {
    mul_ln1118_49_fu_17309_p0 =  (sc_lv<18>) (sext_ln1118_90_fu_8754_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_49_fu_17309_p1() {
    mul_ln1118_49_fu_17309_p1 =  (sc_lv<18>) (sext_ln1118_91_fu_8758_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_50_fu_17316_p0() {
    mul_ln1118_50_fu_17316_p0 =  (sc_lv<18>) (sext_ln1118_92_fu_8770_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_50_fu_17316_p1() {
    mul_ln1118_50_fu_17316_p1 =  (sc_lv<18>) (sext_ln1118_93_fu_8774_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_51_fu_17323_p0() {
    mul_ln1118_51_fu_17323_p0 =  (sc_lv<18>) (sext_ln1118_94_fu_8786_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_51_fu_17323_p1() {
    mul_ln1118_51_fu_17323_p1 =  (sc_lv<18>) (sext_ln1118_95_fu_8790_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_52_fu_17330_p0() {
    mul_ln1118_52_fu_17330_p0 =  (sc_lv<18>) (sext_ln1118_96_fu_8802_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_52_fu_17330_p1() {
    mul_ln1118_52_fu_17330_p1 =  (sc_lv<18>) (sext_ln1118_97_fu_8806_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_53_fu_17337_p0() {
    mul_ln1118_53_fu_17337_p0 =  (sc_lv<18>) (sext_ln1118_98_fu_8818_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_53_fu_17337_p1() {
    mul_ln1118_53_fu_17337_p1 =  (sc_lv<18>) (sext_ln1118_99_fu_8822_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_54_fu_17344_p0() {
    mul_ln1118_54_fu_17344_p0 =  (sc_lv<18>) (sext_ln1118_100_fu_8834_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_54_fu_17344_p1() {
    mul_ln1118_54_fu_17344_p1 =  (sc_lv<18>) (sext_ln1118_101_fu_8838_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_55_fu_17351_p0() {
    mul_ln1118_55_fu_17351_p0 =  (sc_lv<18>) (sext_ln1118_102_fu_8850_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_55_fu_17351_p1() {
    mul_ln1118_55_fu_17351_p1 =  (sc_lv<18>) (sext_ln1118_103_fu_8854_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_56_fu_17358_p0() {
    mul_ln1118_56_fu_17358_p0 =  (sc_lv<18>) (sext_ln1118_104_fu_8866_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_56_fu_17358_p1() {
    mul_ln1118_56_fu_17358_p1 =  (sc_lv<18>) (sext_ln1118_105_fu_8870_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_57_fu_17365_p0() {
    mul_ln1118_57_fu_17365_p0 =  (sc_lv<18>) (sext_ln1118_106_fu_8882_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_57_fu_17365_p1() {
    mul_ln1118_57_fu_17365_p1 =  (sc_lv<18>) (sext_ln1118_107_fu_8886_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_58_fu_17372_p0() {
    mul_ln1118_58_fu_17372_p0 =  (sc_lv<18>) (sext_ln1118_108_fu_8898_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_58_fu_17372_p1() {
    mul_ln1118_58_fu_17372_p1 =  (sc_lv<18>) (sext_ln1118_109_fu_8902_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_59_fu_17379_p0() {
    mul_ln1118_59_fu_17379_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_8914_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_59_fu_17379_p1() {
    mul_ln1118_59_fu_17379_p1 =  (sc_lv<18>) (sext_ln1118_111_fu_8918_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_5_fu_17001_p0() {
    mul_ln1118_5_fu_17001_p0 =  (sc_lv<18>) (sext_ln1118_2_fu_8050_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_5_fu_17001_p1() {
    mul_ln1118_5_fu_17001_p1 =  (sc_lv<18>) (sext_ln1118_3_fu_8054_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_60_fu_17386_p0() {
    mul_ln1118_60_fu_17386_p0 =  (sc_lv<18>) (sext_ln1118_112_fu_8930_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_60_fu_17386_p1() {
    mul_ln1118_60_fu_17386_p1 =  (sc_lv<18>) (sext_ln1118_113_fu_8934_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_61_fu_17393_p0() {
    mul_ln1118_61_fu_17393_p0 =  (sc_lv<18>) (sext_ln1118_114_fu_8946_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_61_fu_17393_p1() {
    mul_ln1118_61_fu_17393_p1 =  (sc_lv<18>) (sext_ln1118_115_fu_8950_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_62_fu_17400_p0() {
    mul_ln1118_62_fu_17400_p0 =  (sc_lv<18>) (sext_ln1118_116_fu_8962_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_62_fu_17400_p1() {
    mul_ln1118_62_fu_17400_p1 =  (sc_lv<18>) (sext_ln1118_117_fu_8966_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_63_fu_17407_p0() {
    mul_ln1118_63_fu_17407_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_8978_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_63_fu_17407_p1() {
    mul_ln1118_63_fu_17407_p1 =  (sc_lv<18>) (sext_ln1118_119_fu_8982_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_64_fu_17414_p0() {
    mul_ln1118_64_fu_17414_p0 =  (sc_lv<18>) (sext_ln1118_120_fu_8994_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_64_fu_17414_p1() {
    mul_ln1118_64_fu_17414_p1 =  (sc_lv<18>) (sext_ln1118_121_fu_8998_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_65_fu_17421_p0() {
    mul_ln1118_65_fu_17421_p0 =  (sc_lv<18>) (sext_ln1118_122_fu_9010_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_65_fu_17421_p1() {
    mul_ln1118_65_fu_17421_p1 =  (sc_lv<18>) (sext_ln1118_123_fu_9014_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_66_fu_17428_p0() {
    mul_ln1118_66_fu_17428_p0 =  (sc_lv<18>) (sext_ln1118_124_fu_9026_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_66_fu_17428_p1() {
    mul_ln1118_66_fu_17428_p1 =  (sc_lv<18>) (sext_ln1118_125_fu_9030_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_67_fu_17435_p0() {
    mul_ln1118_67_fu_17435_p0 =  (sc_lv<18>) (sext_ln1118_126_fu_9042_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_67_fu_17435_p1() {
    mul_ln1118_67_fu_17435_p1 =  (sc_lv<18>) (sext_ln1118_127_fu_9046_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_68_fu_17442_p0() {
    mul_ln1118_68_fu_17442_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_9058_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_68_fu_17442_p1() {
    mul_ln1118_68_fu_17442_p1 =  (sc_lv<18>) (sext_ln1118_129_fu_9062_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_69_fu_17449_p0() {
    mul_ln1118_69_fu_17449_p0 =  (sc_lv<18>) (sext_ln1118_130_fu_9074_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_69_fu_17449_p1() {
    mul_ln1118_69_fu_17449_p1 =  (sc_lv<18>) (sext_ln1118_131_fu_9078_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_6_fu_17008_p0() {
    mul_ln1118_6_fu_17008_p0 =  (sc_lv<18>) (sext_ln1118_4_fu_8066_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_6_fu_17008_p1() {
    mul_ln1118_6_fu_17008_p1 =  (sc_lv<18>) (sext_ln1118_5_fu_8070_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_70_fu_17456_p0() {
    mul_ln1118_70_fu_17456_p0 =  (sc_lv<18>) (sext_ln1118_132_fu_9090_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_70_fu_17456_p1() {
    mul_ln1118_70_fu_17456_p1 =  (sc_lv<18>) (sext_ln1118_133_fu_9094_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_71_fu_17463_p0() {
    mul_ln1118_71_fu_17463_p0 =  (sc_lv<18>) (sext_ln1118_134_fu_9106_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_71_fu_17463_p1() {
    mul_ln1118_71_fu_17463_p1 =  (sc_lv<18>) (sext_ln1118_135_fu_9110_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_72_fu_17470_p0() {
    mul_ln1118_72_fu_17470_p0 =  (sc_lv<18>) (sext_ln1118_136_fu_9122_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_72_fu_17470_p1() {
    mul_ln1118_72_fu_17470_p1 =  (sc_lv<18>) (sext_ln1118_137_fu_9126_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_73_fu_17477_p0() {
    mul_ln1118_73_fu_17477_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_9138_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_73_fu_17477_p1() {
    mul_ln1118_73_fu_17477_p1 =  (sc_lv<18>) (sext_ln1118_139_fu_9142_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_74_fu_17484_p0() {
    mul_ln1118_74_fu_17484_p0 =  (sc_lv<18>) (sext_ln1118_140_fu_9154_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_74_fu_17484_p1() {
    mul_ln1118_74_fu_17484_p1 =  (sc_lv<18>) (sext_ln1118_141_fu_9158_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_75_fu_17491_p0() {
    mul_ln1118_75_fu_17491_p0 =  (sc_lv<18>) (sext_ln1118_142_fu_9170_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_75_fu_17491_p1() {
    mul_ln1118_75_fu_17491_p1 =  (sc_lv<18>) (sext_ln1118_143_fu_9174_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_76_fu_17498_p0() {
    mul_ln1118_76_fu_17498_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_9186_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_76_fu_17498_p1() {
    mul_ln1118_76_fu_17498_p1 =  (sc_lv<18>) (sext_ln1118_145_fu_9190_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_77_fu_17505_p0() {
    mul_ln1118_77_fu_17505_p0 =  (sc_lv<18>) (sext_ln1118_146_fu_9202_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_77_fu_17505_p1() {
    mul_ln1118_77_fu_17505_p1 =  (sc_lv<18>) (sext_ln1118_147_fu_9206_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_78_fu_17512_p0() {
    mul_ln1118_78_fu_17512_p0 =  (sc_lv<18>) (sext_ln1118_148_fu_9218_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_78_fu_17512_p1() {
    mul_ln1118_78_fu_17512_p1 =  (sc_lv<18>) (sext_ln1118_149_fu_9222_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_79_fu_17519_p0() {
    mul_ln1118_79_fu_17519_p0 =  (sc_lv<18>) (sext_ln1118_150_fu_9234_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_79_fu_17519_p1() {
    mul_ln1118_79_fu_17519_p1 =  (sc_lv<18>) (sext_ln1118_151_fu_9238_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_7_fu_17015_p0() {
    mul_ln1118_7_fu_17015_p0 =  (sc_lv<18>) (sext_ln1118_6_fu_8082_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_7_fu_17015_p1() {
    mul_ln1118_7_fu_17015_p1 =  (sc_lv<18>) (sext_ln1118_7_fu_8086_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_80_fu_17526_p0() {
    mul_ln1118_80_fu_17526_p0 =  (sc_lv<18>) (sext_ln1118_152_fu_9250_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_80_fu_17526_p1() {
    mul_ln1118_80_fu_17526_p1 =  (sc_lv<18>) (sext_ln1118_153_fu_9254_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_81_fu_17533_p0() {
    mul_ln1118_81_fu_17533_p0 =  (sc_lv<18>) (sext_ln1118_154_fu_9266_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_81_fu_17533_p1() {
    mul_ln1118_81_fu_17533_p1 =  (sc_lv<18>) (sext_ln1118_155_fu_9270_p1.read());
}

void gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s::thread_mul_ln1118_82_fu_17540_p0() {
    mul_ln1118_82_fu_17540_p0 =  (sc_lv<18>) (sext_ln1118_156_fu_9282_p1.read());
}

}

