#include "dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[4];
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6481.read()));
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6481.read()));
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6481.read());
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln34_fu_17324_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_phi_mux_i_in_0_phi_fu_14110_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_65592.read(), ap_const_lv1_0))) {
        ap_phi_mux_i_in_0_phi_fu_14110_p4 = i_in_reg_65596.read();
    } else {
        ap_phi_mux_i_in_0_phi_fu_14110_p4 = i_in_0_reg_14106.read();
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_0_V_blk_n = data_stream_V_data_0_V_empty_n.read();
    } else {
        data_stream_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_0_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_10_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_10_V_blk_n = data_stream_V_data_10_V_empty_n.read();
    } else {
        data_stream_V_data_10_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_10_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_10_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_10_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_11_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_11_V_blk_n = data_stream_V_data_11_V_empty_n.read();
    } else {
        data_stream_V_data_11_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_11_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_11_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_11_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_12_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_12_V_blk_n = data_stream_V_data_12_V_empty_n.read();
    } else {
        data_stream_V_data_12_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_12_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_12_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_12_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_13_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_13_V_blk_n = data_stream_V_data_13_V_empty_n.read();
    } else {
        data_stream_V_data_13_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_13_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_13_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_13_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_14_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_14_V_blk_n = data_stream_V_data_14_V_empty_n.read();
    } else {
        data_stream_V_data_14_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_14_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_14_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_14_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_15_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_15_V_blk_n = data_stream_V_data_15_V_empty_n.read();
    } else {
        data_stream_V_data_15_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_15_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_15_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_15_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_16_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_16_V_blk_n = data_stream_V_data_16_V_empty_n.read();
    } else {
        data_stream_V_data_16_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_16_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_16_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_16_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_17_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_17_V_blk_n = data_stream_V_data_17_V_empty_n.read();
    } else {
        data_stream_V_data_17_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_17_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_17_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_17_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_18_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_18_V_blk_n = data_stream_V_data_18_V_empty_n.read();
    } else {
        data_stream_V_data_18_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_18_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_18_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_18_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_19_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_19_V_blk_n = data_stream_V_data_19_V_empty_n.read();
    } else {
        data_stream_V_data_19_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_19_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_19_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_19_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_1_V_blk_n = data_stream_V_data_1_V_empty_n.read();
    } else {
        data_stream_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_1_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_20_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_20_V_blk_n = data_stream_V_data_20_V_empty_n.read();
    } else {
        data_stream_V_data_20_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_20_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_20_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_20_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_21_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_21_V_blk_n = data_stream_V_data_21_V_empty_n.read();
    } else {
        data_stream_V_data_21_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_21_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_21_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_21_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_22_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_22_V_blk_n = data_stream_V_data_22_V_empty_n.read();
    } else {
        data_stream_V_data_22_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_22_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_22_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_22_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_23_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_23_V_blk_n = data_stream_V_data_23_V_empty_n.read();
    } else {
        data_stream_V_data_23_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_23_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_23_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_23_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_24_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_24_V_blk_n = data_stream_V_data_24_V_empty_n.read();
    } else {
        data_stream_V_data_24_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_24_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_24_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_24_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_25_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_25_V_blk_n = data_stream_V_data_25_V_empty_n.read();
    } else {
        data_stream_V_data_25_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_25_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_25_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_25_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_26_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_26_V_blk_n = data_stream_V_data_26_V_empty_n.read();
    } else {
        data_stream_V_data_26_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_26_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_26_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_26_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_27_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_27_V_blk_n = data_stream_V_data_27_V_empty_n.read();
    } else {
        data_stream_V_data_27_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_27_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_27_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_27_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_28_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_28_V_blk_n = data_stream_V_data_28_V_empty_n.read();
    } else {
        data_stream_V_data_28_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_28_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_28_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_28_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_29_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_29_V_blk_n = data_stream_V_data_29_V_empty_n.read();
    } else {
        data_stream_V_data_29_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_29_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_29_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_29_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_2_V_blk_n = data_stream_V_data_2_V_empty_n.read();
    } else {
        data_stream_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_2_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_30_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_30_V_blk_n = data_stream_V_data_30_V_empty_n.read();
    } else {
        data_stream_V_data_30_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_30_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_30_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_30_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_31_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_31_V_blk_n = data_stream_V_data_31_V_empty_n.read();
    } else {
        data_stream_V_data_31_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_31_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_31_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_31_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_3_V_blk_n = data_stream_V_data_3_V_empty_n.read();
    } else {
        data_stream_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_3_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_4_V_blk_n = data_stream_V_data_4_V_empty_n.read();
    } else {
        data_stream_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_4_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_5_V_blk_n = data_stream_V_data_5_V_empty_n.read();
    } else {
        data_stream_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_5_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_6_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_6_V_blk_n = data_stream_V_data_6_V_empty_n.read();
    } else {
        data_stream_V_data_6_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_6_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_6_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_6_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_7_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_7_V_blk_n = data_stream_V_data_7_V_empty_n.read();
    } else {
        data_stream_V_data_7_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_7_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_7_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_7_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_8_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_8_V_blk_n = data_stream_V_data_8_V_empty_n.read();
    } else {
        data_stream_V_data_8_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_8_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_8_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_8_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_9_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_9_V_blk_n = data_stream_V_data_9_V_empty_n.read();
    } else {
        data_stream_V_data_9_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_data_stream_V_data_9_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_9_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_9_V_read = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_grp_dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s_fu_14118_ap_start() {
    grp_dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s_fu_14118_ap_start = grp_dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s_fu_14118_ap_start_reg.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_i_in_fu_17330_p2() {
    i_in_fu_17330_p2 = (!ap_phi_mux_i_in_0_phi_fu_14110_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_in_0_phi_fu_14110_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_icmp_ln34_fu_17324_p2() {
    icmp_ln34_fu_17324_p2 = (!ap_phi_mux_i_in_0_phi_fu_14110_p4.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_in_0_phi_fu_14110_p4.read() == ap_const_lv7_64);
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_io_acc_block_signal_op12982() {
    io_acc_block_signal_op12982 = (res_stream_V_data_0_V_full_n.read() & res_stream_V_data_1_V_full_n.read() & res_stream_V_data_2_V_full_n.read() & res_stream_V_data_3_V_full_n.read() & res_stream_V_data_4_V_full_n.read() & res_stream_V_data_5_V_full_n.read() & res_stream_V_data_6_V_full_n.read() & res_stream_V_data_7_V_full_n.read() & res_stream_V_data_8_V_full_n.read() & res_stream_V_data_9_V_full_n.read() & res_stream_V_data_10_V_full_n.read() & res_stream_V_data_11_V_full_n.read() & res_stream_V_data_12_V_full_n.read() & res_stream_V_data_13_V_full_n.read() & res_stream_V_data_14_V_full_n.read() & res_stream_V_data_15_V_full_n.read() & res_stream_V_data_16_V_full_n.read() & res_stream_V_data_17_V_full_n.read() & res_stream_V_data_18_V_full_n.read() & res_stream_V_data_19_V_full_n.read() & res_stream_V_data_20_V_full_n.read() & res_stream_V_data_21_V_full_n.read() & res_stream_V_data_22_V_full_n.read() & res_stream_V_data_23_V_full_n.read() & res_stream_V_data_24_V_full_n.read() & res_stream_V_data_25_V_full_n.read() & res_stream_V_data_26_V_full_n.read() & res_stream_V_data_27_V_full_n.read() & res_stream_V_data_28_V_full_n.read() & res_stream_V_data_29_V_full_n.read() & res_stream_V_data_30_V_full_n.read() & res_stream_V_data_31_V_full_n.read());
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_io_acc_block_signal_op6481() {
    io_acc_block_signal_op6481 = (data_stream_V_data_0_V_empty_n.read() & data_stream_V_data_1_V_empty_n.read() & data_stream_V_data_2_V_empty_n.read() & data_stream_V_data_3_V_empty_n.read() & data_stream_V_data_4_V_empty_n.read() & data_stream_V_data_5_V_empty_n.read() & data_stream_V_data_6_V_empty_n.read() & data_stream_V_data_7_V_empty_n.read() & data_stream_V_data_8_V_empty_n.read() & data_stream_V_data_9_V_empty_n.read() & data_stream_V_data_10_V_empty_n.read() & data_stream_V_data_11_V_empty_n.read() & data_stream_V_data_12_V_empty_n.read() & data_stream_V_data_13_V_empty_n.read() & data_stream_V_data_14_V_empty_n.read() & data_stream_V_data_15_V_empty_n.read() & data_stream_V_data_16_V_empty_n.read() & data_stream_V_data_17_V_empty_n.read() & data_stream_V_data_18_V_empty_n.read() & data_stream_V_data_19_V_empty_n.read() & data_stream_V_data_20_V_empty_n.read() & data_stream_V_data_21_V_empty_n.read() & data_stream_V_data_22_V_empty_n.read() & data_stream_V_data_23_V_empty_n.read() & data_stream_V_data_24_V_empty_n.read() & data_stream_V_data_25_V_empty_n.read() & data_stream_V_data_26_V_empty_n.read() & data_stream_V_data_27_V_empty_n.read() & data_stream_V_data_28_V_empty_n.read() & data_stream_V_data_29_V_empty_n.read() & data_stream_V_data_30_V_empty_n.read() & data_stream_V_data_31_V_empty_n.read());
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_0_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_0_V_blk_n = res_stream_V_data_0_V_full_n.read();
    } else {
        res_stream_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_0_V_din() {
    res_stream_V_data_0_V_din = tmp_data_0_V_reg_81601.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_0_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_0_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_0_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_10_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_10_V_blk_n = res_stream_V_data_10_V_full_n.read();
    } else {
        res_stream_V_data_10_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_10_V_din() {
    res_stream_V_data_10_V_din = tmp_data_10_V_reg_81651.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_10_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_10_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_10_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_11_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_11_V_blk_n = res_stream_V_data_11_V_full_n.read();
    } else {
        res_stream_V_data_11_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_11_V_din() {
    res_stream_V_data_11_V_din = tmp_data_11_V_reg_81656.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_11_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_11_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_11_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_12_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_12_V_blk_n = res_stream_V_data_12_V_full_n.read();
    } else {
        res_stream_V_data_12_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_12_V_din() {
    res_stream_V_data_12_V_din = tmp_data_12_V_reg_81661.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_12_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_12_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_12_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_13_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_13_V_blk_n = res_stream_V_data_13_V_full_n.read();
    } else {
        res_stream_V_data_13_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_13_V_din() {
    res_stream_V_data_13_V_din = tmp_data_13_V_reg_81666.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_13_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_13_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_13_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_14_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_14_V_blk_n = res_stream_V_data_14_V_full_n.read();
    } else {
        res_stream_V_data_14_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_14_V_din() {
    res_stream_V_data_14_V_din = tmp_data_14_V_reg_81671.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_14_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_14_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_14_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_15_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_15_V_blk_n = res_stream_V_data_15_V_full_n.read();
    } else {
        res_stream_V_data_15_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_15_V_din() {
    res_stream_V_data_15_V_din = tmp_data_15_V_reg_81676.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_15_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_15_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_15_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_16_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_16_V_blk_n = res_stream_V_data_16_V_full_n.read();
    } else {
        res_stream_V_data_16_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_16_V_din() {
    res_stream_V_data_16_V_din = tmp_data_16_V_reg_81681.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_16_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_16_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_16_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_17_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_17_V_blk_n = res_stream_V_data_17_V_full_n.read();
    } else {
        res_stream_V_data_17_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_17_V_din() {
    res_stream_V_data_17_V_din = tmp_data_17_V_reg_81686.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_17_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_17_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_17_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_18_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_18_V_blk_n = res_stream_V_data_18_V_full_n.read();
    } else {
        res_stream_V_data_18_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_18_V_din() {
    res_stream_V_data_18_V_din = tmp_data_18_V_reg_81691.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_18_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_18_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_18_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_19_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_19_V_blk_n = res_stream_V_data_19_V_full_n.read();
    } else {
        res_stream_V_data_19_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_19_V_din() {
    res_stream_V_data_19_V_din = tmp_data_19_V_reg_81696.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_19_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_19_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_19_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_1_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_1_V_blk_n = res_stream_V_data_1_V_full_n.read();
    } else {
        res_stream_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_1_V_din() {
    res_stream_V_data_1_V_din = tmp_data_1_V_reg_81606.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_1_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_1_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_1_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_20_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_20_V_blk_n = res_stream_V_data_20_V_full_n.read();
    } else {
        res_stream_V_data_20_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_20_V_din() {
    res_stream_V_data_20_V_din = tmp_data_20_V_reg_81701.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_20_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_20_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_20_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_21_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_21_V_blk_n = res_stream_V_data_21_V_full_n.read();
    } else {
        res_stream_V_data_21_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_21_V_din() {
    res_stream_V_data_21_V_din = tmp_data_21_V_reg_81706.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_21_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_21_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_21_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_22_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_22_V_blk_n = res_stream_V_data_22_V_full_n.read();
    } else {
        res_stream_V_data_22_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_22_V_din() {
    res_stream_V_data_22_V_din = tmp_data_22_V_reg_81711.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_22_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_22_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_22_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_23_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_23_V_blk_n = res_stream_V_data_23_V_full_n.read();
    } else {
        res_stream_V_data_23_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_23_V_din() {
    res_stream_V_data_23_V_din = tmp_data_23_V_reg_81716.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_23_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_23_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_23_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_24_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_24_V_blk_n = res_stream_V_data_24_V_full_n.read();
    } else {
        res_stream_V_data_24_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_24_V_din() {
    res_stream_V_data_24_V_din = tmp_data_24_V_reg_81721.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_24_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_24_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_24_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_25_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_25_V_blk_n = res_stream_V_data_25_V_full_n.read();
    } else {
        res_stream_V_data_25_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_25_V_din() {
    res_stream_V_data_25_V_din = tmp_data_25_V_reg_81726.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_25_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_25_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_25_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_26_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_26_V_blk_n = res_stream_V_data_26_V_full_n.read();
    } else {
        res_stream_V_data_26_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_26_V_din() {
    res_stream_V_data_26_V_din = tmp_data_26_V_reg_81731.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_26_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_26_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_26_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_27_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_27_V_blk_n = res_stream_V_data_27_V_full_n.read();
    } else {
        res_stream_V_data_27_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_27_V_din() {
    res_stream_V_data_27_V_din = tmp_data_27_V_reg_81736.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_27_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_27_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_27_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_28_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_28_V_blk_n = res_stream_V_data_28_V_full_n.read();
    } else {
        res_stream_V_data_28_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_28_V_din() {
    res_stream_V_data_28_V_din = tmp_data_28_V_reg_81741.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_28_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_28_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_28_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_29_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_29_V_blk_n = res_stream_V_data_29_V_full_n.read();
    } else {
        res_stream_V_data_29_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_29_V_din() {
    res_stream_V_data_29_V_din = tmp_data_29_V_reg_81746.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_29_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_29_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_29_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_2_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_2_V_blk_n = res_stream_V_data_2_V_full_n.read();
    } else {
        res_stream_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_2_V_din() {
    res_stream_V_data_2_V_din = tmp_data_2_V_reg_81611.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_2_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_2_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_2_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_30_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_30_V_blk_n = res_stream_V_data_30_V_full_n.read();
    } else {
        res_stream_V_data_30_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_30_V_din() {
    res_stream_V_data_30_V_din = tmp_data_30_V_reg_81751.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_30_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_30_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_30_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_31_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_31_V_blk_n = res_stream_V_data_31_V_full_n.read();
    } else {
        res_stream_V_data_31_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_31_V_din() {
    res_stream_V_data_31_V_din = tmp_data_31_V_reg_81756.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_31_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_31_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_31_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_3_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_3_V_blk_n = res_stream_V_data_3_V_full_n.read();
    } else {
        res_stream_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_3_V_din() {
    res_stream_V_data_3_V_din = tmp_data_3_V_reg_81616.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_3_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_3_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_3_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_4_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_4_V_blk_n = res_stream_V_data_4_V_full_n.read();
    } else {
        res_stream_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_4_V_din() {
    res_stream_V_data_4_V_din = tmp_data_4_V_reg_81621.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_4_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_4_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_4_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_5_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_5_V_blk_n = res_stream_V_data_5_V_full_n.read();
    } else {
        res_stream_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_5_V_din() {
    res_stream_V_data_5_V_din = tmp_data_5_V_reg_81626.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_5_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_5_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_5_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_6_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_6_V_blk_n = res_stream_V_data_6_V_full_n.read();
    } else {
        res_stream_V_data_6_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_6_V_din() {
    res_stream_V_data_6_V_din = tmp_data_6_V_reg_81631.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_6_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_6_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_6_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_7_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_7_V_blk_n = res_stream_V_data_7_V_full_n.read();
    } else {
        res_stream_V_data_7_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_7_V_din() {
    res_stream_V_data_7_V_din = tmp_data_7_V_reg_81636.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_7_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_7_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_7_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_8_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_8_V_blk_n = res_stream_V_data_8_V_full_n.read();
    } else {
        res_stream_V_data_8_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_8_V_din() {
    res_stream_V_data_8_V_din = tmp_data_8_V_reg_81641.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_8_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_8_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_8_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_9_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_stream_V_data_9_V_blk_n = res_stream_V_data_9_V_full_n.read();
    } else {
        res_stream_V_data_9_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_9_V_din() {
    res_stream_V_data_9_V_din = tmp_data_9_V_reg_81646.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_res_stream_V_data_9_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op12982.read(), ap_const_logic_1))) {
        res_stream_V_data_9_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_9_V_write = ap_const_logic_0;
    }
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_start_out() {
    start_out = real_start.read();
}

void dense_array_ap_fixed_32u_array_ap_fixed_53_33_5_3_0_32u_config4_s::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

}

