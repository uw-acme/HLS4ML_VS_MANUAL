#include "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_add_ln220_fu_596_p2() {
    add_ln220_fu_596_p2 = (!pY_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pY_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_add_ln222_fu_700_p2() {
    add_ln222_fu_700_p2 = (!sY_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(sY_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_add_ln225_fu_572_p2() {
    add_ln225_fu_572_p2 = (!pX_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pX_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_add_ln227_fu_674_p2() {
    add_ln227_fu_674_p2 = (!sX_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(sX_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_add_ln241_fu_540_p2() {
    add_ln241_fu_540_p2 = (!indvar_flatten_reg_512.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(indvar_flatten_reg_512.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_and_ln191_3_fu_664_p2() {
    and_ln191_3_fu_664_p2 = (icmp_ln191_5_reg_5596.read() & icmp_ln191_6_reg_5601.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_and_ln191_4_fu_668_p2() {
    and_ln191_4_fu_668_p2 = (and_ln191_3_fu_664_p2.read() & and_ln191_fu_658_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_and_ln191_fu_658_p2() {
    and_ln191_fu_658_p2 = (icmp_ln191_fu_642_p2.read() & icmp_ln191_4_fu_652_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[2];
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = (esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_condition_382() {
    ap_condition_382 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_condition_977() {
    ap_condition_977 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_condition_981() {
    ap_condition_981 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_condition_990() {
    ap_condition_990 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln216_fu_590_p2.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_condition_996() {
    ap_condition_996 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_534_p2.read())) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_phi_mux_storemerge_i_i_phi_fu_527_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5606.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_reg_5610.read()))) {
        ap_phi_mux_storemerge_i_i_phi_fu_527_p4 = select_ln222_fu_706_p3.read();
    } else {
        ap_phi_mux_storemerge_i_i_phi_fu_527_p4 = ap_phi_reg_pp0_iter1_storemerge_i_i_reg_523.read();
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523() {
    ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0))) {
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n.read();
    } else {
        data_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_V_data_0_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0))) {
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n.read();
    } else {
        data_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_V_data_1_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0))) {
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n.read();
    } else {
        data_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_V_data_2_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0))) {
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n.read();
    } else {
        data_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_V_data_3_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0))) {
        data_V_data_4_V_blk_n = data_V_data_4_V_empty_n.read();
    } else {
        data_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_V_data_4_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0))) {
        data_V_data_5_V_blk_n = data_V_data_5_V_empty_n.read();
    } else {
        data_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_data_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5587.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_V_data_5_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_100_fu_2739_p2() {
    icmp_ln1496_100_fu_2739_p2 = (!pool_window_6_V_10_fu_2642_p3.read().is_01() || !pool_window_7_V_10_fu_2650_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_10_fu_2642_p3.read()) < sc_biguint<12>(pool_window_7_V_10_fu_2650_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_101_fu_4818_p2() {
    icmp_ln1496_101_fu_4818_p2 = (!select_ln66_146_fu_4801_p3.read().is_01() || !select_ln66_148_fu_4813_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_146_fu_4801_p3.read()) < sc_biguint<12>(select_ln66_148_fu_4813_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_102_fu_4874_p2() {
    icmp_ln1496_102_fu_4874_p2 = (!phi_ln66_29_fu_4756_p18.read().is_01() || !phi_ln66_30_fu_4836_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_29_fu_4756_p18.read()) < sc_bigint<16>(phi_ln66_30_fu_4836_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_103_fu_2745_p2() {
    icmp_ln1496_103_fu_2745_p2 = (!pool_window_8_V_10_fu_2658_p3.read().is_01() || !pool_window_9_V_10_fu_2666_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_10_fu_2658_p3.read()) < sc_biguint<12>(pool_window_9_V_10_fu_2666_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_104_fu_2759_p2() {
    icmp_ln1496_104_fu_2759_p2 = (!pool_window_10_V_10_fu_2674_p3.read().is_01() || !pool_window_11_V_10_fu_2682_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_10_fu_2674_p3.read()) < sc_biguint<12>(pool_window_11_V_10_fu_2682_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_105_fu_2773_p2() {
    icmp_ln1496_105_fu_2773_p2 = (!select_ln66_152_fu_2751_p3.read().is_01() || !select_ln66_154_fu_2765_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_152_fu_2751_p3.read()) < sc_biguint<12>(select_ln66_154_fu_2765_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_106_fu_2779_p2() {
    icmp_ln1496_106_fu_2779_p2 = (!pool_window_12_V_10_fu_2690_p3.read().is_01() || !pool_window_13_V_10_fu_2698_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_10_fu_2690_p3.read()) < sc_biguint<12>(pool_window_13_V_10_fu_2698_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_107_fu_2785_p2() {
    icmp_ln1496_107_fu_2785_p2 = (!pool_window_14_V_10_fu_2706_p3.read().is_01() || !pool_window_15_V_10_fu_2714_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_10_fu_2706_p3.read()) < sc_biguint<12>(pool_window_15_V_10_fu_2714_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_108_fu_4971_p2() {
    icmp_ln1496_108_fu_4971_p2 = (!select_ln66_157_fu_4954_p3.read().is_01() || !select_ln66_159_fu_4966_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_157_fu_4954_p3.read()) < sc_biguint<12>(select_ln66_159_fu_4966_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_109_fu_5027_p2() {
    icmp_ln1496_109_fu_5027_p2 = (!phi_ln66_32_fu_4909_p18.read().is_01() || !phi_ln66_33_fu_4989_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_32_fu_4909_p18.read()) < sc_bigint<16>(phi_ln66_33_fu_4989_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_110_fu_5542_p2() {
    icmp_ln1496_110_fu_5542_p2 = (!phi_ln66_31_fu_5499_p18.read().is_01() || !phi_ln66_34_fu_5521_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_31_fu_5499_p18.read()) < sc_bigint<16>(phi_ln66_34_fu_5521_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_1_fu_1933_p2() {
    icmp_ln1496_1_fu_1933_p2 = (!pool_window_0_V_17_fu_1806_p3.read().is_01() || !pool_window_1_V_17_fu_1814_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_17_fu_1806_p3.read()) < sc_biguint<12>(pool_window_1_V_17_fu_1814_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_24_fu_1742_p2() {
    icmp_ln1496_24_fu_1742_p2 = (!pool_window_2_V_fu_1625_p3.read().is_01() || !pool_window_3_V_fu_1633_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_fu_1625_p3.read()) < sc_biguint<12>(pool_window_3_V_fu_1633_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_25_fu_2859_p2() {
    icmp_ln1496_25_fu_2859_p2 = (!select_ln66_fu_2842_p3.read().is_01() || !select_ln66_33_fu_2854_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_fu_2842_p3.read()) < sc_biguint<12>(select_ln66_33_fu_2854_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_26_fu_1748_p2() {
    icmp_ln1496_26_fu_1748_p2 = (!pool_window_4_V_fu_1641_p3.read().is_01() || !pool_window_5_V_fu_1649_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_fu_1641_p3.read()) < sc_biguint<12>(pool_window_5_V_fu_1649_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_27_fu_1754_p2() {
    icmp_ln1496_27_fu_1754_p2 = (!pool_window_6_V_fu_1657_p3.read().is_01() || !pool_window_7_V_fu_1665_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_fu_1657_p3.read()) < sc_biguint<12>(pool_window_7_V_fu_1665_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_28_fu_2943_p2() {
    icmp_ln1496_28_fu_2943_p2 = (!select_ln66_36_fu_2926_p3.read().is_01() || !select_ln66_38_fu_2938_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_36_fu_2926_p3.read()) < sc_biguint<12>(select_ln66_38_fu_2938_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_29_fu_2999_p2() {
    icmp_ln1496_29_fu_2999_p2 = (!phi_ln_fu_2881_p18.read().is_01() || !phi_ln66_1_fu_2961_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln_fu_2881_p18.read()) < sc_bigint<16>(phi_ln66_1_fu_2961_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_2_fu_2130_p2() {
    icmp_ln1496_2_fu_2130_p2 = (!pool_window_0_V_19_fu_2003_p3.read().is_01() || !pool_window_1_V_19_fu_2011_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_19_fu_2003_p3.read()) < sc_biguint<12>(pool_window_1_V_19_fu_2011_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_30_fu_1760_p2() {
    icmp_ln1496_30_fu_1760_p2 = (!pool_window_8_V_fu_1673_p3.read().is_01() || !pool_window_9_V_fu_1681_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_fu_1673_p3.read()) < sc_biguint<12>(pool_window_9_V_fu_1681_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_31_fu_1774_p2() {
    icmp_ln1496_31_fu_1774_p2 = (!pool_window_10_V_fu_1689_p3.read().is_01() || !pool_window_11_V_fu_1697_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_fu_1689_p3.read()) < sc_biguint<12>(pool_window_11_V_fu_1697_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_32_fu_1788_p2() {
    icmp_ln1496_32_fu_1788_p2 = (!select_ln66_42_fu_1766_p3.read().is_01() || !select_ln66_44_fu_1780_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_42_fu_1766_p3.read()) < sc_biguint<12>(select_ln66_44_fu_1780_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_33_fu_1794_p2() {
    icmp_ln1496_33_fu_1794_p2 = (!pool_window_12_V_fu_1705_p3.read().is_01() || !pool_window_13_V_fu_1713_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_fu_1705_p3.read()) < sc_biguint<12>(pool_window_13_V_fu_1713_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_34_fu_1800_p2() {
    icmp_ln1496_34_fu_1800_p2 = (!pool_window_14_V_fu_1721_p3.read().is_01() || !pool_window_15_V_fu_1729_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_fu_1721_p3.read()) < sc_biguint<12>(pool_window_15_V_fu_1729_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_35_fu_3096_p2() {
    icmp_ln1496_35_fu_3096_p2 = (!select_ln66_47_fu_3079_p3.read().is_01() || !select_ln66_49_fu_3091_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_47_fu_3079_p3.read()) < sc_biguint<12>(select_ln66_49_fu_3091_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_36_fu_3152_p2() {
    icmp_ln1496_36_fu_3152_p2 = (!phi_ln66_3_fu_3034_p18.read().is_01() || !phi_ln66_4_fu_3114_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_3_fu_3034_p18.read()) < sc_bigint<16>(phi_ln66_4_fu_3114_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_37_fu_5087_p2() {
    icmp_ln1496_37_fu_5087_p2 = (!phi_ln66_2_fu_5044_p18.read().is_01() || !phi_ln66_5_fu_5066_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_2_fu_5044_p18.read()) < sc_bigint<16>(phi_ln66_5_fu_5066_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_38_fu_1939_p2() {
    icmp_ln1496_38_fu_1939_p2 = (!pool_window_2_V_17_fu_1822_p3.read().is_01() || !pool_window_3_V_17_fu_1830_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_17_fu_1822_p3.read()) < sc_biguint<12>(pool_window_3_V_17_fu_1830_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_39_fu_3234_p2() {
    icmp_ln1496_39_fu_3234_p2 = (!select_ln66_53_fu_3217_p3.read().is_01() || !select_ln66_55_fu_3229_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_53_fu_3217_p3.read()) < sc_biguint<12>(select_ln66_55_fu_3229_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_40_fu_1945_p2() {
    icmp_ln1496_40_fu_1945_p2 = (!pool_window_4_V_2_fu_1838_p3.read().is_01() || !pool_window_5_V_2_fu_1846_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_2_fu_1838_p3.read()) < sc_biguint<12>(pool_window_5_V_2_fu_1846_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_41_fu_1951_p2() {
    icmp_ln1496_41_fu_1951_p2 = (!pool_window_6_V_2_fu_1854_p3.read().is_01() || !pool_window_7_V_2_fu_1862_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_2_fu_1854_p3.read()) < sc_biguint<12>(pool_window_7_V_2_fu_1862_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_42_fu_3318_p2() {
    icmp_ln1496_42_fu_3318_p2 = (!select_ln66_58_fu_3301_p3.read().is_01() || !select_ln66_60_fu_3313_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_58_fu_3301_p3.read()) < sc_biguint<12>(select_ln66_60_fu_3313_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_43_fu_3374_p2() {
    icmp_ln1496_43_fu_3374_p2 = (!phi_ln66_6_fu_3256_p18.read().is_01() || !phi_ln66_7_fu_3336_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_6_fu_3256_p18.read()) < sc_bigint<16>(phi_ln66_7_fu_3336_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_44_fu_1957_p2() {
    icmp_ln1496_44_fu_1957_p2 = (!pool_window_8_V_2_fu_1870_p3.read().is_01() || !pool_window_9_V_2_fu_1878_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_2_fu_1870_p3.read()) < sc_biguint<12>(pool_window_9_V_2_fu_1878_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_45_fu_1971_p2() {
    icmp_ln1496_45_fu_1971_p2 = (!pool_window_10_V_2_fu_1886_p3.read().is_01() || !pool_window_11_V_2_fu_1894_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_2_fu_1886_p3.read()) < sc_biguint<12>(pool_window_11_V_2_fu_1894_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_46_fu_1985_p2() {
    icmp_ln1496_46_fu_1985_p2 = (!select_ln66_64_fu_1963_p3.read().is_01() || !select_ln66_66_fu_1977_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_64_fu_1963_p3.read()) < sc_biguint<12>(select_ln66_66_fu_1977_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_47_fu_1991_p2() {
    icmp_ln1496_47_fu_1991_p2 = (!pool_window_12_V_2_fu_1902_p3.read().is_01() || !pool_window_13_V_2_fu_1910_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_2_fu_1902_p3.read()) < sc_biguint<12>(pool_window_13_V_2_fu_1910_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_48_fu_1997_p2() {
    icmp_ln1496_48_fu_1997_p2 = (!pool_window_14_V_2_fu_1918_p3.read().is_01() || !pool_window_15_V_2_fu_1926_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_2_fu_1918_p3.read()) < sc_biguint<12>(pool_window_15_V_2_fu_1926_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_49_fu_3471_p2() {
    icmp_ln1496_49_fu_3471_p2 = (!select_ln66_69_fu_3454_p3.read().is_01() || !select_ln66_71_fu_3466_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_69_fu_3454_p3.read()) < sc_biguint<12>(select_ln66_71_fu_3466_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_50_fu_3527_p2() {
    icmp_ln1496_50_fu_3527_p2 = (!phi_ln66_9_fu_3409_p18.read().is_01() || !phi_ln66_s_fu_3489_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_9_fu_3409_p18.read()) < sc_bigint<16>(phi_ln66_s_fu_3489_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_51_fu_5178_p2() {
    icmp_ln1496_51_fu_5178_p2 = (!phi_ln66_8_fu_5135_p18.read().is_01() || !phi_ln66_10_fu_5157_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_8_fu_5135_p18.read()) < sc_bigint<16>(phi_ln66_10_fu_5157_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_52_fu_2136_p2() {
    icmp_ln1496_52_fu_2136_p2 = (!pool_window_2_V_19_fu_2019_p3.read().is_01() || !pool_window_3_V_19_fu_2027_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_19_fu_2019_p3.read()) < sc_biguint<12>(pool_window_3_V_19_fu_2027_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_53_fu_3609_p2() {
    icmp_ln1496_53_fu_3609_p2 = (!select_ln66_75_fu_3592_p3.read().is_01() || !select_ln66_77_fu_3604_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_75_fu_3592_p3.read()) < sc_biguint<12>(select_ln66_77_fu_3604_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_54_fu_2142_p2() {
    icmp_ln1496_54_fu_2142_p2 = (!pool_window_4_V_4_fu_2035_p3.read().is_01() || !pool_window_5_V_4_fu_2043_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_4_fu_2035_p3.read()) < sc_biguint<12>(pool_window_5_V_4_fu_2043_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_55_fu_2148_p2() {
    icmp_ln1496_55_fu_2148_p2 = (!pool_window_6_V_4_fu_2051_p3.read().is_01() || !pool_window_7_V_4_fu_2059_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_4_fu_2051_p3.read()) < sc_biguint<12>(pool_window_7_V_4_fu_2059_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_56_fu_3693_p2() {
    icmp_ln1496_56_fu_3693_p2 = (!select_ln66_80_fu_3676_p3.read().is_01() || !select_ln66_82_fu_3688_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_80_fu_3676_p3.read()) < sc_biguint<12>(select_ln66_82_fu_3688_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_57_fu_3749_p2() {
    icmp_ln1496_57_fu_3749_p2 = (!phi_ln66_11_fu_3631_p18.read().is_01() || !phi_ln66_12_fu_3711_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_11_fu_3631_p18.read()) < sc_bigint<16>(phi_ln66_12_fu_3711_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_58_fu_2154_p2() {
    icmp_ln1496_58_fu_2154_p2 = (!pool_window_8_V_4_fu_2067_p3.read().is_01() || !pool_window_9_V_4_fu_2075_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_4_fu_2067_p3.read()) < sc_biguint<12>(pool_window_9_V_4_fu_2075_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_59_fu_2168_p2() {
    icmp_ln1496_59_fu_2168_p2 = (!pool_window_10_V_4_fu_2083_p3.read().is_01() || !pool_window_11_V_4_fu_2091_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_4_fu_2083_p3.read()) < sc_biguint<12>(pool_window_11_V_4_fu_2091_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_60_fu_2182_p2() {
    icmp_ln1496_60_fu_2182_p2 = (!select_ln66_86_fu_2160_p3.read().is_01() || !select_ln66_88_fu_2174_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_86_fu_2160_p3.read()) < sc_biguint<12>(select_ln66_88_fu_2174_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_61_fu_2188_p2() {
    icmp_ln1496_61_fu_2188_p2 = (!pool_window_12_V_4_fu_2099_p3.read().is_01() || !pool_window_13_V_4_fu_2107_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_4_fu_2099_p3.read()) < sc_biguint<12>(pool_window_13_V_4_fu_2107_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_62_fu_2194_p2() {
    icmp_ln1496_62_fu_2194_p2 = (!pool_window_14_V_4_fu_2115_p3.read().is_01() || !pool_window_15_V_4_fu_2123_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_4_fu_2115_p3.read()) < sc_biguint<12>(pool_window_15_V_4_fu_2123_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_63_fu_3846_p2() {
    icmp_ln1496_63_fu_3846_p2 = (!select_ln66_91_fu_3829_p3.read().is_01() || !select_ln66_93_fu_3841_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_91_fu_3829_p3.read()) < sc_biguint<12>(select_ln66_93_fu_3841_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_64_fu_3902_p2() {
    icmp_ln1496_64_fu_3902_p2 = (!phi_ln66_14_fu_3784_p18.read().is_01() || !phi_ln66_15_fu_3864_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_14_fu_3784_p18.read()) < sc_bigint<16>(phi_ln66_15_fu_3864_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_65_fu_5269_p2() {
    icmp_ln1496_65_fu_5269_p2 = (!phi_ln66_13_fu_5226_p18.read().is_01() || !phi_ln66_16_fu_5248_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_13_fu_5226_p18.read()) < sc_bigint<16>(phi_ln66_16_fu_5248_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_66_fu_2327_p2() {
    icmp_ln1496_66_fu_2327_p2 = (!pool_window_0_V_21_fu_2200_p3.read().is_01() || !pool_window_1_V_21_fu_2208_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_21_fu_2200_p3.read()) < sc_biguint<12>(pool_window_1_V_21_fu_2208_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_67_fu_2333_p2() {
    icmp_ln1496_67_fu_2333_p2 = (!pool_window_2_V_21_fu_2216_p3.read().is_01() || !pool_window_3_V_21_fu_2224_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_21_fu_2216_p3.read()) < sc_biguint<12>(pool_window_3_V_21_fu_2224_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_68_fu_3984_p2() {
    icmp_ln1496_68_fu_3984_p2 = (!select_ln66_97_fu_3967_p3.read().is_01() || !select_ln66_99_fu_3979_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_97_fu_3967_p3.read()) < sc_biguint<12>(select_ln66_99_fu_3979_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_69_fu_2339_p2() {
    icmp_ln1496_69_fu_2339_p2 = (!pool_window_4_V_6_fu_2232_p3.read().is_01() || !pool_window_5_V_6_fu_2240_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_6_fu_2232_p3.read()) < sc_biguint<12>(pool_window_5_V_6_fu_2240_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_70_fu_2345_p2() {
    icmp_ln1496_70_fu_2345_p2 = (!pool_window_6_V_6_fu_2248_p3.read().is_01() || !pool_window_7_V_6_fu_2256_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_6_fu_2248_p3.read()) < sc_biguint<12>(pool_window_7_V_6_fu_2256_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_71_fu_4068_p2() {
    icmp_ln1496_71_fu_4068_p2 = (!select_ln66_102_fu_4051_p3.read().is_01() || !select_ln66_104_fu_4063_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_102_fu_4051_p3.read()) < sc_biguint<12>(select_ln66_104_fu_4063_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_72_fu_4124_p2() {
    icmp_ln1496_72_fu_4124_p2 = (!phi_ln66_17_fu_4006_p18.read().is_01() || !phi_ln66_18_fu_4086_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_17_fu_4006_p18.read()) < sc_bigint<16>(phi_ln66_18_fu_4086_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_73_fu_2351_p2() {
    icmp_ln1496_73_fu_2351_p2 = (!pool_window_8_V_6_fu_2264_p3.read().is_01() || !pool_window_9_V_6_fu_2272_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_6_fu_2264_p3.read()) < sc_biguint<12>(pool_window_9_V_6_fu_2272_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_74_fu_2365_p2() {
    icmp_ln1496_74_fu_2365_p2 = (!pool_window_10_V_6_fu_2280_p3.read().is_01() || !pool_window_11_V_6_fu_2288_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_6_fu_2280_p3.read()) < sc_biguint<12>(pool_window_11_V_6_fu_2288_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_75_fu_2379_p2() {
    icmp_ln1496_75_fu_2379_p2 = (!select_ln66_108_fu_2357_p3.read().is_01() || !select_ln66_110_fu_2371_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_108_fu_2357_p3.read()) < sc_biguint<12>(select_ln66_110_fu_2371_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_76_fu_2385_p2() {
    icmp_ln1496_76_fu_2385_p2 = (!pool_window_12_V_6_fu_2296_p3.read().is_01() || !pool_window_13_V_6_fu_2304_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_6_fu_2296_p3.read()) < sc_biguint<12>(pool_window_13_V_6_fu_2304_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_77_fu_2391_p2() {
    icmp_ln1496_77_fu_2391_p2 = (!pool_window_14_V_6_fu_2312_p3.read().is_01() || !pool_window_15_V_6_fu_2320_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_6_fu_2312_p3.read()) < sc_biguint<12>(pool_window_15_V_6_fu_2320_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_78_fu_4221_p2() {
    icmp_ln1496_78_fu_4221_p2 = (!select_ln66_113_fu_4204_p3.read().is_01() || !select_ln66_115_fu_4216_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_113_fu_4204_p3.read()) < sc_biguint<12>(select_ln66_115_fu_4216_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_79_fu_4277_p2() {
    icmp_ln1496_79_fu_4277_p2 = (!phi_ln66_20_fu_4159_p18.read().is_01() || !phi_ln66_21_fu_4239_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_20_fu_4159_p18.read()) < sc_bigint<16>(phi_ln66_21_fu_4239_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_80_fu_5360_p2() {
    icmp_ln1496_80_fu_5360_p2 = (!phi_ln66_19_fu_5317_p18.read().is_01() || !phi_ln66_22_fu_5339_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_19_fu_5317_p18.read()) < sc_bigint<16>(phi_ln66_22_fu_5339_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_81_fu_2524_p2() {
    icmp_ln1496_81_fu_2524_p2 = (!pool_window_0_V_23_fu_2397_p3.read().is_01() || !pool_window_1_V_23_fu_2405_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_23_fu_2397_p3.read()) < sc_biguint<12>(pool_window_1_V_23_fu_2405_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_82_fu_2530_p2() {
    icmp_ln1496_82_fu_2530_p2 = (!pool_window_2_V_23_fu_2413_p3.read().is_01() || !pool_window_3_V_23_fu_2421_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_23_fu_2413_p3.read()) < sc_biguint<12>(pool_window_3_V_23_fu_2421_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_83_fu_4359_p2() {
    icmp_ln1496_83_fu_4359_p2 = (!select_ln66_119_fu_4342_p3.read().is_01() || !select_ln66_121_fu_4354_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_119_fu_4342_p3.read()) < sc_biguint<12>(select_ln66_121_fu_4354_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_84_fu_2536_p2() {
    icmp_ln1496_84_fu_2536_p2 = (!pool_window_4_V_8_fu_2429_p3.read().is_01() || !pool_window_5_V_8_fu_2437_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_8_fu_2429_p3.read()) < sc_biguint<12>(pool_window_5_V_8_fu_2437_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_85_fu_2542_p2() {
    icmp_ln1496_85_fu_2542_p2 = (!pool_window_6_V_8_fu_2445_p3.read().is_01() || !pool_window_7_V_8_fu_2453_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_8_fu_2445_p3.read()) < sc_biguint<12>(pool_window_7_V_8_fu_2453_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_86_fu_4443_p2() {
    icmp_ln1496_86_fu_4443_p2 = (!select_ln66_124_fu_4426_p3.read().is_01() || !select_ln66_126_fu_4438_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_124_fu_4426_p3.read()) < sc_biguint<12>(select_ln66_126_fu_4438_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_87_fu_4499_p2() {
    icmp_ln1496_87_fu_4499_p2 = (!phi_ln66_23_fu_4381_p18.read().is_01() || !phi_ln66_24_fu_4461_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_23_fu_4381_p18.read()) < sc_bigint<16>(phi_ln66_24_fu_4461_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_88_fu_2548_p2() {
    icmp_ln1496_88_fu_2548_p2 = (!pool_window_8_V_8_fu_2461_p3.read().is_01() || !pool_window_9_V_8_fu_2469_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_8_fu_2461_p3.read()) < sc_biguint<12>(pool_window_9_V_8_fu_2469_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_89_fu_2562_p2() {
    icmp_ln1496_89_fu_2562_p2 = (!pool_window_10_V_8_fu_2477_p3.read().is_01() || !pool_window_11_V_8_fu_2485_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_8_fu_2477_p3.read()) < sc_biguint<12>(pool_window_11_V_8_fu_2485_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_90_fu_2576_p2() {
    icmp_ln1496_90_fu_2576_p2 = (!select_ln66_130_fu_2554_p3.read().is_01() || !select_ln66_132_fu_2568_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_130_fu_2554_p3.read()) < sc_biguint<12>(select_ln66_132_fu_2568_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_91_fu_2582_p2() {
    icmp_ln1496_91_fu_2582_p2 = (!pool_window_12_V_8_fu_2493_p3.read().is_01() || !pool_window_13_V_8_fu_2501_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_8_fu_2493_p3.read()) < sc_biguint<12>(pool_window_13_V_8_fu_2501_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_92_fu_2588_p2() {
    icmp_ln1496_92_fu_2588_p2 = (!pool_window_14_V_8_fu_2509_p3.read().is_01() || !pool_window_15_V_8_fu_2517_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_8_fu_2509_p3.read()) < sc_biguint<12>(pool_window_15_V_8_fu_2517_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_93_fu_4596_p2() {
    icmp_ln1496_93_fu_4596_p2 = (!select_ln66_135_fu_4579_p3.read().is_01() || !select_ln66_137_fu_4591_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_135_fu_4579_p3.read()) < sc_biguint<12>(select_ln66_137_fu_4591_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_94_fu_4652_p2() {
    icmp_ln1496_94_fu_4652_p2 = (!phi_ln66_26_fu_4534_p18.read().is_01() || !phi_ln66_27_fu_4614_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_26_fu_4534_p18.read()) < sc_bigint<16>(phi_ln66_27_fu_4614_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_95_fu_5451_p2() {
    icmp_ln1496_95_fu_5451_p2 = (!phi_ln66_25_fu_5408_p18.read().is_01() || !phi_ln66_28_fu_5430_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_25_fu_5408_p18.read()) < sc_bigint<16>(phi_ln66_28_fu_5430_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_96_fu_2721_p2() {
    icmp_ln1496_96_fu_2721_p2 = (!pool_window_0_V_25_fu_2594_p3.read().is_01() || !pool_window_1_V_25_fu_2602_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_25_fu_2594_p3.read()) < sc_biguint<12>(pool_window_1_V_25_fu_2602_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_97_fu_2727_p2() {
    icmp_ln1496_97_fu_2727_p2 = (!pool_window_2_V_25_fu_2610_p3.read().is_01() || !pool_window_3_V_25_fu_2618_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_25_fu_2610_p3.read()) < sc_biguint<12>(pool_window_3_V_25_fu_2618_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_98_fu_4734_p2() {
    icmp_ln1496_98_fu_4734_p2 = (!select_ln66_141_fu_4717_p3.read().is_01() || !select_ln66_143_fu_4729_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_141_fu_4717_p3.read()) < sc_biguint<12>(select_ln66_143_fu_4729_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_99_fu_2733_p2() {
    icmp_ln1496_99_fu_2733_p2 = (!pool_window_4_V_10_fu_2626_p3.read().is_01() || !pool_window_5_V_10_fu_2634_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_10_fu_2626_p3.read()) < sc_biguint<12>(pool_window_5_V_10_fu_2634_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln1496_fu_1736_p2() {
    icmp_ln1496_fu_1736_p2 = (!pool_window_0_V_fu_1609_p3.read().is_01() || !pool_window_1_V_fu_1617_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_fu_1609_p3.read()) < sc_biguint<12>(pool_window_1_V_fu_1617_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln191_4_fu_652_p2() {
    icmp_ln191_4_fu_652_p2 = (!sY_1.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(sY_1.read() == ap_const_lv32_3);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln191_5_fu_550_p2() {
    icmp_ln191_5_fu_550_p2 = (!pY_1.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<1>(): (sc_bigint<32>(pY_1.read()) > sc_bigint<32>(ap_const_lv32_2));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln191_6_fu_560_p2() {
    icmp_ln191_6_fu_560_p2 = (!pX_1.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<1>(): (sc_bigint<32>(pX_1.read()) > sc_bigint<32>(ap_const_lv32_2));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln191_fu_642_p2() {
    icmp_ln191_fu_642_p2 = (!sX_1.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(sX_1.read() == ap_const_lv32_3);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln212_fu_566_p2() {
    icmp_ln212_fu_566_p2 = (!pX_1.read().is_01() || !ap_const_lv32_2D.is_01())? sc_lv<1>(): sc_lv<1>(pX_1.read() == ap_const_lv32_2D);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln216_fu_590_p2() {
    icmp_ln216_fu_590_p2 = (!pY_1.read().is_01() || !ap_const_lv32_2D.is_01())? sc_lv<1>(): sc_lv<1>(pY_1.read() == ap_const_lv32_2D);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_icmp_ln241_fu_534_p2() {
    icmp_ln241_fu_534_p2 = (!indvar_flatten_reg_512.read().is_01() || !ap_const_lv12_844.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_512.read() == ap_const_lv12_844);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_internal_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_io_acc_block_signal_op44() {
    io_acc_block_signal_op44 = (data_V_data_0_V_empty_n.read() & data_V_data_1_V_empty_n.read() & data_V_data_2_V_empty_n.read() & data_V_data_3_V_empty_n.read() & data_V_data_4_V_empty_n.read() & data_V_data_5_V_empty_n.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_io_acc_block_signal_op734() {
    io_acc_block_signal_op734 = (res_V_data_0_V_full_n.read() & res_V_data_1_V_full_n.read() & res_V_data_2_V_full_n.read() & res_V_data_3_V_full_n.read() & res_V_data_4_V_full_n.read() & res_V_data_5_V_full_n.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_0_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5587_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3631_p1() {
    phi_ln66_11_fu_3631_p1 = esl_zext<16,12>(pool_window_0_V_19_reg_5946.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3631_p17() {
    phi_ln66_11_fu_3631_p17 = esl_zext<4,2>(select_ln66_78_fu_3615_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3631_p2() {
    phi_ln66_11_fu_3631_p2 = esl_zext<16,12>(pool_window_1_V_19_reg_5952.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3631_p3() {
    phi_ln66_11_fu_3631_p3 = esl_zext<16,12>(pool_window_2_V_19_reg_5958.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3711_p17() {
    phi_ln66_12_fu_3711_p17 = esl_zext<4,3>(select_ln66_83_fu_3699_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3711_p5() {
    phi_ln66_12_fu_3711_p5 = esl_zext<16,12>(pool_window_4_V_4_reg_5970.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3711_p6() {
    phi_ln66_12_fu_3711_p6 = esl_zext<16,12>(pool_window_5_V_4_reg_5976.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3711_p7() {
    phi_ln66_12_fu_3711_p7 = esl_zext<16,12>(pool_window_6_V_4_reg_5982.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3784_p10() {
    phi_ln66_14_fu_3784_p10 = esl_zext<16,12>(pool_window_9_V_4_reg_5999.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3784_p11() {
    phi_ln66_14_fu_3784_p11 = esl_zext<16,12>(pool_window_10_V_4_reg_6004.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3784_p9() {
    phi_ln66_14_fu_3784_p9 = esl_zext<16,12>(pool_window_8_V_4_reg_5994.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3864_p13() {
    phi_ln66_15_fu_3864_p13 = esl_zext<16,12>(pool_window_12_V_4_reg_6014.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3864_p14() {
    phi_ln66_15_fu_3864_p14 = esl_zext<16,12>(pool_window_13_V_4_reg_6020.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3864_p15() {
    phi_ln66_15_fu_3864_p15 = esl_zext<16,12>(pool_window_14_V_4_reg_6026.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_4006_p1() {
    phi_ln66_17_fu_4006_p1 = esl_zext<16,12>(pool_window_0_V_21_reg_6089.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_4006_p17() {
    phi_ln66_17_fu_4006_p17 = esl_zext<4,2>(select_ln66_100_fu_3990_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_4006_p2() {
    phi_ln66_17_fu_4006_p2 = esl_zext<16,12>(pool_window_1_V_21_reg_6095.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_4006_p3() {
    phi_ln66_17_fu_4006_p3 = esl_zext<16,12>(pool_window_2_V_21_reg_6101.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4086_p17() {
    phi_ln66_18_fu_4086_p17 = esl_zext<4,3>(select_ln66_105_fu_4074_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4086_p5() {
    phi_ln66_18_fu_4086_p5 = esl_zext<16,12>(pool_window_4_V_6_reg_6113.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4086_p6() {
    phi_ln66_18_fu_4086_p6 = esl_zext<16,12>(pool_window_5_V_6_reg_6119.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4086_p7() {
    phi_ln66_18_fu_4086_p7 = esl_zext<16,12>(pool_window_6_V_6_reg_6125.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2961_p17() {
    phi_ln66_1_fu_2961_p17 = esl_zext<4,3>(select_ln66_39_fu_2949_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2961_p5() {
    phi_ln66_1_fu_2961_p5 = esl_zext<16,12>(pool_window_4_V_reg_5684.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2961_p6() {
    phi_ln66_1_fu_2961_p6 = esl_zext<16,12>(pool_window_5_V_reg_5690.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2961_p7() {
    phi_ln66_1_fu_2961_p7 = esl_zext<16,12>(pool_window_6_V_reg_5696.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4159_p10() {
    phi_ln66_20_fu_4159_p10 = esl_zext<16,12>(pool_window_9_V_6_reg_6142.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4159_p11() {
    phi_ln66_20_fu_4159_p11 = esl_zext<16,12>(pool_window_10_V_6_reg_6147.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4159_p9() {
    phi_ln66_20_fu_4159_p9 = esl_zext<16,12>(pool_window_8_V_6_reg_6137.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4239_p13() {
    phi_ln66_21_fu_4239_p13 = esl_zext<16,12>(pool_window_12_V_6_reg_6157.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4239_p14() {
    phi_ln66_21_fu_4239_p14 = esl_zext<16,12>(pool_window_13_V_6_reg_6163.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4239_p15() {
    phi_ln66_21_fu_4239_p15 = esl_zext<16,12>(pool_window_14_V_6_reg_6169.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4381_p1() {
    phi_ln66_23_fu_4381_p1 = esl_zext<16,12>(pool_window_0_V_23_reg_6232.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4381_p17() {
    phi_ln66_23_fu_4381_p17 = esl_zext<4,2>(select_ln66_122_fu_4365_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4381_p2() {
    phi_ln66_23_fu_4381_p2 = esl_zext<16,12>(pool_window_1_V_23_reg_6238.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4381_p3() {
    phi_ln66_23_fu_4381_p3 = esl_zext<16,12>(pool_window_2_V_23_reg_6244.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4461_p17() {
    phi_ln66_24_fu_4461_p17 = esl_zext<4,3>(select_ln66_127_fu_4449_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4461_p5() {
    phi_ln66_24_fu_4461_p5 = esl_zext<16,12>(pool_window_4_V_8_reg_6256.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4461_p6() {
    phi_ln66_24_fu_4461_p6 = esl_zext<16,12>(pool_window_5_V_8_reg_6262.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4461_p7() {
    phi_ln66_24_fu_4461_p7 = esl_zext<16,12>(pool_window_6_V_8_reg_6268.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4534_p10() {
    phi_ln66_26_fu_4534_p10 = esl_zext<16,12>(pool_window_9_V_8_reg_6285.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4534_p11() {
    phi_ln66_26_fu_4534_p11 = esl_zext<16,12>(pool_window_10_V_8_reg_6290.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4534_p9() {
    phi_ln66_26_fu_4534_p9 = esl_zext<16,12>(pool_window_8_V_8_reg_6280.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4614_p13() {
    phi_ln66_27_fu_4614_p13 = esl_zext<16,12>(pool_window_12_V_8_reg_6300.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4614_p14() {
    phi_ln66_27_fu_4614_p14 = esl_zext<16,12>(pool_window_13_V_8_reg_6306.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4614_p15() {
    phi_ln66_27_fu_4614_p15 = esl_zext<16,12>(pool_window_14_V_8_reg_6312.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4756_p1() {
    phi_ln66_29_fu_4756_p1 = esl_zext<16,12>(pool_window_0_V_25_reg_6375.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4756_p17() {
    phi_ln66_29_fu_4756_p17 = esl_zext<4,2>(select_ln66_144_fu_4740_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4756_p2() {
    phi_ln66_29_fu_4756_p2 = esl_zext<16,12>(pool_window_1_V_25_reg_6381.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4756_p3() {
    phi_ln66_29_fu_4756_p3 = esl_zext<16,12>(pool_window_2_V_25_reg_6387.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4836_p17() {
    phi_ln66_30_fu_4836_p17 = esl_zext<4,3>(select_ln66_149_fu_4824_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4836_p5() {
    phi_ln66_30_fu_4836_p5 = esl_zext<16,12>(pool_window_4_V_10_reg_6399.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4836_p6() {
    phi_ln66_30_fu_4836_p6 = esl_zext<16,12>(pool_window_5_V_10_reg_6405.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4836_p7() {
    phi_ln66_30_fu_4836_p7 = esl_zext<16,12>(pool_window_6_V_10_reg_6411.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4909_p10() {
    phi_ln66_32_fu_4909_p10 = esl_zext<16,12>(pool_window_9_V_10_reg_6428.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4909_p11() {
    phi_ln66_32_fu_4909_p11 = esl_zext<16,12>(pool_window_10_V_10_reg_6433.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4909_p9() {
    phi_ln66_32_fu_4909_p9 = esl_zext<16,12>(pool_window_8_V_10_reg_6423.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4989_p13() {
    phi_ln66_33_fu_4989_p13 = esl_zext<16,12>(pool_window_12_V_10_reg_6443.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4989_p14() {
    phi_ln66_33_fu_4989_p14 = esl_zext<16,12>(pool_window_13_V_10_reg_6449.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4989_p15() {
    phi_ln66_33_fu_4989_p15 = esl_zext<16,12>(pool_window_14_V_10_reg_6455.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_3034_p10() {
    phi_ln66_3_fu_3034_p10 = esl_zext<16,12>(pool_window_9_V_reg_5713.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_3034_p11() {
    phi_ln66_3_fu_3034_p11 = esl_zext<16,12>(pool_window_10_V_reg_5718.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_3034_p9() {
    phi_ln66_3_fu_3034_p9 = esl_zext<16,12>(pool_window_8_V_reg_5708.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_3114_p13() {
    phi_ln66_4_fu_3114_p13 = esl_zext<16,12>(pool_window_12_V_reg_5728.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_3114_p14() {
    phi_ln66_4_fu_3114_p14 = esl_zext<16,12>(pool_window_13_V_reg_5734.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_3114_p15() {
    phi_ln66_4_fu_3114_p15 = esl_zext<16,12>(pool_window_14_V_reg_5740.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3256_p1() {
    phi_ln66_6_fu_3256_p1 = esl_zext<16,12>(pool_window_0_V_17_reg_5803.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3256_p17() {
    phi_ln66_6_fu_3256_p17 = esl_zext<4,2>(select_ln66_56_fu_3240_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3256_p2() {
    phi_ln66_6_fu_3256_p2 = esl_zext<16,12>(pool_window_1_V_17_reg_5809.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3256_p3() {
    phi_ln66_6_fu_3256_p3 = esl_zext<16,12>(pool_window_2_V_17_reg_5815.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3336_p17() {
    phi_ln66_7_fu_3336_p17 = esl_zext<4,3>(select_ln66_61_fu_3324_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3336_p5() {
    phi_ln66_7_fu_3336_p5 = esl_zext<16,12>(pool_window_4_V_2_reg_5827.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3336_p6() {
    phi_ln66_7_fu_3336_p6 = esl_zext<16,12>(pool_window_5_V_2_reg_5833.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3336_p7() {
    phi_ln66_7_fu_3336_p7 = esl_zext<16,12>(pool_window_6_V_2_reg_5839.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3409_p10() {
    phi_ln66_9_fu_3409_p10 = esl_zext<16,12>(pool_window_9_V_2_reg_5856.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3409_p11() {
    phi_ln66_9_fu_3409_p11 = esl_zext<16,12>(pool_window_10_V_2_reg_5861.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3409_p9() {
    phi_ln66_9_fu_3409_p9 = esl_zext<16,12>(pool_window_8_V_2_reg_5851.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3489_p13() {
    phi_ln66_s_fu_3489_p13 = esl_zext<16,12>(pool_window_12_V_2_reg_5871.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3489_p14() {
    phi_ln66_s_fu_3489_p14 = esl_zext<16,12>(pool_window_13_V_2_reg_5877.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3489_p15() {
    phi_ln66_s_fu_3489_p15 = esl_zext<16,12>(pool_window_14_V_2_reg_5883.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2881_p1() {
    phi_ln_fu_2881_p1 = esl_zext<16,12>(pool_window_0_V_reg_5660.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2881_p17() {
    phi_ln_fu_2881_p17 = esl_zext<4,2>(select_ln66_34_fu_2865_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2881_p2() {
    phi_ln_fu_2881_p2 = esl_zext<16,12>(pool_window_1_V_reg_5666.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2881_p3() {
    phi_ln_fu_2881_p3 = esl_zext<16,12>(pool_window_2_V_reg_5672.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_16_fu_2791_p1() {
    pool_window_0_V_16_fu_2791_p1 = esl_zext<16,12>(pool_window_0_V_reg_5660.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_17_fu_1806_p3() {
    pool_window_0_V_17_fu_1806_p3 = esl_concat<8,4>(kernel_data_V_4_7.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_18_fu_3166_p1() {
    pool_window_0_V_18_fu_3166_p1 = esl_zext<16,12>(pool_window_0_V_17_reg_5803.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_19_fu_2003_p3() {
    pool_window_0_V_19_fu_2003_p3 = esl_concat<8,4>(kernel_data_V_4_8.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_20_fu_3541_p1() {
    pool_window_0_V_20_fu_3541_p1 = esl_zext<16,12>(pool_window_0_V_19_reg_5946.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_21_fu_2200_p3() {
    pool_window_0_V_21_fu_2200_p3 = esl_concat<8,4>(kernel_data_V_4_9.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_22_fu_3916_p1() {
    pool_window_0_V_22_fu_3916_p1 = esl_zext<16,12>(pool_window_0_V_21_reg_6089.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_23_fu_2397_p3() {
    pool_window_0_V_23_fu_2397_p3 = esl_concat<8,4>(kernel_data_V_4_10.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_24_fu_4291_p1() {
    pool_window_0_V_24_fu_4291_p1 = esl_zext<16,12>(pool_window_0_V_23_reg_6232.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_25_fu_2594_p3() {
    pool_window_0_V_25_fu_2594_p3 = esl_concat<8,4>(kernel_data_V_4_11.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_26_fu_4666_p1() {
    pool_window_0_V_26_fu_4666_p1 = esl_zext<16,12>(pool_window_0_V_25_reg_6375.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_0_V_fu_1609_p3() {
    pool_window_0_V_fu_1609_p3 = esl_concat<8,4>(kernel_data_V_4_6.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_10_fu_2674_p3() {
    pool_window_10_V_10_fu_2674_p3 = esl_concat<8,4>(kernel_data_V_4_71.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_11_fu_4696_p1() {
    pool_window_10_V_11_fu_4696_p1 = esl_zext<16,12>(pool_window_10_V_10_reg_6433.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_1_fu_2821_p1() {
    pool_window_10_V_1_fu_2821_p1 = esl_zext<16,12>(pool_window_10_V_reg_5718.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_2_fu_1886_p3() {
    pool_window_10_V_2_fu_1886_p3 = esl_concat<8,4>(kernel_data_V_4_67.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_3_fu_3196_p1() {
    pool_window_10_V_3_fu_3196_p1 = esl_zext<16,12>(pool_window_10_V_2_reg_5861.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_4_fu_2083_p3() {
    pool_window_10_V_4_fu_2083_p3 = esl_concat<8,4>(kernel_data_V_4_68.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_5_fu_3571_p1() {
    pool_window_10_V_5_fu_3571_p1 = esl_zext<16,12>(pool_window_10_V_4_reg_6004.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_6_fu_2280_p3() {
    pool_window_10_V_6_fu_2280_p3 = esl_concat<8,4>(kernel_data_V_4_69.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_7_fu_3946_p1() {
    pool_window_10_V_7_fu_3946_p1 = esl_zext<16,12>(pool_window_10_V_6_reg_6147.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_8_fu_2477_p3() {
    pool_window_10_V_8_fu_2477_p3 = esl_concat<8,4>(kernel_data_V_4_70.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_9_fu_4321_p1() {
    pool_window_10_V_9_fu_4321_p1 = esl_zext<16,12>(pool_window_10_V_8_reg_6290.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_10_V_fu_1689_p3() {
    pool_window_10_V_fu_1689_p3 = esl_concat<8,4>(kernel_data_V_4_66.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_10_fu_2682_p3() {
    pool_window_11_V_10_fu_2682_p3 = esl_concat<8,4>(line_buffer_Array_V_4_0_5_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_11_fu_4699_p1() {
    pool_window_11_V_11_fu_4699_p1 = esl_zext<16,12>(pool_window_11_V_10_reg_6438.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_1_fu_2824_p1() {
    pool_window_11_V_1_fu_2824_p1 = esl_zext<16,12>(pool_window_11_V_reg_5723.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_2_fu_1894_p3() {
    pool_window_11_V_2_fu_1894_p3 = esl_concat<8,4>(line_buffer_Array_V_4_0_1_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_3_fu_3199_p1() {
    pool_window_11_V_3_fu_3199_p1 = esl_zext<16,12>(pool_window_11_V_2_reg_5866.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_4_fu_2091_p3() {
    pool_window_11_V_4_fu_2091_p3 = esl_concat<8,4>(line_buffer_Array_V_4_0_2_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_5_fu_3574_p1() {
    pool_window_11_V_5_fu_3574_p1 = esl_zext<16,12>(pool_window_11_V_4_reg_6009.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_6_fu_2288_p3() {
    pool_window_11_V_6_fu_2288_p3 = esl_concat<8,4>(line_buffer_Array_V_4_0_3_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_7_fu_3949_p1() {
    pool_window_11_V_7_fu_3949_p1 = esl_zext<16,12>(pool_window_11_V_6_reg_6152.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_8_fu_2485_p3() {
    pool_window_11_V_8_fu_2485_p3 = esl_concat<8,4>(line_buffer_Array_V_4_0_4_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_9_fu_4324_p1() {
    pool_window_11_V_9_fu_4324_p1 = esl_zext<16,12>(pool_window_11_V_8_reg_6295.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_11_V_fu_1697_p3() {
    pool_window_11_V_fu_1697_p3 = esl_concat<8,4>(line_buffer_Array_V_4_0_0_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_10_fu_2690_p3() {
    pool_window_12_V_10_fu_2690_p3 = esl_concat<8,4>(kernel_data_V_4_83.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_11_fu_4702_p1() {
    pool_window_12_V_11_fu_4702_p1 = esl_zext<16,12>(pool_window_12_V_10_reg_6443.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_1_fu_2827_p1() {
    pool_window_12_V_1_fu_2827_p1 = esl_zext<16,12>(pool_window_12_V_reg_5728.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_2_fu_1902_p3() {
    pool_window_12_V_2_fu_1902_p3 = esl_concat<8,4>(kernel_data_V_4_79.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_3_fu_3202_p1() {
    pool_window_12_V_3_fu_3202_p1 = esl_zext<16,12>(pool_window_12_V_2_reg_5871.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_4_fu_2099_p3() {
    pool_window_12_V_4_fu_2099_p3 = esl_concat<8,4>(kernel_data_V_4_80.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_5_fu_3577_p1() {
    pool_window_12_V_5_fu_3577_p1 = esl_zext<16,12>(pool_window_12_V_4_reg_6014.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_6_fu_2296_p3() {
    pool_window_12_V_6_fu_2296_p3 = esl_concat<8,4>(kernel_data_V_4_81.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_7_fu_3952_p1() {
    pool_window_12_V_7_fu_3952_p1 = esl_zext<16,12>(pool_window_12_V_6_reg_6157.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_8_fu_2493_p3() {
    pool_window_12_V_8_fu_2493_p3 = esl_concat<8,4>(kernel_data_V_4_82.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_9_fu_4327_p1() {
    pool_window_12_V_9_fu_4327_p1 = esl_zext<16,12>(pool_window_12_V_8_reg_6300.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_12_V_fu_1705_p3() {
    pool_window_12_V_fu_1705_p3 = esl_concat<8,4>(kernel_data_V_4_78.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_10_fu_2698_p3() {
    pool_window_13_V_10_fu_2698_p3 = esl_concat<8,4>(kernel_data_V_4_89.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_11_fu_4705_p1() {
    pool_window_13_V_11_fu_4705_p1 = esl_zext<16,12>(pool_window_13_V_10_reg_6449.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_1_fu_2830_p1() {
    pool_window_13_V_1_fu_2830_p1 = esl_zext<16,12>(pool_window_13_V_reg_5734.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_2_fu_1910_p3() {
    pool_window_13_V_2_fu_1910_p3 = esl_concat<8,4>(kernel_data_V_4_85.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_3_fu_3205_p1() {
    pool_window_13_V_3_fu_3205_p1 = esl_zext<16,12>(pool_window_13_V_2_reg_5877.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_4_fu_2107_p3() {
    pool_window_13_V_4_fu_2107_p3 = esl_concat<8,4>(kernel_data_V_4_86.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_5_fu_3580_p1() {
    pool_window_13_V_5_fu_3580_p1 = esl_zext<16,12>(pool_window_13_V_4_reg_6020.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_6_fu_2304_p3() {
    pool_window_13_V_6_fu_2304_p3 = esl_concat<8,4>(kernel_data_V_4_87.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_7_fu_3955_p1() {
    pool_window_13_V_7_fu_3955_p1 = esl_zext<16,12>(pool_window_13_V_6_reg_6163.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_8_fu_2501_p3() {
    pool_window_13_V_8_fu_2501_p3 = esl_concat<8,4>(kernel_data_V_4_88.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_9_fu_4330_p1() {
    pool_window_13_V_9_fu_4330_p1 = esl_zext<16,12>(pool_window_13_V_8_reg_6306.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_13_V_fu_1713_p3() {
    pool_window_13_V_fu_1713_p3 = esl_concat<8,4>(kernel_data_V_4_84.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_10_fu_2706_p3() {
    pool_window_14_V_10_fu_2706_p3 = esl_concat<8,4>(kernel_data_V_4_95.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_11_fu_4708_p1() {
    pool_window_14_V_11_fu_4708_p1 = esl_zext<16,12>(pool_window_14_V_10_reg_6455.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_1_fu_2833_p1() {
    pool_window_14_V_1_fu_2833_p1 = esl_zext<16,12>(pool_window_14_V_reg_5740.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_2_fu_1918_p3() {
    pool_window_14_V_2_fu_1918_p3 = esl_concat<8,4>(kernel_data_V_4_91.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_3_fu_3208_p1() {
    pool_window_14_V_3_fu_3208_p1 = esl_zext<16,12>(pool_window_14_V_2_reg_5883.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_4_fu_2115_p3() {
    pool_window_14_V_4_fu_2115_p3 = esl_concat<8,4>(kernel_data_V_4_92.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_5_fu_3583_p1() {
    pool_window_14_V_5_fu_3583_p1 = esl_zext<16,12>(pool_window_14_V_4_reg_6026.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_6_fu_2312_p3() {
    pool_window_14_V_6_fu_2312_p3 = esl_concat<8,4>(kernel_data_V_4_93.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_7_fu_3958_p1() {
    pool_window_14_V_7_fu_3958_p1 = esl_zext<16,12>(pool_window_14_V_6_reg_6169.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_8_fu_2509_p3() {
    pool_window_14_V_8_fu_2509_p3 = esl_concat<8,4>(kernel_data_V_4_94.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_9_fu_4333_p1() {
    pool_window_14_V_9_fu_4333_p1 = esl_zext<16,12>(pool_window_14_V_8_reg_6312.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_14_V_fu_1721_p3() {
    pool_window_14_V_fu_1721_p3 = esl_concat<8,4>(kernel_data_V_4_90.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_10_fu_2714_p3() {
    pool_window_15_V_10_fu_2714_p3 = esl_concat<8,4>(shift_buffer_3_5_V_reg_5649.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_11_fu_4711_p1() {
    pool_window_15_V_11_fu_4711_p1 = esl_zext<16,12>(pool_window_15_V_10_reg_6461.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_1_fu_2836_p1() {
    pool_window_15_V_1_fu_2836_p1 = esl_zext<16,12>(pool_window_15_V_reg_5746.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_2_fu_1926_p3() {
    pool_window_15_V_2_fu_1926_p3 = esl_concat<8,4>(shift_buffer_3_1_V_reg_5621.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_3_fu_3211_p1() {
    pool_window_15_V_3_fu_3211_p1 = esl_zext<16,12>(pool_window_15_V_2_reg_5889.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_4_fu_2123_p3() {
    pool_window_15_V_4_fu_2123_p3 = esl_concat<8,4>(shift_buffer_3_2_V_reg_5628.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_5_fu_3586_p1() {
    pool_window_15_V_5_fu_3586_p1 = esl_zext<16,12>(pool_window_15_V_4_reg_6032.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_6_fu_2320_p3() {
    pool_window_15_V_6_fu_2320_p3 = esl_concat<8,4>(shift_buffer_3_3_V_reg_5635.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_7_fu_3961_p1() {
    pool_window_15_V_7_fu_3961_p1 = esl_zext<16,12>(pool_window_15_V_6_reg_6175.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_8_fu_2517_p3() {
    pool_window_15_V_8_fu_2517_p3 = esl_concat<8,4>(shift_buffer_3_4_V_reg_5642.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_9_fu_4336_p1() {
    pool_window_15_V_9_fu_4336_p1 = esl_zext<16,12>(pool_window_15_V_8_reg_6318.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_15_V_fu_1729_p3() {
    pool_window_15_V_fu_1729_p3 = esl_concat<8,4>(shift_buffer_3_0_V_reg_5614.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_16_fu_2794_p1() {
    pool_window_1_V_16_fu_2794_p1 = esl_zext<16,12>(pool_window_1_V_reg_5666.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_17_fu_1814_p3() {
    pool_window_1_V_17_fu_1814_p3 = esl_concat<8,4>(kernel_data_V_4_13.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_18_fu_3169_p1() {
    pool_window_1_V_18_fu_3169_p1 = esl_zext<16,12>(pool_window_1_V_17_reg_5809.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_19_fu_2011_p3() {
    pool_window_1_V_19_fu_2011_p3 = esl_concat<8,4>(kernel_data_V_4_14.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_20_fu_3544_p1() {
    pool_window_1_V_20_fu_3544_p1 = esl_zext<16,12>(pool_window_1_V_19_reg_5952.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_21_fu_2208_p3() {
    pool_window_1_V_21_fu_2208_p3 = esl_concat<8,4>(kernel_data_V_4_15.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_22_fu_3919_p1() {
    pool_window_1_V_22_fu_3919_p1 = esl_zext<16,12>(pool_window_1_V_21_reg_6095.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_23_fu_2405_p3() {
    pool_window_1_V_23_fu_2405_p3 = esl_concat<8,4>(kernel_data_V_4_16.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_24_fu_4294_p1() {
    pool_window_1_V_24_fu_4294_p1 = esl_zext<16,12>(pool_window_1_V_23_reg_6238.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_25_fu_2602_p3() {
    pool_window_1_V_25_fu_2602_p3 = esl_concat<8,4>(kernel_data_V_4_17.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_26_fu_4669_p1() {
    pool_window_1_V_26_fu_4669_p1 = esl_zext<16,12>(pool_window_1_V_25_reg_6381.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_1_V_fu_1617_p3() {
    pool_window_1_V_fu_1617_p3 = esl_concat<8,4>(kernel_data_V_4_12.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_16_fu_2797_p1() {
    pool_window_2_V_16_fu_2797_p1 = esl_zext<16,12>(pool_window_2_V_reg_5672.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_17_fu_1822_p3() {
    pool_window_2_V_17_fu_1822_p3 = esl_concat<8,4>(kernel_data_V_4_19.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_18_fu_3172_p1() {
    pool_window_2_V_18_fu_3172_p1 = esl_zext<16,12>(pool_window_2_V_17_reg_5815.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_19_fu_2019_p3() {
    pool_window_2_V_19_fu_2019_p3 = esl_concat<8,4>(kernel_data_V_4_20.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_20_fu_3547_p1() {
    pool_window_2_V_20_fu_3547_p1 = esl_zext<16,12>(pool_window_2_V_19_reg_5958.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_21_fu_2216_p3() {
    pool_window_2_V_21_fu_2216_p3 = esl_concat<8,4>(kernel_data_V_4_21.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_22_fu_3922_p1() {
    pool_window_2_V_22_fu_3922_p1 = esl_zext<16,12>(pool_window_2_V_21_reg_6101.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_23_fu_2413_p3() {
    pool_window_2_V_23_fu_2413_p3 = esl_concat<8,4>(kernel_data_V_4_22.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_24_fu_4297_p1() {
    pool_window_2_V_24_fu_4297_p1 = esl_zext<16,12>(pool_window_2_V_23_reg_6244.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_25_fu_2610_p3() {
    pool_window_2_V_25_fu_2610_p3 = esl_concat<8,4>(kernel_data_V_4_23.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_26_fu_4672_p1() {
    pool_window_2_V_26_fu_4672_p1 = esl_zext<16,12>(pool_window_2_V_25_reg_6387.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_2_V_fu_1625_p3() {
    pool_window_2_V_fu_1625_p3 = esl_concat<8,4>(kernel_data_V_4_18.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_16_fu_2800_p1() {
    pool_window_3_V_16_fu_2800_p1 = esl_zext<16,12>(pool_window_3_V_reg_5678.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_17_fu_1830_p3() {
    pool_window_3_V_17_fu_1830_p3 = esl_concat<8,4>(line_buffer_Array_V_4_2_1_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_18_fu_3175_p1() {
    pool_window_3_V_18_fu_3175_p1 = esl_zext<16,12>(pool_window_3_V_17_reg_5821.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_19_fu_2027_p3() {
    pool_window_3_V_19_fu_2027_p3 = esl_concat<8,4>(line_buffer_Array_V_4_2_2_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_20_fu_3550_p1() {
    pool_window_3_V_20_fu_3550_p1 = esl_zext<16,12>(pool_window_3_V_19_reg_5964.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_21_fu_2224_p3() {
    pool_window_3_V_21_fu_2224_p3 = esl_concat<8,4>(line_buffer_Array_V_4_2_3_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_22_fu_3925_p1() {
    pool_window_3_V_22_fu_3925_p1 = esl_zext<16,12>(pool_window_3_V_21_reg_6107.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_23_fu_2421_p3() {
    pool_window_3_V_23_fu_2421_p3 = esl_concat<8,4>(line_buffer_Array_V_4_2_4_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_24_fu_4300_p1() {
    pool_window_3_V_24_fu_4300_p1 = esl_zext<16,12>(pool_window_3_V_23_reg_6250.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_25_fu_2618_p3() {
    pool_window_3_V_25_fu_2618_p3 = esl_concat<8,4>(line_buffer_Array_V_4_2_5_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_26_fu_4675_p1() {
    pool_window_3_V_26_fu_4675_p1 = esl_zext<16,12>(pool_window_3_V_25_reg_6393.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_3_V_fu_1633_p3() {
    pool_window_3_V_fu_1633_p3 = esl_concat<8,4>(line_buffer_Array_V_4_2_0_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_10_fu_2626_p3() {
    pool_window_4_V_10_fu_2626_p3 = esl_concat<8,4>(kernel_data_V_4_35.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_11_fu_4678_p1() {
    pool_window_4_V_11_fu_4678_p1 = esl_zext<16,12>(pool_window_4_V_10_reg_6399.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_1_fu_2803_p1() {
    pool_window_4_V_1_fu_2803_p1 = esl_zext<16,12>(pool_window_4_V_reg_5684.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_2_fu_1838_p3() {
    pool_window_4_V_2_fu_1838_p3 = esl_concat<8,4>(kernel_data_V_4_31.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_3_fu_3178_p1() {
    pool_window_4_V_3_fu_3178_p1 = esl_zext<16,12>(pool_window_4_V_2_reg_5827.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_4_fu_2035_p3() {
    pool_window_4_V_4_fu_2035_p3 = esl_concat<8,4>(kernel_data_V_4_32.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_5_fu_3553_p1() {
    pool_window_4_V_5_fu_3553_p1 = esl_zext<16,12>(pool_window_4_V_4_reg_5970.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_6_fu_2232_p3() {
    pool_window_4_V_6_fu_2232_p3 = esl_concat<8,4>(kernel_data_V_4_33.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_7_fu_3928_p1() {
    pool_window_4_V_7_fu_3928_p1 = esl_zext<16,12>(pool_window_4_V_6_reg_6113.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_8_fu_2429_p3() {
    pool_window_4_V_8_fu_2429_p3 = esl_concat<8,4>(kernel_data_V_4_34.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_9_fu_4303_p1() {
    pool_window_4_V_9_fu_4303_p1 = esl_zext<16,12>(pool_window_4_V_8_reg_6256.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_4_V_fu_1641_p3() {
    pool_window_4_V_fu_1641_p3 = esl_concat<8,4>(kernel_data_V_4_30.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_10_fu_2634_p3() {
    pool_window_5_V_10_fu_2634_p3 = esl_concat<8,4>(kernel_data_V_4_41.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_11_fu_4681_p1() {
    pool_window_5_V_11_fu_4681_p1 = esl_zext<16,12>(pool_window_5_V_10_reg_6405.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_1_fu_2806_p1() {
    pool_window_5_V_1_fu_2806_p1 = esl_zext<16,12>(pool_window_5_V_reg_5690.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_2_fu_1846_p3() {
    pool_window_5_V_2_fu_1846_p3 = esl_concat<8,4>(kernel_data_V_4_37.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_3_fu_3181_p1() {
    pool_window_5_V_3_fu_3181_p1 = esl_zext<16,12>(pool_window_5_V_2_reg_5833.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_4_fu_2043_p3() {
    pool_window_5_V_4_fu_2043_p3 = esl_concat<8,4>(kernel_data_V_4_38.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_5_fu_3556_p1() {
    pool_window_5_V_5_fu_3556_p1 = esl_zext<16,12>(pool_window_5_V_4_reg_5976.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_6_fu_2240_p3() {
    pool_window_5_V_6_fu_2240_p3 = esl_concat<8,4>(kernel_data_V_4_39.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_7_fu_3931_p1() {
    pool_window_5_V_7_fu_3931_p1 = esl_zext<16,12>(pool_window_5_V_6_reg_6119.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_8_fu_2437_p3() {
    pool_window_5_V_8_fu_2437_p3 = esl_concat<8,4>(kernel_data_V_4_40.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_9_fu_4306_p1() {
    pool_window_5_V_9_fu_4306_p1 = esl_zext<16,12>(pool_window_5_V_8_reg_6262.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_5_V_fu_1649_p3() {
    pool_window_5_V_fu_1649_p3 = esl_concat<8,4>(kernel_data_V_4_36.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_10_fu_2642_p3() {
    pool_window_6_V_10_fu_2642_p3 = esl_concat<8,4>(kernel_data_V_4_47.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_11_fu_4684_p1() {
    pool_window_6_V_11_fu_4684_p1 = esl_zext<16,12>(pool_window_6_V_10_reg_6411.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_1_fu_2809_p1() {
    pool_window_6_V_1_fu_2809_p1 = esl_zext<16,12>(pool_window_6_V_reg_5696.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_2_fu_1854_p3() {
    pool_window_6_V_2_fu_1854_p3 = esl_concat<8,4>(kernel_data_V_4_43.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_3_fu_3184_p1() {
    pool_window_6_V_3_fu_3184_p1 = esl_zext<16,12>(pool_window_6_V_2_reg_5839.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_4_fu_2051_p3() {
    pool_window_6_V_4_fu_2051_p3 = esl_concat<8,4>(kernel_data_V_4_44.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_5_fu_3559_p1() {
    pool_window_6_V_5_fu_3559_p1 = esl_zext<16,12>(pool_window_6_V_4_reg_5982.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_6_fu_2248_p3() {
    pool_window_6_V_6_fu_2248_p3 = esl_concat<8,4>(kernel_data_V_4_45.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_7_fu_3934_p1() {
    pool_window_6_V_7_fu_3934_p1 = esl_zext<16,12>(pool_window_6_V_6_reg_6125.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_8_fu_2445_p3() {
    pool_window_6_V_8_fu_2445_p3 = esl_concat<8,4>(kernel_data_V_4_46.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_9_fu_4309_p1() {
    pool_window_6_V_9_fu_4309_p1 = esl_zext<16,12>(pool_window_6_V_8_reg_6268.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_6_V_fu_1657_p3() {
    pool_window_6_V_fu_1657_p3 = esl_concat<8,4>(kernel_data_V_4_42.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_10_fu_2650_p3() {
    pool_window_7_V_10_fu_2650_p3 = esl_concat<8,4>(line_buffer_Array_V_4_1_5_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_11_fu_4687_p1() {
    pool_window_7_V_11_fu_4687_p1 = esl_zext<16,12>(pool_window_7_V_10_reg_6417.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_1_fu_2812_p1() {
    pool_window_7_V_1_fu_2812_p1 = esl_zext<16,12>(pool_window_7_V_reg_5702.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_2_fu_1862_p3() {
    pool_window_7_V_2_fu_1862_p3 = esl_concat<8,4>(line_buffer_Array_V_4_1_1_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_3_fu_3187_p1() {
    pool_window_7_V_3_fu_3187_p1 = esl_zext<16,12>(pool_window_7_V_2_reg_5845.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_4_fu_2059_p3() {
    pool_window_7_V_4_fu_2059_p3 = esl_concat<8,4>(line_buffer_Array_V_4_1_2_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_5_fu_3562_p1() {
    pool_window_7_V_5_fu_3562_p1 = esl_zext<16,12>(pool_window_7_V_4_reg_5988.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_6_fu_2256_p3() {
    pool_window_7_V_6_fu_2256_p3 = esl_concat<8,4>(line_buffer_Array_V_4_1_3_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_7_fu_3937_p1() {
    pool_window_7_V_7_fu_3937_p1 = esl_zext<16,12>(pool_window_7_V_6_reg_6131.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_8_fu_2453_p3() {
    pool_window_7_V_8_fu_2453_p3 = esl_concat<8,4>(line_buffer_Array_V_4_1_4_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_9_fu_4312_p1() {
    pool_window_7_V_9_fu_4312_p1 = esl_zext<16,12>(pool_window_7_V_8_reg_6274.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_7_V_fu_1665_p3() {
    pool_window_7_V_fu_1665_p3 = esl_concat<8,4>(line_buffer_Array_V_4_1_0_q0.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_10_fu_2658_p3() {
    pool_window_8_V_10_fu_2658_p3 = esl_concat<8,4>(kernel_data_V_4_59.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_11_fu_4690_p1() {
    pool_window_8_V_11_fu_4690_p1 = esl_zext<16,12>(pool_window_8_V_10_reg_6423.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_1_fu_2815_p1() {
    pool_window_8_V_1_fu_2815_p1 = esl_zext<16,12>(pool_window_8_V_reg_5708.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_2_fu_1870_p3() {
    pool_window_8_V_2_fu_1870_p3 = esl_concat<8,4>(kernel_data_V_4_55.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_3_fu_3190_p1() {
    pool_window_8_V_3_fu_3190_p1 = esl_zext<16,12>(pool_window_8_V_2_reg_5851.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_4_fu_2067_p3() {
    pool_window_8_V_4_fu_2067_p3 = esl_concat<8,4>(kernel_data_V_4_56.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_5_fu_3565_p1() {
    pool_window_8_V_5_fu_3565_p1 = esl_zext<16,12>(pool_window_8_V_4_reg_5994.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_6_fu_2264_p3() {
    pool_window_8_V_6_fu_2264_p3 = esl_concat<8,4>(kernel_data_V_4_57.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_7_fu_3940_p1() {
    pool_window_8_V_7_fu_3940_p1 = esl_zext<16,12>(pool_window_8_V_6_reg_6137.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_8_fu_2461_p3() {
    pool_window_8_V_8_fu_2461_p3 = esl_concat<8,4>(kernel_data_V_4_58.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_9_fu_4315_p1() {
    pool_window_8_V_9_fu_4315_p1 = esl_zext<16,12>(pool_window_8_V_8_reg_6280.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_8_V_fu_1673_p3() {
    pool_window_8_V_fu_1673_p3 = esl_concat<8,4>(kernel_data_V_4_54.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_10_fu_2666_p3() {
    pool_window_9_V_10_fu_2666_p3 = esl_concat<8,4>(kernel_data_V_4_65.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_11_fu_4693_p1() {
    pool_window_9_V_11_fu_4693_p1 = esl_zext<16,12>(pool_window_9_V_10_reg_6428.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_1_fu_2818_p1() {
    pool_window_9_V_1_fu_2818_p1 = esl_zext<16,12>(pool_window_9_V_reg_5713.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_2_fu_1878_p3() {
    pool_window_9_V_2_fu_1878_p3 = esl_concat<8,4>(kernel_data_V_4_61.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_3_fu_3193_p1() {
    pool_window_9_V_3_fu_3193_p1 = esl_zext<16,12>(pool_window_9_V_2_reg_5856.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_4_fu_2075_p3() {
    pool_window_9_V_4_fu_2075_p3 = esl_concat<8,4>(kernel_data_V_4_62.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_5_fu_3568_p1() {
    pool_window_9_V_5_fu_3568_p1 = esl_zext<16,12>(pool_window_9_V_4_reg_5999.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_6_fu_2272_p3() {
    pool_window_9_V_6_fu_2272_p3 = esl_concat<8,4>(kernel_data_V_4_63.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_7_fu_3943_p1() {
    pool_window_9_V_7_fu_3943_p1 = esl_zext<16,12>(pool_window_9_V_6_reg_6142.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_8_fu_2469_p3() {
    pool_window_9_V_8_fu_2469_p3 = esl_concat<8,4>(kernel_data_V_4_64.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_9_fu_4318_p1() {
    pool_window_9_V_9_fu_4318_p1 = esl_zext<16,12>(pool_window_9_V_8_reg_6285.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_pool_window_9_V_fu_1681_p3() {
    pool_window_9_V_fu_1681_p3 = esl_concat<8,4>(kernel_data_V_4_60.read(), ap_const_lv4_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_0_V_blk_n = res_V_data_0_V_full_n.read();
    } else {
        res_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_0_V_din() {
    res_V_data_0_V_din = tmp_data_0_V_reg_7256.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_0_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_0_V_write = ap_const_logic_1;
    } else {
        res_V_data_0_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_1_V_blk_n = res_V_data_1_V_full_n.read();
    } else {
        res_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_1_V_din() {
    res_V_data_1_V_din = tmp_data_1_V_reg_7261.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_1_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_1_V_write = ap_const_logic_1;
    } else {
        res_V_data_1_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_2_V_blk_n = res_V_data_2_V_full_n.read();
    } else {
        res_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_2_V_din() {
    res_V_data_2_V_din = tmp_data_2_V_reg_7266.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_2_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_2_V_write = ap_const_logic_1;
    } else {
        res_V_data_2_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_3_V_blk_n = res_V_data_3_V_full_n.read();
    } else {
        res_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_3_V_din() {
    res_V_data_3_V_din = tmp_data_3_V_reg_7271.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_3_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_3_V_write = ap_const_logic_1;
    } else {
        res_V_data_3_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_4_V_blk_n = res_V_data_4_V_full_n.read();
    } else {
        res_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_4_V_din() {
    res_V_data_4_V_din = tmp_data_4_V_reg_7276.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_4_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_4_V_write = ap_const_logic_1;
    } else {
        res_V_data_4_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_5_V_blk_n = res_V_data_5_V_full_n.read();
    } else {
        res_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_5_V_din() {
    res_V_data_5_V_din = tmp_data_5_V_reg_7281.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_res_V_data_5_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5656_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_5_V_write = ap_const_logic_1;
    } else {
        res_V_data_5_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln222_fu_706_p3() {
    select_ln222_fu_706_p3 = (!icmp_ln191_4_fu_652_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln191_4_fu_652_p2.read()[0].to_bool())? ap_const_lv32_0: add_ln222_fu_700_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln227_fu_680_p3() {
    select_ln227_fu_680_p3 = (!icmp_ln191_fu_642_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln191_fu_642_p2.read()[0].to_bool())? ap_const_lv32_0: add_ln227_fu_674_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_100_fu_3990_p3() {
    select_ln66_100_fu_3990_p3 = (!icmp_ln1496_68_fu_3984_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_68_fu_3984_p2.read()[0].to_bool())? select_ln66_98_fu_3972_p3.read(): zext_ln66_16_fu_3964_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_101_fu_4044_p3() {
    select_ln66_101_fu_4044_p3 = (!icmp_ln1496_69_reg_6193.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_69_reg_6193.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_102_fu_4051_p3() {
    select_ln66_102_fu_4051_p3 = (!icmp_ln1496_69_reg_6193.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_69_reg_6193.read()[0].to_bool())? pool_window_5_V_6_reg_6119.read(): pool_window_4_V_6_reg_6113.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_103_fu_4056_p3() {
    select_ln66_103_fu_4056_p3 = (!icmp_ln1496_70_reg_6199.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_70_reg_6199.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_104_fu_4063_p3() {
    select_ln66_104_fu_4063_p3 = (!icmp_ln1496_70_reg_6199.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_70_reg_6199.read()[0].to_bool())? pool_window_7_V_6_reg_6131.read(): pool_window_6_V_6_reg_6125.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_105_fu_4074_p3() {
    select_ln66_105_fu_4074_p3 = (!icmp_ln1496_71_fu_4068_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_71_fu_4068_p2.read()[0].to_bool())? select_ln66_103_fu_4056_p3.read(): select_ln66_101_fu_4044_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_106_fu_4130_p3() {
    select_ln66_106_fu_4130_p3 = (!icmp_ln1496_72_fu_4124_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_72_fu_4124_p2.read()[0].to_bool())? select_ln66_105_fu_4074_p3.read(): zext_ln66_17_fu_3998_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_107_fu_4138_p3() {
    select_ln66_107_fu_4138_p3 = (!icmp_ln1496_73_reg_6205.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_73_reg_6205.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_108_fu_2357_p3() {
    select_ln66_108_fu_2357_p3 = (!icmp_ln1496_73_fu_2351_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_73_fu_2351_p2.read()[0].to_bool())? pool_window_9_V_6_fu_2272_p3.read(): pool_window_8_V_6_fu_2264_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_109_fu_4145_p3() {
    select_ln66_109_fu_4145_p3 = (!icmp_ln1496_74_reg_6210.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_74_reg_6210.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_110_fu_2371_p3() {
    select_ln66_110_fu_2371_p3 = (!icmp_ln1496_74_fu_2365_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_74_fu_2365_p2.read()[0].to_bool())? pool_window_11_V_6_fu_2288_p3.read(): pool_window_10_V_6_fu_2280_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_111_fu_4152_p3() {
    select_ln66_111_fu_4152_p3 = (!icmp_ln1496_75_reg_6215.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_75_reg_6215.read()[0].to_bool())? select_ln66_109_fu_4145_p3.read(): select_ln66_107_fu_4138_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_112_fu_4197_p3() {
    select_ln66_112_fu_4197_p3 = (!icmp_ln1496_76_reg_6220.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_76_reg_6220.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_113_fu_4204_p3() {
    select_ln66_113_fu_4204_p3 = (!icmp_ln1496_76_reg_6220.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_76_reg_6220.read()[0].to_bool())? pool_window_13_V_6_reg_6163.read(): pool_window_12_V_6_reg_6157.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_114_fu_4209_p3() {
    select_ln66_114_fu_4209_p3 = (!icmp_ln1496_77_reg_6226.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_77_reg_6226.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_115_fu_4216_p3() {
    select_ln66_115_fu_4216_p3 = (!icmp_ln1496_77_reg_6226.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_77_reg_6226.read()[0].to_bool())? pool_window_15_V_6_reg_6175.read(): pool_window_14_V_6_reg_6169.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_116_fu_4227_p3() {
    select_ln66_116_fu_4227_p3 = (!icmp_ln1496_78_fu_4221_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_78_fu_4221_p2.read()[0].to_bool())? select_ln66_114_fu_4209_p3.read(): select_ln66_112_fu_4197_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_117_fu_4283_p3() {
    select_ln66_117_fu_4283_p3 = (!icmp_ln1496_79_fu_4277_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_79_fu_4277_p2.read()[0].to_bool())? sext_ln66_3_fu_4235_p1.read(): select_ln66_111_fu_4152_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_119_fu_4342_p3() {
    select_ln66_119_fu_4342_p3 = (!icmp_ln1496_81_reg_6324.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_81_reg_6324.read()[0].to_bool())? pool_window_1_V_23_reg_6238.read(): pool_window_0_V_23_reg_6232.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_120_fu_4347_p3() {
    select_ln66_120_fu_4347_p3 = (!icmp_ln1496_82_reg_6330.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_82_reg_6330.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_121_fu_4354_p3() {
    select_ln66_121_fu_4354_p3 = (!icmp_ln1496_82_reg_6330.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_82_reg_6330.read()[0].to_bool())? pool_window_3_V_23_reg_6250.read(): pool_window_2_V_23_reg_6244.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_122_fu_4365_p3() {
    select_ln66_122_fu_4365_p3 = (!icmp_ln1496_83_fu_4359_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_83_fu_4359_p2.read()[0].to_bool())? select_ln66_120_fu_4347_p3.read(): zext_ln66_19_fu_4339_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_123_fu_4419_p3() {
    select_ln66_123_fu_4419_p3 = (!icmp_ln1496_84_reg_6336.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_84_reg_6336.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_124_fu_4426_p3() {
    select_ln66_124_fu_4426_p3 = (!icmp_ln1496_84_reg_6336.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_84_reg_6336.read()[0].to_bool())? pool_window_5_V_8_reg_6262.read(): pool_window_4_V_8_reg_6256.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_125_fu_4431_p3() {
    select_ln66_125_fu_4431_p3 = (!icmp_ln1496_85_reg_6342.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_85_reg_6342.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_126_fu_4438_p3() {
    select_ln66_126_fu_4438_p3 = (!icmp_ln1496_85_reg_6342.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_85_reg_6342.read()[0].to_bool())? pool_window_7_V_8_reg_6274.read(): pool_window_6_V_8_reg_6268.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_127_fu_4449_p3() {
    select_ln66_127_fu_4449_p3 = (!icmp_ln1496_86_fu_4443_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_86_fu_4443_p2.read()[0].to_bool())? select_ln66_125_fu_4431_p3.read(): select_ln66_123_fu_4419_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_128_fu_4505_p3() {
    select_ln66_128_fu_4505_p3 = (!icmp_ln1496_87_fu_4499_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_87_fu_4499_p2.read()[0].to_bool())? select_ln66_127_fu_4449_p3.read(): zext_ln66_20_fu_4373_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_129_fu_4513_p3() {
    select_ln66_129_fu_4513_p3 = (!icmp_ln1496_88_reg_6348.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_88_reg_6348.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_130_fu_2554_p3() {
    select_ln66_130_fu_2554_p3 = (!icmp_ln1496_88_fu_2548_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_88_fu_2548_p2.read()[0].to_bool())? pool_window_9_V_8_fu_2469_p3.read(): pool_window_8_V_8_fu_2461_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_131_fu_4520_p3() {
    select_ln66_131_fu_4520_p3 = (!icmp_ln1496_89_reg_6353.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_89_reg_6353.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_132_fu_2568_p3() {
    select_ln66_132_fu_2568_p3 = (!icmp_ln1496_89_fu_2562_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_89_fu_2562_p2.read()[0].to_bool())? pool_window_11_V_8_fu_2485_p3.read(): pool_window_10_V_8_fu_2477_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_133_fu_4527_p3() {
    select_ln66_133_fu_4527_p3 = (!icmp_ln1496_90_reg_6358.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_90_reg_6358.read()[0].to_bool())? select_ln66_131_fu_4520_p3.read(): select_ln66_129_fu_4513_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_134_fu_4572_p3() {
    select_ln66_134_fu_4572_p3 = (!icmp_ln1496_91_reg_6363.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_91_reg_6363.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_135_fu_4579_p3() {
    select_ln66_135_fu_4579_p3 = (!icmp_ln1496_91_reg_6363.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_91_reg_6363.read()[0].to_bool())? pool_window_13_V_8_reg_6306.read(): pool_window_12_V_8_reg_6300.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_136_fu_4584_p3() {
    select_ln66_136_fu_4584_p3 = (!icmp_ln1496_92_reg_6369.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_92_reg_6369.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_137_fu_4591_p3() {
    select_ln66_137_fu_4591_p3 = (!icmp_ln1496_92_reg_6369.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_92_reg_6369.read()[0].to_bool())? pool_window_15_V_8_reg_6318.read(): pool_window_14_V_8_reg_6312.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_138_fu_4602_p3() {
    select_ln66_138_fu_4602_p3 = (!icmp_ln1496_93_fu_4596_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_93_fu_4596_p2.read()[0].to_bool())? select_ln66_136_fu_4584_p3.read(): select_ln66_134_fu_4572_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_139_fu_4658_p3() {
    select_ln66_139_fu_4658_p3 = (!icmp_ln1496_94_fu_4652_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_94_fu_4652_p2.read()[0].to_bool())? sext_ln66_4_fu_4610_p1.read(): select_ln66_133_fu_4527_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_141_fu_4717_p3() {
    select_ln66_141_fu_4717_p3 = (!icmp_ln1496_96_reg_6467.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_96_reg_6467.read()[0].to_bool())? pool_window_1_V_25_reg_6381.read(): pool_window_0_V_25_reg_6375.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_142_fu_4722_p3() {
    select_ln66_142_fu_4722_p3 = (!icmp_ln1496_97_reg_6473.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_97_reg_6473.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_143_fu_4729_p3() {
    select_ln66_143_fu_4729_p3 = (!icmp_ln1496_97_reg_6473.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_97_reg_6473.read()[0].to_bool())? pool_window_3_V_25_reg_6393.read(): pool_window_2_V_25_reg_6387.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_144_fu_4740_p3() {
    select_ln66_144_fu_4740_p3 = (!icmp_ln1496_98_fu_4734_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_98_fu_4734_p2.read()[0].to_bool())? select_ln66_142_fu_4722_p3.read(): zext_ln66_22_fu_4714_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_145_fu_4794_p3() {
    select_ln66_145_fu_4794_p3 = (!icmp_ln1496_99_reg_6479.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_99_reg_6479.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_146_fu_4801_p3() {
    select_ln66_146_fu_4801_p3 = (!icmp_ln1496_99_reg_6479.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_99_reg_6479.read()[0].to_bool())? pool_window_5_V_10_reg_6405.read(): pool_window_4_V_10_reg_6399.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_147_fu_4806_p3() {
    select_ln66_147_fu_4806_p3 = (!icmp_ln1496_100_reg_6485.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_100_reg_6485.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_148_fu_4813_p3() {
    select_ln66_148_fu_4813_p3 = (!icmp_ln1496_100_reg_6485.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_100_reg_6485.read()[0].to_bool())? pool_window_7_V_10_reg_6417.read(): pool_window_6_V_10_reg_6411.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_149_fu_4824_p3() {
    select_ln66_149_fu_4824_p3 = (!icmp_ln1496_101_fu_4818_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_101_fu_4818_p2.read()[0].to_bool())? select_ln66_147_fu_4806_p3.read(): select_ln66_145_fu_4794_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_150_fu_4880_p3() {
    select_ln66_150_fu_4880_p3 = (!icmp_ln1496_102_fu_4874_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_102_fu_4874_p2.read()[0].to_bool())? select_ln66_149_fu_4824_p3.read(): zext_ln66_23_fu_4748_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_151_fu_4888_p3() {
    select_ln66_151_fu_4888_p3 = (!icmp_ln1496_103_reg_6491.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_103_reg_6491.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_152_fu_2751_p3() {
    select_ln66_152_fu_2751_p3 = (!icmp_ln1496_103_fu_2745_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_103_fu_2745_p2.read()[0].to_bool())? pool_window_9_V_10_fu_2666_p3.read(): pool_window_8_V_10_fu_2658_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_153_fu_4895_p3() {
    select_ln66_153_fu_4895_p3 = (!icmp_ln1496_104_reg_6496.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_104_reg_6496.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_154_fu_2765_p3() {
    select_ln66_154_fu_2765_p3 = (!icmp_ln1496_104_fu_2759_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_104_fu_2759_p2.read()[0].to_bool())? pool_window_11_V_10_fu_2682_p3.read(): pool_window_10_V_10_fu_2674_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_155_fu_4902_p3() {
    select_ln66_155_fu_4902_p3 = (!icmp_ln1496_105_reg_6501.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_105_reg_6501.read()[0].to_bool())? select_ln66_153_fu_4895_p3.read(): select_ln66_151_fu_4888_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_156_fu_4947_p3() {
    select_ln66_156_fu_4947_p3 = (!icmp_ln1496_106_reg_6506.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_106_reg_6506.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_157_fu_4954_p3() {
    select_ln66_157_fu_4954_p3 = (!icmp_ln1496_106_reg_6506.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_106_reg_6506.read()[0].to_bool())? pool_window_13_V_10_reg_6449.read(): pool_window_12_V_10_reg_6443.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_158_fu_4959_p3() {
    select_ln66_158_fu_4959_p3 = (!icmp_ln1496_107_reg_6512.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_107_reg_6512.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_159_fu_4966_p3() {
    select_ln66_159_fu_4966_p3 = (!icmp_ln1496_107_reg_6512.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_107_reg_6512.read()[0].to_bool())? pool_window_15_V_10_reg_6461.read(): pool_window_14_V_10_reg_6455.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_160_fu_4977_p3() {
    select_ln66_160_fu_4977_p3 = (!icmp_ln1496_108_fu_4971_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_108_fu_4971_p2.read()[0].to_bool())? select_ln66_158_fu_4959_p3.read(): select_ln66_156_fu_4947_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_161_fu_5033_p3() {
    select_ln66_161_fu_5033_p3 = (!icmp_ln1496_109_fu_5027_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_109_fu_5027_p2.read()[0].to_bool())? sext_ln66_5_fu_4985_p1.read(): select_ln66_155_fu_4902_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_32_fu_2847_p3() {
    select_ln66_32_fu_2847_p3 = (!icmp_ln1496_24_reg_5758.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_24_reg_5758.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_33_fu_2854_p3() {
    select_ln66_33_fu_2854_p3 = (!icmp_ln1496_24_reg_5758.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_24_reg_5758.read()[0].to_bool())? pool_window_3_V_reg_5678.read(): pool_window_2_V_reg_5672.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_34_fu_2865_p3() {
    select_ln66_34_fu_2865_p3 = (!icmp_ln1496_25_fu_2859_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_25_fu_2859_p2.read()[0].to_bool())? select_ln66_32_fu_2847_p3.read(): zext_ln66_fu_2839_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_35_fu_2919_p3() {
    select_ln66_35_fu_2919_p3 = (!icmp_ln1496_26_reg_5764.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_26_reg_5764.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_36_fu_2926_p3() {
    select_ln66_36_fu_2926_p3 = (!icmp_ln1496_26_reg_5764.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_26_reg_5764.read()[0].to_bool())? pool_window_5_V_reg_5690.read(): pool_window_4_V_reg_5684.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_37_fu_2931_p3() {
    select_ln66_37_fu_2931_p3 = (!icmp_ln1496_27_reg_5770.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_27_reg_5770.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_38_fu_2938_p3() {
    select_ln66_38_fu_2938_p3 = (!icmp_ln1496_27_reg_5770.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_27_reg_5770.read()[0].to_bool())? pool_window_7_V_reg_5702.read(): pool_window_6_V_reg_5696.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_39_fu_2949_p3() {
    select_ln66_39_fu_2949_p3 = (!icmp_ln1496_28_fu_2943_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_28_fu_2943_p2.read()[0].to_bool())? select_ln66_37_fu_2931_p3.read(): select_ln66_35_fu_2919_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_40_fu_3005_p3() {
    select_ln66_40_fu_3005_p3 = (!icmp_ln1496_29_fu_2999_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_29_fu_2999_p2.read()[0].to_bool())? select_ln66_39_fu_2949_p3.read(): zext_ln66_8_fu_2873_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_41_fu_3013_p3() {
    select_ln66_41_fu_3013_p3 = (!icmp_ln1496_30_reg_5776.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_30_reg_5776.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_42_fu_1766_p3() {
    select_ln66_42_fu_1766_p3 = (!icmp_ln1496_30_fu_1760_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_30_fu_1760_p2.read()[0].to_bool())? pool_window_9_V_fu_1681_p3.read(): pool_window_8_V_fu_1673_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_43_fu_3020_p3() {
    select_ln66_43_fu_3020_p3 = (!icmp_ln1496_31_reg_5781.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_31_reg_5781.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_44_fu_1780_p3() {
    select_ln66_44_fu_1780_p3 = (!icmp_ln1496_31_fu_1774_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_31_fu_1774_p2.read()[0].to_bool())? pool_window_11_V_fu_1697_p3.read(): pool_window_10_V_fu_1689_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_45_fu_3027_p3() {
    select_ln66_45_fu_3027_p3 = (!icmp_ln1496_32_reg_5786.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_32_reg_5786.read()[0].to_bool())? select_ln66_43_fu_3020_p3.read(): select_ln66_41_fu_3013_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_46_fu_3072_p3() {
    select_ln66_46_fu_3072_p3 = (!icmp_ln1496_33_reg_5791.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_33_reg_5791.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_47_fu_3079_p3() {
    select_ln66_47_fu_3079_p3 = (!icmp_ln1496_33_reg_5791.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_33_reg_5791.read()[0].to_bool())? pool_window_13_V_reg_5734.read(): pool_window_12_V_reg_5728.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_48_fu_3084_p3() {
    select_ln66_48_fu_3084_p3 = (!icmp_ln1496_34_reg_5797.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_34_reg_5797.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_49_fu_3091_p3() {
    select_ln66_49_fu_3091_p3 = (!icmp_ln1496_34_reg_5797.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_34_reg_5797.read()[0].to_bool())? pool_window_15_V_reg_5746.read(): pool_window_14_V_reg_5740.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_50_fu_3102_p3() {
    select_ln66_50_fu_3102_p3 = (!icmp_ln1496_35_fu_3096_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_35_fu_3096_p2.read()[0].to_bool())? select_ln66_48_fu_3084_p3.read(): select_ln66_46_fu_3072_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_51_fu_3158_p3() {
    select_ln66_51_fu_3158_p3 = (!icmp_ln1496_36_fu_3152_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_36_fu_3152_p2.read()[0].to_bool())? sext_ln66_fu_3110_p1.read(): select_ln66_45_fu_3027_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_53_fu_3217_p3() {
    select_ln66_53_fu_3217_p3 = (!icmp_ln1496_1_reg_5895.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_1_reg_5895.read()[0].to_bool())? pool_window_1_V_17_reg_5809.read(): pool_window_0_V_17_reg_5803.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_54_fu_3222_p3() {
    select_ln66_54_fu_3222_p3 = (!icmp_ln1496_38_reg_5901.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_38_reg_5901.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_55_fu_3229_p3() {
    select_ln66_55_fu_3229_p3 = (!icmp_ln1496_38_reg_5901.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_38_reg_5901.read()[0].to_bool())? pool_window_3_V_17_reg_5821.read(): pool_window_2_V_17_reg_5815.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_56_fu_3240_p3() {
    select_ln66_56_fu_3240_p3 = (!icmp_ln1496_39_fu_3234_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_39_fu_3234_p2.read()[0].to_bool())? select_ln66_54_fu_3222_p3.read(): zext_ln66_10_fu_3214_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_57_fu_3294_p3() {
    select_ln66_57_fu_3294_p3 = (!icmp_ln1496_40_reg_5907.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_40_reg_5907.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_58_fu_3301_p3() {
    select_ln66_58_fu_3301_p3 = (!icmp_ln1496_40_reg_5907.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_40_reg_5907.read()[0].to_bool())? pool_window_5_V_2_reg_5833.read(): pool_window_4_V_2_reg_5827.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_59_fu_3306_p3() {
    select_ln66_59_fu_3306_p3 = (!icmp_ln1496_41_reg_5913.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_41_reg_5913.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_60_fu_3313_p3() {
    select_ln66_60_fu_3313_p3 = (!icmp_ln1496_41_reg_5913.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_41_reg_5913.read()[0].to_bool())? pool_window_7_V_2_reg_5845.read(): pool_window_6_V_2_reg_5839.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_61_fu_3324_p3() {
    select_ln66_61_fu_3324_p3 = (!icmp_ln1496_42_fu_3318_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_42_fu_3318_p2.read()[0].to_bool())? select_ln66_59_fu_3306_p3.read(): select_ln66_57_fu_3294_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_62_fu_3380_p3() {
    select_ln66_62_fu_3380_p3 = (!icmp_ln1496_43_fu_3374_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_43_fu_3374_p2.read()[0].to_bool())? select_ln66_61_fu_3324_p3.read(): zext_ln66_11_fu_3248_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_63_fu_3388_p3() {
    select_ln66_63_fu_3388_p3 = (!icmp_ln1496_44_reg_5919.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_44_reg_5919.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_64_fu_1963_p3() {
    select_ln66_64_fu_1963_p3 = (!icmp_ln1496_44_fu_1957_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_44_fu_1957_p2.read()[0].to_bool())? pool_window_9_V_2_fu_1878_p3.read(): pool_window_8_V_2_fu_1870_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_65_fu_3395_p3() {
    select_ln66_65_fu_3395_p3 = (!icmp_ln1496_45_reg_5924.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_45_reg_5924.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_66_fu_1977_p3() {
    select_ln66_66_fu_1977_p3 = (!icmp_ln1496_45_fu_1971_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_45_fu_1971_p2.read()[0].to_bool())? pool_window_11_V_2_fu_1894_p3.read(): pool_window_10_V_2_fu_1886_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_67_fu_3402_p3() {
    select_ln66_67_fu_3402_p3 = (!icmp_ln1496_46_reg_5929.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_46_reg_5929.read()[0].to_bool())? select_ln66_65_fu_3395_p3.read(): select_ln66_63_fu_3388_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_68_fu_3447_p3() {
    select_ln66_68_fu_3447_p3 = (!icmp_ln1496_47_reg_5934.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_47_reg_5934.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_69_fu_3454_p3() {
    select_ln66_69_fu_3454_p3 = (!icmp_ln1496_47_reg_5934.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_47_reg_5934.read()[0].to_bool())? pool_window_13_V_2_reg_5877.read(): pool_window_12_V_2_reg_5871.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_70_fu_3459_p3() {
    select_ln66_70_fu_3459_p3 = (!icmp_ln1496_48_reg_5940.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_48_reg_5940.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_71_fu_3466_p3() {
    select_ln66_71_fu_3466_p3 = (!icmp_ln1496_48_reg_5940.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_48_reg_5940.read()[0].to_bool())? pool_window_15_V_2_reg_5889.read(): pool_window_14_V_2_reg_5883.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_72_fu_3477_p3() {
    select_ln66_72_fu_3477_p3 = (!icmp_ln1496_49_fu_3471_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_49_fu_3471_p2.read()[0].to_bool())? select_ln66_70_fu_3459_p3.read(): select_ln66_68_fu_3447_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_73_fu_3533_p3() {
    select_ln66_73_fu_3533_p3 = (!icmp_ln1496_50_fu_3527_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_50_fu_3527_p2.read()[0].to_bool())? sext_ln66_1_fu_3485_p1.read(): select_ln66_67_fu_3402_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_75_fu_3592_p3() {
    select_ln66_75_fu_3592_p3 = (!icmp_ln1496_2_reg_6038.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_2_reg_6038.read()[0].to_bool())? pool_window_1_V_19_reg_5952.read(): pool_window_0_V_19_reg_5946.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_76_fu_3597_p3() {
    select_ln66_76_fu_3597_p3 = (!icmp_ln1496_52_reg_6044.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_52_reg_6044.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_77_fu_3604_p3() {
    select_ln66_77_fu_3604_p3 = (!icmp_ln1496_52_reg_6044.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_52_reg_6044.read()[0].to_bool())? pool_window_3_V_19_reg_5964.read(): pool_window_2_V_19_reg_5958.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_78_fu_3615_p3() {
    select_ln66_78_fu_3615_p3 = (!icmp_ln1496_53_fu_3609_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_53_fu_3609_p2.read()[0].to_bool())? select_ln66_76_fu_3597_p3.read(): zext_ln66_13_fu_3589_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_79_fu_3669_p3() {
    select_ln66_79_fu_3669_p3 = (!icmp_ln1496_54_reg_6050.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_54_reg_6050.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_80_fu_3676_p3() {
    select_ln66_80_fu_3676_p3 = (!icmp_ln1496_54_reg_6050.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_54_reg_6050.read()[0].to_bool())? pool_window_5_V_4_reg_5976.read(): pool_window_4_V_4_reg_5970.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_81_fu_3681_p3() {
    select_ln66_81_fu_3681_p3 = (!icmp_ln1496_55_reg_6056.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_55_reg_6056.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_82_fu_3688_p3() {
    select_ln66_82_fu_3688_p3 = (!icmp_ln1496_55_reg_6056.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_55_reg_6056.read()[0].to_bool())? pool_window_7_V_4_reg_5988.read(): pool_window_6_V_4_reg_5982.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_83_fu_3699_p3() {
    select_ln66_83_fu_3699_p3 = (!icmp_ln1496_56_fu_3693_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_56_fu_3693_p2.read()[0].to_bool())? select_ln66_81_fu_3681_p3.read(): select_ln66_79_fu_3669_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_84_fu_3755_p3() {
    select_ln66_84_fu_3755_p3 = (!icmp_ln1496_57_fu_3749_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_57_fu_3749_p2.read()[0].to_bool())? select_ln66_83_fu_3699_p3.read(): zext_ln66_14_fu_3623_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_85_fu_3763_p3() {
    select_ln66_85_fu_3763_p3 = (!icmp_ln1496_58_reg_6062.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_58_reg_6062.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_86_fu_2160_p3() {
    select_ln66_86_fu_2160_p3 = (!icmp_ln1496_58_fu_2154_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_58_fu_2154_p2.read()[0].to_bool())? pool_window_9_V_4_fu_2075_p3.read(): pool_window_8_V_4_fu_2067_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_87_fu_3770_p3() {
    select_ln66_87_fu_3770_p3 = (!icmp_ln1496_59_reg_6067.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_59_reg_6067.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_88_fu_2174_p3() {
    select_ln66_88_fu_2174_p3 = (!icmp_ln1496_59_fu_2168_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_59_fu_2168_p2.read()[0].to_bool())? pool_window_11_V_4_fu_2091_p3.read(): pool_window_10_V_4_fu_2083_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_89_fu_3777_p3() {
    select_ln66_89_fu_3777_p3 = (!icmp_ln1496_60_reg_6072.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_60_reg_6072.read()[0].to_bool())? select_ln66_87_fu_3770_p3.read(): select_ln66_85_fu_3763_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_90_fu_3822_p3() {
    select_ln66_90_fu_3822_p3 = (!icmp_ln1496_61_reg_6077.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_61_reg_6077.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_91_fu_3829_p3() {
    select_ln66_91_fu_3829_p3 = (!icmp_ln1496_61_reg_6077.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_61_reg_6077.read()[0].to_bool())? pool_window_13_V_4_reg_6020.read(): pool_window_12_V_4_reg_6014.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_92_fu_3834_p3() {
    select_ln66_92_fu_3834_p3 = (!icmp_ln1496_62_reg_6083.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_62_reg_6083.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_93_fu_3841_p3() {
    select_ln66_93_fu_3841_p3 = (!icmp_ln1496_62_reg_6083.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_62_reg_6083.read()[0].to_bool())? pool_window_15_V_4_reg_6032.read(): pool_window_14_V_4_reg_6026.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_94_fu_3852_p3() {
    select_ln66_94_fu_3852_p3 = (!icmp_ln1496_63_fu_3846_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_63_fu_3846_p2.read()[0].to_bool())? select_ln66_92_fu_3834_p3.read(): select_ln66_90_fu_3822_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_95_fu_3908_p3() {
    select_ln66_95_fu_3908_p3 = (!icmp_ln1496_64_fu_3902_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_64_fu_3902_p2.read()[0].to_bool())? sext_ln66_2_fu_3860_p1.read(): select_ln66_89_fu_3777_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_97_fu_3967_p3() {
    select_ln66_97_fu_3967_p3 = (!icmp_ln1496_66_reg_6181.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_66_reg_6181.read()[0].to_bool())? pool_window_1_V_21_reg_6095.read(): pool_window_0_V_21_reg_6089.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_98_fu_3972_p3() {
    select_ln66_98_fu_3972_p3 = (!icmp_ln1496_67_reg_6187.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_67_reg_6187.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_99_fu_3979_p3() {
    select_ln66_99_fu_3979_p3 = (!icmp_ln1496_67_reg_6187.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_67_reg_6187.read()[0].to_bool())? pool_window_3_V_21_reg_6107.read(): pool_window_2_V_21_reg_6101.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_select_ln66_fu_2842_p3() {
    select_ln66_fu_2842_p3 = (!icmp_ln1496_reg_5752.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_reg_5752.read()[0].to_bool())? pool_window_1_V_reg_5666.read(): pool_window_0_V_reg_5660.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_sext_ln66_1_fu_3485_p1() {
    sext_ln66_1_fu_3485_p1 = esl_sext<4,3>(select_ln66_72_fu_3477_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_sext_ln66_2_fu_3860_p1() {
    sext_ln66_2_fu_3860_p1 = esl_sext<4,3>(select_ln66_94_fu_3852_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_sext_ln66_3_fu_4235_p1() {
    sext_ln66_3_fu_4235_p1 = esl_sext<4,3>(select_ln66_116_fu_4227_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_sext_ln66_4_fu_4610_p1() {
    sext_ln66_4_fu_4610_p1 = esl_sext<4,3>(select_ln66_138_fu_4602_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_sext_ln66_5_fu_4985_p1() {
    sext_ln66_5_fu_4985_p1 = esl_sext<4,3>(select_ln66_160_fu_4977_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_sext_ln66_fu_3110_p1() {
    sext_ln66_fu_3110_p1 = esl_sext<4,3>(select_ln66_50_fu_3102_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_start_out() {
    start_out = real_start.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_tmp_1_fu_5191_p17() {
    tmp_1_fu_5191_p17 = (!icmp_ln1496_51_fu_5178_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_51_fu_5178_p2.read()[0].to_bool())? select_ln66_73_reg_6758.read(): zext_ln66_12_fu_5132_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_tmp_2_fu_5282_p17() {
    tmp_2_fu_5282_p17 = (!icmp_ln1496_65_fu_5269_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_65_fu_5269_p2.read()[0].to_bool())? select_ln66_95_reg_6881.read(): zext_ln66_15_fu_5223_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_tmp_3_fu_5373_p17() {
    tmp_3_fu_5373_p17 = (!icmp_ln1496_80_fu_5360_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_80_fu_5360_p2.read()[0].to_bool())? select_ln66_117_reg_7004.read(): zext_ln66_18_fu_5314_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_tmp_4_fu_5464_p17() {
    tmp_4_fu_5464_p17 = (!icmp_ln1496_95_fu_5451_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_95_fu_5451_p2.read()[0].to_bool())? select_ln66_139_reg_7127.read(): zext_ln66_21_fu_5405_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_tmp_5_fu_5555_p17() {
    tmp_5_fu_5555_p17 = (!icmp_ln1496_110_fu_5542_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_110_fu_5542_p2.read()[0].to_bool())? select_ln66_161_reg_7250.read(): zext_ln66_24_fu_5496_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_tmp_9_fu_5100_p17() {
    tmp_9_fu_5100_p17 = (!icmp_ln1496_37_fu_5087_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_37_fu_5087_p2.read()[0].to_bool())? select_ln66_51_reg_6635.read(): zext_ln66_9_fu_5041_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_10_fu_3214_p1() {
    zext_ln66_10_fu_3214_p1 = esl_zext<2,1>(icmp_ln1496_1_reg_5895.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_11_fu_3248_p1() {
    zext_ln66_11_fu_3248_p1 = esl_zext<3,2>(select_ln66_56_fu_3240_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_12_fu_5132_p1() {
    zext_ln66_12_fu_5132_p1 = esl_zext<4,3>(select_ln66_62_reg_6753.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_13_fu_3589_p1() {
    zext_ln66_13_fu_3589_p1 = esl_zext<2,1>(icmp_ln1496_2_reg_6038.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_14_fu_3623_p1() {
    zext_ln66_14_fu_3623_p1 = esl_zext<3,2>(select_ln66_78_fu_3615_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_15_fu_5223_p1() {
    zext_ln66_15_fu_5223_p1 = esl_zext<4,3>(select_ln66_84_reg_6876.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_16_fu_3964_p1() {
    zext_ln66_16_fu_3964_p1 = esl_zext<2,1>(icmp_ln1496_66_reg_6181.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_17_fu_3998_p1() {
    zext_ln66_17_fu_3998_p1 = esl_zext<3,2>(select_ln66_100_fu_3990_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_18_fu_5314_p1() {
    zext_ln66_18_fu_5314_p1 = esl_zext<4,3>(select_ln66_106_reg_6999.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_19_fu_4339_p1() {
    zext_ln66_19_fu_4339_p1 = esl_zext<2,1>(icmp_ln1496_81_reg_6324.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_20_fu_4373_p1() {
    zext_ln66_20_fu_4373_p1 = esl_zext<3,2>(select_ln66_122_fu_4365_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_21_fu_5405_p1() {
    zext_ln66_21_fu_5405_p1 = esl_zext<4,3>(select_ln66_128_reg_7122.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_22_fu_4714_p1() {
    zext_ln66_22_fu_4714_p1 = esl_zext<2,1>(icmp_ln1496_96_reg_6467.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_23_fu_4748_p1() {
    zext_ln66_23_fu_4748_p1 = esl_zext<3,2>(select_ln66_144_fu_4740_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_24_fu_5496_p1() {
    zext_ln66_24_fu_5496_p1 = esl_zext<4,3>(select_ln66_150_reg_7245.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_8_fu_2873_p1() {
    zext_ln66_8_fu_2873_p1 = esl_zext<3,2>(select_ln66_34_fu_2865_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_9_fu_5041_p1() {
    zext_ln66_9_fu_5041_p1 = esl_zext<4,3>(select_ln66_40_reg_6630.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s::thread_zext_ln66_fu_2839_p1() {
    zext_ln66_fu_2839_p1 = esl_zext<2,1>(icmp_ln1496_reg_5752.read());
}

}

