// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s_HH_
#define _dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mul_mul_17ns_13s_28_1_1.h"
#include "myproject_mul_mul_17ns_12s_28_1_1.h"
#include "myproject_mul_mul_17ns_12ns_28_1_1.h"

namespace ap_rtl {

struct dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<17> > data_0_V_read;
    sc_in< sc_lv<17> > data_1_V_read;
    sc_in< sc_lv<17> > data_2_V_read;
    sc_in< sc_lv<17> > data_3_V_read;
    sc_in< sc_lv<17> > data_4_V_read;
    sc_out< sc_lv<18> > ap_return;


    // Module declarations
    dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s(sc_module_name name);
    SC_HAS_PROCESS(dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s);

    ~dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s();

    sc_trace_file* mVcdFile;

    myproject_mul_mul_17ns_13s_28_1_1<1,1,17,13,28>* myproject_mul_mul_17ns_13s_28_1_1_U240;
    myproject_mul_mul_17ns_12s_28_1_1<1,1,17,12,28>* myproject_mul_mul_17ns_12s_28_1_1_U241;
    myproject_mul_mul_17ns_12ns_28_1_1<1,1,17,12,28>* myproject_mul_mul_17ns_12ns_28_1_1_U242;
    myproject_mul_mul_17ns_13s_28_1_1<1,1,17,13,28>* myproject_mul_mul_17ns_13s_28_1_1_U243;
    myproject_mul_mul_17ns_12ns_28_1_1<1,1,17,12,28>* myproject_mul_mul_17ns_12ns_28_1_1_U244;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<18> > add_ln703_3_fu_92_p2;
    sc_signal< sc_lv<18> > add_ln703_3_reg_189;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<28> > mul_ln1118_7_fu_154_p2;
    sc_signal< sc_lv<28> > mul_ln1118_8_fu_161_p2;
    sc_signal< sc_lv<18> > trunc_ln708_3_fu_77_p4;
    sc_signal< sc_lv<18> > add_ln703_2_fu_86_p2;
    sc_signal< sc_lv<18> > trunc_ln708_2_fu_64_p4;
    sc_signal< sc_lv<28> > mul_ln1118_fu_168_p2;
    sc_signal< sc_lv<28> > mul_ln1118_5_fu_175_p2;
    sc_signal< sc_lv<28> > mul_ln1118_6_fu_182_p2;
    sc_signal< sc_lv<18> > trunc_ln708_s_fu_115_p4;
    sc_signal< sc_lv<18> > trunc_ln708_1_fu_128_p4;
    sc_signal< sc_lv<18> > add_ln703_fu_137_p2;
    sc_signal< sc_lv<18> > trunc_ln_fu_102_p4;
    sc_signal< sc_lv<18> > add_ln703_1_fu_143_p2;
    sc_signal< sc_lv<17> > mul_ln1118_7_fu_154_p0;
    sc_signal< sc_lv<13> > mul_ln1118_7_fu_154_p1;
    sc_signal< sc_lv<17> > mul_ln1118_8_fu_161_p0;
    sc_signal< sc_lv<12> > mul_ln1118_8_fu_161_p1;
    sc_signal< sc_lv<17> > mul_ln1118_fu_168_p0;
    sc_signal< sc_lv<12> > mul_ln1118_fu_168_p1;
    sc_signal< sc_lv<17> > mul_ln1118_5_fu_175_p0;
    sc_signal< sc_lv<13> > mul_ln1118_5_fu_175_p1;
    sc_signal< sc_lv<17> > mul_ln1118_6_fu_182_p0;
    sc_signal< sc_lv<12> > mul_ln1118_6_fu_182_p1;
    sc_signal< sc_lv<18> > add_ln703_4_fu_149_p2;
    sc_signal< sc_lv<18> > ap_return_preg;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    sc_signal< sc_lv<28> > mul_ln1118_5_fu_175_p00;
    sc_signal< sc_lv<28> > mul_ln1118_6_fu_182_p00;
    sc_signal< sc_lv<28> > mul_ln1118_7_fu_154_p00;
    sc_signal< sc_lv<28> > mul_ln1118_8_fu_161_p00;
    sc_signal< sc_lv<28> > mul_ln1118_fu_168_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<18> ap_const_lv18_3FFC2;
    static const sc_lv<28> ap_const_lv28_FFFF6D4;
    static const sc_lv<28> ap_const_lv28_FFFF8E6;
    static const sc_lv<28> ap_const_lv28_5CC;
    static const sc_lv<28> ap_const_lv28_FFFF3F6;
    static const sc_lv<28> ap_const_lv28_55B;
    static const sc_lv<18> ap_const_lv18_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln703_1_fu_143_p2();
    void thread_add_ln703_2_fu_86_p2();
    void thread_add_ln703_3_fu_92_p2();
    void thread_add_ln703_4_fu_149_p2();
    void thread_add_ln703_fu_137_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_mul_ln1118_5_fu_175_p0();
    void thread_mul_ln1118_5_fu_175_p00();
    void thread_mul_ln1118_5_fu_175_p1();
    void thread_mul_ln1118_6_fu_182_p0();
    void thread_mul_ln1118_6_fu_182_p00();
    void thread_mul_ln1118_6_fu_182_p1();
    void thread_mul_ln1118_7_fu_154_p0();
    void thread_mul_ln1118_7_fu_154_p00();
    void thread_mul_ln1118_7_fu_154_p1();
    void thread_mul_ln1118_8_fu_161_p0();
    void thread_mul_ln1118_8_fu_161_p00();
    void thread_mul_ln1118_8_fu_161_p1();
    void thread_mul_ln1118_fu_168_p0();
    void thread_mul_ln1118_fu_168_p00();
    void thread_mul_ln1118_fu_168_p1();
    void thread_trunc_ln708_1_fu_128_p4();
    void thread_trunc_ln708_2_fu_64_p4();
    void thread_trunc_ln708_3_fu_77_p4();
    void thread_trunc_ln708_s_fu_115_p4();
    void thread_trunc_ln_fu_102_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif